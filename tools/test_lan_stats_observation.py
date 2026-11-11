"""Execute bounded QA observations and verify exact reproducible lifted anchors."""
import ast
import os
from pathlib import Path
import subprocess
import tempfile
import unittest

from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
HARNESS = r'''
#include <assert.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static unsigned char memory[0x20000], before[0x20000];
#define MEM32(x) (*(uint32_t *)(memory + (x)))
#define MEM8(x) memory[(x)]
static const char *directory;
static unsigned logs, frame = 42, checks;
static char last[512];
static const char *void_data_dir(void) { return directory; }
static int void_vm_readable(uint32_t p, size_t n) { ++checks; return p >= 0x1000 && p <= sizeof memory && n <= sizeof memory - p; }
uint32_t void_input_frame(void) { return frame; }
static void void_log(const char *format, ...) {
    va_list args; va_start(args, format); vsnprintf(last, sizeof last, format, args); va_end(args); ++logs;
}
/* PRODUCTION */
int main(int argc, char **argv) {
    assert(argc == 3); directory = argv[1];
    uint32_t car = 0x1000;
    MEM32(car + 0x7CC0) = 2; MEM32(car + 0x7CCC) = 1;
    MEM32(car + 0x7CC8) = 33; MEM32(car + 0x7CD4) = 4;
    memcpy(before, memory, sizeof memory);
    crashday_lan_stats_observe(0, car, 0);
    if (atoi(argv[2]) == 0) { assert(!logs && !checks); return 0; }
    assert(logs == 1 && strstr(last, "stage=serialize car=1 missile=1/2 minigun=4/33"));
    crashday_lan_stats_observe(1, car, 0);
    crashday_lan_stats_observe(2, car, 2); /* identical tick must stay quiet */
    crashday_lan_stats_observe(4, car, 33);
    assert(logs == 2);
    for (int i = 0; i < 1000; ++i) crashday_lan_stats_observe(2, car, 0);
    assert(logs == 130 && strstr(last, "stage=missile-tick"));
    for (int i = 0; i < 1000; ++i) crashday_lan_stats_observe(4, car, 0);
    assert(logs == 258 && strstr(last, "stage=minigun-tick"));
    crashday_lan_stats_observe(3, car, 0);
    assert(logs == 259 && strstr(last, "frame=42 stage=snapshot car=1"));
    crashday_lan_stats_observe(1, 0x4000, 0);
    assert(logs == 260 && strstr(last, "stage=receive car=2"));
    crashday_lan_stats_observe(99, car, 0);
    crashday_lan_stats_observe(1, UINT32_MAX - 3, 0);
    crashday_lan_stats_observe(1, 0x1FFFF, 0);
    assert(logs == 260 && !memcmp(memory, before, sizeof memory));
    puts("PASS LAN stats: QA marker, independent bounds, unchanged guest state, guarded reads and car correlation");
}
'''


def adapter_namespace():
    source = ROOT / "tools/lift_crashday.py"
    ns = {}
    for node in ast.parse(source.read_text()).body:
        if ((isinstance(node, ast.Assign) and any(isinstance(t, ast.Name) and t.id == "STATS_OBSERVATION" for t in node.targets))
                or (isinstance(node, ast.FunctionDef) and node.name == "apply_stats_observation")):
            exec(compile(ast.Module([node], type_ignores=[]), str(source), "exec"), ns)
    return ns


class LanStatsObservationTest(unittest.TestCase):
    def test_exact_owner_anchors(self):
        ns = adapter_namespace()
        total = 0
        for file in ("functions_0015.c", "functions_0029.c", "functions_0047.c"):
            current = (ROOT / "generated/crashday" / file).read_text()
            import re
            stripped = re.sub(r"    \{ extern void crashday_lan_stats_observe\(unsigned, uint32_t, uint32_t\);\n      crashday_lan_stats_observe\([^;]+; \}\n", "", current)
            for owner, hooks in ns["STATS_OBSERVATION"].items():
                if f"void sub_{owner:08X}(void) {{" not in stripped:
                    continue
                stripped = ns["apply_stats_observation"](owner, stripped)
                total += len(hooks)
            self.assertEqual(stripped, current)
        self.assertEqual(total, 7)
        owner = 0x005D8C20
        with self.assertRaisesRegex(ValueError, "instruction changed"):
            ns["apply_stats_observation"](owner, "void sub_005D8C20(void) { return; }")

    def test_production_observer(self):
        out = ROOT / "build/tests" / f"lan-stats-{os.getpid()}"
        out.mkdir(parents=True, exist_ok=True)
        source = (ROOT / "android/host/steam_lan_stats.inc").read_text()
        (out / "probe.c").write_text(HARNESS.replace("/* PRODUCTION */", source))
        env, linker = environment("x64")
        for cmd in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc", "/c", "probe.c", "/Foprobe.obj"],
                    [str(linker), "/nologo", "probe.obj", "/OUT:probe.exe"]):
            p = subprocess.run(cmd, cwd=out, env=env, capture_output=True, text=True)
            self.assertEqual(p.returncode, 0, p.stdout + p.stderr)
        with tempfile.TemporaryDirectory(prefix="crashday-stats-") as temp:
            for name, marker, expected in [("userdata", True, 0), ("userdata-qa", False, 0), ("userdata-enabled", True, 1), ("notuserdata-qa", True, 0)]:
                directory = Path(temp) / name
                directory.mkdir()
                if marker:
                    (directory / "trace-lan-stats").touch()
                p = subprocess.run([str(out / "probe.exe"), directory.as_posix(), str(expected)], env=env, capture_output=True, text=True)
                self.assertEqual(p.returncode, 0, p.stdout + p.stderr)


if __name__ == "__main__":
    unittest.main()
