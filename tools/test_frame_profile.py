"""Verify game-thread wait snapshots survive the render queue and frame diagnostics stay opt-in."""
import subprocess
import unittest

from test_menu_gestures import method
from test_render_thread_cores import ROOT
from tests.host_environment import CLANG, environment

HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>
#define CLOCK_THREAD_CPUTIME_ID 7
#define clock_gettime mock_clock_gettime
typedef struct {uint32_t frame;} d3d_device;
typedef struct {uint64_t magic;} d3d_rt_stats_t;
static uint64_t present_game_cpu_ns,present_game_wait_ns;
static d3d_rt_stats_t present_game_stats;
static d3d_device render_device;
#define RDEV (&render_device)
static int role,queued,done,wait_calls,clocks,logs,gpu_begin_query;
static uint64_t game_cpu=11000000007ull,render_cpu=20000000000ull,mono=100000000000ull;
static char log_text[256];
static int mock_clock_gettime(int id,struct timespec *t){
    assert(id==CLOCK_THREAD_CPUTIME_ID);++clocks;
    uint64_t v=role?render_cpu:game_cpu;t->tv_sec=v/1000000000ull;t->tv_nsec=v%1000000000ull;return 0;
}
static uint64_t void_lock_wait_ns(void){assert(role==0);++wait_calls;return 0x1234;}
static uint64_t void_perf_now_ns(void){return mono;}
static void void_log(const char *fmt,...){
    va_list args;va_start(args,fmt);vsnprintf(log_text,sizeof log_text,fmt,args);va_end(args);++logs;
}
static void d3d_rt_stats(d3d_rt_stats_t *s){assert(!role);s->magic=71;}
static void d3d_rt_sync_state(d3d_device *d){assert(!role&&d->frame==42);}
static void d3d_rt_frame_queued(void){assert(!role);queued=1;}
static void d3d_rt_mirror_frame(uint32_t frame){assert(role);render_device.frame=frame;}
static void gl_present(d3d_device *d){
    assert(role&&d==RDEV&&d->frame==42&&queued);
    assert(present_game_cpu_ns==game_cpu&&present_game_wait_ns==0x1234&&present_game_stats.magic==71);
}
static void d3d_rt_frame_done(void){assert(role);done=1;}
static void d3d_rt_call(void (*fn)(void *),void *data,size_t size){
    unsigned char copy[256];assert(!role&&size<=sizeof copy);memcpy(copy,data,size);memset(data,0,size);
    role=1;fn(copy);role=0;
}
static void d3d_rt_flush(void){assert(!role);}
static void d3d_rt_frame_wait(unsigned n){assert(!role&&n==1&&done);}
/* ACTUAL */
int main(void){
    d3d_device game={42};capture_present(&game);
    assert(wait_calls==1&&done&&render_device.frame==43&&game.frame==42);
    role=1;int previous=clocks;profile_cpu_frame(42);assert(clocks==previous&&!logs);
    gpu_begin_query=1;profile_cpu_frame(42);assert(!logs);
    present_game_cpu_ns+=10000000;present_game_wait_ns+=4000000;render_cpu+=3000000;
    profile_cpu_frame(43);assert(logs==1);
    unsigned frame;unsigned long long at,cpu,wait,render;
    assert(sscanf(log_text,"[frame] %u %llu %llu %llu %llu",&frame,&at,&cpu,&wait,&render)==5);
    assert(frame==43&&at==mono&&cpu==10000000&&wait==4000000&&render==3000000);
    present_game_wait_ns=1;profile_cpu_frame(44);assert(logs==1);
    puts("PASS frame profiling: game TLS captured before queue, render snapshot independent, opt-in and monotonic deltas");
}
'''


class FrameProfileTest(unittest.TestCase):
    def test_production_snapshot_and_deltas(self):
        source = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        record = source[source.index("typedef struct { uint32_t frame; uint64_t game_cpu_ns"):
                        source.index("static void run_present(")]
        capture = method(source, "void d3d_gl_present(")
        tail = capture[capture.rindex("    struct timespec cpu;"):]
        actual = (record + method(source, "static void run_present(") +
                  "\nvoid capture_present(d3d_device *dev){\n" + tail + "\n" +
                  method(source, "static void profile_cpu_frame("))
        out = ROOT / "build/tests/frame-profile"
        out.mkdir(parents=True, exist_ok=True)
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
        self.assertIn("PASS frame profiling", p.stdout)


if __name__ == "__main__":
    unittest.main()
