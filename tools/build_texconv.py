"""Build the ARM64 on-device DDS converter used by the launcher."""
from concurrent.futures import ThreadPoolExecutor
import hashlib
import json
from pathlib import Path
import subprocess
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
from build_android import CLANG  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/android/texconv"
LIBRARY = OUT / "libcrashdaytex.so"
CXX = CLANG.with_name("clang++.exe")
TARGET = "aarch64-linux-android30"
ASTC = ["-DASTCENC_NEON=1", "-DASTCENC_SVE=0", "-DASTCENC_SSE=0", "-DASTCENC_AVX=0", "-DASTCENC_POPCNT=0", "-DASTCENC_F16C=0"]
COMMON = ["--target=" + TARGET, "-O2", "-fPIC", "-fvisibility=hidden", "-ffunction-sections", "-fdata-sections", "-std=c++17",
          "-ffile-prefix-map=" + str(ROOT) + "=."]


def sha(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def units():
    out = [(p, ASTC) for p in sorted((ROOT / "reference/astcenc").glob("*.cpp"))]
    out += [(ROOT / "reference/etcpak" / n, ["-DBCDEC_STATIC", "-DBCDEC_IMPLEMENTATION"])
            for n in ("ProcessRGB.cpp", "Tables.cpp", "Dither.cpp", "Decode.cpp")]
    out += [(ROOT / "android/texconv/texconv.cpp", ASTC + ["-Wall", "-Wextra", "-Werror"]),
            (ROOT / "android/texconv/texconv_jni.cpp", ["-Wall", "-Wextra", "-Werror"])]
    return out


def compile_unit(unit):
    source, flags = unit
    obj = OUT / "obj" / (source.parent.name + "_" + source.stem + ".o")
    obj.parent.mkdir(parents=True, exist_ok=True)
    result = subprocess.run([str(CXX), *COMMON, *flags, "-c", str(source), "-o", str(obj)], capture_output=True, text=True)
    if result.returncode:
        raise RuntimeError(f"{source.name}: {result.stdout}{result.stderr}")
    return obj


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    with ThreadPoolExecutor(max_workers=12) as pool:
        objects = list(pool.map(compile_unit, units()))
    command = [str(CXX), "--target=" + TARGET, "-shared", "-fuse-ld=lld", "-static-libstdc++", "-Wl,--gc-sections",
               "-Wl,--no-undefined", "-Wl,-z,max-page-size=16384", "-Wl,--build-id=sha1", *map(str, objects),
               "-llog", "-o", str(LIBRARY)]
    result = subprocess.run(command, capture_output=True, text=True)
    if result.returncode:
        raise SystemExit(f"link: {result.stdout}{result.stderr}")
    receipt = {"output": str(LIBRARY), "sha256": sha(LIBRARY), "target": TARGET, "sources": len(objects)}
    LIBRARY.with_suffix(".json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(receipt, indent=2))


if __name__ == "__main__":
    main()
