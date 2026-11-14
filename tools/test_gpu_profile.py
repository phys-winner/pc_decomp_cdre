"""Exercise production asynchronous GPU timings without a GL driver."""
import subprocess
import unittest

from test_render_thread_cores import ROOT
from tests.host_environment import CLANG, environment

HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
typedef unsigned GLenum, GLuint;
typedef int GLint;
typedef uint64_t GLuint64;
typedef void *GLsync;
typedef void (*PFNGLBEGINQUERYEXTPROC)(GLenum, GLuint);
typedef void (*PFNGLENDQUERYEXTPROC)(GLenum);
typedef void (*PFNGLGETQUERYOBJECTUI64VEXTPROC)(GLuint, GLenum, GLuint64*);
enum { GL_TIME_ELAPSED_EXT=1, GL_QUERY_COUNTER_BITS_EXT, GL_GPU_DISJOINT_EXT,
       GL_QUERY_RESULT_AVAILABLE, GL_QUERY_RESULT, GL_SYNC_GPU_COMMANDS_COMPLETE,
       GL_ALREADY_SIGNALED, GL_CONDITION_SATISFIED, GL_TIMEOUT_EXPIRED };
static const char *data_dir="./userdata-GPU_TEST";
static uint64_t now_ns=1000, elapsed=10;
static unsigned begins, ends, results, reports, discarded, bad_times;
static int fence_ready, fence_fail, disjoint, bits=64, functions=1;
static unsigned fences, deleted;
static int active;
static const char *void_data_dir(void) { return data_dir; }
static uint64_t void_perf_now_ns(void) { return now_ns; }
static void void_log(const char *fmt, ...) {
    if (strstr(fmt,"render_ns")) ++reports;
    if (strstr(fmt,"disjoint at")) ++discarded;
    if (strstr(fmt,"exceeds host")) ++bad_times;
}
static void begin(GLenum e,GLuint q) { assert(e==GL_TIME_ELAPSED_EXT && !active && q); active=1; ++begins; }
static void end(GLenum e) { assert(e==GL_TIME_ELAPSED_EXT && active); active=0; ++ends; }
static void result(GLuint q,GLenum e,GLuint64 *v) { assert(q && e==GL_QUERY_RESULT && fence_ready); *v=elapsed; ++results; }
static void *eglGetProcAddress(const char *name) {
    if (!functions) return NULL;
    if (!strcmp(name,"glBeginQueryEXT")) return (void*)begin;
    if (!strcmp(name,"glEndQueryEXT")) return (void*)end;
    assert(!strcmp(name,"glGetQueryObjectui64vEXT")); return (void*)result;
}
static void glGetQueryiv(GLenum e,GLenum p,GLint *v) { assert(e==GL_TIME_ELAPSED_EXT && p==GL_QUERY_COUNTER_BITS_EXT); *v=bits; }
static void glGetIntegerv(GLenum e,GLint *v) { assert(e==GL_GPU_DISJOINT_EXT); *v=disjoint; disjoint=0; }
static void glGenQueries(unsigned n,GLuint *q) { for(unsigned i=0;i<n;++i)q[i]=i+1; }
static void glGetQueryObjectuiv(GLuint q,GLenum e,GLuint *v) { (void)q; (void)e; (void)v; assert(!"Mali availability path must not be used"); }
static GLsync glFenceSync(GLenum e,unsigned flags) { assert(e==GL_SYNC_GPU_COMMANDS_COMPLETE && !flags); return fence_fail?NULL:(void*)(uintptr_t)++fences; }
static GLenum glClientWaitSync(GLsync fence,unsigned flags,uint64_t timeout) { assert(fence && !flags && !timeout); return fence_ready?GL_ALREADY_SIGNALED:GL_TIMEOUT_EXPIRED; }
static void glDeleteSync(GLsync fence) { assert(fence); ++deleted; }
/* ACTUAL */
int main(void) {
    remove("./userdata-GPU_TEST/gpu-profile");
    gpu_profile_init("GL_EXT_disjoint_timer_query"); assert(!gpu_begin_query);
    FILE *f=fopen("./userdata-GPU_TEST/gpu-profile","wb"); assert(f); fclose(f);
    data_dir="./userdata"; gpu_profile_init("GL_EXT_disjoint_timer_query"); assert(!gpu_begin_query);
    data_dir="./userdata-GPU_TEST";
    gpu_profile_init(NULL); assert(!gpu_begin_query);
    gpu_profile_init("GL_EXT_other"); assert(!gpu_begin_query);
    functions=0; gpu_profile_init("GL_EXT_disjoint_timer_query"); assert(!gpu_begin_query); functions=1;
    bits=0; gpu_profile_init("GL_EXT_disjoint_timer_query"); assert(!gpu_begin_query); bits=64;
    gpu_profile_init("GL_EXT_disjoint_timer_query"); assert(gpu_begin_query);
    for(unsigned frame=0;frame<GPU_PROFILE_QUERIES;++frame) {
        gpu_profile_begin(frame); gpu_profile_begin(frame); ++now_ns; gpu_profile_end(frame);
    }
    assert(begins==GPU_PROFILE_QUERIES && ends==begins && !results && !reports);
    gpu_profile_begin(9); gpu_profile_end(9); assert(begins==GPU_PROFILE_QUERIES);
    now_ns+=1000; gpu_profile_end(10); assert(!results);
    fence_ready=1; gpu_profile_end(10);
    assert(results==GPU_PROFILE_QUERIES && reports==results);
    gpu_profile_begin(11); fence_ready=0; gpu_profile_end(11);
    gpu_profile_begin(12); disjoint=1; gpu_profile_end(12); assert(discarded==1);
    unsigned previous=results; fence_ready=1; gpu_profile_end(13); assert(results==previous);
    gpu_profile_begin(14); now_ns+=20; gpu_profile_end(14); assert(results==previous+1 && reports==results);
    gpu_profile_begin(15); elapsed=1000000; gpu_profile_end(15); assert(bad_times==1 && reports+1==results);
    assert(!active && begins==ends);
    assert(fences==deleted);
    fence_fail=1; gpu_profile_begin(16); gpu_profile_end(16); assert(!gpu_begin_query);
    remove("./userdata-GPU_TEST/gpu-profile");
    puts("PASS GPU profiling: opt-in, extension guards, full queue, availability, disjoint, timer bounds");
}
'''


class GpuProfileTest(unittest.TestCase):
    def test_production_async_queue(self):
        source = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        actual = source[source.index("/* Opt-in GPU render-span"):source.index("/* The Android activity")]
        out = ROOT / "build/tests/gpu-profile"
        (out / "userdata-GPU_TEST").mkdir(parents=True, exist_ok=True)
        (out / "probe.c").write_text(HARNESS.replace("/* ACTUAL */", actual), encoding="utf-8")
        env, linker = environment("x64")
        for command in (
            [CLANG, "/nologo", "/O2", "/std:c11", "/D_CRT_SECURE_NO_WARNINGS",
             "/clang:--target=x86_64-pc-windows-msvc", "/c", "probe.c", "/Foprobe.obj"],
            [linker, "/nologo", "probe.obj", "/OUT:probe.exe"],
            [out / "probe.exe"],
        ):
            p = subprocess.run(list(map(str, command)), cwd=out, env=env,
                               capture_output=True, text=True, timeout=60)
            self.assertEqual(p.returncode, 0, p.stdout + p.stderr)
        self.assertIn("PASS GPU profiling", p.stdout)


if __name__ == "__main__":
    unittest.main()
