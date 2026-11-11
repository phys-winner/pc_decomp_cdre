#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00716890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716890u);

L_00716890:
    PUSH32(esp, ebp); /* 0x00716890: push ebp */
    ebp = esp; /* 0x00716891: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x00716893: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00716896: push esi */
    PUSH32(esp, edi); /* 0x00716897: push edi */
    ecx = MEM32(edx + 0x18); /* 0x00716898: mov ecx, dword ptr [edx + 0x18] */
    eax = MEM32(edx + 0x10); /* 0x0071689B: mov eax, dword ptr [edx + 0x10] */
    esi = ecx + (-0x1); /* 0x0071689E: lea esi, [ecx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x007168A1: add esi, eax */
    _flag_k = FK_ADD;
    edi = ecx + (-0x1); /* 0x007168A3: lea edi, [ecx - 1] */
    edi = eax + edi * 4; /* 0x007168A6: lea edi, [eax + edi*4] */
    /* test ecx, ecx */ /* 0x007168A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007168D1; /* 0x007168AB: je 0x7168d1 */
L_007168AD:
    _xmm[1].u64[0] = MEM32(0x808B74); _xmm[1].u64[1] = 0; /* 0x007168AD: movss xmm1, dword ptr [0x808b74] */
L_007168B5:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x007168B5: movsx eax, byte ptr [esi] */
    esi = esi + (-0x1); /* 0x007168B8: lea esi, [esi - 1] */
    edi = edi + (-0x4); /* 0x007168BB: lea edi, [edi - 4] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007168BE: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x007168C2: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007168C5: mulss xmm0, xmm1 */
    MEM32(edi + 0x4) = _xmm[0].u32[0]; /* 0x007168C9: movss dword ptr [edi + 4], xmm0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007168CE: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007168B5; /* 0x007168CF: jne 0x7168b5 */
L_007168D1:
    eax = MEM32(edx + 0x18); /* 0x007168D1: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x007168D4: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x007168D7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x007168D7: shl eax, 2 */
    MEM32(edx + 0x18) = eax; /* 0x007168DA: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(edx + 0x50); /* 0x007168DD: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x007168E0: pop edi */
    esi = POP32_VAL(esp); /* 0x007168E1: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x007168E2: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007168FA; /* 0x007168E7: je 0x7168fa */
L_007168E9:
    MEM32(ebp + 0xC) = 0x8120u; /* 0x007168E9: mov dword ptr [ebp + 0xc], 0x8120 */
    MEM32(ebp + 0x8) = edx; /* 0x007168F0: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x007168F3: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x007168F7: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_007168FA:
    ebp = POP32_VAL(esp); /* 0x007168FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007168FB: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00716900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716900u);

L_00716900:
    PUSH32(esp, ebp); /* 0x00716900: push ebp */
    ebp = esp; /* 0x00716901: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00716903: push ecx */
    PUSH32(esp, ebx); /* 0x00716904: push ebx */
    PUSH32(esp, esi); /* 0x00716905: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00716906: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00716909: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071690A: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x0071690D: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x1); /* 0x00716910: lea ebx, [edi - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00716913: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 4; /* 0x00716915: lea eax, [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00716918: add eax, -4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0071691B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716979; /* 0x0071691D: je 0x716979 */
L_0071691F:
    _xmm[1].u64[0] = MEM32(0x808B74); _xmm[1].u64[1] = 0; /* 0x0071691F: movss xmm1, dword ptr [0x808b74] */
    esi = eax; /* 0x00716927: mov esi, eax */
    esp = esp; /* 0x00716929: lea esp, [esp] */
L_00716930:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x00716930: movsx eax, byte ptr [ebx] */
    ebx = ebx + (-0x1); /* 0x00716933: lea ebx, [ebx - 1] */
    esi = esi + (-0x4); /* 0x00716936: lea esi, [esi - 4] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00716939: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0071693D: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00716940: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00716944: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x00716949: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x0071694C: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x0071694E: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00716954: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00716956: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00716956: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00716959: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x0071695B: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x0071695D: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00716963: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00716963: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00716966: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00716968: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00716968: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0071696B: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0071696B: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x0071696E: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x00716970: mov dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00716973: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716930; /* 0x00716974: jne 0x716930 */
L_00716976:
    esi = MEM32(ebp + 0x8); /* 0x00716976: mov esi, dword ptr [ebp + 8] */
L_00716979:
    eax = MEM32(esi + 0x18); /* 0x00716979: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x0071697C: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x0071697F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x0071697F: shl eax, 2 */
    MEM32(esi + 0x18) = eax; /* 0x00716982: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00716985: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00716988: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071699E; /* 0x0071698D: je 0x71699e */
L_0071698F:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x0071698F: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x00716993: push 0x9120 */
    PUSH32(esp, esi); /* 0x00716998: push esi */
    RECOMP_ICALL(eax); /* 0x00716999: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071699B: add esp, 8 */
    _flag_k = FK_ADD;
L_0071699E:
    edi = POP32_VAL(esp); /* 0x0071699E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071699F: pop esi */
    ebx = POP32_VAL(esp); /* 0x007169A0: pop ebx */
    esp = ebp; /* 0x007169A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007169A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007169A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007169B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007169B0u);

L_007169B0:
    PUSH32(esp, ebp); /* 0x007169B0: push ebp */
    ebp = esp; /* 0x007169B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007169B3: push esi */
    PUSH32(esp, edi); /* 0x007169B4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007169B5: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x007169B8: mov eax, dword ptr [edi + 0x18] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007169BB: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x007169BB: shr eax, 1 */
    edx = MEM32(edi + 0x10); /* 0x007169BD: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x007169C0: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007169D2; /* 0x007169C2: je 0x7169d2 */
L_007169C4:
    SET_LO8(ecx, MEM8(edx + 0x1)); /* 0x007169C4: mov cl, byte ptr [edx + 1] */
    edx = edx + 0x2; /* 0x007169C7: lea edx, [edx + 2] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x007169CA: mov byte ptr [esi], cl */
    esi = esi + 0x1; /* 0x007169CC: lea esi, [esi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x007169CF: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007169C4; /* 0x007169D0: jne 0x7169c4 */
L_007169D2:
    eax = MEM32(edi + 0x18); /* 0x007169D2: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007169D5: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007169D8: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x007169D9: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007169DB: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x007169DD: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007169E0: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007169E3: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007169F6; /* 0x007169E8: je 0x7169f6 */
L_007169EA:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007169EA: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x007169EE: push 8 */
    PUSH32(esp, edi); /* 0x007169F0: push edi */
    RECOMP_ICALL(eax); /* 0x007169F1: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007169F3: add esp, 8 */
    _flag_k = FK_ADD;
L_007169F6:
    edi = POP32_VAL(esp); /* 0x007169F6: pop edi */
    esi = POP32_VAL(esp); /* 0x007169F7: pop esi */
    ebp = POP32_VAL(esp); /* 0x007169F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007169F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716A00u);

L_00716A00:
    PUSH32(esp, ebp); /* 0x00716A00: push ebp */
    ebp = esp; /* 0x00716A01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716A03: push esi */
    PUSH32(esp, edi); /* 0x00716A04: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716A05: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716A08: mov eax, dword ptr [edi + 0x18] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00716A0B: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00716A0B: shr eax, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716A0D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716A10: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716A26; /* 0x00716A12: je 0x716a26 */
L_00716A14:
    SET_LO8(ecx, MEM8(edx + 0x1)); /* 0x00716A14: mov cl, byte ptr [edx + 1] */
    edx = edx + 0x2; /* 0x00716A17: lea edx, [edx + 2] */
    _flag_a = (uint32_t)((LO8(ecx) ^ 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) ^ 0x80u); /* 0x00716A1A: xor cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = esi + 0x1; /* 0x00716A1D: lea esi, [esi + 1] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00716A20: mov byte ptr [esi - 1], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716A23: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716A14; /* 0x00716A24: jne 0x716a14 */
L_00716A26:
    eax = MEM32(edi + 0x18); /* 0x00716A26: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716A29: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00716A2C: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00716A2D: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00716A2F: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00716A31: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00716A34: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716A37: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716A4D; /* 0x00716A3C: je 0x716a4d */
L_00716A3E:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716A3E: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x00716A42: push 0x8008 */
    PUSH32(esp, edi); /* 0x00716A47: push edi */
    RECOMP_ICALL(eax); /* 0x00716A48: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716A4A: add esp, 8 */
    _flag_k = FK_ADD;
L_00716A4D:
    edi = POP32_VAL(esp); /* 0x00716A4D: pop edi */
    esi = POP32_VAL(esp); /* 0x00716A4E: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716A4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716A50: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716A60u);

L_00716A60:
    PUSH32(esp, ebp); /* 0x00716A60: push ebp */
    ebp = esp; /* 0x00716A61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716A63: push esi */
    PUSH32(esp, edi); /* 0x00716A64: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716A65: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00716A68: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00716A6B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00716A6B: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716A6D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716A70: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716A8A; /* 0x00716A72: je 0x716a8a */
L_00716A74:
    eax = 0xFFFF8000u; /* 0x00716A74: mov eax, 0xffff8000 */
    edx = edx + 0x2; /* 0x00716A79: lea edx, [edx + 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(edx + (-0x2))); /* 0x00716A7C: xor ax, word ptr [edx - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = esi + 0x2; /* 0x00716A80: lea esi, [esi + 2] */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00716A83: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00716A87: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716A74; /* 0x00716A88: jne 0x716a74 */
L_00716A8A:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716A8A: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x00716A8D: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716A90: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716AA6; /* 0x00716A95: je 0x716aa6 */
L_00716A97:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716A97: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8010u); /* 0x00716A9B: push 0x8010 */
    PUSH32(esp, edi); /* 0x00716AA0: push edi */
    RECOMP_ICALL(eax); /* 0x00716AA1: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716AA3: add esp, 8 */
    _flag_k = FK_ADD;
L_00716AA6:
    edi = POP32_VAL(esp); /* 0x00716AA6: pop edi */
    esi = POP32_VAL(esp); /* 0x00716AA7: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716AA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716AA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716AB0u);

L_00716AB0:
    PUSH32(esp, ebp); /* 0x00716AB0: push ebp */
    ebp = esp; /* 0x00716AB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716AB3: push esi */
    PUSH32(esp, edi); /* 0x00716AB4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716AB5: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00716AB8: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00716ABB: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00716ABB: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716ABD: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716AC0: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716AD8; /* 0x00716AC2: je 0x716ad8 */
L_00716AC4:
    SET_LO16(eax, MEM16(edx)); /* 0x00716AC4: mov ax, word ptr [edx] */
    edx = edx + 0x2; /* 0x00716AC7: lea edx, [edx + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00716ACA: rol ax, 8 */
    esi = esi + 0x2; /* 0x00716ACE: lea esi, [esi + 2] */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00716AD1: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00716AD5: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716AC4; /* 0x00716AD6: jne 0x716ac4 */
L_00716AD8:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716AD8: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x00716ADB: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716ADE: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716AF4; /* 0x00716AE3: je 0x716af4 */
L_00716AE5:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716AE5: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x1010u); /* 0x00716AE9: push 0x1010 */
    PUSH32(esp, edi); /* 0x00716AEE: push edi */
    RECOMP_ICALL(eax); /* 0x00716AEF: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716AF1: add esp, 8 */
    _flag_k = FK_ADD;
L_00716AF4:
    edi = POP32_VAL(esp); /* 0x00716AF4: pop edi */
    esi = POP32_VAL(esp); /* 0x00716AF5: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716AF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716AF7: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716B00u);

L_00716B00:
    PUSH32(esp, ebp); /* 0x00716B00: push ebp */
    ebp = esp; /* 0x00716B01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716B03: push esi */
    PUSH32(esp, edi); /* 0x00716B04: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716B05: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00716B08: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00716B0B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00716B0B: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716B0D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716B10: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716B2E; /* 0x00716B12: je 0x716b2e */
L_00716B14:
    eax = 0x8000u; /* 0x00716B14: mov eax, 0x8000 */
    edx = edx + 0x2; /* 0x00716B19: lea edx, [edx + 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(edx + (-0x2))); /* 0x00716B1C: xor ax, word ptr [edx - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = esi + 0x2; /* 0x00716B20: lea esi, [esi + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00716B23: rol ax, 8 */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00716B27: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00716B2B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716B14; /* 0x00716B2C: jne 0x716b14 */
L_00716B2E:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716B2E: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x00716B31: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716B34: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716B4A; /* 0x00716B39: je 0x716b4a */
L_00716B3B:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716B3B: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x9010u); /* 0x00716B3F: push 0x9010 */
    PUSH32(esp, edi); /* 0x00716B44: push edi */
    RECOMP_ICALL(eax); /* 0x00716B45: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716B47: add esp, 8 */
    _flag_k = FK_ADD;
L_00716B4A:
    edi = POP32_VAL(esp); /* 0x00716B4A: pop edi */
    esi = POP32_VAL(esp); /* 0x00716B4B: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716B4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716B4D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716B50u);

L_00716B50:
    PUSH32(esp, ebp); /* 0x00716B50: push ebp */
    ebp = esp; /* 0x00716B51: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716B53: push esi */
    PUSH32(esp, edi); /* 0x00716B54: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716B55: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716B58: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x00716B5B: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x2); /* 0x00716B5E: lea edx, [eax - 2] */
    esi = eax + (-0x2); /* 0x00716B61: lea esi, [eax - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00716B64: add edx, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00716B66: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00716B66: shr eax, 1 */
    esi = ecx + esi * 2; /* 0x00716B68: lea esi, [ecx + esi*2] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716B88; /* 0x00716B6B: je 0x716b88 */
L_00716B6D:
    ecx = ecx; /* 0x00716B6D: lea ecx, [ecx] */
L_00716B70:
    ecx = (uint32_t)MEM16(edx); /* 0x00716B70: movzx ecx, word ptr [edx] */
    edx = edx + (-0x2); /* 0x00716B73: lea edx, [edx - 2] */
    _flag_a = (uint32_t)((ecx ^ 0xFFFF8000u)); _flag_b = (uint32_t)((ecx ^ 0xFFFF8000u));
    ecx = ecx ^ 0xFFFF8000u; /* 0x00716B76: xor ecx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = esi + (-0x4); /* 0x00716B7C: lea esi, [esi - 4] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00716B7F: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00716B7F: shl ecx, 0x10 */
    MEM32(esi + 0x4) = ecx; /* 0x00716B82: mov dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716B85: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716B70; /* 0x00716B86: jne 0x716b70 */
L_00716B88:
    eax = MEM32(edi + 0x18); /* 0x00716B88: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716B8B: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716B8E: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x00716B90: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00716B93: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716B96: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716BAC; /* 0x00716B9B: je 0x716bac */
L_00716B9D:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716B9D: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8020u); /* 0x00716BA1: push 0x8020 */
    PUSH32(esp, edi); /* 0x00716BA6: push edi */
    RECOMP_ICALL(eax); /* 0x00716BA7: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716BA9: add esp, 8 */
    _flag_k = FK_ADD;
L_00716BAC:
    edi = POP32_VAL(esp); /* 0x00716BAC: pop edi */
    esi = POP32_VAL(esp); /* 0x00716BAD: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716BAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716BAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716BB0u);

L_00716BB0:
    PUSH32(esp, ebp); /* 0x00716BB0: push ebp */
    ebp = esp; /* 0x00716BB1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00716BB3: push ecx */
    PUSH32(esp, ebx); /* 0x00716BB4: push ebx */
    PUSH32(esp, esi); /* 0x00716BB5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00716BB6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00716BB9: push edi */
    edi = MEM32(esi + 0x18); /* 0x00716BBA: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x00716BBD: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x2); /* 0x00716BC0: lea ebx, [edi - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00716BC3: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 2; /* 0x00716BC5: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00716BC8: add eax, -4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x00716BCB: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x00716BCB: shr edi, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716C0F; /* 0x00716BCD: je 0x716c0f */
L_00716BCF:
    esi = eax; /* 0x00716BCF: mov esi, eax */
L_00716BD1:
    edx = (uint32_t)MEM16(ebx); /* 0x00716BD1: movzx edx, word ptr [ebx] */
    ebx = ebx + (-0x2); /* 0x00716BD4: lea ebx, [ebx - 2] */
    _flag_a = (uint32_t)((edx ^ 0xFFFF8000u)); _flag_b = (uint32_t)((edx ^ 0xFFFF8000u));
    edx = edx ^ 0xFFFF8000u; /* 0x00716BD7: xor edx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = esi + (-0x4); /* 0x00716BDD: lea esi, [esi - 4] */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x00716BE0: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x00716BE0: shl edx, 0x10 */
    ecx = edx; /* 0x00716BE3: mov ecx, edx */
    eax = edx; /* 0x00716BE5: mov eax, edx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00716BE7: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00716BE7: shr eax, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00FF0000u);
    ecx = ecx & 0x00FF0000u; /* 0x00716BEA: and ecx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00716BF0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x00716BF2: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x00716BF4: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x00716BF9: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x00716BF9: shl edx, 0x10 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x00716BFC: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x00716BFE: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x00716BFE: shr ecx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x00716C01: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x00716C01: shl eax, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00716C04: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ecx; /* 0x00716C06: mov dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00716C09: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716BD1; /* 0x00716C0A: jne 0x716bd1 */
L_00716C0C:
    esi = MEM32(ebp + 0x8); /* 0x00716C0C: mov esi, dword ptr [ebp + 8] */
L_00716C0F:
    eax = MEM32(esi + 0x18); /* 0x00716C0F: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00716C12: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716C15: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x00716C17: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00716C1A: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00716C1D: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716C33; /* 0x00716C22: je 0x716c33 */
L_00716C24:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00716C24: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x00716C28: push 0x9020 */
    PUSH32(esp, esi); /* 0x00716C2D: push esi */
    RECOMP_ICALL(eax); /* 0x00716C2E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716C30: add esp, 8 */
    _flag_k = FK_ADD;
L_00716C33:
    edi = POP32_VAL(esp); /* 0x00716C33: pop edi */
    esi = POP32_VAL(esp); /* 0x00716C34: pop esi */
    ebx = POP32_VAL(esp); /* 0x00716C35: pop ebx */
    esp = ebp; /* 0x00716C36: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00716C38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716C39: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716C40u);

L_00716C40:
    PUSH32(esp, ebp); /* 0x00716C40: push ebp */
    ebp = esp; /* 0x00716C41: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x00716C43: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00716C46: push esi */
    PUSH32(esp, edi); /* 0x00716C47: push edi */
    edx = MEM32(ecx + 0x18); /* 0x00716C48: mov edx, dword ptr [ecx + 0x18] */
    eax = MEM32(ecx + 0x10); /* 0x00716C4B: mov eax, dword ptr [ecx + 0x10] */
    esi = edx + (-0x2); /* 0x00716C4E: lea esi, [edx - 2] */
    edi = edx + (-0x2); /* 0x00716C51: lea edi, [edx - 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x00716C54: add esi, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00716C56: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x00716C56: shr edx, 1 */
    edi = eax + edi * 2; /* 0x00716C58: lea edi, [eax + edi*2] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716C8F; /* 0x00716C5B: je 0x716c8f */
L_00716C5D:
    _xmm[1].u64[0] = MEM32(0x808B48); _xmm[1].u64[1] = 0; /* 0x00716C5D: movss xmm1, dword ptr [0x808b48] */
    _xmm[2].u64[0] = MEM32(0x808CB0); _xmm[2].u64[1] = 0; /* 0x00716C65: movss xmm2, dword ptr [0x808cb0] */
    ecx = ecx; /* 0x00716C6D: lea ecx, [ecx] */
L_00716C70:
    eax = (uint32_t)MEM16(esi); /* 0x00716C70: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x00716C73: sub esi, 2 */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00716C76: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00716C7A: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00716C7D: mulss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x00716C81: subss xmm0, xmm2 */
    MEM32(edi) = _xmm[0].u32[0]; /* 0x00716C85: movss dword ptr [edi], xmm0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x00716C89: sub edi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00716C8C: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716C70; /* 0x00716C8D: jne 0x716c70 */
L_00716C8F:
    eax = MEM32(ecx + 0x18); /* 0x00716C8F: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) + 1; /* 0x00716C92: inc dword ptr [ecx + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716C95: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x18) = eax; /* 0x00716C97: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ecx + 0x50); /* 0x00716C9A: mov eax, dword ptr [ecx + 0x50] */
    edi = POP32_VAL(esp); /* 0x00716C9D: pop edi */
    esi = POP32_VAL(esp); /* 0x00716C9E: pop esi */
    /* cmp MEM32(ecx + eax * 4 + 0x28), 0 */ /* 0x00716C9F: cmp dword ptr [ecx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716CB7; /* 0x00716CA4: je 0x716cb7 */
L_00716CA6:
    MEM32(ebp + 0xC) = 0x8120u; /* 0x00716CA6: mov dword ptr [ebp + 0xc], 0x8120 */
    MEM32(ebp + 0x8) = ecx; /* 0x00716CAD: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ecx + eax * 4 + 0x28); /* 0x00716CB0: mov eax, dword ptr [ecx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00716CB4: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_00716CB7:
    ebp = POP32_VAL(esp); /* 0x00716CB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716CB8: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00716CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716CC0u);

L_00716CC0:
    PUSH32(esp, ebp); /* 0x00716CC0: push ebp */
    ebp = esp; /* 0x00716CC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00716CC3: push ecx */
    PUSH32(esp, ebx); /* 0x00716CC4: push ebx */
    PUSH32(esp, esi); /* 0x00716CC5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00716CC6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00716CC9: push edi */
    edi = MEM32(esi + 0x18); /* 0x00716CCA: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x00716CCD: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x2); /* 0x00716CD0: lea ebx, [edi - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00716CD3: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 2; /* 0x00716CD5: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00716CD8: add eax, -4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x00716CDB: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x00716CDB: shr edi, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716D3D; /* 0x00716CDD: je 0x716d3d */
L_00716CDF:
    _xmm[1].u64[0] = MEM32(0x808B48); _xmm[1].u64[1] = 0; /* 0x00716CDF: movss xmm1, dword ptr [0x808b48] */
    esi = eax; /* 0x00716CE7: mov esi, eax */
    _xmm[2].u64[0] = MEM32(0x808CB0); _xmm[2].u64[1] = 0; /* 0x00716CE9: movss xmm2, dword ptr [0x808cb0] */
L_00716CF1:
    eax = (uint32_t)MEM16(ebx); /* 0x00716CF1: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x00716CF4: sub ebx, 2 */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00716CF7: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00716CFB: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00716CFE: mulss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x00716D02: subss xmm0, xmm2 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00716D06: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x00716D0B: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x00716D0E: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00716D10: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00716D16: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00716D18: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00716D18: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00716D1B: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00716D1D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00716D1F: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00716D25: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00716D25: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00716D28: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00716D2A: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00716D2A: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x00716D2D: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x00716D2D: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00716D30: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edx; /* 0x00716D32: mov dword ptr [esi], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x00716D34: sub esi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00716D37: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716CF1; /* 0x00716D38: jne 0x716cf1 */
L_00716D3A:
    esi = MEM32(ebp + 0x8); /* 0x00716D3A: mov esi, dword ptr [ebp + 8] */
L_00716D3D:
    eax = MEM32(esi + 0x18); /* 0x00716D3D: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00716D40: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716D43: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x00716D45: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00716D48: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00716D4B: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716D61; /* 0x00716D50: je 0x716d61 */
L_00716D52:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00716D52: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x00716D56: push 0x9120 */
    PUSH32(esp, esi); /* 0x00716D5B: push esi */
    RECOMP_ICALL(eax); /* 0x00716D5C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716D5E: add esp, 8 */
    _flag_k = FK_ADD;
L_00716D61:
    edi = POP32_VAL(esp); /* 0x00716D61: pop edi */
    esi = POP32_VAL(esp); /* 0x00716D62: pop esi */
    ebx = POP32_VAL(esp); /* 0x00716D63: pop ebx */
    esp = ebp; /* 0x00716D64: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00716D66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716D67: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716D70u);

L_00716D70:
    PUSH32(esp, ebp); /* 0x00716D70: push ebp */
    ebp = esp; /* 0x00716D71: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716D73: push esi */
    PUSH32(esp, edi); /* 0x00716D74: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716D75: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716D78: mov eax, dword ptr [edi + 0x18] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00716D7B: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00716D7B: shr eax, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716D7D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716D80: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716D96; /* 0x00716D82: je 0x716d96 */
L_00716D84:
    SET_LO8(ecx, MEM8(edx + 0x1)); /* 0x00716D84: mov cl, byte ptr [edx + 1] */
    edx = edx + 0x2; /* 0x00716D87: lea edx, [edx + 2] */
    _flag_a = (uint32_t)((LO8(ecx) ^ 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) ^ 0x80u); /* 0x00716D8A: xor cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = esi + 0x1; /* 0x00716D8D: lea esi, [esi + 1] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00716D90: mov byte ptr [esi - 1], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716D93: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716D84; /* 0x00716D94: jne 0x716d84 */
L_00716D96:
    eax = MEM32(edi + 0x18); /* 0x00716D96: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716D99: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00716D9C: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00716D9D: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00716D9F: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00716DA1: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00716DA4: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716DA7: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716DBA; /* 0x00716DAC: je 0x716dba */
L_00716DAE:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716DAE: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x00716DB2: push 8 */
    PUSH32(esp, edi); /* 0x00716DB4: push edi */
    RECOMP_ICALL(eax); /* 0x00716DB5: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716DB7: add esp, 8 */
    _flag_k = FK_ADD;
L_00716DBA:
    edi = POP32_VAL(esp); /* 0x00716DBA: pop edi */
    esi = POP32_VAL(esp); /* 0x00716DBB: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716DBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716DBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716DC0u);

L_00716DC0:
    PUSH32(esp, ebp); /* 0x00716DC0: push ebp */
    ebp = esp; /* 0x00716DC1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716DC3: push esi */
    PUSH32(esp, edi); /* 0x00716DC4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716DC5: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716DC8: mov eax, dword ptr [edi + 0x18] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00716DCB: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00716DCB: shr eax, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716DCD: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716DD0: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716DE2; /* 0x00716DD2: je 0x716de2 */
L_00716DD4:
    SET_LO8(ecx, MEM8(edx + 0x1)); /* 0x00716DD4: mov cl, byte ptr [edx + 1] */
    edx = edx + 0x2; /* 0x00716DD7: lea edx, [edx + 2] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x00716DDA: mov byte ptr [esi], cl */
    esi = esi + 0x1; /* 0x00716DDC: lea esi, [esi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716DDF: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716DD4; /* 0x00716DE0: jne 0x716dd4 */
L_00716DE2:
    eax = MEM32(edi + 0x18); /* 0x00716DE2: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716DE5: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00716DE8: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00716DE9: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00716DEB: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00716DED: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00716DF0: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716DF3: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716E09; /* 0x00716DF8: je 0x716e09 */
L_00716DFA:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716DFA: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x00716DFE: push 0x8008 */
    PUSH32(esp, edi); /* 0x00716E03: push edi */
    RECOMP_ICALL(eax); /* 0x00716E04: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716E06: add esp, 8 */
    _flag_k = FK_ADD;
L_00716E09:
    edi = POP32_VAL(esp); /* 0x00716E09: pop edi */
    esi = POP32_VAL(esp); /* 0x00716E0A: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716E0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716E0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716E10u);

L_00716E10:
    PUSH32(esp, ebp); /* 0x00716E10: push ebp */
    ebp = esp; /* 0x00716E11: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716E13: push esi */
    PUSH32(esp, edi); /* 0x00716E14: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716E15: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00716E18: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00716E1B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00716E1B: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716E1D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716E20: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716E3A; /* 0x00716E22: je 0x716e3a */
L_00716E24:
    eax = 0x8000u; /* 0x00716E24: mov eax, 0x8000 */
    edx = edx + 0x2; /* 0x00716E29: lea edx, [edx + 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(edx + (-0x2))); /* 0x00716E2C: xor ax, word ptr [edx - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = esi + 0x2; /* 0x00716E30: lea esi, [esi + 2] */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00716E33: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00716E37: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716E24; /* 0x00716E38: jne 0x716e24 */
L_00716E3A:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716E3A: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x00716E3D: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716E40: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716E53; /* 0x00716E45: je 0x716e53 */
L_00716E47:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716E47: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x10u); /* 0x00716E4B: push 0x10 */
    PUSH32(esp, edi); /* 0x00716E4D: push edi */
    RECOMP_ICALL(eax); /* 0x00716E4E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716E50: add esp, 8 */
    _flag_k = FK_ADD;
L_00716E53:
    edi = POP32_VAL(esp); /* 0x00716E53: pop edi */
    esi = POP32_VAL(esp); /* 0x00716E54: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716E55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716E56: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716E60u);

L_00716E60:
    PUSH32(esp, ebp); /* 0x00716E60: push ebp */
    ebp = esp; /* 0x00716E61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716E63: push esi */
    PUSH32(esp, edi); /* 0x00716E64: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716E65: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00716E68: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00716E6B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00716E6B: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716E6D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716E70: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716E8E; /* 0x00716E72: je 0x716e8e */
L_00716E74:
    eax = 0x8000u; /* 0x00716E74: mov eax, 0x8000 */
    edx = edx + 0x2; /* 0x00716E79: lea edx, [edx + 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(edx + (-0x2))); /* 0x00716E7C: xor ax, word ptr [edx - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = esi + 0x2; /* 0x00716E80: lea esi, [esi + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00716E83: rol ax, 8 */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00716E87: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00716E8B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716E74; /* 0x00716E8C: jne 0x716e74 */
L_00716E8E:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716E8E: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x00716E91: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716E94: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716EAA; /* 0x00716E99: je 0x716eaa */
L_00716E9B:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716E9B: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x1010u); /* 0x00716E9F: push 0x1010 */
    PUSH32(esp, edi); /* 0x00716EA4: push edi */
    RECOMP_ICALL(eax); /* 0x00716EA5: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716EA7: add esp, 8 */
    _flag_k = FK_ADD;
L_00716EAA:
    edi = POP32_VAL(esp); /* 0x00716EAA: pop edi */
    esi = POP32_VAL(esp); /* 0x00716EAB: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716EAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716EAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716EB0u);

L_00716EB0:
    PUSH32(esp, ebp); /* 0x00716EB0: push ebp */
    ebp = esp; /* 0x00716EB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716EB3: push esi */
    PUSH32(esp, edi); /* 0x00716EB4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716EB5: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00716EB8: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00716EBB: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00716EBB: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x00716EBD: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00716EC0: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716ED8; /* 0x00716EC2: je 0x716ed8 */
L_00716EC4:
    SET_LO16(eax, MEM16(edx)); /* 0x00716EC4: mov ax, word ptr [edx] */
    edx = edx + 0x2; /* 0x00716EC7: lea edx, [edx + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00716ECA: rol ax, 8 */
    esi = esi + 0x2; /* 0x00716ECE: lea esi, [esi + 2] */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00716ED1: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00716ED5: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716EC4; /* 0x00716ED6: jne 0x716ec4 */
L_00716ED8:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716ED8: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x00716EDB: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716EDE: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716EF4; /* 0x00716EE3: je 0x716ef4 */
L_00716EE5:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716EE5: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x9010u); /* 0x00716EE9: push 0x9010 */
    PUSH32(esp, edi); /* 0x00716EEE: push edi */
    RECOMP_ICALL(eax); /* 0x00716EEF: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716EF1: add esp, 8 */
    _flag_k = FK_ADD;
L_00716EF4:
    edi = POP32_VAL(esp); /* 0x00716EF4: pop edi */
    esi = POP32_VAL(esp); /* 0x00716EF5: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716EF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716EF7: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716F00u);

L_00716F00:
    PUSH32(esp, ebp); /* 0x00716F00: push ebp */
    ebp = esp; /* 0x00716F01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716F03: push esi */
    PUSH32(esp, edi); /* 0x00716F04: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716F05: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716F08: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x00716F0B: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x2); /* 0x00716F0E: lea edx, [eax - 2] */
    esi = eax + (-0x2); /* 0x00716F11: lea esi, [eax - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00716F14: add edx, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00716F16: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00716F16: shr eax, 1 */
    esi = ecx + esi * 2; /* 0x00716F18: lea esi, [ecx + esi*2] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716F32; /* 0x00716F1B: je 0x716f32 */
L_00716F1D:
    ecx = ecx; /* 0x00716F1D: lea ecx, [ecx] */
L_00716F20:
    ecx = (int32_t)(int16_t)MEM16(edx); /* 0x00716F20: movsx ecx, word ptr [edx] */
    edx = edx + (-0x2); /* 0x00716F23: lea edx, [edx - 2] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00716F26: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00716F26: shl ecx, 0x10 */
    esi = esi + (-0x4); /* 0x00716F29: lea esi, [esi - 4] */
    MEM32(esi + 0x4) = ecx; /* 0x00716F2C: mov dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716F2F: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716F20; /* 0x00716F30: jne 0x716f20 */
L_00716F32:
    eax = MEM32(edi + 0x18); /* 0x00716F32: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716F35: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716F38: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x00716F3A: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00716F3D: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716F40: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716F56; /* 0x00716F45: je 0x716f56 */
L_00716F47:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716F47: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8020u); /* 0x00716F4B: push 0x8020 */
    PUSH32(esp, edi); /* 0x00716F50: push edi */
    RECOMP_ICALL(eax); /* 0x00716F51: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716F53: add esp, 8 */
    _flag_k = FK_ADD;
L_00716F56:
    edi = POP32_VAL(esp); /* 0x00716F56: pop edi */
    esi = POP32_VAL(esp); /* 0x00716F57: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716F58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716F59: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716F60u);

L_00716F60:
    PUSH32(esp, ebp); /* 0x00716F60: push ebp */
    ebp = esp; /* 0x00716F61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00716F63: push ecx */
    PUSH32(esp, ebx); /* 0x00716F64: push ebx */
    PUSH32(esp, esi); /* 0x00716F65: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00716F66: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00716F69: push edi */
    edi = MEM32(esi + 0x18); /* 0x00716F6A: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x00716F6D: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x2); /* 0x00716F70: lea ebx, [edi - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00716F73: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 2; /* 0x00716F75: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00716F78: add eax, -4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x00716F7B: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x00716F7B: shr edi, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00716FB9; /* 0x00716F7D: je 0x716fb9 */
L_00716F7F:
    esi = eax; /* 0x00716F7F: mov esi, eax */
L_00716F81:
    ecx = (int32_t)(int16_t)MEM16(ebx); /* 0x00716F81: movsx ecx, word ptr [ebx] */
    ebx = ebx + (-0x2); /* 0x00716F84: lea ebx, [ebx - 2] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00716F87: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00716F87: shl ecx, 0x10 */
    esi = esi + (-0x4); /* 0x00716F8A: lea esi, [esi - 4] */
    edx = ecx; /* 0x00716F8D: mov edx, ecx */
    eax = ecx; /* 0x00716F8F: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00716F91: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00716F91: shr eax, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00716F94: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00716F9A: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00716F9C: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x00716F9E: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00716FA3: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00716FA3: shl ecx, 0x10 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x00716FA6: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00716FA8: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00716FA8: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x00716FAB: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x00716FAB: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00716FAE: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x00716FB0: mov dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00716FB3: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716F81; /* 0x00716FB4: jne 0x716f81 */
L_00716FB6:
    esi = MEM32(ebp + 0x8); /* 0x00716FB6: mov esi, dword ptr [ebp + 8] */
L_00716FB9:
    eax = MEM32(esi + 0x18); /* 0x00716FB9: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00716FBC: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716FBF: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x00716FC1: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00716FC4: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00716FC7: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716FDD; /* 0x00716FCC: je 0x716fdd */
L_00716FCE:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00716FCE: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x00716FD2: push 0x9020 */
    PUSH32(esp, esi); /* 0x00716FD7: push esi */
    RECOMP_ICALL(eax); /* 0x00716FD8: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716FDA: add esp, 8 */
    _flag_k = FK_ADD;
L_00716FDD:
    edi = POP32_VAL(esp); /* 0x00716FDD: pop edi */
    esi = POP32_VAL(esp); /* 0x00716FDE: pop esi */
    ebx = POP32_VAL(esp); /* 0x00716FDF: pop ebx */
    esp = ebp; /* 0x00716FE0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00716FE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716FE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716FF0u);

L_00716FF0:
    PUSH32(esp, ebp); /* 0x00716FF0: push ebp */
    ebp = esp; /* 0x00716FF1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x00716FF3: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00716FF6: push esi */
    PUSH32(esp, edi); /* 0x00716FF7: push edi */
    ecx = MEM32(edx + 0x18); /* 0x00716FF8: mov ecx, dword ptr [edx + 0x18] */
    eax = MEM32(edx + 0x10); /* 0x00716FFB: mov eax, dword ptr [edx + 0x10] */
    esi = ecx + (-0x2); /* 0x00716FFE: lea esi, [ecx - 2] */
    edi = ecx + (-0x2); /* 0x00717001: lea edi, [ecx - 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x00717004: add esi, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00717006: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00717006: shr ecx, 1 */
    edi = eax + edi * 2; /* 0x00717008: lea edi, [eax + edi*2] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00717031; /* 0x0071700B: je 0x717031 */
L_0071700D:
    _xmm[1].u64[0] = MEM32(0x808B48); _xmm[1].u64[1] = 0; /* 0x0071700D: movss xmm1, dword ptr [0x808b48] */
