"""Compare the production math seams with the lifted originals on an Android CPU."""
import argparse
from pathlib import Path
import subprocess
import unittest

from build_android import CLANG, ROOT
from native_math import native_math
from test_menu_gestures import method


def bodies(address):
    unit = '0002' if address == '0040BD20' else '0040'
    source = (ROOT / f'generated/crashday/functions_{unit}.c').read_text(encoding='utf-8')
    signature = f'void sub_{address}(void)'
    original = method(source, signature) + '\n'
    candidate = native_math(original.encode()).decode()
    return (original.replace(signature, 'void oracle_original(void)', 1),
            candidate.replace(signature, 'void oracle_candidate(void)', 1))


class NativeMathSourceTest(unittest.TestCase):
    def test_pinned_bodies_and_unknown_input(self):
        for address in ('0040BD20', '00633D80'):
            original, candidate = bodies(address)
            self.assertNotEqual(original, candidate)
        self.assertEqual(native_math(b'void other(void) {}\n'), b'void other(void) {}\n')
        with self.assertRaisesRegex(ValueError, 'Native math source changed'):
            native_math(b'void sub_0040BD20(void) {\n}\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--serial', required=True)
    args = parser.parse_args()
    out = ROOT / 'build/tests/native-math'
    out.mkdir(parents=True, exist_ok=True)
    adb = ['adb', '-s', args.serial]
    target = '/data/local/tmp/crashday-native-math'
    flags = ['--target=aarch64-linux-android26', '-O3', '-fPIC', '-fno-strict-aliasing',
             '-fwrapv', '-ffp-contract=off', '-DRECOMP_X87_WINDOW', '-I' + str(ROOT/'android/runtime')]
    for address in ('0040BD20', '00633D80'):
        objects = []
        for name, body in zip(('original', 'candidate'), bodies(address)):
            source = out / (name + '.c')
            source.write_text('#include "recomp_types.h"\n' + body, encoding='utf-8')
            obj = source.with_suffix('.o')
            subprocess.run([str(CLANG), *flags, '-DRECOMP_GENERATED_CODE', '-DRECOMP_GUEST_PROVENANCE',
                            '-c', str(source), '-o', str(obj)], check=True)
            objects.append(str(obj))
        binary = out / ('math-' + address)
        subprocess.run([str(CLANG), *flags, '-DMATH_ADDRESS=0x' + address,
                        str(ROOT/'tools/tests/test_native_math.c'), *objects, '-o', str(binary), '-lm'], check=True)
        subprocess.run([*adb, 'push', str(binary), target], check=True, capture_output=True)
        try:
            subprocess.run([*adb, 'shell', 'chmod', '755', target], check=True)
            result = subprocess.run([*adb, 'shell', target], capture_output=True, text=True, timeout=30)
            print(result.stdout, end='')
            print(result.stderr, end='')
            if result.returncode:
                raise SystemExit(result.returncode)
        finally:
            subprocess.run([*adb, 'shell', 'rm', '-f', target], capture_output=True)


if __name__ == '__main__':
    main()
