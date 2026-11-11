"""State block Capture/Apply through precomputed byte runs (d3d9_resource.c)
against the original per-flag walk (fixture in tools/tests/stateblock-before):
the same bytes in the block and the device, the same render-thread dirty
pieces, the same constants flag and the same object bindings, for random,
sparse, dense and typed record sets."""
from pathlib import Path
import re
import subprocess
import unittest

from test_render_thread_cores import function
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/stateblock-plan"
BEFORE = ROOT / "tools/tests/stateblock-before"

HARNESS = r'''
#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct void_com_class { const char *name; } void_com_class;
typedef struct void_com_object { void_com_class *cls; uint32_t guest; int refs; void (*destroy)(struct void_com_object *); } void_com_object;
typedef struct d3d_device d3d_device;
/* STRUCTS */
struct d3d_device { d3d_state st; int constants_dirty; };
static void void_fatal(const char *why, ...) { fprintf(stderr, "%s\n", why); exit(3); }
/* Object bindings: a log of (slot, object) per call, the same in both runs. */
static uintptr_t bind_log[4096], bind_base; static int bind_count;
static void d3d_ref_set(void **slot, void *object) { if (bind_count < 4096) bind_log[bind_count++] = ((uintptr_t)slot - bind_base) ^ (uintptr_t)object * 31u; *slot = object; }
#define bind_ref d3d_ref_set
/* DIRTY */
/* OLD */
/* NEW */
static uint32_t rng = 12345u;
static uint32_t next(void) { rng ^= rng << 13; rng ^= rng >> 17; rng ^= rng << 5; return rng; }
static void fill(void *p, size_t n) { uint8_t *b = (uint8_t *)p; for (size_t i = 0; i < n; ++i) b[i] = (uint8_t)next(); }
static void flags(uint8_t *f, size_t n, int mode)
{
    for (size_t i = 0; i < n; ++i) f[i] = mode == 0 ? (next() % 23u == 0) : mode == 1 ? (next() % 3u == 0) : mode == 2 ? 1 : (next() & 1u);
}
int main(void)
{
    static stateblock_ex a, b;
    static d3d_device da, db;
    static void *objects[64];
    for (int i = 0; i < 64; ++i) objects[i] = (void *)(uintptr_t)(0x1000u * (unsigned)(i + 1));
    for (int iter = 0; iter < 20000; ++iter) {
        int mode = iter % 5 == 4 ? (int)(next() % 4u) : iter % 4;
        memset(&a, 0, sizeof a); memset(&b, 0, sizeof b);
        d3d_stateblock *s = &a.sb;
        flags(s->rec_rs, sizeof s->rec_rs, mode); flags(&s->rec_ss[0][0], sizeof s->rec_ss, mode);
        flags(&s->rec_tss[0][0], sizeof s->rec_tss, mode); flags(s->rec_tex, sizeof s->rec_tex, mode);
        flags(s->rec_stream, sizeof s->rec_stream, mode); flags(s->rec_vs_f, sizeof s->rec_vs_f, mode);
        flags(s->rec_ps_f, sizeof s->rec_ps_f, mode); flags(s->rec_vs_i, sizeof s->rec_vs_i, mode);
        flags(s->rec_ps_i, sizeof s->rec_ps_i, mode); flags(s->rec_vs_b, sizeof s->rec_vs_b, mode);
        flags(s->rec_ps_b, sizeof s->rec_ps_b, mode); flags(s->rec_transform, sizeof s->rec_transform, mode);
        flags(s->rec_light, sizeof s->rec_light, mode); flags(s->rec_clip, sizeof s->rec_clip, mode);
        s->rec_viewport = next() & 1u; s->rec_scissor = next() & 1u; s->rec_indices = next() & 1u; s->rec_decl = next() & 1u;
        s->rec_fvf = next() & 1u; s->rec_vs = next() & 1u; s->rec_ps = next() & 1u; s->rec_material = next() & 1u;
        if (iter % 7 == 3) memset(s->rec_vs_f, 0, sizeof s->rec_vs_f), memset(s->rec_ps_f, 0, sizeof s->rec_ps_f),
            memset(s->rec_vs_i, 0, sizeof s->rec_vs_i), memset(s->rec_ps_i, 0, sizeof s->rec_ps_i),
            memset(s->rec_vs_b, 0, sizeof s->rec_vs_b), memset(s->rec_ps_b, 0, sizeof s->rec_ps_b);
        memcpy(&b.sb, &a.sb, sizeof a.sb);
        /* Capture: the device state into the block. */
        fill(&da.st, sizeof da.st);
        for (int i = 0; i < 20; ++i) da.st.textures[i] = objects[next() & 63u];
        for (int i = 0; i < 16; ++i) da.st.streams[i] = objects[next() & 63u];
        da.st.indices = objects[next() & 63u]; da.st.decl = objects[next() & 63u];
        da.st.vs = objects[next() & 63u]; da.st.ps = objects[next() & 63u];
        memcpy(&db, &da, sizeof da);
        fill(&a.sb.state, sizeof a.sb.state);
        memcpy(&b.sb.state, &a.sb.state, sizeof a.sb.state);
        a.sb.dev = &da; b.sb.dev = &db;
        bind_base = (uintptr_t)&a.sb.state; bind_count = 0; old_capture(&a.sb); int old_binds = bind_count; uintptr_t old_log[4096]; memcpy(old_log, bind_log, sizeof old_log);
        bind_base = (uintptr_t)&b.sb.state; bind_count = 0; d3d_stateblock_capture(&b.sb);
        assert(bind_count == old_binds && !memcmp(old_log, bind_log, sizeof(uintptr_t) * (size_t)bind_count));
        assert(!memcmp(&a.sb.state, &b.sb.state, sizeof a.sb.state));
        /* Apply: the block onto a different device state. */
        fill(&da.st, sizeof da.st); da.constants_dirty = 0;
        memcpy(&db, &da, sizeof da);
        memset(d3d_rt_dirty_bits, 0, sizeof d3d_rt_dirty_bits);
        bind_base = (uintptr_t)&da.st; bind_count = 0; old_apply(&a.sb); old_binds = bind_count; memcpy(old_log, bind_log, sizeof old_log);
        uint32_t old_dirty[D3D_RT_DIRTY_WORDS]; memcpy(old_dirty, d3d_rt_dirty_bits, sizeof old_dirty);
        memset(d3d_rt_dirty_bits, 0, sizeof d3d_rt_dirty_bits);
        bind_base = (uintptr_t)&db.st; bind_count = 0; d3d_stateblock_apply(&b.sb);
        assert(!memcmp(&da.st, &db.st, sizeof da.st));
        assert(da.constants_dirty == db.constants_dirty);
        assert(!memcmp(old_dirty, d3d_rt_dirty_bits, sizeof old_dirty));
        /* Object bindings: the same calls in the same order. */
        assert(bind_count == old_binds && !memcmp(old_log, bind_log, sizeof(uintptr_t) * (size_t)bind_count));
        /* A second Capture/Apply reuses the plan built by the first. */
        bind_count = 0; d3d_stateblock_capture(&b.sb); old_capture(&a.sb);
        assert(!memcmp(&a.sb.state, &b.sb.state, sizeof a.sb.state));
    }
    printf("stateblock plan: 20000 record sets equal\n");
    return 0;
}
'''