L_00717015:
    eax = (int32_t)(int16_t)MEM16(esi); /* 0x00717015: movsx eax, word ptr [esi] */
    esi = esi + (-0x2); /* 0x00717018: lea esi, [esi - 2] */
    edi = edi + (-0x4); /* 0x0071701B: lea edi, [edi - 4] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071701E: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00717022: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00717025: mulss xmm0, xmm1 */
    MEM32(edi + 0x4) = _xmm[0].u32[0]; /* 0x00717029: movss dword ptr [edi + 4], xmm0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0071702E: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717015; /* 0x0071702F: jne 0x717015 */
L_00717031:
    eax = MEM32(edx + 0x18); /* 0x00717031: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x00717034: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00717037: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edx + 0x18) = eax; /* 0x00717039: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(edx + 0x50); /* 0x0071703C: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x0071703F: pop edi */
    esi = POP32_VAL(esp); /* 0x00717040: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x00717041: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717059; /* 0x00717046: je 0x717059 */
L_00717048:
    MEM32(ebp + 0xC) = 0x8120u; /* 0x00717048: mov dword ptr [ebp + 0xc], 0x8120 */
    MEM32(ebp + 0x8) = edx; /* 0x0071704F: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x00717052: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00717056: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_00717059:
    ebp = POP32_VAL(esp); /* 0x00717059: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071705A: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00717060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717060u);

L_00717060:
    PUSH32(esp, ebp); /* 0x00717060: push ebp */
    ebp = esp; /* 0x00717061: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717063: push ecx */
    PUSH32(esp, ebx); /* 0x00717064: push ebx */
    PUSH32(esp, esi); /* 0x00717065: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717066: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717069: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071706A: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x0071706D: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x2); /* 0x00717070: lea ebx, [edi - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00717073: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 2; /* 0x00717075: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00717078: add eax, -4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x0071707B: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x0071707B: shr edi, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007170D9; /* 0x0071707D: je 0x7170d9 */
L_0071707F:
    _xmm[1].u64[0] = MEM32(0x808B48); _xmm[1].u64[1] = 0; /* 0x0071707F: movss xmm1, dword ptr [0x808b48] */
    esi = eax; /* 0x00717087: mov esi, eax */
    esp = esp; /* 0x00717089: lea esp, [esp] */
L_00717090:
    eax = (int32_t)(int16_t)MEM16(ebx); /* 0x00717090: movsx eax, word ptr [ebx] */
    ebx = ebx + (-0x2); /* 0x00717093: lea ebx, [ebx - 2] */
    esi = esi + (-0x4); /* 0x00717096: lea esi, [esi - 4] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00717099: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0071709D: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007170A0: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x007170A4: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x007170A9: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x007170AC: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x007170AE: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007170B4: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x007170B6: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x007170B6: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007170B9: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007170BB: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x007170BD: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x007170C3: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x007170C3: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007170C6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007170C8: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007170C8: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x007170CB: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x007170CB: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007170CE: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x007170D0: mov dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007170D3: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717090; /* 0x007170D4: jne 0x717090 */
L_007170D6:
    esi = MEM32(ebp + 0x8); /* 0x007170D6: mov esi, dword ptr [ebp + 8] */
L_007170D9:
    eax = MEM32(esi + 0x18); /* 0x007170D9: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007170DC: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x007170DF: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x007170E1: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x007170E4: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x007170E7: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007170FD; /* 0x007170EC: je 0x7170fd */
L_007170EE:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x007170EE: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x007170F2: push 0x9120 */
    PUSH32(esp, esi); /* 0x007170F7: push esi */
    RECOMP_ICALL(eax); /* 0x007170F8: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007170FA: add esp, 8 */
    _flag_k = FK_ADD;
L_007170FD:
    edi = POP32_VAL(esp); /* 0x007170FD: pop edi */
    esi = POP32_VAL(esp); /* 0x007170FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x007170FF: pop ebx */
    esp = ebp; /* 0x00717100: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00717102: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717103: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717110u);

L_00717110:
    PUSH32(esp, ebp); /* 0x00717110: push ebp */
    ebp = esp; /* 0x00717111: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717113: push esi */
    PUSH32(esp, edi); /* 0x00717114: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717115: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00717118: mov eax, dword ptr [edi + 0x18] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071711B: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x0071711B: shr eax, 1 */
    edx = MEM32(edi + 0x10); /* 0x0071711D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717120: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_0071713B; /* 0x00717122: je 0x71713b */
L_00717124:
    SET_LO16(ecx, MEM16(edx)); /* 0x00717124: mov cx, word ptr [edx] */
    edx = edx + 0x2; /* 0x00717127: lea edx, [edx + 2] */
    { uint32_t _rv = (LO16(ecx)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(ecx, _rv); } /* 0x0071712A: rol cx, 8 */
    esi = esi + 0x1; /* 0x0071712E: lea esi, [esi + 1] */
    if (8u) _cf = (((LO16(ecx)) >> 7) & 1u); /* 0x00717131: shr cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 8u); /* 0x00717131: shr cx, 8 */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00717135: mov byte ptr [esi - 1], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717138: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717124; /* 0x00717139: jne 0x717124 */
L_0071713B:
    eax = MEM32(edi + 0x18); /* 0x0071713B: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071713E: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717141: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717142: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717144: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00717146: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00717149: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071714C: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071715F; /* 0x00717151: je 0x71715f */
L_00717153:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717153: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x00717157: push 8 */
    PUSH32(esp, edi); /* 0x00717159: push edi */
    RECOMP_ICALL(eax); /* 0x0071715A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071715C: add esp, 8 */
    _flag_k = FK_ADD;
L_0071715F:
    edi = POP32_VAL(esp); /* 0x0071715F: pop edi */
    esi = POP32_VAL(esp); /* 0x00717160: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717161: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717162: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717170u);

L_00717170:
    PUSH32(esp, ebp); /* 0x00717170: push ebp */
    ebp = esp; /* 0x00717171: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717173: push esi */
    PUSH32(esp, edi); /* 0x00717174: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717175: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00717178: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071717B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x0071717B: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x0071717D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717180: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_0071719D; /* 0x00717182: je 0x71719d */
L_00717184:
    SET_LO16(eax, MEM16(edx)); /* 0x00717184: mov ax, word ptr [edx] */
    edx = edx + 0x2; /* 0x00717187: lea edx, [edx + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x0071718A: rol ax, 8 */
    esi = esi + 0x1; /* 0x0071718E: lea esi, [esi + 1] */
    if (8u) _cf = (((LO16(eax)) >> 7) & 1u); /* 0x00717191: shr ax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 8u); /* 0x00717191: shr ax, 8 */
    _flag_a = (uint32_t)((LO8(eax) ^ 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x80u); /* 0x00717195: xor al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00717197: mov byte ptr [esi - 1], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0071719A: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717184; /* 0x0071719B: jne 0x717184 */
L_0071719D:
    eax = MEM32(edi + 0x18); /* 0x0071719D: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007171A0: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007171A3: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x007171A4: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007171A6: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x007171A8: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007171AB: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007171AE: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007171C4; /* 0x007171B3: je 0x7171c4 */
L_007171B5:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007171B5: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x007171B9: push 0x8008 */
    PUSH32(esp, edi); /* 0x007171BE: push edi */
    RECOMP_ICALL(eax); /* 0x007171BF: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007171C1: add esp, 8 */
    _flag_k = FK_ADD;
L_007171C4:
    edi = POP32_VAL(esp); /* 0x007171C4: pop edi */
    esi = POP32_VAL(esp); /* 0x007171C5: pop esi */
    ebp = POP32_VAL(esp); /* 0x007171C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007171C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_007171D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007171D0u);

L_007171D0:
    PUSH32(esp, ebp); /* 0x007171D0: push ebp */
    ebp = esp; /* 0x007171D1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007171D3: push esi */
    PUSH32(esp, edi); /* 0x007171D4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007171D5: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x007171D8: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x007171DB: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x007171DB: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x007171DD: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x007171E0: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007171F8; /* 0x007171E2: je 0x7171f8 */
L_007171E4:
    SET_LO16(eax, MEM16(edx)); /* 0x007171E4: mov ax, word ptr [edx] */
    edx = edx + 0x2; /* 0x007171E7: lea edx, [edx + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007171EA: rol ax, 8 */
    esi = esi + 0x2; /* 0x007171EE: lea esi, [esi + 2] */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x007171F1: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007171F5: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007171E4; /* 0x007171F6: jne 0x7171e4 */
L_007171F8:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007171F8: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x007171FB: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007171FE: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717211; /* 0x00717203: je 0x717211 */
L_00717205:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717205: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x10u); /* 0x00717209: push 0x10 */
    PUSH32(esp, edi); /* 0x0071720B: push edi */
    RECOMP_ICALL(eax); /* 0x0071720C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071720E: add esp, 8 */
    _flag_k = FK_ADD;
L_00717211:
    edi = POP32_VAL(esp); /* 0x00717211: pop edi */
    esi = POP32_VAL(esp); /* 0x00717212: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717213: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717214: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717220u);

L_00717220:
    PUSH32(esp, ebp); /* 0x00717220: push ebp */
    ebp = esp; /* 0x00717221: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x00717223: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717226: push esi */
    PUSH32(esp, edi); /* 0x00717227: push edi */
    ecx = MEM32(edx + 0x18); /* 0x00717228: mov ecx, dword ptr [edx + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071722B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x0071722B: shr ecx, 1 */
    esi = MEM32(edx + 0x10); /* 0x0071722D: mov esi, dword ptr [edx + 0x10] */
    edi = esi; /* 0x00717230: mov edi, esi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00717258; /* 0x00717232: je 0x717258 */
L_00717234:
    PUSH32(esp, ebx); /* 0x00717234: push ebx */
    ebx = 0xFFFF8000u; /* 0x00717235: mov ebx, 0xffff8000 */
    ebx = ebx; /* 0x0071723A: lea ebx, [ebx] */
L_00717240:
    SET_LO16(eax, MEM16(esi)); /* 0x00717240: mov ax, word ptr [esi] */
    esi = esi + 0x2; /* 0x00717243: lea esi, [esi + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00717246: rol ax, 8 */
    edi = edi + 0x2; /* 0x0071724A: lea edi, [edi + 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ebx)); /* 0x0071724D: xor ax, bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00717250: mov word ptr [edi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00717254: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717240; /* 0x00717255: jne 0x717240 */
L_00717257:
    ebx = POP32_VAL(esp); /* 0x00717257: pop ebx */
L_00717258:
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x00717258: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edx + 0x50); /* 0x0071725B: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x0071725E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071725F: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x00717260: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717278; /* 0x00717265: je 0x717278 */
L_00717267:
    MEM32(ebp + 0xC) = 0x8010u; /* 0x00717267: mov dword ptr [ebp + 0xc], 0x8010 */
    MEM32(ebp + 0x8) = edx; /* 0x0071726E: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x00717271: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00717275: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_00717278:
    ebp = POP32_VAL(esp); /* 0x00717278: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717279: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00717280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717280u);

L_00717280:
    PUSH32(esp, ebp); /* 0x00717280: push ebp */
    ebp = esp; /* 0x00717281: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x00717283: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717286: push esi */
    PUSH32(esp, edi); /* 0x00717287: push edi */
    ecx = MEM32(edx + 0x18); /* 0x00717288: mov ecx, dword ptr [edx + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071728B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x0071728B: shr ecx, 1 */
    esi = MEM32(edx + 0x10); /* 0x0071728D: mov esi, dword ptr [edx + 0x10] */
    edi = esi; /* 0x00717290: mov edi, esi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007172BC; /* 0x00717292: je 0x7172bc */
L_00717294:
    PUSH32(esp, ebx); /* 0x00717294: push ebx */
    ebx = 0x8000u; /* 0x00717295: mov ebx, 0x8000 */
    ebx = ebx; /* 0x0071729A: lea ebx, [ebx] */
L_007172A0:
    SET_LO16(eax, MEM16(esi)); /* 0x007172A0: mov ax, word ptr [esi] */
    esi = esi + 0x2; /* 0x007172A3: lea esi, [esi + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007172A6: rol ax, 8 */
    edi = edi + 0x2; /* 0x007172AA: lea edi, [edi + 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ebx)); /* 0x007172AD: xor ax, bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007172B0: rol ax, 8 */
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x007172B4: mov word ptr [edi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007172B8: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007172A0; /* 0x007172B9: jne 0x7172a0 */
L_007172BB:
    ebx = POP32_VAL(esp); /* 0x007172BB: pop ebx */
L_007172BC:
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x007172BC: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edx + 0x50); /* 0x007172BF: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x007172C2: pop edi */
    esi = POP32_VAL(esp); /* 0x007172C3: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x007172C4: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007172DC; /* 0x007172C9: je 0x7172dc */
L_007172CB:
    MEM32(ebp + 0xC) = 0x9010u; /* 0x007172CB: mov dword ptr [ebp + 0xc], 0x9010 */
    MEM32(ebp + 0x8) = edx; /* 0x007172D2: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x007172D5: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x007172D9: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_007172DC:
    ebp = POP32_VAL(esp); /* 0x007172DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007172DD: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007172E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007172E0u);

L_007172E0:
    PUSH32(esp, ebp); /* 0x007172E0: push ebp */
    ebp = esp; /* 0x007172E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007172E3: push esi */
    PUSH32(esp, edi); /* 0x007172E4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007172E5: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x007172E8: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(edi + 0x10); /* 0x007172EB: mov eax, dword ptr [edi + 0x10] */
    edx = ecx + (-0x2); /* 0x007172EE: lea edx, [ecx - 2] */
    esi = ecx + (-0x2); /* 0x007172F1: lea esi, [ecx - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x007172F4: add edx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x007172F6: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x007172F6: shr ecx, 1 */
    esi = eax + esi * 2; /* 0x007172F8: lea esi, [eax + esi*2] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_0071731E; /* 0x007172FB: je 0x71731e */
L_007172FD:
    ecx = ecx; /* 0x007172FD: lea ecx, [ecx] */
L_00717300:
    SET_LO16(eax, MEM16(edx)); /* 0x00717300: mov ax, word ptr [edx] */
    edx = edx + (-0x2); /* 0x00717303: lea edx, [edx - 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00717306: rol ax, 8 */
    esi = esi + (-0x4); /* 0x0071730A: lea esi, [esi - 4] */
    eax = (uint32_t)LO16(eax); /* 0x0071730D: movzx eax, ax */
    _flag_a = (uint32_t)((eax ^ 0xFFFF8000u)); _flag_b = (uint32_t)((eax ^ 0xFFFF8000u));
    eax = eax ^ 0xFFFF8000u; /* 0x00717310: xor eax, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00717315: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00717315: shl eax, 0x10 */
    MEM32(esi + 0x4) = eax; /* 0x00717318: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0071731B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717300; /* 0x0071731C: jne 0x717300 */
L_0071731E:
    eax = MEM32(edi + 0x18); /* 0x0071731E: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717321: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00717324: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x00717326: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00717329: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071732C: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717342; /* 0x00717331: je 0x717342 */
L_00717333:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717333: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8020u); /* 0x00717337: push 0x8020 */
    PUSH32(esp, edi); /* 0x0071733C: push edi */
    RECOMP_ICALL(eax); /* 0x0071733D: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071733F: add esp, 8 */
    _flag_k = FK_ADD;
L_00717342:
    edi = POP32_VAL(esp); /* 0x00717342: pop edi */
    esi = POP32_VAL(esp); /* 0x00717343: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717344: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717345: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717350u);

L_00717350:
    PUSH32(esp, ebp); /* 0x00717350: push ebp */
    ebp = esp; /* 0x00717351: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717353: push ecx */
    PUSH32(esp, ebx); /* 0x00717354: push ebx */
    PUSH32(esp, esi); /* 0x00717355: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717356: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717359: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071735A: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x0071735D: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x2); /* 0x00717360: lea ebx, [edi - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00717363: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 2; /* 0x00717365: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00717368: add eax, -4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x0071736B: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x0071736B: shr edi, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007173B6; /* 0x0071736D: je 0x7173b6 */
L_0071736F:
    esi = eax; /* 0x0071736F: mov esi, eax */
L_00717371:
    SET_LO16(eax, MEM16(ebx)); /* 0x00717371: mov ax, word ptr [ebx] */
    ebx = ebx + (-0x2); /* 0x00717374: lea ebx, [ebx - 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00717377: rol ax, 8 */
    esi = esi + (-0x4); /* 0x0071737B: lea esi, [esi - 4] */
    edx = (uint32_t)LO16(eax); /* 0x0071737E: movzx edx, ax */
    _flag_a = (uint32_t)((edx ^ 0xFFFF8000u)); _flag_b = (uint32_t)((edx ^ 0xFFFF8000u));
    edx = edx ^ 0xFFFF8000u; /* 0x00717381: xor edx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x00717387: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x00717387: shl edx, 0x10 */
    ecx = edx; /* 0x0071738A: mov ecx, edx */
    eax = edx; /* 0x0071738C: mov eax, edx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0071738E: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0071738E: shr eax, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00FF0000u);
    ecx = ecx & 0x00FF0000u; /* 0x00717391: and ecx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00717397: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x00717399: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x0071739B: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x007173A0: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x007173A0: shl edx, 0x10 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x007173A3: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x007173A5: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x007173A5: shr ecx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x007173A8: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x007173A8: shl eax, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007173AB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ecx; /* 0x007173AD: mov dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007173B0: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717371; /* 0x007173B1: jne 0x717371 */
L_007173B3:
    esi = MEM32(ebp + 0x8); /* 0x007173B3: mov esi, dword ptr [ebp + 8] */
L_007173B6:
    eax = MEM32(esi + 0x18); /* 0x007173B6: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007173B9: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x007173BC: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x007173BE: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x007173C1: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x007173C4: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007173DA; /* 0x007173C9: je 0x7173da */
L_007173CB:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x007173CB: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x007173CF: push 0x9020 */
    PUSH32(esp, esi); /* 0x007173D4: push esi */
    RECOMP_ICALL(eax); /* 0x007173D5: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007173D7: add esp, 8 */
    _flag_k = FK_ADD;
L_007173DA:
    edi = POP32_VAL(esp); /* 0x007173DA: pop edi */
    esi = POP32_VAL(esp); /* 0x007173DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x007173DC: pop ebx */
    esp = ebp; /* 0x007173DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007173DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007173E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_007173F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007173F0u);

L_007173F0:
    PUSH32(esp, ebp); /* 0x007173F0: push ebp */
    ebp = esp; /* 0x007173F1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x007173F3: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x007173F6: push esi */
    PUSH32(esp, edi); /* 0x007173F7: push edi */
    edx = MEM32(ecx + 0x18); /* 0x007173F8: mov edx, dword ptr [ecx + 0x18] */
    eax = MEM32(ecx + 0x10); /* 0x007173FB: mov eax, dword ptr [ecx + 0x10] */
    esi = edx + (-0x2); /* 0x007173FE: lea esi, [edx - 2] */
    edi = edx + (-0x2); /* 0x00717401: lea edi, [edx - 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x00717404: add esi, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00717406: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x00717406: shr edx, 1 */
    edi = eax + edi * 2; /* 0x00717408: lea edi, [eax + edi*2] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00717446; /* 0x0071740B: je 0x717446 */
L_0071740D:
    _xmm[1].u64[0] = MEM32(0x808B48); _xmm[1].u64[1] = 0; /* 0x0071740D: movss xmm1, dword ptr [0x808b48] */
    _xmm[2].u64[0] = MEM32(0x808CB0); _xmm[2].u64[1] = 0; /* 0x00717415: movss xmm2, dword ptr [0x808cb0] */
    ecx = ecx; /* 0x0071741D: lea ecx, [ecx] */
L_00717420:
    SET_LO16(eax, MEM16(esi)); /* 0x00717420: mov ax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x00717423: sub esi, 2 */
    _flag_k = FK_CMP;
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00717426: rol ax, 8 */
    eax = (uint32_t)LO16(eax); /* 0x0071742A: movzx eax, ax */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071742D: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00717431: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00717434: mulss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x00717438: subss xmm0, xmm2 */
    MEM32(edi) = _xmm[0].u32[0]; /* 0x0071743C: movss dword ptr [edi], xmm0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x00717440: sub edi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00717443: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717420; /* 0x00717444: jne 0x717420 */
L_00717446:
    eax = MEM32(ecx + 0x18); /* 0x00717446: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) + 1; /* 0x00717449: inc dword ptr [ecx + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071744C: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x18) = eax; /* 0x0071744E: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ecx + 0x50); /* 0x00717451: mov eax, dword ptr [ecx + 0x50] */
    edi = POP32_VAL(esp); /* 0x00717454: pop edi */
    esi = POP32_VAL(esp); /* 0x00717455: pop esi */
    /* cmp MEM32(ecx + eax * 4 + 0x28), 0 */ /* 0x00717456: cmp dword ptr [ecx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071746E; /* 0x0071745B: je 0x71746e */
L_0071745D:
    MEM32(ebp + 0xC) = 0x8120u; /* 0x0071745D: mov dword ptr [ebp + 0xc], 0x8120 */
    MEM32(ebp + 0x8) = ecx; /* 0x00717464: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ecx + eax * 4 + 0x28); /* 0x00717467: mov eax, dword ptr [ecx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x0071746B: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_0071746E:
    ebp = POP32_VAL(esp); /* 0x0071746E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071746F: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00717470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717470u);

L_00717470:
    PUSH32(esp, ebp); /* 0x00717470: push ebp */
    ebp = esp; /* 0x00717471: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717473: push ecx */
    PUSH32(esp, ebx); /* 0x00717474: push ebx */
    PUSH32(esp, esi); /* 0x00717475: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717476: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717479: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071747A: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x0071747D: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x2); /* 0x00717480: lea ebx, [edi - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00717483: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 2; /* 0x00717485: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00717488: add eax, -4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x0071748B: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x0071748B: shr edi, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007174F4; /* 0x0071748D: je 0x7174f4 */
L_0071748F:
    _xmm[1].u64[0] = MEM32(0x808B48); _xmm[1].u64[1] = 0; /* 0x0071748F: movss xmm1, dword ptr [0x808b48] */
    esi = eax; /* 0x00717497: mov esi, eax */
    _xmm[2].u64[0] = MEM32(0x808CB0); _xmm[2].u64[1] = 0; /* 0x00717499: movss xmm2, dword ptr [0x808cb0] */
L_007174A1:
    SET_LO16(eax, MEM16(ebx)); /* 0x007174A1: mov ax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x007174A4: sub ebx, 2 */
    _flag_k = FK_CMP;
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007174A7: rol ax, 8 */
    eax = (uint32_t)LO16(eax); /* 0x007174AB: movzx eax, ax */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007174AE: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x007174B2: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007174B5: mulss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x007174B9: subss xmm0, xmm2 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x007174BD: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x007174C2: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x007174C5: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x007174C7: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007174CD: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x007174CF: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x007174CF: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007174D2: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007174D4: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x007174D6: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x007174DC: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x007174DC: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007174DF: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007174E1: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007174E1: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x007174E4: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x007174E4: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007174E7: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edx; /* 0x007174E9: mov dword ptr [esi], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x007174EB: sub esi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007174EE: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007174A1; /* 0x007174EF: jne 0x7174a1 */
L_007174F1:
    esi = MEM32(ebp + 0x8); /* 0x007174F1: mov esi, dword ptr [ebp + 8] */
L_007174F4:
    eax = MEM32(esi + 0x18); /* 0x007174F4: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007174F7: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x007174FA: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x007174FC: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x007174FF: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00717502: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717518; /* 0x00717507: je 0x717518 */
L_00717509:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00717509: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x0071750D: push 0x9120 */
    PUSH32(esp, esi); /* 0x00717512: push esi */
    RECOMP_ICALL(eax); /* 0x00717513: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717515: add esp, 8 */
    _flag_k = FK_ADD;
L_00717518:
    edi = POP32_VAL(esp); /* 0x00717518: pop edi */
    esi = POP32_VAL(esp); /* 0x00717519: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071751A: pop ebx */
    esp = ebp; /* 0x0071751B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071751D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071751E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717520u);

L_00717520:
    PUSH32(esp, ebp); /* 0x00717520: push ebp */
    ebp = esp; /* 0x00717521: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717523: push esi */
    PUSH32(esp, edi); /* 0x00717524: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717525: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00717528: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071752B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x0071752B: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x0071752D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717530: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_0071754D; /* 0x00717532: je 0x71754d */
L_00717534:
    SET_LO16(eax, MEM16(edx)); /* 0x00717534: mov ax, word ptr [edx] */
    edx = edx + 0x2; /* 0x00717537: lea edx, [edx + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x0071753A: rol ax, 8 */
    esi = esi + 0x1; /* 0x0071753E: lea esi, [esi + 1] */
    if (8u) _cf = (((LO16(eax)) >> 7) & 1u); /* 0x00717541: sar ax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 8u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 8u));
    _flag_a = (uint32_t)((LO8(eax) ^ 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x80u); /* 0x00717545: xor al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00717547: mov byte ptr [esi - 1], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0071754A: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717534; /* 0x0071754B: jne 0x717534 */
L_0071754D:
    eax = MEM32(edi + 0x18); /* 0x0071754D: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717550: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717553: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717554: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717556: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00717558: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x0071755B: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071755E: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717571; /* 0x00717563: je 0x717571 */
L_00717565:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717565: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x00717569: push 8 */
    PUSH32(esp, edi); /* 0x0071756B: push edi */
    RECOMP_ICALL(eax); /* 0x0071756C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071756E: add esp, 8 */
    _flag_k = FK_ADD;
L_00717571:
    edi = POP32_VAL(esp); /* 0x00717571: pop edi */
    esi = POP32_VAL(esp); /* 0x00717572: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717573: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717574: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717580u);

L_00717580:
    PUSH32(esp, ebp); /* 0x00717580: push ebp */
    ebp = esp; /* 0x00717581: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717583: push esi */
    PUSH32(esp, edi); /* 0x00717584: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717585: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00717588: mov eax, dword ptr [edi + 0x18] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071758B: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x0071758B: shr eax, 1 */
    edx = MEM32(edi + 0x10); /* 0x0071758D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717590: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007175AB; /* 0x00717592: je 0x7175ab */
L_00717594:
    SET_LO16(ecx, MEM16(edx)); /* 0x00717594: mov cx, word ptr [edx] */
    edx = edx + 0x2; /* 0x00717597: lea edx, [edx + 2] */
    { uint32_t _rv = (LO16(ecx)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(ecx, _rv); } /* 0x0071759A: rol cx, 8 */
    esi = esi + 0x1; /* 0x0071759E: lea esi, [esi + 1] */
    if (8u) _cf = (((LO16(ecx)) >> 7) & 1u); /* 0x007175A1: sar cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(ecx)) >> 8u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(ecx)) >> 8u));
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x007175A5: mov byte ptr [esi - 1], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x007175A8: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717594; /* 0x007175A9: jne 0x717594 */
L_007175AB:
    eax = MEM32(edi + 0x18); /* 0x007175AB: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007175AE: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007175B1: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x007175B2: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007175B4: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x007175B6: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007175B9: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007175BC: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007175D2; /* 0x007175C1: je 0x7175d2 */
L_007175C3:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007175C3: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x007175C7: push 0x8008 */
    PUSH32(esp, edi); /* 0x007175CC: push edi */
    RECOMP_ICALL(eax); /* 0x007175CD: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007175CF: add esp, 8 */
    _flag_k = FK_ADD;
L_007175D2:
    edi = POP32_VAL(esp); /* 0x007175D2: pop edi */
    esi = POP32_VAL(esp); /* 0x007175D3: pop esi */
    ebp = POP32_VAL(esp); /* 0x007175D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007175D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_007175E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007175E0u);

L_007175E0:
    PUSH32(esp, ebp); /* 0x007175E0: push ebp */
    ebp = esp; /* 0x007175E1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x007175E3: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x007175E6: push esi */
    PUSH32(esp, edi); /* 0x007175E7: push edi */
    ecx = MEM32(edx + 0x18); /* 0x007175E8: mov ecx, dword ptr [edx + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x007175EB: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x007175EB: shr ecx, 1 */
    esi = MEM32(edx + 0x10); /* 0x007175ED: mov esi, dword ptr [edx + 0x10] */
    edi = esi; /* 0x007175F0: mov edi, esi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00717618; /* 0x007175F2: je 0x717618 */
L_007175F4:
    PUSH32(esp, ebx); /* 0x007175F4: push ebx */
    ebx = 0x8000u; /* 0x007175F5: mov ebx, 0x8000 */
    ebx = ebx; /* 0x007175FA: lea ebx, [ebx] */
L_00717600:
    SET_LO16(eax, MEM16(esi)); /* 0x00717600: mov ax, word ptr [esi] */
    esi = esi + 0x2; /* 0x00717603: lea esi, [esi + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00717606: rol ax, 8 */
    edi = edi + 0x2; /* 0x0071760A: lea edi, [edi + 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ebx)); /* 0x0071760D: xor ax, bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00717610: mov word ptr [edi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00717614: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717600; /* 0x00717615: jne 0x717600 */
L_00717617:
    ebx = POP32_VAL(esp); /* 0x00717617: pop ebx */
L_00717618:
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x00717618: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edx + 0x50); /* 0x0071761B: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x0071761E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071761F: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x00717620: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717638; /* 0x00717625: je 0x717638 */
L_00717627:
    MEM32(ebp + 0xC) = 0x10u; /* 0x00717627: mov dword ptr [ebp + 0xc], 0x10 */
    MEM32(ebp + 0x8) = edx; /* 0x0071762E: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x00717631: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00717635: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_00717638:
    ebp = POP32_VAL(esp); /* 0x00717638: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717639: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00717640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717640u);

L_00717640:
    PUSH32(esp, ebp); /* 0x00717640: push ebp */
    ebp = esp; /* 0x00717641: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717643: push esi */
    PUSH32(esp, edi); /* 0x00717644: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717645: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00717648: mov ecx, dword ptr [edi + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071764B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x0071764B: shr ecx, 1 */
    edx = MEM32(edi + 0x10); /* 0x0071764D: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717650: mov esi, edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00717668; /* 0x00717652: je 0x717668 */
L_00717654:
    SET_LO16(eax, MEM16(edx)); /* 0x00717654: mov ax, word ptr [edx] */
    edx = edx + 0x2; /* 0x00717657: lea edx, [edx + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x0071765A: rol ax, 8 */
    esi = esi + 0x2; /* 0x0071765E: lea esi, [esi + 2] */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00717661: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00717665: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717654; /* 0x00717666: jne 0x717654 */
L_00717668:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717668: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x0071766B: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071766E: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717684; /* 0x00717673: je 0x717684 */
L_00717675:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717675: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8010u); /* 0x00717679: push 0x8010 */
    PUSH32(esp, edi); /* 0x0071767E: push edi */
    RECOMP_ICALL(eax); /* 0x0071767F: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717681: add esp, 8 */
    _flag_k = FK_ADD;
L_00717684:
    edi = POP32_VAL(esp); /* 0x00717684: pop edi */
    esi = POP32_VAL(esp); /* 0x00717685: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717686: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717687: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717690u);

L_00717690:
    PUSH32(esp, ebp); /* 0x00717690: push ebp */
    ebp = esp; /* 0x00717691: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x00717693: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717696: push esi */
    PUSH32(esp, edi); /* 0x00717697: push edi */
    ecx = MEM32(edx + 0x18); /* 0x00717698: mov ecx, dword ptr [edx + 0x18] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071769B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x0071769B: shr ecx, 1 */
    esi = MEM32(edx + 0x10); /* 0x0071769D: mov esi, dword ptr [edx + 0x10] */
    edi = esi; /* 0x007176A0: mov edi, esi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007176CC; /* 0x007176A2: je 0x7176cc */
L_007176A4:
    PUSH32(esp, ebx); /* 0x007176A4: push ebx */
    ebx = 0x8000u; /* 0x007176A5: mov ebx, 0x8000 */
    ebx = ebx; /* 0x007176AA: lea ebx, [ebx] */
L_007176B0:
    SET_LO16(eax, MEM16(esi)); /* 0x007176B0: mov ax, word ptr [esi] */
    esi = esi + 0x2; /* 0x007176B3: lea esi, [esi + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007176B6: rol ax, 8 */
    edi = edi + 0x2; /* 0x007176BA: lea edi, [edi + 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ebx)); /* 0x007176BD: xor ax, bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007176C0: rol ax, 8 */
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x007176C4: mov word ptr [edi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007176C8: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007176B0; /* 0x007176C9: jne 0x7176b0 */
L_007176CB:
    ebx = POP32_VAL(esp); /* 0x007176CB: pop ebx */
L_007176CC:
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x007176CC: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edx + 0x50); /* 0x007176CF: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x007176D2: pop edi */
    esi = POP32_VAL(esp); /* 0x007176D3: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x007176D4: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007176EC; /* 0x007176D9: je 0x7176ec */
L_007176DB:
    MEM32(ebp + 0xC) = 0x1010u; /* 0x007176DB: mov dword ptr [ebp + 0xc], 0x1010 */
    MEM32(ebp + 0x8) = edx; /* 0x007176E2: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x007176E5: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x007176E9: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_007176EC:
    ebp = POP32_VAL(esp); /* 0x007176EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007176ED: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007176F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007176F0u);

L_007176F0:
    PUSH32(esp, ebp); /* 0x007176F0: push ebp */
    ebp = esp; /* 0x007176F1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007176F3: push esi */
    PUSH32(esp, edi); /* 0x007176F4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007176F5: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x007176F8: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x007176FB: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x2); /* 0x007176FE: lea edx, [eax - 2] */
    esi = eax + (-0x2); /* 0x00717701: lea esi, [eax - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00717704: add edx, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717706: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00717706: shr eax, 1 */
    esi = ecx + esi * 2; /* 0x00717708: lea esi, [ecx + esi*2] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00717729; /* 0x0071770B: je 0x717729 */
L_0071770D:
    ecx = ecx; /* 0x0071770D: lea ecx, [ecx] */
L_00717710:
    SET_LO16(ecx, MEM16(edx)); /* 0x00717710: mov cx, word ptr [edx] */
    edx = edx + (-0x2); /* 0x00717713: lea edx, [edx - 2] */
    { uint32_t _rv = (LO16(ecx)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(ecx, _rv); } /* 0x00717716: rol cx, 8 */
    esi = esi + (-0x4); /* 0x0071771A: lea esi, [esi - 4] */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x0071771D: movsx ecx, cx */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00717720: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00717720: shl ecx, 0x10 */
    MEM32(esi + 0x4) = ecx; /* 0x00717723: mov dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717726: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717710; /* 0x00717727: jne 0x717710 */
L_00717729:
    eax = MEM32(edi + 0x18); /* 0x00717729: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071772C: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071772F: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x00717731: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00717734: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00717737: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071774D; /* 0x0071773C: je 0x71774d */
L_0071773E:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x0071773E: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8020u); /* 0x00717742: push 0x8020 */
    PUSH32(esp, edi); /* 0x00717747: push edi */
    RECOMP_ICALL(eax); /* 0x00717748: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071774A: add esp, 8 */
    _flag_k = FK_ADD;
L_0071774D:
    edi = POP32_VAL(esp); /* 0x0071774D: pop edi */
    esi = POP32_VAL(esp); /* 0x0071774E: pop esi */
    ebp = POP32_VAL(esp); /* 0x0071774F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717750: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717760u);

L_00717760:
    PUSH32(esp, ebp); /* 0x00717760: push ebp */
    ebp = esp; /* 0x00717761: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717763: push ecx */
    PUSH32(esp, ebx); /* 0x00717764: push ebx */
    PUSH32(esp, esi); /* 0x00717765: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717766: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717769: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071776A: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x0071776D: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x2); /* 0x00717770: lea ebx, [edi - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00717773: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 2; /* 0x00717775: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00717778: add eax, -4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x0071777B: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x0071777B: shr edi, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007177C0; /* 0x0071777D: je 0x7177c0 */
L_0071777F:
    esi = eax; /* 0x0071777F: mov esi, eax */
L_00717781:
    SET_LO16(eax, MEM16(ebx)); /* 0x00717781: mov ax, word ptr [ebx] */
    ebx = ebx + (-0x2); /* 0x00717784: lea ebx, [ebx - 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00717787: rol ax, 8 */
    esi = esi + (-0x4); /* 0x0071778B: lea esi, [esi - 4] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x0071778E: movsx ecx, ax */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00717791: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00717791: shl ecx, 0x10 */
    edx = ecx; /* 0x00717794: mov edx, ecx */
    eax = ecx; /* 0x00717796: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00717798: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00717798: shr eax, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x0071779B: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x007177A1: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x007177A3: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x007177A5: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x007177AA: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x007177AA: shl ecx, 0x10 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x007177AD: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007177AF: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007177AF: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x007177B2: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x007177B2: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x007177B5: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x007177B7: mov dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007177BA: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717781; /* 0x007177BB: jne 0x717781 */
L_007177BD:
    esi = MEM32(ebp + 0x8); /* 0x007177BD: mov esi, dword ptr [ebp + 8] */
L_007177C0:
    eax = MEM32(esi + 0x18); /* 0x007177C0: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007177C3: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x007177C6: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x007177C8: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x007177CB: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x007177CE: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007177E4; /* 0x007177D3: je 0x7177e4 */
L_007177D5:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x007177D5: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x007177D9: push 0x9020 */
    PUSH32(esp, esi); /* 0x007177DE: push esi */
    RECOMP_ICALL(eax); /* 0x007177DF: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007177E1: add esp, 8 */
    _flag_k = FK_ADD;
