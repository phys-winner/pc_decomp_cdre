"""Oracle for an inactive research scan; production must retain its original loop."""
import ctypes
import os
from pathlib import Path
import random
import re
import struct
import subprocess
import unittest

import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_INTR
from unicorn.x86_const import UC_X86_REG_EIP, UC_X86_REG_EAX, UC_X86_REG_EBP, UC_X86_REG_ESP, UC_X86_REG_EDI, UC_X86_REG_ESI, UC_X86_REG_EDX, UC_X86_REG_ECX, UC_X86_REG_XMM3, UC_X86_REG_XMM4

from lift_crashday import apply_host_adapter
from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]


def apply_research_adapter(text):
    """Build the measured, rejected prototype only inside the oracle."""
    anchor = "L_00682850:\n"
    if text.count(anchor) != 1 or text.count("void sub_006824D0(void) {") != 1:
        raise ValueError("Raycast rejection loop owner changed")
    return text.replace(anchor, anchor +
        "    { extern uint32_t crashday_raycast_reject_run(uint32_t, uint32_t, uint32_t);\n"
        "      uint32_t skipped = eax > esi && eax - esi >= 4u ? crashday_raycast_reject_run(esp, edi, MEM32(ebp + 8)) : 0;\n"
        "      if (skipped) { esi += skipped; ecx += skipped * 72u;\n"
        "          MEM32(esp + 0x10) = esi; MEM32(esp + 0x18) = ecx; g_backedges += skipped; } } /* Batch certain triangle misses; keep original hit tests. */\n", 1)


