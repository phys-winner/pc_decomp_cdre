"""Run the production POSITIONT shader on a selected Android GPU using transform feedback."""
import argparse
from pathlib import Path
import re
import subprocess

from build_android import CLANG, ROOT
from test_menu_gestures import method


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--serial', required=True)
    args = parser.parse_args()
    out = ROOT / 'build/tests/ff-projection'
    out.mkdir(parents=True, exist_ok=True)
    production = (ROOT / 'android/host/d3d9_ff.c').read_text(encoding='utf-8')
    source = (ROOT / 'tools/tests/test_ff_projection.c').read_text(encoding='utf-8')
    source = source.replace('/* FF_ENUMS */', '\n'.join(re.findall(r'^enum \{[^\n]+\};', production, re.M)))
    source = source.replace('/* FF_KEY */', re.search(r'typedef struct \{.*?\} ff_vkey;', production, re.S)[0])
    source = source.replace('/* APPEND */', next(line for line in production.splitlines() if line.startswith('#define APPEND')))
    source = source.replace('/* GENERATOR */', method(production, 'static GLuint vertex_shader(const ff_vkey *k)'))
    (out / 'projection.c').write_text(source, encoding='utf-8')
    subprocess.run([str(CLANG), '--target=aarch64-linux-android26', '-O2', '-ffp-contract=off',
                    str(out / 'projection.c'), '-o', str(out / 'projection'), '-lEGL', '-lGLESv3', '-lm'], check=True)
    adb = ['adb', '-s', args.serial]
    target = '/data/local/tmp/crashday-ff-projection'
    subprocess.run([*adb, 'push', str(out / 'projection'), target], check=True, capture_output=True)
    try:
        subprocess.run([*adb, 'shell', 'chmod', '755', target], check=True)
        result = subprocess.run([*adb, 'shell', target], capture_output=True, text=True, timeout=30)
        print(result.stdout, end='')
        print(result.stderr, end='')
        (out / 'result.txt').write_text(result.stdout + result.stderr, encoding='utf-8')
        raise SystemExit(result.returncode)
    finally:
        subprocess.run([*adb, 'shell', 'rm', '-f', target], capture_output=True)


if __name__ == '__main__':
    main()