L_007177E4:
    edi = POP32_VAL(esp); /* 0x007177E4: pop edi */
    esi = POP32_VAL(esp); /* 0x007177E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x007177E6: pop ebx */
    esp = ebp; /* 0x007177E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007177E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007177EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_007177F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007177F0u);

L_007177F0:
    PUSH32(esp, ebp); /* 0x007177F0: push ebp */
    ebp = esp; /* 0x007177F1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x007177F3: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x007177F6: push esi */
    PUSH32(esp, edi); /* 0x007177F7: push edi */
    edx = MEM32(ecx + 0x18); /* 0x007177F8: mov edx, dword ptr [ecx + 0x18] */
    eax = MEM32(ecx + 0x10); /* 0x007177FB: mov eax, dword ptr [ecx + 0x10] */
    esi = edx + (-0x2); /* 0x007177FE: lea esi, [edx - 2] */
    edi = edx + (-0x2); /* 0x00717801: lea edi, [edx - 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x00717804: add esi, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00717806: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x00717806: shr edx, 1 */
    edi = eax + edi * 2; /* 0x00717808: lea edi, [eax + edi*2] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_00717836; /* 0x0071780B: je 0x717836 */
L_0071780D:
    _xmm[1].u64[0] = MEM32(0x808B48); _xmm[1].u64[1] = 0; /* 0x0071780D: movss xmm1, dword ptr [0x808b48] */
L_00717815:
    SET_LO16(eax, MEM16(esi)); /* 0x00717815: mov ax, word ptr [esi] */
    esi = esi + (-0x2); /* 0x00717818: lea esi, [esi - 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x0071781B: rol ax, 8 */
    edi = edi + (-0x4); /* 0x0071781F: lea edi, [edi - 4] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x00717822: cwde  */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00717823: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00717827: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071782A: mulss xmm0, xmm1 */
    MEM32(edi + 0x4) = _xmm[0].u32[0]; /* 0x0071782E: movss dword ptr [edi + 4], xmm0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00717833: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717815; /* 0x00717834: jne 0x717815 */
L_00717836:
    eax = MEM32(ecx + 0x18); /* 0x00717836: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) + 1; /* 0x00717839: inc dword ptr [ecx + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071783C: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x18) = eax; /* 0x0071783E: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ecx + 0x50); /* 0x00717841: mov eax, dword ptr [ecx + 0x50] */
    edi = POP32_VAL(esp); /* 0x00717844: pop edi */
    esi = POP32_VAL(esp); /* 0x00717845: pop esi */
    /* cmp MEM32(ecx + eax * 4 + 0x28), 0 */ /* 0x00717846: cmp dword ptr [ecx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071785E; /* 0x0071784B: je 0x71785e */
L_0071784D:
    MEM32(ebp + 0xC) = 0x8120u; /* 0x0071784D: mov dword ptr [ebp + 0xc], 0x8120 */
    MEM32(ebp + 0x8) = ecx; /* 0x00717854: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ecx + eax * 4 + 0x28); /* 0x00717857: mov eax, dword ptr [ecx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x0071785B: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_0071785E:
    ebp = POP32_VAL(esp); /* 0x0071785E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071785F: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00717860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717860u);

L_00717860:
    PUSH32(esp, ebp); /* 0x00717860: push ebp */
    ebp = esp; /* 0x00717861: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717863: push ecx */
    PUSH32(esp, ebx); /* 0x00717864: push ebx */
    PUSH32(esp, esi); /* 0x00717865: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717866: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717869: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071786A: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x0071786D: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x2); /* 0x00717870: lea ebx, [edi - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00717873: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 2; /* 0x00717875: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00717878: add eax, -4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x0071787B: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x0071787B: shr edi, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_007178DE; /* 0x0071787D: je 0x7178de */
L_0071787F:
    _xmm[1].u64[0] = MEM32(0x808B48); _xmm[1].u64[1] = 0; /* 0x0071787F: movss xmm1, dword ptr [0x808b48] */
    esi = eax; /* 0x00717887: mov esi, eax */
    esp = esp; /* 0x00717889: lea esp, [esp] */
L_00717890:
    SET_LO16(eax, MEM16(ebx)); /* 0x00717890: mov ax, word ptr [ebx] */
    ebx = ebx + (-0x2); /* 0x00717893: lea ebx, [ebx - 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00717896: rol ax, 8 */
    esi = esi + (-0x4); /* 0x0071789A: lea esi, [esi - 4] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x0071789D: cwde  */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071789E: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x007178A2: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007178A5: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x007178A9: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x007178AE: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x007178B1: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x007178B3: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007178B9: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x007178BB: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x007178BB: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007178BE: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007178C0: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x007178C2: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x007178C8: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x007178C8: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007178CB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007178CD: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007178CD: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x007178D0: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x007178D0: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007178D3: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x007178D5: mov dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007178D8: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717890; /* 0x007178D9: jne 0x717890 */
L_007178DB:
    esi = MEM32(ebp + 0x8); /* 0x007178DB: mov esi, dword ptr [ebp + 8] */
L_007178DE:
    eax = MEM32(esi + 0x18); /* 0x007178DE: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007178E1: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x007178E4: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x007178E6: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x007178E9: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x007178EC: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717902; /* 0x007178F1: je 0x717902 */
L_007178F3:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x007178F3: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x007178F7: push 0x9120 */
    PUSH32(esp, esi); /* 0x007178FC: push esi */
    RECOMP_ICALL(eax); /* 0x007178FD: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007178FF: add esp, 8 */
    _flag_k = FK_ADD;
L_00717902:
    edi = POP32_VAL(esp); /* 0x00717902: pop edi */
    esi = POP32_VAL(esp); /* 0x00717903: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717904: pop ebx */
    esp = ebp; /* 0x00717905: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00717907: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717908: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717910u);

L_00717910:
    PUSH32(esp, ebp); /* 0x00717910: push ebp */
    ebp = esp; /* 0x00717911: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717913: push esi */
    PUSH32(esp, edi); /* 0x00717914: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717915: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00717918: mov eax, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x0071791B: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x0071791E: mov esi, edx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717920: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x00717920: shr eax, 2 */
    /* test eax, eax */ /* 0x00717923: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717939; /* 0x00717925: je 0x717939 */
L_00717927:
    SET_LO8(ecx, MEM8(edx + 0x3)); /* 0x00717927: mov cl, byte ptr [edx + 3] */
    edx = edx + 0x4; /* 0x0071792A: lea edx, [edx + 4] */
    _flag_a = (uint32_t)((LO8(ecx) ^ 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) ^ 0x80u); /* 0x0071792D: xor cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = esi + 0x1; /* 0x00717930: lea esi, [esi + 1] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00717933: mov byte ptr [esi - 1], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717936: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717927; /* 0x00717937: jne 0x717927 */
L_00717939:
    eax = MEM32(edi + 0x18); /* 0x00717939: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071793C: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071793F: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x00717940: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00717943: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717945: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(edi + 0x18) = eax; /* 0x00717948: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x0071794B: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071794E: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717961; /* 0x00717953: je 0x717961 */
L_00717955:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717955: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x00717959: push 8 */
    PUSH32(esp, edi); /* 0x0071795B: push edi */
    RECOMP_ICALL(eax); /* 0x0071795C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071795E: add esp, 8 */
    _flag_k = FK_ADD;
L_00717961:
    edi = POP32_VAL(esp); /* 0x00717961: pop edi */
    esi = POP32_VAL(esp); /* 0x00717962: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717963: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717964: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717970u);

L_00717970:
    PUSH32(esp, ebp); /* 0x00717970: push ebp */
    ebp = esp; /* 0x00717971: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717973: push esi */
    PUSH32(esp, edi); /* 0x00717974: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717975: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00717978: mov eax, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x0071797B: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x0071797E: mov esi, edx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717980: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x00717980: shr eax, 2 */
    /* test eax, eax */ /* 0x00717983: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717995; /* 0x00717985: je 0x717995 */
L_00717987:
    SET_LO8(ecx, MEM8(edx + 0x3)); /* 0x00717987: mov cl, byte ptr [edx + 3] */
    edx = edx + 0x4; /* 0x0071798A: lea edx, [edx + 4] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x0071798D: mov byte ptr [esi], cl */
    esi = esi + 0x1; /* 0x0071798F: lea esi, [esi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717992: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717987; /* 0x00717993: jne 0x717987 */
L_00717995:
    eax = MEM32(edi + 0x18); /* 0x00717995: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717998: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071799B: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x0071799C: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071799F: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x007179A1: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(edi + 0x18) = eax; /* 0x007179A4: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007179A7: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007179AA: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007179C0; /* 0x007179AF: je 0x7179c0 */
L_007179B1:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007179B1: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x007179B5: push 0x8008 */
    PUSH32(esp, edi); /* 0x007179BA: push edi */
    RECOMP_ICALL(eax); /* 0x007179BB: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007179BD: add esp, 8 */
    _flag_k = FK_ADD;
L_007179C0:
    edi = POP32_VAL(esp); /* 0x007179C0: pop edi */
    esi = POP32_VAL(esp); /* 0x007179C1: pop esi */
    ebp = POP32_VAL(esp); /* 0x007179C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007179C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007179D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007179D0u);

L_007179D0:
    PUSH32(esp, ebp); /* 0x007179D0: push ebp */
    ebp = esp; /* 0x007179D1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007179D3: push esi */
    PUSH32(esp, edi); /* 0x007179D4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007179D5: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x007179D8: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x007179DB: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x007179DE: mov esi, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x007179E0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x007179E0: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x007179E3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717A06; /* 0x007179E5: je 0x717a06 */
L_007179E7:
    goto L_007179F0; /* 0x007179E7: jmp 0x7179f0 */
L_007179F0:
    eax = 0x8000u; /* 0x007179F0: mov eax, 0x8000 */
    edx = edx + 0x4; /* 0x007179F5: lea edx, [edx + 4] */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(edx + (-0x2))); /* 0x007179F8: xor ax, word ptr [edx - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = esi + 0x2; /* 0x007179FC: lea esi, [esi + 2] */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x007179FF: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00717A03: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007179F0; /* 0x00717A04: jne 0x7179f0 */
L_00717A06:
    eax = MEM32(edi + 0x18); /* 0x00717A06: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717A09: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717A0C: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717A0D: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717A0F: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00717A11: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00717A14: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00717A17: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717A2A; /* 0x00717A1C: je 0x717a2a */
L_00717A1E:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717A1E: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x10u); /* 0x00717A22: push 0x10 */
    PUSH32(esp, edi); /* 0x00717A24: push edi */
    RECOMP_ICALL(eax); /* 0x00717A25: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717A27: add esp, 8 */
    _flag_k = FK_ADD;
L_00717A2A:
    edi = POP32_VAL(esp); /* 0x00717A2A: pop edi */
    esi = POP32_VAL(esp); /* 0x00717A2B: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717A2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717A2D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717A30u);

L_00717A30:
    PUSH32(esp, ebp); /* 0x00717A30: push ebp */
    ebp = esp; /* 0x00717A31: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717A33: push esi */
    PUSH32(esp, edi); /* 0x00717A34: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717A35: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00717A38: mov eax, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x00717A3B: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717A3E: mov esi, edx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717A40: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x00717A40: shr eax, 2 */
    /* test eax, eax */ /* 0x00717A43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717A60; /* 0x00717A45: je 0x717a60 */
L_00717A47:
    goto L_00717A50; /* 0x00717A47: jmp 0x717a50 */
L_00717A50:
    SET_LO16(ecx, MEM16(edx + 0x2)); /* 0x00717A50: mov cx, word ptr [edx + 2] */
    edx = edx + 0x4; /* 0x00717A54: lea edx, [edx + 4] */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x00717A57: mov word ptr [esi], cx */
    esi = esi + 0x2; /* 0x00717A5A: lea esi, [esi + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717A5D: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717A50; /* 0x00717A5E: jne 0x717a50 */
L_00717A60:
    eax = MEM32(edi + 0x18); /* 0x00717A60: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717A63: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717A66: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717A67: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717A69: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00717A6B: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00717A6E: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00717A71: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717A87; /* 0x00717A76: je 0x717a87 */
L_00717A78:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717A78: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8010u); /* 0x00717A7C: push 0x8010 */
    PUSH32(esp, edi); /* 0x00717A81: push edi */
    RECOMP_ICALL(eax); /* 0x00717A82: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717A84: add esp, 8 */
    _flag_k = FK_ADD;
L_00717A87:
    edi = POP32_VAL(esp); /* 0x00717A87: pop edi */
    esi = POP32_VAL(esp); /* 0x00717A88: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717A89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717A8A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717A90u);

L_00717A90:
    PUSH32(esp, ebp); /* 0x00717A90: push ebp */
    ebp = esp; /* 0x00717A91: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717A93: push esi */
    PUSH32(esp, edi); /* 0x00717A94: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717A95: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00717A98: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x00717A9B: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717A9E: mov esi, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x00717AA0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x00717AA0: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x00717AA3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717ACA; /* 0x00717AA5: je 0x717aca */
L_00717AA7:
    goto L_00717AB0; /* 0x00717AA7: jmp 0x717ab0 */
L_00717AB0:
    eax = 0x8000u; /* 0x00717AB0: mov eax, 0x8000 */
    edx = edx + 0x4; /* 0x00717AB5: lea edx, [edx + 4] */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(edx + (-0x2)))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(edx + (-0x2))); /* 0x00717AB8: xor ax, word ptr [edx - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = esi + 0x2; /* 0x00717ABC: lea esi, [esi + 2] */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00717ABF: rol ax, 8 */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00717AC3: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00717AC7: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717AB0; /* 0x00717AC8: jne 0x717ab0 */
L_00717ACA:
    eax = MEM32(edi + 0x18); /* 0x00717ACA: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717ACD: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717AD0: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717AD1: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717AD3: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00717AD5: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00717AD8: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00717ADB: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717AF1; /* 0x00717AE0: je 0x717af1 */
L_00717AE2:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717AE2: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x1010u); /* 0x00717AE6: push 0x1010 */
    PUSH32(esp, edi); /* 0x00717AEB: push edi */
    RECOMP_ICALL(eax); /* 0x00717AEC: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717AEE: add esp, 8 */
    _flag_k = FK_ADD;
L_00717AF1:
    edi = POP32_VAL(esp); /* 0x00717AF1: pop edi */
    esi = POP32_VAL(esp); /* 0x00717AF2: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717AF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717AF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717B00u);

L_00717B00:
    PUSH32(esp, ebp); /* 0x00717B00: push ebp */
    ebp = esp; /* 0x00717B01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717B03: push esi */
    PUSH32(esp, edi); /* 0x00717B04: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717B05: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00717B08: mov eax, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x00717B0B: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717B0E: mov esi, edx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717B10: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x00717B10: shr eax, 2 */
    /* test eax, eax */ /* 0x00717B13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717B35; /* 0x00717B15: je 0x717b35 */
L_00717B17:
    goto L_00717B20; /* 0x00717B17: jmp 0x717b20 */
L_00717B20:
    SET_LO16(ecx, MEM16(edx + 0x2)); /* 0x00717B20: mov cx, word ptr [edx + 2] */
    edx = edx + 0x4; /* 0x00717B24: lea edx, [edx + 4] */
    { uint32_t _rv = (LO16(ecx)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(ecx, _rv); } /* 0x00717B27: rol cx, 8 */
    esi = esi + 0x2; /* 0x00717B2B: lea esi, [esi + 2] */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x00717B2E: mov word ptr [esi - 2], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717B32: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717B20; /* 0x00717B33: jne 0x717b20 */
L_00717B35:
    eax = MEM32(edi + 0x18); /* 0x00717B35: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717B38: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717B3B: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717B3C: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717B3E: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x00717B40: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00717B43: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00717B46: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717B5C; /* 0x00717B4B: je 0x717b5c */
L_00717B4D:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717B4D: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x9010u); /* 0x00717B51: push 0x9010 */
    PUSH32(esp, edi); /* 0x00717B56: push edi */
    RECOMP_ICALL(eax); /* 0x00717B57: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717B59: add esp, 8 */
    _flag_k = FK_ADD;
L_00717B5C:
    edi = POP32_VAL(esp); /* 0x00717B5C: pop edi */
    esi = POP32_VAL(esp); /* 0x00717B5D: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717B5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717B5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717B60u);

L_00717B60:
    PUSH32(esp, ebp); /* 0x00717B60: push ebp */
    ebp = esp; /* 0x00717B61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717B63: push ecx */
    PUSH32(esp, ebx); /* 0x00717B64: push ebx */
    PUSH32(esp, esi); /* 0x00717B65: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717B66: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717B69: push edi */
    edi = MEM32(esi + 0x18); /* 0x00717B6A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x00717B6D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00717B70: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00717B70: shr edi, 2 */
    /* test edi, edi */ /* 0x00717B73: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717BB4; /* 0x00717B75: je 0x717bb4 */
L_00717B77:
    esi = ebx; /* 0x00717B77: mov esi, ebx */
    esp = esp; /* 0x00717B79: lea esp, [esp] */
L_00717B80:
    ecx = MEM32(ebx); /* 0x00717B80: mov ecx, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00717B82: lea ebx, [ebx + 4] */
    edx = ecx; /* 0x00717B85: mov edx, ecx */
    esi = esi + 0x4; /* 0x00717B87: lea esi, [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00717B8A: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00717B90: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00717B92: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00717B92: shr eax, 0x10 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00717B95: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00717B97: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x00717B99: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00717B9E: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00717B9E: shl ecx, 0x10 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x00717BA1: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00717BA3: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00717BA3: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x00717BA6: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x00717BA6: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00717BA9: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x4)) = edx; /* 0x00717BAB: mov dword ptr [esi - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00717BAE: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717B80; /* 0x00717BAF: jne 0x717b80 */
L_00717BB1:
    esi = MEM32(ebp + 0x8); /* 0x00717BB1: mov esi, dword ptr [ebp + 8] */
L_00717BB4:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00717BB4: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x00717BB7: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00717BBA: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717BD0; /* 0x00717BBF: je 0x717bd0 */
L_00717BC1:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00717BC1: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x00717BC5: push 0x9020 */
    PUSH32(esp, esi); /* 0x00717BCA: push esi */
    RECOMP_ICALL(eax); /* 0x00717BCB: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717BCD: add esp, 8 */
    _flag_k = FK_ADD;
L_00717BD0:
    edi = POP32_VAL(esp); /* 0x00717BD0: pop edi */
    esi = POP32_VAL(esp); /* 0x00717BD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717BD2: pop ebx */
    esp = ebp; /* 0x00717BD3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00717BD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717BD6: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717BE0u);

L_00717BE0:
    PUSH32(esp, ebp); /* 0x00717BE0: push ebp */
    ebp = esp; /* 0x00717BE1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x00717BE3: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717BE6: push esi */
    eax = MEM32(ecx + 0x18); /* 0x00717BE7: mov eax, dword ptr [ecx + 0x18] */
    edx = MEM32(ecx + 0x10); /* 0x00717BEA: mov edx, dword ptr [ecx + 0x10] */
    esi = edx; /* 0x00717BED: mov esi, edx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717BEF: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x00717BEF: shr eax, 2 */
    /* test eax, eax */ /* 0x00717BF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717C19; /* 0x00717BF4: je 0x717c19 */
L_00717BF6:
    _xmm[1].u64[0] = MEM32(0x808B2C); _xmm[1].u64[1] = 0; /* 0x00717BF6: movss xmm1, dword ptr [0x808b2c] */
    edi = edi; /* 0x00717BFE: mov edi, edi */
L_00717C00:
    _xmm[0].u64[0] = (uint32_t)(MEM32(edx)); _xmm[0].u64[1] = 0; /* 0x00717C00: movd xmm0, dword ptr [edx] */
    edx = edx + 0x4; /* 0x00717C04: lea edx, [edx + 4] */
    esi = esi + 0x4; /* 0x00717C07: lea esi, [esi + 4] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00717C0A: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00717C0D: mulss xmm0, xmm1 */
    MEM32(esi + (-0x4)) = _xmm[0].u32[0]; /* 0x00717C11: movss dword ptr [esi - 4], xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717C16: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717C00; /* 0x00717C17: jne 0x717c00 */
L_00717C19:
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) + 1; /* 0x00717C19: inc dword ptr [ecx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x50); /* 0x00717C1C: mov eax, dword ptr [ecx + 0x50] */
    esi = POP32_VAL(esp); /* 0x00717C1F: pop esi */
    /* cmp MEM32(ecx + eax * 4 + 0x28), 0 */ /* 0x00717C20: cmp dword ptr [ecx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717C38; /* 0x00717C25: je 0x717c38 */
L_00717C27:
    MEM32(ebp + 0xC) = 0x8120u; /* 0x00717C27: mov dword ptr [ebp + 0xc], 0x8120 */
    MEM32(ebp + 0x8) = ecx; /* 0x00717C2E: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ecx + eax * 4 + 0x28); /* 0x00717C31: mov eax, dword ptr [ecx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00717C35: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_00717C38:
    ebp = POP32_VAL(esp); /* 0x00717C38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717C39: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00717C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717C40u);

L_00717C40:
    PUSH32(esp, ebp); /* 0x00717C40: push ebp */
    ebp = esp; /* 0x00717C41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717C43: push ecx */
    PUSH32(esp, ebx); /* 0x00717C44: push ebx */
    PUSH32(esp, esi); /* 0x00717C45: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717C46: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717C49: push edi */
    edi = MEM32(esi + 0x18); /* 0x00717C4A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x00717C4D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00717C50: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00717C50: shr edi, 2 */
    /* test edi, edi */ /* 0x00717C53: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717CA7; /* 0x00717C55: je 0x717ca7 */
L_00717C57:
    _xmm[1].u64[0] = MEM32(0x808B2C); _xmm[1].u64[1] = 0; /* 0x00717C57: movss xmm1, dword ptr [0x808b2c] */
    esi = ebx; /* 0x00717C5F: mov esi, ebx */
L_00717C61:
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebx)); _xmm[0].u64[1] = 0; /* 0x00717C61: movd xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00717C65: lea ebx, [ebx + 4] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00717C68: cvtdq2ps xmm0, xmm0 */
    esi = esi + 0x4; /* 0x00717C6B: lea esi, [esi + 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00717C6E: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00717C72: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x00717C77: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x00717C7A: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00717C7C: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00717C82: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00717C84: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00717C84: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00717C87: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00717C89: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00717C8B: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00717C91: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00717C91: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00717C94: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00717C96: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00717C96: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x00717C99: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x00717C99: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00717C9C: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x4)) = edx; /* 0x00717C9E: mov dword ptr [esi - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00717CA1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717C61; /* 0x00717CA2: jne 0x717c61 */
L_00717CA4:
    esi = MEM32(ebp + 0x8); /* 0x00717CA4: mov esi, dword ptr [ebp + 8] */
L_00717CA7:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00717CA7: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x00717CAA: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00717CAD: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717CC3; /* 0x00717CB2: je 0x717cc3 */
L_00717CB4:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00717CB4: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x00717CB8: push 0x9120 */
    PUSH32(esp, esi); /* 0x00717CBD: push esi */
    RECOMP_ICALL(eax); /* 0x00717CBE: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717CC0: add esp, 8 */
    _flag_k = FK_ADD;
L_00717CC3:
    edi = POP32_VAL(esp); /* 0x00717CC3: pop edi */
    esi = POP32_VAL(esp); /* 0x00717CC4: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717CC5: pop ebx */
    esp = ebp; /* 0x00717CC6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00717CC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717CC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717CD0u);

L_00717CD0:
    PUSH32(esp, ebp); /* 0x00717CD0: push ebp */
    ebp = esp; /* 0x00717CD1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00717CD3: push esi */
    PUSH32(esp, edi); /* 0x00717CD4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00717CD5: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00717CD8: mov eax, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x00717CDB: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x00717CDE: mov esi, edx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717CE0: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x00717CE0: shr eax, 2 */
    /* test eax, eax */ /* 0x00717CE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717CF8; /* 0x00717CE5: je 0x717cf8 */
L_00717CE7:
    SET_LO8(ecx, MEM8(edx)); /* 0x00717CE7: mov cl, byte ptr [edx] */
    edx = edx + 0x4; /* 0x00717CE9: lea edx, [edx + 4] */
    _flag_a = (uint32_t)((LO8(ecx) ^ 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) ^ 0x80u); /* 0x00717CEC: xor cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = esi + 0x1; /* 0x00717CEF: lea esi, [esi + 1] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00717CF2: mov byte ptr [esi - 1], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717CF5: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717CE7; /* 0x00717CF6: jne 0x717ce7 */
L_00717CF8:
    eax = MEM32(edi + 0x18); /* 0x00717CF8: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00717CFB: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717CFE: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x00717CFF: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00717D02: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717D04: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(edi + 0x18) = eax; /* 0x00717D07: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00717D0A: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00717D0D: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717D20; /* 0x00717D12: je 0x717d20 */
L_00717D14:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00717D14: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x00717D18: push 8 */
    PUSH32(esp, edi); /* 0x00717D1A: push edi */
    RECOMP_ICALL(eax); /* 0x00717D1B: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717D1D: add esp, 8 */
    _flag_k = FK_ADD;
L_00717D20:
    edi = POP32_VAL(esp); /* 0x00717D20: pop edi */
    esi = POP32_VAL(esp); /* 0x00717D21: pop esi */
    ebp = POP32_VAL(esp); /* 0x00717D22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717D23: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717D30u);

L_00717D30:
    PUSH32(esp, ebp); /* 0x00717D30: push ebp */
    ebp = esp; /* 0x00717D31: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00717D33: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00717D34: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717D37: push esi */
    PUSH32(esp, edi); /* 0x00717D38: push edi */
    eax = MEM32(ebx + 0x18); /* 0x00717D39: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x00717D3C: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x00717D3F: mov edi, esi */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717D41: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x00717D41: shr eax, 2 */
    /* test eax, eax */ /* 0x00717D44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717D60; /* 0x00717D46: je 0x717d60 */
L_00717D48:
    ecx = MEM32(esi); /* 0x00717D48: mov ecx, dword ptr [esi] */
    esi = esi + 0x4; /* 0x00717D4A: lea esi, [esi + 4] */
    edx = ecx; /* 0x00717D4D: mov edx, ecx */
    edi = edi + 0x1; /* 0x00717D4F: lea edi, [edi + 1] */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x00717D52: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x00717D52: shr edx, 0x18 */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x00717D55: sar edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 24u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 24u);
    _flag_a = (uint32_t)((LO8(edx) | LO8(ecx))) << 24; _flag_b = (uint32_t)((LO8(edx) | LO8(ecx))) << 24;
    SET_LO8(edx, LO8(edx) | LO8(ecx)); /* 0x00717D58: or dl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x00717D5A: mov byte ptr [edi - 1], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00717D5D: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717D48; /* 0x00717D5E: jne 0x717d48 */
L_00717D60:
    eax = MEM32(ebx + 0x18); /* 0x00717D60: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00717D63: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717D66: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x00717D67: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00717D6A: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00717D6C: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(ebx + 0x18) = eax; /* 0x00717D6F: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00717D72: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00717D75: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717D8B; /* 0x00717D7A: je 0x717d8b */
L_00717D7C:
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00717D7C: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x00717D80: push 0x8008 */
    PUSH32(esp, ebx); /* 0x00717D85: push ebx */
    RECOMP_ICALL(eax); /* 0x00717D86: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717D88: add esp, 8 */
    _flag_k = FK_ADD;
L_00717D8B:
    edi = POP32_VAL(esp); /* 0x00717D8B: pop edi */
    esi = POP32_VAL(esp); /* 0x00717D8C: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717D8D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00717D8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717D8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717D90u);

L_00717D90:
    PUSH32(esp, ebp); /* 0x00717D90: push ebp */
    ebp = esp; /* 0x00717D91: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00717D93: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00717D94: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717D97: push esi */
    PUSH32(esp, edi); /* 0x00717D98: push edi */
    edx = MEM32(ebx + 0x18); /* 0x00717D99: mov edx, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x00717D9C: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x00717D9F: mov edi, esi */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x00717DA1: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x00717DA1: shr edx, 2 */
    /* test edx, edx */ /* 0x00717DA4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717DCD; /* 0x00717DA6: je 0x717dcd */
L_00717DA8:
    eax = MEM32(esi); /* 0x00717DA8: mov eax, dword ptr [esi] */
    esi = esi + 0x4; /* 0x00717DAA: lea esi, [esi + 4] */
    ecx = eax; /* 0x00717DAD: mov ecx, eax */
    edi = edi + 0x2; /* 0x00717DAF: lea edi, [edi + 2] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x00717DB2: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x00717DB2: shr ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x00717DB5: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x00717DBB: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x00717DBB: shl eax, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00717DBE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ 0x8000u)); _flag_b = (uint32_t)((ecx ^ 0x8000u));
    ecx = ecx ^ 0x8000u; /* 0x00717DC0: xor ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x00717DC6: mov word ptr [edi - 2], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00717DCA: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717DA8; /* 0x00717DCB: jne 0x717da8 */
L_00717DCD:
    eax = MEM32(ebx + 0x18); /* 0x00717DCD: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00717DD0: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717DD3: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717DD4: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717DD6: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebx + 0x18) = eax; /* 0x00717DD8: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00717DDB: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00717DDE: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717DF1; /* 0x00717DE3: je 0x717df1 */
L_00717DE5:
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00717DE5: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, 0x10u); /* 0x00717DE9: push 0x10 */
    PUSH32(esp, ebx); /* 0x00717DEB: push ebx */
    RECOMP_ICALL(eax); /* 0x00717DEC: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717DEE: add esp, 8 */
    _flag_k = FK_ADD;
L_00717DF1:
    edi = POP32_VAL(esp); /* 0x00717DF1: pop edi */
    esi = POP32_VAL(esp); /* 0x00717DF2: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717DF3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00717DF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717DF5: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717E00u);

L_00717E00:
    PUSH32(esp, ebp); /* 0x00717E00: push ebp */
    ebp = esp; /* 0x00717E01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717E03: push ecx */
    PUSH32(esp, ebx); /* 0x00717E04: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00717E05: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717E08: push esi */
    PUSH32(esp, edi); /* 0x00717E09: push edi */
    esi = MEM32(ebx + 0x18); /* 0x00717E0A: mov esi, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x00717E0D: mov edi, dword ptr [ebx + 0x10] */
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x00717E10: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x00717E10: shr esi, 2 */
    /* test esi, esi */ /* 0x00717E13: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717E4E; /* 0x00717E15: je 0x717e4e */
L_00717E17:
    ebx = edi; /* 0x00717E17: mov ebx, edi */
    esp = esp; /* 0x00717E19: lea esp, [esp] */
L_00717E20:
    ecx = MEM32(edi); /* 0x00717E20: mov ecx, dword ptr [edi] */
    edi = edi + 0x4; /* 0x00717E22: lea edi, [edi + 4] */
    edx = ecx; /* 0x00717E25: mov edx, ecx */
    ebx = ebx + 0x2; /* 0x00717E27: lea ebx, [ebx + 2] */
    eax = ecx; /* 0x00717E2A: mov eax, ecx */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x00717E2C: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x00717E2C: shr edx, 0x18 */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x00717E2F: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x00717E32: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x00717E35: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (24u) _cf = (((ecx) >> 8) & 1u); /* 0x00717E3A: shl ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 24u; /* 0x00717E3A: shl ecx, 0x18 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00717E3D: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00717E3F: sar ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 16u);
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00717E42: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + (-0x2)) = (uint16_t)(LO16(edx)); /* 0x00717E44: mov word ptr [ebx - 2], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00717E48: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717E20; /* 0x00717E49: jne 0x717e20 */
L_00717E4B:
    ebx = MEM32(ebp + 0x8); /* 0x00717E4B: mov ebx, dword ptr [ebp + 8] */
L_00717E4E:
    eax = MEM32(ebx + 0x18); /* 0x00717E4E: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00717E51: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717E54: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717E55: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717E57: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebx + 0x18) = eax; /* 0x00717E59: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00717E5C: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00717E5F: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717E75; /* 0x00717E64: je 0x717e75 */
L_00717E66:
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00717E66: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, 0x8010u); /* 0x00717E6A: push 0x8010 */
    PUSH32(esp, ebx); /* 0x00717E6F: push ebx */
    RECOMP_ICALL(eax); /* 0x00717E70: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717E72: add esp, 8 */
    _flag_k = FK_ADD;
L_00717E75:
    edi = POP32_VAL(esp); /* 0x00717E75: pop edi */
    esi = POP32_VAL(esp); /* 0x00717E76: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717E77: pop ebx */
    esp = ebp; /* 0x00717E78: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00717E7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717E7B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717E80u);

L_00717E80:
    PUSH32(esp, ebp); /* 0x00717E80: push ebp */
    ebp = esp; /* 0x00717E81: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00717E83: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00717E84: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717E87: push esi */
    PUSH32(esp, edi); /* 0x00717E88: push edi */
    edx = MEM32(ebx + 0x18); /* 0x00717E89: mov edx, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x00717E8C: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x00717E8F: mov edi, esi */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x00717E91: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x00717E91: shr edx, 2 */
    /* test edx, edx */ /* 0x00717E94: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717EC1; /* 0x00717E96: je 0x717ec1 */
L_00717E98:
    eax = MEM32(esi); /* 0x00717E98: mov eax, dword ptr [esi] */
    esi = esi + 0x4; /* 0x00717E9A: lea esi, [esi + 4] */
    ecx = eax; /* 0x00717E9D: mov ecx, eax */
    edi = edi + 0x2; /* 0x00717E9F: lea edi, [edi + 2] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x00717EA2: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x00717EA2: shr ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x00717EA5: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x00717EAB: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x00717EAB: shl eax, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00717EAE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ 0x8000u)); _flag_b = (uint32_t)((ecx ^ 0x8000u));
    ecx = ecx ^ 0x8000u; /* 0x00717EB0: xor ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _rv = (LO16(ecx)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(ecx, _rv); } /* 0x00717EB6: rol cx, 8 */
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x00717EBA: mov word ptr [edi - 2], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00717EBE: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717E98; /* 0x00717EBF: jne 0x717e98 */
L_00717EC1:
    eax = MEM32(ebx + 0x18); /* 0x00717EC1: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00717EC4: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717EC7: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717EC8: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717ECA: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebx + 0x18) = eax; /* 0x00717ECC: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00717ECF: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00717ED2: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717EE8; /* 0x00717ED7: je 0x717ee8 */
L_00717ED9:
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00717ED9: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, 0x1010u); /* 0x00717EDD: push 0x1010 */
    PUSH32(esp, ebx); /* 0x00717EE2: push ebx */
    RECOMP_ICALL(eax); /* 0x00717EE3: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717EE5: add esp, 8 */
    _flag_k = FK_ADD;
L_00717EE8:
    edi = POP32_VAL(esp); /* 0x00717EE8: pop edi */
    esi = POP32_VAL(esp); /* 0x00717EE9: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717EEA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00717EEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717EEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717EF0u);

L_00717EF0:
    PUSH32(esp, ebp); /* 0x00717EF0: push ebp */
    ebp = esp; /* 0x00717EF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717EF3: push ecx */
    PUSH32(esp, ebx); /* 0x00717EF4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00717EF5: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00717EF8: push esi */
    PUSH32(esp, edi); /* 0x00717EF9: push edi */
    esi = MEM32(ebx + 0x18); /* 0x00717EFA: mov esi, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x00717EFD: mov edi, dword ptr [ebx + 0x10] */
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x00717F00: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x00717F00: shr esi, 2 */
    /* test esi, esi */ /* 0x00717F03: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717F42; /* 0x00717F05: je 0x717f42 */
L_00717F07:
    ebx = edi; /* 0x00717F07: mov ebx, edi */
    esp = esp; /* 0x00717F09: lea esp, [esp] */
L_00717F10:
    ecx = MEM32(edi); /* 0x00717F10: mov ecx, dword ptr [edi] */
    edi = edi + 0x4; /* 0x00717F12: lea edi, [edi + 4] */
    edx = ecx; /* 0x00717F15: mov edx, ecx */
    ebx = ebx + 0x2; /* 0x00717F17: lea ebx, [ebx + 2] */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x00717F1A: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x00717F1A: shr edx, 0x18 */
    eax = ecx; /* 0x00717F1D: mov eax, ecx */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x00717F1F: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x00717F22: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x00717F25: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (24u) _cf = (((ecx) >> 8) & 1u); /* 0x00717F2A: shl ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 24u; /* 0x00717F2A: shl ecx, 0x18 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00717F2D: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00717F2F: sar ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 16u);
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00717F32: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _rv = (LO16(edx)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(edx, _rv); } /* 0x00717F34: rol dx, 8 */
    MEM16(ebx + (-0x2)) = (uint16_t)(LO16(edx)); /* 0x00717F38: mov word ptr [ebx - 2], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00717F3C: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717F10; /* 0x00717F3D: jne 0x717f10 */
L_00717F3F:
    ebx = MEM32(ebp + 0x8); /* 0x00717F3F: mov ebx, dword ptr [ebp + 8] */
L_00717F42:
    eax = MEM32(ebx + 0x18); /* 0x00717F42: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00717F45: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00717F48: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00717F49: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00717F4B: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebx + 0x18) = eax; /* 0x00717F4D: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00717F50: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00717F53: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717F69; /* 0x00717F58: je 0x717f69 */
L_00717F5A:
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00717F5A: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, 0x9010u); /* 0x00717F5E: push 0x9010 */
    PUSH32(esp, ebx); /* 0x00717F63: push ebx */
    RECOMP_ICALL(eax); /* 0x00717F64: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717F66: add esp, 8 */
    _flag_k = FK_ADD;
