"""Preparing external PE inputs must never replace the canonical translation."""
import hashlib
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

import lift_crashday


class PrepareImagesTest(unittest.TestCase):
    def test_preparation_preserves_code_reports_and_dispatch(self):
        for matches in (True, False):
            with self.subTest(matches=matches), tempfile.TemporaryDirectory() as temporary:
                root = Path(temporary)
                (root / "config").mkdir()
                directory = root / "generated/example"
                directory.mkdir(parents=True)
                digest = hashlib.sha256(b"prepared image").hexdigest()
                spec = {"name": "example", "file": "example.dll", "sha256": "original"}
                (root / "config/modules.json").write_text(json.dumps({"modules": [spec]}))
                (directory / "report.json").write_text(json.dumps({
                    "status": "GENERATED", "original_sha256": "original",
                    "image_sha256": digest if matches else "stale",
                }))
                (directory / "functions.c").write_bytes(b"canonical translation\r\n")
                (root / "generated/dispatch.c").write_bytes(b"canonical dispatch\r\n")
                before = {p: p.read_bytes() for p in (root / "generated").rglob("*") if p.is_file()}
                with patch.object(lift_crashday, "ROOT", root), \
                        patch("sys.argv", ["lift_crashday.py", "--prepare-only"]), \
                        patch.object(lift_crashday, "prepare", return_value=(root / "image", digest)) as prepare, \
                        patch.object(lift_crashday, "emit_functions") as emit, \
                        patch.object(lift_crashday, "merge_dispatch") as dispatch:
                    if matches:
                        lift_crashday.main()
                    else:
                        with self.assertRaisesRegex(ValueError, "does not match canonical"):
                            lift_crashday.main()
                    prepare.assert_called_once_with(spec, root)
                    emit.assert_not_called()
                    dispatch.assert_not_called()
                self.assertEqual(before, {p: p.read_bytes() for p in before})


if __name__ == "__main__":
    unittest.main()
