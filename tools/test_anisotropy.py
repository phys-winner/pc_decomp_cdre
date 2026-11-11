"""Run the production GLES anisotropy discovery, sampler and both caps callers on the host."""
from pathlib import Path
import subprocess
import unittest

from test_render_thread_cores import function
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/anisotropy"
HARNESS = r'''
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
typedef unsigned GLuint, GLenum;
typedef int GLint;
typedef float GLfloat;
enum { GL_NUM_EXTENSIONS, GL_EXTENSIONS, GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT,
       GL_TEXTURE_MAX_ANISOTROPY_EXT, GL_MIRRORED_REPEAT, GL_CLAMP_TO_EDGE,
       GL_CLAMP_TO_BORDER_EXT, GL_REPEAT, GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T,
       GL_TEXTURE_WRAP_R, GL_TEXTURE_BORDER_COLOR_EXT, GL_TEXTURE_MAG_FILTER,
       GL_LINEAR, GL_NEAREST, GL_LINEAR_MIPMAP_NEAREST, GL_NEAREST_MIPMAP_NEAREST,
       GL_LINEAR_MIPMAP_LINEAR, GL_NEAREST_MIPMAP_LINEAR, GL_TEXTURE_MIN_FILTER,
       GL_TEXTURE_MIN_LOD };
static const char *extensions[3];
static int extension_count, limit_queries, sampler_calls;
static float reported_limit, sampled_limit;
static void glGetIntegerv(GLenum e, GLint *v) { assert(e == GL_NUM_EXTENSIONS); *v = extension_count; }
static const unsigned char *glGetStringi(GLenum e, GLuint i)
{ assert(e == GL_EXTENSIONS && i < (GLuint)extension_count); return (const unsigned char *)extensions[i]; }
static void glGetFloatv(GLenum e, GLfloat *v)
{ assert(e == GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT); ++limit_queries; *v = reported_limit; }
static void glGenSamplers(int n, GLuint *s) { assert(n == 1); *s = 1; }
static void glDeleteSamplers(int n, const GLuint *s) { (void)n; (void)s; }
static GLuint unit_sampler[32];
static void glSamplerParameteri(GLuint s, GLenum e, GLint v) { (void)s; (void)e; (void)v; }
static void glSamplerParameterfv(GLuint s, GLenum e, const GLfloat *v) { (void)s; (void)e; (void)v; }
static void glSamplerParameterf(GLuint s, GLenum e, GLfloat v)
{ (void)s; if (e == GL_TEXTURE_MAX_ANISOTROPY_EXT) { ++sampler_calls; sampled_limit = v; } }
static uint32_t memory[80], arguments[4];
#define MEM8(a) (((uint8_t *)memory)[a])
#define MEM32(a) (memory[(a) / 4])
#define ARG(n) arguments[n]
#define COM_METHOD(prefix, name, argc) static uint32_t prefix##_##name(void)
#define D3D_OK 0
#define D3DERR_NOTAVAILABLE 0x8876086Au
static void *g_d3d_device;
static int init_result = 1, init_sets_limit, init_calls, affinity_depth;
static float init_limit;
static void void_native_worker_affinity_begin(void) { ++affinity_depth; }
static void void_native_worker_affinity_end(void) { --affinity_depth; }
static int d3d_gl_init(void);
static struct { uint32_t max_texture, max_3d_texture, max_draw_buffers; } d3d_gl_limits;
/* ACTUAL */
static int d3d_gl_init(void)
{
    assert(affinity_depth == 1);
    ++init_calls;
    if (init_result && init_sets_limit) max_anisotropy = init_limit;
    return init_result;
}
static unsigned cases;
static void caps(uint32_t expected)
{
    arguments[3] = arguments[1] = 0;
    assert(d3d9_GetDeviceCaps() == D3D_OK && MEM32(108) == expected);
    memset(memory, 0, sizeof memory);
    assert(dev_GetDeviceCaps() == D3D_OK && MEM32(108) == expected);
}
static void check(const char *extension, float limit, uint32_t requested, uint32_t filter,
                  float expected, uint32_t cap, int query, int call)
{
    extensions[0] = "GL_other_extension"; extensions[1] = extension;
    extension_count = 2; reported_limit = limit;
    limit_queries = sampler_calls = sampler_count = 0; sampled_limit = 0;
    find_anisotropy();
    uint32_t ss[14] = {0};
    ss[5] = ss[6] = filter; ss[10] = requested;
    assert(sampler_for(ss, 0, 1, 0));
    assert(limit_queries == query && sampler_calls == call);
    if (call) assert(sampled_limit == expected);
    caps(cap);
    ++cases;
}
int main(void)
{
    const char *valid = "GL_EXT_texture_filter_anisotropic";
    assert(d3d_gl_max_anisotropy() == 1);
    init_sets_limit = 1; init_limit = 16;
    caps(16); /* GetDeviceCaps initializes GL even before CreateDevice. */
    assert(init_calls == 1 && !affinity_depth);
    init_result = 0;
    memset(memory, 0xA5, sizeof memory);
    assert(d3d9_GetDeviceCaps() == D3DERR_NOTAVAILABLE && !affinity_depth);
    for (unsigned i = 0; i < sizeof memory/sizeof memory[0]; ++i) assert(memory[i] == 0xA5A5A5A5u);
    init_result = 1; init_limit = 1;
    caps(1); /* A real unsupported GPU still reports 1. */
    init_sets_limit = 0;
    check(NULL, 16, 16, 3, 0, 1, 0, 0);
    check("GL_EXT_texture_filter_anisotropic_extra", 16, 16, 3, 0, 1, 0, 0);
    check(valid, 8, 16, 3, 8, 8, 1, 1);
    check(valid, 16, 4, 3, 4, 16, 1, 1);
    check(valid, 16, 0, 3, 1, 16, 1, 1);
    check(valid, 8, 16, 2, 1, 8, 1, 1);
    check(valid, 1, 16, 3, 0, 1, 1, 0);
    check(valid, 0, 16, 3, 0, 1, 1, 0);
    check(valid, NAN, 16, 3, 0, 1, 1, 0);
    check(valid, INFINITY, 16, 3, 0, 1, 1, 0);
    printf("PASS anisotropy: %u capability/sampler cases and both GetDeviceCaps callers\n", cases);
    return 0;
}
'''