L_00717F69:
    edi = POP32_VAL(esp); /* 0x00717F69: pop edi */
    esi = POP32_VAL(esp); /* 0x00717F6A: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717F6B: pop ebx */
    esp = ebp; /* 0x00717F6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00717F6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717F6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717F70u);

L_00717F70:
    PUSH32(esp, ebp); /* 0x00717F70: push ebp */
    ebp = esp; /* 0x00717F71: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717F73: push ecx */
    PUSH32(esp, ebx); /* 0x00717F74: push ebx */
    PUSH32(esp, esi); /* 0x00717F75: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717F76: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717F79: push edi */
    edi = MEM32(esi + 0x18); /* 0x00717F7A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x00717F7D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00717F80: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00717F80: shr edi, 2 */
    /* test edi, edi */ /* 0x00717F83: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00717FC4; /* 0x00717F85: je 0x717fc4 */
L_00717F87:
    esi = ebx; /* 0x00717F87: mov esi, ebx */
    esp = esp; /* 0x00717F89: lea esp, [esp] */
L_00717F90:
    ecx = MEM32(ebx); /* 0x00717F90: mov ecx, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00717F92: lea ebx, [ebx + 4] */
    edx = ecx; /* 0x00717F95: mov edx, ecx */
    esi = esi + 0x4; /* 0x00717F97: lea esi, [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00717F9A: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00717FA0: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00717FA2: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00717FA2: shr eax, 0x10 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00717FA5: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00717FA7: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x00717FA9: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00717FAE: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00717FAE: shl ecx, 0x10 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x00717FB1: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00717FB3: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00717FB3: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x00717FB6: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x00717FB6: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00717FB9: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x4)) = edx; /* 0x00717FBB: mov dword ptr [esi - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00717FBE: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00717F90; /* 0x00717FBF: jne 0x717f90 */
L_00717FC1:
    esi = MEM32(ebp + 0x8); /* 0x00717FC1: mov esi, dword ptr [ebp + 8] */
L_00717FC4:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00717FC4: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x00717FC7: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00717FCA: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00717FE0; /* 0x00717FCF: je 0x717fe0 */
L_00717FD1:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00717FD1: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x8020u); /* 0x00717FD5: push 0x8020 */
    PUSH32(esp, esi); /* 0x00717FDA: push esi */
    RECOMP_ICALL(eax); /* 0x00717FDB: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00717FDD: add esp, 8 */
    _flag_k = FK_ADD;
L_00717FE0:
    edi = POP32_VAL(esp); /* 0x00717FE0: pop edi */
    esi = POP32_VAL(esp); /* 0x00717FE1: pop esi */
    ebx = POP32_VAL(esp); /* 0x00717FE2: pop ebx */
    esp = ebp; /* 0x00717FE3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00717FE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00717FE6: ret  */
    RECOMP_REGS_OUT();
}

void sub_00717FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00717FF0u);

L_00717FF0:
    PUSH32(esp, ebp); /* 0x00717FF0: push ebp */
    ebp = esp; /* 0x00717FF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00717FF3: push ecx */
    PUSH32(esp, ebx); /* 0x00717FF4: push ebx */
    PUSH32(esp, esi); /* 0x00717FF5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00717FF6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00717FF9: push edi */
    edi = MEM32(esi + 0x18); /* 0x00717FFA: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x00717FFD: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718000: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718000: shr edi, 2 */
    /* test edi, edi */ /* 0x00718003: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718052; /* 0x00718005: je 0x718052 */
L_00718007:
    _xmm[1].u64[0] = MEM32(0x808B2C); _xmm[1].u64[1] = 0; /* 0x00718007: movss xmm1, dword ptr [0x808b2c] */
    esi = ebx; /* 0x0071800F: mov esi, ebx */
L_00718011:
    ecx = MEM32(ebx); /* 0x00718011: mov ecx, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00718013: lea ebx, [ebx + 4] */
    edx = ecx; /* 0x00718016: mov edx, ecx */
    esi = esi + 0x4; /* 0x00718018: lea esi, [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x0071801B: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00718021: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00718023: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00718023: shr eax, 0x10 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00718026: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00718028: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x0071802A: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x0071802F: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x0071802F: shl ecx, 0x10 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x00718032: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00718034: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00718034: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x00718037: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x00718037: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x0071803A: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x0071803C: movd xmm0, edx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00718040: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00718043: mulss xmm0, xmm1 */
    MEM32(esi + (-0x4)) = _xmm[0].u32[0]; /* 0x00718047: movss dword ptr [esi - 4], xmm0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0071804C: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718011; /* 0x0071804D: jne 0x718011 */
L_0071804F:
    esi = MEM32(ebp + 0x8); /* 0x0071804F: mov esi, dword ptr [ebp + 8] */
L_00718052:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718052: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x00718055: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718058: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071806E; /* 0x0071805D: je 0x71806e */
L_0071805F:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x0071805F: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x8120u); /* 0x00718063: push 0x8120 */
    PUSH32(esp, esi); /* 0x00718068: push esi */
    RECOMP_ICALL(eax); /* 0x00718069: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071806B: add esp, 8 */
    _flag_k = FK_ADD;
L_0071806E:
    edi = POP32_VAL(esp); /* 0x0071806E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071806F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718070: pop ebx */
    esp = ebp; /* 0x00718071: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718073: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718074: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718080u);

L_00718080:
    PUSH32(esp, ebp); /* 0x00718080: push ebp */
    ebp = esp; /* 0x00718081: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00718083: push ecx */
    PUSH32(esp, ebx); /* 0x00718084: push ebx */
    PUSH32(esp, esi); /* 0x00718085: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718086: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718089: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071808A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x0071808D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718090: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718090: shr edi, 2 */
    /* test edi, edi */ /* 0x00718093: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071810C; /* 0x00718095: je 0x71810c */
L_00718097:
    _xmm[1].u64[0] = MEM32(0x808B2C); _xmm[1].u64[1] = 0; /* 0x00718097: movss xmm1, dword ptr [0x808b2c] */
    esi = ebx; /* 0x0071809F: mov esi, ebx */
L_007180A1:
    ecx = MEM32(ebx); /* 0x007180A1: mov ecx, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x007180A3: lea ebx, [ebx + 4] */
    edx = ecx; /* 0x007180A6: mov edx, ecx */
    esi = esi + 0x4; /* 0x007180A8: lea esi, [esi + 4] */
    eax = ecx; /* 0x007180AB: mov eax, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x007180AD: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x007180B3: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x007180B3: shr eax, 0x10 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x007180B6: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x007180B8: mov eax, ecx */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x007180BA: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x007180BA: shl ecx, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x007180BD: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x007180C2: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007180C4: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007180C4: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x007180C7: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x007180C7: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x007180CA: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x007180CC: movd xmm0, edx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x007180D0: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007180D3: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x007180D7: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x007180DC: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x007180DF: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x007180E1: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007180E7: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x007180E9: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x007180E9: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007180EC: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007180EE: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x007180F0: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x007180F6: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x007180F6: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007180F9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007180FB: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007180FB: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x007180FE: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x007180FE: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718101: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x4)) = edx; /* 0x00718103: mov dword ptr [esi - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00718106: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007180A1; /* 0x00718107: jne 0x7180a1 */
L_00718109:
    esi = MEM32(ebp + 0x8); /* 0x00718109: mov esi, dword ptr [ebp + 8] */
L_0071810C:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x0071810C: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x0071810F: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718112: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718128; /* 0x00718117: je 0x718128 */
L_00718119:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00718119: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x0071811D: push 0x9120 */
    PUSH32(esp, esi); /* 0x00718122: push esi */
    RECOMP_ICALL(eax); /* 0x00718123: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718125: add esp, 8 */
    _flag_k = FK_ADD;
L_00718128:
    edi = POP32_VAL(esp); /* 0x00718128: pop edi */
    esi = POP32_VAL(esp); /* 0x00718129: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071812A: pop ebx */
    esp = ebp; /* 0x0071812B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071812D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071812E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718130u);

L_00718130:
    PUSH32(esp, ebp); /* 0x00718130: push ebp */
    ebp = esp; /* 0x00718131: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00718133: push esi */
    PUSH32(esp, edi); /* 0x00718134: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00718135: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x00718138: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x0071813B: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x0071813E: mov esi, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x00718140: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x00718140: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x00718143: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718179; /* 0x00718145: je 0x718179 */
L_00718147:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x00718147: movss xmm1, dword ptr [0x808cb0] */
    _xmm[2].u64[0] = MEM32(0x809534); _xmm[2].u64[1] = 0; /* 0x0071814F: movss xmm2, dword ptr [0x809534] */
    goto L_00718160; /* 0x00718157: jmp 0x718160 */
L_00718160:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x00718160: movss xmm0, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00718164: add edx, 4 */
    _flag_k = FK_ADD;
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x00718167: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071816B: mulss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0071816F: cvttss2si eax, xmm0 */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x00718173: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00718175: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00718176: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718160; /* 0x00718177: jne 0x718160 */
L_00718179:
    eax = MEM32(edi + 0x18); /* 0x00718179: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071817C: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071817F: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x00718180: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00718183: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00718185: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(edi + 0x18) = eax; /* 0x00718188: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x0071818B: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071818E: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007181A1; /* 0x00718193: je 0x7181a1 */
L_00718195:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00718195: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x00718199: push 8 */
    PUSH32(esp, edi); /* 0x0071819B: push edi */
    RECOMP_ICALL(eax); /* 0x0071819C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071819E: add esp, 8 */
    _flag_k = FK_ADD;
L_007181A1:
    edi = POP32_VAL(esp); /* 0x007181A1: pop edi */
    esi = POP32_VAL(esp); /* 0x007181A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x007181A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007181A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007181B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007181B0u);

L_007181B0:
    PUSH32(esp, ebp); /* 0x007181B0: push ebp */
    ebp = esp; /* 0x007181B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007181B3: push esi */
    PUSH32(esp, edi); /* 0x007181B4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007181B5: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x007181B8: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x007181BB: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x007181BE: mov esi, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x007181C0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x007181C0: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x007181C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007181E8; /* 0x007181C5: je 0x7181e8 */
L_007181C7:
    _xmm[1].u64[0] = MEM32(0x809534); _xmm[1].u64[1] = 0; /* 0x007181C7: movss xmm1, dword ptr [0x809534] */
    /* nop */ /* 0x007181CF: nop  */
L_007181D0:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x007181D0: movss xmm0, dword ptr [edx] */
    edx = edx + 0x4; /* 0x007181D4: lea edx, [edx + 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007181D7: mulss xmm0, xmm1 */
    esi = esi + 0x1; /* 0x007181DB: lea esi, [esi + 1] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x007181DE: cvttss2si eax, xmm0 */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x007181E2: mov byte ptr [esi - 1], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007181E5: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007181D0; /* 0x007181E6: jne 0x7181d0 */
L_007181E8:
    eax = MEM32(edi + 0x18); /* 0x007181E8: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007181EB: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007181EE: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x007181EF: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007181F2: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x007181F4: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(edi + 0x18) = eax; /* 0x007181F7: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007181FA: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007181FD: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718213; /* 0x00718202: je 0x718213 */
L_00718204:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00718204: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x00718208: push 0x8008 */
    PUSH32(esp, edi); /* 0x0071820D: push edi */
    RECOMP_ICALL(eax); /* 0x0071820E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718210: add esp, 8 */
    _flag_k = FK_ADD;
L_00718213:
    edi = POP32_VAL(esp); /* 0x00718213: pop edi */
    esi = POP32_VAL(esp); /* 0x00718214: pop esi */
    ebp = POP32_VAL(esp); /* 0x00718215: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718216: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718220u);

L_00718220:
    PUSH32(esp, ebp); /* 0x00718220: push ebp */
    ebp = esp; /* 0x00718221: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00718223: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718224: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718227: push edi */
    ecx = MEM32(esi + 0x18); /* 0x00718228: mov ecx, dword ptr [esi + 0x18] */
    edx = MEM32(esi + 0x10); /* 0x0071822B: mov edx, dword ptr [esi + 0x10] */
    edi = edx; /* 0x0071822E: mov edi, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x00718230: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x00718230: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x00718233: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071826C; /* 0x00718235: je 0x71826c */
L_00718237:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x00718237: movss xmm1, dword ptr [0x808cb0] */
    _xmm[2].u64[0] = MEM32(0x809780); _xmm[2].u64[1] = 0; /* 0x0071823F: movss xmm2, dword ptr [0x809780] */
    goto L_00718250; /* 0x00718247: jmp 0x718250 */
L_00718250:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x00718250: movss xmm0, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00718254: add edx, 4 */
    _flag_k = FK_ADD;
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x00718257: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071825B: mulss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0071825F: cvttss2si eax, xmm0 */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x00718263: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x00718266: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00718269: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718250; /* 0x0071826A: jne 0x718250 */
L_0071826C:
    eax = MEM32(esi + 0x18); /* 0x0071826C: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x0071826F: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718272: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00718273: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00718275: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esi + 0x18) = eax; /* 0x00718277: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x0071827A: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x0071827D: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718290; /* 0x00718282: je 0x718290 */
L_00718284:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00718284: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x10u); /* 0x00718288: push 0x10 */
    PUSH32(esp, esi); /* 0x0071828A: push esi */
    RECOMP_ICALL(eax); /* 0x0071828B: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071828D: add esp, 8 */
    _flag_k = FK_ADD;
L_00718290:
    edi = POP32_VAL(esp); /* 0x00718290: pop edi */
    esi = POP32_VAL(esp); /* 0x00718291: pop esi */
    ebp = POP32_VAL(esp); /* 0x00718292: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718293: ret  */
    RECOMP_REGS_OUT();
}

void sub_007182A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007182A0u);

L_007182A0:
    PUSH32(esp, ebp); /* 0x007182A0: push ebp */
    ebp = esp; /* 0x007182A1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007182A3: push esi */
    PUSH32(esp, edi); /* 0x007182A4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007182A5: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x18); /* 0x007182A8: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x10); /* 0x007182AB: mov edx, dword ptr [edi + 0x10] */
    esi = edx; /* 0x007182AE: mov esi, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x007182B0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x007182B0: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x007182B3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007182D9; /* 0x007182B5: je 0x7182d9 */
L_007182B7:
    _xmm[1].u64[0] = MEM32(0x809780); _xmm[1].u64[1] = 0; /* 0x007182B7: movss xmm1, dword ptr [0x809780] */
    /* nop */ /* 0x007182BF: nop  */
L_007182C0:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x007182C0: movss xmm0, dword ptr [edx] */
    edx = edx + 0x4; /* 0x007182C4: lea edx, [edx + 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007182C7: mulss xmm0, xmm1 */
    esi = esi + 0x2; /* 0x007182CB: lea esi, [esi + 2] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x007182CE: cvttss2si eax, xmm0 */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x007182D2: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007182D6: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007182C0; /* 0x007182D7: jne 0x7182c0 */
L_007182D9:
    eax = MEM32(edi + 0x18); /* 0x007182D9: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007182DC: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007182DF: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x007182E0: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007182E2: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edi + 0x18) = eax; /* 0x007182E4: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007182E7: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007182EA: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718300; /* 0x007182EF: je 0x718300 */
L_007182F1:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007182F1: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8010u); /* 0x007182F5: push 0x8010 */
    PUSH32(esp, edi); /* 0x007182FA: push edi */
    RECOMP_ICALL(eax); /* 0x007182FB: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007182FD: add esp, 8 */
    _flag_k = FK_ADD;
L_00718300:
    edi = POP32_VAL(esp); /* 0x00718300: pop edi */
    esi = POP32_VAL(esp); /* 0x00718301: pop esi */
    ebp = POP32_VAL(esp); /* 0x00718302: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718303: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718310u);

L_00718310:
    PUSH32(esp, ebp); /* 0x00718310: push ebp */
    ebp = esp; /* 0x00718311: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00718313: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718314: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718317: push edi */
    ecx = MEM32(esi + 0x18); /* 0x00718318: mov ecx, dword ptr [esi + 0x18] */
    edx = MEM32(esi + 0x10); /* 0x0071831B: mov edx, dword ptr [esi + 0x10] */
    edi = edx; /* 0x0071831E: mov edi, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x00718320: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x00718320: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x00718323: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718360; /* 0x00718325: je 0x718360 */
L_00718327:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x00718327: movss xmm1, dword ptr [0x808cb0] */
    _xmm[2].u64[0] = MEM32(0x809780); _xmm[2].u64[1] = 0; /* 0x0071832F: movss xmm2, dword ptr [0x809780] */
    goto L_00718340; /* 0x00718337: jmp 0x718340 */
L_00718340:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x00718340: movss xmm0, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00718344: add edx, 4 */
    _flag_k = FK_ADD;
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x00718347: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071834B: mulss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0071834F: cvttss2si eax, xmm0 */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00718353: rol ax, 8 */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x00718357: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x0071835A: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0071835D: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718340; /* 0x0071835E: jne 0x718340 */
L_00718360:
    eax = MEM32(esi + 0x18); /* 0x00718360: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718363: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718366: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00718367: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00718369: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esi + 0x18) = eax; /* 0x0071836B: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x0071836E: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718371: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718387; /* 0x00718376: je 0x718387 */
L_00718378:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00718378: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x1010u); /* 0x0071837C: push 0x1010 */
    PUSH32(esp, esi); /* 0x00718381: push esi */
    RECOMP_ICALL(eax); /* 0x00718382: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718384: add esp, 8 */
    _flag_k = FK_ADD;
L_00718387:
    edi = POP32_VAL(esp); /* 0x00718387: pop edi */
    esi = POP32_VAL(esp); /* 0x00718388: pop esi */
    ebp = POP32_VAL(esp); /* 0x00718389: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071838A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718390u);

L_00718390:
    PUSH32(esp, ebp); /* 0x00718390: push ebp */
    ebp = esp; /* 0x00718391: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00718393: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718394: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718397: push edi */
    ecx = MEM32(esi + 0x18); /* 0x00718398: mov ecx, dword ptr [esi + 0x18] */
    edx = MEM32(esi + 0x10); /* 0x0071839B: mov edx, dword ptr [esi + 0x10] */
    edi = edx; /* 0x0071839E: mov edi, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x007183A0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x007183A0: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x007183A3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007183CD; /* 0x007183A5: je 0x7183cd */
L_007183A7:
    _xmm[1].u64[0] = MEM32(0x809780); _xmm[1].u64[1] = 0; /* 0x007183A7: movss xmm1, dword ptr [0x809780] */
    /* nop */ /* 0x007183AF: nop  */
L_007183B0:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x007183B0: movss xmm0, dword ptr [edx] */
    edx = edx + 0x4; /* 0x007183B4: lea edx, [edx + 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007183B7: mulss xmm0, xmm1 */
    edi = edi + 0x2; /* 0x007183BB: lea edi, [edi + 2] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x007183BE: cvttss2si eax, xmm0 */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007183C2: rol ax, 8 */
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x007183C6: mov word ptr [edi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007183CA: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007183B0; /* 0x007183CB: jne 0x7183b0 */
L_007183CD:
    eax = MEM32(esi + 0x18); /* 0x007183CD: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007183D0: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007183D3: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x007183D4: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007183D6: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esi + 0x18) = eax; /* 0x007183D8: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x007183DB: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x007183DE: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007183F4; /* 0x007183E3: je 0x7183f4 */
L_007183E5:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x007183E5: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9010u); /* 0x007183E9: push 0x9010 */
    PUSH32(esp, esi); /* 0x007183EE: push esi */
    RECOMP_ICALL(eax); /* 0x007183EF: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007183F1: add esp, 8 */
    _flag_k = FK_ADD;
L_007183F4:
    edi = POP32_VAL(esp); /* 0x007183F4: pop edi */
    esi = POP32_VAL(esp); /* 0x007183F5: pop esi */
    ebp = POP32_VAL(esp); /* 0x007183F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007183F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718400u);

L_00718400:
    PUSH32(esp, ebp); /* 0x00718400: push ebp */
    ebp = esp; /* 0x00718401: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x00718403: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00718406: push esi */
    PUSH32(esp, edi); /* 0x00718407: push edi */
    ecx = MEM32(edx + 0x18); /* 0x00718408: mov ecx, dword ptr [edx + 0x18] */
    esi = MEM32(edx + 0x10); /* 0x0071840B: mov esi, dword ptr [edx + 0x10] */
    edi = esi; /* 0x0071840E: mov edi, esi */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x00718410: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x00718410: shr ecx, 2 */
    /* test ecx, ecx */ /* 0x00718413: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071843B; /* 0x00718415: je 0x71843b */
L_00718417:
    _xmm[1].u64[0] = MEM64(0x809420); _xmm[1].u64[1] = 0; /* 0x00718417: movsd xmm1, qword ptr [0x809420] */
    /* nop */ /* 0x0071841F: nop  */
L_00718420:
    _xmm[0].u64[0] = MEM32(esi); _xmm[0].u64[1] = 0; /* 0x00718420: movss xmm0, dword ptr [esi] */
    esi = esi + 0x4; /* 0x00718424: lea esi, [esi + 4] */
    edi = edi + 0x4; /* 0x00718427: lea edi, [edi + 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0071842A: cvtps2pd xmm0, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071842D: mulsd xmm0, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718431: cvttsd2si eax, xmm0 */
    MEM32(edi + (-0x4)) = eax; /* 0x00718435: mov dword ptr [edi - 4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00718438: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718420; /* 0x00718439: jne 0x718420 */
L_0071843B:
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x0071843B: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edx + 0x50); /* 0x0071843E: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x00718441: pop edi */
    esi = POP32_VAL(esp); /* 0x00718442: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x00718443: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071845B; /* 0x00718448: je 0x71845b */
L_0071844A:
    MEM32(ebp + 0xC) = 0x8020u; /* 0x0071844A: mov dword ptr [ebp + 0xc], 0x8020 */
    MEM32(ebp + 0x8) = edx; /* 0x00718451: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x00718454: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00718458: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_0071845B:
    ebp = POP32_VAL(esp); /* 0x0071845B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071845C: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00718460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718460u);

L_00718460:
    PUSH32(esp, ebp); /* 0x00718460: push ebp */
    ebp = esp; /* 0x00718461: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00718463: push ecx */
    PUSH32(esp, ebx); /* 0x00718464: push ebx */
    PUSH32(esp, esi); /* 0x00718465: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718466: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718469: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071846A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x0071846D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718470: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718470: shr edi, 2 */
    /* test edi, edi */ /* 0x00718473: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007184C2; /* 0x00718475: je 0x7184c2 */
L_00718477:
    _xmm[1].u64[0] = MEM64(0x809420); _xmm[1].u64[1] = 0; /* 0x00718477: movsd xmm1, qword ptr [0x809420] */
    esi = ebx; /* 0x0071847F: mov esi, ebx */
L_00718481:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x00718481: movss xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00718485: lea ebx, [ebx + 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00718488: cvtps2pd xmm0, xmm0 */
    esi = esi + 0x4; /* 0x0071848B: lea esi, [esi + 4] */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071848E: mulsd xmm0, xmm1 */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718492: cvttsd2si ecx, xmm0 */
    edx = ecx; /* 0x00718496: mov edx, ecx */
    eax = ecx; /* 0x00718498: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0071849A: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0071849A: shr eax, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x0071849D: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x007184A3: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x007184A5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x007184A7: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x007184AC: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x007184AC: shl ecx, 0x10 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x007184AF: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007184B1: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007184B1: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x007184B4: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x007184B4: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x007184B7: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x4)) = edx; /* 0x007184B9: mov dword ptr [esi - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007184BC: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718481; /* 0x007184BD: jne 0x718481 */
L_007184BF:
    esi = MEM32(ebp + 0x8); /* 0x007184BF: mov esi, dword ptr [ebp + 8] */
L_007184C2:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007184C2: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x007184C5: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x007184C8: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007184DE; /* 0x007184CD: je 0x7184de */
L_007184CF:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x007184CF: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x007184D3: push 0x9020 */
    PUSH32(esp, esi); /* 0x007184D8: push esi */
    RECOMP_ICALL(eax); /* 0x007184D9: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007184DB: add esp, 8 */
    _flag_k = FK_ADD;
L_007184DE:
    edi = POP32_VAL(esp); /* 0x007184DE: pop edi */
    esi = POP32_VAL(esp); /* 0x007184DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x007184E0: pop ebx */
    esp = ebp; /* 0x007184E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007184E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007184E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007184F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007184F0u);

L_007184F0:
    PUSH32(esp, ebp); /* 0x007184F0: push ebp */
    ebp = esp; /* 0x007184F1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007184F3: push ecx */
    PUSH32(esp, ebx); /* 0x007184F4: push ebx */
    PUSH32(esp, esi); /* 0x007184F5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x007184F6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x007184F9: push edi */
    edi = MEM32(esi + 0x18); /* 0x007184FA: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x007184FD: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718500: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718500: shr edi, 2 */
    /* test edi, edi */ /* 0x00718503: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071854F; /* 0x00718505: je 0x71854f */
L_00718507:
    esi = ebx; /* 0x00718507: mov esi, ebx */
    esp = esp; /* 0x00718509: lea esp, [esp] */
L_00718510:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x00718510: movss xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00718514: lea ebx, [ebx + 4] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00718517: movss dword ptr [ebp - 4], xmm0 */
    esi = esi + 0x4; /* 0x0071851C: lea esi, [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x0071851F: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x00718522: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00718524: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x0071852A: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x0071852C: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x0071852C: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x0071852F: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00718531: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00718533: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00718539: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00718539: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x0071853C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0071853E: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x0071853E: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x00718541: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x00718541: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718544: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x4)) = edx; /* 0x00718546: mov dword ptr [esi - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00718549: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718510; /* 0x0071854A: jne 0x718510 */
L_0071854C:
    esi = MEM32(ebp + 0x8); /* 0x0071854C: mov esi, dword ptr [ebp + 8] */
L_0071854F:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x0071854F: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x00718552: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718555: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071856B; /* 0x0071855A: je 0x71856b */
L_0071855C:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x0071855C: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x00718560: push 0x9120 */
    PUSH32(esp, esi); /* 0x00718565: push esi */
    RECOMP_ICALL(eax); /* 0x00718566: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718568: add esp, 8 */
    _flag_k = FK_ADD;
L_0071856B:
    edi = POP32_VAL(esp); /* 0x0071856B: pop edi */
    esi = POP32_VAL(esp); /* 0x0071856C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071856D: pop ebx */
    esp = ebp; /* 0x0071856E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718570: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718571: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718580u);

L_00718580:
    PUSH32(esp, ebp); /* 0x00718580: push ebp */
    ebp = esp; /* 0x00718581: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00718583: push ecx */
    PUSH32(esp, ebx); /* 0x00718584: push ebx */
    PUSH32(esp, esi); /* 0x00718585: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718586: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718589: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071858A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x0071858D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718590: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718590: shr edi, 2 */
    /* test edi, edi */ /* 0x00718593: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718600; /* 0x00718595: je 0x718600 */
L_00718597:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x00718597: movss xmm1, dword ptr [0x808cb0] */
    esi = ebx; /* 0x0071859F: mov esi, ebx */
    _xmm[2].u64[0] = MEM32(0x809534); _xmm[2].u64[1] = 0; /* 0x007185A1: movss xmm2, dword ptr [0x809534] */
    esp = esp; /* 0x007185A9: lea esp, [esp] */
L_007185B0:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x007185B0: movss xmm0, dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x007185B4: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x007185B7: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x007185BC: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x007185BF: mov edx, eax */
    ecx = eax; /* 0x007185C1: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x007185C3: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x007185C9: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x007185C9: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007185CC: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007185CE: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x007185D0: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x007185D6: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x007185D6: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007185D9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007185DB: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007185DB: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x007185DE: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x007185DE: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007185E1: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x007185E3: mov dword ptr [ebp - 4], edx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x007185E6: movss xmm0, dword ptr [ebp - 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x007185EB: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007185EF: mulss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x007185F3: cvttss2si eax, xmm0 */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x007185F7: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x007185F9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007185FA: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007185B0; /* 0x007185FB: jne 0x7185b0 */
L_007185FD:
    esi = MEM32(ebp + 0x8); /* 0x007185FD: mov esi, dword ptr [ebp + 8] */
L_00718600:
    eax = MEM32(esi + 0x18); /* 0x00718600: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718603: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718606: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x00718607: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071860A: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0071860C: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(esi + 0x18) = eax; /* 0x0071860F: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00718612: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718615: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718628; /* 0x0071861A: je 0x718628 */
L_0071861C:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x0071861C: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x00718620: push 8 */
    PUSH32(esp, esi); /* 0x00718622: push esi */
    RECOMP_ICALL(eax); /* 0x00718623: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718625: add esp, 8 */
    _flag_k = FK_ADD;
L_00718628:
    edi = POP32_VAL(esp); /* 0x00718628: pop edi */
    esi = POP32_VAL(esp); /* 0x00718629: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071862A: pop ebx */
    esp = ebp; /* 0x0071862B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071862D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071862E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718630u);

L_00718630:
    PUSH32(esp, ebp); /* 0x00718630: push ebp */
    ebp = esp; /* 0x00718631: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00718633: push ecx */
    PUSH32(esp, ebx); /* 0x00718634: push ebx */
    PUSH32(esp, esi); /* 0x00718635: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718636: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718639: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071863A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x0071863D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718640: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718640: shr edi, 2 */
    /* test edi, edi */ /* 0x00718643: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007186A0; /* 0x00718645: je 0x7186a0 */
L_00718647:
    _xmm[1].u64[0] = MEM32(0x809534); _xmm[1].u64[1] = 0; /* 0x00718647: movss xmm1, dword ptr [0x809534] */
    esi = ebx; /* 0x0071864F: mov esi, ebx */
L_00718651:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x00718651: movss xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00718655: lea ebx, [ebx + 4] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00718658: movss dword ptr [ebp - 4], xmm0 */
    esi = esi + 0x1; /* 0x0071865D: lea esi, [esi + 1] */
    eax = MEM32(ebp + (-0x4)); /* 0x00718660: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x00718663: mov edx, eax */
    ecx = eax; /* 0x00718665: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00718667: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x0071866D: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x0071866D: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718670: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00718672: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00718674: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x0071867A: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x0071867A: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x0071867D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0071867F: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x0071867F: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x00718682: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x00718682: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718685: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x00718687: mov dword ptr [ebp - 4], edx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x0071868A: movss xmm0, dword ptr [ebp - 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071868F: mulss xmm0, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x00718693: cvttss2si eax, xmm0 */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00718697: mov byte ptr [esi - 1], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0071869A: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718651; /* 0x0071869B: jne 0x718651 */
L_0071869D:
    esi = MEM32(ebp + 0x8); /* 0x0071869D: mov esi, dword ptr [ebp + 8] */
L_007186A0:
    eax = MEM32(esi + 0x18); /* 0x007186A0: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007186A3: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007186A6: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x007186A7: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007186AA: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x007186AC: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(esi + 0x18) = eax; /* 0x007186AF: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x007186B2: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x007186B5: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007186CB; /* 0x007186BA: je 0x7186cb */
L_007186BC:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x007186BC: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x007186C0: push 0x8008 */
    PUSH32(esp, esi); /* 0x007186C5: push esi */
    RECOMP_ICALL(eax); /* 0x007186C6: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007186C8: add esp, 8 */
    _flag_k = FK_ADD;
L_007186CB:
    edi = POP32_VAL(esp); /* 0x007186CB: pop edi */
    esi = POP32_VAL(esp); /* 0x007186CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x007186CD: pop ebx */
    esp = ebp; /* 0x007186CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007186D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007186D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007186E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007186E0u);

L_007186E0:
    PUSH32(esp, ebp); /* 0x007186E0: push ebp */
    ebp = esp; /* 0x007186E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007186E3: push ecx */
    PUSH32(esp, ebx); /* 0x007186E4: push ebx */
    PUSH32(esp, esi); /* 0x007186E5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x007186E6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x007186E9: push edi */
    edi = MEM32(esi + 0x18); /* 0x007186EA: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x007186ED: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x007186F0: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x007186F0: shr edi, 2 */
    /* test edi, edi */ /* 0x007186F3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718763; /* 0x007186F5: je 0x718763 */
L_007186F7:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x007186F7: movss xmm1, dword ptr [0x808cb0] */
    esi = ebx; /* 0x007186FF: mov esi, ebx */
    _xmm[2].u64[0] = MEM32(0x809780); _xmm[2].u64[1] = 0; /* 0x00718701: movss xmm2, dword ptr [0x809780] */
    esp = esp; /* 0x00718709: lea esp, [esp] */
L_00718710:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x00718710: movss xmm0, dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x00718714: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00718717: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x0071871C: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x0071871F: mov edx, eax */
    ecx = eax; /* 0x00718721: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00718723: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00718729: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00718729: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x0071872C: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x0071872E: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00718730: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00718736: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00718736: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00718739: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0071873B: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x0071873B: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0071873E: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0071873E: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718741: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x00718743: mov dword ptr [ebp - 4], edx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x00718746: movss xmm0, dword ptr [ebp - 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0071874B: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071874F: mulss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x00718753: cvttss2si eax, xmm0 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x00718757: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x0071875A: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0071875D: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718710; /* 0x0071875E: jne 0x718710 */
L_00718760:
    esi = MEM32(ebp + 0x8); /* 0x00718760: mov esi, dword ptr [ebp + 8] */
L_00718763:
    eax = MEM32(esi + 0x18); /* 0x00718763: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718766: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718769: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0071876A: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071876C: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esi + 0x18) = eax; /* 0x0071876E: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00718771: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718774: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718787; /* 0x00718779: je 0x718787 */
L_0071877B:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x0071877B: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x10u); /* 0x0071877F: push 0x10 */
    PUSH32(esp, esi); /* 0x00718781: push esi */
    RECOMP_ICALL(eax); /* 0x00718782: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718784: add esp, 8 */
    _flag_k = FK_ADD;
L_00718787:
    edi = POP32_VAL(esp); /* 0x00718787: pop edi */
    esi = POP32_VAL(esp); /* 0x00718788: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718789: pop ebx */
    esp = ebp; /* 0x0071878A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071878C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071878D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718790u);

L_00718790:
    PUSH32(esp, ebp); /* 0x00718790: push ebp */
    ebp = esp; /* 0x00718791: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00718793: push ecx */
    PUSH32(esp, ebx); /* 0x00718794: push ebx */
    PUSH32(esp, esi); /* 0x00718795: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718796: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718799: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071879A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x0071879D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x007187A0: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x007187A0: shr edi, 2 */
    /* test edi, edi */ /* 0x007187A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718801; /* 0x007187A5: je 0x718801 */
L_007187A7:
    _xmm[1].u64[0] = MEM32(0x809780); _xmm[1].u64[1] = 0; /* 0x007187A7: movss xmm1, dword ptr [0x809780] */
    esi = ebx; /* 0x007187AF: mov esi, ebx */
L_007187B1:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x007187B1: movss xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x007187B5: lea ebx, [ebx + 4] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x007187B8: movss dword ptr [ebp - 4], xmm0 */
    esi = esi + 0x2; /* 0x007187BD: lea esi, [esi + 2] */
    eax = MEM32(ebp + (-0x4)); /* 0x007187C0: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x007187C3: mov edx, eax */
    ecx = eax; /* 0x007187C5: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x007187C7: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x007187CD: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x007187CD: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007187D0: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007187D2: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x007187D4: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x007187DA: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x007187DA: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007187DD: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007187DF: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007187DF: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x007187E2: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x007187E2: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007187E5: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x007187E7: mov dword ptr [ebp - 4], edx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x007187EA: movss xmm0, dword ptr [ebp - 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007187EF: mulss xmm0, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x007187F3: cvttss2si eax, xmm0 */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x007187F7: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007187FB: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007187B1; /* 0x007187FC: jne 0x7187b1 */
L_007187FE:
    esi = MEM32(ebp + 0x8); /* 0x007187FE: mov esi, dword ptr [ebp + 8] */
L_00718801:
    eax = MEM32(esi + 0x18); /* 0x00718801: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718804: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718807: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00718808: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071880A: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esi + 0x18) = eax; /* 0x0071880C: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x0071880F: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718812: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718828; /* 0x00718817: je 0x718828 */
L_00718819:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00718819: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x8010u); /* 0x0071881D: push 0x8010 */
    PUSH32(esp, esi); /* 0x00718822: push esi */
    RECOMP_ICALL(eax); /* 0x00718823: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718825: add esp, 8 */
    _flag_k = FK_ADD;
L_00718828:
    edi = POP32_VAL(esp); /* 0x00718828: pop edi */
    esi = POP32_VAL(esp); /* 0x00718829: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071882A: pop ebx */
    esp = ebp; /* 0x0071882B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071882D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071882E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718830u);

L_00718830:
    PUSH32(esp, ebp); /* 0x00718830: push ebp */
    ebp = esp; /* 0x00718831: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00718833: push ecx */
    PUSH32(esp, ebx); /* 0x00718834: push ebx */
    PUSH32(esp, esi); /* 0x00718835: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718836: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718839: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071883A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x0071883D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718840: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718840: shr edi, 2 */
    /* test edi, edi */ /* 0x00718843: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007188B7; /* 0x00718845: je 0x7188b7 */
L_00718847:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x00718847: movss xmm1, dword ptr [0x808cb0] */
    esi = ebx; /* 0x0071884F: mov esi, ebx */
    _xmm[2].u64[0] = MEM32(0x809780); _xmm[2].u64[1] = 0; /* 0x00718851: movss xmm2, dword ptr [0x809780] */
    esp = esp; /* 0x00718859: lea esp, [esp] */
