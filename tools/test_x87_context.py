"""Run the production register snapshots through nested x87 context changes."""
from pathlib import Path
import subprocess
import sys
import unittest

import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EFLAGS, UC_X86_REG_FPSW

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from tests.host_environment import CLANG, environment

OUT = ROOT / "build/tests/x87-context"

HARNESS = r'''
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VOID_HIDDEN
#define VOID_GUEST_BASE 0x2000000000ull
#define ICALL_TRACE_SIZE 32
typedef union { uint64_t u64[2]; } xmm_t;
typedef struct recomp_ehframe recomp_ehframe_t;
recomp_ehframe_t *g_eh_frames;
uint32_t g_eh_obj, g_eh_info;
#ifdef RECOMP_X87_WINDOW
#define RECOMP_X87_SLOTS 256
#define g_st (*(double (*)[8])(g_st_win + g_fp_sp))
#define g_st_i64 (*(int64_t (*)[8])(g_st_i64_win + g_fp_sp))
#endif
void void_lift_trap(uint32_t address, const char *instruction)
{
    (void)address; (void)instruction; exit(99);
}
/* ACTUAL */
static int initial_environment(void)
{
    struct { void_regs regs; uint32_t stack_hi; } thread = {0}, *t = &thread;
    uint32_t tib = 0;
    /* THREAD_INIT */
    return t->regs.fpu_cw != 0x027F || t->regs.fpu_tw != 0xFFFF || t->regs.fpu_sw ||
        t->regs.fpu_cs || t->regs.fpu_ds || t->regs.fpu_opcode || t->regs.fpu_ip || t->regs.fpu_op;
}

static void fill(unsigned seed)
{
    g_fpu_cw = (uint16_t)(0x027F + seed * 0x400);
    g_fpu_sw = (uint16_t)(0x81 + seed);
    g_fpu_tw = (uint16_t)(0xFF00 + seed);
    g_fpu_cs = (uint16_t)(0x10 + seed);
    g_fpu_ds = (uint16_t)(0x20 + seed);
    g_fpu_opcode = (uint16_t)(0x300 + seed);
    g_fpu_ip = 0x400000 + seed;
    g_fpu_op = 0x500000 + seed;
    g_fp_round_mask = UINT64_MAX - seed;
    g_fp_store_mask = UINT64_MAX - 2 * seed;
    g_fp_top = 1;
    void_fpu_cmp = (int)(0x10000 + seed * 0x100);
    g_st[0] = 9007199254740992.0;
    g_st_i64[0] = INT64_C(9007199254740992) + seed;
}

static int check(unsigned seed)
{
#define CHECK(field, expected) do { if ((field) != (expected)) { \
    printf("FAIL %s after restoring context %u\n", #field, seed); return 1; } } while (0)
    CHECK(g_fpu_cw, (uint16_t)(0x027F + seed * 0x400));
    CHECK(g_fpu_sw, (uint16_t)(0x81 + seed));
    CHECK(g_fpu_tw, (uint16_t)(0xFF00 + seed));
    CHECK(g_fpu_cs, (uint16_t)(0x10 + seed));
    CHECK(g_fpu_ds, (uint16_t)(0x20 + seed));
    CHECK(g_fpu_opcode, (uint16_t)(0x300 + seed));
    CHECK(g_fpu_ip, 0x400000 + seed);
    CHECK(g_fpu_op, 0x500000 + seed);
    CHECK(g_fp_round_mask, UINT64_MAX - seed);
    CHECK(g_fp_store_mask, UINT64_MAX - 2 * seed);
    CHECK(g_fp_top, 1);
    CHECK(void_fpu_cmp, (int)(0x10000 + seed * 0x100));
    CHECK(g_st[0], 9007199254740992.0);
    CHECK(g_st_i64[0], INT64_C(9007199254740992) + seed);
    return 0;
}

int main(void)
{
    void_regs outer = {0}, callback = {0};
    if (initial_environment()) return 2;
    fill(1); void_regs_save(&outer);
    fill(2); void_regs_save(&callback);
    fill(3);
    void_regs_load(&callback); if (check(2)) return 1;
    void_regs_load(&outer); if (check(1)) return 1;
    /* A second owner must restore the same state after the nested return. */
    fill(4); void_regs_load(&callback); if (check(2)) return 1;
    uint16_t statuses[] = {0xFFFF, 0x81FF, 0x4700, 0x3800, 0x80FF, 0};
    for (unsigned i = 0; i < sizeof statuses / sizeof *statuses; ++i) {
        g_fpu_sw = statuses[i]; void_fpu_cmp = 0x10000 | statuses[i];
        g_flag_a = 0xAD7;
        void_fpu_clear_exceptions(0x150A8FE9);
        if (g_flag_a != 0xAD7 || g_fp_top != 1) return 3;
        printf("fnclex %u %u\n", g_fpu_sw, (unsigned)void_fpu_cmp & 0xFFFF);
    }
    puts("PASS nested callback and thread x87 environment/shadow snapshots");
    return 0;
}
'''


