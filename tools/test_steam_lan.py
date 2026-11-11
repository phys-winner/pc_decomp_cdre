"""Exercise the production LAN transport between real loopback sockets."""
from pathlib import Path
import re
import subprocess
import tempfile
import unittest
from tests.host_environment import CLANG, environment
from lift_crashday import apply_host_adapter, SAVE_IDENTITY_CALLS, SAVE_IDENTITY_RESULT

ROOT = Path(__file__).resolve().parents[1]

class SteamLan(unittest.TestCase):
    def test_client017_stack(self):
        methods = {
            'BReleaseSteamPipe': (1, 1), 'ConnectToGlobalUser': (1, 1),
            'CreateLocalUser': (2, 1), 'ReleaseUser': (2, 0),
            'SetLocalIPBinding': (2, 0), 'SetPostAPIResultInProcess': (1, 0),
            'RemovePostAPIResultInProcess': (1, 0), 'SetCheckCallbackRegisteredInProcess': (1, 0),
        }
        source = (ROOT / 'android/host/steam.c').read_text(encoding='utf-8')
        wrappers = []
        checks = []
        for name, (words, result) in methods.items():
            match = re.search(r'COM_METHOD\(client, ' + name + r', \d+\)\s*\{[^}]*\}', source)
            self.assertIsNotNone(match, name)
            wrappers.append(match.group(0))
            checks.append(f'g_esp=64;client_{name}();assert(g_esp==64+4+4*{words} && g_eax=={result});')
        header = (ROOT / 'android/host/com.h').read_text(encoding='utf-8')
        macro = header[header.index('#define COM_METHOD('):header.index('/* An unimplemented slot:')]
        out = ROOT / 'build/tests/steam-lan'
        out.mkdir(parents=True, exist_ok=True)
        probe = out / 'client017-stack.c'
        probe.write_text(r'''
#include <assert.h>
#include <stdint.h>
static uint32_t memory[64],g_eax,g_esp;
#define MEM32(p) memory[(p)/4]
#define ARG(n) MEM32(g_esp+4+4*(n))
static int void_vm_writable(uint32_t va,uint32_t size){return va && (uint64_t)va+size<=sizeof memory;}
''' + macro + '\n'.join(wrappers) + r'''
int main(void){
    MEM32(68)=128;MEM32(72)=1;MEM32(128)=0;MEM32(132)=0x12345678;
''' + '\n'.join(checks) + r'''
    assert(MEM32(128)==1 && MEM32(132)==0x12345678);
    MEM32(68)=0;g_esp=64;client_CreateLocalUser();assert(g_eax==0 && g_esp==76);
    MEM32(68)=255;g_esp=64;client_CreateLocalUser();assert(g_eax==0 && g_esp==76);
    return 0;
}
''', encoding='utf-8')
        env, linker = environment('x64')
        obj, exe = out / 'client017-stack.obj', out / 'client017-stack.exe'
        subprocess.run([str(CLANG), '/nologo', '/c', '/TC', '/std:c11', str(probe), f'/Fo{obj}'], check=True, env=env)
        subprocess.run([str(linker), '/nologo', str(obj), f'/OUT:{exe}'], check=True, env=env)
        subprocess.run([str(exe)], check=True, timeout=5)

    def test_original_lobby_chat_optional_outputs(self):
        source = (ROOT / 'android/host/steam_lan_matchmaking.inc').read_text(encoding='utf-8')
        start = source.index('COM_METHOD(mm, GetLobbyChatEntry, 7)')
        method = source[start:source.index('COM_METHOD(mm, RequestLobbyData, 2)', start)]
        out = ROOT / 'build/tests/steam-lan'
        out.mkdir(parents=True, exist_ok=True)
        probe = out / 'lobby-chat.c'
        probe.write_text(r'''
#include <assert.h>
#include <stdint.h>
#include <string.h>
static unsigned char memory[256];
static uint32_t args[7];
static struct { unsigned chat_count; struct { uint64_t from; uint32_t size; unsigned char data[4096]; } chats[32]; } steam_lan;
#define ARG(n) args[n]
#define GPTR(p) (memory+(p))
#define MEM32(p) (*(uint32_t*)GPTR(p))
#define COM_METHOD(prefix,name,count) static uint32_t prefix##_##name(void)
#define void_log(...) ((void)0)
static int void_vm_writable(uint32_t va,uint32_t size){return va && (uint64_t)va+size<=sizeof memory;}
static int steam_lobby(int unused){return 1;}
static uint32_t lan_get32(const void *p){uint32_t v;memcpy(&v,p,4);return v;}
static void steam_copy_id(uint32_t va,uint64_t id){memcpy(GPTR(va),&id,8);}
''' + method + r'''
int main(void){
    uint32_t command[3]={400,123,0x01300000};
    steam_lan.chat_count=1;steam_lan.chats[0].from=0x011000010000007bULL;
    steam_lan.chats[0].size=sizeof command;memcpy(steam_lan.chats[0].data,command,sizeof command);
    args[3]=128;args[4]=64;args[5]=16;args[6]=0;
    assert(mm_GetLobbyChatEntry()==sizeof command); /* Original caller: NULL type output. */
    assert(!memcmp(GPTR(64),command,sizeof command));
    assert(!memcmp(GPTR(128),&steam_lan.chats[0].from,8));
    args[3]=0;args[6]=144;assert(mm_GetLobbyChatEntry()==sizeof command && MEM32(144)==1);
    args[6]=0;assert(mm_GetLobbyChatEntry()==sizeof command);
    args[5]=4;assert(mm_GetLobbyChatEntry()==4 && MEM32(64)==400);
    args[6]=255;assert(mm_GetLobbyChatEntry()==0); /* Invalid non-NULL output is rejected. */
    args[6]=0;args[3]=255;assert(mm_GetLobbyChatEntry()==0);
    return 0;
}
''', encoding='utf-8')
        env, linker = environment('x64')
        obj, exe = out / 'lobby-chat.obj', out / 'lobby-chat.exe'
        subprocess.run([str(CLANG), '/nologo', '/c', '/TC', '/std:c11', str(probe), f'/Fo{obj}'], check=True, env=env)
        subprocess.run([str(linker), '/nologo', str(obj), f'/OUT:{exe}'], check=True, env=env)
        subprocess.run([str(exe)], check=True, timeout=5)

    def test_original_save_identity(self):
        units = {0x004F3280: 16, 0x005A36E0: 25, 0x00667680: 44, 0x00667AE0: 44}
        operations = []
        for address, unit in units.items():
            source = (ROOT / f'generated/crashday/functions_{unit:04d}.c').read_text(encoding='utf-8')
            begin = source.index(f'void sub_{address:08X}(void) {{')
            end = source.find('\nvoid sub_', begin + 1)
            body = source[begin:end if end >= 0 else len(source)]
            self.assertEqual(body.count(SAVE_IDENTITY_RESULT), 1)
            original = body.replace(SAVE_IDENTITY_RESULT, SAVE_IDENTITY_CALLS[address])
            self.assertEqual(apply_host_adapter({'name': 'crashday'}, address, original), body)
            self.assertEqual(apply_host_adapter({'name': 'crashday'}, 0, original), original)
            self.assertEqual(apply_host_adapter({'name': 'other'}, address, original), original)
            with self.assertRaises(ValueError):
                apply_host_adapter({'name': 'crashday'}, address, original.replace(SAVE_IDENTITY_CALLS[address], ''))
            operations.append('esp=64; eax=0; MEM32(esp)=128; ' + SAVE_IDENTITY_RESULT + '\n'
                              'assert(eax==128 && esp==68 && MEM32(128)==1 && MEM32(132)==0x01100001u);')
        out = ROOT / 'build/tests/steam-lan'
        out.mkdir(parents=True, exist_ok=True)
        probe = out / 'save-identity.c'
        probe.write_text('#include <assert.h>\n#include <stdint.h>\n'
                         'static uint32_t memory[64];\n#define MEM32(x) memory[(x)/4]\n#define RECOMP_FLAGS_OUT() ((void)0)\n'
                         'int main(void){uint32_t eax,esp;\n' + '\n'.join(operations) + '\nreturn 0;}\n')
        env, linker = environment('x64')
        obj, exe = out / 'save-identity.obj', out / 'save-identity.exe'
        subprocess.run([str(CLANG), '/nologo', '/c', '/TC', '/std:c11', str(probe), f'/Fo{obj}'], check=True, env=env)
        subprocess.run([str(linker), '/nologo', str(obj), f'/OUT:{exe}'], check=True, env=env)
        subprocess.run([str(exe)], check=True, timeout=5)

    def test_host_client(self):
        out = ROOT / 'build/tests/steam-lan'
        out.mkdir(parents=True, exist_ok=True)
        env, linker = environment('x64')
        exe = out / 'steam-lan.exe'
        obj = out / 'steam-lan.obj'
        subprocess.run([str(CLANG), '/nologo', '/c', '/TC', '/std:c11', '/O1', '/D_CRT_SECURE_NO_WARNINGS',
                        str(ROOT / 'tools/tests/test_steam_lan.c'), f'/Fo{obj}'],
                       check=True, cwd=ROOT, env=env)
        subprocess.run([str(linker), '/nologo', str(obj), f'/OUT:{exe}', 'Ws2_32.lib'], check=True, env=env)
        with tempfile.TemporaryDirectory(dir=out) as fixture:
            def identity(path):
                return subprocess.run([str(exe), str(path)], capture_output=True, text=True, check=True, timeout=5).stdout.strip()
            first, second = Path(fixture) / 'first', Path(fixture) / 'second'
            original = identity(first)
            self.assertEqual(original, identity(first))  # independent process restart
            self.assertNotEqual(original, identity(second))
            first.write_bytes(b'CDLI')  # interrupted/corrupt record must be repaired
            repaired = identity(first)
            self.assertEqual(repaired, identity(first))
            self.assertEqual(first.stat().st_size, 12)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=20)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())

if __name__ == '__main__':
    unittest.main()