L_00718860:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x00718860: movss xmm0, dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x00718864: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00718867: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x0071886C: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x0071886F: mov edx, eax */
    ecx = eax; /* 0x00718871: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00718873: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00718879: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00718879: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x0071887C: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x0071887E: mov ecx, eax */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00718880: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00718880: shl eax, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00718883: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00718889: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0071888B: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x0071888B: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0071888E: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0071888E: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718891: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x00718893: mov dword ptr [ebp - 4], edx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x00718896: movss xmm0, dword ptr [ebp - 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0071889B: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071889F: mulss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x007188A3: cvttss2si eax, xmm0 */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007188A7: rol ax, 8 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x007188AB: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x007188AE: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007188B1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718860; /* 0x007188B2: jne 0x718860 */
L_007188B4:
    esi = MEM32(ebp + 0x8); /* 0x007188B4: mov esi, dword ptr [ebp + 8] */
L_007188B7:
    eax = MEM32(esi + 0x18); /* 0x007188B7: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x007188BA: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007188BD: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x007188BE: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007188C0: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esi + 0x18) = eax; /* 0x007188C2: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x007188C5: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x007188C8: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007188DE; /* 0x007188CD: je 0x7188de */
L_007188CF:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x007188CF: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x1010u); /* 0x007188D3: push 0x1010 */
    PUSH32(esp, esi); /* 0x007188D8: push esi */
    RECOMP_ICALL(eax); /* 0x007188D9: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007188DB: add esp, 8 */
    _flag_k = FK_ADD;
L_007188DE:
    edi = POP32_VAL(esp); /* 0x007188DE: pop edi */
    esi = POP32_VAL(esp); /* 0x007188DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x007188E0: pop ebx */
    esp = ebp; /* 0x007188E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007188E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007188E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007188F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007188F0u);

L_007188F0:
    PUSH32(esp, ebp); /* 0x007188F0: push ebp */
    ebp = esp; /* 0x007188F1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007188F3: push ecx */
    PUSH32(esp, ebx); /* 0x007188F4: push ebx */
    PUSH32(esp, esi); /* 0x007188F5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x007188F6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x007188F9: push edi */
    edi = MEM32(esi + 0x18); /* 0x007188FA: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x007188FD: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718900: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718900: shr edi, 2 */
    /* test edi, edi */ /* 0x00718903: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718965; /* 0x00718905: je 0x718965 */
L_00718907:
    _xmm[1].u64[0] = MEM32(0x809780); _xmm[1].u64[1] = 0; /* 0x00718907: movss xmm1, dword ptr [0x809780] */
    esi = ebx; /* 0x0071890F: mov esi, ebx */
L_00718911:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x00718911: movss xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00718915: lea ebx, [ebx + 4] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00718918: movss dword ptr [ebp - 4], xmm0 */
    esi = esi + 0x2; /* 0x0071891D: lea esi, [esi + 2] */
    eax = MEM32(ebp + (-0x4)); /* 0x00718920: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x00718923: mov edx, eax */
    ecx = eax; /* 0x00718925: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00718927: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x0071892D: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x0071892D: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718930: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00718932: mov ecx, eax */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00718934: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00718934: shl eax, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00718937: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x0071893D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0071893F: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x0071893F: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x00718942: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x00718942: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718945: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x00718947: mov dword ptr [ebp - 4], edx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x0071894A: movss xmm0, dword ptr [ebp - 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071894F: mulss xmm0, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x00718953: cvttss2si eax, xmm0 */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00718957: rol ax, 8 */
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x0071895B: mov word ptr [esi - 2], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0071895F: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718911; /* 0x00718960: jne 0x718911 */
L_00718962:
    esi = MEM32(ebp + 0x8); /* 0x00718962: mov esi, dword ptr [ebp + 8] */
L_00718965:
    eax = MEM32(esi + 0x18); /* 0x00718965: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718968: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071896B: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0071896C: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071896E: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esi + 0x18) = eax; /* 0x00718970: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00718973: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718976: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071898C; /* 0x0071897B: je 0x71898c */
L_0071897D:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x0071897D: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9010u); /* 0x00718981: push 0x9010 */
    PUSH32(esp, esi); /* 0x00718986: push esi */
    RECOMP_ICALL(eax); /* 0x00718987: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718989: add esp, 8 */
    _flag_k = FK_ADD;
L_0071898C:
    edi = POP32_VAL(esp); /* 0x0071898C: pop edi */
    esi = POP32_VAL(esp); /* 0x0071898D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071898E: pop ebx */
    esp = ebp; /* 0x0071898F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718991: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718992: ret  */
    RECOMP_REGS_OUT();
}

void sub_007189A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007189A0u);

L_007189A0:
    PUSH32(esp, ebp); /* 0x007189A0: push ebp */
    ebp = esp; /* 0x007189A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007189A3: push ecx */
    PUSH32(esp, ebx); /* 0x007189A4: push ebx */
    PUSH32(esp, esi); /* 0x007189A5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x007189A6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x007189A9: push edi */
    edi = MEM32(esi + 0x18); /* 0x007189AA: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x007189AD: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x007189B0: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x007189B0: shr edi, 2 */
    /* test edi, edi */ /* 0x007189B3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718A13; /* 0x007189B5: je 0x718a13 */
L_007189B7:
    _xmm[1].u64[0] = MEM64(0x809420); _xmm[1].u64[1] = 0; /* 0x007189B7: movsd xmm1, qword ptr [0x809420] */
    esi = ebx; /* 0x007189BF: mov esi, ebx */
L_007189C1:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x007189C1: movss xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x007189C5: lea ebx, [ebx + 4] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x007189C8: movss dword ptr [ebp - 4], xmm0 */
    esi = esi + 0x4; /* 0x007189CD: lea esi, [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x007189D0: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x007189D3: mov edx, eax */
    ecx = eax; /* 0x007189D5: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x007189D7: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x007189DD: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x007189DD: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007189E0: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007189E2: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x007189E4: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x007189EA: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x007189EA: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007189ED: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x007189EF: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x007189EF: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x007189F2: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x007189F2: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x007189F5: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x007189F7: mov dword ptr [ebp - 4], edx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x007189FA: movss xmm0, dword ptr [ebp - 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x007189FF: cvtps2pd xmm0, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00718A02: mulsd xmm0, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718A06: cvttsd2si eax, xmm0 */
    MEM32(esi + (-0x4)) = eax; /* 0x00718A0A: mov dword ptr [esi - 4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00718A0D: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007189C1; /* 0x00718A0E: jne 0x7189c1 */
L_00718A10:
    esi = MEM32(ebp + 0x8); /* 0x00718A10: mov esi, dword ptr [ebp + 8] */
L_00718A13:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718A13: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x00718A16: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718A19: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718A2F; /* 0x00718A1E: je 0x718a2f */
L_00718A20:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00718A20: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x8020u); /* 0x00718A24: push 0x8020 */
    PUSH32(esp, esi); /* 0x00718A29: push esi */
    RECOMP_ICALL(eax); /* 0x00718A2A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718A2C: add esp, 8 */
    _flag_k = FK_ADD;
L_00718A2F:
    edi = POP32_VAL(esp); /* 0x00718A2F: pop edi */
    esi = POP32_VAL(esp); /* 0x00718A30: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718A31: pop ebx */
    esp = ebp; /* 0x00718A32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718A34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718A35: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718A40u);

L_00718A40:
    PUSH32(esp, ebp); /* 0x00718A40: push ebp */
    ebp = esp; /* 0x00718A41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00718A43: push ecx */
    PUSH32(esp, ebx); /* 0x00718A44: push ebx */
    PUSH32(esp, esi); /* 0x00718A45: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718A46: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718A49: push edi */
    edi = MEM32(esi + 0x18); /* 0x00718A4A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x00718A4D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718A50: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718A50: shr edi, 2 */
    /* test edi, edi */ /* 0x00718A53: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718AD6; /* 0x00718A55: je 0x718ad6 */
L_00718A57:
    _xmm[1].u64[0] = MEM64(0x809420); _xmm[1].u64[1] = 0; /* 0x00718A57: movsd xmm1, qword ptr [0x809420] */
    esi = ebx; /* 0x00718A5F: mov esi, ebx */
L_00718A61:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x00718A61: movss xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00718A65: lea ebx, [ebx + 4] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00718A68: movss dword ptr [ebp - 4], xmm0 */
    esi = esi + 0x4; /* 0x00718A6D: lea esi, [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x00718A70: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x00718A73: mov edx, eax */
    ecx = eax; /* 0x00718A75: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00718A77: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00718A7D: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00718A7D: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718A80: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00718A82: mov ecx, eax */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00718A84: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00718A84: shl eax, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00718A87: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00718A8D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00718A8F: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00718A8F: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x00718A92: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x00718A92: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718A95: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x00718A97: mov dword ptr [ebp - 4], edx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x00718A9A: movss xmm0, dword ptr [ebp - 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00718A9F: cvtps2pd xmm0, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00718AA2: mulsd xmm0, xmm1 */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718AA6: cvttsd2si ecx, xmm0 */
    edx = ecx; /* 0x00718AAA: mov edx, ecx */
    eax = ecx; /* 0x00718AAC: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00718AAE: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00718AAE: shr eax, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00718AB1: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00718AB7: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00718AB9: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x00718ABB: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00718AC0: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00718AC0: shl ecx, 0x10 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x00718AC3: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00718AC5: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00718AC5: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x00718AC8: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x00718AC8: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00718ACB: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x4)) = edx; /* 0x00718ACD: mov dword ptr [esi - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00718AD0: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718A61; /* 0x00718AD1: jne 0x718a61 */
L_00718AD3:
    esi = MEM32(ebp + 0x8); /* 0x00718AD3: mov esi, dword ptr [ebp + 8] */
L_00718AD6:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718AD6: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x00718AD9: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718ADC: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718AF2; /* 0x00718AE1: je 0x718af2 */
L_00718AE3:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00718AE3: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x00718AE7: push 0x9020 */
    PUSH32(esp, esi); /* 0x00718AEC: push esi */
    RECOMP_ICALL(eax); /* 0x00718AED: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718AEF: add esp, 8 */
    _flag_k = FK_ADD;
L_00718AF2:
    edi = POP32_VAL(esp); /* 0x00718AF2: pop edi */
    esi = POP32_VAL(esp); /* 0x00718AF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718AF4: pop ebx */
    esp = ebp; /* 0x00718AF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718AF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718AF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718B00u);

L_00718B00:
    PUSH32(esp, ebp); /* 0x00718B00: push ebp */
    ebp = esp; /* 0x00718B01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00718B03: push ecx */
    PUSH32(esp, ebx); /* 0x00718B04: push ebx */
    PUSH32(esp, esi); /* 0x00718B05: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00718B06: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00718B09: push edi */
    edi = MEM32(esi + 0x18); /* 0x00718B0A: mov edi, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x00718B0D: mov ebx, dword ptr [esi + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00718B10: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x00718B10: shr edi, 2 */
    /* test edi, edi */ /* 0x00718B13: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00718B5F; /* 0x00718B15: je 0x718b5f */
L_00718B17:
    esi = ebx; /* 0x00718B17: mov esi, ebx */
    esp = esp; /* 0x00718B19: lea esp, [esp] */
L_00718B20:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x00718B20: movss xmm0, dword ptr [ebx] */
    ebx = ebx + 0x4; /* 0x00718B24: lea ebx, [ebx + 4] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00718B27: movss dword ptr [ebp - 4], xmm0 */
    esi = esi + 0x4; /* 0x00718B2C: lea esi, [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x00718B2F: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x00718B32: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00718B34: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00718B3A: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00718B3C: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00718B3C: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718B3F: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00718B41: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x00718B43: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00718B49: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00718B49: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00718B4C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00718B4E: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00718B4E: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x00718B51: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x00718B51: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00718B54: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x4)) = edx; /* 0x00718B56: mov dword ptr [esi - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00718B59: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00718B20; /* 0x00718B5A: jne 0x718b20 */
L_00718B5C:
    esi = MEM32(ebp + 0x8); /* 0x00718B5C: mov esi, dword ptr [ebp + 8] */
L_00718B5F:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x00718B5F: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x00718B62: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00718B65: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718B7B; /* 0x00718B6A: je 0x718b7b */
L_00718B6C:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00718B6C: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x8120u); /* 0x00718B70: push 0x8120 */
    PUSH32(esp, esi); /* 0x00718B75: push esi */
    RECOMP_ICALL(eax); /* 0x00718B76: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718B78: add esp, 8 */
    _flag_k = FK_ADD;
L_00718B7B:
    edi = POP32_VAL(esp); /* 0x00718B7B: pop edi */
    esi = POP32_VAL(esp); /* 0x00718B7C: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718B7D: pop ebx */
    esp = ebp; /* 0x00718B7E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718B80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718B81: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718B90u);

L_00718B90:
    PUSH32(esp, ebp); /* 0x00718B90: push ebp */
    ebp = esp; /* 0x00718B91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00718B93: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00718B96: push ebx */
    PUSH32(esp, esi); /* 0x00718B97: push esi */
    PUSH32(esp, edi); /* 0x00718B98: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00718B99: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00718B9C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x18); /* 0x00718B9E: mov eax, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x00718BA1: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x00718BA4: mov dword ptr [ebp - 4], ebx */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00718BA7: movd xmm0, eax */
    ecx = eax + (-0x10); /* 0x00718BAB: lea ecx, [eax - 0x10] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00718BAE: cvtdq2pd xmm0, xmm0 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x00718BB2: mov dword ptr [ebp - 0xc], ecx */
    esi = ebx + (-0x1); /* 0x00718BB5: lea esi, [ebx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00718BB8: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x00718BB9: add eax, ebx */
    _flag_k = FK_ADD;
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00718BBB: mulsd xmm0, qword ptr [edi + 8] */
    SET_LO8(ebx, MEM8(eax)); /* 0x00718BC0: mov bl, byte ptr [eax] */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718BC2: cvttsd2si ecx, xmm0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x00718BC6: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x00718BC8: mov dword ptr [ebp - 0x10], ecx */
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x00718BCB: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00718BF8; /* 0x00718BCE: jb 0x718bf8 */
L_00718BD0:
    edi = eax; /* 0x00718BD0: mov edi, eax */
L_00718BD2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0xC)); /* 0x00718BD2: add edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x00718BD5: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00718BD7: dec esi */
    _flag_k = FK_DEC;
    eax = edx + edx; /* 0x00718BD8: lea eax, [edx + edx] */
    /* cmp eax, ecx */ /* 0x00718BDB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00718BF0; /* 0x00718BDD: jl 0x718bf0 */
L_00718BDF:
    ecx = (uint32_t)MEM8(edi + (-0x1)); /* 0x00718BDF: movzx ecx, byte ptr [edi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00718BE3: dec edi */
    _flag_k = FK_DEC;
    ebx = (uint32_t)LO8(ebx); /* 0x00718BE4: movzx ebx, bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00718BE7: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x00718BE9: mov ecx, dword ptr [ebp - 0x10] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x00718BEC: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x00718BEE: sub edx, ecx */
    _flag_k = FK_CMP;
L_00718BF0:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x00718BF0: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00718BD2; /* 0x00718BF3: jae 0x718bd2 */
L_00718BF5:
    edi = MEM32(ebp + 0x8); /* 0x00718BF5: mov edi, dword ptr [ebp + 8] */
L_00718BF8:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00718BF8: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x00718BFB: mov eax, dword ptr [edi + 0x50] */
    MEM32(edi + 0x18) = ecx; /* 0x00718BFE: mov dword ptr [edi + 0x18], ecx */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00718C01: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718C15; /* 0x00718C06: je 0x718c15 */
L_00718C08:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00718C08: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00718C0B: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x00718C0F: push edi */
    RECOMP_ICALL(eax); /* 0x00718C10: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718C12: add esp, 8 */
    _flag_k = FK_ADD;
L_00718C15:
    edi = POP32_VAL(esp); /* 0x00718C15: pop edi */
    esi = POP32_VAL(esp); /* 0x00718C16: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718C17: pop ebx */
    esp = ebp; /* 0x00718C18: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718C1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718C1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718C20u);

L_00718C20:
    PUSH32(esp, ebp); /* 0x00718C20: push ebp */
    ebp = esp; /* 0x00718C21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00718C23: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00718C26: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00718C27: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00718C2A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x00718C2C: push esi */
    PUSH32(esp, edi); /* 0x00718C2D: push edi */
    eax = MEM32(ebx + 0x18); /* 0x00718C2E: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x00718C31: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x00718C34: mov edi, esi */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00718C36: movd xmm0, eax */
    ecx = eax + (-0x10); /* 0x00718C3A: lea ecx, [eax - 0x10] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00718C3D: cvtdq2pd xmm0, xmm0 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00718C41: mov dword ptr [ebp - 0x10], ecx */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00718C44: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718C49: cvttsd2si eax, xmm0 */
    MEM32(ebp + (-0xC)) = eax; /* 0x00718C4D: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00718C50: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x00718C52: mov dword ptr [ebp - 8], eax */
    SET_LO8(eax, MEM8(edi)); /* 0x00718C55: mov al, byte ptr [edi] */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x00718C57: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00718C87; /* 0x00718C5A: jae 0x718c87 */
L_00718C5C:
    SET_LO8(ebx, LO8(eax)); /* 0x00718C5C: mov bl, al */
    edi = edi; /* 0x00718C5E: mov edi, edi */
L_00718C60:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0xC)); /* 0x00718C60: add edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    edi = edi + 0x1; /* 0x00718C63: lea edi, [edi + 1] */
    eax = edx + edx; /* 0x00718C66: lea eax, [edx + edx] */
    /* cmp eax, ecx */ /* 0x00718C69: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00718C7F; /* 0x00718C6B: jl 0x718c7f */
L_00718C6D:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x00718C6D: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00718C6F: inc esi */
    _flag_k = FK_INC;
    ecx = (uint32_t)MEM8(edi); /* 0x00718C70: movzx ecx, byte ptr [edi] */
    ebx = (uint32_t)LO8(ebx); /* 0x00718C73: movzx ebx, bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00718C76: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x00718C78: mov ecx, dword ptr [ebp - 0x10] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x00718C7B: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x00718C7D: sub edx, ecx */
    _flag_k = FK_CMP;
L_00718C7F:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x00718C7F: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00718C60; /* 0x00718C82: jb 0x718c60 */
L_00718C84:
    ebx = MEM32(ebp + 0x8); /* 0x00718C84: mov ebx, dword ptr [ebp + 8] */
L_00718C87:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00718C87: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718C8A: cvttsd2si eax, xmm0 */
    MEM32(ebx + 0x18) = eax; /* 0x00718C8E: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00718C91: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00718C94: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718CA8; /* 0x00718C99: je 0x718ca8 */
L_00718C9B:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00718C9B: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00718C9E: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x00718CA2: push ebx */
    RECOMP_ICALL(eax); /* 0x00718CA3: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718CA5: add esp, 8 */
    _flag_k = FK_ADD;
L_00718CA8:
    edi = POP32_VAL(esp); /* 0x00718CA8: pop edi */
    esi = POP32_VAL(esp); /* 0x00718CA9: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718CAA: pop ebx */
    esp = ebp; /* 0x00718CAB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718CAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718CAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718CB0u);

L_00718CB0:
    PUSH32(esp, ebp); /* 0x00718CB0: push ebp */
    ebp = esp; /* 0x00718CB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00718CB3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00718CB6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00718CB7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00718CBA: push esi */
    PUSH32(esp, edi); /* 0x00718CBB: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00718CBC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x18); /* 0x00718CBE: mov ecx, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x00718CC1: mov edi, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x8)) = edi; /* 0x00718CC4: mov dword ptr [ebp - 8], edi */
    eax = ecx + (-0x20); /* 0x00718CC7: lea eax, [ecx - 0x20] */
    MEM32(ebp + (-0x10)) = eax; /* 0x00718CCA: mov dword ptr [ebp - 0x10], eax */
    eax = ecx; /* 0x00718CCD: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718CCF: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00718CD0: sub eax, edx */
    _flag_k = FK_CMP;
    edx = edi + (-0x2); /* 0x00718CD2: lea edx, [edi - 2] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00718CD5: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x00718CD7: add edi, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x00718CDA: add edi, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00718CDC: movd xmm0, eax */
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x00718CE0: mov cl, byte ptr [edi + 1] */
    SET_HI8(ecx, MEM8(edi)); /* 0x00718CE3: mov ch, byte ptr [edi] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00718CE5: cvtdq2pd xmm0, xmm0 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00718CE9: mov byte ptr [ebp - 1], cl */
    MEM8(ebp + (-0x2)) = (uint8_t)(HI8(ecx)); /* 0x00718CEC: mov byte ptr [ebp - 2], ch */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00718CEF: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718CF4: cvttsd2si eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00718CF8: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x00718CFA: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x00718CFC: mov dword ptr [ebp - 0xc], eax */
    /* cmp edx, MEM32(ebp + (-0x8)) */ /* 0x00718CFF: cmp edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00718D4A; /* 0x00718D02: jb 0x718d4a */
L_00718D04:
    ebx = eax; /* 0x00718D04: mov ebx, eax */
L_00718D06:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x00718D06: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    MEM8(edx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00718D09: mov byte ptr [edx + 1], cl */
    MEM8(edx) = (uint8_t)(HI8(ecx)); /* 0x00718D0C: mov byte ptr [edx], ch */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 2; /* 0x00718D0E: sub edx, 2 */
    _flag_k = FK_CMP;
    eax = esi + esi; /* 0x00718D11: lea eax, [esi + esi] */
    /* cmp eax, ebx */ /* 0x00718D14: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00718D3F; /* 0x00718D16: jl 0x718d3f */
L_00718D18:
    ecx = (uint32_t)MEM8(edi + (-0x1)); /* 0x00718D18: movzx ecx, byte ptr [edi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x00718D1C: sub edi, 2 */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x00718D1F: movzx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00718D23: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00718D25: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = (uint32_t)MEM8(edi); /* 0x00718D27: movzx ecx, byte ptr [edi] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00718D2A: mov byte ptr [ebp - 1], al */
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x00718D2D: movzx eax, byte ptr [ebp - 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00718D31: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00718D33: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00718D35: sub esi, ebx */
    _flag_k = FK_CMP;
    SET_HI8(ecx, LO8(ecx)); /* 0x00718D37: mov ch, cl */
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x00718D39: mov cl, byte ptr [ebp - 1] */
    MEM8(ebp + (-0x2)) = (uint8_t)(HI8(ecx)); /* 0x00718D3C: mov byte ptr [ebp - 2], ch */
L_00718D3F:
    /* cmp edx, MEM32(ebp + (-0x8)) */ /* 0x00718D3F: cmp edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00718D06; /* 0x00718D42: jae 0x718d06 */
L_00718D44:
    ebx = MEM32(ebp + 0x8); /* 0x00718D44: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x00718D47: mov eax, dword ptr [ebp - 0xc] */
L_00718D4A:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00718D4A: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = eax; /* 0x00718D4D: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00718D50: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00718D53: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718D67; /* 0x00718D58: je 0x718d67 */
L_00718D5A:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00718D5A: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00718D5D: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x00718D61: push ebx */
    RECOMP_ICALL(eax); /* 0x00718D62: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718D64: add esp, 8 */
    _flag_k = FK_ADD;
L_00718D67:
    edi = POP32_VAL(esp); /* 0x00718D67: pop edi */
    esi = POP32_VAL(esp); /* 0x00718D68: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718D69: pop ebx */
    esp = ebp; /* 0x00718D6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718D6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718D6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718D70u);

L_00718D70:
    PUSH32(esp, ebp); /* 0x00718D70: push ebp */
    ebp = esp; /* 0x00718D71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00718D73: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00718D76: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00718D77: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00718D7A: push esi */
    PUSH32(esp, edi); /* 0x00718D7B: push edi */
    eax = MEM32(ebx + 0x18); /* 0x00718D7C: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x00718D7F: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x00718D82: mov edi, esi */
    ecx = eax + (-0x20); /* 0x00718D84: lea ecx, [eax - 0x20] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718D87: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00718D88: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x00718D8A: mov dword ptr [ebp - 8], ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00718D8D: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00718D8F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x00718D91: mov cl, byte ptr [edi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00718D94: mov byte ptr [ebp - 1], cl */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00718D97: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00718D9B: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00718D9F: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718DA4: cvttsd2si eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00718DA8: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x00718DAA: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00718DAD: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x00718DAF: mov dword ptr [ebp - 0xc], eax */
    SET_LO8(eax, MEM8(edi)); /* 0x00718DB2: mov al, byte ptr [edi] */
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x00718DB4: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00718DFA; /* 0x00718DB7: jae 0x718dfa */
L_00718DB9:
    SET_LO8(ebx, LO8(eax)); /* 0x00718DB9: mov bl, al */
    goto L_00718DC0; /* 0x00718DBB: jmp 0x718dc0 */
L_00718DC0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x10)); /* 0x00718DC0: add edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    edi = edi + 0x2; /* 0x00718DC3: lea edi, [edi + 2] */
    eax = edx + edx; /* 0x00718DC6: lea eax, [edx + edx] */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x00718DC9: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00718DF2; /* 0x00718DCC: jl 0x718df2 */
L_00718DCE:
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x00718DCE: movzx eax, byte ptr [ebp - 1] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x00718DD2: mov byte ptr [esi], bl */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00718DD4: mov byte ptr [esi + 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x00718DD7: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(edi); /* 0x00718DDA: movzx ecx, byte ptr [edi] */
    ebx = (uint32_t)LO8(ebx); /* 0x00718DDD: movzx ebx, bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00718DE0: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(edi + 0x1); /* 0x00718DE2: movzx ecx, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00718DE6: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x00718DE8: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00718DEA: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x8)); /* 0x00718DEC: sub edx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00718DEF: mov byte ptr [ebp - 1], cl */
L_00718DF2:
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x00718DF2: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00718DC0; /* 0x00718DF5: jb 0x718dc0 */
L_00718DF7:
    ebx = MEM32(ebp + 0x8); /* 0x00718DF7: mov ebx, dword ptr [ebp + 8] */
L_00718DFA:
    eax = MEM32(ebp + (-0x10)); /* 0x00718DFA: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00718DFD: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = eax; /* 0x00718E00: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00718E03: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00718E06: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718E1A; /* 0x00718E0B: je 0x718e1a */
L_00718E0D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00718E0D: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00718E10: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x00718E14: push ebx */
    RECOMP_ICALL(eax); /* 0x00718E15: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718E17: add esp, 8 */
    _flag_k = FK_ADD;
L_00718E1A:
    edi = POP32_VAL(esp); /* 0x00718E1A: pop edi */
    esi = POP32_VAL(esp); /* 0x00718E1B: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718E1C: pop ebx */
    esp = ebp; /* 0x00718E1D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718E1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718E20: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718E30u);

L_00718E30:
    PUSH32(esp, ebp); /* 0x00718E30: push ebp */
    ebp = esp; /* 0x00718E31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00718E33: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00718E36: push ebx */
    PUSH32(esp, esi); /* 0x00718E37: push esi */
    PUSH32(esp, edi); /* 0x00718E38: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00718E39: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00718E3C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x18); /* 0x00718E3E: mov ecx, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x00718E41: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x00718E44: mov dword ptr [ebp - 0xc], ebx */
    eax = ecx + (-0x40); /* 0x00718E47: lea eax, [ecx - 0x40] */
    MEM32(ebp + (-0x10)) = eax; /* 0x00718E4A: mov dword ptr [ebp - 0x10], eax */
    eax = ecx; /* 0x00718E4D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718E4F: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x00718E50: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00718E53: add eax, edx */
    _flag_k = FK_ADD;
    edx = ebx + (-0x4); /* 0x00718E55: lea edx, [ebx - 4] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00718E58: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFCu; /* 0x00718E5B: add ebx, -4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00718E5E: add ebx, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00718E60: movd xmm0, eax */
    SET_LO8(ecx, MEM8(ebx + 0x3)); /* 0x00718E64: mov cl, byte ptr [ebx + 3] */
    SET_HI8(ecx, MEM8(ebx + 0x2)); /* 0x00718E67: mov ch, byte ptr [ebx + 2] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00718E6A: cvtdq2pd xmm0, xmm0 */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00718E6E: mov byte ptr [ebp - 3], cl */
    MEM8(ebp + (-0x4)) = (uint8_t)(HI8(ecx)); /* 0x00718E71: mov byte ptr [ebp - 4], ch */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00718E74: mulsd xmm0, qword ptr [edi + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718E79: cvttsd2si eax, xmm0 */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x00718E7D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x00718E7D: shl eax, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x00718E80: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x00718E82: mov dword ptr [ebp - 8], eax */
    SET_LO8(eax, MEM8(ebx + 0x1)); /* 0x00718E85: mov al, byte ptr [ebx + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00718E88: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(ebx)); /* 0x00718E8B: mov al, byte ptr [ebx] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x00718E8D: mov byte ptr [ebp - 2], al */
    eax = MEM32(ebp + (-0x8)); /* 0x00718E90: mov eax, dword ptr [ebp - 8] */
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x00718E93: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00718F0F; /* 0x00718E96: jb 0x718f0f */
L_00718E98:
    edi = eax; /* 0x00718E98: mov edi, eax */
    ebx = ebx; /* 0x00718E9A: lea ebx, [ebx] */
L_00718EA0:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x00718EA0: mov al, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x00718EA3: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x00718EA6: mov byte ptr [edx + 1], al */
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x00718EA9: mov al, byte ptr [ebp - 2] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x00718EAC: mov byte ptr [edx], al */
    MEM8(edx + 0x3) = (uint8_t)(LO8(ecx)); /* 0x00718EAE: mov byte ptr [edx + 3], cl */
    eax = esi + esi; /* 0x00718EB1: lea eax, [esi + esi] */
    MEM8(edx + 0x2) = (uint8_t)(HI8(ecx)); /* 0x00718EB4: mov byte ptr [edx + 2], ch */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x00718EB7: sub edx, 4 */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x00718EBA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00718F04; /* 0x00718EBC: jl 0x718f04 */
L_00718EBE:
    ecx = (uint32_t)MEM8(ebx + (-0x1)); /* 0x00718EBE: movzx ecx, byte ptr [ebx - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00718EC2: sub ebx, 4 */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ebp + (-0x3)); /* 0x00718EC5: movzx eax, byte ptr [ebp - 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00718EC9: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00718ECB: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = (uint32_t)MEM8(ebx + 0x2); /* 0x00718ECD: movzx ecx, byte ptr [ebx + 2] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(eax)); /* 0x00718ED1: mov byte ptr [ebp - 3], al */
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x00718ED4: movzx eax, byte ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00718ED8: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(ebx + 0x1); /* 0x00718EDA: movzx ecx, byte ptr [ebx + 1] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00718EDE: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x00718EE0: mov byte ptr [ebp - 4], al */
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x00718EE3: movzx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00718EE7: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x00718EE9: movzx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00718EED: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00718EEF: mov byte ptr [ebp - 1], cl */
    ecx = (uint32_t)MEM8(ebx); /* 0x00718EF2: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00718EF5: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00718EF7: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00718EF9: sub esi, edi */
    _flag_k = FK_CMP;
    SET_HI8(ecx, MEM8(ebp + (-0x4))); /* 0x00718EFB: mov ch, byte ptr [ebp - 4] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00718EFE: mov byte ptr [ebp - 2], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x3))); /* 0x00718F01: mov cl, byte ptr [ebp - 3] */
L_00718F04:
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x00718F04: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00718EA0; /* 0x00718F07: jae 0x718ea0 */
L_00718F09:
    edi = MEM32(ebp + 0x8); /* 0x00718F09: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x00718F0C: mov eax, dword ptr [ebp - 8] */
L_00718F0F:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00718F0F: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = eax; /* 0x00718F12: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00718F15: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00718F18: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00718F2C; /* 0x00718F1D: je 0x718f2c */
L_00718F1F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00718F1F: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00718F22: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x00718F26: push edi */
    RECOMP_ICALL(eax); /* 0x00718F27: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00718F29: add esp, 8 */
    _flag_k = FK_ADD;
L_00718F2C:
    edi = POP32_VAL(esp); /* 0x00718F2C: pop edi */
    esi = POP32_VAL(esp); /* 0x00718F2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x00718F2E: pop ebx */
    esp = ebp; /* 0x00718F2F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00718F31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00718F32: ret  */
    RECOMP_REGS_OUT();
}

void sub_00718F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00718F40u);

L_00718F40:
    PUSH32(esp, ebp); /* 0x00718F40: push ebp */
    ebp = esp; /* 0x00718F41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00718F43: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00718F46: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00718F47: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00718F4A: push esi */
    PUSH32(esp, edi); /* 0x00718F4B: push edi */
    eax = MEM32(ebx + 0x18); /* 0x00718F4C: mov eax, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x00718F4F: mov edi, dword ptr [ebx + 0x10] */
    esi = edi + 0x2; /* 0x00718F52: lea esi, [edi + 2] */
    ecx = eax + (-0x40); /* 0x00718F55: lea ecx, [eax - 0x40] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00718F58: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x00718F59: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x00718F5C: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00718F5F: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00718F61: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00718F63: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00718F66: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00718F6A: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00718F6E: mulsd xmm0, qword ptr [ebx + 8] */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00718F73: cvttsd2si ecx, xmm0 */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x00718F77: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x00718F77: shl ecx, 2 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x00718F7A: mov dword ptr [ebp - 8], ecx */
    eax = edi + ecx; /* 0x00718F7D: lea eax, [edi + ecx] */
    SET_LO8(ecx, MEM8(edi)); /* 0x00718F80: mov cl, byte ptr [edi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00718F82: mov byte ptr [ebp - 4], cl */
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x00718F85: mov cl, byte ptr [edi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00718F88: mov byte ptr [ebp - 1], cl */
    SET_LO8(ecx, MEM8(esi)); /* 0x00718F8B: mov cl, byte ptr [esi] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00718F8D: mov byte ptr [ebp - 2], cl */
    SET_LO8(ecx, MEM8(edi + 0x3)); /* 0x00718F90: mov cl, byte ptr [edi + 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00718F93: mov byte ptr [ebp - 3], cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x00718F96: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x00718F99: mov dword ptr [ebp - 0x10], eax */
    /* cmp edi, eax */ /* 0x00718F9C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719016; /* 0x00718F9E: jae 0x719016 */
L_00718FA0:
    ebx = MEM32(ebp + (-0xC)); /* 0x00718FA0: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x00718FA3: add edi, 2 */
    _flag_k = FK_ADD;
L_00718FA6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00718FA6: add edx, ecx */
    _flag_k = FK_ADD;
    esi = esi + 0x4; /* 0x00718FA8: lea esi, [esi + 4] */
    eax = edx + edx; /* 0x00718FAB: lea eax, [edx + edx] */
    /* cmp eax, ebx */ /* 0x00718FAE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071900B; /* 0x00718FB0: jl 0x71900b */
L_00718FB2:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x00718FB2: mov cl, byte ptr [ebp - 1] */
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x00718FB5: mov al, byte ptr [ebp - 4] */
    MEM8(edi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00718FB8: mov byte ptr [edi - 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x2))); /* 0x00718FBB: mov cl, byte ptr [ebp - 2] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x00718FBE: mov byte ptr [edi], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x3))); /* 0x00718FC0: mov cl, byte ptr [ebp - 3] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00718FC3: mov byte ptr [edi + 1], cl */
    MEM8(edi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x00718FC6: mov byte ptr [edi - 2], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00718FC9: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(esi + (-0x2)); /* 0x00718FCC: movzx ecx, byte ptr [esi - 2] */
    eax = (uint32_t)LO8(eax); /* 0x00718FD0: movzx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00718FD3: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x00718FD5: movzx eax, byte ptr [ebp - 1] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00718FD9: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00718FDB: mov byte ptr [ebp - 4], cl */
    ecx = (uint32_t)MEM8(esi + (-0x1)); /* 0x00718FDE: movzx ecx, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00718FE2: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x00718FE4: movzx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00718FE8: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00718FEA: mov byte ptr [ebp - 1], cl */
    ecx = (uint32_t)MEM8(esi); /* 0x00718FED: movzx ecx, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00718FF0: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x3)); /* 0x00718FF2: movzx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00718FF6: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00718FF8: mov byte ptr [ebp - 2], cl */
    ecx = (uint32_t)MEM8(esi + 0x1); /* 0x00718FFB: movzx ecx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00718FFF: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719001: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x00719003: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719005: mov byte ptr [ebp - 3], cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x00719008: mov ecx, dword ptr [ebp - 8] */
L_0071900B:
    eax = edi + (-0x2); /* 0x0071900B: lea eax, [edi - 2] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x0071900E: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00718FA6; /* 0x00719011: jb 0x718fa6 */
L_00719013:
    ebx = MEM32(ebp + 0x8); /* 0x00719013: mov ebx, dword ptr [ebp + 8] */
L_00719016:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00719016: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(ebx + 0x50); /* 0x00719019: mov eax, dword ptr [ebx + 0x50] */
    MEM32(ebx + 0x18) = ecx; /* 0x0071901C: mov dword ptr [ebx + 0x18], ecx */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x0071901F: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00719033; /* 0x00719024: je 0x719033 */
L_00719026:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00719026: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00719029: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x0071902D: push ebx */
    RECOMP_ICALL(eax); /* 0x0071902E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719030: add esp, 8 */
    _flag_k = FK_ADD;
L_00719033:
    edi = POP32_VAL(esp); /* 0x00719033: pop edi */
    esi = POP32_VAL(esp); /* 0x00719034: pop esi */
    ebx = POP32_VAL(esp); /* 0x00719035: pop ebx */
    esp = ebp; /* 0x00719036: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00719038: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719039: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719040u);

L_00719040:
    PUSH32(esp, ebp); /* 0x00719040: push ebp */
    ebp = esp; /* 0x00719041: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00719043: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719046: push ebx */
    PUSH32(esp, esi); /* 0x00719047: push esi */
    PUSH32(esp, edi); /* 0x00719048: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00719049: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0071904C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x18); /* 0x0071904E: mov ecx, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x00719051: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x00719054: mov dword ptr [ebp - 0x10], ebx */
    eax = ecx + (-0x60); /* 0x00719057: lea eax, [ecx - 0x60] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0071905A: mov dword ptr [ebp - 0x14], eax */
    eax = 0x2AAAAAABu; /* 0x0071905D: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00719062: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x00719064: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00719066: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00719066: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00719069: add eax, edx */
    _flag_k = FK_ADD;
    edx = ebx + (-0x6); /* 0x0071906B: lea edx, [ebx - 6] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFAu; /* 0x0071906E: add ebx, -6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00719071: add ebx, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00719073: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00719077: cvtdq2pd xmm0, xmm0 */
    SET_LO8(ecx, MEM8(ebx + 0x5)); /* 0x0071907B: mov cl, byte ptr [ebx + 5] */
    SET_HI8(ecx, MEM8(ebx + 0x4)); /* 0x0071907E: mov ch, byte ptr [ebx + 4] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x00719081: mov byte ptr [ebp - 5], cl */
    MEM8(ebp + (-0x6)) = (uint8_t)(HI8(ecx)); /* 0x00719084: mov byte ptr [ebp - 6], ch */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00719087: mulsd xmm0, qword ptr [edi + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0071908C: cvttsd2si eax, xmm0 */
    eax = eax + eax * 2; /* 0x00719090: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00719093: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x00719095: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x00719097: mov dword ptr [ebp - 0xc], eax */
    SET_LO8(eax, MEM8(ebx + 0x3)); /* 0x0071909A: mov al, byte ptr [ebx + 3] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x0071909D: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(ebx + 0x2)); /* 0x007190A0: mov al, byte ptr [ebx + 2] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x007190A3: mov byte ptr [ebp - 2], al */
    SET_LO8(eax, MEM8(ebx + 0x1)); /* 0x007190A6: mov al, byte ptr [ebx + 1] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(eax)); /* 0x007190A9: mov byte ptr [ebp - 3], al */
    SET_LO8(eax, MEM8(ebx)); /* 0x007190AC: mov al, byte ptr [ebx] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x007190AE: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0xC)); /* 0x007190B1: mov eax, dword ptr [ebp - 0xc] */
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x007190B4: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0071915D; /* 0x007190B7: jb 0x71915d */
L_007190BD:
    edi = eax; /* 0x007190BD: mov edi, eax */
    /* nop */ /* 0x007190BF: nop  */
L_007190C0:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x007190C0: mov al, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x14)); /* 0x007190C3: add esi, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    MEM8(edx + 0x3) = (uint8_t)(LO8(eax)); /* 0x007190C6: mov byte ptr [edx + 3], al */
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x007190C9: mov al, byte ptr [ebp - 2] */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x007190CC: mov byte ptr [edx + 2], al */
    SET_LO8(eax, MEM8(ebp + (-0x3))); /* 0x007190CF: mov al, byte ptr [ebp - 3] */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x007190D2: mov byte ptr [edx + 1], al */
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x007190D5: mov al, byte ptr [ebp - 4] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x007190D8: mov byte ptr [edx], al */
    eax = esi + esi; /* 0x007190DA: lea eax, [esi + esi] */
    MEM8(edx + 0x5) = (uint8_t)(LO8(ecx)); /* 0x007190DD: mov byte ptr [edx + 5], cl */
    MEM8(edx + 0x4) = (uint8_t)(HI8(ecx)); /* 0x007190E0: mov byte ptr [edx + 4], ch */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 6; /* 0x007190E3: sub edx, 6 */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x007190E6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071914E; /* 0x007190E8: jl 0x71914e */
