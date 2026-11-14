"""Compare the production shadow search and complete bake with the lifted originals."""
import argparse
import re
import subprocess
import unittest

import pefile

from build_android import ROOT
from native_math import SHADOW_WORLD, native_math
from test_menu_gestures import method
from tests.host_environment import CLANG, environment

OUT = ROOT / 'build/tests/native-raycast'


class NativeRaycastTest(unittest.TestCase):
    def test_shadow_search_and_bake(self):
        sources = {}
        for unit in (2, 7, 15, 40, 46):
            text = (ROOT / f'generated/crashday/functions_{unit:04}.c').read_text()
            for address in re.findall(r'^void sub_([0-9A-F]{8})\(void\)', text, re.M):
                sources[address] = text
        addresses = ('0040BD20', '0040BDB0', '0040D470', '00465F20', '00466030',
                     '00635110', '006351D0', '00682000', '0040A6C0', '006824D0', '00682D70')
        helpers = '\n'.join(method(sources[a], f'void sub_{a}(void)') for a in addresses)
        bake = method(sources['004DFD30'], 'void sub_004DFD30(void)') + '\n'
        candidate = native_math(bake.encode()).decode()
        self.assertEqual(candidate.count('RECOMP_CALL(crashday_shadow_world)'), 2)
        self.assertTrue(candidate.startswith(SHADOW_WORLD))
        for address in ('004DFD30', '006824D0', '00682D70'):
            with self.assertRaisesRegex(ValueError, 'Native math source changed'):
                native_math(('void sub_' + address + '(void) {\n}\n').encode())
        for address in ('006824D0', '00682D70'):
            body = (method(sources[address], 'void sub_' + address + '(void)') + '\n').encode()
            self.assertEqual(native_math(body), body)
        OUT.mkdir(parents=True, exist_ok=True)
        runtime = (ROOT / 'android/runtime/recomp_types.h').read_text()
        runtime = runtime.replace('#error "This header is the ARM64 runtime model; x86 builds use native/recomp_types.h"', '')
        runtime = runtime.replace(method(runtime, 'static inline uint64_t __rdtsc(void)'), '')
        (OUT / 'recomp_types_host.h').write_text(runtime)
        with pefile.PE(str(ROOT / 'generated/input/crashday.exe'), fast_load=True) as pe:
            (OUT / 'constants.bin').write_bytes(pe.get_data(0x808000 - pe.OPTIONAL_HEADER.ImageBase, 0x3000))
        fixture = (ROOT / 'tools/tests/test_raycast_reject.c').read_text().split('int main(')[0]
        wrapper = method(fixture, 'uint32_t crashday_raycast_reject_run(uint32_t frame,uint32_t query,uint32_t object)')
        fixture = fixture.replace(wrapper, '').replace('/* PRODUCTION */', '')
        fixture = fixture.replace('#define RECOMP_CALL(f) do { PUSH32(esp,0xBADF00D); f(); } while(0)',
            '#define RECOMP_CALL(f) do { PUSH32(esp,RECOMP_RETADDR); RECOMP_FLAGS_OUT(); f(); } while(0)')
        declarations = ('void sub_0040D470(void),sub_006824D0(void),sub_00682D70(void);\n'
                        'static void sub_006A88E0(void) { assert(0); }\n'
                        'static void sub_0077F4C2(void) { esp+=4; }\n')
        fixture = fixture.replace('/* HELPERS */', declarations + helpers)
        fixture = fixture.replace('/* ORIGINAL */', bake.replace('void sub_004DFD30(void)', 'void bake_original(void)', 1))
        fixture = fixture.replace('/* CANDIDATE */', candidate.replace('void sub_004DFD30(void)', 'void bake_candidate(void)', 1))
        fixture += (ROOT / 'tools/tests/test_shadow_world.c').read_text()
        (OUT / 'oracle.c').write_text(fixture)
        env, linker = environment('x64')
        commands = ([str(CLANG), '/nologo', '/O2', '/std:c11', '/w', '/clang:-ffp-contract=off',
                     '/clang:-fno-strict-aliasing', '/c', 'oracle.c', '/Fooracle.obj'],
                    [str(linker), '/nologo', 'oracle.obj', '/OUT:oracle.exe'],
                    [str(OUT / 'oracle.exe'), 'constants.bin'],
                    [str(CLANG.with_name('clang.exe')), '--target=aarch64-linux-android26', '-O3', '-w',
                     '-ffp-contract=off', '-fno-strict-aliasing', '-fwrapv', 'oracle.c', '-o', 'oracle-arm64', '-lm'])
        for command in commands:
            result = subprocess.run(command, cwd=OUT, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            if result.stdout:
                print(result.stdout.strip())


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--serial', required=True)
    args = parser.parse_args()
    result = unittest.TextTestRunner(verbosity=2).run(unittest.defaultTestLoader.loadTestsFromTestCase(NativeRaycastTest))
    if not result.wasSuccessful():
        raise SystemExit(1)
    adb = ['adb', '-s', args.serial]
    target = '/data/local/tmp/crashday-native-raycast-041'
    subprocess.run([*adb, 'push', str(OUT / 'oracle-arm64'), target], check=True)
    subprocess.run([*adb, 'push', str(OUT / 'constants.bin'), target + '.bin'], check=True)
    try:
        subprocess.run([*adb, 'shell', 'chmod', '755', target], check=True)
        subprocess.run([*adb, 'shell', target, target + '.bin'], check=True, timeout=60)
    finally:
        subprocess.run([*adb, 'shell', 'rm', '-f', target, target + '.bin'], check=True)


if __name__ == '__main__':
    main()
