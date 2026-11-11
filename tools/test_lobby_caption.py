"""Execute the original lobby setup exit branches and caption-call boundary."""
import os
from pathlib import Path
import re
import subprocess
import unittest

from lift_crashday import LOBBY_CAPTION_OWNERS, apply_host_adapter
from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]


def original(body):
    for instruction in ("0055592C", "00555EB0"):
        line = next(x for x in body.splitlines() if f"/* 0x{instruction}:" in x)
        body = body.replace(line, line.replace("goto L_005562A9", "goto L_005562AE"), 1)
    return body.replace("L_005562A9:\n", "")


HARNESS = r'''
#include <stdio.h>
#define TEST_Z(a,b) (!(a))
#define CMP_NE(a,b) ((a)!=(b))
#define RECOMP_CALL(f) f()
#define RECOMP_FLAGS_IN() ((void)0)
static unsigned caption, host_work, other_host_work;
static void sub_005493D0(void){++caption;}
static void sub_00548D00(void){++host_work;}
static void sub_0054F3B0(void){++other_host_work;}
static void setup(unsigned route,unsigned owner,unsigned status){
    unsigned _flag_a=owner,_flag_b=0;
    if(route==0){
        /* INITIAL_BRANCH */
    }else if(!owner){
        _flag_a=status;_flag_b=5;
        /* RETURN_BRANCH */
    }
    /* ORIGINAL_TAIL */
    return;
}
#define CHECK(test,label) do{if(!(test)){fprintf(stderr,"FAIL: %s\n",label);return 1;}}while(0)
int main(void){
    for(unsigned route=0;route<2;++route){
        for(unsigned owner=0;owner<2;++owner){
            for(unsigned status=0;status<8;++status){
                caption=host_work=other_host_work=0;
                setup(route,owner,status);
                CHECK(caption==1,"every completed setup refreshes caption exactly once");
                unsigned full=owner || (route==1 && status==5);
                CHECK(host_work==full && other_host_work==full,"original host-only work remains gated");
            }
        }
    }
    puts("PASS lobby caption: initial client, results-return client, owner/status branches, exactly one original refresh");
    return 0;
}
'''


class LobbyCaption(unittest.TestCase):
    def test_checked_owner_scoping_and_regeneration(self):
        source = (ROOT/'generated/crashday/functions_0022.c').read_text()
        for owner in LOBBY_CAPTION_OWNERS:
            signature = f'void sub_{owner:08X}(void)'
            body = method(source,signature)
            old = original(body)
            self.assertNotEqual(old,body)
            untouched = source.replace(body,old,1)
            self.assertEqual(apply_host_adapter({'name':'crashday'},owner,untouched),source)
            self.assertEqual(apply_host_adapter({'name':'unrelated'},owner,untouched),untouched)
            with self.assertRaisesRegex(ValueError,'branch changed'):
                apply_host_adapter({'name':'crashday'},owner,old.replace('0x00555EB0:','0x00555EB1:'))
            self.assertEqual(len(re.findall(r'goto L_005562A9;',body)),2)
            self.assertEqual(body.count('RECOMP_CALL(sub_005493D0);'),1)
        lift = (ROOT/'tools/lift_crashday.py').read_text()
        self.assertIn('list(LOBBY_CAPTION_OWNERS)',lift)

    def test_production_branches_old_fail_new_pass(self):
        source = (ROOT/'generated/crashday/functions_0022.c').read_text()
        out = ROOT/'build/tests'/f'lobby-caption-{os.getpid()}'
        out.mkdir(parents=True,exist_ok=True)
        env,linker = environment('x64')
        for owner in LOBBY_CAPTION_OWNERS:
            current = method(source,f'void sub_{owner:08X}(void)')
            for variant,body in (('current',current),('old',original(current))):
                first = next(x for x in body.splitlines() if '/* 0x0055592C:' in x)
                second = next(x for x in body.splitlines() if '/* 0x00555EB0:' in x)
                start = body.index('    RECOMP_CALL(sub_00548D00); /* 0x0055629F:')
                end = body.index('L_005562AE:',start)+len('L_005562AE:')
                code = HARNESS.replace('/* INITIAL_BRANCH */',first).replace('/* RETURN_BRANCH */',second).replace('/* ORIGINAL_TAIL */',body[start:end])
                name = f'{owner:08X}-{variant}'
                (out/f'{name}.c').write_text(code)
                for cmd in ([str(CLANG),'/nologo','/O2','/std:c11','/c',f'{name}.c',f'/Fo{name}.obj'],
                            [str(linker),'/nologo',f'{name}.obj',f'/OUT:{name}.exe']):
                    p = subprocess.run(cmd,cwd=out,env=env,capture_output=True,text=True)
                    self.assertEqual(p.returncode,0,p.stdout+p.stderr)
                p = subprocess.run([str(out/f'{name}.exe')],env=env,capture_output=True,text=True)
                if variant=='current':
                    self.assertEqual(p.returncode,0,p.stdout+p.stderr)
                else:
                    self.assertNotEqual(p.returncode,0)
                    self.assertIn('every completed setup refreshes caption exactly once',p.stderr)


if __name__=='__main__':
    unittest.main()
