"""Guest-object provenance retains native state while preserving polling and calls."""
from pathlib import Path
import re
import subprocess
import tempfile
import unittest

from build_android import CLANG, ROOT


class FloatRegisterStorageTest(unittest.TestCase):
    def test_native_register_separation_and_guest_polling(self):
        source = b'''
uint32_t xmm_probe(uint32_t p) {
    g_xmm[0].u32[0] = 7; MEM32(p) = 11; return g_xmm[0].u32[0];
}
uint32_t x87_probe(uint32_t p) {
    g_st_win[0] = 7; MEM32(p) = 11; return (uint32_t)g_st_win[0];
}
uint32_t flag_probe(uint32_t p) {
    g_flag_k = 7; MEM32(p) = 11; return g_flag_k;
}
uint32_t vector_probe(uint32_t p, uint32_t q) {
    g_ecx = 7; xmm_st(p, xmm_ld(q)); return g_ecx;
}
uint32_t poll_probe(uint32_t p) {
    while (MEM32(p)) { RECOMP_BACKEDGE(); } return MEM32(p);
}
extern void callback(void);
uint32_t call_probe(uint32_t p) {
    g_eax = 7; MEM32(p) = 11; callback(); return g_eax;
}
'''
        with tempfile.TemporaryDirectory() as directory:
            folder = Path(directory)
            outputs = []
            for extra in ([], ['-DRECOMP_GUEST_PROVENANCE']):
                path = folder / 'probe.c'
                path.write_bytes(b'#include "recomp_types.h"\n' + source)
                result = subprocess.run([
                    str(CLANG), '--target=aarch64-linux-android26', '-O2', '-fno-strict-aliasing',
                    '-DRECOMP_X87_WINDOW', '-DRECOMP_GENERATED_CODE', '-Iandroid/runtime', *extra,
                    '-S', '-emit-llvm', str(path), '-o', '-',
                ], cwd=ROOT, capture_output=True, check=True, text=True)
                outputs.append(result.stdout)
        def body(text, name):
            return re.search(r'define[^\n]+@' + name + r'\([^}]+}', text).group()
        before, after = outputs
        for name in ('xmm_probe', 'x87_probe', 'flag_probe', 'vector_probe'):
            self.assertNotIn('ret i32 7', body(before, name))
            self.assertIn('ret i32 7', body(after, name))
            if name != 'vector_probe':
                self.assertIn('store volatile i32 11', body(after, name))
        for text in outputs:
            self.assertGreaterEqual(body(text, 'poll_probe').count('load volatile i32'), 2)
            self.assertIn('call void', body(text, 'poll_probe'))
            self.assertNotIn('ret i32 7', body(text, 'call_probe'))
            self.assertIn('load i32', body(text, 'call_probe').split('@callback()')[-1])


if __name__ == '__main__':
    unittest.main()
