from collections import Counter
import hashlib
import json
from pathlib import Path
import zipfile

ROOT = Path(__file__).resolve().parents[1]


def sha(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def main():
    archives = []
    extensions = Counter()
    methods = Counter()
    dds_formats = Counter()
    for path in sorted((ROOT / "original/game/data").glob("*.cpk")):
        entries = []
        with zipfile.ZipFile(path) as archive:
            for info in archive.infolist():
                suffix = Path(info.filename).suffix.lower() or "<none>"
                methods[info.compress_type] += 1
                if not info.is_dir():
                    extensions[suffix] += 1
                row = {
                    "path": info.filename,
                    "size": info.file_size,
                    "compressed_size": info.compress_size,
                    "method": info.compress_type,
                    "crc32": f"{info.CRC:08x}",
                }
                if suffix == ".dds" and not info.is_dir():
                    header = archive.read(info)[:128]
                    fourcc = header[84:88] if len(header) >= 88 and header[:4] == b"DDS " else b"<invalid>"
                    row["dds_fourcc"] = fourcc.decode("ascii", "backslashreplace")
                    dds_formats[row["dds_fourcc"]] += 1
                entries.append(row)
        archives.append({
            "file": path.name,
            "size": path.stat().st_size,
            "sha256": sha(path),
            "entries": entries,
        })
    output = ROOT / "work/resource-inventory.json"
    temporary = output.with_suffix(".json.tmp")
    temporary.write_text(json.dumps({
        "source": "original/game/data",
        "container_policy": "KEEP_CONTAINER",
        "archives": archives,
        "extensions": dict(sorted(extensions.items())),
        "compression_methods": dict(sorted(methods.items())),
        "dds_fourcc": dict(sorted(dds_formats.items())),
    }, indent=2) + "\n", encoding="utf-8")
    temporary.replace(output)
    print(f"Indexed {len(archives)} CPK archives, {sum(methods.values())} entries")


if __name__ == "__main__":
    main()
