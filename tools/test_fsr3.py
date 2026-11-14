"""Run the actual AMD FSR3.1.4 graph on the selected Android GPU."""
import argparse
import subprocess
from build_android import CLANG, ROOT
from fsr3_shaders import pack_fsr3


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--serial", required=True)
    parser.add_argument("--display-size", nargs=2, type=int)
    args = parser.parse_args()
    out = ROOT / "build/tests/fsr3"
    out.mkdir(parents=True, exist_ok=True)
    pack_fsr3(out)
    common = [str(CLANG), "--target=aarch64-linux-android26", "-O2", "-ffp-contract=off",
              "-I" + str(out), "-I" + str(ROOT / "reference/fsr3/sdk/include"),
              "-I" + str(ROOT / "reference/fsr3/sdk/src/shared")]
    subprocess.run([*common, "-std=c++17", "-DNDEBUG", "-DCRASHDAY_FSR3_TEST", "-fno-exceptions", "-fno-rtti",
                    "-c", str(ROOT / "android/host/fsr3.cpp"), "-o", str(out / "backend.o")], check=True)
    executable = out / "fsr3"
    subprocess.run([*common, str(ROOT / "tools/tests/test_fsr3.c"), str(out / "backend.o"),
                    "-o", str(executable), "-lEGL", "-lGLESv3", "-lm"], check=True)
    adb = ["adb", "-s", args.serial]
    target = "/data/local/tmp/crashday-fsr3-check"
    subprocess.run([*adb, "push", str(executable), target], check=True, capture_output=True)
    try:
        subprocess.run([*adb, "shell", "chmod", "755", target], check=True)
        result = subprocess.run([*adb, "shell", target, *([str(v) for v in args.display_size] if args.display_size else [])], capture_output=True, text=True, timeout=60)
        print(result.stdout + result.stderr, end="")
        (out / "result.txt").write_text(result.stdout + result.stderr, encoding="utf-8")
        raise SystemExit(result.returncode)
    finally:
        subprocess.run([*adb, "shell", "rm", "-f", target], capture_output=True)


if __name__ == "__main__":
    main()
