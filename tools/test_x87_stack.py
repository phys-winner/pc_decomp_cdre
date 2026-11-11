"""Differential x86 oracle for the other multi-operand x87 lifts used by Crashday."""
import math
from pathlib import Path
import struct
import subprocess
import unittest

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EFLAGS

from test_fsincos import ROOT, CheckedLifter, CLANG, host_environment, inline_function


def lifted_instruction(module, address, opcode):
    pe = pefile.PE(str(ROOT / "generated/input" / module), fast_load=True)
    original = pe.get_data(address - pe.OPTIONAL_HEADER.ImageBase, 2)
    if original != bytes.fromhex(opcode):
        raise AssertionError(f"Unexpected bytes at {address:#x}: {original.hex()}")
    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    decoder.detail = True
    return original, "\n".join(CheckedLifter().lift_instruction(next(decoder.disasm(original, address))))


def compile_lift(name, lifted, values, setup, output):
    header = (ROOT / "android/runtime/recomp_types.h").read_text(encoding="utf-8")
    helpers = inline_function(header, "static inline void fp_push_impl(")
    helpers += "\n" + inline_function(header, "static inline double fp_pop_impl(")
    out = ROOT / "build/x87-oracle"
    out.mkdir(parents=True, exist_ok=True)
    source = out / f"{name}.c"
    source.write_text(
        "#include <assert.h>\n#include <math.h>\n#include <stdio.h>\n#include <stdint.h>\n"
        "int64_t g_st_i64[8];\n" + helpers + "\n"
        "#define fp_push(v) fp_push_impl(_st,&_fp_top,(v))\n"
        "#define fp_pop() fp_pop_impl(_st,&_fp_top)\n"
        "int main(void){\n" + values + "\n" + setup + "\n" + lifted + "\n" + output + "\nreturn 0;}\n",
        encoding="utf-8")
    env, linker = host_environment()
    commands = (
        [str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
         "/c", str(source), "/Fo" + str(out / f"{name}.obj")],
        [str(linker), "/nologo", str(out / f"{name}.obj"), "/OUT:" + str(out / f"{name}.exe")],
        [str(out / f"{name}.exe")],
    )
    for command in commands:
        result = subprocess.run(command, env=env, capture_output=True, text=True)
        if result.returncode:
            raise AssertionError(result.stdout + result.stderr)
    return [tuple(map(float, line.split())) for line in result.stdout.splitlines()]


class X87StackTest(unittest.TestCase):
    def test_fptan_pushes_one_above_tangent(self):
        address = 0x1509989D
        original, lifted = lifted_instruction("msvcrt.dll", address, "d9f2")
        angles = (0.0, 1e-6, -1e-6, .01, -.01, math.pi / 180, -math.pi / 180,
                  math.pi / 4, -math.pi / 4, math.pi, 2 * math.pi, 10.0, -10.0)
        actual = compile_lift(
            "fptan", lifted,
            "double angles[]={" + ",".join(repr(angle) for angle in angles) + "};\n"
            "for(unsigned i=0;i<sizeof angles/sizeof *angles;++i){",
            "double _st[8]={angles[i],9.125};int _fp_top=1;int _fpu_cmp=0;",
            "assert(_fp_top==2 && _st[2]==9.125);printf(\"%.17g %.17g\\n\",_st[0],_st[1]);}")
        for angle, pair in zip(angles, actual, strict=True):
            uc = Uc(UC_ARCH_X86, UC_MODE_32)
            uc.mem_map(0x10000, 4096)
            code = bytes.fromhex("dbe3dd05") + struct.pack("<I", 0x10308)
            code += bytes.fromhex("dd05") + struct.pack("<I", 0x10300) + original
            for target in (0x10400, 0x10408, 0x10410):
                code += bytes.fromhex("dd1d") + struct.pack("<I", target)
            uc.mem_write(0x10000, code)
            uc.mem_write(0x10300, struct.pack("<dd", angle, 9.125))
            uc.reg_write(UC_X86_REG_EFLAGS, 0x202)
            uc.emu_start(0x10000, 0x10000 + len(code), count=20)
            one, tangent, sentinel = struct.unpack("<ddd", uc.mem_read(0x10400, 24))
            self.assertEqual((one, sentinel), (1.0, 9.125))
            self.assertEqual(uc.reg_read(UC_X86_REG_EFLAGS), 0x202)
            self.assertAlmostEqual(pair[0], one, places=12, msg=f"1.0 ST(0), angle {angle}")
            self.assertAlmostEqual(pair[1], tangent, places=11, msg=f"tan ST(1), angle {angle}")

    def test_fpatan_uses_atan2_old_st1_old_st0_and_pops(self):
        address = 0x1509E775
        original, lifted = lifted_instruction("msvcrt.dll", address, "d9f3")
        pairs = ((1.0, 1.0), (1.0, -1.0), (-1.0, 1.0), (-1.0, -1.0),
                 (1.0, 0.0), (-1.0, 0.0), (.125, 2.0), (-3.0, .007))
        actual = compile_lift(
            "fpatan", lifted,
            "double points[][2]={" + ",".join("{" + repr(x) + "," + repr(y) + "}" for x, y in pairs) + "};\n"
            "for(unsigned i=0;i<sizeof points/sizeof *points;++i){",
            "double _st[8]={points[i][0],points[i][1],9.125};int _fp_top=2;int _fpu_cmp=0;",
            "assert(_fp_top==1 && _st[1]==9.125);printf(\"%.17g\\n\",_st[0]);}")
        for (x, y), (result,) in zip(pairs, actual, strict=True):
            uc = Uc(UC_ARCH_X86, UC_MODE_32)
            uc.mem_map(0x10000, 4096)
            code = bytes.fromhex("dbe3dd05") + struct.pack("<I", 0x10310)
            code += bytes.fromhex("dd05") + struct.pack("<I", 0x10308)
            code += bytes.fromhex("dd05") + struct.pack("<I", 0x10300) + original
            for target in (0x10400, 0x10408):
                code += bytes.fromhex("dd1d") + struct.pack("<I", target)
            uc.mem_write(0x10000, code)
            uc.mem_write(0x10300, struct.pack("<ddd", x, y, 9.125))
            uc.reg_write(UC_X86_REG_EFLAGS, 0x202)
            uc.emu_start(0x10000, 0x10000 + len(code), count=20)
            expected, sentinel = struct.unpack("<dd", uc.mem_read(0x10400, 16))
            self.assertEqual(sentinel, 9.125)
            self.assertEqual(uc.reg_read(UC_X86_REG_EFLAGS), 0x202)
            self.assertAlmostEqual(expected, math.atan2(y, x), places=12)
            self.assertAlmostEqual(result, expected, places=11, msg=f"atan2({y}, {x})")


if __name__ == "__main__":
    unittest.main()
