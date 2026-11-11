#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00621440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621440u);

L_00621440:
    PUSH32(esp, ebp); /* 0x00621440: push ebp */
    ebp = esp; /* 0x00621441: mov ebp, esp */
    edx = (uint32_t)((int32_t)MEM32(ecx + 0x3D8) * (int32_t)0x1D4u); /* 0x00621443: imul edx, dword ptr [ecx + 0x3d8], 0x1d4 */
    eax = MEM32(ecx + 0x504); /* 0x0062144D: mov eax, dword ptr [ecx + 0x504] */
    /* cmp MEM8(edx + eax + 0x1C8), 2 */ /* 0x00621453: cmp byte ptr [edx + eax + 0x1c8], 2 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x1C8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00621463; /* 0x0062145B: jne 0x621463 */
L_0062145D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0062145D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x0062145F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621460: ret 4 */
L_00621463:
    SET_LO8(ecx, MEM8(ecx + 0x3D4)); /* 0x00621463: mov cl, byte ptr [ecx + 0x3d4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00621469: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), MEM8(ebp + 0x8) */ /* 0x0062146B: cmp cl, byte ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x8)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x0062146E: sete al */
    ebp = POP32_VAL(esp); /* 0x00621471: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621472: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621480u);

L_00621480:
    PUSH32(esp, ebp); /* 0x00621480: push ebp */
    ebp = esp; /* 0x00621481: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00621483: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00621486: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00621489: push esi */
    esi = ecx; /* 0x0062148A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0062148C: push edi */
    /* cmp MEM8(esi + 0x15), 0 */ /* 0x0062148D: cmp byte ptr [esi + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062149D; /* 0x00621491: je 0x62149d */
L_00621493:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00621493: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x00621495: pop edi */
    esi = POP32_VAL(esp); /* 0x00621496: pop esi */
    esp = ebp; /* 0x00621497: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621499: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062149A: ret 4 */
L_0062149D:
    eax = MEM32(esi + 0x3D8); /* 0x0062149D: mov eax, dword ptr [esi + 0x3d8] */
    edx = MEM32(esi + 0x504); /* 0x006214A3: mov edx, dword ptr [esi + 0x504] */
    edi = (uint32_t)((int32_t)eax * (int32_t)0x1D4u); /* 0x006214A9: imul edi, eax, 0x1d4 */
    /* cmp MEM32(edi + edx + 0x4), 0 */ /* 0x006214AF: cmp dword ptr [edi + edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006214D7; /* 0x006214B4: jne 0x6214d7 */
L_006214B6:
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x006214B6: mov cl, byte ptr [ebp + 8] */
    /* cmp LO8(ecx), 0x23u */ /* 0x006214B9: cmp cl, 0x23 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006214C2; /* 0x006214BC: jne 0x6214c2 */
L_006214BE:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006214BE: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006214DA; /* 0x006214C0: jmp 0x6214da */
L_006214C2:
    /* cmp LO8(ecx), 0x24u */ /* 0x006214C2: cmp cl, 0x24 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (uint32_t)LO8(ecx); /* 0x006214C5: movzx eax, cl */
    MEM32(esp + 0x8) = 3; /* 0x006214C8: mov dword ptr [esp + 8], 3 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = MEM32(esp + 0x8); } /* 0x006214D0: cmove eax, dword ptr [esp + 8] */
    goto L_006214DA; /* 0x006214D5: jmp 0x6214da */
L_006214D7:
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x006214D7: mov al, byte ptr [ebp + 8] */
L_006214DA:
    /* cmp MEM32(esi + 0x3D8), 0 */ /* 0x006214DA: cmp dword ptr [esi + 0x3d8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3D8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO8(eax); /* 0x006214E1: movzx ecx, al */
    MEM32(esp + 0x8) = eax; /* 0x006214E4: mov dword ptr [esp + 8], eax */
    eax = MEM32(edi + edx + 0x8); /* 0x006214E8: mov eax, dword ptr [edi + edx + 8] */
    edx = MEM32(eax + ecx * 8); /* 0x006214EC: mov edx, dword ptr [eax + ecx*8] */
    eax = MEM32(eax + ecx * 8 + 0x4); /* 0x006214EF: mov eax, dword ptr [eax + ecx*8 + 4] */
    MEM32(esp + 0xC) = eax; /* 0x006214F3: mov dword ptr [esp + 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062160A; /* 0x006214F7: je 0x62160a */
L_006214FD:
    /* test LO8(eax), LO8(eax) */ /* 0x006214FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062160A; /* 0x006214FF: je 0x62160a */
L_00621505:
    ecx = esi; /* 0x00621505: mov ecx, esi */
    PUSH32(esp, edx); /* 0x00621507: push edx */
    /* cmp LO8(eax), 1 */ /* 0x00621508: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00621523; /* 0x0062150A: jne 0x621523 */
L_0062150C:
    RECOMP_CALL(sub_00621400); /* 0x0062150C: call 0x621400 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x00621511: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00621514: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00621516: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    eax = eax & 0x64u; /* 0x00621518: and eax, 0x64 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0062151B: pop edi */
    esi = POP32_VAL(esp); /* 0x0062151C: pop esi */
    esp = ebp; /* 0x0062151D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062151F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621520: ret 4 */
L_00621523:
    /* cmp LO8(eax), 3 */ /* 0x00621523: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062153E; /* 0x00621525: jne 0x62153e */
L_00621527:
    RECOMP_CALL(sub_00621440); /* 0x00621527: call 0x621440 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x0062152C: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0062152F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00621531: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    eax = eax & 0x64u; /* 0x00621533: and eax, 0x64 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00621536: pop edi */
    esi = POP32_VAL(esp); /* 0x00621537: pop esi */
    esp = ebp; /* 0x00621538: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062153A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062153B: ret 4 */
L_0062153E:
    RECOMP_CALL(sub_00621280); /* 0x0062153E: call 0x621280 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x00621543: mov eax, dword ptr [esp + 0xc] */
    _xmm[2].u64[0] = MEM32(0x80951C); _xmm[2].u64[1] = 0; /* 0x00621547: movss xmm2, dword ptr [0x80951c] */
    eax = (uint32_t)HI8(eax); /* 0x0062154F: movzx eax, ah */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x00621552: mulss xmm0, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x00621556: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006215C1; /* 0x00621559: je 0x6215c1 */
L_0062155B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0062155B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_00621587; /* 0x0062155C: je 0x621587 */
L_0062155E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0062155E: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00621493; /* 0x0062155F: jne 0x621493 */
L_00621565:
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x00621565: xorps xmm1, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621568: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0062157B; /* 0x0062156B: jbe 0x62157b */
L_0062156D:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0062156D: cvttss2si eax, xmm0 */
    eax = (uint32_t)LO8(eax); /* 0x00621571: movzx eax, al */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x00621574: movd xmm1, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x00621578: cvtdq2ps xmm1, xmm1 */
L_0062157B:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0062157B: cvttss2si eax, xmm1 */
    edi = POP32_VAL(esp); /* 0x0062157F: pop edi */
    esi = POP32_VAL(esp); /* 0x00621580: pop esi */
    esp = ebp; /* 0x00621581: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621583: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621584: ret 4 */
L_00621587:
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x00621587: xorps xmm1, xmm1 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062158A: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006215B5; /* 0x0062158D: jbe 0x6215b5 */
L_0062158F:
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x0062158F: cvtss2sd xmm0, xmm0 */
    { xmm_t _s = xmm_ld(0x809C90); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x00621593: andpd xmm0, xmmword ptr [0x809c90] */
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x0062159B: cvtsd2ss xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062159F: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_006215A7; /* 0x006215A2: ja 0x6215a7 */
L_006215A4:
    _xmm[1] = _xmm[0]; /* 0x006215A4: movaps xmm1, xmm0 */
L_006215A7:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x006215A7: cvttss2si eax, xmm1 */
    eax = (uint32_t)LO8(eax); /* 0x006215AB: movzx eax, al */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006215AE: movd xmm1, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x006215B2: cvtdq2ps xmm1, xmm1 */
L_006215B5:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x006215B5: cvttss2si eax, xmm1 */
    edi = POP32_VAL(esp); /* 0x006215B9: pop edi */
    esi = POP32_VAL(esp); /* 0x006215BA: pop esi */
    esp = ebp; /* 0x006215BB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006215BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006215BE: ret 4 */
L_006215C1:
    _xmm[1] = _xmm[0]; /* 0x006215C1: movaps xmm1, xmm0 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006215C4: addss xmm1, xmm2 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x006215C8: xorps xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006215CB: ucomiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    { float _s = sse_f32(MEM32(0x808C18)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006215CE: mulss xmm1, dword ptr [0x808c18] */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006215D6: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006215D7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_00621672; /* 0x006215DA: jnp 0x621672 */
L_006215E0:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006215E0: xorps xmm0, xmm0 */
    _xmm[0].f64[0] = (double)_xmm[1].f32[0]; /* 0x006215E3: cvtss2sd xmm0, xmm1 */
    { xmm_t _s = xmm_ld(0x809C90); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x006215E7: andpd xmm0, xmmword ptr [0x809c90] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006215EF: cvtpd2ps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006215F3: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_006215FB; /* 0x006215F6: ja 0x6215fb */
L_006215F8:
    _xmm[2] = _xmm[0]; /* 0x006215F8: movaps xmm2, xmm0 */
L_006215FB:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[2].f32[0], 1); /* 0x006215FB: cvttss2si eax, xmm2 */
    eax = (uint32_t)LO8(eax); /* 0x006215FF: movzx eax, al */
    edi = POP32_VAL(esp); /* 0x00621602: pop edi */
    esi = POP32_VAL(esp); /* 0x00621603: pop esi */
    esp = ebp; /* 0x00621604: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621606: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621607: ret 4 */
L_0062160A:
    eax = esp + 0xC; /* 0x0062160A: lea eax, [esp + 0xc] */
    MEM32(esp + 0xC) = edx; /* 0x0062160E: mov dword ptr [esp + 0xc], edx */
    PUSH32(esp, eax); /* 0x00621612: push eax */
    eax = esp + 0x14; /* 0x00621613: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x00621617: push eax */
    ecx = esi + 0x554; /* 0x00621618: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x0062161E: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x10); /* 0x00621623: mov eax, dword ptr [esp + 0x10] */
    /* cmp eax, MEM32(esi + 0x554) */ /* 0x00621627: cmp eax, dword ptr [esi + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00621672; /* 0x0062162D: je 0x621672 */
L_0062162F:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0062162F: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x00621632: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00621672; /* 0x00621634: je 0x621672 */
L_00621636:
    eax = MEM32(esp + 0x8); /* 0x00621636: mov eax, dword ptr [esp + 8] */
    /* cmp LO8(eax), 1 */ /* 0x0062163A: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062164F; /* 0x0062163C: je 0x62164f */
L_0062163E:
    /* cmp LO8(eax), 2 */ /* 0x0062163E: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062164F; /* 0x00621640: je 0x62164f */
L_00621642:
    eax = 0x64u; /* 0x00621642: mov eax, 0x64 */
    edi = POP32_VAL(esp); /* 0x00621647: pop edi */
    esi = POP32_VAL(esp); /* 0x00621648: pop esi */
    esp = ebp; /* 0x00621649: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062164B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062164C: ret 4 */
L_0062164F:
    eax = MEM32(esi + 0x504); /* 0x0062164F: mov eax, dword ptr [esi + 0x504] */
    _xmm[0].u64[0] = MEM32(edi + eax + 0x24); _xmm[0].u64[1] = 0; /* 0x00621655: movss xmm0, dword ptr [edi + eax + 0x24] */
    { float _s = sse_f32(MEM32(0x80951C)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0062165B: mulss xmm0, dword ptr [0x80951c] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x00621663: cvttss2si eax, xmm0 */
    eax = (uint32_t)LO8(eax); /* 0x00621667: movzx eax, al */
    edi = POP32_VAL(esp); /* 0x0062166A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062166B: pop esi */
    esp = ebp; /* 0x0062166C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062166E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062166F: ret 4 */
L_00621672:
    edi = POP32_VAL(esp); /* 0x00621672: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00621673: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00621675: pop esi */
    esp = ebp; /* 0x00621676: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621678: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621679: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621680u);

L_00621680:
    PUSH32(esp, ebp); /* 0x00621680: push ebp */
    ebp = esp; /* 0x00621681: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621683: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x00621684: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00621687: push esi */
    PUSH32(esp, edi); /* 0x00621688: push edi */
    edi = MEM32(0x870268); /* 0x00621689: mov edi, dword ptr [0x870268] */
    edx = (uint32_t)LO8(eax); /* 0x0062168F: movzx edx, al */
    esi = (uint32_t)((int32_t)MEM32(edi + 0x3D8) * (int32_t)0x1D4u); /* 0x00621692: imul esi, dword ptr [edi + 0x3d8], 0x1d4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x504));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0x504); /* 0x0062169C: add esi, dword ptr [edi + 0x504] */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0x1C8), 0 */ /* 0x006216A2: cmp byte ptr [esi + 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1C8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x8); /* 0x006216A9: mov eax, dword ptr [esi + 8] */
    ecx = eax + edx * 8; /* 0x006216AC: lea ecx, [eax + edx*8] */
    eax = MEM32(ecx); /* 0x006216AF: mov eax, dword ptr [ecx] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006216C3; /* 0x006216B1: jne 0x6216c3 */
L_006216B3:
    PUSH32(esp, eax); /* 0x006216B3: push eax */
    ecx = edi; /* 0x006216B4: mov ecx, edi */
    RECOMP_CALL(sub_00620F10); /* 0x006216B6: call 0x620f10 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006216BB: pop edi */
    esi = POP32_VAL(esp); /* 0x006216BC: pop esi */
    esp = ebp; /* 0x006216BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006216BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006216C0: ret 4 */
L_006216C3:
    /* cmp MEM8(ecx + 0x4), 1 */ /* 0x006216C3: cmp byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006216D1; /* 0x006216C7: jne 0x6216d1 */
L_006216C9:
    PUSH32(esp, eax); /* 0x006216C9: push eax */
    ecx = edi; /* 0x006216CA: mov ecx, edi */
    RECOMP_CALL(sub_00621850); /* 0x006216CC: call 0x621850 */
    RECOMP_FLAGS_IN();
L_006216D1:
    edi = POP32_VAL(esp); /* 0x006216D1: pop edi */
    esi = POP32_VAL(esp); /* 0x006216D2: pop esi */
    esp = ebp; /* 0x006216D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006216D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006216D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006216E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006216E0u);

L_006216E0:
    PUSH32(esp, ebp); /* 0x006216E0: push ebp */
    ebp = esp; /* 0x006216E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006216E3: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x006216E6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x006216E9: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, ebx); /* 0x006216EB: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x006216EC: mov ebx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO8(eax); /* 0x006216EF: movzx eax, al */
    PUSH32(esp, esi); /* 0x006216F2: push esi */
    esi = MEM32(ebp + 0xC); /* 0x006216F3: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006216F6: mov dword ptr [ebp - 8], eax */
    eax = MEM32(eax * 4 + 0x7CF340); /* 0x006216F9: mov eax, dword ptr [eax*4 + 0x7cf340] */
    PUSH32(esp, edi); /* 0x00621700: push edi */
    edi = MEM32(0x870268); /* 0x00621701: mov edi, dword ptr [0x870268] */
    MEM32(ebp + 0x8) = eax; /* 0x00621707: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x0062170A: mov dword ptr [ebp - 4], esi */
    ecx = ecx; /* 0x0062170D: lea ecx, [ecx] */
L_00621710:
    esi = (uint32_t)LO8(edx); /* 0x00621710: movzx esi, dl */
    /* test MEM32(esi * 4 + 0x7CF340), eax */ /* 0x00621713: test dword ptr [esi*4 + 0x7cf340], eax */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x7CF340)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00621747; /* 0x0062171A: je 0x621747 */
L_0062171C:
    ecx = (uint32_t)((int32_t)MEM32(edi + 0x3D8) * (int32_t)0x1D4u); /* 0x0062171C: imul ecx, dword ptr [edi + 0x3d8], 0x1d4 */
    eax = MEM32(edi + 0x504); /* 0x00621726: mov eax, dword ptr [edi + 0x504] */
    eax = MEM32(ecx + eax + 0x8); /* 0x0062172C: mov eax, dword ptr [ecx + eax + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x00621730: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM32(eax + esi * 8), ecx */ /* 0x00621733: cmp dword ptr [eax + esi*8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + esi * 8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00621744; /* 0x00621736: jne 0x621744 */
L_00621738:
    /* cmp MEM8(eax + esi * 8 + 0x4), LO8(ebx) */ /* 0x00621738: cmp byte ptr [eax + esi*8 + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + esi * 8 + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00621744; /* 0x0062173C: jne 0x621744 */
L_0062173E:
    /* cmp MEM8(eax + esi * 8 + 0x5), HI8(ebx) */ /* 0x0062173E: cmp byte ptr [eax + esi*8 + 5], bh */
    _flag_a = (uint32_t)(MEM8(eax + esi * 8 + 0x5)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00621750; /* 0x00621742: je 0x621750 */
L_00621744:
    eax = MEM32(ebp + 0x8); /* 0x00621744: mov eax, dword ptr [ebp + 8] */
L_00621747:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(edx, LO8(edx) + 1); /* 0x00621747: inc dl */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* cmp LO8(edx), 0x25u */ /* 0x00621749: cmp dl, 0x25 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00621710; /* 0x0062174C: jb 0x621710 */
L_0062174E:
    goto L_0062177E; /* 0x0062174E: jmp 0x62177e */
L_00621750:
    ecx = (uint32_t)((int32_t)MEM32(edi + 0x3D8) * (int32_t)0x1D4u); /* 0x00621750: imul ecx, dword ptr [edi + 0x3d8], 0x1d4 */
    eax = MEM32(edi + 0x504); /* 0x0062175A: mov eax, dword ptr [edi + 0x504] */
    edx = (uint32_t)LO8(edx); /* 0x00621760: movzx edx, dl */
    ecx = MEM32(ecx + eax + 0x8); /* 0x00621763: mov ecx, dword ptr [ecx + eax + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00621767: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + edx * 8) = eax; /* 0x0062176C: mov dword ptr [ecx + edx*8], eax */
    eax = MEM32(0x7DEA70); /* 0x0062176F: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + edx * 8 + 0x4) = eax; /* 0x00621774: mov dword ptr [ecx + edx*8 + 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x00621778: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x0062177B: mov dword ptr [ebp - 4], eax */
L_0062177E:
    ecx = (uint32_t)((int32_t)MEM32(edi + 0x3D8) * (int32_t)0x1D4u); /* 0x0062177E: imul ecx, dword ptr [edi + 0x3d8], 0x1d4 */
    eax = MEM32(edi + 0x504); /* 0x00621788: mov eax, dword ptr [edi + 0x504] */
    edx = MEM32(ebp + (-0x8)); /* 0x0062178E: mov edx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x4)); /* 0x00621791: mov esi, dword ptr [ebp - 4] */
    ecx = MEM32(ecx + eax + 0x8); /* 0x00621794: mov ecx, dword ptr [ecx + eax + 8] */
    MEM32(ecx + edx * 8) = esi; /* 0x00621798: mov dword ptr [ecx + edx*8], esi */
    eax = MEM32(ebp + 0x10); /* 0x0062179B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + edx * 8 + 0x4) = eax; /* 0x0062179E: mov dword ptr [ecx + edx*8 + 4], eax */
    /* cmp MEM8(ebp + 0x10), 2 */ /* 0x006217A2: cmp byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006217C0; /* 0x006217A6: jne 0x6217c0 */
L_006217A8:
    ecx = (uint32_t)((int32_t)MEM32(edi + 0x3D8) * (int32_t)0x1D4u); /* 0x006217A8: imul ecx, dword ptr [edi + 0x3d8], 0x1d4 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006217B2: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x504));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0x504); /* 0x006217B5: add ecx, dword ptr [edi + 0x504] */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_00623D10); /* 0x006217BB: call 0x623d10 */
    RECOMP_FLAGS_IN();
L_006217C0:
    edi = POP32_VAL(esp); /* 0x006217C0: pop edi */
    esi = POP32_VAL(esp); /* 0x006217C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x006217C2: pop ebx */
    esp = ebp; /* 0x006217C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006217C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006217C6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006217D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006217D0u);

L_006217D0:
    PUSH32(esp, ebp); /* 0x006217D0: push ebp */
    ebp = esp; /* 0x006217D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006217D3: push ecx */
    eax = MEM32(0x870268); /* 0x006217D4: mov eax, dword ptr [0x870268] */
    ecx = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x006217D9: imul ecx, dword ptr [eax + 0x3d8], 0x1d4 */
    eax = MEM32(eax + 0x504); /* 0x006217E3: mov eax, dword ptr [eax + 0x504] */
    edx = MEM32(ecx + eax + 0x18); /* 0x006217E9: mov edx, dword ptr [ecx + eax + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + eax + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + eax + 0x14); /* 0x006217ED: sub edx, dword ptr [ecx + eax + 0x14] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x006217F1: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x006217F6: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = 1; /* 0x006217F8: mov ecx, 1 */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006217FD: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621800: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621802: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621802: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621805: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x00621807: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00621809: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0062180B: neg eax */
    _flag_k = FK_CMP;
    esp = ebp; /* 0x0062180D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062180F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00621810: ret  */
    RECOMP_REGS_OUT();
}

void sub_00621820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621820u);

L_00621820:
    PUSH32(esp, ebp); /* 0x00621820: push ebp */
    ebp = esp; /* 0x00621821: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621823: push ecx */
    eax = MEM32(0x870268); /* 0x00621824: mov eax, dword ptr [0x870268] */
    edx = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621829: imul edx, dword ptr [eax + 0x3d8], 0x1d4 */
    ecx = MEM32(eax + 0x504); /* 0x00621833: mov ecx, dword ptr [eax + 0x504] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00621839: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + ecx + 0x38), eax */ /* 0x0062183B: cmp dword ptr [edx + ecx + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(edx + ecx + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x0062183F: setne al */
    esp = ebp; /* 0x00621842: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621844: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00621845: ret  */
    RECOMP_REGS_OUT();
}

void sub_00621850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621850u);

L_00621850:
    PUSH32(esp, ebp); /* 0x00621850: push ebp */
    ebp = esp; /* 0x00621851: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00621853: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00621856: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00621859: push esi */
    esi = ecx; /* 0x0062185A: mov esi, ecx */
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x0062185C: mov cl, byte ptr [ebp + 8] */
    eax = (uint32_t)LO8(ecx); /* 0x0062185F: movzx eax, cl */
    PUSH32(esp, edi); /* 0x00621862: push edi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00621863: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00621935; /* 0x00621866: je 0x621935 */
L_0062186C:
    /* cmp MEM8(esi + 0x30), LO8(ecx) */ /* 0x0062186C: cmp byte ptr [esi + 0x30], cl */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00621875; /* 0x0062186F: jne 0x621875 */
L_00621871:
    MEM8(esi + 0x30) = (uint8_t)(0xFFu); /* 0x00621871: mov byte ptr [esi + 0x30], 0xff */
L_00621875:
    eax = ebp + 0x8; /* 0x00621875: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00621878: push eax */
    eax = esp + 0x10; /* 0x00621879: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x0062187D: push eax */
    ecx = esi + 0x534; /* 0x0062187E: lea ecx, [esi + 0x534] */
    RECOMP_CALL(sub_00625D60); /* 0x00621884: call 0x625d60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x00621889: mov eax, dword ptr [esp + 0xc] */
    /* cmp eax, MEM32(esi + 0x534) */ /* 0x0062188D: cmp eax, dword ptr [esi + 0x534] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x534));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006218B5; /* 0x00621893: jne 0x6218b5 */
L_00621895:
    eax = ebp + 0x8; /* 0x00621895: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00621898: push ecx */
    MEM32(esp + 0x10) = eax; /* 0x00621899: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0x10; /* 0x0062189D: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x006218A1: push eax */
    PUSH32(esp, ecx); /* 0x006218A2: push ecx */
    eax = esp + 0x1C; /* 0x006218A3: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x006218A7: push eax */
    ecx = esi + 0x534; /* 0x006218A8: lea ecx, [esi + 0x534] */
    RECOMP_CALL(sub_00626C90); /* 0x006218AE: call 0x626c90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x006218B3: mov eax, dword ptr [eax] */
L_006218B5:
    MEM8(eax + 0x9) = (uint8_t)(0); /* 0x006218B5: mov byte ptr [eax + 9], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5B4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5B4u; /* 0x006218B9: add esi, 0x5b4 */
    _flag_k = FK_ADD;
    eax = ebp + 0x8; /* 0x006218BF: lea eax, [ebp + 8] */
    ecx = esi; /* 0x006218C2: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006218C4: push eax */
    eax = esp + 0x10; /* 0x006218C5: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x006218C9: push eax */
    RECOMP_CALL(sub_00625D60); /* 0x006218CA: call 0x625d60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x006218CF: mov eax, dword ptr [esp + 0xc] */
    /* cmp eax, MEM32(esi) */ /* 0x006218D3: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006218F3; /* 0x006218D5: jne 0x6218f3 */
L_006218D7:
    eax = ebp + 0x8; /* 0x006218D7: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x006218DA: push ecx */
    MEM32(esp + 0x10) = eax; /* 0x006218DB: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0x10; /* 0x006218DF: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x006218E3: push eax */
    PUSH32(esp, ecx); /* 0x006218E4: push ecx */
    eax = esp + 0x1C; /* 0x006218E5: lea eax, [esp + 0x1c] */
    ecx = esi; /* 0x006218E9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006218EB: push eax */
    RECOMP_CALL(sub_00626DB0); /* 0x006218EC: call 0x626db0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x006218F1: mov eax, dword ptr [eax] */
L_006218F3:
    MEM32(eax + 0x10) = 0; /* 0x006218F3: mov dword ptr [eax + 0x10], 0 */
    ecx = esi; /* 0x006218FA: mov ecx, esi */
    eax = ebp + 0x8; /* 0x006218FC: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x006218FF: push eax */
    eax = esp + 0x10; /* 0x00621900: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00621904: push eax */
    RECOMP_CALL(sub_00625D60); /* 0x00621905: call 0x625d60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x0062190A: mov eax, dword ptr [esp + 0xc] */
    /* cmp eax, MEM32(esi) */ /* 0x0062190E: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062192E; /* 0x00621910: jne 0x62192e */
L_00621912:
    eax = ebp + 0x8; /* 0x00621912: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00621915: push ecx */
    MEM32(esp + 0x10) = eax; /* 0x00621916: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0x10; /* 0x0062191A: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x0062191E: push eax */
    PUSH32(esp, ecx); /* 0x0062191F: push ecx */
    eax = esp + 0x1C; /* 0x00621920: lea eax, [esp + 0x1c] */
    ecx = esi; /* 0x00621924: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00621926: push eax */
    RECOMP_CALL(sub_00626DB0); /* 0x00621927: call 0x626db0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x0062192C: mov eax, dword ptr [eax] */
L_0062192E:
    MEM32(eax + 0xC) = 0; /* 0x0062192E: mov dword ptr [eax + 0xc], 0 */
L_00621935:
    edi = POP32_VAL(esp); /* 0x00621935: pop edi */
    esi = POP32_VAL(esp); /* 0x00621936: pop esi */
    esp = ebp; /* 0x00621937: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621939: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062193A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621940u);

L_00621940:
    PUSH32(esp, ebp); /* 0x00621940: push ebp */
    ebp = esp; /* 0x00621941: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621943: push ecx */
    ecx = MEM32(0x870268); /* 0x00621944: mov ecx, dword ptr [0x870268] */
    SET_LO8(eax, MEM8(ecx + 0x3D4)); /* 0x0062194A: mov al, byte ptr [ecx + 0x3d4] */
    /* cmp LO8(eax), MEM8(ebp + 0x8) */ /* 0x00621950: cmp al, byte ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x8)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062195C; /* 0x00621953: jne 0x62195c */
L_00621955:
    MEM8(ecx + 0x3D4) = (uint8_t)(0); /* 0x00621955: mov byte ptr [ecx + 0x3d4], 0 */
L_0062195C:
    esp = ebp; /* 0x0062195C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062195E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062195F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621970u);

L_00621970:
    PUSH32(esp, ebp); /* 0x00621970: push ebp */
    ebp = esp; /* 0x00621971: mov ebp, esp */
    eax = MEM32(0x870268); /* 0x00621973: mov eax, dword ptr [0x870268] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00621978: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x0062197B: imul ecx, dword ptr [eax + 0x3d8], 0x1d4 */
    eax = MEM32(eax + 0x504); /* 0x00621985: mov eax, dword ptr [eax + 0x504] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0062198B: add ecx, eax */
    _flag_k = FK_ADD;
    _xmm[1].u64[0] = MEM32(ecx + 0x20); _xmm[1].u64[1] = 0; /* 0x0062198D: movss xmm1, dword ptr [ecx + 0x20] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], sse_f32(MEM32(0x808B1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621992: comiss xmm1, dword ptr [0x808b1c] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_006219A3; /* 0x00621999: ja 0x6219a3 */
L_0062199B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0062199B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x0062199D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062199F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006219A0: ret 0x10 */
L_006219A3:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006219A3: push dword ptr [ebp + 0x14] */
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x54u); /* 0x006219A6: imul eax, dword ptr [ebp + 8], 0x54 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006219AA: push dword ptr [ebp + 0x10] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006219AD: mulss xmm1, xmm2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006219B1: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x78u; /* 0x006219B4: add eax, 0x78 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006219B7: add ecx, eax */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_00622AD0); /* 0x006219B9: call 0x622ad0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006219BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006219C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006219C1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006219D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006219D0u);

L_006219D0:
    PUSH32(esp, ebp); /* 0x006219D0: push ebp */
    ebp = esp; /* 0x006219D1: mov ebp, esp */
    eax = MEM32(0x870268); /* 0x006219D3: mov eax, dword ptr [0x870268] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006219D8: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x006219DB: imul ecx, dword ptr [eax + 0x3d8], 0x1d4 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006219E5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006219E8: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x504));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x504); /* 0x006219EB: add ecx, dword ptr [eax + 0x504] */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_00625010); /* 0x006219F1: call 0x625010 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006219F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006219F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006219F9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00621A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621A00u);

L_00621A00:
    PUSH32(esp, ebp); /* 0x00621A00: push ebp */
    ebp = esp; /* 0x00621A01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621A03: push ecx */
    eax = MEM32(0x870268); /* 0x00621A04: mov eax, dword ptr [0x870268] */
    ecx = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621A09: imul ecx, dword ptr [eax + 0x3d8], 0x1d4 */
    eax = MEM32(eax + 0x504); /* 0x00621A13: mov eax, dword ptr [eax + 0x504] */
    SET_LO8(eax, MEM8(ecx + eax + 0x1C8)); /* 0x00621A19: mov al, byte ptr [ecx + eax + 0x1c8] */
    esp = ebp; /* 0x00621A20: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621A22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00621A23: ret  */
    RECOMP_REGS_OUT();
}

void sub_00621A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621A30u);

L_00621A30:
    PUSH32(esp, ebp); /* 0x00621A30: push ebp */
    ebp = esp; /* 0x00621A31: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621A33: push ecx */
    eax = MEM32(0x870268); /* 0x00621A34: mov eax, dword ptr [0x870268] */
    PUSH32(esp, ebx); /* 0x00621A39: push ebx */
    PUSH32(esp, esi); /* 0x00621A3A: push esi */
    PUSH32(esp, edi); /* 0x00621A3B: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621A3C: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    ebx = MEM32(eax + 0x504); /* 0x00621A46: mov ebx, dword ptr [eax + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00621A4C: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621A4F: movzx esi, al */
    eax = 0x66666667u; /* 0x00621A52: mov eax, 0x66666667 */
    ecx = MEM32(edi + ebx + 0x18); /* 0x00621A57: mov ecx, dword ptr [edi + ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + ebx + 0x14); /* 0x00621A5B: sub ecx, dword ptr [edi + ebx + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621A5F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621A61: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621A64: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621A66: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621A66: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621A69: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621A6B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00621A80; /* 0x00621A6D: jb 0x621a80 */
L_00621A6F:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x00621A6F: movss xmm0, dword ptr [0x808cb0] */
    edi = POP32_VAL(esp); /* 0x00621A77: pop edi */
    esi = POP32_VAL(esp); /* 0x00621A78: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621A79: pop ebx */
    esp = ebp; /* 0x00621A7A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621A7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621A7D: ret 4 */
L_00621A80:
    eax = MEM32(edi + ebx + 0x14); /* 0x00621A80: mov eax, dword ptr [edi + ebx + 0x14] */
    ecx = esi + esi * 4; /* 0x00621A84: lea ecx, [esi + esi*4] */
    edi = POP32_VAL(esp); /* 0x00621A87: pop edi */
    esi = POP32_VAL(esp); /* 0x00621A88: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621A89: pop ebx */
    _xmm[0].u64[0] = MEM32(eax + ecx * 4); _xmm[0].u64[1] = 0; /* 0x00621A8A: movss xmm0, dword ptr [eax + ecx*4] */
    esp = ebp; /* 0x00621A8F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621A91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621A92: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621AA0u);

L_00621AA0:
    PUSH32(esp, ebp); /* 0x00621AA0: push ebp */
    ebp = esp; /* 0x00621AA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621AA3: push ecx */
    eax = MEM32(0x870268); /* 0x00621AA4: mov eax, dword ptr [0x870268] */
    PUSH32(esp, ebx); /* 0x00621AA9: push ebx */
    PUSH32(esp, esi); /* 0x00621AAA: push esi */
    PUSH32(esp, edi); /* 0x00621AAB: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621AAC: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    ebx = MEM32(eax + 0x504); /* 0x00621AB6: mov ebx, dword ptr [eax + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00621ABC: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621ABF: movzx esi, al */
    eax = 0x66666667u; /* 0x00621AC2: mov eax, 0x66666667 */
    ecx = MEM32(edi + ebx + 0x18); /* 0x00621AC7: mov ecx, dword ptr [edi + ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + ebx + 0x14); /* 0x00621ACB: sub ecx, dword ptr [edi + ebx + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621ACF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621AD1: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621AD4: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621AD6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621AD6: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621AD9: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621ADB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00621B03; /* 0x00621ADD: jae 0x621b03 */
L_00621ADF:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00621ADF: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621AE2: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00621AF7; /* 0x00621AE5: ja 0x621af7 */
L_00621AE7:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x00621AE7: movss xmm0, dword ptr [0x808cb0] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621AEF: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00621AF7; /* 0x00621AF2: ja 0x621af7 */
L_00621AF4:
    _xmm[0] = _xmm[2]; /* 0x00621AF4: movaps xmm0, xmm2 */
L_00621AF7:
    eax = MEM32(edi + ebx + 0x14); /* 0x00621AF7: mov eax, dword ptr [edi + ebx + 0x14] */
    ecx = esi + esi * 4; /* 0x00621AFB: lea ecx, [esi + esi*4] */
    MEM32(eax + ecx * 4) = _xmm[0].u32[0]; /* 0x00621AFE: movss dword ptr [eax + ecx*4], xmm0 */
L_00621B03:
    edi = POP32_VAL(esp); /* 0x00621B03: pop edi */
    esi = POP32_VAL(esp); /* 0x00621B04: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621B05: pop ebx */
    esp = ebp; /* 0x00621B06: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621B08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621B09: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621B10u);

L_00621B10:
    PUSH32(esp, ebp); /* 0x00621B10: push ebp */
    ebp = esp; /* 0x00621B11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621B13: push ecx */
    eax = MEM32(0x870268); /* 0x00621B14: mov eax, dword ptr [0x870268] */
    PUSH32(esp, ebx); /* 0x00621B19: push ebx */
    PUSH32(esp, esi); /* 0x00621B1A: push esi */
    PUSH32(esp, edi); /* 0x00621B1B: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621B1C: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    ebx = MEM32(eax + 0x504); /* 0x00621B26: mov ebx, dword ptr [eax + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00621B2C: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621B2F: movzx esi, al */
    eax = 0x66666667u; /* 0x00621B32: mov eax, 0x66666667 */
    ecx = MEM32(edi + ebx + 0x18); /* 0x00621B37: mov ecx, dword ptr [edi + ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + ebx + 0x14); /* 0x00621B3B: sub ecx, dword ptr [edi + ebx + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621B3F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621B41: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621B44: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621B46: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621B46: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621B49: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621B4B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00621B5B; /* 0x00621B4D: jb 0x621b5b */
L_00621B4F:
    edi = POP32_VAL(esp); /* 0x00621B4F: pop edi */
    esi = POP32_VAL(esp); /* 0x00621B50: pop esi */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00621B51: xorps xmm0, xmm0 */
    ebx = POP32_VAL(esp); /* 0x00621B54: pop ebx */
    esp = ebp; /* 0x00621B55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621B57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621B58: ret 4 */
L_00621B5B:
    eax = MEM32(edi + ebx + 0x14); /* 0x00621B5B: mov eax, dword ptr [edi + ebx + 0x14] */
    ecx = esi + esi * 4; /* 0x00621B5F: lea ecx, [esi + esi*4] */
    edi = POP32_VAL(esp); /* 0x00621B62: pop edi */
    esi = POP32_VAL(esp); /* 0x00621B63: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621B64: pop ebx */
    _xmm[0].u64[0] = MEM32(eax + ecx * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x00621B65: movss xmm0, dword ptr [eax + ecx*4 + 4] */
    esp = ebp; /* 0x00621B6B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621B6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621B6E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621B80u);

L_00621B80:
    PUSH32(esp, ebp); /* 0x00621B80: push ebp */
    ebp = esp; /* 0x00621B81: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621B83: push ecx */
    eax = MEM32(0x870268); /* 0x00621B84: mov eax, dword ptr [0x870268] */
    PUSH32(esp, ebx); /* 0x00621B89: push ebx */
    PUSH32(esp, esi); /* 0x00621B8A: push esi */
    PUSH32(esp, edi); /* 0x00621B8B: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621B8C: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    ebx = MEM32(eax + 0x504); /* 0x00621B96: mov ebx, dword ptr [eax + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00621B9C: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621B9F: movzx esi, al */
    eax = 0x66666667u; /* 0x00621BA2: mov eax, 0x66666667 */
    ecx = MEM32(edi + ebx + 0x18); /* 0x00621BA7: mov ecx, dword ptr [edi + ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + ebx + 0x14); /* 0x00621BAB: sub ecx, dword ptr [edi + ebx + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621BAF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621BB1: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621BB4: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621BB6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621BB6: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621BB9: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621BBB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00621BE4; /* 0x00621BBD: jae 0x621be4 */
L_00621BBF:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00621BBF: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621BC2: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00621BD7; /* 0x00621BC5: ja 0x621bd7 */
L_00621BC7:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x00621BC7: movss xmm0, dword ptr [0x808cb0] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621BCF: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00621BD7; /* 0x00621BD2: ja 0x621bd7 */
L_00621BD4:
    _xmm[0] = _xmm[2]; /* 0x00621BD4: movaps xmm0, xmm2 */
L_00621BD7:
    eax = MEM32(edi + ebx + 0x14); /* 0x00621BD7: mov eax, dword ptr [edi + ebx + 0x14] */
    ecx = esi + esi * 4; /* 0x00621BDB: lea ecx, [esi + esi*4] */
    MEM32(eax + ecx * 4 + 0x4) = _xmm[0].u32[0]; /* 0x00621BDE: movss dword ptr [eax + ecx*4 + 4], xmm0 */
L_00621BE4:
    edi = POP32_VAL(esp); /* 0x00621BE4: pop edi */
    esi = POP32_VAL(esp); /* 0x00621BE5: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621BE6: pop ebx */
    esp = ebp; /* 0x00621BE7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621BE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621BEA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621BF0u);

L_00621BF0:
    PUSH32(esp, ebp); /* 0x00621BF0: push ebp */
    ebp = esp; /* 0x00621BF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621BF3: push ecx */
    eax = MEM32(0x870268); /* 0x00621BF4: mov eax, dword ptr [0x870268] */
    PUSH32(esp, ebx); /* 0x00621BF9: push ebx */
    PUSH32(esp, esi); /* 0x00621BFA: push esi */
    PUSH32(esp, edi); /* 0x00621BFB: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621BFC: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    ebx = MEM32(eax + 0x504); /* 0x00621C06: mov ebx, dword ptr [eax + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00621C0C: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621C0F: movzx esi, al */
    eax = 0x66666667u; /* 0x00621C12: mov eax, 0x66666667 */
    ecx = MEM32(edi + ebx + 0x18); /* 0x00621C17: mov ecx, dword ptr [edi + ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + ebx + 0x14); /* 0x00621C1B: sub ecx, dword ptr [edi + ebx + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621C1F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621C21: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621C24: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621C26: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621C26: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621C29: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621C2B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00621C40; /* 0x00621C2D: jb 0x621c40 */
L_00621C2F:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x00621C2F: movss xmm0, dword ptr [0x808cb0] */
    edi = POP32_VAL(esp); /* 0x00621C37: pop edi */
    esi = POP32_VAL(esp); /* 0x00621C38: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621C39: pop ebx */
    esp = ebp; /* 0x00621C3A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621C3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621C3D: ret 4 */
L_00621C40:
    eax = MEM32(edi + ebx + 0x14); /* 0x00621C40: mov eax, dword ptr [edi + ebx + 0x14] */
    ecx = esi + esi * 4; /* 0x00621C44: lea ecx, [esi + esi*4] */
    edi = POP32_VAL(esp); /* 0x00621C47: pop edi */
    esi = POP32_VAL(esp); /* 0x00621C48: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621C49: pop ebx */
    _xmm[0].u64[0] = MEM32(eax + ecx * 4 + 0x8); _xmm[0].u64[1] = 0; /* 0x00621C4A: movss xmm0, dword ptr [eax + ecx*4 + 8] */
    esp = ebp; /* 0x00621C50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621C52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621C53: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621C60u);

L_00621C60:
    PUSH32(esp, ebp); /* 0x00621C60: push ebp */
    ebp = esp; /* 0x00621C61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621C63: push ecx */
    eax = MEM32(0x870268); /* 0x00621C64: mov eax, dword ptr [0x870268] */
    PUSH32(esp, ebx); /* 0x00621C69: push ebx */
    PUSH32(esp, esi); /* 0x00621C6A: push esi */
    PUSH32(esp, edi); /* 0x00621C6B: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621C6C: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    ebx = MEM32(eax + 0x504); /* 0x00621C76: mov ebx, dword ptr [eax + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00621C7C: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621C7F: movzx esi, al */
    eax = 0x66666667u; /* 0x00621C82: mov eax, 0x66666667 */
    ecx = MEM32(edi + ebx + 0x18); /* 0x00621C87: mov ecx, dword ptr [edi + ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + ebx + 0x14); /* 0x00621C8B: sub ecx, dword ptr [edi + ebx + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621C8F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621C91: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621C94: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621C96: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621C96: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621C99: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621C9B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00621CC4; /* 0x00621C9D: jae 0x621cc4 */
L_00621C9F:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00621C9F: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621CA2: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00621CB7; /* 0x00621CA5: ja 0x621cb7 */
L_00621CA7:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x00621CA7: movss xmm0, dword ptr [0x808cb0] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621CAF: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00621CB7; /* 0x00621CB2: ja 0x621cb7 */
L_00621CB4:
    _xmm[0] = _xmm[2]; /* 0x00621CB4: movaps xmm0, xmm2 */
L_00621CB7:
    eax = MEM32(edi + ebx + 0x14); /* 0x00621CB7: mov eax, dword ptr [edi + ebx + 0x14] */
    ecx = esi + esi * 4; /* 0x00621CBB: lea ecx, [esi + esi*4] */
    MEM32(eax + ecx * 4 + 0x8) = _xmm[0].u32[0]; /* 0x00621CBE: movss dword ptr [eax + ecx*4 + 8], xmm0 */
L_00621CC4:
    edi = POP32_VAL(esp); /* 0x00621CC4: pop edi */
    esi = POP32_VAL(esp); /* 0x00621CC5: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621CC6: pop ebx */
    esp = ebp; /* 0x00621CC7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621CC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621CCA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621CD0u);

L_00621CD0:
    PUSH32(esp, ebp); /* 0x00621CD0: push ebp */
    ebp = esp; /* 0x00621CD1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621CD3: push ecx */
    eax = MEM32(0x870268); /* 0x00621CD4: mov eax, dword ptr [0x870268] */
    PUSH32(esp, ebx); /* 0x00621CD9: push ebx */
    PUSH32(esp, esi); /* 0x00621CDA: push esi */
    PUSH32(esp, edi); /* 0x00621CDB: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621CDC: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    ebx = MEM32(eax + 0x504); /* 0x00621CE6: mov ebx, dword ptr [eax + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00621CEC: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621CEF: movzx esi, al */
    eax = 0x66666667u; /* 0x00621CF2: mov eax, 0x66666667 */
    ecx = MEM32(edi + ebx + 0x18); /* 0x00621CF7: mov ecx, dword ptr [edi + ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + ebx + 0x14); /* 0x00621CFB: sub ecx, dword ptr [edi + ebx + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621CFF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621D01: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621D04: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621D06: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621D06: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621D09: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621D0B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00621D20; /* 0x00621D0D: jb 0x621d20 */
L_00621D0F:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x00621D0F: movss xmm0, dword ptr [0x808cb0] */
    edi = POP32_VAL(esp); /* 0x00621D17: pop edi */
    esi = POP32_VAL(esp); /* 0x00621D18: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621D19: pop ebx */
    esp = ebp; /* 0x00621D1A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621D1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621D1D: ret 4 */
L_00621D20:
    eax = MEM32(edi + ebx + 0x14); /* 0x00621D20: mov eax, dword ptr [edi + ebx + 0x14] */
    ecx = esi + esi * 4; /* 0x00621D24: lea ecx, [esi + esi*4] */
    edi = POP32_VAL(esp); /* 0x00621D27: pop edi */
    esi = POP32_VAL(esp); /* 0x00621D28: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621D29: pop ebx */
    _xmm[0].u64[0] = MEM32(eax + ecx * 4 + 0xC); _xmm[0].u64[1] = 0; /* 0x00621D2A: movss xmm0, dword ptr [eax + ecx*4 + 0xc] */
    esp = ebp; /* 0x00621D30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621D32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621D33: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621D40u);

L_00621D40:
    PUSH32(esp, ebp); /* 0x00621D40: push ebp */
    ebp = esp; /* 0x00621D41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621D43: push ecx */
    eax = MEM32(0x870268); /* 0x00621D44: mov eax, dword ptr [0x870268] */
    PUSH32(esp, ebx); /* 0x00621D49: push ebx */
    PUSH32(esp, esi); /* 0x00621D4A: push esi */
    PUSH32(esp, edi); /* 0x00621D4B: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621D4C: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    ebx = MEM32(eax + 0x504); /* 0x00621D56: mov ebx, dword ptr [eax + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00621D5C: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621D5F: movzx esi, al */
    eax = 0x66666667u; /* 0x00621D62: mov eax, 0x66666667 */
    ecx = MEM32(edi + ebx + 0x18); /* 0x00621D67: mov ecx, dword ptr [edi + ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + ebx + 0x14); /* 0x00621D6B: sub ecx, dword ptr [edi + ebx + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621D6F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621D71: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621D74: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621D76: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621D76: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621D79: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621D7B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00621DA9; /* 0x00621D7D: jae 0x621da9 */
L_00621D7F:
    _xmm[0].u64[0] = MEM32(0x808BB0); _xmm[0].u64[1] = 0; /* 0x00621D7F: movss xmm0, dword ptr [0x808bb0] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621D87: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00621D9C; /* 0x00621D8A: ja 0x621d9c */
L_00621D8C:
    _xmm[0].u64[0] = MEM32(0x809074); _xmm[0].u64[1] = 0; /* 0x00621D8C: movss xmm0, dword ptr [0x809074] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00621D94: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00621D9C; /* 0x00621D97: ja 0x621d9c */
L_00621D99:
    _xmm[0] = _xmm[2]; /* 0x00621D99: movaps xmm0, xmm2 */
L_00621D9C:
    eax = MEM32(edi + ebx + 0x14); /* 0x00621D9C: mov eax, dword ptr [edi + ebx + 0x14] */
    ecx = esi + esi * 4; /* 0x00621DA0: lea ecx, [esi + esi*4] */
    MEM32(eax + ecx * 4 + 0xC) = _xmm[0].u32[0]; /* 0x00621DA3: movss dword ptr [eax + ecx*4 + 0xc], xmm0 */
L_00621DA9:
    edi = POP32_VAL(esp); /* 0x00621DA9: pop edi */
    esi = POP32_VAL(esp); /* 0x00621DAA: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621DAB: pop ebx */
    esp = ebp; /* 0x00621DAC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621DAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621DAF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621DC0u);

L_00621DC0:
    PUSH32(esp, ebp); /* 0x00621DC0: push ebp */
    ebp = esp; /* 0x00621DC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621DC3: push ecx */
    eax = MEM32(0x870268); /* 0x00621DC4: mov eax, dword ptr [0x870268] */
    PUSH32(esp, esi); /* 0x00621DC9: push esi */
    PUSH32(esp, edi); /* 0x00621DCA: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621DCB: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    eax = MEM32(eax + 0x504); /* 0x00621DD5: mov eax, dword ptr [eax + 0x504] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x00621DDB: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x00621DDD: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621DE0: movzx esi, al */
    eax = 0x66666667u; /* 0x00621DE3: mov eax, 0x66666667 */
    ecx = MEM32(edi + 0x18); /* 0x00621DE8: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x14); /* 0x00621DEB: sub ecx, dword ptr [edi + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621DEE: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621DF0: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621DF3: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621DF5: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621DF5: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621DF8: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621DFA: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00621E08; /* 0x00621DFC: jb 0x621e08 */
L_00621DFE:
    edi = POP32_VAL(esp); /* 0x00621DFE: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00621DFF: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x00621E01: pop esi */
    esp = ebp; /* 0x00621E02: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621E04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621E05: ret 4 */
L_00621E08:
    eax = MEM32(edi + 0x14); /* 0x00621E08: mov eax, dword ptr [edi + 0x14] */
    ecx = esi + esi * 4; /* 0x00621E0B: lea ecx, [esi + esi*4] */
    edi = POP32_VAL(esp); /* 0x00621E0E: pop edi */
    esi = POP32_VAL(esp); /* 0x00621E0F: pop esi */
    SET_LO8(eax, MEM8(eax + ecx * 4 + 0x10)); /* 0x00621E10: mov al, byte ptr [eax + ecx*4 + 0x10] */
    esp = ebp; /* 0x00621E14: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621E16: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621E17: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621E20u);

L_00621E20:
    PUSH32(esp, ebp); /* 0x00621E20: push ebp */
    ebp = esp; /* 0x00621E21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621E23: push ecx */
    eax = MEM32(0x870268); /* 0x00621E24: mov eax, dword ptr [0x870268] */
    PUSH32(esp, esi); /* 0x00621E29: push esi */
    PUSH32(esp, edi); /* 0x00621E2A: push edi */
    edi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x00621E2B: imul edi, dword ptr [eax + 0x3d8], 0x1d4 */
    eax = MEM32(eax + 0x504); /* 0x00621E35: mov eax, dword ptr [eax + 0x504] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x00621E3B: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x00621E3D: mov eax, dword ptr [ebp + 8] */
    esi = (uint32_t)LO8(eax); /* 0x00621E40: movzx esi, al */
    eax = 0x66666667u; /* 0x00621E43: mov eax, 0x66666667 */
    ecx = MEM32(edi + 0x18); /* 0x00621E48: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x14); /* 0x00621E4B: sub ecx, dword ptr [edi + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621E4E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621E50: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00621E53: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621E55: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621E55: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621E58: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00621E5A: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00621E6B; /* 0x00621E5C: jae 0x621e6b */
L_00621E5E:
    ecx = MEM32(edi + 0x14); /* 0x00621E5E: mov ecx, dword ptr [edi + 0x14] */
    edx = esi + esi * 4; /* 0x00621E61: lea edx, [esi + esi*4] */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x00621E64: mov al, byte ptr [ebp + 0xc] */
    MEM8(ecx + edx * 4 + 0x10) = (uint8_t)(LO8(eax)); /* 0x00621E67: mov byte ptr [ecx + edx*4 + 0x10], al */
L_00621E6B:
    edi = POP32_VAL(esp); /* 0x00621E6B: pop edi */
    esi = POP32_VAL(esp); /* 0x00621E6C: pop esi */
    esp = ebp; /* 0x00621E6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621E6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00621E70: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00621E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621E80u);

L_00621E80:
    PUSH32(esp, ebp); /* 0x00621E80: push ebp */
    ebp = esp; /* 0x00621E81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00621E83: push -1 */
    PUSH32(esp, 0x007B22ACu); /* 0x00621E85: push 0x7b22ac */
    eax = MEM32(FS_BASE + (0)); /* 0x00621E8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00621E90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00621E91: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00621E94: push esi */
    PUSH32(esp, edi); /* 0x00621E95: push edi */
    eax = MEM32(0x855000); /* 0x00621E96: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00621E9B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00621E9D: push eax */
    eax = ebp + (-0xC); /* 0x00621E9E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00621EA1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00621EA7: mov edi, ecx */
    PUSH32(esp, 0x20u); /* 0x00621EA9: push 0x20 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00621EAB: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00621EB1: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00621EB3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = esi; /* 0x00621EB6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00621EB9: mov dword ptr [ebp - 4], 0 */
    /* test esi, esi */ /* 0x00621EC0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00621EFD; /* 0x00621EC2: je 0x621efd */
L_00621EC4:
    ecx = esi; /* 0x00621EC4: mov ecx, esi */
    MEM32(esi) = 0x15E1u; /* 0x00621EC6: mov dword ptr [esi], 0x15e1 */
    MEM32(esi + 0x8) = 0; /* 0x00621ECC: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x00621ED3: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x00621EDA: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x00621EE1: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x18) = 0; /* 0x00621EE8: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x00621EEF: mov dword ptr [esi + 0x1c], 0 */
    RECOMP_CALL(sub_006311E0); /* 0x00621EF6: call 0x6311e0 */
    RECOMP_FLAGS_IN();
    goto L_00621EFF; /* 0x00621EFB: jmp 0x621eff */
L_00621EFD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00621EFD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_00621EFF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00621EFF: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(edi + 0x10) = esi; /* 0x00621F06: mov dword ptr [edi + 0x10], esi */
    /* cmp MEM8(esi + 0x2), 0 */ /* 0x00621F09: cmp byte ptr [esi + 2], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00621F36; /* 0x00621F0D: je 0x621f36 */
L_00621F0F:
    eax = MEM32(0x87028C); /* 0x00621F0F: mov eax, dword ptr [0x87028c] */
    /* test eax, eax */ /* 0x00621F14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00621F1A; /* 0x00621F16: je 0x621f1a */
L_00621F18:
    RECOMP_ICALL(eax); /* 0x00621F18: call eax */
    RECOMP_FLAGS_IN();
L_00621F1A:
    eax = MEM32(0x8702AC); /* 0x00621F1A: mov eax, dword ptr [0x8702ac] */
    /* test eax, eax */ /* 0x00621F1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00621F25; /* 0x00621F21: je 0x621f25 */
L_00621F23:
    RECOMP_ICALL(eax); /* 0x00621F23: call eax */
    RECOMP_FLAGS_IN();
L_00621F25:
    PUSH32(esp, esi); /* 0x00621F25: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00621F26: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00621F2C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = 0; /* 0x00621F2F: mov dword ptr [edi + 0x10], 0 */
L_00621F36:
    ecx = MEM32(ebp + (-0xC)); /* 0x00621F36: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00621F39: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00621F40: pop ecx */
    edi = POP32_VAL(esp); /* 0x00621F41: pop edi */
    esi = POP32_VAL(esp); /* 0x00621F42: pop esi */
    esp = ebp; /* 0x00621F43: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621F45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00621F46: ret  */
    RECOMP_REGS_OUT();
}

void sub_00621F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621F50u);

L_00621F50:
    PUSH32(esp, ebp); /* 0x00621F50: push ebp */
    ebp = esp; /* 0x00621F51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00621F53: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00621F56: push ebx */
    PUSH32(esp, esi); /* 0x00621F57: push esi */
    PUSH32(esp, edi); /* 0x00621F58: push edi */
    edi = ecx; /* 0x00621F59: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x00621F5B: mov dword ptr [ebp - 4], 1 */
    eax = 0x8C08C08Du; /* 0x00621F62: mov eax, 0x8c08c08d */
    MEM32(ebp + (-0x8)) = edi; /* 0x00621F67: mov dword ptr [ebp - 8], edi */
    esi = MEM32(edi + 0x508); /* 0x00621F6A: mov esi, dword ptr [edi + 0x508] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0x504); /* 0x00621F70: sub esi, dword ptr [edi + 0x504] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x00621F76: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x00621F78: add edx, esi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00621F7A: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00621F7D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621F7F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621F7F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621F82: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x00621F84: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062209A; /* 0x00621F87: jbe 0x62209a */
L_00621F8D:
    ecx = MEM32(ebp + 0x8); /* 0x00621F8D: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(edi + 0x504); /* 0x00621F90: mov ebx, dword ptr [edi + 0x504] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x218u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x218u; /* 0x00621F96: add ebx, 0x218 */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x10); /* 0x00621F9C: mov edx, dword ptr [ecx + 0x10] */
    ecx = MEM32(ecx + 0x14); /* 0x00621F9F: mov ecx, dword ptr [ecx + 0x14] */
    MEM32(ebp + (-0x10)) = edx; /* 0x00621FA2: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x00621FA5: mov dword ptr [ebp - 0xc], ecx */
    goto L_00621FB0; /* 0x00621FA8: jmp 0x621fb0 */
L_00621FB0:
    /* cmp MEM32(ebx + 0x14), 0x10u */ /* 0x00621FB0: cmp dword ptr [ebx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x10); /* 0x00621FB4: mov ecx, dword ptr [ebx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00621FBD; /* 0x00621FB7: jb 0x621fbd */
L_00621FB9:
    esi = MEM32(ebx); /* 0x00621FB9: mov esi, dword ptr [ebx] */
    goto L_00621FBF; /* 0x00621FBB: jmp 0x621fbf */
L_00621FBD:
    esi = ebx; /* 0x00621FBD: mov esi, ebx */
L_00621FBF:
    /* cmp edx, edx */ /* 0x00621FBF: cmp edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = edx; /* 0x00621FC1: mov edi, edx */
    if (CMP_B(_flag_a, _flag_b)) { edi = edx; } /* 0x00621FC3: cmovb edi, edx */
    /* cmp MEM32(ebp + (-0xC)), 0x10u */ /* 0x00621FC6: cmp dword ptr [ebp - 0xc], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00621FD3; /* 0x00621FCA: jb 0x621fd3 */
L_00621FCC:
    eax = MEM32(ebp + 0x8); /* 0x00621FCC: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x00621FCF: mov edx, dword ptr [eax] */
    goto L_00621FD6; /* 0x00621FD1: jmp 0x621fd6 */
L_00621FD3:
    edx = MEM32(ebp + 0x8); /* 0x00621FD3: mov edx, dword ptr [ebp + 8] */
L_00621FD6:
    /* cmp edi, ecx */ /* 0x00621FD6: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx; /* 0x00621FD8: mov eax, ecx */
    if (CMP_B(_flag_a, _flag_b)) { eax = edi; } /* 0x00621FDA: cmovb eax, edi */
    /* test eax, eax */ /* 0x00621FDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622039; /* 0x00621FDF: je 0x622039 */
L_00621FE1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x00621FE1: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_00621FF7; /* 0x00621FE4: jb 0x621ff7 */
L_00621FE6:
    ecx = MEM32(edx); /* 0x00621FE6: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(esi) */ /* 0x00621FE8: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00621FFC; /* 0x00621FEA: jne 0x621ffc */
L_00621FEC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00621FEC: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x00621FEF: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x00621FF2: sub eax, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00621FE6; /* 0x00621FF5: jae 0x621fe6 */
L_00621FF7:
    /* cmp eax, 0xFFFFFFFCu */ /* 0x00621FF7: cmp eax, -4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622030; /* 0x00621FFA: je 0x622030 */
L_00621FFC:
    SET_LO8(ecx, MEM8(edx)); /* 0x00621FFC: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), MEM8(esi) */ /* 0x00621FFE: cmp cl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622029; /* 0x00622000: jne 0x622029 */
L_00622002:
    /* cmp eax, 0xFFFFFFFDu */ /* 0x00622002: cmp eax, -3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622030; /* 0x00622005: je 0x622030 */
L_00622007:
    SET_LO8(ecx, MEM8(edx + 0x1)); /* 0x00622007: mov cl, byte ptr [edx + 1] */
    /* cmp LO8(ecx), MEM8(esi + 0x1) */ /* 0x0062200A: cmp cl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622029; /* 0x0062200D: jne 0x622029 */
L_0062200F:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x0062200F: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622030; /* 0x00622012: je 0x622030 */
L_00622014:
    SET_LO8(ecx, MEM8(edx + 0x2)); /* 0x00622014: mov cl, byte ptr [edx + 2] */
    /* cmp LO8(ecx), MEM8(esi + 0x2) */ /* 0x00622017: cmp cl, byte ptr [esi + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622029; /* 0x0062201A: jne 0x622029 */
L_0062201C:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0062201C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622030; /* 0x0062201F: je 0x622030 */
L_00622021:
    SET_LO8(eax, MEM8(edx + 0x3)); /* 0x00622021: mov al, byte ptr [edx + 3] */
    /* cmp LO8(eax), MEM8(esi + 0x3) */ /* 0x00622024: cmp al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622030; /* 0x00622027: je 0x622030 */
L_00622029:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00622029: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0062202B: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00622032; /* 0x0062202E: jmp 0x622032 */
L_00622030:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00622030: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_00622032:
    /* test eax, eax */ /* 0x00622032: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622048; /* 0x00622034: jne 0x622048 */
L_00622036:
    ecx = MEM32(ebx + 0x10); /* 0x00622036: mov ecx, dword ptr [ebx + 0x10] */
L_00622039:
    /* cmp edi, ecx */ /* 0x00622039: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00622048; /* 0x0062203B: jb 0x622048 */
L_0062203D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0062203D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ecx */ /* 0x0062203F: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00622041: setne al */
    /* test eax, eax */ /* 0x00622044: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622083; /* 0x00622046: je 0x622083 */
L_00622048:
    edi = MEM32(ebp + (-0x8)); /* 0x00622048: mov edi, dword ptr [ebp - 8] */
    eax = 0x8C08C08Du; /* 0x0062204B: mov eax, 0x8c08c08d */
    esi = MEM32(ebp + (-0x4)); /* 0x00622050: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x1D4u; /* 0x00622053: add ebx, 0x1d4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00622059: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x0062205A: mov dword ptr [ebp - 4], esi */
    ecx = MEM32(edi + 0x508); /* 0x0062205D: mov ecx, dword ptr [edi + 0x508] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x504); /* 0x00622063: sub ecx, dword ptr [edi + 0x504] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00622069: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0062206B: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0062206D: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00622070: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00622072: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00622072: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00622075: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00622077: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0062209A; /* 0x00622079: jae 0x62209a */
L_0062207B:
    edx = MEM32(ebp + (-0x10)); /* 0x0062207B: mov edx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_00621FB0; /* 0x0062207E: jmp 0x621fb0 */
L_00622083:
    eax = MEM32(ebp + (-0x8)); /* 0x00622083: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x00622086: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x00622089: pop edi */
    esi = POP32_VAL(esp); /* 0x0062208A: pop esi */
    MEM32(eax + 0x3D8) = ecx; /* 0x0062208B: mov dword ptr [eax + 0x3d8], ecx */
    SET_LO8(eax, 1); /* 0x00622091: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x00622093: pop ebx */
    esp = ebp; /* 0x00622094: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622096: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622097: ret 4 */
L_0062209A:
    edi = POP32_VAL(esp); /* 0x0062209A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062209B: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0062209C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x0062209E: pop ebx */
    esp = ebp; /* 0x0062209F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006220A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006220A2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006220B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006220B0u);

L_006220B0:
    PUSH32(esp, ebp); /* 0x006220B0: push ebp */
    ebp = esp; /* 0x006220B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006220B3: push -1 */
    PUSH32(esp, 0x007B7558u); /* 0x006220B5: push 0x7b7558 */
    eax = MEM32(FS_BASE + (0)); /* 0x006220BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006220C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x006220C1: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006220C4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006220C9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006220CB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x006220CE: push ebx */
    PUSH32(esp, esi); /* 0x006220CF: push esi */
    PUSH32(esp, edi); /* 0x006220D0: push edi */
    PUSH32(esp, eax); /* 0x006220D1: push eax */
    eax = ebp + (-0xC); /* 0x006220D2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006220D5: mov dword ptr fs:[0], eax */
    PUSH32(esp, 6); /* 0x006220DB: push 6 */
    MEM32(ebp + (-0x30)) = 0; /* 0x006220DD: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x006220E4: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x006220E7: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007ED4C4u); /* 0x006220EE: push 0x7ed4c4 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x006220F3: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x006220FA: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x00622101: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00622105: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062210A: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(0x8780CC); /* 0x00622111: mov ecx, dword ptr [0x8780cc] */
    /* test ecx, ecx */ /* 0x00622117: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062212A; /* 0x00622119: je 0x62212a */
L_0062211B:
    ecx = MEM32(ecx + 0xC0); /* 0x0062211B: mov ecx, dword ptr [ecx + 0xc0] */
    eax = ebp + (-0x40); /* 0x00622121: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x00622124: push eax */
    RECOMP_CALL(sub_00671CA0); /* 0x00622125: call 0x671ca0 */
    RECOMP_FLAGS_IN();
L_0062212A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062212A: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x00622131: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x00622135: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00622145; /* 0x0062213B: jb 0x622145 */
L_0062213D:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062213D: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x00622140: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00622142: add esp, 4 */
    _flag_k = FK_ADD;
L_00622145:
    PUSH32(esp, 0x14u); /* 0x00622145: push 0x14 */
    MEM32(ebp + (-0x18)) = 0; /* 0x00622147: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062214E: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x00622151: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F8FB4u); /* 0x00622158: push 0x7f8fb4 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062215D: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00622164: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062216B: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062216F: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00622176: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062217D: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00622181: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00622186: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x28); /* 0x0062218D: lea eax, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00622190: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x00622194: push 4 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x00622196: cmovae eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062219A: push eax */
    RECOMP_ICALL(MEM32(0x7CC49C)); /* 0x0062219B: call dword ptr [0x7cc49c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006221A1: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006221A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006221A6: setne bl */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006221A9: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x006221B0: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006221BE; /* 0x006221B4: jb 0x6221be */
L_006221B6:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x006221B6: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x006221B9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006221BB: add esp, 4 */
    _flag_k = FK_ADD;
L_006221BE:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x006221BE: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x006221C5: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x006221CC: mov byte ptr [ebp - 0x28], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x006221D0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062220A; /* 0x006221D2: je 0x62220a */
L_006221D4:
    PUSH32(esp, 0x007F8FCCu); /* 0x006221D4: push 0x7f8fcc */
    PUSH32(esp, 0x007F8FB4u); /* 0x006221D9: push 0x7f8fb4 */
    RECOMP_ICALL(MEM32(0x7CC4E4)); /* 0x006221DE: call dword ptr [0x7cc4e4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006221E4: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006221E6: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006221E9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062220A; /* 0x006221EB: je 0x62220a */
L_006221ED:
    PUSH32(esp, edi); /* 0x006221ED: push edi */
    PUSH32(esp, 1); /* 0x006221EE: push 1 */
    PUSH32(esp, 0xB7B7u); /* 0x006221F0: push 0xb7b7 */
    PUSH32(esp, 0x008552E0u); /* 0x006221F5: push 0x8552e0 */
    RECOMP_ICALL(MEM32(0x7CC48C)); /* 0x006221FA: call dword ptr [0x7cc48c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00622200: push edi */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x00622201: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x00622207: add esp, 0x14 */
    _flag_k = FK_ADD;
L_0062220A:
    PUSH32(esp, 0x14u); /* 0x0062220A: push 0x14 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062220C: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x00622213: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x00622216: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F8FB4u); /* 0x0062221D: push 0x7f8fb4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00622222: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00622229: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00622230: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00622234: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x00622239: mov dword ptr [ebp - 4], 2 */
    eax = ebp + (-0x28); /* 0x00622240: lea eax, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00622243: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x00622247: push 4 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x00622249: cmovae eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062224D: push eax */
    RECOMP_ICALL(MEM32(0x7CC49C)); /* 0x0062224E: call dword ptr [0x7cc49c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00622254: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00622257: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x00622259: sete bl */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062225C: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00622263: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00622271; /* 0x00622267: jb 0x622271 */
L_00622269:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00622269: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062226C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062226E: add esp, 4 */
    _flag_k = FK_ADD;
L_00622271:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00622271: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00622278: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062227F: mov byte ptr [ebp - 0x28], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x00622283: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062229D; /* 0x00622285: je 0x62229d */
L_00622287:
    edx = 0x007F24ECu; /* 0x00622287: mov edx, 0x7f24ec */
    ecx = 0x007F8FB4u; /* 0x0062228C: mov ecx, 0x7f8fb4 */
    RECOMP_CALL(sub_006F08C0); /* 0x00622291: call 0x6f08c0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00622296: mov ecx, eax */
    RECOMP_CALL(sub_006F2240); /* 0x00622298: call 0x6f2240 */
    RECOMP_FLAGS_IN();
L_0062229D:
    ecx = MEM32(ebp + (-0xC)); /* 0x0062229D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006222A0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006222A7: pop ecx */
    edi = POP32_VAL(esp); /* 0x006222A8: pop edi */
    esi = POP32_VAL(esp); /* 0x006222A9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006222AA: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x006222AB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006222AE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006222B0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006222B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006222B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006222B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006222C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006222C0u);

L_006222C0:
    PUSH32(esp, ebp); /* 0x006222C0: push ebp */
    ebp = esp; /* 0x006222C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006222C3: push -1 */
    PUSH32(esp, 0x007B7598u); /* 0x006222C5: push 0x7b7598 */
    eax = MEM32(FS_BASE + (0)); /* 0x006222CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006222D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006222D1: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006222D4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006222D9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006222DB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x006222DE: push ebx */
    PUSH32(esp, esi); /* 0x006222DF: push esi */
    PUSH32(esp, edi); /* 0x006222E0: push edi */
    PUSH32(esp, eax); /* 0x006222E1: push eax */
    eax = ebp + (-0xC); /* 0x006222E2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006222E5: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006222EB: mov esi, ecx */
    PUSH32(esp, 0x15u); /* 0x006222ED: push 0x15 */
    MEM32(ebp + (-0x18)) = 0; /* 0x006222EF: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x006222F6: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x006222F9: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F8FD0u); /* 0x00622300: push 0x7f8fd0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00622305: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062230C: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00622313: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00622317: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062231C: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x28); /* 0x00622323: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00622326: push eax */
    RECOMP_CALL(sub_0066F0E0); /* 0x00622327: call 0x66f0e0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0062232C: mov edi, eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062232E: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00622335: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00622347; /* 0x00622339: jb 0x622347 */
L_0062233B:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062233B: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062233E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00622344: add esp, 4 */
    _flag_k = FK_ADD;
L_00622347:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00622347: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062234E: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00622355: mov byte ptr [ebp - 0x28], 0 */
    /* test edi, edi */ /* 0x00622359: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006223A0; /* 0x0062235B: jne 0x6223a0 */
L_0062235D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062235D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00622360: mov ecx, esp */
    MEM32(ebp + (-0x2C)) = esp; /* 0x00622362: mov dword ptr [ebp - 0x2c], esp */
    PUSH32(esp, 0x007F8FE8u); /* 0x00622365: push 0x7f8fe8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062236A: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0062236F: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00622376: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00622379: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0062237B: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 0x007F8F00u); /* 0x0062237E: push 0x7f8f00 */
    RECOMP_CALL(sub_00409FA0); /* 0x00622383: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00622388: mov byte ptr [ebp - 4], 2 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062238C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x58Au; /* 0x00622393: mov ecx, 0x58a */
    RECOMP_CALL(sub_00668DA0); /* 0x00622398: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062239D: add esp, 0x30 */
    _flag_k = FK_ADD;
L_006223A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006223A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x6BCA1AF3u; /* 0x006223A2: mov eax, 0x6bca1af3 */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x006223A7: mov dword ptr [ebp - 0x2c], ecx */
    ecx = MEM32(edi + 0x1C); /* 0x006223AA: mov ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x18); /* 0x006223AD: sub ecx, dword ptr [edi + 0x18] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006223B0: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006223B2: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x006223B5: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006223B7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006223B7: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006223BA: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_0062240B; /* 0x006223BC: je 0x62240b */
L_006223BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006223BE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5Cu; /* 0x006223C0: add esi, 0x5c */
    _flag_k = FK_ADD;
L_006223C3:
    eax = MEM32(edi + 0x18); /* 0x006223C3: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006223C6: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x48), 0 */ /* 0x006223C8: cmp dword ptr [eax + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006223D3; /* 0x006223CC: je 0x6223d3 */
L_006223CE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x006223CE: add eax, 0x18 */
    _flag_k = FK_ADD;
    goto L_006223D6; /* 0x006223D1: jmp 0x6223d6 */
L_006223D3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x006223D3: add eax, 0x30 */
    _flag_k = FK_ADD;
L_006223D6:
    /* cmp esi, eax */ /* 0x006223D6: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006223E6; /* 0x006223D8: je 0x6223e6 */
L_006223DA:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006223DA: push -1 */
    PUSH32(esp, 0); /* 0x006223DC: push 0 */
    PUSH32(esp, eax); /* 0x006223DE: push eax */
    ecx = esi; /* 0x006223DF: mov ecx, esi */
    RECOMP_CALL(sub_0040A030); /* 0x006223E1: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_006223E6:
    ecx = MEM32(edi + 0x1C); /* 0x006223E6: mov ecx, dword ptr [edi + 0x1c] */
    eax = 0x6BCA1AF3u; /* 0x006223E9: mov eax, 0x6bca1af3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x18); /* 0x006223EE: sub ecx, dword ptr [edi + 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x4Cu; /* 0x006223F1: add ebx, 0x4c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 1; /* 0x006223F4: inc dword ptr [ebp - 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x006223F7: add esi, 0x18 */
    _flag_k = FK_ADD;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006223FA: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006223FC: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x006223FF: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00622401: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00622401: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00622404: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x2C)), eax */ /* 0x00622406: cmp dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006223C3; /* 0x00622409: jb 0x6223c3 */
L_0062240B:
    ecx = MEM32(ebp + (-0xC)); /* 0x0062240B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062240E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00622415: pop ecx */
    edi = POP32_VAL(esp); /* 0x00622416: pop edi */
    esi = POP32_VAL(esp); /* 0x00622417: pop esi */
    ebx = POP32_VAL(esp); /* 0x00622418: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00622419: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062241C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062241E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00622423: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622425: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00622426: ret  */
    RECOMP_REGS_OUT();
}

void sub_00622430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622430u);

L_00622430:
    PUSH32(esp, ebp); /* 0x00622430: push ebp */
    ebp = esp; /* 0x00622431: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00622433: push -1 */
    PUSH32(esp, 0x007B75CBu); /* 0x00622435: push 0x7b75cb */
    eax = MEM32(FS_BASE + (0)); /* 0x0062243A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00622440: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x610u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x610u; /* 0x00622441: sub esp, 0x610 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00622447: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062244C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0062244E: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x00622451: push ebx */
    PUSH32(esp, esi); /* 0x00622452: push esi */
    PUSH32(esp, edi); /* 0x00622453: push edi */
    PUSH32(esp, eax); /* 0x00622454: push eax */
    eax = ebp + (-0xC); /* 0x00622455: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00622458: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0062245E: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x00622460: mov edi, dword ptr [ebp + 8] */
    eax = ebp + (-0x61C); /* 0x00622463: lea eax, [ebp - 0x61c] */
    PUSH32(esp, eax); /* 0x00622469: push eax */
    ecx = edi; /* 0x0062246A: mov ecx, edi */
    MEM32(ebp + (-0x5FC)) = edi; /* 0x0062246C: mov dword ptr [ebp - 0x5fc], edi */
    RECOMP_CALL(sub_006EF130); /* 0x00622472: call 0x6ef130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00622477: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062247A: mov ecx, esp */
    _xmm[0] = xmm_ld(eax); /* 0x0062247C: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(ecx, _xmm[0]); /* 0x00622480: movdqu xmmword ptr [ecx], xmm0 */
    ecx = ebp + (-0x414); /* 0x00622484: lea ecx, [ebp - 0x414] */
    RECOMP_CALL(sub_006EF1B0); /* 0x0062248A: call 0x6ef1b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x508); /* 0x0062248F: mov ecx, dword ptr [esi + 0x508] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x504u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x504u; /* 0x00622495: add esi, 0x504 */
    _flag_k = FK_ADD;
    eax = 0x8C08C08Du; /* 0x0062249B: mov eax, 0x8c08c08d */
    MEM32(ebp + (-0x5F4)) = esi; /* 0x006224A0: mov dword ptr [ebp - 0x5f4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006224A6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006224A8: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x5F0)) = ebx; /* 0x006224AB: mov dword ptr [ebp - 0x5f0], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x006224B1: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006224B3: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006224B5: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x006224B7: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x006224BA: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006224BC: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006224BC: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006224BF: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x604)) = eax; /* 0x006224C1: mov dword ptr [ebp - 0x604], eax */
    /* test eax, eax */ /* 0x006224C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00622604; /* 0x006224C9: jle 0x622604 */
L_006224CF:
    ecx = MEM32(esi); /* 0x006224CF: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006224D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x608)) = ecx; /* 0x006224D3: mov dword ptr [ebp - 0x608], ecx */
    MEM32(ebp + (-0x5F8)) = eax; /* 0x006224D9: mov dword ptr [ebp - 0x5f8], eax */
    /* nop */ /* 0x006224DF: nop  */
L_006224E0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x006224E0: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x600)) = eax; /* 0x006224E2: mov dword ptr [ebp - 0x600], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x44u; /* 0x006224E8: add eax, 0x44 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x414)), 0 */ /* 0x006224EB: cmp byte ptr [ebp - 0x414], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x414))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006224F8; /* 0x006224F2: jne 0x6224f8 */
L_006224F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006224F4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0062250A; /* 0x006224F6: jmp 0x62250a */
L_006224F8:
    edx = ebp + (-0x414); /* 0x006224F8: lea edx, [ebp - 0x414] */
    esi = edx + 0x1; /* 0x006224FE: lea esi, [edx + 1] */
L_00622501:
    SET_LO8(ecx, MEM8(edx)); /* 0x00622501: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00622503: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x00622504: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622501; /* 0x00622506: jne 0x622501 */
L_00622508:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x00622508: sub edx, esi */
    _flag_k = FK_CMP;
L_0062250A:
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x0062250A: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(eax + 0x10); /* 0x0062250E: mov ebx, dword ptr [eax + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00622515; /* 0x00622511: jb 0x622515 */
L_00622513:
    eax = MEM32(eax); /* 0x00622513: mov eax, dword ptr [eax] */
L_00622515:
    /* cmp ebx, edx */ /* 0x00622515: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = edx; /* 0x00622517: mov esi, edx */
    if (CMP_B(_flag_a, _flag_b)) { esi = ebx; } /* 0x00622519: cmovb esi, ebx */
    /* test esi, esi */ /* 0x0062251C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622580; /* 0x0062251E: je 0x622580 */
L_00622520:
    edi = ebp + (-0x414); /* 0x00622520: lea edi, [ebp - 0x414] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x00622526: sub esi, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_00622541; /* 0x00622529: jb 0x622541 */
L_0062252B:
    goto L_00622530; /* 0x0062252B: jmp 0x622530 */
L_00622530:
    ecx = MEM32(eax); /* 0x00622530: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(edi) */ /* 0x00622532: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622546; /* 0x00622534: jne 0x622546 */
L_00622536:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x00622536: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00622539: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x0062253C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00622530; /* 0x0062253F: jae 0x622530 */
L_00622541:
    /* cmp esi, 0xFFFFFFFCu */ /* 0x00622541: cmp esi, -4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062257A; /* 0x00622544: je 0x62257a */
L_00622546:
    SET_LO8(ecx, MEM8(eax)); /* 0x00622546: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(edi) */ /* 0x00622548: cmp cl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622573; /* 0x0062254A: jne 0x622573 */
L_0062254C:
    /* cmp esi, 0xFFFFFFFDu */ /* 0x0062254C: cmp esi, -3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062257A; /* 0x0062254F: je 0x62257a */
L_00622551:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x00622551: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(edi + 0x1) */ /* 0x00622554: cmp cl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622573; /* 0x00622557: jne 0x622573 */
L_00622559:
    /* cmp esi, 0xFFFFFFFEu */ /* 0x00622559: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062257A; /* 0x0062255C: je 0x62257a */
L_0062255E:
    SET_LO8(ecx, MEM8(eax + 0x2)); /* 0x0062255E: mov cl, byte ptr [eax + 2] */
    /* cmp LO8(ecx), MEM8(edi + 0x2) */ /* 0x00622561: cmp cl, byte ptr [edi + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622573; /* 0x00622564: jne 0x622573 */
L_00622566:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x00622566: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062257A; /* 0x00622569: je 0x62257a */
L_0062256B:
    SET_LO8(eax, MEM8(eax + 0x3)); /* 0x0062256B: mov al, byte ptr [eax + 3] */
    /* cmp LO8(eax), MEM8(edi + 0x3) */ /* 0x0062256E: cmp al, byte ptr [edi + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062257A; /* 0x00622571: je 0x62257a */
L_00622573:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00622573: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x00622575: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0062257C; /* 0x00622578: jmp 0x62257c */
L_0062257A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0062257A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0062257C:
    /* test eax, eax */ /* 0x0062257C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622592; /* 0x0062257E: jne 0x622592 */
L_00622580:
    /* cmp ebx, edx */ /* 0x00622580: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00622589; /* 0x00622582: jae 0x622589 */
L_00622584:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00622584: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00622590; /* 0x00622587: jmp 0x622590 */
L_00622589:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00622589: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edx */ /* 0x0062258B: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x0062258D: setne al */
L_00622590:
    /* test eax, eax */ /* 0x00622590: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_00622592:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x00622592: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x00622595: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006225A5; /* 0x00622597: je 0x6225a5 */
L_00622599:
    eax = MEM32(ebp + (-0x600)); /* 0x00622599: mov eax, dword ptr [ebp - 0x600] */
    /* cmp MEM32(eax + 0x34), 0 */ /* 0x0062259F: cmp dword ptr [eax + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006225D6; /* 0x006225A3: je 0x6225d6 */
L_006225A5:
    ebx = MEM32(ebp + (-0x5F0)); /* 0x006225A5: mov ebx, dword ptr [ebp - 0x5f0] */
    eax = MEM32(ebp + (-0x5F8)); /* 0x006225AB: mov eax, dword ptr [ebp - 0x5f8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006225B1: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1D4u; /* 0x006225B2: add eax, 0x1d4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x5F0)) = ebx; /* 0x006225B7: mov dword ptr [ebp - 0x5f0], ebx */
    MEM32(ebp + (-0x5F8)) = eax; /* 0x006225BD: mov dword ptr [ebp - 0x5f8], eax */
    /* cmp ebx, MEM32(ebp + (-0x604)) */ /* 0x006225C3: cmp ebx, dword ptr [ebp - 0x604] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x604)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006225F8; /* 0x006225C9: jge 0x6225f8 */
L_006225CB:
    ecx = MEM32(ebp + (-0x608)); /* 0x006225CB: mov ecx, dword ptr [ebp - 0x608] */
    RECOMP_BACKEDGE();
    goto L_006224E0; /* 0x006225D1: jmp 0x6224e0 */
L_006225D6:
    ebx = MEM32(ebp + (-0x5F0)); /* 0x006225D6: mov ebx, dword ptr [ebp - 0x5f0] */
    esi = MEM32(ebp + (-0x5F4)); /* 0x006225DC: mov esi, dword ptr [ebp - 0x5f4] */
    edi = MEM32(ebp + (-0x5FC)); /* 0x006225E2: mov edi, dword ptr [ebp - 0x5fc] */
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x1D4u); /* 0x006225E8: imul ecx, ebx, 0x1d4 */
    PUSH32(esp, edi); /* 0x006225EE: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi); /* 0x006225EF: add ecx, dword ptr [esi] */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_00622E70); /* 0x006225F1: call 0x622e70 */
    RECOMP_FLAGS_IN();
    goto L_00622604; /* 0x006225F6: jmp 0x622604 */
L_006225F8:
    esi = MEM32(ebp + (-0x5F4)); /* 0x006225F8: mov esi, dword ptr [ebp - 0x5f4] */
    edi = MEM32(ebp + (-0x5FC)); /* 0x006225FE: mov edi, dword ptr [ebp - 0x5fc] */
L_00622604:
    ecx = MEM32(esi + 0x4); /* 0x00622604: mov ecx, dword ptr [esi + 4] */
    eax = 0x8C08C08Du; /* 0x00622607: mov eax, 0x8c08c08d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x0062260C: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0062260E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00622610: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00622612: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00622615: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00622617: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00622617: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0062261A: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x0062261C: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062264D; /* 0x0062261E: jb 0x62264d */
L_00622620:
    PUSH32(esp, edi); /* 0x00622620: push edi */
    ecx = ebp + (-0x5EC); /* 0x00622621: lea ecx, [ebp - 0x5ec] */
    RECOMP_CALL(sub_00622C50); /* 0x00622627: call 0x622c50 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062262C: mov dword ptr [ebp - 4], 0 */
    ecx = esi; /* 0x00622633: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00622635: push eax */
    RECOMP_CALL(sub_00625760); /* 0x00622636: call 0x625760 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062263B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x5EC); /* 0x00622642: lea ecx, [ebp - 0x5ec] */
    RECOMP_CALL(sub_0061F180); /* 0x00622648: call 0x61f180 */
    RECOMP_FLAGS_IN();
L_0062264D:
    eax = ebx; /* 0x0062264D: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062264F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00622652: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00622659: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062265A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062265B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062265C: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0062265D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00622660: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00622662: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00622667: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622669: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062266A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00622670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622670u);

L_00622670:
    PUSH32(esp, ebp); /* 0x00622670: push ebp */
    ebp = esp; /* 0x00622671: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00622673: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00622676: push ebx */
    PUSH32(esp, esi); /* 0x00622677: push esi */
    PUSH32(esp, edi); /* 0x00622678: push edi */
    edi = ecx; /* 0x00622679: mov edi, ecx */
    eax = 0x8C08C08Du; /* 0x0062267B: mov eax, 0x8c08c08d */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00622680: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x00622682: mov dword ptr [ebp - 4], edi */
    esi = MEM32(edi + 0x508); /* 0x00622685: mov esi, dword ptr [edi + 0x508] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0x504); /* 0x0062268B: sub esi, dword ptr [edi + 0x504] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x00622691: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x00622693: add edx, esi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00622695: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00622698: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0062269A: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0062269A: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0062269D: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006226E1; /* 0x0062269F: je 0x6226e1 */
L_006226A1:
    esi = MEM32(edi + 0x504); /* 0x006226A1: mov esi, dword ptr [edi + 0x504] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x30u; /* 0x006226A7: add esi, 0x30 */
    _flag_k = FK_ADD;
    ebx = ebx; /* 0x006226AA: lea ebx, [ebx] */
L_006226B0:
    eax = MEM32(ebp + 0x8); /* 0x006226B0: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), eax */ /* 0x006226B3: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006226ED; /* 0x006226B5: je 0x6226ed */
L_006226B7:
    ecx = MEM32(edi + 0x508); /* 0x006226B7: mov ecx, dword ptr [edi + 0x508] */
    eax = 0x8C08C08Du; /* 0x006226BD: mov eax, 0x8c08c08d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x504); /* 0x006226C2: sub ecx, dword ptr [edi + 0x504] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006226C8: inc ebx */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006226C9: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x006226CB: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006226D1: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x006226D3: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x006226D6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006226D8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006226D8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006226DB: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x006226DD: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006226B0; /* 0x006226DF: jb 0x6226b0 */
L_006226E1:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006226E1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006226E4: pop edi */
    esi = POP32_VAL(esp); /* 0x006226E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006226E6: pop ebx */
    esp = ebp; /* 0x006226E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006226E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006226EA: ret 4 */
L_006226ED:
    ecx = MEM32(edi + 0x504); /* 0x006226ED: mov ecx, dword ptr [edi + 0x504] */
    esi = (uint32_t)((int32_t)ebx * (int32_t)0x1D4u); /* 0x006226F3: imul esi, ebx, 0x1d4 */
    ecx = ecx + esi; /* 0x006226F9: lea ecx, [ecx + esi] */
    RECOMP_CALL(sub_00623090); /* 0x006226FC: call 0x623090 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x504); /* 0x00622701: mov eax, dword ptr [edi + 0x504] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00622707: push dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x508); /* 0x0062270A: mov edx, dword ptr [edi + 0x508] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00622710: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00622712: push eax */
    ecx = eax + 0x1D4; /* 0x00622713: lea ecx, [eax + 0x1d4] */
    RECOMP_CALL(sub_006276F0); /* 0x00622719: call 0x6276f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x508); /* 0x0062271E: mov eax, dword ptr [edi + 0x508] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00622724: add esp, 8 */
    _flag_k = FK_ADD;
    esi = eax + (-0x1D4); /* 0x00622727: lea esi, [eax - 0x1d4] */
    /* cmp esi, eax */ /* 0x0062272D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622747; /* 0x0062272F: je 0x622747 */
L_00622731:
    edi = eax; /* 0x00622731: mov edi, eax */
L_00622733:
    ecx = esi; /* 0x00622733: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x00622735: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x0062273A: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x00622740: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622733; /* 0x00622742: jne 0x622733 */
L_00622744:
    edi = MEM32(ebp + (-0x4)); /* 0x00622744: mov edi, dword ptr [ebp - 4] */
L_00622747:
    _flag_a = (uint32_t)(MEM32(edi + 0x508)); _flag_b = (uint32_t)(0xFFFFFE2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x508) = MEM32(edi + 0x508) + 0xFFFFFE2Cu; /* 0x00622747: add dword ptr [edi + 0x508], 0xfffffe2c */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x00622751: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x00622753: pop edi */
    esi = POP32_VAL(esp); /* 0x00622754: pop esi */
    ebx = POP32_VAL(esp); /* 0x00622755: pop ebx */
    esp = ebp; /* 0x00622756: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622758: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622759: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00622760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622760u);

L_00622760:
    PUSH32(esp, ebp); /* 0x00622760: push ebp */
    ebp = esp; /* 0x00622761: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00622763: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)MEM32(ecx + 0x3D8) * (int32_t)0x1D4u); /* 0x00622766: imul edx, dword ptr [ecx + 0x3d8], 0x1d4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00622770: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(ecx + 0x504); /* 0x00622773: mov ecx, dword ptr [ecx + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00622779: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO8(eax); /* 0x0062277C: movzx eax, al */
    PUSH32(esp, esi); /* 0x0062277F: push esi */
    PUSH32(esp, edi); /* 0x00622780: push edi */
    esi = eax + eax * 4; /* 0x00622781: lea esi, [eax + eax*4] */
    edi = MEM32(edx + ecx + 0x14); /* 0x00622784: mov edi, dword ptr [edx + ecx + 0x14] */
    /* cmp MEM8(edi + esi * 4 + 0x10), 0 */ /* 0x00622788: cmp byte ptr [edi + esi*4 + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(edi + esi * 4 + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622799; /* 0x0062278D: je 0x622799 */
L_0062278F:
    _xmm[1].u64[0] = MEM32(0x809824); _xmm[1].u64[1] = 0; /* 0x0062278F: movss xmm1, dword ptr [0x809824] */
    goto L_006227A1; /* 0x00622797: jmp 0x6227a1 */
L_00622799:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x00622799: movss xmm1, dword ptr [0x808cb0] */
L_006227A1:
    eax = (int32_t)(int16_t)MEM16(edi + esi * 4 + 0x12); /* 0x006227A1: movsx eax, word ptr [edi + esi*4 + 0x12] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006227A6: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006227AA: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(edi + esi * 4 + 0xC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006227AD: mulss xmm0, dword ptr [edi + esi*4 + 0xc] */
    { float _s = sse_f32(MEM32(0x809780)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006227B3: divss xmm0, dword ptr [0x809780] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006227BB: mulss xmm0, xmm1 */
    _xmm[1].u64[0] = MEM32(0x809398); _xmm[1].u64[1] = 0; /* 0x006227BF: movss xmm1, dword ptr [0x809398] */
    MEM32(esp + 0xC) = _xmm[0].u32[0]; /* 0x006227C7: movss dword ptr [esp + 0xc], xmm0 */
    RECOMP_CALL(sub_0040BD80); /* 0x006227CD: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[3].u64[0] = MEM32(0x808CB0); _xmm[3].u64[1] = 0; /* 0x006227D2: movss xmm3, dword ptr [0x808cb0] */
    _xmm[2] = _xmm[0]; /* 0x006227DA: movaps xmm2, xmm0 */
    _xmm[1].u64[0] = MEM32(edi + esi * 4); _xmm[1].u64[1] = 0; /* 0x006227DD: movss xmm1, dword ptr [edi + esi*4] */
    _xmm[0] = _xmm[3]; /* 0x006227E2: movaps xmm0, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006227E5: subss xmm0, xmm1 */
    { float _s = sse_f32(MEM32(esp + 0xC)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006227E9: mulss xmm1, dword ptr [esp + 0xc] */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x006227EF: mulss xmm2, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006227F3: xorps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x006227F6: addss xmm2, xmm1 */
    _xmm[0].f64[0] = (double)_xmm[2].f32[0]; /* 0x006227FA: cvtss2sd xmm0, xmm2 */
    { xmm_t _s = xmm_ld(0x809C90); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x006227FE: andpd xmm0, xmmword ptr [0x809c90] */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x00622806: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(edi + esi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0062280A: movss xmm0, dword ptr [edi + esi*4 + 4] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00622810: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00622820; /* 0x00622813: jbe 0x622820 */
L_00622815:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00622815: xorps xmm0, xmm0 */
    edi = POP32_VAL(esp); /* 0x00622818: pop edi */
    esi = POP32_VAL(esp); /* 0x00622819: pop esi */
    esp = ebp; /* 0x0062281A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062281C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062281D: ret 4 */
L_00622820:
    _xmm[1].u64[0] = MEM32(edi + esi * 4 + 0x8); _xmm[1].u64[1] = 0; /* 0x00622820: movss xmm1, dword ptr [edi + esi*4 + 8] */
    _xmm[0] = _xmm[1]; /* 0x00622826: movaps xmm0, xmm1 */
    { xmm_t _s = xmm_ld(0x809CB0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00622829: xorps xmm0, xmmword ptr [0x809cb0] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00622830: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00622845; /* 0x00622833: jbe 0x622845 */
L_00622835:
    _xmm[0].u64[0] = MEM32(0x809824); _xmm[0].u64[1] = 0; /* 0x00622835: movss xmm0, dword ptr [0x809824] */
    edi = POP32_VAL(esp); /* 0x0062283D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062283E: pop esi */
    esp = ebp; /* 0x0062283F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622841: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622842: ret 4 */
L_00622845:
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00622845: comiss xmm2, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00622855; /* 0x00622848: jbe 0x622855 */
L_0062284A:
    _xmm[0] = _xmm[3]; /* 0x0062284A: movaps xmm0, xmm3 */
    edi = POP32_VAL(esp); /* 0x0062284D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062284E: pop esi */
    esp = ebp; /* 0x0062284F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622851: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622852: ret 4 */
L_00622855:
    _xmm[0].u64[0] = MEM32(0x809824); _xmm[0].u64[1] = 0; /* 0x00622855: movss xmm0, dword ptr [0x809824] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062285D: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00622875; /* 0x00622860: ja 0x622875 */
L_00622862:
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00622862: comiss xmm2, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00622872; /* 0x00622865: jbe 0x622872 */
L_00622867:
    _xmm[0] = _xmm[3]; /* 0x00622867: movaps xmm0, xmm3 */
    edi = POP32_VAL(esp); /* 0x0062286A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062286B: pop esi */
    esp = ebp; /* 0x0062286C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062286E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062286F: ret 4 */
L_00622872:
    _xmm[0] = _xmm[2]; /* 0x00622872: movaps xmm0, xmm2 */
L_00622875:
    edi = POP32_VAL(esp); /* 0x00622875: pop edi */
    esi = POP32_VAL(esp); /* 0x00622876: pop esi */
    esp = ebp; /* 0x00622877: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622879: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062287A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00622880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622880u);

L_00622880:
    PUSH32(esp, ebp); /* 0x00622880: push ebp */
    ebp = esp; /* 0x00622881: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00622883: push ebx */
    ebx = ecx; /* 0x00622884: mov ebx, ecx */
    eax = 0x8C08C08Du; /* 0x00622886: mov eax, 0x8c08c08d */
    PUSH32(esp, esi); /* 0x0062288B: push esi */
    PUSH32(esp, edi); /* 0x0062288C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0062288D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebx + 0x508); /* 0x0062288F: mov edi, dword ptr [ebx + 0x508] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebx + 0x504); /* 0x00622895: sub edi, dword ptr [ebx + 0x504] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x0062289B: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x0062289D: add edx, edi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0062289F: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    ecx = edx; /* 0x006228A2: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x006228A4: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x006228A4: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x006228A7: add ecx, edx */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006228A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006228CF; /* 0x006228AB: jle 0x6228cf */
L_006228AD:
    edx = MEM32(ebx + 0x504); /* 0x006228AD: mov edx, dword ptr [ebx + 0x504] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006228B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x006228B5: mov edi, dword ptr [ebp + 8] */
L_006228B8:
    /* cmp MEM32(eax + edx + 0x34), 0 */ /* 0x006228B8: cmp dword ptr [eax + edx + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006228C5; /* 0x006228BD: je 0x6228c5 */
L_006228BF:
    /* cmp MEM32(eax + edx + 0x30), edi */ /* 0x006228BF: cmp dword ptr [eax + edx + 0x30], edi */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x30)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006228D8; /* 0x006228C3: je 0x6228d8 */
L_006228C5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006228C5: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1D4u; /* 0x006228C6: add eax, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x006228CB: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006228B8; /* 0x006228CD: jl 0x6228b8 */
L_006228CF:
    edi = POP32_VAL(esp); /* 0x006228CF: pop edi */
    esi = POP32_VAL(esp); /* 0x006228D0: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006228D1: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x006228D3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006228D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006228D5: ret 8 */
L_006228D8:
    eax = MEM32(ebp + 0xC); /* 0x006228D8: mov eax, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x006228DB: pop edi */
    MEM32(eax) = esi; /* 0x006228DC: mov dword ptr [eax], esi */
    SET_LO8(eax, 1); /* 0x006228DE: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x006228E0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006228E1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006228E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006228E3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006228F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006228F0u);

L_006228F0:
    PUSH32(esp, ebp); /* 0x006228F0: push ebp */
    ebp = esp; /* 0x006228F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006228F3: push -1 */
    PUSH32(esp, 0x007B7676u); /* 0x006228F5: push 0x7b7676 */
    eax = MEM32(FS_BASE + (0)); /* 0x006228FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00622900: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x00622901: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00622904: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00622909: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0062290B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0062290E: push esi */
    PUSH32(esp, eax); /* 0x0062290F: push eax */
    eax = ebp + (-0xC); /* 0x00622910: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00622913: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x00622919: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x34)) = 0x007F8F1Cu; /* 0x0062291C: mov dword ptr [ebp - 0x34], 0x7f8f1c */
    MEM32(ebp + (-0x30)) = 0x3D8u; /* 0x00622923: mov dword ptr [ebp - 0x30], 0x3d8 */
    MEM32(esi + 0x4) = 0x007F8F08u; /* 0x0062292A: mov dword ptr [esi + 4], 0x7f8f08 */
    MEM32(esi + 0x8) = 0x5D4u; /* 0x00622931: mov dword ptr [esi + 8], 0x5d4 */
    RECOMP_CALL(sub_0061EA20); /* 0x00622938: call 0x61ea20 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x0062293D: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x28)) = 0x007F8F2Cu; /* 0x00622940: mov dword ptr [ebp - 0x28], 0x7f8f2c */
    MEM32(ebp + (-0x24)) = 0x510u; /* 0x00622947: mov dword ptr [ebp - 0x24], 0x510 */
    RECOMP_CALL(sub_0061EBE0); /* 0x0062294E: call 0x61ebe0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x00622953: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(0x92820C); /* 0x00622956: mov eax, dword ptr [0x92820c] */
    MEM32(ebp + (-0x1C)) = 0x007F8F3Cu; /* 0x0062295B: mov dword ptr [ebp - 0x1c], 0x7f8f3c */
    MEM32(ebp + (-0x18)) = 0x504u; /* 0x00622962: mov dword ptr [ebp - 0x18], 0x504 */
    /* test LO8(eax), 1 */ /* 0x00622969: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622996; /* 0x0062296B: jne 0x622996 */
L_0062296D:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0062296D: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x92820C) = eax; /* 0x00622970: mov dword ptr [0x92820c], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00622975: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, ecx); /* 0x0062297C: push ecx */
    RECOMP_CALL(sub_00626E10); /* 0x0062297D: call 0x626e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CAF20u); /* 0x00622982: push 0x7caf20 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00622987: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062298C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062298F: mov dword ptr [ebp - 4], 0xffffffff */
L_00622996:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00622996: push dword ptr [ebp - 0x44] */
    eax = ebp + (-0x10); /* 0x00622999: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x14)) = 0x009281B0u; /* 0x0062299C: mov dword ptr [ebp - 0x14], 0x9281b0 */
    PUSH32(esp, eax); /* 0x006229A3: push eax */
    eax = ebp + (-0x34); /* 0x006229A4: lea eax, [ebp - 0x34] */
    MEM32(ebp + (-0x40)) = 0; /* 0x006229A7: mov dword ptr [ebp - 0x40], 0 */
    PUSH32(esp, eax); /* 0x006229AE: push eax */
    PUSH32(esp, 0); /* 0x006229AF: push 0 */
    ecx = ebp + (-0x40); /* 0x006229B1: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x3C)) = 0; /* 0x006229B4: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x006229BB: mov dword ptr [ebp - 0x38], 0 */
    RECOMP_CALL(sub_006271D0); /* 0x006229C2: call 0x6271d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x006229C7: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x40); /* 0x006229CE: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x006229D1: push eax */
    ecx = esi + 0xC; /* 0x006229D2: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_00625400); /* 0x006229D5: call 0x625400 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006229DA: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x40)); /* 0x006229E1: mov eax, dword ptr [ebp - 0x40] */
    /* test eax, eax */ /* 0x006229E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622A07; /* 0x006229E6: je 0x622a07 */
L_006229E8:
    PUSH32(esp, eax); /* 0x006229E8: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006229E9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006229EF: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = 0; /* 0x006229F2: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x3C)) = 0; /* 0x006229F9: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x00622A00: mov dword ptr [ebp - 0x38], 0 */
L_00622A07:
    ecx = MEM32(ebp + (-0xC)); /* 0x00622A07: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00622A0A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00622A11: pop ecx */
    esi = POP32_VAL(esp); /* 0x00622A12: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x00622A13: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00622A16: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00622A18: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00622A1D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622A1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00622A20: ret  */
    RECOMP_REGS_OUT();
}

void sub_00622A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622A30u);

L_00622A30:
    PUSH32(esp, ebp); /* 0x00622A30: push ebp */
    ebp = esp; /* 0x00622A31: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00622A33: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x00622A34: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x00622A37: push esi */
    esi = ecx; /* 0x00622A38: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x00622A3A: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x50) = ecx; /* 0x00622A3D: mov dword ptr [esi + 0x50], ecx */
    MEM32(esi + 0x4C) = eax; /* 0x00622A40: mov dword ptr [esi + 0x4c], eax */
    /* test eax, eax */ /* 0x00622A43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622A60; /* 0x00622A45: je 0x622a60 */
L_00622A47:
    /* cmp eax, 1 */ /* 0x00622A47: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622A60; /* 0x00622A4A: je 0x622a60 */
L_00622A4C:
    /* cmp eax, 3 */ /* 0x00622A4C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622A60; /* 0x00622A4F: je 0x622a60 */
L_00622A51:
    /* cmp eax, 2 */ /* 0x00622A51: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622A6D; /* 0x00622A54: jne 0x622a6d */
L_00622A56:
    eax = 1; /* 0x00622A56: mov eax, 1 */
    MEM8(esi + 0xC) = (uint8_t)(LO8(eax)); /* 0x00622A5B: mov byte ptr [esi + 0xc], al */
    goto L_00622A69; /* 0x00622A5E: jmp 0x622a69 */
L_00622A60:
    eax = 8; /* 0x00622A60: mov eax, 8 */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x00622A65: mov byte ptr [esi + 0xc], 1 */
L_00622A69:
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x00622A69: mov word ptr [esi + 8], ax */
L_00622A6D:
    ecx = MEM32(ecx + 0x8); /* 0x00622A6D: mov ecx, dword ptr [ecx + 8] */
    /* test ecx, ecx */ /* 0x00622A70: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622A8B; /* 0x00622A72: je 0x622a8b */
L_00622A74:
    eax = MEM32(0x87CBF4); /* 0x00622A74: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x00622A79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622A8B; /* 0x00622A7B: je 0x622a8b */
L_00622A7D:
    ecx = ecx; /* 0x00622A7D: lea ecx, [ecx] */
L_00622A80:
    /* cmp eax, ecx */ /* 0x00622A80: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622AC1; /* 0x00622A82: je 0x622ac1 */
L_00622A84:
    eax = MEM32(eax + 0x68); /* 0x00622A84: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x00622A87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622A80; /* 0x00622A89: jne 0x622a80 */
L_00622A8B:
    PUSH32(esp, 0x00804418u); /* 0x00622A8B: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x00622A90: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00622A95: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00622A98: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00622A9A:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x00622A9A: movzx eax, word ptr [esi + 8] */
    edx = esi + 0x8; /* 0x00622A9E: lea edx, [esi + 8] */
    /* test ecx, eax */ /* 0x00622AA1: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622AC6; /* 0x00622AA3: je 0x622ac6 */
L_00622AA5:
    ecx = MEM32(esi + 0x50); /* 0x00622AA5: mov ecx, dword ptr [esi + 0x50] */
    ecx = MEM32(ecx + 0x8); /* 0x00622AA8: mov ecx, dword ptr [ecx + 8] */
    RECOMP_CALL(sub_006EF520); /* 0x00622AAB: call 0x6ef520 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00622AB0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = eax; /* 0x00622AB3: mov dword ptr [esi], eax */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00622AB5: setne al */
    MEM8(esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x00622AB8: mov byte ptr [esi + 4], al */
    esi = POP32_VAL(esp); /* 0x00622ABB: pop esi */
    ecx = POP32_VAL(esp); /* 0x00622ABC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x00622ABD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00622ABE: ret 8 */
L_00622AC1:
    ecx = MEM32(ecx + 0x10); /* 0x00622AC1: mov ecx, dword ptr [ecx + 0x10] */
    RECOMP_BACKEDGE();
    goto L_00622A9A; /* 0x00622AC4: jmp 0x622a9a */
L_00622AC6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00622AC6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x00622AC8: pop esi */
    ecx = POP32_VAL(esp); /* 0x00622AC9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x00622ACA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00622ACB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00622AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622AD0u);

L_00622AD0:
    PUSH32(esp, ebp); /* 0x00622AD0: push ebp */
    ebp = esp; /* 0x00622AD1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00622AD3: push esi */
    esi = ecx; /* 0x00622AD4: mov esi, ecx */
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x00622AD6: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622B6B; /* 0x00622ADA: je 0x622b6b */
L_00622AE0:
    { float _s = sse_f32(MEM32(0x809780)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x00622AE0: mulss xmm1, dword ptr [0x809780] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x00622AE8: cvttss2si eax, xmm1 */
    ecx = (uint32_t)LO16(eax); /* 0x00622AEC: movzx ecx, ax */
    eax = MEM32(esi + 0x4C); /* 0x00622AEF: mov eax, dword ptr [esi + 0x4c] */
    /* test eax, eax */ /* 0x00622AF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622B0B; /* 0x00622AF4: je 0x622b0b */
L_00622AF6:
    /* cmp eax, 1 */ /* 0x00622AF6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622B0B; /* 0x00622AF9: je 0x622b0b */
L_00622AFB:
    /* cmp eax, 3 */ /* 0x00622AFB: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622B0B; /* 0x00622AFE: je 0x622b0b */
L_00622B00:
    /* cmp eax, 2 */ /* 0x00622B00: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622B37; /* 0x00622B03: jne 0x622b37 */
L_00622B05:
    MEM16(esi + 0x26) = (uint16_t)(LO16(ecx)); /* 0x00622B05: mov word ptr [esi + 0x26], cx */
    goto L_00622B17; /* 0x00622B09: jmp 0x622b17 */
L_00622B0B:
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x00622B0B: mov ax, word ptr [ebp + 0x10] */
    MEM16(esi + 0x28) = (uint16_t)(LO16(ecx)); /* 0x00622B0F: mov word ptr [esi + 0x28], cx */
    MEM16(esi + 0x26) = (uint16_t)(LO16(eax)); /* 0x00622B13: mov word ptr [esi + 0x26], ax */
L_00622B17:
    ecx = MEM32(ebp + 0x8); /* 0x00622B17: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x00622B1A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x1C) = eax; /* 0x00622B1D: mov dword ptr [esi + 0x1c], eax */
    eax = (uint32_t)sse_cvt_i32((double)sse_f32(MEM32(ecx)), 1); /* 0x00622B20: cvttss2si eax, dword ptr [ecx] */
    MEM32(esi + 0x10) = eax; /* 0x00622B24: mov dword ptr [esi + 0x10], eax */
    eax = (uint32_t)sse_cvt_i32((double)sse_f32(MEM32(ecx + 0x4)), 1); /* 0x00622B27: cvttss2si eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x14) = eax; /* 0x00622B2C: mov dword ptr [esi + 0x14], eax */
    eax = (uint32_t)sse_cvt_i32((double)sse_f32(MEM32(ecx + 0x8)), 1); /* 0x00622B2F: cvttss2si eax, dword ptr [ecx + 8] */
    MEM32(esi + 0x18) = eax; /* 0x00622B34: mov dword ptr [esi + 0x18], eax */
L_00622B37:
    ecx = MEM32(esi + 0x50); /* 0x00622B37: mov ecx, dword ptr [esi + 0x50] */
    eax = esi + 0x8; /* 0x00622B3A: lea eax, [esi + 8] */
    edx = MEM32(esi); /* 0x00622B3D: mov edx, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x00622B3F: push eax */
    ecx = MEM32(ecx + 0x8); /* 0x00622B40: mov ecx, dword ptr [ecx + 8] */
    RECOMP_CALL(sub_006EF5F0); /* 0x00622B43: call 0x6ef5f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00622B48: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00622B4B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622BA0; /* 0x00622B4E: je 0x622ba0 */
L_00622B50:
    edx = MEM32(esi); /* 0x00622B50: mov edx, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x00622B52: push ecx */
    ecx = MEM32(esi + 0x50); /* 0x00622B53: mov ecx, dword ptr [esi + 0x50] */
    ecx = MEM32(ecx + 0x8); /* 0x00622B56: mov ecx, dword ptr [ecx + 8] */
    RECOMP_CALL(sub_006EF6A0); /* 0x00622B59: call 0x6ef6a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00622B5E: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00622B61: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00622B63: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00622B65: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x00622B66: pop esi */
    ebp = POP32_VAL(esp); /* 0x00622B67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00622B68: ret 0xc */
L_00622B6B:
    eax = MEM32(esi + 0x4C); /* 0x00622B6B: mov eax, dword ptr [esi + 0x4c] */
    /* cmp eax, 1 */ /* 0x00622B6E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622B78; /* 0x00622B71: je 0x622b78 */
L_00622B73:
    /* cmp eax, 3 */ /* 0x00622B73: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622BA0; /* 0x00622B76: jne 0x622ba0 */
L_00622B78:
    ecx = MEM32(esi + 0x50); /* 0x00622B78: mov ecx, dword ptr [esi + 0x50] */
    /* cmp MEM8(ecx + 0x10), 0 */ /* 0x00622B7B: cmp byte ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622BA0; /* 0x00622B7F: je 0x622ba0 */
L_00622B81:
    edx = MEM32(ebp + 0xC); /* 0x00622B81: mov edx, dword ptr [ebp + 0xc] */
    eax = 0x7D0u; /* 0x00622B84: mov eax, 0x7d0 */
    ecx = MEM32(ecx + 0x8); /* 0x00622B89: mov ecx, dword ptr [ecx + 8] */
    /* cmp edx, eax */ /* 0x00622B8C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x00622B8E: cmova edx, eax */
    RECOMP_CALL(sub_006EF8E0); /* 0x00622B91: call 0x6ef8e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00622B96: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00622B98: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00622B9A: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x00622B9B: pop esi */
    ebp = POP32_VAL(esp); /* 0x00622B9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00622B9D: ret 0xc */
L_00622BA0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00622BA0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x00622BA2: pop esi */
    ebp = POP32_VAL(esp); /* 0x00622BA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00622BA4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00622BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622BB0u);

L_00622BB0:
    PUSH32(esp, ebp); /* 0x00622BB0: push ebp */
    ebp = esp; /* 0x00622BB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00622BB3: push -1 */
    PUSH32(esp, 0x007B76B6u); /* 0x00622BB5: push 0x7b76b6 */
    eax = MEM32(FS_BASE + (0)); /* 0x00622BBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00622BC0: push eax */
    PUSH32(esp, ecx); /* 0x00622BC1: push ecx */
    eax = MEM32(0x855000); /* 0x00622BC2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00622BC7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00622BC9: push eax */
    eax = ebp + (-0xC); /* 0x00622BCA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00622BCD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00622BD3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ecx) = 0xFFFFFFFFu; /* 0x00622BD6: mov dword ptr [ecx], 0xffffffff */
    MEM32(ecx + 0x4) = 0; /* 0x00622BDC: mov dword ptr [ecx + 4], 0 */
    MEM32(ecx + 0x8) = 0; /* 0x00622BE3: mov dword ptr [ecx + 8], 0 */
    MEM32(ecx + 0xC) = 0; /* 0x00622BEA: mov dword ptr [ecx + 0xc], 0 */
    MEM8(ecx + 0x10) = (uint8_t)(0); /* 0x00622BF1: mov byte ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x28) = 0xFu; /* 0x00622BF5: mov dword ptr [ecx + 0x28], 0xf */
    MEM32(ecx + 0x24) = 0; /* 0x00622BFC: mov dword ptr [ecx + 0x24], 0 */
    MEM8(ecx + 0x14) = (uint8_t)(0); /* 0x00622C03: mov byte ptr [ecx + 0x14], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x00622C07: mov dword ptr [ebp - 4], 0 */
    MEM32(ecx + 0x40) = 0xFu; /* 0x00622C0E: mov dword ptr [ecx + 0x40], 0xf */
    MEM32(ecx + 0x3C) = 0; /* 0x00622C15: mov dword ptr [ecx + 0x3c], 0 */
    MEM8(ecx + 0x2C) = (uint8_t)(0); /* 0x00622C1C: mov byte ptr [ecx + 0x2c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00622C20: mov byte ptr [ebp - 4], 1 */
    MEM32(ecx + 0x44) = 0xFFFFFFFFu; /* 0x00622C24: mov dword ptr [ecx + 0x44], 0xffffffff */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00622C2B: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x00622C32: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00622C34: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00622C37: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00622C3E: pop ecx */
    esp = ebp; /* 0x00622C3F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622C41: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00622C42: ret  */
    RECOMP_REGS_OUT();
}

void sub_00622C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622C50u);

L_00622C50:
    PUSH32(esp, ebp); /* 0x00622C50: push ebp */
    ebp = esp; /* 0x00622C51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00622C53: push -1 */
    PUSH32(esp, 0x007B772Fu); /* 0x00622C55: push 0x7b772f */
    eax = MEM32(FS_BASE + (0)); /* 0x00622C5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00622C60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00622C61: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00622C64: push ebx */
    PUSH32(esp, esi); /* 0x00622C65: push esi */
    PUSH32(esp, edi); /* 0x00622C66: push edi */
    eax = MEM32(0x855000); /* 0x00622C67: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00622C6C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00622C6E: push eax */
    eax = ebp + (-0xC); /* 0x00622C6F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00622C72: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x00622C78: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x00622C7A: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebx) = 0x007E2190u; /* 0x00622C7D: mov dword ptr [ebx], 0x7e2190 */
    MEM32(ebx + 0x8) = 0; /* 0x00622C83: mov dword ptr [ebx + 8], 0 */
    MEM32(ebx + 0xC) = 0; /* 0x00622C8A: mov dword ptr [ebx + 0xc], 0 */
    MEM32(ebx + 0x10) = 0; /* 0x00622C91: mov dword ptr [ebx + 0x10], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x00622C98: mov dword ptr [ebp - 4], 0 */
    MEM32(ebx + 0x14) = 0; /* 0x00622C9F: mov dword ptr [ebx + 0x14], 0 */
    MEM32(ebx + 0x18) = 0; /* 0x00622CA6: mov dword ptr [ebx + 0x18], 0 */
    MEM32(ebx + 0x1C) = 0; /* 0x00622CAD: mov dword ptr [ebx + 0x1c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00622CB4: mov byte ptr [ebp - 4], 1 */
    ecx = ebx + 0x30; /* 0x00622CB8: lea ecx, [ebx + 0x30] */
    MEM32(ebx + 0x20) = 0x3F800000u; /* 0x00622CBB: mov dword ptr [ebx + 0x20], 0x3f800000 */
    MEM32(ebx + 0x24) = 0x3F800000u; /* 0x00622CC2: mov dword ptr [ebx + 0x24], 0x3f800000 */
    MEM32(ebx + 0x28) = 0x3F800000u; /* 0x00622CC9: mov dword ptr [ebx + 0x28], 0x3f800000 */
    MEM8(ebx + 0x2C) = (uint8_t)(1); /* 0x00622CD0: mov byte ptr [ebx + 0x2c], 1 */
    RECOMP_CALL(sub_00622BB0); /* 0x00622CD4: call 0x622bb0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00622CD9: mov byte ptr [ebp - 4], 2 */
    esi = ebx + 0x78; /* 0x00622CDD: lea esi, [ebx + 0x78] */
    edi = 3; /* 0x00622CE0: mov edi, 3 */
L_00622CE5:
    PUSH32(esp, 0x44u); /* 0x00622CE5: push 0x44 */
    eax = esi + 0x8; /* 0x00622CE7: lea eax, [esi + 8] */
    MEM32(esi) = 0xFFFFFFFFu; /* 0x00622CEA: mov dword ptr [esi], 0xffffffff */
    PUSH32(esp, 0); /* 0x00622CF0: push 0 */
    PUSH32(esp, eax); /* 0x00622CF2: push eax */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x00622CF3: mov byte ptr [esi + 4], 0 */
    RECOMP_CALL(sub_0078083E); /* 0x00622CF7: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00622CFC: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = esi + 0x54; /* 0x00622CFF: lea esi, [esi + 0x54] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00622D02: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_00622CE5; /* 0x00622D03: jns 0x622ce5 */
L_00622D05:
    esi = ebx + 0x1CC; /* 0x00622D05: lea esi, [ebx + 0x1cc] */
    MEM32(esi) = 0; /* 0x00622D0B: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x14)) = esi; /* 0x00622D11: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi + 0x4) = 0; /* 0x00622D14: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_005ED4A0); /* 0x00622D1B: call 0x5ed4a0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x00622D20: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00622D22: mov byte ptr [ebp - 4], 7 */
    ecx = ebx + 0x8; /* 0x00622D26: lea ecx, [ebx + 8] */
    PUSH32(esp, 0x25u); /* 0x00622D29: push 0x25 */
    RECOMP_CALL(sub_00625460); /* 0x00622D2B: call 0x625460 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00622D30: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x00622D33: mov ecx, ebx */
    RECOMP_CALL(sub_00622E70); /* 0x00622D35: call 0x622e70 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x00622D3A: mov ecx, ebx */
    RECOMP_CALL(sub_00623100); /* 0x00622D3C: call 0x623100 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00622D41: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x00622D48: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00622D4A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00622D4D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00622D54: pop ecx */
    edi = POP32_VAL(esp); /* 0x00622D55: pop edi */
    esi = POP32_VAL(esp); /* 0x00622D56: pop esi */
    ebx = POP32_VAL(esp); /* 0x00622D57: pop ebx */
    esp = ebp; /* 0x00622D58: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622D5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622D5B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00622D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622D60u);

L_00622D60:
    PUSH32(esp, ebp); /* 0x00622D60: push ebp */
    ebp = esp; /* 0x00622D61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00622D63: push -1 */
    PUSH32(esp, 0x007B779Fu); /* 0x00622D65: push 0x7b779f */
    eax = MEM32(FS_BASE + (0)); /* 0x00622D6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00622D70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00622D71: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00622D74: push ebx */
    PUSH32(esp, esi); /* 0x00622D75: push esi */
    PUSH32(esp, edi); /* 0x00622D76: push edi */
    eax = MEM32(0x855000); /* 0x00622D77: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00622D7C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00622D7E: push eax */
    eax = ebp + (-0xC); /* 0x00622D7F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00622D82: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x00622D88: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x00622D8A: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebx) = 0x007E2190u; /* 0x00622D8D: mov dword ptr [ebx], 0x7e2190 */
    MEM32(ebx + 0x8) = 0; /* 0x00622D93: mov dword ptr [ebx + 8], 0 */
    MEM32(ebx + 0xC) = 0; /* 0x00622D9A: mov dword ptr [ebx + 0xc], 0 */
    MEM32(ebx + 0x10) = 0; /* 0x00622DA1: mov dword ptr [ebx + 0x10], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x00622DA8: mov dword ptr [ebp - 4], 0 */
    MEM32(ebx + 0x14) = 0; /* 0x00622DAF: mov dword ptr [ebx + 0x14], 0 */
    MEM32(ebx + 0x18) = 0; /* 0x00622DB6: mov dword ptr [ebx + 0x18], 0 */
    MEM32(ebx + 0x1C) = 0; /* 0x00622DBD: mov dword ptr [ebx + 0x1c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00622DC4: mov byte ptr [ebp - 4], 1 */
    ecx = ebx + 0x30; /* 0x00622DC8: lea ecx, [ebx + 0x30] */
    MEM32(ebx + 0x20) = 0x3F800000u; /* 0x00622DCB: mov dword ptr [ebx + 0x20], 0x3f800000 */
    MEM32(ebx + 0x24) = 0x3F800000u; /* 0x00622DD2: mov dword ptr [ebx + 0x24], 0x3f800000 */
    MEM32(ebx + 0x28) = 0x3F800000u; /* 0x00622DD9: mov dword ptr [ebx + 0x28], 0x3f800000 */
    MEM8(ebx + 0x2C) = (uint8_t)(1); /* 0x00622DE0: mov byte ptr [ebx + 0x2c], 1 */
    RECOMP_CALL(sub_00622BB0); /* 0x00622DE4: call 0x622bb0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00622DE9: mov byte ptr [ebp - 4], 2 */
    esi = ebx + 0x78; /* 0x00622DED: lea esi, [ebx + 0x78] */
    edi = 3; /* 0x00622DF0: mov edi, 3 */
L_00622DF5:
    PUSH32(esp, 0x44u); /* 0x00622DF5: push 0x44 */
    eax = esi + 0x8; /* 0x00622DF7: lea eax, [esi + 8] */
    MEM32(esi) = 0xFFFFFFFFu; /* 0x00622DFA: mov dword ptr [esi], 0xffffffff */
    PUSH32(esp, 0); /* 0x00622E00: push 0 */
    PUSH32(esp, eax); /* 0x00622E02: push eax */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x00622E03: mov byte ptr [esi + 4], 0 */
    RECOMP_CALL(sub_0078083E); /* 0x00622E07: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00622E0C: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = esi + 0x54; /* 0x00622E0F: lea esi, [esi + 0x54] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00622E12: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_00622DF5; /* 0x00622E13: jns 0x622df5 */
L_00622E15:
    esi = ebx + 0x1CC; /* 0x00622E15: lea esi, [ebx + 0x1cc] */
    MEM8(ebx + 0x1C8) = (uint8_t)(0); /* 0x00622E1B: mov byte ptr [ebx + 0x1c8], 0 */
    MEM32(ebp + (-0x14)) = esi; /* 0x00622E22: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x00622E25: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x00622E2B: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_005ED4A0); /* 0x00622E32: call 0x5ed4a0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x00622E37: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00622E39: mov byte ptr [ebp - 4], 7 */
    ecx = ebx + 0x8; /* 0x00622E3D: lea ecx, [ebx + 8] */
    PUSH32(esp, 0x25u); /* 0x00622E40: push 0x25 */
    RECOMP_CALL(sub_00625460); /* 0x00622E42: call 0x625460 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x00622E47: mov ecx, ebx */
    RECOMP_CALL(sub_00623100); /* 0x00622E49: call 0x623100 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00622E4E: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x00622E55: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00622E57: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00622E5A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00622E61: pop ecx */
    edi = POP32_VAL(esp); /* 0x00622E62: pop edi */
    esi = POP32_VAL(esp); /* 0x00622E63: pop esi */
    ebx = POP32_VAL(esp); /* 0x00622E64: pop ebx */
    esp = ebp; /* 0x00622E65: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622E67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00622E68: ret  */
    RECOMP_REGS_OUT();
}

void sub_00622E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00622E70u);

L_00622E70:
    PUSH32(esp, ebp); /* 0x00622E70: push ebp */
    ebp = esp; /* 0x00622E71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x418u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x418u; /* 0x00622E73: sub esp, 0x418 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00622E79: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00622E7E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x00622E80: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x00622E83: push ebx */
    PUSH32(esp, esi); /* 0x00622E84: push esi */
    PUSH32(esp, edi); /* 0x00622E85: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00622E86: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x00622E89: mov esi, ecx */
    MEM32(ebp + (-0x418)) = esi; /* 0x00622E8B: mov dword ptr [ebp - 0x418], esi */
    /* test edi, edi */ /* 0x00622E91: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0062306E; /* 0x00622E93: js 0x62306e */
L_00622E99:
    ecx = edi; /* 0x00622E99: mov ecx, edi */
    RECOMP_CALL(sub_006F2170); /* 0x00622E9B: call 0x6f2170 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x00622EA0: mov ecx, edi */
    /* test eax, eax */ /* 0x00622EA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622EE2; /* 0x00622EA4: je 0x622ee2 */
L_00622EA6:
    RECOMP_CALL(sub_006F2680); /* 0x00622EA6: call 0x6f2680 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00622EAB: mov ecx, eax */
    MEM32(esi + 0x3C) = ecx; /* 0x00622EAD: mov dword ptr [esi + 0x3c], ecx */
    /* test ecx, ecx */ /* 0x00622EB0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622ECE; /* 0x00622EB2: jne 0x622ece */
L_00622EB4:
    MEM8(esi + 0x1C8) = (uint8_t)(2); /* 0x00622EB4: mov byte ptr [esi + 0x1c8], 2 */
    edi = POP32_VAL(esp); /* 0x00622EBB: pop edi */
    esi = POP32_VAL(esp); /* 0x00622EBC: pop esi */
    ebx = POP32_VAL(esp); /* 0x00622EBD: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x00622EBE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00622EC1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00622EC3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00622EC8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622ECA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622ECB: ret 4 */
L_00622ECE:
    eax = MEM32(ecx); /* 0x00622ECE: mov eax, dword ptr [ecx] */
    MEM32(esi + 0x34) = eax; /* 0x00622ED0: mov dword ptr [esi + 0x34], eax */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x00622ED3: push dword ptr [ecx + 0x1c] */
    ecx = esi + 0x5C; /* 0x00622ED6: lea ecx, [esi + 0x5c] */
    RECOMP_CALL(sub_004196F0); /* 0x00622ED9: call 0x4196f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x00622EDE: push 6 */
    goto L_00622F30; /* 0x00622EE0: jmp 0x622f30 */
L_00622EE2:
    RECOMP_CALL(sub_006EE890); /* 0x00622EE2: call 0x6ee890 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = eax; /* 0x00622EE7: mov dword ptr [esi + 0x34], eax */
    /* test eax, eax */ /* 0x00622EEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622F08; /* 0x00622EEC: jne 0x622f08 */
L_00622EEE:
    MEM8(esi + 0x1C8) = (uint8_t)(3); /* 0x00622EEE: mov byte ptr [esi + 0x1c8], 3 */
    edi = POP32_VAL(esp); /* 0x00622EF5: pop edi */
    esi = POP32_VAL(esp); /* 0x00622EF6: pop esi */
    ebx = POP32_VAL(esp); /* 0x00622EF7: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x00622EF8: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00622EFB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00622EFD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00622F02: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622F04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622F05: ret 4 */
L_00622F08:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x00622F08: push dword ptr [eax + 4] */
    ecx = esi + 0x5C; /* 0x00622F0B: lea ecx, [esi + 0x5c] */
    RECOMP_CALL(sub_004196F0); /* 0x00622F0E: call 0x4196f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x34); /* 0x00622F13: mov eax, dword ptr [esi + 0x34] */
    /* test eax, eax */ /* 0x00622F16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622F2C; /* 0x00622F18: jne 0x622f2c */
L_00622F1A:
    PUSH32(esp, 0x0080437Cu); /* 0x00622F1A: push 0x80437c */
    RECOMP_CALL(sub_006EDB70); /* 0x00622F1F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00622F24: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00622F27: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00622F2F; /* 0x00622F2A: jmp 0x622f2f */
L_00622F2C:
    eax = MEM32(eax + 0x8); /* 0x00622F2C: mov eax, dword ptr [eax + 8] */
L_00622F2F:
    PUSH32(esp, eax); /* 0x00622F2F: push eax */
L_00622F30:
    ecx = esi + 0x14; /* 0x00622F30: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_00625520); /* 0x00622F33: call 0x625520 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x34); /* 0x00622F38: mov eax, dword ptr [esi + 0x34] */
    /* test eax, eax */ /* 0x00622F3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622F51; /* 0x00622F3D: jne 0x622f51 */
L_00622F3F:
    PUSH32(esp, 0x0080437Cu); /* 0x00622F3F: push 0x80437c */
    RECOMP_CALL(sub_006EDB70); /* 0x00622F44: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00622F49: add esp, 4 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00622F4C: xorps xmm0, xmm0 */
    goto L_00622F58; /* 0x00622F4F: jmp 0x622f58 */
L_00622F51:
    eax = MEM32(eax + 0x2C); /* 0x00622F51: mov eax, dword ptr [eax + 0x2c] */
    _xmm[0] = xmm_ld(eax); /* 0x00622F54: movdqu xmm0, xmmword ptr [eax] */
L_00622F58:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00622F58: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x40C); /* 0x00622F5B: lea ecx, [ebp - 0x40c] */
    eax = esp; /* 0x00622F61: mov eax, esp */
    xmm_st(eax, _xmm[0]); /* 0x00622F63: movdqu xmmword ptr [eax], xmm0 */
    RECOMP_CALL(sub_006EF1B0); /* 0x00622F67: call 0x6ef1b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00622F6C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x40C)), 0 */ /* 0x00622F6F: cmp byte ptr [ebp - 0x40c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x40C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00622F7C; /* 0x00622F76: jne 0x622f7c */
L_00622F78:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00622F78: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00622F8E; /* 0x00622F7A: jmp 0x622f8e */
L_00622F7C:
    ecx = ebp + (-0x40C); /* 0x00622F7C: lea ecx, [ebp - 0x40c] */
    edx = ecx + 0x1; /* 0x00622F82: lea edx, [ecx + 1] */
L_00622F85:
    SET_LO8(eax, MEM8(ecx)); /* 0x00622F85: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00622F87: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00622F88: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622F85; /* 0x00622F8A: jne 0x622f85 */
L_00622F8C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00622F8C: sub ecx, edx */
    _flag_k = FK_CMP;
L_00622F8E:
    PUSH32(esp, ecx); /* 0x00622F8E: push ecx */
    eax = ebp + (-0x40C); /* 0x00622F8F: lea eax, [ebp - 0x40c] */
    PUSH32(esp, eax); /* 0x00622F95: push eax */
    ecx = esi + 0x44; /* 0x00622F96: lea ecx, [esi + 0x44] */
    RECOMP_CALL(sub_0040A2F0); /* 0x00622F99: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x34); /* 0x00622F9E: mov ecx, dword ptr [esi + 0x34] */
    MEM32(esi + 0x74) = edi; /* 0x00622FA1: mov dword ptr [esi + 0x74], edi */
    /* test ecx, ecx */ /* 0x00622FA4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00622FBA; /* 0x00622FA6: jne 0x622fba */
L_00622FA8:
    PUSH32(esp, 0x0080437Cu); /* 0x00622FA8: push 0x80437c */
    RECOMP_CALL(sub_006EDB70); /* 0x00622FAD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00622FB2: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x00622FB5: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00622FBC; /* 0x00622FB8: jmp 0x622fbc */
L_00622FBA:
    ecx = MEM32(ecx); /* 0x00622FBA: mov ecx, dword ptr [ecx] */
L_00622FBC:
    eax = esi + 0x30; /* 0x00622FBC: lea eax, [esi + 0x30] */
    MEM32(eax) = ecx; /* 0x00622FBF: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x34); /* 0x00622FC1: mov ecx, dword ptr [esi + 0x34] */
    MEM32(ebp + (-0x414)) = eax; /* 0x00622FC4: mov dword ptr [ebp - 0x414], eax */
    RECOMP_CALL(sub_006EF2E0); /* 0x00622FCA: call 0x6ef2e0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x38) = eax; /* 0x00622FCF: mov dword ptr [esi + 0x38], eax */
    /* test eax, eax */ /* 0x00622FD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622FF1; /* 0x00622FD4: je 0x622ff1 */
L_00622FD6:
    ecx = eax; /* 0x00622FD6: mov ecx, eax */
    RECOMP_CALL(sub_006EF7E0); /* 0x00622FD8: call 0x6ef7e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00622FDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00622FF1; /* 0x00622FDF: je 0x622ff1 */
L_00622FE1:
    ecx = MEM32(esi + 0x38); /* 0x00622FE1: mov ecx, dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_006EF820); /* 0x00622FE4: call 0x6ef820 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00622FE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x00622FEB: sete al */
    MEM8(esi + 0x40) = (uint8_t)(LO8(eax)); /* 0x00622FEE: mov byte ptr [esi + 0x40], al */
L_00622FF1:
    ebx = esi + 0x78; /* 0x00622FF1: lea ebx, [esi + 0x78] */
    MEM8(ebp + (-0x40D)) = (uint8_t)(0); /* 0x00622FF4: mov byte ptr [ebp - 0x40d], 0 */
    esi = MEM32(ebp + (-0x414)); /* 0x00622FFB: mov esi, dword ptr [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00623001: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_00623003:
    PUSH32(esp, edi); /* 0x00623003: push edi */
    PUSH32(esp, esi); /* 0x00623004: push esi */
    ecx = ebx; /* 0x00623005: mov ecx, ebx */
    RECOMP_CALL(sub_00622A30); /* 0x00623007: call 0x622a30 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(ebp + (-0x40D))); /* 0x0062300C: mov cl, byte ptr [ebp - 0x40d] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00623012: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(ecx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ecx) | LO8(eax))) << 24;
    SET_LO8(ecx, LO8(ecx) | LO8(eax)); /* 0x00623013: or cl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x00623015: add ebx, 0x54 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x40D)) = (uint8_t)(LO8(ecx)); /* 0x00623018: mov byte ptr [ebp - 0x40d], cl */
    /* cmp edi, 4 */ /* 0x0062301E: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00623003; /* 0x00623021: jb 0x623003 */
L_00623023:
    esi = MEM32(ebp + (-0x418)); /* 0x00623023: mov esi, dword ptr [ebp - 0x418] */
    /* cmp MEM32(esi + 0x3C), 0 */ /* 0x00623029: cmp dword ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623033; /* 0x0062302D: je 0x623033 */
L_0062302F:
    SET_LO8(eax, 2); /* 0x0062302F: mov al, 2 */
    goto L_0062303F; /* 0x00623031: jmp 0x62303f */
L_00623033:
    /* test LO8(ecx), LO8(ecx) */ /* 0x00623033: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x00623035: sete al */
    eax = eax * 2 + 0x1; /* 0x00623038: lea eax, [eax*2 + 1] */
L_0062303F:
    MEM8(esi + 0x1C8) = (uint8_t)(LO8(eax)); /* 0x0062303F: mov byte ptr [esi + 0x1c8], al */
    /* cmp LO8(eax), 2 */ /* 0x00623045: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00623063; /* 0x00623047: jne 0x623063 */
L_00623049:
    ecx = esi; /* 0x00623049: mov ecx, esi */
    RECOMP_CALL(sub_00623DD0); /* 0x0062304B: call 0x623dd0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00623050: pop edi */
    esi = POP32_VAL(esp); /* 0x00623051: pop esi */
    ebx = POP32_VAL(esp); /* 0x00623052: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x00623053: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00623056: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00623058: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062305D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062305F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00623060: ret 4 */
L_00623063:
    /* test LO8(eax), LO8(eax) */ /* 0x00623063: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062306E; /* 0x00623065: je 0x62306e */
L_00623067:
    ecx = esi; /* 0x00623067: mov ecx, esi */
    RECOMP_CALL(sub_006245D0); /* 0x00623069: call 0x6245d0 */
    RECOMP_FLAGS_IN();
L_0062306E:
    ecx = MEM32(ebp + (-0x8)); /* 0x0062306E: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x00623071: pop edi */
    esi = POP32_VAL(esp); /* 0x00623072: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00623073: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00623075: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x00623076: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062307B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062307D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062307E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00623090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00623090u);

L_00623090:
    PUSH32(esp, ebx); /* 0x00623090: push ebx */
    ebx = ecx; /* 0x00623091: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x00623093: push esi */
    PUSH32(esp, edi); /* 0x00623094: push edi */
    edi = 4; /* 0x00623095: mov edi, 4 */
    esi = ebx + 0x78; /* 0x0062309A: lea esi, [ebx + 0x78] */
    ecx = ecx; /* 0x0062309D: lea ecx, [ecx] */
L_006230A0:
    edx = MEM32(esi); /* 0x006230A0: mov edx, dword ptr [esi] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x006230A2: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006230B2; /* 0x006230A5: je 0x6230b2 */
L_006230A7:
    ecx = MEM32(esi + 0x50); /* 0x006230A7: mov ecx, dword ptr [esi + 0x50] */
    ecx = MEM32(ecx + 0x8); /* 0x006230AA: mov ecx, dword ptr [ecx + 8] */
    RECOMP_CALL(sub_006EF780); /* 0x006230AD: call 0x6ef780 */
    RECOMP_FLAGS_IN();
L_006230B2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x54u; /* 0x006230B2: add esi, 0x54 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006230B5: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006230A0; /* 0x006230B6: jne 0x6230a0 */
L_006230B8:
    ecx = MEM32(ebx + 0x38); /* 0x006230B8: mov ecx, dword ptr [ebx + 0x38] */
    /* test ecx, ecx */ /* 0x006230BB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006230D2; /* 0x006230BD: je 0x6230d2 */
L_006230BF:
    /* cmp MEM8(ebx + 0x40), 0 */ /* 0x006230BF: cmp byte ptr [ebx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x40)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006230CA; /* 0x006230C3: je 0x6230ca */
L_006230C5:
    RECOMP_CALL(sub_006EF9A0); /* 0x006230C5: call 0x6ef9a0 */
    RECOMP_FLAGS_IN();
L_006230CA:
    ecx = MEM32(ebx + 0x38); /* 0x006230CA: mov ecx, dword ptr [ebx + 0x38] */
    RECOMP_CALL(sub_006EF420); /* 0x006230CD: call 0x6ef420 */
    RECOMP_FLAGS_IN();
L_006230D2:
    ecx = MEM32(ebx + 0x30); /* 0x006230D2: mov ecx, dword ptr [ebx + 0x30] */
    RECOMP_CALL(sub_006F2170); /* 0x006230D5: call 0x6f2170 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006230DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006230E9; /* 0x006230DC: je 0x6230e9 */
L_006230DE:
    ecx = MEM32(ebx + 0x3C); /* 0x006230DE: mov ecx, dword ptr [ebx + 0x3c] */
    edi = POP32_VAL(esp); /* 0x006230E1: pop edi */
    esi = POP32_VAL(esp); /* 0x006230E2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006230E3: pop ebx */
    goto L_006F27F0; /* 0x006230E4: jmp 0x6f27f0 */
L_006230E9:
    ecx = MEM32(ebx + 0x34); /* 0x006230E9: mov ecx, dword ptr [ebx + 0x34] */
    edi = POP32_VAL(esp); /* 0x006230EC: pop edi */
    esi = POP32_VAL(esp); /* 0x006230ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x006230EE: pop ebx */
    goto L_006EEAB0; /* 0x006230EF: jmp 0x6eeab0 */
L_006EEAB0:
    PUSH32(esp, edi); /* 0x006EEAB0: push edi */
    edi = ecx; /* 0x006EEAB1: mov edi, ecx */
    /* test edi, edi */ /* 0x006EEAB3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEB2A; /* 0x006EEAB5: je 0x6eeb2a */
L_006EEAB7:
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - 1; /* 0x006EEAB7: dec dword ptr [edi + 0x30] */
    _flag_k = FK_DEC;
    /* cmp MEM32(edi + 0x30), 0 */ /* 0x006EEABA: cmp dword ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006EEB2A; /* 0x006EEABE: jg 0x6eeb2a */
L_006EEAC0:
    /* cmp edi, MEM32(0x87CBF0) */ /* 0x006EEAC0: cmp edi, dword ptr [0x87cbf0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x87CBF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEB2A; /* 0x006EEAC6: je 0x6eeb2a */
L_006EEAC8:
    RECOMP_CALL(sub_006FF8D0); /* 0x006EEAC8: call 0x6ff8d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBE8); /* 0x006EEACD: mov eax, dword ptr [0x87cbe8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EEAD2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x2C) = 0; /* 0x006EEAD4: mov dword ptr [edi + 0x2c], 0 */
    /* test eax, eax */ /* 0x006EEADB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEB03; /* 0x006EEADD: je 0x6eeb03 */
L_006EEADF:
    /* nop */ /* 0x006EEADF: nop  */
L_006EEAE0:
    /* cmp edi, eax */ /* 0x006EEAE0: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEAEF; /* 0x006EEAE2: je 0x6eeaef */
L_006EEAE4:
    ecx = eax; /* 0x006EEAE4: mov ecx, eax */
    eax = MEM32(eax + 0x3C); /* 0x006EEAE6: mov eax, dword ptr [eax + 0x3c] */
    /* test eax, eax */ /* 0x006EEAE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEAE0; /* 0x006EEAEB: jne 0x6eeae0 */
L_006EEAED:
    goto L_006EEB03; /* 0x006EEAED: jmp 0x6eeb03 */
L_006EEAEF:
    /* test ecx, ecx */ /* 0x006EEAEF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEAFB; /* 0x006EEAF1: je 0x6eeafb */
L_006EEAF3:
    eax = MEM32(eax + 0x3C); /* 0x006EEAF3: mov eax, dword ptr [eax + 0x3c] */
    MEM32(ecx + 0x3C) = eax; /* 0x006EEAF6: mov dword ptr [ecx + 0x3c], eax */
    goto L_006EEB03; /* 0x006EEAF9: jmp 0x6eeb03 */
L_006EEAFB:
    eax = MEM32(edi + 0x3C); /* 0x006EEAFB: mov eax, dword ptr [edi + 0x3c] */
    MEM32(0x87CBE8) = eax; /* 0x006EEAFE: mov dword ptr [0x87cbe8], eax */
L_006EEB03:
    PUSH32(esp, esi); /* 0x006EEB03: push esi */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006EEB04: push dword ptr [edi + 4] */
    esi = MEM32(0x7CC44C); /* 0x006EEB07: mov esi, dword ptr [0x7cc44c] */
    RECOMP_ICALL(esi); /* 0x006EEB0D: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006EEB0F: push dword ptr [edi + 0xc] */
    RECOMP_ICALL(esi); /* 0x006EEB12: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x006EEB14: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(esi); /* 0x006EEB17: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x006EEB19: push dword ptr [edi + 0x20] */
    RECOMP_ICALL(esi); /* 0x006EEB1C: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x28)); /* 0x006EEB1E: push dword ptr [edi + 0x28] */
    RECOMP_ICALL(esi); /* 0x006EEB21: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006EEB23: push edi */
    RECOMP_ICALL(esi); /* 0x006EEB24: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006EEB26: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EEB29: pop esi */
L_006EEB2A:
    edi = POP32_VAL(esp); /* 0x006EEB2A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEB2B: ret  */
L_006F27F0:
    PUSH32(esp, esi); /* 0x006F27F0: push esi */
    esi = ecx; /* 0x006F27F1: mov esi, ecx */
    /* test esi, esi */ /* 0x006F27F3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F285F; /* 0x006F27F5: je 0x6f285f */
L_006F27F7:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x006F27F7: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x006F27FA: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F285F; /* 0x006F27FE: jg 0x6f285f */
L_006F2800:
    ecx = MEM32(esi); /* 0x006F2800: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006EEAB0); /* 0x006F2802: call 0x6eeab0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CC00); /* 0x006F2807: mov eax, dword ptr [0x87cc00] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F280C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F280E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2855; /* 0x006F2810: je 0x6f2855 */
L_006F2812:
    /* cmp esi, eax */ /* 0x006F2812: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F282E; /* 0x006F2814: je 0x6f282e */
L_006F2816:
    ecx = eax; /* 0x006F2816: mov ecx, eax */
    eax = MEM32(eax + 0x540); /* 0x006F2818: mov eax, dword ptr [eax + 0x540] */
    /* test eax, eax */ /* 0x006F281E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2812; /* 0x006F2820: jne 0x6f2812 */
L_006F2822:
    PUSH32(esp, esi); /* 0x006F2822: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F2823: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2829: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F282C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F282D: ret  */
L_006F282E:
    /* test ecx, ecx */ /* 0x006F282E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F284A; /* 0x006F2830: je 0x6f284a */
L_006F2832:
    eax = MEM32(eax + 0x540); /* 0x006F2832: mov eax, dword ptr [eax + 0x540] */
    PUSH32(esp, esi); /* 0x006F2838: push esi */
    MEM32(ecx + 0x540) = eax; /* 0x006F2839: mov dword ptr [ecx + 0x540], eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F283F: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2845: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F2848: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2849: ret  */
L_006F284A:
    eax = MEM32(esi + 0x540); /* 0x006F284A: mov eax, dword ptr [esi + 0x540] */
    MEM32(0x87CC00) = eax; /* 0x006F2850: mov dword ptr [0x87cc00], eax */
L_006F2855:
    PUSH32(esp, esi); /* 0x006F2855: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F2856: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F285C: add esp, 4 */
    _flag_k = FK_ADD;
L_006F285F:
    esi = POP32_VAL(esp); /* 0x006F285F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2860: ret  */
    RECOMP_REGS_OUT();
}

void sub_00623100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00623100u);

L_00623100:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x00623100: movss xmm0, dword ptr [0x808cb0] */
    PUSH32(esp, esi); /* 0x00623108: push esi */
    esi = ecx; /* 0x00623109: mov esi, ecx */
    SET_LO8(eax, MEM8(esi + 0x1C8)); /* 0x0062310B: mov al, byte ptr [esi + 0x1c8] */
    MEM32(esi + 0x20) = 0x3F800000u; /* 0x00623111: mov dword ptr [esi + 0x20], 0x3f800000 */
    /* test LO8(eax), LO8(eax) */ /* 0x00623118: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00623124; /* 0x0062311A: jne 0x623124 */
L_0062311C:
    _xmm[0].u64[0] = MEM32(0x808BD4); _xmm[0].u64[1] = 0; /* 0x0062311C: movss xmm0, dword ptr [0x808bd4] */
L_00623124:
    MEM32(esi + 0x28) = _xmm[0].u32[0]; /* 0x00623124: movss dword ptr [esi + 0x28], xmm0 */
    MEM32(esi + 0x24) = 0x3F800000u; /* 0x00623129: mov dword ptr [esi + 0x24], 0x3f800000 */
    MEM8(esi + 0x2C) = (uint8_t)(1); /* 0x00623130: mov byte ptr [esi + 0x2c], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x00623134: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00623151; /* 0x00623136: je 0x623151 */
L_00623138:
    /* cmp LO8(eax), 1 */ /* 0x00623138: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623151; /* 0x0062313A: je 0x623151 */
L_0062313C:
    eax = 1; /* 0x0062313C: mov eax, 1 */
    MEM32(esi + 0x4) = eax; /* 0x00623141: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_00623170); /* 0x00623144: call 0x623170 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x00623149: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x0062314B: pop esi */
    goto L_00623CA0; /* 0x0062314C: jmp 0x623ca0 */
L_00623151:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00623151: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x00623153: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_00623170); /* 0x00623156: call 0x623170 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x0062315B: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x0062315D: pop esi */
    goto L_00623CA0; /* 0x0062315E: jmp 0x623ca0 */
L_00623CA0:
    PUSH32(esp, ebp); /* 0x00623CA0: push ebp */
    ebp = esp; /* 0x00623CA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00623CA3: push ecx */
    PUSH32(esp, esi); /* 0x00623CA4: push esi */
    esi = ecx; /* 0x00623CA5: mov esi, ecx */
    /* cmp MEM8(esi + 0x1C8), 0 */ /* 0x00623CA7: cmp byte ptr [esi + 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1C8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623CFE; /* 0x00623CAE: je 0x623cfe */
L_00623CB0:
    edx = MEM32(esi + 0x18); /* 0x00623CB0: mov edx, dword ptr [esi + 0x18] */
    eax = 0x66666667u; /* 0x00623CB3: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x14); /* 0x00623CB8: sub edx, dword ptr [esi + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00623CBB: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, ebx); /* 0x00623CBD: push ebx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00623CBE: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x00623CC1: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edx; /* 0x00623CC3: mov eax, edx */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x00623CC5: mov byte ptr [ebp - 4], bl */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00623CC8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00623CC8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00623CCB: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00623CFD; /* 0x00623CCD: je 0x623cfd */
L_00623CCF:
    /* nop */ /* 0x00623CCF: nop  */
L_00623CD0:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x00623CD0: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x00623CD3: mov ecx, esi */
    RECOMP_CALL(sub_00623D10); /* 0x00623CD5: call 0x623d10 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x18); /* 0x00623CDA: mov ecx, dword ptr [esi + 0x18] */
    eax = 0x66666667u; /* 0x00623CDD: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x14); /* 0x00623CE2: sub ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x00623CE5: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00623CE7: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = (uint32_t)LO8(ebx); /* 0x00623CE9: movzx eax, bl */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00623CEC: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ecx = edx; /* 0x00623CEF: mov ecx, edx */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x00623CF1: mov byte ptr [ebp - 4], bl */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x00623CF4: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x00623CF4: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00623CF7: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x00623CF9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00623CD0; /* 0x00623CFB: jb 0x623cd0 */
L_00623CFD:
    ebx = POP32_VAL(esp); /* 0x00623CFD: pop ebx */
L_00623CFE:
    esi = POP32_VAL(esp); /* 0x00623CFE: pop esi */
    esp = ebp; /* 0x00623CFF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00623D01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00623D02: ret  */
    RECOMP_REGS_OUT();
}

void sub_00623170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00623170u);

L_00623170:
    PUSH32(esp, ebp); /* 0x00623170: push ebp */
    ebp = esp; /* 0x00623171: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00623173: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x00623176: mov edx, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00623178: sub esp, 8 */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(edx + 0x1C8)); /* 0x0062317B: mov al, byte ptr [edx + 0x1c8] */
    /* test LO8(eax), LO8(eax) */ /* 0x00623181: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00623533; /* 0x00623183: jne 0x623533 */
L_00623189:
    ecx = MEM32(edx + 0x8); /* 0x00623189: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x0062318C: mov word ptr [esp + 4], 0 */
    eax = MEM32(esp + 0x4); /* 0x00623193: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623197: mov word ptr [esp + 4], 0 */
    MEM32(ecx) = 0x40000052u; /* 0x0062319E: mov dword ptr [ecx], 0x40000052 */
    MEM32(ecx + 0x4) = eax; /* 0x006231A4: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(edx + 0x8); /* 0x006231A7: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006231AA: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006231AE: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x8) = 0x40000050u; /* 0x006231B5: mov dword ptr [ecx + 8], 0x40000050 */
    MEM32(ecx + 0xC) = eax; /* 0x006231BC: mov dword ptr [ecx + 0xc], eax */
    ecx = MEM32(edx + 0x8); /* 0x006231BF: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006231C2: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006231C6: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x10) = 0x4000004Fu; /* 0x006231CD: mov dword ptr [ecx + 0x10], 0x4000004f */
    MEM32(ecx + 0x14) = eax; /* 0x006231D4: mov dword ptr [ecx + 0x14], eax */
    ecx = MEM32(edx + 0x8); /* 0x006231D7: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006231DA: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006231DE: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x18) = 0x40000051u; /* 0x006231E5: mov dword ptr [ecx + 0x18], 0x40000051 */
    MEM32(ecx + 0x1C) = eax; /* 0x006231EC: mov dword ptr [ecx + 0x1c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006231EF: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006231F2: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006231F6: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x20) = 0x20u; /* 0x006231FD: mov dword ptr [ecx + 0x20], 0x20 */
    MEM32(ecx + 0x24) = eax; /* 0x00623204: mov dword ptr [ecx + 0x24], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623207: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x92623C); /* 0x0062320A: mov eax, dword ptr [0x92623c] */
    MEM32(ecx + 0x28) = eax; /* 0x0062320F: mov dword ptr [ecx + 0x28], eax */
    eax = MEM32(esp + 0x4); /* 0x00623212: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x2C) = eax; /* 0x00623216: mov dword ptr [ecx + 0x2c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623219: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x92622C); /* 0x0062321C: mov eax, dword ptr [0x92622c] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623221: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x30) = eax; /* 0x00623228: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esp + 0x4); /* 0x0062322B: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x34) = eax; /* 0x0062322F: mov dword ptr [ecx + 0x34], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623232: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x9261EC); /* 0x00623235: mov eax, dword ptr [0x9261ec] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x0062323A: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x38) = eax; /* 0x00623241: mov dword ptr [ecx + 0x38], eax */
    eax = MEM32(esp + 0x4); /* 0x00623244: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x3C) = eax; /* 0x00623248: mov dword ptr [ecx + 0x3c], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062324B: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x92621C); /* 0x0062324E: mov eax, dword ptr [0x92621c] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623253: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x40) = eax; /* 0x0062325A: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(esp + 0x4); /* 0x0062325D: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x44) = eax; /* 0x00623261: mov dword ptr [ecx + 0x44], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623264: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x9261F0); /* 0x00623267: mov eax, dword ptr [0x9261f0] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x0062326C: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x50) = eax; /* 0x00623273: mov dword ptr [ecx + 0x50], eax */
    eax = MEM32(esp + 0x4); /* 0x00623276: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x54) = eax; /* 0x0062327A: mov dword ptr [ecx + 0x54], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062327D: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623280: mov word ptr [esp + 4], 0 */
    eax = MEM32(esp + 0x4); /* 0x00623287: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x0062328B: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x58) = 9; /* 0x00623292: mov dword ptr [ecx + 0x58], 9 */
    MEM32(ecx + 0x5C) = eax; /* 0x00623299: mov dword ptr [ecx + 0x5c], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062329C: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x926244); /* 0x0062329F: mov eax, dword ptr [0x926244] */
    MEM32(ecx + 0x60) = eax; /* 0x006232A4: mov dword ptr [ecx + 0x60], eax */
    eax = MEM32(esp + 0x4); /* 0x006232A7: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x64) = eax; /* 0x006232AB: mov dword ptr [ecx + 0x64], eax */
    ecx = MEM32(edx + 0x8); /* 0x006232AE: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x926204); /* 0x006232B1: mov eax, dword ptr [0x926204] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006232B6: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x80) = eax; /* 0x006232BD: mov dword ptr [ecx + 0x80], eax */
    eax = MEM32(esp + 0x4); /* 0x006232C3: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x84) = eax; /* 0x006232C7: mov dword ptr [ecx + 0x84], eax */
    ecx = MEM32(edx + 0x8); /* 0x006232CD: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006232D0: mov word ptr [esp + 4], 0 */
    eax = MEM32(esp + 0x4); /* 0x006232D7: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006232DB: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x88) = 0x7Fu; /* 0x006232E2: mov dword ptr [ecx + 0x88], 0x7f */
    MEM32(ecx + 0x8C) = eax; /* 0x006232EC: mov dword ptr [ecx + 0x8c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006232F2: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006232F5: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x90) = 0x4000004Eu; /* 0x006232F9: mov dword ptr [ecx + 0x90], 0x4000004e */
    MEM32(ecx + 0x94) = eax; /* 0x00623303: mov dword ptr [ecx + 0x94], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623309: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x0062330C: mov word ptr [esp + 4], 0 */
    eax = MEM32(esp + 0x4); /* 0x00623313: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623317: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x98) = 0x67u; /* 0x0062331E: mov dword ptr [ecx + 0x98], 0x67 */
    MEM32(ecx + 0x9C) = eax; /* 0x00623328: mov dword ptr [ecx + 0x9c], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062332E: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623331: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623335: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xA0) = 0x4000004Du; /* 0x0062333C: mov dword ptr [ecx + 0xa0], 0x4000004d */
    MEM32(ecx + 0xA4) = eax; /* 0x00623346: mov dword ptr [ecx + 0xa4], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062334C: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x0062334F: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x78) = eax; /* 0x00623354: mov dword ptr [ecx + 0x78], eax */
    eax = MEM32(0x7DEA70); /* 0x00623357: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x7C) = eax; /* 0x0062335C: mov dword ptr [ecx + 0x7c], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062335F: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623362: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623366: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xA8) = 0x4000005Cu; /* 0x0062336D: mov dword ptr [ecx + 0xa8], 0x4000005c */
    MEM32(ecx + 0xAC) = eax; /* 0x00623377: mov dword ptr [ecx + 0xac], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062337D: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623380: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623384: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xB0) = 0x4000005Eu; /* 0x0062338B: mov dword ptr [ecx + 0xb0], 0x4000005e */
    MEM32(ecx + 0xB4) = eax; /* 0x00623395: mov dword ptr [ecx + 0xb4], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062339B: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x0062339E: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006233A2: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xB8) = 0x4000005Au; /* 0x006233A9: mov dword ptr [ecx + 0xb8], 0x4000005a */
    MEM32(ecx + 0xBC) = eax; /* 0x006233B3: mov dword ptr [ecx + 0xbc], eax */
    ecx = MEM32(edx + 0x8); /* 0x006233B9: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006233BC: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006233C0: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xC0) = 0x40000060u; /* 0x006233C7: mov dword ptr [ecx + 0xc0], 0x40000060 */
    MEM32(ecx + 0xC4) = eax; /* 0x006233D1: mov dword ptr [ecx + 0xc4], eax */
    ecx = MEM32(edx + 0x8); /* 0x006233D7: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x9261E8); /* 0x006233DA: mov eax, dword ptr [0x9261e8] */
    MEM32(ecx + 0xC8) = eax; /* 0x006233DF: mov dword ptr [ecx + 0xc8], eax */
    eax = MEM32(esp + 0x4); /* 0x006233E5: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0xCC) = eax; /* 0x006233E9: mov dword ptr [ecx + 0xcc], eax */
    ecx = MEM32(edx + 0x8); /* 0x006233EF: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x9261F4); /* 0x006233F2: mov eax, dword ptr [0x9261f4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006233F7: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xD0) = eax; /* 0x006233FE: mov dword ptr [ecx + 0xd0], eax */
    eax = MEM32(esp + 0x4); /* 0x00623404: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0xD4) = eax; /* 0x00623408: mov dword ptr [ecx + 0xd4], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062340E: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x926240); /* 0x00623411: mov eax, dword ptr [0x926240] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623416: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xD8) = eax; /* 0x0062341D: mov dword ptr [ecx + 0xd8], eax */
    eax = MEM32(esp + 0x4); /* 0x00623423: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0xDC) = eax; /* 0x00623427: mov dword ptr [ecx + 0xdc], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062342D: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x926230); /* 0x00623430: mov eax, dword ptr [0x926230] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623435: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xE0) = eax; /* 0x0062343C: mov dword ptr [ecx + 0xe0], eax */
    eax = MEM32(esp + 0x4); /* 0x00623442: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0xE4) = eax; /* 0x00623446: mov dword ptr [ecx + 0xe4], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062344C: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x0062344F: mov word ptr [esp + 4], 0 */
    eax = MEM32(esp + 0x4); /* 0x00623456: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x0062345A: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xE8) = 0x400000E1u; /* 0x00623461: mov dword ptr [ecx + 0xe8], 0x400000e1 */
    MEM32(ecx + 0xEC) = eax; /* 0x0062346B: mov dword ptr [ecx + 0xec], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623471: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623474: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623478: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0xF0) = 0x400000E0u; /* 0x0062347F: mov dword ptr [ecx + 0xf0], 0x400000e0 */
    MEM32(ecx + 0xF4) = eax; /* 0x00623489: mov dword ptr [ecx + 0xf4], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062348F: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x926228); /* 0x00623492: mov eax, dword ptr [0x926228] */
    MEM32(ecx + 0xF8) = eax; /* 0x00623497: mov dword ptr [ecx + 0xf8], eax */
    eax = MEM32(esp + 0x4); /* 0x0062349D: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0xFC) = eax; /* 0x006234A1: mov dword ptr [ecx + 0xfc], eax */
    ecx = MEM32(edx + 0x8); /* 0x006234A7: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x9261F8); /* 0x006234AA: mov eax, dword ptr [0x9261f8] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006234AF: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x100) = eax; /* 0x006234B6: mov dword ptr [ecx + 0x100], eax */
    eax = MEM32(esp + 0x4); /* 0x006234BC: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x104) = eax; /* 0x006234C0: mov dword ptr [ecx + 0x104], eax */
    ecx = MEM32(edx + 0x8); /* 0x006234C6: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006234C9: mov word ptr [esp + 4], 0 */
    eax = MEM32(esp + 0x4); /* 0x006234D0: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006234D4: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x108) = 0x40000057u; /* 0x006234DB: mov dword ptr [ecx + 0x108], 0x40000057 */
    MEM32(ecx + 0x10C) = eax; /* 0x006234E5: mov dword ptr [ecx + 0x10c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006234EB: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006234EE: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x110) = 0x40000056u; /* 0x006234F2: mov dword ptr [ecx + 0x110], 0x40000056 */
    MEM32(ecx + 0x114) = eax; /* 0x006234FC: mov dword ptr [ecx + 0x114], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623502: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623505: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x118) = eax; /* 0x0062350A: mov dword ptr [ecx + 0x118], eax */
    eax = MEM32(0x7DEA70); /* 0x00623510: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x11C) = eax; /* 0x00623515: mov dword ptr [ecx + 0x11c], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062351B: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x0062351E: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x120) = eax; /* 0x00623523: mov dword ptr [ecx + 0x120], eax */
    eax = MEM32(0x7DEA70); /* 0x00623529: mov eax, dword ptr [0x7dea70] */
    goto L_00623C5C; /* 0x0062352E: jmp 0x623c5c */
L_00623533:
    /* cmp LO8(eax), 2 */ /* 0x00623533: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006238CE; /* 0x00623535: je 0x6238ce */
L_0062353B:
    /* cmp LO8(eax), 3 */ /* 0x0062353B: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006238CE; /* 0x0062353D: je 0x6238ce */
L_00623543:
    ecx = MEM32(edx + 0x8); /* 0x00623543: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(2); /* 0x00623546: mov word ptr [esp + 4], 2 */
    eax = MEM32(esp + 0x4); /* 0x0062354D: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x102u); /* 0x00623551: mov word ptr [esp + 4], 0x102 */
    MEM32(ecx) = 5; /* 0x00623558: mov dword ptr [ecx], 5 */
    MEM32(ecx + 0x4) = eax; /* 0x0062355E: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623561: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623564: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x00623568: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0x8) = 0; /* 0x0062356F: mov dword ptr [ecx + 8], 0 */
    MEM32(ecx + 0xC) = eax; /* 0x00623576: mov dword ptr [ecx + 0xc], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623579: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x0062357C: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(2); /* 0x00623580: mov word ptr [esp + 4], 2 */
    MEM32(ecx + 0x10) = 0; /* 0x00623587: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x14) = eax; /* 0x0062358E: mov dword ptr [ecx + 0x14], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623591: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623594: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x00623598: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x18) = 4; /* 0x0062359F: mov dword ptr [ecx + 0x18], 4 */
    MEM32(ecx + 0x1C) = eax; /* 0x006235A6: mov dword ptr [ecx + 0x1c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006235A9: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006235AC: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x006235B0: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x20) = 1; /* 0x006235B7: mov dword ptr [ecx + 0x20], 1 */
    MEM32(ecx + 0x24) = eax; /* 0x006235BE: mov dword ptr [ecx + 0x24], eax */
    ecx = MEM32(edx + 0x8); /* 0x006235C1: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006235C4: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x006235C8: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x28) = 0; /* 0x006235CF: mov dword ptr [ecx + 0x28], 0 */
    MEM32(ecx + 0x2C) = eax; /* 0x006235D6: mov dword ptr [ecx + 0x2c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006235D9: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006235DC: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x006235E0: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x30) = 3; /* 0x006235E7: mov dword ptr [ecx + 0x30], 3 */
    MEM32(ecx + 0x34) = eax; /* 0x006235EE: mov dword ptr [ecx + 0x34], eax */
    ecx = MEM32(edx + 0x8); /* 0x006235F1: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006235F4: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x006235F8: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x38) = 0xAu; /* 0x006235FF: mov dword ptr [ecx + 0x38], 0xa */
    MEM32(ecx + 0x3C) = eax; /* 0x00623606: mov dword ptr [ecx + 0x3c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623609: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x0062360C: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x00623610: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x40) = 9; /* 0x00623617: mov dword ptr [ecx + 0x40], 9 */
    MEM32(ecx + 0x44) = eax; /* 0x0062361E: mov dword ptr [ecx + 0x44], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623621: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623624: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(3); /* 0x00623628: mov word ptr [esp + 4], 3 */
    MEM32(ecx + 0x50) = 2; /* 0x0062362F: mov dword ptr [ecx + 0x50], 2 */
    MEM32(ecx + 0x54) = eax; /* 0x00623636: mov dword ptr [ecx + 0x54], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623639: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x0062363C: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x00623640: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x58) = 4; /* 0x00623647: mov dword ptr [ecx + 0x58], 4 */
    MEM32(ecx + 0x5C) = eax; /* 0x0062364E: mov dword ptr [ecx + 0x5c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623651: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623654: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x60) = eax; /* 0x00623659: mov dword ptr [ecx + 0x60], eax */
    eax = MEM32(0x7DEA70); /* 0x0062365C: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x64) = eax; /* 0x00623661: mov dword ptr [ecx + 0x64], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623664: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623667: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(3); /* 0x0062366B: mov word ptr [esp + 4], 3 */
    MEM32(ecx + 0x80) = 8; /* 0x00623672: mov dword ptr [ecx + 0x80], 8 */
    MEM32(ecx + 0x84) = eax; /* 0x0062367C: mov dword ptr [ecx + 0x84], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623682: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623685: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(3); /* 0x00623689: mov word ptr [esp + 4], 3 */
    MEM32(ecx + 0x88) = 8; /* 0x00623690: mov dword ptr [ecx + 0x88], 8 */
    MEM32(ecx + 0x8C) = eax; /* 0x0062369A: mov dword ptr [ecx + 0x8c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006236A0: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006236A3: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(3); /* 0x006236A7: mov word ptr [esp + 4], 3 */
    MEM32(ecx + 0x90) = 2; /* 0x006236AE: mov dword ptr [ecx + 0x90], 2 */
    MEM32(ecx + 0x94) = eax; /* 0x006236B8: mov dword ptr [ecx + 0x94], eax */
    ecx = MEM32(edx + 0x8); /* 0x006236BE: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x006236C1: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x98) = eax; /* 0x006236C6: mov dword ptr [ecx + 0x98], eax */
    eax = MEM32(0x7DEA70); /* 0x006236CC: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x9C) = eax; /* 0x006236D1: mov dword ptr [ecx + 0x9c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006236D7: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006236DA: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0xA0) = 1; /* 0x006236DE: mov dword ptr [ecx + 0xa0], 1 */
    MEM32(ecx + 0xA4) = eax; /* 0x006236E8: mov dword ptr [ecx + 0xa4], eax */
    ecx = MEM32(edx + 0x8); /* 0x006236EE: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x006236F1: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x78) = eax; /* 0x006236F6: mov dword ptr [ecx + 0x78], eax */
    eax = MEM32(0x7DEA70); /* 0x006236F9: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x7C) = eax; /* 0x006236FE: mov dword ptr [ecx + 0x7c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623701: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623704: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xA8) = eax; /* 0x00623709: mov dword ptr [ecx + 0xa8], eax */
    eax = MEM32(0x7DEA70); /* 0x0062370F: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xAC) = eax; /* 0x00623714: mov dword ptr [ecx + 0xac], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062371A: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x0062371D: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xB0) = eax; /* 0x00623722: mov dword ptr [ecx + 0xb0], eax */
    eax = MEM32(0x7DEA70); /* 0x00623728: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xB4) = eax; /* 0x0062372D: mov dword ptr [ecx + 0xb4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623733: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623736: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xB8) = eax; /* 0x0062373B: mov dword ptr [ecx + 0xb8], eax */
    eax = MEM32(0x7DEA70); /* 0x00623741: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xBC) = eax; /* 0x00623746: mov dword ptr [ecx + 0xbc], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062374C: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x0062374F: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xC0) = eax; /* 0x00623754: mov dword ptr [ecx + 0xc0], eax */
    eax = MEM32(0x7DEA70); /* 0x0062375A: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xC4) = eax; /* 0x0062375F: mov dword ptr [ecx + 0xc4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623765: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623768: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xC8) = eax; /* 0x0062376D: mov dword ptr [ecx + 0xc8], eax */
    eax = MEM32(0x7DEA70); /* 0x00623773: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xCC) = eax; /* 0x00623778: mov dword ptr [ecx + 0xcc], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062377E: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623781: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xD0) = eax; /* 0x00623786: mov dword ptr [ecx + 0xd0], eax */
    eax = MEM32(0x7DEA70); /* 0x0062378C: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xD4) = eax; /* 0x00623791: mov dword ptr [ecx + 0xd4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623797: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x0062379A: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xD8) = eax; /* 0x0062379F: mov dword ptr [ecx + 0xd8], eax */
    eax = MEM32(0x7DEA70); /* 0x006237A5: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xDC) = eax; /* 0x006237AA: mov dword ptr [ecx + 0xdc], eax */
    ecx = MEM32(edx + 0x8); /* 0x006237B0: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x006237B3: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xE0) = eax; /* 0x006237B8: mov dword ptr [ecx + 0xe0], eax */
    eax = MEM32(0x7DEA70); /* 0x006237BE: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xE4) = eax; /* 0x006237C3: mov dword ptr [ecx + 0xe4], eax */
    ecx = MEM32(edx + 0x8); /* 0x006237C9: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x006237CC: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xE8) = eax; /* 0x006237D1: mov dword ptr [ecx + 0xe8], eax */
    eax = MEM32(0x7DEA70); /* 0x006237D7: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xEC) = eax; /* 0x006237DC: mov dword ptr [ecx + 0xec], eax */
    ecx = MEM32(edx + 0x8); /* 0x006237E2: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x006237E5: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xF0) = eax; /* 0x006237EA: mov dword ptr [ecx + 0xf0], eax */
    eax = MEM32(0x7DEA70); /* 0x006237F0: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xF4) = eax; /* 0x006237F5: mov dword ptr [ecx + 0xf4], eax */
    ecx = MEM32(edx + 0x8); /* 0x006237FB: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x006237FE: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xF8) = eax; /* 0x00623803: mov dword ptr [ecx + 0xf8], eax */
    eax = MEM32(0x7DEA70); /* 0x00623809: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xFC) = eax; /* 0x0062380E: mov dword ptr [ecx + 0xfc], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623814: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623817: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x100) = eax; /* 0x0062381C: mov dword ptr [ecx + 0x100], eax */
    eax = MEM32(0x7DEA70); /* 0x00623822: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x104) = eax; /* 0x00623827: mov dword ptr [ecx + 0x104], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062382D: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623830: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x108) = eax; /* 0x00623835: mov dword ptr [ecx + 0x108], eax */
    eax = MEM32(0x7DEA70); /* 0x0062383B: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x10C) = eax; /* 0x00623840: mov dword ptr [ecx + 0x10c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623846: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623849: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x110) = eax; /* 0x0062384E: mov dword ptr [ecx + 0x110], eax */
    eax = MEM32(0x7DEA70); /* 0x00623854: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x114) = eax; /* 0x00623859: mov dword ptr [ecx + 0x114], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062385F: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623862: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x118) = eax; /* 0x00623867: mov dword ptr [ecx + 0x118], eax */
    eax = MEM32(0x7DEA70); /* 0x0062386D: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x11C) = eax; /* 0x00623872: mov dword ptr [ecx + 0x11c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623878: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x0062387B: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x120) = eax; /* 0x00623880: mov dword ptr [ecx + 0x120], eax */
    eax = MEM32(0x7DEA70); /* 0x00623886: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x124) = eax; /* 0x0062388B: mov dword ptr [ecx + 0x124], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623891: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623894: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x48) = eax; /* 0x00623899: mov dword ptr [ecx + 0x48], eax */
    eax = MEM32(0x7DEA70); /* 0x0062389C: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x4C) = eax; /* 0x006238A1: mov dword ptr [ecx + 0x4c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006238A4: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x006238A7: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x68) = eax; /* 0x006238AC: mov dword ptr [ecx + 0x68], eax */
    eax = MEM32(0x7DEA70); /* 0x006238AF: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x6C) = eax; /* 0x006238B4: mov dword ptr [ecx + 0x6c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006238B7: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x006238BA: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x70) = eax; /* 0x006238BF: mov dword ptr [ecx + 0x70], eax */
    eax = MEM32(0x7DEA70); /* 0x006238C2: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x74) = eax; /* 0x006238C7: mov dword ptr [ecx + 0x74], eax */
    esp = ebp; /* 0x006238CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006238CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006238CD: ret  */
L_006238CE:
    ecx = MEM32(edx + 0x8); /* 0x006238CE: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x006238D1: mov word ptr [esp + 4], 0x202 */
    eax = MEM32(esp + 0x4); /* 0x006238D8: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x102u); /* 0x006238DC: mov word ptr [esp + 4], 0x102 */
    MEM32(ecx) = 5; /* 0x006238E3: mov dword ptr [ecx], 5 */
    MEM32(ecx + 0x4) = eax; /* 0x006238E9: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(edx + 0x8); /* 0x006238EC: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006238EF: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x006238F3: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0x8) = 0; /* 0x006238FA: mov dword ptr [ecx + 8], 0 */
    MEM32(ecx + 0xC) = eax; /* 0x00623901: mov dword ptr [ecx + 0xc], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623904: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623907: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x0062390B: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0x10) = 0; /* 0x00623912: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x14) = eax; /* 0x00623919: mov dword ptr [ecx + 0x14], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062391C: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x0062391F: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x00623923: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x18) = 4; /* 0x0062392A: mov dword ptr [ecx + 0x18], 4 */
    MEM32(ecx + 0x1C) = eax; /* 0x00623931: mov dword ptr [ecx + 0x1c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623934: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623937: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x0062393B: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x20) = 1; /* 0x00623942: mov dword ptr [ecx + 0x20], 1 */
    MEM32(ecx + 0x24) = eax; /* 0x00623949: mov dword ptr [ecx + 0x24], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062394C: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x0062394F: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x00623953: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x28) = 0; /* 0x0062395A: mov dword ptr [ecx + 0x28], 0 */
    MEM32(ecx + 0x2C) = eax; /* 0x00623961: mov dword ptr [ecx + 0x2c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623964: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623967: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x0062396B: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x30) = 3; /* 0x00623972: mov dword ptr [ecx + 0x30], 3 */
    MEM32(ecx + 0x34) = eax; /* 0x00623979: mov dword ptr [ecx + 0x34], eax */
    ecx = MEM32(edx + 0x8); /* 0x0062397C: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x0062397F: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x00623983: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x38) = 0xAu; /* 0x0062398A: mov dword ptr [ecx + 0x38], 0xa */
    MEM32(ecx + 0x3C) = eax; /* 0x00623991: mov dword ptr [ecx + 0x3c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623994: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623997: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x0062399B: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x40) = 9; /* 0x006239A2: mov dword ptr [ecx + 0x40], 9 */
    MEM32(ecx + 0x44) = eax; /* 0x006239A9: mov dword ptr [ecx + 0x44], eax */
    ecx = MEM32(edx + 0x8); /* 0x006239AC: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006239AF: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x006239B3: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x50) = 2; /* 0x006239BA: mov dword ptr [ecx + 0x50], 2 */
    MEM32(ecx + 0x54) = eax; /* 0x006239C1: mov dword ptr [ecx + 0x54], eax */
    ecx = MEM32(edx + 0x8); /* 0x006239C4: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006239C7: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x006239CB: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x58) = 0xCu; /* 0x006239D2: mov dword ptr [ecx + 0x58], 0xc */
    MEM32(ecx + 0x5C) = eax; /* 0x006239D9: mov dword ptr [ecx + 0x5c], eax */
    ecx = MEM32(edx + 0x8); /* 0x006239DC: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006239DF: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x006239E3: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x60) = 0x78u; /* 0x006239EA: mov dword ptr [ecx + 0x60], 0x78 */
    MEM32(ecx + 0x64) = eax; /* 0x006239F1: mov dword ptr [ecx + 0x64], eax */
    ecx = MEM32(edx + 0x8); /* 0x006239F4: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x006239F7: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x006239FB: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x80) = 8; /* 0x00623A02: mov dword ptr [ecx + 0x80], 8 */
    MEM32(ecx + 0x84) = eax; /* 0x00623A0C: mov dword ptr [ecx + 0x84], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623A12: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623A15: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x00623A19: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x88) = 0xDu; /* 0x00623A20: mov dword ptr [ecx + 0x88], 0xd */
    MEM32(ecx + 0x8C) = eax; /* 0x00623A2A: mov dword ptr [ecx + 0x8c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623A30: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623A33: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0); /* 0x00623A37: mov word ptr [esp + 4], 0 */
    MEM32(ecx + 0x90) = 0xEu; /* 0x00623A3E: mov dword ptr [ecx + 0x90], 0xe */
    MEM32(ecx + 0x94) = eax; /* 0x00623A48: mov dword ptr [ecx + 0x94], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623A4E: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623A51: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(1); /* 0x00623A55: mov word ptr [esp + 4], 1 */
    MEM32(ecx + 0x98) = 0x7Au; /* 0x00623A5C: mov dword ptr [ecx + 0x98], 0x7a */
    MEM32(ecx + 0x9C) = eax; /* 0x00623A66: mov dword ptr [ecx + 0x9c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623A6C: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623A6F: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x102u); /* 0x00623A73: mov word ptr [esp + 4], 0x102 */
    MEM32(ecx + 0xA0) = 0xBu; /* 0x00623A7A: mov dword ptr [ecx + 0xa0], 0xb */
    MEM32(ecx + 0xA4) = eax; /* 0x00623A84: mov dword ptr [ecx + 0xa4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623A8A: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623A8D: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x78) = eax; /* 0x00623A92: mov dword ptr [ecx + 0x78], eax */
    eax = MEM32(0x7DEA70); /* 0x00623A95: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x7C) = eax; /* 0x00623A9A: mov dword ptr [ecx + 0x7c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623A9D: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623AA0: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x00623AA4: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0xA8) = 2; /* 0x00623AAB: mov dword ptr [ecx + 0xa8], 2 */
    MEM32(ecx + 0xAC) = eax; /* 0x00623AB5: mov dword ptr [ecx + 0xac], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623ABB: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623ABE: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x00623AC2: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0xB0) = 2; /* 0x00623AC9: mov dword ptr [ecx + 0xb0], 2 */
    MEM32(ecx + 0xB4) = eax; /* 0x00623AD3: mov dword ptr [ecx + 0xb4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623AD9: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623ADC: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x102u); /* 0x00623AE0: mov word ptr [esp + 4], 0x102 */
    MEM32(ecx + 0xB8) = 3; /* 0x00623AE7: mov dword ptr [ecx + 0xb8], 3 */
    MEM32(ecx + 0xBC) = eax; /* 0x00623AF1: mov dword ptr [ecx + 0xbc], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623AF7: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623AFA: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x102u); /* 0x00623AFE: mov word ptr [esp + 4], 0x102 */
    MEM32(ecx + 0xC0) = 3; /* 0x00623B05: mov dword ptr [ecx + 0xc0], 3 */
    MEM32(ecx + 0xC4) = eax; /* 0x00623B0F: mov dword ptr [ecx + 0xc4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623B15: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623B18: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x00623B1C: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0xC8) = 0; /* 0x00623B23: mov dword ptr [ecx + 0xc8], 0 */
    MEM32(ecx + 0xCC) = eax; /* 0x00623B2D: mov dword ptr [ecx + 0xcc], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623B33: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623B36: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x102u); /* 0x00623B3A: mov word ptr [esp + 4], 0x102 */
    MEM32(ecx + 0xD0) = 0; /* 0x00623B41: mov dword ptr [ecx + 0xd0], 0 */
    MEM32(ecx + 0xD4) = eax; /* 0x00623B4B: mov dword ptr [ecx + 0xd4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623B51: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623B54: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x00623B58: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0xD8) = 1; /* 0x00623B5F: mov dword ptr [ecx + 0xd8], 1 */
    MEM32(ecx + 0xDC) = eax; /* 0x00623B69: mov dword ptr [ecx + 0xdc], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623B6F: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623B72: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x00623B76: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0xE0) = 1; /* 0x00623B7D: mov dword ptr [ecx + 0xe0], 1 */
    MEM32(ecx + 0xE4) = eax; /* 0x00623B87: mov dword ptr [ecx + 0xe4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623B8D: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623B90: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x00623B94: mov word ptr [esp + 4], 0x202 */
    MEM32(ecx + 0xE8) = 5; /* 0x00623B9B: mov dword ptr [ecx + 0xe8], 5 */
    MEM32(ecx + 0xEC) = eax; /* 0x00623BA5: mov dword ptr [ecx + 0xec], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623BAB: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623BAE: mov eax, dword ptr [esp + 4] */
    MEM16(esp + 0x4) = (uint16_t)(0x102u); /* 0x00623BB2: mov word ptr [esp + 4], 0x102 */
    MEM32(ecx + 0xF0) = 4; /* 0x00623BB9: mov dword ptr [ecx + 0xf0], 4 */
    MEM32(ecx + 0xF4) = eax; /* 0x00623BC3: mov dword ptr [ecx + 0xf4], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623BC9: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623BCC: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0xF8) = eax; /* 0x00623BD1: mov dword ptr [ecx + 0xf8], eax */
    eax = MEM32(0x7DEA70); /* 0x00623BD7: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0xFC) = eax; /* 0x00623BDC: mov dword ptr [ecx + 0xfc], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623BE2: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623BE5: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x100) = eax; /* 0x00623BEA: mov dword ptr [ecx + 0x100], eax */
    eax = MEM32(0x7DEA70); /* 0x00623BF0: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x104) = eax; /* 0x00623BF5: mov dword ptr [ecx + 0x104], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623BFB: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623BFE: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x108) = eax; /* 0x00623C03: mov dword ptr [ecx + 0x108], eax */
    eax = MEM32(0x7DEA70); /* 0x00623C09: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x10C) = eax; /* 0x00623C0E: mov dword ptr [ecx + 0x10c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623C14: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623C17: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x110) = eax; /* 0x00623C1C: mov dword ptr [ecx + 0x110], eax */
    eax = MEM32(0x7DEA70); /* 0x00623C22: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x114) = eax; /* 0x00623C27: mov dword ptr [ecx + 0x114], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623C2D: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(esp + 0x4); /* 0x00623C30: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x118) = 1; /* 0x00623C34: mov dword ptr [ecx + 0x118], 1 */
    MEM32(ecx + 0x11C) = eax; /* 0x00623C3E: mov dword ptr [ecx + 0x11c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623C44: mov ecx, dword ptr [edx + 8] */
    MEM16(esp + 0x4) = (uint16_t)(0x202u); /* 0x00623C47: mov word ptr [esp + 4], 0x202 */
    eax = MEM32(esp + 0x4); /* 0x00623C4E: mov eax, dword ptr [esp + 4] */
    MEM32(ecx + 0x120) = 1; /* 0x00623C52: mov dword ptr [ecx + 0x120], 1 */
L_00623C5C:
    MEM32(ecx + 0x124) = eax; /* 0x00623C5C: mov dword ptr [ecx + 0x124], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623C62: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623C65: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x68) = eax; /* 0x00623C6A: mov dword ptr [ecx + 0x68], eax */
    eax = MEM32(0x7DEA70); /* 0x00623C6D: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x6C) = eax; /* 0x00623C72: mov dword ptr [ecx + 0x6c], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623C75: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623C78: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x70) = eax; /* 0x00623C7D: mov dword ptr [ecx + 0x70], eax */
    eax = MEM32(0x7DEA70); /* 0x00623C80: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x74) = eax; /* 0x00623C85: mov dword ptr [ecx + 0x74], eax */
    ecx = MEM32(edx + 0x8); /* 0x00623C88: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(0x7DEA6C); /* 0x00623C8B: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx + 0x48) = eax; /* 0x00623C90: mov dword ptr [ecx + 0x48], eax */
    eax = MEM32(0x7DEA70); /* 0x00623C93: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x4C) = eax; /* 0x00623C98: mov dword ptr [ecx + 0x4c], eax */
    esp = ebp; /* 0x00623C9B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00623C9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00623C9E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00623CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00623CA0u);

L_00623CA0:
    PUSH32(esp, ebp); /* 0x00623CA0: push ebp */
    ebp = esp; /* 0x00623CA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00623CA3: push ecx */
    PUSH32(esp, esi); /* 0x00623CA4: push esi */
    esi = ecx; /* 0x00623CA5: mov esi, ecx */
    /* cmp MEM8(esi + 0x1C8), 0 */ /* 0x00623CA7: cmp byte ptr [esi + 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1C8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623CFE; /* 0x00623CAE: je 0x623cfe */
L_00623CB0:
    edx = MEM32(esi + 0x18); /* 0x00623CB0: mov edx, dword ptr [esi + 0x18] */
    eax = 0x66666667u; /* 0x00623CB3: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x14); /* 0x00623CB8: sub edx, dword ptr [esi + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00623CBB: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, ebx); /* 0x00623CBD: push ebx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00623CBE: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x00623CC1: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edx; /* 0x00623CC3: mov eax, edx */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x00623CC5: mov byte ptr [ebp - 4], bl */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00623CC8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00623CC8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00623CCB: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00623CFD; /* 0x00623CCD: je 0x623cfd */
L_00623CCF:
    /* nop */ /* 0x00623CCF: nop  */
L_00623CD0:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x00623CD0: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x00623CD3: mov ecx, esi */
    RECOMP_CALL(sub_00623D10); /* 0x00623CD5: call 0x623d10 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x18); /* 0x00623CDA: mov ecx, dword ptr [esi + 0x18] */
    eax = 0x66666667u; /* 0x00623CDD: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x14); /* 0x00623CE2: sub ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x00623CE5: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00623CE7: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = (uint32_t)LO8(ebx); /* 0x00623CE9: movzx eax, bl */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00623CEC: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ecx = edx; /* 0x00623CEF: mov ecx, edx */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x00623CF1: mov byte ptr [ebp - 4], bl */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x00623CF4: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x00623CF4: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00623CF7: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x00623CF9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00623CD0; /* 0x00623CFB: jb 0x623cd0 */
L_00623CFD:
    ebx = POP32_VAL(esp); /* 0x00623CFD: pop ebx */
L_00623CFE:
    esi = POP32_VAL(esp); /* 0x00623CFE: pop esi */
    esp = ebp; /* 0x00623CFF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00623D01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00623D02: ret  */
    RECOMP_REGS_OUT();
}

void sub_00623D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00623D10u);

L_00623D10:
    PUSH32(esp, ebp); /* 0x00623D10: push ebp */
    ebp = esp; /* 0x00623D11: mov ebp, esp */
    eax = MEM32(ecx + 0x8); /* 0x00623D13: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ebx); /* 0x00623D16: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x00623D17: mov bl, byte ptr [ebp + 8] */
    /* cmp MEM8(eax + 0xC), 2 */ /* 0x00623D1A: cmp byte ptr [eax + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00623D28; /* 0x00623D1E: jne 0x623d28 */
L_00623D20:
    edx = (uint32_t)LO8(ebx); /* 0x00623D20: movzx edx, bl */
    /* cmp MEM32(eax + 0x8), edx */ /* 0x00623D23: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623D36; /* 0x00623D26: je 0x623d36 */
L_00623D28:
    /* cmp MEM8(eax + 0x14), 2 */ /* 0x00623D28: cmp byte ptr [eax + 0x14], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00623D87; /* 0x00623D2C: jne 0x623d87 */
L_00623D2E:
    edx = (uint32_t)LO8(ebx); /* 0x00623D2E: movzx edx, bl */
    /* cmp MEM32(eax + 0x10), edx */ /* 0x00623D31: cmp dword ptr [eax + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00623D87; /* 0x00623D34: jne 0x623d87 */
L_00623D36:
    /* cmp MEM8(ecx + 0x1C8), 1 */ /* 0x00623D36: cmp byte ptr [ecx + 0x1c8], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1C8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x00623D3D: movss xmm0, dword ptr [0x808cb0] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623D4F; /* 0x00623D45: je 0x623d4f */
L_00623D47:
    _xmm[0].u64[0] = MEM32(0x808BD4); _xmm[0].u64[1] = 0; /* 0x00623D47: movss xmm0, dword ptr [0x808bd4] */
L_00623D4F:
    eax = MEM32(ecx + 0x14); /* 0x00623D4F: mov eax, dword ptr [ecx + 0x14] */
    edx = edx + edx * 4; /* 0x00623D52: lea edx, [edx + edx*4] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x00623D55: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x00623D55: shl edx, 2 */
    MEM32(edx + eax) = _xmm[0].u32[0]; /* 0x00623D58: movss dword ptr [edx + eax], xmm0 */
    /* cmp MEM8(ecx + 0x1C8), 1 */ /* 0x00623D5D: cmp byte ptr [ecx + 0x1c8], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1C8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623D79; /* 0x00623D64: je 0x623d79 */
L_00623D66:
    eax = MEM32(ecx + 0x14); /* 0x00623D66: mov eax, dword ptr [ecx + 0x14] */
    _xmm[0].u64[0] = MEM32(0x808BB0); _xmm[0].u64[1] = 0; /* 0x00623D69: movss xmm0, dword ptr [0x808bb0] */
    MEM32(edx + eax + 0x4) = _xmm[0].u32[0]; /* 0x00623D71: movss dword ptr [edx + eax + 4], xmm0 */
    goto L_00623DA5; /* 0x00623D77: jmp 0x623da5 */
L_00623D79:
    eax = MEM32(ecx + 0x14); /* 0x00623D79: mov eax, dword ptr [ecx + 0x14] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00623D7C: xorps xmm0, xmm0 */
    MEM32(edx + eax + 0x4) = _xmm[0].u32[0]; /* 0x00623D7F: movss dword ptr [edx + eax + 4], xmm0 */
    goto L_00623DA5; /* 0x00623D85: jmp 0x623da5 */
L_00623D87:
    eax = (uint32_t)LO8(ebx); /* 0x00623D87: movzx eax, bl */
    edx = eax + eax * 4; /* 0x00623D8A: lea edx, [eax + eax*4] */
    eax = MEM32(ecx + 0x14); /* 0x00623D8D: mov eax, dword ptr [ecx + 0x14] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x00623D90: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x00623D90: shl edx, 2 */
    MEM32(edx + eax) = 0x3F800000u; /* 0x00623D93: mov dword ptr [edx + eax], 0x3f800000 */
    eax = MEM32(ecx + 0x14); /* 0x00623D9A: mov eax, dword ptr [ecx + 0x14] */
    MEM32(edx + eax + 0x4) = 0x3E4CCCCDu; /* 0x00623D9D: mov dword ptr [edx + eax + 4], 0x3e4ccccd */
L_00623DA5:
    eax = MEM32(ecx + 0x14); /* 0x00623DA5: mov eax, dword ptr [ecx + 0x14] */
    ebx = POP32_VAL(esp); /* 0x00623DA8: pop ebx */
    MEM32(edx + eax + 0xC) = 0x3F800000u; /* 0x00623DA9: mov dword ptr [edx + eax + 0xc], 0x3f800000 */
    eax = MEM32(ecx + 0x14); /* 0x00623DB1: mov eax, dword ptr [ecx + 0x14] */
    MEM32(edx + eax + 0x8) = 0x3F800000u; /* 0x00623DB4: mov dword ptr [edx + eax + 8], 0x3f800000 */
    eax = MEM32(ecx + 0x14); /* 0x00623DBC: mov eax, dword ptr [ecx + 0x14] */
    MEM8(edx + eax + 0x10) = (uint8_t)(0); /* 0x00623DBF: mov byte ptr [edx + eax + 0x10], 0 */
    ebp = POP32_VAL(esp); /* 0x00623DC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00623DC5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00623DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00623DD0u);

L_00623DD0:
    PUSH32(esp, ebp); /* 0x00623DD0: push ebp */
    ebp = esp; /* 0x00623DD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00623DD3: push -1 */
    PUSH32(esp, 0x007B7851u); /* 0x00623DD5: push 0x7b7851 */
    eax = MEM32(FS_BASE + (0)); /* 0x00623DDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00623DE0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x16Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x16Cu; /* 0x00623DE1: sub esp, 0x16c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00623DE7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00623DEC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00623DEE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00623DF1: push ebx */
    PUSH32(esp, esi); /* 0x00623DF2: push esi */
    PUSH32(esp, edi); /* 0x00623DF3: push edi */
    PUSH32(esp, eax); /* 0x00623DF4: push eax */
    eax = ebp + (-0xC); /* 0x00623DF5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00623DF8: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00623DFE: mov esi, ecx */
    PUSH32(esp, 0x1Au); /* 0x00623E00: push 0x1a */
    MEM32(ebp + (-0xD8)) = 0; /* 0x00623E02: mov dword ptr [ebp - 0xd8], 0 */
    ecx = ebp + (-0xE8); /* 0x00623E0C: lea ecx, [ebp - 0xe8] */
    MEM32(ebp + (-0xD4)) = 0; /* 0x00623E12: mov dword ptr [ebp - 0xd4], 0 */
    PUSH32(esp, 0x007F8F4Cu); /* 0x00623E1C: push 0x7f8f4c */
    MEM32(ebp + (-0xD4)) = 0xFu; /* 0x00623E21: mov dword ptr [ebp - 0xd4], 0xf */
    MEM32(ebp + (-0xD8)) = 0; /* 0x00623E2B: mov dword ptr [ebp - 0xd8], 0 */
    MEM8(ebp + (-0xE8)) = (uint8_t)(0); /* 0x00623E35: mov byte ptr [ebp - 0xe8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00623E3C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00623E41: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0xE8); /* 0x00623E48: lea eax, [ebp - 0xe8] */
    PUSH32(esp, eax); /* 0x00623E4E: push eax */
    RECOMP_CALL(sub_0066F0E0); /* 0x00623E4F: call 0x66f0e0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x00623E54: mov ebx, eax */
    MEM32(ebp + (-0x164)) = ebx; /* 0x00623E56: mov dword ptr [ebp - 0x164], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00623E5C: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0xD4)), 0x10u */ /* 0x00623E63: cmp dword ptr [ebp - 0xd4], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD4))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00623E6A: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00623E7D; /* 0x00623E70: jb 0x623e7d */
L_00623E72:
    PUSH32(esp, MEM32(ebp + (-0xE8))); /* 0x00623E72: push dword ptr [ebp - 0xe8] */
    RECOMP_ICALL(edi); /* 0x00623E78: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00623E7A: add esp, 4 */
    _flag_k = FK_ADD;
L_00623E7D:
    MEM32(ebp + (-0xD4)) = 0xFu; /* 0x00623E7D: mov dword ptr [ebp - 0xd4], 0xf */
    MEM32(ebp + (-0xD8)) = 0; /* 0x00623E87: mov dword ptr [ebp - 0xd8], 0 */
    MEM8(ebp + (-0xE8)) = (uint8_t)(0); /* 0x00623E91: mov byte ptr [ebp - 0xe8], 0 */
    /* test ebx, ebx */ /* 0x00623E98: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006245AF; /* 0x00623E9A: je 0x6245af */
L_00623EA0:
    ecx = MEM32(ebx + 0x1C); /* 0x00623EA0: mov ecx, dword ptr [ebx + 0x1c] */
    eax = 0x6BCA1AF3u; /* 0x00623EA3: mov eax, 0x6bca1af3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x18); /* 0x00623EA8: sub ecx, dword ptr [ebx + 0x18] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00623EAB: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x00623EAD: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x00623EB0: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00623EB2: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00623EB2: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00623EB5: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 0x16u */ /* 0x00623EB7: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006245AF; /* 0x00623EBA: jb 0x6245af */
L_00623EC0:
    eax = MEM32(ebx + 0x18); /* 0x00623EC0: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM32(eax + 0x4BC), 0 */ /* 0x00623EC3: cmp dword ptr [eax + 0x4bc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4BC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623ED3; /* 0x00623ECA: je 0x623ed3 */
L_00623ECC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x48Cu; /* 0x00623ECC: add eax, 0x48c */
    _flag_k = FK_ADD;
    goto L_00623ED8; /* 0x00623ED1: jmp 0x623ed8 */
L_00623ED3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4A4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4A4u; /* 0x00623ED3: add eax, 0x4a4 */
    _flag_k = FK_ADD;
L_00623ED8:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00623ED8: push -1 */
    PUSH32(esp, 0); /* 0x00623EDA: push 0 */
    MEM32(ebp + (-0x90)) = 0; /* 0x00623EDC: mov dword ptr [ebp - 0x90], 0 */
    ecx = ebp + (-0xA0); /* 0x00623EE6: lea ecx, [ebp - 0xa0] */
    MEM32(ebp + (-0x8C)) = 0; /* 0x00623EEC: mov dword ptr [ebp - 0x8c], 0 */
    PUSH32(esp, eax); /* 0x00623EF6: push eax */
    MEM32(ebp + (-0x8C)) = 0xFu; /* 0x00623EF7: mov dword ptr [ebp - 0x8c], 0xf */
    MEM32(ebp + (-0x90)) = 0; /* 0x00623F01: mov dword ptr [ebp - 0x90], 0 */
    MEM8(ebp + (-0xA0)) = (uint8_t)(0); /* 0x00623F0B: mov byte ptr [ebp - 0xa0], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00623F12: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00623F17: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(ebx + 0x18); /* 0x00623F1E: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM32(eax + 0x4BC), 0 */ /* 0x00623F21: cmp dword ptr [eax + 0x4bc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4BC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623F31; /* 0x00623F28: je 0x623f31 */
L_00623F2A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x48Cu; /* 0x00623F2A: add eax, 0x48c */
    _flag_k = FK_ADD;
    goto L_00623F36; /* 0x00623F2F: jmp 0x623f36 */
L_00623F31:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4A4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4A4u; /* 0x00623F31: add eax, 0x4a4 */
    _flag_k = FK_ADD;
L_00623F36:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00623F36: push -1 */
    PUSH32(esp, 0); /* 0x00623F38: push 0 */
    MEM32(ebp + (-0x78)) = 0; /* 0x00623F3A: mov dword ptr [ebp - 0x78], 0 */
    ecx = ebp + (-0x88); /* 0x00623F41: lea ecx, [ebp - 0x88] */
    MEM32(ebp + (-0x74)) = 0; /* 0x00623F47: mov dword ptr [ebp - 0x74], 0 */
    PUSH32(esp, eax); /* 0x00623F4E: push eax */
    MEM32(ebp + (-0x74)) = 0xFu; /* 0x00623F4F: mov dword ptr [ebp - 0x74], 0xf */
    MEM32(ebp + (-0x78)) = 0; /* 0x00623F56: mov dword ptr [ebp - 0x78], 0 */
    MEM8(ebp + (-0x88)) = (uint8_t)(0); /* 0x00623F5D: mov byte ptr [ebp - 0x88], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00623F64: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00623F69: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(ebx + 0x18); /* 0x00623F6D: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM32(eax + 0x508), 0 */ /* 0x00623F70: cmp dword ptr [eax + 0x508], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x508)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623F80; /* 0x00623F77: je 0x623f80 */
L_00623F79:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4D8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4D8u; /* 0x00623F79: add eax, 0x4d8 */
    _flag_k = FK_ADD;
    goto L_00623F85; /* 0x00623F7E: jmp 0x623f85 */
L_00623F80:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4F0u; /* 0x00623F80: add eax, 0x4f0 */
    _flag_k = FK_ADD;
L_00623F85:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00623F85: push -1 */
    PUSH32(esp, 0); /* 0x00623F87: push 0 */
    MEM32(ebp + (-0x60)) = 0; /* 0x00623F89: mov dword ptr [ebp - 0x60], 0 */
    ecx = ebp + (-0x70); /* 0x00623F90: lea ecx, [ebp - 0x70] */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00623F93: mov dword ptr [ebp - 0x5c], 0 */
    PUSH32(esp, eax); /* 0x00623F9A: push eax */
    MEM32(ebp + (-0x5C)) = 0xFu; /* 0x00623F9B: mov dword ptr [ebp - 0x5c], 0xf */
    MEM32(ebp + (-0x60)) = 0; /* 0x00623FA2: mov dword ptr [ebp - 0x60], 0 */
    MEM8(ebp + (-0x70)) = (uint8_t)(0); /* 0x00623FA9: mov byte ptr [ebp - 0x70], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00623FAD: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00623FB2: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ebx + 0x18); /* 0x00623FB6: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM32(eax + 0x508), 0 */ /* 0x00623FB9: cmp dword ptr [eax + 0x508], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x508)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00623FC9; /* 0x00623FC0: je 0x623fc9 */
L_00623FC2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4D8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4D8u; /* 0x00623FC2: add eax, 0x4d8 */
    _flag_k = FK_ADD;
    goto L_00623FCE; /* 0x00623FC7: jmp 0x623fce */
L_00623FC9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4F0u; /* 0x00623FC9: add eax, 0x4f0 */
    _flag_k = FK_ADD;
L_00623FCE:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00623FCE: push -1 */
    PUSH32(esp, 0); /* 0x00623FD0: push 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x00623FD2: mov dword ptr [ebp - 0x48], 0 */
    ecx = ebp + (-0x58); /* 0x00623FD9: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0; /* 0x00623FDC: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, eax); /* 0x00623FE3: push eax */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x00623FE4: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x00623FEB: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x00623FF2: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00623FF6: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00623FFB: mov byte ptr [ebp - 4], 4 */
    eax = MEM32(ebx + 0x18); /* 0x00623FFF: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM32(eax + 0x554), 0 */ /* 0x00624002: cmp dword ptr [eax + 0x554], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x554)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624012; /* 0x00624009: je 0x624012 */
L_0062400B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x524u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x524u; /* 0x0062400B: add eax, 0x524 */
    _flag_k = FK_ADD;
    goto L_00624017; /* 0x00624010: jmp 0x624017 */
L_00624012:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x53Cu; /* 0x00624012: add eax, 0x53c */
    _flag_k = FK_ADD;
L_00624017:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00624017: push -1 */
    PUSH32(esp, 0); /* 0x00624019: push 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062401B: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x00624022: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00624025: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, eax); /* 0x0062402C: push eax */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062402D: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00624034: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062403B: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062403F: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00624044: mov byte ptr [ebp - 4], 5 */
    eax = MEM32(ebx + 0x18); /* 0x00624048: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM32(eax + 0x5A0), 0 */ /* 0x0062404B: cmp dword ptr [eax + 0x5a0], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x5A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062405B; /* 0x00624052: je 0x62405b */
L_00624054:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x570u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x570u; /* 0x00624054: add eax, 0x570 */
    _flag_k = FK_ADD;
    goto L_00624060; /* 0x00624059: jmp 0x624060 */
L_0062405B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x588u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x588u; /* 0x0062405B: add eax, 0x588 */
    _flag_k = FK_ADD;
L_00624060:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00624060: push -1 */
    PUSH32(esp, 0); /* 0x00624062: push 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x00624064: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062406B: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062406E: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, eax); /* 0x00624075: push eax */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00624076: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062407D: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00624084: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00624088: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x0062408D: mov dword ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00624094: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + 0x1CC; /* 0x00624096: lea edx, [esi + 0x1cc] */
    MEM32(ebp + (-0x150)) = 0xFu; /* 0x0062409C: mov dword ptr [ebp - 0x150], 0xf */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006240A6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x158)) = edx; /* 0x006240A8: mov dword ptr [ebp - 0x158], edx */
    MEM32(ebp + (-0x14C)) = ecx; /* 0x006240AE: mov dword ptr [ebp - 0x14c], ecx */
L_006240B4:
    eax = MEM32(ebx + 0x18); /* 0x006240B4: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM32(eax + ecx + 0x48), 0 */ /* 0x006240B7: cmp dword ptr [eax + ecx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = eax + 0x18; /* 0x006240BC: lea esi, [eax + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006240C4; /* 0x006240BF: jne 0x6240c4 */
L_006240C1:
    esi = eax + 0x30; /* 0x006240C1: lea esi, [eax + 0x30] */
L_006240C4:
    eax = ebp + (-0x160); /* 0x006240C4: lea eax, [ebp - 0x160] */
    MEM32(ebp + (-0x160)) = edi; /* 0x006240CA: mov dword ptr [ebp - 0x160], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x006240D0: add esi, ecx */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x15C)) = (uint16_t)(1); /* 0x006240D2: mov word ptr [ebp - 0x15c], 1 */
    PUSH32(esp, eax); /* 0x006240DB: push eax */
    ecx = edx; /* 0x006240DC: mov ecx, edx */
    RECOMP_CALL(sub_00625610); /* 0x006240DE: call 0x625610 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x006240E3: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006240F3; /* 0x006240E5: je 0x6240f3 */
L_006240E7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006240E7: push -1 */
    PUSH32(esp, 0); /* 0x006240E9: push 0 */
    PUSH32(esp, esi); /* 0x006240EB: push esi */
    ecx = eax; /* 0x006240EC: mov ecx, eax */
    RECOMP_CALL(sub_0040A030); /* 0x006240EE: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_006240F3:
    ecx = MEM32(ebp + (-0x14C)); /* 0x006240F3: mov ecx, dword ptr [ebp - 0x14c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006240F9: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0x158)); /* 0x006240FA: mov edx, dword ptr [ebp - 0x158] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00624100: add ecx, 0x4c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x150))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x150)) = MEM32(ebp + (-0x150)) - 1; /* 0x00624103: dec dword ptr [ebp - 0x150] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14C)) = ecx; /* 0x00624109: mov dword ptr [ebp - 0x14c], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006240B4; /* 0x0062410F: jne 0x6240b4 */
L_00624111:
    edi = MEM32(0x7CC694); /* 0x00624111: mov edi, dword ptr [0x7cc694] */
    eax = ebp + (-0xA0); /* 0x00624117: lea eax, [ebp - 0xa0] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x0062411D: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x14C)) = eax; /* 0x0062411F: mov dword ptr [ebp - 0x14c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00624125: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x150)) = ecx; /* 0x00624127: mov dword ptr [ebp - 0x150], ecx */
    ecx = ecx; /* 0x0062412D: lea ecx, [ecx] */
L_00624130:
    /* cmp LO8(ebx), 4 */ /* 0x00624130: cmp bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006244D3; /* 0x00624133: je 0x6244d3 */
L_00624139:
    /* cmp LO8(ebx), 5 */ /* 0x00624139: cmp bl, 5 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006244D3; /* 0x0062413C: je 0x6244d3 */
L_00624142:
    MEM32(ebp + (-0xC0)) = 0; /* 0x00624142: mov dword ptr [ebp - 0xc0], 0 */
    MEM32(ebp + (-0xBC)) = 0; /* 0x0062414C: mov dword ptr [ebp - 0xbc], 0 */
    MEM32(ebp + (-0xBC)) = 0xFu; /* 0x00624156: mov dword ptr [ebp - 0xbc], 0xf */
    MEM32(ebp + (-0xC0)) = 0; /* 0x00624160: mov dword ptr [ebp - 0xc0], 0 */
    MEM8(ebp + (-0xD0)) = (uint8_t)(0); /* 0x0062416A: mov byte ptr [ebp - 0xd0], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00624171: mov byte ptr [ebp - 4], 7 */
    MEM32(ebp + (-0xA8)) = 0; /* 0x00624175: mov dword ptr [ebp - 0xa8], 0 */
    MEM32(ebp + (-0xA4)) = 0; /* 0x0062417F: mov dword ptr [ebp - 0xa4], 0 */
    MEM32(ebp + (-0xA4)) = 0xFu; /* 0x00624189: mov dword ptr [ebp - 0xa4], 0xf */
    MEM32(ebp + (-0xA8)) = 0; /* 0x00624193: mov dword ptr [ebp - 0xa8], 0 */
    MEM8(ebp + (-0xB8)) = (uint8_t)(0); /* 0x0062419D: mov byte ptr [ebp - 0xb8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006241A4: mov byte ptr [ebp - 4], 8 */
    /* cmp LO8(ebx), 1 */ /* 0x006241A8: cmp bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006241FE; /* 0x006241AB: je 0x6241fe */
L_006241AD:
    /* cmp LO8(ebx), 3 */ /* 0x006241AD: cmp bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006241FE; /* 0x006241B0: je 0x6241fe */
L_006241B2:
    esi = MEM32(ebp + (-0x164)); /* 0x006241B2: mov esi, dword ptr [ebp - 0x164] */
    eax = MEM32(esi + 0x18); /* 0x006241B8: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + 0x684), 0 */ /* 0x006241BB: cmp dword ptr [eax + 0x684], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x684)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006241CB; /* 0x006241C2: je 0x6241cb */
L_006241C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x654u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x654u; /* 0x006241C4: add eax, 0x654 */
    _flag_k = FK_ADD;
    goto L_006241D0; /* 0x006241C9: jmp 0x6241d0 */
L_006241CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x66Cu; /* 0x006241CB: add eax, 0x66c */
    _flag_k = FK_ADD;
L_006241D0:
    ecx = ebp + (-0xD0); /* 0x006241D0: lea ecx, [ebp - 0xd0] */
    /* cmp ecx, eax */ /* 0x006241D6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006241E4; /* 0x006241D8: je 0x6241e4 */
L_006241DA:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006241DA: push -1 */
    PUSH32(esp, 0); /* 0x006241DC: push 0 */
    PUSH32(esp, eax); /* 0x006241DE: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x006241DF: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_006241E4:
    eax = MEM32(esi + 0x18); /* 0x006241E4: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + 0x6D0), 0 */ /* 0x006241E7: cmp dword ptr [eax + 0x6d0], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x6D0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006241F7; /* 0x006241EE: je 0x6241f7 */
L_006241F0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6A0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x6A0u; /* 0x006241F0: add eax, 0x6a0 */
    _flag_k = FK_ADD;
    goto L_00624248; /* 0x006241F5: jmp 0x624248 */
L_006241F7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6B8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x6B8u; /* 0x006241F7: add eax, 0x6b8 */
    _flag_k = FK_ADD;
    goto L_00624248; /* 0x006241FC: jmp 0x624248 */
L_006241FE:
    esi = MEM32(ebp + (-0x164)); /* 0x006241FE: mov esi, dword ptr [ebp - 0x164] */
    eax = MEM32(esi + 0x18); /* 0x00624204: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + 0x5EC), 0 */ /* 0x00624207: cmp dword ptr [eax + 0x5ec], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x5EC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624217; /* 0x0062420E: je 0x624217 */
L_00624210:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5BCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x5BCu; /* 0x00624210: add eax, 0x5bc */
    _flag_k = FK_ADD;
    goto L_0062421C; /* 0x00624215: jmp 0x62421c */
L_00624217:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x5D4u; /* 0x00624217: add eax, 0x5d4 */
    _flag_k = FK_ADD;
L_0062421C:
    ecx = ebp + (-0xD0); /* 0x0062421C: lea ecx, [ebp - 0xd0] */
    /* cmp ecx, eax */ /* 0x00624222: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624230; /* 0x00624224: je 0x624230 */
L_00624226:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00624226: push -1 */
    PUSH32(esp, 0); /* 0x00624228: push 0 */
    PUSH32(esp, eax); /* 0x0062422A: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x0062422B: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00624230:
    eax = MEM32(esi + 0x18); /* 0x00624230: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + 0x638), 0 */ /* 0x00624233: cmp dword ptr [eax + 0x638], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x638)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624243; /* 0x0062423A: je 0x624243 */
L_0062423C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x608u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x608u; /* 0x0062423C: add eax, 0x608 */
    _flag_k = FK_ADD;
    goto L_00624248; /* 0x00624241: jmp 0x624248 */
L_00624243:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x620u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x620u; /* 0x00624243: add eax, 0x620 */
    _flag_k = FK_ADD;
L_00624248:
    ecx = ebp + (-0xB8); /* 0x00624248: lea ecx, [ebp - 0xb8] */
    /* cmp ecx, eax */ /* 0x0062424E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062425C; /* 0x00624250: je 0x62425c */
L_00624252:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00624252: push -1 */
    PUSH32(esp, 0); /* 0x00624254: push 0 */
    PUSH32(esp, eax); /* 0x00624256: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x00624257: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_0062425C:
    edx = MEM32(ebp + (-0x14C)); /* 0x0062425C: mov edx, dword ptr [ebp - 0x14c] */
    ecx = ebp + (-0x148); /* 0x00624262: lea ecx, [ebp - 0x148] */
    PUSH32(esp, 0x007E55E0u); /* 0x00624268: push 0x7e55e0 */
    RECOMP_CALL(sub_0041A0F0); /* 0x0062426D: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624272: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00624275: mov byte ptr [ebp - 4], 9 */
    ecx = ebp + (-0xD0); /* 0x00624279: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, ecx); /* 0x0062427F: push ecx */
    edx = eax; /* 0x00624280: mov edx, eax */
    ecx = ebp + (-0x118); /* 0x00624282: lea ecx, [ebp - 0x118] */
    RECOMP_CALL(sub_0045F540); /* 0x00624288: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062428D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x154)) = eax; /* 0x00624290: mov dword ptr [ebp - 0x154], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00624296: mov byte ptr [ebp - 4], 0xa */
    eax = MEM32(ebp + (-0x150)); /* 0x0062429A: mov eax, dword ptr [ebp - 0x150] */
    ecx = MEM32(ebp + (-0x158)); /* 0x006242A0: mov ecx, dword ptr [ebp - 0x158] */
    MEM32(ebp + (-0x174)) = eax; /* 0x006242A6: mov dword ptr [ebp - 0x174], eax */
    eax = ebp + (-0x174); /* 0x006242AC: lea eax, [ebp - 0x174] */
    PUSH32(esp, eax); /* 0x006242B2: push eax */
    MEM16(ebp + (-0x170)) = (uint16_t)(0x102u); /* 0x006242B3: mov word ptr [ebp - 0x170], 0x102 */
    RECOMP_CALL(sub_00625610); /* 0x006242BC: call 0x625610 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006242C1: mov esi, eax */
    eax = MEM32(ebp + (-0x154)); /* 0x006242C3: mov eax, dword ptr [ebp - 0x154] */
    /* cmp esi, eax */ /* 0x006242C9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006242F9; /* 0x006242CB: je 0x6242f9 */
L_006242CD:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x006242CD: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006242E0; /* 0x006242D1: jb 0x6242e0 */
L_006242D3:
    PUSH32(esp, MEM32(esi)); /* 0x006242D3: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x006242D5: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x154)); /* 0x006242D7: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006242DD: add esp, 4 */
    _flag_k = FK_ADD;
L_006242E0:
    MEM32(esi + 0x14) = 0xFu; /* 0x006242E0: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x006242E7: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x006242E9: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x006242F0: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x006242F1: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x006242F4: call 0x419890 */
    RECOMP_FLAGS_IN();
L_006242F9:
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x006242F9: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0x104)), 0x10u */ /* 0x006242FD: cmp dword ptr [ebp - 0x104], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x104))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624311; /* 0x00624304: jb 0x624311 */
L_00624306:
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x00624306: push dword ptr [ebp - 0x118] */
    RECOMP_ICALL(edi); /* 0x0062430C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062430E: add esp, 4 */
    _flag_k = FK_ADD;
L_00624311:
    MEM32(ebp + (-0x104)) = 0xFu; /* 0x00624311: mov dword ptr [ebp - 0x104], 0xf */
    MEM32(ebp + (-0x108)) = 0; /* 0x0062431B: mov dword ptr [ebp - 0x108], 0 */
    MEM8(ebp + (-0x118)) = (uint8_t)(0); /* 0x00624325: mov byte ptr [ebp - 0x118], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0062432C: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0x134)), 0x10u */ /* 0x00624330: cmp dword ptr [ebp - 0x134], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624344; /* 0x00624337: jb 0x624344 */
L_00624339:
    PUSH32(esp, MEM32(ebp + (-0x148))); /* 0x00624339: push dword ptr [ebp - 0x148] */
    RECOMP_ICALL(edi); /* 0x0062433F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624341: add esp, 4 */
    _flag_k = FK_ADD;
L_00624344:
    edx = MEM32(ebp + (-0x14C)); /* 0x00624344: mov edx, dword ptr [ebp - 0x14c] */
    ecx = ebp + (-0x130); /* 0x0062434A: lea ecx, [ebp - 0x130] */
    PUSH32(esp, 0x007E55E0u); /* 0x00624350: push 0x7e55e0 */
    MEM32(ebp + (-0x134)) = 0xFu; /* 0x00624355: mov dword ptr [ebp - 0x134], 0xf */
    MEM32(ebp + (-0x138)) = 0; /* 0x0062435F: mov dword ptr [ebp - 0x138], 0 */
    MEM8(ebp + (-0x148)) = (uint8_t)(0); /* 0x00624369: mov byte ptr [ebp - 0x148], 0 */
    RECOMP_CALL(sub_0041A0F0); /* 0x00624370: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624375: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00624378: mov byte ptr [ebp - 4], 0xb */
    ecx = ebp + (-0xB8); /* 0x0062437C: lea ecx, [ebp - 0xb8] */
    PUSH32(esp, ecx); /* 0x00624382: push ecx */
    edx = eax; /* 0x00624383: mov edx, eax */
    ecx = ebp + (-0x100); /* 0x00624385: lea ecx, [ebp - 0x100] */
    RECOMP_CALL(sub_0045F540); /* 0x0062438B: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624390: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x154)) = eax; /* 0x00624393: mov dword ptr [ebp - 0x154], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x00624399: mov byte ptr [ebp - 4], 0xc */
    eax = MEM32(ebp + (-0x150)); /* 0x0062439D: mov eax, dword ptr [ebp - 0x150] */
    ecx = MEM32(ebp + (-0x158)); /* 0x006243A3: mov ecx, dword ptr [ebp - 0x158] */
    MEM32(ebp + (-0x16C)) = eax; /* 0x006243A9: mov dword ptr [ebp - 0x16c], eax */
    eax = ebp + (-0x16C); /* 0x006243AF: lea eax, [ebp - 0x16c] */
    PUSH32(esp, eax); /* 0x006243B5: push eax */
    MEM16(ebp + (-0x168)) = (uint16_t)(0x202u); /* 0x006243B6: mov word ptr [ebp - 0x168], 0x202 */
    RECOMP_CALL(sub_00625610); /* 0x006243BF: call 0x625610 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006243C4: mov esi, eax */
    eax = MEM32(ebp + (-0x154)); /* 0x006243C6: mov eax, dword ptr [ebp - 0x154] */
    /* cmp esi, eax */ /* 0x006243CC: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006243FC; /* 0x006243CE: je 0x6243fc */
L_006243D0:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x006243D0: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006243E3; /* 0x006243D4: jb 0x6243e3 */
L_006243D6:
    PUSH32(esp, MEM32(esi)); /* 0x006243D6: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x006243D8: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x154)); /* 0x006243DA: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006243E0: add esp, 4 */
    _flag_k = FK_ADD;
L_006243E3:
    MEM32(esi + 0x14) = 0xFu; /* 0x006243E3: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x006243EA: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x006243EC: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x006243F3: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x006243F4: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x006243F7: call 0x419890 */
    RECOMP_FLAGS_IN();
L_006243FC:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x006243FC: mov byte ptr [ebp - 4], 0xb */
    /* cmp MEM32(ebp + (-0xEC)), 0x10u */ /* 0x00624400: cmp dword ptr [ebp - 0xec], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xEC))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624414; /* 0x00624407: jb 0x624414 */
L_00624409:
    PUSH32(esp, MEM32(ebp + (-0x100))); /* 0x00624409: push dword ptr [ebp - 0x100] */
    RECOMP_ICALL(edi); /* 0x0062440F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624411: add esp, 4 */
    _flag_k = FK_ADD;
L_00624414:
    MEM32(ebp + (-0xEC)) = 0xFu; /* 0x00624414: mov dword ptr [ebp - 0xec], 0xf */
    MEM32(ebp + (-0xF0)) = 0; /* 0x0062441E: mov dword ptr [ebp - 0xf0], 0 */
    MEM8(ebp + (-0x100)) = (uint8_t)(0); /* 0x00624428: mov byte ptr [ebp - 0x100], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0062442F: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0x11C)), 0x10u */ /* 0x00624433: cmp dword ptr [ebp - 0x11c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x11C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624447; /* 0x0062443A: jb 0x624447 */
L_0062443C:
    PUSH32(esp, MEM32(ebp + (-0x130))); /* 0x0062443C: push dword ptr [ebp - 0x130] */
    RECOMP_ICALL(edi); /* 0x00624442: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624444: add esp, 4 */
    _flag_k = FK_ADD;
L_00624447:
    MEM32(ebp + (-0x11C)) = 0xFu; /* 0x00624447: mov dword ptr [ebp - 0x11c], 0xf */
    MEM32(ebp + (-0x120)) = 0; /* 0x00624451: mov dword ptr [ebp - 0x120], 0 */
    MEM8(ebp + (-0x130)) = (uint8_t)(0); /* 0x0062445B: mov byte ptr [ebp - 0x130], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00624462: mov byte ptr [ebp - 4], 7 */
    /* cmp MEM32(ebp + (-0xA4)), 0x10u */ /* 0x00624466: cmp dword ptr [ebp - 0xa4], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA4))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062447A; /* 0x0062446D: jb 0x62447a */
L_0062446F:
    PUSH32(esp, MEM32(ebp + (-0xB8))); /* 0x0062446F: push dword ptr [ebp - 0xb8] */
    RECOMP_ICALL(edi); /* 0x00624475: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624477: add esp, 4 */
    _flag_k = FK_ADD;
L_0062447A:
    MEM32(ebp + (-0xA4)) = 0xFu; /* 0x0062447A: mov dword ptr [ebp - 0xa4], 0xf */
    MEM32(ebp + (-0xA8)) = 0; /* 0x00624484: mov dword ptr [ebp - 0xa8], 0 */
    MEM8(ebp + (-0xB8)) = (uint8_t)(0); /* 0x0062448E: mov byte ptr [ebp - 0xb8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00624495: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0xBC)), 0x10u */ /* 0x00624499: cmp dword ptr [ebp - 0xbc], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006244AD; /* 0x006244A0: jb 0x6244ad */
L_006244A2:
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x006244A2: push dword ptr [ebp - 0xd0] */
    RECOMP_ICALL(edi); /* 0x006244A8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006244AA: add esp, 4 */
    _flag_k = FK_ADD;
L_006244AD:
    esi = MEM32(ebp + (-0x14C)); /* 0x006244AD: mov esi, dword ptr [ebp - 0x14c] */
    MEM32(ebp + (-0xBC)) = 0xFu; /* 0x006244B3: mov dword ptr [ebp - 0xbc], 0xf */
    MEM32(ebp + (-0xC0)) = 0; /* 0x006244BD: mov dword ptr [ebp - 0xc0], 0 */
    MEM8(ebp + (-0xD0)) = (uint8_t)(0); /* 0x006244C7: mov byte ptr [ebp - 0xd0], 0 */
    goto L_00624572; /* 0x006244CE: jmp 0x624572 */
L_006244D3:
    eax = ebp + (-0x160); /* 0x006244D3: lea eax, [ebp - 0x160] */
    MEM32(ebp + (-0x160)) = ecx; /* 0x006244D9: mov dword ptr [ebp - 0x160], ecx */
    ecx = MEM32(ebp + (-0x158)); /* 0x006244DF: mov ecx, dword ptr [ebp - 0x158] */
    PUSH32(esp, eax); /* 0x006244E5: push eax */
    MEM16(ebp + (-0x15C)) = (uint16_t)(0x202u); /* 0x006244E6: mov word ptr [ebp - 0x15c], 0x202 */
    RECOMP_CALL(sub_00626240); /* 0x006244EF: call 0x626240 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x158)); /* 0x006244F4: mov ecx, dword ptr [ebp - 0x158] */
    esi = eax; /* 0x006244FA: mov esi, eax */
    /* cmp esi, MEM32(ecx) */ /* 0x006244FC: cmp esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624523; /* 0x006244FE: je 0x624523 */
L_00624500:
    SET_LO8(eax, MEM8(esi + 0x14)); /* 0x00624500: mov al, byte ptr [esi + 0x14] */
    /* cmp LO8(eax), 2 */ /* 0x00624503: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062451C; /* 0x00624505: jne 0x62451c */
L_00624507:
    SET_LO8(eax, MEM8(esi + 0x15)); /* 0x00624507: mov al, byte ptr [esi + 0x15] */
    /* cmp LO8(eax), 2 */ /* 0x0062450A: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062451C; /* 0x0062450C: jne 0x62451c */
L_0062450E:
    eax = MEM32(ebp + (-0x150)); /* 0x0062450E: mov eax, dword ptr [ebp - 0x150] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x00624514: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x00624517: setl al */
    goto L_0062451F; /* 0x0062451A: jmp 0x62451f */
L_0062451C:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) ? 1 : 0); /* 0x0062451C: seta al */
L_0062451F:
    /* test LO8(eax), LO8(eax) */ /* 0x0062451F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062455B; /* 0x00624521: je 0x62455b */
L_00624523:
    eax = ebp + (-0x160); /* 0x00624523: lea eax, [ebp - 0x160] */
    MEM32(ebp + (-0x154)) = eax; /* 0x00624529: mov dword ptr [ebp - 0x154], eax */
    eax = ebp + (-0x154); /* 0x0062452F: lea eax, [ebp - 0x154] */
    PUSH32(esp, ecx); /* 0x00624535: push ecx */
    PUSH32(esp, eax); /* 0x00624536: push eax */
    PUSH32(esp, ecx); /* 0x00624537: push ecx */
    RECOMP_CALL(sub_00627480); /* 0x00624538: call 0x627480 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x158)); /* 0x0062453D: mov ecx, dword ptr [ebp - 0x158] */
    PUSH32(esp, eax); /* 0x00624543: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00624544: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00624547: push eax */
    PUSH32(esp, esi); /* 0x00624548: push esi */
    eax = ebp + (-0x178); /* 0x00624549: lea eax, [ebp - 0x178] */
    PUSH32(esp, eax); /* 0x0062454F: push eax */
    RECOMP_CALL(sub_00627550); /* 0x00624550: call 0x627550 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x178)); /* 0x00624555: mov esi, dword ptr [ebp - 0x178] */
L_0062455B:
    ecx = esi + 0x18; /* 0x0062455B: lea ecx, [esi + 0x18] */
    esi = MEM32(ebp + (-0x14C)); /* 0x0062455E: mov esi, dword ptr [ebp - 0x14c] */
    /* cmp ecx, esi */ /* 0x00624564: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624572; /* 0x00624566: je 0x624572 */
L_00624568:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00624568: push -1 */
    PUSH32(esp, 0); /* 0x0062456A: push 0 */
    PUSH32(esp, esi); /* 0x0062456C: push esi */
    RECOMP_CALL(sub_0040A030); /* 0x0062456D: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00624572:
    ecx = MEM32(ebp + (-0x150)); /* 0x00624572: mov ecx, dword ptr [ebp - 0x150] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x00624578: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0062457A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x0062457B: add esi, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x150)) = ecx; /* 0x0062457E: mov dword ptr [ebp - 0x150], ecx */
    MEM32(ebp + (-0x14C)) = esi; /* 0x00624584: mov dword ptr [ebp - 0x14c], esi */
    /* cmp LO8(ebx), 6 */ /* 0x0062458A: cmp bl, 6 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00624130; /* 0x0062458D: jb 0x624130 */
L_00624593:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00624593: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xA0); /* 0x0062459A: lea eax, [ebp - 0xa0] */
    PUSH32(esp, 0x0040A000u); /* 0x006245A0: push 0x40a000 */
    PUSH32(esp, 6); /* 0x006245A5: push 6 */
    PUSH32(esp, 0x18u); /* 0x006245A7: push 0x18 */
    PUSH32(esp, eax); /* 0x006245A9: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x006245AA: call 0x77f628 */
    RECOMP_FLAGS_IN();
L_006245AF:
    ecx = MEM32(ebp + (-0xC)); /* 0x006245AF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006245B2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006245B9: pop ecx */
    edi = POP32_VAL(esp); /* 0x006245BA: pop edi */
    esi = POP32_VAL(esp); /* 0x006245BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006245BC: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x006245BD: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006245C0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006245C2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006245C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006245C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006245CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006245D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006245D0u);

L_006245D0:
    PUSH32(esp, ebp); /* 0x006245D0: push ebp */
    ebp = esp; /* 0x006245D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006245D3: push -1 */
    PUSH32(esp, 0x007B7920u); /* 0x006245D5: push 0x7b7920 */
    eax = MEM32(FS_BASE + (0)); /* 0x006245DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006245E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12Cu; /* 0x006245E1: sub esp, 0x12c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006245E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006245EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006245EE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x006245F1: push ebx */
    PUSH32(esp, esi); /* 0x006245F2: push esi */
    PUSH32(esp, edi); /* 0x006245F3: push edi */
    PUSH32(esp, eax); /* 0x006245F4: push eax */
    eax = ebp + (-0xC); /* 0x006245F5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006245F8: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006245FE: mov esi, ecx */
    MEM32(ebp + (-0x108)) = esi; /* 0x00624600: mov dword ptr [ebp - 0x108], esi */
    PUSH32(esp, 0x15u); /* 0x00624606: push 0x15 */
    MEM32(ebp + (-0x60)) = 0; /* 0x00624608: mov dword ptr [ebp - 0x60], 0 */
    ecx = ebp + (-0x70); /* 0x0062460F: lea ecx, [ebp - 0x70] */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00624612: mov dword ptr [ebp - 0x5c], 0 */
    PUSH32(esp, 0x007F8F68u); /* 0x00624619: push 0x7f8f68 */
    MEM32(ebp + (-0x5C)) = 0xFu; /* 0x0062461E: mov dword ptr [ebp - 0x5c], 0xf */
    MEM32(ebp + (-0x60)) = 0; /* 0x00624625: mov dword ptr [ebp - 0x60], 0 */
    MEM8(ebp + (-0x70)) = (uint8_t)(0); /* 0x0062462C: mov byte ptr [ebp - 0x70], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00624630: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00624635: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x70); /* 0x0062463C: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x0062463F: push eax */
    RECOMP_CALL(sub_0066F0E0); /* 0x00624640: call 0x66f0e0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x00624645: mov ebx, eax */
    MEM32(ebp + (-0x120)) = ebx; /* 0x00624647: mov dword ptr [ebp - 0x120], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062464D: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x00624654: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00624658: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00624668; /* 0x0062465E: jb 0x624668 */
L_00624660:
    PUSH32(esp, MEM32(ebp + (-0x70))); /* 0x00624660: push dword ptr [ebp - 0x70] */
    RECOMP_ICALL(edi); /* 0x00624663: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624665: add esp, 4 */
    _flag_k = FK_ADD;
L_00624668:
    MEM32(ebp + (-0x5C)) = 0xFu; /* 0x00624668: mov dword ptr [ebp - 0x5c], 0xf */
    MEM32(ebp + (-0x60)) = 0; /* 0x0062466F: mov dword ptr [ebp - 0x60], 0 */
    MEM8(ebp + (-0x70)) = (uint8_t)(0); /* 0x00624676: mov byte ptr [ebp - 0x70], 0 */
    /* test ebx, ebx */ /* 0x0062467A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00624FEE; /* 0x0062467C: je 0x624fee */
L_00624682:
    ecx = MEM32(ebx + 0x1C); /* 0x00624682: mov ecx, dword ptr [ebx + 0x1c] */
    eax = 0x6BCA1AF3u; /* 0x00624685: mov eax, 0x6bca1af3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x18); /* 0x0062468A: sub ecx, dword ptr [ebx + 0x18] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0062468D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0062468F: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x00624692: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00624694: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00624694: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00624697: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 2 */ /* 0x00624699: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624FEE; /* 0x0062469C: jb 0x624fee */
L_006246A2:
    eax = MEM32(esi + 0x34); /* 0x006246A2: mov eax, dword ptr [esi + 0x34] */
    /* test eax, eax */ /* 0x006246A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006246BB; /* 0x006246A7: jne 0x6246bb */
L_006246A9:
    PUSH32(esp, 0x0080437Cu); /* 0x006246A9: push 0x80437c */
    RECOMP_CALL(sub_006EDB70); /* 0x006246AE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006246B3: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00624FEE; /* 0x006246B6: jmp 0x624fee */
L_006246BB:
    eax = MEM32(eax + 0x24); /* 0x006246BB: mov eax, dword ptr [eax + 0x24] */
    MEM32(ebp + (-0x10C)) = eax; /* 0x006246BE: mov dword ptr [ebp - 0x10c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006246C4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624FEE; /* 0x006246C7: je 0x624fee */
L_006246CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006246CD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006246CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062482C; /* 0x006246D1: je 0x62482c */
L_006246D7:
    goto L_006246E0; /* 0x006246D7: jmp 0x6246e0 */
L_006246E0:
    eax = MEM32(ebp + (-0x120)); /* 0x006246E0: mov eax, dword ptr [ebp - 0x120] */
    eax = MEM32(eax + 0x18); /* 0x006246E6: mov eax, dword ptr [eax + 0x18] */
    /* cmp MEM32(eax + 0x48), 0 */ /* 0x006246E9: cmp dword ptr [eax + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006246F4; /* 0x006246ED: je 0x6246f4 */
L_006246EF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x006246EF: add eax, 0x18 */
    _flag_k = FK_ADD;
    goto L_006246F7; /* 0x006246F2: jmp 0x6246f7 */
L_006246F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x006246F4: add eax, 0x30 */
    _flag_k = FK_ADD;
L_006246F7:
    edx = ebx; /* 0x006246F7: mov edx, ebx */
    MEM32(ebp + (-0x104)) = eax; /* 0x006246F9: mov dword ptr [ebp - 0x104], eax */
    ecx = ebp + (-0x88); /* 0x006246FF: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_0047ADC0); /* 0x00624705: call 0x47adc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0062470A: mov esi, eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x0062470C: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x40); /* 0x00624713: lea ecx, [ebp - 0x40] */
    edx = MEM32(ebp + (-0x104)); /* 0x00624716: mov edx, dword ptr [ebp - 0x104] */
    PUSH32(esp, 0x007E55E0u); /* 0x0062471C: push 0x7e55e0 */
    RECOMP_CALL(sub_0041A0F0); /* 0x00624721: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624726: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00624729: mov byte ptr [ebp - 4], 2 */
    edx = eax; /* 0x0062472D: mov edx, eax */
    PUSH32(esp, esi); /* 0x0062472F: push esi */
    ecx = ebp + (-0x28); /* 0x00624730: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_00419B80); /* 0x00624733: call 0x419b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624738: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x104)) = eax; /* 0x0062473B: mov dword ptr [ebp - 0x104], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00624741: mov byte ptr [ebp - 4], 3 */
    eax = ebp + (-0x114); /* 0x00624745: lea eax, [ebp - 0x114] */
    ecx = MEM32(ebp + (-0x108)); /* 0x0062474B: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x00624751: push eax */
    MEM32(ebp + (-0x114)) = ebx; /* 0x00624752: mov dword ptr [ebp - 0x114], ebx */
    MEM16(ebp + (-0x110)) = (uint16_t)(1); /* 0x00624758: mov word ptr [ebp - 0x110], 1 */
    ecx = ecx + 0x1CC; /* 0x00624761: lea ecx, [ecx + 0x1cc] */
    RECOMP_CALL(sub_00625610); /* 0x00624767: call 0x625610 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0062476C: mov esi, eax */
    eax = MEM32(ebp + (-0x104)); /* 0x0062476E: mov eax, dword ptr [ebp - 0x104] */
    /* cmp esi, eax */ /* 0x00624774: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006247A4; /* 0x00624776: je 0x6247a4 */
L_00624778:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00624778: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062478B; /* 0x0062477C: jb 0x62478b */
L_0062477E:
    PUSH32(esp, MEM32(esi)); /* 0x0062477E: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x00624780: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x104)); /* 0x00624782: mov eax, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624788: add esp, 4 */
    _flag_k = FK_ADD;
L_0062478B:
    MEM32(esi + 0x14) = 0xFu; /* 0x0062478B: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x00624792: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x00624794: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0062479B: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x0062479C: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0062479F: call 0x419890 */
    RECOMP_FLAGS_IN();
L_006247A4:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006247A4: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x006247A8: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006247B6; /* 0x006247AC: jb 0x6247b6 */
L_006247AE:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x006247AE: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x006247B1: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006247B3: add esp, 4 */
    _flag_k = FK_ADD;
L_006247B6:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x006247B6: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x006247BD: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x006247C4: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006247C8: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x006247CC: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006247DA; /* 0x006247D0: jb 0x6247da */
L_006247D2:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x006247D2: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x006247D5: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006247D7: add esp, 4 */
    _flag_k = FK_ADD;
L_006247DA:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x006247DA: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x006247E1: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x006247E8: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006247EC: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x74)), 0x10u */ /* 0x006247F3: cmp dword ptr [ebp - 0x74], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624804; /* 0x006247F7: jb 0x624804 */
L_006247F9:
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x006247F9: push dword ptr [ebp - 0x88] */
    RECOMP_ICALL(edi); /* 0x006247FF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624801: add esp, 4 */
    _flag_k = FK_ADD;
L_00624804:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00624804: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x74)) = 0xFu; /* 0x00624805: mov dword ptr [ebp - 0x74], 0xf */
    MEM32(ebp + (-0x78)) = 0; /* 0x0062480C: mov dword ptr [ebp - 0x78], 0 */
    MEM8(ebp + (-0x88)) = (uint8_t)(0); /* 0x00624813: mov byte ptr [ebp - 0x88], 0 */
    /* cmp ebx, MEM32(ebp + (-0x10C)) */ /* 0x0062481A: cmp ebx, dword ptr [ebp - 0x10c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006246E0; /* 0x00624820: jb 0x6246e0 */
L_00624826:
    esi = MEM32(ebp + (-0x108)); /* 0x00624826: mov esi, dword ptr [ebp - 0x108] */
L_0062482C:
    ecx = MEM32(esi + 0x18); /* 0x0062482C: mov ecx, dword ptr [esi + 0x18] */
    eax = 0x66666667u; /* 0x0062482F: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x14); /* 0x00624834: sub ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00624837: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00624839: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x0062483B: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x0062483E: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00624840: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00624840: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00624843: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00624DA1; /* 0x00624845: je 0x624da1 */
L_0062484B:
    goto L_00624850; /* 0x0062484B: jmp 0x624850 */
L_00624850:
    eax = MEM32(ebp + (-0x120)); /* 0x00624850: mov eax, dword ptr [ebp - 0x120] */
    eax = MEM32(eax + 0x18); /* 0x00624856: mov eax, dword ptr [eax + 0x18] */
    /* cmp MEM32(eax + 0x94), 0 */ /* 0x00624859: cmp dword ptr [eax + 0x94], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x94)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624867; /* 0x00624860: je 0x624867 */
L_00624862:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x64u; /* 0x00624862: add eax, 0x64 */
    _flag_k = FK_ADD;
    goto L_0062486A; /* 0x00624865: jmp 0x62486a */
L_00624867:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x7Cu; /* 0x00624867: add eax, 0x7c */
    _flag_k = FK_ADD;
L_0062486A:
    edx = ebx; /* 0x0062486A: mov edx, ebx */
    MEM32(ebp + (-0x104)) = eax; /* 0x0062486C: mov dword ptr [ebp - 0x104], eax */
    ecx = ebp + (-0x100); /* 0x00624872: lea ecx, [ebp - 0x100] */
    RECOMP_CALL(sub_0047ADC0); /* 0x00624878: call 0x47adc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0062487D: mov esi, eax */
    MEM32(ebp + (-0x4)) = 4; /* 0x0062487F: mov dword ptr [ebp - 4], 4 */
    ecx = ebp + (-0x88); /* 0x00624886: lea ecx, [ebp - 0x88] */
    edx = MEM32(ebp + (-0x104)); /* 0x0062488C: mov edx, dword ptr [ebp - 0x104] */
    PUSH32(esp, 0x007E55E0u); /* 0x00624892: push 0x7e55e0 */
    RECOMP_CALL(sub_0041A0F0); /* 0x00624897: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062489C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062489F: mov byte ptr [ebp - 4], 5 */
    edx = eax; /* 0x006248A3: mov edx, eax */
    PUSH32(esp, esi); /* 0x006248A5: push esi */
    ecx = ebp + (-0xD0); /* 0x006248A6: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_00419B80); /* 0x006248AC: call 0x419b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006248B1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x006248B4: mov byte ptr [ebp - 4], 7 */
    /* cmp MEM32(ebp + (-0x74)), 0x10u */ /* 0x006248B8: cmp dword ptr [ebp - 0x74], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006248C9; /* 0x006248BC: jb 0x6248c9 */
L_006248BE:
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x006248BE: push dword ptr [ebp - 0x88] */
    RECOMP_ICALL(edi); /* 0x006248C4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006248C6: add esp, 4 */
    _flag_k = FK_ADD;
L_006248C9:
    MEM32(ebp + (-0x74)) = 0xFu; /* 0x006248C9: mov dword ptr [ebp - 0x74], 0xf */
    MEM32(ebp + (-0x78)) = 0; /* 0x006248D0: mov dword ptr [ebp - 0x78], 0 */
    MEM8(ebp + (-0x88)) = (uint8_t)(0); /* 0x006248D7: mov byte ptr [ebp - 0x88], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006248DE: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0xEC)), 0x10u */ /* 0x006248E2: cmp dword ptr [ebp - 0xec], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xEC))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006248F6; /* 0x006248E9: jb 0x6248f6 */
L_006248EB:
    PUSH32(esp, MEM32(ebp + (-0x100))); /* 0x006248EB: push dword ptr [ebp - 0x100] */
    RECOMP_ICALL(edi); /* 0x006248F1: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006248F3: add esp, 4 */
    _flag_k = FK_ADD;
L_006248F6:
    PUSH32(esp, 1); /* 0x006248F6: push 1 */
    MEM32(ebp + (-0x18)) = 0; /* 0x006248F8: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x006248FF: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x00624902: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007CE3C8u); /* 0x00624909: push 0x7ce3c8 */
    MEM32(ebp + (-0xEC)) = 0xFu; /* 0x0062490E: mov dword ptr [ebp - 0xec], 0xf */
    MEM32(ebp + (-0xF0)) = 0; /* 0x00624918: mov dword ptr [ebp - 0xf0], 0 */
    MEM8(ebp + (-0x100)) = (uint8_t)(0); /* 0x00624922: mov byte ptr [ebp - 0x100], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00624929: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00624930: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00624937: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062493B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00624940: mov byte ptr [ebp - 4], 9 */
    ecx = ebp + (-0x40); /* 0x00624944: lea ecx, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x00624947: push 1 */
    MEM32(ebp + (-0x30)) = 0; /* 0x00624949: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00624950: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F8F80u); /* 0x00624957: push 0x7f8f80 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062495C: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00624963: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062496A: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062496E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00624973: mov byte ptr [ebp - 4], 0xa */
    edx = ebp + (-0xD0); /* 0x00624977: lea edx, [ebp - 0xd0] */
    PUSH32(esp, 0x007E55E0u); /* 0x0062497D: push 0x7e55e0 */
    ecx = ebp + (-0xB8); /* 0x00624982: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_0041A0F0); /* 0x00624988: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062498D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00624990: mov byte ptr [ebp - 4], 0xb */
    ecx = ebp + (-0x28); /* 0x00624994: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x00624997: push ecx */
    edx = eax; /* 0x00624998: mov edx, eax */
    ecx = ebp + (-0xE8); /* 0x0062499A: lea ecx, [ebp - 0xe8] */
    RECOMP_CALL(sub_0045F540); /* 0x006249A0: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006249A5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x104)) = eax; /* 0x006249A8: mov dword ptr [ebp - 0x104], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x006249AE: mov byte ptr [ebp - 4], 0xc */
    eax = ebp + (-0x134); /* 0x006249B2: lea eax, [ebp - 0x134] */
    ecx = MEM32(ebp + (-0x108)); /* 0x006249B8: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x006249BE: push eax */
    MEM32(ebp + (-0x134)) = ebx; /* 0x006249BF: mov dword ptr [ebp - 0x134], ebx */
    MEM16(ebp + (-0x130)) = (uint16_t)(0x102u); /* 0x006249C5: mov word ptr [ebp - 0x130], 0x102 */
    ecx = ecx + 0x1CC; /* 0x006249CE: lea ecx, [ecx + 0x1cc] */
    RECOMP_CALL(sub_00626240); /* 0x006249D4: call 0x626240 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006249D9: mov esi, eax */
    eax = MEM32(ebp + (-0x108)); /* 0x006249DB: mov eax, dword ptr [ebp - 0x108] */
    /* cmp esi, MEM32(eax + 0x1CC) */ /* 0x006249E1: cmp esi, dword ptr [eax + 0x1cc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x1CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = eax + 0x1CC; /* 0x006249E7: lea ecx, [eax + 0x1cc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624A0C; /* 0x006249ED: je 0x624a0c */
L_006249EF:
    SET_LO8(eax, MEM8(esi + 0x14)); /* 0x006249EF: mov al, byte ptr [esi + 0x14] */
    /* cmp LO8(eax), 2 */ /* 0x006249F2: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00624A05; /* 0x006249F4: jne 0x624a05 */
L_006249F6:
    SET_LO8(eax, MEM8(esi + 0x15)); /* 0x006249F6: mov al, byte ptr [esi + 0x15] */
    /* cmp LO8(eax), 1 */ /* 0x006249F9: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00624A05; /* 0x006249FB: jne 0x624a05 */
L_006249FD:
    /* cmp ebx, MEM32(esi + 0x10) */ /* 0x006249FD: cmp ebx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x00624A00: setl al */
    goto L_00624A08; /* 0x00624A03: jmp 0x624a08 */
L_00624A05:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) ? 1 : 0); /* 0x00624A05: seta al */
L_00624A08:
    /* test LO8(eax), LO8(eax) */ /* 0x00624A08: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00624A4A; /* 0x00624A0A: je 0x624a4a */
L_00624A0C:
    eax = ebp + (-0x134); /* 0x00624A0C: lea eax, [ebp - 0x134] */
    MEM32(ebp + (-0x10C)) = eax; /* 0x00624A12: mov dword ptr [ebp - 0x10c], eax */
    eax = ebp + (-0x10C); /* 0x00624A18: lea eax, [ebp - 0x10c] */
    PUSH32(esp, ecx); /* 0x00624A1E: push ecx */
    PUSH32(esp, eax); /* 0x00624A1F: push eax */
    PUSH32(esp, ecx); /* 0x00624A20: push ecx */
    RECOMP_CALL(sub_00627480); /* 0x00624A21: call 0x627480 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x108)); /* 0x00624A26: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x00624A2C: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00624A2D: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00624A30: push eax */
    PUSH32(esp, esi); /* 0x00624A31: push esi */
    eax = ebp + (-0x118); /* 0x00624A32: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x00624A38: push eax */
    ecx = ecx + 0x1CC; /* 0x00624A39: lea ecx, [ecx + 0x1cc] */
    RECOMP_CALL(sub_00627550); /* 0x00624A3F: call 0x627550 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x118)); /* 0x00624A44: mov esi, dword ptr [ebp - 0x118] */
L_00624A4A:
    eax = MEM32(ebp + (-0x104)); /* 0x00624A4A: mov eax, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x00624A50: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00624A53: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624A83; /* 0x00624A55: je 0x624a83 */
L_00624A57:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00624A57: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624A6A; /* 0x00624A5B: jb 0x624a6a */
L_00624A5D:
    PUSH32(esp, MEM32(esi)); /* 0x00624A5D: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x00624A5F: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x104)); /* 0x00624A61: mov eax, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624A67: add esp, 4 */
    _flag_k = FK_ADD;
L_00624A6A:
    MEM32(esi + 0x14) = 0xFu; /* 0x00624A6A: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x00624A71: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x00624A73: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00624A7A: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x00624A7B: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00624A7E: call 0x419890 */
    RECOMP_FLAGS_IN();
L_00624A83:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00624A83: mov byte ptr [ebp - 4], 0xb */
    /* cmp MEM32(ebp + (-0xD4)), 0x10u */ /* 0x00624A87: cmp dword ptr [ebp - 0xd4], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD4))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624A9B; /* 0x00624A8E: jb 0x624a9b */
L_00624A90:
    PUSH32(esp, MEM32(ebp + (-0xE8))); /* 0x00624A90: push dword ptr [ebp - 0xe8] */
    RECOMP_ICALL(edi); /* 0x00624A96: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624A98: add esp, 4 */
    _flag_k = FK_ADD;
L_00624A9B:
    MEM32(ebp + (-0xD4)) = 0xFu; /* 0x00624A9B: mov dword ptr [ebp - 0xd4], 0xf */
    MEM32(ebp + (-0xD8)) = 0; /* 0x00624AA5: mov dword ptr [ebp - 0xd8], 0 */
    MEM8(ebp + (-0xE8)) = (uint8_t)(0); /* 0x00624AAF: mov byte ptr [ebp - 0xe8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00624AB6: mov byte ptr [ebp - 4], 0xa */
    /* cmp MEM32(ebp + (-0xA4)), 0x10u */ /* 0x00624ABA: cmp dword ptr [ebp - 0xa4], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA4))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624ACE; /* 0x00624AC1: jb 0x624ace */
L_00624AC3:
    PUSH32(esp, MEM32(ebp + (-0xB8))); /* 0x00624AC3: push dword ptr [ebp - 0xb8] */
    RECOMP_ICALL(edi); /* 0x00624AC9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624ACB: add esp, 4 */
    _flag_k = FK_ADD;
L_00624ACE:
    PUSH32(esp, 0x007E55E0u); /* 0x00624ACE: push 0x7e55e0 */
    edx = ebp + (-0xD0); /* 0x00624AD3: lea edx, [ebp - 0xd0] */
    MEM32(ebp + (-0xA4)) = 0xFu; /* 0x00624AD9: mov dword ptr [ebp - 0xa4], 0xf */
    ecx = ebp + (-0x58); /* 0x00624AE3: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0xA8)) = 0; /* 0x00624AE6: mov dword ptr [ebp - 0xa8], 0 */
    MEM8(ebp + (-0xB8)) = (uint8_t)(0); /* 0x00624AF0: mov byte ptr [ebp - 0xb8], 0 */
    RECOMP_CALL(sub_0041A0F0); /* 0x00624AF7: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624AFC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x00624AFF: mov byte ptr [ebp - 4], 0xd */
    ecx = ebp + (-0x40); /* 0x00624B03: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x00624B06: push ecx */
    edx = eax; /* 0x00624B07: mov edx, eax */
    ecx = ebp + (-0xA0); /* 0x00624B09: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_0045F540); /* 0x00624B0F: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624B14: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x104)) = eax; /* 0x00624B17: mov dword ptr [ebp - 0x104], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x00624B1D: mov byte ptr [ebp - 4], 0xe */
    eax = ebp + (-0x12C); /* 0x00624B21: lea eax, [ebp - 0x12c] */
    ecx = MEM32(ebp + (-0x108)); /* 0x00624B27: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x00624B2D: push eax */
    MEM32(ebp + (-0x12C)) = ebx; /* 0x00624B2E: mov dword ptr [ebp - 0x12c], ebx */
    MEM16(ebp + (-0x128)) = (uint16_t)(0x202u); /* 0x00624B34: mov word ptr [ebp - 0x128], 0x202 */
    ecx = ecx + 0x1CC; /* 0x00624B3D: lea ecx, [ecx + 0x1cc] */
    RECOMP_CALL(sub_00626240); /* 0x00624B43: call 0x626240 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00624B48: mov esi, eax */
    eax = MEM32(ebp + (-0x108)); /* 0x00624B4A: mov eax, dword ptr [ebp - 0x108] */
    /* cmp esi, MEM32(eax + 0x1CC) */ /* 0x00624B50: cmp esi, dword ptr [eax + 0x1cc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x1CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = eax + 0x1CC; /* 0x00624B56: lea ecx, [eax + 0x1cc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624B7B; /* 0x00624B5C: je 0x624b7b */
L_00624B5E:
    SET_LO8(eax, MEM8(esi + 0x14)); /* 0x00624B5E: mov al, byte ptr [esi + 0x14] */
    /* cmp LO8(eax), 2 */ /* 0x00624B61: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00624B74; /* 0x00624B63: jne 0x624b74 */
L_00624B65:
    SET_LO8(eax, MEM8(esi + 0x15)); /* 0x00624B65: mov al, byte ptr [esi + 0x15] */
    /* cmp LO8(eax), 2 */ /* 0x00624B68: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00624B74; /* 0x00624B6A: jne 0x624b74 */
L_00624B6C:
    /* cmp ebx, MEM32(esi + 0x10) */ /* 0x00624B6C: cmp ebx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x00624B6F: setl al */
    goto L_00624B77; /* 0x00624B72: jmp 0x624b77 */
L_00624B74:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) ? 1 : 0); /* 0x00624B74: seta al */
L_00624B77:
    /* test LO8(eax), LO8(eax) */ /* 0x00624B77: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00624BB9; /* 0x00624B79: je 0x624bb9 */
L_00624B7B:
    eax = ebp + (-0x12C); /* 0x00624B7B: lea eax, [ebp - 0x12c] */
    MEM32(ebp + (-0x10C)) = eax; /* 0x00624B81: mov dword ptr [ebp - 0x10c], eax */
    eax = ebp + (-0x10C); /* 0x00624B87: lea eax, [ebp - 0x10c] */
    PUSH32(esp, ecx); /* 0x00624B8D: push ecx */
    PUSH32(esp, eax); /* 0x00624B8E: push eax */
    PUSH32(esp, ecx); /* 0x00624B8F: push ecx */
    RECOMP_CALL(sub_00627480); /* 0x00624B90: call 0x627480 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x108)); /* 0x00624B95: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x00624B9B: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00624B9C: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00624B9F: push eax */
    PUSH32(esp, esi); /* 0x00624BA0: push esi */
    eax = ebp + (-0x11C); /* 0x00624BA1: lea eax, [ebp - 0x11c] */
    PUSH32(esp, eax); /* 0x00624BA7: push eax */
    ecx = ecx + 0x1CC; /* 0x00624BA8: lea ecx, [ecx + 0x1cc] */
    RECOMP_CALL(sub_00627550); /* 0x00624BAE: call 0x627550 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x11C)); /* 0x00624BB3: mov esi, dword ptr [ebp - 0x11c] */
L_00624BB9:
    eax = MEM32(ebp + (-0x104)); /* 0x00624BB9: mov eax, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x00624BBF: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00624BC2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624BF2; /* 0x00624BC4: je 0x624bf2 */
L_00624BC6:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00624BC6: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624BD9; /* 0x00624BCA: jb 0x624bd9 */
L_00624BCC:
    PUSH32(esp, MEM32(esi)); /* 0x00624BCC: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x00624BCE: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x104)); /* 0x00624BD0: mov eax, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624BD6: add esp, 4 */
    _flag_k = FK_ADD;
L_00624BD9:
    MEM32(esi + 0x14) = 0xFu; /* 0x00624BD9: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x00624BE0: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x00624BE2: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00624BE9: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x00624BEA: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00624BED: call 0x419890 */
    RECOMP_FLAGS_IN();
L_00624BF2:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x00624BF2: mov byte ptr [ebp - 4], 0xd */
    /* cmp MEM32(ebp + (-0x8C)), 0x10u */ /* 0x00624BF6: cmp dword ptr [ebp - 0x8c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624C0A; /* 0x00624BFD: jb 0x624c0a */
L_00624BFF:
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x00624BFF: push dword ptr [ebp - 0xa0] */
    RECOMP_ICALL(edi); /* 0x00624C05: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624C07: add esp, 4 */
    _flag_k = FK_ADD;
L_00624C0A:
    MEM32(ebp + (-0x8C)) = 0xFu; /* 0x00624C0A: mov dword ptr [ebp - 0x8c], 0xf */
    MEM32(ebp + (-0x90)) = 0; /* 0x00624C14: mov dword ptr [ebp - 0x90], 0 */
    MEM8(ebp + (-0xA0)) = (uint8_t)(0); /* 0x00624C1E: mov byte ptr [ebp - 0xa0], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00624C25: mov byte ptr [ebp - 4], 0xa */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x00624C29: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624C37; /* 0x00624C2D: jb 0x624c37 */
L_00624C2F:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00624C2F: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x00624C32: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624C34: add esp, 4 */
    _flag_k = FK_ADD;
L_00624C37:
    ecx = MEM32(ebp + (-0x108)); /* 0x00624C37: mov ecx, dword ptr [ebp - 0x108] */
    eax = ebp + (-0x114); /* 0x00624C3D: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x00624C43: push eax */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x00624C44: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x00624C4B: mov dword ptr [ebp - 0x48], 0 */
    ecx = ecx + 0x1CC; /* 0x00624C52: lea ecx, [ecx + 0x1cc] */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x00624C58: mov byte ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x114)) = ebx; /* 0x00624C5C: mov dword ptr [ebp - 0x114], ebx */
    MEM16(ebp + (-0x110)) = (uint16_t)(2); /* 0x00624C62: mov word ptr [ebp - 0x110], 2 */
    RECOMP_CALL(sub_00626240); /* 0x00624C6B: call 0x626240 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00624C70: mov esi, eax */
    eax = MEM32(ebp + (-0x108)); /* 0x00624C72: mov eax, dword ptr [ebp - 0x108] */
    /* cmp esi, MEM32(eax + 0x1CC) */ /* 0x00624C78: cmp esi, dword ptr [eax + 0x1cc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x1CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = eax + 0x1CC; /* 0x00624C7E: lea ecx, [eax + 0x1cc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624CA8; /* 0x00624C84: je 0x624ca8 */
L_00624C86:
    SET_LO8(eax, MEM8(esi + 0x14)); /* 0x00624C86: mov al, byte ptr [esi + 0x14] */
    /* cmp LO8(eax), 2 */ /* 0x00624C89: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624C92; /* 0x00624C8B: je 0x624c92 */
L_00624C8D:
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x00624C8D: seta al */
    goto L_00624CA4; /* 0x00624C90: jmp 0x624ca4 */
L_00624C92:
    SET_LO8(eax, MEM8(esi + 0x15)); /* 0x00624C92: mov al, byte ptr [esi + 0x15] */
    /* test LO8(eax), LO8(eax) */ /* 0x00624C95: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00624CA1; /* 0x00624C97: jne 0x624ca1 */
L_00624C99:
    /* cmp ebx, MEM32(esi + 0x10) */ /* 0x00624C99: cmp ebx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x00624C9C: setl al */
    goto L_00624CA4; /* 0x00624C9F: jmp 0x624ca4 */
L_00624CA1:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) ? 1 : 0); /* 0x00624CA1: setne al */
L_00624CA4:
    /* test LO8(eax), LO8(eax) */ /* 0x00624CA4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00624CE6; /* 0x00624CA6: je 0x624ce6 */
L_00624CA8:
    eax = ebp + (-0x114); /* 0x00624CA8: lea eax, [ebp - 0x114] */
    MEM32(ebp + (-0x10C)) = eax; /* 0x00624CAE: mov dword ptr [ebp - 0x10c], eax */
    eax = ebp + (-0x10C); /* 0x00624CB4: lea eax, [ebp - 0x10c] */
    PUSH32(esp, ecx); /* 0x00624CBA: push ecx */
    PUSH32(esp, eax); /* 0x00624CBB: push eax */
    PUSH32(esp, ecx); /* 0x00624CBC: push ecx */
    RECOMP_CALL(sub_00627480); /* 0x00624CBD: call 0x627480 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x108)); /* 0x00624CC2: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x00624CC8: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00624CC9: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00624CCC: push eax */
    PUSH32(esp, esi); /* 0x00624CCD: push esi */
    eax = ebp + (-0x124); /* 0x00624CCE: lea eax, [ebp - 0x124] */
    PUSH32(esp, eax); /* 0x00624CD4: push eax */
    ecx = ecx + 0x1CC; /* 0x00624CD5: lea ecx, [ecx + 0x1cc] */
    RECOMP_CALL(sub_00627550); /* 0x00624CDB: call 0x627550 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x124)); /* 0x00624CE0: mov esi, dword ptr [ebp - 0x124] */
L_00624CE6:
    ecx = esi + 0x18; /* 0x00624CE6: lea ecx, [esi + 0x18] */
    eax = ebp + (-0xD0); /* 0x00624CE9: lea eax, [ebp - 0xd0] */
    /* cmp ecx, eax */ /* 0x00624CEF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624CFD; /* 0x00624CF1: je 0x624cfd */
L_00624CF3:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00624CF3: push -1 */
    PUSH32(esp, 0); /* 0x00624CF5: push 0 */
    PUSH32(esp, eax); /* 0x00624CF7: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x00624CF8: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00624CFD:
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00624CFD: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x00624D01: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624D0F; /* 0x00624D05: jb 0x624d0f */
L_00624D07:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x00624D07: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x00624D0A: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624D0C: add esp, 4 */
    _flag_k = FK_ADD;
L_00624D0F:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x00624D0F: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00624D16: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x00624D1D: mov byte ptr [ebp - 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x00624D21: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00624D25: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624D33; /* 0x00624D29: jb 0x624d33 */
L_00624D2B:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00624D2B: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x00624D2E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624D30: add esp, 4 */
    _flag_k = FK_ADD;
L_00624D33:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00624D33: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00624D3A: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00624D41: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00624D45: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0xBC)), 0x10u */ /* 0x00624D4C: cmp dword ptr [ebp - 0xbc], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624D60; /* 0x00624D53: jb 0x624d60 */
L_00624D55:
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x00624D55: push dword ptr [ebp - 0xd0] */
    RECOMP_ICALL(edi); /* 0x00624D5B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624D5D: add esp, 4 */
    _flag_k = FK_ADD;
L_00624D60:
    esi = MEM32(ebp + (-0x108)); /* 0x00624D60: mov esi, dword ptr [ebp - 0x108] */
    eax = 0x66666667u; /* 0x00624D66: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00624D6B: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xBC)) = 0xFu; /* 0x00624D6C: mov dword ptr [ebp - 0xbc], 0xf */
    MEM32(ebp + (-0xC0)) = 0; /* 0x00624D76: mov dword ptr [ebp - 0xc0], 0 */
    MEM8(ebp + (-0xD0)) = (uint8_t)(0); /* 0x00624D80: mov byte ptr [ebp - 0xd0], 0 */
    ecx = MEM32(esi + 0x18); /* 0x00624D87: mov ecx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x14); /* 0x00624D8A: sub ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00624D8D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00624D8F: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00624D92: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00624D94: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00624D94: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00624D97: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x00624D99: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00624850; /* 0x00624D9B: jb 0x624850 */
L_00624DA1:
    eax = MEM32(esi + 0x34); /* 0x00624DA1: mov eax, dword ptr [esi + 0x34] */
    /* test eax, eax */ /* 0x00624DA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006246A9; /* 0x00624DA6: je 0x6246a9 */
L_00624DAC:
    eax = MEM32(eax + 0x14); /* 0x00624DAC: mov eax, dword ptr [eax + 0x14] */
    MEM32(ebp + (-0x118)) = eax; /* 0x00624DAF: mov dword ptr [ebp - 0x118], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00624DB5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624FEE; /* 0x00624DB8: je 0x624fee */
L_00624DBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00624DBE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x104)) = ecx; /* 0x00624DC0: mov dword ptr [ebp - 0x104], ecx */
    /* test eax, eax */ /* 0x00624DC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00624FEE; /* 0x00624DC8: je 0x624fee */
L_00624DCE:
    edi = edi; /* 0x00624DCE: mov edi, edi */
L_00624DD0:
    eax = MEM32(ebp + (-0x120)); /* 0x00624DD0: mov eax, dword ptr [ebp - 0x120] */
    eax = MEM32(eax + 0x18); /* 0x00624DD6: mov eax, dword ptr [eax + 0x18] */
    /* cmp MEM32(eax + 0xE0), 0 */ /* 0x00624DD9: cmp dword ptr [eax + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax + 0xB0; /* 0x00624DE0: lea ebx, [eax + 0xb0] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00624DEE; /* 0x00624DE6: jne 0x624dee */
L_00624DE8:
    ebx = eax + 0xC8; /* 0x00624DE8: lea ebx, [eax + 0xc8] */
L_00624DEE:
    edx = ecx; /* 0x00624DEE: mov edx, ecx */
    ecx = ebp + (-0xB8); /* 0x00624DF0: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_0047ADC0); /* 0x00624DF6: call 0x47adc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00624DFB: mov esi, eax */
    MEM32(ebp + (-0x4)) = 0xFu; /* 0x00624DFD: mov dword ptr [ebp - 4], 0xf */
    edx = ebx; /* 0x00624E04: mov edx, ebx */
    PUSH32(esp, 0x007E55E0u); /* 0x00624E06: push 0x7e55e0 */
    ecx = ebp + (-0xA0); /* 0x00624E0B: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_0041A0F0); /* 0x00624E11: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624E16: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x00624E19: mov byte ptr [ebp - 4], 0x10 */
    edx = eax; /* 0x00624E1D: mov edx, eax */
    PUSH32(esp, esi); /* 0x00624E1F: push esi */
    ecx = ebp + (-0x58); /* 0x00624E20: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_00419B80); /* 0x00624E23: call 0x419b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624E28: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x00624E2B: mov ebx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x00624E2D: mov byte ptr [ebp - 4], 0x11 */
    eax = MEM32(ebp + (-0x104)); /* 0x00624E31: mov eax, dword ptr [ebp - 0x104] */
    ecx = MEM32(ebp + (-0x108)); /* 0x00624E37: mov ecx, dword ptr [ebp - 0x108] */
    MEM32(ebp + (-0x114)) = eax; /* 0x00624E3D: mov dword ptr [ebp - 0x114], eax */
    eax = ebp + (-0x114); /* 0x00624E43: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x00624E49: push eax */
    MEM16(ebp + (-0x110)) = (uint16_t)(3); /* 0x00624E4A: mov word ptr [ebp - 0x110], 3 */
    ecx = ecx + 0x1CC; /* 0x00624E53: lea ecx, [ecx + 0x1cc] */
    RECOMP_CALL(sub_00626240); /* 0x00624E59: call 0x626240 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00624E5E: mov esi, eax */
    eax = MEM32(ebp + (-0x108)); /* 0x00624E60: mov eax, dword ptr [ebp - 0x108] */
    /* cmp esi, MEM32(eax + 0x1CC) */ /* 0x00624E66: cmp esi, dword ptr [eax + 0x1cc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x1CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = eax + 0x1CC; /* 0x00624E6C: lea ecx, [eax + 0x1cc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624E9C; /* 0x00624E72: je 0x624e9c */
L_00624E74:
    SET_LO8(eax, MEM8(esi + 0x14)); /* 0x00624E74: mov al, byte ptr [esi + 0x14] */
    /* cmp LO8(eax), 3 */ /* 0x00624E77: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624E80; /* 0x00624E79: je 0x624e80 */
L_00624E7B:
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x00624E7B: seta al */
    goto L_00624E98; /* 0x00624E7E: jmp 0x624e98 */
L_00624E80:
    SET_LO8(eax, MEM8(esi + 0x15)); /* 0x00624E80: mov al, byte ptr [esi + 0x15] */
    /* test LO8(eax), LO8(eax) */ /* 0x00624E83: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00624E95; /* 0x00624E85: jne 0x624e95 */
L_00624E87:
    eax = MEM32(ebp + (-0x104)); /* 0x00624E87: mov eax, dword ptr [ebp - 0x104] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x00624E8D: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x00624E90: setl al */
    goto L_00624E98; /* 0x00624E93: jmp 0x624e98 */
L_00624E95:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) ? 1 : 0); /* 0x00624E95: setne al */
L_00624E98:
    /* test LO8(eax), LO8(eax) */ /* 0x00624E98: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00624EDA; /* 0x00624E9A: je 0x624eda */
L_00624E9C:
    eax = ebp + (-0x114); /* 0x00624E9C: lea eax, [ebp - 0x114] */
    MEM32(ebp + (-0x124)) = eax; /* 0x00624EA2: mov dword ptr [ebp - 0x124], eax */
    eax = ebp + (-0x124); /* 0x00624EA8: lea eax, [ebp - 0x124] */
    PUSH32(esp, ecx); /* 0x00624EAE: push ecx */
    PUSH32(esp, eax); /* 0x00624EAF: push eax */
    PUSH32(esp, ecx); /* 0x00624EB0: push ecx */
    RECOMP_CALL(sub_00627480); /* 0x00624EB1: call 0x627480 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x108)); /* 0x00624EB6: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x00624EBC: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00624EBD: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00624EC0: push eax */
    PUSH32(esp, esi); /* 0x00624EC1: push esi */
    eax = ebp + (-0x11C); /* 0x00624EC2: lea eax, [ebp - 0x11c] */
    PUSH32(esp, eax); /* 0x00624EC8: push eax */
    ecx = ecx + 0x1CC; /* 0x00624EC9: lea ecx, [ecx + 0x1cc] */
    RECOMP_CALL(sub_00627550); /* 0x00624ECF: call 0x627550 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x11C)); /* 0x00624ED4: mov esi, dword ptr [ebp - 0x11c] */
L_00624EDA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x00624EDA: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x00624EDD: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00624F48; /* 0x00624EDF: je 0x624f48 */
L_00624EE1:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00624EE1: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624EEE; /* 0x00624EE5: jb 0x624eee */
L_00624EE7:
    PUSH32(esp, MEM32(esi)); /* 0x00624EE7: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x00624EE9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624EEB: add esp, 4 */
    _flag_k = FK_ADD;
L_00624EEE:
    MEM32(esi + 0x14) = 0xFu; /* 0x00624EEE: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00624EF5: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00624EFC: mov byte ptr [esi], 0 */
    /* cmp MEM32(ebx + 0x14), 0x10u */ /* 0x00624EFF: cmp dword ptr [ebx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00624F19; /* 0x00624F03: jae 0x624f19 */
L_00624F05:
    eax = MEM32(ebx + 0x10); /* 0x00624F05: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00624F08: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00624F2B; /* 0x00624F09: je 0x624f2b */
L_00624F0B:
    PUSH32(esp, eax); /* 0x00624F0B: push eax */
    PUSH32(esp, ebx); /* 0x00624F0C: push ebx */
    PUSH32(esp, esi); /* 0x00624F0D: push esi */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00624F0E: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00624F14: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00624F2B; /* 0x00624F17: jmp 0x624f2b */
L_00624F19:
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x00624F19: mov byte ptr [ebp - 4], 0x12 */
    eax = MEM32(ebx); /* 0x00624F1D: mov eax, dword ptr [ebx] */
    MEM32(esi) = eax; /* 0x00624F1F: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x00624F21: mov byte ptr [ebp - 4], 0x11 */
    MEM32(ebx) = 0; /* 0x00624F25: mov dword ptr [ebx], 0 */
L_00624F2B:
    eax = MEM32(ebx + 0x10); /* 0x00624F2B: mov eax, dword ptr [ebx + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x00624F2E: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebx + 0x14); /* 0x00624F31: mov eax, dword ptr [ebx + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x00624F34: mov dword ptr [esi + 0x14], eax */
    MEM32(ebx + 0x14) = 0xFu; /* 0x00624F37: mov dword ptr [ebx + 0x14], 0xf */
    MEM32(ebx + 0x10) = 0; /* 0x00624F3E: mov dword ptr [ebx + 0x10], 0 */
    MEM8(ebx) = (uint8_t)(0); /* 0x00624F45: mov byte ptr [ebx], 0 */
L_00624F48:
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x00624F48: mov byte ptr [ebp - 4], 0x10 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x00624F4C: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624F5A; /* 0x00624F50: jb 0x624f5a */
L_00624F52:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00624F52: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x00624F55: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624F57: add esp, 4 */
    _flag_k = FK_ADD;
L_00624F5A:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x00624F5A: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x00624F61: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x00624F68: mov byte ptr [ebp - 0x58], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x00624F6C: mov byte ptr [ebp - 4], 0xf */
    /* cmp MEM32(ebp + (-0x8C)), 0x10u */ /* 0x00624F70: cmp dword ptr [ebp - 0x8c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624F84; /* 0x00624F77: jb 0x624f84 */
L_00624F79:
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x00624F79: push dword ptr [ebp - 0xa0] */
    RECOMP_ICALL(edi); /* 0x00624F7F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624F81: add esp, 4 */
    _flag_k = FK_ADD;
L_00624F84:
    MEM32(ebp + (-0x8C)) = 0xFu; /* 0x00624F84: mov dword ptr [ebp - 0x8c], 0xf */
    MEM32(ebp + (-0x90)) = 0; /* 0x00624F8E: mov dword ptr [ebp - 0x90], 0 */
    MEM8(ebp + (-0xA0)) = (uint8_t)(0); /* 0x00624F98: mov byte ptr [ebp - 0xa0], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00624F9F: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0xA4)), 0x10u */ /* 0x00624FA6: cmp dword ptr [ebp - 0xa4], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA4))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00624FBA; /* 0x00624FAD: jb 0x624fba */
L_00624FAF:
    PUSH32(esp, MEM32(ebp + (-0xB8))); /* 0x00624FAF: push dword ptr [ebp - 0xb8] */
    RECOMP_ICALL(edi); /* 0x00624FB5: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00624FB7: add esp, 4 */
    _flag_k = FK_ADD;
L_00624FBA:
    ecx = MEM32(ebp + (-0x104)); /* 0x00624FBA: mov ecx, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00624FC0: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xA4)) = 0xFu; /* 0x00624FC1: mov dword ptr [ebp - 0xa4], 0xf */
    MEM32(ebp + (-0xA8)) = 0; /* 0x00624FCB: mov dword ptr [ebp - 0xa8], 0 */
    MEM8(ebp + (-0xB8)) = (uint8_t)(0); /* 0x00624FD5: mov byte ptr [ebp - 0xb8], 0 */
    MEM32(ebp + (-0x104)) = ecx; /* 0x00624FDC: mov dword ptr [ebp - 0x104], ecx */
    /* cmp ecx, MEM32(ebp + (-0x118)) */ /* 0x00624FE2: cmp ecx, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x118)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00624DD0; /* 0x00624FE8: jb 0x624dd0 */
L_00624FEE:
    ecx = MEM32(ebp + (-0xC)); /* 0x00624FEE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00624FF1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00624FF8: pop ecx */
    edi = POP32_VAL(esp); /* 0x00624FF9: pop edi */
    esi = POP32_VAL(esp); /* 0x00624FFA: pop esi */
    ebx = POP32_VAL(esp); /* 0x00624FFB: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00624FFC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00624FFF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00625001: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00625006: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00625008: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00625009: ret  */
    RECOMP_REGS_OUT();
}

void sub_00625010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625010u);

L_00625010:
    PUSH32(esp, ebp); /* 0x00625010: push ebp */
    ebp = esp; /* 0x00625011: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00625013: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00625016: push esi */
    PUSH32(esp, edi); /* 0x00625017: push edi */
    edi = ecx; /* 0x00625018: mov edi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0062501A: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x0062501D: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062502C; /* 0x00625020: jne 0x62502c */
L_00625022:
    eax = MEM32(edi); /* 0x00625022: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x00625024: pop edi */
    esi = POP32_VAL(esp); /* 0x00625025: pop esi */
    esp = ebp; /* 0x00625026: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00625028: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00625029: ret 8 */
L_0062502C:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x0062502C: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062503F; /* 0x00625030: jne 0x62503f */
L_00625032:
    RECOMP_CALL(sub_006F0130); /* 0x00625032: call 0x6f0130 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00625037: pop edi */
    esi = POP32_VAL(esp); /* 0x00625038: pop esi */
    esp = ebp; /* 0x00625039: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062503B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0062503C: ret 8 */
L_0062503F:
    eax = ebp + 0x8; /* 0x0062503F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00625042: push eax */
    eax = ebp + (-0x4); /* 0x00625043: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x00625046: push eax */
    ecx = edi + 0x1CC; /* 0x00625047: lea ecx, [edi + 0x1cc] */
    RECOMP_CALL(sub_00625700); /* 0x0062504D: call 0x625700 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x00625052: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(edi + 0x1CC) */ /* 0x00625055: cmp eax, dword ptr [edi + 0x1cc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625022; /* 0x0062505B: je 0x625022 */
L_0062505D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x0062505D: add eax, 0x18 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x00625060: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00625068; /* 0x00625064: jb 0x625068 */
L_00625066:
    eax = MEM32(eax); /* 0x00625066: mov eax, dword ptr [eax] */
L_00625068:
    edi = POP32_VAL(esp); /* 0x00625068: pop edi */
    esi = POP32_VAL(esp); /* 0x00625069: pop esi */
    esp = ebp; /* 0x0062506A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062506C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0062506D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00625070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625070u);

L_00625070:
    PUSH32(esp, ebp); /* 0x00625070: push ebp */
    ebp = esp; /* 0x00625071: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00625073: push -1 */
    PUSH32(esp, 0x007B79B8u); /* 0x00625075: push 0x7b79b8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062507A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00625080: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x00625081: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00625084: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00625089: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0062508B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0062508E: push esi */
    PUSH32(esp, eax); /* 0x0062508F: push eax */
    eax = ebp + (-0xC); /* 0x00625090: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00625093: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x00625099: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4C)) = 0x007F90B4u; /* 0x0062509C: mov dword ptr [ebp - 0x4c], 0x7f90b4 */
    MEM32(ebp + (-0x48)) = 0; /* 0x006250A3: mov dword ptr [ebp - 0x48], 0 */
    MEM32(esi + 0x4) = 0x007F9090u; /* 0x006250AA: mov dword ptr [esi + 4], 0x7f9090 */
    MEM32(esi + 0x8) = 0x14u; /* 0x006250B1: mov dword ptr [esi + 8], 0x14 */
    RECOMP_CALL(sub_0061ED00); /* 0x006250B8: call 0x61ed00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x44)) = eax; /* 0x006250BD: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x40)) = 0x007F90C0u; /* 0x006250C0: mov dword ptr [ebp - 0x40], 0x7f90c0 */
    MEM32(ebp + (-0x3C)) = 4; /* 0x006250C7: mov dword ptr [ebp - 0x3c], 4 */
    RECOMP_CALL(sub_0061ED00); /* 0x006250CE: call 0x61ed00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x006250D3: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x34)) = 0x007F90CCu; /* 0x006250D6: mov dword ptr [ebp - 0x34], 0x7f90cc */
    MEM32(ebp + (-0x30)) = 8; /* 0x006250DD: mov dword ptr [ebp - 0x30], 8 */
    RECOMP_CALL(sub_0061ED00); /* 0x006250E4: call 0x61ed00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x006250E9: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x28)) = 0x007F90D8u; /* 0x006250EC: mov dword ptr [ebp - 0x28], 0x7f90d8 */
    MEM32(ebp + (-0x24)) = 0xCu; /* 0x006250F3: mov dword ptr [ebp - 0x24], 0xc */
    RECOMP_CALL(sub_0061ED00); /* 0x006250FA: call 0x61ed00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x006250FF: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = 0x007F90E4u; /* 0x00625102: mov dword ptr [ebp - 0x1c], 0x7f90e4 */
    MEM32(ebp + (-0x18)) = 0x10u; /* 0x00625109: mov dword ptr [ebp - 0x18], 0x10 */
    RECOMP_CALL(sub_0061E710); /* 0x00625110: call 0x61e710 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x00625115: push dword ptr [ebp - 0x5c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00625118: mov dword ptr [ebp - 0x14], eax */
    ecx = ebp + (-0x58); /* 0x0062511B: lea ecx, [ebp - 0x58] */
    eax = ebp + (-0x10); /* 0x0062511E: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x58)) = 0; /* 0x00625121: mov dword ptr [ebp - 0x58], 0 */
    PUSH32(esp, eax); /* 0x00625128: push eax */
    eax = ebp + (-0x4C); /* 0x00625129: lea eax, [ebp - 0x4c] */
    MEM32(ebp + (-0x54)) = 0; /* 0x0062512C: mov dword ptr [ebp - 0x54], 0 */
    PUSH32(esp, eax); /* 0x00625133: push eax */
    PUSH32(esp, 0); /* 0x00625134: push 0 */
    MEM32(ebp + (-0x50)) = 0; /* 0x00625136: mov dword ptr [ebp - 0x50], 0 */
    RECOMP_CALL(sub_006271D0); /* 0x0062513D: call 0x6271d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00625142: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x58); /* 0x00625149: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x0062514C: push eax */
    ecx = esi + 0xC; /* 0x0062514D: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_00625400); /* 0x00625150: call 0x625400 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00625155: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x58)); /* 0x0062515C: mov eax, dword ptr [ebp - 0x58] */
    /* test eax, eax */ /* 0x0062515F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00625182; /* 0x00625161: je 0x625182 */
L_00625163:
    PUSH32(esp, eax); /* 0x00625163: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00625164: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062516A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = 0; /* 0x0062516D: mov dword ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x54)) = 0; /* 0x00625174: mov dword ptr [ebp - 0x54], 0 */
    MEM32(ebp + (-0x50)) = 0; /* 0x0062517B: mov dword ptr [ebp - 0x50], 0 */
L_00625182:
    ecx = MEM32(ebp + (-0xC)); /* 0x00625182: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00625185: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062518C: pop ecx */
    esi = POP32_VAL(esp); /* 0x0062518D: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0062518E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00625191: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00625193: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00625198: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062519A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062519B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006251A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006251A0u);

L_006251A0:
    PUSH32(esp, ebp); /* 0x006251A0: push ebp */
    ebp = esp; /* 0x006251A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006251A3: push -1 */
    PUSH32(esp, 0x007B7A67u); /* 0x006251A5: push 0x7b7a67 */
    eax = MEM32(FS_BASE + (0)); /* 0x006251AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006251B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x98u; /* 0x006251B1: sub esp, 0x98 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006251B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006251BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006251BE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x006251C1: push esi */
    PUSH32(esp, eax); /* 0x006251C2: push eax */
    eax = ebp + (-0xC); /* 0x006251C3: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006251C6: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x006251CC: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(0x928208); /* 0x006251CF: mov eax, dword ptr [0x928208] */
    MEM32(ebp + (-0x94)) = 0x007F911Cu; /* 0x006251D4: mov dword ptr [ebp - 0x94], 0x7f911c */
    MEM32(ebp + (-0x90)) = 8; /* 0x006251DE: mov dword ptr [ebp - 0x90], 8 */
    MEM32(esi + 0x4) = 0x007F90ECu; /* 0x006251E8: mov dword ptr [esi + 4], 0x7f90ec */
    MEM32(esi + 0x8) = 0x1D4u; /* 0x006251EF: mov dword ptr [esi + 8], 0x1d4 */
    /* test LO8(eax), 1 */ /* 0x006251F6: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00625223; /* 0x006251F8: jne 0x625223 */
L_006251FA:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006251FA: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928208) = eax; /* 0x006251FD: mov dword ptr [0x928208], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00625202: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, ecx); /* 0x00625209: push ecx */
    RECOMP_CALL(sub_00626EB0); /* 0x0062520A: call 0x626eb0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CAED0u); /* 0x0062520F: push 0x7caed0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00625214: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00625219: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062521C: mov dword ptr [ebp - 4], 0xffffffff */
L_00625223:
    eax = MEM32(0x9281CC); /* 0x00625223: mov eax, dword ptr [0x9281cc] */
    MEM32(ebp + (-0x8C)) = 0x009281D0u; /* 0x00625228: mov dword ptr [ebp - 0x8c], 0x9281d0 */
    MEM32(ebp + (-0x88)) = 0x007F9014u; /* 0x00625232: mov dword ptr [ebp - 0x88], 0x7f9014 */
    MEM32(ebp + (-0x84)) = 0x14u; /* 0x0062523C: mov dword ptr [ebp - 0x84], 0x14 */
    /* test LO8(eax), 1 */ /* 0x00625246: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00625273; /* 0x00625248: jne 0x625273 */
L_0062524A:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0062524A: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x9281CC) = eax; /* 0x0062524D: mov dword ptr [0x9281cc], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x00625252: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, ecx); /* 0x00625259: push ecx */
    RECOMP_CALL(sub_00626F50); /* 0x0062525A: call 0x626f50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CAE80u); /* 0x0062525F: push 0x7cae80 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00625264: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00625269: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062526C: mov dword ptr [ebp - 4], 0xffffffff */
L_00625273:
    MEM32(ebp + (-0x80)) = 0x009281ECu; /* 0x00625273: mov dword ptr [ebp - 0x80], 0x9281ec */
    MEM32(ebp + (-0x7C)) = 0x007F9024u; /* 0x0062527A: mov dword ptr [ebp - 0x7c], 0x7f9024 */
    MEM32(ebp + (-0x78)) = 0x20u; /* 0x00625281: mov dword ptr [ebp - 0x78], 0x20 */
    RECOMP_CALL(sub_0061ED00); /* 0x00625288: call 0x61ed00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x74)) = eax; /* 0x0062528D: mov dword ptr [ebp - 0x74], eax */
    MEM32(ebp + (-0x70)) = 0x007F9030u; /* 0x00625290: mov dword ptr [ebp - 0x70], 0x7f9030 */
    MEM32(ebp + (-0x6C)) = 0x24u; /* 0x00625297: mov dword ptr [ebp - 0x6c], 0x24 */
    RECOMP_CALL(sub_0061ED00); /* 0x0062529E: call 0x61ed00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x68)) = eax; /* 0x006252A3: mov dword ptr [ebp - 0x68], eax */
    MEM32(ebp + (-0x64)) = 0x007F9044u; /* 0x006252A6: mov dword ptr [ebp - 0x64], 0x7f9044 */
    MEM32(ebp + (-0x60)) = 0x28u; /* 0x006252AD: mov dword ptr [ebp - 0x60], 0x28 */
    RECOMP_CALL(sub_0061ED00); /* 0x006252B4: call 0x61ed00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x5C)) = eax; /* 0x006252B9: mov dword ptr [ebp - 0x5c], eax */
    MEM32(ebp + (-0x58)) = 0x007F9058u; /* 0x006252BC: mov dword ptr [ebp - 0x58], 0x7f9058 */
    MEM32(ebp + (-0x54)) = 0x2Cu; /* 0x006252C3: mov dword ptr [ebp - 0x54], 0x2c */
    RECOMP_CALL(sub_0061E710); /* 0x006252CA: call 0x61e710 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x50)) = eax; /* 0x006252CF: mov dword ptr [ebp - 0x50], eax */
    MEM32(ebp + (-0x4C)) = 0x007F906Cu; /* 0x006252D2: mov dword ptr [ebp - 0x4c], 0x7f906c */
    MEM32(ebp + (-0x48)) = 0x30u; /* 0x006252D9: mov dword ptr [ebp - 0x48], 0x30 */
    RECOMP_CALL(sub_0061E820); /* 0x006252E0: call 0x61e820 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x44)) = eax; /* 0x006252E5: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x40)) = 0x007F9078u; /* 0x006252E8: mov dword ptr [ebp - 0x40], 0x7f9078 */
    MEM32(ebp + (-0x3C)) = 0x44u; /* 0x006252EF: mov dword ptr [ebp - 0x3c], 0x44 */
    RECOMP_CALL(sub_0061EBE0); /* 0x006252F6: call 0x61ebe0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x006252FB: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x34)) = 0x007F9080u; /* 0x006252FE: mov dword ptr [ebp - 0x34], 0x7f9080 */
    MEM32(ebp + (-0x30)) = 4; /* 0x00625305: mov dword ptr [ebp - 0x30], 4 */
    RECOMP_CALL(sub_0061E820); /* 0x0062530C: call 0x61e820 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x00625311: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x28)) = 0x007ED510u; /* 0x00625314: mov dword ptr [ebp - 0x28], 0x7ed510 */
    MEM32(ebp + (-0x24)) = 0x5Cu; /* 0x0062531B: mov dword ptr [ebp - 0x24], 0x5c */
    RECOMP_CALL(sub_0061EBE0); /* 0x00625322: call 0x61ebe0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x00625327: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = 0x007F9138u; /* 0x0062532A: mov dword ptr [ebp - 0x1c], 0x7f9138 */
    MEM32(ebp + (-0x18)) = 0x74u; /* 0x00625331: mov dword ptr [ebp - 0x18], 0x74 */
    RECOMP_CALL(sub_0061E820); /* 0x00625338: call 0x61e820 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x0062533D: push dword ptr [ebp - 0xa4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00625343: mov dword ptr [ebp - 0x14], eax */
    ecx = ebp + (-0xA0); /* 0x00625346: lea ecx, [ebp - 0xa0] */
    eax = ebp + (-0x10); /* 0x0062534C: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0xA0)) = 0; /* 0x0062534F: mov dword ptr [ebp - 0xa0], 0 */
    PUSH32(esp, eax); /* 0x00625359: push eax */
    eax = ebp + (-0x94); /* 0x0062535A: lea eax, [ebp - 0x94] */
    MEM32(ebp + (-0x9C)) = 0; /* 0x00625360: mov dword ptr [ebp - 0x9c], 0 */
    PUSH32(esp, eax); /* 0x0062536A: push eax */
    PUSH32(esp, 0); /* 0x0062536B: push 0 */
    MEM32(ebp + (-0x98)) = 0; /* 0x0062536D: mov dword ptr [ebp - 0x98], 0 */
    RECOMP_CALL(sub_006271D0); /* 0x00625377: call 0x6271d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x0062537C: mov dword ptr [ebp - 4], 2 */
    eax = ebp + (-0xA0); /* 0x00625383: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x00625389: push eax */
    ecx = esi + 0xC; /* 0x0062538A: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_00625400); /* 0x0062538D: call 0x625400 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00625392: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0xA0)); /* 0x00625399: mov eax, dword ptr [ebp - 0xa0] */
    /* test eax, eax */ /* 0x0062539F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006253CB; /* 0x006253A1: je 0x6253cb */
L_006253A3:
    PUSH32(esp, eax); /* 0x006253A3: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006253A4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006253AA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xA0)) = 0; /* 0x006253AD: mov dword ptr [ebp - 0xa0], 0 */
    MEM32(ebp + (-0x9C)) = 0; /* 0x006253B7: mov dword ptr [ebp - 0x9c], 0 */
    MEM32(ebp + (-0x98)) = 0; /* 0x006253C1: mov dword ptr [ebp - 0x98], 0 */
L_006253CB:
    ecx = MEM32(ebp + (-0xC)); /* 0x006253CB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006253CE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006253D5: pop ecx */
    esi = POP32_VAL(esp); /* 0x006253D6: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x006253D7: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006253DA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006253DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006253E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006253E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006253E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006253F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006253F0u);

L_006253F0:
    PUSH32(esp, ebp); /* 0x006253F0: push ebp */
    ebp = esp; /* 0x006253F1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006253F3: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x006253F6: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x006253F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006253F9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625400u);

L_00625400:
    PUSH32(esp, ebp); /* 0x00625400: push ebp */
    ebp = esp; /* 0x00625401: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00625403: push esi */
    PUSH32(esp, edi); /* 0x00625404: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00625405: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x00625408: mov esi, ecx */
    /* cmp esi, edi */ /* 0x0062540A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625456; /* 0x0062540C: je 0x625456 */
L_0062540E:
    eax = MEM32(esi); /* 0x0062540E: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x00625410: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00625432; /* 0x00625412: je 0x625432 */
L_00625414:
    PUSH32(esp, eax); /* 0x00625414: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00625415: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062541B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x0062541E: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x00625424: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x0062542B: mov dword ptr [esi + 8], 0 */
L_00625432:
    eax = MEM32(edi); /* 0x00625432: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x00625434: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x4); /* 0x00625436: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x00625439: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x0062543C: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x0062543F: mov dword ptr [esi + 8], eax */
    MEM32(edi) = 0; /* 0x00625442: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x00625448: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x0062544F: mov dword ptr [edi + 8], 0 */
L_00625456:
    edi = POP32_VAL(esp); /* 0x00625456: pop edi */
    eax = esi; /* 0x00625457: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00625459: pop esi */
    ebp = POP32_VAL(esp); /* 0x0062545A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062545B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625460u);

L_00625460:
    PUSH32(esp, ebp); /* 0x00625460: push ebp */
    ebp = esp; /* 0x00625461: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00625463: push -1 */
    PUSH32(esp, 0x007B7A90u); /* 0x00625465: push 0x7b7a90 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062546A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00625470: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00625471: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00625474: push ebx */
    PUSH32(esp, esi); /* 0x00625475: push esi */
    PUSH32(esp, edi); /* 0x00625476: push edi */
    eax = MEM32(0x855000); /* 0x00625477: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062547C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062547E: push eax */
    eax = ebp + (-0xC); /* 0x0062547F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00625482: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00625488: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x0062548B: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x0062548D: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(edi + 0x4); /* 0x00625490: mov eax, dword ptr [edi + 4] */
    ecx = eax; /* 0x00625493: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x00625495: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x00625497: sar ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 3u);
    esi = MEM32(ebp + 0x8); /* 0x0062549A: mov esi, dword ptr [ebp + 8] */
    /* cmp ecx, esi */ /* 0x0062549D: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006254BD; /* 0x0062549F: jbe 0x6254bd */
L_006254A1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x006254A1: sub esi, ecx */
    _flag_k = FK_CMP;
    eax = eax + esi * 8; /* 0x006254A3: lea eax, [eax + esi*8] */
L_006254A6:
    MEM32(edi + 0x4) = eax; /* 0x006254A6: mov dword ptr [edi + 4], eax */
L_006254A9:
    ecx = MEM32(ebp + (-0xC)); /* 0x006254A9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006254AC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006254B3: pop ecx */
    edi = POP32_VAL(esp); /* 0x006254B4: pop edi */
    esi = POP32_VAL(esp); /* 0x006254B5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006254B6: pop ebx */
    esp = ebp; /* 0x006254B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006254B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006254BA: ret 4 */
L_006254BD:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_006254A9; /* 0x006254BD: jae 0x6254a9 */
L_006254BF:
    eax = esi; /* 0x006254BF: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006254C1: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006254C3: push eax */
    ecx = edi; /* 0x006254C4: mov ecx, edi */
    RECOMP_CALL(sub_00625A70); /* 0x006254C6: call 0x625a70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006254CB: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(edi + 0x4); /* 0x006254D2: mov ecx, dword ptr [edi + 4] */
    eax = ecx; /* 0x006254D5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x006254D7: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006254D9: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    edx = esi; /* 0x006254DC: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x006254DE: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006254E0: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006254E3: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_00627380); /* 0x006254E6: call 0x627380 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006254EB: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006254EE: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi + 0x4); /* 0x006254F5: mov ecx, dword ptr [edi + 4] */
    eax = ecx; /* 0x006254F8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x006254FA: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006254FC: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x006254FF: sub esi, eax */
    _flag_k = FK_CMP;
    eax = ecx + esi * 8; /* 0x00625501: lea eax, [ecx + esi*8] */
    RECOMP_BACKEDGE();
    goto L_006254A6; /* 0x00625504: jmp 0x6254a6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00625506(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625506u);

L_00625506:
    ecx = MEM32(ebp + (-0x14)); /* 0x00625506: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x00625509: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x0062550E: push 0 */
    PUSH32(esp, 0); /* 0x00625510: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00625512: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00625517u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00625520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625520u);

L_00625520:
    PUSH32(esp, ebp); /* 0x00625520: push ebp */
    ebp = esp; /* 0x00625521: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00625523: push -1 */
    PUSH32(esp, 0x007B7AB0u); /* 0x00625525: push 0x7b7ab0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062552A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00625530: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00625531: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00625534: push ebx */
    PUSH32(esp, esi); /* 0x00625535: push esi */
    PUSH32(esp, edi); /* 0x00625536: push edi */
    eax = MEM32(0x855000); /* 0x00625537: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062553C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062553E: push eax */
    eax = ebp + (-0xC); /* 0x0062553F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00625542: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00625548: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x0062554B: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x0062554D: mov dword ptr [ebp - 0x14], ebx */
    esi = MEM32(ebx + 0x4); /* 0x00625550: mov esi, dword ptr [ebx + 4] */
    edx = esi; /* 0x00625553: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx); /* 0x00625555: sub edx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00625557: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x0062555C: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x0062555E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ecx = edx; /* 0x00625561: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x00625563: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x00625563: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00625566: add ecx, edx */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x8); /* 0x00625568: mov edi, dword ptr [ebp + 8] */
    /* cmp ecx, edi */ /* 0x0062556B: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062558E; /* 0x0062556D: jbe 0x62558e */
L_0062556F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x0062556F: sub edi, ecx */
    _flag_k = FK_CMP;
L_00625571:
    eax = edi + edi * 4; /* 0x00625571: lea eax, [edi + edi*4] */
    eax = esi + eax * 4; /* 0x00625574: lea eax, [esi + eax*4] */
    MEM32(ebx + 0x4) = eax; /* 0x00625577: mov dword ptr [ebx + 4], eax */
L_0062557A:
    ecx = MEM32(ebp + (-0xC)); /* 0x0062557A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062557D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00625584: pop ecx */
    edi = POP32_VAL(esp); /* 0x00625585: pop edi */
    esi = POP32_VAL(esp); /* 0x00625586: pop esi */
    ebx = POP32_VAL(esp); /* 0x00625587: pop ebx */
    esp = ebp; /* 0x00625588: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062558A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062558B: ret 4 */
L_0062558E:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_0062557A; /* 0x0062558E: jae 0x62557a */
L_00625590:
    eax = edi; /* 0x00625590: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00625592: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x00625594: push eax */
    ecx = ebx; /* 0x00625595: mov ecx, ebx */
    RECOMP_CALL(sub_00625AF0); /* 0x00625597: call 0x625af0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062559C: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(ebx + 0x4); /* 0x006255A3: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x006255A6: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x006255A8: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006255AD: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006255AF: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x006255B2: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006255B4: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006255B4: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006255B7: add eax, edx */
    _flag_k = FK_ADD;
    edx = edi; /* 0x006255B9: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x006255BB: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006255BD: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006255C0: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x4); /* 0x006255C3: mov ecx, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_00627400); /* 0x006255C6: call 0x627400 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006255CB: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006255CE: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(ebx + 0x4); /* 0x006255D5: mov esi, dword ptr [ebx + 4] */
    ecx = esi; /* 0x006255D8: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x006255DA: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x006255DC: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006255E1: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006255E3: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x006255E6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006255E8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006255E8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006255EB: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006255ED: sub edi, eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_00625571; /* 0x006255EF: jmp 0x625571 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006255F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006255F1u);

L_006255F1:
    ecx = MEM32(ebp + (-0x14)); /* 0x006255F1: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x006255F4: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006255F9: push 0 */
    PUSH32(esp, 0); /* 0x006255FB: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006255FD: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00625602u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00625610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625610u);

L_00625610:
    PUSH32(esp, ebp); /* 0x00625610: push ebp */
    ebp = esp; /* 0x00625611: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00625613: push ebx */
    PUSH32(esp, esi); /* 0x00625614: push esi */
    PUSH32(esp, edi); /* 0x00625615: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00625616: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x00625619: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x0062561B: push edi */
    RECOMP_CALL(sub_00626240); /* 0x0062561C: call 0x626240 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00625621: mov esi, eax */
    /* cmp esi, MEM32(ebx) */ /* 0x00625623: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625656; /* 0x00625625: je 0x625656 */
L_00625627:
    SET_LO8(eax, MEM8(edi + 0x4)); /* 0x00625627: mov al, byte ptr [edi + 4] */
    SET_LO8(ecx, MEM8(esi + 0x14)); /* 0x0062562A: mov cl, byte ptr [esi + 0x14] */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0062562D: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625645; /* 0x0062562F: jne 0x625645 */
L_00625631:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x00625631: mov al, byte ptr [edi + 5] */
    SET_LO8(ecx, MEM8(esi + 0x15)); /* 0x00625634: mov cl, byte ptr [esi + 0x15] */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x00625637: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625645; /* 0x00625639: jne 0x625645 */
L_0062563B:
    eax = MEM32(edi); /* 0x0062563B: mov eax, dword ptr [edi] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0062563D: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x00625640: setl al */
    goto L_00625648; /* 0x00625643: jmp 0x625648 */
L_00625645:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) ? 1 : 0); /* 0x00625645: setb al */
L_00625648:
    /* test LO8(eax), LO8(eax) */ /* 0x00625648: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00625656; /* 0x0062564A: jne 0x625656 */
L_0062564C:
    edi = POP32_VAL(esp); /* 0x0062564C: pop edi */
    eax = esi + 0x18; /* 0x0062564D: lea eax, [esi + 0x18] */
    esi = POP32_VAL(esp); /* 0x00625650: pop esi */
    ebx = POP32_VAL(esp); /* 0x00625651: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00625652: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625653: ret 4 */
L_00625656:
    PUSH32(esp, ecx); /* 0x00625656: push ecx */
    eax = ebp + 0x8; /* 0x00625657: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x0062565A: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, eax); /* 0x0062565D: push eax */
    PUSH32(esp, ecx); /* 0x0062565E: push ecx */
    ecx = ebx; /* 0x0062565F: mov ecx, ebx */
    RECOMP_CALL(sub_00627480); /* 0x00625661: call 0x627480 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x00625666: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00625667: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x0062566A: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x0062566C: push eax */
    PUSH32(esp, esi); /* 0x0062566D: push esi */
    eax = ebp + 0x8; /* 0x0062566E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00625671: push eax */
    RECOMP_CALL(sub_00627550); /* 0x00625672: call 0x627550 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00625677: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x0062567A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062567B: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x0062567C: add eax, 0x18 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x0062567F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00625680: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625681: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625690u);

L_00625690:
    PUSH32(esp, ebp); /* 0x00625690: push ebp */
    ebp = esp; /* 0x00625691: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00625693: push -1 */
    PUSH32(esp, 0x00781B88u); /* 0x00625695: push 0x781b88 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062569A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006256A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006256A1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006256A4: push esi */
    eax = MEM32(0x855000); /* 0x006256A5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006256AA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006256AC: push eax */
    eax = ebp + (-0xC); /* 0x006256AD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006256B0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006256B6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006256B8: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x006256BB: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi); /* 0x006256C2: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x006256C4: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x006256C5: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x006256C7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006256CA: push eax */
    RECOMP_CALL(sub_00626180); /* 0x006256CB: call 0x626180 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006256D0: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x006256D7: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006256D9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006256DF: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x006256E2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006256E5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006256EC: pop ecx */
    esi = POP32_VAL(esp); /* 0x006256ED: pop esi */
    esp = ebp; /* 0x006256EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006256F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006256F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_00625700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625700u);

L_00625700:
    PUSH32(esp, ebp); /* 0x00625700: push ebp */
    ebp = esp; /* 0x00625701: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00625703: push esi */
    PUSH32(esp, edi); /* 0x00625704: push edi */
    edi = MEM32(ebp + 0xC); /* 0x00625705: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x00625708: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0062570A: push edi */
    RECOMP_CALL(sub_00626240); /* 0x0062570B: call 0x626240 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x00625710: mov esi, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x00625712: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062573E; /* 0x00625714: je 0x62573e */
L_00625716:
    SET_LO8(ecx, MEM8(edi + 0x4)); /* 0x00625716: mov cl, byte ptr [edi + 4] */
    SET_LO8(edx, MEM8(eax + 0x14)); /* 0x00625719: mov dl, byte ptr [eax + 0x14] */
    /* cmp LO8(ecx), LO8(edx) */ /* 0x0062571C: cmp cl, dl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625734; /* 0x0062571E: jne 0x625734 */
L_00625720:
    SET_LO8(ecx, MEM8(edi + 0x5)); /* 0x00625720: mov cl, byte ptr [edi + 5] */
    SET_LO8(edx, MEM8(eax + 0x15)); /* 0x00625723: mov dl, byte ptr [eax + 0x15] */
    /* cmp LO8(ecx), LO8(edx) */ /* 0x00625726: cmp cl, dl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625734; /* 0x00625728: jne 0x625734 */
L_0062572A:
    ecx = MEM32(edi); /* 0x0062572A: mov ecx, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x0062572C: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x0062572F: setl cl */
    goto L_00625737; /* 0x00625732: jmp 0x625737 */
L_00625734:
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) ? 1 : 0); /* 0x00625734: setb cl */
L_00625737:
    MEM32(ebp + 0xC) = eax; /* 0x00625737: mov dword ptr [ebp + 0xc], eax */
    /* test LO8(ecx), LO8(ecx) */ /* 0x0062573A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00625741; /* 0x0062573C: je 0x625741 */
L_0062573E:
    MEM32(ebp + 0xC) = esi; /* 0x0062573E: mov dword ptr [ebp + 0xc], esi */
L_00625741:
    eax = MEM32(ebp + 0x8); /* 0x00625741: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + 0xC; /* 0x00625744: lea ecx, [ebp + 0xc] */
    ecx = MEM32(ecx); /* 0x00625747: mov ecx, dword ptr [ecx] */
    edi = POP32_VAL(esp); /* 0x00625749: pop edi */
    esi = POP32_VAL(esp); /* 0x0062574A: pop esi */
    MEM32(eax) = ecx; /* 0x0062574B: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x0062574D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0062574E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00625760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625760u);

L_00625760:
    PUSH32(esp, ebp); /* 0x00625760: push ebp */
    ebp = esp; /* 0x00625761: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00625763: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x00625765: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x0062576A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00625770: push eax */
    PUSH32(esp, esi); /* 0x00625771: push esi */
    PUSH32(esp, edi); /* 0x00625772: push edi */
    eax = MEM32(0x855000); /* 0x00625773: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00625778: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062577A: push eax */
    eax = ebp + (-0xC); /* 0x0062577B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062577E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00625784: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x00625786: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x00625789: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x0062578C: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006257D2; /* 0x0062578E: jae 0x6257d2 */
L_00625790:
    eax = MEM32(esi); /* 0x00625790: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x00625792: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006257D2; /* 0x00625794: ja 0x6257d2 */
L_00625796:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x00625796: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x8C08C08Du; /* 0x00625798: mov eax, 0x8c08c08d */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x0062579D: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x0062579F: add edx, edi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x006257A1: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    edi = edx; /* 0x006257A4: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x006257A6: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x006257A6: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x006257A9: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x006257AB: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006257B9; /* 0x006257AE: jne 0x6257b9 */
L_006257B0:
    PUSH32(esp, 1); /* 0x006257B0: push 1 */
    ecx = esi; /* 0x006257B2: mov ecx, esi */
    RECOMP_CALL(sub_00625BE0); /* 0x006257B4: call 0x625be0 */
    RECOMP_FLAGS_IN();
L_006257B9:
    ecx = MEM32(esi + 0x4); /* 0x006257B9: mov ecx, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)edi * (int32_t)0x1D4u); /* 0x006257BC: imul eax, edi, 0x1d4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x006257C2: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x006257C4: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x006257CB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006257F4; /* 0x006257CD: je 0x6257f4 */
L_006257CF:
    PUSH32(esp, eax); /* 0x006257CF: push eax */
    goto L_006257EF; /* 0x006257D0: jmp 0x6257ef */
L_006257D2:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x006257D2: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006257E0; /* 0x006257D5: jne 0x6257e0 */
L_006257D7:
    PUSH32(esp, 1); /* 0x006257D7: push 1 */
    ecx = esi; /* 0x006257D9: mov ecx, esi */
    RECOMP_CALL(sub_00625BE0); /* 0x006257DB: call 0x625be0 */
    RECOMP_FLAGS_IN();
L_006257E0:
    ecx = MEM32(esi + 0x4); /* 0x006257E0: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x006257E3: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x006257EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006257F4; /* 0x006257EC: je 0x6257f4 */
L_006257EE:
    PUSH32(esp, edi); /* 0x006257EE: push edi */
L_006257EF:
    RECOMP_CALL(sub_00628580); /* 0x006257EF: call 0x628580 */
    RECOMP_FLAGS_IN();
L_006257F4:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006257F4: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x1D4u; /* 0x006257FB: add dword ptr [esi + 4], 0x1d4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00625802: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00625805: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062580C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062580D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062580E: pop esi */
    esp = ebp; /* 0x0062580F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00625811: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625812: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625820u);

L_00625820:
    goto L_00625C50; /* 0x00625820: jmp 0x625c50 */
L_00625C50:
    PUSH32(esp, esi); /* 0x00625C50: push esi */
    PUSH32(esp, edi); /* 0x00625C51: push edi */
    edi = ecx; /* 0x00625C52: mov edi, ecx */
    esi = MEM32(edi); /* 0x00625C54: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x00625C56: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00625C93; /* 0x00625C58: je 0x625c93 */
L_00625C5A:
    PUSH32(esp, ebx); /* 0x00625C5A: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x00625C5B: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x00625C5E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625C73; /* 0x00625C60: je 0x625c73 */
L_00625C62:
    ecx = esi; /* 0x00625C62: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x00625C64: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x00625C69: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x00625C6F: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625C62; /* 0x00625C71: jne 0x625c62 */
L_00625C73:
    PUSH32(esp, MEM32(edi)); /* 0x00625C73: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00625C75: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00625C7B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x00625C7E: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x00625C84: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x00625C8B: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x00625C92: pop ebx */
L_00625C93:
    edi = POP32_VAL(esp); /* 0x00625C93: pop edi */
    esi = POP32_VAL(esp); /* 0x00625C94: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00625C95: ret  */
    RECOMP_REGS_OUT();
}

void sub_00625830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625830u);

L_00625830:
    PUSH32(esp, esi); /* 0x00625830: push esi */
    esi = MEM32(ecx + 0x4); /* 0x00625831: mov esi, dword ptr [ecx + 4] */
    eax = 0x8C08C08Du; /* 0x00625834: mov eax, 0x8c08c08d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x00625839: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x0062583B: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x0062583D: add edx, esi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0062583F: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00625842: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00625844: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00625844: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00625847: add eax, edx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x00625849: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062584A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00625850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625850u);

L_00625850:
    PUSH32(esp, ebp); /* 0x00625850: push ebp */
    ebp = esp; /* 0x00625851: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00625853: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00625856: push esi */
    PUSH32(esp, edi); /* 0x00625857: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00625858: mov edi, dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x0062585B: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x0062585E: push edi */
    PUSH32(esp, eax); /* 0x0062585F: push eax */
    esi = ecx; /* 0x00625860: mov esi, ecx */
    RECOMP_CALL(sub_00625D60); /* 0x00625862: call 0x625d60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00625867: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi) */ /* 0x0062586A: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625884; /* 0x0062586C: jne 0x625884 */
L_0062586E:
    PUSH32(esp, ecx); /* 0x0062586E: push ecx */
    eax = ebp + 0x8; /* 0x0062586F: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x00625872: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, eax); /* 0x00625875: push eax */
    PUSH32(esp, ecx); /* 0x00625876: push ecx */
    eax = ebp + (-0xC); /* 0x00625877: lea eax, [ebp - 0xc] */
    ecx = esi; /* 0x0062587A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0062587C: push eax */
    RECOMP_CALL(sub_00626C90); /* 0x0062587D: call 0x626c90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x00625882: mov eax, dword ptr [eax] */
L_00625884:
    edi = POP32_VAL(esp); /* 0x00625884: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x00625885: add eax, 9 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x00625888: pop esi */
    esp = ebp; /* 0x00625889: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062588B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062588C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625890u);

L_00625890:
    PUSH32(esp, ebp); /* 0x00625890: push ebp */
    ebp = esp; /* 0x00625891: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00625893: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x00625896: push edi */
    edi = ecx; /* 0x00625897: mov edi, ecx */
    edx = MEM32(edi); /* 0x00625899: mov edx, dword ptr [edi] */
    eax = MEM32(edx); /* 0x0062589B: mov eax, dword ptr [edx] */
    MEM32(edx) = edx; /* 0x0062589D: mov dword ptr [edx], edx */
    edx = MEM32(edi); /* 0x0062589F: mov edx, dword ptr [edi] */
    MEM32(edx + 0x4) = edx; /* 0x006258A1: mov dword ptr [edx + 4], edx */
    MEM32(edi + 0x4) = 0; /* 0x006258A4: mov dword ptr [edi + 4], 0 */
    /* cmp eax, MEM32(edi) */ /* 0x006258AB: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006258C7; /* 0x006258AD: je 0x6258c7 */
L_006258AF:
    PUSH32(esp, ebx); /* 0x006258AF: push ebx */
    ebx = MEM32(0x7CC694); /* 0x006258B0: mov ebx, dword ptr [0x7cc694] */
    PUSH32(esp, esi); /* 0x006258B6: push esi */
L_006258B7:
    esi = MEM32(eax); /* 0x006258B7: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006258B9: push eax */
    RECOMP_ICALL(ebx); /* 0x006258BA: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006258BC: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006258BF: mov eax, esi */
    /* cmp esi, MEM32(edi) */ /* 0x006258C1: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006258B7; /* 0x006258C3: jne 0x6258b7 */
L_006258C5:
    esi = POP32_VAL(esp); /* 0x006258C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006258C6: pop ebx */
L_006258C7:
    eax = MEM32(edi); /* 0x006258C7: mov eax, dword ptr [edi] */
    edx = ebp + (-0x4); /* 0x006258C9: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x006258CC: push edx */
    ecx = edi + 0x8; /* 0x006258CD: lea ecx, [edi + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006258D0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x006258D3: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x10u); /* 0x006258D5: push 0x10 */
    PUSH32(esp, eax); /* 0x006258D7: push eax */
    MEM32(ecx + 0x4) = eax; /* 0x006258D8: mov dword ptr [ecx + 4], eax */
    eax = ebp + (-0x8); /* 0x006258DB: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006258DE: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x006258DF: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x14) = 7; /* 0x006258E4: mov dword ptr [edi + 0x14], 7 */
    MEM32(edi + 0x18) = 8; /* 0x006258EB: mov dword ptr [edi + 0x18], 8 */
    edi = POP32_VAL(esp); /* 0x006258F2: pop edi */
    esp = ebp; /* 0x006258F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006258F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006258F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_00625900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625900u);

L_00625900:
    PUSH32(esp, ebp); /* 0x00625900: push ebp */
    ebp = esp; /* 0x00625901: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00625903: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00625906: push esi */
    PUSH32(esp, edi); /* 0x00625907: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00625908: mov edi, dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x0062590B: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x0062590E: push edi */
    PUSH32(esp, eax); /* 0x0062590F: push eax */
    esi = ecx; /* 0x00625910: mov esi, ecx */
    RECOMP_CALL(sub_00625DE0); /* 0x00625912: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00625917: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi) */ /* 0x0062591A: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625934; /* 0x0062591C: jne 0x625934 */
L_0062591E:
    PUSH32(esp, ecx); /* 0x0062591E: push ecx */
    eax = ebp + 0x8; /* 0x0062591F: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x00625922: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, eax); /* 0x00625925: push eax */
    PUSH32(esp, ecx); /* 0x00625926: push ecx */
    eax = ebp + (-0xC); /* 0x00625927: lea eax, [ebp - 0xc] */
    ecx = esi; /* 0x0062592A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0062592C: push eax */
    RECOMP_CALL(sub_00626CF0); /* 0x0062592D: call 0x626cf0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x00625932: mov eax, dword ptr [eax] */
L_00625934:
    edi = POP32_VAL(esp); /* 0x00625934: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x00625935: add eax, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x00625938: pop esi */
    esp = ebp; /* 0x00625939: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062593B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062593C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625940u);

L_00625940:
    PUSH32(esp, ebp); /* 0x00625940: push ebp */
    ebp = esp; /* 0x00625941: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00625943: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00625946: push esi */
    PUSH32(esp, edi); /* 0x00625947: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00625948: mov edi, dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x0062594B: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x0062594E: push edi */
    PUSH32(esp, eax); /* 0x0062594F: push eax */
    esi = ecx; /* 0x00625950: mov esi, ecx */
    RECOMP_CALL(sub_00625DE0); /* 0x00625952: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00625957: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi) */ /* 0x0062595A: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625974; /* 0x0062595C: jne 0x625974 */
L_0062595E:
    PUSH32(esp, ecx); /* 0x0062595E: push ecx */
    eax = ebp + 0x8; /* 0x0062595F: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x00625962: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, eax); /* 0x00625965: push eax */
    PUSH32(esp, ecx); /* 0x00625966: push ecx */
    eax = ebp + (-0xC); /* 0x00625967: lea eax, [ebp - 0xc] */
    ecx = esi; /* 0x0062596A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0062596C: push eax */
    RECOMP_CALL(sub_00626D50); /* 0x0062596D: call 0x626d50 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x00625972: mov eax, dword ptr [eax] */
L_00625974:
    edi = POP32_VAL(esp); /* 0x00625974: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x00625975: add eax, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x00625978: pop esi */
    esp = ebp; /* 0x00625979: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062597B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062597C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625980u);

L_00625980:
    PUSH32(esp, ebp); /* 0x00625980: push ebp */
    ebp = esp; /* 0x00625981: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00625983: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00625986: push esi */
    PUSH32(esp, edi); /* 0x00625987: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00625988: mov edi, dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x0062598B: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x0062598E: push edi */
    PUSH32(esp, eax); /* 0x0062598F: push eax */
    esi = ecx; /* 0x00625990: mov esi, ecx */
    RECOMP_CALL(sub_00625D60); /* 0x00625992: call 0x625d60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00625997: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi) */ /* 0x0062599A: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006259B4; /* 0x0062599C: jne 0x6259b4 */
L_0062599E:
    PUSH32(esp, ecx); /* 0x0062599E: push ecx */
    eax = ebp + 0x8; /* 0x0062599F: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x006259A2: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, eax); /* 0x006259A5: push eax */
    PUSH32(esp, ecx); /* 0x006259A6: push ecx */
    eax = ebp + (-0xC); /* 0x006259A7: lea eax, [ebp - 0xc] */
    ecx = esi; /* 0x006259AA: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006259AC: push eax */
    RECOMP_CALL(sub_00626DB0); /* 0x006259AD: call 0x626db0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x006259B2: mov eax, dword ptr [eax] */
L_006259B4:
    edi = POP32_VAL(esp); /* 0x006259B4: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x006259B5: add eax, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006259B8: pop esi */
    esp = ebp; /* 0x006259B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006259BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006259BC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006259C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006259C0u);

L_006259C0:
    PUSH32(esp, ebp); /* 0x006259C0: push ebp */
    ebp = esp; /* 0x006259C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006259C3: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x006259C5: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x006259CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006259D0: push eax */
    PUSH32(esp, esi); /* 0x006259D1: push esi */
    PUSH32(esp, edi); /* 0x006259D2: push edi */
    eax = MEM32(0x855000); /* 0x006259D3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006259D8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006259DA: push eax */
    eax = ebp + (-0xC); /* 0x006259DB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006259DE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006259E4: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x006259E6: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x006259E9: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x006259EC: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625A2C; /* 0x006259EE: jae 0x625a2c */
L_006259F0:
    eax = MEM32(esi); /* 0x006259F0: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x006259F2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00625A2C; /* 0x006259F4: ja 0x625a2c */
L_006259F6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006259F6: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x4EC4EC4Fu; /* 0x006259F8: mov eax, 0x4ec4ec4f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x006259FD: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x006259FF: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    edi = edx; /* 0x00625A02: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x00625A04: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x00625A04: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x00625A07: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x00625A09: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625A16; /* 0x00625A0C: jne 0x625a16 */
L_00625A0E:
    PUSH32(esp, ecx); /* 0x00625A0E: push ecx */
    ecx = esi; /* 0x00625A0F: mov ecx, esi */
    RECOMP_CALL(sub_00625F00); /* 0x00625A11: call 0x625f00 */
    RECOMP_FLAGS_IN();
L_00625A16:
    ecx = MEM32(esi + 0x4); /* 0x00625A16: mov ecx, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)edi * (int32_t)0x34u); /* 0x00625A19: imul eax, edi, 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x00625A1C: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x00625A1E: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x00625A25: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00625A4D; /* 0x00625A27: je 0x625a4d */
L_00625A29:
    PUSH32(esp, eax); /* 0x00625A29: push eax */
    goto L_00625A48; /* 0x00625A2A: jmp 0x625a48 */
L_00625A2C:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x00625A2C: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625A39; /* 0x00625A2F: jne 0x625a39 */
L_00625A31:
    PUSH32(esp, ecx); /* 0x00625A31: push ecx */
    ecx = esi; /* 0x00625A32: mov ecx, esi */
    RECOMP_CALL(sub_00625F00); /* 0x00625A34: call 0x625f00 */
    RECOMP_FLAGS_IN();
L_00625A39:
    ecx = MEM32(esi + 0x4); /* 0x00625A39: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x00625A3C: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x00625A43: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00625A4D; /* 0x00625A45: je 0x625a4d */
L_00625A47:
    PUSH32(esp, edi); /* 0x00625A47: push edi */
L_00625A48:
    RECOMP_CALL(sub_00627F60); /* 0x00625A48: call 0x627f60 */
    RECOMP_FLAGS_IN();
L_00625A4D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00625A4D: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x34u; /* 0x00625A54: add dword ptr [esi + 4], 0x34 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00625A58: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00625A5B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00625A62: pop ecx */
    edi = POP32_VAL(esp); /* 0x00625A63: pop edi */
    esi = POP32_VAL(esp); /* 0x00625A64: pop esi */
    esp = ebp; /* 0x00625A65: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00625A67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625A68: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625A70u);

L_00625A70:
    PUSH32(esp, ebp); /* 0x00625A70: push ebp */
    ebp = esp; /* 0x00625A71: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x00625A73: mov edx, dword ptr [ecx + 8] */
    eax = edx; /* 0x00625A76: mov eax, edx */
    PUSH32(esp, esi); /* 0x00625A78: push esi */
    esi = MEM32(ecx + 0x4); /* 0x00625A79: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x00625A7C: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x00625A7E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00625A7F: mov edi, dword ptr [ebp + 8] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x00625A82: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    /* cmp eax, edi */ /* 0x00625A85: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625ADD; /* 0x00625A87: jae 0x625add */
L_00625A89:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x00625A89: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00625A8B: push ebx */
    ebx = 0x1FFFFFFFu; /* 0x00625A8C: mov ebx, 0x1fffffff */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x00625A91: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    eax = ebx; /* 0x00625A94: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x00625A96: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x00625A98: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625AA7; /* 0x00625A9A: jae 0x625aa7 */
L_00625A9C:
    PUSH32(esp, 0x007DFAB0u); /* 0x00625A9C: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00625AA1: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00625AA7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx); /* 0x00625AA7: sub edx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x00625AA9: add esi, edi */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00625AAB: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00625AAE: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00625AB0: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00625AB0: shr eax, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x00625AB2: sub ebx, eax */
    _flag_k = FK_CMP;
    /* cmp ebx, edx */ /* 0x00625AB4: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x00625AB6: pop ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625ACB; /* 0x00625AB7: jae 0x625acb */
L_00625AB9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00625AB9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x00625ABB: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x00625ABD: pop edi */
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x00625ABE: cmovb edx, esi */
    esi = POP32_VAL(esp); /* 0x00625AC1: pop esi */
    MEM32(ebp + 0x8) = edx; /* 0x00625AC2: mov dword ptr [ebp + 8], edx */
    ebp = POP32_VAL(esp); /* 0x00625AC5: pop ebp */
    goto L_00625FB0; /* 0x00625AC6: jmp 0x625fb0 */
L_00625ACB:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x00625ACB: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x00625ACD: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x00625ACF: pop edi */
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x00625AD0: cmovb edx, esi */
    esi = POP32_VAL(esp); /* 0x00625AD3: pop esi */
    MEM32(ebp + 0x8) = edx; /* 0x00625AD4: mov dword ptr [ebp + 8], edx */
    ebp = POP32_VAL(esp); /* 0x00625AD7: pop ebp */
    goto L_00625FB0; /* 0x00625AD8: jmp 0x625fb0 */
L_00625ADD:
    edi = POP32_VAL(esp); /* 0x00625ADD: pop edi */
    esi = POP32_VAL(esp); /* 0x00625ADE: pop esi */
    ebp = POP32_VAL(esp); /* 0x00625ADF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625AE0: ret 4 */
L_00625FB0:
    PUSH32(esp, ebp); /* 0x00625FB0: push ebp */
    ebp = esp; /* 0x00625FB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00625FB3: push -1 */
    PUSH32(esp, 0x007B7B60u); /* 0x00625FB5: push 0x7b7b60 */
    eax = MEM32(FS_BASE + (0)); /* 0x00625FBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00625FC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00625FC1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00625FC4: push ebx */
    PUSH32(esp, esi); /* 0x00625FC5: push esi */
    PUSH32(esp, edi); /* 0x00625FC6: push edi */
    eax = MEM32(0x855000); /* 0x00625FC7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00625FCC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00625FCE: push eax */
    eax = ebp + (-0xC); /* 0x00625FCF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00625FD2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00625FD8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x00625FDB: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00625FDD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x00625FDF: mov dword ptr [ebp - 0x14], esi */
    ebx = MEM32(ebp + 0x8); /* 0x00625FE2: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x00625FE5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00626011; /* 0x00625FE7: je 0x626011 */
L_00625FE9:
    /* cmp ebx, 0x1FFFFFFFu */ /* 0x00625FE9: cmp ebx, 0x1fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0062600B; /* 0x00625FEF: ja 0x62600b */
L_00625FF1:
    eax = ebx * 8; /* 0x00625FF1: lea eax, [ebx*8] */
    PUSH32(esp, eax); /* 0x00625FF8: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00625FF9: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00625FFF: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00626002: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x00626004: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x00626007: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00626011; /* 0x00626009: jne 0x626011 */
L_0062600B:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x0062600B: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00626011:
    MEM32(ebp + (-0x4)) = 0; /* 0x00626011: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00626018: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0062601B: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0062601E: push esi */
    edx = MEM32(edi + 0x4); /* 0x0062601F: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x00626022: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_00628BB0); /* 0x00626024: call 0x628bb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00626029: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062602C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi); /* 0x00626033: mov ecx, dword ptr [edi] */
    eax = MEM32(edi + 0x4); /* 0x00626035: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00626038: sub eax, ecx */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x0062603A: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    MEM32(ebp + 0x8) = eax; /* 0x0062603D: mov dword ptr [ebp + 8], eax */
    /* test ecx, ecx */ /* 0x00626040: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062604E; /* 0x00626042: je 0x62604e */
L_00626044:
    PUSH32(esp, ecx); /* 0x00626044: push ecx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00626045: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062604B: add esp, 4 */
    _flag_k = FK_ADD;
L_0062604E:
    eax = esi + ebx * 8; /* 0x0062604E: lea eax, [esi + ebx*8] */
    MEM32(edi + 0x8) = eax; /* 0x00626051: mov dword ptr [edi + 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x00626054: mov eax, dword ptr [ebp + 8] */
    eax = esi + eax * 8; /* 0x00626057: lea eax, [esi + eax*8] */
    MEM32(edi + 0x4) = eax; /* 0x0062605A: mov dword ptr [edi + 4], eax */
    MEM32(edi) = esi; /* 0x0062605D: mov dword ptr [edi], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062605F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626062: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626069: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062606A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062606B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062606C: pop ebx */
    esp = ebp; /* 0x0062606D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062606F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00626070: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625AF0u);

L_00625AF0:
    PUSH32(esp, ebp); /* 0x00625AF0: push ebp */
    ebp = esp; /* 0x00625AF1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00625AF3: push ebx */
    ebx = MEM32(ecx + 0x8); /* 0x00625AF4: mov ebx, dword ptr [ecx + 8] */
    eax = 0x66666667u; /* 0x00625AF7: mov eax, 0x66666667 */
    PUSH32(esp, esi); /* 0x00625AFC: push esi */
    esi = MEM32(ecx + 0x4); /* 0x00625AFD: mov esi, dword ptr [ecx + 4] */
    edx = ebx; /* 0x00625B00: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x00625B02: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00625B04: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edi); /* 0x00625B06: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00625B07: mov edi, dword ptr [ebp + 8] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00625B0A: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00625B0D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00625B0F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00625B0F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00625B12: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x00625B14: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625B8B; /* 0x00625B16: jae 0x625b8b */
L_00625B18:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x00625B18: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00625B1A: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x00625B1F: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x0CCCCCCCu; /* 0x00625B21: mov eax, 0xccccccc */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00625B26: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    esi = edx; /* 0x00625B29: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x00625B2B: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x00625B2B: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x00625B2E: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x00625B30: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x00625B32: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625B41; /* 0x00625B34: jae 0x625b41 */
L_00625B36:
    PUSH32(esp, 0x007DFAB0u); /* 0x00625B36: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00625B3B: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00625B41:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ecx); /* 0x00625B41: sub ebx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00625B43: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x00625B48: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x00625B4A: add esi, edi */
    _flag_k = FK_ADD;
    edi = 0x0CCCCCCCu; /* 0x00625B4C: mov edi, 0xccccccc */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00625B51: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00625B54: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00625B56: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00625B56: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00625B59: add eax, edx */
    _flag_k = FK_ADD;
    edx = eax; /* 0x00625B5B: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00625B5D: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x00625B5D: shr edx, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x00625B5F: sub edi, edx */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x00625B61: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625B78; /* 0x00625B63: jae 0x625b78 */
L_00625B65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00625B65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x00625B67: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x00625B69: pop edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x00625B6A: cmovb eax, esi */
    esi = POP32_VAL(esp); /* 0x00625B6D: pop esi */
    ebx = POP32_VAL(esp); /* 0x00625B6E: pop ebx */
    MEM32(ebp + 0x8) = eax; /* 0x00625B6F: mov dword ptr [ebp + 8], eax */
    ebp = POP32_VAL(esp); /* 0x00625B72: pop ebp */
    goto L_00626090; /* 0x00625B73: jmp 0x626090 */
L_00625B78:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00625B78: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x00625B7A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x00625B7C: pop edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x00625B7D: cmovb eax, esi */
    esi = POP32_VAL(esp); /* 0x00625B80: pop esi */
    ebx = POP32_VAL(esp); /* 0x00625B81: pop ebx */
    MEM32(ebp + 0x8) = eax; /* 0x00625B82: mov dword ptr [ebp + 8], eax */
    ebp = POP32_VAL(esp); /* 0x00625B85: pop ebp */
    goto L_00626090; /* 0x00625B86: jmp 0x626090 */
L_00625B8B:
    edi = POP32_VAL(esp); /* 0x00625B8B: pop edi */
    esi = POP32_VAL(esp); /* 0x00625B8C: pop esi */
    ebx = POP32_VAL(esp); /* 0x00625B8D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00625B8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625B8F: ret 4 */
L_00626090:
    PUSH32(esp, ebp); /* 0x00626090: push ebp */
    ebp = esp; /* 0x00626091: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626093: push -1 */
    PUSH32(esp, 0x007B7B80u); /* 0x00626095: push 0x7b7b80 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062609A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006260A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006260A1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006260A4: push ebx */
    PUSH32(esp, esi); /* 0x006260A5: push esi */
    PUSH32(esp, edi); /* 0x006260A6: push edi */
    eax = MEM32(0x855000); /* 0x006260A7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006260AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006260AE: push eax */
    eax = ebp + (-0xC); /* 0x006260AF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006260B2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006260B8: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x006260BB: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006260BD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x006260BF: mov dword ptr [ebp - 0x14], esi */
    edi = MEM32(ebp + 0x8); /* 0x006260C2: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x006260C5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006260F0; /* 0x006260C7: je 0x6260f0 */
L_006260C9:
    /* cmp edi, 0x0CCCCCCCu */ /* 0x006260C9: cmp edi, 0xccccccc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0CCCCCCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006260EA; /* 0x006260CF: ja 0x6260ea */
L_006260D1:
    eax = edi + edi * 4; /* 0x006260D1: lea eax, [edi + edi*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x006260D4: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x006260D4: shl eax, 2 */
    PUSH32(esp, eax); /* 0x006260D7: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006260D8: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006260DE: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006260E1: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x006260E3: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x006260E6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006260F0; /* 0x006260E8: jne 0x6260f0 */
L_006260EA:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x006260EA: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_006260F0:
    MEM32(ebp + (-0x4)) = 0; /* 0x006260F0: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006260F7: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006260FA: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006260FD: push esi */
    edx = MEM32(ebx + 0x4); /* 0x006260FE: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x00626101: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_00628C40); /* 0x00626103: call 0x628c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00626108: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062610B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebx + 0x4); /* 0x00626112: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x00626115: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00626117: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0062611C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x0062611E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ecx = edx; /* 0x00626121: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x00626123: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x00626123: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00626126: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x00626128: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ebx); /* 0x0062612B: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x0062612D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062613E; /* 0x0062612F: je 0x62613e */
L_00626131:
    PUSH32(esp, eax); /* 0x00626131: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00626132: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00626138: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x0062613B: mov ecx, dword ptr [ebp + 8] */
L_0062613E:
    eax = edi + edi * 4; /* 0x0062613E: lea eax, [edi + edi*4] */
    eax = esi + eax * 4; /* 0x00626141: lea eax, [esi + eax*4] */
    MEM32(ebx + 0x8) = eax; /* 0x00626144: mov dword ptr [ebx + 8], eax */
    eax = ecx + ecx * 4; /* 0x00626147: lea eax, [ecx + ecx*4] */
    eax = esi + eax * 4; /* 0x0062614A: lea eax, [esi + eax*4] */
    MEM32(ebx + 0x4) = eax; /* 0x0062614D: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = esi; /* 0x00626150: mov dword ptr [ebx], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00626152: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626155: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062615C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062615D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062615E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062615F: pop ebx */
    esp = ebp; /* 0x00626160: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626162: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00626163: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625BA0u);

L_00625BA0:
    PUSH32(esp, ebp); /* 0x00625BA0: push ebp */
    ebp = esp; /* 0x00625BA1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00625BA3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x00625BA6: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x00625BA9: push ebx */
    SET_LO8(edx, MEM8(eax + 0x4)); /* 0x00625BAA: mov dl, byte ptr [eax + 4] */
    SET_LO8(ebx, MEM8(ecx + 0x4)); /* 0x00625BAD: mov bl, byte ptr [ecx + 4] */
    /* cmp LO8(edx), LO8(ebx) */ /* 0x00625BB0: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625BCA; /* 0x00625BB2: jne 0x625bca */
L_00625BB4:
    SET_LO8(edx, MEM8(eax + 0x5)); /* 0x00625BB4: mov dl, byte ptr [eax + 5] */
    SET_LO8(ebx, MEM8(ecx + 0x5)); /* 0x00625BB7: mov bl, byte ptr [ecx + 5] */
    /* cmp LO8(edx), LO8(ebx) */ /* 0x00625BBA: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625BCA; /* 0x00625BBC: jne 0x625bca */
L_00625BBE:
    eax = MEM32(eax); /* 0x00625BBE: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(ecx) */ /* 0x00625BC0: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x00625BC2: pop ebx */
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x00625BC3: setl al */
    ebp = POP32_VAL(esp); /* 0x00625BC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00625BC7: ret 8 */
L_00625BCA:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) ? 1 : 0); /* 0x00625BCA: setb al */
    ebx = POP32_VAL(esp); /* 0x00625BCD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00625BCE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00625BCF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00625BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625BE0u);

L_00625BE0:
    PUSH32(esp, ebp); /* 0x00625BE0: push ebp */
    ebp = esp; /* 0x00625BE1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00625BE3: push ebx */
    PUSH32(esp, esi); /* 0x00625BE4: push esi */
    PUSH32(esp, edi); /* 0x00625BE5: push edi */
    edi = ecx; /* 0x00625BE6: mov edi, ecx */
    eax = 0x8C08C08Du; /* 0x00625BE8: mov eax, 0x8c08c08d */
    esi = MEM32(edi + 0x8); /* 0x00625BED: mov esi, dword ptr [edi + 8] */
    ebx = MEM32(edi + 0x4); /* 0x00625BF0: mov ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00625BF3: sub esi, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x00625BF5: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x00625BF7: add edx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x00625BF9: mov esi, dword ptr [ebp + 8] */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00625BFC: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    ecx = edx; /* 0x00625BFF: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x00625C01: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x00625C01: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00625C04: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x00625C06: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625C48; /* 0x00625C08: jae 0x625c48 */
L_00625C0A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(edi); /* 0x00625C0A: sub ebx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x8C08C08Du; /* 0x00625C0C: mov eax, 0x8c08c08d */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x00625C11: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x008C08C0u; /* 0x00625C13: mov eax, 0x8c08c0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x00625C18: add edx, ebx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00625C1A: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    ecx = edx; /* 0x00625C1D: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x00625C1F: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x00625C1F: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00625C22: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00625C24: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x00625C26: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625C35; /* 0x00625C28: jae 0x625c35 */
L_00625C2A:
    PUSH32(esp, 0x007DFAB0u); /* 0x00625C2A: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00625C2F: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00625C35:
    eax = ecx + esi; /* 0x00625C35: lea eax, [ecx + esi] */
    ecx = edi; /* 0x00625C38: mov ecx, edi */
    PUSH32(esp, eax); /* 0x00625C3A: push eax */
    RECOMP_CALL(sub_006262A0); /* 0x00625C3B: call 0x6262a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x00625C40: push eax */
    ecx = edi; /* 0x00625C41: mov ecx, edi */
    RECOMP_CALL(sub_006262F0); /* 0x00625C43: call 0x6262f0 */
    RECOMP_FLAGS_IN();
L_00625C48:
    edi = POP32_VAL(esp); /* 0x00625C48: pop edi */
    esi = POP32_VAL(esp); /* 0x00625C49: pop esi */
    ebx = POP32_VAL(esp); /* 0x00625C4A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00625C4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625C4C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00625C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625C50u);

L_00625C50:
    PUSH32(esp, esi); /* 0x00625C50: push esi */
    PUSH32(esp, edi); /* 0x00625C51: push edi */
    edi = ecx; /* 0x00625C52: mov edi, ecx */
    esi = MEM32(edi); /* 0x00625C54: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x00625C56: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00625C93; /* 0x00625C58: je 0x625c93 */
L_00625C5A:
    PUSH32(esp, ebx); /* 0x00625C5A: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x00625C5B: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x00625C5E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625C73; /* 0x00625C60: je 0x625c73 */
L_00625C62:
    ecx = esi; /* 0x00625C62: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x00625C64: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x00625C69: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x00625C6F: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625C62; /* 0x00625C71: jne 0x625c62 */
L_00625C73:
    PUSH32(esp, MEM32(edi)); /* 0x00625C73: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00625C75: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00625C7B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x00625C7E: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x00625C84: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x00625C8B: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x00625C92: pop ebx */
L_00625C93:
    edi = POP32_VAL(esp); /* 0x00625C93: pop edi */
    esi = POP32_VAL(esp); /* 0x00625C94: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00625C95: ret  */
    RECOMP_REGS_OUT();
}

void sub_00625CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625CA0u);

L_00625CA0:
    PUSH32(esp, ebp); /* 0x00625CA0: push ebp */
    ebp = esp; /* 0x00625CA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00625CA3: push -1 */
    PUSH32(esp, 0x007B6153u); /* 0x00625CA5: push 0x7b6153 */
    eax = MEM32(FS_BASE + (0)); /* 0x00625CAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00625CB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00625CB1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00625CB4: push esi */
    eax = MEM32(0x855000); /* 0x00625CB5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00625CBA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00625CBC: push eax */
    eax = ebp + (-0xC); /* 0x00625CBD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00625CC0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00625CC6: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x00625CC8: mov dword ptr [ebp - 0x14], esi */
    PUSH32(esp, 0); /* 0x00625CCB: push 0 */
    PUSH32(esp, 0); /* 0x00625CCD: push 0 */
    MEM32(ebp + (-0x10)) = esi; /* 0x00625CCF: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0; /* 0x00625CD2: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x00625CD8: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_0046EE50); /* 0x00625CDF: call 0x46ee50 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x00625CE4: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x00625CE6: mov dword ptr [ebp - 4], 2 */
    ecx = esi + 0x8; /* 0x00625CED: lea ecx, [esi + 8] */
    MEM32(ecx) = 0; /* 0x00625CF0: mov dword ptr [ecx], 0 */
    MEM32(ecx + 0x4) = 0; /* 0x00625CF6: mov dword ptr [ecx + 4], 0 */
    MEM32(ecx + 0x8) = 0; /* 0x00625CFD: mov dword ptr [ecx + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00625D04: mov byte ptr [ebp - 4], 3 */
    edx = ebp + (-0x10); /* 0x00625D08: lea edx, [ebp - 0x10] */
    eax = MEM32(esi); /* 0x00625D0B: mov eax, dword ptr [esi] */
    PUSH32(esp, edx); /* 0x00625D0D: push edx */
    MEM32(esi + 0x1C) = 0x3F800000u; /* 0x00625D0E: mov dword ptr [esi + 0x1c], 0x3f800000 */
    MEM32(ebp + (-0x10)) = eax; /* 0x00625D15: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ecx); /* 0x00625D18: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x10u); /* 0x00625D1A: push 0x10 */
    PUSH32(esp, eax); /* 0x00625D1C: push eax */
    MEM32(ecx + 0x4) = eax; /* 0x00625D1D: mov dword ptr [ecx + 4], eax */
    eax = ebp + (-0x18); /* 0x00625D20: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x00625D23: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x00625D24: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 7; /* 0x00625D29: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x18) = 8; /* 0x00625D30: mov dword ptr [esi + 0x18], 8 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00625D37: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00625D3E: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00625D40: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00625D43: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00625D4A: pop ecx */
    esi = POP32_VAL(esp); /* 0x00625D4B: pop esi */
    esp = ebp; /* 0x00625D4C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00625D4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00625D4F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00625D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625D60u);

L_00625D60:
    PUSH32(esp, ebp); /* 0x00625D60: push ebp */
    ebp = esp; /* 0x00625D61: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x00625D63: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x00625D66: push ebx */
    PUSH32(esp, esi); /* 0x00625D67: push esi */
    esi = ecx; /* 0x00625D68: mov esi, ecx */
    SET_LO8(ebx, MEM8(eax)); /* 0x00625D6A: mov bl, byte ptr [eax] */
    eax = (uint32_t)LO8(ebx); /* 0x00625D6C: movzx eax, bl */
    _flag_a = (uint32_t)((eax ^ 0x811C9DC5u)); _flag_b = (uint32_t)((eax ^ 0x811C9DC5u));
    eax = eax ^ 0x811C9DC5u; /* 0x00625D6F: xor eax, 0x811c9dc5 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi + 0x14); /* 0x00625D74: mov edx, dword ptr [esi + 0x14] */
    ecx = edx; /* 0x00625D77: mov ecx, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x01000193u); /* 0x00625D79: imul eax, eax, 0x1000193 */
    PUSH32(esp, edi); /* 0x00625D7F: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x00625D80: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x18), ecx */ /* 0x00625D82: cmp dword ptr [esi + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00625D90; /* 0x00625D85: ja 0x625d90 */
L_00625D87:
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00625D87: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x00625D87: shr edx, 1 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00625D89: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00625D8C: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00625D8E: add ecx, eax */
    _flag_k = FK_ADD;
L_00625D90:
    edx = MEM32(esi + 0x8); /* 0x00625D90: mov edx, dword ptr [esi + 8] */
    esi = MEM32(esi); /* 0x00625D93: mov esi, dword ptr [esi] */
    eax = MEM32(edx + ecx * 8); /* 0x00625D95: mov eax, dword ptr [edx + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x00625D98: add ecx, ecx */
    _flag_k = FK_ADD;
    edi = MEM32(edx + ecx * 4); /* 0x00625D9A: mov edi, dword ptr [edx + ecx*4] */
    edx = edx + ecx * 4; /* 0x00625D9D: lea edx, [edx + ecx*4] */
L_00625DA0:
    /* cmp edi, esi */ /* 0x00625DA0: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625DA8; /* 0x00625DA2: jne 0x625da8 */
L_00625DA4:
    ecx = esi; /* 0x00625DA4: mov ecx, esi */
    goto L_00625DAD; /* 0x00625DA6: jmp 0x625dad */
L_00625DA8:
    ecx = MEM32(edx + 0x4); /* 0x00625DA8: mov ecx, dword ptr [edx + 4] */
    ecx = MEM32(ecx); /* 0x00625DAB: mov ecx, dword ptr [ecx] */
L_00625DAD:
    /* cmp eax, ecx */ /* 0x00625DAD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625DCE; /* 0x00625DAF: je 0x625dce */
L_00625DB1:
    /* cmp LO8(ebx), MEM8(eax + 0x8) */ /* 0x00625DB1: cmp bl, byte ptr [eax + 8] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x8)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625DBA; /* 0x00625DB4: je 0x625dba */
L_00625DB6:
    eax = MEM32(eax); /* 0x00625DB6: mov eax, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_00625DA0; /* 0x00625DB8: jmp 0x625da0 */
L_00625DBA:
    MEM32(ebp + 0xC) = eax; /* 0x00625DBA: mov dword ptr [ebp + 0xc], eax */
    ecx = ebp + 0xC; /* 0x00625DBD: lea ecx, [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x00625DC0: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x00625DC3: mov ecx, dword ptr [ecx] */
    edi = POP32_VAL(esp); /* 0x00625DC5: pop edi */
    esi = POP32_VAL(esp); /* 0x00625DC6: pop esi */
    MEM32(eax) = ecx; /* 0x00625DC7: mov dword ptr [eax], ecx */
    ebx = POP32_VAL(esp); /* 0x00625DC9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00625DCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00625DCB: ret 8 */
L_00625DCE:
    eax = MEM32(ebp + 0x8); /* 0x00625DCE: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x00625DD1: pop edi */
    MEM32(eax) = esi; /* 0x00625DD2: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x00625DD4: pop esi */
    ebx = POP32_VAL(esp); /* 0x00625DD5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00625DD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00625DD7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00625DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625DE0u);

L_00625DE0:
    PUSH32(esp, ebp); /* 0x00625DE0: push ebp */
    ebp = esp; /* 0x00625DE1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00625DE3: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x00625DE4: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x00625DE7: push esi */
    PUSH32(esp, edi); /* 0x00625DE8: push edi */
    PUSH32(esp, ebx); /* 0x00625DE9: push ebx */
    edi = ecx; /* 0x00625DEA: mov edi, ecx */
    RECOMP_CALL(sub_0061B530); /* 0x00625DEC: call 0x61b530 */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x8); /* 0x00625DF1: mov esi, dword ptr [edi + 8] */
    ecx = MEM32(edi); /* 0x00625DF4: mov ecx, dword ptr [edi] */
    edx = MEM32(esi + eax * 8); /* 0x00625DF6: mov edx, dword ptr [esi + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00625DF9: add eax, eax */
    _flag_k = FK_ADD;
    edi = esi + eax * 4; /* 0x00625DFB: lea edi, [esi + eax*4] */
    esi = MEM32(esi + eax * 4); /* 0x00625DFE: mov esi, dword ptr [esi + eax*4] */
L_00625E01:
    /* cmp esi, ecx */ /* 0x00625E01: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625E09; /* 0x00625E03: jne 0x625e09 */
L_00625E05:
    eax = ecx; /* 0x00625E05: mov eax, ecx */
    goto L_00625E0E; /* 0x00625E07: jmp 0x625e0e */
L_00625E09:
    eax = MEM32(edi + 0x4); /* 0x00625E09: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax); /* 0x00625E0C: mov eax, dword ptr [eax] */
L_00625E0E:
    /* cmp edx, eax */ /* 0x00625E0E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625E2F; /* 0x00625E10: je 0x625e2f */
L_00625E12:
    eax = MEM32(edx + 0x8); /* 0x00625E12: mov eax, dword ptr [edx + 8] */
    /* cmp eax, MEM32(ebx) */ /* 0x00625E15: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00625E1D; /* 0x00625E17: je 0x625e1d */
L_00625E19:
    edx = MEM32(edx); /* 0x00625E19: mov edx, dword ptr [edx] */
    RECOMP_BACKEDGE();
    goto L_00625E01; /* 0x00625E1B: jmp 0x625e01 */
L_00625E1D:
    eax = MEM32(ebx); /* 0x00625E1D: mov eax, dword ptr [ebx] */
    MEM32(ebp + 0xC) = ecx; /* 0x00625E1F: mov dword ptr [ebp + 0xc], ecx */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x00625E22: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00625E2A; /* 0x00625E25: jne 0x625e2a */
L_00625E27:
    MEM32(ebp + 0xC) = edx; /* 0x00625E27: mov dword ptr [ebp + 0xc], edx */
L_00625E2A:
    ecx = ebp + 0xC; /* 0x00625E2A: lea ecx, [ebp + 0xc] */
    ecx = MEM32(ecx); /* 0x00625E2D: mov ecx, dword ptr [ecx] */
L_00625E2F:
    eax = MEM32(ebp + 0x8); /* 0x00625E2F: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x00625E32: pop edi */
    esi = POP32_VAL(esp); /* 0x00625E33: pop esi */
    ebx = POP32_VAL(esp); /* 0x00625E34: pop ebx */
    MEM32(eax) = ecx; /* 0x00625E35: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x00625E37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00625E38: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00625E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625E40u);

L_00625E40:
    PUSH32(esp, ebp); /* 0x00625E40: push ebp */
    ebp = esp; /* 0x00625E41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00625E43: push -1 */
    PUSH32(esp, 0x007B6153u); /* 0x00625E45: push 0x7b6153 */
    eax = MEM32(FS_BASE + (0)); /* 0x00625E4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00625E50: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00625E51: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00625E54: push esi */
    eax = MEM32(0x855000); /* 0x00625E55: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00625E5A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00625E5C: push eax */
    eax = ebp + (-0xC); /* 0x00625E5D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00625E60: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00625E66: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x00625E68: mov dword ptr [ebp - 0x14], esi */
    PUSH32(esp, 0); /* 0x00625E6B: push 0 */
    PUSH32(esp, 0); /* 0x00625E6D: push 0 */
    MEM32(ebp + (-0x10)) = esi; /* 0x00625E6F: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0; /* 0x00625E72: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x00625E78: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_006268A0); /* 0x00625E7F: call 0x6268a0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x00625E84: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x00625E86: mov dword ptr [ebp - 4], 2 */
    ecx = esi + 0x8; /* 0x00625E8D: lea ecx, [esi + 8] */
    MEM32(ecx) = 0; /* 0x00625E90: mov dword ptr [ecx], 0 */
    MEM32(ecx + 0x4) = 0; /* 0x00625E96: mov dword ptr [ecx + 4], 0 */
    MEM32(ecx + 0x8) = 0; /* 0x00625E9D: mov dword ptr [ecx + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00625EA4: mov byte ptr [ebp - 4], 3 */
    edx = ebp + (-0x10); /* 0x00625EA8: lea edx, [ebp - 0x10] */
    eax = MEM32(esi); /* 0x00625EAB: mov eax, dword ptr [esi] */
    PUSH32(esp, edx); /* 0x00625EAD: push edx */
    MEM32(esi + 0x1C) = 0x3F800000u; /* 0x00625EAE: mov dword ptr [esi + 0x1c], 0x3f800000 */
    MEM32(ebp + (-0x10)) = eax; /* 0x00625EB5: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ecx); /* 0x00625EB8: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x10u); /* 0x00625EBA: push 0x10 */
    PUSH32(esp, eax); /* 0x00625EBC: push eax */
    MEM32(ecx + 0x4) = eax; /* 0x00625EBD: mov dword ptr [ecx + 4], eax */
    eax = ebp + (-0x18); /* 0x00625EC0: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x00625EC3: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x00625EC4: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 7; /* 0x00625EC9: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x18) = 8; /* 0x00625ED0: mov dword ptr [esi + 0x18], 8 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00625ED7: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00625EDE: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00625EE0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00625EE3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00625EEA: pop ecx */
    esi = POP32_VAL(esp); /* 0x00625EEB: pop esi */
    esp = ebp; /* 0x00625EEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00625EEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00625EEF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00625F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00625F00u);

L_00625F00:
    PUSH32(esp, esi); /* 0x00625F00: push esi */
    esi = MEM32(ecx + 0x4); /* 0x00625F01: mov esi, dword ptr [ecx + 4] */
    eax = 0x4EC4EC4Fu; /* 0x00625F04: mov eax, 0x4ec4ec4f */
    PUSH32(esp, edi); /* 0x00625F09: push edi */
    edi = MEM32(ecx + 0x8); /* 0x00625F0A: mov edi, dword ptr [ecx + 8] */
    edx = edi; /* 0x00625F0D: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x00625F0F: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00625F11: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x00625F13: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x00625F16: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00625F18: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00625F18: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00625F1B: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x00625F1D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625F8D; /* 0x00625F20: jae 0x625f8d */
L_00625F22:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x00625F22: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x4EC4EC4Fu; /* 0x00625F24: mov eax, 0x4ec4ec4f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x00625F29: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, ebx); /* 0x00625F2B: push ebx */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x00625F2C: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    ebx = 0x04EC4EC4u; /* 0x00625F2F: mov ebx, 0x4ec4ec4 */
    esi = edx; /* 0x00625F34: mov esi, edx */
    eax = ebx; /* 0x00625F36: mov eax, ebx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x00625F38: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x00625F38: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x00625F3B: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x00625F3D: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x00625F3F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625F4F; /* 0x00625F42: jae 0x625f4f */
L_00625F44:
    PUSH32(esp, 0x007DFAB0u); /* 0x00625F44: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00625F49: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00625F4F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ecx); /* 0x00625F4F: sub edi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x4EC4EC4Fu; /* 0x00625F51: mov eax, 0x4ec4ec4f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x00625F56: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00625F58: inc esi */
    _flag_k = FK_INC;
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x00625F59: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x00625F5C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00625F5E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00625F5E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00625F61: add eax, edx */
    _flag_k = FK_ADD;
    edx = eax; /* 0x00625F63: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00625F65: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x00625F65: shr edx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x00625F67: sub ebx, edx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x00625F69: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x00625F6B: pop ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_00625F80; /* 0x00625F6C: jae 0x625f80 */
L_00625F6E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00625F6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x00625F70: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x00625F72: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x00625F75: push eax */
    RECOMP_CALL(sub_00626450); /* 0x00625F76: call 0x626450 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00625F7B: pop edi */
    esi = POP32_VAL(esp); /* 0x00625F7C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625F7D: ret 4 */
L_00625F80:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00625F80: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x00625F82: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x00625F84: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x00625F87: push eax */
    RECOMP_CALL(sub_00626450); /* 0x00625F88: call 0x626450 */
    RECOMP_FLAGS_IN();
L_00625F8D:
    edi = POP32_VAL(esp); /* 0x00625F8D: pop edi */
    esi = POP32_VAL(esp); /* 0x00625F8E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00625F8F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00626073(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626073u);

L_00626073:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00626073: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00626076: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062607C: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0062607F: push 0 */
    PUSH32(esp, 0); /* 0x00626081: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00626083: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00626088u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00626166(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626166u);

L_00626166:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00626166: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00626169: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062616F: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00626172: push 0 */
    PUSH32(esp, 0); /* 0x00626174: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00626176: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0062617Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00626180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626180u);

L_00626180:
    PUSH32(esp, ebp); /* 0x00626180: push ebp */
    ebp = esp; /* 0x00626181: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00626183: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x00626184: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x00626187: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x0062618A: push esi */
    esi = ecx; /* 0x0062618B: mov esi, ecx */
    ecx = MEM32(esi); /* 0x0062618D: mov ecx, dword ptr [esi] */
    /* cmp eax, MEM32(ecx) */ /* 0x0062618F: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006261C6; /* 0x00626191: jne 0x6261c6 */
L_00626193:
    /* cmp edx, ecx */ /* 0x00626193: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006261C6; /* 0x00626195: jne 0x6261c6 */
L_00626197:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x00626197: push dword ptr [ecx + 4] */
    ecx = esi; /* 0x0062619A: mov ecx, esi */
    RECOMP_CALL(sub_00626800); /* 0x0062619C: call 0x626800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006261A1: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x006261A3: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x006261A6: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x006261A8: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x006261AA: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x006261AC: mov dword ptr [eax + 8], eax */
    eax = MEM32(esi); /* 0x006261AF: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = 0; /* 0x006261B1: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x006261B8: pop esi */
    ecx = MEM32(eax); /* 0x006261B9: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x006261BB: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x006261BE: mov dword ptr [eax], ecx */
    esp = ebp; /* 0x006261C0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006261C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006261C3: ret 0xc */
L_006261C6:
    /* cmp eax, edx */ /* 0x006261C6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062622F; /* 0x006261C8: je 0x62622f */
L_006261CA:
    ebx = ebx; /* 0x006261CA: lea ebx, [ebx] */
L_006261D0:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x006261D0: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x006261D4: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062621B; /* 0x006261D6: jne 0x62621b */
L_006261D8:
    edx = MEM32(eax + 0x8); /* 0x006261D8: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x006261DB: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006261FC; /* 0x006261DF: jne 0x6261fc */
L_006261E1:
    eax = MEM32(edx); /* 0x006261E1: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x006261E3: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626218; /* 0x006261E7: jne 0x626218 */
L_006261E9:
    esp = esp; /* 0x006261E9: lea esp, [esp] */
L_006261F0:
    edx = eax; /* 0x006261F0: mov edx, eax */
    eax = MEM32(edx); /* 0x006261F2: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x006261F4: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006261F0; /* 0x006261F8: je 0x6261f0 */
L_006261FA:
    goto L_00626218; /* 0x006261FA: jmp 0x626218 */
L_006261FC:
    edx = MEM32(eax + 0x4); /* 0x006261FC: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x006261FF: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626218; /* 0x00626203: jne 0x626218 */
L_00626205:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x00626205: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626218; /* 0x00626208: jne 0x626218 */
L_0062620A:
    eax = edx; /* 0x0062620A: mov eax, edx */
    MEM32(ebp + 0xC) = eax; /* 0x0062620C: mov dword ptr [ebp + 0xc], eax */
    edx = MEM32(edx + 0x4); /* 0x0062620F: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x00626212: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00626205; /* 0x00626216: je 0x626205 */
L_00626218:
    MEM32(ebp + 0xC) = edx; /* 0x00626218: mov dword ptr [ebp + 0xc], edx */
L_0062621B:
    PUSH32(esp, ecx); /* 0x0062621B: push ecx */
    eax = ebp + (-0x4); /* 0x0062621C: lea eax, [ebp - 4] */
    ecx = esi; /* 0x0062621F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00626221: push eax */
    RECOMP_CALL(sub_00626550); /* 0x00626222: call 0x626550 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x00626227: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x0062622A: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006261D0; /* 0x0062622D: jne 0x6261d0 */
L_0062622F:
    ecx = MEM32(ebp + 0x8); /* 0x0062622F: mov ecx, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x00626232: pop esi */
    MEM32(ecx) = eax; /* 0x00626233: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x00626235: mov eax, ecx */
    esp = ebp; /* 0x00626237: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626239: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0062623A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00626240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626240u);

L_00626240:
    PUSH32(esp, ebp); /* 0x00626240: push ebp */
    ebp = esp; /* 0x00626241: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00626243: push esi */
    esi = MEM32(ecx); /* 0x00626244: mov esi, dword ptr [ecx] */
    eax = MEM32(esi + 0x4); /* 0x00626246: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00626249: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062628A; /* 0x0062624D: jne 0x62628a */
L_0062624F:
    PUSH32(esp, ebx); /* 0x0062624F: push ebx */
    PUSH32(esp, edi); /* 0x00626250: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00626251: mov edi, dword ptr [ebp + 8] */
    SET_LO8(ebx, MEM8(edi + 0x4)); /* 0x00626254: mov bl, byte ptr [edi + 4] */
L_00626257:
    SET_LO8(ecx, MEM8(eax + 0x14)); /* 0x00626257: mov cl, byte ptr [eax + 0x14] */
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x0062625A: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626272; /* 0x0062625C: jne 0x626272 */
L_0062625E:
    SET_LO8(ecx, MEM8(eax + 0x15)); /* 0x0062625E: mov cl, byte ptr [eax + 0x15] */
    SET_LO8(edx, MEM8(edi + 0x5)); /* 0x00626261: mov dl, byte ptr [edi + 5] */
    /* cmp LO8(ecx), LO8(edx) */ /* 0x00626264: cmp cl, dl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626272; /* 0x00626266: jne 0x626272 */
L_00626268:
    ecx = MEM32(eax + 0x10); /* 0x00626268: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, MEM32(edi) */ /* 0x0062626B: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x0062626D: setl cl */
    goto L_00626275; /* 0x00626270: jmp 0x626275 */
L_00626272:
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) ? 1 : 0); /* 0x00626272: setb cl */
L_00626275:
    /* test LO8(ecx), LO8(ecx) */ /* 0x00626275: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062627E; /* 0x00626277: je 0x62627e */
L_00626279:
    eax = MEM32(eax + 0x8); /* 0x00626279: mov eax, dword ptr [eax + 8] */
    goto L_00626282; /* 0x0062627C: jmp 0x626282 */
L_0062627E:
    esi = eax; /* 0x0062627E: mov esi, eax */
    eax = MEM32(eax); /* 0x00626280: mov eax, dword ptr [eax] */
L_00626282:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00626282: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00626257; /* 0x00626286: je 0x626257 */
L_00626288:
    edi = POP32_VAL(esp); /* 0x00626288: pop edi */
    ebx = POP32_VAL(esp); /* 0x00626289: pop ebx */
L_0062628A:
    eax = esi; /* 0x0062628A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0062628C: pop esi */
    ebp = POP32_VAL(esp); /* 0x0062628D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062628E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006262A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006262A0u);

L_006262A0:
    PUSH32(esp, ebp); /* 0x006262A0: push ebp */
    ebp = esp; /* 0x006262A1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006262A3: push esi */
    esi = MEM32(ecx + 0x8); /* 0x006262A4: mov esi, dword ptr [ecx + 8] */
    eax = 0x8C08C08Du; /* 0x006262A7: mov eax, 0x8c08c08d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x006262AC: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x006262AE: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x008C08C0u; /* 0x006262B0: mov eax, 0x8c08c0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x006262B5: add edx, esi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x006262B7: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    esi = edx; /* 0x006262BA: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x006262BC: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x006262BC: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x006262BF: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006262C1: mov ecx, esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006262C3: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x006262C3: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006262C5: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x006262C7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006262DB; /* 0x006262C9: jae 0x6262db */
L_006262CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006262CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x006262CD: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x006262D0: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x006262D4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006262D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x006262D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006262D8: ret 4 */
L_006262DB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x006262DB: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x006262DD: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x006262E0: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x006262E4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006262E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x006262E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006262E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006262F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006262F0u);

L_006262F0:
    PUSH32(esp, ebp); /* 0x006262F0: push ebp */
    ebp = esp; /* 0x006262F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006262F3: push -1 */
    PUSH32(esp, 0x007B7BA0u); /* 0x006262F5: push 0x7b7ba0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006262FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626300: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00626301: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00626304: push ebx */
    PUSH32(esp, esi); /* 0x00626305: push esi */
    PUSH32(esp, edi); /* 0x00626306: push edi */
    eax = MEM32(0x855000); /* 0x00626307: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062630C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062630E: push eax */
    eax = ebp + (-0xC); /* 0x0062630F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626312: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00626318: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x0062631B: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0062631D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x0062631F: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(ebp + 0x8); /* 0x00626322: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x00626325: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062634F; /* 0x00626327: je 0x62634f */
L_00626329:
    /* cmp eax, 0x008C08C0u */ /* 0x00626329: cmp eax, 0x8c08c0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x008C08C0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00626349; /* 0x0062632E: ja 0x626349 */
L_00626330:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1D4u); /* 0x00626330: imul eax, eax, 0x1d4 */
    PUSH32(esp, eax); /* 0x00626336: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00626337: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062633D: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x00626340: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x00626342: mov dword ptr [ebp - 0x14], edi */
    /* test edi, edi */ /* 0x00626345: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062634F; /* 0x00626347: jne 0x62634f */
L_00626349:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00626349: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_0062634F:
    MEM32(ebp + (-0x4)) = 0; /* 0x0062634F: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00626356: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00626359: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0062635C: push edi */
    edx = MEM32(ebx + 0x4); /* 0x0062635D: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x00626360: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_00628CD0); /* 0x00626362: call 0x628cd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00626367: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062636A: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebx + 0x4); /* 0x00626371: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00626374: mov dword ptr [ebp - 0x14], eax */
    esi = MEM32(ebx); /* 0x00626377: mov esi, dword ptr [ebx] */
    ecx = eax; /* 0x00626379: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0062637B: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x8C08C08Du; /* 0x0062637D: mov eax, 0x8c08c08d */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00626382: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00626384: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00626386: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00626389: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0062638B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0062638B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0062638E: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x00626390: mov dword ptr [ebp - 0x18], eax */
    /* test esi, esi */ /* 0x00626393: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006263BD; /* 0x00626395: je 0x6263bd */
L_00626397:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x00626397: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006263B2; /* 0x0062639A: je 0x6263b2 */
L_0062639C:
    esp = esp; /* 0x0062639C: lea esp, [esp] */
L_006263A0:
    ecx = esi; /* 0x006263A0: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x006263A2: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x006263A7: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x006263AD: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006263A0; /* 0x006263B0: jne 0x6263a0 */
L_006263B2:
    PUSH32(esp, MEM32(ebx)); /* 0x006263B2: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006263B4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006263BA: add esp, 4 */
    _flag_k = FK_ADD;
L_006263BD:
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x1D4u); /* 0x006263BD: imul eax, dword ptr [ebp + 8], 0x1d4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006263C4: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x006263C6: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x18)) * (int32_t)0x1D4u); /* 0x006263C9: imul eax, dword ptr [ebp - 0x18], 0x1d4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006263D0: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x006263D2: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = edi; /* 0x006263D5: mov dword ptr [ebx], edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006263D7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006263DA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006263E1: pop ecx */
    edi = POP32_VAL(esp); /* 0x006263E2: pop edi */
    esi = POP32_VAL(esp); /* 0x006263E3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006263E4: pop ebx */
    esp = ebp; /* 0x006263E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006263E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006263E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006263EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006263EBu);

L_006263EB:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x006263EB: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006263EE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006263F4: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006263F7: push 0 */
    PUSH32(esp, 0); /* 0x006263F9: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006263FB: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00626400u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00626410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626410u);

L_00626410:
    PUSH32(esp, ebp); /* 0x00626410: push ebp */
    ebp = esp; /* 0x00626411: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00626413: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00626416: push esi */
    esi = MEM32(ecx + 0x14); /* 0x00626417: mov esi, dword ptr [ecx + 0x14] */
    edx = esi; /* 0x0062641A: mov edx, esi */
    eax = (uint32_t)MEM8(eax); /* 0x0062641C: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)((eax ^ 0x811C9DC5u)); _flag_b = (uint32_t)((eax ^ 0x811C9DC5u));
    eax = eax ^ 0x811C9DC5u; /* 0x0062641F: xor eax, 0x811c9dc5 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x01000193u); /* 0x00626424: imul eax, eax, 0x1000193 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x0062642A: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x18), edx */ /* 0x0062642C: cmp dword ptr [ecx + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00626440; /* 0x0062642F: ja 0x626440 */
L_00626431:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x00626431: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x00626431: shr esi, 1 */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x00626433: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x00626436: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x00626438: pop esi */
    eax = ecx + edx; /* 0x00626439: lea eax, [ecx + edx] */
    ebp = POP32_VAL(esp); /* 0x0062643C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062643D: ret 4 */
L_00626440:
    eax = edx; /* 0x00626440: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x00626442: pop esi */
    ebp = POP32_VAL(esp); /* 0x00626443: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00626444: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00626450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626450u);

L_00626450:
    PUSH32(esp, ebp); /* 0x00626450: push ebp */
    ebp = esp; /* 0x00626451: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626453: push -1 */
    PUSH32(esp, 0x007B7BC0u); /* 0x00626455: push 0x7b7bc0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062645A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626460: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00626461: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00626464: push ebx */
    PUSH32(esp, esi); /* 0x00626465: push esi */
    PUSH32(esp, edi); /* 0x00626466: push edi */
    eax = MEM32(0x855000); /* 0x00626467: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062646C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062646E: push eax */
    eax = ebp + (-0xC); /* 0x0062646F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626472: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00626478: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x0062647B: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0062647D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x0062647F: mov dword ptr [ebp - 0x14], esi */
    ebx = MEM32(ebp + 0x8); /* 0x00626482: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x00626485: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006264AD; /* 0x00626487: je 0x6264ad */
L_00626489:
    /* cmp ebx, 0x04EC4EC4u */ /* 0x00626489: cmp ebx, 0x4ec4ec4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x04EC4EC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006264A7; /* 0x0062648F: ja 0x6264a7 */
L_00626491:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x34u); /* 0x00626491: imul eax, ebx, 0x34 */
    PUSH32(esp, eax); /* 0x00626494: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00626495: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062649B: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0062649E: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x006264A0: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x006264A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006264AD; /* 0x006264A5: jne 0x6264ad */
L_006264A7:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x006264A7: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_006264AD:
    MEM32(ebp + (-0x4)) = 0; /* 0x006264AD: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006264B4: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006264B7: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006264BA: push esi */
    edx = MEM32(edi + 0x4); /* 0x006264BB: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x006264BE: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_00628D70); /* 0x006264C0: call 0x628d70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006264C5: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006264C8: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi + 0x4); /* 0x006264CF: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x006264D2: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x4EC4EC4Fu; /* 0x006264D4: mov eax, 0x4ec4ec4f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006264D9: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x006264DB: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x006264DE: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006264E0: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006264E0: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006264E3: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x006264E5: mov dword ptr [ebp + 8], eax */
    ecx = MEM32(edi); /* 0x006264E8: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x006264EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00626505; /* 0x006264EC: je 0x626505 */
L_006264EE:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006264EE: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x006264F1: push ecx */
    edx = MEM32(edi + 0x4); /* 0x006264F2: mov edx, dword ptr [edi + 4] */
    RECOMP_CALL(sub_00501A30); /* 0x006264F5: call 0x501a30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x006264FA: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006264FC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00626502: add esp, 0xc */
    _flag_k = FK_ADD;
L_00626505:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x34u); /* 0x00626505: imul eax, ebx, 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00626508: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = eax; /* 0x0062650A: mov dword ptr [edi + 8], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x34u); /* 0x0062650D: imul eax, dword ptr [ebp + 8], 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00626511: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x00626513: mov dword ptr [edi + 4], eax */
    MEM32(edi) = esi; /* 0x00626516: mov dword ptr [edi], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00626518: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062651B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626522: pop ecx */
    edi = POP32_VAL(esp); /* 0x00626523: pop edi */
    esi = POP32_VAL(esp); /* 0x00626524: pop esi */
    ebx = POP32_VAL(esp); /* 0x00626525: pop ebx */
    esp = ebp; /* 0x00626526: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626528: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00626529: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0062652C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062652Cu);

L_0062652C:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x0062652C: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062652F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00626535: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00626538: push 0 */
    PUSH32(esp, 0); /* 0x0062653A: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0062653C: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00626541u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00626550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626550u);

L_00626550:
    PUSH32(esp, ebp); /* 0x00626550: push ebp */
    ebp = esp; /* 0x00626551: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626553: push -1 */
    PUSH32(esp, 0x0079C4FBu); /* 0x00626555: push 0x79c4fb */
    eax = MEM32(FS_BASE + (0)); /* 0x0062655A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626560: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00626561: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00626564: push ebx */
    PUSH32(esp, esi); /* 0x00626565: push esi */
    PUSH32(esp, edi); /* 0x00626566: push edi */
    eax = MEM32(0x855000); /* 0x00626567: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062656C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062656E: push eax */
    eax = ebp + (-0xC); /* 0x0062656F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626572: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x00626578: mov ebx, ecx */
    eax = MEM32(ebp + 0xC); /* 0x0062657A: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + 0xC; /* 0x0062657D: lea ecx, [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x00626580: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_0040B880); /* 0x00626583: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x00626588: mov edx, dword ptr [ebp - 0x10] */
    esi = MEM32(edx); /* 0x0062658B: mov esi, dword ptr [edx] */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x0062658D: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00626598; /* 0x00626591: je 0x626598 */
L_00626593:
    edi = MEM32(edx + 0x8); /* 0x00626593: mov edi, dword ptr [edx + 8] */
    goto L_006265B2; /* 0x00626596: jmp 0x6265b2 */
L_00626598:
    eax = MEM32(edx + 0x8); /* 0x00626598: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0062659B: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006265A5; /* 0x0062659F: je 0x6265a5 */
L_006265A1:
    edi = esi; /* 0x006265A1: mov edi, esi */
    goto L_006265B2; /* 0x006265A3: jmp 0x6265b2 */
L_006265A5:
    ecx = MEM32(ebp + 0xC); /* 0x006265A5: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x006265A8: mov dword ptr [ebp - 0x14], ecx */
    edi = MEM32(ecx + 0x8); /* 0x006265AB: mov edi, dword ptr [ecx + 8] */
    /* cmp ecx, edx */ /* 0x006265AE: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626625; /* 0x006265B0: jne 0x626625 */
L_006265B2:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x006265B2: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(edx + 0x4); /* 0x006265B6: mov esi, dword ptr [edx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006265BE; /* 0x006265B9: jne 0x6265be */
L_006265BB:
    MEM32(edi + 0x4) = esi; /* 0x006265BB: mov dword ptr [edi + 4], esi */
L_006265BE:
    eax = MEM32(ebx); /* 0x006265BE: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x006265C0: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006265CA; /* 0x006265C3: jne 0x6265ca */
L_006265C5:
    MEM32(eax + 0x4) = edi; /* 0x006265C5: mov dword ptr [eax + 4], edi */
    goto L_006265D5; /* 0x006265C8: jmp 0x6265d5 */
L_006265CA:
    /* cmp MEM32(esi), edx */ /* 0x006265CA: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006265D2; /* 0x006265CC: jne 0x6265d2 */
L_006265CE:
    MEM32(esi) = edi; /* 0x006265CE: mov dword ptr [esi], edi */
    goto L_006265D5; /* 0x006265D0: jmp 0x6265d5 */
L_006265D2:
    MEM32(esi + 0x8) = edi; /* 0x006265D2: mov dword ptr [esi + 8], edi */
L_006265D5:
    eax = MEM32(ebx); /* 0x006265D5: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax), edx */ /* 0x006265D7: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006265FE; /* 0x006265D9: jne 0x6265fe */
L_006265DB:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x006265DB: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006265E5; /* 0x006265DF: je 0x6265e5 */
L_006265E1:
    ecx = esi; /* 0x006265E1: mov ecx, esi */
    goto L_006265FC; /* 0x006265E3: jmp 0x6265fc */
L_006265E5:
    eax = MEM32(edi); /* 0x006265E5: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x006265E7: mov ecx, edi */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x006265E9: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006265FA; /* 0x006265ED: jne 0x6265fa */
L_006265EF:
    /* nop */ /* 0x006265EF: nop  */
L_006265F0:
    ecx = eax; /* 0x006265F0: mov ecx, eax */
    eax = MEM32(ecx); /* 0x006265F2: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x006265F4: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006265F0; /* 0x006265F8: je 0x6265f0 */
L_006265FA:
    eax = MEM32(ebx); /* 0x006265FA: mov eax, dword ptr [ebx] */
L_006265FC:
    MEM32(eax) = ecx; /* 0x006265FC: mov dword ptr [eax], ecx */
L_006265FE:
    eax = MEM32(ebx); /* 0x006265FE: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x8), edx */ /* 0x00626600: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626681; /* 0x00626603: jne 0x626681 */
L_00626605:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x00626605: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00626614; /* 0x00626609: je 0x626614 */
L_0062660B:
    ecx = MEM32(ebx); /* 0x0062660B: mov ecx, dword ptr [ebx] */
    eax = esi; /* 0x0062660D: mov eax, esi */
    MEM32(ecx + 0x8) = eax; /* 0x0062660F: mov dword ptr [ecx + 8], eax */
    goto L_00626681; /* 0x00626612: jmp 0x626681 */
L_00626614:
    ecx = edi; /* 0x00626614: mov ecx, edi */
    RECOMP_CALL(sub_0040B7B0); /* 0x00626616: call 0x40b7b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x0062661B: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x10)); /* 0x0062661D: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x00626620: mov dword ptr [ecx + 8], eax */
    goto L_00626681; /* 0x00626623: jmp 0x626681 */
L_00626625:
    MEM32(esi + 0x4) = ecx; /* 0x00626625: mov dword ptr [esi + 4], ecx */
    eax = MEM32(edx); /* 0x00626628: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x0062662A: mov dword ptr [ecx], eax */
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x0062662C: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626635; /* 0x0062662F: jne 0x626635 */
L_00626631:
    esi = ecx; /* 0x00626631: mov esi, ecx */
    goto L_0062664F; /* 0x00626633: jmp 0x62664f */
L_00626635:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x00626635: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x4); /* 0x00626639: mov esi, dword ptr [ecx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626641; /* 0x0062663C: jne 0x626641 */
L_0062663E:
    MEM32(edi + 0x4) = esi; /* 0x0062663E: mov dword ptr [edi + 4], esi */
L_00626641:
    MEM32(esi) = edi; /* 0x00626641: mov dword ptr [esi], edi */
    eax = MEM32(edx + 0x8); /* 0x00626643: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x00626646: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0x8); /* 0x00626649: mov eax, dword ptr [edx + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x0062664C: mov dword ptr [eax + 4], ecx */
L_0062664F:
    eax = MEM32(ebx); /* 0x0062664F: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x00626651: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062665B; /* 0x00626654: jne 0x62665b */
L_00626656:
    MEM32(eax + 0x4) = ecx; /* 0x00626656: mov dword ptr [eax + 4], ecx */
    goto L_00626669; /* 0x00626659: jmp 0x626669 */
L_0062665B:
    eax = MEM32(edx + 0x4); /* 0x0062665B: mov eax, dword ptr [edx + 4] */
    /* cmp MEM32(eax), edx */ /* 0x0062665E: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626666; /* 0x00626660: jne 0x626666 */
L_00626662:
    MEM32(eax) = ecx; /* 0x00626662: mov dword ptr [eax], ecx */
    goto L_00626669; /* 0x00626664: jmp 0x626669 */
L_00626666:
    MEM32(eax + 0x8) = ecx; /* 0x00626666: mov dword ptr [eax + 8], ecx */
L_00626669:
    eax = MEM32(edx + 0x4); /* 0x00626669: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x0062666C: mov dword ptr [ecx + 4], eax */
    SET_LO8(eax, MEM8(edx + 0xC)); /* 0x0062666F: mov al, byte ptr [edx + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x00626672: mov edx, dword ptr [ebp - 0x14] */
    SET_LO8(ecx, MEM8(ecx + 0xC)); /* 0x00626675: mov cl, byte ptr [ecx + 0xc] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x00626678: mov byte ptr [edx + 0xc], al */
    edx = MEM32(ebp + (-0x10)); /* 0x0062667B: mov edx, dword ptr [ebp - 0x10] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(ecx)); /* 0x0062667E: mov byte ptr [edx + 0xc], cl */
L_00626681:
    /* cmp MEM8(edx + 0xC), 1 */ /* 0x00626681: cmp byte ptr [edx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626793; /* 0x00626685: jne 0x626793 */
L_0062668B:
    eax = MEM32(ebx); /* 0x0062668B: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x0062668D: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062678F; /* 0x00626690: je 0x62678f */
L_00626696:
    /* cmp MEM8(edi + 0xC), 1 */ /* 0x00626696: cmp byte ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062678C; /* 0x0062669A: jne 0x62678c */
L_006266A0:
    ecx = MEM32(esi); /* 0x006266A0: mov ecx, dword ptr [esi] */
    /* cmp edi, ecx */ /* 0x006266A2: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626712; /* 0x006266A4: jne 0x626712 */
L_006266A6:
    ecx = MEM32(esi + 0x8); /* 0x006266A6: mov ecx, dword ptr [esi + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x006266A9: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006266C2; /* 0x006266AD: jne 0x6266c2 */
L_006266AF:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x006266AF: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x006266B3: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x006266B5: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x006266B6: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B6F0); /* 0x006266BA: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x006266BF: mov ecx, dword ptr [esi + 8] */
L_006266C2:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x006266C2: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626745; /* 0x006266C6: jne 0x626745 */
L_006266C8:
    eax = MEM32(ecx); /* 0x006266C8: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x006266CA: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006266D9; /* 0x006266CE: jne 0x6266d9 */
L_006266D0:
    eax = MEM32(ecx + 0x8); /* 0x006266D0: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x006266D3: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00626741; /* 0x006266D7: je 0x626741 */
L_006266D9:
    eax = MEM32(ecx + 0x8); /* 0x006266D9: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x006266DC: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006266F7; /* 0x006266E0: jne 0x6266f7 */
L_006266E2:
    eax = MEM32(ecx); /* 0x006266E2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006266E4: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006266E5: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x006266E9: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x006266ED: mov ecx, ebx */
    RECOMP_CALL(sub_0040B750); /* 0x006266EF: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x006266F4: mov ecx, dword ptr [esi + 8] */
L_006266F7:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x006266F7: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x006266FA: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x006266FD: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx + 0x8); /* 0x00626701: mov eax, dword ptr [ecx + 8] */
    ecx = ebx; /* 0x00626704: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x00626706: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00626707: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B6F0); /* 0x0062670B: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    goto L_0062678C; /* 0x00626710: jmp 0x62678c */
L_00626712:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x00626712: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062672A; /* 0x00626716: jne 0x62672a */
L_00626718:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x00626718: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x0062671C: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x0062671E: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x0062671F: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B750); /* 0x00626723: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x00626728: mov ecx, dword ptr [esi] */
L_0062672A:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x0062672A: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626745; /* 0x0062672E: jne 0x626745 */
L_00626730:
    eax = MEM32(ecx + 0x8); /* 0x00626730: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x00626733: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626757; /* 0x00626737: jne 0x626757 */
L_00626739:
    eax = MEM32(ecx); /* 0x00626739: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0062673B: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626757; /* 0x0062673F: jne 0x626757 */
L_00626741:
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x00626741: mov byte ptr [ecx + 0xc], 0 */
L_00626745:
    eax = MEM32(ebx); /* 0x00626745: mov eax, dword ptr [ebx] */
    edi = esi; /* 0x00626747: mov edi, esi */
    esi = MEM32(esi + 0x4); /* 0x00626749: mov esi, dword ptr [esi + 4] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x0062674C: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626696; /* 0x0062674F: jne 0x626696 */
L_00626755:
    goto L_0062678C; /* 0x00626755: jmp 0x62678c */
L_00626757:
    eax = MEM32(ecx); /* 0x00626757: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x00626759: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626774; /* 0x0062675D: jne 0x626774 */
L_0062675F:
    eax = MEM32(ecx + 0x8); /* 0x0062675F: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ecx); /* 0x00626762: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00626763: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x00626767: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x0062676B: mov ecx, ebx */
    RECOMP_CALL(sub_0040B6F0); /* 0x0062676D: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x00626772: mov ecx, dword ptr [esi] */
L_00626774:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x00626774: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x00626777: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x0062677A: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx); /* 0x0062677E: mov eax, dword ptr [ecx] */
    ecx = ebx; /* 0x00626780: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x00626782: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00626783: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B750); /* 0x00626787: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_0062678C:
    edx = MEM32(ebp + (-0x10)); /* 0x0062678C: mov edx, dword ptr [ebp - 0x10] */
L_0062678F:
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x0062678F: mov byte ptr [edi + 0xc], 1 */
L_00626793:
    esi = edx + 0x10; /* 0x00626793: lea esi, [edx + 0x10] */
    MEM32(ebp + (-0x14)) = esi; /* 0x00626796: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626799: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x1C), 0x10u */ /* 0x006267A0: cmp dword ptr [esi + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x006267A4: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_006267B7; /* 0x006267AA: jb 0x6267b7 */
L_006267AC:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006267AC: push dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x006267AF: call edi */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x006267B1: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006267B4: add esp, 4 */
    _flag_k = FK_ADD;
L_006267B7:
    MEM32(esi + 0x1C) = 0xFu; /* 0x006267B7: mov dword ptr [esi + 0x1c], 0xf */
    MEM32(esi + 0x18) = 0; /* 0x006267BE: mov dword ptr [esi + 0x18], 0 */
    PUSH32(esp, edx); /* 0x006267C5: push edx */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x006267C6: mov byte ptr [esi + 8], 0 */
    RECOMP_ICALL(edi); /* 0x006267CA: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x006267CC: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006267CF: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x006267D2: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x006267D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006267DD; /* 0x006267D7: je 0x6267dd */
L_006267D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006267D9: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x4) = eax; /* 0x006267DA: mov dword ptr [ebx + 4], eax */
L_006267DD:
    eax = MEM32(ebp + 0x8); /* 0x006267DD: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x006267E0: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x006267E2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006267E5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006267EC: pop ecx */
    edi = POP32_VAL(esp); /* 0x006267ED: pop edi */
    esi = POP32_VAL(esp); /* 0x006267EE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006267EF: pop ebx */
    esp = ebp; /* 0x006267F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006267F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006267F3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00626800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626800u);

L_00626800:
    PUSH32(esp, ebp); /* 0x00626800: push ebp */
    ebp = esp; /* 0x00626801: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626803: push -1 */
    PUSH32(esp, 0x007B7BEBu); /* 0x00626805: push 0x7b7beb */
    eax = MEM32(FS_BASE + (0)); /* 0x0062680A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626810: push eax */
    PUSH32(esp, ecx); /* 0x00626811: push ecx */
    PUSH32(esp, ebx); /* 0x00626812: push ebx */
    PUSH32(esp, esi); /* 0x00626813: push esi */
    PUSH32(esp, edi); /* 0x00626814: push edi */
    eax = MEM32(0x855000); /* 0x00626815: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062681A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062681C: push eax */
    eax = ebp + (-0xC); /* 0x0062681D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626820: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00626826: mov dword ptr [ebp - 0x10], ecx */
    ebx = MEM32(ebp + 0x8); /* 0x00626829: mov ebx, dword ptr [ebp + 8] */
    esi = ebx; /* 0x0062682C: mov esi, ebx */
    /* cmp MEM8(ebx + 0xD), 0 */ /* 0x0062682E: cmp byte ptr [ebx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626884; /* 0x00626832: jne 0x626884 */
L_00626834:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x00626834: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_00626800); /* 0x00626837: call 0x626800 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x0062683C: mov esi, dword ptr [esi] */
    edi = ebx + 0x10; /* 0x0062683E: lea edi, [ebx + 0x10] */
    MEM32(ebp + 0x8) = edi; /* 0x00626841: mov dword ptr [ebp + 8], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626844: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(edi + 0x1C), 0x10u */ /* 0x0062684B: cmp dword ptr [edi + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062685D; /* 0x0062684F: jb 0x62685d */
L_00626851:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x00626851: push dword ptr [edi + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00626854: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062685A: add esp, 4 */
    _flag_k = FK_ADD;
L_0062685D:
    MEM32(edi + 0x1C) = 0xFu; /* 0x0062685D: mov dword ptr [edi + 0x1c], 0xf */
    MEM32(edi + 0x18) = 0; /* 0x00626864: mov dword ptr [edi + 0x18], 0 */
    PUSH32(esp, ebx); /* 0x0062686B: push ebx */
    MEM8(edi + 0x8) = (uint8_t)(0); /* 0x0062686C: mov byte ptr [edi + 8], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00626870: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x00626876: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00626879: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x0062687C: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = esi; /* 0x00626880: mov ebx, esi */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00626834; /* 0x00626882: je 0x626834 */
L_00626884:
    ecx = MEM32(ebp + (-0xC)); /* 0x00626884: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626887: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062688E: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062688F: pop edi */
    esi = POP32_VAL(esp); /* 0x00626890: pop esi */
    ebx = POP32_VAL(esp); /* 0x00626891: pop ebx */
    esp = ebp; /* 0x00626892: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626894: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00626895: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006268A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006268A0u);

L_006268A0:
    PUSH32(esp, ebp); /* 0x006268A0: push ebp */
    ebp = esp; /* 0x006268A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006268A3: push -1 */
    PUSH32(esp, 0x007B7C1Au); /* 0x006268A5: push 0x7b7c1a */
    eax = MEM32(FS_BASE + (0)); /* 0x006268AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006268B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006268B1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006268B4: push ebx */
    PUSH32(esp, esi); /* 0x006268B5: push esi */
    PUSH32(esp, edi); /* 0x006268B6: push edi */
    eax = MEM32(0x855000); /* 0x006268B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006268BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006268BE: push eax */
    eax = ebp + (-0xC); /* 0x006268BF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006268C2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006268C8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x14u); /* 0x006268CB: push 0x14 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006268CD: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006268D3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x006268D6: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x006268D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006268E3; /* 0x006268DB: jne 0x6268e3 */
L_006268DD:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x006268DD: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_006268E3:
    ecx = MEM32(ebp + 0x8); /* 0x006268E3: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x006268E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006268F0; /* 0x006268E8: jne 0x6268f0 */
L_006268EA:
    ecx = eax; /* 0x006268EA: mov ecx, eax */
    edx = eax; /* 0x006268EC: mov edx, eax */
    goto L_006268F3; /* 0x006268EE: jmp 0x6268f3 */
L_006268F0:
    edx = MEM32(ebp + 0xC); /* 0x006268F0: mov edx, dword ptr [ebp + 0xc] */
L_006268F3:
    MEM32(ebp + (-0x4)) = 1; /* 0x006268F3: mov dword ptr [ebp - 4], 1 */
    MEM32(eax) = ecx; /* 0x006268FA: mov dword ptr [eax], ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006268FC: mov byte ptr [ebp - 4], 0 */
    ecx = eax + 0x4; /* 0x00626900: lea ecx, [eax + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00626903: mov byte ptr [ebp - 4], 2 */
    /* test ecx, ecx */ /* 0x00626907: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062690D; /* 0x00626909: je 0x62690d */
L_0062690B:
    MEM32(ecx) = edx; /* 0x0062690B: mov dword ptr [ecx], edx */
L_0062690D:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062690D: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626911: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x00626918: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062691B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626922: pop ecx */
    edi = POP32_VAL(esp); /* 0x00626923: pop edi */
    esi = POP32_VAL(esp); /* 0x00626924: pop esi */
    ebx = POP32_VAL(esp); /* 0x00626925: pop ebx */
    esp = ebp; /* 0x00626926: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626928: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00626929: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0062692C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062692Cu);

L_0062692C:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x0062692C: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062692F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00626935: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00626938: push 0 */
    PUSH32(esp, 0); /* 0x0062693A: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0062693C: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00626941u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00626950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626950u);

L_00626950:
    PUSH32(esp, ebp); /* 0x00626950: push ebp */
    ebp = esp; /* 0x00626951: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626953: push -1 */
    PUSH32(esp, 0x007B7C79u); /* 0x00626955: push 0x7b7c79 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062695A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626960: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x00626961: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00626964: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00626969: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0062696B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0062696E: push ebx */
    PUSH32(esp, esi); /* 0x0062696F: push esi */
    PUSH32(esp, edi); /* 0x00626970: push edi */
    PUSH32(esp, eax); /* 0x00626971: push eax */
    eax = ebp + (-0xC); /* 0x00626972: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626975: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x0062697B: mov esi, edx */
    MEM32(ebp + (-0x50)) = ecx; /* 0x0062697D: mov dword ptr [ebp - 0x50], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00626980: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = ebx; /* 0x00626982: mov dword ptr [ebp - 0x4c], ebx */
    MEM32(ebp + (-0x64)) = ebx; /* 0x00626985: mov dword ptr [ebp - 0x64], ebx */
    MEM32(ebp + (-0x60)) = ebx; /* 0x00626988: mov dword ptr [ebp - 0x60], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x0062698B: mov dword ptr [ebp - 4], ebx */
    edi = MEM32(ebp + 0x8); /* 0x0062698E: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x00626991: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00626A76; /* 0x00626993: je 0x626a76 */
L_00626999:
    /* cmp MEM16(esi + 0xE), 3 */ /* 0x00626999: cmp word ptr [esi + 0xe], 3 */
    _flag_a = (uint32_t)(MEM16(esi + 0xE)) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006269CE; /* 0x0062699E: jne 0x6269ce */
L_006269A0:
    PUSH32(esp, 0x007CCE4Cu); /* 0x006269A0: push 0x7cce4c */
    ecx = ebp + (-0x2C); /* 0x006269A5: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_00409FA0); /* 0x006269A8: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006269AD: mov byte ptr [ebp - 4], 1 */
    eax = ebp + (-0x2C); /* 0x006269B1: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x006269B4: push 0 */
    ebx = 1; /* 0x006269B6: mov ebx, 1 */
    ecx = esi; /* 0x006269BB: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006269BD: push eax */
    MEM32(ebp + (-0x4C)) = ebx; /* 0x006269BE: mov dword ptr [ebp - 0x4c], ebx */
    RECOMP_CALL(sub_0060EE50); /* 0x006269C1: call 0x60ee50 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x45)) = (uint8_t)(0); /* 0x006269C6: mov byte ptr [ebp - 0x45], 0 */
    /* cmp eax, edi */ /* 0x006269CA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006269D2; /* 0x006269CC: je 0x6269d2 */
L_006269CE:
    MEM8(ebp + (-0x45)) = (uint8_t)(1); /* 0x006269CE: mov byte ptr [ebp - 0x45], 1 */
L_006269D2:
    MEM32(ebp + (-0x4)) = 0; /* 0x006269D2: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(0x7CC694); /* 0x006269D9: mov edi, dword ptr [0x7cc694] */
    /* test LO8(ebx), 1 */ /* 0x006269DF: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00626A0A; /* 0x006269E2: je 0x626a0a */
L_006269E4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x006269E4: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = ebx; /* 0x006269E7: mov dword ptr [ebp - 0x4c], ebx */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x006269EA: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006269F8; /* 0x006269EE: jb 0x6269f8 */
L_006269F0:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x006269F0: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(edi); /* 0x006269F3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006269F5: add esp, 4 */
    _flag_k = FK_ADD;
L_006269F8:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x006269F8: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006269FF: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00626A06: mov byte ptr [ebp - 0x2c], 0 */
L_00626A0A:
    /* cmp MEM8(ebp + (-0x45)), 0 */ /* 0x00626A0A: cmp byte ptr [ebp - 0x45], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x45))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00626A17; /* 0x00626A0E: je 0x626a17 */
L_00626A10:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x00626A10: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_00626AB0; /* 0x00626A12: jmp 0x626ab0 */
L_00626A17:
    PUSH32(esp, 0x007CCE54u); /* 0x00626A17: push 0x7cce54 */
    ecx = ebp + (-0x44); /* 0x00626A1C: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_00409FA0); /* 0x00626A1F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00626A24: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x44); /* 0x00626A28: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x00626A2B: push eax */
    eax = ebp + (-0x24); /* 0x00626A2C: lea eax, [ebp - 0x24] */
    ecx = esi; /* 0x00626A2F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00626A31: push eax */
    RECOMP_CALL(sub_005C67A0); /* 0x00626A32: call 0x5c67a0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00626A37: mov byte ptr [ebp - 4], 3 */
    ecx = ebp + (-0x64); /* 0x00626A3B: lea ecx, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x00626A3E: push eax */
    RECOMP_CALL(sub_005C6340); /* 0x00626A3F: call 0x5c6340 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00626A44: mov byte ptr [ebp - 4], 2 */
    ecx = ebp + (-0x24); /* 0x00626A48: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_005C6270); /* 0x00626A4B: call 0x5c6270 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00626A50: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00626A54: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00626A62; /* 0x00626A58: jb 0x626a62 */
L_00626A5A:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00626A5A: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(edi); /* 0x00626A5D: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00626A5F: add esp, 4 */
    _flag_k = FK_ADD;
L_00626A62:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00626A62: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00626A69: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00626A70: mov byte ptr [ebp - 0x44], 0 */
    goto L_00626A9A; /* 0x00626A74: jmp 0x626a9a */
L_00626A76:
    eax = ebp + (-0x24); /* 0x00626A76: lea eax, [ebp - 0x24] */
    ecx = esi; /* 0x00626A79: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00626A7B: push eax */
    RECOMP_CALL(sub_0061DEC0); /* 0x00626A7C: call 0x61dec0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00626A81: mov byte ptr [ebp - 4], 4 */
    ecx = ebp + (-0x64); /* 0x00626A85: lea ecx, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x00626A88: push eax */
    RECOMP_CALL(sub_005C6340); /* 0x00626A89: call 0x5c6340 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00626A8E: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x24); /* 0x00626A92: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_005C6270); /* 0x00626A95: call 0x5c6270 */
    RECOMP_FLAGS_IN();
L_00626A9A:
    eax = ebp + (-0x64); /* 0x00626A9A: lea eax, [ebp - 0x64] */
    ecx = 0x00865E98u; /* 0x00626A9D: mov ecx, 0x865e98 */
    PUSH32(esp, eax); /* 0x00626AA2: push eax */
    eax = MEM32(0x865E98); /* 0x00626AA3: mov eax, dword ptr [0x865e98] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x00626AA8: push dword ptr [ebp - 0x50] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x00626AAB: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, 1); /* 0x00626AAE: mov bl, 1 */
L_00626AB0:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626AB0: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x64); /* 0x00626AB7: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_005C6270); /* 0x00626ABA: call 0x5c6270 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x00626ABF: mov al, bl */
    ecx = MEM32(ebp + (-0xC)); /* 0x00626AC1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626AC4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626ACB: pop ecx */
    edi = POP32_VAL(esp); /* 0x00626ACC: pop edi */
    esi = POP32_VAL(esp); /* 0x00626ACD: pop esi */
    ebx = POP32_VAL(esp); /* 0x00626ACE: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x00626ACF: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00626AD2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00626AD4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00626AD9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626ADB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00626ADC: ret  */
    RECOMP_REGS_OUT();
}

void sub_00626AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626AE0u);

L_00626AE0:
    PUSH32(esp, ebp); /* 0x00626AE0: push ebp */
    ebp = esp; /* 0x00626AE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626AE3: push -1 */
    PUSH32(esp, 0x007B7CB0u); /* 0x00626AE5: push 0x7b7cb0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00626AEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626AF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x00626AF1: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00626AF4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00626AF9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x00626AFB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x00626AFE: push ebx */
    PUSH32(esp, esi); /* 0x00626AFF: push esi */
    PUSH32(esp, edi); /* 0x00626B00: push edi */
    PUSH32(esp, eax); /* 0x00626B01: push eax */
    eax = ebp + (-0xC); /* 0x00626B02: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626B05: mov dword ptr fs:[0], eax */
    edi = edx; /* 0x00626B0B: mov edi, edx */
    eax = ecx; /* 0x00626B0D: mov eax, ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x00626B0F: mov dword ptr [ebp - 0x30], eax */
    ebx = MEM32(ebp + 0x8); /* 0x00626B12: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x00626B15: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00626BE2; /* 0x00626B17: je 0x626be2 */
L_00626B1D:
    ecx = edi + 0x50; /* 0x00626B1D: lea ecx, [edi + 0x50] */
    RECOMP_CALL(sub_0053C6C0); /* 0x00626B20: call 0x53c6c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CCE4Cu); /* 0x00626B25: push 0x7cce4c */
    ecx = ebp + (-0x2C); /* 0x00626B2A: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_00409FA0); /* 0x00626B2D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00626B32: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x2C); /* 0x00626B39: lea eax, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x00626B3C: push ebx */
    PUSH32(esp, eax); /* 0x00626B3D: push eax */
    ecx = edi; /* 0x00626B3E: mov ecx, edi */
    RECOMP_CALL(sub_0060ECA0); /* 0x00626B40: call 0x60eca0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626B45: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00626B4C: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00626B5E; /* 0x00626B50: jb 0x626b5e */
L_00626B52:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00626B52: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00626B55: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00626B5B: add esp, 4 */
    _flag_k = FK_ADD;
L_00626B5E:
    PUSH32(esp, 0x007CCE54u); /* 0x00626B5E: push 0x7cce54 */
    ecx = ebp + (-0x2C); /* 0x00626B63: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00626B66: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00626B6D: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00626B74: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00626B78: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00626B7D: mov dword ptr [ebp - 4], 1 */
    ebx = ebp + (-0x2C); /* 0x00626B84: lea ebx, [ebp - 0x2c] */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00626B87: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x2C)); } /* 0x00626B8B: cmovae ebx, dword ptr [ebp - 0x2c] */
    esi = ebx; /* 0x00626B8F: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x00626B91: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00626B9C; /* 0x00626B94: je 0x626b9c */
L_00626B96:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00626B96: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x00626B97: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00626B96; /* 0x00626B9A: jne 0x626b96 */
L_00626B9C:
    PUSH32(esp, ecx); /* 0x00626B9C: push ecx */
    ecx = edi + 0x50; /* 0x00626B9D: lea ecx, [edi + 0x50] */
    RECOMP_CALL(sub_0053D290); /* 0x00626BA0: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00626BA5: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = edi + 0x50; /* 0x00626BA7: lea ecx, [edi + 0x50] */
    PUSH32(esp, esi); /* 0x00626BAA: push esi */
    PUSH32(esp, ebx); /* 0x00626BAB: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x00626BAC: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626BB1: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00626BB8: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00626BCA; /* 0x00626BBC: jb 0x626bca */
L_00626BBE:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00626BBE: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00626BC1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00626BC7: add esp, 4 */
    _flag_k = FK_ADD;
L_00626BCA:
    ebx = MEM32(ebp + 0x8); /* 0x00626BCA: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x30)); /* 0x00626BCD: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00626BD0: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00626BD7: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00626BDE: mov byte ptr [ebp - 0x2c], 0 */
L_00626BE2:
    PUSH32(esp, edi); /* 0x00626BE2: push edi */
    PUSH32(esp, eax); /* 0x00626BE3: push eax */
    eax = MEM32(0x865E98); /* 0x00626BE4: mov eax, dword ptr [0x865e98] */
    ecx = 0x00865E98u; /* 0x00626BE9: mov ecx, 0x865e98 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x00626BEE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x00626BF1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00626C1A; /* 0x00626BF3: je 0x626c1a */
L_00626BF5:
    _flag_a = (uint32_t)(MEM32(edi + 0x60)); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x60) = MEM32(edi + 0x60) + 0xFFFFFFF8u; /* 0x00626BF5: add dword ptr [edi + 0x60], -8 */
    _flag_k = FK_ADD;
    esi = MEM32(edi + 0x50); /* 0x00626BF9: mov esi, dword ptr [edi + 0x50] */
    eax = MEM32(esi + 0xC); /* 0x00626BFC: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00626BFF: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x00626C00: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00626C0E; /* 0x00626C03: jbe 0x626c0e */
L_00626C05:
    PUSH32(esp, 1); /* 0x00626C05: push 1 */
    ecx = esi; /* 0x00626C07: mov ecx, esi */
    RECOMP_CALL(sub_0053EDC0); /* 0x00626C09: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_00626C0E:
    ecx = MEM32(esi + 0xC); /* 0x00626C0E: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x1; /* 0x00626C11: lea eax, [ecx + 1] */
    MEM32(esi + 0xC) = eax; /* 0x00626C14: mov dword ptr [esi + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x7Du); /* 0x00626C17: mov byte ptr [ecx], 0x7d */
L_00626C1A:
    ecx = MEM32(ebp + (-0xC)); /* 0x00626C1A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626C1D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626C24: pop ecx */
    edi = POP32_VAL(esp); /* 0x00626C25: pop edi */
    esi = POP32_VAL(esp); /* 0x00626C26: pop esi */
    ebx = POP32_VAL(esp); /* 0x00626C27: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x00626C28: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00626C2B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00626C2D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00626C32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626C34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00626C35: ret  */
    RECOMP_REGS_OUT();
}

void sub_00626C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626C40u);

L_00626C40:
    PUSH32(esp, ebp); /* 0x00626C40: push ebp */
    ebp = esp; /* 0x00626C41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626C43: push -1 */
    PUSH32(esp, 0x00781C75u); /* 0x00626C45: push 0x781c75 */
    eax = MEM32(FS_BASE + (0)); /* 0x00626C4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626C50: push eax */
    eax = MEM32(0x855000); /* 0x00626C51: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00626C56: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00626C58: push eax */
    eax = ebp + (-0xC); /* 0x00626C59: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626C5C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00626C62: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(ebp + 0x8); /* 0x00626C69: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x00626C6C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00626C78; /* 0x00626C6E: je 0x626c78 */
L_00626C70:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00626C70: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_00628580); /* 0x00626C73: call 0x628580 */
    RECOMP_FLAGS_IN();
L_00626C78:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626C78: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x00626C7F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626C82: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626C89: pop ecx */
    esp = ebp; /* 0x00626C8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626C8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00626C8D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00626C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626C90u);

L_00626C90:
    PUSH32(esp, ebp); /* 0x00626C90: push ebp */
    ebp = esp; /* 0x00626C91: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00626C93: push esi */
    PUSH32(esp, edi); /* 0x00626C94: push edi */
    edi = ecx; /* 0x00626C95: mov edi, ecx */
    PUSH32(esp, ecx); /* 0x00626C97: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00626C98: push dword ptr [ebp + 0x10] */
    eax = MEM32(edi); /* 0x00626C9B: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x00626C9D: push ecx */
    esi = MEM32(eax); /* 0x00626C9E: mov esi, dword ptr [eax] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x00626CA0: push dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x00626CA3: push esi */
    RECOMP_CALL(sub_00628930); /* 0x00626CA4: call 0x628930 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00626CA9: mov edx, eax */
    ecx = 0x15555554u; /* 0x00626CAB: mov ecx, 0x15555554 */
    eax = MEM32(edi + 0x4); /* 0x00626CB0: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00626CB3: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 1 */ /* 0x00626CB5: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00626CC5; /* 0x00626CB8: jae 0x626cc5 */
L_00626CBA:
    PUSH32(esp, 0x007E1400u); /* 0x00626CBA: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00626CBF: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00626CC5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00626CC5: inc eax */
    _flag_k = FK_INC;
    ecx = edi; /* 0x00626CC6: mov ecx, edi */
    MEM32(edi + 0x4) = eax; /* 0x00626CC8: mov dword ptr [edi + 4], eax */
    MEM32(esi + 0x4) = edx; /* 0x00626CCB: mov dword ptr [esi + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x00626CCE: mov eax, dword ptr [edx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x00626CD1: mov esi, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x00626CD4: mov dword ptr [eax], edx */
    eax = MEM32(edi); /* 0x00626CD6: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x00626CD8: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00626CDA: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x00626CDB: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00626CDE: push eax */
    PUSH32(esp, esi); /* 0x00626CDF: push esi */
    RECOMP_CALL(sub_00627980); /* 0x00626CE0: call 0x627980 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00626CE5: pop edi */
    eax = esi; /* 0x00626CE6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00626CE8: pop esi */
    ebp = POP32_VAL(esp); /* 0x00626CE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00626CEA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00626CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626CF0u);

L_00626CF0:
    PUSH32(esp, ebp); /* 0x00626CF0: push ebp */
    ebp = esp; /* 0x00626CF1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00626CF3: push esi */
    PUSH32(esp, edi); /* 0x00626CF4: push edi */
    edi = ecx; /* 0x00626CF5: mov edi, ecx */
    PUSH32(esp, ecx); /* 0x00626CF7: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00626CF8: push dword ptr [ebp + 0x10] */
    eax = MEM32(edi); /* 0x00626CFB: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x00626CFD: push ecx */
    esi = MEM32(eax); /* 0x00626CFE: mov esi, dword ptr [eax] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x00626D00: push dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x00626D03: push esi */
    RECOMP_CALL(sub_006289D0); /* 0x00626D04: call 0x6289d0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00626D09: mov edx, eax */
    ecx = 0x0FFFFFFEu; /* 0x00626D0B: mov ecx, 0xffffffe */
    eax = MEM32(edi + 0x4); /* 0x00626D10: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00626D13: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 1 */ /* 0x00626D15: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00626D25; /* 0x00626D18: jae 0x626d25 */
L_00626D1A:
    PUSH32(esp, 0x007E1400u); /* 0x00626D1A: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00626D1F: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00626D25:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00626D25: inc eax */
    _flag_k = FK_INC;
    ecx = edi; /* 0x00626D26: mov ecx, edi */
    MEM32(edi + 0x4) = eax; /* 0x00626D28: mov dword ptr [edi + 4], eax */
    MEM32(esi + 0x4) = edx; /* 0x00626D2B: mov dword ptr [esi + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x00626D2E: mov eax, dword ptr [edx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x00626D31: mov esi, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x00626D34: mov dword ptr [eax], edx */
    eax = MEM32(edi); /* 0x00626D36: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x00626D38: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00626D3A: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x00626D3B: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00626D3E: push eax */
    PUSH32(esp, esi); /* 0x00626D3F: push esi */
    RECOMP_CALL(sub_0061B670); /* 0x00626D40: call 0x61b670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00626D45: pop edi */
    eax = esi; /* 0x00626D46: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00626D48: pop esi */
    ebp = POP32_VAL(esp); /* 0x00626D49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00626D4A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00626D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626D50u);

L_00626D50:
    PUSH32(esp, ebp); /* 0x00626D50: push ebp */
    ebp = esp; /* 0x00626D51: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00626D53: push esi */
    PUSH32(esp, edi); /* 0x00626D54: push edi */
    edi = ecx; /* 0x00626D55: mov edi, ecx */
    PUSH32(esp, ecx); /* 0x00626D57: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00626D58: push dword ptr [ebp + 0x10] */
    eax = MEM32(edi); /* 0x00626D5B: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x00626D5D: push ecx */
    esi = MEM32(eax); /* 0x00626D5E: mov esi, dword ptr [eax] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x00626D60: push dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x00626D63: push esi */
    RECOMP_CALL(sub_00628A70); /* 0x00626D64: call 0x628a70 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00626D69: mov edx, eax */
    ecx = 0x0CCCCCCBu; /* 0x00626D6B: mov ecx, 0xccccccb */
    eax = MEM32(edi + 0x4); /* 0x00626D70: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00626D73: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 1 */ /* 0x00626D75: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00626D85; /* 0x00626D78: jae 0x626d85 */
L_00626D7A:
    PUSH32(esp, 0x007E1400u); /* 0x00626D7A: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00626D7F: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00626D85:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00626D85: inc eax */
    _flag_k = FK_INC;
    ecx = edi; /* 0x00626D86: mov ecx, edi */
    MEM32(edi + 0x4) = eax; /* 0x00626D88: mov dword ptr [edi + 4], eax */
    MEM32(esi + 0x4) = edx; /* 0x00626D8B: mov dword ptr [esi + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x00626D8E: mov eax, dword ptr [edx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x00626D91: mov esi, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x00626D94: mov dword ptr [eax], edx */
    eax = MEM32(edi); /* 0x00626D96: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x00626D98: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00626D9A: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x00626D9B: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00626D9E: push eax */
    PUSH32(esp, esi); /* 0x00626D9F: push esi */
    RECOMP_CALL(sub_0061B670); /* 0x00626DA0: call 0x61b670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00626DA5: pop edi */
    eax = esi; /* 0x00626DA6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00626DA8: pop esi */
    ebp = POP32_VAL(esp); /* 0x00626DA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00626DAA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00626DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626DB0u);

L_00626DB0:
    PUSH32(esp, ebp); /* 0x00626DB0: push ebp */
    ebp = esp; /* 0x00626DB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00626DB3: push esi */
    PUSH32(esp, edi); /* 0x00626DB4: push edi */
    edi = ecx; /* 0x00626DB5: mov edi, ecx */
    PUSH32(esp, ecx); /* 0x00626DB7: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00626DB8: push dword ptr [ebp + 0x10] */
    eax = MEM32(edi); /* 0x00626DBB: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x00626DBD: push ecx */
    esi = MEM32(eax); /* 0x00626DBE: mov esi, dword ptr [eax] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x00626DC0: push dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x00626DC3: push esi */
    RECOMP_CALL(sub_00628B10); /* 0x00626DC4: call 0x628b10 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00626DC9: mov edx, eax */
    ecx = 0x0CCCCCCBu; /* 0x00626DCB: mov ecx, 0xccccccb */
    eax = MEM32(edi + 0x4); /* 0x00626DD0: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00626DD3: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 1 */ /* 0x00626DD5: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00626DE5; /* 0x00626DD8: jae 0x626de5 */
L_00626DDA:
    PUSH32(esp, 0x007E1400u); /* 0x00626DDA: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00626DDF: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00626DE5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00626DE5: inc eax */
    _flag_k = FK_INC;
    ecx = edi; /* 0x00626DE6: mov ecx, edi */
    MEM32(edi + 0x4) = eax; /* 0x00626DE8: mov dword ptr [edi + 4], eax */
    MEM32(esi + 0x4) = edx; /* 0x00626DEB: mov dword ptr [esi + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x00626DEE: mov eax, dword ptr [edx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x00626DF1: mov esi, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x00626DF4: mov dword ptr [eax], edx */
    eax = MEM32(edi); /* 0x00626DF6: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x00626DF8: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00626DFA: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x00626DFB: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00626DFE: push eax */
    PUSH32(esp, esi); /* 0x00626DFF: push esi */
    RECOMP_CALL(sub_00627980); /* 0x00626E00: call 0x627980 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00626E05: pop edi */
    eax = esi; /* 0x00626E06: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00626E08: pop esi */
    ebp = POP32_VAL(esp); /* 0x00626E09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00626E0A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00626E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626E10u);

L_00626E10:
    PUSH32(esp, ebp); /* 0x00626E10: push ebp */
    ebp = esp; /* 0x00626E11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626E13: push -1 */
    PUSH32(esp, 0x007B7CE8u); /* 0x00626E15: push 0x7b7ce8 */
    eax = MEM32(FS_BASE + (0)); /* 0x00626E1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626E20: push eax */
    PUSH32(esp, ecx); /* 0x00626E21: push ecx */
    eax = MEM32(0x855000); /* 0x00626E22: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00626E27: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00626E29: push eax */
    eax = ebp + (-0xC); /* 0x00626E2A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626E2D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 0x009281B0u; /* 0x00626E33: mov dword ptr [ebp - 0x10], 0x9281b0 */
    MEM32(0x9281B0) = 0x007F8E20u; /* 0x00626E3A: mov dword ptr [0x9281b0], 0x7f8e20 */
    MEM32(0x9281B4) = 0x007F9128u; /* 0x00626E44: mov dword ptr [0x9281b4], 0x7f9128 */
    MEM32(0x9281B8) = 0xCu; /* 0x00626E4E: mov dword ptr [0x9281b8], 0xc */
    MEM32(ebp + (-0x4)) = 0; /* 0x00626E58: mov dword ptr [ebp - 4], 0 */
    MEM32(0x9281B0) = 0x007F8E48u; /* 0x00626E5F: mov dword ptr [0x9281b0], 0x7f8e48 */
    MEM32(0x9281BC) = 0x00865E68u; /* 0x00626E69: mov dword ptr [0x9281bc], 0x865e68 */
    MEM32(0x9281C0) = 0x00626FF0u; /* 0x00626E73: mov dword ptr [0x9281c0], 0x626ff0 */
    MEM32(0x9281C4) = 0x00627010u; /* 0x00626E7D: mov dword ptr [0x9281c4], 0x627010 */
    MEM32(0x9281C8) = 0x00627030u; /* 0x00626E87: mov dword ptr [0x9281c8], 0x627030 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626E91: mov dword ptr [ebp - 4], 0xffffffff */
    eax = 0x009281B0u; /* 0x00626E98: mov eax, 0x9281b0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00626E9D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626EA0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626EA7: pop ecx */
    esp = ebp; /* 0x00626EA8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626EAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00626EAB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00626EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626EB0u);

L_00626EB0:
    PUSH32(esp, ebp); /* 0x00626EB0: push ebp */
    ebp = esp; /* 0x00626EB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626EB3: push -1 */
    PUSH32(esp, 0x007B7CE8u); /* 0x00626EB5: push 0x7b7ce8 */
    eax = MEM32(FS_BASE + (0)); /* 0x00626EBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626EC0: push eax */
    PUSH32(esp, ecx); /* 0x00626EC1: push ecx */
    eax = MEM32(0x855000); /* 0x00626EC2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00626EC7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00626EC9: push eax */
    eax = ebp + (-0xC); /* 0x00626ECA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626ECD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 0x009281D0u; /* 0x00626ED3: mov dword ptr [ebp - 0x10], 0x9281d0 */
    MEM32(0x9281D0) = 0x007F8E20u; /* 0x00626EDA: mov dword ptr [0x9281d0], 0x7f8e20 */
    MEM32(0x9281D4) = 0x007F9128u; /* 0x00626EE4: mov dword ptr [0x9281d4], 0x7f9128 */
    MEM32(0x9281D8) = 0xCu; /* 0x00626EEE: mov dword ptr [0x9281d8], 0xc */
    MEM32(ebp + (-0x4)) = 0; /* 0x00626EF8: mov dword ptr [ebp - 4], 0 */
    MEM32(0x9281D0) = 0x007F8E48u; /* 0x00626EFF: mov dword ptr [0x9281d0], 0x7f8e48 */
    MEM32(0x9281DC) = 0x00865E80u; /* 0x00626F09: mov dword ptr [0x9281dc], 0x865e80 */
    MEM32(0x9281E0) = 0x00627040u; /* 0x00626F13: mov dword ptr [0x9281e0], 0x627040 */
    MEM32(0x9281E4) = 0x00627050u; /* 0x00626F1D: mov dword ptr [0x9281e4], 0x627050 */
    MEM32(0x9281E8) = 0x00627060u; /* 0x00626F27: mov dword ptr [0x9281e8], 0x627060 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626F31: mov dword ptr [ebp - 4], 0xffffffff */
    eax = 0x009281D0u; /* 0x00626F38: mov eax, 0x9281d0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00626F3D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626F40: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626F47: pop ecx */
    esp = ebp; /* 0x00626F48: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626F4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00626F4B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00626F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626F50u);

L_00626F50:
    PUSH32(esp, ebp); /* 0x00626F50: push ebp */
    ebp = esp; /* 0x00626F51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00626F53: push -1 */
    PUSH32(esp, 0x007B7CE8u); /* 0x00626F55: push 0x7b7ce8 */
    eax = MEM32(FS_BASE + (0)); /* 0x00626F5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00626F60: push eax */
    PUSH32(esp, ecx); /* 0x00626F61: push ecx */
    eax = MEM32(0x855000); /* 0x00626F62: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00626F67: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00626F69: push eax */
    eax = ebp + (-0xC); /* 0x00626F6A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00626F6D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 0x009281ECu; /* 0x00626F73: mov dword ptr [ebp - 0x10], 0x9281ec */
    MEM32(0x9281EC) = 0x007F8E20u; /* 0x00626F7A: mov dword ptr [0x9281ec], 0x7f8e20 */
    MEM32(0x9281F0) = 0x007F9128u; /* 0x00626F84: mov dword ptr [0x9281f0], 0x7f9128 */
    MEM32(0x9281F4) = 0xCu; /* 0x00626F8E: mov dword ptr [0x9281f4], 0xc */
    MEM32(ebp + (-0x4)) = 0; /* 0x00626F98: mov dword ptr [ebp - 4], 0 */
    MEM32(0x9281EC) = 0x007F8E48u; /* 0x00626F9F: mov dword ptr [0x9281ec], 0x7f8e48 */
    MEM32(0x9281F8) = 0x00865E38u; /* 0x00626FA9: mov dword ptr [0x9281f8], 0x865e38 */
    MEM32(0x9281FC) = 0x00627070u; /* 0x00626FB3: mov dword ptr [0x9281fc], 0x627070 */
    MEM32(0x928200) = 0x00627090u; /* 0x00626FBD: mov dword ptr [0x928200], 0x627090 */
    MEM32(0x928204) = 0x006270B0u; /* 0x00626FC7: mov dword ptr [0x928204], 0x6270b0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00626FD1: mov dword ptr [ebp - 4], 0xffffffff */
    eax = 0x009281ECu; /* 0x00626FD8: mov eax, 0x9281ec */
    ecx = MEM32(ebp + (-0xC)); /* 0x00626FDD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00626FE0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00626FE7: pop ecx */
    esp = ebp; /* 0x00626FE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00626FEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00626FEB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00626FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00626FF0u);

L_00626FF0:
    PUSH32(esp, ebp); /* 0x00626FF0: push ebp */
    ebp = esp; /* 0x00626FF1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00626FF3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x00626FF6: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x00626FF9: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x8C08C08Du; /* 0x00626FFB: mov eax, 0x8c08c08d */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00627000: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00627002: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00627004: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00627007: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627009: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627009: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0062700C: add eax, edx */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x0062700E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062700F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00627010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627010u);

L_00627010:
    PUSH32(esp, ebp); /* 0x00627010: push ebp */
    ebp = esp; /* 0x00627011: mov ebp, esp */
    eax = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)0x1D4u); /* 0x00627013: imul eax, dword ptr [ebp + 0xc], 0x1d4 */
    ecx = MEM32(ebp + 0x8); /* 0x0062701A: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x0062701D: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x0062701F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00627020: ret  */
    RECOMP_REGS_OUT();
}
