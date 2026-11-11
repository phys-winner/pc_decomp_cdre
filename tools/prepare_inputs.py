import hashlib
import json
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    value = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            value.update(chunk)
    return value.hexdigest()


def manifest(root):
    rows = []
    for path in sorted(p for p in root.rglob("*") if p.is_file()):
        rows.append({
            "path": path.relative_to(root).as_posix(),
            "size": path.stat().st_size,
            "sha256": digest(path),
        })
    return rows


def main():
    config = json.loads((ROOT / "config/inputs.json").read_text(encoding="utf-8"))
    source = Path(config["source_root"])
    executable = source / config["main_executable"]
    if digest(executable) != config["main_executable_sha256"]:
        raise SystemExit(f"Input SHA-256 mismatch: {executable}")
    destination = ROOT / config["original_copy"]
    if destination.exists():
        if not destination.is_dir():
            raise SystemExit(f"Not a directory: {destination}")
    else:
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copytree(source, destination)
    source_rows = manifest(source)
    destination_rows = manifest(destination)
    if source_rows != destination_rows:
        raise SystemExit("Original copy differs from the pinned installation")
    output = ROOT / "work/input-manifest.json"
    output.parent.mkdir(parents=True, exist_ok=True)
    temporary = output.with_suffix(".json.tmp")
    temporary.write_text(json.dumps({
        "game": config["game"],
        "version": config["version"],
        "file_count": len(source_rows),
        "total_bytes": sum(row["size"] for row in source_rows),
        "files": source_rows,
    }, indent=2) + "\n", encoding="utf-8")
    temporary.replace(output)
    print(f"Verified {len(source_rows)} files, {sum(row['size'] for row in source_rows)} bytes")


if __name__ == "__main__":
    main()
