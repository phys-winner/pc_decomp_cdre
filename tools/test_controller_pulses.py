"""Exercise production XInput polling when touch taps finish between frames."""
from pathlib import Path
import os
import re
import subprocess
import unittest

from tests.host_environment import CLANG, environment
from test_menu_gestures import method

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'build/tests/controller-pulses' / str(os.getpid())
LATCH = re.compile(r'(?m)^\s*drive_pulse_buttons\s*\|=.*~drive_overlay_buttons\s*;\s*$')

HARNESS = r'''
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define CRASHDAY_ANDROID_APP
static int input_lock;
static uint32_t frame;
static uint32_t void_input_frame(void){return frame;}
static void pthread_mutex_lock(int *p){if(*p)abort();*p=1;}
static void pthread_mutex_unlock(int *p){if(!*p)abort();*p=0;}
static void drive_fallback(float x,float y,float z){(void)x;(void)y;(void)z;}
static int (*void_touch_steer)(float *,uint32_t *);
static uint64_t touch_cursor_context;
static int touch_game_active,touch_connected;
static int16_t touch_stick_x,touch_stick_y,touch_pad_x,touch_pad_y,touch_right_x,touch_right_y;
static float touch_move_x,touch_move_y;
static uint32_t touch_packet;
static uint16_t touch_pad_buttons;
static void touch_look_steer(float a,float b,float *c,uint32_t d,int16_t *x,int16_t *y){(void)a;(void)b;(void)c;(void)d;(void)x;(void)y;}
static uint8_t memory[256];
#define GPTR(a) (memory+(a))
#define MEM8(a) memory[a]
#define MEM16(a) (*(uint16_t*)GPTR(a))
static uint32_t last_error;
static void void_set_last_error(uint32_t e){last_error=e;}
static int void_vm_writable(uint32_t a,uint32_t n){return a && (uint64_t)a+n<=sizeof memory;}
static int void_vm_readable(uint32_t a,uint32_t n){return void_vm_writable(a,n);}
/* ACTUAL */
static uint8_t state[16];
static uint16_t poll(void){if(!void_input_touch_pad(0,state))return UINT16_MAX;uint16_t b;memcpy(&b,state+4,2);return b;}
static uint32_t packet(void){uint32_t n;memcpy(&n,state,4);return n;}
static void send(uint16_t buttons){void_input_controller(buttons,0,0,0,0,0,0);}
#define CHECK(test,label) do{if(!(test)){fprintf(stderr,"FAIL: %s\n",label);return 1;}}while(0)
int main(void){
    const uint16_t START=0x10,A=0x1000,B=0x2000,RB=0x200;
    CHECK(poll()==0,"cold-start controller is present and neutral");
    CHECK(!xinput_capabilities(0,0,64),"neutral capabilities query succeeds");
    CHECK(MEM16(68)==0xF3FF && MEM8(70)==255 && MEM8(71)==255,"neutral capabilities expose all buttons and triggers");
    for(unsigned axis=72;axis<80;axis+=2)CHECK(MEM16(axis)==32767,"neutral capabilities expose every stick axis");
    for(unsigned i=6;i<16;++i)CHECK(state[i]==0,"cold-start analog state is neutral");
    CHECK(!void_input_touch_pad(1,state),"only controller zero is exposed");
    void_input_drive_active(1);
    send(START);send(0);
    CHECK(poll()==START,"short tap survives until first poll");uint32_t first=packet();
    CHECK(poll()==START && packet()==first,"same-frame repeated poll preserves tap and packet");
    ++frame;CHECK(poll()==START && packet()==first,"next frame preserves observed tap");
    ++frame;CHECK(poll()==0 && packet()!=first,"two-frame expiry releases with new packet");

    send(A);CHECK(poll()==A,"held first poll");CHECK(poll()==A,"held repeated poll");
    frame+=2;CHECK(poll()==A,"held state survives pulse expiry");
    send(A);send(0);
    CHECK(poll()==0,"held update must not relatch after release");

    send(RB);send(0);void_input_gamepad_reset();
    CHECK(poll()==0,"cancel clears unobserved tap");
    send(RB);send(0);CHECK(poll()==RB,"new tap after cancel");
    void_input_gamepad_reset();CHECK(poll()==0,"cancel clears observed tap immediately");
    send(RB);send(0);CHECK(poll()==RB,"new tap after observed cancellation");
    frame+=2;CHECK(poll()==0,"new tap releases");

    send(A|B);send(B);send(0);
    CHECK(poll()==(A|B),"simultaneous taps survive independent release");
    frame+=2;CHECK(poll()==0,"simultaneous taps clear together");

    send(A);send(0);CHECK(poll()==A,"first staggered tap");
    ++frame;send(B);send(0);CHECK(poll()==(A|B),"second staggered tap keeps first");
    ++frame;CHECK(poll()==B,"per-button expiry preserves younger tap");
    ++frame;CHECK(poll()==0,"younger tap expires on own deadline");

    send(A);send(0);CHECK(poll()==A,"first tap before rapid repress");
    ++frame;send(A);send(0);CHECK(poll()==A,"rapid new rising edge restarts observation");
    ++frame;CHECK(poll()==A,"rapid repress retained for its own next frame");
    ++frame;CHECK(poll()==0,"rapid repress expires after its own two frames");

    send(B);send(0);frame+=100;
    CHECK(poll()==B,"late first poll still observes pending tap");
    frame+=2;CHECK(poll()==0,"late first observation starts bounded lifetime");
    frame=UINT32_MAX;
    send(B);send(0);CHECK(poll()==B,"tap first observed before frame wrap");
    ++frame;CHECK(poll()==B,"frame wrap retains next-frame tap");
    ++frame;CHECK(poll()==0,"unsigned frame wrap expires after two frames");

    send(A);void_input_pad_buttons(B,1);CHECK(poll()==(A|B),"overlay and physical masks merge");
    frame+=2;CHECK(poll()==(A|B),"both held sources survive pulse expiry");
    send(0);CHECK(poll()==B,"overlay release preserves other button source");
    void_input_pad_buttons(B,0);CHECK(poll()==0,"other source releases");
    void_input_pad_buttons(B,1);void_input_pad_buttons(B,0);
    CHECK(poll()==B,"pad source short tap is retained");
    frame+=2;CHECK(poll()==0,"pad source tap expires");
    void_input_pad_buttons(B,1);CHECK(poll()==B,"pad source held first poll");
    frame+=2;CHECK(poll()==B,"pad source held expiry");
    void_input_pad_buttons(B,1);void_input_pad_buttons(B,0);
    CHECK(poll()==0,"repeated pad down must not relatch after release");

    void_input_controller(A,1,.5f,-1,-.5f,1,1);
    void_input_drive_active(0);CHECK(poll()==0,"inactive controller remains present and neutral");
    for(unsigned i=6;i<16;++i)CHECK(state[i]==0,"inactive analog state is neutral");
    void_input_drive_active(1);CHECK(poll()==0,"reactivation clears held and pulse state");
    for(unsigned i=6;i<16;++i)CHECK(state[i]==0,"reactivation clears analog state");
    send(START);send(0);CHECK(poll()==START,"new tap after reactivation");
    frame+=2;CHECK(poll()==0,"reactivation tap releases");

    /* SDL probes metadata and vibration between input frames. None are reads. */
    for(unsigned query=0;query<3;++query){
        send(RB);send(0);
        uint32_t result=query==0?xinput_capabilities(0,0,64):query==1?xinput_set_state(0,128):xinput_battery(0,0,96);
        CHECK(!result && !last_error,"metadata query succeeds");
        frame+=3;
        CHECK(!xinput_get_state(0,16) && MEM16(20)==RB,"metadata query preserves pending tap");
        CHECK(!xinput_get_state(0,16) && MEM16(20)==RB,"GetState repeated same-frame delivery is stable");
        frame+=2;CHECK(!xinput_get_state(0,16) && MEM16(20)==0,"GetState releases after two frames");
    }
    send(A|B);send(0);
    CHECK(!xinput_capabilities(0,0,64) && !xinput_set_state(0,128) && !xinput_battery(0,0,96),"all metadata queries succeed");
    CHECK(xinput_capabilities(0,2,64)==160 && xinput_battery(0,2,96)==160,"invalid metadata options rejected");
    CHECK(xinput_capabilities(0,0,255)==998 && xinput_set_state(0,255)==998 && xinput_battery(0,0,255)==998,"invalid metadata memory rejected");
    frame+=3;
    CHECK(!xinput_get_state(0,16) && MEM16(20)==(A|B),"all metadata calls preserve simultaneous tap");
    frame+=2;CHECK(!xinput_get_state(0,16) && !MEM16(20),"simultaneous GetState delivery expires");
    for(unsigned trigger=0;trigger<2;++trigger){
        void_input_controller(0x10000,0,0,0,0,trigger==0?.8f:0,trigger==1?.8f:0);
        send(0);frame+=100;
        CHECK(!xinput_capabilities(0,0,64),"trigger metadata succeeds without consuming a tap");
        frame+=3;CHECK(poll()==0 && state[6+trigger]==204,"short digital trigger survives before its first poll");
        CHECK(poll()==0 && state[6+trigger]==204,"trigger same-frame poll is stable");
        ++frame;poll();CHECK(state[6+trigger]==204,"trigger next-frame poll is stable");
        ++frame;poll();CHECK(!state[6+trigger],"trigger expires after its own two observed frames");
        void_input_controller(0x10000,0,0,0,0,trigger==0?1:0,trigger==1?1:0);poll();
        frame+=2;poll();CHECK(state[6+trigger]==255,"held trigger outlives pulse");
        send(0);poll();CHECK(!state[6+trigger],"long-held trigger releases without a new pulse");
    }
    void_input_controller(0x10000,0,0,0,0,1,1);send(0);void_input_gamepad_reset();poll();
    CHECK(!state[6] && !state[7],"cancel clears both pending trigger taps");
    CHECK(!input_lock,"all input locks released");
    puts("PASS: frame-stable button/trigger pulses, held release, cancellation, staggered bits, rapid repress, late polling, frame wrap, neutral presence and non-consuming metadata");
    return 0;
}
'''


