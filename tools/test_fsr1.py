"""Run production AMD EASU/RCAS on the selected Android GPU."""
import argparse
from pathlib import Path
import subprocess

from build_android import CLANG, ROOT
from fsr_shaders import generate_fsr1


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--serial", required=True)
    args = parser.parse_args()
    out = ROOT / "build/tests/fsr1"
    out.mkdir(parents=True, exist_ok=True)
    generate_fsr1(out)
    executable = out / "fsr1"
    subprocess.run([str(CLANG), "--target=aarch64-linux-android26", "-O2", "-ffp-contract=off",
                    "-I" + str(out), "-I" + str(ROOT / "android/host"),
                    str(ROOT / "tools/tests/test_fsr1.c"), "-o", str(executable), "-lEGL", "-lGLESv3", "-lm"], check=True)
    adb = ["adb", "-s", args.serial]
    target = "/data/local/tmp/crashday-fsr1-check"
    subprocess.run([*adb, "push", str(executable), target], check=True, capture_output=True)
    try:
        subprocess.run([*adb, "shell", "chmod", "755", target], check=True)
        result = subprocess.run([*adb, "shell", target], capture_output=True, text=True, timeout=60)
        print(result.stdout + result.stderr, end="")
        (out / "result.txt").write_text(result.stdout + result.stderr, encoding="utf-8")
        raise SystemExit(result.returncode)
    finally:
        subprocess.run([*adb, "shell", "rm", "-f", target], capture_output=True)


if __name__ == "__main__":
    main()
