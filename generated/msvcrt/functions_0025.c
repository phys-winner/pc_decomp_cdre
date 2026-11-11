#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15099930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15099930u);

L_15099930:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15099930: sub esp, 0xc */
    _flag_k = FK_CMP;
    _xmm[4].u64[0] = MEM64(0x15009030); /* 0x15099933: movlpd xmm4, qword ptr [0x15009030] */
    _xmm[3].u64[0] = MEM64(0x15009048); /* 0x1509993B: movlpd xmm3, qword ptr [0x15009048] */
    MEM64(esp + 0x4) = _xmm[0].u64[0]; /* 0x15099943: movlpd qword ptr [esp + 4], xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x15099949: xorpd xmm5, xmm5 */
    _xmm[2].u64[0] = MEM64(0x15009040); /* 0x1509994D: movlpd xmm2, qword ptr [0x15009040] */
    _xmm[1].u64[0] = _xmm[0].u64[0]; /* 0x15099955: movsd xmm1, xmm0 */
    { uint64_t _c = 44u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x15099959: psrlq xmm0, 0x2c */
    edx = _xmm[0].u32[0]; /* 0x1509995E: movd edx, xmm0 */
    _xmm[7].u64[0] = _xmm[1].u64[0]; /* 0x15099962: movsd xmm7, xmm1 */
    ecx = 0x2000u; /* 0x15099966: mov ecx, 0x2000 */
    _xmm[5].u16[2] = (uint16_t)(ecx); /* 0x1509996B: pinsrw xmm5, ecx, 2 */
    _xmm[0].u64[0] = _xmm[1].u64[0]; /* 0x15099970: movsd xmm0, xmm1 */
    eax = 0x0007FFFFu; /* 0x15099974: mov eax, 0x7ffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x15099979: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0003FB00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x0003FB00u; /* 0x1509997B: sub eax, 0x3fb00 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x3BBu */ /* 0x15099980: cmp eax, 0x3bb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3BBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15099A54; /* 0x15099985: jae 0x15099a54 */
L_1509998B:
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509998B: mulsd xmm1, xmm1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFu);
    edx = edx & 0xFFFFu; /* 0x1509998F: and edx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x15099995: subsd xmm3, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[3].f64[0] = (double)sqrt(_s); } /* 0x15099999: sqrtsd xmm3, xmm3 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1509999D: andpd xmm2, xmm7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x150999A1: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFB00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0xFB00u; /* 0x150999A4: sub edx, 0xfb00 */
    _flag_k = FK_CMP;
    _xmm[1].u64[0] = MEM64(edx * 2 + 0x15008790); /* 0x150999AA: movlpd xmm1, qword ptr [edx*2 + 0x15008790] */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x150999B3: orpd xmm2, xmm5 */
    _xmm[4] = xmm_ld(edx * 4 + 0x15007890); /* 0x150999B7: movapd xmm4, xmmword ptr [edx*4 + 0x15007890] */
    _xmm[6].u64[0] = _xmm[7].u64[0]; /* 0x150999C0: movsd xmm6, xmm7 */
    { double _s = _xmm[2].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x150999C4: addsd xmm7, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x150999C8: subsd xmm0, xmm2 */
    { double _s = _xmm[0].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x150999CC: mulsd xmm7, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x150999D0: mulsd xmm6, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x150999D4: mulsd xmm3, xmm2 */
    _xmm[1].u64[0] = _xmm[6].u64[0]; /* 0x150999D8: movsd xmm1, xmm6 */
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x150999DC: addsd xmm6, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] / _s); } /* 0x150999E0: divsd xmm7, xmm6 */
    _xmm[0].u64[0] = MEM64(0x15008FE8); /* 0x150999E4: movlpd xmm0, qword ptr [0x15008fe8] */
    _xmm[5].u64[0] = MEM64(0x15008FD8); /* 0x150999EC: movlpd xmm5, qword ptr [0x15008fd8] */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x150999F4: subsd xmm1, xmm3 */
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x150999F8: psrlq xmm2, 0x3f */
    _xmm[3].u64[0] = _xmm[1].u64[0]; /* 0x150999FD: movsd xmm3, xmm1 */
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] << _c); } /* 0x15099A01: psllq xmm2, 0x3f */
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x15099A06: mulsd xmm1, xmm1 */
    { xmm_t _s = _xmm[2]; _xmm[2].u32[0] = _s.u32[0]; _xmm[2].u32[1] = _s.u32[1]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x15099A0A: pshufd xmm2, xmm2, 0x44 */
    _xmm[6].u64[0] = MEM64(0x15008FE0); /* 0x15099A0F: movlpd xmm6, qword ptr [0x15008fe0] */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x15099A17: mulsd xmm3, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x15099A1B: mulsd xmm0, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x15099A1F: xorpd xmm4, xmm2 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x15099A23: mulsd xmm5, xmm3 */
    { double _s0 = sse_f64(MEM64(0x15008F90)); double _s1 = sse_f64(MEM64(0x15008F90 + 8)); xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[4] = _d; } /* 0x15099A27: subpd xmm4, xmmword ptr [0x15008f90] */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x15099A2F: mulsd xmm3, xmm1 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099A33: addsd xmm0, xmm6 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x15099A37: mulsd xmm0, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x15099A3B: subsd xmm5, xmm4 */
    { xmm_t _s = _xmm[4]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x15099A3F: pshufd xmm4, xmm4, 0xee */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099A44: addsd xmm0, xmm5 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x15099A48: subsd xmm0, xmm7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15099A4C: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x15099A4F: subsd xmm0, xmm4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099A53: ret  */
L_15099A54:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3BBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3BBu; /* 0x15099A54: sub eax, 0x3bb */
    _flag_k = FK_CMP;
    /* cmp eax, 0x41u */ /* 0x15099A59: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15099B82; /* 0x15099A5C: jae 0x15099b82 */
L_15099A62:
    { uint64_t _c = 38u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x15099A62: psrlq xmm7, 0x26 */
    { uint64_t _c = 38u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x15099A67: psllq xmm7, 0x26 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[0].u8[_k] >> 7) << _k; eax = _m; } /* 0x15099A6C: pmovmskb eax, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = ~_xmm[4].u32[_k] & _s.u32[_k]; } /* 0x15099A70: andnpd xmm4, xmm0 */
    { double _s = _xmm[7].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x15099A74: subsd xmm1, xmm7 */
    _xmm[6].u64[0] = _xmm[7].u64[0]; /* 0x15099A78: movsd xmm6, xmm7 */
    { double _s = _xmm[7].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x15099A7C: mulsd xmm7, xmm7 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099A80: addsd xmm0, xmm6 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] | _s.u32[_k]; } /* 0x15099A84: orpd xmm5, xmm4 */
    { double _s = _xmm[7].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x15099A88: subsd xmm3, xmm7 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x15099A8C: mulsd xmm0, xmm1 */
    _xmm[4].u64[0] = _xmm[3].u64[0]; /* 0x15099A90: movsd xmm4, xmm3 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x15099A94: subsd xmm3, xmm0 */
    { double _s = _xmm[3].f64[0]; _xmm[3].f64[0] = (double)sqrt(_s); } /* 0x15099A98: sqrtsd xmm3, xmm3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x15099A9C: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x15099AA1: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x15099AA1: shr eax, 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15099AA4: neg eax */
    _flag_k = FK_CMP;
    _xmm[7].u64[0] = _xmm[3].u64[0]; /* 0x15099AA6: movsd xmm7, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x15099AAA: andpd xmm2, xmm3 */
    { uint64_t _c = 2u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x15099AAE: psllq xmm3, 2 */
    edx = (uint32_t)_xmm[3].u16[3]; /* 0x15099AB3: pextrw edx, xmm3, 3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x15099AB8: orpd xmm2, xmm5 */
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x15099ABC: movd xmm3, eax */
    { xmm_t _s = _xmm[3]; _xmm[3].u32[0] = _s.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x15099AC0: pshufd xmm3, xmm3, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFEC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0xFEC0u; /* 0x15099AC5: sub edx, 0xfec0 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x15099ACB: add edx, edx */
    _flag_k = FK_ADD;
    { double _s = sse_f64(MEM64(edx * 4 + 0x15008790)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x15099ACD: mulsd xmm7, qword ptr [edx*4 + 0x15008790] */
    { double _s = _xmm[2].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x15099AD6: mulsd xmm6, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x15099ADA: mulsd xmm1, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x15099ADE: mulsd xmm2, xmm2 */
    { double _s = _xmm[7].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] - _s); } /* 0x15099AE2: subsd xmm6, xmm7 */
    { xmm_t _s = xmm_ld(0x15008FA0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x15099AE6: andpd xmm3, xmmword ptr [0x15008fa0] */
    { double _s = _xmm[1].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x15099AEE: addsd xmm6, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x15099AF2: subsd xmm4, xmm2 */
    { double _s = _xmm[7].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x15099AF6: addsd xmm7, xmm7 */
    _xmm[5].u64[0] = MEM64(0x15008FD8); /* 0x15099AFA: movlpd xmm5, qword ptr [0x15008fd8] */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x15099B02: subsd xmm4, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x15099B06: addsd xmm7, xmm6 */
    _xmm[0].u64[0] = MEM64(0x15008FE8); /* 0x15099B0A: movlpd xmm0, qword ptr [0x15008fe8] */
    { double _s = _xmm[7].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] / _s); } /* 0x15099B12: divsd xmm4, xmm7 */
    _xmm[2].u64[0] = MEM64(0x15008FE0); /* 0x15099B16: movlpd xmm2, qword ptr [0x15008fe0] */
    { double _s0 = sse_f64(MEM64(edx * 8 + 0x15007890)); double _s1 = sse_f64(MEM64(edx * 8 + 0x15007890 + 8)); xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[3] = _d; } /* 0x15099B1E: addpd xmm3, xmmword ptr [edx*8 + 0x15007890] */
    _xmm[1].u64[0] = _xmm[6].u64[0]; /* 0x15099B27: movsd xmm1, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x15099B2B: mulsd xmm6, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x15099B2F: mulsd xmm0, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x15099B33: mulsd xmm1, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x15099B37: mulsd xmm5, xmm1 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x15099B3B: mulsd xmm1, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099B3F: addsd xmm0, xmm2 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x15099B43: pxor xmm6, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x15099B47: mulsd xmm0, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x15099B4B: addsd xmm5, xmm3 */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099B4F: addsd xmm0, xmm5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x15099B53: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[6].u16[3] = (uint16_t)(eax); /* 0x15099B58: pinsrw xmm6, eax, 3 */
    _xmm[5].u64[0] = _xmm[4].u64[0]; /* 0x15099B5D: movsd xmm5, xmm4 */
    { xmm_t _s = _xmm[3]; _xmm[3].u32[0] = _s.u32[2]; _xmm[3].u32[1] = _s.u32[3]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x15099B61: pshufd xmm3, xmm3, 0xee */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x15099B66: addsd xmm4, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x15099B6A: subsd xmm3, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x15099B6E: addsd xmm5, xmm3 */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099B72: addsd xmm0, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099B76: addsd xmm0, xmm4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15099B7A: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15099B7D: xorpd xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099B81: ret  */
L_15099B82:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3BBBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3BBBu; /* 0x15099B82: add eax, 0x3bbb */
    _flag_k = FK_ADD;
    /* cmp eax, 0x3800u */ /* 0x15099B87: cmp eax, 0x3800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15099C15; /* 0x15099B8C: jae 0x15099c15 */
L_15099B92:
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x15099B92: unpcklpd xmm0, xmm0 */
    _xmm[6] = xmm_ld(0x15008FF0); /* 0x15099B96: movapd xmm6, xmmword ptr [0x15008ff0] */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u64[0] = _d.u64[0]; _xmm[1].u64[1] = _s.u64[0]; } /* 0x15099B9E: unpcklpd xmm1, xmm0 */
    _xmm[2] = xmm_ld(0x15009000); /* 0x15099BA2: movapd xmm2, xmmword ptr [0x15009000] */
    _xmm[4] = xmm_ld(0x15009010); /* 0x15099BAA: movapd xmm4, xmmword ptr [0x15009010] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x15099BB2: mulpd xmm0, xmm0 */
    _xmm[5] = xmm_ld(0x15008F90); /* 0x15099BB6: movapd xmm5, xmmword ptr [0x15008f90] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x15099BBE: mulpd xmm1, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x15099BC2: mulpd xmm6, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x15099BC6: mulpd xmm0, xmm0 */
    _xmm[3].u64[0] = _xmm[1].u64[0]; /* 0x15099BCA: movsd xmm3, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x15099BCE: mulsd xmm1, xmm1 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x15099BD2: addpd xmm6, xmm2 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x15099BD6: mulpd xmm4, xmm0 */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x15099BDA: mulsd xmm1, xmm3 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x15099BDE: addpd xmm6, xmm4 */
    { xmm_t _s = _xmm[5]; _xmm[0].u32[0] = _s.u32[2]; _xmm[0].u32[1] = _s.u32[3]; _xmm[0].u32[2] = _s.u32[2]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x15099BE2: pshufd xmm0, xmm5, 0xee */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x15099BE7: mulpd xmm1, xmm6 */
    { xmm_t _s = _xmm[5]; _xmm[6].u32[0] = _s.u32[2]; _xmm[6].u32[1] = _s.u32[3]; _xmm[6].u32[2] = _s.u32[2]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x15099BEB: pshufd xmm6, xmm5, 0xee */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x15099BF0: subsd xmm0, xmm7 */
    { xmm_t _s = _xmm[1]; _xmm[2].u32[0] = _s.u32[2]; _xmm[2].u32[1] = _s.u32[3]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x15099BF4: pshufd xmm2, xmm1, 0xee */
    { double _s = _xmm[1].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x15099BF9: subsd xmm5, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] - _s); } /* 0x15099BFD: subsd xmm6, xmm0 */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x15099C01: subsd xmm5, xmm2 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x15099C05: subsd xmm7, xmm6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15099C09: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[7].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x15099C0C: subsd xmm5, xmm7 */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099C10: addsd xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099C14: ret  */
L_15099C15:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3BFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3BFCu; /* 0x15099C15: sub eax, 0x3bfc */
    _flag_k = FK_CMP;
    /* cmp eax, 4 */ /* 0x15099C1A: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15099D0A; /* 0x15099C1D: jae 0x15099d0a */
L_15099C23:
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x15099C23: xorpd xmm6, xmm6 */
    { xmm_t _s = xmm_ld(0x15009030); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x15099C27: andpd xmm7, xmmword ptr [0x15009030] */
    _xmm[4].u64[0] = MEM64(0x15009050); /* 0x15099C2F: movlpd xmm4, qword ptr [0x15009050] */
    _xmm[1] = xmm_ld(0x15008FF0); /* 0x15099C37: movapd xmm1, xmmword ptr [0x15008ff0] */
    { double _s = _xmm[4].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x15099C3F: mulsd xmm7, xmm4 */
    _xmm[2] = xmm_ld(0x15009000); /* 0x15099C43: movapd xmm2, xmmword ptr [0x15009000] */
    { double _s = _xmm[7].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x15099C4B: subsd xmm4, xmm7 */
    _xmm[3] = xmm_ld(0x15009010); /* 0x15099C4F: movapd xmm3, xmmword ptr [0x15009010] */
    { xmm_t _s = _xmm[4]; _xmm[7].u32[0] = _s.u32[0]; _xmm[7].u32[1] = _s.u32[1]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[1]; } /* 0x15099C57: pshufd xmm7, xmm4, 0x44 */
    { double _s = _xmm[4].f64[0]; _xmm[4].f64[0] = (double)sqrt(_s); } /* 0x15099C5C: sqrtsd xmm4, xmm4 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x15099C60: mulpd xmm1, xmm7 */
    { xmm_t _s = _xmm[7]; _xmm[5].u32[0] = _s.u32[0]; _xmm[5].u32[1] = _s.u32[1]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x15099C64: pshufd xmm5, xmm7, 0x44 */
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x15099C69: pextrw eax, xmm0, 3 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x15099C6E: mulpd xmm7, xmm7 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[2] = _d; } /* 0x15099C72: addpd xmm2, xmm1 */
    _xmm[1].u64[0] = MEM64(0x15008FC0); /* 0x15099C76: movlpd xmm1, qword ptr [0x15008fc0] */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x15099C7E: mulpd xmm3, xmm7 */
    { double _s0 = _xmm[6].f64[0]; _xmm[0].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[0].f64[0], _s0, 1); } /* 0x15099C82: cmpltsd xmm0, xmm6 */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x15099C87: mulsd xmm7, xmm5 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[2] = _d; } /* 0x15099C8B: addpd xmm2, xmm3 */
    { xmm_t _s = _xmm[0]; _xmm[0].u32[0] = _s.u32[0]; _xmm[0].u32[1] = _s.u32[1]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x15099C8F: pshufd xmm0, xmm0, 0x44 */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x15099C94: mulsd xmm2, xmm7 */
    { xmm_t _s = xmm_ld(0x15008FA0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x15099C98: andpd xmm0, xmmword ptr [0x15008fa0] */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x15099CA0: mulpd xmm2, xmm5 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x15099CA4: andpd xmm1, xmm4 */
    { xmm_t _s = _xmm[4]; _xmm[3].u32[0] = _s.u32[0]; _xmm[3].u32[1] = _s.u32[1]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x15099CA8: pshufd xmm3, xmm4, 0x44 */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x15099CAD: subsd xmm4, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x15099CB1: addsd xmm3, xmm3 */
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x15099CB5: mulsd xmm1, xmm1 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x15099CB9: subsd xmm3, xmm4 */
    { double _s = _xmm[1].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x15099CBD: subsd xmm5, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x15099CC1: mulsd xmm4, xmm3 */
    { xmm_t _s = _xmm[3]; _xmm[3].u32[0] = _s.u32[2]; _xmm[3].u32[1] = _s.u32[3]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x15099CC5: pshufd xmm3, xmm3, 0xee */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x15099CCA: subsd xmm5, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] / _s); } /* 0x15099CCE: divsd xmm5, xmm3 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[3] = _d; } /* 0x15099CD2: addpd xmm3, xmm3 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x15099CD6: mulpd xmm2, xmm3 */
    { xmm_t _s = _xmm[2]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x15099CDA: pshufd xmm4, xmm2, 0xee */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x15099CDF: addsd xmm2, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x15099CE3: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[6].u16[3] = (uint16_t)(eax); /* 0x15099CE8: pinsrw xmm6, eax, 3 */
    { xmm_t _s = _xmm[0]; _xmm[0].u32[0] = _s.u32[2]; _xmm[0].u32[1] = _s.u32[3]; _xmm[0].u32[2] = _s.u32[2]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x15099CED: pshufd xmm0, xmm0, 0xee */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x15099CF2: addsd xmm2, xmm4 */
    { double _s = _xmm[5].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x15099CF6: addsd xmm2, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x15099CFA: addsd xmm2, xmm3 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099CFE: addsd xmm0, xmm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15099D02: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15099D05: xorpd xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099D09: ret  */
L_15099D0A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0003FEFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0003FEFCu; /* 0x15099D0A: add eax, 0x3fefc */
    _flag_k = FK_ADD;
    /* cmp eax, 0x0003FF00u */ /* 0x15099D0F: cmp eax, 0x3ff00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0003FF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15099DAF; /* 0x15099D14: jb 0x15099daf */
L_15099D1A:
    ecx = _xmm[7].u32[0]; /* 0x15099D1A: movd ecx, xmm7 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x15099D1E: psrlq xmm7, 0x20 */
    edx = _xmm[7].u32[0]; /* 0x15099D23: movd edx, xmm7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x15099D27: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x3FF00000u; /* 0x15099D2D: mov eax, 0x3ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15099D32: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x15099D34: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x15099D36: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15099D7C; /* 0x15099D39: je 0x15099d7c */
L_15099D3B:
    _xmm[2].u64[0] = MEM64(esp + 0x4); /* 0x15099D3B: movlpd xmm2, qword ptr [esp + 4] */
    edx = _xmm[2].u32[0]; /* 0x15099D41: movd edx, xmm2 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x15099D45: psrlq xmm2, 0x20 */
    ecx = _xmm[2].u32[0]; /* 0x15099D4A: movd ecx, xmm2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x15099D4E: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x15099D54: sub edx, 1 */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = 0x7FF00000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15099D57: sbb ecx, 0x7ff00000 */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp ecx, 0 */ /* 0x15099D5D: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15099DC7; /* 0x15099D60: jge 0x15099dc7 */
L_15099D62:
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x15099D62: xorpd xmm1, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15099D66: xorpd xmm0, xmm0 */
    edx = 0x7FF0u; /* 0x15099D6A: mov edx, 0x7ff0 */
    _xmm[1].u16[3] = (uint16_t)(edx); /* 0x15099D6F: pinsrw xmm1, edx, 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15099D74: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x15099D77: mulsd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099D7B: ret  */
L_15099D7C:
    edx = (uint32_t)_xmm[7].u16[1]; /* 0x15099D7C: pextrw edx, xmm7, 1 */
    if (15u) _cf = (((edx) >> 14) & 1u); /* 0x15099D81: shr edx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edx >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 15u; /* 0x15099D81: shr edx, 0xf */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x15099D84: neg edx */
    _flag_k = FK_CMP;
    _xmm[7].u64[0] = (uint32_t)(edx); _xmm[7].u64[1] = 0; /* 0x15099D86: movd xmm7, edx */
    { xmm_t _s = _xmm[7]; _xmm[7].u32[0] = _s.u32[0]; _xmm[7].u32[1] = _s.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x15099D8A: pshufd xmm7, xmm7, 0 */
    _xmm[2].u64[0] = MEM64(0x15008FB0); /* 0x15099D8F: movlpd xmm2, qword ptr [0x15008fb0] */
    _xmm[0].u64[0] = MEM64(0x15008FB8); /* 0x15099D97: movlpd xmm0, qword ptr [0x15008fb8] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x15099D9F: andpd xmm2, xmm7 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x15099DA3: andpd xmm0, xmm7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15099DA7: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099DAA: addsd xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099DAE: ret  */
L_15099DAF:
    _xmm[2].u64[0] = MEM64(0x15008F90); /* 0x15099DAF: movlpd xmm2, qword ptr [0x15008f90] */
    _xmm[0].u64[0] = MEM64(0x15008F98); /* 0x15099DB7: movlpd xmm0, qword ptr [0x15008f98] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15099DBF: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099DC2: addsd xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099DC6: ret  */
L_15099DC7:
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x15099DC7: xorpd xmm6, xmm6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15099DCB: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x15099DCE: addsd xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099DD2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15099DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15099DE0u);

L_15099DE0:
    eax = _xmm[0].u32[0]; /* 0x15099DE0: movd eax, xmm0 */
    ecx = 0x3F800000u; /* 0x15099DE4: mov ecx, 0x3f800000 */
    _xmm[3].u64[0] = (uint32_t)(ecx); _xmm[3].u64[1] = 0; /* 0x15099DE9: movd xmm3, ecx */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x15099DED: xorps xmm7, xmm7 */
    ecx = 0xFFFE0000u; /* 0x15099DF0: mov ecx, 0xfffe0000 */
    _xmm[2].u64[0] = (uint32_t)(ecx); _xmm[2].u64[1] = 0; /* 0x15099DF5: movd xmm2, ecx */
    edx = 0x7FFFFFFFu; /* 0x15099DF9: mov edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x15099DFE: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3D800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3D800000u; /* 0x15099E00: sub edx, 0x3d800000 */
    _flag_k = FK_CMP;
    /* cmp edx, 0x01DDB3D7u */ /* 0x15099E06: cmp edx, 0x1ddb3d7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x01DDB3D7u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15099ECD; /* 0x15099E0C: jae 0x15099ecd */
L_15099E12:
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x15099E12: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x15099E16: mulss xmm0, xmm0 */
    ecx = 1; /* 0x15099E1A: mov ecx, 1 */
    _xmm[7].u16[1] = (uint16_t)(ecx); /* 0x15099E1F: pinsrw xmm7, ecx, 1 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x15099E24: subss xmm3, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)sqrtf(_s); } /* 0x15099E28: sqrtss xmm3, xmm3 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x15099E2C: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x15099E2C: shr edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1FEu);
    edx = edx & 0x1FEu; /* 0x15099E2F: and edx, 0x1fe */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[5].u64[0] = MEM32(edx * 2 + 0x15009860); _xmm[5].u64[1] = 0; /* 0x15099E35: movss xmm5, dword ptr [edx*2 + 0x15009860] */
    _xmm[4] = xmm_ld(edx * 4 + 0x15009060); /* 0x15099E3E: movups xmm4, xmmword ptr [edx*4 + 0x15009060] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x15099E46: andps xmm2, xmm1 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x15099E49: orps xmm2, xmm7 */
    { xmm_t _s = _xmm[1]; _xmm[6].u32[0] = _s.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x15099E4C: pshufd xmm6, xmm1, 0 */
    { xmm_t _s = _xmm[1]; _xmm[7].u32[0] = _s.u32[0]; _xmm[7].u32[1] = _s.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x15099E51: pshufd xmm7, xmm1, 0 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x15099E56: addss xmm1, xmm2 */
    { float _s = _xmm[5].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x15099E5A: mulss xmm6, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] - _s); } /* 0x15099E5E: subss xmm7, xmm2 */
    ecx = 0x3E2AAAABu; /* 0x15099E62: mov ecx, 0x3e2aaaab */
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x15099E67: movd xmm0, ecx */
    { float _s = _xmm[1].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x15099E6B: mulss xmm7, xmm1 */
    _xmm[5].u32[0] = _xmm[6].u32[0]; /* 0x15099E6F: movss xmm5, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x15099E73: mulss xmm2, xmm3 */
    _xmm[1] = xmm_ld(0x15009C60); /* 0x15099E77: movups xmm1, xmmword ptr [0x15009c60] */
    { float _s = _xmm[2].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x15099E7E: addss xmm5, xmm2 */
    { float _s = _xmm[5].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] / _s); } /* 0x15099E82: divss xmm7, xmm5 */
    { float _s = _xmm[6].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x15099E86: subss xmm2, xmm6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x15099E8A: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x15099E8F: movd xmm3, eax */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x15099E93: mulss xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x15099E97: mulss xmm2, xmm2 */
    { xmm_t _s = _xmm[3]; _xmm[3].u32[0] = _s.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x15099E9B: pshufd xmm3, xmm3, 0 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x15099EA0: mulss xmm0, xmm2 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x15099EA4: xorps xmm4, xmm3 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[1] = _d; } /* 0x15099EA7: subps xmm1, xmm4 */
    { xmm_t _s = _xmm[1]; _xmm[5].u32[0] = _s.u32[1]; _xmm[5].u32[1] = _s.u32[1]; _xmm[5].u32[2] = _s.u32[1]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x15099EAA: pshufd xmm5, xmm1, 0x55 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x15099EAF: addss xmm0, xmm1 */
    { xmm_t _s = _xmm[1]; _xmm[6].u32[0] = _s.u32[1]; _xmm[6].u32[1] = _s.u32[1]; _xmm[6].u32[2] = _s.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x15099EB3: pshufd xmm6, xmm1, 0x55 */
    { float _s = _xmm[7].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x15099EB8: subss xmm5, xmm7 */
    { float _s = _xmm[5].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] - _s); } /* 0x15099EBC: subss xmm6, xmm5 */
    { float _s = _xmm[6].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] - _s); } /* 0x15099EC0: subss xmm7, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x15099EC4: subss xmm0, xmm7 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x15099EC8: addss xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099ECC: ret  */
L_15099ECD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x01DDB3D7u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x01DDB3D7u; /* 0x15099ECD: sub edx, 0x1ddb3d7 */
    _flag_k = FK_CMP;
    /* cmp edx, 0x00204C29u */ /* 0x15099ED3: cmp edx, 0x204c29 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00204C29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15099FCB; /* 0x15099ED9: jae 0x15099fcb */
L_15099EDF:
    { xmm_t _s = _xmm[0]; _xmm[7].u32[0] = _s.u32[0]; _xmm[7].u32[1] = _s.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x15099EDF: pshufd xmm7, xmm0, 0 */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x15099EE4: movss xmm1, xmm0 */
    { uint64_t _c = 12u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x15099EE8: psrlq xmm7, 0xc */
    { uint64_t _c = 12u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x15099EED: psllq xmm7, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x15099EF2: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x15099EF7: subss xmm1, xmm7 */
    { xmm_t _s = _xmm[7]; _xmm[6].u32[0] = _s.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x15099EFB: pshufd xmm6, xmm7, 0 */
    { float _s = _xmm[7].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x15099F00: mulss xmm7, xmm7 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x15099F04: addss xmm0, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x15099F08: subss xmm3, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x15099F0C: mulss xmm0, xmm1 */
    { xmm_t _s = _xmm[3]; _xmm[4].u32[0] = _s.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x15099F10: pshufd xmm4, xmm3, 0 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x15099F15: subss xmm3, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)sqrtf(_s); } /* 0x15099F19: sqrtss xmm3, xmm3 */
    ecx = 0x00010000u; /* 0x15099F1D: mov ecx, 0x10000 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x15099F22: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[5].u64[0] = (uint32_t)(ecx); _xmm[5].u64[1] = 0; /* 0x15099F24: movd xmm5, ecx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x15099F28: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x15099F28: shr eax, 0x1f */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15099F2B: neg eax */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x15099F2D: andps xmm2, xmm3 */
    edx = (uint32_t)_xmm[3].u16[1]; /* 0x15099F30: pextrw edx, xmm3, 1 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x15099F35: orps xmm2, xmm5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x15099F38: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x15099F3B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x15099F3B: shr eax, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15099F3E: neg eax */
    _flag_k = FK_CMP;
    _xmm[7].u64[0] = (uint32_t)(eax); _xmm[7].u64[1] = 0; /* 0x15099F40: movd xmm7, eax */
    { xmm_t _s = _xmm[7]; _xmm[7].u32[0] = _s.u32[0]; _xmm[7].u32[1] = _s.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x15099F44: pshufd xmm7, xmm7, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3D80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3D80u; /* 0x15099F49: sub edx, 0x3d80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFEu);
    edx = edx & 0xFFFEu; /* 0x15099F4F: and edx, 0xfffe */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _s = sse_f32(MEM32(edx * 2 + 0x15009860)); _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x15099F55: mulss xmm3, dword ptr [edx*2 + 0x15009860] */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x15099F5E: mulss xmm6, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x15099F62: mulss xmm1, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x15099F66: mulss xmm2, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] - _s); } /* 0x15099F6A: subss xmm6, xmm3 */
    { xmm_t _s = xmm_ld(0x15009C70); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x15099F6E: andps xmm7, xmmword ptr [0x15009c70] */
    { float _s = _xmm[1].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x15099F75: addss xmm6, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x15099F79: subss xmm4, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x15099F7D: addss xmm3, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x15099F81: subss xmm4, xmm0 */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x15099F85: addss xmm3, xmm6 */
    ecx = 0xBE2AAAABu; /* 0x15099F89: mov ecx, 0xbe2aaaab */
    _xmm[5].u64[0] = (uint32_t)(ecx); _xmm[5].u64[1] = 0; /* 0x15099F8E: movd xmm5, ecx */
    { float _s = _xmm[3].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] / _s); } /* 0x15099F92: divss xmm4, xmm3 */
    _xmm[2] = xmm_ld(edx * 4 + 0x15009060); /* 0x15099F96: movups xmm2, xmmword ptr [edx*4 + 0x15009060] */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x15099F9E: mulss xmm5, xmm6 */
    { float _s = _xmm[6].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x15099FA2: mulss xmm6, xmm6 */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x15099FA6: mulss xmm5, xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x15099FAA: addps xmm7, xmm2 */
    { float _s = _xmm[7].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x15099FAD: addss xmm5, xmm7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x15099FB1: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x15099FB6: movd xmm0, eax */
    { xmm_t _s = _xmm[7]; _xmm[3].u32[0] = _s.u32[1]; _xmm[3].u32[1] = _s.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x15099FBA: pshufd xmm3, xmm7, 0x55 */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x15099FBF: addss xmm5, xmm4 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x15099FC3: addss xmm5, xmm3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15099FC7: xorps xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15099FCA: ret  */
L_15099FCB:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x07DDB3D7u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x07DDB3D7u; /* 0x15099FCB: add edx, 0x7ddb3d7 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x06000000u */ /* 0x15099FD1: cmp edx, 0x6000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x06000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509A03F; /* 0x15099FD7: jae 0x1509a03f */
L_15099FD9:
    ecx = 0xBE2AAAABu; /* 0x15099FD9: mov ecx, 0xbe2aaaab */
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x15099FDE: movd xmm1, ecx */
    { xmm_t _s = _xmm[0]; _xmm[5].u32[0] = _s.u32[0]; _xmm[5].u32[1] = _s.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x15099FE2: pshufd xmm5, xmm0, 0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x15099FE7: mulss xmm0, xmm0 */
    edx = 0xBD99999Au; /* 0x15099FEB: mov edx, 0xbd99999a */
    _xmm[2].u64[0] = (uint32_t)(edx); _xmm[2].u64[1] = 0; /* 0x15099FF0: movd xmm2, edx */
    { float _s = _xmm[5].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x15099FF4: mulss xmm1, xmm5 */
    { xmm_t _s = _xmm[5]; _xmm[4].u32[0] = _s.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x15099FF8: pshufd xmm4, xmm5, 0 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x15099FFD: mulss xmm2, xmm5 */
    _xmm[6].u64[0] = MEM32(0x15009C60); _xmm[6].u64[1] = 0; /* 0x1509A001: movss xmm6, dword ptr [0x15009c60] */
    _xmm[7].u64[0] = MEM32(0x15009C64); _xmm[7].u64[1] = 0; /* 0x1509A009: movss xmm7, dword ptr [0x15009c64] */
    { xmm_t _s = _xmm[0]; _xmm[3].u32[0] = _s.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1509A011: pshufd xmm3, xmm0, 0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A016: mulss xmm0, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509A01A: mulss xmm1, xmm3 */
    { float _s = _xmm[7].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A01E: subss xmm4, xmm7 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A022: mulss xmm0, xmm2 */
    { float _s = _xmm[4].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] + _s); } /* 0x1509A026: addss xmm7, xmm4 */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x1509A02A: addss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x1509A02E: subss xmm5, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A032: addss xmm0, xmm1 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509A036: subss xmm0, xmm5 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509A03A: subss xmm0, xmm4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A03E: ret  */
L_1509A03F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x07FE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x07FE0000u; /* 0x1509A03F: sub edx, 0x7fe0000 */
    _flag_k = FK_CMP;
    /* cmp edx, 0x00020000u */ /* 0x1509A045: cmp edx, 0x20000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509A12E; /* 0x1509A04B: jae 0x1509a12e */
L_1509A051:
    ecx = 0x7FFFFFFFu; /* 0x1509A051: mov ecx, 0x7fffffff */
    _xmm[7].u64[0] = (uint32_t)(ecx); _xmm[7].u64[1] = 0; /* 0x1509A056: movd xmm7, ecx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509A05A: andps xmm7, xmm0 */
    edx = 0x3F000000u; /* 0x1509A05D: mov edx, 0x3f000000 */
    _xmm[4].u64[0] = (uint32_t)(edx); _xmm[4].u64[1] = 0; /* 0x1509A062: movd xmm4, edx */
    ecx = 0xBD99999Au; /* 0x1509A066: mov ecx, 0xbd99999a */
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x1509A06B: movd xmm1, ecx */
    { float _s = _xmm[4].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509A06F: mulss xmm7, xmm4 */
    edx = 0xBE2AAAABu; /* 0x1509A073: mov edx, 0xbe2aaaab */
    _xmm[2].u64[0] = (uint32_t)(edx); _xmm[2].u64[1] = 0; /* 0x1509A078: movd xmm2, edx */
    { float _s = _xmm[7].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A07C: subss xmm4, xmm7 */
    edx = 0xBD36DB6Eu; /* 0x1509A080: mov edx, 0xbd36db6e */
    _xmm[3].u64[0] = (uint32_t)(edx); _xmm[3].u64[1] = 0; /* 0x1509A085: movd xmm3, edx */
    { xmm_t _s = _xmm[4]; _xmm[7].u32[0] = _s.u32[0]; _xmm[7].u32[1] = _s.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1509A089: pshufd xmm7, xmm4, 0 */
    { float _s = _xmm[4].f32[0]; _xmm[4].f32[0] = (float)sqrtf(_s); } /* 0x1509A08E: sqrtss xmm4, xmm4 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509A092: mulss xmm1, xmm7 */
    { xmm_t _s = _xmm[7]; _xmm[5].u32[0] = _s.u32[0]; _xmm[5].u32[1] = _s.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1509A096: pshufd xmm5, xmm7, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1509A09B: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1509A0A0: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1509A0A0: shr eax, 0x1f */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1509A0A3: neg eax */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x1509A0A5: movd xmm0, eax */
    { float _s = _xmm[7].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509A0A9: mulss xmm7, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x1509A0AD: addss xmm2, xmm1 */
    ecx = 0xFFFFF000u; /* 0x1509A0B1: mov ecx, 0xfffff000 */
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x1509A0B6: movd xmm1, ecx */
    { float _s = _xmm[7].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x1509A0BA: mulss xmm3, xmm7 */
    { xmm_t _s = _xmm[0]; _xmm[0].u32[0] = _s.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1509A0BE: pshufd xmm0, xmm0, 0 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x1509A0C3: addss xmm2, xmm3 */
    { xmm_t _s = xmm_ld(0x15009C80); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509A0C7: andps xmm0, xmmword ptr [0x15009c80] */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509A0CE: mulss xmm2, xmm5 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509A0D2: andps xmm1, xmm4 */
    { xmm_t _s = _xmm[4]; _xmm[3].u32[0] = _s.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1509A0D5: pshufd xmm3, xmm4, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A0DA: subss xmm4, xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x1509A0DE: addss xmm3, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509A0E2: mulss xmm1, xmm1 */
    { float _s = _xmm[4].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x1509A0E6: subss xmm3, xmm4 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x1509A0EA: subss xmm5, xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x1509A0EE: mulss xmm4, xmm3 */
    { xmm_t _s = _xmm[3]; _xmm[3].u32[0] = _s.u32[1]; _xmm[3].u32[1] = _s.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1509A0F2: pshufd xmm3, xmm3, 0x55 */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x1509A0F7: subss xmm5, xmm4 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] / _s); } /* 0x1509A0FB: divss xmm5, xmm3 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x1509A0FF: addss xmm3, xmm3 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509A103: mulss xmm2, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x1509A107: addss xmm2, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1509A10B: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ 0x80000000u)); _flag_b = (uint32_t)((eax ^ 0x80000000u));
    eax = eax ^ 0x80000000u; /* 0x1509A110: xor eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[6].u64[0] = (uint32_t)(eax); _xmm[6].u64[1] = 0; /* 0x1509A115: movd xmm6, eax */
    { xmm_t _s = _xmm[0]; _xmm[0].u32[0] = _s.u32[1]; _xmm[0].u32[1] = _s.u32[1]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1509A119: pshufd xmm0, xmm0, 0x55 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x1509A11E: subss xmm2, xmm5 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x1509A122: subss xmm2, xmm3 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A126: addss xmm0, xmm2 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509A12A: xorps xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A12D: ret  */
L_1509A12E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3F7E0000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x3F7E0000u; /* 0x1509A12E: add edx, 0x3f7e0000 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x37800000u */ /* 0x1509A134: cmp edx, 0x37800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x37800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509A15D; /* 0x1509A13A: jb 0x1509a15d */
L_1509A13C:
    /* cmp edx, 0x3F800000u */ /* 0x1509A13C: cmp edx, 0x3f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509A194; /* 0x1509A142: je 0x1509a194 */
L_1509A144:
    /* cmp edx, 0x7F800000u */ /* 0x1509A144: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509A18C; /* 0x1509A14A: ja 0x1509a18c */
L_1509A14C:
    edx = 0x7F800000u; /* 0x1509A14C: mov edx, 0x7f800000 */
    _xmm[1].u64[0] = (uint32_t)(edx); _xmm[1].u64[1] = 0; /* 0x1509A151: movd xmm1, edx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509A155: xorps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A158: mulss xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A15C: ret  */
L_1509A15D:
    { xmm_t _s = _xmm[0]; _xmm[1].u32[0] = _s.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1509A15D: pshufd xmm1, xmm0, 0 */
    _xmm[2].u64[0] = MEM32(0x15009C64); _xmm[2].u64[1] = 0; /* 0x1509A162: movss xmm2, dword ptr [0x15009c64] */
    { xmm_t _s = _xmm[0]; _xmm[3].u32[0] = _s.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1509A16A: pshufd xmm3, xmm0, 0 */
    _xmm[0].u64[0] = MEM32(0x15009C60); _xmm[0].u64[1] = 0; /* 0x1509A16F: movss xmm0, dword ptr [0x15009c60] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1509A177: subss xmm1, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x1509A17B: addss xmm2, xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x1509A17F: subss xmm2, xmm3 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A183: addss xmm0, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509A187: subss xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A18B: ret  */
L_1509A18C:
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509A18C: xorps xmm7, xmm7 */
    { float _s = _xmm[7].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A18F: addss xmm0, xmm7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A193: ret  */
L_1509A194:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1509A194: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1509A199: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1509A199: shr eax, 0x1f */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1509A19C: neg eax */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x1509A19E: movd xmm0, eax */
    _xmm[2].u64[0] = MEM32(0x15009C80); _xmm[2].u64[1] = 0; /* 0x1509A1A2: movss xmm2, dword ptr [0x15009c80] */
    _xmm[1].u64[0] = MEM32(0x15009C84); _xmm[1].u64[1] = 0; /* 0x1509A1AA: movss xmm1, dword ptr [0x15009c84] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1509A1B2: andps xmm2, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509A1B5: andps xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A1B8: addss xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A1BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509A1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509A1D0u);

L_1509A1D0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509A1D0: sub esp, 0xc */
    _flag_k = FK_CMP;
    _xmm[4].u64[0] = MEM64(0x1500B3F0); /* 0x1509A1D3: movlpd xmm4, qword ptr [0x1500b3f0] */
    _xmm[3].u64[0] = MEM64(0x1500B408); /* 0x1509A1DB: movlpd xmm3, qword ptr [0x1500b408] */
    MEM64(esp + 0x4) = _xmm[0].u64[0]; /* 0x1509A1E3: movlpd qword ptr [esp + 4], xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x1509A1E9: xorpd xmm5, xmm5 */
    _xmm[2].u64[0] = MEM64(0x1500B400); /* 0x1509A1ED: movlpd xmm2, qword ptr [0x1500b400] */
    ecx = 0x2000u; /* 0x1509A1F5: mov ecx, 0x2000 */
    _xmm[5].u16[2] = (uint16_t)(ecx); /* 0x1509A1FA: pinsrw xmm5, ecx, 2 */
    _xmm[1].u64[0] = _xmm[0].u64[0]; /* 0x1509A1FF: movsd xmm1, xmm0 */
    { uint64_t _c = 44u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509A203: psrlq xmm0, 0x2c */
    edx = _xmm[0].u32[0]; /* 0x1509A208: movd edx, xmm0 */
    _xmm[7].u64[0] = _xmm[1].u64[0]; /* 0x1509A20C: movsd xmm7, xmm1 */
    ecx = 0x2000u; /* 0x1509A210: mov ecx, 0x2000 */
    _xmm[5].u16[2] = (uint16_t)(ecx); /* 0x1509A215: pinsrw xmm5, ecx, 2 */
    _xmm[0].u64[0] = _xmm[1].u64[0]; /* 0x1509A21A: movsd xmm0, xmm1 */
    eax = 0x0007FFFFu; /* 0x1509A21E: mov eax, 0x7ffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1509A223: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0003FB00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x0003FB00u; /* 0x1509A225: sub eax, 0x3fb00 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x3BBu */ /* 0x1509A22A: cmp eax, 0x3bb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3BBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509A2F3; /* 0x1509A22F: jae 0x1509a2f3 */
L_1509A235:
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509A235: mulsd xmm1, xmm1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFu);
    edx = edx & 0xFFFFu; /* 0x1509A239: and edx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509A23F: subsd xmm3, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[3].f64[0] = (double)sqrt(_s); } /* 0x1509A243: sqrtsd xmm3, xmm3 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1509A247: andpd xmm2, xmm7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1509A24B: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFB00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0xFB00u; /* 0x1509A24E: sub edx, 0xfb00 */
    _flag_k = FK_CMP;
    _xmm[1].u64[0] = MEM64(edx * 2 + 0x1500ABF0); /* 0x1509A254: movlpd xmm1, qword ptr [edx*2 + 0x1500abf0] */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1509A25D: orpd xmm2, xmm5 */
    _xmm[4] = xmm_ld(edx * 4 + 0x15009CF0); /* 0x1509A261: movapd xmm4, xmmword ptr [edx*4 + 0x15009cf0] */
    _xmm[6].u64[0] = _xmm[7].u64[0]; /* 0x1509A26A: movsd xmm6, xmm7 */
    { double _s = _xmm[2].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509A26E: addsd xmm7, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509A272: subsd xmm0, xmm2 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509A276: mulsd xmm0, xmm7 */
    { double _s = _xmm[1].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509A27A: mulsd xmm6, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509A27E: mulsd xmm3, xmm2 */
    _xmm[1].u64[0] = _xmm[6].u64[0]; /* 0x1509A282: movsd xmm1, xmm6 */
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509A286: addsd xmm6, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x1509A28A: divsd xmm0, xmm6 */
    _xmm[7].u64[0] = MEM64(0x15009CE0); /* 0x1509A28E: movlpd xmm7, qword ptr [0x15009ce0] */
    _xmm[5].u64[0] = MEM64(0x15009CD0); /* 0x1509A296: movlpd xmm5, qword ptr [0x15009cd0] */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509A29E: subsd xmm1, xmm3 */
    { xmm_t _s = xmm_ld(0x1500B430); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1509A2A2: andpd xmm2, xmmword ptr [0x1500b430] */
    _xmm[3].u64[0] = _xmm[1].u64[0]; /* 0x1509A2AA: movsd xmm3, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509A2AE: mulsd xmm1, xmm1 */
    _xmm[6].u64[0] = MEM64(0x15009CD8); /* 0x1509A2B2: movlpd xmm6, qword ptr [0x15009cd8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509A2BA: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509A2BD: mulsd xmm3, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509A2C1: mulsd xmm7, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509A2C5: mulsd xmm5, xmm3 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x1509A2C9: xorpd xmm4, xmm2 */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509A2CD: mulsd xmm3, xmm1 */
    { double _s = _xmm[7].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509A2D1: addsd xmm6, xmm7 */
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509A2D5: mulsd xmm6, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509A2D9: addsd xmm5, xmm4 */
    { xmm_t _s = _xmm[4]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1509A2DD: pshufd xmm4, xmm4, 0xee */
    { double _s = _xmm[5].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509A2E2: addsd xmm6, xmm5 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] | _s.u32[_k]; } /* 0x1509A2E6: orpd xmm4, xmm2 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A2EA: addsd xmm0, xmm6 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A2EE: addsd xmm0, xmm4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A2F2: ret  */
L_1509A2F3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3BBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3BBu; /* 0x1509A2F3: sub eax, 0x3bb */
    _flag_k = FK_CMP;
    /* cmp eax, 0x43u */ /* 0x1509A2F8: cmp eax, 0x43 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509A419; /* 0x1509A2FB: jae 0x1509a419 */
L_1509A301:
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509A301: mulsd xmm1, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509A305: subsd xmm3, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[3].f64[0] = (double)sqrt(_s); } /* 0x1509A309: sqrtsd xmm3, xmm3 */
    eax = edx; /* 0x1509A30D: mov eax, edx */
    { xmm_t _s = xmm_ld(0x1500B3F0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509A30F: andpd xmm0, xmmword ptr [0x1500b3f0] */
    { xmm_t _s = xmm_ld(0x1500B420); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509A317: andpd xmm7, xmmword ptr [0x1500b420] */
    _xmm[1].u64[0] = _xmm[0].u64[0]; /* 0x1509A31F: movsd xmm1, xmm0 */
    _xmm[4].u64[0] = MEM64(0x1500B408); /* 0x1509A323: movlpd xmm4, qword ptr [0x1500b408] */
    _xmm[6].u64[0] = _xmm[7].u64[0]; /* 0x1509A32B: movsd xmm6, xmm7 */
    { double _s = _xmm[7].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509A32F: subsd xmm1, xmm7 */
    { double _s = _xmm[7].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509A333: mulsd xmm7, xmm7 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A337: addsd xmm0, xmm6 */
    { double _s = _xmm[7].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509A33B: subsd xmm4, xmm7 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509A33F: mulsd xmm0, xmm1 */
    _xmm[7].u64[0] = _xmm[3].u64[0]; /* 0x1509A343: movsd xmm7, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1509A347: andpd xmm2, xmm3 */
    { uint64_t _c = 2u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x1509A34B: psllq xmm3, 2 */
    edx = (uint32_t)_xmm[3].u16[3]; /* 0x1509A350: pextrw edx, xmm3, 3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1509A355: orpd xmm2, xmm5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFEC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0xFEC0u; /* 0x1509A359: sub edx, 0xfec0 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1509A35F: add edx, edx */
    _flag_k = FK_ADD;
    { double _s = sse_f64(MEM64(edx * 4 + 0x1500ABF0)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509A361: mulsd xmm7, qword ptr [edx*4 + 0x1500abf0] */
    { double _s = _xmm[2].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509A36A: mulsd xmm6, xmm2 */
    _xmm[3] = xmm_ld(0x1500B440); /* 0x1509A36E: movapd xmm3, xmmword ptr [0x1500b440] */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509A376: mulsd xmm1, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509A37A: mulsd xmm2, xmm2 */
    { double _s = _xmm[7].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] - _s); } /* 0x1509A37E: subsd xmm6, xmm7 */
    { double _s = _xmm[1].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509A382: addsd xmm6, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509A386: subsd xmm4, xmm2 */
    { double _s = _xmm[7].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509A38A: addsd xmm7, xmm7 */
    _xmm[5].u64[0] = MEM64(0x15009CD0); /* 0x1509A38E: movlpd xmm5, qword ptr [0x15009cd0] */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509A396: subsd xmm4, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509A39A: addsd xmm7, xmm6 */
    _xmm[0].u64[0] = MEM64(0x15009CE0); /* 0x1509A39E: movlpd xmm0, qword ptr [0x15009ce0] */
    { double _s = _xmm[7].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] / _s); } /* 0x1509A3A6: divsd xmm4, xmm7 */
    _xmm[2].u64[0] = MEM64(0x15009CD8); /* 0x1509A3AA: movlpd xmm2, qword ptr [0x15009cd8] */
    { double _s0 = sse_f64(MEM64(edx * 8 + 0x15009CF0)); double _s1 = sse_f64(MEM64(edx * 8 + 0x15009CF0 + 8)); xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[3] = _d; } /* 0x1509A3B2: subpd xmm3, xmmword ptr [edx*8 + 0x15009cf0] */
    _xmm[1].u64[0] = _xmm[6].u64[0]; /* 0x1509A3BB: movsd xmm1, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509A3BF: mulsd xmm6, xmm6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x1509A3C3: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1509A3C8: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x1509A3C8: shr eax, 4 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509A3CB: mulsd xmm0, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509A3CF: mulsd xmm1, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509A3D3: mulsd xmm5, xmm1 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509A3D7: mulsd xmm1, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A3DB: addsd xmm0, xmm2 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509A3DF: pxor xmm6, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509A3E3: mulsd xmm0, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509A3E7: addsd xmm5, xmm3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509A3EB: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[6].u16[3] = (uint16_t)(eax); /* 0x1509A3EE: pinsrw xmm6, eax, 3 */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A3F3: addsd xmm0, xmm5 */
    _xmm[5].u64[0] = _xmm[4].u64[0]; /* 0x1509A3F7: movsd xmm5, xmm4 */
    { xmm_t _s = _xmm[3]; _xmm[3].u32[0] = _s.u32[2]; _xmm[3].u32[1] = _s.u32[3]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1509A3FB: pshufd xmm3, xmm3, 0xee */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509A400: subsd xmm4, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509A404: addsd xmm3, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x1509A408: subsd xmm5, xmm3 */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509A40C: subsd xmm0, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509A410: subsd xmm0, xmm4 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509A414: orpd xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A418: ret  */
L_1509A419:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3BBBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3BBBu; /* 0x1509A419: add eax, 0x3bbb */
    _flag_k = FK_ADD;
    /* cmp eax, 0x3800u */ /* 0x1509A41E: cmp eax, 0x3800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509A482; /* 0x1509A423: jae 0x1509a482 */
L_1509A425:
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u64[0] = _d.u64[0]; _xmm[7].u64[1] = _s.u64[0]; } /* 0x1509A425: unpcklpd xmm7, xmm7 */
    _xmm[1] = xmm_ld(0x15009C90); /* 0x1509A429: movapd xmm1, xmmword ptr [0x15009c90] */
    _xmm[6] = _xmm[7]; /* 0x1509A431: movapd xmm6, xmm7 */
    _xmm[2] = xmm_ld(0x15009CA0); /* 0x1509A435: movapd xmm2, xmmword ptr [0x15009ca0] */
    _xmm[4] = xmm_ld(0x15009CB0); /* 0x1509A43D: movapd xmm4, xmmword ptr [0x15009cb0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509A445: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509A448: mulpd xmm7, xmm7 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509A44C: mulpd xmm6, xmm7 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509A450: mulpd xmm1, xmm7 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509A454: mulpd xmm7, xmm7 */
    _xmm[3].u64[0] = _xmm[6].u64[0]; /* 0x1509A458: movsd xmm3, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509A45C: mulsd xmm6, xmm6 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509A460: addpd xmm1, xmm2 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x1509A464: mulpd xmm4, xmm7 */
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509A468: mulsd xmm6, xmm3 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509A46C: addpd xmm1, xmm4 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509A470: mulpd xmm1, xmm6 */
    { xmm_t _s = _xmm[1]; _xmm[2].u32[0] = _s.u32[2]; _xmm[2].u32[1] = _s.u32[3]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1509A474: pshufd xmm2, xmm1, 0xee */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509A479: addsd xmm1, xmm2 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A47D: addsd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A481: ret  */
L_1509A482:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3BFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3BFEu; /* 0x1509A482: sub eax, 0x3bfe */
    _flag_k = FK_CMP;
    /* cmp eax, 2 */ /* 0x1509A487: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509A54B; /* 0x1509A48A: jae 0x1509a54b */
L_1509A490:
    _xmm[4].u64[0] = MEM64(0x1500B410); /* 0x1509A490: movlpd xmm4, qword ptr [0x1500b410] */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509A498: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x1509A49D: psrlq xmm1, 1 */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509A4A2: subsd xmm3, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509A4A6: mulsd xmm4, xmm3 */
    _xmm[1] = xmm_ld(0x15009C90); /* 0x1509A4AA: movapd xmm1, xmmword ptr [0x15009c90] */
    { xmm_t _s = _xmm[4]; _xmm[7].u32[0] = _s.u32[0]; _xmm[7].u32[1] = _s.u32[1]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[1]; } /* 0x1509A4B2: pshufd xmm7, xmm4, 0x44 */
    _xmm[2] = xmm_ld(0x15009CA0); /* 0x1509A4B7: movapd xmm2, xmmword ptr [0x15009ca0] */
    _xmm[3] = xmm_ld(0x15009CB0); /* 0x1509A4BF: movapd xmm3, xmmword ptr [0x15009cb0] */
    { double _s = _xmm[4].f64[0]; _xmm[4].f64[0] = (double)sqrt(_s); } /* 0x1509A4C7: sqrtsd xmm4, xmm4 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509A4CB: mulpd xmm1, xmm7 */
    { xmm_t _s = _xmm[7]; _xmm[5].u32[0] = _s.u32[0]; _xmm[5].u32[1] = _s.u32[1]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x1509A4CF: pshufd xmm5, xmm7, 0x44 */
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509A4D4: pextrw eax, xmm0, 3 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509A4D9: mulpd xmm7, xmm7 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[2] = _d; } /* 0x1509A4DD: addpd xmm2, xmm1 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x1509A4E1: mulpd xmm3, xmm7 */
    _xmm[6] = xmm_ld(0x1500B440); /* 0x1509A4E5: movapd xmm6, xmmword ptr [0x1500b440] */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509A4ED: mulsd xmm7, xmm5 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[2] = _d; } /* 0x1509A4F1: addpd xmm2, xmm3 */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509A4F5: mulsd xmm2, xmm7 */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509A4F9: mulpd xmm2, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509A4FD: addsd xmm4, xmm4 */
    { xmm_t _s = _xmm[6]; _xmm[5].u32[0] = _s.u32[2]; _xmm[5].u32[1] = _s.u32[3]; _xmm[5].u32[2] = _s.u32[2]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x1509A501: pshufd xmm5, xmm6, 0xee */
    { xmm_t _s = _xmm[4]; _xmm[3].u32[0] = _s.u32[0]; _xmm[3].u32[1] = _s.u32[1]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1509A506: pshufd xmm3, xmm4, 0x44 */
    { double _s = _xmm[5].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509A50B: subsd xmm4, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509A50F: addsd xmm5, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x1509A513: subsd xmm5, xmm3 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509A517: mulpd xmm2, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509A51B: addsd xmm5, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509A51F: xorpd xmm6, xmm6 */
    { xmm_t _s = _xmm[2]; _xmm[0].u32[0] = _s.u32[2]; _xmm[0].u32[1] = _s.u32[3]; _xmm[0].u32[2] = _s.u32[2]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x1509A523: pshufd xmm0, xmm2, 0xee */
    { double _s = _xmm[5].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x1509A528: subsd xmm2, xmm5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509A52C: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A52F: addsd xmm0, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509A533: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ 0x8000u)); _flag_b = (uint32_t)((eax ^ 0x8000u));
    eax = eax ^ 0x8000u; /* 0x1509A538: xor eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[6].u16[3] = (uint16_t)(eax); /* 0x1509A53D: pinsrw xmm6, eax, 3 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A542: addsd xmm0, xmm4 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509A546: xorpd xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A54A: ret  */
L_1509A54B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0003FEFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0003FEFEu; /* 0x1509A54B: add eax, 0x3fefe */
    _flag_k = FK_ADD;
    /* cmp eax, 0x0003FF00u */ /* 0x1509A550: cmp eax, 0x3ff00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0003FF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509A5E5; /* 0x1509A555: jb 0x1509a5e5 */
L_1509A55B:
    ecx = _xmm[0].u32[0]; /* 0x1509A55B: movd ecx, xmm0 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509A55F: psrlq xmm0, 0x20 */
    edx = _xmm[0].u32[0]; /* 0x1509A564: movd edx, xmm0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509A568: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x3FF00000u; /* 0x1509A56E: mov eax, 0x3ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1509A573: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1509A575: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509A577: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509A5BD; /* 0x1509A57A: je 0x1509a5bd */
L_1509A57C:
    _xmm[2].u64[0] = MEM64(esp + 0x4); /* 0x1509A57C: movlpd xmm2, qword ptr [esp + 4] */
    edx = _xmm[2].u32[0]; /* 0x1509A582: movd edx, xmm2 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x1509A586: psrlq xmm2, 0x20 */
    ecx = _xmm[2].u32[0]; /* 0x1509A58B: movd ecx, xmm2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x1509A58F: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x1509A595: sub edx, 1 */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = 0x7FF00000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1509A598: sbb ecx, 0x7ff00000 */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp ecx, 0 */ /* 0x1509A59E: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1509A5E5; /* 0x1509A5A1: jge 0x1509a5e5 */
L_1509A5A3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509A5A3: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509A5A6: xorpd xmm1, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509A5AA: xorpd xmm0, xmm0 */
    edx = 0x7FF0u; /* 0x1509A5AE: mov edx, 0x7ff0 */
    _xmm[1].u16[3] = (uint16_t)(edx); /* 0x1509A5B3: pinsrw xmm1, edx, 3 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509A5B8: mulsd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A5BC: ret  */
L_1509A5BD:
    _xmm[1].u64[0] = MEM64(0x1500B3F0); /* 0x1509A5BD: movlpd xmm1, qword ptr [0x1500b3f0] */
    _xmm[2].u64[0] = MEM64(0x1500B440); /* 0x1509A5C5: movlpd xmm2, qword ptr [0x1500b440] */
    _xmm[0].u64[0] = MEM64(0x1500B448); /* 0x1509A5CD: movlpd xmm0, qword ptr [0x1500b448] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509A5D5: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509A5D8: addsd xmm0, xmm2 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509A5DC: andnpd xmm1, xmm7 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509A5E0: orpd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A5E4: ret  */
L_1509A5E5:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509A5E5: movlpd xmm0, qword ptr [esp + 4] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509A5EB: xorpd xmm6, xmm6 */
    _xmm[7].u64[0] = _xmm[0].u64[0]; /* 0x1509A5EF: movsd xmm7, xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509A5F3: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = (uint32_t)_xmm[0].u16[3]; /* 0x1509A5F6: pextrw edx, xmm0, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF0u);
    edx = edx & 0x7FF0u; /* 0x1509A5FB: and edx, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x10u; /* 0x1509A601: sub edx, 0x10 */
    _flag_k = FK_CMP;
    /* cmp edx, 0x7FE0u */ /* 0x1509A604: cmp edx, 0x7fe0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509A618; /* 0x1509A60A: jb 0x1509a618 */
L_1509A60C:
    { double _s = _xmm[0].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509A60C: addsd xmm6, xmm0 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509A610: orpd xmm0, xmm6 */
    { double _s = _xmm[0].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509A614: mulsd xmm7, xmm0 */
L_1509A618:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A618: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509A620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509A620u);

L_1509A620:
    eax = _xmm[0].u32[0]; /* 0x1509A620: movd eax, xmm0 */
    _xmm[3].u64[0] = MEM32(0x1500C090); _xmm[3].u64[1] = 0; /* 0x1509A624: movss xmm3, dword ptr [0x1500c090] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509A62C: xorps xmm7, xmm7 */
    _xmm[2].u64[0] = MEM32(0x1500C094); _xmm[2].u64[1] = 0; /* 0x1509A62F: movss xmm2, dword ptr [0x1500c094] */
    ecx = 0x3F5DB3D7u; /* 0x1509A637: mov ecx, 0x3f5db3d7 */
    edx = 0x7FFFFFFFu; /* 0x1509A63C: mov edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x1509A641: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509A643: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3D800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3D800000u; /* 0x1509A645: sub edx, 0x3d800000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x1509A64B: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0 */ /* 0x1509A64D: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1509A6F1; /* 0x1509A650: jl 0x1509a6f1 */
L_1509A656:
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x1509A656: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A65A: mulss xmm0, xmm0 */
    ecx = 1; /* 0x1509A65E: mov ecx, 1 */
    _xmm[7].u16[1] = (uint16_t)(ecx); /* 0x1509A663: pinsrw xmm7, ecx, 1 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x1509A668: subss xmm3, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)sqrtf(_s); } /* 0x1509A66C: sqrtss xmm3, xmm3 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x1509A670: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x1509A670: shr edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1FEu);
    edx = edx & 0x1FEu; /* 0x1509A673: and edx, 0x1fe */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[5].u64[0] = MEM32(edx * 2 + 0x1500BC50); _xmm[5].u64[1] = 0; /* 0x1509A679: movss xmm5, dword ptr [edx*2 + 0x1500bc50] */
    _xmm[4] = xmm_ld(edx * 4 + 0x1500B450); /* 0x1509A682: movups xmm4, xmmword ptr [edx*4 + 0x1500b450] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1509A68A: andps xmm2, xmm1 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1509A68D: orps xmm2, xmm7 */
    _xmm[6].u32[0] = _xmm[1].u32[0]; /* 0x1509A690: movss xmm6, xmm1 */
    _xmm[0].u32[0] = _xmm[1].u32[0]; /* 0x1509A694: movss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x1509A698: addss xmm1, xmm2 */
    { float _s = _xmm[5].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x1509A69C: mulss xmm6, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509A6A0: subss xmm0, xmm2 */
    _xmm[7].u64[0] = MEM32(0x1500C098); _xmm[7].u64[1] = 0; /* 0x1509A6A4: movss xmm7, dword ptr [0x1500c098] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A6AC: mulss xmm0, xmm1 */
    _xmm[5].u32[0] = _xmm[6].u32[0]; /* 0x1509A6B0: movss xmm5, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509A6B4: mulss xmm2, xmm3 */
    { float _s = _xmm[2].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x1509A6B8: addss xmm5, xmm2 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x1509A6BC: divss xmm0, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] - _s); } /* 0x1509A6C0: subss xmm6, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1509A6C4: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x1509A6C9: movd xmm3, eax */
    { float _s = _xmm[6].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509A6CD: mulss xmm7, xmm6 */
    { float _s = _xmm[6].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x1509A6D1: mulss xmm6, xmm6 */
    { float _s = _xmm[6].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509A6D5: mulss xmm7, xmm6 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x1509A6D9: xorps xmm4, xmm3 */
    { float _s = _xmm[4].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] + _s); } /* 0x1509A6DC: addss xmm7, xmm4 */
    { xmm_t _s = _xmm[4]; _xmm[4].u32[0] = _s.u32[1]; _xmm[4].u32[1] = _s.u32[1]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1509A6E0: pshufd xmm4, xmm4, 0x55 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x1509A6E5: xorps xmm4, xmm3 */
    { float _s = _xmm[7].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A6E8: addss xmm0, xmm7 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A6EC: addss xmm0, xmm4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A6F0: ret  */
L_1509A6F1:
    ecx = 0x01FEFFFFu; /* 0x1509A6F1: mov ecx, 0x1feffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509A6F6: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x1509A6F8: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0 */ /* 0x1509A6FA: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1509A7F8; /* 0x1509A6FD: jl 0x1509a7f8 */
L_1509A703:
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x1509A703: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A707: mulss xmm0, xmm0 */
    ecx = 0x00010000u; /* 0x1509A70B: mov ecx, 0x10000 */
    _xmm[5].u64[0] = (uint32_t)(ecx); _xmm[5].u64[1] = 0; /* 0x1509A710: movd xmm5, ecx */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x1509A714: subss xmm3, xmm0 */
    _xmm[7].u32[0] = _xmm[1].u32[0]; /* 0x1509A718: movss xmm7, xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)sqrtf(_s); } /* 0x1509A71C: sqrtss xmm3, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[1].u8[_k] >> 7) << _k; eax = _m; } /* 0x1509A720: pmovmskb eax, xmm1 */
    { xmm_t _s = xmm_ld(0x1500C050); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509A724: andps xmm1, xmmword ptr [0x1500c050] */
    { xmm_t _s = xmm_ld(0x1500C060); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509A72B: andps xmm7, xmmword ptr [0x1500c060] */
    _xmm[0].u32[0] = _xmm[1].u32[0]; /* 0x1509A732: movss xmm0, xmm1 */
    _xmm[4].u64[0] = MEM32(0x1500C090); _xmm[4].u64[1] = 0; /* 0x1509A736: movss xmm4, dword ptr [0x1500c090] */
    _xmm[6].u32[0] = _xmm[7].u32[0]; /* 0x1509A73E: movss xmm6, xmm7 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1509A742: subss xmm1, xmm7 */
    { float _s = _xmm[7].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509A746: mulss xmm7, xmm7 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A74A: addss xmm0, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A74E: subss xmm4, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A752: mulss xmm0, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1509A756: andps xmm2, xmm3 */
    edx = (uint32_t)_xmm[3].u16[1]; /* 0x1509A759: pextrw edx, xmm3, 1 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1509A75E: orps xmm2, xmm5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3D80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3D80u; /* 0x1509A761: sub edx, 0x3d80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFEu);
    edx = edx & 0xFFFEu; /* 0x1509A767: and edx, 0xfffe */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _s = sse_f32(MEM32(edx * 2 + 0x1500BC50)); _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x1509A76D: mulss xmm3, dword ptr [edx*2 + 0x1500bc50] */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x1509A776: mulss xmm6, xmm2 */
    _xmm[7] = xmm_ld(0x1500C080); /* 0x1509A77A: movaps xmm7, xmmword ptr [0x1500c080] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509A781: mulss xmm1, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509A785: mulss xmm2, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] - _s); } /* 0x1509A789: subss xmm6, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x1509A78D: addss xmm6, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A791: subss xmm4, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x1509A795: addss xmm3, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A799: subss xmm4, xmm0 */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x1509A79D: addss xmm3, xmm6 */
    _xmm[5].u64[0] = MEM32(0x1500C098); _xmm[5].u64[1] = 0; /* 0x1509A7A1: movss xmm5, dword ptr [0x1500c098] */
    { float _s = _xmm[3].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] / _s); } /* 0x1509A7A9: divss xmm4, xmm3 */
    _xmm[2] = xmm_ld(edx * 4 + 0x1500B450); /* 0x1509A7AD: movups xmm2, xmmword ptr [edx*4 + 0x1500b450] */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x1509A7B5: mulss xmm5, xmm6 */
    { float _s = _xmm[6].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x1509A7B9: mulss xmm6, xmm6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1509A7BD: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (12u) _cf = (((eax) >> 20) & 1u); /* 0x1509A7C0: shl eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 12u; /* 0x1509A7C0: shl eax, 0xc */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x1509A7C3: mulss xmm5, xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[7] = _d; } /* 0x1509A7C7: subps xmm7, xmm2 */
    { float _s = _xmm[7].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x1509A7CA: addss xmm5, xmm7 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509A7CE: pxor xmm0, xmm0 */
    _xmm[0].u16[1] = (uint16_t)(eax); /* 0x1509A7D2: pinsrw xmm0, eax, 1 */
    _xmm[1].u32[0] = _xmm[4].u32[0]; /* 0x1509A7D7: movss xmm1, xmm4 */
    { xmm_t _s = _xmm[7]; _xmm[3].u32[0] = _s.u32[1]; _xmm[3].u32[1] = _s.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1509A7DB: pshufd xmm3, xmm7, 0x55 */
    { float _s = _xmm[3].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A7E0: subss xmm4, xmm3 */
    { float _s = _xmm[4].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x1509A7E4: addss xmm3, xmm4 */
    { float _s = _xmm[3].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1509A7E8: subss xmm1, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x1509A7EC: subss xmm5, xmm1 */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x1509A7F0: subss xmm5, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509A7F4: orps xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A7F7: ret  */
L_1509A7F8:
    /* cmp edx, 0 */ /* 0x1509A7F8: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1509A85D; /* 0x1509A7FB: jge 0x1509a85d */
L_1509A7FD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x06000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x06000000u; /* 0x1509A7FD: add edx, 0x6000000 */
    _flag_k = FK_ADD;
    /* cmp edx, 0 */ /* 0x1509A803: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1509A9BE; /* 0x1509A806: jl 0x1509a9be */
L_1509A80C:
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x1509A80C: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A810: mulss xmm0, xmm0 */
    _xmm[2].u32[0] = _xmm[1].u32[0]; /* 0x1509A814: movss xmm2, xmm1 */
    { float _s = sse_f32(MEM32(0x1500C098)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509A818: mulss xmm1, dword ptr [0x1500c098] */
    _xmm[4].u32[0] = _xmm[2].u32[0]; /* 0x1509A820: movss xmm4, xmm2 */
    { float _s = sse_f32(MEM32(0x1500C09C)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509A824: mulss xmm2, dword ptr [0x1500c09c] */
    _xmm[5].u32[0] = _xmm[4].u32[0]; /* 0x1509A82C: movss xmm5, xmm4 */
    { float _s = sse_f32(MEM32(0x1500C0A0)); _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x1509A830: mulss xmm4, dword ptr [0x1500c0a0] */
    _xmm[3].u32[0] = _xmm[0].u32[0]; /* 0x1509A838: movss xmm3, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A83C: mulss xmm0, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509A840: mulss xmm1, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x1509A844: mulss xmm3, xmm0 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A848: mulss xmm0, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x1509A84C: mulss xmm4, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A850: addss xmm0, xmm1 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A854: addss xmm0, xmm4 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A858: addss xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A85C: ret  */
L_1509A85D:
    /* cmp edx, 0x02000000u */ /* 0x1509A85D: cmp edx, 0x2000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x02000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1509A967; /* 0x1509A863: jge 0x1509a967 */
L_1509A869:
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x1509A869: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A86D: mulss xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x1509A871: subss xmm3, xmm0 */
    _xmm[7].u32[0] = _xmm[1].u32[0]; /* 0x1509A875: movss xmm7, xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)sqrtf(_s); } /* 0x1509A879: sqrtss xmm3, xmm3 */
    eax = (uint32_t)_xmm[7].u16[1]; /* 0x1509A87D: pextrw eax, xmm7, 1 */
    { xmm_t _s = xmm_ld(0x1500C070); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509A882: andps xmm7, xmmword ptr [0x1500c070] */
    { xmm_t _s = _xmm[3]; _xmm[5].u32[0] = _s.u32[0]; _xmm[5].u32[1] = _s.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1509A889: pshufd xmm5, xmm3, 0 */
    { xmm_t _s = xmm_ld(0x1500C070); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509A88E: andps xmm3, xmmword ptr [0x1500c070] */
    _xmm[0].u32[0] = _xmm[7].u32[0]; /* 0x1509A895: movss xmm0, xmm7 */
    _xmm[4].u64[0] = MEM32(0x1500C090); _xmm[4].u64[1] = 0; /* 0x1509A899: movss xmm4, dword ptr [0x1500c090] */
    _xmm[6].u32[0] = _xmm[7].u32[0]; /* 0x1509A8A1: movss xmm6, xmm7 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1509A8A5: subss xmm1, xmm7 */
    { float _s = _xmm[7].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509A8A9: mulss xmm7, xmm7 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A8AD: addss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A8B1: mulss xmm0, xmm1 */
    { float _s = _xmm[7].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A8B5: subss xmm4, xmm7 */
    _xmm[6].u32[0] = _xmm[3].u32[0]; /* 0x1509A8B9: movss xmm6, xmm3 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x1509A8BD: mulss xmm3, xmm3 */
    _xmm[2].u32[0] = _xmm[5].u32[0]; /* 0x1509A8C1: movss xmm2, xmm5 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509A8C5: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A8C9: subss xmm4, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] - _s); } /* 0x1509A8CD: subss xmm6, xmm5 */
    { float _s = _xmm[5].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x1509A8D1: addss xmm5, xmm5 */
    { float _s = _xmm[3].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A8D5: subss xmm4, xmm3 */
    { float _s = sse_f32(MEM32(0x1500C098)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509A8D9: mulss xmm2, dword ptr [0x1500c098] */
    { xmm_t _s = _xmm[5]; _xmm[3].u32[0] = _s.u32[1]; _xmm[3].u32[1] = _s.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1509A8E1: pshufd xmm3, xmm5, 0x55 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509A8E6: subss xmm4, xmm1 */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x1509A8EA: addss xmm5, xmm6 */
    { xmm_t _s = _xmm[3]; _xmm[7].u32[0] = _s.u32[1]; _xmm[7].u32[1] = _s.u32[1]; _xmm[7].u32[2] = _s.u32[1]; _xmm[7].u32[3] = _s.u32[1]; } /* 0x1509A8EE: pshufd xmm7, xmm3, 0x55 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x1509A8F3: addss xmm3, xmm3 */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x1509A8F7: mulss xmm5, xmm6 */
    { float _s = _xmm[5].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x1509A8FB: addss xmm4, xmm5 */
    { xmm_t _s = _xmm[7]; _xmm[6].u32[0] = _s.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1509A8FF: pshufd xmm6, xmm7, 0 */
    { xmm_t _s = _xmm[7]; _xmm[1].u32[0] = _s.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1509A904: pshufd xmm1, xmm7, 0 */
    { float _s = _xmm[3].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] / _s); } /* 0x1509A909: divss xmm4, xmm3 */
    { float _s = sse_f32(MEM32(0x1500C09C)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509A90D: mulss xmm7, dword ptr [0x1500c09c] */
    { float _s = _xmm[6].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x1509A915: mulss xmm6, xmm6 */
    { float _s = _xmm[6].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509A919: mulss xmm2, xmm6 */
    { float _s = _xmm[6].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x1509A91D: mulss xmm6, xmm6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509A921: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0] = xmm_ld(0x1500C080); /* 0x1509A926: movaps xmm0, xmmword ptr [0x1500c080] */
    { float _s = _xmm[6].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509A92D: mulss xmm7, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x1509A931: addss xmm2, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509A935: xorps xmm3, xmm3 */
    { xmm_t _s = _xmm[0]; _xmm[6].u32[0] = _s.u32[1]; _xmm[6].u32[1] = _s.u32[1]; _xmm[6].u32[2] = _s.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x1509A938: pshufd xmm6, xmm0, 0x55 */
    _xmm[5].u32[0] = _xmm[1].u32[0]; /* 0x1509A93D: movss xmm5, xmm1 */
    _xmm[3].u16[1] = (uint16_t)(eax); /* 0x1509A941: pinsrw xmm3, eax, 1 */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1509A946: subss xmm1, xmm6 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509A94A: subss xmm0, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x1509A94E: addss xmm6, xmm1 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509A952: subss xmm0, xmm4 */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x1509A956: subss xmm5, xmm6 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509A95A: subss xmm0, xmm5 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509A95E: subss xmm0, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509A962: orpd xmm0, xmm3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A966: ret  */
L_1509A967:
    edx = _xmm[0].u32[0]; /* 0x1509A967: movd edx, xmm0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509A96B: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x3F800000u; /* 0x1509A971: mov eax, 0x3f800000 */
    /* cmp eax, edx */ /* 0x1509A976: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509A993; /* 0x1509A978: je 0x1509a993 */
L_1509A97A:
    /* cmp edx, 0x7F800000u */ /* 0x1509A97A: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509A9B6; /* 0x1509A980: ja 0x1509a9b6 */
L_1509A982:
    edx = 0x7F800000u; /* 0x1509A982: mov edx, 0x7f800000 */
    _xmm[1].u64[0] = (uint32_t)(edx); _xmm[1].u64[1] = 0; /* 0x1509A987: movd xmm1, edx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509A98B: xorps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509A98E: mulss xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A992: ret  */
L_1509A993:
    _xmm[1].u64[0] = MEM32(0x1500C0A4); _xmm[1].u64[1] = 0; /* 0x1509A993: movss xmm1, dword ptr [0x1500c0a4] */
    _xmm[3].u64[0] = MEM32(0x1500C080); _xmm[3].u64[1] = 0; /* 0x1509A99B: movss xmm3, dword ptr [0x1500c080] */
    _xmm[2].u64[0] = MEM32(0x1500C084); _xmm[2].u64[1] = 0; /* 0x1509A9A3: movss xmm2, dword ptr [0x1500c084] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509A9AB: andps xmm0, xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x1509A9AE: addss xmm2, xmm3 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509A9B2: orps xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A9B5: ret  */
L_1509A9B6:
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509A9B6: xorps xmm7, xmm7 */
    { float _s = _xmm[7].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509A9B9: addss xmm0, xmm7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A9BD: ret  */
L_1509A9BE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x57800000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x57800000u; /* 0x1509A9BE: add edx, 0x57800000 */
    _flag_k = FK_ADD;
    _xmm[1].u64[0] = (uint32_t)(edx); _xmm[1].u64[1] = 0; /* 0x1509A9C4: movd xmm1, edx */
    /* cmp edx, 0x20800000u */ /* 0x1509A9C8: cmp edx, 0x20800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509A9D8; /* 0x1509A9CE: jae 0x1509a9d8 */
L_1509A9D0:
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x1509A9D0: movss xmm2, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509A9D4: mulss xmm2, xmm0 */
L_1509A9D8:
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x1509A9D8: addss xmm1, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509A9DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509A9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509A9F0u);

L_1509A9F0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509A9F0: sub esp, 0xc */
    _flag_k = FK_CMP;
    _xmm[3].u64[0] = MEM64(0x1500CAE8); /* 0x1509A9F3: movlpd xmm3, qword ptr [0x1500cae8] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1509A9FB: xorpd xmm2, xmm2 */
    _xmm[6].u64[0] = MEM64(0x1500CAF0); /* 0x1509A9FF: movlpd xmm6, qword ptr [0x1500caf0] */
    _xmm[7].u64[0] = MEM64(0x1500CAD8); /* 0x1509AA07: movlpd xmm7, qword ptr [0x1500cad8] */
    edx = (uint32_t)_xmm[0].u16[3]; /* 0x1509AA0F: pextrw edx, xmm0, 3 */
    eax = edx; /* 0x1509AA14: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFu);
    edx = edx & 0x7FFFu; /* 0x1509AA16: and edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(esp + 0x4) = _xmm[0].u64[0]; /* 0x1509AA1C: movlpd qword ptr [esp + 4], xmm0 */
    ecx = 0x4040u; /* 0x1509AA22: mov ecx, 0x4040 */
    _xmm[2].u16[3] = (uint16_t)(ecx); /* 0x1509AA27: pinsrw xmm2, ecx, 3 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509AA2C: andpd xmm0, xmm7 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509AA30: xorpd xmm7, xmm7 */
    _xmm[1].u64[0] = _xmm[0].u64[0]; /* 0x1509AA34: movsd xmm1, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509AA38: andpd xmm3, xmm0 */
    _xmm[7].u16[3] = (uint16_t)(ecx); /* 0x1509AA3C: pinsrw xmm7, ecx, 3 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x1509AA41: orpd xmm3, xmm6 */
    _xmm[5].u64[0] = MEM64(0x1500CAE0); /* 0x1509AA45: movlpd xmm5, qword ptr [0x1500cae0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3FA0u; /* 0x1509AA4D: sub edx, 0x3fa0 */
    _flag_k = FK_CMP;
    /* cmp edx, 0x45Fu */ /* 0x1509AA53: cmp edx, 0x45f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x45Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509AB1C; /* 0x1509AA59: ja 0x1509ab1c */
L_1509AA5F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509AA5F: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s0 = _xmm[0].f64[0]; _xmm[2].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[2].f64[0], _s0, 6); } /* 0x1509AA62: cmpnlesd xmm2, xmm0 */
    { double _s = _xmm[7].f64[0]; _xmm[3].f64[0] = (double)sse_mind(_xmm[3].f64[0], _s); } /* 0x1509AA67: minsd xmm3, xmm7 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x1509AA6B: andpd xmm5, xmm2 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509AA6F: andpd xmm0, xmm2 */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509AA73: mulsd xmm1, xmm3 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509AA77: subsd xmm0, xmm3 */
    { double _s = _xmm[5].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509AA7B: addsd xmm1, xmm5 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x1509AA7F: divsd xmm0, xmm1 */
    edx = (uint32_t)_xmm[3].u16[3]; /* 0x1509AA83: pextrw edx, xmm3, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3F9Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3F9Fu; /* 0x1509AA88: sub edx, 0x3f9f */
    _flag_k = FK_CMP;
    _xmm[2].u64[0] = MEM64(0x1500CAF8); /* 0x1509AA8E: movlpd xmm2, qword ptr [0x1500caf8] */
    _xmm[4].u64[0] = MEM64(0x1500CB08); /* 0x1509AA96: movlpd xmm4, qword ptr [0x1500cb08] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509AA9E: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[7].u16[3] = (uint16_t)(eax); /* 0x1509AAA3: pinsrw xmm7, eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1509AAA8: add edx, edx */
    _flag_k = FK_ADD;
    _xmm[6].u64[0] = MEM64(edx * 8 + 0x1500C0A8); /* 0x1509AAAA: movlpd xmm6, qword ptr [edx*8 + 0x1500c0a8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1509AAB3: add edx, 1 */
    _flag_k = FK_ADD;
    _xmm[5].u64[0] = MEM64(edx * 8 + 0x1500C0A8); /* 0x1509AAB6: movlpd xmm5, qword ptr [edx*8 + 0x1500c0a8] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x1509AABF: xorpd xmm5, xmm7 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509AAC3: xorpd xmm6, xmm7 */
    _xmm[1].u64[0] = _xmm[0].u64[0]; /* 0x1509AAC7: movsd xmm1, xmm0 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509AACB: xorpd xmm1, xmm7 */
    _xmm[3].u64[0] = _xmm[1].u64[0]; /* 0x1509AACF: movsd xmm3, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509AAD3: mulsd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509AAD7: mulsd xmm2, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509AADB: addsd xmm4, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509AADF: addsd xmm1, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] - _s); } /* 0x1509AAE3: subsd xmm6, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509AAE7: addsd xmm6, xmm3 */
    { double _s = sse_f64(MEM64(0x1500CB00)); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509AAEB: addsd xmm2, qword ptr [0x1500cb00] */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509AAF3: mulsd xmm4, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509AAF7: mulsd xmm3, xmm0 */
    { double _s = _xmm[5].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509AAFB: addsd xmm6, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509AAFF: mulsd xmm2, xmm3 */
    { double _s = sse_f64(MEM64(0x1500CB10)); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509AB03: addsd xmm4, qword ptr [0x1500cb10] */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509AB0B: mulsd xmm2, xmm4 */
    { double _s = _xmm[6].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509AB0F: addsd xmm2, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509AB13: addsd xmm1, xmm2 */
    _xmm[0] = _xmm[1]; /* 0x1509AB17: movapd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509AB1B: ret  */
L_1509AB1C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3B0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x3B0u; /* 0x1509AB1C: add edx, 0x3b0 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x80Fu */ /* 0x1509AB22: cmp edx, 0x80f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509AB80; /* 0x1509AB28: ja 0x1509ab80 */
L_1509AB2A:
    _xmm[4].u64[0] = MEM64(0x1500CAF8); /* 0x1509AB2A: movlpd xmm4, qword ptr [0x1500caf8] */
    _xmm[7].u64[0] = MEM64(0x1500CB08); /* 0x1509AB32: movlpd xmm7, qword ptr [0x1500cb08] */
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509AB3A: movlpd xmm0, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509AB40: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509AB43: mulsd xmm1, xmm1 */
    _xmm[2].u64[0] = MEM64(0x1500CB00); /* 0x1509AB47: movlpd xmm2, qword ptr [0x1500cb00] */
    _xmm[5].u64[0] = MEM64(0x1500CB10); /* 0x1509AB4F: movlpd xmm5, qword ptr [0x1500cb10] */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509AB57: mulsd xmm4, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509AB5B: addsd xmm7, xmm1 */
    _xmm[6].u64[0] = _xmm[1].u64[0]; /* 0x1509AB5F: movsd xmm6, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509AB63: mulsd xmm1, xmm0 */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509AB67: addsd xmm2, xmm4 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509AB6B: mulsd xmm7, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509AB6F: mulsd xmm2, xmm1 */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509AB73: addsd xmm7, xmm5 */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509AB77: mulsd xmm2, xmm7 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509AB7B: addsd xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509AB7F: ret  */
L_1509AB80:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3BF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x3BF0u; /* 0x1509AB80: add edx, 0x3bf0 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x43F0u */ /* 0x1509AB86: cmp edx, 0x43f0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x43F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509ABA5; /* 0x1509AB8C: jae 0x1509aba5 */
L_1509AB8E:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509AB8E: movlpd xmm0, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509AB94: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp edx, 0x10u */ /* 0x1509AB97: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _xmm[1] = _xmm[0]; /* 0x1509AB9A: movapd xmm1, xmm0 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509ABA4; /* 0x1509AB9E: jae 0x1509aba4 */
L_1509ABA0:
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509ABA0: mulsd xmm1, xmm1 */
L_1509ABA4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509ABA4: ret  */
L_1509ABA5:
    _xmm[4].u64[0] = MEM64(esp + 0x4); /* 0x1509ABA5: movlpd xmm4, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509ABAB: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x1500CAD8); /* 0x1509ABAE: movlpd xmm0, qword ptr [0x1500cad8] */
    _xmm[2].u64[0] = MEM64(0x1500CAC8); /* 0x1509ABB6: movlpd xmm2, qword ptr [0x1500cac8] */
    _xmm[3].u64[0] = MEM64(0x1500CAD0); /* 0x1509ABBE: movlpd xmm3, qword ptr [0x1500cad0] */
    eax = _xmm[1].u32[0]; /* 0x1509ABC6: movd eax, xmm1 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x1509ABCA: psrlq xmm1, 0x20 */
    edx = _xmm[1].u32[0]; /* 0x1509ABCF: movd edx, xmm1 */
    /* cmp edx, 0x7FF00000u */ /* 0x1509ABD3: cmp edx, 0x7ff00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509ABEC; /* 0x1509ABD9: jae 0x1509abec */
L_1509ABDB:
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = ~_xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509ABDB: andnpd xmm0, xmm4 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1509ABDF: orpd xmm2, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509ABE3: orpd xmm0, xmm3 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509ABE7: addsd xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509ABEB: ret  */
L_1509ABEC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x7FF00000u; /* 0x1509ABEC: sub edx, 0x7ff00000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1509ABF2: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509ABF4: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509ABDB; /* 0x1509ABF7: je 0x1509abdb */
L_1509ABF9:
    _xmm[0].u64[0] = _xmm[4].u64[0]; /* 0x1509ABF9: movsd xmm0, xmm4 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509ABFD: addsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509AC01: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509AC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509AC10u);

L_1509AC10:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1509AC10: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509AC13: pextrw eax, xmm0, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509AC18: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(esp + 0x4) = _xmm[0].u64[0]; /* 0x1509AC1D: movlpd qword ptr [esp + 4], xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3870u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3870u; /* 0x1509AC23: sub eax, 0x3870 */
    _flag_k = FK_CMP;
    /* cmp eax, 0xF00u */ /* 0x1509AC28: cmp eax, 0xf00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM64(esp + 0xC) = _xmm[1].u64[0]; /* 0x1509AC2D: movlpd qword ptr [esp + 0xc], xmm1 */
    if (CMP_A(_flag_a, _flag_b)) goto L_1509AF0B; /* 0x1509AC33: ja 0x1509af0b */
L_1509AC39:
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509AC39: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509AC3E: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3870u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3870u; /* 0x1509AC43: sub eax, 0x3870 */
    _flag_k = FK_CMP;
    /* cmp eax, 0xF00u */ /* 0x1509AC48: cmp eax, 0xf00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509AF0B; /* 0x1509AC4D: ja 0x1509af0b */
L_1509AC53:
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509AC53: unpcklpd xmm0, xmm1 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x1509AC57: xorpd xmm5, xmm5 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509AC5B: xorpd xmm3, xmm3 */
    eax = 0x800u; /* 0x1509AC5F: mov eax, 0x800 */
    _xmm[5].u16[3] = (uint16_t)(eax); /* 0x1509AC64: pinsrw xmm5, eax, 3 */
    { xmm_t _a = _xmm[5], _b = _xmm[1]; for (unsigned _i = 0; _i < 8; ++_i) _xmm[5].u16[_i] = (uint16_t)(_a.u16[_i] + _b.u16[_i]); } /* 0x1509AC69: paddw xmm5, xmm1 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[5].u64[_k] >> _c); } /* 0x1509AC6D: psrlq xmm5, 0x1d */
    { float _s = _xmm[5].f32[0]; _xmm[3].f32[0] = (float)(1.0f / _s); } /* 0x1509AC72: rcpss xmm3, xmm5 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x1509AC76: xorpd xmm4, xmm4 */
    ecx = 0x3800u; /* 0x1509AC7A: mov ecx, 0x3800 */
    _xmm[4].u16[3] = (uint16_t)(ecx); /* 0x1509AC7F: pinsrw xmm4, ecx, 3 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x1509AC84: psllq xmm3, 0x1d */
    { xmm_t _a = _xmm[3], _b = _xmm[4]; for (unsigned _i = 0; _i < 8; ++_i) _xmm[3].u16[_i] = (uint16_t)(_a.u16[_i] + _b.u16[_i]); } /* 0x1509AC89: paddw xmm3, xmm4 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509AC8D: mulsd xmm3, xmm0 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1509AC91: xorpd xmm2, xmm2 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509AC95: xorpd xmm6, xmm6 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509AC99: xorpd xmm7, xmm7 */
    eax = 0x8000u; /* 0x1509AC9D: mov eax, 0x8000 */
    _xmm[6].u16[2] = (uint16_t)(eax); /* 0x1509ACA2: pinsrw xmm6, eax, 2 */
    ecx = 0x7FFFu; /* 0x1509ACA7: mov ecx, 0x7fff */
    _xmm[7].u16[3] = (uint16_t)(ecx); /* 0x1509ACAC: pinsrw xmm7, ecx, 3 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] += _s.u32[_k]; } /* 0x1509ACB1: paddd xmm3, xmm6 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509ACB5: andpd xmm3, xmm7 */
    _xmm[5].u64[0] = _xmm[3].u64[0]; /* 0x1509ACB9: movsd xmm5, xmm3 */
    eax = (uint32_t)_xmm[3].u16[3]; /* 0x1509ACBD: pextrw eax, xmm3, 3 */
    ecx = 0x4040u; /* 0x1509ACC2: mov ecx, 0x4040 */
    _xmm[2].u16[3] = (uint16_t)(ecx); /* 0x1509ACC7: pinsrw xmm2, ecx, 3 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)sse_mind(_xmm[3].f64[0], _s); } /* 0x1509ACCC: minsd xmm3, xmm2 */
    edx = ((uint32_t)((_xmm[0].u64[0] >> 63) << 0) | (uint32_t)((_xmm[0].u64[1] >> 63) << 1)); /* 0x1509ACD0: movmskpd edx, xmm0 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509ACD4: psllq xmm0, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509ACD9: psrlq xmm0, 1 */
    { double _s0 = _xmm[2].f64[0]; _xmm[5].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[5].f64[0], _s0, 2); } /* 0x1509ACDE: cmplesd xmm5, xmm2 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509ACE3: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x1509ACE8: psrlq xmm1, 1 */
    _xmm[6].u64[0] = _xmm[1].u64[0]; /* 0x1509ACED: movsd xmm6, xmm1 */
    _xmm[7].u64[0] = _xmm[1].u64[0]; /* 0x1509ACF1: movsd xmm7, xmm1 */
    _xmm[2].u64[0] = _xmm[0].u64[0]; /* 0x1509ACF5: movsd xmm2, xmm0 */
    ecx = 0; /* 0x1509ACF9: mov ecx, 0 */
    _xmm[6].u16[0] = (uint16_t)(ecx); /* 0x1509ACFE: pinsrw xmm6, ecx, 0 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x1509AD03: subsd xmm7, xmm6 */
    _xmm[4].u64[0] = _xmm[0].u64[0]; /* 0x1509AD07: movsd xmm4, xmm0 */
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509AD0B: mulsd xmm6, xmm3 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509AD0F: mulsd xmm4, xmm3 */
    { double _s = _xmm[3].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509AD13: mulsd xmm7, xmm3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509AD17: andpd xmm0, xmm5 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509AD1B: subsd xmm0, xmm6 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509AD1F: andpd xmm1, xmm5 */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509AD23: addsd xmm4, xmm1 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509AD27: subsd xmm0, xmm7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509AD2B: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3F9Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3F9Eu; /* 0x1509AD30: sub eax, 0x3f9e */
    _flag_k = FK_CMP;
    /* cmp eax, 0x461u */ /* 0x1509AD35: cmp eax, 0x461 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x461u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509ADEE; /* 0x1509AD3A: ja 0x1509adee */
L_1509AD40:
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x1509AD40: divsd xmm0, xmm4 */
    ecx = (uint32_t)_xmm[3].u16[3]; /* 0x1509AD44: pextrw ecx, xmm3, 3 */
    _xmm[2].u64[0] = MEM64(0x1500D6A0); /* 0x1509AD49: movlpd xmm2, qword ptr [0x1500d6a0] */
    _xmm[3].u64[0] = MEM64(0x1500D6B0); /* 0x1509AD51: movlpd xmm3, qword ptr [0x1500d6b0] */
    eax = (uint32_t)_xmm[5].u16[0]; /* 0x1509AD59: pextrw eax, xmm5, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1509AD5E: add edx, edx */
    _flag_k = FK_ADD;
    _xmm[6] = xmm_ld(edx * 8 + 0x1500D5A0); /* 0x1509AD60: movapd xmm6, xmmword ptr [edx*8 + 0x1500d5a0] */
    _xmm[1] = xmm_ld(edx * 8 + 0x1500D5E0); /* 0x1509AD69: movapd xmm1, xmmword ptr [edx*8 + 0x1500d5e0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3F9Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x3F9Eu; /* 0x1509AD72: sub ecx, 0x3f9e */
    _flag_k = FK_CMP;
    eax = ~eax; /* 0x1509AD78: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1509AD7A: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1509AD7D: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1509AD7F: add ecx, ecx */
    _flag_k = FK_ADD;
    _xmm[5] = xmm_ld(ecx * 8 + 0x1500CB20); /* 0x1509AD81: movapd xmm5, xmmword ptr [ecx*8 + 0x1500cb20] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x1509AD8A: xorpd xmm5, xmm1 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[5] = _d; } /* 0x1509AD8E: addpd xmm5, xmm6 */
    _xmm[6].u64[0] = _xmm[5].u64[0]; /* 0x1509AD92: movsd xmm6, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u64[0] = _d.u64[1]; _xmm[5].u64[1] = _s.u64[1]; } /* 0x1509AD96: unpckhpd xmm5, xmm5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509AD9A: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509AD9D: xorpd xmm1, xmm0 */
    _xmm[4].u64[0] = _xmm[1].u64[0]; /* 0x1509ADA1: movsd xmm4, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509ADA5: mulsd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509ADA9: mulsd xmm2, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509ADAD: addsd xmm3, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509ADB1: addsd xmm1, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] - _s); } /* 0x1509ADB5: subsd xmm6, xmm1 */
    { double _s = _xmm[4].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509ADB9: addsd xmm6, xmm4 */
    { double _s = sse_f64(MEM64(0x1500D6A8)); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509ADBD: addsd xmm2, qword ptr [0x1500d6a8] */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509ADC5: mulsd xmm3, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509ADC9: mulsd xmm4, xmm0 */
    { double _s = _xmm[5].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509ADCD: addsd xmm6, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509ADD1: mulsd xmm2, xmm4 */
    { double _s = sse_f64(MEM64(0x1500D6B8)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509ADD5: addsd xmm3, qword ptr [0x1500d6b8] */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509ADDD: mulsd xmm2, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509ADE1: addsd xmm2, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509ADE5: addsd xmm1, xmm2 */
    _xmm[0] = _xmm[1]; /* 0x1509ADE9: movapd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509ADED: ret  */
L_1509ADEE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3AEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3AEu; /* 0x1509ADEE: add eax, 0x3ae */
    _flag_k = FK_ADD;
    /* cmp eax, 0x3AEu */ /* 0x1509ADF3: cmp eax, 0x3ae */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3AEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509AEA1; /* 0x1509ADF8: ja 0x1509aea1 */
L_1509ADFE:
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x1509ADFE: xorpd xmm4, xmm4 */
    ecx = 0x3FF0u; /* 0x1509AE02: mov ecx, 0x3ff0 */
    _xmm[4].u16[3] = (uint16_t)(ecx); /* 0x1509AE07: pinsrw xmm4, ecx, 3 */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] / _s); } /* 0x1509AE0C: divsd xmm4, xmm1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509AE10: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1509AE13: add edx, edx */
    _flag_k = FK_ADD;
    _xmm[6] = xmm_ld(edx * 8 + 0x1500D5E0); /* 0x1509AE15: movapd xmm6, xmmword ptr [edx*8 + 0x1500d5e0] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u64[0] = _d.u64[0]; _xmm[3].u64[1] = _s.u64[0]; } /* 0x1509AE1E: unpcklpd xmm3, xmm3 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509AE22: xorpd xmm0, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1509AE26: xorpd xmm2, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509AE2A: xorpd xmm3, xmm6 */
    _xmm[7] = xmm_ld(edx * 8 + 0x1500D620); /* 0x1509AE2E: movapd xmm7, xmmword ptr [edx*8 + 0x1500d620] */
    _xmm[1].u64[0] = MEM64(0x1500D6A0); /* 0x1509AE37: movlpd xmm1, qword ptr [0x1500d6a0] */
    _xmm[5].u64[0] = MEM64(0x1500D6B0); /* 0x1509AE3F: movlpd xmm5, qword ptr [0x1500d6b0] */
    { xmm_t _s = xmm_ld(edx * 8 + 0x1500D660); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509AE47: andpd xmm3, xmmword ptr [edx*8 + 0x1500d660] */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509AE50: mulsd xmm2, xmm4 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509AE54: mulsd xmm0, xmm4 */
    _xmm[6].u64[0] = _xmm[2].u64[0]; /* 0x1509AE58: movsd xmm6, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509AE5C: mulsd xmm2, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509AE60: mulsd xmm1, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509AE64: addsd xmm5, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509AE68: mulsd xmm6, xmm2 */
    { double _s = sse_f64(MEM64(0x1500D6A8)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509AE6C: addsd xmm1, qword ptr [0x1500d6a8] */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509AE74: mulsd xmm5, xmm2 */
    { double _s = _xmm[0].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509AE78: addsd xmm7, xmm0 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509AE7C: addpd xmm7, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509AE80: mulsd xmm1, xmm6 */
    { double _s = sse_f64(MEM64(0x1500D6B8)); _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509AE84: addsd xmm5, qword ptr [0x1500d6b8] */
    { double _s = _xmm[1].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509AE8C: mulsd xmm5, xmm1 */
    { double _s = _xmm[7].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509AE90: addsd xmm5, xmm7 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u64[0] = _d.u64[1]; _xmm[7].u64[1] = _s.u64[1]; } /* 0x1509AE94: unpckhpd xmm7, xmm7 */
    { double _s = _xmm[7].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509AE98: addsd xmm5, xmm7 */
    _xmm[0] = _xmm[5]; /* 0x1509AE9C: movapd xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509AEA0: ret  */
L_1509AEA1:
    _xmm[1].u64[0] = MEM64(esp + 0xC); /* 0x1509AEA1: movlpd xmm1, qword ptr [esp + 0xc] */
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509AEA7: movlpd xmm0, qword ptr [esp + 4] */
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509AEAD: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509AEB2: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)_xmm[0].u16[3]; /* 0x1509AEB7: pextrw ecx, xmm0, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF0u);
    ecx = ecx & 0x7FF0u; /* 0x1509AEBC: and ecx, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x1509AEC2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1509AEF3; /* 0x1509AEC4: jg 0x1509aef3 */
L_1509AEC6:
    ecx = (uint32_t)_xmm[1].u16[3]; /* 0x1509AEC6: pextrw ecx, xmm1, 3 */
    /* cmp ecx, 0x7FFFu */ /* 0x1509AECB: cmp ecx, 0x7fff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1509AEDB; /* 0x1509AED1: jg 0x1509aedb */
L_1509AED3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509AED3: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x1509AED6: divsd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509AEDA: ret  */
L_1509AEDB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509AEDB: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = xmm_ld(0x1500D590); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509AEDE: andpd xmm0, xmmword ptr [0x1500d590] */
    _xmm[2].u64[0] = MEM64(0x1500D570); /* 0x1509AEE6: movlpd xmm2, qword ptr [0x1500d570] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509AEEE: xorpd xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509AEF2: ret  */
L_1509AEF3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509AEF3: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = xmm_ld(0x1500D590); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509AEF6: andpd xmm0, xmmword ptr [0x1500d590] */
    _xmm[2].u64[0] = MEM64(0x1500D560); /* 0x1509AEFE: movlpd xmm2, qword ptr [0x1500d560] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509AF06: xorpd xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509AF0A: ret  */
L_1509AF0B:
    ecx = (uint32_t)_xmm[0].u16[3]; /* 0x1509AF0B: pextrw ecx, xmm0, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF0u);
    ecx = ecx & 0x7FF0u; /* 0x1509AF10: and ecx, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509AF16: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509AF1B: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x7FF0u */ /* 0x1509AF20: cmp ecx, 0x7ff0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509AFD1; /* 0x1509AF26: je 0x1509afd1 */
L_1509AF2C:
    /* cmp eax, 0x7FF0u */ /* 0x1509AF2C: cmp eax, 0x7ff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509B089; /* 0x1509AF31: je 0x1509b089 */
L_1509AF37:
    _xmm[3].u64[0] = MEM64(0x1500D6C8); /* 0x1509AF37: movlpd xmm3, qword ptr [0x1500d6c8] */
    edx = 0x400u; /* 0x1509AF3F: mov edx, 0x400 */
    _xmm[4].u64[0] = MEM64(0x1500D6C0); /* 0x1509AF44: movlpd xmm4, qword ptr [0x1500d6c0] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509AF4C: xorpd xmm6, xmm6 */
    _xmm[7].u64[0] = MEM64(0x1500D6D0); /* 0x1509AF50: movlpd xmm7, qword ptr [0x1500d6d0] */
    /* cmp ecx, 0 */ /* 0x1509AF58: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509AF92; /* 0x1509AF5B: je 0x1509af92 */
L_1509AF5D:
    /* cmp eax, 0 */ /* 0x1509AF5D: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509AFB2; /* 0x1509AF60: je 0x1509afb2 */
L_1509AF62:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1509AF62: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1509AF64: sub edx, eax */
    _flag_k = FK_CMP;
    /* cmp edx, 0x800u */ /* 0x1509AF66: cmp edx, 0x800 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1509AEA1; /* 0x1509AF6C: ja 0x1509aea1 */
L_1509AF72:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3BF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x3BF0u; /* 0x1509AF72: add edx, 0x3bf0 */
    _flag_k = FK_ADD;
    _xmm[6].u16[3] = (uint16_t)(edx); /* 0x1509AF78: pinsrw xmm6, edx, 3 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509AF7D: andpd xmm0, xmm4 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509AF81: andpd xmm1, xmm4 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509AF85: orpd xmm0, xmm6 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x1509AF89: orpd xmm1, xmm7 */
    RECOMP_BACKEDGE();
    goto L_1509AC53; /* 0x1509AF8D: jmp 0x1509ac53 */
L_1509AF92:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x370u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x370u; /* 0x1509AF92: sub edx, 0x370 */
    _flag_k = FK_CMP;
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509AF98: mulsd xmm0, xmm3 */
    ecx = (uint32_t)_xmm[0].u16[3]; /* 0x1509AF9C: pextrw ecx, xmm0, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF0u);
    ecx = ecx & 0x7FF0u; /* 0x1509AFA1: and ecx, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0 */ /* 0x1509AFA7: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509B0DA; /* 0x1509AFAA: je 0x1509b0da */
L_1509AFB0:
    RECOMP_BACKEDGE();
    goto L_1509AF5D; /* 0x1509AFB0: jmp 0x1509af5d */
L_1509AFB2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x370u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x370u; /* 0x1509AFB2: add edx, 0x370 */
    _flag_k = FK_ADD;
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509AFB8: mulsd xmm1, xmm3 */
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509AFBC: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509AFC1: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509AFC6: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509B103; /* 0x1509AFC9: je 0x1509b103 */
L_1509AFCF:
    RECOMP_BACKEDGE();
    goto L_1509AF62; /* 0x1509AFCF: jmp 0x1509af62 */
L_1509AFD1:
    edx = _xmm[0].u32[0]; /* 0x1509AFD1: movd edx, xmm0 */
    _xmm[2].u64[0] = _xmm[0].u64[0]; /* 0x1509AFD5: movsd xmm2, xmm0 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x1509AFD9: psrlq xmm2, 0x20 */
    ecx = _xmm[2].u32[0]; /* 0x1509AFDE: movd ecx, xmm2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    ecx = ecx & 0x000FFFFFu; /* 0x1509AFE2: and ecx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x1509AFE8: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0 */ /* 0x1509AFEA: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B015; /* 0x1509AFED: jne 0x1509b015 */
L_1509AFEF:
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509AFEF: psrlq xmm0, 0x3f */
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509AFF4: psllq xmm0, 0x3f */
    /* cmp eax, 0x7FF0u */ /* 0x1509AFF9: cmp eax, 0x7ff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B019; /* 0x1509AFFE: jae 0x1509b019 */
L_1509B000:
    _xmm[5] = xmm_ld(0x1500D560); /* 0x1509B000: movapd xmm5, xmmword ptr [0x1500d560] */
    { xmm_t _s = _xmm[5]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1509B008: pshufd xmm4, xmm5, 0xee */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509B00D: addsd xmm5, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509B011: orpd xmm0, xmm5 */
L_1509B015:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509B015: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B018: ret  */
L_1509B019:
    eax = _xmm[1].u32[0]; /* 0x1509B019: movd eax, xmm1 */
    _xmm[2].u64[0] = _xmm[1].u64[0]; /* 0x1509B01D: movsd xmm2, xmm1 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x1509B021: psrlq xmm2, 0x20 */
    ecx = _xmm[2].u32[0]; /* 0x1509B026: movd ecx, xmm2 */
    edx = 0x80000000u; /* 0x1509B02A: mov edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1509B02F: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    ecx = ecx & 0x000FFFFFu; /* 0x1509B031: and ecx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1509B037: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0 */ /* 0x1509B039: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B05C; /* 0x1509B03C: jne 0x1509b05c */
L_1509B03E:
    /* cmp edx, 0 */ /* 0x1509B03E: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B064; /* 0x1509B041: jne 0x1509b064 */
L_1509B043:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509B043: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[5] = xmm_ld(0x1500D580); /* 0x1509B046: movapd xmm5, xmmword ptr [0x1500d580] */
    { xmm_t _s = _xmm[5]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1509B04E: pshufd xmm4, xmm5, 0xee */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509B053: addsd xmm5, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509B057: orpd xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B05B: ret  */
L_1509B05C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509B05C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = _xmm[1].u64[0]; /* 0x1509B05F: movsd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B063: ret  */
L_1509B064:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509B064: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[5] = xmm_ld(0x1500D580); /* 0x1509B067: movapd xmm5, xmmword ptr [0x1500d580] */
    _xmm[6] = xmm_ld(0x1500D560); /* 0x1509B06F: movapd xmm6, xmmword ptr [0x1500d560] */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[5] = _d; } /* 0x1509B077: addpd xmm5, xmm6 */
    { xmm_t _s = _xmm[5]; _xmm[6].u32[0] = _s.u32[2]; _xmm[6].u32[1] = _s.u32[3]; _xmm[6].u32[2] = _s.u32[2]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x1509B07B: pshufd xmm6, xmm5, 0xee */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[5] = _d; } /* 0x1509B080: addpd xmm5, xmm6 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509B084: orpd xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B088: ret  */
L_1509B089:
    eax = _xmm[1].u32[0]; /* 0x1509B089: movd eax, xmm1 */
    _xmm[2].u64[0] = _xmm[1].u64[0]; /* 0x1509B08D: movsd xmm2, xmm1 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x1509B091: psrlq xmm2, 0x20 */
    ecx = _xmm[2].u32[0]; /* 0x1509B096: movd ecx, xmm2 */
    edx = 0x80000000u; /* 0x1509B09A: mov edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1509B09F: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    ecx = ecx & 0x000FFFFFu; /* 0x1509B0A1: and ecx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1509B0A7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0 */ /* 0x1509B0A9: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B05C; /* 0x1509B0AC: jne 0x1509b05c */
L_1509B0AE:
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509B0AE: psrlq xmm0, 0x3f */
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509B0B3: psllq xmm0, 0x3f */
    /* cmp edx, 0 */ /* 0x1509B0B8: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B0C1; /* 0x1509B0BB: jne 0x1509b0c1 */
L_1509B0BD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509B0BD: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B0C0: ret  */
L_1509B0C1:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509B0C1: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[5] = xmm_ld(0x1500D570); /* 0x1509B0C4: movapd xmm5, xmmword ptr [0x1500d570] */
    { xmm_t _s = _xmm[5]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1509B0CC: pshufd xmm4, xmm5, 0xee */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509B0D1: addsd xmm5, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509B0D5: orpd xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B0D9: ret  */
L_1509B0DA:
    edx = (uint32_t)_xmm[1].u16[3]; /* 0x1509B0DA: pextrw edx, xmm1, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    edx = edx & 0x8000u; /* 0x1509B0DF: and edx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509B0E5: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509B0FF; /* 0x1509B0E8: je 0x1509b0ff */
L_1509B0EA:
    _xmm[5] = xmm_ld(0x1500D570); /* 0x1509B0EA: movapd xmm5, xmmword ptr [0x1500d570] */
    { xmm_t _s = _xmm[5]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1509B0F2: pshufd xmm4, xmm5, 0xee */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509B0F7: addsd xmm5, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509B0FB: orpd xmm0, xmm5 */
L_1509B0FF:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509B0FF: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B102: ret  */
L_1509B103:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509B103: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[5] = xmm_ld(0x1500D560); /* 0x1509B106: movapd xmm5, xmmword ptr [0x1500d560] */
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509B10E: psrlq xmm0, 0x3f */
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509B113: psllq xmm0, 0x3f */
    { xmm_t _s = _xmm[5]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1509B118: pshufd xmm4, xmm5, 0xee */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509B11D: addsd xmm5, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509B121: orpd xmm0, xmm5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B125: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509B130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509B130u);

L_1509B130:
    ecx = 0x1C0u; /* 0x1509B130: mov ecx, 0x1c0 */
    _xmm[2].u64[0] = (uint32_t)(ecx); _xmm[2].u64[1] = 0; /* 0x1509B135: movd xmm2, ecx */
    _xmm[3].u64[0] = MEM32(0x1500DC94); _xmm[3].u64[1] = 0; /* 0x1509B139: movss xmm3, dword ptr [0x1500dc94] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x1509B141: xorpd xmm4, xmm4 */
    _xmm[7].u64[0] = MEM32(0x1500DC90); _xmm[7].u64[1] = 0; /* 0x1509B145: movss xmm7, dword ptr [0x1500dc90] */
    _xmm[6].u64[0] = MEM64(0x1500DC70); /* 0x1509B14D: movlpd xmm6, qword ptr [0x1500dc70] */
    { uint64_t _c = 24u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] << _c); } /* 0x1509B155: psllq xmm2, 0x18 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509B15A: andps xmm3, xmm0 */
    edx = (uint32_t)_xmm[0].u16[1]; /* 0x1509B15D: pextrw edx, xmm0, 1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509B162: andps xmm7, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509B165: xorpd xmm1, xmm1 */
    eax = edx; /* 0x1509B169: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF8u);
    edx = edx & 0x7FF8u; /* 0x1509B16B: and edx, 0x7ff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3D00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3D00u; /* 0x1509B171: sub edx, 0x3d00 */
    _flag_k = FK_CMP;
    /* cmp edx, 0x22F8u */ /* 0x1509B177: cmp edx, 0x22f8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x22F8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509B21C; /* 0x1509B17D: ja 0x1509b21c */
L_1509B183:
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] += _s.u64[_k]; } /* 0x1509B183: paddq xmm3, xmm2 */
    ecx = 0x4050u; /* 0x1509B187: mov ecx, 0x4050 */
    _xmm[4].u16[3] = (uint16_t)(ecx); /* 0x1509B18C: pinsrw xmm4, ecx, 3 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] += _s.u64[_k]; } /* 0x1509B191: paddq xmm7, xmm2 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x1509B195: psllq xmm3, 0x1d */
    _xmm[1].u16[3] = (uint16_t)(ecx); /* 0x1509B19A: pinsrw xmm1, ecx, 3 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x1509B19F: psllq xmm7, 0x1d */
    { double _s0 = _xmm[3].f64[0]; _xmm[4].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[4].f64[0], _s0, 6); } /* 0x1509B1A4: cmpnlesd xmm4, xmm3 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x1509B1A9: orpd xmm3, xmm6 */
    _xmm[0].u64[0] = _xmm[7].u64[0]; /* 0x1509B1AD: movsd xmm0, xmm7 */
    _xmm[5].u64[0] = MEM64(0x1500DC68); /* 0x1509B1B1: movlpd xmm5, qword ptr [0x1500dc68] */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)sse_mind(_xmm[3].f64[0], _s); } /* 0x1509B1B9: minsd xmm3, xmm1 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509B1BD: andpd xmm0, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509B1C1: mulsd xmm7, xmm3 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x1509B1C5: andpd xmm5, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509B1C9: subsd xmm0, xmm3 */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509B1CD: addsd xmm7, xmm5 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x1509B1D1: divsd xmm0, xmm7 */
    edx = (uint32_t)_xmm[3].u16[3]; /* 0x1509B1D5: pextrw edx, xmm3, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3F9Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3F9Fu; /* 0x1509B1DA: sub edx, 0x3f9f */
    _flag_k = FK_CMP;
    _xmm[4].u64[0] = MEM64(0x1500DC78); /* 0x1509B1E0: movlpd xmm4, qword ptr [0x1500dc78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509B1E8: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[1].u16[3] = (uint16_t)(eax); /* 0x1509B1ED: pinsrw xmm1, eax, 3 */
    _xmm[6].u64[0] = MEM64(edx * 8 + 0x1500D6D8); /* 0x1509B1F2: movlpd xmm6, qword ptr [edx*8 + 0x1500d6d8] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509B1FB: xorpd xmm6, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509B1FF: xorpd xmm1, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B203: mulsd xmm0, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509B207: mulsd xmm4, xmm1 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B20B: addsd xmm1, xmm6 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B20F: mulsd xmm0, xmm4 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509B213: addsd xmm0, xmm1 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x1509B217: cvtpd2ps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B21B: ret  */
L_1509B21C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1D80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1D80u; /* 0x1509B21C: add edx, 0x1d80 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x407Fu */ /* 0x1509B222: cmp edx, 0x407f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x407Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509B25F; /* 0x1509B228: ja 0x1509b25f */
L_1509B22A:
    _xmm[2].u64[0] = MEM32(0x1500DC88); _xmm[2].u64[1] = 0; /* 0x1509B22A: movss xmm2, dword ptr [0x1500dc88] */
    _xmm[4].u64[0] = MEM32(0x1500DC8C); _xmm[4].u64[1] = 0; /* 0x1509B232: movss xmm4, dword ptr [0x1500dc8c] */
    { float _s = _xmm[7].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509B23A: mulss xmm7, xmm7 */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x1509B23E: mulss xmm4, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1509B242: mulss xmm2, xmm0 */
    _xmm[5].u32[0] = _xmm[7].u32[0]; /* 0x1509B246: movss xmm5, xmm7 */
    { float _s = _xmm[7].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509B24A: mulss xmm7, xmm7 */
    { float _s = _xmm[5].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x1509B24E: mulss xmm4, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x1509B252: mulss xmm7, xmm2 */
    { float _s = _xmm[4].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] + _s); } /* 0x1509B256: addss xmm7, xmm4 */
    { float _s = _xmm[7].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509B25A: addss xmm0, xmm7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B25E: ret  */
L_1509B25F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1F80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1F80u; /* 0x1509B25F: add edx, 0x1f80 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x5F80u */ /* 0x1509B265: cmp edx, 0x5f80 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x5F80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B288; /* 0x1509B26B: jae 0x1509b288 */
L_1509B26D:
    eax = 0x3F800001u; /* 0x1509B26D: mov eax, 0x3f800001 */
    ecx = _xmm[0].u32[0]; /* 0x1509B272: movd ecx, xmm0 */
    /* cmp edx, 0x80u */ /* 0x1509B276: cmp edx, 0x80 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = ecx; } /* 0x1509B27C: cmovb eax, ecx */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x1509B27F: movd xmm1, eax */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509B283: mulss xmm1, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B287: ret  */
L_1509B288:
    _xmm[2].u64[0] = MEM32(0x1500DC80); _xmm[2].u64[1] = 0; /* 0x1509B288: movss xmm2, dword ptr [0x1500dc80] */
    _xmm[3].u64[0] = MEM32(0x1500DC84); _xmm[3].u64[1] = 0; /* 0x1509B290: movss xmm3, dword ptr [0x1500dc84] */
    /* cmp edx, 0x7F7Fu */ /* 0x1509B298: cmp edx, 0x7f7f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509B2B9; /* 0x1509B29E: ja 0x1509b2b9 */
L_1509B2A0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509B2A0: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509B2A5: xorpd xmm0, xmm0 */
    _xmm[0].u16[1] = (uint16_t)(eax); /* 0x1509B2A9: pinsrw xmm0, eax, 1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1509B2AE: orps xmm2, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509B2B1: orps xmm0, xmm3 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509B2B4: addss xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B2B8: ret  */
L_1509B2B9:
    edx = _xmm[0].u32[0]; /* 0x1509B2B9: movd edx, xmm0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509B2BD: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x7F800000u */ /* 0x1509B2C3: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509B2A0; /* 0x1509B2C9: je 0x1509b2a0 */
L_1509B2CB:
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509B2CB: addss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B2CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509B2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509B2E0u);

L_1509B2E0:
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509B2E0: pextrw eax, xmm0, 3 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    SET_LO16(eax, LO16(eax) & 0x7FFFu); /* 0x1509B2E5: and ax, 0x7fff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x3030u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - 0x3030u); /* 0x1509B2E9: sub ax, 0x3030 */
    _flag_k = FK_NARROW(FK_CMP, 16);
    /* cmp LO16(eax), 0x10C5u */ /* 0x1509B2ED: cmp ax, 0x10c5 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x10C5u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1509B42D; /* 0x1509B2F1: ja 0x1509b42d */
L_1509B2F7:
    _xmm[1].u64[0] = MEM64(0x1500E500); _xmm[1].u64[1] = 0; /* 0x1509B2F7: movsd xmm1, qword ptr [0x1500e500] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509B2FF: mulsd xmm1, xmm0 */
    _xmm[2].u64[0] = MEM64(0x1500E508); _xmm[2].u64[1] = 0; /* 0x1509B303: movsd xmm2, qword ptr [0x1500e508] */
    edx = (uint32_t)sse_cvt_i32((double)_xmm[1].f64[0], 0); /* 0x1509B30B: cvtsd2si edx, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B30F: addsd xmm1, xmm2 */
    _xmm[3].u64[0] = MEM64(0x1500E4F0); _xmm[3].u64[1] = 0; /* 0x1509B313: movsd xmm3, qword ptr [0x1500e4f0] */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509B31B: subsd xmm1, xmm2 */
    _xmm[2] = xmm_ld(0x1500E4E0); /* 0x1509B31F: movapd xmm2, xmmword ptr [0x1500e4e0] */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509B327: mulsd xmm3, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u64[0] = _d.u64[0]; _xmm[1].u64[1] = _s.u64[0]; } /* 0x1509B32B: unpcklpd xmm1, xmm1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x001C7610u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x001C7610u; /* 0x1509B32F: add edx, 0x1c7610 */
    _flag_k = FK_ADD;
    _xmm[4].u64[0] = _xmm[0].u64[0]; /* 0x1509B335: movsd xmm4, xmm0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Fu);
    edx = edx & 0x3Fu; /* 0x1509B339: and edx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[5] = xmm_ld(0x1500E4D0); /* 0x1509B33C: movapd xmm5, xmmword ptr [0x1500e4d0] */
    eax = 0x1500DCA0; /* 0x1509B344: lea eax, [0x1500dca0] */
    if (5u) _cf = (((edx) >> 27) & 1u); /* 0x1509B34A: shl edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 5u; /* 0x1509B34A: shl edx, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1509B34D: add eax, edx */
    _flag_k = FK_ADD;
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509B34F: mulpd xmm2, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509B353: subsd xmm0, xmm3 */
    { double _s = sse_f64(MEM64(0x1500E4F8)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509B357: mulsd xmm1, qword ptr [0x1500e4f8] */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509B35F: subsd xmm4, xmm3 */
    _xmm[7].u64[0] = MEM64(eax + 0x8); _xmm[7].u64[1] = 0; /* 0x1509B363: movsd xmm7, qword ptr [eax + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509B368: unpcklpd xmm0, xmm0 */
    _xmm[3].u64[0] = _xmm[4].u64[0]; /* 0x1509B36C: movsd xmm3, xmm4 */
    { double _s = _xmm[2].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509B370: subsd xmm4, xmm2 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[5] = _d; } /* 0x1509B374: mulpd xmm5, xmm0 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x1509B378: subpd xmm0, xmm2 */
    _xmm[6] = xmm_ld(0x1500E4B0); /* 0x1509B37C: movapd xmm6, xmmword ptr [0x1500e4b0] */
    { double _s = _xmm[4].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509B384: mulsd xmm7, xmm4 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509B388: subsd xmm3, xmm4 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[5] = _d; } /* 0x1509B38C: mulpd xmm5, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509B390: mulpd xmm0, xmm0 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509B394: subsd xmm3, xmm2 */
    _xmm[2] = xmm_ld(eax); /* 0x1509B398: movapd xmm2, xmmword ptr [eax] */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509B39C: subsd xmm1, xmm3 */
    _xmm[3].u64[0] = MEM64(eax + 0x18); _xmm[3].u64[1] = 0; /* 0x1509B3A0: movsd xmm3, qword ptr [eax + 0x18] */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509B3A5: addsd xmm2, xmm3 */
    { double _s = _xmm[2].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x1509B3A9: subsd xmm7, xmm2 */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509B3AD: mulsd xmm2, xmm4 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509B3B1: mulpd xmm6, xmm0 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509B3B5: mulsd xmm3, xmm4 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509B3B9: mulpd xmm2, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509B3BD: mulpd xmm0, xmm0 */
    { double _s0 = sse_f64(MEM64(0x1500E4C0)); double _s1 = sse_f64(MEM64(0x1500E4C0 + 8)); xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[5] = _d; } /* 0x1509B3C1: addpd xmm5, xmmword ptr [0x1500e4c0] */
    { double _s = sse_f64(MEM64(eax)); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509B3C9: mulsd xmm4, qword ptr [eax] */
    { double _s0 = sse_f64(MEM64(0x1500E4A0)); double _s1 = sse_f64(MEM64(0x1500E4A0 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x1509B3CD: addpd xmm6, xmmword ptr [0x1500e4a0] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[5] = _d; } /* 0x1509B3D5: mulpd xmm5, xmm0 */
    _xmm[0].u64[0] = _xmm[3].u64[0]; /* 0x1509B3D9: movsd xmm0, xmm3 */
    { double _s = sse_f64(MEM64(eax + 0x8)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509B3DD: addsd xmm3, qword ptr [eax + 8] */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509B3E2: mulpd xmm1, xmm7 */
    _xmm[7].u64[0] = _xmm[4].u64[0]; /* 0x1509B3E6: movsd xmm7, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509B3EA: addsd xmm4, xmm3 */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x1509B3EE: addpd xmm6, xmm5 */
    _xmm[5].u64[0] = MEM64(eax + 0x8); _xmm[5].u64[1] = 0; /* 0x1509B3F2: movsd xmm5, qword ptr [eax + 8] */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x1509B3F7: subsd xmm5, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509B3FB: subsd xmm3, xmm4 */
    { double _s = sse_f64(MEM64(eax + 0x10)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B3FF: addsd xmm1, qword ptr [eax + 0x10] */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509B404: mulpd xmm6, xmm2 */
    { double _s = _xmm[0].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509B408: addsd xmm5, xmm0 */
    { double _s = _xmm[7].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509B40C: addsd xmm3, xmm7 */
    { double _s = _xmm[5].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B410: addsd xmm1, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B414: addsd xmm1, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B418: addsd xmm1, xmm6 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u64[0] = _d.u64[1]; _xmm[6].u64[1] = _s.u64[1]; } /* 0x1509B41C: unpckhpd xmm6, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B420: addsd xmm1, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509B424: addsd xmm4, xmm1 */
    _xmm[0] = _xmm[4]; /* 0x1509B428: movapd xmm0, xmm4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B42C: ret  */
L_1509B42D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1509B44E; /* 0x1509B42D: jg 0x1509b44e */
L_1509B42F:
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509B42F: pextrw eax, xmm0, 3 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    SET_LO16(eax, LO16(eax) & 0x7FFFu); /* 0x1509B434: and ax, 0x7fff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _xmm[0].u16[3] = (uint16_t)(eax); /* 0x1509B438: pinsrw xmm0, eax, 3 */
    _xmm[1].u64[0] = MEM64(0x1500E510); _xmm[1].u64[1] = 0; /* 0x1509B43D: movsd xmm1, qword ptr [0x1500e510] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509B445: subsd xmm1, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x1509B449: movapd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B44D: ret  */
L_1509B44E:
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509B44E: pextrw eax, xmm0, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509B453: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF0u */ /* 0x1509B458: cmp eax, 0x7ff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509B482; /* 0x1509B45D: je 0x1509b482 */
L_1509B45F:
    eax = esp; /* 0x1509B45F: mov eax, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1509B461: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1509B464: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x1509B467: mov dword ptr [esp + 8], eax */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x1509B46B: movq qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_15098E60); /* 0x1509B470: call 0x15098e60 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1509B475: fstp qword ptr [esp] */
    _xmm[0].u64[0] = MEM64(esp); _xmm[0].u64[1] = 0; /* 0x1509B478: movq xmm0, qword ptr [esp] */
    esp = MEM32(esp + 0x8); /* 0x1509B47D: mov esp, dword ptr [esp + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B481: ret  */
L_1509B482:
    { double _s = sse_f64(MEM64(0x1500E518)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B482: mulsd xmm0, qword ptr [0x1500e518] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B48A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509B4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509B4A0u);

L_1509B4A0:
    eax = (uint32_t)_xmm[0].u16[1]; /* 0x1509B4A0: pextrw eax, xmm0, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    SET_LO16(eax, LO16(eax) & 0x7FFFu); /* 0x1509B4A5: and ax, 0x7fff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x80u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - 0x80u); /* 0x1509B4A9: sub ax, 0x80 */
    _flag_k = FK_NARROW(FK_CMP, 16);
    /* cmp LO16(eax), 0x457Fu */ /* 0x1509B4AD: cmp ax, 0x457f */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x457Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1509B5A0; /* 0x1509B4B1: ja 0x1509b5a0 */
L_1509B4B7:
    _xmm[1].u64[0] = MEM64(0x1500E968); _xmm[1].u64[1] = 0; /* 0x1509B4B7: movsd xmm1, qword ptr [0x1500e968] */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509B4BF: mulss xmm1, xmm0 */
    _xmm[3] = xmm_ld(0x1500E920); /* 0x1509B4C3: movapd xmm3, xmmword ptr [0x1500e920] */
    edx = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 0); /* 0x1509B4CB: cvtss2si edx, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509B4CF: andpd xmm3, xmm0 */
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509B4D3: cvtss2sd xmm0, xmm0 */
    { float _s = sse_f32(MEM32(0x1500E970)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x1509B4D7: addss xmm1, dword ptr [0x1500e970] */
    { float _s = sse_f32(MEM32(0x1500E970)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1509B4DF: subss xmm1, dword ptr [0x1500e970] */
    _xmm[4] = _xmm[3]; /* 0x1509B4E7: movapd xmm4, xmm3 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x1509B4EB: psllq xmm3, 0x20 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] << _c); } /* 0x1509B4F0: psllq xmm4, 0x1d */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509B4F5: xorpd xmm3, xmm4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x001C7610u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x001C7610u; /* 0x1509B4F9: add edx, 0x1c7610 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Fu);
    edx = edx & 0x3Fu; /* 0x1509B4FF: and edx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[2].u64[0] = MEM64(0x1500E938); _xmm[2].u64[1] = 0; /* 0x1509B502: movsd xmm2, qword ptr [0x1500e938] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1509B50A: xorpd xmm2, xmm3 */
    { xmm_t _s = xmm_ld(0x1500E930); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509B50E: xorpd xmm3, xmmword ptr [0x1500e930] */
    eax = 0x1500E520; /* 0x1509B516: lea eax, [0x1500e520] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1509B51C: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1509B51C: shl edx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1509B51F: add eax, edx */
    _flag_k = FK_ADD;
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509B521: psllq xmm1, 0x1d */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509B526: mulsd xmm2, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509B52A: mulsd xmm3, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509B52E: subsd xmm0, xmm2 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509B532: addsd xmm3, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B536: mulsd xmm0, xmm0 */
    _xmm[4].u64[0] = MEM64(0x1500E958); _xmm[4].u64[1] = 0; /* 0x1509B53A: movsd xmm4, qword ptr [0x1500e958] */
    _xmm[5].u64[0] = MEM64(0x1500E948); _xmm[5].u64[1] = 0; /* 0x1509B542: movsd xmm5, qword ptr [0x1500e948] */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509B54A: mulsd xmm4, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509B54E: mulsd xmm5, xmm0 */
    _xmm[6].u64[0] = MEM64(0x1500E960); _xmm[6].u64[1] = 0; /* 0x1509B552: movsd xmm6, qword ptr [0x1500e960] */
    _xmm[7].u64[0] = MEM64(0x1500E950); _xmm[7].u64[1] = 0; /* 0x1509B55A: movsd xmm7, qword ptr [0x1500e950] */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B562: mulsd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(0x1500E940)); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509B566: addsd xmm4, qword ptr [0x1500e940] */
    { double _s = _xmm[0].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509B56E: mulsd xmm6, xmm0 */
    { double _s = sse_f64(MEM64(0x1500E940)); _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509B572: addsd xmm5, qword ptr [0x1500e940] */
    { double _s = _xmm[0].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509B57A: mulsd xmm7, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509B57E: addsd xmm4, xmm6 */
    { double _s = _xmm[7].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509B582: addsd xmm5, xmm7 */
    _xmm[2].u64[0] = MEM64(eax); _xmm[2].u64[1] = 0; /* 0x1509B586: movsd xmm2, qword ptr [eax] */
    { double _s = sse_f64(MEM64(eax + 0x8)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509B58A: mulsd xmm3, qword ptr [eax + 8] */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509B58F: mulsd xmm2, xmm4 */
    { double _s = _xmm[5].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509B593: mulsd xmm3, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509B597: addsd xmm2, xmm3 */
    _xmm[0].f32[0] = (float)_xmm[2].f64[0]; /* 0x1509B59B: cvtsd2ss xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B59F: ret  */
L_1509B5A0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1509B5BB; /* 0x1509B5A0: jg 0x1509b5bb */
L_1509B5A2:
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509B5A2: cvtss2sd xmm0, xmm0 */
    _xmm[1].u64[0] = MEM64(0x1500E940); _xmm[1].u64[1] = 0; /* 0x1509B5A6: movsd xmm1, qword ptr [0x1500e940] */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B5AE: mulsd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509B5B2: subsd xmm1, xmm0 */
    _xmm[0].f32[0] = (float)_xmm[1].f64[0]; /* 0x1509B5B6: cvtsd2ss xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B5BA: ret  */
L_1509B5BB:
    eax = _xmm[0].u32[0]; /* 0x1509B5BB: movd eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x1509B5BF: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1509B5C4: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509B5F2; /* 0x1509B5C9: je 0x1509b5f2 */
L_1509B5CB:
    eax = esp; /* 0x1509B5CB: mov eax, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1509B5CD: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1509B5D0: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x1509B5D3: mov dword ptr [esp + 8], eax */
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509B5D7: cvtss2sd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x1509B5DB: movq qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_15098E60); /* 0x1509B5E0: call 0x15098e60 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1509B5E5: fstp dword ptr [esp] */
    _xmm[0].u64[0] = MEM32(esp); _xmm[0].u64[1] = 0; /* 0x1509B5E8: movss xmm0, dword ptr [esp] */
    esp = MEM32(esp + 0x8); /* 0x1509B5ED: mov esp, dword ptr [esp + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B5F1: ret  */
L_1509B5F2:
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509B5F2: subss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B5F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509B600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509B600u);

L_1509B600:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509B600: sub esp, 0xc */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509B603: unpcklpd xmm0, xmm0 */
    _xmm[1] = xmm_ld(0x1500E9C0); /* 0x1509B607: movapd xmm1, xmmword ptr [0x1500e9c0] */
    _xmm[6] = xmm_ld(0x1500E9B0); /* 0x1509B60F: movapd xmm6, xmmword ptr [0x1500e9b0] */
    MEM64(esp + 0x4) = _xmm[0].u64[0]; /* 0x1509B617: movlpd qword ptr [esp + 4], xmm0 */
    _xmm[2] = xmm_ld(0x1500E9D0); /* 0x1509B61D: movapd xmm2, xmmword ptr [0x1500e9d0] */
    _xmm[3] = xmm_ld(0x1500E9E0); /* 0x1509B625: movapd xmm3, xmmword ptr [0x1500e9e0] */
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509B62D: pextrw eax, xmm0, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x1509B632: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x408Fu; /* 0x1509B637: mov edx, 0x408f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1509B63C: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3C90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3C90u; /* 0x1509B63E: sub eax, 0x3c90 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509B643: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x80000000u */ /* 0x1509B645: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B7F0; /* 0x1509B64B: jae 0x1509b7f0 */
L_1509B651:
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509B651: mulpd xmm1, xmm0 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509B655: addpd xmm1, xmm6 */
    _xmm[7] = _xmm[1]; /* 0x1509B659: movapd xmm7, xmm1 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[1] = _d; } /* 0x1509B65D: subpd xmm1, xmm6 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509B661: mulpd xmm2, xmm1 */
    _xmm[4] = xmm_ld(0x1500E9F0); /* 0x1509B665: movapd xmm4, xmmword ptr [0x1500e9f0] */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x1509B66D: mulpd xmm3, xmm1 */
    _xmm[5] = xmm_ld(0x1500EA00); /* 0x1509B671: movapd xmm5, xmmword ptr [0x1500ea00] */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x1509B679: subpd xmm0, xmm2 */
    eax = _xmm[7].u32[0]; /* 0x1509B67D: movd eax, xmm7 */
    ecx = eax; /* 0x1509B681: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Fu);
    ecx = ecx & 0x3Fu; /* 0x1509B683: and ecx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1509B686: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1509B686: shl ecx, 4 */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x1509B689: sar eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 6u);
    edx = eax; /* 0x1509B68C: mov edx, eax */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x1509B68E: subpd xmm0, xmm3 */
    _xmm[2] = xmm_ld(ecx + 0x1500EA10); /* 0x1509B692: movapd xmm2, xmmword ptr [ecx + 0x1500ea10] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x1509B69A: mulpd xmm4, xmm0 */
    _xmm[1] = _xmm[0]; /* 0x1509B69E: movapd xmm1, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509B6A2: mulpd xmm0, xmm0 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[5] = _d; } /* 0x1509B6A6: addpd xmm5, xmm4 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B6AA: mulsd xmm0, xmm0 */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B6AE: addsd xmm1, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u64[0] = _d.u64[1]; _xmm[2].u64[1] = _s.u64[1]; } /* 0x1509B6B2: unpckhpd xmm2, xmm2 */
    _xmm[6] = xmm_ld(0x1500E990); /* 0x1509B6B6: movdqa xmm6, xmmword ptr [0x1500e990] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509B6BE: pand xmm7, xmm6 */
    _xmm[6] = xmm_ld(0x1500E9A0); /* 0x1509B6C2: movdqa xmm6, xmmword ptr [0x1500e9a0] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] += _s.u64[_k]; } /* 0x1509B6CA: paddq xmm7, xmm6 */
    { uint64_t _c = 46u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x1509B6CE: psllq xmm7, 0x2e */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509B6D3: mulpd xmm0, xmm5 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509B6D7: addsd xmm1, xmm0 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1509B6DB: orpd xmm2, xmm7 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[1]; _xmm[0].u64[1] = _s.u64[1]; } /* 0x1509B6DF: unpckhpd xmm0, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509B6E3: addsd xmm0, xmm1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x37Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x37Eu; /* 0x1509B6E7: add edx, 0x37e */
    _flag_k = FK_ADD;
    /* cmp edx, 0x77Cu */ /* 0x1509B6ED: cmp edx, 0x77c */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x77Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509B701; /* 0x1509B6F3: ja 0x1509b701 */
L_1509B6F5:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509B6F5: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B6F8: mulsd xmm0, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509B6FC: addsd xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B700: ret  */
L_1509B701:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12u; /* 0x1509B701: sub esp, 0x12 */
    _flag_k = FK_CMP;
    /* fwait */ /* 0x1509B704: wait  */
    MEM16(esp + 0x10) = _fpu_cw; /* 0x1509B705: fnstcw word ptr [esp + 0x10] */
    SET_LO16(edx, MEM16(esp + 0x10)); /* 0x1509B709: mov dx, word ptr [esp + 0x10] */
    _flag_a = (uint32_t)((LO16(edx) | 0x300u)) << 16; _flag_b = (uint32_t)((LO16(edx) | 0x300u)) << 16;
    SET_LO16(edx, LO16(edx) | 0x300u); /* 0x1509B70E: or dx, 0x300 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(esp) = (uint16_t)(LO16(edx)); /* 0x1509B713: mov word ptr [esp], dx */
    _fpu_cw = MEM16(esp); /* 0x1509B717: fldcw word ptr [esp] */
    edx = eax; /* 0x1509B71A: mov edx, eax */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1509B71C: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1509B71E: sub edx, eax */
    _flag_k = FK_CMP;
    _xmm[6] = xmm_ld(0x1500E980); /* 0x1509B720: movdqa xmm6, xmmword ptr [0x1500e980] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = ~_xmm[6].u32[_k] & _s.u32[_k]; } /* 0x1509B728: pandn xmm6, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3FFu; /* 0x1509B72C: add eax, 0x3ff */
    _flag_k = FK_ADD;
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x1509B731: movd xmm3, eax */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x1509B735: psllq xmm3, 0x34 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] | _s.u32[_k]; } /* 0x1509B73A: orpd xmm6, xmm3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x3FFu; /* 0x1509B73E: add edx, 0x3ff */
    _flag_k = FK_ADD;
    _xmm[4].u64[0] = (uint32_t)(edx); _xmm[4].u64[1] = 0; /* 0x1509B744: movd xmm4, edx */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] << _c); } /* 0x1509B748: psllq xmm4, 0x34 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x1509B74D: movlpd qword ptr [esp], xmm0 */
    fp_push(*(double*)ADDR(esp)); /* 0x1509B752: fld qword ptr [esp] */
    MEM64(esp + 0x8) = _xmm[6].u64[0]; /* 0x1509B755: movlpd qword ptr [esp + 8], xmm6 */
    fp_push(*(double*)ADDR(esp + 0x8)); /* 0x1509B75B: fld qword ptr [esp + 8] */
    _st[1] *= _st[0]; /* 0x1509B75F: fmul st(1), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1509B761: faddp st(1) */
    MEM64(esp) = _xmm[4].u64[0]; /* 0x1509B763: movlpd qword ptr [esp], xmm4 */
    fp_push(*(double*)ADDR(esp)); /* 0x1509B768: fld qword ptr [esp] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1509B76B: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1509B76D: fstp qword ptr [esp] */
    _xmm[0].u64[0] = MEM64(esp); /* 0x1509B770: movlpd xmm0, qword ptr [esp] */
    _fpu_cw = MEM16(esp + 0x10); /* 0x1509B775: fldcw word ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Eu; /* 0x1509B779: add esp, 0x1e */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B77C: ret  */
L_1509B77D:
    /* cmp eax, 0x7FF00000u */ /* 0x1509B77D: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B7AF; /* 0x1509B782: jae 0x1509b7af */
L_1509B784:
    eax = MEM32(esp + 0x8); /* 0x1509B784: mov eax, dword ptr [esp + 8] */
    /* cmp eax, 0x80000000u */ /* 0x1509B788: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B79F; /* 0x1509B78D: jae 0x1509b79f */
L_1509B78F:
    _xmm[0].u64[0] = MEM64(0x1500EE28); /* 0x1509B78F: movlpd xmm0, qword ptr [0x1500ee28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509B797: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B79A: mulsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B79E: ret  */
L_1509B79F:
    _xmm[0].u64[0] = MEM64(0x1500EE30); /* 0x1509B79F: movlpd xmm0, qword ptr [0x1500ee30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509B7A7: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B7AA: mulsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B7AE: ret  */
L_1509B7AF:
    edx = MEM32(esp + 0x4); /* 0x1509B7AF: mov edx, dword ptr [esp + 4] */
    /* cmp eax, 0x7FF00000u */ /* 0x1509B7B3: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509B7E2; /* 0x1509B7B8: ja 0x1509b7e2 */
L_1509B7BA:
    /* cmp edx, 0 */ /* 0x1509B7BA: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B7E2; /* 0x1509B7BD: jne 0x1509b7e2 */
L_1509B7BF:
    eax = MEM32(esp + 0x8); /* 0x1509B7BF: mov eax, dword ptr [esp + 8] */
    /* cmp eax, 0x7FF00000u */ /* 0x1509B7C3: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B7D6; /* 0x1509B7C8: jne 0x1509b7d6 */
L_1509B7CA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509B7CA: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x1500EE18); /* 0x1509B7CD: movlpd xmm0, qword ptr [0x1500ee18] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B7D5: ret  */
L_1509B7D6:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509B7D6: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x1500EE20); /* 0x1509B7D9: movlpd xmm0, qword ptr [0x1500ee20] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B7E1: ret  */
L_1509B7E2:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509B7E2: movlpd xmm0, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509B7E8: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509B7EB: addsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B7EF: ret  */
L_1509B7F0:
    eax = MEM32(esp + 0x8); /* 0x1509B7F0: mov eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x1509B7F4: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40900000u */ /* 0x1509B7F9: cmp eax, 0x40900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B77D; /* 0x1509B7FE: jae 0x1509b77d */
L_1509B804:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509B804: movlpd xmm0, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509B80A: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = sse_f64(MEM64(0x1500EE10)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509B80D: addsd xmm0, qword ptr [0x1500ee10] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B815: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509B820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509B820u);

L_1509B820:
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x1509B820: movss xmm1, xmm0 */
    _xmm[4].u32[0] = _xmm[0].u32[0]; /* 0x1509B824: movss xmm4, xmm0 */
    eax = 0x46B8AA3Bu; /* 0x1509B828: mov eax, 0x46b8aa3b */
    _xmm[7].u64[0] = (uint32_t)(eax); _xmm[7].u64[1] = 0; /* 0x1509B82D: movd xmm7, eax */
    _xmm[3].u64[0] = MEM64(0x1500F0B8); /* 0x1509B831: movlpd xmm3, qword ptr [0x1500f0b8] */
    ecx = _xmm[0].u32[0]; /* 0x1509B839: movd ecx, xmm0 */
    { float _a = _xmm[1].f32[0], _b = _xmm[1].f32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x1509B83D: cvtps2pd xmm1, xmm1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x1509B840: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x31800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x31800000u; /* 0x1509B846: sub ecx, 0x31800000 */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x12000000u */ /* 0x1509B84C: cmp ecx, 0x12000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x12000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B8EA; /* 0x1509B852: jae 0x1509b8ea */
L_1509B858:
    { float _s = _xmm[7].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509B858: mulss xmm0, xmm7 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 0); /* 0x1509B85C: cvtss2si eax, xmm0 */
    _xmm[6].u64[0] = MEM64(0x1500F0C0); /* 0x1509B860: movlpd xmm6, qword ptr [0x1500f0c0] */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x1509B868: movd xmm2, eax */
    ecx = eax; /* 0x1509B86C: mov ecx, eax */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1509B86E: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1509B86E: shl eax, 3 */
    edx = ecx; /* 0x1509B871: mov edx, ecx */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509B873: mulsd xmm3, xmm1 */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1509B877: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x78u);
    eax = eax & 0x78u; /* 0x1509B879: and eax, 0x78 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = sse_f64(MEM64(eax + 0x1500F038)); _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509B87C: mulsd xmm6, qword ptr [eax + 0x1500f038] */
    _xmm[0].u64[0] = MEM64(eax + 0x1500F038); /* 0x1509B884: movlpd xmm0, qword ptr [eax + 0x1500f038] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF8u);
    ecx = ecx & 0xF8u; /* 0x1509B88C: and ecx, 0xf8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1509B892: mov eax, edx */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x1509B894: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    { int32_t _a = (int32_t)_xmm[2].u32[0], _b = (int32_t)_xmm[2].u32[1]; _xmm[2].f64[0] = _a; _xmm[2].f64[1] = _b; } /* 0x1509B897: cvtdq2pd xmm2, xmm2 */
    _xmm[7].u64[0] = MEM64(ecx + 0x1500EF38); /* 0x1509B89B: movlpd xmm7, qword ptr [ecx + 0x1500ef38] */
    if (14u) _cf = (((eax) >> 13) & 1u); /* 0x1509B8A3: sar eax, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 14u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF8u);
    edx = edx & 0xF8u; /* 0x1509B8A6: and edx, 0xf8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[5].u64[0] = (uint32_t)(eax); _xmm[5].u64[1] = 0; /* 0x1509B8AC: movd xmm5, eax */
    { double _s = sse_f64(MEM64(edx + 0x1500EE38)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509B8B0: mulsd xmm7, qword ptr [edx + 0x1500ee38] */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509B8B8: subsd xmm3, xmm2 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[5].u64[_k] << _c); } /* 0x1509B8BC: psllq xmm5, 0x34 */
    ecx = _xmm[4].u32[0]; /* 0x1509B8C1: movd ecx, xmm4 */
    eax = ecx; /* 0x1509B8C5: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x1509B8C7: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509B8CD: mulsd xmm6, xmm3 */
    /* cmp ecx, 0x42AEAC4Fu */ /* 0x1509B8D1: cmp ecx, 0x42aeac4f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x42AEAC4Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509B928; /* 0x1509B8D7: ja 0x1509b928 */
L_1509B8D9:
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] += _s.u32[_k]; } /* 0x1509B8D9: paddd xmm7, xmm5 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509B8DD: addsd xmm0, xmm6 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509B8E1: mulsd xmm0, xmm7 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x1509B8E5: cvtpd2ps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B8E9: ret  */
L_1509B8EA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x31800000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x31800000u; /* 0x1509B8EA: add ecx, 0x31800000 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x31800000u */ /* 0x1509B8F0: cmp ecx, 0x31800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x31800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509B96E; /* 0x1509B8F6: jbe 0x1509b96e */
L_1509B8F8:
    /* cmp ecx, 0x7F800000u */ /* 0x1509B8F8: cmp ecx, 0x7f800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B940; /* 0x1509B8FE: jae 0x1509b940 */
L_1509B900:
    edx = _xmm[4].u32[0]; /* 0x1509B900: movd edx, xmm4 */
    /* cmp edx, 0x80000000u */ /* 0x1509B904: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509B91A; /* 0x1509B90A: jae 0x1509b91a */
L_1509B90C:
    edx = 0x7F7FFFFFu; /* 0x1509B90C: mov edx, 0x7f7fffff */
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x1509B911: movd xmm0, edx */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509B915: mulss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B919: ret  */
L_1509B91A:
    edx = 0x00800000u; /* 0x1509B91A: mov edx, 0x800000 */
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x1509B91F: movd xmm0, edx */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509B923: mulss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B927: ret  */
L_1509B928:
    /* cmp eax, 0x42B17218u */ /* 0x1509B928: cmp eax, 0x42b17218 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x42B17218u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1509B8D9; /* 0x1509B92D: jb 0x1509b8d9 */
L_1509B92F:
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] += _s.u32[_k]; } /* 0x1509B92F: paddd xmm7, xmm5 */
    { double _s = _xmm[0].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509B933: addsd xmm6, xmm0 */
    { double _s = _xmm[7].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509B937: mulsd xmm6, xmm7 */
    _xmm[0].f32[0] = (float)_xmm[6].f64[0]; /* 0x1509B93B: cvtsd2ss xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B93F: ret  */
L_1509B940:
    /* cmp ecx, 0x7F800000u */ /* 0x1509B940: cmp ecx, 0x7f800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B965; /* 0x1509B946: jne 0x1509b965 */
L_1509B948:
    eax = _xmm[4].u32[0]; /* 0x1509B948: movd eax, xmm4 */
    /* cmp eax, 0x7F800000u */ /* 0x1509B94C: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509B95C; /* 0x1509B951: jne 0x1509b95c */
L_1509B953:
    _xmm[0].u64[0] = MEM32(0x1500F0C8); _xmm[0].u64[1] = 0; /* 0x1509B953: movss xmm0, dword ptr [0x1500f0c8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B95B: ret  */
L_1509B95C:
    _xmm[0].u64[0] = MEM32(0x1500F0D0); _xmm[0].u64[1] = 0; /* 0x1509B95C: movss xmm0, dword ptr [0x1500f0d0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B964: ret  */
L_1509B965:
    _xmm[0].u32[0] = _xmm[4].u32[0]; /* 0x1509B965: movss xmm0, xmm4 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509B969: addss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B96D: ret  */
L_1509B96E:
    _xmm[0].u64[0] = MEM32(0x1500F0CC); _xmm[0].u64[1] = 0; /* 0x1509B96E: movss xmm0, dword ptr [0x1500f0cc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509B976: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509B980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509B980u);

L_1509B980:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509B980: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = 0; /* 0x1509B983: mov edx, 0 */
    MEM64(esp + 0x4) = _xmm[0].u64[0]; /* 0x1509B988: movlpd qword ptr [esp + 4], xmm0 */
L_1509B98E:
    _xmm[5] = _xmm[0]; /* 0x1509B98E: movapd xmm5, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509B992: unpcklpd xmm0, xmm0 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[5].u64[_k] >> _c); } /* 0x1509B996: psrlq xmm5, 0x34 */
    ecx = (uint32_t)_xmm[5].u16[0]; /* 0x1509B99B: pextrw ecx, xmm5, 0 */
    _xmm[1] = xmm_ld(0x1500F0E0); /* 0x1509B9A0: movapd xmm1, xmmword ptr [0x1500f0e0] */
    _xmm[3] = xmm_ld(0x1500F140); /* 0x1509B9A8: movapd xmm3, xmmword ptr [0x1500f140] */
    _xmm[4] = xmm_ld(0x1500F0F0); /* 0x1509B9B0: movapd xmm4, xmmword ptr [0x1500f0f0] */
    _xmm[6] = xmm_ld(0x1500F100); /* 0x1509B9B8: movapd xmm6, xmmword ptr [0x1500f100] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509B9C0: andpd xmm0, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509B9C4: orpd xmm0, xmm3 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[4] = _d; } /* 0x1509B9C8: addpd xmm4, xmm0 */
    eax = (uint32_t)_xmm[4].u16[0]; /* 0x1509B9CC: pextrw eax, xmm4, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F0u);
    eax = eax & 0x7F0u; /* 0x1509B9D1: and eax, 0x7f0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[4] = xmm_ld(eax + 0x1500F1B0); /* 0x1509B9D6: movapd xmm4, xmmword ptr [eax + 0x1500f1b0] */
    _xmm[7] = xmm_ld(eax + 0x1500F5C0); /* 0x1509B9DE: movapd xmm7, xmmword ptr [eax + 0x1500f5c0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] & _s.u32[_k]; } /* 0x1509B9E6: andpd xmm6, xmm0 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x1509B9EA: subpd xmm0, xmm6 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509B9EE: mulpd xmm6, xmm4 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[6] = _d; } /* 0x1509B9F2: subpd xmm6, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509B9F6: addsd xmm7, xmm6 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509B9FA: mulpd xmm0, xmm4 */
    _xmm[4] = _xmm[0]; /* 0x1509B9FE: movapd xmm4, xmm0 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x1509BA02: addpd xmm0, xmm6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFu);
    ecx = ecx & 0xFFFu; /* 0x1509BA06: and ecx, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1509BA0C: sub ecx, 1 */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x7FDu */ /* 0x1509BA0F: cmp ecx, 0x7fd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509BABC; /* 0x1509BA15: ja 0x1509babc */
L_1509BA1B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x3FEu; /* 0x1509BA1B: sub ecx, 0x3fe */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1509BA21: add ecx, edx */
    _flag_k = FK_ADD;
    _xmm[6].f64[0] = (double)(int32_t)(ecx); /* 0x1509BA23: cvtsi2sd xmm6, ecx */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u64[0] = _d.u64[0]; _xmm[6].u64[1] = _s.u64[0]; } /* 0x1509BA27: unpcklpd xmm6, xmm6 */
    if (10u) _cf = (((ecx) >> 22) & 1u); /* 0x1509BA2B: shl ecx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((ecx << 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 10u; /* 0x1509BA2B: shl ecx, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1509BA2E: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = 0x10u; /* 0x1509BA30: mov ecx, 0x10 */
    edx = 0; /* 0x1509BA35: mov edx, 0 */
    /* cmp eax, 0 */ /* 0x1509BA3A: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { edx = ecx; } /* 0x1509BA3D: cmove edx, ecx */
    _xmm[1] = xmm_ld(0x1500F180); /* 0x1509BA40: movapd xmm1, xmmword ptr [0x1500f180] */
    _xmm[3] = _xmm[0]; /* 0x1509BA48: movapd xmm3, xmm0 */
    _xmm[2] = xmm_ld(0x1500F190); /* 0x1509BA4C: movapd xmm2, xmmword ptr [0x1500f190] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509BA54: mulpd xmm1, xmm0 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x1509BA58: mulpd xmm3, xmm3 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509BA5C: addpd xmm1, xmm2 */
    _xmm[2] = xmm_ld(0x1500F1A0); /* 0x1509BA60: movapd xmm2, xmmword ptr [0x1500f1a0] */
    { double _s = _xmm[3].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509BA68: mulsd xmm3, xmm3 */
    _xmm[5] = xmm_ld(0x1500F110); /* 0x1509BA6C: movapd xmm5, xmmword ptr [0x1500f110] */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509BA74: mulpd xmm6, xmm5 */
    _xmm[5] = xmm_ld(edx + 0x1500F120); /* 0x1509BA78: movapd xmm5, xmmword ptr [edx + 0x1500f120] */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] & _s.u32[_k]; } /* 0x1509BA80: andpd xmm4, xmm5 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509BA84: addpd xmm7, xmm6 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509BA88: addpd xmm7, xmm4 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509BA8C: mulpd xmm1, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509BA90: mulsd xmm3, xmm0 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509BA94: addpd xmm1, xmm2 */
    _xmm[6] = _xmm[7]; /* 0x1509BA98: movapd xmm6, xmm7 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u64[0] = _d.u64[1]; _xmm[6].u64[1] = _s.u64[1]; } /* 0x1509BA9C: unpckhpd xmm6, xmm6 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509BAA0: mulpd xmm1, xmm3 */
    _xmm[0] = _xmm[1]; /* 0x1509BAA4: movapd xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u64[0] = _d.u64[1]; _xmm[1].u64[1] = _s.u64[1]; } /* 0x1509BAA8: unpckhpd xmm1, xmm1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BAAC: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BAAF: addsd xmm0, xmm1 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BAB3: addsd xmm0, xmm6 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BAB7: addsd xmm0, xmm7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BABB: ret  */
L_1509BABC:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509BABC: movlpd xmm0, qword ptr [esp + 4] */
    _xmm[1] = xmm_ld(0x1500F150); /* 0x1509BAC2: movapd xmm1, xmmword ptr [0x1500f150] */
    { double _s0 = _xmm[0].f64[0]; _xmm[1].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[1].f64[0], _s0, 0); } /* 0x1509BACA: cmpeqsd xmm1, xmm0 */
    eax = (uint32_t)_xmm[1].u16[0]; /* 0x1509BACF: pextrw eax, xmm1, 0 */
    /* cmp eax, 0 */ /* 0x1509BAD4: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509BB2D; /* 0x1509BAD7: ja 0x1509bb2d */
L_1509BAD9:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1509BAD9: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509BB45; /* 0x1509BADC: je 0x1509bb45 */
L_1509BADE:
    /* cmp ecx, 0x7FEu */ /* 0x1509BADE: cmp ecx, 0x7fe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509BB5B; /* 0x1509BAE4: ja 0x1509bb5b */
L_1509BAE6:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509BAE6: movlpd xmm0, qword ptr [esp + 4] */
    _xmm[1] = xmm_ld(0x1500F0E0); /* 0x1509BAEC: movapd xmm1, xmmword ptr [0x1500f0e0] */
    _xmm[2] = xmm_ld(0x1500F140); /* 0x1509BAF4: movapd xmm2, xmmword ptr [0x1500f140] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509BAFC: andpd xmm0, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509BB00: orpd xmm0, xmm2 */
    { double _s0 = _xmm[0].f64[0]; _xmm[2].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[2].f64[0], _s0, 0); } /* 0x1509BB04: cmpeqsd xmm2, xmm0 */
    eax = (uint32_t)_xmm[2].u16[0]; /* 0x1509BB09: pextrw eax, xmm2, 0 */
    /* cmp eax, 0 */ /* 0x1509BB0E: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509BB1F; /* 0x1509BB11: je 0x1509bb1f */
L_1509BB13:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BB13: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x1500F178); /* 0x1509BB16: movlpd xmm0, qword ptr [0x1500f178] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BB1E: ret  */
L_1509BB1F:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509BB1F: movlpd xmm0, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BB25: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BB28: addsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BB2C: ret  */
L_1509BB2D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BB2D: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[2].u64[0] = MEM64(0x1500F140); /* 0x1509BB30: movlpd xmm2, qword ptr [0x1500f140] */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] / _s); } /* 0x1509BB38: divsd xmm2, xmm0 */
    _xmm[0].u64[0] = MEM64(0x1500F170); /* 0x1509BB3C: movlpd xmm0, qword ptr [0x1500f170] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BB44: ret  */
L_1509BB45:
    _xmm[1].u64[0] = MEM64(0x1500F160); /* 0x1509BB45: movlpd xmm1, qword ptr [0x1500f160] */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509BB4D: mulsd xmm0, xmm1 */
    edx = 0xFFFFFFCCu; /* 0x1509BB51: mov edx, 0xffffffcc */
    RECOMP_BACKEDGE();
    goto L_1509B98E; /* 0x1509BB56: jmp 0x1509b98e */
L_1509BB5B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1509BB5B: add ecx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    ecx = ecx & 0x7FFu; /* 0x1509BB5E: and ecx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x7FFu */ /* 0x1509BB64: cmp ecx, 0x7ff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509BB78; /* 0x1509BB6A: jae 0x1509bb78 */
L_1509BB6C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BB6C: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509BB6F: xorpd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x1509BB73: divsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BB77: ret  */
L_1509BB78:
    _xmm[2].u64[0] = MEM64(esp + 0x4); /* 0x1509BB78: movlpd xmm2, qword ptr [esp + 4] */
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509BB7E: movlpd xmm0, qword ptr [esp + 4] */
    eax = _xmm[2].u32[0]; /* 0x1509BB84: movd eax, xmm2 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x1509BB88: psrlq xmm2, 0x20 */
    ecx = _xmm[2].u32[0]; /* 0x1509BB8D: movd ecx, xmm2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    ecx = ecx & 0x000FFFFFu; /* 0x1509BB91: and ecx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1509BB97: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509BB99: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509BB6C; /* 0x1509BB9C: je 0x1509bb6c */
L_1509BB9E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BB9E: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BBA1: addsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BBA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509BBB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509BBB0u);

L_1509BBB0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509BBB0: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = 0; /* 0x1509BBB3: mov edx, 0 */
    MEM64(esp + 0x4) = _xmm[0].u64[0]; /* 0x1509BBB8: movlpd qword ptr [esp + 4], xmm0 */
L_1509BBBE:
    _xmm[5] = _xmm[0]; /* 0x1509BBBE: movapd xmm5, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509BBC2: unpcklpd xmm0, xmm0 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[5].u64[_k] >> _c); } /* 0x1509BBC6: psrlq xmm5, 0x34 */
    ecx = (uint32_t)_xmm[5].u16[0]; /* 0x1509BBCB: pextrw ecx, xmm5, 0 */
    _xmm[1] = xmm_ld(0x1500F9D0); /* 0x1509BBD0: movapd xmm1, xmmword ptr [0x1500f9d0] */
    _xmm[2] = xmm_ld(0x1500F9E0); /* 0x1509BBD8: movapd xmm2, xmmword ptr [0x1500f9e0] */
    _xmm[3] = xmm_ld(0x1500FA40); /* 0x1509BBE0: movapd xmm3, xmmword ptr [0x1500fa40] */
    _xmm[4] = xmm_ld(0x1500F9F0); /* 0x1509BBE8: movapd xmm4, xmmword ptr [0x1500f9f0] */
    _xmm[6] = xmm_ld(0x1500FA00); /* 0x1509BBF0: movapd xmm6, xmmword ptr [0x1500fa00] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509BBF8: andpd xmm0, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509BBFC: orpd xmm0, xmm3 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[4] = _d; } /* 0x1509BC00: addpd xmm4, xmm0 */
    eax = (uint32_t)_xmm[4].u16[0]; /* 0x1509BC04: pextrw eax, xmm4, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F0u);
    eax = eax & 0x7F0u; /* 0x1509BC09: and eax, 0x7f0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[4] = xmm_ld(eax + 0x1500FED0); /* 0x1509BC0E: movapd xmm4, xmmword ptr [eax + 0x1500fed0] */
    _xmm[7] = xmm_ld(eax + 0x1500FAC0); /* 0x1509BC16: movapd xmm7, xmmword ptr [eax + 0x1500fac0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] & _s.u32[_k]; } /* 0x1509BC1E: andpd xmm6, xmm0 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x1509BC22: subpd xmm0, xmm6 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509BC26: mulpd xmm6, xmm4 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[6] = _d; } /* 0x1509BC2A: subpd xmm6, xmm2 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509BC2E: addsd xmm7, xmm6 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509BC32: mulpd xmm0, xmm4 */
    _xmm[4] = _xmm[0]; /* 0x1509BC36: movapd xmm4, xmm0 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x1509BC3A: addpd xmm0, xmm6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFu);
    ecx = ecx & 0xFFFu; /* 0x1509BC3E: and ecx, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1509BC44: sub ecx, 1 */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x7FDu */ /* 0x1509BC47: cmp ecx, 0x7fd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509BD04; /* 0x1509BC4D: ja 0x1509bd04 */
L_1509BC53:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x3FEu; /* 0x1509BC53: sub ecx, 0x3fe */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1509BC59: add ecx, edx */
    _flag_k = FK_ADD;
    _xmm[6].f64[0] = (double)(int32_t)(ecx); /* 0x1509BC5B: cvtsi2sd xmm6, ecx */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u64[0] = _d.u64[0]; _xmm[6].u64[1] = _s.u64[0]; } /* 0x1509BC5F: unpcklpd xmm6, xmm6 */
    if (10u) _cf = (((ecx) >> 22) & 1u); /* 0x1509BC63: shl ecx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((ecx << 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 10u; /* 0x1509BC63: shl ecx, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1509BC66: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = 0x10u; /* 0x1509BC68: mov ecx, 0x10 */
    edx = 0; /* 0x1509BC6D: mov edx, 0 */
    /* cmp eax, 0 */ /* 0x1509BC72: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { edx = ecx; } /* 0x1509BC75: cmove edx, ecx */
    _xmm[1] = xmm_ld(0x1500FA80); /* 0x1509BC78: movapd xmm1, xmmword ptr [0x1500fa80] */
    _xmm[3] = _xmm[0]; /* 0x1509BC80: movapd xmm3, xmm0 */
    _xmm[2] = xmm_ld(0x1500FA90); /* 0x1509BC84: movapd xmm2, xmmword ptr [0x1500fa90] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509BC8C: mulpd xmm1, xmm0 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x1509BC90: mulpd xmm3, xmm3 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509BC94: addpd xmm1, xmm2 */
    _xmm[2] = xmm_ld(0x1500FAA0); /* 0x1509BC98: movapd xmm2, xmmword ptr [0x1500faa0] */
    { double _s = _xmm[3].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509BCA0: mulsd xmm3, xmm3 */
    _xmm[5] = xmm_ld(0x1500FA10); /* 0x1509BCA4: movapd xmm5, xmmword ptr [0x1500fa10] */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509BCAC: mulpd xmm6, xmm5 */
    _xmm[5] = xmm_ld(edx + 0x1500FA20); /* 0x1509BCB0: movapd xmm5, xmmword ptr [edx + 0x1500fa20] */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] & _s.u32[_k]; } /* 0x1509BCB8: andpd xmm4, xmm5 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509BCBC: addpd xmm7, xmm6 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509BCC0: addpd xmm7, xmm4 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509BCC4: mulpd xmm1, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509BCC8: mulsd xmm3, xmm0 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509BCCC: addpd xmm1, xmm2 */
    _xmm[2] = xmm_ld(0x1500FAB0); /* 0x1509BCD0: movapd xmm2, xmmword ptr [0x1500fab0] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509BCD8: mulpd xmm2, xmm0 */
    _xmm[6] = _xmm[7]; /* 0x1509BCDC: movapd xmm6, xmm7 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u64[0] = _d.u64[1]; _xmm[6].u64[1] = _s.u64[1]; } /* 0x1509BCE0: unpckhpd xmm6, xmm6 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509BCE4: mulpd xmm1, xmm3 */
    _xmm[0] = _xmm[1]; /* 0x1509BCE8: movapd xmm0, xmm1 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509BCEC: addpd xmm1, xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[1]; _xmm[0].u64[1] = _s.u64[1]; } /* 0x1509BCF0: unpckhpd xmm0, xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BCF4: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BCF7: addsd xmm0, xmm1 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BCFB: addsd xmm0, xmm6 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BCFF: addsd xmm0, xmm7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BD03: ret  */
L_1509BD04:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509BD04: movlpd xmm0, qword ptr [esp + 4] */
    _xmm[1] = xmm_ld(0x1500FA50); /* 0x1509BD0A: movapd xmm1, xmmword ptr [0x1500fa50] */
    { double _s0 = _xmm[0].f64[0]; _xmm[1].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[1].f64[0], _s0, 0); } /* 0x1509BD12: cmpeqsd xmm1, xmm0 */
    eax = (uint32_t)_xmm[1].u16[0]; /* 0x1509BD17: pextrw eax, xmm1, 0 */
    /* cmp eax, 0 */ /* 0x1509BD1C: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509BD75; /* 0x1509BD1F: ja 0x1509bd75 */
L_1509BD21:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1509BD21: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509BD8D; /* 0x1509BD24: je 0x1509bd8d */
L_1509BD26:
    /* cmp ecx, 0x7FEu */ /* 0x1509BD26: cmp ecx, 0x7fe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509BDA3; /* 0x1509BD2C: ja 0x1509bda3 */
L_1509BD2E:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509BD2E: movlpd xmm0, qword ptr [esp + 4] */
    _xmm[1] = xmm_ld(0x1500F9D0); /* 0x1509BD34: movapd xmm1, xmmword ptr [0x1500f9d0] */
    _xmm[2] = xmm_ld(0x1500FA40); /* 0x1509BD3C: movapd xmm2, xmmword ptr [0x1500fa40] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509BD44: andpd xmm0, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509BD48: orpd xmm0, xmm2 */
    { double _s0 = _xmm[0].f64[0]; _xmm[2].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[2].f64[0], _s0, 0); } /* 0x1509BD4C: cmpeqsd xmm2, xmm0 */
    eax = (uint32_t)_xmm[2].u16[0]; /* 0x1509BD51: pextrw eax, xmm2, 0 */
    /* cmp eax, 0 */ /* 0x1509BD56: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509BD67; /* 0x1509BD59: je 0x1509bd67 */
L_1509BD5B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BD5B: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x1500FA78); /* 0x1509BD5E: movlpd xmm0, qword ptr [0x1500fa78] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BD66: ret  */
L_1509BD67:
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509BD67: movlpd xmm0, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BD6D: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BD70: addsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BD74: ret  */
L_1509BD75:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BD75: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[2].u64[0] = MEM64(0x1500FA40); /* 0x1509BD78: movlpd xmm2, qword ptr [0x1500fa40] */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] / _s); } /* 0x1509BD80: divsd xmm2, xmm0 */
    _xmm[0].u64[0] = MEM64(0x1500FA70); /* 0x1509BD84: movlpd xmm0, qword ptr [0x1500fa70] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BD8C: ret  */
L_1509BD8D:
    _xmm[1].u64[0] = MEM64(0x1500FA60); /* 0x1509BD8D: movlpd xmm1, qword ptr [0x1500fa60] */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509BD95: mulsd xmm0, xmm1 */
    edx = 0xFFFFFFCCu; /* 0x1509BD99: mov edx, 0xffffffcc */
    RECOMP_BACKEDGE();
    goto L_1509BBBE; /* 0x1509BD9E: jmp 0x1509bbbe */
L_1509BDA3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1509BDA3: add ecx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    ecx = ecx & 0x7FFu; /* 0x1509BDA6: and ecx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x7FFu */ /* 0x1509BDAC: cmp ecx, 0x7ff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509BDC0; /* 0x1509BDB2: jae 0x1509bdc0 */
L_1509BDB4:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BDB4: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509BDB7: xorpd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x1509BDBB: divsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BDBF: ret  */
L_1509BDC0:
    _xmm[2].u64[0] = MEM64(esp + 0x4); /* 0x1509BDC0: movlpd xmm2, qword ptr [esp + 4] */
    _xmm[0].u64[0] = MEM64(esp + 0x4); /* 0x1509BDC6: movlpd xmm0, qword ptr [esp + 4] */
    eax = _xmm[2].u32[0]; /* 0x1509BDCC: movd eax, xmm2 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x1509BDD0: psrlq xmm2, 0x20 */
    ecx = _xmm[2].u32[0]; /* 0x1509BDD5: movd ecx, xmm2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    ecx = ecx & 0x000FFFFFu; /* 0x1509BDD9: and ecx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1509BDDF: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509BDE1: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509BDB4; /* 0x1509BDE4: je 0x1509bdb4 */
L_1509BDE6:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509BDE6: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BDE9: addsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BDED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509BE00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509BE00u);

L_1509BE00:
    _xmm[4].u64[0] = MEM32(0x15010748); _xmm[4].u64[1] = 0; /* 0x1509BE00: movss xmm4, dword ptr [0x15010748] */
    _xmm[1].u64[0] = MEM64(0x15010720); /* 0x1509BE08: movlpd xmm1, qword ptr [0x15010720] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509BE10: pand xmm0, xmm4 */
    _xmm[3].u64[0] = MEM64(0x15010728); /* 0x1509BE14: movlpd xmm3, qword ptr [0x15010728] */
    _xmm[7] = _xmm[0]; /* 0x1509BE1C: movdqa xmm7, xmm0 */
    eax = (uint32_t)_xmm[0].u16[1]; /* 0x1509BE20: pextrw eax, xmm0, 1 */
    _xmm[4] = _xmm[0]; /* 0x1509BE25: movaps xmm4, xmm0 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509BE28: psllq xmm0, 0x1d */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509BE2D: andpd xmm1, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x1509BE31: orpd xmm1, xmm3 */
    _xmm[5].u64[0] = MEM64(0x150102E0); /* 0x1509BE35: movlpd xmm5, qword ptr [0x150102e0] */
    _xmm[6].u64[0] = MEM64(0x150102E8); /* 0x1509BE3D: movlpd xmm6, qword ptr [0x150102e8] */
    _xmm[2].u64[0] = MEM64(0x150102F0); /* 0x1509BE45: movlpd xmm2, qword ptr [0x150102f0] */
    edx = eax; /* 0x1509BE4D: mov edx, eax */
    ecx = 0x7F7Fu; /* 0x1509BE4F: mov ecx, 0x7f7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509BE54: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x80u; /* 0x1509BE56: sub edx, 0x80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x1509BE5C: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x8000u */ /* 0x1509BE5E: cmp edx, 0x8000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509BEF1; /* 0x1509BE64: jae 0x1509bef1 */
L_1509BE6A:
    ecx = 0x3F3Fu; /* 0x1509BE6A: mov ecx, 0x3f3f */
L_1509BE6F:
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x1509BE6F: movd xmm0, ecx */
    _xmm[3].u64[0] = MEM64(0x15010510); /* 0x1509BE73: movlpd xmm3, qword ptr [0x15010510] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    eax = eax & 0x7Fu; /* 0x1509BE7B: and eax, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1509BE7E: add eax, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEu);
    eax = eax & 0xFEu; /* 0x1509BE81: and eax, 0xfe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509BE86: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509BE88: add eax, eax */
    _flag_k = FK_ADD;
    _xmm[7].u64[0] = MEM64(eax + 0x15010510); /* 0x1509BE8A: movlpd xmm7, qword ptr [eax + 0x15010510] */
    { uint64_t _c = 16u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x1509BE92: psrlq xmm4, 0x10 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] -= _s.u32[_k]; } /* 0x1509BE97: psubd xmm4, xmm0 */
    { uint64_t _c = 7u; for (int _k = 0; _k < 4; _k++) _xmm[4].i32[_k] = _xmm[4].i32[_k] >> (_c > 31 ? 31 : (int)_c); } /* 0x1509BE9B: psrad xmm4, 7 */
    { int32_t _a = (int32_t)_xmm[4].u32[0], _b = (int32_t)_xmm[4].u32[1]; _xmm[4].f64[0] = _a; _xmm[4].f64[1] = _b; } /* 0x1509BEA0: cvtdq2pd xmm4, xmm4 */
    _xmm[0].u64[0] = MEM64(eax + 0x15010300); /* 0x1509BEA4: movlpd xmm0, qword ptr [eax + 0x15010300] */
    { double _s = _xmm[7].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509BEAC: mulsd xmm1, xmm7 */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509BEB0: subsd xmm1, xmm3 */
    _xmm[7].u64[0] = _xmm[1].u64[0]; /* 0x1509BEB4: movsd xmm7, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509BEB8: mulsd xmm5, xmm1 */
    _xmm[3].u64[0] = _xmm[1].u64[0]; /* 0x1509BEBC: movsd xmm3, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509BEC0: mulsd xmm1, xmm1 */
    { double _s = _xmm[6].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509BEC4: addsd xmm5, xmm6 */
    { double _s = sse_f64(MEM64(0x15010730)); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509BEC8: mulsd xmm4, qword ptr [0x15010730] */
    { double _s = _xmm[1].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509BED0: mulsd xmm7, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509BED4: mulsd xmm2, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509BED8: addsd xmm2, xmm3 */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509BEDC: mulsd xmm7, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BEE0: addsd xmm0, xmm4 */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509BEE4: addsd xmm2, xmm7 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509BEE8: addsd xmm0, xmm2 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x1509BEEC: cvtpd2ps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BEF0: ret  */
L_1509BEF1:
    edx = _xmm[7].u32[0]; /* 0x1509BEF1: movd edx, xmm7 */
    /* cmp edx, 0x80000000u */ /* 0x1509BEF5: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509BF34; /* 0x1509BEFB: jae 0x1509bf34 */
L_1509BEFD:
    /* cmp edx, 0x7F800000u */ /* 0x1509BEFD: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509BF70; /* 0x1509BF03: jae 0x1509bf70 */
L_1509BF05:
    /* cmp edx, 0 */ /* 0x1509BF05: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509BF5B; /* 0x1509BF08: je 0x1509bf5b */
L_1509BF0A:
    { float _s = sse_f32(MEM32(0x15010738)); _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x1509BF0A: mulss xmm4, dword ptr [0x15010738] */
    _xmm[1].u64[0] = MEM64(0x15010720); /* 0x1509BF12: movlpd xmm1, qword ptr [0x15010720] */
    eax = (uint32_t)_xmm[4].u16[1]; /* 0x1509BF1A: pextrw eax, xmm4, 1 */
    { float _a = _xmm[4].f32[0], _b = _xmm[4].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x1509BF1F: cvtps2pd xmm0, xmm4 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509BF22: andpd xmm1, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x1509BF26: orpd xmm1, xmm3 */
    ecx = 0x5F3Fu; /* 0x1509BF2A: mov ecx, 0x5f3f */
    RECOMP_BACKEDGE();
    goto L_1509BE6F; /* 0x1509BF2F: jmp 0x1509be6f */
L_1509BF34:
    /* cmp edx, 0x80000000u */ /* 0x1509BF34: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509BF5B; /* 0x1509BF3A: je 0x1509bf5b */
L_1509BF3C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509BF3C: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x7F800001u */ /* 0x1509BF42: cmp edx, 0x7f800001 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509BF70; /* 0x1509BF48: jae 0x1509bf70 */
L_1509BF4A:
    _xmm[0].u32[0] = _xmm[7].u32[0]; /* 0x1509BF4A: movss xmm0, xmm7 */
    _xmm[1].u64[0] = MEM32(0x1501073C); _xmm[1].u64[1] = 0; /* 0x1509BF4E: movss xmm1, dword ptr [0x1501073c] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509BF56: addss xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BF5A: ret  */
L_1509BF5B:
    _xmm[1].u64[0] = MEM32(0x15010744); _xmm[1].u64[1] = 0; /* 0x1509BF5B: movss xmm1, dword ptr [0x15010744] */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x1509BF63: divss xmm1, xmm7 */
    _xmm[0].u64[0] = MEM32(0x15010740); _xmm[0].u64[1] = 0; /* 0x1509BF67: movss xmm0, dword ptr [0x15010740] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BF6F: ret  */
L_1509BF70:
    _xmm[0].u32[0] = _xmm[7].u32[0]; /* 0x1509BF70: movss xmm0, xmm7 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509BF74: addss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509BF78: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509BF80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509BF80u);

L_1509BF80:
    _xmm[4].u64[0] = MEM32(0x15010BB8); _xmm[4].u64[1] = 0; /* 0x1509BF80: movss xmm4, dword ptr [0x15010bb8] */
    _xmm[7].u32[0] = _xmm[0].u32[0]; /* 0x1509BF88: movss xmm7, xmm0 */
    _xmm[1].u64[0] = MEM64(0x15010B90); /* 0x1509BF8C: movlpd xmm1, qword ptr [0x15010b90] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509BF94: pand xmm0, xmm4 */
    _xmm[3].u64[0] = MEM64(0x15010B98); /* 0x1509BF98: movlpd xmm3, qword ptr [0x15010b98] */
    eax = (uint32_t)_xmm[0].u16[1]; /* 0x1509BFA0: pextrw eax, xmm0, 1 */
    _xmm[4] = _xmm[0]; /* 0x1509BFA5: movaps xmm4, xmm0 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509BFA8: psllq xmm0, 0x1d */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509BFAD: andpd xmm1, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x1509BFB1: orpd xmm1, xmm3 */
    _xmm[5].u64[0] = MEM64(0x15010750); /* 0x1509BFB5: movlpd xmm5, qword ptr [0x15010750] */
    _xmm[6].u64[0] = MEM64(0x15010758); /* 0x1509BFBD: movlpd xmm6, qword ptr [0x15010758] */
    _xmm[2].u64[0] = MEM64(0x15010760); /* 0x1509BFC5: movlpd xmm2, qword ptr [0x15010760] */
    edx = eax; /* 0x1509BFCD: mov edx, eax */
    ecx = 0x7F7Fu; /* 0x1509BFCF: mov ecx, 0x7f7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509BFD4: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x80u; /* 0x1509BFD6: sub edx, 0x80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x1509BFDC: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x8000u */ /* 0x1509BFDE: cmp edx, 0x8000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C071; /* 0x1509BFE4: jae 0x1509c071 */
L_1509BFEA:
    ecx = 0x3F3Fu; /* 0x1509BFEA: mov ecx, 0x3f3f */
L_1509BFEF:
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x1509BFEF: movd xmm0, ecx */
    _xmm[3].u64[0] = MEM64(0x15010980); /* 0x1509BFF3: movlpd xmm3, qword ptr [0x15010980] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    eax = eax & 0x7Fu; /* 0x1509BFFB: and eax, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1509BFFE: add eax, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEu);
    eax = eax & 0xFEu; /* 0x1509C001: and eax, 0xfe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C006: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C008: add eax, eax */
    _flag_k = FK_ADD;
    _xmm[7].u64[0] = MEM64(eax + 0x15010980); /* 0x1509C00A: movlpd xmm7, qword ptr [eax + 0x15010980] */
    { uint64_t _c = 16u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x1509C012: psrlq xmm4, 0x10 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] -= _s.u32[_k]; } /* 0x1509C017: psubd xmm4, xmm0 */
    { uint64_t _c = 7u; for (int _k = 0; _k < 4; _k++) _xmm[4].i32[_k] = _xmm[4].i32[_k] >> (_c > 31 ? 31 : (int)_c); } /* 0x1509C01B: psrad xmm4, 7 */
    { int32_t _a = (int32_t)_xmm[4].u32[0], _b = (int32_t)_xmm[4].u32[1]; _xmm[4].f64[0] = _a; _xmm[4].f64[1] = _b; } /* 0x1509C020: cvtdq2pd xmm4, xmm4 */
    _xmm[0].u64[0] = MEM64(eax + 0x15010770); /* 0x1509C024: movlpd xmm0, qword ptr [eax + 0x15010770] */
    { double _s = _xmm[7].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509C02C: mulsd xmm1, xmm7 */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509C030: subsd xmm1, xmm3 */
    _xmm[7].u64[0] = _xmm[1].u64[0]; /* 0x1509C034: movsd xmm7, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509C038: mulsd xmm5, xmm1 */
    _xmm[3].u64[0] = _xmm[1].u64[0]; /* 0x1509C03C: movsd xmm3, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509C040: mulsd xmm1, xmm1 */
    { double _s = _xmm[6].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509C044: addsd xmm5, xmm6 */
    { double _s = sse_f64(MEM64(0x15010BA0)); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509C048: mulsd xmm4, qword ptr [0x15010ba0] */
    { double _s = _xmm[1].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509C050: mulsd xmm7, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509C054: mulsd xmm2, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509C058: addsd xmm2, xmm3 */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509C05C: mulsd xmm7, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C060: addsd xmm0, xmm4 */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509C064: addsd xmm2, xmm7 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C068: addsd xmm0, xmm2 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x1509C06C: cvtpd2ps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C070: ret  */
L_1509C071:
    edx = _xmm[7].u32[0]; /* 0x1509C071: movd edx, xmm7 */
    /* cmp edx, 0x80000000u */ /* 0x1509C075: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C0B4; /* 0x1509C07B: jae 0x1509c0b4 */
L_1509C07D:
    /* cmp edx, 0x7F800000u */ /* 0x1509C07D: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C0F0; /* 0x1509C083: jae 0x1509c0f0 */
L_1509C085:
    /* cmp edx, 0 */ /* 0x1509C085: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C0DB; /* 0x1509C088: je 0x1509c0db */
L_1509C08A:
    { float _s = sse_f32(MEM32(0x15010BA8)); _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x1509C08A: mulss xmm4, dword ptr [0x15010ba8] */
    _xmm[1].u64[0] = MEM64(0x15010B90); /* 0x1509C092: movlpd xmm1, qword ptr [0x15010b90] */
    eax = (uint32_t)_xmm[4].u16[1]; /* 0x1509C09A: pextrw eax, xmm4, 1 */
    { float _a = _xmm[4].f32[0], _b = _xmm[4].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x1509C09F: cvtps2pd xmm0, xmm4 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509C0A2: andpd xmm1, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x1509C0A6: orpd xmm1, xmm3 */
    ecx = 0x5F3Fu; /* 0x1509C0AA: mov ecx, 0x5f3f */
    RECOMP_BACKEDGE();
    goto L_1509BFEF; /* 0x1509C0AF: jmp 0x1509bfef */
L_1509C0B4:
    /* cmp edx, 0x80000000u */ /* 0x1509C0B4: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C0DB; /* 0x1509C0BA: je 0x1509c0db */
L_1509C0BC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509C0BC: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x7F800001u */ /* 0x1509C0C2: cmp edx, 0x7f800001 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C0F0; /* 0x1509C0C8: jae 0x1509c0f0 */
L_1509C0CA:
    _xmm[0].u32[0] = _xmm[7].u32[0]; /* 0x1509C0CA: movss xmm0, xmm7 */
    _xmm[1].u64[0] = MEM32(0x15010BAC); _xmm[1].u64[1] = 0; /* 0x1509C0CE: movss xmm1, dword ptr [0x15010bac] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509C0D6: addss xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C0DA: ret  */
L_1509C0DB:
    _xmm[1].u64[0] = MEM32(0x15010BB4); _xmm[1].u64[1] = 0; /* 0x1509C0DB: movss xmm1, dword ptr [0x15010bb4] */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x1509C0E3: divss xmm1, xmm7 */
    _xmm[0].u64[0] = MEM32(0x15010BB0); _xmm[0].u64[1] = 0; /* 0x1509C0E7: movss xmm0, dword ptr [0x15010bb0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C0EF: ret  */
L_1509C0F0:
    _xmm[0].u32[0] = _xmm[7].u32[0]; /* 0x1509C0F0: movss xmm0, xmm7 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509C0F4: addss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C0F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509C100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509C100u);

L_1509C100:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1509C100: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _xmm[7].u64[0] = MEM64(0x15014440); /* 0x1509C103: movlpd xmm7, qword ptr [0x15014440] */
    MEM64(esp + 0x4) = _xmm[0].u64[0]; /* 0x1509C10B: movlpd qword ptr [esp + 4], xmm0 */
    _xmm[2].u64[0] = MEM64(0x15014450); /* 0x1509C111: movlpd xmm2, qword ptr [0x15014450] */
    MEM64(esp + 0xC) = _xmm[1].u64[0]; /* 0x1509C119: movlpd qword ptr [esp + 0xc], xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509C11F: andpd xmm7, xmm0 */
    _xmm[4].u64[0] = _xmm[0].u64[0]; /* 0x1509C123: movsd xmm4, xmm0 */
    { uint64_t _c = 44u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509C127: psrlq xmm0, 0x2c */
    eax = (uint32_t)_xmm[0].u16[0]; /* 0x1509C12C: pextrw eax, xmm0, 0 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] | _s.u32[_k]; } /* 0x1509C131: orpd xmm7, xmm2 */
    ecx = (uint32_t)_xmm[4].u16[3]; /* 0x1509C135: pextrw ecx, xmm4, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509C13A: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1509C13F: add eax, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FEu);
    eax = eax & 0x1FEu; /* 0x1509C142: and eax, 0x1fe */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = sse_f64(MEM64(eax * 4 + 0x15010BC0)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509C147: mulsd xmm7, qword ptr [eax*4 + 0x15010bc0] */
    _xmm[5].u64[0] = MEM64(eax * 4 + 0x15010BC0); /* 0x1509C150: movlpd xmm5, qword ptr [eax*4 + 0x15010bc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C159: add eax, eax */
    _flag_k = FK_ADD;
    _xmm[6] = xmm_ld(eax * 4 + 0x15010FD0); /* 0x1509C15B: movapd xmm6, xmmword ptr [eax*4 + 0x15010fd0] */
    edx = 0x7FEFu; /* 0x1509C164: mov edx, 0x7fef */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1509C169: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x10u; /* 0x1509C16B: sub ecx, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x1509C16E: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x80000000u */ /* 0x1509C170: cmp ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C43A; /* 0x1509C176: jae 0x1509c43a */
L_1509C17C:
    ecx = 0; /* 0x1509C17C: mov ecx, 0 */
    edx = 0x0003FE7Fu; /* 0x1509C181: mov edx, 0x3fe7f */
L_1509C186:
    _xmm[1].u64[0] = (uint32_t)(edx); _xmm[1].u64[1] = 0; /* 0x1509C186: movd xmm1, edx */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] -= _s.u64[_k]; } /* 0x1509C18A: psubq xmm0, xmm1 */
    { uint64_t _c = 8u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509C18E: psrlq xmm0, 8 */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x1509C193: cvtdq2pd xmm0, xmm0 */
    _xmm[1].u64[0] = MEM64(0x15014498); /* 0x1509C197: movlpd xmm1, qword ptr [0x15014498] */
    _xmm[3].u64[0] = _xmm[7].u64[0]; /* 0x1509C19F: movsd xmm3, xmm7 */
    { uint64_t _c = 38u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x1509C1A3: psrlq xmm7, 0x26 */
    eax = (uint32_t)_xmm[7].u16[0]; /* 0x1509C1A8: pextrw eax, xmm7, 0 */
    { xmm_t _s = xmm_ld(0x15014440); for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] & _s.u32[_k]; } /* 0x1509C1AD: andpd xmm4, xmmword ptr [0x15014440] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509C1B5: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1509C1BA: add eax, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FEu);
    eax = eax & 0x1FEu; /* 0x1509C1BD: and eax, 0x1fe */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = sse_f64(MEM64(eax * 4 + 0x150117E0)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509C1C2: mulsd xmm3, qword ptr [eax*4 + 0x150117e0] */
    { double _s = sse_f64(MEM64(eax * 4 + 0x150117E0)); _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509C1CB: mulsd xmm5, qword ptr [eax*4 + 0x150117e0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C1D4: add eax, eax */
    _flag_k = FK_ADD;
    { double _s0 = sse_f64(MEM64(eax * 4 + 0x15011BF0)); double _s1 = sse_f64(MEM64(eax * 4 + 0x15011BF0 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x1509C1D6: addpd xmm6, xmmword ptr [eax*4 + 0x15011bf0] */
    { xmm_t _s = xmm_ld(0x15014450); for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] | _s.u32[_k]; } /* 0x1509C1DF: orpd xmm4, xmmword ptr [0x15014450] */
    { double _s = _xmm[0].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509C1E7: addsd xmm6, xmm0 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509C1EB: andpd xmm1, xmm4 */
    _xmm[2].u64[0] = _xmm[3].u64[0]; /* 0x1509C1EF: movsd xmm2, xmm3 */
    { uint64_t _c = 31u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] >> _c); } /* 0x1509C1F3: psrlq xmm3, 0x1f */
    eax = (uint32_t)_xmm[3].u16[0]; /* 0x1509C1F8: pextrw eax, xmm3, 0 */
    _xmm[0].u64[0] = MEM64(0x15014498); /* 0x1509C1FD: movlpd xmm0, qword ptr [0x15014498] */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509C205: subsd xmm4, xmm1 */
    _xmm[7].u64[0] = MEM64(0x150144A0); /* 0x1509C209: movlpd xmm7, qword ptr [0x150144a0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFu);
    eax = eax & 0x1FFu; /* 0x1509C211: and eax, 0x1ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1509C216: add eax, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FEu);
    eax = eax & 0x3FEu; /* 0x1509C219: and eax, 0x3fe */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = sse_f64(MEM64(eax * 4 + 0x15012400)); _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509C21E: mulsd xmm5, qword ptr [eax*4 + 0x15012400] */
    { double _s = sse_f64(MEM64(eax * 4 + 0x15012400)); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509C227: mulsd xmm2, qword ptr [eax*4 + 0x15012400] */
    { double _s0 = sse_f64(MEM64(eax * 8 + 0x15012C10)); double _s1 = sse_f64(MEM64(eax * 8 + 0x15012C10 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x1509C230: addpd xmm6, xmmword ptr [eax*8 + 0x15012c10] */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509C239: andpd xmm0, xmm5 */
    { double _s = _xmm[0].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x1509C23D: subsd xmm5, xmm0 */
    { double _s = _xmm[2].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509C241: addsd xmm7, xmm2 */
    _xmm[3].u64[0] = _xmm[0].u64[0]; /* 0x1509C245: movsd xmm3, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509C249: mulsd xmm0, xmm1 */
    { double _s = _xmm[5].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509C24D: mulsd xmm1, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509C251: mulsd xmm3, xmm4 */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x1509C255: subsd xmm2, xmm0 */
    { double _s = _xmm[5].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509C259: mulsd xmm4, xmm5 */
    _xmm[0].u64[0] = _xmm[6].u64[0]; /* 0x1509C25D: movsd xmm0, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x1509C261: subsd xmm2, xmm1 */
    { double _s = _xmm[7].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509C265: addsd xmm6, xmm7 */
    _xmm[1].u64[0] = MEM64(esp + 0xC); /* 0x1509C269: movlpd xmm1, qword ptr [esp + 0xc] */
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509C26F: pextrw eax, xmm1, 3 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x1509C274: subsd xmm2, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509C278: subsd xmm0, xmm6 */
    _xmm[3].u64[0] = MEM64(0x15014498); /* 0x1509C27C: movlpd xmm3, qword ptr [0x15014498] */
    edx = (uint32_t)_xmm[6].u16[3]; /* 0x1509C284: pextrw edx, xmm6, 3 */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x1509C289: subsd xmm2, xmm4 */
    _xmm[4].u64[0] = _xmm[6].u64[0]; /* 0x1509C28D: movsd xmm4, xmm6 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C291: addsd xmm0, xmm7 */
    { double _s = _xmm[2].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x1509C295: subsd xmm7, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] - _s); } /* 0x1509C299: subsd xmm6, xmm2 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u64[0] = _d.u64[0]; _xmm[7].u64[1] = _s.u64[0]; } /* 0x1509C29D: unpcklpd xmm7, xmm7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509C2A1: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF0u */ /* 0x1509C2A6: cmp eax, 0x7ff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C7AA; /* 0x1509C2AB: jae 0x1509c7aa */
L_1509C2B1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF0u);
    edx = edx & 0x7FF0u; /* 0x1509C2B1: and edx, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3FF0u; /* 0x1509C2B7: sub eax, 0x3ff0 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1509C2BC: add eax, edx */
    _flag_k = FK_ADD;
    edx = 0x40A0u; /* 0x1509C2BE: mov edx, 0x40a0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1509C2C3: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3C70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3C70u; /* 0x1509C2C5: sub eax, 0x3c70 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509C2CA: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x80000000u */ /* 0x1509C2CC: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509CB00; /* 0x1509C2D2: jae 0x1509cb00 */
L_1509C2D8:
    { double _s = _xmm[6].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509C2D8: subsd xmm4, xmm6 */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x1509C2DC: subsd xmm2, xmm4 */
    _xmm[4].u64[0] = MEM64(0x15014498); /* 0x1509C2E0: movlpd xmm4, qword ptr [0x15014498] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509C2E8: andpd xmm3, xmm1 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] & _s.u32[_k]; } /* 0x1509C2EC: andpd xmm4, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509C2F0: subsd xmm0, xmm2 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1509C2F4: xorpd xmm2, xmm2 */
    edx = 0x4060u; /* 0x1509C2F8: mov edx, 0x4060 */
    _xmm[2].u16[3] = (uint16_t)(edx); /* 0x1509C2FD: pinsrw xmm2, edx, 3 */
    _xmm[5].u64[0] = _xmm[3].u64[0]; /* 0x1509C302: movsd xmm5, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509C306: mulsd xmm3, xmm4 */
    { double _s = _xmm[4].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] - _s); } /* 0x1509C30A: subsd xmm6, xmm4 */
    { double _s = _xmm[5].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509C30E: subsd xmm1, xmm5 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509C312: mulsd xmm3, xmm2 */
    { double _s = _xmm[6].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509C316: mulsd xmm5, xmm6 */
    _xmm[2] = xmm_ld(0x15013C20); /* 0x1509C31A: movapd xmm2, xmmword ptr [0x15013c20] */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509C322: mulsd xmm4, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[3].f64[0], 0); /* 0x1509C326: cvtsd2si eax, xmm3 */
    { double _s = _xmm[1].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509C32A: mulsd xmm6, xmm1 */
    _xmm[1] = xmm_ld(0x15013C30); /* 0x1509C32E: movapd xmm1, xmmword ptr [0x15013c30] */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509C336: addsd xmm5, xmm4 */
    { xmm_t _s = _xmm[6]; _xmm[4].u32[0] = _s.u32[2]; _xmm[4].u32[1] = _s.u32[3]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1509C33A: pshufd xmm4, xmm6, 0xee */
    { double _s = _xmm[6].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509C33F: addsd xmm5, xmm6 */
    edx = 0x0001FF7Fu; /* 0x1509C343: mov edx, 0x1ff7f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1509C348: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0001E1FFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0001E1FFu; /* 0x1509C34A: add eax, 0x1e1ff */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509C34F: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0001E1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x0001E1FFu; /* 0x1509C351: sub eax, 0x1e1ff */
    _flag_k = FK_CMP;
    /* cmp edx, 0 */ /* 0x1509C356: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1509C90E; /* 0x1509C359: jle 0x1509c90e */
L_1509C35F:
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509C35F: addsd xmm4, xmm0 */
    _xmm[0].f64[0] = (double)(int32_t)(eax); /* 0x1509C363: cvtsi2sd xmm0, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1509C367: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    eax = eax & 0x7Fu; /* 0x1509C369: and eax, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF80u);
    ecx = ecx & 0xFFFFFF80u; /* 0x1509C36C: and ecx, 0xffffff80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0001FF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x0001FF80u; /* 0x1509C36F: add ecx, 0x1ff80 */
    _flag_k = FK_ADD;
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509C375: mulpd xmm2, xmm7 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509C379: mulpd xmm7, xmm7 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509C37D: subsd xmm0, xmm3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C381: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C383: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C385: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C387: add eax, eax */
    _flag_k = FK_ADD;
    _xmm[3] = xmm_ld(eax + 0x15013C40); /* 0x1509C389: movapd xmm3, xmmword ptr [eax + 0x15013c40] */
    _xmm[6] = xmm_ld(0x15014470); /* 0x1509C391: movapd xmm6, xmmword ptr [0x15014470] */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509C399: mulpd xmm1, xmm7 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[2] = _d; } /* 0x1509C39D: addpd xmm2, xmm1 */
    { xmm_t _s = _xmm[2]; _xmm[1].u32[0] = _s.u32[2]; _xmm[1].u32[1] = _s.u32[3]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1509C3A1: pshufd xmm1, xmm2, 0xee */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509C3A6: mulsd xmm2, xmm7 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509C3AA: xorpd xmm7, xmm7 */
    edx = 0xBF80u; /* 0x1509C3AE: mov edx, 0xbf80 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509C3B3: addsd xmm2, xmm1 */
    _xmm[7].u16[3] = (uint16_t)(edx); /* 0x1509C3B7: pinsrw xmm7, edx, 3 */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509C3BC: addsd xmm2, xmm4 */
    _xmm[4].u64[0] = MEM64(0x15014490); /* 0x1509C3C0: movlpd xmm4, qword ptr [0x15014490] */
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x1509C3C8: movd xmm1, ecx */
    { double _s = sse_f64(MEM64(esp + 0xC)); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509C3CC: mulsd xmm2, qword ptr [esp + 0xc] */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509C3D2: mulsd xmm0, xmm7 */
    { uint64_t _c = 45u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509C3D6: psllq xmm1, 0x2d */
    { xmm_t _s = _xmm[1]; _xmm[1].u32[0] = _s.u32[0]; _xmm[1].u32[1] = _s.u32[1]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1509C3DB: pshufd xmm1, xmm1, 0x44 */
    _xmm[7] = xmm_ld(0x15014480); /* 0x1509C3E0: movapd xmm7, xmmword ptr [0x15014480] */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509C3E8: addsd xmm5, xmm2 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x1509C3EC: mulpd xmm3, xmm1 */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C3F0: addsd xmm0, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509C3F4: unpcklpd xmm0, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509C3F8: mulpd xmm6, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509C3FC: mulsd xmm4, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509C400: mulpd xmm0, xmm0 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509C404: addpd xmm7, xmm6 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509C408: mulpd xmm7, xmm0 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509C40C: mulsd xmm0, xmm3 */
    { xmm_t _s = _xmm[7]; _xmm[6].u32[0] = _s.u32[2]; _xmm[6].u32[1] = _s.u32[3]; _xmm[6].u32[2] = _s.u32[2]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x1509C410: pshufd xmm6, xmm7, 0xee */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509C415: mulsd xmm0, xmm7 */
    { xmm_t _s = _xmm[3]; _xmm[5].u32[0] = _s.u32[2]; _xmm[5].u32[1] = _s.u32[3]; _xmm[5].u32[2] = _s.u32[2]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x1509C419: pshufd xmm5, xmm3, 0xee */
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509C41E: mulsd xmm6, xmm3 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509C422: mulsd xmm4, xmm3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C426: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C429: addsd xmm0, xmm5 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C42D: addsd xmm0, xmm6 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C431: addsd xmm0, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C435: addsd xmm0, xmm3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C439: ret  */
L_1509C43A:
    _xmm[1].u64[0] = MEM64(esp + 0xC); /* 0x1509C43A: movlpd xmm1, qword ptr [esp + 0xc] */
    _xmm[3].u64[0] = MEM64(0x15014460); /* 0x1509C440: movlpd xmm3, qword ptr [0x15014460] */
    eax = _xmm[1].u32[0]; /* 0x1509C448: movd eax, xmm1 */
    _xmm[2].u64[0] = _xmm[1].u64[0]; /* 0x1509C44C: movsd xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509C450: andpd xmm1, xmm3 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x1509C454: psrlq xmm1, 0x20 */
    ecx = _xmm[1].u32[0]; /* 0x1509C459: movd ecx, xmm1 */
    /* cmp ecx, 0x7FF00000u */ /* 0x1509C45D: cmp ecx, 0x7ff00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C543; /* 0x1509C463: jae 0x1509c543 */
L_1509C469:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1509C469: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509C46B: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C8DF; /* 0x1509C46E: je 0x1509c8df */
L_1509C474:
    /* cmp edx, 0 */ /* 0x1509C474: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1509C582; /* 0x1509C477: jge 0x1509c582 */
L_1509C47D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1509C47D: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FEFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x7FEFu; /* 0x1509C47F: add edx, 0x7fef */
    _flag_k = FK_ADD;
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x1509C485: psllq xmm3, 0x34 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1509C48A: orpd xmm2, xmm3 */
    ecx = 0x3F3u; /* 0x1509C48E: mov ecx, 0x3f3 */
    _xmm[3].u64[0] = (uint32_t)(ecx); _xmm[3].u64[1] = 0; /* 0x1509C493: movd xmm3, ecx */
    { uint64_t _c = 20u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x1509C497: psrlq xmm1, 0x14 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] -= _s.u32[_k]; } /* 0x1509C49C: psubd xmm1, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509C4A0: pxor xmm3, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 8; _k++) if (_s.i16[_k] > _xmm[1].i16[_k]) _xmm[1].i16[_k] = _s.i16[_k]; } /* 0x1509C4A4: pmaxsw xmm1, xmm3 */
    { uint64_t _c = _xmm[1].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] << _c); } /* 0x1509C4A8: psllq xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = (_xmm[2].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509C4AC: pcmpeqd xmm2, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[2].u8[_k] >> 7) << _k; eax = _m; } /* 0x1509C4B0: pmovmskb eax, xmm2 */
    ecx = edx; /* 0x1509C4B4: mov ecx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFu);
    edx = edx & 0x7FFFu; /* 0x1509C4B6: and edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x7FF0u */ /* 0x1509C4BC: cmp edx, 0x7ff0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C66A; /* 0x1509C4C2: jae 0x1509c66a */
L_1509C4C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509C4C8: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFu */ /* 0x1509C4CD: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C771; /* 0x1509C4D2: jne 0x1509c771 */
L_1509C4D8:
    _xmm[1].u64[0] = MEM64(esp + 0xC); /* 0x1509C4D8: movlpd xmm1, qword ptr [esp + 0xc] */
    _xmm[2].u64[0] = MEM64(esp + 0xC); /* 0x1509C4DE: movlpd xmm2, qword ptr [esp + 0xc] */
    ecx = 0x3F4u; /* 0x1509C4E4: mov ecx, 0x3f4 */
    _xmm[3].u64[0] = (uint32_t)(ecx); _xmm[3].u64[1] = 0; /* 0x1509C4E9: movd xmm3, ecx */
    { xmm_t _s = xmm_ld(0x15014460); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509C4ED: andpd xmm1, xmmword ptr [0x15014460] */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x1509C4F5: psrlq xmm1, 0x34 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] -= _s.u32[_k]; } /* 0x1509C4FA: psubd xmm1, xmm3 */
    _xmm[3].u64[0] = MEM64(0x150144C0); /* 0x1509C4FE: movlpd xmm3, qword ptr [0x150144c0] */
    { uint64_t _c = _xmm[1].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] << _c); } /* 0x1509C506: psllq xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = (_xmm[2].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509C50A: pcmpeqd xmm2, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[2].u8[_k] >> 7) << _k; eax = _m; } /* 0x1509C50E: pmovmskb eax, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509C512: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x0003FF01u; /* 0x1509C517: mov ecx, 0x3ff01 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1509C51C: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00040000u);
    ecx = ecx & 0x00040000u; /* 0x1509C51E: and ecx, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x10u */ /* 0x1509C524: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509C587; /* 0x1509C527: jb 0x1509c587 */
L_1509C529:
    edx = 0x000BFE7Fu; /* 0x1509C529: mov edx, 0xbfe7f */
    _xmm[3].u64[0] = MEM64(0x15014440); /* 0x1509C52E: movlpd xmm3, qword ptr [0x15014440] */
    _xmm[2].u64[0] = MEM64(0x15014450); /* 0x1509C536: movlpd xmm2, qword ptr [0x15014450] */
    RECOMP_BACKEDGE();
    goto L_1509C186; /* 0x1509C53E: jmp 0x1509c186 */
L_1509C543:
    _xmm[7].u64[0] = MEM64(esp + 0x4); /* 0x1509C543: movlpd xmm7, qword ptr [esp + 4] */
    _xmm[4].u64[0] = MEM64(esp + 0x4); /* 0x1509C549: movlpd xmm4, qword ptr [esp + 4] */
    edx = _xmm[7].u32[0]; /* 0x1509C54F: movd edx, xmm7 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x1509C553: psrlq xmm7, 0x20 */
    eax = _xmm[7].u32[0]; /* 0x1509C558: movd eax, xmm7 */
    ecx = eax; /* 0x1509C55C: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x1509C55E: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF00000u */ /* 0x1509C563: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509C80B; /* 0x1509C568: jb 0x1509c80b */
L_1509C56E:
    if (CMP_A(_flag_a, _flag_b)) goto L_1509C765; /* 0x1509C56E: ja 0x1509c765 */
L_1509C574:
    /* cmp edx, 0 */ /* 0x1509C574: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509C765; /* 0x1509C577: ja 0x1509c765 */
L_1509C57D:
    goto L_1509C80B; /* 0x1509C57D: jmp 0x1509c80b */
L_1509C582:
    ecx = 0; /* 0x1509C582: mov ecx, 0 */
L_1509C587:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509C587: xorpd xmm0, xmm0 */
    eax = 0x43F0u; /* 0x1509C58B: mov eax, 0x43f0 */
    _xmm[0].u16[3] = (uint16_t)(eax); /* 0x1509C590: pinsrw xmm0, eax, 3 */
    _xmm[7].u64[0] = MEM64(0x15014440); /* 0x1509C595: movlpd xmm7, qword ptr [0x15014440] */
    _xmm[2].u64[0] = MEM64(0x15014450); /* 0x1509C59D: movlpd xmm2, qword ptr [0x15014450] */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509C5A5: mulsd xmm0, xmm4 */
    edx = _xmm[4].u32[0]; /* 0x1509C5A9: movd edx, xmm4 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x1509C5AD: psrlq xmm4, 0x20 */
    eax = _xmm[4].u32[0]; /* 0x1509C5B2: movd eax, xmm4 */
    /* cmp edx, 0 */ /* 0x1509C5B6: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C60D; /* 0x1509C5B9: je 0x1509c60d */
L_1509C5BB:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509C5BB: andpd xmm7, xmm0 */
    _xmm[4].u64[0] = _xmm[0].u64[0]; /* 0x1509C5BF: movsd xmm4, xmm0 */
    { xmm_t _s = xmm_ld(0x15014460); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509C5C3: andpd xmm0, xmmword ptr [0x15014460] */
    { uint64_t _c = 44u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509C5CB: psrlq xmm0, 0x2c */
    eax = (uint32_t)_xmm[0].u16[0]; /* 0x1509C5D0: pextrw eax, xmm0, 0 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] | _s.u32[_k]; } /* 0x1509C5D5: orpd xmm7, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509C5D9: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1509C5DE: add eax, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FEu);
    eax = eax & 0x1FEu; /* 0x1509C5E1: and eax, 0x1fe */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = sse_f64(MEM64(eax * 4 + 0x15010BC0)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509C5E6: mulsd xmm7, qword ptr [eax*4 + 0x15010bc0] */
    _xmm[5].u64[0] = MEM64(eax * 4 + 0x15010BC0); /* 0x1509C5EF: movlpd xmm5, qword ptr [eax*4 + 0x15010bc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C5F8: add eax, eax */
    _flag_k = FK_ADD;
    _xmm[6] = xmm_ld(eax * 4 + 0x15010FD0); /* 0x1509C5FA: movapd xmm6, xmmword ptr [eax*4 + 0x15010fd0] */
    edx = 0x00043E7Fu; /* 0x1509C603: mov edx, 0x43e7f */
    RECOMP_BACKEDGE();
    goto L_1509C186; /* 0x1509C608: jmp 0x1509c186 */
L_1509C60D:
    edx = eax; /* 0x1509C60D: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509C60F: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509C615: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C5BB; /* 0x1509C618: jne 0x1509c5bb */
L_1509C61A:
    edx = MEM32(esp + 0x10); /* 0x1509C61A: mov edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    edx = edx & 0x80000000u; /* 0x1509C61E: and edx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509C624: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C654; /* 0x1509C627: je 0x1509c654 */
L_1509C629:
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x1509C629: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x1509C629: shl ecx, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1509C62C: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x7FF00000u; /* 0x1509C62E: mov edx, 0x7ff00000 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509C633: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x1509C635: movd xmm0, edx */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509C639: psllq xmm0, 0x20 */
    _xmm[1].u64[0] = MEM64(0x15014450); /* 0x1509C63E: movlpd xmm1, qword ptr [0x15014450] */
    _xmm[2].u64[0] = MEM64(esp + 0x4); /* 0x1509C646: movlpd xmm2, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C64C: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] / _s); } /* 0x1509C64F: divsd xmm1, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C653: ret  */
L_1509C654:
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x1509C654: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x1509C654: shl ecx, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1509C657: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509C659: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C70B; /* 0x1509C65C: jne 0x1509c70b */
L_1509C662:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C662: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509C665: xorpd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C669: ret  */
L_1509C66A:
    _xmm[3].u64[0] = MEM64(0x15014440); /* 0x1509C66A: movlpd xmm3, qword ptr [0x15014440] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509C672: xorpd xmm1, xmm1 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509C676: andpd xmm3, xmm4 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509C67A: pcmpeqd xmm1, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[1].u8[_k] >> 7) << _k; ecx = _m; } /* 0x1509C67E: pmovmskb ecx, xmm1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x1509C682: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFu */ /* 0x1509C688: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C765; /* 0x1509C68E: jne 0x1509c765 */
L_1509C694:
    ecx = (uint32_t)_xmm[4].u16[3]; /* 0x1509C694: pextrw ecx, xmm4, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    ecx = ecx & 0x8000u; /* 0x1509C699: and ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0 */ /* 0x1509C69F: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C744; /* 0x1509C6A2: je 0x1509c744 */
L_1509C6A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509C6A8: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFu */ /* 0x1509C6AD: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C723; /* 0x1509C6B2: jne 0x1509c723 */
L_1509C6B4:
    _xmm[1].u64[0] = MEM64(esp + 0xC); /* 0x1509C6B4: movlpd xmm1, qword ptr [esp + 0xc] */
    _xmm[2].u64[0] = MEM64(esp + 0xC); /* 0x1509C6BA: movlpd xmm2, qword ptr [esp + 0xc] */
    ecx = 0x3F4u; /* 0x1509C6C0: mov ecx, 0x3f4 */
    _xmm[3].u64[0] = (uint32_t)(ecx); _xmm[3].u64[1] = 0; /* 0x1509C6C5: movd xmm3, ecx */
    { xmm_t _s = xmm_ld(0x15014460); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509C6C9: andpd xmm1, xmmword ptr [0x15014460] */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x1509C6D1: psrlq xmm1, 0x34 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] -= _s.u32[_k]; } /* 0x1509C6D6: psubd xmm1, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509C6DA: pxor xmm3, xmm3 */
    { uint64_t _c = _xmm[1].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] << _c); } /* 0x1509C6DE: psllq xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = (_xmm[2].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509C6E2: pcmpeqd xmm2, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[2].u8[_k] >> 7) << _k; eax = _m; } /* 0x1509C6E6: pmovmskb eax, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509C6EA: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFu */ /* 0x1509C6EF: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C723; /* 0x1509C6F4: je 0x1509c723 */
L_1509C6F6:
    _xmm[1].u64[0] = MEM64(esp + 0xC); /* 0x1509C6F6: movlpd xmm1, qword ptr [esp + 0xc] */
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509C6FC: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509C701: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509C706: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C717; /* 0x1509C709: je 0x1509c717 */
L_1509C70B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C70B: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x150144C0); /* 0x1509C70E: movlpd xmm0, qword ptr [0x150144c0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C716: ret  */
L_1509C717:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C717: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x150144B8); /* 0x1509C71A: movlpd xmm0, qword ptr [0x150144b8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C722: ret  */
L_1509C723:
    _xmm[1].u64[0] = MEM64(esp + 0xC); /* 0x1509C723: movlpd xmm1, qword ptr [esp + 0xc] */
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509C729: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509C72E: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509C733: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C8C7; /* 0x1509C736: je 0x1509c8c7 */
L_1509C73C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C73C: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509C73F: xorpd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C743: ret  */
L_1509C744:
    _xmm[1].u64[0] = MEM64(esp + 0xC); /* 0x1509C744: movlpd xmm1, qword ptr [esp + 0xc] */
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509C74A: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509C74F: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509C754: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C8C7; /* 0x1509C757: je 0x1509c8c7 */
L_1509C75D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C75D: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509C760: xorpd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C764: ret  */
L_1509C765:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C765: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _s = _xmm[4].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509C768: addsd xmm4, xmm4 */
    _xmm[0] = _xmm[4]; /* 0x1509C76C: movapd xmm0, xmm4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C770: ret  */
L_1509C771:
    _xmm[2].u64[0] = MEM64(esp + 0x4); /* 0x1509C771: movlpd xmm2, qword ptr [esp + 4] */
    eax = _xmm[2].u32[0]; /* 0x1509C777: movd eax, xmm2 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] >> _c); } /* 0x1509C77B: psrlq xmm2, 0x20 */
    edx = _xmm[2].u32[0]; /* 0x1509C780: movd edx, xmm2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509C784: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1509C78A: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0; /* 0x1509C78C: mov ecx, 0 */
    /* cmp eax, 0 */ /* 0x1509C791: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C60D; /* 0x1509C794: je 0x1509c60d */
L_1509C79A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C79A: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x150144A8); /* 0x1509C79D: movlpd xmm0, qword ptr [0x150144a8] */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509C7A5: mulsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C7A9: ret  */
L_1509C7AA:
    _xmm[4].u64[0] = MEM64(esp + 0x4); /* 0x1509C7AA: movlpd xmm4, qword ptr [esp + 4] */
    _xmm[2].u64[0] = MEM64(esp + 0xC); /* 0x1509C7B0: movlpd xmm2, qword ptr [esp + 0xc] */
    eax = _xmm[4].u32[0]; /* 0x1509C7B6: movd eax, xmm4 */
    /* cmp eax, 0 */ /* 0x1509C7BA: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C80B; /* 0x1509C7BD: jne 0x1509c80b */
L_1509C7BF:
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x1509C7BF: psrlq xmm4, 0x20 */
    edx = _xmm[4].u32[0]; /* 0x1509C7C4: movd edx, xmm4 */
    /* cmp edx, 0x3FF00000u */ /* 0x1509C7C8: cmp edx, 0x3ff00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C902; /* 0x1509C7CE: je 0x1509c902 */
L_1509C7D4:
    /* cmp edx, 0xBFF00000u */ /* 0x1509C7D4: cmp edx, 0xbff00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xBFF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C80B; /* 0x1509C7DA: jne 0x1509c80b */
L_1509C7DC:
    _xmm[3].u64[0] = MEM64(0x15014440); /* 0x1509C7DC: movlpd xmm3, qword ptr [0x15014440] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509C7E4: xorpd xmm1, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509C7E8: andpd xmm3, xmm2 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509C7EC: pcmpeqd xmm1, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[1].u8[_k] >> 7) << _k; eax = _m; } /* 0x1509C7F0: pmovmskb eax, xmm1 */
    /* cmp eax, 0xFFu */ /* 0x1509C7F4: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C8D3; /* 0x1509C7F9: jne 0x1509c8d3 */
L_1509C7FF:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C7FF: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x15014450); /* 0x1509C802: movlpd xmm0, qword ptr [0x15014450] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C80A: ret  */
L_1509C80B:
    _xmm[3].u64[0] = MEM64(0x15014440); /* 0x1509C80B: movlpd xmm3, qword ptr [0x15014440] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509C813: xorpd xmm1, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509C817: andpd xmm3, xmm2 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509C81B: pcmpeqd xmm1, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[1].u8[_k] >> 7) << _k; eax = _m; } /* 0x1509C81F: pmovmskb eax, xmm1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509C823: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFu */ /* 0x1509C828: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C8D3; /* 0x1509C82D: jne 0x1509c8d3 */
L_1509C833:
    eax = (uint32_t)_xmm[2].u16[3]; /* 0x1509C833: pextrw eax, xmm2, 3 */
    _xmm[4].u64[0] = MEM64(esp + 0x4); /* 0x1509C838: movlpd xmm4, qword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509C83E: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ 0xBFF00000u)); _flag_b = (uint32_t)((ecx ^ 0xBFF00000u));
    ecx = ecx ^ 0xBFF00000u; /* 0x1509C843: xor ecx, 0xbff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x1509C849: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509C84B: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C902; /* 0x1509C84E: je 0x1509c902 */
L_1509C854:
    /* cmp eax, 0 */ /* 0x1509C854: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509C8AE; /* 0x1509C857: je 0x1509c8ae */
L_1509C859:
    eax = (uint32_t)_xmm[4].u16[3]; /* 0x1509C859: pextrw eax, xmm4, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509C85E: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x3FF0u */ /* 0x1509C863: cmp eax, 0x3ff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C8A6; /* 0x1509C868: jae 0x1509c8a6 */
L_1509C86A:
    eax = _xmm[4].u32[0]; /* 0x1509C86A: movd eax, xmm4 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x1509C86E: psrlq xmm4, 0x20 */
    edx = _xmm[4].u32[0]; /* 0x1509C873: movd edx, xmm4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509C877: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509C87D: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509C87F: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509C8C7; /* 0x1509C882: jne 0x1509c8c7 */
L_1509C884:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C884: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509C887: xorpd xmm1, xmm1 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x1509C88B: xorpd xmm4, xmm4 */
    eax = 0x3FF0u; /* 0x1509C88F: mov eax, 0x3ff0 */
    _xmm[1].u16[3] = (uint16_t)(eax); /* 0x1509C894: pinsrw xmm1, eax, 3 */
    { double _s = _xmm[4].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] / _s); } /* 0x1509C899: divsd xmm1, xmm4 */
    _xmm[0].u64[0] = MEM64(0x150144B0); /* 0x1509C89D: movlpd xmm0, qword ptr [0x150144b0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C8A5: ret  */
L_1509C8A6:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C8A6: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509C8A9: xorpd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C8AD: ret  */
L_1509C8AE:
    eax = (uint32_t)_xmm[4].u16[3]; /* 0x1509C8AE: pextrw eax, xmm4, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509C8B3: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x3FF0u */ /* 0x1509C8B8: cmp eax, 0x3ff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509C8C7; /* 0x1509C8BD: jae 0x1509c8c7 */
L_1509C8BF:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C8BF: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509C8C2: xorpd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C8C6: ret  */
L_1509C8C7:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C8C7: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x150144B0); /* 0x1509C8CA: movlpd xmm0, qword ptr [0x150144b0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C8D2: ret  */
L_1509C8D3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C8D3: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _s = _xmm[2].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509C8D6: addsd xmm2, xmm2 */
    _xmm[0] = _xmm[2]; /* 0x1509C8DA: movapd xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C8DE: ret  */
L_1509C8DF:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C8DF: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = _xmm[4].u32[0]; /* 0x1509C8E2: movd eax, xmm4 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x1509C8E6: psrlq xmm4, 0x20 */
    edx = _xmm[4].u32[0]; /* 0x1509C8EB: movd edx, xmm4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509C8EF: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x1509C8F5: mov ecx, eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1509C8F7: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = MEM64(0x15014450); /* 0x1509C8F9: movlpd xmm0, qword ptr [0x15014450] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C901: ret  */
L_1509C902:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509C902: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x15014450); /* 0x1509C905: movlpd xmm0, qword ptr [0x15014450] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509C90D: ret  */
L_1509C90E:
    /* cmp eax, 0 */ /* 0x1509C90E: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1509C938; /* 0x1509C911: jle 0x1509c938 */
L_1509C913:
    /* cmp eax, 0x00040000u */ /* 0x1509C913: cmp eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509CAD7; /* 0x1509C918: jae 0x1509cad7 */
L_1509C91E:
    PUSH32(esp, esi); /* 0x1509C91E: push esi */
    edx = eax; /* 0x1509C91F: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0003FF00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x0003FF00u; /* 0x1509C921: add ecx, 0x3ff00 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x80u; /* 0x1509C927: sub edx, 0x80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFF80u);
    edx = edx & 0xFFFFFF80u; /* 0x1509C92D: and edx, 0xffffff80 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1509C930: push edi */
    edi = 0x3FF0u; /* 0x1509C931: mov edi, 0x3ff0 */
    goto L_1509C95B; /* 0x1509C936: jmp 0x1509c95b */
L_1509C938:
    /* cmp eax, 0xFFFC0200u */ /* 0x1509C938: cmp eax, 0xfffc0200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFC0200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1509CABA; /* 0x1509C93D: jle 0x1509caba */
L_1509C943:
    PUSH32(esp, esi); /* 0x1509C943: push esi */
    edx = eax; /* 0x1509C944: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x80u; /* 0x1509C946: add ecx, 0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFF80u);
    edx = edx & 0xFFFFFF80u; /* 0x1509C94C: and edx, 0xffffff80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0003FE80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x0003FE80u; /* 0x1509C94F: add edx, 0x3fe80 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1509C955: push edi */
    edi = 0; /* 0x1509C956: mov edi, 0 */
L_1509C95B:
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509C95B: addsd xmm4, xmm0 */
    _xmm[0].f64[0] = (double)(int32_t)(eax); /* 0x1509C95F: cvtsi2sd xmm0, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    eax = eax & 0x7Fu; /* 0x1509C963: and eax, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edx; /* 0x1509C966: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x0001FF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x0001FF80u; /* 0x1509C968: sub esi, 0x1ff80 */
    _flag_k = FK_CMP;
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509C96E: mulpd xmm2, xmm7 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509C972: mulpd xmm7, xmm7 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509C976: subsd xmm0, xmm3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C97A: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C97C: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C97E: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509C980: add eax, eax */
    _flag_k = FK_ADD;
    _xmm[3] = xmm_ld(eax + 0x15013C40); /* 0x1509C982: movapd xmm3, xmmword ptr [eax + 0x15013c40] */
    _xmm[6] = xmm_ld(0x15014470); /* 0x1509C98A: movapd xmm6, xmmword ptr [0x15014470] */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509C992: mulpd xmm1, xmm7 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[2] = _d; } /* 0x1509C996: addpd xmm2, xmm1 */
    { xmm_t _s = _xmm[2]; _xmm[1].u32[0] = _s.u32[2]; _xmm[1].u32[1] = _s.u32[3]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1509C99A: pshufd xmm1, xmm2, 0xee */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509C99F: mulsd xmm2, xmm7 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509C9A3: addsd xmm2, xmm1 */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509C9A7: addsd xmm2, xmm4 */
    _xmm[4].u64[0] = MEM64(0x15014490); /* 0x1509C9AB: movlpd xmm4, qword ptr [0x15014490] */
    _xmm[1].u64[0] = (uint32_t)(edx); _xmm[1].u64[1] = 0; /* 0x1509C9B3: movd xmm1, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0001FF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x0001FF80u; /* 0x1509C9B7: sub edx, 0x1ff80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1509C9BD: neg edx */
    _flag_k = FK_CMP;
    if (7u) _cf = (((edx) >> 6) & 1u); /* 0x1509C9BF: sar edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 7u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1509C9C2: add edx, 2 */
    _flag_k = FK_ADD;
    eax = edx; /* 0x1509C9C5: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x1509C9C7: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1509C9CA: add edx, eax */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509C9CC: xorpd xmm7, xmm7 */
    eax = 0xBF80u; /* 0x1509C9D0: mov eax, 0xbf80 */
    _xmm[7].u16[3] = (uint16_t)(eax); /* 0x1509C9D5: pinsrw xmm7, eax, 3 */
    { double _s = sse_f64(MEM64(esp + 0x14)); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509C9DA: mulsd xmm2, qword ptr [esp + 0x14] */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509C9E0: mulsd xmm0, xmm7 */
    { uint64_t _c = 45u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509C9E4: psllq xmm1, 0x2d */
    { xmm_t _s = _xmm[1]; _xmm[1].u32[0] = _s.u32[0]; _xmm[1].u32[1] = _s.u32[1]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1509C9E9: pshufd xmm1, xmm1, 0x44 */
    _xmm[7] = xmm_ld(0x15014480); /* 0x1509C9EE: movapd xmm7, xmmword ptr [0x15014480] */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509C9F6: addsd xmm5, xmm2 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x1509C9FA: mulpd xmm3, xmm1 */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509C9FE: addsd xmm0, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509CA02: unpcklpd xmm0, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509CA06: mulpd xmm6, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509CA0A: mulsd xmm4, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509CA0E: mulpd xmm0, xmm0 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509CA12: addpd xmm7, xmm6 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509CA16: mulpd xmm7, xmm0 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509CA1A: mulsd xmm0, xmm3 */
    { xmm_t _s = _xmm[7]; _xmm[6].u32[0] = _s.u32[2]; _xmm[6].u32[1] = _s.u32[3]; _xmm[6].u32[2] = _s.u32[2]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x1509CA1E: pshufd xmm6, xmm7, 0xee */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509CA23: mulsd xmm0, xmm7 */
    { xmm_t _s = _xmm[3]; _xmm[5].u32[0] = _s.u32[2]; _xmm[5].u32[1] = _s.u32[3]; _xmm[5].u32[2] = _s.u32[2]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x1509CA27: pshufd xmm5, xmm3, 0xee */
    { double _s = _xmm[3].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509CA2C: mulsd xmm6, xmm3 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509CA30: mulsd xmm4, xmm3 */
    _xmm[7].u64[0] = (uint32_t)(ecx); _xmm[7].u64[1] = 0; /* 0x1509CA34: movd xmm7, ecx */
    { uint64_t _c = 45u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x1509CA38: psllq xmm7, 0x2d */
    _xmm[2].u64[0] = (uint32_t)(edx); _xmm[2].u64[1] = 0; /* 0x1509CA3D: movd xmm2, edx */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509CA41: pcmpeqd xmm1, xmm1 */
    { uint64_t _c = _xmm[2].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509CA45: psllq xmm1, xmm2 */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CA49: addsd xmm0, xmm5 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CA4D: addsd xmm0, xmm6 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509CA51: andpd xmm1, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CA55: addsd xmm0, xmm4 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509CA59: xorpd xmm6, xmm6 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = (_xmm[4].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509CA5D: pcmpeqd xmm4, xmm4 */
    { uint64_t _c = _xmm[2].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] << _c); } /* 0x1509CA61: psllq xmm4, xmm2 */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509CA65: subsd xmm3, xmm1 */
    _xmm[2].u64[0] = _xmm[1].u64[0]; /* 0x1509CA69: movsd xmm2, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509CA6D: addsd xmm1, xmm0 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509CA71: andpd xmm1, xmm4 */
    _xmm[6].u16[3] = (uint16_t)(edi); /* 0x1509CA75: pinsrw xmm6, edi, 3 */
    edi = POP32_VAL(esp); /* 0x1509CA7A: pop edi */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x1509CA7B: subsd xmm2, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CA7F: addsd xmm0, xmm2 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CA83: addsd xmm0, xmm3 */
    /* cmp esi, 0 */ /* 0x1509CA87: cmp esi, 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1509CAA5; /* 0x1509CA8A: jg 0x1509caa5 */
L_1509CA8C:
    esi = POP32_VAL(esp); /* 0x1509CA8C: pop esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509CA8D: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509CA90: mulsd xmm0, xmm7 */
    { double _s = _xmm[7].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509CA94: mulsd xmm1, xmm7 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CA98: addsd xmm0, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509CA9C: mulsd xmm6, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CAA0: addsd xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CAA4: ret  */
L_1509CAA5:
    esi = POP32_VAL(esp); /* 0x1509CAA5: pop esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509CAA6: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CAA9: addsd xmm0, xmm1 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509CAAD: mulsd xmm0, xmm7 */
    { double _s = _xmm[0].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509CAB1: mulsd xmm6, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CAB5: addsd xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CAB9: ret  */
L_1509CABA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509CABA: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(0x150144C8); /* 0x1509CABD: movlpd xmm0, qword ptr [0x150144c8] */
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x1509CAC5: movd xmm1, ecx */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509CAC9: mulsd xmm0, xmm0 */
    { uint64_t _c = 45u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509CACD: psllq xmm1, 0x2d */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1509CAD2: orpd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CAD6: ret  */
L_1509CAD7:
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509CAD7: xorpd xmm1, xmm1 */
    eax = 0xFFEFu; /* 0x1509CADB: mov eax, 0xffef */
    _xmm[1].u16[3] = (uint16_t)(eax); /* 0x1509CAE0: pinsrw xmm1, eax, 3 */
    _xmm[0].u64[0] = _xmm[1].u64[0]; /* 0x1509CAE5: movsd xmm0, xmm1 */
    /* cmp ecx, 0 */ /* 0x1509CAE9: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509CAF8; /* 0x1509CAEC: je 0x1509caf8 */
L_1509CAEE:
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509CAEE: psllq xmm0, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509CAF3: psrlq xmm0, 1 */
L_1509CAF8:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509CAF8: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509CAFB: mulsd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CAFF: ret  */
L_1509CB00:
    { xmm_t _s = _xmm[1]; _xmm[4].u32[0] = _s.u32[0]; _xmm[4].u32[1] = _s.u32[1]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1509CB00: pshufd xmm4, xmm1, 0x44 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x1509CB05: mulpd xmm4, xmm6 */
    eax = (uint32_t)_xmm[4].u16[3]; /* 0x1509CB09: pextrw eax, xmm4, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509CB0E: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x40A0u; /* 0x1509CB13: mov edx, 0x40a0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1509CB18: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3C70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3C70u; /* 0x1509CB1A: sub eax, 0x3c70 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509CB1F: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x80000000u */ /* 0x1509CB21: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1509C2D8; /* 0x1509CB27: jb 0x1509c2d8 */
L_1509CB2D:
    /* cmp eax, 0x80000000u */ /* 0x1509CB2D: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509CB47; /* 0x1509CB32: jb 0x1509cb47 */
L_1509CB34:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509CB34: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx | 0x0001FF80u)); _flag_b = (uint32_t)((ecx | 0x0001FF80u));
    ecx = ecx | 0x0001FF80u; /* 0x1509CB37: or ecx, 0x1ff80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x1509CB3D: movd xmm0, ecx */
    { uint64_t _c = 45u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509CB41: psllq xmm0, 0x2d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CB46: ret  */
L_1509CB47:
    _xmm[4].u64[0] = MEM64(esp + 0x4); /* 0x1509CB47: movlpd xmm4, qword ptr [esp + 4] */
    edx = (uint32_t)_xmm[4].u16[3]; /* 0x1509CB4D: pextrw edx, xmm4, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF0u);
    edx = edx & 0x7FF0u; /* 0x1509CB52: and edx, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3FF0u; /* 0x1509CB58: sub edx, 0x3ff0 */
    _flag_k = FK_CMP;
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509CB5E: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1509CB63: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509CB65: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509CB6A: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509CABA; /* 0x1509CB6D: jne 0x1509caba */
L_1509CB73:
    RECOMP_BACKEDGE();
    goto L_1509CAD7; /* 0x1509CB73: jmp 0x1509cad7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1509CB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509CB80u);

L_1509CB80:
    _xmm[7].u64[0] = MEM32(0x15014A84); _xmm[7].u64[1] = 0; /* 0x1509CB80: movss xmm7, dword ptr [0x15014a84] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509CB88: sub esp, 0xc */
    _flag_k = FK_CMP;
    _xmm[5].u64[0] = MEM64(0x15014A48); /* 0x1509CB8B: movlpd xmm5, qword ptr [0x15014a48] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509CB93: pand xmm0, xmm7 */
    _xmm[3].u64[0] = MEM64(0x15014A50); /* 0x1509CB97: movlpd xmm3, qword ptr [0x15014a50] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1509CB9F: pand xmm1, xmm7 */
    MEM32(esp + 0x4) = _xmm[0].u32[0]; /* 0x1509CBA3: movss dword ptr [esp + 4], xmm0 */
    eax = (uint32_t)_xmm[0].u16[1]; /* 0x1509CBA9: pextrw eax, xmm0, 1 */
    _xmm[4] = _xmm[0]; /* 0x1509CBAE: movaps xmm4, xmm0 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509CBB1: psllq xmm0, 0x1d */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x1509CBB6: andpd xmm5, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] | _s.u32[_k]; } /* 0x1509CBBA: orpd xmm5, xmm3 */
    MEM32(esp + 0x8) = _xmm[1].u32[0]; /* 0x1509CBBE: movss dword ptr [esp + 8], xmm1 */
    _xmm[6] = xmm_ld(0x150149F0); /* 0x1509CBC4: movapd xmm6, xmmword ptr [0x150149f0] */
    _xmm[2] = xmm_ld(0x15014A00); /* 0x1509CBCC: movapd xmm2, xmmword ptr [0x15014a00] */
    _xmm[1].f64[0] = (double)_xmm[1].f32[0]; /* 0x1509CBD4: cvtss2sd xmm1, xmm1 */
    edx = eax; /* 0x1509CBD8: mov edx, eax */
    ecx = 0x7F7Fu; /* 0x1509CBDA: mov ecx, 0x7f7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509CBDF: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x80u; /* 0x1509CBE1: sub edx, 0x80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x1509CBE7: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x8000u */ /* 0x1509CBE9: cmp ecx, 0x8000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509CD72; /* 0x1509CBEF: jae 0x1509cd72 */
L_1509CBF5:
    edx = 0x3F3Fu; /* 0x1509CBF5: mov edx, 0x3f3f */
    ecx = 0; /* 0x1509CBFA: mov ecx, 0 */
L_1509CBFF:
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x1509CBFF: movd xmm0, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    eax = eax & 0x7Fu; /* 0x1509CC03: and eax, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1509CC06: add eax, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEu);
    eax = eax & 0xFEu; /* 0x1509CC09: and eax, 0xfe */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[7].u64[0] = MEM64(eax * 4 + 0x150146E0); /* 0x1509CC0E: movlpd xmm7, qword ptr [eax*4 + 0x150146e0] */
    { double _s = sse_f64(MEM64(0x15014A58)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509CC17: mulsd xmm1, qword ptr [0x15014a58] */
    _xmm[3].u64[0] = _xmm[7].u64[0]; /* 0x1509CC1F: movsd xmm3, xmm7 */
    { uint64_t _c = 26u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x1509CC23: psrlq xmm7, 0x1a */
    { uint64_t _c = 26u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x1509CC28: psllq xmm7, 0x1a */
    { uint64_t _c = 16u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x1509CC2D: psrlq xmm4, 0x10 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] -= _s.u32[_k]; } /* 0x1509CC32: psubd xmm4, xmm0 */
    { uint64_t _c = 7u; for (int _k = 0; _k < 4; _k++) _xmm[4].i32[_k] = _xmm[4].i32[_k] >> (_c > 31 ? 31 : (int)_c); } /* 0x1509CC36: psrad xmm4, 7 */
    { int32_t _a = (int32_t)_xmm[4].u32[0], _b = (int32_t)_xmm[4].u32[1]; _xmm[4].f64[0] = _a; _xmm[4].f64[1] = _b; } /* 0x1509CC3B: cvtdq2pd xmm4, xmm4 */
    _xmm[0].u64[0] = MEM64(eax * 4 + 0x150144D0); /* 0x1509CC3F: movlpd xmm0, qword ptr [eax*4 + 0x150144d0] */
    { double _s = _xmm[7].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509CC48: subsd xmm3, xmm7 */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509CC4C: mulsd xmm7, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509CC50: mulsd xmm5, xmm3 */
    { double _s = sse_f64(MEM64(0x150146E0)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x1509CC54: subsd xmm7, qword ptr [0x150146e0] */
    { double _s = _xmm[7].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509CC5C: addsd xmm5, xmm7 */
    { xmm_t _s = _xmm[5]; _xmm[7].u32[0] = _s.u32[0]; _xmm[7].u32[1] = _s.u32[1]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[1]; } /* 0x1509CC60: pshufd xmm7, xmm5, 0x44 */
    _xmm[3].u64[0] = MEM64(0x15014A60); /* 0x1509CC65: movlpd xmm3, qword ptr [0x15014a60] */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CC6D: addsd xmm0, xmm5 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509CC71: mulpd xmm6, xmm7 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509CC75: mulpd xmm7, xmm7 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CC79: addsd xmm0, xmm4 */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509CC7D: mulsd xmm2, xmm7 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CC81: addsd xmm0, xmm2 */
    { xmm_t _s = _xmm[2]; _xmm[2].u32[0] = _s.u32[2]; _xmm[2].u32[1] = _s.u32[3]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1509CC85: pshufd xmm2, xmm2, 0xee */
    { double _s = _xmm[2].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509CC8A: addsd xmm6, xmm2 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509CC8E: mulsd xmm0, xmm1 */
    { double _s = _xmm[7].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509CC92: mulsd xmm7, xmm7 */
    edx = (uint32_t)_xmm[0].u16[3]; /* 0x1509CC96: pextrw edx, xmm0, 3 */
    _xmm[4].u64[0] = _xmm[0].u64[0]; /* 0x1509CC9B: movsd xmm4, xmm0 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CC9F: addsd xmm0, xmm3 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509CCA3: subsd xmm0, xmm3 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509CCA7: mulpd xmm6, xmm7 */
    eax = 0x41D0u; /* 0x1509CCAB: mov eax, 0x41d0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF0u);
    edx = edx & 0x7FF0u; /* 0x1509CCB0: and edx, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1509CCB6: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3E60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3E60u; /* 0x1509CCB8: sub edx, 0x3e60 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509CCBE: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x80000000u */ /* 0x1509CCC0: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509D1C4; /* 0x1509CCC6: jae 0x1509d1c4 */
L_1509CCCC:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 0); /* 0x1509CCCC: cvtsd2si eax, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509CCD0: subsd xmm4, xmm0 */
    { xmm_t _s = _xmm[6]; _xmm[7].u32[0] = _s.u32[2]; _xmm[7].u32[1] = _s.u32[3]; _xmm[7].u32[2] = _s.u32[2]; _xmm[7].u32[3] = _s.u32[3]; } /* 0x1509CCD4: pshufd xmm7, xmm6, 0xee */
    { double _s = _xmm[7].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509CCD9: addsd xmm6, xmm7 */
    _xmm[7] = xmm_ld(0x15014A10); /* 0x1509CCDD: movapd xmm7, xmmword ptr [0x15014a10] */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509CCE5: mulsd xmm1, xmm6 */
    _xmm[2] = xmm_ld(0x15014A20); /* 0x1509CCE9: movapd xmm2, xmmword ptr [0x15014a20] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509CCF1: xorpd xmm6, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509CCF5: addsd xmm4, xmm1 */
    { xmm_t _s = _xmm[4]; _xmm[5].u32[0] = _s.u32[0]; _xmm[5].u32[1] = _s.u32[1]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x1509CCF9: pshufd xmm5, xmm4, 0x44 */
    edx = 0xFBFu; /* 0x1509CCFE: mov edx, 0xfbf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1509CD03: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFA0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFA0u; /* 0x1509CD05: add eax, 0xfa0 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509CD0A: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFA0u; /* 0x1509CD0C: sub eax, 0xfa0 */
    _flag_k = FK_CMP;
    /* cmp edx, 0x80000000u */ /* 0x1509CD11: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509D0F6; /* 0x1509CD17: jae 0x1509d0f6 */
L_1509CD1D:
    edx = eax; /* 0x1509CD1D: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1509CD1F: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1509CD21: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[3].u64[0] = MEM64(eax * 8 + 0x150148F0); /* 0x1509CD24: movlpd xmm3, qword ptr [eax*8 + 0x150148f0] */
    _flag_a = (uint32_t)((ecx | 0x3FF0u)); _flag_b = (uint32_t)((ecx | 0x3FF0u));
    ecx = ecx | 0x3FF0u; /* 0x1509CD2D: or ecx, 0x3ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edx = edx & 0xFFFFFFF0u; /* 0x1509CD33: and edx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1509CD36: add ecx, edx */
    _flag_k = FK_ADD;
    _xmm[6].u16[3] = (uint16_t)(ecx); /* 0x1509CD38: pinsrw xmm6, ecx, 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509CD3D: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509CD40: mulpd xmm7, xmm5 */
    { double _s = _xmm[5].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509CD44: mulsd xmm5, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509CD48: mulsd xmm4, xmm3 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[2] = _d; } /* 0x1509CD4C: addpd xmm2, xmm7 */
    { double _s = _xmm[6].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509CD50: mulsd xmm3, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509CD54: mulsd xmm4, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509CD58: mulsd xmm5, xmm2 */
    { xmm_t _s = _xmm[2]; _xmm[0].u32[0] = _s.u32[2]; _xmm[0].u32[1] = _s.u32[3]; _xmm[0].u32[2] = _s.u32[2]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x1509CD5C: pshufd xmm0, xmm2, 0xee */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CD61: addsd xmm0, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509CD65: mulsd xmm0, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509CD69: addsd xmm0, xmm3 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x1509CD6D: cvtpd2ps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CD71: ret  */
L_1509CD72:
    _xmm[3].u64[0] = MEM64(0x15014A40); /* 0x1509CD72: movlpd xmm3, qword ptr [0x15014a40] */
    edx = _xmm[1].u32[0]; /* 0x1509CD7A: movd edx, xmm1 */
    _xmm[0].u64[0] = _xmm[1].u64[0]; /* 0x1509CD7E: movsd xmm0, xmm1 */
    _xmm[7].u64[0] = _xmm[1].u64[0]; /* 0x1509CD82: movsd xmm7, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509CD86: andpd xmm0, xmm3 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509CD8A: psrlq xmm0, 0x20 */
    ecx = _xmm[0].u32[0]; /* 0x1509CD8F: movd ecx, xmm0 */
    /* cmp ecx, 0x7FF00000u */ /* 0x1509CD93: cmp ecx, 0x7ff00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509CE73; /* 0x1509CD99: jae 0x1509ce73 */
L_1509CD9F:
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x1509CD9F: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509CDA1: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D0CA; /* 0x1509CDA4: je 0x1509d0ca */
L_1509CDAA:
    edx = _xmm[4].u32[0]; /* 0x1509CDAA: movd edx, xmm4 */
    /* cmp edx, 0x7F7FFFFFu */ /* 0x1509CDAE: cmp edx, 0x7f7fffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F7FFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509CE96; /* 0x1509CDB4: jbe 0x1509ce96 */
L_1509CDBA:
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x1509CDBA: psllq xmm3, 0x34 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] | _s.u32[_k]; } /* 0x1509CDBF: orpd xmm7, xmm3 */
    ecx = 0x3F3u; /* 0x1509CDC3: mov ecx, 0x3f3 */
    _xmm[3].u64[0] = (uint32_t)(ecx); _xmm[3].u64[1] = 0; /* 0x1509CDC8: movd xmm3, ecx */
    { uint64_t _c = 20u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509CDCC: psrlq xmm0, 0x14 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] -= _s.u32[_k]; } /* 0x1509CDD1: psubd xmm0, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509CDD5: pxor xmm3, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 8; _k++) if (_s.i16[_k] > _xmm[0].i16[_k]) _xmm[0].i16[_k] = _s.i16[_k]; } /* 0x1509CDD9: pmaxsw xmm0, xmm3 */
    { uint64_t _c = _xmm[0].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x1509CDDD: psllq xmm7, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = (_xmm[7].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509CDE1: pcmpeqd xmm7, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[7].u8[_k] >> 7) << _k; ecx = _m; } /* 0x1509CDE5: pmovmskb ecx, xmm7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x1509CDE9: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509CDEF: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x7F800000u */ /* 0x1509CDF5: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509CF39; /* 0x1509CDFB: jae 0x1509cf39 */
L_1509CE01:
    /* cmp ecx, 0xFFu */ /* 0x1509CE01: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509CFFC; /* 0x1509CE07: jne 0x1509cffc */
L_1509CE0D:
    _xmm[3].u64[0] = MEM64(0x15014A40); /* 0x1509CE0D: movlpd xmm3, qword ptr [0x15014a40] */
    _xmm[0].u64[0] = _xmm[1].u64[0]; /* 0x1509CE15: movsd xmm0, xmm1 */
    _xmm[7].u64[0] = _xmm[1].u64[0]; /* 0x1509CE19: movsd xmm7, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509CE1D: andpd xmm0, xmm3 */
    ecx = 0x3F4u; /* 0x1509CE21: mov ecx, 0x3f4 */
    _xmm[3].u64[0] = (uint32_t)(ecx); _xmm[3].u64[1] = 0; /* 0x1509CE26: movd xmm3, ecx */
    { xmm_t _s = xmm_ld(0x15014A40); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1509CE2A: andpd xmm0, xmmword ptr [0x15014a40] */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x1509CE32: psrlq xmm0, 0x34 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] -= _s.u32[_k]; } /* 0x1509CE37: psubd xmm0, xmm3 */
    _xmm[3].u64[0] = MEM64(0x15014A68); /* 0x1509CE3B: movlpd xmm3, qword ptr [0x15014a68] */
    { uint64_t _c = _xmm[0].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x1509CE43: psllq xmm7, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = (_xmm[7].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509CE47: pcmpeqd xmm7, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[7].u8[_k] >> 7) << _k; ecx = _m; } /* 0x1509CE4B: pmovmskb ecx, xmm7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x1509CE4F: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7F01u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7F01u; /* 0x1509CE55: add ecx, 0x7f01 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    ecx = ecx & 0x8000u; /* 0x1509CE5B: and ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x00800000u */ /* 0x1509CE61: cmp edx, 0x800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509CE9B; /* 0x1509CE67: jb 0x1509ce9b */
L_1509CE69:
    edx = 0xBF3Fu; /* 0x1509CE69: mov edx, 0xbf3f */
    RECOMP_BACKEDGE();
    goto L_1509CBFF; /* 0x1509CE6E: jmp 0x1509cbff */
L_1509CE73:
    edx = _xmm[4].u32[0]; /* 0x1509CE73: movd edx, xmm4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509CE77: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x7F800000u */ /* 0x1509CE7D: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509CE8A; /* 0x1509CE83: ja 0x1509ce8a */
L_1509CE85:
    goto L_1509D01B; /* 0x1509CE85: jmp 0x1509d01b */
L_1509CE8A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509CE8A: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u32[0] = _xmm[4].u32[0]; /* 0x1509CE8D: movss xmm0, xmm4 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509CE91: addss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CE95: ret  */
L_1509CE96:
    ecx = 0; /* 0x1509CE96: mov ecx, 0 */
L_1509CE9B:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509CE9B: xorpd xmm0, xmm0 */
    edx = 0x5F80u; /* 0x1509CE9F: mov edx, 0x5f80 */
    _xmm[0].u16[1] = (uint16_t)(edx); /* 0x1509CEA4: pinsrw xmm0, edx, 1 */
    _xmm[5].u64[0] = MEM64(0x15014A48); /* 0x1509CEA9: movlpd xmm5, qword ptr [0x15014a48] */
    _xmm[3].u64[0] = MEM64(0x15014A50); /* 0x1509CEB1: movlpd xmm3, qword ptr [0x15014a50] */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x1509CEB9: mulss xmm4, xmm0 */
    edx = _xmm[4].u32[0]; /* 0x1509CEBD: movd edx, xmm4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509CEC1: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509CEC7: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509CEF2; /* 0x1509CECA: je 0x1509cef2 */
L_1509CECC:
    eax = (uint32_t)_xmm[4].u16[1]; /* 0x1509CECC: pextrw eax, xmm4, 1 */
    _xmm[0] = _xmm[4]; /* 0x1509CED1: movaps xmm0, xmm4 */
    { xmm_t _s = xmm_ld(0x15014A30); for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] & _s.u32[_k]; } /* 0x1509CED4: andps xmm4, xmmword ptr [0x15014a30] */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x1509CEDB: psllq xmm0, 0x1d */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x1509CEE0: andpd xmm5, xmm0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] | _s.u32[_k]; } /* 0x1509CEE4: orpd xmm5, xmm3 */
    edx = 0x5F3Fu; /* 0x1509CEE8: mov edx, 0x5f3f */
    RECOMP_BACKEDGE();
    goto L_1509CBFF; /* 0x1509CEED: jmp 0x1509cbff */
L_1509CEF2:
    edx = MEM32(esp + 0x8); /* 0x1509CEF2: mov edx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    edx = edx & 0x80000000u; /* 0x1509CEF6: and edx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509CEFC: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509CF24; /* 0x1509CEFF: je 0x1509cf24 */
L_1509CF01:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1509CF01: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1509CF01: shl ecx, 0x10 */
    edx = _xmm[4].u32[0]; /* 0x1509CF04: movd edx, xmm4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1509CF08: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | 0x7F800000u)); _flag_b = (uint32_t)((edx | 0x7F800000u));
    edx = edx | 0x7F800000u; /* 0x1509CF0A: or edx, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x1509CF10: movd xmm0, edx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509CF14: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[5].u64[0] = MEM32(0x15014A78); _xmm[5].u64[1] = 0; /* 0x1509CF17: movss xmm5, dword ptr [0x15014a78] */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] / _s); } /* 0x1509CF1F: divss xmm5, xmm4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CF23: ret  */
L_1509CF24:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1509CF24: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1509CF24: shl ecx, 0x10 */
    edx = _xmm[4].u32[0]; /* 0x1509CF27: movd edx, xmm4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1509CF2B: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509CF2D: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509CFB0; /* 0x1509CF30: jne 0x1509cfb0 */
L_1509CF32:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509CF32: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509CF35: xorps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CF38: ret  */
L_1509CF39:
    edx = _xmm[4].u32[0]; /* 0x1509CF39: movd edx, xmm4 */
    /* cmp edx, 0x7F800000u */ /* 0x1509CF3D: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509CFE2; /* 0x1509CF43: je 0x1509cfe2 */
L_1509CF49:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x1509CF49: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x7F800000u */ /* 0x1509CF4F: cmp edx, 0x7f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1509CE8A; /* 0x1509CF55: ja 0x1509ce8a */
L_1509CF5B:
    /* cmp ecx, 0xFFu */ /* 0x1509CF5B: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509CFC8; /* 0x1509CF61: jne 0x1509cfc8 */
L_1509CF63:
    _xmm[5].u64[0] = _xmm[1].u64[0]; /* 0x1509CF63: movsd xmm5, xmm1 */
    _xmm[2].u64[0] = _xmm[1].u64[0]; /* 0x1509CF67: movsd xmm2, xmm1 */
    ecx = 0x3F4u; /* 0x1509CF6B: mov ecx, 0x3f4 */
    _xmm[3].u64[0] = (uint32_t)(ecx); _xmm[3].u64[1] = 0; /* 0x1509CF70: movd xmm3, ecx */
    { xmm_t _s = xmm_ld(0x15014A40); for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x1509CF74: andpd xmm5, xmmword ptr [0x15014a40] */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[5].u64[_k] >> _c); } /* 0x1509CF7C: psrlq xmm5, 0x34 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] -= _s.u32[_k]; } /* 0x1509CF81: psubd xmm5, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509CF85: pxor xmm3, xmm3 */
    { uint64_t _c = _xmm[5].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[2].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[2].u64[_k] << _c); } /* 0x1509CF89: psllq xmm2, xmm5 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = (_xmm[2].u32[_k] == _s.u32[_k]) ? (uint32_t)~0u : 0; } /* 0x1509CF8D: pcmpeqd xmm2, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[2].u8[_k] >> 7) << _k; eax = _m; } /* 0x1509CF91: pmovmskb eax, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1509CF95: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFu */ /* 0x1509CF9A: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509CFC8; /* 0x1509CF9F: je 0x1509cfc8 */
L_1509CFA1:
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509CFA1: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509CFA6: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509CFAB: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509CFBC; /* 0x1509CFAE: je 0x1509cfbc */
L_1509CFB0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509CFB0: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM32(0x15014A7C); _xmm[0].u64[1] = 0; /* 0x1509CFB3: movss xmm0, dword ptr [0x15014a7c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CFBB: ret  */
L_1509CFBC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509CFBC: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM32(0x15014A74); _xmm[0].u64[1] = 0; /* 0x1509CFBF: movss xmm0, dword ptr [0x15014a74] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CFC7: ret  */
L_1509CFC8:
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509CFC8: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509CFCD: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509CFD2: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D0AC; /* 0x1509CFD5: je 0x1509d0ac */
L_1509CFDB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509CFDB: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509CFDE: xorps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CFE1: ret  */
L_1509CFE2:
    eax = (uint32_t)_xmm[1].u16[3]; /* 0x1509CFE2: pextrw eax, xmm1, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509CFE7: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509CFEC: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D0AC; /* 0x1509CFEF: je 0x1509d0ac */
L_1509CFF5:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509CFF5: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509CFF8: xorps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509CFFB: ret  */
L_1509CFFC:
    eax = _xmm[4].u32[0]; /* 0x1509CFFC: movd eax, xmm4 */
    /* cmp eax, 0x80000000u */ /* 0x1509D000: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509CEF2; /* 0x1509D005: je 0x1509cef2 */
L_1509D00B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D00B: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM32(0x15014A80); _xmm[0].u64[1] = 0; /* 0x1509D00E: movss xmm0, dword ptr [0x15014a80] */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1509D016: mulss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D01A: ret  */
L_1509D01B:
    eax = MEM32(esp + 0x8); /* 0x1509D01B: mov eax, dword ptr [esp + 8] */
    ecx = eax; /* 0x1509D01F: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x1509D021: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1509D026: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509D0B8; /* 0x1509D02B: ja 0x1509d0b8 */
L_1509D031:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    ecx = ecx & 0x80000000u; /* 0x1509D031: and ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = _xmm[4].u32[0]; /* 0x1509D037: movd edx, xmm4 */
    _flag_a = (uint32_t)((edx ^ 0xBF800000u)); _flag_b = (uint32_t)((edx ^ 0xBF800000u));
    edx = edx ^ 0xBF800000u; /* 0x1509D03B: xor edx, 0xbf800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0 */ /* 0x1509D041: cmp edx, 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D076; /* 0x1509D044: je 0x1509d076 */
L_1509D046:
    /* cmp ecx, 0 */ /* 0x1509D046: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D094; /* 0x1509D049: je 0x1509d094 */
L_1509D04B:
    eax = _xmm[4].u32[0]; /* 0x1509D04B: movd eax, xmm4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x1509D04F: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x3F800000u */ /* 0x1509D054: cmp eax, 0x3f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509D06F; /* 0x1509D059: jae 0x1509d06f */
L_1509D05B:
    /* cmp eax, 0 */ /* 0x1509D05B: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509D0AC; /* 0x1509D05E: jne 0x1509d0ac */
L_1509D060:
    ecx = 0x3F800000u; /* 0x1509D060: mov ecx, 0x3f800000 */
    _xmm[5].u64[0] = (uint32_t)(ecx); _xmm[5].u64[1] = 0; /* 0x1509D065: movd xmm5, ecx */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] / _s); } /* 0x1509D069: divss xmm5, xmm4 */
    goto L_1509D0AC; /* 0x1509D06D: jmp 0x1509d0ac */
L_1509D06F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D06F: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509D072: xorps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D075: ret  */
L_1509D076:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1509D076: sub esp, 0x10 */
    _flag_k = FK_CMP;
    MEM32(esp + 0xC) = g_mxcsr; /* 0x1509D079: stmxcsr dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFDEu);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) & 0xFFFFFFDEu; /* 0x1509D07E: and dword ptr [esp + 0xc], 0xffffffde */
    _cf = 0;
    _flag_k = FK_TEST;
    g_mxcsr = MEM32(esp + 0xC); /* 0x1509D083: ldmxcsr dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1509D088: add esp, 0x1c */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM32(0x15014A78); _xmm[0].u64[1] = 0; /* 0x1509D08B: movss xmm0, dword ptr [0x15014a78] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D093: ret  */
L_1509D094:
    eax = (uint32_t)_xmm[4].u16[1]; /* 0x1509D094: pextrw eax, xmm4, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F80u);
    eax = eax & 0x7F80u; /* 0x1509D099: and eax, 0x7f80 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x3F80u */ /* 0x1509D09E: cmp eax, 0x3f80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3F80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509D0AC; /* 0x1509D0A3: jae 0x1509d0ac */
L_1509D0A5:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D0A5: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509D0A8: xorps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D0AB: ret  */
L_1509D0AC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D0AC: add esp, 0xc */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM32(0x15014A70); _xmm[0].u64[1] = 0; /* 0x1509D0AF: movss xmm0, dword ptr [0x15014a70] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D0B7: ret  */
L_1509D0B8:
    _xmm[1].u64[0] = MEM32(esp + 0x8); _xmm[1].u64[1] = 0; /* 0x1509D0B8: movss xmm1, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D0BE: add esp, 0xc */
    _flag_k = FK_ADD;
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x1509D0C1: addss xmm1, xmm1 */
    _xmm[0].u32[0] = _xmm[1].u32[0]; /* 0x1509D0C5: movss xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D0C9: ret  */
L_1509D0CA:
    eax = _xmm[4].u32[0]; /* 0x1509D0CA: movd eax, xmm4 */
    _xmm[0].u64[0] = MEM32(0x15014A78); _xmm[0].u64[1] = 0; /* 0x1509D0CE: movss xmm0, dword ptr [0x15014a78] */
    /* cmp eax, 0 */ /* 0x1509D0D6: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D0F2; /* 0x1509D0D9: je 0x1509d0f2 */
L_1509D0DB:
    eax = _xmm[4].u32[0]; /* 0x1509D0DB: movd eax, xmm4 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1509D0DF: xorps xmm2, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x1509D0E2: addss xmm4, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x1509D0E6: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1509D0EB: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509D0F2; /* 0x1509D0F0: ja 0x1509d0f2 */
L_1509D0F2:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D0F2: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D0F5: ret  */
L_1509D0F6:
    /* cmp eax, 0x2000u */ /* 0x1509D0F6: cmp eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1509D193; /* 0x1509D0FB: jge 0x1509d193 */
L_1509D101:
    /* cmp eax, 0xFFFFE000u */ /* 0x1509D101: cmp eax, 0xffffe000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFE000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1509D1AA; /* 0x1509D106: jle 0x1509d1aa */
L_1509D10C:
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1509D10C: xorpd xmm1, xmm1 */
    edx = eax; /* 0x1509D110: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1509D112: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1509D115: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[3].u64[0] = MEM64(eax * 8 + 0x150148F0); /* 0x1509D118: movlpd xmm3, qword ptr [eax*8 + 0x150148f0] */
    eax = edx; /* 0x1509D121: mov eax, edx */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1509D123: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1509D125: sub eax, edx */
    _flag_k = FK_CMP;
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1509D127: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1509D127: shl edx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3FFu; /* 0x1509D12A: add eax, 0x3ff */
    _flag_k = FK_ADD;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1509D12F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1509D12F: shl eax, 4 */
    _flag_a = (uint32_t)((ecx | 0x3FF0u)); _flag_b = (uint32_t)((ecx | 0x3FF0u));
    ecx = ecx | 0x3FF0u; /* 0x1509D132: or ecx, 0x3ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1509D138: add ecx, edx */
    _flag_k = FK_ADD;
    _xmm[6].u16[3] = (uint16_t)(ecx); /* 0x1509D13A: pinsrw xmm6, ecx, 3 */
    _xmm[1].u16[3] = (uint16_t)(eax); /* 0x1509D13F: pinsrw xmm1, eax, 3 */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509D144: mulpd xmm7, xmm5 */
    { double _s = _xmm[5].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509D148: mulsd xmm5, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509D14C: mulsd xmm4, xmm3 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[2] = _d; } /* 0x1509D150: addpd xmm2, xmm7 */
    { double _s = _xmm[6].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D154: mulsd xmm3, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509D158: mulsd xmm4, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509D15C: mulsd xmm5, xmm2 */
    { xmm_t _s = _xmm[2]; _xmm[0].u32[0] = _s.u32[2]; _xmm[0].u32[1] = _s.u32[3]; _xmm[0].u32[2] = _s.u32[2]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x1509D160: pshufd xmm0, xmm2, 0xee */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509D165: addsd xmm0, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D169: mulsd xmm0, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509D16D: addsd xmm0, xmm3 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D171: mulsd xmm0, xmm1 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x1509D175: cvtpd2ps xmm0, xmm0 */
    eax = (uint32_t)_xmm[0].u16[1]; /* 0x1509D179: pextrw eax, xmm0, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x1509D17E: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F80u */ /* 0x1509D183: cmp eax, 0x7f80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509D18F; /* 0x1509D188: jae 0x1509d18f */
L_1509D18A:
    /* cmp eax, 0x10u */ /* 0x1509D18A: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509D18F; /* 0x1509D18D: jb 0x1509d18f */
L_1509D18F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D18F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D192: ret  */
L_1509D193:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D193: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx | 0x7F7Fu)); _flag_b = (uint32_t)((ecx | 0x7F7Fu));
    ecx = ecx | 0x7F7Fu; /* 0x1509D196: or ecx, 0x7f7f */
    _cf = 0;
    _flag_k = FK_TEST;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509D19C: xorpd xmm0, xmm0 */
    _xmm[0].u16[1] = (uint16_t)(ecx); /* 0x1509D1A0: pinsrw xmm0, ecx, 1 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1509D1A5: addss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D1A9: ret  */
L_1509D1AA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D1AA: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = 0x00800000u; /* 0x1509D1AD: mov eax, 0x800000 */
    _xmm[5].u64[0] = (uint32_t)(eax); _xmm[5].u64[1] = 0; /* 0x1509D1B2: movd xmm5, eax */
    { float _s = _xmm[5].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x1509D1B6: mulss xmm5, xmm5 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1509D1BA: xorpd xmm0, xmm0 */
    _xmm[0].u16[1] = (uint16_t)(ecx); /* 0x1509D1BE: pinsrw xmm0, ecx, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D1C3: ret  */
L_1509D1C4:
    edx = MEM32(esp + 0x4); /* 0x1509D1C4: mov edx, dword ptr [esp + 4] */
    _xmm[4].u64[0] = MEM32(esp + 0x4); _xmm[4].u64[1] = 0; /* 0x1509D1C8: movss xmm4, dword ptr [esp + 4] */
    /* cmp edx, 0x3F800000u */ /* 0x1509D1CE: cmp edx, 0x3f800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D076; /* 0x1509D1D4: je 0x1509d076 */
L_1509D1DA:
    eax = MEM32(esp + 0x8); /* 0x1509D1DA: mov eax, dword ptr [esp + 8] */
    _xmm[1].u64[0] = MEM32(esp + 0x8); _xmm[1].u64[1] = 0; /* 0x1509D1DE: movss xmm1, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x1509D1E4: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1509D1E9: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509D01B; /* 0x1509D1EE: jae 0x1509d01b */
L_1509D1F4:
    /* cmp eax, 0 */ /* 0x1509D1F4: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D0CA; /* 0x1509D1F7: je 0x1509d0ca */
L_1509D1FD:
    edx = (uint32_t)_xmm[0].u16[3]; /* 0x1509D1FD: pextrw edx, xmm0, 3 */
    eax = edx; /* 0x1509D202: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FF0u);
    edx = edx & 0x7FF0u; /* 0x1509D204: and edx, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x3E60u */ /* 0x1509D20A: cmp edx, 0x3e60 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3E60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509D222; /* 0x1509D210: jbe 0x1509d222 */
L_1509D212:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1509D212: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0 */ /* 0x1509D217: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D193; /* 0x1509D21A: je 0x1509d193 */
L_1509D220:
    RECOMP_BACKEDGE();
    goto L_1509D1AA; /* 0x1509D220: jmp 0x1509d1aa */
L_1509D222:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509D222: add esp, 0xc */
    _flag_k = FK_ADD;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1509D225: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1509D225: shl ecx, 0x10 */
    _flag_a = (uint32_t)((ecx | 0x3F800000u)); _flag_b = (uint32_t)((ecx | 0x3F800000u));
    ecx = ecx | 0x3F800000u; /* 0x1509D228: or ecx, 0x3f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x1509D22E: movd xmm0, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D232: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509D240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509D240u);

L_1509D240:
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509D240: pextrw eax, xmm0, 3 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    SET_LO16(eax, LO16(eax) & 0x7FFFu); /* 0x1509D245: and ax, 0x7fff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x3030u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - 0x3030u); /* 0x1509D249: sub ax, 0x3030 */
    _flag_k = FK_NARROW(FK_CMP, 16);
    /* cmp LO16(eax), 0x10C5u */ /* 0x1509D24D: cmp ax, 0x10c5 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x10C5u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1509D38D; /* 0x1509D251: ja 0x1509d38d */
L_1509D257:
    _xmm[1].u64[0] = MEM64(0x150152F0); _xmm[1].u64[1] = 0; /* 0x1509D257: movsd xmm1, qword ptr [0x150152f0] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509D25F: mulsd xmm1, xmm0 */
    _xmm[2].u64[0] = MEM64(0x150152F8); _xmm[2].u64[1] = 0; /* 0x1509D263: movsd xmm2, qword ptr [0x150152f8] */
    edx = (uint32_t)sse_cvt_i32((double)_xmm[1].f64[0], 0); /* 0x1509D26B: cvtsd2si edx, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509D26F: addsd xmm1, xmm2 */
    _xmm[3].u64[0] = MEM64(0x150152E0); _xmm[3].u64[1] = 0; /* 0x1509D273: movsd xmm3, qword ptr [0x150152e0] */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509D27B: subsd xmm1, xmm2 */
    _xmm[2] = xmm_ld(0x150152D0); /* 0x1509D27F: movapd xmm2, xmmword ptr [0x150152d0] */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D287: mulsd xmm3, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u64[0] = _d.u64[0]; _xmm[1].u64[1] = _s.u64[0]; } /* 0x1509D28B: unpcklpd xmm1, xmm1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x001C7600u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x001C7600u; /* 0x1509D28F: add edx, 0x1c7600 */
    _flag_k = FK_ADD;
    _xmm[4].u64[0] = _xmm[0].u64[0]; /* 0x1509D295: movsd xmm4, xmm0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Fu);
    edx = edx & 0x3Fu; /* 0x1509D299: and edx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[5] = xmm_ld(0x150152C0); /* 0x1509D29C: movapd xmm5, xmmword ptr [0x150152c0] */
    eax = 0x15014A90; /* 0x1509D2A4: lea eax, [0x15014a90] */
    if (5u) _cf = (((edx) >> 27) & 1u); /* 0x1509D2AA: shl edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 5u; /* 0x1509D2AA: shl edx, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1509D2AD: add eax, edx */
    _flag_k = FK_ADD;
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509D2AF: mulpd xmm2, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509D2B3: subsd xmm0, xmm3 */
    { double _s = sse_f64(MEM64(0x150152E8)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x1509D2B7: mulsd xmm1, qword ptr [0x150152e8] */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509D2BF: subsd xmm4, xmm3 */
    _xmm[7].u64[0] = MEM64(eax + 0x8); _xmm[7].u64[1] = 0; /* 0x1509D2C3: movsd xmm7, qword ptr [eax + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509D2C8: unpcklpd xmm0, xmm0 */
    _xmm[3].u64[0] = _xmm[4].u64[0]; /* 0x1509D2CC: movsd xmm3, xmm4 */
    { double _s = _xmm[2].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509D2D0: subsd xmm4, xmm2 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[5] = _d; } /* 0x1509D2D4: mulpd xmm5, xmm0 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x1509D2D8: subpd xmm0, xmm2 */
    _xmm[6] = xmm_ld(0x150152A0); /* 0x1509D2DC: movapd xmm6, xmmword ptr [0x150152a0] */
    { double _s = _xmm[4].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509D2E4: mulsd xmm7, xmm4 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509D2E8: subsd xmm3, xmm4 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[5] = _d; } /* 0x1509D2EC: mulpd xmm5, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509D2F0: mulpd xmm0, xmm0 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509D2F4: subsd xmm3, xmm2 */
    _xmm[2] = xmm_ld(eax); /* 0x1509D2F8: movapd xmm2, xmmword ptr [eax] */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x1509D2FC: subsd xmm1, xmm3 */
    _xmm[3].u64[0] = MEM64(eax + 0x18); _xmm[3].u64[1] = 0; /* 0x1509D300: movsd xmm3, qword ptr [eax + 0x18] */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509D305: addsd xmm2, xmm3 */
    { double _s = _xmm[2].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x1509D309: subsd xmm7, xmm2 */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509D30D: mulsd xmm2, xmm4 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509D311: mulpd xmm6, xmm0 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D315: mulsd xmm3, xmm4 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x1509D319: mulpd xmm2, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509D31D: mulpd xmm0, xmm0 */
    { double _s0 = sse_f64(MEM64(0x150152B0)); double _s1 = sse_f64(MEM64(0x150152B0 + 8)); xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[5] = _d; } /* 0x1509D321: addpd xmm5, xmmword ptr [0x150152b0] */
    { double _s = sse_f64(MEM64(eax)); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509D329: mulsd xmm4, qword ptr [eax] */
    { double _s0 = sse_f64(MEM64(0x15015290)); double _s1 = sse_f64(MEM64(0x15015290 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x1509D32D: addpd xmm6, xmmword ptr [0x15015290] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[5] = _d; } /* 0x1509D335: mulpd xmm5, xmm0 */
    _xmm[0].u64[0] = _xmm[3].u64[0]; /* 0x1509D339: movsd xmm0, xmm3 */
    { double _s = sse_f64(MEM64(eax + 0x8)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509D33D: addsd xmm3, qword ptr [eax + 8] */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509D342: mulpd xmm1, xmm7 */
    _xmm[7].u64[0] = _xmm[4].u64[0]; /* 0x1509D346: movsd xmm7, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509D34A: addsd xmm4, xmm3 */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x1509D34E: addpd xmm6, xmm5 */
    _xmm[5].u64[0] = MEM64(eax + 0x8); _xmm[5].u64[1] = 0; /* 0x1509D352: movsd xmm5, qword ptr [eax + 8] */
    { double _s = _xmm[3].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x1509D357: subsd xmm5, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509D35B: subsd xmm3, xmm4 */
    { double _s = sse_f64(MEM64(eax + 0x10)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509D35F: addsd xmm1, qword ptr [eax + 0x10] */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x1509D364: mulpd xmm6, xmm2 */
    { double _s = _xmm[0].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509D368: addsd xmm5, xmm0 */
    { double _s = _xmm[7].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509D36C: addsd xmm3, xmm7 */
    { double _s = _xmm[5].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509D370: addsd xmm1, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509D374: addsd xmm1, xmm3 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509D378: addsd xmm1, xmm6 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u64[0] = _d.u64[1]; _xmm[6].u64[1] = _s.u64[1]; } /* 0x1509D37C: unpckhpd xmm6, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509D380: addsd xmm1, xmm6 */
    { double _s = _xmm[1].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509D384: addsd xmm4, xmm1 */
    _xmm[0] = _xmm[4]; /* 0x1509D388: movapd xmm0, xmm4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D38C: ret  */
L_1509D38D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1509D3BB; /* 0x1509D38D: jg 0x1509d3bb */
L_1509D38F:
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x1509D38F: shr ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 4u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 4u); /* 0x1509D38F: shr ax, 4 */
    /* cmp LO16(eax), 0xCFDu */ /* 0x1509D393: cmp ax, 0xcfd */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xCFDu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509D3A2; /* 0x1509D397: jne 0x1509d3a2 */
L_1509D399:
    { double _s = sse_f64(MEM64(0x15015310)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D399: mulsd xmm0, qword ptr [0x15015310] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D3A1: ret  */
L_1509D3A2:
    _xmm[3].u64[0] = MEM64(0x15015300); _xmm[3].u64[1] = 0; /* 0x1509D3A2: movsd xmm3, qword ptr [0x15015300] */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D3AA: mulsd xmm3, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509D3AE: subsd xmm3, xmm0 */
    { double _s = sse_f64(MEM64(0x15015308)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D3B2: mulsd xmm3, qword ptr [0x15015308] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D3BA: ret  */
L_1509D3BB:
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509D3BB: pextrw eax, xmm0, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x1509D3C0: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF0u */ /* 0x1509D3C5: cmp eax, 0x7ff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D3EF; /* 0x1509D3CA: je 0x1509d3ef */
L_1509D3CC:
    eax = esp; /* 0x1509D3CC: mov eax, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1509D3CE: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1509D3D1: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x1509D3D4: mov dword ptr [esp + 8], eax */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x1509D3D8: movq qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_15099600); /* 0x1509D3DD: call 0x15099600 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1509D3E2: fstp qword ptr [esp] */
    _xmm[0].u64[0] = MEM64(esp); _xmm[0].u64[1] = 0; /* 0x1509D3E5: movq xmm0, qword ptr [esp] */
    esp = MEM32(esp + 0x8); /* 0x1509D3EA: mov esp, dword ptr [esp + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D3EE: ret  */
L_1509D3EF:
    { double _s = sse_f64(MEM64(0x15015318)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D3EF: mulsd xmm0, qword ptr [0x15015318] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D3F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509D400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509D400u);

L_1509D400:
    eax = (uint32_t)_xmm[0].u16[1]; /* 0x1509D400: pextrw eax, xmm0, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    SET_LO16(eax, LO16(eax) & 0x7FFFu); /* 0x1509D405: and ax, 0x7fff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x80u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - 0x80u); /* 0x1509D409: sub ax, 0x80 */
    _flag_k = FK_NARROW(FK_CMP, 16);
    /* cmp LO16(eax), 0x457Fu */ /* 0x1509D40D: cmp ax, 0x457f */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x457Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1509D500; /* 0x1509D411: ja 0x1509d500 */
L_1509D417:
    _xmm[1].u64[0] = MEM64(0x15015770); _xmm[1].u64[1] = 0; /* 0x1509D417: movsd xmm1, qword ptr [0x15015770] */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509D41F: mulss xmm1, xmm0 */
    _xmm[3] = xmm_ld(0x15015720); /* 0x1509D423: movapd xmm3, xmmword ptr [0x15015720] */
    edx = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 0); /* 0x1509D42B: cvtss2si edx, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1509D42F: andpd xmm3, xmm0 */
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509D433: cvtss2sd xmm0, xmm0 */
    { float _s = sse_f32(MEM32(0x15015778)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x1509D437: addss xmm1, dword ptr [0x15015778] */
    { float _s = sse_f32(MEM32(0x15015778)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1509D43F: subss xmm1, dword ptr [0x15015778] */
    _xmm[4] = _xmm[3]; /* 0x1509D447: movapd xmm4, xmm3 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x1509D44B: psllq xmm3, 0x20 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] << _c); } /* 0x1509D450: psllq xmm4, 0x1d */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509D455: xorpd xmm3, xmm4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x001C7600u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x001C7600u; /* 0x1509D459: add edx, 0x1c7600 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Fu);
    edx = edx & 0x3Fu; /* 0x1509D45F: and edx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[2].u64[0] = MEM64(0x15015738); _xmm[2].u64[1] = 0; /* 0x1509D462: movsd xmm2, qword ptr [0x15015738] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1509D46A: xorpd xmm2, xmm3 */
    { xmm_t _s = xmm_ld(0x15015730); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509D46E: xorpd xmm3, xmmword ptr [0x15015730] */
    eax = 0x15015320; /* 0x1509D476: lea eax, [0x15015320] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1509D47C: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1509D47C: shl edx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1509D47F: add eax, edx */
    _flag_k = FK_ADD;
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509D481: psllq xmm1, 0x1d */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509D486: mulsd xmm2, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D48A: mulsd xmm3, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509D48E: subsd xmm0, xmm2 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509D492: addsd xmm3, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D496: mulsd xmm0, xmm0 */
    _xmm[4].u64[0] = MEM64(0x15015758); _xmm[4].u64[1] = 0; /* 0x1509D49A: movsd xmm4, qword ptr [0x15015758] */
    _xmm[5].u64[0] = MEM64(0x15015748); _xmm[5].u64[1] = 0; /* 0x1509D4A2: movsd xmm5, qword ptr [0x15015748] */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509D4AA: mulsd xmm4, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509D4AE: mulsd xmm5, xmm0 */
    _xmm[6].u64[0] = MEM64(0x15015760); _xmm[6].u64[1] = 0; /* 0x1509D4B2: movsd xmm6, qword ptr [0x15015760] */
    _xmm[7].u64[0] = MEM64(0x15015750); _xmm[7].u64[1] = 0; /* 0x1509D4BA: movsd xmm7, qword ptr [0x15015750] */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D4C2: mulsd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(0x15015740)); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509D4C6: addsd xmm4, qword ptr [0x15015740] */
    { double _s = _xmm[0].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509D4CE: mulsd xmm6, xmm0 */
    { double _s = sse_f64(MEM64(0x15015740)); _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509D4D2: addsd xmm5, qword ptr [0x15015740] */
    { double _s = _xmm[0].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509D4DA: mulsd xmm7, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509D4DE: addsd xmm4, xmm6 */
    { double _s = _xmm[7].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509D4E2: addsd xmm5, xmm7 */
    _xmm[2].u64[0] = MEM64(eax); _xmm[2].u64[1] = 0; /* 0x1509D4E6: movsd xmm2, qword ptr [eax] */
    { double _s = sse_f64(MEM64(eax + 0x8)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D4EA: mulsd xmm3, qword ptr [eax + 8] */
    { double _s = _xmm[4].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509D4EF: mulsd xmm2, xmm4 */
    { double _s = _xmm[5].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D4F3: mulsd xmm3, xmm5 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509D4F7: addsd xmm2, xmm3 */
    _xmm[0].f32[0] = (float)_xmm[2].f64[0]; /* 0x1509D4FB: cvtsd2ss xmm0, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D4FF: ret  */
L_1509D500:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1509D513; /* 0x1509D500: jg 0x1509d513 */
L_1509D502:
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509D502: cvtss2sd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(0x15015768)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D506: mulsd xmm0, qword ptr [0x15015768] */
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x1509D50E: cvtsd2ss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D512: ret  */
L_1509D513:
    eax = _xmm[0].u32[0]; /* 0x1509D513: movd eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x1509D517: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1509D51C: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D54A; /* 0x1509D521: je 0x1509d54a */
L_1509D523:
    eax = esp; /* 0x1509D523: mov eax, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1509D525: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1509D528: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x1509D52B: mov dword ptr [esp + 8], eax */
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509D52F: cvtss2sd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x1509D533: movq qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_15099600); /* 0x1509D538: call 0x15099600 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1509D53D: fstp dword ptr [esp] */
    _xmm[0].u64[0] = MEM32(esp); _xmm[0].u64[1] = 0; /* 0x1509D540: movss xmm0, dword ptr [esp] */
    esp = MEM32(esp + 0x8); /* 0x1509D545: mov esp, dword ptr [esp + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D549: ret  */
L_1509D54A:
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509D54A: subss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D54E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509D560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509D560u);

L_1509D560:
    eax = (uint32_t)_xmm[0].u16[3]; /* 0x1509D560: pextrw eax, xmm0, 3 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    SET_LO16(eax, LO16(eax) & 0x7FFFu); /* 0x1509D565: and ax, 0x7fff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x3820u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - 0x3820u); /* 0x1509D569: sub ax, 0x3820 */
    _flag_k = FK_NARROW(FK_CMP, 16);
    /* cmp LO16(eax), 0x8A8u */ /* 0x1509D56D: cmp ax, 0x8a8 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x8A8u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1509D73E; /* 0x1509D571: ja 0x1509d73e */
L_1509D577:
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[0]; _xmm[0].u64[1] = _s.u64[0]; } /* 0x1509D577: unpcklpd xmm0, xmm0 */
    _xmm[1] = xmm_ld(0x15016D80); /* 0x1509D57B: movapd xmm1, xmmword ptr [0x15016d80] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509D583: mulpd xmm1, xmm0 */
    edx = (uint32_t)sse_cvt_i32((double)_xmm[1].f64[0], 0); /* 0x1509D587: cvtsd2si edx, xmm1 */
    _xmm[2] = xmm_ld(0x15016D90); /* 0x1509D58B: movapd xmm2, xmmword ptr [0x15016d90] */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509D593: addpd xmm1, xmm2 */
    _xmm[3] = xmm_ld(0x15016DA0); /* 0x1509D597: movapd xmm3, xmmword ptr [0x15016da0] */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[1] = _d; } /* 0x1509D59F: subpd xmm1, xmm2 */
    _xmm[5].u64[0] = MEM64(0x15016DD8); _xmm[5].u64[1] = 0; /* 0x1509D5A3: movsd xmm5, qword ptr [0x15016dd8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00072900u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x00072900u; /* 0x1509D5AB: add edx, 0x72900 */
    _flag_k = FK_ADD;
    _xmm[4] = xmm_ld(0x15016DB0); /* 0x1509D5B1: movapd xmm4, xmmword ptr [0x15016db0] */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x1509D5B9: mulpd xmm3, xmm1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1509D5BD: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _s = _xmm[1].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509D5C0: mulsd xmm5, xmm1 */
    ecx = edx; /* 0x1509D5C4: mov ecx, edx */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x1509D5C6: mulpd xmm4, xmm1 */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x1509D5CA: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x1509D5CA: shl ecx, 1 */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x1509D5CC: subpd xmm0, xmm3 */
    { double _s0 = sse_f64(MEM64(0x15016DC0)); double _s1 = sse_f64(MEM64(0x15016DC0 + 8)); xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509D5D0: mulpd xmm1, xmmword ptr [0x15016dc0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1509D5D8: add edx, ecx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1509D5DA: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1509D5DA: shl ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1509D5DD: add edx, ecx */
    _flag_k = FK_ADD;
    { double _s = _xmm[0].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509D5DF: addsd xmm5, xmm0 */
    _xmm[2] = _xmm[0]; /* 0x1509D5E3: movapd xmm2, xmm0 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x1509D5E7: subpd xmm0, xmm4 */
    _xmm[6].u64[0] = MEM64(0x15016DE0); _xmm[6].u64[1] = 0; /* 0x1509D5EB: movsd xmm6, qword ptr [0x15016de0] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1509D5F3: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1509D5F3: shl edx, 4 */
    eax = 0x15015780; /* 0x1509D5F6: lea eax, [0x15015780] */
    { xmm_t _s = xmm_ld(0x15016DF0); for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x1509D5FC: andpd xmm5, xmmword ptr [0x15016df0] */
    _xmm[3] = _xmm[0]; /* 0x1509D604: movapd xmm3, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1509D608: add eax, edx */
    _flag_k = FK_ADD;
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x1509D60A: subpd xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u64[0] = _d.u64[1]; _xmm[0].u64[1] = _s.u64[1]; } /* 0x1509D60E: unpckhpd xmm0, xmm0 */
    { double _s = _xmm[5].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] / _s); } /* 0x1509D612: divsd xmm6, xmm5 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x1509D616: subpd xmm2, xmm4 */
    _xmm[7] = xmm_ld(eax + 0x10); /* 0x1509D61A: movapd xmm7, xmmword ptr [eax + 0x10] */
    { double _s = _xmm[5].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509D61F: subsd xmm3, xmm5 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x1509D623: mulpd xmm7, xmm0 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x1509D627: subpd xmm2, xmm1 */
    _xmm[1] = xmm_ld(eax + 0x30); /* 0x1509D62B: movapd xmm1, xmmword ptr [eax + 0x30] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509D630: mulpd xmm1, xmm0 */
    _xmm[4] = xmm_ld(eax + 0x60); /* 0x1509D634: movapd xmm4, xmmword ptr [eax + 0x60] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x1509D639: mulpd xmm4, xmm0 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509D63D: addsd xmm2, xmm3 */
    _xmm[3] = _xmm[0]; /* 0x1509D641: movapd xmm3, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509D645: mulpd xmm0, xmm0 */
    { double _s0 = sse_f64(MEM64(eax)); double _s1 = sse_f64(MEM64(eax + 8)); xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509D649: addpd xmm7, xmmword ptr [eax] */
    { double _s0 = sse_f64(MEM64(eax + 0x20)); double _s1 = sse_f64(MEM64(eax + 0x20 + 8)); xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[1] = _d; } /* 0x1509D64D: addpd xmm1, xmmword ptr [eax + 0x20] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509D652: mulpd xmm1, xmm0 */
    { double _s0 = sse_f64(MEM64(eax + 0x50)); double _s1 = sse_f64(MEM64(eax + 0x50 + 8)); xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[4] = _d; } /* 0x1509D656: addpd xmm4, xmmword ptr [eax + 0x50] */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509D65B: addpd xmm7, xmm1 */
    _xmm[1] = xmm_ld(eax + 0x70); /* 0x1509D65F: movapd xmm1, xmmword ptr [eax + 0x70] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509D664: mulpd xmm1, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x1509D668: mulpd xmm0, xmm0 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[4] = _d; } /* 0x1509D66C: addpd xmm4, xmm1 */
    _xmm[1] = xmm_ld(eax + 0x40); /* 0x1509D670: movapd xmm1, xmmword ptr [eax + 0x40] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509D675: mulpd xmm1, xmm0 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509D679: addpd xmm7, xmm1 */
    _xmm[1] = _xmm[3]; /* 0x1509D67D: movapd xmm1, xmm3 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[3] = _d; } /* 0x1509D681: mulpd xmm3, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D685: mulsd xmm0, xmm0 */
    { double _s0 = sse_f64(MEM64(eax + 0x90)); double _s1 = sse_f64(MEM64(eax + 0x90 + 8)); xmm_t _d = _xmm[1]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[1] = _d; } /* 0x1509D689: mulpd xmm1, xmmword ptr [eax + 0x90] */
    { double _s0 = _xmm[3].f64[0]; double _s1 = _xmm[3].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x1509D691: mulpd xmm4, xmm3 */
    _xmm[3].u64[0] = _xmm[1].u64[0]; /* 0x1509D695: movsd xmm3, xmm1 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[7] = _d; } /* 0x1509D699: addpd xmm7, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[0]; /* 0x1509D69D: movsd xmm4, xmm1 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D6A1: mulsd xmm0, xmm7 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u64[0] = _d.u64[1]; _xmm[7].u64[1] = _s.u64[1]; } /* 0x1509D6A5: unpckhpd xmm7, xmm7 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509D6A9: addsd xmm0, xmm7 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u64[0] = _d.u64[1]; _xmm[1].u64[1] = _s.u64[1]; } /* 0x1509D6AD: unpckhpd xmm1, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509D6B1: addsd xmm3, xmm1 */
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509D6B5: subsd xmm4, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x1509D6B9: addsd xmm1, xmm4 */
    _xmm[4].u64[0] = _xmm[2].u64[0]; /* 0x1509D6BD: movsd xmm4, xmm2 */
    _xmm[7].u64[0] = MEM64(eax + 0x90); _xmm[7].u64[1] = 0; /* 0x1509D6C1: movsd xmm7, qword ptr [eax + 0x90] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u64[0] = _d.u64[1]; _xmm[2].u64[1] = _s.u64[1]; } /* 0x1509D6C9: unpckhpd xmm2, xmm2 */
    { double _s = sse_f64(MEM64(eax + 0x98)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509D6CD: addsd xmm7, qword ptr [eax + 0x98] */
    { double _s = _xmm[2].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509D6D5: mulsd xmm7, xmm2 */
    { double _s = sse_f64(MEM64(eax + 0x88)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509D6D9: addsd xmm7, qword ptr [eax + 0x88] */
    { double _s = _xmm[1].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] + _s); } /* 0x1509D6E1: addsd xmm7, xmm1 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509D6E5: addsd xmm0, xmm7 */
    _xmm[7].u64[0] = MEM64(0x15016DE0); _xmm[7].u64[1] = 0; /* 0x1509D6E9: movsd xmm7, qword ptr [0x15016de0] */
    { double _s = _xmm[6].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509D6F1: mulsd xmm4, xmm6 */
    _xmm[2].u64[0] = MEM64(eax + 0xA8); _xmm[2].u64[1] = 0; /* 0x1509D6F5: movsd xmm2, qword ptr [eax + 0xa8] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1509D6FD: andpd xmm2, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509D701: mulsd xmm5, xmm2 */
    { double _s = sse_f64(MEM64(eax + 0xA0)); _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509D705: mulsd xmm6, qword ptr [eax + 0xa0] */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x1509D70D: subsd xmm7, xmm5 */
    { double _s = sse_f64(MEM64(eax + 0x80)); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x1509D711: subsd xmm2, qword ptr [eax + 0x80] */
    { double _s = _xmm[4].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x1509D719: subsd xmm7, xmm4 */
    { double _s = _xmm[6].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509D71D: mulsd xmm7, xmm6 */
    _xmm[4].u64[0] = _xmm[3].u64[0]; /* 0x1509D721: movsd xmm4, xmm3 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509D725: subsd xmm3, xmm2 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509D729: addsd xmm2, xmm3 */
    { double _s = _xmm[2].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x1509D72D: subsd xmm4, xmm2 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509D731: addsd xmm0, xmm4 */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509D735: subsd xmm0, xmm7 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x1509D739: addsd xmm0, xmm3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D73D: ret  */
L_1509D73E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1509D773; /* 0x1509D73E: jg 0x1509d773 */
L_1509D740:
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x1509D740: shr ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 4u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 4u); /* 0x1509D740: shr ax, 4 */
    /* cmp LO16(eax), 0xC7Eu */ /* 0x1509D744: cmp ax, 0xc7e */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xC7Eu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509D756; /* 0x1509D748: jne 0x1509d756 */
L_1509D74A:
    _xmm[3].u64[0] = _xmm[0].u64[0]; /* 0x1509D74A: movsd xmm3, xmm0 */
    { double _s = sse_f64(MEM64(0x15016E08)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D74E: mulsd xmm3, qword ptr [0x15016e08] */
L_1509D756:
    _xmm[3].u64[0] = MEM64(0x15016E00); _xmm[3].u64[1] = 0; /* 0x1509D756: movsd xmm3, qword ptr [0x15016e00] */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D75E: mulsd xmm3, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509D762: addsd xmm3, xmm0 */
    { double _s = sse_f64(MEM64(0x15016E08)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D766: mulsd xmm3, qword ptr [0x15016e08] */
    _xmm[0] = _xmm[3]; /* 0x1509D76E: movapd xmm0, xmm3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D772: ret  */
L_1509D773:
    _xmm[7].u64[0] = MEM64(0x15016DD0); _xmm[7].u64[1] = 0; /* 0x1509D773: movq xmm7, qword ptr [0x15016dd0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509D77B: andpd xmm7, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509D77F: xorpd xmm7, xmm0 */
    _flag_a = SSE_COMI(_xmm[7].f64[0], sse_f64(MEM64(0x15016DE8))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x1509D783: ucomisd xmm7, qword ptr [0x15016de8] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_1509D7B0; /* 0x1509D78B: je 0x1509d7b0 */
L_1509D78D:
    eax = esp; /* 0x1509D78D: mov eax, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1509D78F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1509D792: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x1509D795: mov dword ptr [esp + 8], eax */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x1509D799: movq qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_150997F0); /* 0x1509D79E: call 0x150997f0 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1509D7A3: fstp qword ptr [esp] */
    _xmm[0].u64[0] = MEM64(esp); _xmm[0].u64[1] = 0; /* 0x1509D7A6: movq xmm0, qword ptr [esp] */
    esp = MEM32(esp + 0x8); /* 0x1509D7AB: mov esp, dword ptr [esp + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D7AF: ret  */
L_1509D7B0:
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x1509D7B0: subsd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D7B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509D7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509D7C0u);

L_1509D7C0:
    eax = (uint32_t)_xmm[0].u16[1]; /* 0x1509D7C0: pextrw eax, xmm0, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    SET_LO16(eax, LO16(eax) & 0x7FFFu); /* 0x1509D7C5: and ax, 0x7fff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x80u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - 0x80u); /* 0x1509D7C9: sub ax, 0x80 */
    _flag_k = FK_NARROW(FK_CMP, 16);
    /* cmp LO16(eax), 0x46FFu */ /* 0x1509D7CD: cmp ax, 0x46ff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x46FFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1509D911; /* 0x1509D7D1: ja 0x1509d911 */
L_1509D7D7:
    _xmm[1].u64[0] = MEM64(0x15017778); _xmm[1].u64[1] = 0; /* 0x1509D7D7: movsd xmm1, qword ptr [0x15017778] */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1509D7DF: mulss xmm1, xmm0 */
    _xmm[7] = xmm_ld(0x15017710); /* 0x1509D7E3: movapd xmm7, xmmword ptr [0x15017710] */
    edx = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 0); /* 0x1509D7EB: cvtss2si edx, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1509D7EF: andpd xmm7, xmm0 */
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509D7F3: cvtss2sd xmm0, xmm0 */
    _xmm[4].u64[0] = MEM64(0x15017780); _xmm[4].u64[1] = 0; /* 0x1509D7F7: movsd xmm4, qword ptr [0x15017780] */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x1509D7FF: addss xmm4, xmm1 */
    { float _s = sse_f32(MEM32(0x15017788)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x1509D803: addss xmm1, dword ptr [0x15017788] */
    { float _s = sse_f32(MEM32(0x15017780)); _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x1509D80B: subss xmm4, dword ptr [0x15017780] */
    { float _s = sse_f32(MEM32(0x15017788)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1509D813: subss xmm1, dword ptr [0x15017788] */
    _xmm[5] = _xmm[7]; /* 0x1509D81B: movapd xmm5, xmm7 */
    { uint64_t _c = 32u; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x1509D81F: psllq xmm7, 0x20 */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[5].u64[_k] << _c); } /* 0x1509D824: psllq xmm5, 0x1d */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x1509D829: xorpd xmm7, xmm5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x001C7600u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x001C7600u; /* 0x1509D82D: add edx, 0x1c7600 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1509D833: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[5].u64[0] = MEM64(0x15017750); _xmm[5].u64[1] = 0; /* 0x1509D836: movsd xmm5, qword ptr [0x15017750] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x1509D83E: xorpd xmm5, xmm7 */
    _xmm[2].u64[0] = MEM64(0x15017730); _xmm[2].u64[1] = 0; /* 0x1509D842: movsd xmm2, qword ptr [0x15017730] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1509D84A: xorpd xmm2, xmm7 */
    _xmm[6].u64[0] = MEM64(0x15017740); _xmm[6].u64[1] = 0; /* 0x1509D84E: movsd xmm6, qword ptr [0x15017740] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1509D856: xorpd xmm6, xmm7 */
    _xmm[3].u64[0] = MEM64(0x15017720); _xmm[3].u64[1] = 0; /* 0x1509D85A: movsd xmm3, qword ptr [0x15017720] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1509D862: xorpd xmm3, xmm7 */
    eax = 0x15016E10; /* 0x1509D866: lea eax, [0x15016e10] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x1509D86C: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x1509D86C: shl edx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1509D86F: add eax, edx */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x1509D871: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x1509D871: shl edx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1509D874: add eax, edx */
    _flag_k = FK_ADD;
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] << _c); } /* 0x1509D876: psllq xmm4, 0x1d */
    { uint64_t _c = 29u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1509D87B: psllq xmm1, 0x1d */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509D880: mulsd xmm5, xmm4 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509D884: mulsd xmm2, xmm1 */
    { double _s = _xmm[4].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509D888: mulsd xmm6, xmm4 */
    { double _s = _xmm[1].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D88C: mulsd xmm3, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509D890: addsd xmm5, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509D894: addsd xmm2, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509D898: addsd xmm5, xmm6 */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x1509D89C: addsd xmm2, xmm3 */
    _xmm[7].u64[0] = MEM64(0x15017760); _xmm[7].u64[1] = 0; /* 0x1509D8A0: movsd xmm7, qword ptr [0x15017760] */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] / _s); } /* 0x1509D8A8: divsd xmm7, xmm5 */
    { double _s = sse_f64(MEM64(eax + 0x40)); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x1509D8AC: mulsd xmm7, qword ptr [eax + 0x40] */
    _xmm[3].u64[0] = MEM64(eax + 0x38); _xmm[3].u64[1] = 0; /* 0x1509D8B1: movsd xmm3, qword ptr [eax + 0x38] */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D8B6: mulsd xmm3, xmm2 */
    _xmm[4].u64[0] = MEM64(eax + 0x18); _xmm[4].u64[1] = 0; /* 0x1509D8BA: movsd xmm4, qword ptr [eax + 0x18] */
    { double _s = _xmm[2].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509D8BF: mulsd xmm4, xmm2 */
    _xmm[5].u64[0] = MEM64(eax + 0x28); _xmm[5].u64[1] = 0; /* 0x1509D8C3: movsd xmm5, qword ptr [eax + 0x28] */
    { double _s = _xmm[2].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] * _s); } /* 0x1509D8C8: mulsd xmm5, xmm2 */
    _xmm[6].u64[0] = MEM64(eax + 0x8); _xmm[6].u64[1] = 0; /* 0x1509D8CC: movsd xmm6, qword ptr [eax + 8] */
    { double _s = _xmm[2].f64[0]; _xmm[6].f64[0] = (double)(_xmm[6].f64[0] * _s); } /* 0x1509D8D1: mulsd xmm6, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509D8D5: mulsd xmm2, xmm2 */
    { double _s = sse_f64(MEM64(eax + 0x30)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509D8D9: addsd xmm3, qword ptr [eax + 0x30] */
    { double _s = sse_f64(MEM64(eax + 0x10)); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509D8DE: addsd xmm4, qword ptr [eax + 0x10] */
    { double _s = sse_f64(MEM64(eax + 0x20)); _xmm[5].f64[0] = (double)(_xmm[5].f64[0] + _s); } /* 0x1509D8E3: addsd xmm5, qword ptr [eax + 0x20] */
    { double _s = sse_f64(MEM64(eax)); _xmm[6].f64[0] = (double)(_xmm[6].f64[0] + _s); } /* 0x1509D8E8: addsd xmm6, qword ptr [eax] */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D8EC: mulsd xmm3, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x1509D8F0: mulsd xmm4, xmm2 */
    { double _s = _xmm[2].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] * _s); } /* 0x1509D8F4: mulsd xmm2, xmm2 */
    { double _s = _xmm[5].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509D8F8: addsd xmm3, xmm5 */
    { double _s = _xmm[6].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] + _s); } /* 0x1509D8FC: addsd xmm4, xmm6 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x1509D900: mulsd xmm3, xmm2 */
    { double _s = _xmm[4].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x1509D904: addsd xmm3, xmm4 */
    { double _s = _xmm[7].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x1509D908: subsd xmm3, xmm7 */
    _xmm[0].f32[0] = (float)_xmm[3].f64[0]; /* 0x1509D90C: cvtsd2ss xmm0, xmm3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D910: ret  */
L_1509D911:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1509D924; /* 0x1509D911: jg 0x1509d924 */
L_1509D913:
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509D913: cvtss2sd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(0x15017770)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x1509D917: mulsd xmm0, qword ptr [0x15017770] */
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x1509D91F: cvtsd2ss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D923: ret  */
L_1509D924:
    eax = _xmm[0].u32[0]; /* 0x1509D924: movd eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x1509D928: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1509D92D: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509D95B; /* 0x1509D932: je 0x1509d95b */
L_1509D934:
    eax = esp; /* 0x1509D934: mov eax, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1509D936: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1509D939: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x1509D93C: mov dword ptr [esp + 8], eax */
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x1509D940: cvtss2sd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x1509D944: movq qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_150997F0); /* 0x1509D949: call 0x150997f0 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1509D94E: fstp dword ptr [esp] */
    _xmm[0].u64[0] = MEM32(esp); _xmm[0].u64[1] = 0; /* 0x1509D951: movss xmm0, dword ptr [esp] */
    esp = MEM32(esp + 0x8); /* 0x1509D956: mov esp, dword ptr [esp + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D95A: ret  */
L_1509D95B:
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1509D95B: subss xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D95F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509D970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509D970u);

L_1509D970:
    edi = edi; /* 0x1509D970: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1509D972: push ebp */
    ebp = esp; /* 0x1509D973: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1509D975: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15068652); /* 0x1509D978: call 0x15068652 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1509D97D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x150BEB68) = eax; /* 0x1509D980: mov dword ptr [0x150beb68], eax */
    MEM32(0x150BD7E8) = 0; /* 0x1509D985: mov dword ptr [0x150bd7e8], 0 */
    ebp = POP32_VAL(esp); /* 0x1509D98F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D990: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509D9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509D9A0u);

L_1509D9A0:
    edi = edi; /* 0x1509D9A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1509D9A2: push ebp */
    ebp = esp; /* 0x1509D9A3: mov ebp, esp */
    /* cmp MEM32(0x150BD7E8), 0 */ /* 0x1509D9A5: cmp dword ptr [0x150bd7e8], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BD7E8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1509D9AC: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509D9D6; /* 0x1509D9AD: jne 0x1509d9d6 */
L_1509D9AF:
    PUSH32(esp, MEM32(0x150BEB68)); /* 0x1509D9AF: push dword ptr [0x150beb68] */
    RECOMP_CALL(sub_1506863C); /* 0x1509D9B5: call 0x1506863c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1509D9BA: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1509D9BC: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1509D9BF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509D9D6; /* 0x1509D9C1: je 0x1509d9d6 */
L_1509D9C3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1509D9C3: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1509D9C6: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1509D9C8: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1509D9CE: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1509D9D0: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1509D9D3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1509D9D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D9D5: ret  */
L_1509D9D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509D9D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1509D9D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1509D9D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509D9DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509D9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509D9F0u);

L_1509D9F0:
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x1509D9F0: fld xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x4))); /* 0x1509D9F4: fld xword ptr [esp + 4] */
L_1509D9F8:
    eax = MEM32(esp + 0x8); /* 0x1509D9F8: mov eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509D9FC: add eax, eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1509DA8A; /* 0x1509D9FE: jae 0x1509da8a */
L_1509DA04:
    _flag_a = (uint32_t)((eax ^ 0x0E000000u)); _flag_b = (uint32_t)((eax ^ 0x0E000000u));
    eax = eax ^ 0x0E000000u; /* 0x1509DA04: xor eax, 0xe000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x0E000000u */ /* 0x1509DA09: test eax, 0xe000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0E000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509DA13; /* 0x1509DA0E: je 0x1509da13 */
L_1509DA10:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1509DA10: fdivp st(1) */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DA12: ret  */
L_1509DA13:
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1509DA13: shr eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax >> 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 28u; /* 0x1509DA13: shr eax, 0x1c */
    /* cmp MEM8(eax + 0x150BCA50), 0 */ /* 0x1509DA16: cmp byte ptr [eax + 0x150bca50], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x150BCA50)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509DA22; /* 0x1509DA1D: jne 0x1509da22 */
L_1509DA1F:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1509DA1F: fdivp st(1) */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DA21: ret  */
L_1509DA22:
    eax = MEM32(esp + 0xC); /* 0x1509DA22: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x1509DA26: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509DA94; /* 0x1509DA2B: je 0x1509da94 */
L_1509DA2D:
    /* cmp eax, 0x7FFFu */ /* 0x1509DA2D: cmp eax, 0x7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509DA94; /* 0x1509DA32: je 0x1509da94 */
L_1509DA34:
    MEM16(esp + 0x1C) = _fpu_cw; /* 0x1509DA34: fnstcw word ptr [esp + 0x1c] */
    eax = MEM32(esp + 0x1C); /* 0x1509DA38: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((eax | 0x33Fu)); _flag_b = (uint32_t)((eax | 0x33Fu));
    eax = eax | 0x33Fu; /* 0x1509DA3C: or eax, 0x33f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF3FFu);
    eax = eax & 0xF3FFu; /* 0x1509DA41: and eax, 0xf3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x1509DA46: mov dword ptr [esp + 0x20], eax */
    _fpu_cw = MEM16(esp + 0x20); /* 0x1509DA4A: fldcw word ptr [esp + 0x20] */
    eax = MEM32(esp + 0x18); /* 0x1509DA4E: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x1509DA52: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x1509DA57: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509DA73; /* 0x1509DA5A: je 0x1509da73 */
L_1509DA5C:
    _st[0] *= (double)*(float*)ADDR(0x150BCA60); /* 0x1509DA5C: fmul dword ptr [0x150bca60] */
    fp_xch(1); /* 0x1509DA62: fxch st(1) */
    _st[0] *= (double)*(float*)ADDR(0x150BCA60); /* 0x1509DA64: fmul dword ptr [0x150bca60] */
    fp_xch(1); /* 0x1509DA6A: fxch st(1) */
    _fpu_cw = MEM16(esp + 0x1C); /* 0x1509DA6C: fldcw word ptr [esp + 0x1c] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1509DA70: fdivp st(1) */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DA72: ret  */
L_1509DA73:
    _st[0] *= (double)*(float*)ADDR(0x150BCA64); /* 0x1509DA73: fmul dword ptr [0x150bca64] */
    fp_xch(1); /* 0x1509DA79: fxch st(1) */
    _st[0] *= (double)*(float*)ADDR(0x150BCA64); /* 0x1509DA7B: fmul dword ptr [0x150bca64] */
    fp_xch(1); /* 0x1509DA81: fxch st(1) */
    _fpu_cw = MEM16(esp + 0x1C); /* 0x1509DA83: fldcw word ptr [esp + 0x1c] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1509DA87: fdivp st(1) */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DA89: ret  */
L_1509DA8A:
    eax = MEM32(esp + 0x4); /* 0x1509DA8A: mov eax, dword ptr [esp + 4] */
    _flag_a = (uint32_t)((eax | MEM32(esp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(esp + 0x8)));
    eax = eax | MEM32(esp + 0x8); /* 0x1509DA8E: or eax, dword ptr [esp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509DA97; /* 0x1509DA92: jne 0x1509da97 */
L_1509DA94:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1509DA94: fdivp st(1) */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DA96: ret  */
L_1509DA97:
    eax = MEM32(esp + 0xC); /* 0x1509DA97: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x1509DA9B: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509DA94; /* 0x1509DAA0: jne 0x1509da94 */
L_1509DAA2:
    MEM16(esp + 0x1C) = _fpu_cw; /* 0x1509DAA2: fnstcw word ptr [esp + 0x1c] */
    eax = MEM32(esp + 0x1C); /* 0x1509DAA6: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((eax | 0x33Fu)); _flag_b = (uint32_t)((eax | 0x33Fu));
    eax = eax | 0x33Fu; /* 0x1509DAAA: or eax, 0x33f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF3FFu);
    eax = eax & 0xF3FFu; /* 0x1509DAAF: and eax, 0xf3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x1509DAB4: mov dword ptr [esp + 0x20], eax */
    _fpu_cw = MEM16(esp + 0x20); /* 0x1509DAB8: fldcw word ptr [esp + 0x20] */
    eax = MEM32(esp + 0x18); /* 0x1509DABC: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x1509DAC0: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509DAD8; /* 0x1509DAC5: je 0x1509dad8 */
L_1509DAC7:
    /* cmp eax, 0x7FFFu */ /* 0x1509DAC7: cmp eax, 0x7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509DB00; /* 0x1509DACC: je 0x1509db00 */
L_1509DACE:
    eax = MEM32(esp + 0x14); /* 0x1509DACE: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509DAD2: add eax, eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1509DB00; /* 0x1509DAD4: jae 0x1509db00 */
L_1509DAD6:
    goto L_1509DAE0; /* 0x1509DAD6: jmp 0x1509dae0 */
L_1509DAD8:
    eax = MEM32(esp + 0x14); /* 0x1509DAD8: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1509DADC: add eax, eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1509DB00; /* 0x1509DADE: jb 0x1509db00 */
L_1509DAE0:
    fp_xch(1); /* 0x1509DAE0: fxch st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1509DAE2: fstp st(0) */
    fp_push(_st[0]); /* 0x1509DAE4: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(0x150BCA68); /* 0x1509DAE6: fmul dword ptr [0x150bca68] */
    fp_st80((uint8_t*)ADDR(esp + 0x4), fp_pop()); /* 0x1509DAEC: fstp xword ptr [esp + 4] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x1509DAF0: fld xword ptr [esp + 0x10] */
    fp_xch(1); /* 0x1509DAF4: fxch st(1) */
    /* fwait */ /* 0x1509DAF6: wait  */
    _fpu_cw = MEM16(esp + 0x1C); /* 0x1509DAF7: fldcw word ptr [esp + 0x1c] */
    RECOMP_BACKEDGE();
    goto L_1509D9F8; /* 0x1509DAFB: jmp 0x1509d9f8 */
L_1509DB00:
    _fpu_cw = MEM16(esp + 0x1C); /* 0x1509DB00: fldcw word ptr [esp + 0x1c] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1509DB04: fdivp st(1) */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB06: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB07u);

L_1509DB07:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1509DB07: sub esp, 0x2c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x1509DB0A: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x150BCAAE)); goto _ljump; }
L_1509DB14:
    _st[0] /= _st[0]; /* 0x1509DB14: fdiv st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB16: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB19: ret  */
L_1509DB1A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB1A: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DB1Du, "int 6");
L_1509DB1F:
    _st[0] = _st[0] / _st[0]; /* 0x1509DB1F: fdivr st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB21: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB24: ret  */
L_1509DB25:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB25: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DB28u, "int 6");
L_1509DB2A:
    _st[0] /= _st[0]; /* 0x1509DB2A: fdiv st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB2C: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB2F: ret  */
L_1509DB30:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1509DB30: fdivp st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB32: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB35: ret  */
L_1509DB36:
    _st[0] = _st[0] / _st[0]; /* 0x1509DB36: fdivr st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB38: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB3B: ret  */
L_1509DB3C:
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1509DB3C: fdivrp st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB3E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB41: ret  */
L_1509DB42:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB42: fstp xword ptr [esp + 0xc] */
    fp_push(_st[0]); /* 0x1509DB46: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB48: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DB4B: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DB4F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DB54: fld xword ptr [esp + 0x20] */
    fp_xch(1); /* 0x1509DB58: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB5A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB5D: ret  */
L_1509DB5E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB5E: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DB61u, "int 6");
L_1509DB63:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB63: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB66: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DB6A: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DB6F: fld xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DB73: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB75: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB78: ret  */
L_1509DB79:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB79: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DB7Cu, "int 6");
L_1509DB7E:
    fp_xch(1); /* 0x1509DB7E: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB80: fstp xword ptr [esp + 0xc] */
    fp_push(_st[0]); /* 0x1509DB84: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB86: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DB89: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DB8D: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DB92: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB96: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB99: ret  */
L_1509DB9A:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB9A: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB9D: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBA1: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBA6: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DBA9: ret  */
L_1509DBAA:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBAA: fstp xword ptr [esp + 0xc] */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBAE: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBB1: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DBB6: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBBA: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DBBD: ret  */
L_1509DBBE:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBBE: fstp xword ptr [esp + 0xc] */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBC2: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBC5: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBCA: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DBCD: ret  */
L_1509DBCE:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBCE: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DBD2: fxch st(1) */
    fp_push(_st[0]); /* 0x1509DBD4: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBD6: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DBD9: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBDD: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DBE2: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DBE4: fld xword ptr [esp + 0x20] */
    fp_xch(2); /* 0x1509DBE8: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBEA: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DBED: ret  */
L_1509DBEE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBEE: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DBF1u, "int 6");
L_1509DBF3:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBF3: fstp xword ptr [esp] */
    fp_xch(1); /* 0x1509DBF6: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBF8: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBFC: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC01: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DC03: fld xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DC07: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC09: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC0C: ret  */
L_1509DC0D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC0D: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DC10u, "int 6");
L_1509DC12:
    fp_xch(2); /* 0x1509DC12: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC14: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DC18: fxch st(1) */
    fp_push(_st[0]); /* 0x1509DC1A: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC1C: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DC1F: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC23: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC28: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DC2A: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC2E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC31: ret  */
L_1509DC32:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC32: fstp xword ptr [esp] */
    fp_xch(1); /* 0x1509DC35: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC37: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC3B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC40: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC42: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC45: ret  */
L_1509DC46:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC46: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DC4A: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC4C: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC4F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC54: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DC56: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC5A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC5D: ret  */
L_1509DC5E:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC5E: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DC62: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC64: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC67: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC6C: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC6E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC71: ret  */
L_1509DC72:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC72: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DC76: fxch st(2) */
    fp_push(_st[0]); /* 0x1509DC78: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC7A: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DC7D: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC81: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DC86: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DC88: fld xword ptr [esp + 0x20] */
    fp_xch(3); /* 0x1509DC8C: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC8E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC91: ret  */
L_1509DC92:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC92: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DC95u, "int 6");
L_1509DC97:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC97: fstp xword ptr [esp] */
    fp_xch(2); /* 0x1509DC9A: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC9C: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCA0: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCA5: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DCA7: fld xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DCAB: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCAD: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DCB0: ret  */
L_1509DCB1:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCB1: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DCB4u, "int 6");
L_1509DCB6:
    fp_xch(3); /* 0x1509DCB6: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DCB8: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DCBC: fxch st(2) */
    fp_push(_st[0]); /* 0x1509DCBE: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DCC0: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DCC3: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCC7: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCCC: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DCCE: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCD2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DCD5: ret  */
L_1509DCD6:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DCD6: fstp xword ptr [esp] */
    fp_xch(2); /* 0x1509DCD9: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DCDB: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCDF: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCE4: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCE6: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DCE9: ret  */
L_1509DCEA:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DCEA: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DCEE: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DCF0: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCF3: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCF8: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DCFA: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCFE: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD01: ret  */
L_1509DD02:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD02: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DD06: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD08: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD0B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DD10: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD12: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD15: ret  */
L_1509DD16:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD16: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DD1A: fxch st(3) */
    fp_push(_st[0]); /* 0x1509DD1C: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD1E: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DD21: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD25: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD2A: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DD2C: fld xword ptr [esp + 0x20] */
    fp_xch(4); /* 0x1509DD30: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD32: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD35: ret  */
L_1509DD36:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD36: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DD39u, "int 6");
L_1509DD3B:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD3B: fstp xword ptr [esp] */
    fp_xch(3); /* 0x1509DD3E: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD40: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD44: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD49: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DD4B: fld xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DD4F: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD51: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD54: ret  */
L_1509DD55:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD55: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DD58u, "int 6");
L_1509DD5A:
    fp_xch(4); /* 0x1509DD5A: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD5C: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DD60: fxch st(3) */
    fp_push(_st[0]); /* 0x1509DD62: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD64: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DD67: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD6B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD70: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DD72: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD76: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD79: ret  */
L_1509DD7A:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD7A: fstp xword ptr [esp] */
    fp_xch(3); /* 0x1509DD7D: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD7F: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD83: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD88: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD8A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD8D: ret  */
L_1509DD8E:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD8E: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DD92: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD94: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD97: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD9C: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DD9E: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDA2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDA5: ret  */
L_1509DDA6:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DDA6: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DDAA: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DDAC: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DDAF: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DDB4: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDB6: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDB9: ret  */
L_1509DDBA:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DDBA: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DDBE: fxch st(4) */
    fp_push(_st[0]); /* 0x1509DDC0: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DDC2: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DDC5: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DDC9: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DDCE: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DDD0: fld xword ptr [esp + 0x20] */
    fp_xch(5); /* 0x1509DDD4: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDD6: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDD9: ret  */
L_1509DDDA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDDA: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DDDDu, "int 6");
L_1509DDDF:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DDDF: fstp xword ptr [esp] */
    fp_xch(4); /* 0x1509DDE2: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DDE4: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DDE8: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DDED: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DDEF: fld xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DDF3: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDF5: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDF8: ret  */
L_1509DDF9:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDF9: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DDFCu, "int 6");
L_1509DDFE:
    fp_xch(5); /* 0x1509DDFE: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE00: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DE04: fxch st(4) */
    fp_push(_st[0]); /* 0x1509DE06: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE08: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DE0B: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE0F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE14: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DE16: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE1A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE1D: ret  */
L_1509DE1E:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE1E: fstp xword ptr [esp] */
    fp_xch(4); /* 0x1509DE21: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE23: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE27: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE2C: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE2E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE31: ret  */
L_1509DE32:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE32: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DE36: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE38: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE3B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE40: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DE42: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE46: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE49: ret  */
L_1509DE4A:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE4A: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DE4E: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE50: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE53: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE58: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE5A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE5D: ret  */
L_1509DE5E:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE5E: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DE62: fxch st(5) */
    fp_push(_st[0]); /* 0x1509DE64: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE66: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DE69: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE6D: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DE72: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DE74: fld xword ptr [esp + 0x20] */
    fp_xch(6); /* 0x1509DE78: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE7A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE7D: ret  */
L_1509DE7E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE7E: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DE81u, "int 6");
L_1509DE83:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE83: fstp xword ptr [esp] */
    fp_xch(5); /* 0x1509DE86: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE88: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE8C: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DE91: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DE93: fld xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DE97: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE99: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE9C: ret  */
L_1509DE9D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE9D: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DEA0u, "int 6");
L_1509DEA2:
    fp_xch(6); /* 0x1509DEA2: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DEA4: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DEA8: fxch st(5) */
    fp_push(_st[0]); /* 0x1509DEAA: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEAC: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DEAF: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DEB3: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DEB8: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DEBA: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DEBE: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DEC1: ret  */
L_1509DEC2:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEC2: fstp xword ptr [esp] */
    fp_xch(5); /* 0x1509DEC5: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DEC7: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DECB: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DED0: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DED2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DED5: ret  */
L_1509DED6:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DED6: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DEDA: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEDC: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DEDF: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DEE4: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DEE6: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DEEA: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DEED: ret  */
L_1509DEEE:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DEEE: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DEF2: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEF4: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DEF7: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DEFC: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DEFE: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF01: ret  */
L_1509DF02:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF02: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF06: fxch st(6) */
    fp_push(_st[0]); /* 0x1509DF08: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF0A: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DF0D: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF11: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF16: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DF18: fld xword ptr [esp + 0x20] */
    fp_xch(7); /* 0x1509DF1C: fxch st(7) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF1E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF21: ret  */
L_1509DF22:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF22: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DF25u, "int 6");
L_1509DF27:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF27: fstp xword ptr [esp] */
    fp_xch(6); /* 0x1509DF2A: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF2C: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF30: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF35: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DF37: fld xword ptr [esp + 0xc] */
    fp_xch(7); /* 0x1509DF3B: fxch st(7) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF3D: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF40: ret  */
L_1509DF41:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF41: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DF44u, "int 6");
L_1509DF46:
    fp_xch(7); /* 0x1509DF46: fxch st(7) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF48: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF4C: fxch st(6) */
    fp_push(_st[0]); /* 0x1509DF4E: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF50: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DF53: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF57: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF5C: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DF5E: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF62: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF65: ret  */
L_1509DF66:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF66: fstp xword ptr [esp] */
    fp_xch(6); /* 0x1509DF69: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF6B: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF6F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF74: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF76: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF79: ret  */
L_1509DF7A:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF7A: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF7E: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF80: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF83: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF88: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DF8A: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF8E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF91: ret  */
L_1509DF92:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF92: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF96: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF98: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF9B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DFA0: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DFA2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DFA5: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1509DB14u: goto L_1509DB14;
      case 0x1509DB1Au: goto L_1509DB1A;
      case 0x1509DB1Fu: goto L_1509DB1F;
      case 0x1509DB25u: goto L_1509DB25;
      case 0x1509DB2Au: goto L_1509DB2A;
      case 0x1509DB30u: goto L_1509DB30;
      case 0x1509DB36u: goto L_1509DB36;
      case 0x1509DB3Cu: goto L_1509DB3C;
      case 0x1509DB42u: goto L_1509DB42;
      case 0x1509DB5Eu: goto L_1509DB5E;
      case 0x1509DB63u: goto L_1509DB63;
      case 0x1509DB79u: goto L_1509DB79;
      case 0x1509DB7Eu: goto L_1509DB7E;
      case 0x1509DB9Au: goto L_1509DB9A;
      case 0x1509DBAAu: goto L_1509DBAA;
      case 0x1509DBBEu: goto L_1509DBBE;
      case 0x1509DBCEu: goto L_1509DBCE;
      case 0x1509DBEEu: goto L_1509DBEE;
      case 0x1509DBF3u: goto L_1509DBF3;
      case 0x1509DC0Du: goto L_1509DC0D;
      case 0x1509DC12u: goto L_1509DC12;
      case 0x1509DC32u: goto L_1509DC32;
      case 0x1509DC46u: goto L_1509DC46;
      case 0x1509DC5Eu: goto L_1509DC5E;
      case 0x1509DC72u: goto L_1509DC72;
      case 0x1509DC92u: goto L_1509DC92;
      case 0x1509DC97u: goto L_1509DC97;
      case 0x1509DCB1u: goto L_1509DCB1;
      case 0x1509DCB6u: goto L_1509DCB6;
      case 0x1509DCD6u: goto L_1509DCD6;
      case 0x1509DCEAu: goto L_1509DCEA;
      case 0x1509DD02u: goto L_1509DD02;
      case 0x1509DD16u: goto L_1509DD16;
      case 0x1509DD36u: goto L_1509DD36;
      case 0x1509DD3Bu: goto L_1509DD3B;
      case 0x1509DD55u: goto L_1509DD55;
      case 0x1509DD5Au: goto L_1509DD5A;
      case 0x1509DD7Au: goto L_1509DD7A;
      case 0x1509DD8Eu: goto L_1509DD8E;
      case 0x1509DDA6u: goto L_1509DDA6;
      case 0x1509DDBAu: goto L_1509DDBA;
      case 0x1509DDDAu: goto L_1509DDDA;
      case 0x1509DDDFu: goto L_1509DDDF;
      case 0x1509DDF9u: goto L_1509DDF9;
      case 0x1509DDFEu: goto L_1509DDFE;
      case 0x1509DE1Eu: goto L_1509DE1E;
      case 0x1509DE32u: goto L_1509DE32;
      case 0x1509DE4Au: goto L_1509DE4A;
      case 0x1509DE5Eu: goto L_1509DE5E;
      case 0x1509DE7Eu: goto L_1509DE7E;
      case 0x1509DE83u: goto L_1509DE83;
      case 0x1509DE9Du: goto L_1509DE9D;
      case 0x1509DEA2u: goto L_1509DEA2;
      case 0x1509DEC2u: goto L_1509DEC2;
      case 0x1509DED6u: goto L_1509DED6;
      case 0x1509DEEEu: goto L_1509DEEE;
      case 0x1509DF02u: goto L_1509DF02;
      case 0x1509DF22u: goto L_1509DF22;
      case 0x1509DF27u: goto L_1509DF27;
      case 0x1509DF41u: goto L_1509DF41;
      case 0x1509DF46u: goto L_1509DF46;
      case 0x1509DF66u: goto L_1509DF66;
      case 0x1509DF7Au: goto L_1509DF7A;
      case 0x1509DF92u: goto L_1509DF92;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1509DB14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB14u);

L_1509DB14:
    _st[0] /= _st[0]; /* 0x1509DB14: fdiv st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB16: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB19: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB1Au);

L_1509DB1A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB1A: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DB1Du, "int 6");
    _st[0] = _st[0] / _st[0]; /* 0x1509DB1F: fdivr st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB21: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB24: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB1Fu);

L_1509DB1F:
    _st[0] = _st[0] / _st[0]; /* 0x1509DB1F: fdivr st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB21: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB24: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB25u);

L_1509DB25:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB25: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DB28u, "int 6");
    _st[0] /= _st[0]; /* 0x1509DB2A: fdiv st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB2C: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB2Au);

L_1509DB2A:
    _st[0] /= _st[0]; /* 0x1509DB2A: fdiv st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB2C: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB30u);

L_1509DB30:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1509DB30: fdivp st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB32: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB35: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB36u);

L_1509DB36:
    _st[0] = _st[0] / _st[0]; /* 0x1509DB36: fdivr st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB38: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB3Cu);

L_1509DB3C:
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1509DB3C: fdivrp st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB3E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB41: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB42u);

L_1509DB42:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB42: fstp xword ptr [esp + 0xc] */
    fp_push(_st[0]); /* 0x1509DB46: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB48: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DB4B: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DB4F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DB54: fld xword ptr [esp + 0x20] */
    fp_xch(1); /* 0x1509DB58: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB5A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB5D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB5Eu);

L_1509DB5E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB5E: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DB61u, "int 6");
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB63: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB66: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DB6A: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DB6F: fld xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DB73: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB75: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB78: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB63u);

L_1509DB63:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB63: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB66: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DB6A: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DB6F: fld xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DB73: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB75: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB78: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB79u);

L_1509DB79:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB79: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DB7Cu, "int 6");
    fp_xch(1); /* 0x1509DB7E: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB80: fstp xword ptr [esp + 0xc] */
    fp_push(_st[0]); /* 0x1509DB84: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB86: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DB89: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DB8D: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DB92: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB96: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB99: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB7Eu);

L_1509DB7E:
    fp_xch(1); /* 0x1509DB7E: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB80: fstp xword ptr [esp + 0xc] */
    fp_push(_st[0]); /* 0x1509DB84: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB86: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DB89: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DB8D: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DB92: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DB96: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DB99: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DB9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DB9Au);

L_1509DB9A:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DB9A: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DB9D: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBA1: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBA6: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DBA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DBAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DBAAu);

L_1509DBAA:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBAA: fstp xword ptr [esp + 0xc] */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBAE: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBB1: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DBB6: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBBA: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DBBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DBBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DBBEu);

L_1509DBBE:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBBE: fstp xword ptr [esp + 0xc] */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBC2: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBC5: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBCA: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DBCD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DBCE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DBCEu);

L_1509DBCE:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBCE: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DBD2: fxch st(1) */
    fp_push(_st[0]); /* 0x1509DBD4: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBD6: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DBD9: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBDD: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DBE2: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DBE4: fld xword ptr [esp + 0x20] */
    fp_xch(2); /* 0x1509DBE8: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBEA: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DBED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DBEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DBEEu);

L_1509DBEE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DBEE: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DBF1u, "int 6");
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBF3: fstp xword ptr [esp] */
    fp_xch(1); /* 0x1509DBF6: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBF8: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBFC: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC01: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DC03: fld xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DC07: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC09: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DBF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DBF3u);

L_1509DBF3:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DBF3: fstp xword ptr [esp] */
    fp_xch(1); /* 0x1509DBF6: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DBF8: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DBFC: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC01: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DC03: fld xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DC07: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC09: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DC0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DC0Du);

L_1509DC0D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC0D: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DC10u, "int 6");
    fp_xch(2); /* 0x1509DC12: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC14: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DC18: fxch st(1) */
    fp_push(_st[0]); /* 0x1509DC1A: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC1C: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DC1F: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC23: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC28: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DC2A: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC2E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC31: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DC12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DC12u);

L_1509DC12:
    fp_xch(2); /* 0x1509DC12: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC14: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DC18: fxch st(1) */
    fp_push(_st[0]); /* 0x1509DC1A: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC1C: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DC1F: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC23: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC28: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DC2A: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC2E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC31: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DC32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DC32u);

L_1509DC32:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC32: fstp xword ptr [esp] */
    fp_xch(1); /* 0x1509DC35: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC37: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC3B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC40: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC42: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC45: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DC46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DC46u);

L_1509DC46:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC46: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DC4A: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC4C: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC4F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC54: fxch st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DC56: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC5A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC5D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DC5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DC5Eu);

L_1509DC5E:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC5E: fstp xword ptr [esp + 0xc] */
    fp_xch(1); /* 0x1509DC62: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC64: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC67: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x1509DC6C: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC6E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC71: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DC72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DC72u);

L_1509DC72:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC72: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DC76: fxch st(2) */
    fp_push(_st[0]); /* 0x1509DC78: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC7A: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DC7D: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DC81: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DC86: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DC88: fld xword ptr [esp + 0x20] */
    fp_xch(3); /* 0x1509DC8C: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC8E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DC91: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DC92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DC92u);

L_1509DC92:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DC92: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DC95u, "int 6");
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC97: fstp xword ptr [esp] */
    fp_xch(2); /* 0x1509DC9A: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC9C: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCA0: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCA5: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DCA7: fld xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DCAB: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCAD: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DCB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DC97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DC97u);

L_1509DC97:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DC97: fstp xword ptr [esp] */
    fp_xch(2); /* 0x1509DC9A: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DC9C: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCA0: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCA5: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DCA7: fld xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DCAB: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCAD: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DCB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DCB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DCB1u);

L_1509DCB1:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCB1: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DCB4u, "int 6");
    fp_xch(3); /* 0x1509DCB6: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DCB8: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DCBC: fxch st(2) */
    fp_push(_st[0]); /* 0x1509DCBE: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DCC0: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DCC3: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCC7: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCCC: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DCCE: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCD2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DCD5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DCB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DCB6u);

L_1509DCB6:
    fp_xch(3); /* 0x1509DCB6: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DCB8: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DCBC: fxch st(2) */
    fp_push(_st[0]); /* 0x1509DCBE: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DCC0: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DCC3: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCC7: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCCC: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DCCE: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCD2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DCD5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DCD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DCD6u);

L_1509DCD6:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DCD6: fstp xword ptr [esp] */
    fp_xch(2); /* 0x1509DCD9: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DCDB: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCDF: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCE4: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCE6: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DCE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DCEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DCEAu);

L_1509DCEA:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DCEA: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DCEE: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DCF0: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DCF3: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DCF8: fxch st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DCFA: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DCFE: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD01: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DD02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DD02u);

L_1509DD02:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD02: fstp xword ptr [esp + 0xc] */
    fp_xch(2); /* 0x1509DD06: fxch st(2) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD08: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD0B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(2); /* 0x1509DD10: fxch st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD12: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD15: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DD16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DD16u);

L_1509DD16:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD16: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DD1A: fxch st(3) */
    fp_push(_st[0]); /* 0x1509DD1C: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD1E: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DD21: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD25: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD2A: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DD2C: fld xword ptr [esp + 0x20] */
    fp_xch(4); /* 0x1509DD30: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD32: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD35: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DD36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DD36u);

L_1509DD36:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD36: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DD39u, "int 6");
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD3B: fstp xword ptr [esp] */
    fp_xch(3); /* 0x1509DD3E: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD40: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD44: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD49: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DD4B: fld xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DD4F: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD51: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD54: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DD3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DD3Bu);

L_1509DD3B:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD3B: fstp xword ptr [esp] */
    fp_xch(3); /* 0x1509DD3E: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD40: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD44: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD49: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DD4B: fld xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DD4F: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD51: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD54: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DD55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DD55u);

L_1509DD55:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD55: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DD58u, "int 6");
    fp_xch(4); /* 0x1509DD5A: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD5C: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DD60: fxch st(3) */
    fp_push(_st[0]); /* 0x1509DD62: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD64: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DD67: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD6B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD70: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DD72: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD76: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD79: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DD5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DD5Au);

L_1509DD5A:
    fp_xch(4); /* 0x1509DD5A: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD5C: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DD60: fxch st(3) */
    fp_push(_st[0]); /* 0x1509DD62: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD64: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DD67: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD6B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD70: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DD72: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD76: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD79: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DD7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DD7Au);

L_1509DD7A:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD7A: fstp xword ptr [esp] */
    fp_xch(3); /* 0x1509DD7D: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD7F: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD83: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD88: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DD8A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DD8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DD8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DD8Eu);

L_1509DD8E:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DD8E: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DD92: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DD94: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DD97: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DD9C: fxch st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DD9E: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDA2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DDA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DDA6u);

L_1509DDA6:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DDA6: fstp xword ptr [esp + 0xc] */
    fp_xch(3); /* 0x1509DDAA: fxch st(3) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DDAC: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DDAF: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(3); /* 0x1509DDB4: fxch st(3) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDB6: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DDBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DDBAu);

L_1509DDBA:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DDBA: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DDBE: fxch st(4) */
    fp_push(_st[0]); /* 0x1509DDC0: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DDC2: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DDC5: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DDC9: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DDCE: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DDD0: fld xword ptr [esp + 0x20] */
    fp_xch(5); /* 0x1509DDD4: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDD6: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DDDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DDDAu);

L_1509DDDA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDDA: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DDDDu, "int 6");
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DDDF: fstp xword ptr [esp] */
    fp_xch(4); /* 0x1509DDE2: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DDE4: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DDE8: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DDED: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DDEF: fld xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DDF3: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDF5: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DDDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DDDFu);

L_1509DDDF:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DDDF: fstp xword ptr [esp] */
    fp_xch(4); /* 0x1509DDE2: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DDE4: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DDE8: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DDED: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DDEF: fld xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DDF3: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDF5: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DDF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DDF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DDF9u);

L_1509DDF9:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DDF9: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DDFCu, "int 6");
    fp_xch(5); /* 0x1509DDFE: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE00: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DE04: fxch st(4) */
    fp_push(_st[0]); /* 0x1509DE06: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE08: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DE0B: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE0F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE14: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DE16: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE1A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DDFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DDFEu);

L_1509DDFE:
    fp_xch(5); /* 0x1509DDFE: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE00: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DE04: fxch st(4) */
    fp_push(_st[0]); /* 0x1509DE06: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE08: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DE0B: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE0F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE14: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DE16: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE1A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DE1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DE1Eu);

L_1509DE1E:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE1E: fstp xword ptr [esp] */
    fp_xch(4); /* 0x1509DE21: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE23: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE27: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE2C: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE2E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE31: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DE32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DE32u);

L_1509DE32:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE32: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DE36: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE38: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE3B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE40: fxch st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DE42: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE46: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE49: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DE4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DE4Au);

L_1509DE4A:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE4A: fstp xword ptr [esp + 0xc] */
    fp_xch(4); /* 0x1509DE4E: fxch st(4) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE50: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE53: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(4); /* 0x1509DE58: fxch st(4) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE5A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE5D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DE5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DE5Eu);

L_1509DE5E:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE5E: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DE62: fxch st(5) */
    fp_push(_st[0]); /* 0x1509DE64: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE66: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DE69: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE6D: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DE72: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DE74: fld xword ptr [esp + 0x20] */
    fp_xch(6); /* 0x1509DE78: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE7A: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE7D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DE7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DE7Eu);

L_1509DE7E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE7E: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DE81u, "int 6");
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE83: fstp xword ptr [esp] */
    fp_xch(5); /* 0x1509DE86: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE88: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE8C: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DE91: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DE93: fld xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DE97: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE99: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DE83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DE83u);

L_1509DE83:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DE83: fstp xword ptr [esp] */
    fp_xch(5); /* 0x1509DE86: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DE88: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DE8C: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DE91: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DE93: fld xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DE97: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE99: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DE9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DE9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DE9Du);

L_1509DE9D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DE9D: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DEA0u, "int 6");
    fp_xch(6); /* 0x1509DEA2: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DEA4: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DEA8: fxch st(5) */
    fp_push(_st[0]); /* 0x1509DEAA: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEAC: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DEAF: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DEB3: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DEB8: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DEBA: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DEBE: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DEC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DEA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DEA2u);

L_1509DEA2:
    fp_xch(6); /* 0x1509DEA2: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DEA4: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DEA8: fxch st(5) */
    fp_push(_st[0]); /* 0x1509DEAA: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEAC: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DEAF: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DEB3: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DEB8: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DEBA: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DEBE: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DEC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DEC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DEC2u);

L_1509DEC2:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEC2: fstp xword ptr [esp] */
    fp_xch(5); /* 0x1509DEC5: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DEC7: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DECB: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DED0: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DED2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DED5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DED6u);

L_1509DED6:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DED6: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DEDA: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEDC: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DEDF: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DEE4: fxch st(5) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DEE6: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DEEA: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DEED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DEEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DEEEu);

L_1509DEEE:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DEEE: fstp xword ptr [esp + 0xc] */
    fp_xch(5); /* 0x1509DEF2: fxch st(5) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DEF4: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DEF7: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(5); /* 0x1509DEFC: fxch st(5) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DEFE: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF01: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DF02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DF02u);

L_1509DF02:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF02: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF06: fxch st(6) */
    fp_push(_st[0]); /* 0x1509DF08: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF0A: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DF0D: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF11: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF16: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DF18: fld xword ptr [esp + 0x20] */
    fp_xch(7); /* 0x1509DF1C: fxch st(7) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF1E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF21: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DF22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DF22u);

L_1509DF22:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF22: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DF25u, "int 6");
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF27: fstp xword ptr [esp] */
    fp_xch(6); /* 0x1509DF2A: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF2C: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF30: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF35: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DF37: fld xword ptr [esp + 0xc] */
    fp_xch(7); /* 0x1509DF3B: fxch st(7) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF3D: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF40: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DF27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DF27u);

L_1509DF27:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF27: fstp xword ptr [esp] */
    fp_xch(6); /* 0x1509DF2A: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF2C: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF30: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF35: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DF37: fld xword ptr [esp + 0xc] */
    fp_xch(7); /* 0x1509DF3B: fxch st(7) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF3D: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF40: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DF41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DF41u);

L_1509DF41:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF41: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1509DF44u, "int 6");
    fp_xch(7); /* 0x1509DF46: fxch st(7) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF48: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF4C: fxch st(6) */
    fp_push(_st[0]); /* 0x1509DF4E: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF50: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DF53: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF57: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF5C: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DF5E: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF62: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF65: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DF46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DF46u);

L_1509DF46:
    fp_xch(7); /* 0x1509DF46: fxch st(7) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF48: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF4C: fxch st(6) */
    fp_push(_st[0]); /* 0x1509DF4E: fld st(0) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF50: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x1509DF53: fstp xword ptr [esp + 0x20] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF57: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF5C: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x1509DF5E: fld xword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF62: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF65: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DF66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DF66u);

L_1509DF66:
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF66: fstp xword ptr [esp] */
    fp_xch(6); /* 0x1509DF69: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF6B: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF6F: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF74: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF76: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF79: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DF7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DF7Au);

L_1509DF7A:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF7A: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF7E: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF80: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF83: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DF88: fxch st(6) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0xC))); /* 0x1509DF8A: fld xword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DF8E: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DF91: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DF92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DF92u);

L_1509DF92:
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DF92: fstp xword ptr [esp + 0xc] */
    fp_xch(6); /* 0x1509DF96: fxch st(6) */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DF98: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DF9B: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    fp_xch(6); /* 0x1509DFA0: fxch st(6) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DFA2: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DFA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DFA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DFA6u);

L_1509DFA6:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1509DFA6: sub esp, 0x2c */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DFA9: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DFAC: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DFB0: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DFB5: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DFB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DFB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DFB9u);

L_1509DFB9:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1509DFB9: sub esp, 0x2c */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509DFBC: fstp xword ptr [esp + 0xc] */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DFC0: fstp xword ptr [esp] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509DFC3: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509DFC8: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509DFCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509DFCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509DFCCu);

L_1509DFCC:
    PUSH32(esp, eax); /* 0x1509DFCC: push eax */
    eax = MEM32(esp + 0x8); /* 0x1509DFCD: mov eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x1509DFD1: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1509DFD6: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509E010; /* 0x1509DFDB: je 0x1509e010 */
L_1509DFDD:
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1509DFDD: fnstsw ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x1509DFDF: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509DFF3; /* 0x1509DFE4: je 0x1509dff3 */
L_1509DFE6:
    fp_push(*(float*)&MEM32(esp + 0x8)); /* 0x1509DFE6: fld dword ptr [esp + 8] */
    RECOMP_CALL(sub_1509DFA6); /* 0x1509DFEA: call 0x1509dfa6 */
    RECOMP_FLAGS_IN();
    eax = POP32_VAL(esp); /* 0x1509DFEF: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509DFF0: ret 4 */
L_1509DFF3:
    fp_xch(1); /* 0x1509DFF3: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509DFF5: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509DFF8: fstp xword ptr [esp] */
    fp_push(*(float*)&MEM32(esp + 0x14)); /* 0x1509DFFB: fld dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_1509DFA6); /* 0x1509DFFF: call 0x1509dfa6 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x1509E004: fld xword ptr [esp] */
    fp_xch(1); /* 0x1509E007: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509E009: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E00C: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E00D: ret 4 */
L_1509E010:
    _st[0] /= (double)*(float*)ADDR(esp + 0x8); /* 0x1509E010: fdiv dword ptr [esp + 8] */
    eax = POP32_VAL(esp); /* 0x1509E014: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E015: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1509E018(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509E018u);

L_1509E018:
    PUSH32(esp, eax); /* 0x1509E018: push eax */
    eax = MEM32(esp + 0xC); /* 0x1509E019: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    eax = eax & 0x7FF00000u; /* 0x1509E01D: and eax, 0x7ff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF00000u */ /* 0x1509E022: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509E05C; /* 0x1509E027: je 0x1509e05c */
L_1509E029:
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1509E029: fnstsw ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x1509E02B: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509E03F; /* 0x1509E030: je 0x1509e03f */
L_1509E032:
    fp_push(*(double*)ADDR(esp + 0x8)); /* 0x1509E032: fld qword ptr [esp + 8] */
    RECOMP_CALL(sub_1509DFA6); /* 0x1509E036: call 0x1509dfa6 */
    RECOMP_FLAGS_IN();
    eax = POP32_VAL(esp); /* 0x1509E03B: pop eax */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1509E03C: ret 8 */
L_1509E03F:
    fp_xch(1); /* 0x1509E03F: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509E041: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509E044: fstp xword ptr [esp] */
    fp_push(*(double*)ADDR(esp + 0x14)); /* 0x1509E047: fld qword ptr [esp + 0x14] */
    RECOMP_CALL(sub_1509DFA6); /* 0x1509E04B: call 0x1509dfa6 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x1509E050: fld xword ptr [esp] */
    fp_xch(1); /* 0x1509E053: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509E055: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E058: pop eax */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1509E059: ret 8 */
L_1509E05C:
    _st[0] /= *(double*)ADDR(esp + 0x8); /* 0x1509E05C: fdiv qword ptr [esp + 8] */
    eax = POP32_VAL(esp); /* 0x1509E060: pop eax */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1509E061: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1509E064(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509E064u);

L_1509E064:
    PUSH32(esp, eax); /* 0x1509E064: push eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1509E065: fnstsw ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x1509E067: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509E07B; /* 0x1509E06C: je 0x1509e07b */
L_1509E06E:
    fp_push((double)(int16_t)MEM16(esp + 0x8)); /* 0x1509E06E: fild word ptr [esp + 8] */
    RECOMP_CALL(sub_1509DFA6); /* 0x1509E072: call 0x1509dfa6 */
    RECOMP_FLAGS_IN();
    eax = POP32_VAL(esp); /* 0x1509E077: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E078: ret 4 */
L_1509E07B:
    fp_xch(1); /* 0x1509E07B: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509E07D: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509E080: fstp xword ptr [esp] */
    fp_push((double)(int16_t)MEM16(esp + 0x14)); /* 0x1509E083: fild word ptr [esp + 0x14] */
    RECOMP_CALL(sub_1509DFA6); /* 0x1509E087: call 0x1509dfa6 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x1509E08C: fld xword ptr [esp] */
    fp_xch(1); /* 0x1509E08F: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509E091: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E094: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E095: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1509E098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509E098u);

L_1509E098:
    PUSH32(esp, eax); /* 0x1509E098: push eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1509E099: fnstsw ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x1509E09B: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509E0AF; /* 0x1509E0A0: je 0x1509e0af */
L_1509E0A2:
    fp_push((double)(int32_t)MEM32(esp + 0x8)); /* 0x1509E0A2: fild dword ptr [esp + 8] */
    RECOMP_CALL(sub_1509DFA6); /* 0x1509E0A6: call 0x1509dfa6 */
    RECOMP_FLAGS_IN();
    eax = POP32_VAL(esp); /* 0x1509E0AB: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E0AC: ret 4 */
L_1509E0AF:
    fp_xch(1); /* 0x1509E0AF: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509E0B1: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509E0B4: fstp xword ptr [esp] */
    fp_push((double)(int32_t)MEM32(esp + 0x14)); /* 0x1509E0B7: fild dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_1509DFA6); /* 0x1509E0BB: call 0x1509dfa6 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x1509E0C0: fld xword ptr [esp] */
    fp_xch(1); /* 0x1509E0C3: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509E0C5: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E0C8: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E0C9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1509E0CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509E0CCu);

L_1509E0CC:
    PUSH32(esp, eax); /* 0x1509E0CC: push eax */
    eax = MEM32(esp + 0x8); /* 0x1509E0CD: mov eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x1509E0D1: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1509E0D6: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509E110; /* 0x1509E0DB: je 0x1509e110 */
L_1509E0DD:
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1509E0DD: fnstsw ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x1509E0DF: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509E0F3; /* 0x1509E0E4: je 0x1509e0f3 */
L_1509E0E6:
    fp_push(*(float*)&MEM32(esp + 0x8)); /* 0x1509E0E6: fld dword ptr [esp + 8] */
    RECOMP_CALL(sub_1509DFB9); /* 0x1509E0EA: call 0x1509dfb9 */
    RECOMP_FLAGS_IN();
    eax = POP32_VAL(esp); /* 0x1509E0EF: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E0F0: ret 4 */
L_1509E0F3:
    fp_xch(1); /* 0x1509E0F3: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509E0F5: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509E0F8: fstp xword ptr [esp] */
    fp_push(*(float*)&MEM32(esp + 0x14)); /* 0x1509E0FB: fld dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_1509DFB9); /* 0x1509E0FF: call 0x1509dfb9 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x1509E104: fld xword ptr [esp] */
    fp_xch(1); /* 0x1509E107: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509E109: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E10C: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E10D: ret 4 */
L_1509E110:
    _st[0] = (double)*(float*)ADDR(esp + 0x8) / _st[0]; /* 0x1509E110: fdivr dword ptr [esp + 8] */
    eax = POP32_VAL(esp); /* 0x1509E114: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E115: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1509E118(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509E118u);

L_1509E118:
    PUSH32(esp, eax); /* 0x1509E118: push eax */
    eax = MEM32(esp + 0xC); /* 0x1509E119: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    eax = eax & 0x7FF00000u; /* 0x1509E11D: and eax, 0x7ff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF00000u */ /* 0x1509E122: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509E15C; /* 0x1509E127: je 0x1509e15c */
L_1509E129:
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1509E129: fnstsw ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x1509E12B: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509E13F; /* 0x1509E130: je 0x1509e13f */
L_1509E132:
    fp_push(*(double*)ADDR(esp + 0x8)); /* 0x1509E132: fld qword ptr [esp + 8] */
    RECOMP_CALL(sub_1509DFB9); /* 0x1509E136: call 0x1509dfb9 */
    RECOMP_FLAGS_IN();
    eax = POP32_VAL(esp); /* 0x1509E13B: pop eax */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1509E13C: ret 8 */
L_1509E13F:
    fp_xch(1); /* 0x1509E13F: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509E141: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509E144: fstp xword ptr [esp] */
    fp_push(*(double*)ADDR(esp + 0x14)); /* 0x1509E147: fld qword ptr [esp + 0x14] */
    RECOMP_CALL(sub_1509DFB9); /* 0x1509E14B: call 0x1509dfb9 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x1509E150: fld xword ptr [esp] */
    fp_xch(1); /* 0x1509E153: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509E155: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E158: pop eax */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1509E159: ret 8 */
L_1509E15C:
    _st[0] = *(double*)ADDR(esp + 0x8) / _st[0]; /* 0x1509E15C: fdivr qword ptr [esp + 8] */
    eax = POP32_VAL(esp); /* 0x1509E160: pop eax */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1509E161: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1509E164(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509E164u);

L_1509E164:
    PUSH32(esp, eax); /* 0x1509E164: push eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1509E165: fnstsw ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x1509E167: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509E17B; /* 0x1509E16C: je 0x1509e17b */
L_1509E16E:
    fp_push((double)(int16_t)MEM16(esp + 0x8)); /* 0x1509E16E: fild word ptr [esp + 8] */
    RECOMP_CALL(sub_1509DFB9); /* 0x1509E172: call 0x1509dfb9 */
    RECOMP_FLAGS_IN();
    eax = POP32_VAL(esp); /* 0x1509E177: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E178: ret 4 */
L_1509E17B:
    fp_xch(1); /* 0x1509E17B: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509E17D: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509E180: fstp xword ptr [esp] */
    fp_push((double)(int16_t)MEM16(esp + 0x14)); /* 0x1509E183: fild word ptr [esp + 0x14] */
    RECOMP_CALL(sub_1509DFB9); /* 0x1509E187: call 0x1509dfb9 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x1509E18C: fld xword ptr [esp] */
    fp_xch(1); /* 0x1509E18F: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509E191: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E194: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E195: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1509E198(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509E198u);

L_1509E198:
    PUSH32(esp, eax); /* 0x1509E198: push eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1509E199: fnstsw ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x1509E19B: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509E1AF; /* 0x1509E1A0: je 0x1509e1af */
L_1509E1A2:
    fp_push((double)(int32_t)MEM32(esp + 0x8)); /* 0x1509E1A2: fild dword ptr [esp + 8] */
    RECOMP_CALL(sub_1509DFB9); /* 0x1509E1A6: call 0x1509dfb9 */
    RECOMP_FLAGS_IN();
    eax = POP32_VAL(esp); /* 0x1509E1AB: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E1AC: ret 4 */
L_1509E1AF:
    fp_xch(1); /* 0x1509E1AF: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1509E1B1: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509E1B4: fstp xword ptr [esp] */
    fp_push((double)(int32_t)MEM32(esp + 0x14)); /* 0x1509E1B7: fild dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_1509DFB9); /* 0x1509E1BB: call 0x1509dfb9 */
    RECOMP_FLAGS_IN();
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x1509E1C0: fld xword ptr [esp] */
    fp_xch(1); /* 0x1509E1C3: fxch st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509E1C5: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E1C8: pop eax */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1509E1C9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1509E1CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509E1CCu);

L_1509E1CC:
    PUSH32(esp, eax); /* 0x1509E1CC: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1509E1CD: sub esp, 0x2c */
    _flag_k = FK_CMP;
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x1509E1D0: fstp xword ptr [esp] */
    fp_st80((uint8_t*)ADDR(esp + 0xC), fp_pop()); /* 0x1509E1D3: fstp xword ptr [esp + 0xc] */
    RECOMP_CALL(sub_1509D9F0); /* 0x1509E1D7: call 0x1509d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1509E1DC: add esp, 0x2c */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x1509E1DF: pop eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509E1E0: ret  */
    RECOMP_REGS_OUT();
}