class ControllerPulses(unittest.TestCase):
    def test_touch_taps_between_polls(self):
        source = (ROOT / 'android/host/input.c').read_text(encoding='utf-8')
        fields = source[source.index('static float drive_steer'):source.index('static void drive_fallback_key')]
        signatures = ('void void_input_drive_active(', 'void void_input_pad_buttons(',
                      'void void_input_gamepad_reset(', 'void void_input_controller(',
                      'int void_input_touch_pad_snapshot(', 'int void_input_touch_pad(')
        actual = fields + '\n'.join(method(source, signature) for signature in signatures)
        xinput = (ROOT / 'android/host/xinput.c').read_text(encoding='utf-8')
        actual += '\n' + '\n'.join(method(xinput, 'static uint32_t '+name+'(') for name in
                                     ('xinput_get_state','xinput_set_state','xinput_capabilities','xinput_battery'))
        before, removed = LATCH.subn('', actual)
        self.assertEqual(removed, 1, 'cannot construct the pre-fix pulse regression variant')
        poll_source = method(source, 'int void_input_touch_pad_snapshot(')
        # Recreate the previous one-read latch without a dependency on evidence files.
        frame_block = method(poll_source, 'if (consume && drive_pulse_buttons)')
        old_frame_poll = poll_source.replace(frame_block, '', 1).replace(
            '        pthread_mutex_unlock(&input_lock);',
            '        if (drive_pulse_buttons && consume) { drive_pulse_buttons = 0; ++drive_packet; }\n'
            '        pthread_mutex_unlock(&input_lock);', 1)
        previous_poll, restored = re.subn(r'if\s*\(\s*index\s*==\s*0\s*\)\s*\{',
                                         'if (index == 0 && drive_connected) {', poll_source, count=1)
        self.assertEqual(restored, 1, 'cannot construct the pre-fix cold-start regression variant')
        metadata_before, restored_metadata = re.subn(r'void_input_touch_pad_snapshot\(index,\s*state,\s*0\)',
                                                      'void_input_touch_pad(index, state)', actual)
        self.assertEqual(restored_metadata, 3, 'cannot construct the pre-fix metadata regression variant')
        OUT.mkdir(parents=True, exist_ok=True)
        env, linker = environment('x64')
        results = {}
        for variant, code in (('current', actual), ('before-latch', before),
                              ('before-frame', actual.replace(poll_source, old_frame_poll)),
                              ('before-presence', actual.replace(poll_source, previous_poll)),
                              ('before-metadata', metadata_before)):
            path, obj, exe = (OUT / f'{variant}{ext}' for ext in ('.c', '.obj', '.exe'))
            path.write_text('#include <stdlib.h>\n' + HARNESS.replace('/* ACTUAL */', code), encoding='utf-8')
            subprocess.run([str(CLANG), '/nologo', '/c', '/TC', '/std:c11', str(path), f'/Fo{obj}'], check=True, env=env)
            subprocess.run([str(linker), '/nologo', str(obj), f'/OUT:{exe}'], check=True, env=env)
            results[variant] = subprocess.run([str(exe)], capture_output=True, text=True, timeout=5)
        self.assertEqual(results['current'].returncode, 0, results['current'].stderr)
        self.assertEqual(results['before-latch'].returncode, 1)
        self.assertIn('short tap survives until first poll', results['before-latch'].stderr)
        self.assertEqual(results['before-frame'].returncode, 1)
        self.assertIn('same-frame repeated poll preserves tap and packet', results['before-frame'].stderr)
        self.assertEqual(results['before-presence'].returncode, 1)
        self.assertIn('cold-start controller is present and neutral', results['before-presence'].stderr)
        self.assertEqual(results['before-metadata'].returncode, 1)
        self.assertIn('metadata query preserves pending tap', results['before-metadata'].stderr)
        print(results['current'].stdout.strip())


if __name__ == '__main__':
    unittest.main()
