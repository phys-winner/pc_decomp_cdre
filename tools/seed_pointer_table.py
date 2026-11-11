import argparse
import json
from pathlib import Path
import struct
import pefile

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("module")
    parser.add_argument("start", type=lambda value: int(value, 0))
    parser.add_argument("end", type=lambda value: int(value, 0))
    parser.add_argument("--code-pointer-runs", action="store_true",
                        help="Seed only consecutive DWORD code pointers, not ordinary bytes in the range")
    args = parser.parse_args()
    if args.end < args.start or (args.end - args.start) % 4:
        raise ValueError("Invalid DWORD table range")
    specs = json.loads((ROOT / "config/modules.json").read_text(encoding="utf-8"))["modules"]
    spec = next(row for row in specs if row["name"] == args.module)
    pe = pefile.PE(str(ROOT / "generated/input" / spec["file"]), fast_load=True)
    base = pe.OPTIONAL_HEADER.ImageBase
    catalog_path = ROOT / "config" / f"{args.module}.functions.json"
    catalog = json.loads(catalog_path.read_text(encoding="utf-8"))
    entries = {row["address"]: row for row in catalog["functions"]}
    ranges = [(args.start, args.end)]
    if args.code_pointer_runs:
        ranges, run_start = [], None
        for address in range(args.start, args.end + 4, 4):
            target = struct.unpack("<I", pe.get_data(address - base, 4))[0]
            section = pe.get_section_by_rva(target - base)
            if section is not None and section.Characteristics & 0x20000000:
                if run_start is None:
                    run_start = address
            else:
                if run_start is not None and address - run_start >= 8:
                    ranges.append((run_start, address - 4))
                run_start = None
    for start, end in ranges:
        for address in range(start, end + 1, 4):
            target = struct.unpack("<I", pe.get_data(address - base, 4))[0]
            section = pe.get_section_by_rva(target - base)
            if section is None or not section.Characteristics & 0x20000000:
                raise ValueError(f"Table target {target:#x} at {address:#x} is not executable")
            entries.setdefault(target, {"address": target, "provenance": f"Pointer table {start:#x}..{end:#x}"})
    catalog["functions"] = [entries[address] for address in sorted(entries)]
    temporary = catalog_path.with_suffix(".json.tmp")
    temporary.write_text(json.dumps(catalog, indent=2) + "\n", encoding="utf-8")
    temporary.replace(catalog_path)
    print(f"{args.module}: {len(entries)} entries after pointer-table seed")


if __name__ == "__main__":
    main()
