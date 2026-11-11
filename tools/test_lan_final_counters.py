"""Execute the final826/tick/snapshot boundary and real generated guard snippets."""
import os
from pathlib import Path
import subprocess
import unittest

from lift_crashday import RESULTS_GUARDS, apply_results_guard
from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]

HARNESS = r'''
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LAN_PEERS 16
static unsigned char memory[0x40000];
#define MEM32(p) (*(uint32_t*)(memory+(p)))
static int void_vm_readable(uint32_t p,uint32_t n){return p>=0x1000 && p<=sizeof memory && n<=sizeof memory-p;}
typedef struct {uint64_t id,owner;int member;} lan_lobby;
typedef struct {int started;uint64_t id,joined;} lan_context;
static lan_context steam_lan={1,12,101};
static lan_lobby lobby={101,34,1};
static lan_lobby *lan_lobby_find(lan_context*c,uint64_t id){(void)c;return id==lobby.id?&lobby:NULL;}
static void *lan_member_find(lan_lobby*l,uint64_t id){return l->member && id==steam_lan.id?l:NULL;}
/* HELPER */
static void receive(uint32_t car){uint32_t esi=car; /* RECEIVE */ }
static void missile(uint32_t car,uint32_t value){uint32_t ebx=car,eax=value; /* MISSILE */ }
static void minigun(uint32_t car,uint32_t value){uint32_t ebx=car,eax=value; /* MINIGUN */ }
static void construct(uint32_t car){uint32_t ebx=car,edi=car+0x7C9C; /* CONSTRUCT */ }
static void destroy(uint32_t car){uint32_t ecx=car,esi=0; /* DESTROY */ if(esi!=car)abort();}
static void snapshot(uint32_t car,uint32_t out){
    uint32_t esi=car+0x7C9C,edi=out,ecx=0xAA;int _df=1;
    /* SNAPSHOT */
    if(ecx || esi!=car+0x7C9C+0xAA*4 || edi!=out+0xAA*4)abort();
}
#define CHECK(test,label) do{if(!(test)){fprintf(stderr,"FAIL: %s\n",label);return 1;}}while(0)
static void player(uint32_t car,uint32_t low){MEM32(car+0x6B70)=low;MEM32(car+0x6B74)=0x01100001;}
int main(void){
    uint32_t a=0x1000,b=0x11000,out=0x30000;
    player(a,34);player(b,12);
    MEM32(a+0x7CC0)=4;MEM32(a+0x7CC8)=27;MEM32(a+0x7CCC)=2;MEM32(a+0x7CD4)=3;
    receive(a);missile(a,0);minigun(a,0);
    CHECK(MEM32(a+0x7CC0)==4 && MEM32(a+0x7CC8)==27,"received final counts survive last tick");
    CHECK(MEM32(a+0x7CCC)==2 && MEM32(a+0x7CD4)==3,"hit counts stay unchanged");
    missile(b,2);minigun(b,9);
    CHECK(MEM32(b+0x7CC0)==2 && MEM32(b+0x7CC8)==9,"unreceived car continues normal counters");
    snapshot(a,out);
    CHECK(MEM32(out+0x24)==4 && MEM32(out+0x2C)==27,"original snapshot keeps final counts");
    missile(a,5);CHECK(MEM32(a+0x7CC0)==5,"snapshot completion releases protection");

    /* Reusing the same pointer and player in the same lobby is a new race. */
    receive(a);construct(a);missile(a,1);minigun(a,2);
    CHECK(MEM32(a+0x7CC0)==1 && MEM32(a+0x7CC8)==2,"new constructor resets abandoned final state");
    receive(a);destroy(a);CHECK(crashday_lan_results_tick_allowed(a),"destructor releases pending state");
    receive(a);player(a,99);CHECK(crashday_lan_results_tick_allowed(a),"changed car identity cannot inherit final state");
    player(a,34);receive(a);lobby.owner=56;
    CHECK(crashday_lan_results_tick_allowed(a),"changed lobby owner clears final state");
    lobby.owner=34;receive(a);lobby.id=202;steam_lan.joined=202;
    CHECK(crashday_lan_results_tick_allowed(a),"different lobby clears final state");

    receive(a);steam_lan.joined=0;missile(a,7);minigun(a,17);
    CHECK(MEM32(a+0x7CC0)==7 && MEM32(a+0x7CC8)==17,"singleplayer transition leaves original counters active");
    receive(a);missile(a,8);CHECK(MEM32(a+0x7CC0)==8,"singleplayer cannot install final protection");
    steam_lan.joined=lobby.id;steam_lan.id=lobby.owner;receive(a);missile(a,9);
    CHECK(MEM32(a+0x7CC0)==9,"host authority never blocks its own counters");
    steam_lan.id=12;lobby.member=0;receive(a);missile(a,10);
    CHECK(MEM32(a+0x7CC0)==10,"nonmember cannot install final protection");
    lobby.member=1;steam_lan.started=0;receive(a);missile(a,11);
    CHECK(MEM32(a+0x7CC0)==11,"stopped transport cannot install final protection");
    steam_lan.started=1;

    /* Local-client results follow the same verified final receive boundary. */
    MEM32(b+0x7CC0)=2;MEM32(b+0x7CC8)=27;receive(b);missile(b,0);minigun(b,0);
    CHECK(MEM32(b+0x7CC0)==2 && MEM32(b+0x7CC8)==27,"client player keeps received accurate counters");
    snapshot(b,out);CHECK(MEM32(out+0x24)==2 && MEM32(out+0x2C)==27,"client snapshot stays accurate");
    for(unsigned i=0;i<100;++i){receive(a);receive(a);destroy(a);construct(a);}
    for(unsigned i=0;i<LAN_PEERS*2;++i)CHECK(!lan_final_stats[i].car,"lifetime hooks leave no stale slots");
    receive(0);receive(UINT32_MAX-4);receive(sizeof memory-4);
    CHECK(crashday_lan_results_tick_allowed(a),"bad receive pointers do not protect unrelated cars");
    puts("PASS final counters: final826/tick/copy, accurate fields, constructor/destructor reuse, identity/lobby/member/host/singleplayer gates");
    return 0;
}
'''


