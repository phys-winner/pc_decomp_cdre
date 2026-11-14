"""Unknown control flow, carry readers and native hooks keep the full protocol."""
import unittest
from pathlib import Path

from game_optimizations import entry_kills_flags, flag_independent_entries, omit_unused_call_flags
from build_android import generated_flags


class GameOptimizationsTest(unittest.TestCase):
    def test_flags_apply_to_the_compiled_task_and_leave_common_flags_unchanged(self):
        root = Path('generated')
        common = ['-O2', '-ffp-contract=off']
        game = ['-flto=thin', '-fprofile-instr-use=profile', '-DCRASHDAY_PGO_PROFILE_digest']
        flags = generated_flags(common, root / 'crashday/unit.c', root, True, game)
        for flag in ['-O3', '-mtune=cortex-a73', '-DRECOMP_GUEST_PROVENANCE', *game]:
            self.assertIn(flag, flags)
        self.assertNotIn('-O2', flags)
        self.assertEqual(common, ['-O2', '-ffp-contract=off'])
        dll = generated_flags(common, root / 'd3dx9/unit.c', root, True, game)
        self.assertIn('-DRECOMP_GUEST_PROVENANCE', dll)
        self.assertNotIn('-flto=thin', dll)
        self.assertNotIn('-DRECOMP_GUEST_PROVENANCE', generated_flags(common, root / 'dispatch.c', root, True, game))
        self.assertNotIn('-DRECOMP_GUEST_PROVENANCE', generated_flags(common, root / 'crashday/unit.c', root, False, game))

    def test_only_straight_line_full_flag_kills_qualify(self):
        entry = b'''    RECOMP_ENTER(0x00400000u);
L_00400000:
    PUSH32(esp, ebp); /* 0x00400000: push ebp */
    ebp = esp; /* 0x00400001: mov ebp, esp */
'''
        kill = b'    esp -= 16; /* 0x00400003: sub esp, 0x10 */\n'
        self.assertTrue(entry_kills_flags(entry + kill))
        for before in (b'    if (RECOMP_CF()) goto L_other;\n',
                       b'    native_hook();\n', b'    g_flag_k = 0;\n',
                       b'    extern void native_hook(void);\n',
                       b'    goto L_other;\n', b'    return;\n',
                       b'    ++eax; /* 0x00400002: inc eax */\n',
                       b'    /* 0x00400002: adc eax, 1 */\n',
                       b'    RECOMP_CALL(sub_00401000); /* 0x00400002: call 0x401000 */\n'):
            with self.subTest(before=before):
                self.assertFalse(entry_kills_flags(entry + before + kill))
        self.assertFalse(entry_kills_flags(entry))

    def test_calls_keep_unknown_targets_and_publish_registers(self):
        source = (b'void sub_00400000(void) {\r\n'
                  b'    eax = 0; /* 0x00400000: xor eax, eax */\r\n}\r\n')
        entries = flag_independent_entries([source])
        self.assertEqual(entries, {b'sub_00400000'})
        calls = b'RECOMP_CALL(sub_00400000); RECOMP_CALL(sub_00401000); RECOMP_ICALL(eax);'
        changed = omit_unused_call_flags(calls, entries)
        self.assertIn(b'CRASHDAY_CALL_NOFLAGS(sub_00400000)', changed)
        self.assertIn(b'RECOMP_CALL(sub_00401000)', changed)
        self.assertIn(b'RECOMP_ICALL(eax)', changed)
        self.assertIn(b'PUSH32(esp, RECOMP_RETADDR)', changed)
        self.assertIn(b'RECOMP_REGS_OUT(); func(); RECOMP_REGS_IN()', changed)
        self.assertEqual(omit_unused_call_flags(calls, set()), calls)
        with self.assertRaises(ValueError):
            flag_independent_entries([source[:-3]])


if __name__ == '__main__':
    unittest.main()
