"""Execute original minigun initialization/firing fragments on reused memory."""
import ast
import os
from pathlib import Path
import re
import subprocess
import unittest

from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
RESET = "    MEM32(esi + 0x48C8) = 0; /* Initialize cumulative shots on every gun construction. */\n"


def fragment(source, first, last):
    lines = source.splitlines(keepends=True)
    start = next(i for i, line in enumerate(lines) if f"/* 0x{first}:" in line)
    end = next(i for i, line in enumerate(lines[start:], start) if f"/* 0x{last}:" in line)
    return "".join(lines[start:end + 1])


HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
static uint32_t memory[0x5200/4], before[0x5200/4], g_mxcsr;
#define MEM32(x) memory[(x)/4]
#define MEM8(x) (((unsigned char *)memory)[(x)])
typedef union { uint32_t u32[4]; uint64_t u64[2]; float f32[4]; } xmm_t;
static xmm_t _xmm[3];
/* RUNTIME */
static void construct(void) { uint32_t esi=0; /* CONSTRUCTOR */ }
static void fire(void) {
    uint32_t esi=0; _xmm[2].f32[0]=1.0f;
    /* SHOT */
}
static uint32_t fired(void) { return (uint32_t)sse_cvt_i32((double)sse_f32(MEM32(0x48C8)),1); }
int main(void) {
    const uint32_t poison[] = {0xffffffffu,0x7fc01234u,0x7f800000u,0xff800000u,0x42f60000u,0};
    for (unsigned p=0; p<sizeof poison/sizeof *poison; ++p) {
        for (unsigned i=0; i<sizeof memory/sizeof *memory; ++i) memory[i]=0x59a731ceu+i;
        MEM32(0x48C8)=poison[p]; memcpy(before,memory,sizeof memory);
        construct();
        assert(fired()==0);
        /* Original neighboring initializers retain their own behavior. */
        for (unsigned i=0; i<sizeof memory; ++i) {
            if ((i>=0x48C0 && i<0x48CC) || i==0x48CC || i==0x48CE) continue;
            assert(MEM8(i)==((unsigned char *)before)[i]);
        }
        for (unsigned shot=1; shot<=800; ++shot) { fire(); assert(fired()==shot); }
        construct(); assert(fired()==0); /* new object in the same allocation */
        fire(); assert(fired()==1);
    }
    puts("PASS minigun counter: poisoned/reused allocation, untouched neighboring bytes, 800 real increments, reconstruct reset");
}
'''


class MinigunCounterTest(unittest.TestCase):
    def test_checked_regeneration(self):
        lift = ROOT / "tools/lift_crashday.py"
        fn = next(node for node in ast.parse(lift.read_text()).body
                  if isinstance(node, ast.FunctionDef) and node.name == "apply_host_adapter")
        namespace = {}
        exec(compile(ast.Module([fn], type_ignores=[]), str(lift), "exec"), namespace)
        current = (ROOT / "generated/crashday/functions_0008.c").read_text()
        self.assertEqual(current.count(RESET), 1)
        original = current.replace(RESET, "")
        patched = namespace["apply_host_adapter"]({"name": "crashday"}, 0x0046F1A0, original)
        self.assertEqual(patched, current)
        with self.assertRaisesRegex(ValueError, "initializer changed"):
            namespace["apply_host_adapter"]({"name": "crashday"}, 0x0046F1A0, "void missing(void) {}")

    def test_production_counter_and_old_failure(self):
        source = (ROOT / "generated/crashday/functions_0008.c").read_text()
        init = fragment(source, "0046F6ED", "0046F708")
        shot = fragment(source, "0046FF76", "0046FF82")
        runtime = (ROOT / "android/runtime/recomp_types.h").read_text()
        converter = runtime[runtime.index("static inline int32_t sse_cvt_i32("):]
        converter = converter[:converter.index("\n}") + 2]
        as_float = re.search(r"static inline float\s+sse_f32[^\n]+", runtime).group(0)
        body = HARNESS.replace("/* RUNTIME */", as_float + "\n" + converter).replace("/* SHOT */", shot)
        out = ROOT / "build/tests" / f"minigun-counter-{os.getpid()}"
        out.mkdir(parents=True, exist_ok=True)
        env, linker = environment("x64")
        for name, initialization, succeeds in [("fixed", init, True), ("old", init.replace(RESET, ""), False)]:
            (out / f"{name}.c").write_text(body.replace("/* CONSTRUCTOR */", initialization))
            for cmd in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc", "/c", f"{name}.c", f"/Fo{name}.obj"],
                        [str(linker), "/nologo", f"{name}.obj", f"/OUT:{name}.exe"]):
                p = subprocess.run(cmd, cwd=out, env=env, capture_output=True, text=True)
                self.assertEqual(p.returncode, 0, p.stdout + p.stderr)
            p = subprocess.run([str(out / f"{name}.exe")], env=env, capture_output=True, text=True)
            if succeeds:
                self.assertEqual(p.returncode, 0, p.stdout + p.stderr)
            else:
                self.assertNotEqual(p.returncode, 0, "Original omitted initializer unexpectedly passed")


if __name__ == "__main__":
    unittest.main()
