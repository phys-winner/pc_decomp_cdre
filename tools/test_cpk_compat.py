import argparse
import hashlib
import json
from pathlib import Path
import zipfile

ROOT = Path(__file__).resolve().parents[1]


def sha(path, algorithm):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, algorithm).digest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--original-game", type=Path, default=ROOT / "original/game")
    parser.add_argument("--overlay", type=Path, default=ROOT / "work/converted-central")
    parser.add_argument("--original-exe", type=Path, default=ROOT / "generated/input/crashday.exe")
    parser.add_argument("--derived-exe", type=Path)
    args = parser.parse_args()
    manifest = json.loads((args.overlay / "manifest.json").read_text(encoding="utf-8"))
    assert manifest["format"] in (1, 2), "Unknown converted texture format"
    total = 0
    expected_pe = bytearray(args.original_exe.read_bytes()) if args.derived_exe else None
    for item in manifest["archives"]:
        name = item["name"]
        assert Path(name).name == name and name.endswith(".cpk"), name
        original_path = args.original_game / "data" / name
        converted_path = args.overlay / "data" / name
        original_sha1 = sha(original_path, "sha1")
        converted_sha1 = sha(converted_path, "sha1")
        assert sha(original_path, "sha256").hex() == item["sourceSha256"], name
        assert sha(converted_path, "sha256").hex() == item["outputSha256"], name
        assert converted_path.stat().st_size == item["outputBytes"], name
        if expected_pe is not None:
            first = expected_pe.find(original_sha1)
            assert first >= 0 and expected_pe.find(original_sha1, first + 1) < 0, name
            expected_pe[first:first + 20] = converted_sha1
        converted = 0
        with zipfile.ZipFile(original_path) as source, zipfile.ZipFile(converted_path) as output:
            assert output.testzip() is None, name
            original_entries, converted_entries = source.infolist(), output.infolist()
            assert source.namelist() == output.namelist(), name
            for old, new in zip(original_entries, converted_entries):
                metadata = ("date_time", "comment", "extra", "create_version", "extract_version",
                            "flag_bits", "external_attr", "internal_attr", "compress_type")
                assert all(getattr(old, field) == getattr(new, field) for field in metadata), (name, old.filename)
                old_data, new_data = source.read(old), output.read(new)
                if old.CRC == new.CRC:
                    assert old_data == new_data, (name, old.filename)
                    continue
                assert old.filename.lower().endswith(".dds"), (name, old.filename)
                assert new_data[:4] == b"DDS " and new_data[36:40] == b"H5TC", (name, old.filename)
                assert new_data[44:48] == old_data[84:88], (name, old.filename)
                assert new_data[84:88] in (b"H5E1", b"H5E2", b"H5A4"), (name, old.filename)
                converted += 1
        assert converted == item["textures"], (name, converted, item["textures"])
        total += converted
        print(f"{name}: {len(converted_entries)} entries, {converted} textures, SHA-256 {item['outputSha256']}")
    assert total == 637, total
    if expected_pe is not None:
        assert args.derived_exe.read_bytes() == bytes(expected_pe), "Derived PE contains changes outside CPK SHA-1 records"
        print("Derived PE: only the six expected 20-byte CPK integrity records differ")
    print(f"PASS: {total} converted textures; original resources and integrity rules preserved")


if __name__ == "__main__":
    main()