L_007190EA:
    ecx = (uint32_t)MEM8(ebx + (-0x1)); /* 0x007190EA: movzx ecx, byte ptr [ebx - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 6; /* 0x007190EE: sub ebx, 6 */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ebp + (-0x5)); /* 0x007190F1: movzx eax, byte ptr [ebp - 5] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x007190F5: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007190F7: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = (uint32_t)MEM8(ebx + 0x4); /* 0x007190F9: movzx ecx, byte ptr [ebx + 4] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(eax)); /* 0x007190FD: mov byte ptr [ebp - 5], al */
    eax = (uint32_t)MEM8(ebp + (-0x6)); /* 0x00719100: movzx eax, byte ptr [ebp - 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00719104: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(ebx + 0x3); /* 0x00719106: movzx ecx, byte ptr [ebx + 3] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071910A: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(eax)); /* 0x0071910C: mov byte ptr [ebp - 6], al */
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x0071910F: movzx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719113: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x00719115: movzx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719119: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x0071911B: mov byte ptr [ebp - 1], cl */
    ecx = (uint32_t)MEM8(ebx + 0x2); /* 0x0071911E: movzx ecx, byte ptr [ebx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719122: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x3)); /* 0x00719124: movzx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719128: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x0071912A: mov byte ptr [ebp - 2], cl */
    ecx = (uint32_t)MEM8(ebx + 0x1); /* 0x0071912D: movzx ecx, byte ptr [ebx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719131: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x00719133: movzx eax, byte ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719137: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719139: mov byte ptr [ebp - 3], cl */
    ecx = (uint32_t)MEM8(ebx); /* 0x0071913C: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071913F: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719141: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00719143: sub esi, edi */
    _flag_k = FK_CMP;
    SET_HI8(ecx, MEM8(ebp + (-0x6))); /* 0x00719145: mov ch, byte ptr [ebp - 6] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719148: mov byte ptr [ebp - 4], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x5))); /* 0x0071914B: mov cl, byte ptr [ebp - 5] */
L_0071914E:
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x0071914E: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_007190C0; /* 0x00719151: jae 0x7190c0 */
L_00719157:
    edi = MEM32(ebp + 0x8); /* 0x00719157: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x0071915A: mov eax, dword ptr [ebp - 0xc] */
L_0071915D:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071915D: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = eax; /* 0x00719160: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00719163: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00719166: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071917A; /* 0x0071916B: je 0x71917a */
L_0071916D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071916D: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00719170: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x00719174: push edi */
    RECOMP_ICALL(eax); /* 0x00719175: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719177: add esp, 8 */
    _flag_k = FK_ADD;
L_0071917A:
    edi = POP32_VAL(esp); /* 0x0071917A: pop edi */
    esi = POP32_VAL(esp); /* 0x0071917B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071917C: pop ebx */
    esp = ebp; /* 0x0071917D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071917F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719180: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719190u);

L_00719190:
    PUSH32(esp, ebp); /* 0x00719190: push ebp */
    ebp = esp; /* 0x00719191: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00719193: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719196: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00719197: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0071919A: push esi */
    PUSH32(esp, edi); /* 0x0071919B: push edi */
    ecx = MEM32(ebx + 0x18); /* 0x0071919C: mov ecx, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x0071919F: mov edi, dword ptr [ebx + 0x10] */
    esi = edi + 0x2; /* 0x007191A2: lea esi, [edi + 2] */
    eax = ecx + (-0x60); /* 0x007191A5: lea eax, [ecx - 0x60] */
    MEM32(ebp + (-0x10)) = eax; /* 0x007191A8: mov dword ptr [ebp - 0x10], eax */
    eax = 0x2AAAAAABu; /* 0x007191AB: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x007191B0: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x007191B2: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x007191B4: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x007191B4: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007191B7: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007191B9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007191BB: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x007191BF: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x007191C3: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x007191C8: cvttsd2si eax, xmm0 */
    ecx = eax + eax * 2; /* 0x007191CC: lea ecx, [eax + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x007191CF: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x007191D1: mov dword ptr [ebp - 0xc], ecx */
    eax = edi + ecx; /* 0x007191D4: lea eax, [edi + ecx] */
    SET_LO8(ecx, MEM8(edi)); /* 0x007191D7: mov cl, byte ptr [edi] */
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x007191D9: mov byte ptr [ebp - 6], cl */
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x007191DC: mov cl, byte ptr [edi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x007191DF: mov byte ptr [ebp - 1], cl */
    SET_LO8(ecx, MEM8(esi)); /* 0x007191E2: mov cl, byte ptr [esi] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x007191E4: mov byte ptr [ebp - 2], cl */
    SET_LO8(ecx, MEM8(edi + 0x3)); /* 0x007191E7: mov cl, byte ptr [edi + 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x007191EA: mov byte ptr [ebp - 3], cl */
    SET_LO8(ecx, MEM8(edi + 0x4)); /* 0x007191ED: mov cl, byte ptr [edi + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x007191F0: mov byte ptr [ebp - 4], cl */
    SET_LO8(ecx, MEM8(edi + 0x5)); /* 0x007191F3: mov cl, byte ptr [edi + 5] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x007191F6: mov byte ptr [ebp - 5], cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x007191F9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x007191FC: mov dword ptr [ebp - 0x14], eax */
    /* cmp edi, eax */ /* 0x007191FF: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_007192B2; /* 0x00719201: jae 0x7192b2 */
L_00719207:
    ebx = MEM32(ebp + (-0x10)); /* 0x00719207: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x0071920A: add edi, 2 */
    _flag_k = FK_ADD;
    ecx = ecx; /* 0x0071920D: lea ecx, [ecx] */
L_00719210:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00719210: add edx, ecx */
    _flag_k = FK_ADD;
    esi = esi + 0x6; /* 0x00719212: lea esi, [esi + 6] */
    eax = edx + edx; /* 0x00719215: lea eax, [edx + edx] */
    /* cmp eax, ebx */ /* 0x00719218: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_007192A3; /* 0x0071921A: jl 0x7192a3 */
L_00719220:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x00719220: mov cl, byte ptr [ebp - 1] */
    SET_LO8(eax, MEM8(ebp + (-0x6))); /* 0x00719223: mov al, byte ptr [ebp - 6] */
    MEM8(edi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719226: mov byte ptr [edi - 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x2))); /* 0x00719229: mov cl, byte ptr [ebp - 2] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x0071922C: mov byte ptr [edi], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x3))); /* 0x0071922E: mov cl, byte ptr [ebp - 3] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00719231: mov byte ptr [edi + 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x4))); /* 0x00719234: mov cl, byte ptr [ebp - 4] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(ecx)); /* 0x00719237: mov byte ptr [edi + 2], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x5))); /* 0x0071923A: mov cl, byte ptr [ebp - 5] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(ecx)); /* 0x0071923D: mov byte ptr [edi + 3], cl */
    MEM8(edi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x00719240: mov byte ptr [edi - 2], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 6; /* 0x00719243: add edi, 6 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(esi + (-0x2)); /* 0x00719246: movzx ecx, byte ptr [esi - 2] */
    eax = (uint32_t)LO8(eax); /* 0x0071924A: movzx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071924D: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x0071924F: movzx eax, byte ptr [ebp - 1] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719253: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x00719255: mov byte ptr [ebp - 6], cl */
    ecx = (uint32_t)MEM8(esi + (-0x1)); /* 0x00719258: movzx ecx, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071925C: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x0071925E: movzx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719262: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719264: mov byte ptr [ebp - 1], cl */
    ecx = (uint32_t)MEM8(esi); /* 0x00719267: movzx ecx, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071926A: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x3)); /* 0x0071926C: movzx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719270: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719272: mov byte ptr [ebp - 2], cl */
    ecx = (uint32_t)MEM8(esi + 0x1); /* 0x00719275: movzx ecx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719279: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x0071927B: movzx eax, byte ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071927F: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719281: mov byte ptr [ebp - 3], cl */
    ecx = (uint32_t)MEM8(esi + 0x2); /* 0x00719284: movzx ecx, byte ptr [esi + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719288: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x5)); /* 0x0071928A: movzx eax, byte ptr [ebp - 5] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071928E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719290: mov byte ptr [ebp - 4], cl */
    ecx = (uint32_t)MEM8(esi + 0x3); /* 0x00719293: movzx ecx, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719297: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719299: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x0071929B: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x0071929D: mov byte ptr [ebp - 5], cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x007192A0: mov ecx, dword ptr [ebp - 0xc] */
L_007192A3:
    eax = edi + (-0x2); /* 0x007192A3: lea eax, [edi - 2] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x007192A6: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00719210; /* 0x007192A9: jb 0x719210 */
L_007192AF:
    ebx = MEM32(ebp + 0x8); /* 0x007192AF: mov ebx, dword ptr [ebp + 8] */
L_007192B2:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x007192B2: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(ebx + 0x50); /* 0x007192B5: mov eax, dword ptr [ebx + 0x50] */
    MEM32(ebx + 0x18) = ecx; /* 0x007192B8: mov dword ptr [ebx + 0x18], ecx */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x007192BB: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007192CF; /* 0x007192C0: je 0x7192cf */
L_007192C2:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x007192C2: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x007192C5: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x007192C9: push ebx */
    RECOMP_ICALL(eax); /* 0x007192CA: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007192CC: add esp, 8 */
    _flag_k = FK_ADD;
L_007192CF:
    edi = POP32_VAL(esp); /* 0x007192CF: pop edi */
    esi = POP32_VAL(esp); /* 0x007192D0: pop esi */
    ebx = POP32_VAL(esp); /* 0x007192D1: pop ebx */
    esp = ebp; /* 0x007192D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007192D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007192D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_007192E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007192E0u);

L_007192E0:
    PUSH32(esp, ebp); /* 0x007192E0: push ebp */
    ebp = esp; /* 0x007192E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x007192E3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x007192E6: push ebx */
    PUSH32(esp, esi); /* 0x007192E7: push esi */
    PUSH32(esp, edi); /* 0x007192E8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007192E9: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x007192EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x18); /* 0x007192EE: mov ecx, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x007192F1: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x007192F4: mov dword ptr [ebp - 0x10], ebx */
    eax = ecx + (-0x80); /* 0x007192F7: lea eax, [ecx - 0x80] */
    MEM32(ebp + (-0x14)) = eax; /* 0x007192FA: mov dword ptr [ebp - 0x14], eax */
    eax = ecx; /* 0x007192FD: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007192FF: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x00719300: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00719303: add eax, edx */
    _flag_k = FK_ADD;
    edx = ebx + (-0x8); /* 0x00719305: lea edx, [ebx - 8] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x00719308: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFF8u; /* 0x0071930B: add ebx, -8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x0071930E: add ebx, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00719310: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00719314: cvtdq2pd xmm0, xmm0 */
    SET_LO8(ecx, MEM8(ebx + 0x7)); /* 0x00719318: mov cl, byte ptr [ebx + 7] */
    SET_HI8(ecx, MEM8(ebx + 0x6)); /* 0x0071931B: mov ch, byte ptr [ebx + 6] */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x0071931E: mov byte ptr [ebp - 7], cl */
    MEM8(ebp + (-0x8)) = (uint8_t)(HI8(ecx)); /* 0x00719321: mov byte ptr [ebp - 8], ch */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00719324: mulsd xmm0, qword ptr [edi + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00719329: cvttsd2si eax, xmm0 */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x0071932D: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x0071932D: shl eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x00719330: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x00719332: mov dword ptr [ebp - 0xc], eax */
    SET_LO8(eax, MEM8(ebx + 0x5)); /* 0x00719335: mov al, byte ptr [ebx + 5] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00719338: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(ebx + 0x4)); /* 0x0071933B: mov al, byte ptr [ebx + 4] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x0071933E: mov byte ptr [ebp - 2], al */
    SET_LO8(eax, MEM8(ebx + 0x3)); /* 0x00719341: mov al, byte ptr [ebx + 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(eax)); /* 0x00719344: mov byte ptr [ebp - 3], al */
    SET_LO8(eax, MEM8(ebx + 0x2)); /* 0x00719347: mov al, byte ptr [ebx + 2] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x0071934A: mov byte ptr [ebp - 4], al */
    SET_LO8(eax, MEM8(ebx + 0x1)); /* 0x0071934D: mov al, byte ptr [ebx + 1] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(eax)); /* 0x00719350: mov byte ptr [ebp - 5], al */
    SET_LO8(eax, MEM8(ebx)); /* 0x00719353: mov al, byte ptr [ebx] */
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(eax)); /* 0x00719355: mov byte ptr [ebp - 6], al */
    eax = MEM32(ebp + (-0xC)); /* 0x00719358: mov eax, dword ptr [ebp - 0xc] */
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x0071935B: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00719431; /* 0x0071935E: jb 0x719431 */
L_00719364:
    edi = eax; /* 0x00719364: mov edi, eax */
L_00719366:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x00719366: mov al, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x14)); /* 0x00719369: add esi, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    MEM8(edx + 0x5) = (uint8_t)(LO8(eax)); /* 0x0071936C: mov byte ptr [edx + 5], al */
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x0071936F: mov al, byte ptr [ebp - 2] */
    MEM8(edx + 0x4) = (uint8_t)(LO8(eax)); /* 0x00719372: mov byte ptr [edx + 4], al */
    SET_LO8(eax, MEM8(ebp + (-0x3))); /* 0x00719375: mov al, byte ptr [ebp - 3] */
    MEM8(edx + 0x3) = (uint8_t)(LO8(eax)); /* 0x00719378: mov byte ptr [edx + 3], al */
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x0071937B: mov al, byte ptr [ebp - 4] */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x0071937E: mov byte ptr [edx + 2], al */
    SET_LO8(eax, MEM8(ebp + (-0x5))); /* 0x00719381: mov al, byte ptr [ebp - 5] */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x00719384: mov byte ptr [edx + 1], al */
    SET_LO8(eax, MEM8(ebp + (-0x6))); /* 0x00719387: mov al, byte ptr [ebp - 6] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x0071938A: mov byte ptr [edx], al */
    eax = esi + esi; /* 0x0071938C: lea eax, [esi + esi] */
    MEM8(edx + 0x7) = (uint8_t)(LO8(ecx)); /* 0x0071938F: mov byte ptr [edx + 7], cl */
    MEM8(edx + 0x6) = (uint8_t)(HI8(ecx)); /* 0x00719392: mov byte ptr [edx + 6], ch */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x00719395: sub edx, 8 */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x00719398: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719422; /* 0x0071939A: jl 0x719422 */
L_007193A0:
    ecx = (uint32_t)MEM8(ebx + (-0x1)); /* 0x007193A0: movzx ecx, byte ptr [ebx - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 8; /* 0x007193A4: sub ebx, 8 */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ebp + (-0x7)); /* 0x007193A7: movzx eax, byte ptr [ebp - 7] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x007193AB: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007193AD: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = (uint32_t)MEM8(ebx + 0x6); /* 0x007193AF: movzx ecx, byte ptr [ebx + 6] */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(eax)); /* 0x007193B3: mov byte ptr [ebp - 7], al */
    eax = (uint32_t)MEM8(ebp + (-0x8)); /* 0x007193B6: movzx eax, byte ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x007193BA: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(ebx + 0x5); /* 0x007193BC: movzx ecx, byte ptr [ebx + 5] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007193C0: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(eax)); /* 0x007193C2: mov byte ptr [ebp - 8], al */
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x007193C5: movzx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x007193C9: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x007193CB: movzx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x007193CF: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x007193D1: mov byte ptr [ebp - 1], cl */
    ecx = (uint32_t)MEM8(ebx + 0x4); /* 0x007193D4: movzx ecx, byte ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x007193D8: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x3)); /* 0x007193DA: movzx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x007193DE: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x007193E0: mov byte ptr [ebp - 2], cl */
    ecx = (uint32_t)MEM8(ebx + 0x3); /* 0x007193E3: movzx ecx, byte ptr [ebx + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x007193E7: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x007193E9: movzx eax, byte ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x007193ED: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x007193EF: mov byte ptr [ebp - 3], cl */
    ecx = (uint32_t)MEM8(ebx + 0x2); /* 0x007193F2: movzx ecx, byte ptr [ebx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x007193F6: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x5)); /* 0x007193F8: movzx eax, byte ptr [ebp - 5] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x007193FC: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x007193FE: mov byte ptr [ebp - 4], cl */
    ecx = (uint32_t)MEM8(ebx + 0x1); /* 0x00719401: movzx ecx, byte ptr [ebx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719405: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x6)); /* 0x00719407: movzx eax, byte ptr [ebp - 6] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071940B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x0071940D: mov byte ptr [ebp - 5], cl */
    ecx = (uint32_t)MEM8(ebx); /* 0x00719410: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719413: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719415: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00719417: sub esi, edi */
    _flag_k = FK_CMP;
    SET_HI8(ecx, MEM8(ebp + (-0x8))); /* 0x00719419: mov ch, byte ptr [ebp - 8] */
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x0071941C: mov byte ptr [ebp - 6], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x7))); /* 0x0071941F: mov cl, byte ptr [ebp - 7] */
L_00719422:
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x00719422: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719366; /* 0x00719425: jae 0x719366 */
L_0071942B:
    edi = MEM32(ebp + 0x8); /* 0x0071942B: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x0071942E: mov eax, dword ptr [ebp - 0xc] */
L_00719431:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00719431: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = eax; /* 0x00719434: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00719437: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071943A: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071944E; /* 0x0071943F: je 0x71944e */
L_00719441:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00719441: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00719444: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x00719448: push edi */
    RECOMP_ICALL(eax); /* 0x00719449: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071944B: add esp, 8 */
    _flag_k = FK_ADD;
L_0071944E:
    edi = POP32_VAL(esp); /* 0x0071944E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071944F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00719450: pop ebx */
    esp = ebp; /* 0x00719451: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00719453: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719454: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719460u);

L_00719460:
    PUSH32(esp, ebp); /* 0x00719460: push ebp */
    ebp = esp; /* 0x00719461: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00719463: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719466: push ebx */
    PUSH32(esp, esi); /* 0x00719467: push esi */
    PUSH32(esp, edi); /* 0x00719468: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00719469: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0071946C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x18); /* 0x0071946E: mov eax, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x00719471: mov ebx, dword ptr [edi + 0x10] */
    ecx = eax + (-0x80); /* 0x00719474: lea ecx, [eax - 0x80] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00719477: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x00719478: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x0071947B: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071947E: add eax, edx */
    _flag_k = FK_ADD;
    SET_LO8(edx, MEM8(ebx)); /* 0x00719480: mov dl, byte ptr [ebx] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x00719482: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(edx)); /* 0x00719485: mov byte ptr [ebp - 8], dl */
    SET_LO8(edx, MEM8(ebx + 0x1)); /* 0x00719488: mov dl, byte ptr [ebx + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x0071948B: mov byte ptr [ebp - 1], dl */
    edx = ebx + 0x2; /* 0x0071948E: lea edx, [ebx + 2] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00719491: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00719495: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00719499: mulsd xmm0, qword ptr [edi + 8] */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0071949E: cvttsd2si ecx, xmm0 */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x007194A2: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x007194A2: shl ecx, 3 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x007194A5: mov dword ptr [ebp - 0xc], ecx */
    eax = ebx + ecx; /* 0x007194A8: lea eax, [ebx + ecx] */
    SET_LO8(ecx, MEM8(edx)); /* 0x007194AB: mov cl, byte ptr [edx] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x007194AD: mov byte ptr [ebp - 2], cl */
    SET_LO8(ecx, MEM8(ebx + 0x3)); /* 0x007194B0: mov cl, byte ptr [ebx + 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x007194B3: mov byte ptr [ebp - 3], cl */
    SET_LO8(ecx, MEM8(ebx + 0x4)); /* 0x007194B6: mov cl, byte ptr [ebx + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x007194B9: mov byte ptr [ebp - 4], cl */
    SET_LO8(ecx, MEM8(ebx + 0x5)); /* 0x007194BC: mov cl, byte ptr [ebx + 5] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x007194BF: mov byte ptr [ebp - 5], cl */
    SET_LO8(ecx, MEM8(ebx + 0x6)); /* 0x007194C2: mov cl, byte ptr [ebx + 6] */
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x007194C5: mov byte ptr [ebp - 6], cl */
    SET_LO8(ecx, MEM8(ebx + 0x7)); /* 0x007194C8: mov cl, byte ptr [ebx + 7] */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x007194CB: mov byte ptr [ebp - 7], cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x007194CE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x007194D1: mov dword ptr [ebp - 0x14], eax */
    /* cmp ebx, eax */ /* 0x007194D4: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_007195AE; /* 0x007194D6: jae 0x7195ae */
L_007194DC:
    edi = MEM32(ebp + (-0x10)); /* 0x007194DC: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x007194DF: add ebx, 2 */
    _flag_k = FK_ADD;
L_007194E2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x007194E2: add esi, ecx */
    _flag_k = FK_ADD;
    edx = edx + 0x8; /* 0x007194E4: lea edx, [edx + 8] */
    eax = esi + esi; /* 0x007194E7: lea eax, [esi + esi] */
    /* cmp eax, edi */ /* 0x007194EA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071959F; /* 0x007194EC: jl 0x71959f */
L_007194F2:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x007194F2: mov cl, byte ptr [ebp - 1] */
    MEM8(ebx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x007194F5: mov byte ptr [ebx - 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x2))); /* 0x007194F8: mov cl, byte ptr [ebp - 2] */
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x007194FB: mov byte ptr [ebx], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x3))); /* 0x007194FD: mov cl, byte ptr [ebp - 3] */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00719500: mov byte ptr [ebx + 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x4))); /* 0x00719503: mov cl, byte ptr [ebp - 4] */
    MEM8(ebx + 0x2) = (uint8_t)(LO8(ecx)); /* 0x00719506: mov byte ptr [ebx + 2], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x5))); /* 0x00719509: mov cl, byte ptr [ebp - 5] */
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x0071950C: mov al, byte ptr [ebp - 8] */
    MEM8(ebx + 0x3) = (uint8_t)(LO8(ecx)); /* 0x0071950F: mov byte ptr [ebx + 3], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x6))); /* 0x00719512: mov cl, byte ptr [ebp - 6] */
    MEM8(ebx + 0x4) = (uint8_t)(LO8(ecx)); /* 0x00719515: mov byte ptr [ebx + 4], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x7))); /* 0x00719518: mov cl, byte ptr [ebp - 7] */
    MEM8(ebx + 0x5) = (uint8_t)(LO8(ecx)); /* 0x0071951B: mov byte ptr [ebx + 5], cl */
    MEM8(ebx + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x0071951E: mov byte ptr [ebx - 2], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x00719521: add ebx, 8 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(edx + (-0x2)); /* 0x00719524: movzx ecx, byte ptr [edx - 2] */
    eax = (uint32_t)LO8(eax); /* 0x00719528: movzx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071952B: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x0071952D: movzx eax, byte ptr [ebp - 1] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719531: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(ecx)); /* 0x00719533: mov byte ptr [ebp - 8], cl */
    ecx = (uint32_t)MEM8(edx + (-0x1)); /* 0x00719536: movzx ecx, byte ptr [edx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071953A: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x0071953C: movzx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719540: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719542: mov byte ptr [ebp - 1], cl */
    ecx = (uint32_t)MEM8(edx); /* 0x00719545: movzx ecx, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719548: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x3)); /* 0x0071954A: movzx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071954E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719550: mov byte ptr [ebp - 2], cl */
    ecx = (uint32_t)MEM8(edx + 0x1); /* 0x00719553: movzx ecx, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719557: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x00719559: movzx eax, byte ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071955D: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x0071955F: mov byte ptr [ebp - 3], cl */
    ecx = (uint32_t)MEM8(edx + 0x2); /* 0x00719562: movzx ecx, byte ptr [edx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719566: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x5)); /* 0x00719568: movzx eax, byte ptr [ebp - 5] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071956C: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x0071956E: mov byte ptr [ebp - 4], cl */
    ecx = (uint32_t)MEM8(edx + 0x3); /* 0x00719571: movzx ecx, byte ptr [edx + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719575: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x6)); /* 0x00719577: movzx eax, byte ptr [ebp - 6] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071957B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x0071957D: mov byte ptr [ebp - 5], cl */
    ecx = (uint32_t)MEM8(edx + 0x4); /* 0x00719580: movzx ecx, byte ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719584: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x7)); /* 0x00719586: movzx eax, byte ptr [ebp - 7] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071958A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x0071958C: mov byte ptr [ebp - 6], cl */
    ecx = (uint32_t)MEM8(edx + 0x5); /* 0x0071958F: movzx ecx, byte ptr [edx + 5] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719593: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719595: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00719597: sub esi, edi */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x00719599: mov byte ptr [ebp - 7], cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x0071959C: mov ecx, dword ptr [ebp - 0xc] */
L_0071959F:
    eax = ebx + (-0x2); /* 0x0071959F: lea eax, [ebx - 2] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x007195A2: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_007194E2; /* 0x007195A5: jb 0x7194e2 */
L_007195AB:
    edi = MEM32(ebp + 0x8); /* 0x007195AB: mov edi, dword ptr [ebp + 8] */
L_007195AE:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007195AE: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x007195B1: mov eax, dword ptr [edi + 0x50] */
    MEM32(edi + 0x18) = ecx; /* 0x007195B4: mov dword ptr [edi + 0x18], ecx */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007195B7: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007195CB; /* 0x007195BC: je 0x7195cb */
L_007195BE:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x007195BE: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007195C1: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x007195C5: push edi */
    RECOMP_ICALL(eax); /* 0x007195C6: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007195C8: add esp, 8 */
    _flag_k = FK_ADD;
L_007195CB:
    edi = POP32_VAL(esp); /* 0x007195CB: pop edi */
    esi = POP32_VAL(esp); /* 0x007195CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x007195CD: pop ebx */
    esp = ebp; /* 0x007195CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007195D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007195D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007195E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007195E0u);

L_007195E0:
    PUSH32(esp, ebp); /* 0x007195E0: push ebp */
    ebp = esp; /* 0x007195E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x007195E3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x007195E6: push ebx */
    PUSH32(esp, esi); /* 0x007195E7: push esi */
    PUSH32(esp, edi); /* 0x007195E8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007195E9: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007195EC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x18); /* 0x007195EE: mov eax, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x007195F1: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x007195F4: mov dword ptr [ebp - 4], ebx */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007195F7: movd xmm0, eax */
    ecx = eax + (-0x10); /* 0x007195FB: lea ecx, [eax - 0x10] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x007195FE: cvtdq2pd xmm0, xmm0 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x00719602: mov dword ptr [ebp - 0xc], ecx */
    esi = ebx + (-0x1); /* 0x00719605: lea esi, [ebx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00719608: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x00719609: add eax, ebx */
    _flag_k = FK_ADD;
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071960B: mulsd xmm0, qword ptr [edi + 8] */
    SET_LO8(ebx, MEM8(eax)); /* 0x00719610: mov bl, byte ptr [eax] */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00719612: cvttsd2si ecx, xmm0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x00719616: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x00719618: mov dword ptr [ebp - 0x10], ecx */
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x0071961B: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00719648; /* 0x0071961E: jb 0x719648 */
L_00719620:
    edi = eax; /* 0x00719620: mov edi, eax */
L_00719622:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0xC)); /* 0x00719622: add edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x00719625: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00719627: dec esi */
    _flag_k = FK_DEC;
    eax = edx + edx; /* 0x00719628: lea eax, [edx + edx] */
    /* cmp eax, ecx */ /* 0x0071962B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719640; /* 0x0071962D: jl 0x719640 */
L_0071962F:
    ecx = (int32_t)(int8_t)MEM8(edi + (-0x1)); /* 0x0071962F: movsx ecx, byte ptr [edi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00719633: dec edi */
    _flag_k = FK_DEC;
    ebx = (int32_t)(int8_t)LO8(ebx); /* 0x00719634: movsx ebx, bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00719637: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x00719639: mov ecx, dword ptr [ebp - 0x10] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x0071963C: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x0071963E: sub edx, ecx */
    _flag_k = FK_CMP;
L_00719640:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x00719640: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719622; /* 0x00719643: jae 0x719622 */
L_00719645:
    edi = MEM32(ebp + 0x8); /* 0x00719645: mov edi, dword ptr [ebp + 8] */
L_00719648:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00719648: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x0071964B: mov eax, dword ptr [edi + 0x50] */
    MEM32(edi + 0x18) = ecx; /* 0x0071964E: mov dword ptr [edi + 0x18], ecx */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00719651: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00719665; /* 0x00719656: je 0x719665 */
L_00719658:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00719658: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x0071965B: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x0071965F: push edi */
    RECOMP_ICALL(eax); /* 0x00719660: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719662: add esp, 8 */
    _flag_k = FK_ADD;
L_00719665:
    edi = POP32_VAL(esp); /* 0x00719665: pop edi */
    esi = POP32_VAL(esp); /* 0x00719666: pop esi */
    ebx = POP32_VAL(esp); /* 0x00719667: pop ebx */
    esp = ebp; /* 0x00719668: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071966A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071966B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719670u);

L_00719670:
    PUSH32(esp, ebp); /* 0x00719670: push ebp */
    ebp = esp; /* 0x00719671: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00719673: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719676: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00719677: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071967A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x0071967C: push esi */
    PUSH32(esp, edi); /* 0x0071967D: push edi */
    eax = MEM32(ebx + 0x18); /* 0x0071967E: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x00719681: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x00719684: mov edi, esi */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00719686: movd xmm0, eax */
    ecx = eax + (-0x10); /* 0x0071968A: lea ecx, [eax - 0x10] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0071968D: cvtdq2pd xmm0, xmm0 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00719691: mov dword ptr [ebp - 0x10], ecx */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00719694: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00719699: cvttsd2si eax, xmm0 */
    MEM32(ebp + (-0xC)) = eax; /* 0x0071969D: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x007196A0: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x007196A2: mov dword ptr [ebp - 8], eax */
    SET_LO8(eax, MEM8(edi)); /* 0x007196A5: mov al, byte ptr [edi] */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x007196A7: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_007196D7; /* 0x007196AA: jae 0x7196d7 */
L_007196AC:
    SET_LO8(ebx, LO8(eax)); /* 0x007196AC: mov bl, al */
    edi = edi; /* 0x007196AE: mov edi, edi */
L_007196B0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0xC)); /* 0x007196B0: add edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    edi = edi + 0x1; /* 0x007196B3: lea edi, [edi + 1] */
    eax = edx + edx; /* 0x007196B6: lea eax, [edx + edx] */
    /* cmp eax, ecx */ /* 0x007196B9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_007196CF; /* 0x007196BB: jl 0x7196cf */
L_007196BD:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x007196BD: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x007196BF: inc esi */
    _flag_k = FK_INC;
    ecx = (int32_t)(int8_t)MEM8(edi); /* 0x007196C0: movsx ecx, byte ptr [edi] */
    ebx = (int32_t)(int8_t)LO8(ebx); /* 0x007196C3: movsx ebx, bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x007196C6: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x007196C8: mov ecx, dword ptr [ebp - 0x10] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x007196CB: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x007196CD: sub edx, ecx */
    _flag_k = FK_CMP;
L_007196CF:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x007196CF: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_007196B0; /* 0x007196D2: jb 0x7196b0 */
L_007196D4:
    ebx = MEM32(ebp + 0x8); /* 0x007196D4: mov ebx, dword ptr [ebp + 8] */
L_007196D7:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x007196D7: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x007196DA: cvttsd2si eax, xmm0 */
    MEM32(ebx + 0x18) = eax; /* 0x007196DE: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x007196E1: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x007196E4: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007196F8; /* 0x007196E9: je 0x7196f8 */
L_007196EB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x007196EB: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x007196EE: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x007196F2: push ebx */
    RECOMP_ICALL(eax); /* 0x007196F3: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007196F5: add esp, 8 */
    _flag_k = FK_ADD;
L_007196F8:
    edi = POP32_VAL(esp); /* 0x007196F8: pop edi */
    esi = POP32_VAL(esp); /* 0x007196F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x007196FA: pop ebx */
    esp = ebp; /* 0x007196FB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007196FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007196FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719700u);

L_00719700:
    PUSH32(esp, ebp); /* 0x00719700: push ebp */
    ebp = esp; /* 0x00719701: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00719703: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719706: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00719707: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0071970A: push esi */
    PUSH32(esp, edi); /* 0x0071970B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0071970C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x18); /* 0x0071970E: mov ecx, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x00719711: mov edi, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x8)) = edi; /* 0x00719714: mov dword ptr [ebp - 8], edi */
    eax = ecx + (-0x20); /* 0x00719717: lea eax, [ecx - 0x20] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0071971A: mov dword ptr [ebp - 0x10], eax */
    eax = ecx; /* 0x0071971D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071971F: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00719720: sub eax, edx */
    _flag_k = FK_CMP;
    edx = edi + (-0x2); /* 0x00719722: lea edx, [edi - 2] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00719725: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x00719727: add edi, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x0071972A: add edi, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071972C: movd xmm0, eax */
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x00719730: mov cl, byte ptr [edi + 1] */
    SET_HI8(ecx, MEM8(edi)); /* 0x00719733: mov ch, byte ptr [edi] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00719735: cvtdq2pd xmm0, xmm0 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719739: mov byte ptr [ebp - 1], cl */
    MEM8(ebp + (-0x2)) = (uint8_t)(HI8(ecx)); /* 0x0071973C: mov byte ptr [ebp - 2], ch */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071973F: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00719744: cvttsd2si eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00719748: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0071974A: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x0071974C: mov dword ptr [ebp - 0xc], eax */
    /* cmp edx, MEM32(ebp + (-0x8)) */ /* 0x0071974F: cmp edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0071979A; /* 0x00719752: jb 0x71979a */
L_00719754:
    ebx = eax; /* 0x00719754: mov ebx, eax */
