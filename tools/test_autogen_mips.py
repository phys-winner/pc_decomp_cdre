"""Host-check production AUTOGEN invalidation and GL generation guards; GPU integration has a native fixture."""
from pathlib import Path
import subprocess
import unittest

from test_render_thread_cores import function
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/autogen-mips"
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#define D3DUSAGE_AUTOGENMIPMAP 0x400u
typedef unsigned GLenum;
typedef struct { uint32_t usage, levels, gl, rt_native, target; int mips_dirty; } d3d_texture;
typedef struct { d3d_texture *container; uint32_t level; } d3d_surface;
typedef struct { d3d_surface *rt[4], *backbuffer, *auto_depth; } d3d_device;
#define TEX_RT(t) (t)
static int scene_phase, scene_promoted;
static d3d_surface *scene_color, *scene_depth;
static unsigned generated;
static void d3d_gl_upload_unit(void) {}
static void glBindTexture(GLenum t, unsigned g) { (void)t; (void)g; }
static void glGenerateMipmap(GLenum t) { (void)t; ++generated; }
/* ACTUAL */
int main(void)
{
    d3d_texture t = {D3DUSAGE_AUTOGENMIPMAP, 4, 1, 0, 0, 0};
    d3d_surface base = {&t, 0}, level = {&t, 1}, standalone = {0};
    surface_written(NULL); surface_written(&standalone); surface_written(&level);
    assert(!t.mips_dirty);
    t.usage = 0; surface_written(&base); assert(!t.mips_dirty);
    t.usage = D3DUSAGE_AUTOGENMIPMAP; surface_written(&base); assert(t.mips_dirty);
    gl_generate_mips(&t); assert(generated == 1 && !t.mips_dirty);
    t.rt_native = 1; t.mips_dirty = 1; gl_generate_mips(&t); assert(generated == 1);
    t.rt_native = 0; t.gl = 0; gl_generate_mips(&t); assert(generated == 1);
    t.gl = 1; t.levels = 1; gl_generate_mips(&t); assert(generated == 1);
    t.levels = 4; t.mips_dirty = 0;
    d3d_device d = {0};
    for (int slot = 0; slot < 4; ++slot) {
        d.rt[slot] = &base; targets_written(&d); assert(t.mips_dirty);
        t.mips_dirty = 0; d.rt[slot] = NULL;
    }
    /* A reduced scene is the actual destination before UI promotion. */
    d.rt[0] = d.backbuffer = &base; scene_color = &standalone;
    targets_written(&d); assert(!t.mips_dirty);
    scene_promoted = 1; targets_written(&d); assert(t.mips_dirty);
    puts("PASS AUTOGEN: surface filters, all four targets, scene routing and GL generation guards");
    return 0;
}
'''


class AutogenMipsTest(unittest.TestCase):
    def test_production_invalidation_and_generation(self):
        gl = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        resource = (ROOT / "android/host/d3d9_resource.c").read_text(encoding="utf-8")
        names = ["static d3d_surface *ui_surface(", "static void surface_written(", "static void targets_written("]
        actual = "\n".join(function(gl, name) for name in names)
        actual += function(resource, "static void gl_generate_mips(")
        OUT.mkdir(parents=True, exist_ok=True)
        env, linker = environment("x64")
        for name, code, expected in [
            ("probe", actual, 0),
            ("negative", actual.replace(function(gl, names[1]), "static void surface_written(d3d_surface *s) { (void)s; }\n"), 1),
        ]:
            (OUT / f"{name}.c").write_text(HARNESS.replace("/* ACTUAL */", code), encoding="utf-8")
            commands = [
                [CLANG, "/nologo", "/O2", "/W4", "/WX", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
                 "/c", f"{name}.c", f"/Fo{name}.obj"],
                [linker, "/nologo", f"{name}.obj", f"/OUT:{name}.exe"],
            ]
            for command in commands:
                result = subprocess.run(list(map(str, command)), cwd=OUT, env=env, capture_output=True, timeout=60)
                self.assertEqual(result.returncode, 0, (result.stdout + result.stderr).decode(errors="replace"))
            result = subprocess.run([str(OUT / f"{name}.exe")], cwd=OUT, env=env, capture_output=True, timeout=60)
            self.assertEqual(result.returncode != 0, bool(expected))
            if not expected:
                self.assertIn(b"PASS AUTOGEN", result.stdout)


if __name__ == "__main__":
    unittest.main()
