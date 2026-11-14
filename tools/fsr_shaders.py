"""Embed the pinned, unmodified AMD FSR headers for the GLES shader compiler."""
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def generate_fsr1(folder):
    source = ROOT / "reference/fsr1"
    manifest = json.loads((source / "source.json").read_text(encoding="utf-8"))
    parts = ["/* Generated from reference/fsr1; AMD MIT license is retained in both headers. */\n"]
    for file, name in (("ffx_a.h", "fsr1_types_source"), ("ffx_fsr1.h", "fsr1_filter_source")):
        data = (source / file).read_bytes()
        if hashlib.sha256(data).hexdigest() != manifest["files"][file]:
            raise ValueError("Pinned FSR1 source changed: " + file)
        shader = data.decode("utf-8")
        if file == "ffx_fsr1.h":
            # GLES requires unsigned literals for assignments to uvec components.
            for original, fixed in (("con3[2]=con3[3]=0;", "con3[2]=con3[3]=0u;"),
                                    ("con[2]=0;", "con[2]=0u;"), ("con[3]=0;", "con[3]=0u;")):
                if shader.count(original) != 1:
                    raise ValueError("FSR1 GLES literal seam changed: " + original)
                shader = shader.replace(original, fixed)
        parts.append("static const char " + name + "[] =\n")
        parts.extend(json.dumps(line, ensure_ascii=True) + "\n" for line in shader.splitlines(True))
        parts.append(";\n")
    result = "".join(parts)
    target = Path(folder) / "fsr1_programs.inc"
    if not target.exists() or target.read_text(encoding="utf-8") != result:
        target.write_text(result, encoding="utf-8")
    return target
