"""Execute the shared original iterator on a failed open and end of enumeration."""
import os
from pathlib import Path
import subprocess
import unittest

from lift_crashday import apply_host_adapter
from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
GUARD = "    if (!ecx) { eax = 0; RECOMP_FLAGS_OUT(); esp += 4; RECOMP_REGS_OUT(); return; } /* Opening a missing replay directory may return no iterator. */\n"
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
static unsigned char memory[65536];
static void *at(uint32_t a,unsigned n){assert(a>=4096&&a<=sizeof memory&&n<=sizeof memory-a);return memory+a;}
#define MEM8(a) (*(uint8_t*)at(a,1))
#define MEM16(a) (*(uint16_t*)at(a,2))
#define MEM32(a) (*(uint32_t*)at(a,4))
static uint32_t eax,ebx,ecx,edx,esi,edi,esp,ebp,calls;
#define RECOMP_REGS_LOCALS
#define RECOMP_ENTER(a) ((void)0)
#define RECOMP_FLAGS_OUT() ((void)0)
#define RECOMP_FLAGS_IN() ((void)0)
#define RECOMP_REGS_OUT() ((void)0)
#define RECOMP_CALL(f) f()
#define RECOMP_ICALL(a) abort()
#define PUSH32(s,v) ((s)-=4,MEM32(s)=(v))
#define POP32_VAL(s) ((s)+=4,MEM32((s)-4))
#define FK_NONE 0
#define FK_CMP 1
#define FK_TEST 2
#define FK_ADD 3
#define FK_DEC 4
#define FK_NARROW(k,n) (k)
#define CMP_EQ(a,b) ((a)==(b))
#define CMP_NE(a,b) ((a)!=(b))
#define CMP_B(a,b) ((uint32_t)(a)<(uint32_t)(b))
#define TEST_Z(a,b) (!((a)&(b)))
#define TEST_NZ(a,b) (!!((a)&(b)))
#define LO8(a) ((a)&255u)
#define LO16(a) ((a)&65535u)
static void sub_0055DBE0(void){assert(ecx==0x3000);++calls;eax=0;}
/* ITERATOR */
static void reset(uint32_t iterator){
    memset(memory,0,sizeof memory);eax=0xDEAD;ecx=iterator;esp=0x8000;
    ebp=0x11111111;ebx=0x22222222;esi=0x33333333;edi=0x44444444;calls=0;
}
int main(void){
    reset(0);sub_0055DCE0();
    assert(eax==0&&calls==0&&esp==0x8004&&ecx==0);
    assert(ebp==0x11111111&&ebx==0x22222222&&esi==0x33333333&&edi==0x44444444);
    reset(0x2000);MEM32(0x2114)=0x3000;sub_0055DCE0();
    assert(eax==0&&calls==1&&esp==0x8004);
    assert(ebp==0x11111111&&ebx==0x22222222&&esi==0x33333333&&edi==0x44444444);
    return 0;
}
'''


class ReplayIteratorTest(unittest.TestCase):
    def test_failed_open_and_normal_end(self):
        source = (ROOT / 'generated/crashday/functions_0023.c').read_text()
        current = method(source, 'void sub_0055DCE0(void)')
        self.assertEqual(current.count(GUARD), 1)
        old = current.replace(GUARD, '', 1)
        self.assertEqual(apply_host_adapter({'name': 'crashday'}, 0x55DCE0, old), current)
        self.assertEqual(apply_host_adapter({'name': 'other'}, 0x55DCE0, old), old)
        out = ROOT / 'build/tests' / f'replay-iterator-{os.getpid()}'
        out.mkdir(parents=True, exist_ok=True)
        env, linker = environment('x64')
        for variant, body in (('current', current), ('old', old)):
            (out / f'{variant}.c').write_text(HARNESS.replace('/* ITERATOR */', body))
            for cmd in ([str(CLANG), '/nologo', '/O2', '/std:c11', '/c', f'{variant}.c', f'/Fo{variant}.obj'],
                        [str(linker), '/nologo', f'{variant}.obj', f'/OUT:{variant}.exe']):
                result = subprocess.run(cmd, cwd=out, env=env, capture_output=True, text=True)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            result = subprocess.run([str(out / f'{variant}.exe')], env=env, capture_output=True)
            if variant == 'current':
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            else:
                self.assertNotEqual(result.returncode, 0)


if __name__ == '__main__':
    unittest.main()