L_00719756:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x00719756: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    MEM8(edx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00719759: mov byte ptr [edx + 1], cl */
    MEM8(edx) = (uint8_t)(HI8(ecx)); /* 0x0071975C: mov byte ptr [edx], ch */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 2; /* 0x0071975E: sub edx, 2 */
    _flag_k = FK_CMP;
    eax = esi + esi; /* 0x00719761: lea eax, [esi + esi] */
    /* cmp eax, ebx */ /* 0x00719764: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071978F; /* 0x00719766: jl 0x71978f */
L_00719768:
    ecx = (int32_t)(int8_t)MEM8(edi + (-0x1)); /* 0x00719768: movsx ecx, byte ptr [edi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x0071976C: sub edi, 2 */
    _flag_k = FK_CMP;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x0071976F: movsx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00719773: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00719775: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = (int32_t)(int8_t)MEM8(edi); /* 0x00719777: movsx ecx, byte ptr [edi] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x0071977A: mov byte ptr [ebp - 1], al */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x0071977D: movsx eax, byte ptr [ebp - 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719781: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719783: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00719785: sub esi, ebx */
    _flag_k = FK_CMP;
    SET_HI8(ecx, LO8(ecx)); /* 0x00719787: mov ch, cl */
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x00719789: mov cl, byte ptr [ebp - 1] */
    MEM8(ebp + (-0x2)) = (uint8_t)(HI8(ecx)); /* 0x0071978C: mov byte ptr [ebp - 2], ch */
L_0071978F:
    /* cmp edx, MEM32(ebp + (-0x8)) */ /* 0x0071978F: cmp edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719756; /* 0x00719792: jae 0x719756 */
L_00719794:
    ebx = MEM32(ebp + 0x8); /* 0x00719794: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x00719797: mov eax, dword ptr [ebp - 0xc] */
L_0071979A:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x0071979A: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = eax; /* 0x0071979D: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x007197A0: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x007197A3: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007197B7; /* 0x007197A8: je 0x7197b7 */
L_007197AA:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x007197AA: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x007197AD: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x007197B1: push ebx */
    RECOMP_ICALL(eax); /* 0x007197B2: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007197B4: add esp, 8 */
    _flag_k = FK_ADD;
L_007197B7:
    edi = POP32_VAL(esp); /* 0x007197B7: pop edi */
    esi = POP32_VAL(esp); /* 0x007197B8: pop esi */
    ebx = POP32_VAL(esp); /* 0x007197B9: pop ebx */
    esp = ebp; /* 0x007197BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007197BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007197BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007197C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007197C0u);

L_007197C0:
    PUSH32(esp, ebp); /* 0x007197C0: push ebp */
    ebp = esp; /* 0x007197C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x007197C3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x007197C6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x007197C7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x007197CA: push esi */
    PUSH32(esp, edi); /* 0x007197CB: push edi */
    eax = MEM32(ebx + 0x18); /* 0x007197CC: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x007197CF: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x007197D2: mov edi, esi */
    ecx = eax + (-0x20); /* 0x007197D4: lea ecx, [eax - 0x20] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007197D7: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x007197D8: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x007197DA: mov dword ptr [ebp - 8], ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x007197DD: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007197DF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x007197E1: mov cl, byte ptr [edi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x007197E4: mov byte ptr [ebp - 1], cl */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007197E7: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x007197EB: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x007197EF: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x007197F4: cvttsd2si eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x007197F8: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x007197FA: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x007197FD: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x007197FF: mov dword ptr [ebp - 0xc], eax */
    SET_LO8(eax, MEM8(edi)); /* 0x00719802: mov al, byte ptr [edi] */
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x00719804: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0071984A; /* 0x00719807: jae 0x71984a */
L_00719809:
    SET_LO8(ebx, LO8(eax)); /* 0x00719809: mov bl, al */
    goto L_00719810; /* 0x0071980B: jmp 0x719810 */
L_00719810:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x10)); /* 0x00719810: add edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    edi = edi + 0x2; /* 0x00719813: lea edi, [edi + 2] */
    eax = edx + edx; /* 0x00719816: lea eax, [edx + edx] */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x00719819: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719842; /* 0x0071981C: jl 0x719842 */
L_0071981E:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x0071981E: movsx eax, byte ptr [ebp - 1] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x00719822: mov byte ptr [esi], bl */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00719824: mov byte ptr [esi + 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x00719827: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)MEM8(edi); /* 0x0071982A: movsx ecx, byte ptr [edi] */
    ebx = (int32_t)(int8_t)LO8(ebx); /* 0x0071982D: movsx ebx, bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00719830: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)MEM8(edi + 0x1); /* 0x00719832: movsx ecx, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719836: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x00719838: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071983A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x8)); /* 0x0071983C: sub edx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x0071983F: mov byte ptr [ebp - 1], cl */
L_00719842:
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x00719842: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00719810; /* 0x00719845: jb 0x719810 */
L_00719847:
    ebx = MEM32(ebp + 0x8); /* 0x00719847: mov ebx, dword ptr [ebp + 8] */
L_0071984A:
    eax = MEM32(ebp + (-0x10)); /* 0x0071984A: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x0071984D: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = eax; /* 0x00719850: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x00719853: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00719856: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071986A; /* 0x0071985B: je 0x71986a */
L_0071985D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071985D: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00719860: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x00719864: push ebx */
    RECOMP_ICALL(eax); /* 0x00719865: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719867: add esp, 8 */
    _flag_k = FK_ADD;
L_0071986A:
    edi = POP32_VAL(esp); /* 0x0071986A: pop edi */
    esi = POP32_VAL(esp); /* 0x0071986B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071986C: pop ebx */
    esp = ebp; /* 0x0071986D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071986F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719870: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719880u);

L_00719880:
    PUSH32(esp, ebp); /* 0x00719880: push ebp */
    ebp = esp; /* 0x00719881: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00719883: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719886: push ebx */
    PUSH32(esp, esi); /* 0x00719887: push esi */
    PUSH32(esp, edi); /* 0x00719888: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00719889: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0071988C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x18); /* 0x0071988E: mov ecx, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x00719891: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x00719894: mov dword ptr [ebp - 0xc], ebx */
    eax = ecx + (-0x40); /* 0x00719897: lea eax, [ecx - 0x40] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0071989A: mov dword ptr [ebp - 0x10], eax */
    eax = ecx; /* 0x0071989D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071989F: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x007198A0: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007198A3: add eax, edx */
    _flag_k = FK_ADD;
    edx = ebx + (-0x4); /* 0x007198A5: lea edx, [ebx - 4] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x007198A8: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFCu; /* 0x007198AB: add ebx, -4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x007198AE: add ebx, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007198B0: movd xmm0, eax */
    SET_LO8(ecx, MEM8(ebx + 0x3)); /* 0x007198B4: mov cl, byte ptr [ebx + 3] */
    SET_HI8(ecx, MEM8(ebx + 0x2)); /* 0x007198B7: mov ch, byte ptr [ebx + 2] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x007198BA: cvtdq2pd xmm0, xmm0 */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x007198BE: mov byte ptr [ebp - 3], cl */
    MEM8(ebp + (-0x4)) = (uint8_t)(HI8(ecx)); /* 0x007198C1: mov byte ptr [ebp - 4], ch */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x007198C4: mulsd xmm0, qword ptr [edi + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x007198C9: cvttsd2si eax, xmm0 */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x007198CD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x007198CD: shl eax, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x007198D0: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x007198D2: mov dword ptr [ebp - 8], eax */
    SET_LO8(eax, MEM8(ebx + 0x1)); /* 0x007198D5: mov al, byte ptr [ebx + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x007198D8: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(ebx)); /* 0x007198DB: mov al, byte ptr [ebx] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x007198DD: mov byte ptr [ebp - 2], al */
    eax = MEM32(ebp + (-0x8)); /* 0x007198E0: mov eax, dword ptr [ebp - 8] */
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x007198E3: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0071995F; /* 0x007198E6: jb 0x71995f */
L_007198E8:
    edi = eax; /* 0x007198E8: mov edi, eax */
    ebx = ebx; /* 0x007198EA: lea ebx, [ebx] */
L_007198F0:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x007198F0: mov al, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x007198F3: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x007198F6: mov byte ptr [edx + 1], al */
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x007198F9: mov al, byte ptr [ebp - 2] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x007198FC: mov byte ptr [edx], al */
    MEM8(edx + 0x3) = (uint8_t)(LO8(ecx)); /* 0x007198FE: mov byte ptr [edx + 3], cl */
    eax = esi + esi; /* 0x00719901: lea eax, [esi + esi] */
    MEM8(edx + 0x2) = (uint8_t)(HI8(ecx)); /* 0x00719904: mov byte ptr [edx + 2], ch */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x00719907: sub edx, 4 */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x0071990A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719954; /* 0x0071990C: jl 0x719954 */
L_0071990E:
    ecx = (int32_t)(int8_t)MEM8(ebx + (-0x1)); /* 0x0071990E: movsx ecx, byte ptr [ebx - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00719912: sub ebx, 4 */
    _flag_k = FK_CMP;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x3)); /* 0x00719915: movsx eax, byte ptr [ebp - 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00719919: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071991B: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x2); /* 0x0071991D: movsx ecx, byte ptr [ebx + 2] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(eax)); /* 0x00719921: mov byte ptr [ebp - 3], al */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x4)); /* 0x00719924: movsx eax, byte ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00719928: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x1); /* 0x0071992A: movsx ecx, byte ptr [ebx + 1] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071992E: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x00719930: mov byte ptr [ebp - 4], al */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x00719933: movsx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719937: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x00719939: movsx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071993D: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x0071993F: mov byte ptr [ebp - 1], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx); /* 0x00719942: movsx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719945: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719947: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00719949: sub esi, edi */
    _flag_k = FK_CMP;
    SET_HI8(ecx, MEM8(ebp + (-0x4))); /* 0x0071994B: mov ch, byte ptr [ebp - 4] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x0071994E: mov byte ptr [ebp - 2], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x3))); /* 0x00719951: mov cl, byte ptr [ebp - 3] */
L_00719954:
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x00719954: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_007198F0; /* 0x00719957: jae 0x7198f0 */
L_00719959:
    edi = MEM32(ebp + 0x8); /* 0x00719959: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x0071995C: mov eax, dword ptr [ebp - 8] */
L_0071995F:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071995F: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = eax; /* 0x00719962: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00719965: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00719968: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071997C; /* 0x0071996D: je 0x71997c */
L_0071996F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071996F: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00719972: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x00719976: push edi */
    RECOMP_ICALL(eax); /* 0x00719977: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719979: add esp, 8 */
    _flag_k = FK_ADD;
L_0071997C:
    edi = POP32_VAL(esp); /* 0x0071997C: pop edi */
    esi = POP32_VAL(esp); /* 0x0071997D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071997E: pop ebx */
    esp = ebp; /* 0x0071997F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00719981: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719982: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719990u);

L_00719990:
    PUSH32(esp, ebp); /* 0x00719990: push ebp */
    ebp = esp; /* 0x00719991: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00719993: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719996: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00719997: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0071999A: push esi */
    PUSH32(esp, edi); /* 0x0071999B: push edi */
    eax = MEM32(ebx + 0x18); /* 0x0071999C: mov eax, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x0071999F: mov edi, dword ptr [ebx + 0x10] */
    esi = edi + 0x2; /* 0x007199A2: lea esi, [edi + 2] */
    ecx = eax + (-0x40); /* 0x007199A5: lea ecx, [eax - 0x40] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007199A8: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x007199A9: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x007199AC: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007199AF: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007199B1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x007199B3: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007199B6: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x007199BA: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x007199BE: mulsd xmm0, qword ptr [ebx + 8] */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x007199C3: cvttsd2si ecx, xmm0 */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x007199C7: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x007199C7: shl ecx, 2 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x007199CA: mov dword ptr [ebp - 8], ecx */
    eax = edi + ecx; /* 0x007199CD: lea eax, [edi + ecx] */
    SET_LO8(ecx, MEM8(edi)); /* 0x007199D0: mov cl, byte ptr [edi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x007199D2: mov byte ptr [ebp - 4], cl */
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x007199D5: mov cl, byte ptr [edi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x007199D8: mov byte ptr [ebp - 1], cl */
    SET_LO8(ecx, MEM8(esi)); /* 0x007199DB: mov cl, byte ptr [esi] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x007199DD: mov byte ptr [ebp - 2], cl */
    SET_LO8(ecx, MEM8(edi + 0x3)); /* 0x007199E0: mov cl, byte ptr [edi + 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x007199E3: mov byte ptr [ebp - 3], cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x007199E6: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x007199E9: mov dword ptr [ebp - 0x10], eax */
    /* cmp edi, eax */ /* 0x007199EC: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719A66; /* 0x007199EE: jae 0x719a66 */
L_007199F0:
    ebx = MEM32(ebp + (-0xC)); /* 0x007199F0: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x007199F3: add edi, 2 */
    _flag_k = FK_ADD;
L_007199F6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007199F6: add edx, ecx */
    _flag_k = FK_ADD;
    esi = esi + 0x4; /* 0x007199F8: lea esi, [esi + 4] */
    eax = edx + edx; /* 0x007199FB: lea eax, [edx + edx] */
    /* cmp eax, ebx */ /* 0x007199FE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719A5B; /* 0x00719A00: jl 0x719a5b */
L_00719A02:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x00719A02: mov cl, byte ptr [ebp - 1] */
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x00719A05: mov al, byte ptr [ebp - 4] */
    MEM8(edi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719A08: mov byte ptr [edi - 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x2))); /* 0x00719A0B: mov cl, byte ptr [ebp - 2] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x00719A0E: mov byte ptr [edi], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x3))); /* 0x00719A10: mov cl, byte ptr [ebp - 3] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00719A13: mov byte ptr [edi + 1], cl */
    MEM8(edi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x00719A16: mov byte ptr [edi - 2], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00719A19: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)MEM8(esi + (-0x2)); /* 0x00719A1C: movsx ecx, byte ptr [esi - 2] */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x00719A20: movsx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719A23: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x00719A25: movsx eax, byte ptr [ebp - 1] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719A29: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719A2B: mov byte ptr [ebp - 4], cl */
    ecx = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x00719A2E: movsx ecx, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719A32: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x00719A34: movsx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719A38: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719A3A: mov byte ptr [ebp - 1], cl */
    ecx = (int32_t)(int8_t)MEM8(esi); /* 0x00719A3D: movsx ecx, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719A40: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x3)); /* 0x00719A42: movsx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719A46: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719A48: mov byte ptr [ebp - 2], cl */
    ecx = (int32_t)(int8_t)MEM8(esi + 0x1); /* 0x00719A4B: movsx ecx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719A4F: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719A51: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x00719A53: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719A55: mov byte ptr [ebp - 3], cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x00719A58: mov ecx, dword ptr [ebp - 8] */
L_00719A5B:
    eax = edi + (-0x2); /* 0x00719A5B: lea eax, [edi - 2] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x00719A5E: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_007199F6; /* 0x00719A61: jb 0x7199f6 */
L_00719A63:
    ebx = MEM32(ebp + 0x8); /* 0x00719A63: mov ebx, dword ptr [ebp + 8] */
L_00719A66:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00719A66: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(ebx + 0x50); /* 0x00719A69: mov eax, dword ptr [ebx + 0x50] */
    MEM32(ebx + 0x18) = ecx; /* 0x00719A6C: mov dword ptr [ebx + 0x18], ecx */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00719A6F: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00719A83; /* 0x00719A74: je 0x719a83 */
L_00719A76:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00719A76: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00719A79: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x00719A7D: push ebx */
    RECOMP_ICALL(eax); /* 0x00719A7E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719A80: add esp, 8 */
    _flag_k = FK_ADD;
L_00719A83:
    edi = POP32_VAL(esp); /* 0x00719A83: pop edi */
    esi = POP32_VAL(esp); /* 0x00719A84: pop esi */
    ebx = POP32_VAL(esp); /* 0x00719A85: pop ebx */
    esp = ebp; /* 0x00719A86: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00719A88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719A89: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719A90u);

L_00719A90:
    PUSH32(esp, ebp); /* 0x00719A90: push ebp */
    ebp = esp; /* 0x00719A91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00719A93: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719A96: push ebx */
    PUSH32(esp, esi); /* 0x00719A97: push esi */
    PUSH32(esp, edi); /* 0x00719A98: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00719A99: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00719A9C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x18); /* 0x00719A9E: mov ecx, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x00719AA1: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x00719AA4: mov dword ptr [ebp - 0x10], ebx */
    eax = ecx + (-0x60); /* 0x00719AA7: lea eax, [ecx - 0x60] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00719AAA: mov dword ptr [ebp - 0x14], eax */
    eax = 0x2AAAAAABu; /* 0x00719AAD: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00719AB2: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x00719AB4: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00719AB6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00719AB6: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00719AB9: add eax, edx */
    _flag_k = FK_ADD;
    edx = ebx + (-0x6); /* 0x00719ABB: lea edx, [ebx - 6] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFAu; /* 0x00719ABE: add ebx, -6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00719AC1: add ebx, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00719AC3: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00719AC7: cvtdq2pd xmm0, xmm0 */
    SET_LO8(ecx, MEM8(ebx + 0x5)); /* 0x00719ACB: mov cl, byte ptr [ebx + 5] */
    SET_HI8(ecx, MEM8(ebx + 0x4)); /* 0x00719ACE: mov ch, byte ptr [ebx + 4] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x00719AD1: mov byte ptr [ebp - 5], cl */
    MEM8(ebp + (-0x6)) = (uint8_t)(HI8(ecx)); /* 0x00719AD4: mov byte ptr [ebp - 6], ch */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00719AD7: mulsd xmm0, qword ptr [edi + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00719ADC: cvttsd2si eax, xmm0 */
    eax = eax + eax * 2; /* 0x00719AE0: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00719AE3: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x00719AE5: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x00719AE7: mov dword ptr [ebp - 0xc], eax */
    SET_LO8(eax, MEM8(ebx + 0x3)); /* 0x00719AEA: mov al, byte ptr [ebx + 3] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00719AED: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(ebx + 0x2)); /* 0x00719AF0: mov al, byte ptr [ebx + 2] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x00719AF3: mov byte ptr [ebp - 2], al */
    SET_LO8(eax, MEM8(ebx + 0x1)); /* 0x00719AF6: mov al, byte ptr [ebx + 1] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(eax)); /* 0x00719AF9: mov byte ptr [ebp - 3], al */
    SET_LO8(eax, MEM8(ebx)); /* 0x00719AFC: mov al, byte ptr [ebx] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x00719AFE: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0xC)); /* 0x00719B01: mov eax, dword ptr [ebp - 0xc] */
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x00719B04: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00719BAD; /* 0x00719B07: jb 0x719bad */
L_00719B0D:
    edi = eax; /* 0x00719B0D: mov edi, eax */
    /* nop */ /* 0x00719B0F: nop  */
L_00719B10:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x00719B10: mov al, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x14)); /* 0x00719B13: add esi, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    MEM8(edx + 0x3) = (uint8_t)(LO8(eax)); /* 0x00719B16: mov byte ptr [edx + 3], al */
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x00719B19: mov al, byte ptr [ebp - 2] */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x00719B1C: mov byte ptr [edx + 2], al */
    SET_LO8(eax, MEM8(ebp + (-0x3))); /* 0x00719B1F: mov al, byte ptr [ebp - 3] */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x00719B22: mov byte ptr [edx + 1], al */
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x00719B25: mov al, byte ptr [ebp - 4] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x00719B28: mov byte ptr [edx], al */
    eax = esi + esi; /* 0x00719B2A: lea eax, [esi + esi] */
    MEM8(edx + 0x5) = (uint8_t)(LO8(ecx)); /* 0x00719B2D: mov byte ptr [edx + 5], cl */
    MEM8(edx + 0x4) = (uint8_t)(HI8(ecx)); /* 0x00719B30: mov byte ptr [edx + 4], ch */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 6; /* 0x00719B33: sub edx, 6 */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x00719B36: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719B9E; /* 0x00719B38: jl 0x719b9e */
L_00719B3A:
    ecx = (int32_t)(int8_t)MEM8(ebx + (-0x1)); /* 0x00719B3A: movsx ecx, byte ptr [ebx - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 6; /* 0x00719B3E: sub ebx, 6 */
    _flag_k = FK_CMP;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x5)); /* 0x00719B41: movsx eax, byte ptr [ebp - 5] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00719B45: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00719B47: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x4); /* 0x00719B49: movsx ecx, byte ptr [ebx + 4] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(eax)); /* 0x00719B4D: mov byte ptr [ebp - 5], al */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x6)); /* 0x00719B50: movsx eax, byte ptr [ebp - 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00719B54: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x3); /* 0x00719B56: movsx ecx, byte ptr [ebx + 3] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00719B5A: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(eax)); /* 0x00719B5C: mov byte ptr [ebp - 6], al */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x00719B5F: movsx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719B63: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x00719B65: movsx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719B69: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719B6B: mov byte ptr [ebp - 1], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x2); /* 0x00719B6E: movsx ecx, byte ptr [ebx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719B72: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x3)); /* 0x00719B74: movsx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719B78: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719B7A: mov byte ptr [ebp - 2], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x1); /* 0x00719B7D: movsx ecx, byte ptr [ebx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719B81: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x4)); /* 0x00719B83: movsx eax, byte ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719B87: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719B89: mov byte ptr [ebp - 3], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx); /* 0x00719B8C: movsx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719B8F: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719B91: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00719B93: sub esi, edi */
    _flag_k = FK_CMP;
    SET_HI8(ecx, MEM8(ebp + (-0x6))); /* 0x00719B95: mov ch, byte ptr [ebp - 6] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719B98: mov byte ptr [ebp - 4], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x5))); /* 0x00719B9B: mov cl, byte ptr [ebp - 5] */
L_00719B9E:
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x00719B9E: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719B10; /* 0x00719BA1: jae 0x719b10 */
L_00719BA7:
    edi = MEM32(ebp + 0x8); /* 0x00719BA7: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x00719BAA: mov eax, dword ptr [ebp - 0xc] */
L_00719BAD:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00719BAD: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = eax; /* 0x00719BB0: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00719BB3: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00719BB6: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00719BCA; /* 0x00719BBB: je 0x719bca */
L_00719BBD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00719BBD: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00719BC0: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x00719BC4: push edi */
    RECOMP_ICALL(eax); /* 0x00719BC5: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719BC7: add esp, 8 */
    _flag_k = FK_ADD;
L_00719BCA:
    edi = POP32_VAL(esp); /* 0x00719BCA: pop edi */
    esi = POP32_VAL(esp); /* 0x00719BCB: pop esi */
    ebx = POP32_VAL(esp); /* 0x00719BCC: pop ebx */
    esp = ebp; /* 0x00719BCD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00719BCF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719BD0: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719BE0u);

L_00719BE0:
    PUSH32(esp, ebp); /* 0x00719BE0: push ebp */
    ebp = esp; /* 0x00719BE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00719BE3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719BE6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00719BE7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00719BEA: push esi */
    PUSH32(esp, edi); /* 0x00719BEB: push edi */
    ecx = MEM32(ebx + 0x18); /* 0x00719BEC: mov ecx, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x00719BEF: mov edi, dword ptr [ebx + 0x10] */
    esi = edi + 0x2; /* 0x00719BF2: lea esi, [edi + 2] */
    eax = ecx + (-0x60); /* 0x00719BF5: lea eax, [ecx - 0x60] */
    MEM32(ebp + (-0x10)) = eax; /* 0x00719BF8: mov dword ptr [ebp - 0x10], eax */
    eax = 0x2AAAAAABu; /* 0x00719BFB: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00719C00: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x00719C02: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00719C04: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00719C04: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00719C07: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00719C09: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00719C0B: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00719C0F: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00719C13: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00719C18: cvttsd2si eax, xmm0 */
    ecx = eax + eax * 2; /* 0x00719C1C: lea ecx, [eax + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x00719C1F: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x00719C21: mov dword ptr [ebp - 0xc], ecx */
    eax = edi + ecx; /* 0x00719C24: lea eax, [edi + ecx] */
    SET_LO8(ecx, MEM8(edi)); /* 0x00719C27: mov cl, byte ptr [edi] */
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x00719C29: mov byte ptr [ebp - 6], cl */
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x00719C2C: mov cl, byte ptr [edi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719C2F: mov byte ptr [ebp - 1], cl */
    SET_LO8(ecx, MEM8(esi)); /* 0x00719C32: mov cl, byte ptr [esi] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719C34: mov byte ptr [ebp - 2], cl */
    SET_LO8(ecx, MEM8(edi + 0x3)); /* 0x00719C37: mov cl, byte ptr [edi + 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719C3A: mov byte ptr [ebp - 3], cl */
    SET_LO8(ecx, MEM8(edi + 0x4)); /* 0x00719C3D: mov cl, byte ptr [edi + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719C40: mov byte ptr [ebp - 4], cl */
    SET_LO8(ecx, MEM8(edi + 0x5)); /* 0x00719C43: mov cl, byte ptr [edi + 5] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x00719C46: mov byte ptr [ebp - 5], cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x00719C49: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00719C4C: mov dword ptr [ebp - 0x14], eax */
    /* cmp edi, eax */ /* 0x00719C4F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719D02; /* 0x00719C51: jae 0x719d02 */
L_00719C57:
    ebx = MEM32(ebp + (-0x10)); /* 0x00719C57: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x00719C5A: add edi, 2 */
    _flag_k = FK_ADD;
    ecx = ecx; /* 0x00719C5D: lea ecx, [ecx] */
L_00719C60:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00719C60: add edx, ecx */
    _flag_k = FK_ADD;
    esi = esi + 0x6; /* 0x00719C62: lea esi, [esi + 6] */
    eax = edx + edx; /* 0x00719C65: lea eax, [edx + edx] */
    /* cmp eax, ebx */ /* 0x00719C68: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719CF3; /* 0x00719C6A: jl 0x719cf3 */
L_00719C70:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x00719C70: mov cl, byte ptr [ebp - 1] */
    SET_LO8(eax, MEM8(ebp + (-0x6))); /* 0x00719C73: mov al, byte ptr [ebp - 6] */
    MEM8(edi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719C76: mov byte ptr [edi - 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x2))); /* 0x00719C79: mov cl, byte ptr [ebp - 2] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x00719C7C: mov byte ptr [edi], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x3))); /* 0x00719C7E: mov cl, byte ptr [ebp - 3] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00719C81: mov byte ptr [edi + 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x4))); /* 0x00719C84: mov cl, byte ptr [ebp - 4] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(ecx)); /* 0x00719C87: mov byte ptr [edi + 2], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x5))); /* 0x00719C8A: mov cl, byte ptr [ebp - 5] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(ecx)); /* 0x00719C8D: mov byte ptr [edi + 3], cl */
    MEM8(edi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x00719C90: mov byte ptr [edi - 2], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 6; /* 0x00719C93: add edi, 6 */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)MEM8(esi + (-0x2)); /* 0x00719C96: movsx ecx, byte ptr [esi - 2] */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x00719C9A: movsx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719C9D: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x00719C9F: movsx eax, byte ptr [ebp - 1] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719CA3: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x00719CA5: mov byte ptr [ebp - 6], cl */
    ecx = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x00719CA8: movsx ecx, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719CAC: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x00719CAE: movsx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719CB2: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719CB4: mov byte ptr [ebp - 1], cl */
    ecx = (int32_t)(int8_t)MEM8(esi); /* 0x00719CB7: movsx ecx, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719CBA: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x3)); /* 0x00719CBC: movsx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719CC0: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719CC2: mov byte ptr [ebp - 2], cl */
    ecx = (int32_t)(int8_t)MEM8(esi + 0x1); /* 0x00719CC5: movsx ecx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719CC9: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x4)); /* 0x00719CCB: movsx eax, byte ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719CCF: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719CD1: mov byte ptr [ebp - 3], cl */
    ecx = (int32_t)(int8_t)MEM8(esi + 0x2); /* 0x00719CD4: movsx ecx, byte ptr [esi + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719CD8: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x5)); /* 0x00719CDA: movsx eax, byte ptr [ebp - 5] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719CDE: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719CE0: mov byte ptr [ebp - 4], cl */
    ecx = (int32_t)(int8_t)MEM8(esi + 0x3); /* 0x00719CE3: movsx ecx, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719CE7: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719CE9: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x00719CEB: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x00719CED: mov byte ptr [ebp - 5], cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x00719CF0: mov ecx, dword ptr [ebp - 0xc] */
L_00719CF3:
    eax = edi + (-0x2); /* 0x00719CF3: lea eax, [edi - 2] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x00719CF6: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00719C60; /* 0x00719CF9: jb 0x719c60 */
L_00719CFF:
    ebx = MEM32(ebp + 0x8); /* 0x00719CFF: mov ebx, dword ptr [ebp + 8] */
L_00719D02:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x00719D02: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(ebx + 0x50); /* 0x00719D05: mov eax, dword ptr [ebx + 0x50] */
    MEM32(ebx + 0x18) = ecx; /* 0x00719D08: mov dword ptr [ebx + 0x18], ecx */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x00719D0B: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00719D1F; /* 0x00719D10: je 0x719d1f */
L_00719D12:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00719D12: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x00719D15: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x00719D19: push ebx */
    RECOMP_ICALL(eax); /* 0x00719D1A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719D1C: add esp, 8 */
    _flag_k = FK_ADD;
L_00719D1F:
    edi = POP32_VAL(esp); /* 0x00719D1F: pop edi */
    esi = POP32_VAL(esp); /* 0x00719D20: pop esi */
    ebx = POP32_VAL(esp); /* 0x00719D21: pop ebx */
    esp = ebp; /* 0x00719D22: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00719D24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719D25: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719D30u);

L_00719D30:
    PUSH32(esp, ebp); /* 0x00719D30: push ebp */
    ebp = esp; /* 0x00719D31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00719D33: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719D36: push ebx */
    PUSH32(esp, esi); /* 0x00719D37: push esi */
    PUSH32(esp, edi); /* 0x00719D38: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00719D39: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00719D3C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x18); /* 0x00719D3E: mov ecx, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x00719D41: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x00719D44: mov dword ptr [ebp - 0x10], ebx */
    eax = ecx + (-0x80); /* 0x00719D47: lea eax, [ecx - 0x80] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00719D4A: mov dword ptr [ebp - 0x14], eax */
    eax = ecx; /* 0x00719D4D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00719D4F: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x00719D50: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00719D53: add eax, edx */
    _flag_k = FK_ADD;
    edx = ebx + (-0x8); /* 0x00719D55: lea edx, [ebx - 8] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x00719D58: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFF8u; /* 0x00719D5B: add ebx, -8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x00719D5E: add ebx, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00719D60: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00719D64: cvtdq2pd xmm0, xmm0 */
    SET_LO8(ecx, MEM8(ebx + 0x7)); /* 0x00719D68: mov cl, byte ptr [ebx + 7] */
    SET_HI8(ecx, MEM8(ebx + 0x6)); /* 0x00719D6B: mov ch, byte ptr [ebx + 6] */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x00719D6E: mov byte ptr [ebp - 7], cl */
    MEM8(ebp + (-0x8)) = (uint8_t)(HI8(ecx)); /* 0x00719D71: mov byte ptr [ebp - 8], ch */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00719D74: mulsd xmm0, qword ptr [edi + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00719D79: cvttsd2si eax, xmm0 */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x00719D7D: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x00719D7D: shl eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x00719D80: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x00719D82: mov dword ptr [ebp - 0xc], eax */
    SET_LO8(eax, MEM8(ebx + 0x5)); /* 0x00719D85: mov al, byte ptr [ebx + 5] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00719D88: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(ebx + 0x4)); /* 0x00719D8B: mov al, byte ptr [ebx + 4] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x00719D8E: mov byte ptr [ebp - 2], al */
    SET_LO8(eax, MEM8(ebx + 0x3)); /* 0x00719D91: mov al, byte ptr [ebx + 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(eax)); /* 0x00719D94: mov byte ptr [ebp - 3], al */
    SET_LO8(eax, MEM8(ebx + 0x2)); /* 0x00719D97: mov al, byte ptr [ebx + 2] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x00719D9A: mov byte ptr [ebp - 4], al */
    SET_LO8(eax, MEM8(ebx + 0x1)); /* 0x00719D9D: mov al, byte ptr [ebx + 1] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(eax)); /* 0x00719DA0: mov byte ptr [ebp - 5], al */
    SET_LO8(eax, MEM8(ebx)); /* 0x00719DA3: mov al, byte ptr [ebx] */
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(eax)); /* 0x00719DA5: mov byte ptr [ebp - 6], al */
    eax = MEM32(ebp + (-0xC)); /* 0x00719DA8: mov eax, dword ptr [ebp - 0xc] */
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x00719DAB: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00719E81; /* 0x00719DAE: jb 0x719e81 */
L_00719DB4:
    edi = eax; /* 0x00719DB4: mov edi, eax */
L_00719DB6:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x00719DB6: mov al, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x14)); /* 0x00719DB9: add esi, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    MEM8(edx + 0x5) = (uint8_t)(LO8(eax)); /* 0x00719DBC: mov byte ptr [edx + 5], al */
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x00719DBF: mov al, byte ptr [ebp - 2] */
    MEM8(edx + 0x4) = (uint8_t)(LO8(eax)); /* 0x00719DC2: mov byte ptr [edx + 4], al */
    SET_LO8(eax, MEM8(ebp + (-0x3))); /* 0x00719DC5: mov al, byte ptr [ebp - 3] */
    MEM8(edx + 0x3) = (uint8_t)(LO8(eax)); /* 0x00719DC8: mov byte ptr [edx + 3], al */
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x00719DCB: mov al, byte ptr [ebp - 4] */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x00719DCE: mov byte ptr [edx + 2], al */
    SET_LO8(eax, MEM8(ebp + (-0x5))); /* 0x00719DD1: mov al, byte ptr [ebp - 5] */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x00719DD4: mov byte ptr [edx + 1], al */
    SET_LO8(eax, MEM8(ebp + (-0x6))); /* 0x00719DD7: mov al, byte ptr [ebp - 6] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x00719DDA: mov byte ptr [edx], al */
    eax = esi + esi; /* 0x00719DDC: lea eax, [esi + esi] */
    MEM8(edx + 0x7) = (uint8_t)(LO8(ecx)); /* 0x00719DDF: mov byte ptr [edx + 7], cl */
    MEM8(edx + 0x6) = (uint8_t)(HI8(ecx)); /* 0x00719DE2: mov byte ptr [edx + 6], ch */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x00719DE5: sub edx, 8 */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x00719DE8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719E72; /* 0x00719DEA: jl 0x719e72 */
L_00719DF0:
    ecx = (int32_t)(int8_t)MEM8(ebx + (-0x1)); /* 0x00719DF0: movsx ecx, byte ptr [ebx - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 8; /* 0x00719DF4: sub ebx, 8 */
    _flag_k = FK_CMP;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x7)); /* 0x00719DF7: movsx eax, byte ptr [ebp - 7] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00719DFB: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00719DFD: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x6); /* 0x00719DFF: movsx ecx, byte ptr [ebx + 6] */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(eax)); /* 0x00719E03: mov byte ptr [ebp - 7], al */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x8)); /* 0x00719E06: movsx eax, byte ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00719E0A: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x5); /* 0x00719E0C: movsx ecx, byte ptr [ebx + 5] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00719E10: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(eax)); /* 0x00719E12: mov byte ptr [ebp - 8], al */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x00719E15: movsx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719E19: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x00719E1B: movsx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719E1F: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719E21: mov byte ptr [ebp - 1], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x4); /* 0x00719E24: movsx ecx, byte ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719E28: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x3)); /* 0x00719E2A: movsx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719E2E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719E30: mov byte ptr [ebp - 2], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x3); /* 0x00719E33: movsx ecx, byte ptr [ebx + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719E37: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x4)); /* 0x00719E39: movsx eax, byte ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719E3D: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719E3F: mov byte ptr [ebp - 3], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x2); /* 0x00719E42: movsx ecx, byte ptr [ebx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719E46: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x5)); /* 0x00719E48: movsx eax, byte ptr [ebp - 5] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719E4C: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719E4E: mov byte ptr [ebp - 4], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx + 0x1); /* 0x00719E51: movsx ecx, byte ptr [ebx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719E55: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x6)); /* 0x00719E57: movsx eax, byte ptr [ebp - 6] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719E5B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x00719E5D: mov byte ptr [ebp - 5], cl */
    ecx = (int32_t)(int8_t)MEM8(ebx); /* 0x00719E60: movsx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719E63: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719E65: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00719E67: sub esi, edi */
    _flag_k = FK_CMP;
    SET_HI8(ecx, MEM8(ebp + (-0x8))); /* 0x00719E69: mov ch, byte ptr [ebp - 8] */
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x00719E6C: mov byte ptr [ebp - 6], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x7))); /* 0x00719E6F: mov cl, byte ptr [ebp - 7] */
L_00719E72:
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x00719E72: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719DB6; /* 0x00719E75: jae 0x719db6 */
L_00719E7B:
    edi = MEM32(ebp + 0x8); /* 0x00719E7B: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x00719E7E: mov eax, dword ptr [ebp - 0xc] */
L_00719E81:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00719E81: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = eax; /* 0x00719E84: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00719E87: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00719E8A: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00719E9E; /* 0x00719E8F: je 0x719e9e */
L_00719E91:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00719E91: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00719E94: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x00719E98: push edi */
    RECOMP_ICALL(eax); /* 0x00719E99: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00719E9B: add esp, 8 */
    _flag_k = FK_ADD;
