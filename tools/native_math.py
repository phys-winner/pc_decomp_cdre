"""Pinned native math and shadow seams, preserving their callers' guest-visible results."""
import hashlib
import re

def _matrix_storage(text):
    signature='void sub_00633D80(void) {'
    assert text.count(signature)==1 and 'RECOMP_CALL(' not in text and 'RECOMP_BACKEDGE(' not in text
    addresses=sorted(set(int(v,16) for v in re.findall(r'MEM32\(0x(870[0-9A-F]+)\)',text)))
    assert len(addresses)==32,addresses
    branch=text.index('if (RECOMP_PF')
    for a in addresses:
        assert text.index(f'MEM32(0x{a:X}) =')<branch
    fallback=text.replace(signature,'static __attribute__((cold,noinline,no_profile_instrument_function)) void matrix_original(void) {',1)
    body=text.replace('_xmm[','native_xmm[')
    for i,a in enumerate(addresses):body=body.replace(f'MEM32(0x{a:X})',f'scratch[{i}]')
    guard="""
    uint32_t output = g_ecx, input = MEM32(g_esp + 4);
    if ((uint64_t)output + 64 > 0x100000000ull ||
        (uint64_t)input + 64 > 0x100000000ull ||
        ((uint64_t)output < 0x870364u && (uint64_t)output + 64 > 0x8702DCu) ||
        ((uint64_t)input < 0x870364u && (uint64_t)input + 64 > 0x8702DCu) ||
        ((uint64_t)(uint32_t)(g_esp - 4) >= output && (uint64_t)(uint32_t)(g_esp - 4) < (uint64_t)output + 64) ||
        ((uint32_t)(g_esp - 4) >= 0x8702DCu && (uint32_t)(g_esp - 4) < 0x870364u)) {
        matrix_original(); return;
    }
    xmm_t native_xmm[8];
    uint32_t scratch[32];
"""
    body=body.replace(signature,"__attribute__((no_profile_instrument_function,noinline))\n"+signature+guard,1)
    flush=''.join(f'    MEM32(0x{a:X}) = scratch[{i}];\n' for i,a in enumerate(addresses))
    flush+='    memcpy(g_xmm, native_xmm, sizeof native_xmm);\n'
    anchor='RECOMP_FLAGS_OUT(); esp += 8;'
    assert body.count(anchor)==2
    body=body.replace(anchor,flush+'    '+anchor)
    return fallback+'\n\n'+body

def _absolute(text):
    assert text.count('void sub_0040BD20(void) {')==1
    return """__attribute__((no_profile_instrument_function))
void sub_0040BD20(void) {
    uint32_t _cf = 0, _flag_k = FK_NONE, _flag_a = 0, _flag_b = 0;
    int _df = 1;
    RECOMP_ENTER(0x0040BD20u);
    uint32_t stack = g_esp;
    MEM32(stack - 4) = g_ebp;
    g_xmm[0].f64[0] = (double)g_xmm[0].f32[0];
    g_xmm[0].u64[0] &= MEM64(0x809C90);
    g_xmm[0].u64[1] &= MEM64(0x809C98);
    g_xmm[0].f32[0] = (float)g_xmm[0].f64[0];
    _flag_k = FK_TEST; _flag_a = stack - 4; _flag_b = 0xFFFFFFF8u; _cf = 0;
    RECOMP_FLAGS_OUT();
    g_esp = stack + 4;
}
"""


def _matrix_comparisons(original):
    result = _matrix_storage(original)
    head,body=result.split('void sub_00633D80(void) {',1)
    pattern=re.compile(r'    _flag_a = SSE_COMI\((native_xmm\[\d\]\.f32\[0\]), (native_xmm\[\d\]\.f32\[0\])\); _flag_b = 0; _cf = _flag_a & 1u; /\*[^\n]+\*/\n    _flag_k = FK_EFLAGS;\n(.*?)    SET_HI8\(eax, \(recomp_eflags\(_flag_k, _flag_a, _flag_b, _cf, _df\) & 0xD5u\) \| 2u\); /\*[^\n]+\*/\n(.*?)    /\* test HI8\(eax\), 0x44u \*/ /\*[^\n]+\*/\n    _flag_a = \(uint32_t\)\(HI8\(eax\)\) << 24; _flag_b = \(uint32_t\)\(0x44u\) << 24;\n    _cf = 0;\n    _flag_k = FK_NARROW\(FK_TEST, 24\);\n    if \(RECOMP_PF\(\(_flag_a & _flag_b\), 24\)\) goto (L_[0-9A-F]+); /\*[^\n]+\*/',re.S)
    matches=list(pattern.finditer(body));assert len(matches)==31,len(matches)
    index=-1
    def replace(m):
        nonlocal index
        index+=1
        if index==15:return m[0]
        between=m[3]+m[4]
        assert not re.search(r'\b(eax|_cf|_flag_[kab])\b|L_[0-9A-F]+',between)
        assert len(between)<2048
        return ('    { float cmp_a = '+m[1]+', cmp_b = '+m[2]+';\n'+between+
                '      if (cmp_a != cmp_b) {\n'
                '        _flag_a = SSE_COMI(cmp_a,cmp_b); _flag_b = 0; _cf = _flag_a & 1u; _flag_k = FK_EFLAGS;\n'
                '        SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u);\n'
                '        _flag_a = (uint32_t)HI8(eax) << 24; _flag_b = 0x44000000u; _cf = 0; _flag_k = FK_NARROW(FK_TEST,24);\n'
                '        goto '+m[5]+';\n      }\n    }')
    return head+'void sub_00633D80(void) {'+pattern.sub(replace,body)