class X87ContextTest(unittest.TestCase):
    def test_production_snapshots(self):
        header = (ROOT / "android/host/host.h").read_text(encoding="utf-8")
        core = (ROOT / "android/host/core.c").read_text(encoding="utf-8")
        threads = (ROOT / "android/host/threads.c").read_text(encoding="utf-8")
        struct = header[header.index("typedef struct void_regs {"):header.index("} void_regs;") + len("} void_regs;")]
        start = core.index("VOID_HIDDEN uint32_t g_eax")
        actual = struct + "\n" + core[start:core.index("static void fpu_store_m80(")]
        start = core.index("void void_fpu_clear_exceptions(")
        actual += core[start:core.index("/* ----------------------------------------------------------- FPREM/FPREM1 */", start)]
        start = threads.index("    t->regs.esp =")
        initial = threads[start:threads.index("    pthread_mutex_lock(&threads_lock);", start)]
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "probe.c").write_text(HARNESS.replace("/* ACTUAL */", actual).replace("/* THREAD_INIT */", initial), encoding="utf-8")
        env, linker = environment("x64")
        pe = pefile.PE(str(ROOT / "generated/input/msvcrt.dll"), fast_load=True)
        opcode = pe.get_data(0x150A8FE9 - pe.OPTIONAL_HEADER.ImageBase, 2)
        pe.close()
        self.assertEqual(opcode, bytes.fromhex("dbe2"))
        expected = []
        for status in (0xFFFF, 0x81FF, 0x4700, 0x3800, 0x80FF, 0):
            uc = Uc(UC_ARCH_X86, UC_MODE_32)
            uc.mem_map(0x10000, 4096)
            uc.mem_write(0x10000, opcode)
            uc.reg_write(UC_X86_REG_FPSW, status)
            uc.reg_write(UC_X86_REG_EFLAGS, 0xAD7)
            uc.emu_start(0x10000, 0x10002, count=1)
            self.assertEqual(uc.reg_read(UC_X86_REG_EFLAGS), 0xAD7)
            expected.append(uc.reg_read(UC_X86_REG_FPSW))

        def run(command):
            result = subprocess.run([str(part) for part in command], cwd=OUT, env=env,
                                    capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            return result.stdout

        for window in (False, True):
            with self.subTest(window=window):
                flags = ["/DRECOMP_X87_WINDOW"] if window else []
                run([CLANG, "/nologo", "/O2", "/W4", "/WX", "/std:c11", *flags,
                     "/clang:--target=x86_64-pc-windows-msvc", "/c", "probe.c", "/Foprobe.obj"])
                run([linker, "/nologo", "probe.obj", "/OUT:probe.exe"])
                output = run([OUT / "probe.exe"])
                self.assertIn("PASS nested callback and thread x87", output)
                actual_status = [tuple(map(int, line.split()[1:])) for line in output.splitlines()
                                 if line.startswith("fnclex ")]
                self.assertEqual(actual_status, [(status, status) for status in expected])


if __name__ == "__main__":
    unittest.main()
