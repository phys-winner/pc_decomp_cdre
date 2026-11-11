import argparse
import json
from pathlib import Path
import pefile

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("module")
    args = parser.parse_args()
    specs = json.loads((ROOT / "config/modules.json").read_text(encoding="utf-8"))["modules"]
    spec = next(row for row in specs if row["name"] == args.module)
    binary = ROOT / "generated/input" / spec["file"]
    pe = pefile.PE(str(binary), fast_load=True)
    base = pe.OPTIONAL_HEADER.ImageBase
    catalog_path = ROOT / "config" / f"{args.module}.functions.json"
    catalog = json.loads(catalog_path.read_text(encoding="utf-8")) if catalog_path.exists() else {"functions": []}
    entries = {row["address"]: row for row in catalog["functions"]}
    for section in pe.sections:
        if not section.Characteristics & 0x20000000:
            continue
        raw = section.get_data()
        for pattern in (b"\x8b\xff\x55\x8b\xec", b"\x55\x8b\xec"):
            offset = 1
            while True:
                offset = raw.find(pattern, offset)
                if offset < 0:
                    break
                if raw[offset - 1] in (0xCC, 0xC3, 0xC2):
                    address = base + section.VirtualAddress + offset
                    entries.setdefault(address, {"address": address, "provenance": "Function prologue after RET/INT3"})
                offset += 1
    rows = [entries[address] for address in sorted(entries)]
    catalog["functions"] = rows
    temporary = catalog_path.with_suffix(".json.tmp")
    temporary.write_text(json.dumps(catalog, indent=2) + "\n", encoding="utf-8")
    temporary.replace(catalog_path)
    print(f"{args.module}: {len(rows)} proven function entries")


if __name__ == "__main__":
    main()