PROJECTION_PREFIX = r'''
static uint32_t project_prefix(uint32_t source, uint32_t target, uint32_t count, uint32_t matrix)
{
#if defined(RECOMP_YIELD_ON_WAITERS)
    return 0;
#else
    if (RECOMP_YIELD_EVERY < 2 || count < 2 || g_backedges >= RECOMP_YIELD_EVERY - 1u) return 0;
    uint32_t skip = count - 1u, room = RECOMP_YIELD_EVERY - g_backedges - 1u;
    if (skip > room) skip = room;
    uint64_t in_end = (uint64_t)source + count * 32ull, out_end = (uint64_t)target + count * 40ull;
    uint64_t matrix_end = (uint64_t)matrix + 64u;
    if (in_end > 0x100000000ull || out_end > 0x100000000ull || matrix_end > 0x100000000ull ||
        ((uint64_t)source < out_end && (uint64_t)target < in_end) ||
        ((uint64_t)matrix < out_end && (uint64_t)target < matrix_end) ||
        (target < 0x808CB4u && out_end > 0x808B30u)) return 0;
    float m[16]; memcpy(m, GPTR(matrix), sizeof m);
    float epsilon = MEMF(0x808B30), one = MEMF(0x808CB0);
    for (uint32_t i = 0; i < skip; ++i, source += 32, target += 40) {
        float x = MEMF(source), y = MEMF(source + 4), z = MEMF(source + 8);
        float w = ((m[7] * y + m[3] * x) + m[11] * z) + m[15];
        if (!(w + epsilon >= 0) || !(0 >= w - epsilon)) MEMF(target + 12) = one / w;
        float rhw = MEMF(target + 12);
        MEMF(target) = (((m[4] * y + m[0] * x) + m[8] * z) + m[12]) * rhw;
        MEMF(target + 4) = (((m[5] * y + m[1] * x) + m[9] * z) + m[13]) * rhw;
        MEMF(target + 8) = (((m[6] * y + m[2] * x) + m[10] * z) + m[14]) * rhw;
    }
    g_backedges += skip;
    return skip;
#endif
}
'''


def _projection(body):
    # The last original iteration publishes exact registers and any due thread handover.
    for label, offset in (('L_0067D0F0', '0xDE10u'), ('L_0067D2C0', '0xDDCCu')):
        assert body.count(label + ':') == 1
        body = body.replace(label + ':', label + ':;\n'
            '    { uint32_t skipped = project_prefix(eax - 8u, ecx - 12u, edx, esi + ' + offset + ');\n'
            '      eax += skipped * 32u; ecx += skipped * 40u; edx -= skipped; }', 1)
    body = body.replace('void sub_0067D0B0(void)',
                        '__attribute__((no_profile_instrument_function)) void sub_0067D0B0(void)', 1)
    return PROJECTION_PREFIX + body


