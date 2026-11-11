"""Run the production dlmalloc unmap adapter against complete and trimmed page maps."""
import os
from pathlib import Path
import subprocess
import unittest

from test_render_thread_cores import ROOT, function
from tests.host_environment import CLANG, environment

HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define PAGES (1u<<20)
#define GVA(p) ((uint32_t)(uintptr_t)(p))
enum {ST_FREE,ST_RESERVE,ST_COMMIT};
static unsigned char page_state[PAGES];
static uint32_t page_alloc[PAGES],page_protect[PAGES];
static int vm_lock,locked;
static void pthread_mutex_lock(int *p){(void)p;assert(!locked);locked=1;}
static void pthread_mutex_unlock(int *p){(void)p;assert(locked);locked=0;}
static uint32_t release_locked(uint32_t p){
    assert(locked && page_alloc[p]==p);uint32_t q=p;
    while(q<PAGES && page_state[q]!=ST_FREE && page_alloc[q]==p){page_state[q]=0;++q;}
    return q-p;
}
static void decommit_range(uint32_t first,uint32_t last){assert(locked && first<=last);}
/* ACTUAL */
static void map(uint32_t p,uint32_t n){for(uint32_t i=p;i<p+n;++i){page_state[i]=ST_COMMIT;page_alloc[i]=p;page_protect[i]=4;}}
static int drop(uint32_t p,uint32_t n){return guest_sys_free((void*)(uintptr_t)(p<<12),(size_t)n<<12);}
static void expect(uint32_t p,uint32_t n,unsigned char state){
    for(uint32_t i=p;i<p+n;++i)assert(page_state[i]==state);
}
int main(void){
    map(16,64);map(80,64);map(144,64);
    assert(drop(48,160)==0);expect(16,32,ST_COMMIT);expect(48,32,ST_RESERVE);expect(80,128,ST_FREE);
    assert(drop(16,32)==0);expect(16,192,ST_FREE);
    map(16,64);map(80,64);map(144,64);assert(drop(16,192)==0);expect(16,192,ST_FREE);
    map(16,64);assert(drop(16,128)==-1);expect(16,64,ST_COMMIT);
    assert(drop(32,16)==0);expect(16,16,ST_COMMIT);expect(32,16,ST_RESERVE);expect(48,32,ST_COMMIT);
    assert(drop(48,32)==0);assert(drop(16,16)==0);expect(16,64,ST_FREE);
    assert(guest_sys_free((void*)0x10001,4096)==-1);
    assert(guest_sys_free((void*)0x10000,0)==-1);
    assert(guest_sys_free((void*)0x10000,SIZE_MAX)==-1);
    assert(!locked);puts("PASS heap unmap: merged allocations, partial tail/head/interior, empty reservation, invalid-range atomicity");
}
'''


class HeapReleaseTest(unittest.TestCase):
    def test_production_unmap(self):
        path = Path(os.environ.get("CRASHDAY_TEST_MEMORY", ROOT / "android/host/memory.c"))
        source = path.read_text(encoding="utf-8")
        # Skip the forward declaration before dlmalloc's source.
        body = function(source, "static int guest_sys_free(void *p, size_t size)\n{")
        out = ROOT / "build/tests/heap-release-host"
        out.mkdir(parents=True, exist_ok=True)
        test = out / "heap.c"
        test.write_text(HARNESS.replace("/* ACTUAL */", body), encoding="utf-8")
        env, linker = environment("x64")
        for cmd in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
                     "/c", str(test), "/Fo" + str(out / "heap.obj")],
                    [str(linker), "/nologo", str(out / "heap.obj"), "/OUT:" + str(out / "heap.exe")],
                    [str(out / "heap.exe")]):
            result = subprocess.run(cmd, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
