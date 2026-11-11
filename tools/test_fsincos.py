"""Compare Crashday's production FSINCOS lift with its original x86 instruction."""
import math
import os
from pathlib import Path
import struct
import subprocess
import sys
import unittest

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EFLAGS

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from lift_game import CheckedLifter

CLANG = Path(os.environ["LOCALAPPDATA"]) / "Android/Sdk/ndk/27.2.12479018/toolchains/llvm/prebuilt/windows-x86_64/bin/clang-cl.exe"


def host_environment():
    vswhere = Path(r"C:\Program Files (x86)\Microsoft Visual Studio\Installer\vswhere.exe")
    installation = Path(subprocess.check_output(
        [str(vswhere), "-latest", "-products", "*", "-property", "installationPath"], text=True).strip())
    msvc = sorted((installation / "VC/Tools/MSVC").iterdir())[-1]
    sdk = Path(r"C:\Program Files (x86)\Windows Kits\10")
    version = sorted((sdk / "Lib").iterdir())[-1].name
    env = os.environ.copy()
    env["PATH"] = str(msvc / "bin/Hostx64/x64") + os.pathsep + env["PATH"]
    env["INCLUDE"] = ";".join(map(str, [
        msvc / "include", sdk / f"Include/{version}/ucrt",
        sdk / f"Include/{version}/shared", sdk / f"Include/{version}/um",
    ]))
    env["LIB"] = ";".join(map(str, [
        msvc / "lib/x64", sdk / f"Lib/{version}/ucrt/x64", sdk / f"Lib/{version}/um/x64",
    ]))
    return env, msvc / "bin/Hostx64/x64/link.exe"


def inline_function(header, signature):
    start = header.index(signature)
    brace = header.index("{", start)
    depth = 0
    for position in range(brace, len(header)):
        if header[position] == "{":
            depth += 1
        elif header[position] == "}":
            depth -= 1
            if depth == 0:
                return header[start:position + 1]
    raise ValueError(f"Unterminated inline function: {signature}")


class FsincosTest(unittest.TestCase):
    def test_original_instruction_and_production_lift(self):
        address = 0x12031A84
        pe = pefile.PE(str(ROOT / "generated/input/d3dx9_43.dll"), fast_load=True)
        original = pe.get_data(address - pe.OPTIONAL_HEADER.ImageBase, 2)
        self.assertEqual(original, bytes.fromhex("d9fb"))
        decoder = Cs(CS_ARCH_X86, CS_MODE_32)
        decoder.detail = True
        lifted = "\n".join(CheckedLifter().lift_instruction(next(decoder.disasm(original, address))))
        header = (ROOT / "android/runtime/recomp_types.h").read_text(encoding="utf-8")
        push = inline_function(header, "static inline void fp_push_impl(")
        angles = (0.0, 1e-6, -1e-6, .01, -.01, math.pi / 180, -math.pi / 180,
                  math.pi / 4, -math.pi / 4, math.pi / 2, math.pi, 2 * math.pi, 10.0, -10.0)
        out = ROOT / "build/x87-oracle"
        out.mkdir(parents=True, exist_ok=True)
        source = out / "fsincos.c"
        source.write_text(
            "#include <assert.h>\n#include <math.h>\n#include <stdio.h>\n#include <stdint.h>\n"
            "int64_t g_st_i64[8];\n" + push + "\n"
            "#define fp_push(v) fp_push_impl(_st,&_fp_top,(v))\n"
            "int main(void){\n"
            "double angles[]={" + ",".join(repr(angle) for angle in angles) + "};\n"
            "for(unsigned i=0;i<sizeof angles/sizeof *angles;++i){"
            "double _st[8]={angles[i],9.125};int _fp_top=1;int _fpu_cmp=0;\n" + lifted +
            "\nassert(_fp_top==2 && _st[2]==9.125);printf(\"%.17g %.17g\\n\",_st[0],_st[1]);}\n"
            "return 0;}\n", encoding="utf-8")
        env, linker = host_environment()
        commands = (
            [str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
             "/c", str(source), "/Fo" + str(out / "fsincos.obj")],
            [str(linker), "/nologo", str(out / "fsincos.obj"), "/OUT:" + str(out / "fsincos.exe")],
            [str(out / "fsincos.exe")],
        )
        for command in commands:
            result = subprocess.run(command, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        actual = [tuple(map(float, line.split())) for line in result.stdout.splitlines()]
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
            cosine, sine, sentinel = struct.unpack("<ddd", uc.mem_read(0x10400, 24))
            self.assertEqual(sentinel, 9.125)
            self.assertEqual(uc.reg_read(UC_X86_REG_EFLAGS), 0x202)
            self.assertAlmostEqual(cosine, math.cos(angle), places=12)
            self.assertAlmostEqual(sine, math.sin(angle), places=12)
            self.assertAlmostEqual(pair[0], cosine, places=12, msg=f"cosine ST(0), angle {angle}")
            self.assertAlmostEqual(pair[1], sine, places=12, msg=f"sine ST(1), angle {angle}")

    def test_every_generated_fsincos_uses_the_verified_order(self):
        wrong = "_st[0] = cos(_a); fp_push(sin(_a))"
        correct = "_st[0] = sin(_a); fp_push(cos(_a))"
        found = 0
        for module in ("d3dx9", "d3dx9_31"):
            for source in (ROOT / "generated" / module).glob("functions_*.c"):
                text = source.read_text(encoding="utf-8")
                self.assertNotIn(wrong, text, str(source))
                for line in text.splitlines():
                    if "fsincos" in line.lower():
                        self.assertIn(correct, line, str(source))
                        found += 1
        self.assertEqual(found, 46)


if __name__ == "__main__":
    unittest.main()
