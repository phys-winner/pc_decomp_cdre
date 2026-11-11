import argparse
import json
from pathlib import Path
import pefile

from lift_crashday import module_jump_tables
from lift_game import analyze_pe, build_iat_map, BoundedDisassembler

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("module")
    args = parser.parse_args()
    specs = json.loads((ROOT / "config/modules.json").read_text(encoding="utf-8"))["modules"]
    spec = next(row for row in specs if row["name"] == args.module)
    binary = ROOT / "generated/input" / spec["file"]
    pe = pefile.PE(str(binary))
    base = pe.OPTIONAL_HEADER.ImageBase
    info = analyze_pe(str(binary))
    imports = build_iat_map(info)
    decoder = BoundedDisassembler(binary.read_bytes(), info.image_base, info.sections,
                                  jump_tables=module_jump_tables(spec))
    decoder.max_windows = 256
    catalog_path = ROOT / "config" / f"{args.module}.functions.json"
    catalog = json.loads(catalog_path.read_text(encoding="utf-8"))
    entries = {row["address"]: row for row in catalog["functions"]}
    for address, row in list(entries.items()):
        if row.get("provenance") != "PE export":
            continue
        try:
            function = decoder.disassemble_function(address, imports)
        except ValueError:
            function = None
        if function is None or not function.blocks:
            del entries[address]
    for export in getattr(getattr(pe, "DIRECTORY_ENTRY_EXPORT", None), "symbols", []):
        if export.forwarder:
            continue
        address = base + export.address
        section = pe.get_section_by_rva(export.address)
        if section is None or not section.Characteristics & 0x20000000 or address in entries:
            continue
        try:
            function = decoder.disassemble_function(address, imports)
        except ValueError:
            function = None
        if function is None or not function.blocks:
            continue
        name = export.name.decode("ascii", "replace") if export.name else f"#{export.ordinal}"
        entries[address] = {"address": address, "name": name, "provenance": "PE export"}
    catalog["functions"] = [entries[address] for address in sorted(entries)]
    temporary = catalog_path.with_suffix(".json.tmp")
    temporary.write_text(json.dumps(catalog, indent=2) + "\n", encoding="utf-8")
    temporary.replace(catalog_path)
    print(f"{args.module}: {len(entries)} entries after export seed")


if __name__ == "__main__":
    main()
