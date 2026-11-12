"""Execute the production Workshop activation and virtual track boundary."""
from pathlib import Path
import subprocess
import tempfile
import unittest

from tests.host_environment import CLANG, environment
from test_menu_gestures import method
from lift_crashday import apply_host_adapter

ROOT = Path(__file__).resolve().parents[1]


class WorkshopNativeTest(unittest.TestCase):
    def test_production_activation_and_tracks(self):
        out = ROOT / 'build/tests/workshop-native'
        out.mkdir(parents=True, exist_ok=True)
        source = (ROOT / 'android/host/files.c').read_text(encoding='utf-8')
        helpers = method(source, 'static int find_matches(') + '\n' + method(source, 'static void find_workshop(')
        # Win32's test compiler has no fnmatch; the production candidate collection is unchanged.
        helpers = helpers.replace('!fnmatch(pattern, name, flags & 1 ? 0 : FNM_CASEFOLD)',
                                  '(!strcmp(pattern,"*.trk") && strlen(name)>4 && !strcmp(name+strlen(name)-4,".trk"))')
        (out / 'workshop_find.inc').write_text(helpers, encoding='utf-8')
        env, linker = environment('x64')
        obj, exe = out / 'workshop-native.obj', out / 'workshop-native.exe'
        subprocess.run([str(CLANG), '/nologo', '/c', '/TC', '/std:c11',
                        '/I' + str(out), str(ROOT / 'tools/tests/test_workshop_native.c'),
                        '/Fo' + str(obj)], check=True, env=env)
        subprocess.run([str(linker), '/nologo', str(obj), '/OUT:' + str(exe)], check=True, env=env)
        with tempfile.TemporaryDirectory(prefix='workshop-native-') as temporary:
            root = Path(temporary)
            for item, name, payload in ((1, 'a.cpk', b'PK\x03\x04abcde'),
                                        (2, 'b.trk', b'CDTRKabc'),
                                        (3, 'c.cpk', b'PK\x03\x04vwxyz'),
                                        (5, 'bad.cpk', b'not a zip')):
                target = root / 'items' / str(item) / name
                target.parent.mkdir(parents=True, exist_ok=True)
                target.write_bytes(payload)
            env['PORT_WORKSHOP_ROOT'] = str(root)
            subprocess.run([str(exe)], check=True, env=env, timeout=10)

    def test_original_boundary_regenerates(self):
        path = ROOT / 'generated/crashday/functions_0035.c'
        current = method(path.read_text(encoding='utf-8'), 'void sub_006057D0(')
        hook = ('    { extern void crashday_workshop_load(uint32_t);\n'
                '      RECOMP_REGS_OUT(); crashday_workshop_load(esi); RECOMP_REGS_IN(); }\n')
        self.assertEqual(current.count(hook), 1)
        original = current.replace(hook, '')
        self.assertEqual(apply_host_adapter({'name': 'crashday'}, 0x006057D0, original), current)
        with self.assertRaisesRegex(ValueError, 'Workshop content loading boundary'):
            apply_host_adapter({'name': 'crashday'}, 0x006057D0, original.replace('L_00606101:', 'L_CHANGED:'))


if __name__ == '__main__':
    unittest.main()