def struct(text, name):
    start = text.index("typedef struct " + name + " {")
    end = text.index("} " + name + ";", start) + len(name) + 3
    return text[start:end] + "\n"


class StateblockPlanTest(unittest.TestCase):
    def test_plan_matches_flag_walk(self):
        internal = (ROOT / "android/host/d3d9_internal.h").read_text(encoding="utf-8")
        structs = struct(internal, "d3d_state") + struct(internal, "d3d_stateblock")
        inc = (ROOT / "android/host/d3d9_thread.inc").read_text(encoding="utf-8")
        start = inc.index("#define D3D_RT_STATE_PIECES")
        dirty = inc[start:inc.index("d3d_device *d3d_rt_device(void);", start)]
        dirty = dirty.replace("extern uint32_t d3d_rt_dirty_bits[D3D_RT_DIRTY_WORDS];",
                              "static uint32_t d3d_rt_dirty_bits[D3D_RT_DIRTY_WORDS];")
        dirty += "#define DIRTY(d, lvalue) D3D_RT_DIRTY((d), (lvalue))\n"
        old_resource = (BEFORE / "d3d9_resource.c").read_text(encoding="utf-8").replace("\r\n", "\n")
        old_device = (BEFORE / "d3d9_device.c").read_text(encoding="utf-8").replace("\r\n", "\n")
        old = (function(old_resource, "static void copy_recorded(")
               + function(old_resource, "void d3d_stateblock_capture(").replace("d3d_stateblock_capture", "old_capture")
               + old_device[old_device.index("static inline int next_flag("):old_device.index("static int apply_recorded(")]
               + function(old_device, "static int apply_recorded(").replace("apply_recorded", "old_apply_recorded")
               + function(old_device, "void d3d_stateblock_apply(").replace("d3d_stateblock_apply", "old_apply")
               .replace("apply_recorded(", "old_apply_recorded("))
        resource = (ROOT / "android/host/d3d9_resource.c").read_text(encoding="utf-8").replace("\r\n", "\n")
        device = (ROOT / "android/host/d3d9_device.c").read_text(encoding="utf-8").replace("\r\n", "\n")
        new = (resource[resource.index("typedef struct { uint32_t off, len; } sb_run;"):resource.index("static void stateblock_destroy(")]
               + function(resource, "void d3d_stateblock_capture(")
               + function(device, "void d3d_stateblock_apply("))
        new = new.replace("void d3d_stateblock_recorded(d3d_stateblock *sb) { SB_EX(sb)->plan_ready = 0; }", "")
        harness = (HARNESS.replace("/* STRUCTS */", structs).replace("/* DIRTY */", dirty)
                   .replace("/* OLD */", old).replace("/* NEW */", new))
        harness = re.sub(r"\nvoid d3d_stateblock_capture\(d3d_stateblock \*sb\);\n", "\n", harness)
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "probe.c").write_text(harness, encoding="utf-8")
        env, linker = environment("x64")

        def run(command):
            result = subprocess.run([str(part) for part in command], cwd=OUT, env=env, capture_output=True, timeout=300)
            text = (result.stdout + result.stderr).decode(errors="replace")
            self.assertEqual(result.returncode, 0, text)
            return text

        run([CLANG, "/nologo", "/O2", "/W3", "/std:c11", "/D_CRT_SECURE_NO_WARNINGS",
             "/clang:--target=x86_64-pc-windows-msvc", "/c", "probe.c", "/Foprobe.obj"])
        run([linker, "/nologo", "probe.obj", "/OUT:probe.exe"])
        self.assertIn("20000 record sets equal", run([OUT / "probe.exe"]))


if __name__ == "__main__":
    unittest.main()
