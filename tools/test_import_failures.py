"""Verify that every formerly trapping optional import has an explicit implementation."""
from pathlib import Path
import re
import unittest

ROOT = Path(__file__).resolve().parents[1]


class ImportFailuresTest(unittest.TestCase):
    def test_all_96_baseline_gaps_are_covered(self):
        baseline = (ROOT / "tools/tests/import-gaps.txt").read_text(encoding="utf-8")
        missing = set(re.findall(r"import ([^!]+)!(\S+) has no host implementation", baseline))
        self.assertEqual(len(missing), 96)
        unsupported = (ROOT / "android/host/unsupported.c").read_text(encoding="utf-8")
        source = unsupported + (ROOT / "android/host/threads.c").read_text(encoding="utf-8")
        source += (ROOT / "android/host/rawinput.c").read_text(encoding="utf-8")
        absent = sorted((dll, name) for dll, name in missing if name not in source)
        self.assertEqual(absent, [])
        self.assertNotIn("void_lift_trap", unsupported)
        self.assertIn("optional import failures and cdecl wsprintfW PASS", unsupported)

    def test_special_abis_and_aliases(self):
        source = (ROOT / "android/host/unsupported.c").read_text(encoding="utf-8")
        self.assertEqual(source.count("WINAPI_EXPORT_AS("), 15)
        self.assertIn("RAW_EXPORT(U32, wsprintfW)", source)
        self.assertIn("g_esp += 4;", source)
        self.assertIn("WINAPI_EXPORT(K32, GetNumaHighestNodeNumber, 1)", source)
        threads = (ROOT / "android/host/threads.c").read_text(encoding="utf-8")
        self.assertIn("RAW_EXPORT(K32, FreeLibraryAndExitThread)", threads)
        self.assertIn("t->exit_code = ARG(1);", threads)
        builder = (ROOT / "tools/build_android.py").read_text(encoding="utf-8")
        self.assertIn('"unsupported.c"', builder)


if __name__ == "__main__":
    unittest.main()
