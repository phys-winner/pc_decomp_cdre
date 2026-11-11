"""Execute the production surface acknowledgement and retained-window boundary."""
from pathlib import Path
import subprocess
import unittest

from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/surface-lifecycle"
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stddef.h>
#include <time.h>
#include <errno.h>
typedef int pthread_mutex_t, pthread_cond_t, pthread_once_t, pthread_condattr_t;
#define PTHREAD_ONCE_INIT 0
#define CLOCK_MONOTONIC 1
static int locked, wait_calls, behavior, input_cancelled, released, acknowledged_in_wait;
static pthread_mutex_t window_lock;
static pthread_cond_t window_cond;
static void pthread_mutex_lock(int *x){(void)x;assert(!locked);locked=1;}
static void pthread_mutex_unlock(int *x){(void)x;assert(locked);locked=0;}
static int pthread_condattr_init(int *x){*x=0;return 0;}
static int pthread_condattr_setclock(int *x,int clock){assert(clock==CLOCK_MONOTONIC);*x=clock;return 0;}
static int pthread_cond_init(int *x,int *attr){assert(*attr==CLOCK_MONOTONIC);*x=*attr;return 0;}
static void pthread_condattr_destroy(int *x){(void)x;}
static void pthread_once(int *once,void (*fn)(void)){if(!*once){fn();*once=1;}}
static void pthread_cond_broadcast(int *x){(void)x;assert(locked);}
static void pthread_cond_wait(int *a,int *b){(void)a;(void)b;assert(0);}
static int clock_gettime(int clock,struct timespec *t){assert(clock==CLOCK_MONOTONIC);t->tv_sec=123;t->tv_nsec=456;return 0;}
void void_android_window_ack(uint32_t serial);
static int pthread_cond_timedwait(int *cond,int *mutex,const struct timespec *deadline){
 assert(locked&&*cond==CLOCK_MONOTONIC&&mutex==&window_lock);assert(deadline->tv_sec==124&&deadline->tv_nsec==456);
 ++wait_calls;locked=0;
 if(behavior==1){void_android_window_ack((uint32_t)acknowledged_in_wait);locked=1;return 0;}
 locked=1;return behavior==2&&wait_calls<3?0:ETIMEDOUT;
}
typedef struct {int refs,w,h;} ANativeWindow;
static ANativeWindow *window;
static void ANativeWindow_acquire(ANativeWindow *w){assert(locked);++w->refs;}
static void ANativeWindow_release(ANativeWindow *w){assert(!locked);--w->refs;++released;}
static int ANativeWindow_getWidth(ANativeWindow *w){return w->w;}
static int ANativeWindow_getHeight(ANativeWindow *w){return w->h;}
typedef void JNIEnv;typedef void *jclass;typedef ANativeWindow *jobject;
#define JNIEXPORT
#define JNICALL
#define RTLD_DEFAULT 0
static void *dlsym(int ignored,const char *name){(void)ignored;(void)name;return NULL;}
static ANativeWindow *ANativeWindow_fromSurface(JNIEnv *e,jobject s){(void)e;++s->refs;return s;}
static void void_input_set_screen_size(int w,int h){assert(w>0&&h>0);}
static void void_log(const char *f,...){(void)f;}
static int display_width,display_height,game_started=1;
static float selected_refresh=60;
static void release_input(void){assert(!locked);++input_cancelled;}
/* DECLARATIONS */
/* HELPERS */
/* NATIVE */
int main(void){
 ANativeWindow first={1,1280,720};window=&first;window_serial=1;
 uint32_t serial;void *snapshot=void_android_window_acquire(&serial,0);
 assert(snapshot==&first&&serial==1&&first.refs==2);
 behavior=1;acknowledged_in_wait=2;
 Java_org_crashday_port_GameActivity_nativeSurface(NULL,NULL,NULL);
 assert(!window&&window_serial==2&&window_acked==2&&input_cancelled==1&&wait_calls==1);
 assert(first.refs==1&&!locked);void_android_window_release(snapshot);assert(first.refs==0);
 void_android_window_ack(1);assert(window_acked==2);
 wait_calls=0;assert(wait_window_ack(2)&&wait_calls==0);
 behavior=2;wait_calls=0;assert(!wait_window_ack(3)&&wait_calls==3&&!locked);
 first.refs=1;window=&first;window_serial=3;behavior=0;wait_calls=0;
 snapshot=void_android_window_acquire(&serial,0);
 Java_org_crashday_port_GameActivity_nativeSurface(NULL,NULL,NULL);
 assert(wait_calls==1&&first.refs==1&&!locked);void_android_window_release(snapshot);assert(!first.refs);
 window_acked=UINT32_MAX;void_android_window_ack(0);assert(window_acked==0);
 game_started=0;first.refs=1;window=&first;wait_calls=0;
 Java_org_crashday_port_GameActivity_nativeSurface(NULL,NULL,NULL);assert(!wait_calls&&!locked);
 return 0;
}
'''


class SurfaceLifecycleTest(unittest.TestCase):
    def test_production_acknowledgement(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        declarations = source[source.index("static uint32_t window_serial;"):source.index("static int display_width")]
        helpers = source[source.index("void *void_android_window_acquire("):source.index("static void release_input(")]
        native = source[source.index("JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeSurface("):
                        source.index("void void_android_set_paused(")]
        text = HARNESS.replace("/* DECLARATIONS */", declarations).replace("/* HELPERS */", helpers).replace("/* NATIVE */", native)
        OUT.mkdir(parents=True, exist_ok=True)
        cfile, exe = OUT / "surface.c", OUT / "surface.exe"
        cfile.write_text(text, encoding="utf-8")
        env, linker = environment("x64")
        for command in ([str(CLANG), "/nologo", "/std:c11", "/c", str(cfile), f"/Fo{OUT / 'surface.obj'}"],
                        [str(linker), "/nologo", str(OUT / "surface.obj"), f"/OUT:{exe}"]):
            result = subprocess.run(command, env=env, capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertEqual(subprocess.run([str(exe)], timeout=10).returncode, 0)

    def test_render_detaches_before_ack_and_wait(self):
        source = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        follow = source[source.index("static void follow_window("):source.index("static int gl_init(")]
        self.assertLess(follow.index("eglMakeCurrent(egl_display, egl_pbuffer"), follow.index("void_android_window_ack(serial)"))
        self.assertLess(follow.index("eglDestroySurface"), follow.index("void_android_window_ack(serial)"))
        self.assertLess(follow.index("d3d_rt_wait_begin()"), follow.index("void_android_window_acquire(&serial, 1)"))
        self.assertLess(follow.index("void_android_window_acquire(&serial, 1)"), follow.index("d3d_rt_wait_end()"))
        self.assertIn("if (serial == egl_window_serial) { void_android_window_release(window); return; }", follow)
        self.assertLess(follow.index("eglCreateWindowSurface"), follow.rindex("void_android_window_release(window)"))


if __name__ == "__main__":
    unittest.main()
