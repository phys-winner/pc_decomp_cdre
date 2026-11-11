"""Check every original CRT fmod table target and run its missing tails against x86."""
import json
import math
import struct
import subprocess
import unittest

import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP

from test_render_thread_cores import ROOT, function
from tests.host_environment import CLANG, environment

OUT = ROOT / "build/tests/fmod-dispatch"
PAIRS = ((0., 27.1511), (0., -27.1511), (3., 70.4729), (123.5, 3.), (-123.5, 3.),
         (123.5, -3.), (1.e200, 3.), (-1.e200, 3.), (.25, 1.e30))


class FmodDispatchTest(unittest.TestCase):
    def test_table_dispatch_coverage(self):
        with pefile.PE(str(ROOT / "generated/input/msvcr120.dll"), fast_load=True) as pe:
            table = struct.unpack("<16I", pe.get_data(0x63B20, 64))
        dispatch = (ROOT / "generated/dispatch.c").read_text(encoding="utf-8")
        catalog = json.loads((ROOT / "config/msvcr120.functions.json").read_text())["functions"]
        for address in table:
            self.assertIn(f"{{0x{address:08X}u, sub_{address:08X}}}", dispatch)
        for address in (0x100461C8, 0x1003679A):
            self.assertIn(address, {row["address"] for row in catalog})

    def test_original_x86_and_generated_tails(self):
        generated = (ROOT / "generated/msvcr120/functions_0040.c").read_text(encoding="utf-8")
        header = (ROOT / "android/runtime/recomp_types.h").read_text(encoding="utf-8")
        core = (ROOT / "android/host/core.c").read_text(encoding="utf-8")
        helpers = function(header, "static inline void fp_push_impl(") + "\n"
        helpers += function(header, "static inline double fp_pop_impl(") + "\n"
        helpers += function(core, "void void_fpu_remainder(") + "\n"
        bodies = "\n".join(function(generated, f"void sub_{address:08X}(")
                           for address in (0x100461C8, 0x1003679A))
        source = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