def replacement(owner, index):
    anchor = RESULTS_GUARDS[owner][index][0]
    original = f'void sub_{owner:08X}(void) {{\n' + '\n'.join(x[0] for x in RESULTS_GUARDS[owner]) + '\n}'
    adapted = apply_results_guard(owner, original)
    if RESULTS_GUARDS[owner][index][1] in ('tick', 'snapshot'):
        signature = '    { extern int crashday_lan_results_tick_allowed' if RESULTS_GUARDS[owner][index][1]=='tick' else '    { extern void crashday_lan_results_reset'
        blocks = []
        position = 0
        while (position := adapted.find(signature, position)) >= 0:
            block = method(adapted[position:], signature)
            blocks.append(block)
            position += len(block)
        return next(block for block in blocks if anchor in block)
    prefix = method(adapted, '    { extern void crashday_lan_results_')
    return prefix + '\n' + anchor


class FinalCounters(unittest.TestCase):
    def test_exact_generated_guards(self):
        sources = [(ROOT/'generated/crashday'/f).read_text() for f in ('functions_0015.c','functions_0047.c')]
        for owner, hooks in RESULTS_GUARDS.items():
            source = next(s for s in sources if f'void sub_{owner:08X}(void) {{' in s)
            body = method(source, f'void sub_{owner:08X}(void)')
            for anchor, action, car in hooks:
                self.assertEqual(body.count(anchor), 1)
                expected = 'crashday_lan_results_tick_allowed' if action=='tick' else 'crashday_lan_results_reset' if action=='snapshot' else 'crashday_lan_results_'+action
                self.assertIn(expected, body)
            with self.assertRaisesRegex(ValueError, 'instruction changed'):
                apply_results_guard(owner, f'void sub_{owner:08X}(void) {{ return; }}')

    def test_production_final_boundary(self):
        code = HARNESS.replace('/* HELPER */',(ROOT/'android/host/steam_lan_results.inc').read_text())
        received = replacement(0x0068EC60,0)
        # This fixture enters immediately after the original packet has filled fields.
        received = received[:received.index(RESULTS_GUARDS[0x0068EC60][0][0])]
        snippets = {'RECEIVE':received,'MISSILE':replacement(0x004EB850,0),
                    'MINIGUN':replacement(0x004EB850,1),'CONSTRUCT':replacement(0x004E3110,0),
                    'DESTROY':replacement(0x004E3920,0),'SNAPSHOT':replacement(0x006939C0,0)}
        out = ROOT/'build/tests'/f'lan-final-counters-{os.getpid()}'
        out.mkdir(parents=True,exist_ok=True)
        env,linker = environment('x64')
        for variant in ('current','before-tick','before-constructor','before-copy-release'):
            actual = code
            for key,snippet in snippets.items():
                if variant=='before-tick' and key in ('MISSILE','MINIGUN'):
                    snippet = RESULTS_GUARDS[0x004EB850][key=='MINIGUN'][0]
                if variant=='before-constructor' and key=='CONSTRUCT':
                    snippet = RESULTS_GUARDS[0x004E3110][0][0]
                if variant=='before-copy-release' and key=='SNAPSHOT':
                    snippet = snippet.replace('crashday_lan_results_reset(_lan_results_car);','')
                actual = actual.replace('/* '+key+' */',snippet)
            path,obj,exe = (out/f'{variant}{ext}' for ext in ('.c','.obj','.exe'))
            path.write_text(actual)
            subprocess.run([str(CLANG),'/nologo','/c','/TC','/std:c11',str(path),f'/Fo{obj}'],check=True,env=env)
            subprocess.run([str(linker),'/nologo',str(obj),f'/OUT:{exe}'],check=True,env=env)
            result = subprocess.run([str(exe)],capture_output=True,text=True,timeout=5)
            if variant=='current':
                self.assertEqual(result.returncode,0,result.stdout+result.stderr)
                print(result.stdout.strip())
            else:
                self.assertEqual(result.returncode,1,result.stdout+result.stderr)
                failure={'before-tick':'received final counts survive last tick',
                         'before-constructor':'new constructor resets abandoned final state',
                         'before-copy-release':'snapshot completion releases protection'}[variant]
                self.assertIn(failure,result.stderr)


if __name__=='__main__':
    unittest.main()
