"""Execute the original x86 VC12 memcpy, saving CRCs for the ARM64 binding check."""
from pathlib import Path
import struct
import unittest
import zlib

import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EIP, UC_X86_REG_ESP, UC_X86_REG_EAX

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/memcpy-oracle.bin"


class MemcpyOracleTest(unittest.TestCase):
    def test_original_x86(self):
        uc = Uc(UC_ARCH_X86, UC_MODE_32)
        with pefile.PE(str(ROOT / "generated/input/msvcr120.dll")) as pe:
            base = pe.OPTIONAL_HEADER.ImageBase
            data = pe.get_memory_mapped_image()
            uc.mem_map(base, (len(data) + 4095) & ~4095)
            uc.mem_write(base, data)
        uc.mem_map(0x20000000, 0x20000)
        uc.mem_map(0x30000000, 0x2000)
        uc.mem_map(0x40000000, 0x1000)
        before = bytes((i * 29 + i // 97) & 255 for i in range(65536))
        records = []
        for size in (0, 1, 2, 3, 4, 7, 8, 15, 16, 31, 32, 127, 128, 129, 255, 256, 1023, 4096, 16384):
            for align in range(16):
                for mode in range(3):
                    src = 8192 + align
                    dst = 32768 + 15 - align if mode == 0 else src + 3 if mode == 1 else src - 3
                    uc.mem_write(0x20000000, before)
                    uc.mem_write(0x30001000, struct.pack("<4I", 0x40000000, 0x20000000 + dst, 0x20000000 + src, size))
                    uc.mem_write(0x100DF7B4, struct.pack("<I", 0))
                    uc.reg_write(UC_X86_REG_ESP, 0x30001000)
                    uc.emu_start(0x1000F594, 0x40000000, count=100000)
                    self.assertEqual(uc.reg_read(UC_X86_REG_EIP), 0x40000000)
                    self.assertEqual(uc.reg_read(UC_X86_REG_EAX), 0x20000000 + dst)
                    self.assertEqual(uc.reg_read(UC_X86_REG_ESP), 0x30001004)
                    actual = bytes(uc.mem_read(0x20000000, 65536))
                    expected = bytearray(before)
                    expected[dst:dst + size] = before[src:src + size]
                    self.assertEqual(actual, expected)
                    records.append(struct.pack("<4I", src, dst, size, zlib.crc32(actual)))
        OUT.parent.mkdir(parents=True, exist_ok=True)
        OUT.write_bytes(b"MCPY" + struct.pack("<I", len(records)) + b"".join(records))
        print(f"Original x86 memcpy: {len(records)} alignment/size/overlap cases; ARM64 fixture: {OUT}")


if __name__ == "__main__":
    unittest.main()