SHADOW_WORLD = r'''
#if !defined(RECOMP_LOCAL_REGS)
static __attribute__((no_profile_instrument_function)) int shadow_sector(
    uint32_t sectors, uint32_t count, int sector, uint32_t query, unsigned depth)
{
    if (sector < 0 || (uint32_t)sector >= count || depth == 32) return -1;
    uint32_t node = sectors + (uint32_t)sector * 616u;
    int objects = (int16_t)MEM16(node + 0x64);
    if (objects < 0 || objects > 128) return -1;
    for (int i = 0; i < objects; ++i) {
        uint32_t object = MEM32(node + 0x68 + (uint32_t)i * 4u);
        if (object != MEM32(query + 0x9C) &&
            !(MEMF(query + 0x54) > MEMF(object + 0xB4)) &&
            !(MEMF(query + 0x5C) > MEMF(object + 0xBC)) &&
            !(MEMF(object + 0x94) > MEMF(query + 0x74)) &&
            !(MEMF(object + 0x9C) > MEMF(query + 0x7C)) &&
            !(MEMF(query + 0x58) > MEMF(object + 0xB8)) &&
            !(MEMF(object + 0x98) > MEMF(query + 0x78))) {
            uint32_t stack = g_esp;
            MEM32(stack - 4) = query;
            MEM32(stack - 8) = object;
            MEM32(stack - 12) = RECOMP_RETADDR;
            g_esp = stack - 12;
            sub_006824D0();
        }
        RECOMP_BACKEDGE();
        if (MEM8(query + 0xA0)) return 1;
    }
    if (!MEM8(node + 0x5B)) return 0;
    for (unsigned i = 0; i < 4; ++i) {
        if (i == 3) { RECOMP_BACKEDGE(); }
        int child = (int16_t)MEM16(node + 0x5C + i * 2);
        if (child != -1) {
            int hit = shadow_sector(sectors, count, child, query, depth + 1);
            if (hit) return hit;
        }
    }
    return 0;
}
#endif

/* Only these pinned shadow-bake calls discard volatile registers, stack scratch and hit metadata. */
static __attribute__((no_profile_instrument_function)) void crashday_shadow_world(void)
{
#if defined(RECOMP_LOCAL_REGS) || defined(RECOMP_TRACE) || defined(RECOMP_CALL_DIAG) || defined(RECOMP_YIELD_ON_WAITERS)
    sub_00682D70();
#else
    uint32_t stack = g_esp, world = g_ecx, query = MEM32(stack + 8);
    if (world > 0xFFFFEF00u || query != world + 0x102Cu || MEM32(stack + 4) != 0 ||
        MEM8(query) != 1 || MEM8(query + 0xA0)) {
        sub_00682D70(); return;
    }
    uint32_t sectors = MEM32(world + 0x824), count = MEM16(world + 0x808);
    if (!count || count > 32767 || (uint64_t)sectors + count * 616ull > 0x100000000ull) {
        sub_00682D70(); return;
    }
    uint32_t saved[4] = {g_ebx, g_esi, g_edi, g_ebp};
    int hit = shadow_sector(sectors, count, 0, query, 0);
    g_ebx = saved[0]; g_esi = saved[1]; g_edi = saved[2]; g_ebp = saved[3];
    g_esp = stack;
    if (hit < 0) { g_ecx = world; sub_00682D70(); }
    else g_esp += 12;
#endif
}
'''


def _shadow_bake(body):
    for site in ('004E025A', '004E079B'):
        call = 'RECOMP_CALL(sub_00682D70); /* 0x' + site + ': call 0x682d70 */'
        assert body.count(call) == 1
        body = body.replace(call, call.replace('sub_00682D70', 'crashday_shadow_world'))
    return SHADOW_WORLD + body


EXPECTED = {'0040BD20': 'af54b4bbc0126425b58333d1b25df3a0a71fa96d3a9539bccce5e434556898e5',
            '004DFD30': '1f1b0de130722378bb0757299fb76c61774cff5cf22be98ad1c2a2d036e28094',
            '006824D0': '44b9a3c15efe5385db293dd73f7018e8a77ca6afd1178b7bdf85283158f2e698',
            '00682D70': '8ec9c263b6f1554e87e05d8d97389958a7565c6ee9880ce483aa6241dc6f19de',
            '00633D80': 'ee1f9afb5b5caf63d737c9072111e51116796f19f5424fc74a3a63af16ab3cd2',
            '0067D0B0': '5bc893a8fca6f77bea78fc68f9bd436798edb035055f5c0c05baddb04536ad5c'}

def native_math(text):
    parts, pos = [], 0
    for match in re.finditer(rb'^void sub_([0-9A-F]{8})\(void\) \{', text, re.M):
        name = match[1].decode()
        if name not in EXPECTED:
            continue
        end = re.search(rb'\n\}\r?\n', text[match.end():])
        if end is None:
            raise ValueError('Unterminated math body: ' + name)
        stop = match.end() + end.end()
        body = text[match.start():stop].decode().replace('\r\n', '\n')
        if hashlib.sha256(body.encode()).hexdigest() != EXPECTED[name]:
            raise ValueError('Native math source changed: ' + name)
        if name == '004DFD30':
            replacement = _shadow_bake(body)
        elif name == '00633D80':
            replacement = _matrix_comparisons(body)
        elif name == '0067D0B0':
            replacement = _projection(body)
        elif name in ('006824D0', '00682D70'):
            replacement = body
        else:
            replacement = _absolute(body)
        parts.extend((text[pos:match.start()], replacement.encode()))
        pos = stop
    return b''.join(parts + [text[pos:]])
