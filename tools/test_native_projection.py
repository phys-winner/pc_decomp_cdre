"""Compare the production CPU projector with its original x86 lift on Android."""
import argparse
import subprocess
import unittest

from build_android import CLANG, ROOT
from native_math import native_math
from test_menu_gestures import method


def projection_bodies():
    source = (ROOT / "generated/crashday/functions_0046.c").read_text(encoding="utf-8")
    signature = "void sub_0067D0B0(void)"
    original = method(source, signature) + "\n"
    return (original.replace(signature, "void oracle_original(void)", 1),
            native_math(original.encode()).decode().replace(signature, "void oracle_candidate(void)", 1))


class NativeProjectionSourceTest(unittest.TestCase):
    def test_pinned_projector(self):
        original, candidate = projection_bodies()
        self.assertNotIn("project_prefix", original)
        self.assertIn("project_prefix", candidate)
        with self.assertRaisesRegex(ValueError, "Native math source changed"):
            native_math(b"void sub_0067D0B0(void) {\n}\n")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--serial", required=True)
    args = parser.parse_args()
    out = ROOT / "build/tests/native-projection"
    out.mkdir(parents=True, exist_ok=True)
    flags = ["--target=aarch64-linux-android26", "-O3", "-fPIC", "-fno-strict-aliasing",
             "-fwrapv", "-ffp-contract=off", "-DRECOMP_X87_WINDOW", "-I" + str(ROOT / "android/runtime")]
    matrix_source = (ROOT / "generated/crashday/functions_0040.c").read_text(encoding="utf-8")
    matrix = method(matrix_source, "void sub_00633D80(void)") + "\n"
    original, candidate = projection_bodies()
    candidate += "\nuint32_t prefix_probe(uint32_t s,uint32_t t,uint32_t n,uint32_t m){return project_prefix(s,t,n,m);}\n"
    objects = []
    for name, body in (("original", original), ("candidate", candidate),
                       ("matrix", native_math(matrix.encode()).decode())):
        source = out / (name + ".c")
        source.write_text('#include "recomp_types.h"\nvoid sub_00633D80(void);\n' + body, encoding="utf-8")
        obj = source.with_suffix(".o")
        subprocess.run([str(CLANG), *flags, "-DRECOMP_GENERATED_CODE", "-DRECOMP_GUEST_PROVENANCE",
                        "-c", str(source), "-o", str(obj)], check=True)
        objects.append(str(obj))
    executable = out / "native-projection"
    subprocess.run([str(CLANG), *flags, str(ROOT / "tools/tests/test_native_projection.c"),
                    *objects, "-o", str(executable), "-lm"], check=True)
    adb = ["adb", "-s", args.serial]
    target = "/data/local/tmp/crashday-native-projection"
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
