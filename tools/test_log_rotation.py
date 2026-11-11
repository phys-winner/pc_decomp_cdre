"""Exercise the production logger's in-session size bound and retained startup/crash tail."""
import subprocess
import unittest

from test_render_thread_cores import ROOT
from tests.host_environment import CLANG, environment

HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
typedef int pthread_mutex_t;
#define PTHREAD_MUTEX_INITIALIZER 0
static int locked, rotations, fail_rename;
static void pthread_mutex_lock(int *p){(void)p;assert(!locked);locked=1;}
static void pthread_mutex_unlock(int *p){(void)p;assert(locked);locked=0;}
static int posix_rename(const char *from,const char *to){
    assert(locked);if(fail_rename)return -1;
    remove(to);++rotations;return rename(from,to);
}
#define rename posix_rename
/* Match Android's byte-preserving fopen and zero-size line-buffer support. */
static FILE *android_fopen(const char *path,const char *mode){return fopen(path,!strcmp(mode,"w")?"wb":mode);}
static int android_setvbuf(FILE *f,char *p,int mode,size_t size){(void)p;(void)mode;(void)size;return setvbuf(f,NULL,_IONBF,0);}
#define fopen android_fopen
#define setvbuf android_setvbuf
/* ACTUAL */
static void check(const char *path,const char *first,const char *last){
    char text[8192];FILE *f=fopen(path,"rb");assert(f);
    size_t n=fread(text,1,sizeof text-1,f);assert(n<=LOG_LIMIT);text[n]=0;fclose(f);
    assert(strstr(text,first)==text);if(last)assert(strstr(text,last));
}
int main(void){
    void_log_open("session.log");void_log("START build 123 device test");
    for(unsigned i=0;i<500;++i)void_log("frame %u: 0123456789012345678901234567890123456789012345678901234567890123456789",i);
    char huge[5000];memset(huge,'x',sizeof huge-1);huge[sizeof huge-1]=0;void_log("%s",huge);
    void_log("FATAL guest trap 100461C8");void_log_flush();
    assert(rotations>3);check("session.log","START build 123","FATAL guest trap");
    check("session.log.tail","START build 123",NULL);
    void_log_open("session.log");void_log("START next build");
    for(unsigned i=0;i<100;++i)void_log("frame %u 012345678901234567890123456789012345678901234567890123456789",i);
    void_log_flush();check("session.log","START next build",NULL);
    fail_rename=1;
    for(unsigned i=0;i<100;++i)void_log("frame %u 012345678901234567890123456789012345678901234567890123456789",i);
    assert(!log_file && !locked);check("session.log","START next build",NULL);
    void_log_open(NULL);puts("PASS bounded logs: repeated rotation, startup and fatal tail, session reset, safe rename failure");
}
'''


class LogRotationTest(unittest.TestCase):
    def test_production_logger(self):
        core = (ROOT / "android/host/core.c").read_text(encoding="utf-8")
        actual = core[core.index("static pthread_mutex_t log_lock"):core.index("/* ------------------------------------------------------------- dispatch */")]
        actual = actual.replace("16 * 1024 * 1024", "4096").replace("64 * 1024", "512")
        out = ROOT / "build/tests/log-rotation"
        out.mkdir(parents=True, exist_ok=True)
        source = out / "logger.c"
        source.write_text(HARNESS.replace("/* ACTUAL */", actual), encoding="utf-8")
        env, linker = environment("x64")
        for cmd in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
                     "/c", str(source), "/Fo" + str(out / "logger.obj")],
                    [str(linker), "/nologo", str(out / "logger.obj"), "/OUT:" + str(out / "logger.exe")],
                    [str(out / "logger.exe")]):
            result = subprocess.run(cmd, cwd=out, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, (result.stdout + result.stderr)[-3000:])
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