def actual(gl, device):
    start = gl.index("static float max_anisotropy")
    end = gl.index("static uint32_t trace_frame", start)
    code = gl[start:end]
    start = gl.index("typedef struct { uint32_t key[9]")
    end = gl.index("static GLenum address", start)
    code += gl[start:end] + function(gl, "static GLenum address(")
    code += function(gl, "static GLuint sampler_for(")
    start = device.index("static const char pc_caps_hex")
    end = device.index("typedef struct { void_com_object", start)
    code += device[start:end] + function(device, "static int hex_digit(")
    code += function(device, "static void fill_caps(")
    code += function(device, "COM_METHOD(d3d9, GetDeviceCaps,")
    code += function(device, "COM_METHOD(dev, GetDeviceCaps,")
    return code


class AnisotropyTest(unittest.TestCase):
    def test_capability_sampler_and_caps(self):
        gl = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        device = (ROOT / "android/host/d3d9_device.c").read_text(encoding="utf-8")
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "probe.c").write_text(HARNESS.replace("/* ACTUAL */", actual(gl, device)), encoding="utf-8")
        env, linker = environment("x64")
        commands = [
            [CLANG, "/nologo", "/O2", "/W4", "/WX", "/std:c11", "/D_CRT_SECURE_NO_WARNINGS",
             "/clang:--target=x86_64-pc-windows-msvc", "/c", "probe.c", "/Foprobe.obj"],
            [linker, "/nologo", "probe.obj", "/OUT:probe.exe"],
            [OUT / "probe.exe"],
        ]
        for command in commands:
            result = subprocess.run(list(map(str, command)), cwd=OUT, env=env, capture_output=True, timeout=60)
            output = (result.stdout + result.stderr).decode(errors="replace")
            self.assertEqual(result.returncode, 0, output)
        self.assertIn("PASS anisotropy: 10", output)
        self.assertIn("    find_anisotropy();", function(gl, "static int gl_init("))


if __name__ == "__main__":
    unittest.main()