class RaycastRejectTest(unittest.TestCase):
    def test_original_x86_rejections(self):
        out = ROOT / "build/tests" / f"raycast-reject-{os.getpid()}"
        out.mkdir(parents=True, exist_ok=True)
        (out / "probe.c").write_text('#include "crashday_raycast_reject.h"\n'
            '__declspec(dllexport) uint32_t reject_probe(const unsigned char*f,const unsigned char*v,'
            'const float*d,const float*lo,const float*hi,int boxes){'
            'return crashday_ray_reject_prefix(f,v,12,4,d,lo,hi,boxes);}\n')
        env, linker = environment("x64")
        for command in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:-ffp-contract=off", "/c", "probe.c", f"/I{ROOT / 'android/host'}", "/Foprobe.obj"],
                        [str(linker), "/nologo", "/DLL", "probe.obj", "/OUT:probe.dll"]):
            result = subprocess.run(command, cwd=out, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        library = ctypes.CDLL(str(out / "probe.dll"))
        probe = library.reject_probe
        probe.argtypes = [ctypes.c_void_p] * 5 + [ctypes.c_int]
        probe.restype = ctypes.c_uint32
        uc = Uc(UC_ARCH_X86, UC_MODE_32)
        with pefile.PE(str(ROOT / "generated/input/crashday.exe")) as pe:
            self.assertEqual(pe.get_data(0x682850 - pe.OPTIONAL_HEADER.ImageBase, 5), bytes.fromhex("f30f1041f8"))
            image = pe.get_memory_mapped_image()
            uc.mem_map(pe.OPTIONAL_HEADER.ImageBase, (len(image) + 4095) & ~4095)
            uc.mem_write(pe.OPTIONAL_HEADER.ImageBase, image)
        uc.mem_map(0x10000, 0x80000)
        # Traps only at exits from the unmodified normal/AABB instruction fragment.
        exits = (0x682C96, 0x682C8A, 0x68298B)
        for address in exits:
            uc.mem_write(address, b"\xCC")
        uc.hook_add(UC_HOOK_INTR, lambda machine, number, data: machine.emu_stop())
        rng = random.Random(0x6824D0)
        special = (0, 0x80000000, 1, 0x80000001, 0x7FC01234, 0x7F800001, 0x7F800000, 0xFF800000, 0x7F7FFFFF)
        checked = 0
        for case in range(2048):
            faces, vertices = bytearray(288), bytearray(384)
            vector = [rng.uniform(-10, 10) for _ in range(3)]
            lower = [rng.uniform(-10, 0) for _ in range(3)]
            upper = [rng.uniform(0, 10) for _ in range(3)]
            for i in range(4):
                struct.pack_into("<3H", faces, i * 72, i * 3, i * 3 + 1, i * 3 + 2)
                struct.pack_into("<3f", faces, i * 72 + 60, *(rng.uniform(-2, 2) for _ in range(3)))
            for i in range(12):
                struct.pack_into("<3f", vertices, i * 32, *(rng.uniform(-30, 30) for _ in range(3)))
            if case % 3 == 0:
                struct.pack_into("<I", faces, rng.randrange(4) * 72 + 60 + 4 * rng.randrange(3), special[rng.randrange(len(special))])
            if case % 7 == 0:
                struct.pack_into("<I", vertices, rng.randrange(12) * 32 + 4 * rng.randrange(3), special[rng.randrange(len(special))])
            d, lo, hi = (ctypes.create_string_buffer(struct.pack("<3f", *v)) for v in (vector, lower, upper))
            f, v = ctypes.create_string_buffer(bytes(faces)), ctypes.create_string_buffer(bytes(vertices))
            boxes = case % 2
            skipped = probe(f, v, d, lo, hi, boxes)
            self.assertLessEqual(skipped, 3)
            uc.mem_write(0x40000, bytes(faces)); uc.mem_write(0x20000, bytes(vertices))
            uc.mem_write(0x10144, bytes([boxes])); uc.mem_write(0x81008, struct.pack("<I", 0x10000))
            uc.mem_write(0x12054, lo.raw[:12]); uc.mem_write(0x12074, hi.raw[:12])
            uc.mem_write(0x80024, d.raw[8:12]); uc.mem_write(0x80070, struct.pack("<I", 0x20000))
            for index in range(skipped):
                normal = 0x40000 + index * 72 + 68
                uc.mem_write(0x80018, struct.pack("<I", normal))
                for reg, value in ((UC_X86_REG_EAX, 4), (UC_X86_REG_EBP, 0x81000), (UC_X86_REG_ESP, 0x80000),
                    (UC_X86_REG_EDI, 0x12000), (UC_X86_REG_ESI, index), (UC_X86_REG_EDX, 0x11000), (UC_X86_REG_ECX, normal),
                    (UC_X86_REG_XMM3, int.from_bytes(d.raw[:4], "little")), (UC_X86_REG_XMM4, int.from_bytes(d.raw[4:8], "little"))):
                    uc.reg_write(reg, value)
                uc.emu_start(0x682850, 0x682D70, count=200)
                self.assertIn(uc.reg_read(UC_X86_REG_EIP) - 1, exits[:2], f"Unsafe native rejection in case {case}, triangle {index}")
                checked += 1
        self.assertGreater(checked, 1000)
        print(f"PASS original x86 normal/AABB fragment: {checked} claimed native misses from 2048 scenes")

    def test_complete_lifted_function(self):
        sources = {}
        for unit in (2, 7, 40, 46):
            text = (ROOT / f"generated/crashday/functions_{unit:04}.c").read_text()
            for address in re.findall(r"^void sub_([0-9A-F]{8})\(void\)", text, re.M):
                sources[address] = text
        addresses = ("0040BD20", "0040BDB0", "00465F20", "00466030", "00635110", "006351D0", "00682000", "0040A6C0")
        helpers = "\n".join(method(sources[a], f"void sub_{a}(void)") for a in addresses)
        original = method(sources["006824D0"], "void sub_006824D0(void)")
        # A/B rejected this candidate: neither production path may activate it.
        self.assertNotIn("crashday_raycast_reject_run", sources["006824D0"])
        self.assertEqual(apply_host_adapter({"name": "crashday"}, 0x6824D0, original), original)
        self.assertNotIn("0x006824D0", (ROOT / "tools/lift_crashday.py").read_text())
        hook = apply_research_adapter("void sub_006824D0(void) {\nL_00682850:\n}")
        insertion = hook.split("L_00682850:\n", 1)[1][:-1]
        candidate = apply_research_adapter(original)
        self.assertEqual(candidate.count(insertion), 1)
        with self.assertRaisesRegex(ValueError, "loop owner changed"):
            apply_research_adapter(original.replace("L_00682850:", "changed:"))
        out = ROOT / "build/tests" / f"raycast-reject-{os.getpid()}"
        out.mkdir(parents=True, exist_ok=True)
        runtime = (ROOT / "android/runtime/recomp_types.h").read_text()
        runtime = runtime.replace('#error "This header is the ARM64 runtime model; x86 builds use native/recomp_types.h"', "")
        runtime = runtime.replace(method(runtime, "static inline uint64_t __rdtsc(void)"), "")
        (out / "recomp_types_host.h").write_text(runtime)
        with pefile.PE(str(ROOT / "generated/input/crashday.exe"), fast_load=True) as pe:
            (out / "constants.bin").write_bytes(pe.get_data(0x808000 - pe.OPTIONAL_HEADER.ImageBase, 0x3000))
        production = (ROOT / "android/host/crashday_raycast.c").read_text().replace('#include "host.h"', "")
        production = production.replace("crashday_raycast_reject_run(", "crashday_raycast_reject_run_impl(", 1)
        harness = (ROOT / "tools/tests/test_raycast_reject.c").read_text()
        harness = harness.replace("/* HELPERS */", helpers)
        harness = harness.replace("/* PRODUCTION */", production)
        harness = harness.replace("/* ORIGINAL */", original.replace("void sub_006824D0(void)", "void raycast_original(void)", 1))
        harness = harness.replace("/* CANDIDATE */", candidate.replace("void sub_006824D0(void)", "void raycast_candidate(void)", 1))
        (out / "oracle.c").write_text(harness)
        env, linker = environment("x64")
        commands = ([str(CLANG), "/nologo", "/O2", "/std:c11", "/w", "/clang:-ffp-contract=off",
                     "/clang:-fno-strict-aliasing", "/c", "oracle.c", f"/I{ROOT / 'android/host'}", "/Fooracle.obj"],
                    [str(linker), "/nologo", "oracle.obj", "/OUT:oracle.exe"],
                    [str(out / "oracle.exe"), "constants.bin"])
        for command in commands:
            result = subprocess.run(command, cwd=out, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())
        arm = [str(CLANG.with_name("clang.exe")), "--target=aarch64-linux-android30", "-O2",
               "-ffp-contract=off", "-fno-strict-aliasing", "-fwrapv", "-w", "oracle.c",
               f"-I{ROOT / 'android/host'}", "-o", "oracle-arm64", "-lm"]
        result = subprocess.run(arm, cwd=out, env=env, capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(f"ARM64 oracle compiled: {out / 'oracle-arm64'} (execution requires the coordinated test device)")


if __name__ == "__main__":
    unittest.main()
