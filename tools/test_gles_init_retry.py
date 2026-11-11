"""Inject EGL surface/current failures into the actual gl_init and verify cleanup plus retry."""
import subprocess
import unittest

from test_render_thread_cores import ROOT, function
from tests.host_environment import CLANG, environment

OUT = ROOT / "build/tests/gles-init-retry"
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _Atomic
#define atomic_store(p, v) (*(p) = (v))
typedef uintptr_t EGLDisplay, EGLContext, EGLSurface, EGLConfig, EGLNativeWindowType;
typedef int EGLint, GLint;
typedef unsigned GLuint, GLenum;
#define EGL_NO_DISPLAY 0
#define EGL_NO_CONTEXT 0
#define EGL_NO_SURFACE 0
#define EGL_DEFAULT_DISPLAY 0
enum { EGL_SURFACE_TYPE=1, EGL_WINDOW_BIT=2, EGL_PBUFFER_BIT=4, EGL_RENDERABLE_TYPE=5,
    EGL_OPENGL_ES3_BIT_KHR, EGL_RED_SIZE, EGL_GREEN_SIZE, EGL_BLUE_SIZE, EGL_ALPHA_SIZE,
    EGL_DEPTH_SIZE, EGL_STENCIL_SIZE, EGL_NONE, EGL_CONTEXT_CLIENT_VERSION,
    EGL_CONTEXT_MINOR_VERSION_KHR, EGL_WIDTH, EGL_HEIGHT, GL_VENDOR, GL_RENDERER, GL_VERSION,
    GL_MAX_TEXTURE_SIZE, GL_MAX_3D_TEXTURE_SIZE, GL_MAX_DRAW_BUFFERS, GL_EXTENSIONS,
    GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS, GL_UNPACK_ALIGNMENT, GL_PACK_ALIGNMENT };
