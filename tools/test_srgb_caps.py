"""Run production GLES caps/format queries: unsupported sRGB must never be advertised."""
import subprocess
import unittest

from test_anisotropy import ROOT, HARNESS, actual
from test_render_thread_cores import function
from tests.host_environment import CLANG, environment

OUT = ROOT / "build/tests/srgb-caps"
FORMAT_FIXTURE = r'''
#define FOURCC(a,b,c,d) ((uint32_t)(a) | (uint32_t)(b)<<8 | (uint32_t)(c)<<16 | (uint32_t)(d)<<24)
enum { D3DRTYPE_SURFACE=1, D3DRTYPE_TEXTURE=3, D3DRTYPE_VOLUMETEXTURE=4,
       D3DRTYPE_VERTEXBUFFER=6, D3DRTYPE_INDEXBUFFER=7,
       D3DUSAGE_RENDERTARGET=1, D3DUSAGE_DEPTHSTENCIL=2, CONV_NONE=0 };
typedef struct { int depth, render_target, block_bytes, is_float, conv; } d3d_format;
static const d3d_format color = {0,1,0,0,CONV_NONE}, depth = {1,0,0,0,CONV_NONE};
static const d3d_format *d3d_format_find(uint32_t format)
{ return format == 21 ? &color : format == 75 ? &depth : NULL; }
/* FORMAT_QUERY */
static void check_srgb(void)
{
    const uint32_t plain[] = {0, D3DUSAGE_RENDERTARGET, 0x00020000u, 0x00100000u, 0x00080000u};
    unsigned queries = 0;
    for (unsigned i = 0; i < sizeof plain/sizeof plain[0]; ++i) {
        assert(format_supported(plain[i], D3DRTYPE_TEXTURE, 21));
        const uint32_t srgb[] = {0x00010000u, 0x00040000u, 0x00050000u};
        for (unsigned j = 0; j < sizeof srgb/sizeof srgb[0]; ++j) {
            assert(!format_supported(plain[i] | srgb[j], D3DRTYPE_TEXTURE, 21));
            assert(!format_supported(D3DUSAGE_DEPTHSTENCIL | srgb[j], D3DRTYPE_SURFACE, 75));
            queries += 2;
        }
    }
    assert(!format_supported(0x00010000u, D3DRTYPE_TEXTURE, 0));
    assert(format_supported(D3DUSAGE_DEPTHSTENCIL, D3DRTYPE_SURFACE, 75));
    arguments[3] = arguments[1] = 0;
    assert(!d3d9_GetDeviceCaps());
    assert(!(MEM32(16) & 0x80u) && !(MEM32(32) & 0x00200000u));
    assert(!dev_GetDeviceCaps());
    assert(!(MEM32(16) & 0x80u) && !(MEM32(32) & 0x00200000u));
    printf("PASS sRGB caps: %u combined format queries, ordinary formats preserved, both caps callers\n", queries);
}
'''


class SrgbCapsTest(unittest.TestCase):
    def test_unsupported_srgb_and_combined_queries(self):
        gl = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        device = (ROOT / "android/host/d3d9_device.c").read_text(encoding="utf-8")
        fixture = FORMAT_FIXTURE.replace("/* FORMAT_QUERY */", function(device, "static int format_supported("))
        source = HARNESS.replace("/* ACTUAL */", actual(gl, device) + fixture)
        source = source.replace('    const char *valid = "GL_EXT_texture_filter_anisotropic";',
                                '    check_srgb();\n    init_calls = 0;\n    const char *valid = "GL_EXT_texture_filter_anisotropic";')
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "probe.c").write_text(source, encoding="utf-8")
        env, linker = environment("x64")
        for command in [
            [CLANG, "/nologo", "/O2", "/W4", "/WX", "/std:c11", "/D_CRT_SECURE_NO_WARNINGS",
             "/clang:--target=x86_64-pc-windows-msvc", "/c", "probe.c", "/Foprobe.obj"],
            [linker, "/nologo", "probe.obj", "/OUT:probe.exe"],
            [OUT / "probe.exe"],
        ]:
            result = subprocess.run(list(map(str, command)), cwd=OUT, env=env, capture_output=True, timeout=60)
            output = (result.stdout + result.stderr).decode(errors="replace")
            self.assertEqual(result.returncode, 0, output)
        self.assertIn("PASS sRGB caps: 30 combined format queries", output)


if __name__ == "__main__":
    unittest.main()
