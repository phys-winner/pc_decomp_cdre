"""Packaging must reject an otherwise valid 4 KiB ELF before signing it."""
import struct
import unittest
from build_apk import check_elf


class ElfCheck(unittest.TestCase):
    def fixture(self, alignment=16384, offset=0):
        data = bytearray(120)
        data[:6] = b"\x7fELF\x02\x01"
        struct.pack_into("<HH", data, 16, 3, 183)
        struct.pack_into("<Q", data, 32, 64)
        struct.pack_into("<HH", data, 54, 56, 1)
        struct.pack_into("<IIQQQQQQ", data, 64, 1, 5, offset, 0, 0, 120, 120, alignment)
        return data

    def test_alignment(self):
        check_elf(self.fixture())
        for data in (self.fixture(4096), self.fixture(16384, 1), self.fixture(20000), b"bad", self.fixture()[:110]):
            with self.assertRaises(ValueError):
                check_elf(data)


if __name__ == "__main__":
    unittest.main()
