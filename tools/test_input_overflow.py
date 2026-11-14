"""Run the production Android input queues and consumer against bounded fake IO."""
from pathlib import Path
import subprocess
import sys
import unittest
import re

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from tests.host_environment import CLANG, environment
from test_menu_gestures import method

OUT = ROOT / "build/tests/input-overflow"

HARNESS = r'''
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define CRASHDAY_ANDROID_APP
typedef int pthread_mutex_t;
#define PTHREAD_MUTEX_INITIALIZER 0
static void pthread_mutex_lock(int *m){assert(!*m);*m=1;}
static void pthread_mutex_unlock(int *m){assert(*m);*m=0;}
typedef struct {int unused;} void_raw_mouse_event;
typedef struct {uint32_t msg,wparam,lparam;int touch;uint64_t context;} pending_t;
static pending_t pending[512];static int pending_count,mouse_ring;
static uint8_t memory[0xA00000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEM8(a) (*(uint8_t *)(memory+(a)))
#define MEMF(a) (*(float *)(memory+(a)))
static struct {uint32_t frame;} device={10},*g_d3d_device=&device;
static uint32_t g_ecx,g_edx,editor_requests,button_downs,button_ups;
static int guest_hooks,callback_mode,motion_hooks,guest_scene=-1,motion_calls;
static void void_log(const char *m){(void)m;}
static void ring_push(int *r,uint32_t o,uint32_t v){(void)r;(void)o;(void)v;}
static void raw_push(int x,int y,uint32_t f,uint32_t d){(void)x;(void)y;(void)f;(void)d;}
static void pend(uint32_t m,uint32_t w,uint32_t l){(void)w;(void)l;if(m==0x201)++button_downs;if(m==0x202)++button_ups;}
static uint64_t void_monotonic_ns(void){return 1;}
static uint32_t mouse_wparam_locked(void){return 0;}
static uint32_t ui_point_locked(void){return 0;}
static void clamp_point_locked(int x,int y,int *ox,int *oy){*ox=x;*oy=y;}
static void crashday_text_editor_request(uint32_t epoch){if(epoch)++editor_requests;}
static int void_android_touch_only(void){return 0;}
int crashday_ui_scene_current(void){return guest_scene;}
static int void_vm_readable(uint32_t a,uint32_t n){return a+n<sizeof memory;}
static int void_vm_writable(uint32_t a,uint32_t n){return void_vm_readable(a,n);}
static int void_dispatch_find(uint32_t a){return guest_hooks && (a!=0x006F0B80u || motion_hooks);}
static uint32_t void_window_main(void){return 0;}
static void void_post_message(uint32_t h,uint32_t m,uint32_t w,uint32_t l){(void)h;(void)m;(void)w;(void)l;}
static void void_call_guest(uint32_t a,unsigned n,const uint32_t *p,int s);
void void_input_mouse_warp(int x,int y);
/* ACTUAL */
static void touch_reset_locked(void){}
static void key_locked(uint32_t vk,int down){vk_down[vk]=(uint8_t)down;}
static void drain(void) {
    MEM32(0x870268)=0x1000;
    while(motion_count) {
        motion_inflight=motion_queue[motion_head].serial;
        MEM32(0x1018)=motion_queue[motion_head].x;
        MEM32(0x101C)=motion_queue[motion_head].y;
        void_input_pump();
    }
    void_input_pump();
}
static void fill_motion(void){for(int i=0;i<256;++i)void_input_mouse_warp(100+i,100);}
static void void_call_guest(uint32_t a,unsigned n,const uint32_t *p,int s) {
    (void)n;(void)s;
    if(a==0x006F0A40u){assert(g_ecx==0x3000);MEM32(0x926A0C)=g_ecx;return;}
    if(a==0x006F0EA0u || a==0x006F10D0u || a==0x006F0B80u)assert(g_ecx==0x3000);
    if(a==0x006F0B80u) {
        assert(!MEM32(0x926A2C) && !MEM32(0x926A30));
        MEM32(0x1018)=p[1];MEM32(0x101C)=p[2];++motion_calls;return;
    }
    if((a==0x006F0EA0u && p[0]) || (a==0x006F10D0u) || callback_mode==5) {
        int mode=callback_mode;callback_mode=0;
        if(mode==1 || mode==2 || mode==4 || mode==5)void_input_cancel();
        if(mode==2){void_input_mouse_warp(350,200);void_input_mouse_button(0,1);void_input_mouse_button(0,0);}
        if(mode==3){fill_motion();void_input_mouse_warp(999,222);}
        if(mode==6){for(int i=0;i<257;++i)void_input_mouse_wheel(120);}
    }
}
static void neutral(void){void_input_cancel();drain();assert(!mouse_buttons[0] && !button_count);}
int main(void) {
    uint32_t epoch=android_input_epoch;
    fill_motion();void_input_mouse_warp(999,222);
    assert(android_input_epoch!=epoch && motion_count==1 && cursor_x==0 && cursor_y==0);
    void_input_mouse_warp(300,100);void_input_mouse_button(0,1);drain();
    assert(mouse_buttons[0] && !button_count);
    void_input_mouse_button(0,0);void_input_pump();
    assert(mouse_buttons[0] && button_count==1);
    MEM32(0x926A28)=1;observed_buttons=1;device.frame+=2;void_input_pump();
    assert(!mouse_buttons[0] && !button_count && editor_requests==1);

    void_input_mouse_button(0,1);void_input_pump();
    assert(!mouse_buttons[0] && button_count==1);
    ++device.frame;void_input_pump();
    assert(mouse_buttons[0]);MEM32(0x926A28)=observed_buttons=0;editor_requests=0;
    for(int i=0;i<256;++i)void_input_mouse_button(0,1);
    epoch=android_input_epoch;void_input_mouse_button(0,0);
    assert(android_input_epoch!=epoch && button_count==1 && !button_queue[button_head].down);
    drain();assert(!mouse_buttons[0] && !button_count && !editor_requests);

    void_input_mouse_button(0,1);void_input_pump();assert(mouse_buttons[0]);
    for(int i=0;i<256;++i)void_input_mouse_wheel(120);
    epoch=android_input_epoch;void_input_mouse_wheel(120);
    assert(android_input_epoch!=epoch && !wheel_count && button_count==1);
    void_input_mouse_warp(450,200);void_input_mouse_button(0,1);void_input_mouse_button(0,0);
    drain();assert(mouse_buttons[0] && button_count==1 && !editor_requests);
    MEM32(0x926A28)=observed_buttons=1;device.frame+=2;void_input_pump();
    assert(!mouse_buttons[0] && !button_count && editor_requests==1);
    neutral();assert(!input_lock && button_downs==button_ups);

    guest_hooks=1;MEM32(0x926A0C)=0x3000;
    for(int mode=1;mode<=3;++mode) {
        editor_requests=0;MEM32(0x926A28)=observed_buttons=0;
        callback_mode=mode;void_input_mouse_button(0,1);void_input_pump();
        assert(button_count==(mode==2 ? 3:1) && motion_count>0 && wheel_count==0);
        drain();
        if(mode==2) {
            assert(mouse_buttons[0] && button_count==1 && !editor_requests);
            MEM32(0x926A28)=observed_buttons=1;device.frame+=2;void_input_pump();
            assert(editor_requests==1);
        } else assert(!editor_requests);
        assert(!mouse_buttons[0] && !button_count && !wheel_count);
        neutral();
    }
    for(int mode=4;mode<=6;mode+=2) {
        callback_mode=mode;void_input_mouse_wheel(120);void_input_pump();
        assert(!wheel_count && !button_count);drain();
        assert(!wheel_count && !button_count);
    }
    editor_requests=0;void_input_mouse_button(0,1);void_input_pump();
    MEM32(0x926A28)=observed_buttons=1;device.frame+=2;
    callback_mode=5;void_input_mouse_button(0,0);void_input_pump();drain();
    assert(!editor_requests && !button_count && !wheel_count && !mouse_buttons[0]);
    assert(!input_lock && button_downs==button_ups);
    guest_scene=7;motion_hooks=1;MEM32(0x926A2C)=MEM32(0x926A30)=1;
    MEM32(0x925FD0)=0x3000;MEM32(0x926A0C)=0;
    void_input_mouse_warp(400,300);void_input_pump();
    assert(MEM32(0x926A0C)==0x3000);
    assert(motion_calls==1 && MEM32(0x926A2C)==1 && MEM32(0x926A30)==1);
    void_input_pump();assert(!motion_count);
    guest_scene=9;void_input_mouse_warp(300,200);
    void_input_mouse_button(0,1);void_input_mouse_button(0,0);void_input_pump();
    assert(motion_calls==1 && !motion_count && mouse_buttons[0] && button_count==1);
    MEM32(0x926A28)=observed_buttons=0;device.frame+=2;void_input_pump();
    assert(!mouse_buttons[0] && !button_count);
    for(int scene=7;scene<=20;++scene) {
        if(scene!=7 && scene!=14 && scene!=17 && scene!=18 && scene!=20)continue;
        guest_scene=scene;
        for(int button=0;button<5;++button) {
            void_input_mouse_button(button,1);void_input_mouse_button(button,0);void_input_pump();
            assert(mouse_buttons[button] && button_count==1);
            device.frame+=2;void_input_pump();assert(!mouse_buttons[button] && !button_count);
        }
    }
    guest_scene=8;
    for(int button=2;button<5;++button) {
        void_input_mouse_button(button,1);void_input_mouse_button(button,0);void_input_pump();
        assert(mouse_buttons[button] && button_count==1);
        device.frame+=2;void_input_pump();assert(!mouse_buttons[button] && !button_count);
    }
    neutral();
    guest_scene=5;
    for(int i=0;i<12;++i){void_input_mouse_button(0,1);void_input_mouse_button(0,0);}
    int presses=button_downs,releases=button_ups;
    for(int i=0;i<12;++i) {
        ++device.frame;void_input_pump();
        assert(mouse_buttons[0] && button_downs==presses+i+1 && button_ups==releases+i);
        MEM32(0x926A28)=observed_buttons=1;device.frame+=2;void_input_pump();
        assert(!mouse_buttons[0] && button_ups==releases+i+1);
        void_input_pump();assert(!mouse_buttons[0]);
    }
    assert(!button_count);neutral();
    puts("PASS input queues: overflow, neutral release, next tap, low-FPS guard and reentrant guest cancel/overflow");
    return 0;
}
'''


