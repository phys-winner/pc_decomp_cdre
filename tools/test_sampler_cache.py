"""Overflow the production GLES sampler cache without leaking or unbinding a draw."""
import subprocess
import unittest
import os
from pathlib import Path

from test_anisotropy import ROOT, HARNESS, actual
from tests.host_environment import CLANG, environment

MOCKS = r'''
#include <stdlib.h>
static GLuint unit_sampler[32], actual_binding[32];
static unsigned char live[513];
static unsigned allocations,deletions,live_count,peak;
static void glGenSamplers(int n,GLuint *s){
    assert(n==1);
    for(unsigned i=1;i<=512;++i)if(!live[i]){
        live[i]=1;*s=i;++allocations;++live_count;if(live_count>peak)peak=live_count;return;
    }
    fputs("FAIL sampler cache leaked beyond 512 live GL objects\n",stderr);exit(42);
}
static void glDeleteSamplers(int n,const GLuint *s){
    assert(n==1 && *s && *s<=512 && live[*s]);
    live[*s]=0;++deletions;--live_count;
    for(unsigned u=0;u<32;++u)if(actual_binding[u]==*s)actual_binding[u]=0;
}
static void bind(unsigned unit,GLuint sampler){
    assert(live[sampler]);
    if(unit_sampler[unit]!=sampler){actual_binding[unit]=sampler;unit_sampler[unit]=sampler;}
}
'''
MAIN = r'''
int main(void){
    uint32_t ss[14]={0};
    for(unsigned i=0;i<512;++i){ss[4]=i+1;assert(sampler_for(ss,0,1,0));}
    assert(sampler_count==512 && allocations==512 && !deletions);
    for(unsigned u=0;u<32;++u)bind(u,sampler_cache[u].sampler);
    for(unsigned i=0;i<5000;++i){
        GLuint before[32];memcpy(before,actual_binding,sizeof before);
        ss[4]=i+513;GLuint s=sampler_for(ss,0,1,0);
        /* Prior units of the same draw must remain physically bound. */
        assert(!memcmp(before,actual_binding,sizeof before));
        for(unsigned u=0;u<32;++u)assert(live[unit_sampler[u]] && unit_sampler[u]==actual_binding[u]);
        unsigned created=allocations;assert(sampler_for(ss,0,1,0)==s && allocations==created);
        bind(i%32,s); /* caller cache must also work with recycled GL names */
    }
    assert(sampler_count==512 && live_count==512 && peak==512 && deletions==5000);
    for(unsigned i=0;i<512;++i)glDeleteSamplers(1,&sampler_cache[i].sampler);
    assert(!live_count && allocations==deletions);
    puts("PASS sampler cache: 5000 replacements, 512 live limit, current-draw bindings, hits and recycled IDs");
}
'''


class SamplerCacheTest(unittest.TestCase):
    def test_production_cache(self):
        gl = Path(os.environ.get("CRASHDAY_TEST_GL", ROOT / "android/host/d3d9_gl.c")).read_text(encoding="utf-8")
        device = (ROOT / "android/host/d3d9_device.c").read_text(encoding="utf-8")
        harness = HARNESS[:HARNESS.index("int main(void)")]
        harness = harness.replace("static void glGenSamplers(int n, GLuint *s) { assert(n == 1); *s = 1; }", "/* MOCKS */")
        harness = harness.replace("static void glDeleteSamplers(int n, const GLuint *s) { (void)n; (void)s; }", "")
        harness = harness.replace("static GLuint unit_sampler[32];", "")
        out = ROOT / "build/tests/sampler-cache"
        out.mkdir(parents=True, exist_ok=True)
        (out / "probe.c").write_text((harness + MAIN).replace("/* MOCKS */", MOCKS).replace("/* ACTUAL */", actual(gl, device)), encoding="utf-8")
        env, linker = environment("x64")
        for cmd in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
                     "/c", "probe.c", "/Foprobe.obj"],
                    [str(linker), "/nologo", "probe.obj", "/OUT:probe.exe"], [str(out / "probe.exe")]):
            result = subprocess.run(cmd, cwd=out, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