static EGLDisplay egl_display;
static EGLContext egl_context;
static EGLSurface egl_surface, egl_pbuffer;
static EGLConfig egl_config;
static uint32_t egl_window_serial, trace_frame;
static GLuint vao, upload_unit;
static int raster_state_valid, window_mode, egl_swap_interval=1, dump_every;
static _Atomic int surface_live;
static struct { uint32_t max_texture, max_3d_texture, max_draw_buffers; int astc_ldr; } d3d_gl_limits;
static float max_anisotropy=1;
static int has_window, failure, initializations, contexts, surfaces, destroyed_surfaces, destroyed_contexts, terminated;
static int window_refs, window_acquired, window_released, acquire_calls;
static void void_log(const char *format, ...) { (void)format; }
static EGLDisplay eglGetDisplay(int display) { (void)display; return 1; }
static int eglInitialize(EGLDisplay d, void *a, void *b) { (void)d; (void)a; (void)b; ++initializations; return failure!=6; }
static int eglChooseConfig(EGLDisplay d, const EGLint *a, EGLConfig *c, int size, EGLint *n)
{ (void)d; (void)a; (void)size; *c=2; *n=failure==4?0:1; return failure!=4; }
static EGLContext eglCreateContext(EGLDisplay d, EGLConfig c, EGLContext share, const EGLint *a)
{ (void)d; (void)c; (void)share; (void)a; if(failure==5)return 0; ++contexts; return 3; }
static void *void_android_window_acquire(uint32_t *serial, int wait)
{ (void)wait; ++acquire_calls; *serial=1; if(!has_window)return NULL; ++window_refs; ++window_acquired; return (void *)(uintptr_t)1; }
static void void_android_window_release(void *window)
{ if(window){assert(window==(void *)(uintptr_t)1 && window_refs==1); --window_refs; ++window_released;} }
static EGLSurface eglCreateWindowSurface(EGLDisplay d, EGLConfig c, EGLNativeWindowType w, void *a)
{ (void)d; (void)c; (void)a; assert(w==1 && window_refs==1); if(failure==1)return 0; ++surfaces; return 4; }
static EGLSurface eglCreatePbufferSurface(EGLDisplay d, EGLConfig c, const EGLint *a)
{ (void)d; (void)c; (void)a; if(failure==2)return 0; ++surfaces; return 5; }
static int eglMakeCurrent(EGLDisplay d, EGLSurface a, EGLSurface b, EGLContext c)
{ (void)d; (void)a; (void)b; (void)c; return failure!=3; }
static int eglDestroySurface(EGLDisplay d, EGLSurface s)
{ assert(d && s); ++destroyed_surfaces; return 1; }
static int eglDestroyContext(EGLDisplay d, EGLContext c)
{ assert(d && c); ++destroyed_contexts; return 1; }
static int eglTerminate(EGLDisplay d) { assert(d); ++terminated; return 1; }
static int eglGetError(void) { return 0xBAD; }
static int eglSwapInterval(EGLDisplay d, int interval) { (void)d; (void)interval; return 1; }
static void glGenVertexArrays(int n, GLuint *v) { assert(n==1); *v=9; }
static void glBindVertexArray(GLuint v) { (void)v; }
static const unsigned char *glGetString(GLenum e) { (void)e; return (const unsigned char *)""; }
static void glGetIntegerv(GLenum e, GLint *v)
{ *v=e==GL_MAX_DRAW_BUFFERS ? 4 : e==GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS ? 32 : 16384; }
static void glPixelStorei(GLenum e, GLint v) { (void)e; (void)v; }
static void find_anisotropy(void) {}
static void find_multisample_modes(void) {}
/* ACTUAL */
int main(void)
{
    unsigned cases=0;
    for (int window=0;window<2;++window) for (int fail=1;fail<=3;++fail) {
        if(!window && fail==1)continue;
        egl_display=egl_context=egl_surface=egl_pbuffer=egl_config=0; vao=0;
        initializations=contexts=surfaces=destroyed_surfaces=destroyed_contexts=terminated=0;
        window_refs=window_acquired=window_released=acquire_calls=0;
        has_window=window;failure=fail;
        assert(!gl_init());
        assert(!egl_context && !egl_surface && !egl_pbuffer && !egl_display);
        assert(destroyed_contexts==1 && destroyed_surfaces==surfaces && terminated==1);
        assert(!window_refs && window_acquired==window_released && window_acquired==window);
        failure=0;
        assert(gl_init());
        assert(contexts==2 && initializations==2 && vao==9 && egl_context && egl_surface);
        assert(!window || egl_pbuffer);
        assert(!window_refs && window_acquired==window_released && window_acquired==window*2);
        int calls=acquire_calls;
        assert(gl_init() && contexts==2 && initializations==2); /* Only a successfully initialized context is reused. */
        assert(acquire_calls==calls && !window_refs);
        ++cases;
    }
    printf("PASS EGL retry: %u window/headless surface/current failures, exact cleanup, successful retry, idempotent reuse\n",cases);
    unsigned early=0;
    for(int window=0;window<2;++window)for(int fail=4;fail<=6;++fail){
        egl_display=egl_context=egl_surface=egl_pbuffer=egl_config=0;vao=0;
        initializations=contexts=surfaces=destroyed_surfaces=destroyed_contexts=terminated=0;
        window_refs=window_acquired=window_released=acquire_calls=0;
        has_window=window;failure=fail;
        assert(!gl_init() && !egl_context && !egl_surface && !egl_pbuffer);
        assert(!window_refs && window_acquired==window_released && window_acquired==(fail==6?0:window));
        assert(!contexts && !surfaces && !destroyed_contexts && !destroyed_surfaces);
        failure=0;assert(gl_init() && contexts==1 && egl_context && egl_surface);
        assert(!window_refs && window_acquired==window_released);
        int calls=acquire_calls;assert(gl_init() && contexts==1 && acquire_calls==calls);
        ++early;
    }
    printf("PASS retained-window retry: %u window/headless configuration/context/display failures, balanced ownership before/after retry\n",early);
    return 0;
}
'''


class GlesInitRetryTest(unittest.TestCase):
    def test_production_cleanup_and_retry(self):
        source = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        actual = function(source, "static int gl_init(")
        OUT.mkdir(parents=True, exist_ok=True)
        env, linker = environment("x64")
        (OUT / "probe.c").write_text(HARNESS.replace("/* ACTUAL */", actual), encoding="utf-8")
        for command in [
            [CLANG, "/nologo", "/O2", "/W4", "/WX", "/std:c11", "/D_CRT_SECURE_NO_WARNINGS",
             "/clang:--target=x86_64-pc-windows-msvc", "/c", "probe.c", "/Foprobe.obj"],
            [linker, "/nologo", "probe.obj", "/OUT:probe.exe"],
            [OUT / "probe.exe"],
        ]:
            result = subprocess.run(list(map(str, command)), cwd=OUT, env=env, capture_output=True, timeout=60)
            output = (result.stdout + result.stderr).decode(errors="replace")
            self.assertEqual(result.returncode, 0, output)
        self.assertIn("PASS EGL retry: 5", output)
        self.assertIn("PASS retained-window retry: 6", output)


if __name__ == "__main__":
    unittest.main()