class InputOverflowTest(unittest.TestCase):
    def test_original_observation_after_pop(self):
        from lift_crashday import apply_input_observation, INPUT_OBSERVATION
        source = (ROOT / "generated/crashday/functions_0037.c").read_text(encoding="utf-8")
        hooks = re.findall(r'^    if \(eax && .*void_input_mouse_observed\([12]u\);.*$', source, re.M)
        self.assertEqual(len(hooks), 2)
        for (address, _), hook in zip(INPUT_OBSERVATION.items(), hooks):
            body = method(source, f"void sub_{address:08X}(void)")
            plain = body.replace(hook + "\n", "", 1)
            self.assertEqual(apply_input_observation({"name": "crashday"}, address, plain), body)
            plain_file = source.replace(hook + "\n", "", 1)
            self.assertEqual(apply_input_observation({"name": "crashday"}, address, plain_file), source)
            for bad in (body, plain.replace("pop esi", "changed"), plain + plain):
                with self.assertRaises(ValueError):
                    apply_input_observation({"name": "crashday"}, address, bad)
        body = r'''
#include <assert.h>
#include <stdint.h>
static uint8_t memory[0x10000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEM8(a) (*(uint8_t *)(memory+(a)))
static uint32_t observed;
void void_input_mouse_observed(uint32_t buttons){observed|=buttons;}
static void left(uint32_t eax,uint32_t esi,uint32_t _flag_a,uint32_t _flag_b){
/* LEFT */
}
static void right(uint32_t eax,uint32_t esi,uint32_t _flag_a,uint32_t _flag_b){
/* RIGHT */
}
int main(void){
    void (*calls[])(uint32_t,uint32_t,uint32_t,uint32_t)={left,right};
    for(unsigned i=0;i<2;++i){
        /* ESI has been restored to the caller's unrelated object. */
        MEM32(0x2574)=0x1000;MEM8(0x100C)=1;observed=0;
        calls[i](0x1000,0x2000,0x1000,0x3000);assert(observed==(1u<<i));
        MEM32(0x2574)=0x4000;MEM8(0x300C)=1;observed=0;
        calls[i](0x3000,0x2000,0x3000,0x3000);assert(!observed);
        MEM8(0x100C)=0;calls[i](0x1000,0x2000,0x1000,0x3000);assert(!observed);
    }
    return 0;
}
'''.replace("/* LEFT */", hooks[0]).replace("/* RIGHT */", hooks[1])
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "observation.c").write_text(body, encoding="utf-8")
        env, linker = environment("x64")
        for command in ([CLANG, "/nologo", "/O1", "/std:c11", "/c", "observation.c", "/Foobservation.obj"],
                        [linker, "/nologo", "observation.obj", "/OUT:observation.exe"], [OUT / "observation.exe"]):
            result = subprocess.run([str(x) for x in command], cwd=OUT, env=env, capture_output=True, timeout=60)
            self.assertEqual(result.returncode, 0, (result.stdout + result.stderr).decode(errors="replace"))

    def test_production_queues(self):
        source = (ROOT / "android/host/input.c").read_text(encoding="utf-8")
        start = source.index("static pthread_mutex_t input_lock")
        end = source.index("void void_input_mouse_observed")
        actual = source[start:end]
        actual += "\n".join(method(source, signature) for signature in (
            "static void crashday_key_pump(void)\n{", "void void_input_mouse_warp(int x, int y)",
            "static void mouse_button_locked(int button, int down)", "void void_input_mouse_button(int button, int down)",
            "static void mouse_wheel_locked(int delta, int windows_message)\n{", "void void_input_mouse_wheel(int delta)"))
        pump = source[source.index("void void_input_pump(void)"):source.index("    touch_observe_game();", source.index("void void_input_pump(void)"))]
        actual += "\n" + pump + "}\n"
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "probe.c").write_text(HARNESS.replace("/* ACTUAL */", actual), encoding="utf-8")
        env, linker = environment("x64")
        commands = ([CLANG, "/nologo", "/O1", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
                     "/c", "probe.c", "/Foprobe.obj"], [linker, "/nologo", "probe.obj", "/OUT:probe.exe"], [OUT / "probe.exe"])
        for command in commands:
            result = subprocess.run([str(x) for x in command], cwd=OUT, env=env, capture_output=True, timeout=60)
            self.assertEqual(result.returncode, 0, (result.stdout + result.stderr).decode(errors="replace"))


if __name__ == "__main__":
    unittest.main()