L_00719E9E:
    edi = POP32_VAL(esp); /* 0x00719E9E: pop edi */
    esi = POP32_VAL(esp); /* 0x00719E9F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00719EA0: pop ebx */
    esp = ebp; /* 0x00719EA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00719EA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00719EA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_00719EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00719EB0u);

L_00719EB0:
    PUSH32(esp, ebp); /* 0x00719EB0: push ebp */
    ebp = esp; /* 0x00719EB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00719EB3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00719EB6: push ebx */
    PUSH32(esp, esi); /* 0x00719EB7: push esi */
    PUSH32(esp, edi); /* 0x00719EB8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00719EB9: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00719EBC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x18); /* 0x00719EBE: mov eax, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x00719EC1: mov ebx, dword ptr [edi + 0x10] */
    ecx = eax + (-0x80); /* 0x00719EC4: lea ecx, [eax - 0x80] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00719EC7: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x00719EC8: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x00719ECB: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00719ECE: add eax, edx */
    _flag_k = FK_ADD;
    SET_LO8(edx, MEM8(ebx)); /* 0x00719ED0: mov dl, byte ptr [ebx] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x00719ED2: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(edx)); /* 0x00719ED5: mov byte ptr [ebp - 8], dl */
    SET_LO8(edx, MEM8(ebx + 0x1)); /* 0x00719ED8: mov dl, byte ptr [ebx + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x00719EDB: mov byte ptr [ebp - 1], dl */
    edx = ebx + 0x2; /* 0x00719EDE: lea edx, [ebx + 2] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00719EE1: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00719EE5: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00719EE9: mulsd xmm0, qword ptr [edi + 8] */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x00719EEE: cvttsd2si ecx, xmm0 */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x00719EF2: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x00719EF2: shl ecx, 3 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x00719EF5: mov dword ptr [ebp - 0xc], ecx */
    eax = ebx + ecx; /* 0x00719EF8: lea eax, [ebx + ecx] */
    SET_LO8(ecx, MEM8(edx)); /* 0x00719EFB: mov cl, byte ptr [edx] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719EFD: mov byte ptr [ebp - 2], cl */
    SET_LO8(ecx, MEM8(ebx + 0x3)); /* 0x00719F00: mov cl, byte ptr [ebx + 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719F03: mov byte ptr [ebp - 3], cl */
    SET_LO8(ecx, MEM8(ebx + 0x4)); /* 0x00719F06: mov cl, byte ptr [ebx + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719F09: mov byte ptr [ebp - 4], cl */
    SET_LO8(ecx, MEM8(ebx + 0x5)); /* 0x00719F0C: mov cl, byte ptr [ebx + 5] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x00719F0F: mov byte ptr [ebp - 5], cl */
    SET_LO8(ecx, MEM8(ebx + 0x6)); /* 0x00719F12: mov cl, byte ptr [ebx + 6] */
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x00719F15: mov byte ptr [ebp - 6], cl */
    SET_LO8(ecx, MEM8(ebx + 0x7)); /* 0x00719F18: mov cl, byte ptr [ebx + 7] */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x00719F1B: mov byte ptr [ebp - 7], cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x00719F1E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00719F21: mov dword ptr [ebp - 0x14], eax */
    /* cmp ebx, eax */ /* 0x00719F24: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00719FFE; /* 0x00719F26: jae 0x719ffe */
L_00719F2C:
    edi = MEM32(ebp + (-0x10)); /* 0x00719F2C: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x00719F2F: add ebx, 2 */
    _flag_k = FK_ADD;
L_00719F32:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x00719F32: add esi, ecx */
    _flag_k = FK_ADD;
    edx = edx + 0x8; /* 0x00719F34: lea edx, [edx + 8] */
    eax = esi + esi; /* 0x00719F37: lea eax, [esi + esi] */
    /* cmp eax, edi */ /* 0x00719F3A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00719FEF; /* 0x00719F3C: jl 0x719fef */
L_00719F42:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x00719F42: mov cl, byte ptr [ebp - 1] */
    MEM8(ebx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719F45: mov byte ptr [ebx - 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x2))); /* 0x00719F48: mov cl, byte ptr [ebp - 2] */
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x00719F4B: mov byte ptr [ebx], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x3))); /* 0x00719F4D: mov cl, byte ptr [ebp - 3] */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00719F50: mov byte ptr [ebx + 1], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x4))); /* 0x00719F53: mov cl, byte ptr [ebp - 4] */
    MEM8(ebx + 0x2) = (uint8_t)(LO8(ecx)); /* 0x00719F56: mov byte ptr [ebx + 2], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x5))); /* 0x00719F59: mov cl, byte ptr [ebp - 5] */
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x00719F5C: mov al, byte ptr [ebp - 8] */
    MEM8(ebx + 0x3) = (uint8_t)(LO8(ecx)); /* 0x00719F5F: mov byte ptr [ebx + 3], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x6))); /* 0x00719F62: mov cl, byte ptr [ebp - 6] */
    MEM8(ebx + 0x4) = (uint8_t)(LO8(ecx)); /* 0x00719F65: mov byte ptr [ebx + 4], cl */
    SET_LO8(ecx, MEM8(ebp + (-0x7))); /* 0x00719F68: mov cl, byte ptr [ebp - 7] */
    MEM8(ebx + 0x5) = (uint8_t)(LO8(ecx)); /* 0x00719F6B: mov byte ptr [ebx + 5], cl */
    MEM8(ebx + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x00719F6E: mov byte ptr [ebx - 2], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x00719F71: add ebx, 8 */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)MEM8(edx + (-0x2)); /* 0x00719F74: movsx ecx, byte ptr [edx - 2] */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x00719F78: movsx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719F7B: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x00719F7D: movsx eax, byte ptr [ebp - 1] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719F81: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(ecx)); /* 0x00719F83: mov byte ptr [ebp - 8], cl */
    ecx = (int32_t)(int8_t)MEM8(edx + (-0x1)); /* 0x00719F86: movsx ecx, byte ptr [edx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719F8A: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x00719F8C: movsx eax, byte ptr [ebp - 2] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719F90: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00719F92: mov byte ptr [ebp - 1], cl */
    ecx = (int32_t)(int8_t)MEM8(edx); /* 0x00719F95: movsx ecx, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719F98: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x3)); /* 0x00719F9A: movsx eax, byte ptr [ebp - 3] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719F9E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00719FA0: mov byte ptr [ebp - 2], cl */
    ecx = (int32_t)(int8_t)MEM8(edx + 0x1); /* 0x00719FA3: movsx ecx, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719FA7: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x4)); /* 0x00719FA9: movsx eax, byte ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719FAD: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00719FAF: mov byte ptr [ebp - 3], cl */
    ecx = (int32_t)(int8_t)MEM8(edx + 0x2); /* 0x00719FB2: movsx ecx, byte ptr [edx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719FB6: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x5)); /* 0x00719FB8: movsx eax, byte ptr [ebp - 5] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719FBC: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x00719FBE: mov byte ptr [ebp - 4], cl */
    ecx = (int32_t)(int8_t)MEM8(edx + 0x3); /* 0x00719FC1: movsx ecx, byte ptr [edx + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719FC5: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x6)); /* 0x00719FC7: movsx eax, byte ptr [ebp - 6] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719FCB: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ecx)); /* 0x00719FCD: mov byte ptr [ebp - 5], cl */
    ecx = (int32_t)(int8_t)MEM8(edx + 0x4); /* 0x00719FD0: movsx ecx, byte ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719FD4: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x7)); /* 0x00719FD6: movsx eax, byte ptr [ebp - 7] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719FDA: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(ebp + (-0x6)) = (uint8_t)(LO8(ecx)); /* 0x00719FDC: mov byte ptr [ebp - 6], cl */
    ecx = (int32_t)(int8_t)MEM8(edx + 0x5); /* 0x00719FDF: movsx ecx, byte ptr [edx + 5] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00719FE3: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00719FE5: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00719FE7: sub esi, edi */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x00719FE9: mov byte ptr [ebp - 7], cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x00719FEC: mov ecx, dword ptr [ebp - 0xc] */
L_00719FEF:
    eax = ebx + (-0x2); /* 0x00719FEF: lea eax, [ebx - 2] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x00719FF2: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00719F32; /* 0x00719FF5: jb 0x719f32 */
L_00719FFB:
    edi = MEM32(ebp + 0x8); /* 0x00719FFB: mov edi, dword ptr [ebp + 8] */
L_00719FFE:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00719FFE: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x0071A001: mov eax, dword ptr [edi + 0x50] */
    MEM32(edi + 0x18) = ecx; /* 0x0071A004: mov dword ptr [edi + 0x18], ecx */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071A007: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071A01B; /* 0x0071A00C: je 0x71a01b */
L_0071A00E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071A00E: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x0071A011: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x0071A015: push edi */
    RECOMP_ICALL(eax); /* 0x0071A016: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071A018: add esp, 8 */
    _flag_k = FK_ADD;
L_0071A01B:
    edi = POP32_VAL(esp); /* 0x0071A01B: pop edi */
    esi = POP32_VAL(esp); /* 0x0071A01C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071A01D: pop ebx */
    esp = ebp; /* 0x0071A01E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071A020: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071A021: ret  */
    RECOMP_REGS_OUT();
}

void sub_0071A030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0071A030u);

L_0071A030:
    PUSH32(esp, ebp); /* 0x0071A030: push ebp */
    ebp = esp; /* 0x0071A031: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0071A033: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0071A036: push ebx */
    PUSH32(esp, esi); /* 0x0071A037: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0071A038: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0071A03B: push edi */
    ecx = MEM32(esi + 0x18); /* 0x0071A03C: mov ecx, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x10); /* 0x0071A03F: mov ebx, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x0071A042: mov dword ptr [ebp - 8], ebx */
    eax = ecx + (-0x20); /* 0x0071A045: lea eax, [ecx - 0x20] */
    MEM32(ebp + (-0xC)) = eax; /* 0x0071A048: mov dword ptr [ebp - 0xc], eax */
    eax = ecx; /* 0x0071A04B: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071A04D: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x0071A04E: add ecx, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0071A051: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071A053: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071A055: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edi = (uint32_t)MEM16(ebx + ecx); /* 0x0071A057: movzx edi, word ptr [ebx + ecx] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071A05B: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0071A05F: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(esi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071A063: mulsd xmm0, qword ptr [esi + 8] */
    esi = ebx + (-0x2); /* 0x0071A068: lea esi, [ebx - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x0071A06B: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x0071A06D: mov ecx, dword ptr [ebp - 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0071A070: cvttsd2si eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071A074: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0071A076: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0071A078: mov dword ptr [ebp - 4], eax */
    /* cmp esi, ecx */ /* 0x0071A07B: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0071A0B3; /* 0x0071A07D: jb 0x71a0b3 */
L_0071A07F:
    /* nop */ /* 0x0071A07F: nop  */
L_0071A080:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0xC)); /* 0x0071A080: add edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM16(esi) = (uint16_t)(LO16(edi)); /* 0x0071A083: mov word ptr [esi], di */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x0071A086: sub esi, 2 */
    _flag_k = FK_CMP;
    eax = edx + edx; /* 0x0071A089: lea eax, [edx + edx] */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x0071A08C: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071A0AC; /* 0x0071A08F: jl 0x71a0ac */
L_0071A091:
    ecx = (uint32_t)MEM16(ebx + (-0x2)); /* 0x0071A091: movzx ecx, word ptr [ebx - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x0071A095: sub ebx, 2 */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(edi); /* 0x0071A098: movzx eax, di */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A09B: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x0071A09D: mov eax, dword ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A0A0: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x0071A0A2: sub edx, eax */
    _flag_k = FK_CMP;
    edi = (uint32_t)LO16(ecx); /* 0x0071A0A4: movzx edi, cx */
    ecx = MEM32(ebp + (-0x8)); /* 0x0071A0A7: mov ecx, dword ptr [ebp - 8] */
    goto L_0071A0AF; /* 0x0071A0AA: jmp 0x71a0af */
L_0071A0AC:
    eax = MEM32(ebp + (-0x4)); /* 0x0071A0AC: mov eax, dword ptr [ebp - 4] */
L_0071A0AF:
    /* cmp esi, ecx */ /* 0x0071A0AF: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_0071A080; /* 0x0071A0B1: jae 0x71a080 */
L_0071A0B3:
    ecx = MEM32(ebp + 0x8); /* 0x0071A0B3: mov ecx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x0071A0B6: pop edi */
    esi = POP32_VAL(esp); /* 0x0071A0B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071A0B8: pop ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) + 1; /* 0x0071A0B9: inc dword ptr [ecx + 0x50] */
    _flag_k = FK_INC;
    MEM32(ecx + 0x18) = eax; /* 0x0071A0BC: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ecx + 0x50); /* 0x0071A0BF: mov eax, dword ptr [ecx + 0x50] */
    /* cmp MEM32(ecx + eax * 4 + 0x28), 0 */ /* 0x0071A0C2: cmp dword ptr [ecx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071A0D6; /* 0x0071A0C7: je 0x71a0d6 */
L_0071A0C9:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071A0C9: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + eax * 4 + 0x28); /* 0x0071A0CC: mov eax, dword ptr [ecx + eax*4 + 0x28] */
    PUSH32(esp, ecx); /* 0x0071A0D0: push ecx */
    RECOMP_ICALL(eax); /* 0x0071A0D1: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071A0D3: add esp, 8 */
    _flag_k = FK_ADD;
L_0071A0D6:
    esp = ebp; /* 0x0071A0D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071A0D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071A0D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_0071A0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0071A0E0u);

L_0071A0E0:
    PUSH32(esp, ebp); /* 0x0071A0E0: push ebp */
    ebp = esp; /* 0x0071A0E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x0071A0E3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0071A0E6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0071A0E7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0071A0EA: push esi */
    PUSH32(esp, edi); /* 0x0071A0EB: push edi */
    eax = MEM32(ebx + 0x18); /* 0x0071A0EC: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x0071A0EF: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x0071A0F2: mov edi, esi */
    ecx = eax + (-0x20); /* 0x0071A0F4: lea ecx, [eax - 0x20] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071A0F7: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0071A0F8: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x0071A0FA: mov dword ptr [ebp - 0x10], ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071A0FD: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071A0FF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071A101: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0071A105: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071A109: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0071A10E: cvttsd2si eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071A112: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x0071A114: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0071A117: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0071A119: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(edi); /* 0x0071A11C: movzx eax, word ptr [edi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x0071A11F: mov dword ptr [ebp - 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x0071A122: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0071A15D; /* 0x0071A125: jae 0x71a15d */
L_0071A127:
    ebx = eax; /* 0x0071A127: mov ebx, eax */
    esp = esp; /* 0x0071A129: lea esp, [esp] */
L_0071A130:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x8)); /* 0x0071A130: add edx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    edi = edi + 0x2; /* 0x0071A133: lea edi, [edi + 2] */
    eax = edx + edx; /* 0x0071A136: lea eax, [edx + edx] */
    /* cmp eax, ecx */ /* 0x0071A139: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071A155; /* 0x0071A13B: jl 0x71a155 */
L_0071A13D:
    MEM16(esi) = (uint16_t)(LO16(ebx)); /* 0x0071A13D: mov word ptr [esi], bx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x0071A140: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(edi); /* 0x0071A143: movzx ecx, word ptr [edi] */
    eax = (uint32_t)LO16(ebx); /* 0x0071A146: movzx eax, bx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A149: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A14B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    ebx = (uint32_t)LO16(ecx); /* 0x0071A14D: movzx ebx, cx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0071A150: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x0071A153: sub edx, ecx */
    _flag_k = FK_CMP;
L_0071A155:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x0071A155: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0071A130; /* 0x0071A158: jb 0x71a130 */
L_0071A15A:
    ebx = MEM32(ebp + 0x8); /* 0x0071A15A: mov ebx, dword ptr [ebp + 8] */
L_0071A15D:
    eax = MEM32(ebp + (-0x8)); /* 0x0071A15D: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x0071A160: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = eax; /* 0x0071A163: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x0071A166: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x0071A169: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071A17D; /* 0x0071A16E: je 0x71a17d */
L_0071A170:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071A170: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x0071A173: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x0071A177: push ebx */
    RECOMP_ICALL(eax); /* 0x0071A178: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071A17A: add esp, 8 */
    _flag_k = FK_ADD;
L_0071A17D:
    edi = POP32_VAL(esp); /* 0x0071A17D: pop edi */
    esi = POP32_VAL(esp); /* 0x0071A17E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071A17F: pop ebx */
    esp = ebp; /* 0x0071A180: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071A182: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071A183: ret  */
    RECOMP_REGS_OUT();
}

void sub_0071A190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0071A190u);

L_0071A190:
    PUSH32(esp, ebp); /* 0x0071A190: push ebp */
    ebp = esp; /* 0x0071A191: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0071A193: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0071A196: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0071A197: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0071A19A: push esi */
    PUSH32(esp, edi); /* 0x0071A19B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0071A19C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x18); /* 0x0071A19E: mov ecx, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x0071A1A1: mov edi, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0xC)) = edi; /* 0x0071A1A4: mov dword ptr [ebp - 0xc], edi */
    eax = ecx + (-0x40); /* 0x0071A1A7: lea eax, [ecx - 0x40] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0071A1AA: mov dword ptr [ebp - 0x14], eax */
    eax = ecx; /* 0x0071A1AD: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071A1AF: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x0071A1B0: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071A1B3: add eax, edx */
    _flag_k = FK_ADD;
    edx = edi + (-0x4); /* 0x0071A1B5: lea edx, [edi - 4] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0071A1B8: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x0071A1BB: add edi, -4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x0071A1BE: add edi, ecx */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071A1C0: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0071A1C4: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071A1C8: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0071A1CD: cvttsd2si eax, xmm0 */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x0071A1D1: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x0071A1D1: shl eax, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0071A1D4: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x0071A1D6: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x0071A1D9: movzx eax, word ptr [edi + 2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0071A1DD: mov dword ptr [ebp - 0x10], eax */
    eax = (uint32_t)MEM16(edi); /* 0x0071A1E0: movzx eax, word ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x0071A1E3: mov dword ptr [ebp - 4], eax */
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x0071A1E6: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0071A23B; /* 0x0071A1E9: jb 0x71a23b */
L_0071A1EB:
    ebx = MEM32(ebp + (-0x10)); /* 0x0071A1EB: mov ebx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x0071A1EE: mov ecx, dword ptr [ebp - 8] */
L_0071A1F1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x14)); /* 0x0071A1F1: add esi, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x0071A1F4: mov word ptr [edx], ax */
    MEM16(edx + 0x2) = (uint16_t)(LO16(ebx)); /* 0x0071A1F7: mov word ptr [edx + 2], bx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x0071A1FB: sub edx, 4 */
    _flag_k = FK_CMP;
    eax = esi + esi; /* 0x0071A1FE: lea eax, [esi + esi] */
    /* cmp eax, ecx */ /* 0x0071A201: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071A230; /* 0x0071A203: jl 0x71a230 */
L_0071A205:
    ecx = (uint32_t)MEM16(edi + (-0x2)); /* 0x0071A205: movzx ecx, word ptr [edi - 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x0071A209: sub edi, 4 */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(ebx); /* 0x0071A20C: movzx eax, bx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A20F: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x0071A211: mov eax, dword ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A214: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    ebx = (uint32_t)LO16(ecx); /* 0x0071A216: movzx ebx, cx */
    ecx = (uint32_t)MEM16(edi); /* 0x0071A219: movzx ecx, word ptr [edi] */
    eax = (uint32_t)LO16(eax); /* 0x0071A21C: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A21F: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A221: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)LO16(ecx); /* 0x0071A223: movzx eax, cx */
    ecx = MEM32(ebp + (-0x8)); /* 0x0071A226: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x0071A229: sub esi, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x0071A22B: mov dword ptr [ebp - 4], eax */
    goto L_0071A233; /* 0x0071A22E: jmp 0x71a233 */
L_0071A230:
    eax = MEM32(ebp + (-0x4)); /* 0x0071A230: mov eax, dword ptr [ebp - 4] */
L_0071A233:
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x0071A233: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_0071A1F1; /* 0x0071A236: jae 0x71a1f1 */
L_0071A238:
    ebx = MEM32(ebp + 0x8); /* 0x0071A238: mov ebx, dword ptr [ebp + 8] */
L_0071A23B:
    eax = MEM32(ebp + (-0x8)); /* 0x0071A23B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x0071A23E: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = eax; /* 0x0071A241: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x0071A244: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x0071A247: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071A25B; /* 0x0071A24C: je 0x71a25b */
L_0071A24E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071A24E: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x0071A251: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x0071A255: push ebx */
    RECOMP_ICALL(eax); /* 0x0071A256: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071A258: add esp, 8 */
    _flag_k = FK_ADD;
L_0071A25B:
    edi = POP32_VAL(esp); /* 0x0071A25B: pop edi */
    esi = POP32_VAL(esp); /* 0x0071A25C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071A25D: pop ebx */
    esp = ebp; /* 0x0071A25E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071A260: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071A261: ret  */
    RECOMP_REGS_OUT();
}

void sub_0071A270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0071A270u);

L_0071A270:
    PUSH32(esp, ebp); /* 0x0071A270: push ebp */
    ebp = esp; /* 0x0071A271: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0071A273: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0071A276: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0071A277: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0071A27A: push esi */
    PUSH32(esp, edi); /* 0x0071A27B: push edi */
    eax = MEM32(ebx + 0x18); /* 0x0071A27C: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(ebx + 0x10); /* 0x0071A27F: mov esi, dword ptr [ebx + 0x10] */
    edi = esi; /* 0x0071A282: mov edi, esi */
    ecx = eax + (-0x40); /* 0x0071A284: lea ecx, [eax - 0x40] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071A287: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x0071A288: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x0071A28B: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071A28E: add eax, edx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(edi + 0x2); /* 0x0071A290: movzx ecx, word ptr [edi + 2] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0071A294: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071A297: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x0071A299: mov dword ptr [ebp - 4], ecx */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071A29C: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0071A2A0: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071A2A4: mulsd xmm0, qword ptr [ebx + 8] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0071A2A9: cvttsd2si eax, xmm0 */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x0071A2AD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x0071A2AD: shl eax, 2 */
    MEM32(ebp + (-0x10)) = eax; /* 0x0071A2B0: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0071A2B3: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x0071A2B5: mov dword ptr [ebp - 0xc], eax */
    eax = (uint32_t)MEM16(edi); /* 0x0071A2B8: movzx eax, word ptr [edi] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0071A2BB: mov dword ptr [ebp - 0x14], eax */
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x0071A2BE: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0071A309; /* 0x0071A2C1: jae 0x71a309 */
L_0071A2C3:
    ebx = eax; /* 0x0071A2C3: mov ebx, eax */
L_0071A2C5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x10)); /* 0x0071A2C5: add edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    edi = edi + 0x4; /* 0x0071A2C8: lea edi, [edi + 4] */
    eax = edx + edx; /* 0x0071A2CB: lea eax, [edx + edx] */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x0071A2CE: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071A301; /* 0x0071A2D1: jl 0x71a301 */
L_0071A2D3:
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x0071A2D3: mov word ptr [esi + 2], cx */
    MEM16(esi) = (uint16_t)(LO16(ebx)); /* 0x0071A2D7: mov word ptr [esi], bx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x0071A2DA: add esi, 4 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(edi); /* 0x0071A2DD: movzx ecx, word ptr [edi] */
    eax = (uint32_t)LO16(ebx); /* 0x0071A2E0: movzx eax, bx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A2E3: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x0071A2E5: mov eax, dword ptr [ebp - 4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A2E8: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    ebx = (uint32_t)LO16(ecx); /* 0x0071A2EA: movzx ebx, cx */
    ecx = (uint32_t)MEM16(edi + 0x2); /* 0x0071A2ED: movzx ecx, word ptr [edi + 2] */
    eax = (uint32_t)LO16(eax); /* 0x0071A2F1: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A2F4: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A2F6: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x8)); /* 0x0071A2F8: sub edx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(ecx); /* 0x0071A2FB: movzx ecx, cx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x0071A2FE: mov dword ptr [ebp - 4], ecx */
L_0071A301:
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x0071A301: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0071A2C5; /* 0x0071A304: jb 0x71a2c5 */
L_0071A306:
    ebx = MEM32(ebp + 0x8); /* 0x0071A306: mov ebx, dword ptr [ebp + 8] */
L_0071A309:
    eax = MEM32(ebp + (-0x10)); /* 0x0071A309: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x0071A30C: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = eax; /* 0x0071A30F: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x50); /* 0x0071A312: mov eax, dword ptr [ebx + 0x50] */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x0071A315: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071A329; /* 0x0071A31A: je 0x71a329 */
L_0071A31C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071A31C: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x0071A31F: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x0071A323: push ebx */
    RECOMP_ICALL(eax); /* 0x0071A324: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071A326: add esp, 8 */
    _flag_k = FK_ADD;
L_0071A329:
    edi = POP32_VAL(esp); /* 0x0071A329: pop edi */
    esi = POP32_VAL(esp); /* 0x0071A32A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071A32B: pop ebx */
    esp = ebp; /* 0x0071A32C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071A32E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071A32F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0071A330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0071A330u);

L_0071A330:
    PUSH32(esp, ebp); /* 0x0071A330: push ebp */
    ebp = esp; /* 0x0071A331: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x0071A333: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0071A336: push ebx */
    PUSH32(esp, esi); /* 0x0071A337: push esi */
    PUSH32(esp, edi); /* 0x0071A338: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0071A339: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0071A33C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x18); /* 0x0071A33E: mov ecx, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x10); /* 0x0071A341: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x0071A344: mov dword ptr [ebp - 0x14], ebx */
    eax = ecx + (-0x80); /* 0x0071A347: lea eax, [ecx - 0x80] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x0071A34A: mov dword ptr [ebp - 0x1c], eax */
    eax = ecx; /* 0x0071A34D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071A34F: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF8u; /* 0x0071A350: add ecx, -8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x0071A353: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071A356: add eax, edx */
    _flag_k = FK_ADD;
    edx = ebx + (-0x8); /* 0x0071A358: lea edx, [ebx - 8] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x0071A35B: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x0071A35E: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x0071A360: movzx ecx, word ptr [ebx + 6] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071A364: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0071A368: cvtdq2pd xmm0, xmm0 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0071A36C: mov dword ptr [ebp - 0x10], ecx */
    { double _s = sse_f64(MEM64(edi + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071A36F: mulsd xmm0, qword ptr [edi + 8] */
    edi = (uint32_t)MEM16(ebx + 0x4); /* 0x0071A374: movzx edi, word ptr [ebx + 4] */
    MEM32(ebp + (-0x4)) = edi; /* 0x0071A378: mov dword ptr [ebp - 4], edi */
    edi = (uint32_t)MEM16(ebx + 0x2); /* 0x0071A37B: movzx edi, word ptr [ebx + 2] */
    MEM32(ebp + (-0x8)) = edi; /* 0x0071A37F: mov dword ptr [ebp - 8], edi */
    edi = (uint32_t)MEM16(ebx); /* 0x0071A382: movzx edi, word ptr [ebx] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0071A385: cvttsd2si eax, xmm0 */
    MEM32(ebp + (-0xC)) = edi; /* 0x0071A389: mov dword ptr [ebp - 0xc], edi */
    edi = MEM32(ebp + 0x8); /* 0x0071A38C: mov edi, dword ptr [ebp + 8] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x0071A38F: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x0071A38F: shl eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0071A392: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x0071A394: mov dword ptr [ebp - 0x18], eax */
    /* cmp edx, MEM32(ebp + (-0x14)) */ /* 0x0071A397: cmp edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0071A42D; /* 0x0071A39A: jb 0x71a42d */
L_0071A3A0:
    edi = eax; /* 0x0071A3A0: mov edi, eax */
L_0071A3A2:
    eax = MEM32(ebp + (-0x4)); /* 0x0071A3A2: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x1C)); /* 0x0071A3A5: add esi, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    MEM16(edx + 0x4) = (uint16_t)(LO16(eax)); /* 0x0071A3A8: mov word ptr [edx + 4], ax */
    eax = MEM32(ebp + (-0x8)); /* 0x0071A3AC: mov eax, dword ptr [ebp - 8] */
    MEM16(edx + 0x2) = (uint16_t)(LO16(eax)); /* 0x0071A3AF: mov word ptr [edx + 2], ax */
    eax = MEM32(ebp + (-0xC)); /* 0x0071A3B3: mov eax, dword ptr [ebp - 0xc] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x0071A3B6: mov word ptr [edx], ax */
    eax = esi + esi; /* 0x0071A3B9: lea eax, [esi + esi] */
    MEM16(edx + 0x6) = (uint16_t)(LO16(ecx)); /* 0x0071A3BC: mov word ptr [edx + 6], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x0071A3C0: sub edx, 8 */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x0071A3C3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071A41E; /* 0x0071A3C5: jl 0x71a41e */
L_0071A3C7:
    eax = MEM32(ebp + (-0x10)); /* 0x0071A3C7: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 8; /* 0x0071A3CA: sub ebx, 8 */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x0071A3CD: movzx eax, ax */
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x0071A3D0: movzx ecx, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A3D4: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A3D6: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)LO16(ecx); /* 0x0071A3D8: movzx eax, cx */
    ecx = (uint32_t)MEM16(ebx + 0x4); /* 0x0071A3DB: movzx ecx, word ptr [ebx + 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0071A3DF: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x0071A3E2: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)LO16(eax); /* 0x0071A3E5: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A3E8: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A3EA: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)LO16(ecx); /* 0x0071A3EC: movzx eax, cx */
    ecx = (uint32_t)MEM16(ebx + 0x2); /* 0x0071A3EF: movzx ecx, word ptr [ebx + 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x0071A3F3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x0071A3F6: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)LO16(eax); /* 0x0071A3F9: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A3FC: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A3FE: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)LO16(ecx); /* 0x0071A400: movzx eax, cx */
    ecx = (uint32_t)MEM16(ebx); /* 0x0071A403: movzx ecx, word ptr [ebx] */
    MEM32(ebp + (-0x8)) = eax; /* 0x0071A406: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x0071A409: mov eax, dword ptr [ebp - 0xc] */
    eax = (uint32_t)LO16(eax); /* 0x0071A40C: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A40F: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A411: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x0071A413: sub esi, edi */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(ecx); /* 0x0071A415: movzx eax, cx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0071A418: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x0071A41B: mov dword ptr [ebp - 0xc], eax */
L_0071A41E:
    /* cmp edx, MEM32(ebp + (-0x14)) */ /* 0x0071A41E: cmp edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_0071A3A2; /* 0x0071A421: jae 0x71a3a2 */
L_0071A427:
    edi = MEM32(ebp + 0x8); /* 0x0071A427: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x18)); /* 0x0071A42A: mov eax, dword ptr [ebp - 0x18] */
L_0071A42D:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071A42D: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = eax; /* 0x0071A430: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x0071A433: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x0071A436: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071A44A; /* 0x0071A43B: je 0x71a44a */
L_0071A43D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071A43D: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x0071A440: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, edi); /* 0x0071A444: push edi */
    RECOMP_ICALL(eax); /* 0x0071A445: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071A447: add esp, 8 */
    _flag_k = FK_ADD;
L_0071A44A:
    edi = POP32_VAL(esp); /* 0x0071A44A: pop edi */
    esi = POP32_VAL(esp); /* 0x0071A44B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071A44C: pop ebx */
    esp = ebp; /* 0x0071A44D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071A44F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071A450: ret  */
    RECOMP_REGS_OUT();
}

void sub_0071A460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0071A460u);

L_0071A460:
    PUSH32(esp, ebp); /* 0x0071A460: push ebp */
    ebp = esp; /* 0x0071A461: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x0071A463: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0071A466: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0071A467: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0071A46A: push esi */
    PUSH32(esp, edi); /* 0x0071A46B: push edi */
    eax = MEM32(ebx + 0x18); /* 0x0071A46C: mov eax, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x10); /* 0x0071A46F: mov edi, dword ptr [ebx + 0x10] */
    ecx = eax + (-0x80); /* 0x0071A472: lea ecx, [eax - 0x80] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071A475: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x0071A476: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)MEM16(edi); /* 0x0071A479: movzx esi, word ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071A47C: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x0071A47E: mov dword ptr [ebp - 0x18], ecx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x0071A481: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071A484: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x0071A486: mov dword ptr [ebp - 0x10], esi */
    esi = (uint32_t)MEM16(edi + 0x2); /* 0x0071A489: movzx esi, word ptr [edi + 2] */
    MEM32(ebp + (-0x4)) = esi; /* 0x0071A48D: mov dword ptr [ebp - 4], esi */
    esi = edi + 0x4; /* 0x0071A490: lea esi, [edi + 4] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071A493: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0071A497: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(ebx + 0x8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0071A49B: mulsd xmm0, qword ptr [ebx + 8] */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0071A4A0: cvttsd2si ecx, xmm0 */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x0071A4A4: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x0071A4A4: shl ecx, 3 */
    MEM32(ebp + (-0x14)) = ecx; /* 0x0071A4A7: mov dword ptr [ebp - 0x14], ecx */
    eax = edi + ecx; /* 0x0071A4AA: lea eax, [edi + ecx] */
    ecx = (uint32_t)MEM16(esi); /* 0x0071A4AD: movzx ecx, word ptr [esi] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0071A4B0: mov dword ptr [ebp - 8], ecx */
    ecx = (uint32_t)MEM16(edi + 0x6); /* 0x0071A4B3: movzx ecx, word ptr [edi + 6] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x0071A4B7: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0071A4BA: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x0071A4BD: mov dword ptr [ebp - 0x1c], eax */
    /* cmp edi, eax */ /* 0x0071A4C0: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0071A55A; /* 0x0071A4C2: jae 0x71a55a */
L_0071A4C8:
    ebx = MEM32(ebp + (-0x18)); /* 0x0071A4C8: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0071A4CB: add edi, 4 */
    _flag_k = FK_ADD;
    edi = edi; /* 0x0071A4CE: mov edi, edi */
L_0071A4D0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0071A4D0: add edx, ecx */
    _flag_k = FK_ADD;
    esi = esi + 0x8; /* 0x0071A4D2: lea esi, [esi + 8] */
    eax = edx + edx; /* 0x0071A4D5: lea eax, [edx + edx] */
    /* cmp eax, ebx */ /* 0x0071A4D8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0071A54B; /* 0x0071A4DA: jl 0x71a54b */
L_0071A4DC:
    ecx = MEM32(ebp + (-0x4)); /* 0x0071A4DC: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x10)); /* 0x0071A4DF: mov eax, dword ptr [ebp - 0x10] */
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x0071A4E2: mov word ptr [edi - 2], cx */
    ecx = MEM32(ebp + (-0x8)); /* 0x0071A4E6: mov ecx, dword ptr [ebp - 8] */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x0071A4E9: mov word ptr [edi], cx */
    ecx = MEM32(ebp + (-0xC)); /* 0x0071A4EC: mov ecx, dword ptr [ebp - 0xc] */
    MEM16(edi + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x0071A4EF: mov word ptr [edi - 4], ax */
    MEM16(edi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x0071A4F3: mov word ptr [edi + 2], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x0071A4F7: add edi, 8 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(esi + (-0x4)); /* 0x0071A4FA: movzx ecx, word ptr [esi - 4] */
    eax = (uint32_t)LO16(eax); /* 0x0071A4FE: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A501: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A503: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)LO16(ecx); /* 0x0071A505: movzx eax, cx */
    ecx = (uint32_t)MEM16(esi + (-0x2)); /* 0x0071A508: movzx ecx, word ptr [esi - 2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0071A50C: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x0071A50F: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)LO16(eax); /* 0x0071A512: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A515: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A517: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)LO16(ecx); /* 0x0071A519: movzx eax, cx */
    ecx = (uint32_t)MEM16(esi); /* 0x0071A51C: movzx ecx, word ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x0071A51F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x0071A522: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)LO16(eax); /* 0x0071A525: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A528: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A52A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)LO16(ecx); /* 0x0071A52C: movzx eax, cx */
    ecx = (uint32_t)MEM16(esi + 0x2); /* 0x0071A52F: movzx ecx, word ptr [esi + 2] */
    MEM32(ebp + (-0x8)) = eax; /* 0x0071A533: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x0071A536: mov eax, dword ptr [ebp - 0xc] */
    eax = (uint32_t)LO16(eax); /* 0x0071A539: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0071A53C: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0071A53E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x0071A540: sub edx, ebx */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(ecx); /* 0x0071A542: movzx eax, cx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0071A545: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0xC)) = eax; /* 0x0071A548: mov dword ptr [ebp - 0xc], eax */
L_0071A54B:
    eax = edi + (-0x4); /* 0x0071A54B: lea eax, [edi - 4] */
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x0071A54E: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0071A4D0; /* 0x0071A551: jb 0x71a4d0 */
L_0071A557:
    ebx = MEM32(ebp + 0x8); /* 0x0071A557: mov ebx, dword ptr [ebp + 8] */
L_0071A55A:
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + 1; /* 0x0071A55A: inc dword ptr [ebx + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(ebx + 0x50); /* 0x0071A55D: mov eax, dword ptr [ebx + 0x50] */
    MEM32(ebx + 0x18) = ecx; /* 0x0071A560: mov dword ptr [ebx + 0x18], ecx */
    /* cmp MEM32(ebx + eax * 4 + 0x28), 0 */ /* 0x0071A563: cmp dword ptr [ebx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071A577; /* 0x0071A568: je 0x71a577 */
L_0071A56A:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0071A56A: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4 + 0x28); /* 0x0071A56D: mov eax, dword ptr [ebx + eax*4 + 0x28] */
    PUSH32(esp, ebx); /* 0x0071A571: push ebx */
    RECOMP_ICALL(eax); /* 0x0071A572: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071A574: add esp, 8 */
    _flag_k = FK_ADD;
L_0071A577:
    edi = POP32_VAL(esp); /* 0x0071A577: pop edi */
    esi = POP32_VAL(esp); /* 0x0071A578: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071A579: pop ebx */
    esp = ebp; /* 0x0071A57A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071A57C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071A57D: ret  */
    RECOMP_REGS_OUT();
}
