"""An explicit unchanged lobby refresh must complete; passive heartbeats stay quiet."""
import os
from pathlib import Path
import subprocess
import unittest

from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]

HARNESS = r'''
#include <assert.h>
/* TRANSPORT */
static lan_context host;
static uint32_t arguments[2];
#define ARG(n) arguments[n]
#define COM_METHOD(a,b,n) static uint32_t a##_##b(void)
static lan_lobby *steam_lobby(int n){return lan_lobby_find(&steam_lan,ARG(n)|((uint64_t)ARG(n+1)<<32));}
/* REQUEST */
static void wait_pair(unsigned ms){
    uint64_t end=lan_now()+ms;
    while(lan_now()<end){lan_pump(&host);lan_pump(&steam_lan);Sleep(1);}
}
static void clear_events(void){steam_lan.event_read=steam_lan.event_write;}
static unsigned completions(uint64_t lobby){
    unsigned count=0;
    for(unsigned n=steam_lan.event_read;n!=steam_lan.event_write;++n){
        lan_event *e=&steam_lan.events[n%256];
        if(e->type==505 && lan_get64(e->data)==lobby && lan_get64(e->data+8)==lobby){
            assert(e->data[16]==1);++count;
        }
    }
    return count;
}
#define CHECK(x,label) do{if(!(x)){fprintf(stderr,"FAIL: %s\n",label);return 1;}}while(0)
int main(void){
    CHECK(lan_init(&host,htonl(0x7F000008),123),"host socket init");
    CHECK(lan_init(&steam_lan,htonl(0x7F000009),456),"client socket init");
    CHECK(lan_create(&host,2,4),"host create");
    uint64_t id=host.joined;lan_lobby *h=lan_lobby_find(&host,id);
    lan_set_key(h->data,LAN_KEYS,"name","refresh regression");
    unsigned char body[4096];int size=lan_snapshot(h,body,sizeof body);
    CHECK(size>0 && lan_receive_state(&steam_lan,id,host.id,host.bind_ip,body,size),"initial metadata");
    CHECK(lan_join(&steam_lan,id),"join request");wait_pair(150);
    lan_lobby *l=lan_lobby_find(&steam_lan,id);CHECK(l && l->count==2 && !steam_lan.join_call,"joined metadata");
    arguments[0]=(uint32_t)id;arguments[1]=(uint32_t)(id>>32);
    size=lan_snapshot(h,body,sizeof body);clear_events();
    CHECK(lan_receive_state(&steam_lan,id,host.id,host.bind_ip,body,size),"passive identical snapshot");
    CHECK(!completions(id),"unchanged passive heartbeat is silent");
    CHECK(mm_RequestLobbyData()==1 && l->data_requests==1,"explicit request is pending");
    CHECK(!completions(id),"request completion remains asynchronous");
    wait_pair(100);
    CHECK(completions(id)==1 && l->data_requests==0,"unchanged explicit request emits completion");
    clear_events();lan_receive_state(&steam_lan,id,host.id,host.bind_ip,body,size);
    CHECK(!completions(id),"passive silence resumes after completion");
    CHECK(mm_RequestLobbyData()==1 && mm_RequestLobbyData()==1 && l->data_requests==2,"two explicit requests tracked");
    wait_pair(100);
    CHECK(completions(id)==1 && !l->data_requests,"both replies complete with existing callback coalescing");

    clear_events();CHECK(mm_RequestLobbyData()==1,"request before malformed reply");
    CHECK(!lan_receive_state(&steam_lan,id,host.id,host.bind_ip,body,size-1),"truncated reply rejected");
    CHECK(!lan_receive_state(&steam_lan,id,steam_lan.id,host.bind_ip,body,size),"spoofed reply rejected");
    CHECK(l->data_requests==1 && !completions(id),"invalid replies do not consume pending completion");
    wait_pair(100);CHECK(completions(id)==1 && !l->data_requests,"valid reply completes pending request");

    clear_events();lan_set_key(h->data,LAN_KEYS,"name","changed metadata");
    CHECK(mm_RequestLobbyData()==1,"changed request sent");wait_pair(100);
    CHECK(completions(id)==1 && !l->data_requests,"changed reply completes exactly once");
    clear_events();uint32_t saved_ip=l->ip;l->ip=0;
    CHECK(mm_RequestLobbyData()==0 && !l->data_requests,"failed send creates no pending completion");
    l->ip=saved_ip;arguments[0]^=1;
    CHECK(mm_RequestLobbyData()==0 && !completions(id),"unknown lobby fails without callback");
    arguments[0]^=1;l->owner=steam_lan.id;
    CHECK(mm_RequestLobbyData()==1 && !l->data_requests && completions(id)==1,"owner local refresh still completes");
    lan_shutdown(&steam_lan);lan_shutdown(&host);
    puts("PASS lobby refresh: unchanged explicit completion, passive silence, repeated requests, rejected replies, changed data and send/owner boundaries");
    return 0;
}
'''


class LobbyDataRefresh(unittest.TestCase):
    def test_production_request_and_reply(self):
        core=(ROOT/'android/host/steam_lan.inc').read_text()
        request=method((ROOT/'android/host/steam_lan_matchmaking.inc').read_text(),'COM_METHOD(mm, RequestLobbyData, 2)')
        old=core.replace('if(changed || requested)lan_event_data(c,id,id);','if(changed)lan_event_data(c,id,id);')
        self.assertNotEqual(core,old,'cannot restore the old missing completion')
        out=ROOT/'build/tests'/f'lobby-refresh-{os.getpid()}'
        out.mkdir(parents=True,exist_ok=True)
        env,linker=environment('x64')
        for name,transport in [('current',core),('before',old)]:
            path,obj,exe=(out/f'{name}{ext}' for ext in ('.c','.obj','.exe'))
            path.write_text(HARNESS.replace('/* TRANSPORT */',transport).replace('/* REQUEST */',request))
            subprocess.run([str(CLANG),'/nologo','/c','/TC','/std:c11','/D_CRT_SECURE_NO_WARNINGS',str(path),f'/Fo{obj}'],check=True,env=env)
            subprocess.run([str(linker),'/nologo',str(obj),f'/OUT:{exe}','Ws2_32.lib'],check=True,env=env)
            result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=10)
            if name=='current':
                self.assertEqual(result.returncode,0,result.stdout+result.stderr)
                print(result.stdout.strip())
            else:
                self.assertEqual(result.returncode,1,result.stdout+result.stderr)
                self.assertIn('unchanged explicit request emits completion',result.stderr)


if __name__=='__main__':unittest.main()