static double g_st[8];static int64_t g_st_i64[8];static int g_fp_top,void_fpu_cmp;
static uint32_t eax,esp;
static void void_lift_trap(uint32_t a,const char *s){fprintf(stderr,"trap %x %s",a,s);abort();}
#define _st g_st
#define _fpu_cmp void_fpu_cmp
#define FK_NONE 0
#define FK_EFLAGS 1
#define RECOMP_REGS_LOCALS
#define RECOMP_ENTER(a)
#define RECOMP_FLAGS_OUT()
#define RECOMP_REGS_OUT()
#define RECOMP_BACKEDGE()
#define fp_push(v) fp_push_impl(g_st,&g_fp_top,(v))
#define fp_pop() fp_pop_impl(g_st,&g_fp_top)
#define fp_xch(i) do { double x=g_st[0];g_st[0]=g_st[i];g_st[i]=x;int64_t y=g_st_i64[0];g_st_i64[0]=g_st_i64[i];g_st_i64[i]=y; } while(0)
/* HELPERS */
/* BODIES */
int main(void){
double pairs[][2]={ /* PAIRS */ };
for(unsigned i=0;i<sizeof pairs/sizeof *pairs;++i){
int initial_top=i==2?-52:3;
g_st[0]=pairs[i][1];g_st[1]=pairs[i][0];g_st[2]=9.125;g_fp_top=initial_top;esp=0x1000;eax=0;
if(pairs[i][0]==0)sub_100461C8();else sub_1003679A();
assert(g_fp_top==initial_top-1 && esp==0x1004 && g_st[1]==9.125);printf("%.17g\n",g_st[0]);
}}
'''.replace("/* HELPERS */", helpers).replace("/* BODIES */", bodies)
        source = source.replace("/* PAIRS */", ",".join(f"{{{x!r},{y!r}}}" for x, y in PAIRS))
        OUT.mkdir(parents=True, exist_ok=True)
        path = OUT / "fmod.c"
        path.write_text(source, encoding="utf-8")
        env, linker = environment("x64")
        for cmd in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
                     "/c", str(path), "/Fo" + str(OUT / "fmod.obj")],
                    [str(linker), "/nologo", str(OUT / "fmod.obj"), "/OUT:" + str(OUT / "fmod.exe")],
                    [str(OUT / "fmod.exe")]):
            result = subprocess.run(cmd, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        actual = [float(x) for x in result.stdout.splitlines()]
        # Unicorn's partial FPREM loses low bits for large exponents; use the real x86 DLL as oracle.
        oracle = OUT / "oracle.c"
        oracle.write_text('#include <windows.h>\n#include <stdio.h>\n#include <assert.h>\n'
                          'int main(int argc,char **argv){assert(argc==2);HMODULE dll=LoadLibraryA(argv[1]);'
                          'assert(dll);double (__cdecl *f)(double,double)=(void*)GetProcAddress(dll,"fmod");'
                          'assert(f);double pairs[][2]={' +
                          ",".join(f"{{{x!r},{y!r}}}" for x,y in PAIRS) +
                          '};for(unsigned i=0;i<sizeof pairs/sizeof *pairs;++i)'
                          'printf("%.17g\\n",f(pairs[i][0],pairs[i][1]));}\n', encoding="utf-8")
        env32, linker32 = environment("x86")
        for cmd in ([str(CLANG), "/nologo", "/Od", "/clang:--target=i686-pc-windows-msvc",
                     "/c", str(oracle), "/Fo" + str(OUT / "oracle.obj")],
                    [str(linker32), "/nologo", str(OUT / "oracle.obj"), "kernel32.lib",
                     "/OUT:" + str(OUT / "oracle.exe")],
                    [str(OUT / "oracle.exe"), str(ROOT / "original/dependencies/msvcr120.dll")]):
            result = subprocess.run(cmd, env=env32, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        oracle_values = [float(x) for x in result.stdout.splitlines()]
        self.assertEqual(actual, oracle_values)
        with pefile.PE(str(ROOT / "generated/input/msvcr120.dll")) as pe:
            mapped = pe.get_memory_mapped_image()
        seen = set()
        for (x, y), value in zip(PAIRS, actual, strict=True):
            self.assertEqual(value, math.fmod(x,y))
            if abs(x) > 1.e100:
                continue
            uc = Uc(UC_ARCH_X86, UC_MODE_32)
            uc.mem_map(0x10000000, (len(mapped) + 4095) & ~4095)
            uc.mem_write(0x10000000, mapped)
            uc.mem_map(0x20000000, 0x10000)
            uc.mem_map(0x30000000, 0x1000)
            uc.mem_write(0x30000300, struct.pack("<3d", y, x, 9.125))
            code = bytes.fromhex("dbe3")
            for address in (0x30000310, 0x30000308, 0x30000300):
                code += bytes.fromhex("dd05") + struct.pack("<I", address)
            # Execute the original computed-jump dispatcher, with its real shared frame.
            code += b"\xe8" + struct.pack("<i", 0x10036790 - (0x30000000 + len(code) + 5))
            for address in (0x30000400, 0x30000408):
                code += bytes.fromhex("dd1d") + struct.pack("<I", address)
            uc.mem_write(0x30000000, code)
            uc.reg_write(UC_X86_REG_ESP, 0x20008000)
            uc.hook_add(UC_HOOK_CODE, lambda u,a,n,d: seen.add(a) if a in (0x100461C8,0x1003679A) else None)
            uc.emu_start(0x30000000, 0x30000000 + len(code), count=10000)
            expected, sentinel = struct.unpack("<2d", uc.mem_read(0x30000400, 16))
            self.assertEqual(sentinel, 9.125)
            self.assertEqual(value, expected, (x, y))
            self.assertEqual(value, math.fmod(x, y))
            self.assertEqual(uc.reg_read(UC_X86_REG_ESP), 0x20008000)
        self.assertEqual(seen, {0x100461C8, 0x1003679A})
        print(f"PASS fmod: all 16 table entries dispatched; {len(PAIRS)} original x86/tail pairs")


if __name__ == "__main__":
    unittest.main()
