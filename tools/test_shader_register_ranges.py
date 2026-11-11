"""Execute range-sensitive shaders after the production GLSL postprocessor.

The small scalar/vector C++ adapter evaluates the generated assignments, not a
second implementation of the source transformation. No GPU fidelity is claimed.
"""
import os
import re
import subprocess
import unittest
from pathlib import Path

from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/shader-register-ranges"
VERTEX = """#version 300 es
in vec4 vs_v0;
in vec4 vs_v1;
out highp vec4 io_10_0;
out highp vec4 io_10_1;
#define vs_oD0 io_10_0
#define vs_oD1 io_10_1
void main()
{
    vs_oD0 = vs_v0;
    vs_oD1 = vs_v1;
    if (vs_v0.x < 0.0) { return; }
}
void helper_after_main() { }
"""
PIXEL = """#version 300 es
precision mediump float;
uniform vec4 ps_uniforms_vec4[1];
#define ps_c0 ps_uniforms_vec4[0]
const vec4 ps_c1 = vec4(2.0, -3.0, 0.25, 0.5);
vec4 ps_r0;
vec4 ps_r1;
void main()
{
    ps_r0 = ps_c0;
    ps_r1 = -ps_c1;
}
"""
ADAPTER = r"""
#include <stdio.h>
struct vec4 {
    float x,y,z,w;
    vec4():x(0),y(0),z(0),w(0){}
    vec4(float a,float b,float c,float d):x(a),y(b),z(c),w(d){}
};
static float bounded(float v,float low,float high){return v<low?low:v>high?high:v;}
static vec4 clamp(vec4 v,float low,float high){
    return {bounded(v.x,low,high),bounded(v.y,low,high),
            bounded(v.z,low,high),bounded(v.w,low,high)};
}
static vec4 operator-(vec4 v){return {-v.x,-v.y,-v.z,-v.w};}
"""


class ShaderRangesTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        OUT.mkdir(parents=True, exist_ok=True)
        cls.env, cls.linker = environment("x64")
        source = Path(os.environ.get("CRASHDAY_TEST_SHADER", ROOT / "android/host/d3d9_shader.c")).read_text(encoding="utf-8")
        actual = source[source.index("static char *insert_before("):source.index("static uint8_t *with_synthetic_ctab(")]
        call = "patch_source(src, atoi(argv[1]), atoi(argv[2]))" if "int pixel, int major)" in actual else "patch_source(src, atoi(argv[1]))"
        harness = "#include <stdint.h>\n#include <stdlib.h>\n#include <stdio.h>\n#include <string.h>\n#include <ctype.h>\n" + actual + """
int main(int argc,char **argv) {
    char src[65536]; size_t n=fread(src,1,sizeof(src)-1,stdin); src[n]=0;
    char *out=CALL; fputs(out,stdout); free(out); return 0;
}
""".replace("CALL", call)
        (OUT / "patch.c").write_text(harness, encoding="utf-8")
        cls.compile("patch.c", "patch", False)

    @classmethod
    def compile(cls, filename, name, cpp):
        args = [str(CLANG), "/nologo", "/O2", "/clang:--target=x86_64-pc-windows-msvc", "/std:c++17" if cpp else "/std:c11", "/c", filename, f"/Fo{name}.obj"]
        for command in (args, [str(cls.linker), "/nologo", f"{name}.obj", f"/OUT:{name}.exe"]):
            p = subprocess.run(command, cwd=OUT, env=cls.env, capture_output=True, text=True)
            if p.returncode: raise AssertionError(p.stdout + p.stderr)

    def transform(self, source, pixel, major):
        p = subprocess.run([str(OUT / "patch.exe"), str(pixel), str(major)], input=source, cwd=OUT, env=self.env, capture_output=True, text=True, check=True)
        return p.stdout

    def evaluate(self, source, main, name):
        # Only discard GLSL declarations/qualifiers that have no numerical role.
        source = re.sub(r"^#version[^\n]*\n|^precision[^\n]*\n", "", source, flags=re.M)
        source = re.sub(r"\b(?:in|out|uniform|highp)\s+", "", source)
        source = source.replace("void main()", "void shader_main()")
        (OUT / f"{name}.cpp").write_text(ADAPTER + source + main, encoding="utf-8")
        self.compile(f"{name}.cpp", name, True)
        p = subprocess.run([str(OUT / f"{name}.exe")], cwd=OUT, env=self.env, capture_output=True, text=True, check=True)
        return [float(x) for x in p.stdout.split()]

    def test_vertex_before_interpolation_and_early_return(self):
        main = r'''
int main() {
    vs_v0=vec4(2,-2,0.5,4);vs_v1=vec4(-1,3,0.25,1);shader_main();
    float midpoint=io_10_0.x*0.5f; // other vertex is zero: clamp BEFORE interpolation
    printf("%g %g %g %g ",midpoint,io_10_0.y,io_10_1.x,io_10_1.y);
    vs_v0=vec4(-2,4,0,0);shader_main(); // nested early return also emits colors
    printf("%g %g",io_10_0.x,io_10_0.y);
}
'''
        for major in (1, 2, 3):
            with self.subTest(major=major):
                got = self.evaluate(self.transform(VERTEX, 0, major), main, f"vs{major}")
                self.assertEqual(got, [0.5, 0, 0, 1, 0, 1] if major < 3 else [1, -2, -1, 3, -2, 4])

    def test_pixel_uniform_and_def_before_source_modifier(self):
        main = r'''
int main() {
    ps_uniforms_vec4[0]=vec4(2,-2,0.5,0.25);shader_main();
    printf("%g %g %g %g %g %g",ps_r0.x,ps_r0.y,ps_r0.z,ps_r1.x,ps_r1.y,ps_r1.z);
}
'''
        for major in (1, 2, 3):
            with self.subTest(major=major):
                got = self.evaluate(self.transform(PIXEL, 1, major), main, f"ps{major}")
                self.assertEqual(got, [1, -1, 0.5, -1, 1, -0.25] if major == 1 else [2, -2, 0.5, -2, 3, -0.25])

    def test_non_register_macros_and_post_main_helper_unchanged(self):
        src = VERTEX.replace("void helper_after_main() { }", "void helper_after_main() { return; }")
        out = self.transform(src, 0, 2)
        self.assertIn("void helper_after_main() { return; }", out)
        out = self.transform(PIXEL + "#define ps_c0_texbem ps_uniforms_vec4[0]\n", 1, 1)
        self.assertIn("#define ps_c0_texbem ps_uniforms_vec4[0]\n", out)
        self.assertEqual(self.transform("void main() { }\n", 0, 2), "void main() { }\n")

    def test_generated_glsl_compiles(self):
        glslc = CLANG.parents[5] / "shader-tools/windows-x86_64/glslc.exe"
        if not glslc.is_file(): self.skipTest("NDK glslc is unavailable")
        for source, pixel, major in ((VERTEX, 0, 1), (VERTEX, 0, 2), (VERTEX, 0, 3),
                                     (PIXEL, 1, 1), (PIXEL, 1, 2), (PIXEL, 1, 3)):
            suffix = "frag" if pixel else "vert"
            filename = OUT / f"compile-{pixel}-{major}.{suffix}"
            filename.write_text(self.transform(source, pixel, major), encoding="utf-8")
            p = subprocess.run([str(glslc), "--target-env=opengl", "-fauto-map-locations", "-fauto-bind-uniforms",
                                str(filename), "-o", str(filename.with_suffix(".spv"))],
                               env=self.env, capture_output=True, text=True)
            self.assertEqual(p.returncode, 0, p.stdout + p.stderr)


if __name__ == "__main__":
    unittest.main()
