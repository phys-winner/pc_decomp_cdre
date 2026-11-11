#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_110392A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110392A4u);

L_110392A4:
    PUSH32(esp, ebp); /* 0x110392A4: push ebp */
    ebp = esp; /* 0x110392A5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x70u; /* 0x110392A7: sub esp, 0x70 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110392AA: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110392AF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110392B1: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x110392B4: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x110392B7: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x110392B8: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x68)) = ecx; /* 0x110392BB: mov dword ptr [ebp - 0x68], ecx */
    PUSH32(esp, edi); /* 0x110392BE: push edi */
    edi = MEM32(ebp + 0x10); /* 0x110392BF: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x70)) = edi; /* 0x110392C2: mov dword ptr [ebp - 0x70], edi */
    /* test ebx, ebx */ /* 0x110392C5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110393AD; /* 0x110392C7: je 0x110393ad */
L_110392CD:
    fp_push(*(double*)ADDR(ecx)); /* 0x110392CD: fld qword ptr [ecx] */
    fp_push(0.0); /* 0x110392CF: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110392D1: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110392D3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110392D5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110393AD; /* 0x110392D8: jnp 0x110393ad */
L_110392DE:
    eax = ebp + (-0x1C); /* 0x110392DE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x110392E1: push esi */
    /* test ebx, ebx */ /* 0x110392E2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11039300; /* 0x110392E4: jle 0x11039300 */
L_110392E6:
    fp_push(*(double*)ADDR(0x110037C0)); /* 0x110392E6: fld qword ptr [0x110037c0] */
    PUSH32(esp, ecx); /* 0x110392EC: push ecx */
    PUSH32(esp, ecx); /* 0x110392ED: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110392EE: fstp qword ptr [esp] */
    PUSH32(esp, 3); /* 0x110392F1: push 3 */
    esi = POP32_VAL(esp); /* 0x110392F3: pop esi */
    PUSH32(esp, esi); /* 0x110392F4: push esi */
    PUSH32(esp, eax); /* 0x110392F5: push eax */
    RECOMP_CALL(sub_11039B94); /* 0x110392F6: call 0x11039b94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110392FB: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_11039314; /* 0x110392FE: jmp 0x11039314 */
L_11039300:
    PUSH32(esp, 0x11003810u); /* 0x11039300: push 0x11003810 */
    PUSH32(esp, 3); /* 0x11039305: push 3 */
    esi = POP32_VAL(esp); /* 0x11039307: pop esi */
    PUSH32(esp, esi); /* 0x11039308: push esi */
    PUSH32(esp, eax); /* 0x11039309: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1103930A: neg ebx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_110398FE); /* 0x1103930C: call 0x110398fe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11039311: add esp, 0xc */
    _flag_k = FK_ADD;
L_11039314:
    edi = MEM32(ebp + (-0x68)); /* 0x11039314: mov edi, dword ptr [ebp - 0x68] */
L_11039317:
    /* test LO8(ebx), 1 */ /* 0x11039317: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103932F; /* 0x1103931A: je 0x1103932f */
L_1103931C:
    eax = ebp + (-0x64); /* 0x1103931C: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1103931F: push eax */
    PUSH32(esp, esi); /* 0x11039320: push esi */
    eax = ebp + (-0x1C); /* 0x11039321: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11039324: push eax */
    PUSH32(esp, esi); /* 0x11039325: push esi */
    PUSH32(esp, edi); /* 0x11039326: push edi */
    RECOMP_CALL(sub_11039A99); /* 0x11039327: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1103932C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1103932F:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1103932F: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_11039359; /* 0x11039331: je 0x11039359 */
L_11039333:
    eax = ebp + (-0x1C); /* 0x11039333: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11039336: push eax */
    eax = ebp + (-0x34); /* 0x11039337: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x1103933A: push esi */
    PUSH32(esp, eax); /* 0x1103933B: push eax */
    RECOMP_CALL(sub_110398FE); /* 0x1103933C: call 0x110398fe */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x64); /* 0x11039341: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x11039344: push eax */
    PUSH32(esp, esi); /* 0x11039345: push esi */
    eax = ebp + (-0x34); /* 0x11039346: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11039349: push eax */
    eax = ebp + (-0x1C); /* 0x1103934A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x1103934D: push esi */
    PUSH32(esp, eax); /* 0x1103934E: push eax */
    RECOMP_CALL(sub_11039A99); /* 0x1103934F: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x11039354: add esp, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_11039317; /* 0x11039357: jmp 0x11039317 */
L_11039359:
    PUSH32(esp, esi); /* 0x11039359: push esi */
    PUSH32(esp, edi); /* 0x1103935A: push edi */
    RECOMP_CALL(sub_1103971A); /* 0x1103935B: call 0x1103971a */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x70)); /* 0x11039360: mov edi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x11039363: add esp, 8 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x6C)) = _st[0]; /* 0x11039366: fst qword ptr [ebp - 0x6c] */
    fp_push(0.0); /* 0x11039369: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103936B: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103936D: fnstsw ax */
    esi = POP32_VAL(esp); /* 0x1103936F: pop esi */
    /* test HI8(eax), 0x44u */ /* 0x11039370: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039393; /* 0x11039373: jnp 0x11039393 */
L_11039375:
    fp_push(*(double*)ADDR(0x11063168)); /* 0x11039375: fld qword ptr [0x11063168] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103937B: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103937D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103937F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039391; /* 0x11039382: jnp 0x11039391 */
L_11039384:
    _st[0] = -_st[0]; /* 0x11039384: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039386: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039388: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103938A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110393B7; /* 0x1103938D: jp 0x110393b7 */
L_1103938F:
    goto L_11039393; /* 0x1103938F: jmp 0x11039393 */
L_11039391:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039391: fstp st(0) */
L_11039393:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039393: fstp st(0) */
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x11039395: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x6C))); /* 0x1103939B: fld qword ptr [ebp - 0x6c] */
    MEM32(eax) = 0x22u; /* 0x1103939E: mov dword ptr [eax], 0x22 */
    /* test edi, edi */ /* 0x110393A4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110393B7; /* 0x110393A6: je 0x110393b7 */
L_110393A8:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x110393A8: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110393B7; /* 0x110393AB: jmp 0x110393b7 */
L_110393AD:
    PUSH32(esp, 3); /* 0x110393AD: push 3 */
    PUSH32(esp, ecx); /* 0x110393AF: push ecx */
    RECOMP_CALL(sub_1103971A); /* 0x110393B0: call 0x1103971a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110393B5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110393B6: pop ecx */
L_110393B7:
    ecx = MEM32(ebp + (-0x4)); /* 0x110393B7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x110393BA: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110393BB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x110393BD: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110393BE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110393C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110393C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110393C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110393C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110393C7u);

    goto L_110393C7;
L_1103848F:
    PUSH32(esp, ebp); /* 0x1103848F: push ebp */
    ebp = esp; /* 0x11038490: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11038492: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11038493: mov esi, dword ptr [ebp + 0xc] */
    edx = 0x7FFu; /* 0x11038496: mov edx, 0x7ff */
    SET_LO16(eax, MEM16(esi + 0x6)); /* 0x1103849B: mov ax, word ptr [esi + 6] */
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x1103849F: shr ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 4u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 4u); /* 0x1103849F: shr ax, 4 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x110384A3: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = (uint32_t)LO16(eax); /* 0x110384A6: movzx ecx, ax */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x110384A9: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110384D7; /* 0x110384AC: jne 0x110384d7 */
L_110384AE:
    eax = MEM32(ebp + 0x8); /* 0x110384AE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110384B1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x110384B3: mov word ptr [eax], cx */
    /* test MEM8(esi + 0x6), 0xFu */ /* 0x110384B6: test byte ptr [esi + 6], 0xf */
    _flag_a = (uint32_t)(MEM8(esi + 0x6)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110384D2; /* 0x110384BA: jne 0x110384d2 */
L_110384BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110384BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x110384BE: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110384D2; /* 0x110384C2: jne 0x110384d2 */
L_110384C4:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x110384C4: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110384D2; /* 0x110384C8: jne 0x110384d2 */
L_110384CA:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x110384CA: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110384D2; /* 0x110384CD: jne 0x110384d2 */
L_110384CF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110384CF: inc eax */
    _flag_k = FK_INC;
    goto L_11038520; /* 0x110384D0: jmp 0x11038520 */
L_110384D2:
    PUSH32(esp, 2); /* 0x110384D2: push 2 */
    eax = POP32_VAL(esp); /* 0x110384D4: pop eax */
    goto L_11038520; /* 0x110384D5: jmp 0x11038520 */
L_110384D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110384D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x110384D9: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_110384F9; /* 0x110384DC: jl 0x110384f9 */
L_110384DE:
    PUSH32(esp, esi); /* 0x110384DE: push esi */
    RECOMP_CALL(sub_110381FB); /* 0x110384DF: call 0x110381fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110384E4: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x110384E5: movzx ecx, ax */
    /* test LO16(ecx), LO16(ecx) */ /* 0x110384E8: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110384F9; /* 0x110384EB: jle 0x110384f9 */
L_110384ED:
    eax = MEM32(ebp + 0x8); /* 0x110384ED: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110384F0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x110384F2: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110384F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11038520; /* 0x110384F7: jmp 0x11038520 */
L_110384F9:
    SET_LO16(eax, MEM16(esi + 0x6)); /* 0x110384F9: mov ax, word ptr [esi + 6] */
    edx = 0xBFEFu; /* 0x110384FD: mov edx, 0xbfef */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x11038502: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFC02u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFC02u; /* 0x11038505: add ecx, 0xfffffc02 */
    _flag_k = FK_ADD;
    edx = 0x3FE0u; /* 0x1103850B: mov edx, 0x3fe0 */
    _flag_a = (uint32_t)((LO16(eax) | LO16(edx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edx)); /* 0x11038510: or ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x11038513: mov word ptr [esi + 6], ax */
    eax = MEM32(ebp + 0x8); /* 0x11038517: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1103851A: mov word ptr [eax], cx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1103851D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11038520:
    esi = POP32_VAL(esp); /* 0x11038520: pop esi */
    ebp = POP32_VAL(esp); /* 0x11038521: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038522: ret  */
L_110393C7:
    PUSH32(esp, ebp); /* 0x110393C7: push ebp */
    ebp = esp; /* 0x110393C8: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x110393CA: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1103848F; /* 0x110393CB: jmp 0x1103848f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110393D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110393D0u);

L_110393D0:
    PUSH32(esp, ebp); /* 0x110393D0: push ebp */
    ebp = esp; /* 0x110393D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x110393D3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x110393D6: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x110393D9: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x110393DA: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x110393DD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110393DE: mov edi, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x110393E1: fstp qword ptr [ebp - 0x10] */
    /* test ebx, ebx */ /* 0x110393E4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110396CE; /* 0x110393E6: je 0x110396ce */
L_110393EC:
    PUSH32(esp, esi); /* 0x110393EC: push esi */
    eax = ebp + (-0x10); /* 0x110393ED: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110393F0: push eax */
    eax = ebp + 0x8; /* 0x110393F1: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110393F4: push eax */
    RECOMP_CALL(sub_110393C7); /* 0x110393F5: call 0x110393c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110393FA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110393FB: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x110393FC: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110393FF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11039401: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103948A; /* 0x11039404: jge 0x1103948a */
L_1103940A:
    PUSH32(esp, 2); /* 0x1103940A: push 2 */
    esi = POP32_VAL(esp); /* 0x1103940C: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1103940D: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11039480; /* 0x11039410: je 0x11039480 */
L_11039412:
    PUSH32(esp, edi); /* 0x11039412: push edi */
    RECOMP_CALL(sub_11012D6A); /* 0x11039413: call 0x11012d6a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11039418: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x1103941B: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x1103941C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11039480; /* 0x1103941F: jle 0x11039480 */
L_11039421:
    /* cmp LO16(eax), LO16(esi) */ /* 0x11039421: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110396CD; /* 0x11039424: je 0x110396cd */
L_1103942A:
    PUSH32(esp, edi); /* 0x1103942A: push edi */
    RECOMP_CALL(sub_110127F4); /* 0x1103942B: call 0x110127f4 */
    RECOMP_FLAGS_IN();
    ecx = 0x8000u; /* 0x11039430: mov ecx, 0x8000 */
    SET_LO16(eax, MEM16(eax)); /* 0x11039435: mov ax, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x11039438: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = (uint32_t)LO16(eax); /* 0x1103943B: movzx esi, ax */
    eax = ebp + 0x10; /* 0x1103943E: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x11039441: push eax */
    RECOMP_CALL(sub_110127F4); /* 0x11039442: call 0x110127f4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11039447: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11039448: pop ecx */
    ecx = 0x8000u; /* 0x11039449: mov ecx, 0x8000 */
    SET_LO16(eax, MEM16(eax)); /* 0x1103944E: mov ax, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x11039451: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(eax), LO16(esi) */ /* 0x11039454: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110396CD; /* 0x11039457: je 0x110396cd */
L_1103945D:
    PUSH32(esp, 1); /* 0x1103945D: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x1103945F: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11063178)); /* 0x11039464: fld qword ptr [0x11063178] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1103946A: fstp qword ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x1103946C: pop ecx */
    /* cmp ebx, 1 */ /* 0x1103946D: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110396CD; /* 0x11039470: jle 0x110396cd */
L_11039476:
    fp_push(0.0); /* 0x11039476: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x8) = _v; } /* 0x11039478: fstp qword ptr [edi + 8] */
    goto L_110396CD; /* 0x1103947B: jmp 0x110396cd */
L_11039480:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11039480: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x11039483: fstp qword ptr [edi] */
    goto L_110396CD; /* 0x11039485: jmp 0x110396cd */
L_1103948A:
    /* test LO16(eax), LO16(eax) */ /* 0x1103948A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110396CD; /* 0x1103948D: jns 0x110396cd */
L_11039493:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11039493: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x800u; /* 0x11039495: mov dword ptr [ebp - 4], 0x800 */
    /* test ebx, ebx */ /* 0x1103949C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110396CD; /* 0x1103949E: jle 0x110396cd */
L_110394A4:
    eax = edi + esi * 8; /* 0x110394A4: lea eax, [edi + esi*8] */
    fp_push(*(double*)ADDR(eax)); /* 0x110394A7: fld qword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x110394A9: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x18); /* 0x110394AC: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x110394AF: push eax */
    eax = ebp + 0xC; /* 0x110394B0: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110394B3: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x110394B4: fstp qword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110393C7); /* 0x110394B7: call 0x110393c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110394BC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110394BD: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x110394BE: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110394C1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110394C3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_110396CD; /* 0x110394C6: jl 0x110396cd */
L_110394CC:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x110394CC: fld qword ptr [ebp + 0x10] */
    /* test LO16(eax), LO16(eax) */ /* 0x110394CF: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110396BD; /* 0x110394D2: je 0x110396bd */
L_110394D8:
    edx = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x110394D8: movsx edx, word ptr [ebp + 0xc] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x110394DC: movsx eax, word ptr [ebp + 8] */
    ecx = edx; /* 0x110394E0: mov ecx, edx */
    fp_push(0.0); /* 0x110394E2: fldz  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x110394E4: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0xFFFFFFE6u */ /* 0x110394E6: cmp ecx, -0x1a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE6u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_11039535; /* 0x110394E9: jg 0x11039535 */
L_110394EB:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110394EB: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110394ED: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110394EF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039535; /* 0x110394F2: jnp 0x11039535 */
L_110394F4:
    ecx = esi; /* 0x110394F4: mov ecx, esi */
L_110394F6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x110394F6: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x110394F7: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11039507; /* 0x110394F9: jge 0x11039507 */
L_110394FB:
    fp_push(*(double*)ADDR(edi + ecx * 8)); /* 0x110394FB: fld qword ptr [edi + ecx*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110394FE: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039500: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039502: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110394F6; /* 0x11039505: jp 0x110394f6 */
L_11039507:
    eax = ebx + (-0x1); /* 0x11039507: lea eax, [ebx - 1] */
    /* cmp ecx, eax */ /* 0x1103950A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11039511; /* 0x1103950C: jge 0x11039511 */
L_1103950E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103950E: inc ecx */
    _flag_k = FK_INC;
    goto L_11039516; /* 0x1103950F: jmp 0x11039516 */
L_11039511:
    /* cmp ecx, ebx */ /* 0x11039511: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11039516; /* 0x11039513: jne 0x11039516 */
L_11039515:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x11039515: dec ecx */
    _flag_k = FK_DEC;
L_11039516:
    /* cmp esi, ecx */ /* 0x11039516: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11039526; /* 0x11039518: jge 0x11039526 */
L_1103951A:
    fp_push(*(double*)ADDR(edi + ecx * 8 + (-0x8))); /* 0x1103951A: fld qword ptr [edi + ecx*8 - 8] */
    { double _v = fp_pop(); *(double*)ADDR(edi + ecx * 8) = _v; } /* 0x1103951E: fstp qword ptr [edi + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x11039521: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, esi */ /* 0x11039522: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1103951A; /* 0x11039524: jg 0x1103951a */
L_11039526:
    eax = MEM32(ebp + (-0x8)); /* 0x11039526: mov eax, dword ptr [ebp - 8] */
    fp_xch(1); /* 0x11039529: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1103952B: fstp qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x1103952D: fstp qword ptr [ebp + 0x10] */
    goto L_110396B3; /* 0x11039530: jmp 0x110396b3 */
L_11039535:
    PUSH32(esp, 0x1Au); /* 0x11039535: push 0x1a */
    eax = POP32_VAL(esp); /* 0x11039537: pop eax */
    /* cmp ecx, eax */ /* 0x11039538: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11039552; /* 0x1103953A: jl 0x11039552 */
L_1103953C:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103953C: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103953E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039540: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039552; /* 0x11039543: jnp 0x11039552 */
L_11039545:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039545: fstp st(0) */
    MEM32(ebp + (-0x4)) = edx; /* 0x11039547: mov dword ptr [ebp - 4], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103954A: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103954C: inc esi */
    _flag_k = FK_INC;
    goto L_110396B3; /* 0x1103954D: jmp 0x110396b3 */
L_11039552:
    ecx = MEM32(ebp + (-0x8)); /* 0x11039552: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x11039555: fld qword ptr [ecx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x11039557: faddp st(2) */
    fp_xch(1); /* 0x11039559: fxch st(1) */
    *(double*)ADDR(ecx) = _st[0]; /* 0x1103955B: fst qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103955D: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103955F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039561: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11039592; /* 0x11039564: jp 0x11039592 */
L_11039566:
    edx = esi; /* 0x11039566: mov edx, esi */
L_11039568:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11039568: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x11039569: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103957D; /* 0x1103956B: jge 0x1103957d */
L_1103956D:
    fp_push(*(double*)ADDR(edi + edx * 8)); /* 0x1103956D: fld qword ptr [edi + edx*8] */
    *(double*)ADDR(edi + edx * 8 + (-0x8)) = _st[0]; /* 0x11039570: fst qword ptr [edi + edx*8 - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039574: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039576: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039578: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11039568; /* 0x1103957B: jp 0x11039568 */
L_1103957D:
    *(double*)ADDR(edi + ebx * 8 + (-0x8)) = _st[0]; /* 0x1103957D: fst qword ptr [edi + ebx*8 - 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x11039581: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039583: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039585: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039587: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110396CD; /* 0x1103958A: jnp 0x110396cd */
L_11039590:
    goto L_11039594; /* 0x11039590: jmp 0x11039594 */
L_11039592:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039592: fstp st(0) */
L_11039594:
    fp_push(*(double*)ADDR(ecx)); /* 0x11039594: fld qword ptr [ecx] */
    eax = ebp + 0x10; /* 0x11039596: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x11039599: push eax */
    eax = ebp + 0x8; /* 0x1103959A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1103959D: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x1103959E: fstp qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_110393C7); /* 0x110395A1: call 0x110393c7 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x110395A6: mov edx, dword ptr [ebp - 4] */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x110395A9: mov ax, word ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x110395AD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110395AE: pop ecx */
    MEM16(ebp + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x110395AF: mov word ptr [ebp - 2], ax */
    ecx = edx + (-0x1A); /* 0x110395B3: lea ecx, [edx - 0x1a] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x110395B6: cwde  */
    /* cmp ecx, eax */ /* 0x110395B7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103964C; /* 0x110395B9: jge 0x1103964c */
L_110395BF:
    SET_LO16(eax, MEM16(ebp + (-0x2))); /* 0x110395BF: mov ax, word ptr [ebp - 2] */
    PUSH32(esp, 0x1Au); /* 0x110395C3: push 0x1a */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(edx)); /* 0x110395C5: sub ax, dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = POP32_VAL(esp); /* 0x110395C8: pop ecx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x110395C9: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(eax); /* 0x110395CC: movzx eax, ax */
    PUSH32(esp, eax); /* 0x110395CF: push eax */
    eax = ebp + 0x10; /* 0x110395D0: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x110395D3: push eax */
    RECOMP_CALL(sub_1103929B); /* 0x110395D4: call 0x1103929b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x110395D9: movsx eax, word ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110395DD: push eax */
    eax = ebp + 0x10; /* 0x110395DE: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x110395E1: push eax */
    RECOMP_CALL(sub_1102FE25); /* 0x110395E2: call 0x1102fe25 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x110395E7: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110395EA: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(eax)); /* 0x110395ED: fld qword ptr [eax] */
    _st[0] -= *(double*)ADDR(ebp + 0x10); /* 0x110395EF: fsub qword ptr [ebp + 0x10] */
    *(double*)ADDR(eax) = _st[0]; /* 0x110395F2: fst qword ptr [eax] */
    fp_push(0.0); /* 0x110395F4: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110395F6: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110395F8: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110395FA: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x110395FC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103961E; /* 0x110395FF: jp 0x1103961e */
L_11039601:
    ecx = esi; /* 0x11039601: mov ecx, esi */
L_11039603:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11039603: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x11039604: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11039618; /* 0x11039606: jge 0x11039618 */
L_11039608:
    fp_push(*(double*)ADDR(edi + ecx * 8)); /* 0x11039608: fld qword ptr [edi + ecx*8] */
    *(double*)ADDR(edi + ecx * 8 + (-0x8)) = _st[0]; /* 0x1103960B: fst qword ptr [edi + ecx*8 - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103960F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039611: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039613: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11039603; /* 0x11039616: jp 0x11039603 */
L_11039618:
    { double _v = fp_pop(); *(double*)ADDR(edi + ebx * 8 + (-0x8)) = _v; } /* 0x11039618: fstp qword ptr [edi + ebx*8 - 8] */
    goto L_11039620; /* 0x1103961C: jmp 0x11039620 */
L_1103961E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103961E: fstp st(0) */
L_11039620:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11039620: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1103962F; /* 0x11039621: jne 0x1103962f */
L_11039623:
    MEM32(ebp + (-0x4)) = 0x800u; /* 0x11039623: mov dword ptr [ebp - 4], 0x800 */
    goto L_110396B3; /* 0x1103962A: jmp 0x110396b3 */
L_1103962F:
    fp_push(*(double*)ADDR(edi + esi * 8 + (-0x8))); /* 0x1103962F: fld qword ptr [edi + esi*8 - 8] */
    eax = ebp + (-0x10); /* 0x11039633: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11039636: push eax */
    eax = ebp + 0xC; /* 0x11039637: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103963A: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x1103963B: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_110393C7); /* 0x1103963E: call 0x110393c7 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x11039643: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x11039647: mov dword ptr [ebp - 4], eax */
    goto L_110396B1; /* 0x1103964A: jmp 0x110396b1 */
L_1103964C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103964C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x1103964D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110396CD; /* 0x1103964F: je 0x110396cd */
L_11039651:
    eax = MEM32(ebp + (-0x8)); /* 0x11039651: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x11039654: push eax */
    fp_push(*(double*)ADDR(eax)); /* 0x11039655: fld qword ptr [eax] */
    eax = ebp + 0xC; /* 0x11039657: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103965A: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x1103965B: fstp qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_110393C7); /* 0x1103965E: call 0x110393c7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Au); /* 0x11039663: push 0x1a */
    eax = POP32_VAL(esp); /* 0x11039665: pop eax */
    PUSH32(esp, eax); /* 0x11039666: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x11039667: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1103966A: push eax */
    RECOMP_CALL(sub_1103929B); /* 0x1103966B: call 0x1103929b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x11039670: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11039674: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x11039675: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1102FE25); /* 0x11039678: call 0x1102fe25 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1103967D: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11039680: add esp, 0x18 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11039683: fld qword ptr [ebp + 0x10] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x11039686: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1103968A: mov dword ptr [ebp - 4], eax */
    _st[0] -= *(double*)ADDR(ecx); /* 0x1103968D: fsub qword ptr [ecx] */
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x1103968F: fst qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x11039692: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039694: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039696: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039698: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110396A1; /* 0x1103969B: jp 0x110396a1 */
L_1103969D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103969D: fstp st(0) */
    fp_push(*(double*)ADDR(ecx)); /* 0x1103969F: fld qword ptr [ecx] */
L_110396A1:
    eax = ebp + (-0x10); /* 0x110396A1: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110396A4: push eax */
    eax = ebp + 0x8; /* 0x110396A5: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110396A8: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x110396A9: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_110393C7); /* 0x110396AC: call 0x110393c7 */
    RECOMP_FLAGS_IN();
L_110396B1:
    ecx = POP32_VAL(esp); /* 0x110396B1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110396B2: pop ecx */
L_110396B3:
    /* cmp esi, ebx */ /* 0x110396B3: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110394A4; /* 0x110396B5: jl 0x110394a4 */
L_110396BB:
    goto L_110396CD; /* 0x110396BB: jmp 0x110396cd */
L_110396BD:
    ecx = esi + 0x1; /* 0x110396BD: lea ecx, [esi + 1] */
    { double _v = fp_pop(); *(double*)ADDR(edi + esi * 8) = _v; } /* 0x110396C0: fstp qword ptr [edi + esi*8] */
    /* cmp ecx, ebx */ /* 0x110396C3: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_110396CD; /* 0x110396C5: jge 0x110396cd */
L_110396C7:
    fp_push(0.0); /* 0x110396C7: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + esi * 8 + 0x8) = _v; } /* 0x110396C9: fstp qword ptr [edi + esi*8 + 8] */
L_110396CD:
    esi = POP32_VAL(esp); /* 0x110396CD: pop esi */
L_110396CE:
    eax = edi; /* 0x110396CE: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x110396D0: pop edi */
    ebx = POP32_VAL(esp); /* 0x110396D1: pop ebx */
    esp = ebp; /* 0x110396D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110396D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110396D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110396D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110396D6u);

L_110396D6:
    PUSH32(esp, ebp); /* 0x110396D6: push ebp */
    ebp = esp; /* 0x110396D7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110396D9: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110396DA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x110396DC: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039714; /* 0x110396DF: jle 0x11039714 */
L_110396E1:
    fp_push(0.0); /* 0x110396E1: fldz  */
    PUSH32(esp, edi); /* 0x110396E3: push edi */
    edi = MEM32(ebp + 0x10); /* 0x110396E4: mov edi, dword ptr [ebp + 0x10] */
L_110396E7:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x110396E7: fld qword ptr [edi + esi*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110396EA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110396EC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110396EE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039713; /* 0x110396F1: jnp 0x11039713 */
L_110396F3:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x110396F3: fld qword ptr [edi + esi*8] */
    PUSH32(esp, ecx); /* 0x110396F6: push ecx */
    PUSH32(esp, ecx); /* 0x110396F7: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110396F8: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110396FB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110396FE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110393D0); /* 0x11039701: call 0x110393d0 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x11039706: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039708: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103970B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1103970C: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110396E7; /* 0x1103970F: jl 0x110396e7 */
L_11039711:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039711: fstp st(0) */
L_11039713:
    edi = POP32_VAL(esp); /* 0x11039713: pop edi */
L_11039714:
    eax = MEM32(ebp + 0x8); /* 0x11039714: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x11039717: pop esi */
    ebp = POP32_VAL(esp); /* 0x11039718: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039719: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103971A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103971Au);

L_1103971A:
    PUSH32(esp, ebp); /* 0x1103971A: push ebp */
    ebp = esp; /* 0x1103971B: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1103971D: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x11039720: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x11039723: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103972E; /* 0x11039725: jne 0x1103972e */
L_11039727:
    fp_push(0.0); /* 0x11039727: fldz  */
    goto L_110397C7; /* 0x11039729: jmp 0x110397c7 */
L_1103972E:
    PUSH32(esp, esi); /* 0x1103972E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1103972F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x11039732: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11039733: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11039735: inc edi */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x11039736: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110397C3; /* 0x11039738: je 0x110397c3 */
L_1103973E:
    fp_push(*(double*)ADDR(esi)); /* 0x1103973E: fld qword ptr [esi] */
    fp_push(0.0); /* 0x11039740: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039742: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039744: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11039746: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11039748: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110397C1; /* 0x1103974B: jnp 0x110397c1 */
L_1103974D:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x1103974D: fld qword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039750: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039752: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039754: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110397C1; /* 0x11039757: jnp 0x110397c1 */
L_11039759:
    /* cmp ecx, 2 */ /* 0x11039759: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110397B8; /* 0x1103975C: je 0x110397b8 */
L_1103975E:
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x1103975E: fld qword ptr [esi + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039761: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039763: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039765: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110397B8; /* 0x11039768: jnp 0x110397b8 */
L_1103976A:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x1103976A: fld qword ptr [esi + 8] */
    _st[0] += *(double*)ADDR(esi); /* 0x1103976D: fadd qword ptr [esi] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x1103976F: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x11039772: fld qword ptr [esi + 0x10] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x11039775: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(esi + 0x18)); /* 0x11039778: fld qword ptr [esi + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x1103977B: fucomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103977D: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1103977F: fstp st(2) */
    /* test HI8(eax), 0x44u */ /* 0x11039781: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103979D; /* 0x11039784: jnp 0x1103979d */
L_11039786:
    eax = ebp + (-0x8); /* 0x11039786: lea eax, [ebp - 8] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11039789: fstp st(1) */
    PUSH32(esp, eax); /* 0x1103978B: push eax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103978C: fstp st(0) */
    RECOMP_CALL(sub_110127EC); /* 0x1103978E: call 0x110127ec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11039793: pop ecx */
    _flag_a = (uint32_t)((MEM16(eax) | LO16(edi))) << 16; _flag_b = (uint32_t)((MEM16(eax) | LO16(edi))) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) | LO16(edi)); /* 0x11039794: or word ptr [eax], di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x11039797: fld qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x1103979A: fld qword ptr [ebp - 0x10] */
L_1103979D:
    fp_push(_st[0]); /* 0x1103979D: fld st(0) */
    _st[0] -= *(double*)ADDR(esi); /* 0x1103979F: fsub qword ptr [esi] */
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x110397A1: fld qword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110397A4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110397A6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110397A8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110397B1; /* 0x110397AB: jp 0x110397b1 */
L_110397AD:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x110397AD: faddp st(1) */
    goto L_110397C5; /* 0x110397AF: jmp 0x110397c5 */
L_110397B1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110397B1: fstp st(0) */
    _st[0] += *(double*)ADDR(esi + 0x8); /* 0x110397B3: fadd qword ptr [esi + 8] */
    goto L_110397BD; /* 0x110397B6: jmp 0x110397bd */
L_110397B8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110397B8: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x110397BA: fld qword ptr [esi + 8] */
L_110397BD:
    _st[0] += *(double*)ADDR(esi); /* 0x110397BD: fadd qword ptr [esi] */
    goto L_110397C5; /* 0x110397BF: jmp 0x110397c5 */
L_110397C1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110397C1: fstp st(0) */
L_110397C3:
    fp_push(*(double*)ADDR(esi)); /* 0x110397C3: fld qword ptr [esi] */
L_110397C5:
    edi = POP32_VAL(esp); /* 0x110397C5: pop edi */
    esi = POP32_VAL(esp); /* 0x110397C6: pop esi */
L_110397C7:
    esp = ebp; /* 0x110397C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110397C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110397CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_110397CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110397CBu);

L_110397CB:
    PUSH32(esp, ebp); /* 0x110397CB: push ebp */
    ebp = esp; /* 0x110397CC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110397CE: push ecx */
    PUSH32(esp, ecx); /* 0x110397CF: push ecx */
    PUSH32(esp, esi); /* 0x110397D0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x110397D1: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x110397D4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110397D5: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x110397D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110398B9; /* 0x110397DA: je 0x110398b9 */
L_110397E0:
    PUSH32(esp, edi); /* 0x110397E0: push edi */
    RECOMP_CALL(sub_11012D6A); /* 0x110397E1: call 0x11012d6a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110397E6: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x110397E7: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110397EA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110397EC: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_11039811; /* 0x110397EF: jg 0x11039811 */
L_110397F1:
    /* cmp LO16(eax), 1 */ /* 0x110397F1: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110397FB; /* 0x110397F5: jne 0x110397fb */
L_110397F7:
    fp_push(0.0); /* 0x110397F7: fldz  */
    goto L_1103980A; /* 0x110397F9: jmp 0x1103980a */
L_110397FB:
    /* test LO16(eax), LO16(eax) */ /* 0x110397FB: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110398B9; /* 0x110397FE: jne 0x110398b9 */
L_11039804:
    fp_push(*(double*)ADDR(0x11063168)); /* 0x11039804: fld qword ptr [0x11063168] */
L_1103980A:
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1103980A: fstp qword ptr [edi] */
    goto L_110398B9; /* 0x1103980C: jmp 0x110398b9 */
L_11039811:
    fp_push(*(double*)ADDR(edi)); /* 0x11039811: fld qword ptr [edi] */
    PUSH32(esp, ebx); /* 0x11039813: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x11039814: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x11039817: push edi */
    PUSH32(esp, esi); /* 0x11039818: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x11039819: fstp qword ptr [ebp - 8] */
    eax = ebx + esi * 8; /* 0x1103981C: lea eax, [ebx + esi*8] */
    ecx = eax + esi * 8; /* 0x1103981F: lea ecx, [eax + esi*8] */
    PUSH32(esp, eax); /* 0x11039822: push eax */
    MEM32(ebp + 0xC) = ecx; /* 0x11039823: mov dword ptr [ebp + 0xc], ecx */
    RECOMP_CALL(sub_110398FE); /* 0x11039826: call 0x110398fe */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11003830)); /* 0x1103982B: fld qword ptr [0x11003830] */
    eax = ebx + esi * 8; /* 0x11039831: lea eax, [ebx + esi*8] */
    ecx = POP32_VAL(esp); /* 0x11039834: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039835: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039838: push esi */
    PUSH32(esp, eax); /* 0x11039839: push eax */
    RECOMP_CALL(sub_1103991B); /* 0x1103983A: call 0x1103991b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103983F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039841: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11039844: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x11039845: mov dword ptr [ebp + 8], eax */
    /* cmp esi, eax */ /* 0x11039848: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039855; /* 0x1103984A: jle 0x11039855 */
L_1103984C:
    fp_push(*(double*)ADDR(edi + 0x8)); /* 0x1103984C: fld qword ptr [edi + 8] */
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x1103984F: fadd qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x11039852: fstp qword ptr [ebp - 8] */
L_11039855:
    fp_push(1.0); /* 0x11039855: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0x8)); /* 0x11039857: fdiv qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1103985A: push ecx */
    PUSH32(esp, ecx); /* 0x1103985B: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103985C: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103985F: push esi */
    PUSH32(esp, edi); /* 0x11039860: push edi */
    RECOMP_CALL(sub_11039B94); /* 0x11039861: call 0x11039b94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039866: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, 1 */ /* 0x11039869: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110398B8; /* 0x1103986C: jle 0x110398b8 */
L_1103986E:
    PUSH32(esp, edi); /* 0x1103986E: push edi */
    PUSH32(esp, esi); /* 0x1103986F: push esi */
    PUSH32(esp, ebx); /* 0x11039870: push ebx */
    RECOMP_CALL(sub_110398FE); /* 0x11039871: call 0x110398fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039876: push dword ptr [ebp + 0xc] */
    eax = ebx + esi * 8; /* 0x11039879: lea eax, [ebx + esi*8] */
    PUSH32(esp, esi); /* 0x1103987C: push esi */
    PUSH32(esp, eax); /* 0x1103987D: push eax */
    PUSH32(esp, esi); /* 0x1103987E: push esi */
    PUSH32(esp, ebx); /* 0x1103987F: push ebx */
    RECOMP_CALL(sub_11039A99); /* 0x11039880: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x11039885: fld1  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11039887: add esp, 0x18 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103988A: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103988D: push esi */
    PUSH32(esp, ebx); /* 0x1103988E: push ebx */
    RECOMP_CALL(sub_110393D0); /* 0x1103988F: call 0x110393d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039894: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11039897: push esi */
    PUSH32(esp, edi); /* 0x11039898: push edi */
    PUSH32(esp, esi); /* 0x11039899: push esi */
    PUSH32(esp, ebx); /* 0x1103989A: push ebx */
    RECOMP_CALL(sub_11039A99); /* 0x1103989B: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110398A0: push esi */
    PUSH32(esp, ebx); /* 0x110398A1: push ebx */
    PUSH32(esp, esi); /* 0x110398A2: push esi */
    PUSH32(esp, edi); /* 0x110398A3: push edi */
    RECOMP_CALL(sub_110396D6); /* 0x110398A4: call 0x110396d6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110398A9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x110398AC: add esp, 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x110398AF: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x110398B1: mov dword ptr [ebp + 8], eax */
    /* cmp eax, esi */ /* 0x110398B4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103986E; /* 0x110398B6: jl 0x1103986e */
L_110398B8:
    ebx = POP32_VAL(esp); /* 0x110398B8: pop ebx */
L_110398B9:
    eax = edi; /* 0x110398B9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x110398BB: pop edi */
    esi = POP32_VAL(esp); /* 0x110398BC: pop esi */
    esp = ebp; /* 0x110398BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110398BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110398C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_110398C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110398C1u);

L_110398C1:
    PUSH32(esp, ebp); /* 0x110398C1: push ebp */
    ebp = esp; /* 0x110398C2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110398C4: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110398C5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x110398C7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110398C8: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x110398CB: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110398F8; /* 0x110398CE: jle 0x110398f8 */
L_110398D0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110398D0: push dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x110398D3: fld qword ptr [edi + esi*8] */
    PUSH32(esp, ecx); /* 0x110398D6: push ecx */
    PUSH32(esp, ecx); /* 0x110398D7: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110398D8: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x110398DB: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(edi + esi * 8) = _st[0]; /* 0x110398E1: fst qword ptr [edi + esi*8] */
    fp_push(0.0); /* 0x110398E4: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110398E6: add esp, 0xc */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110398E9: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110398EB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110398ED: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110398F8; /* 0x110398F0: jnp 0x110398f8 */
L_110398F2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110398F2: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x110398F3: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110398D0; /* 0x110398F6: jl 0x110398d0 */
L_110398F8:
    eax = edi; /* 0x110398F8: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x110398FA: pop edi */
    esi = POP32_VAL(esp); /* 0x110398FB: pop esi */
    ebp = POP32_VAL(esp); /* 0x110398FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110398FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_110398FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110398FEu);

L_110398FE:
    PUSH32(esp, ebp); /* 0x110398FE: push ebp */
    ebp = esp; /* 0x110398FF: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11039901: mov eax, dword ptr [ebp + 0xc] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x11039904: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x11039904: shl eax, 3 */
    PUSH32(esp, eax); /* 0x11039907: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11039908: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103990B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B300); /* 0x1103990E: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11039913: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11039916: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11039919: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103991A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103991B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103991Bu);

L_1103991B:
    PUSH32(esp, ebp); /* 0x1103991B: push ebp */
    ebp = esp; /* 0x1103991C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1103991E: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11039921: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11039926: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11039928: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103992B: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x1103992E: fldz  */
    PUSH32(esp, ebx); /* 0x11039930: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x11039931: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11039934: push esi */
    PUSH32(esp, edi); /* 0x11039935: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11039936: mov edi, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x11039939: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11039992; /* 0x1103993B: jle 0x11039992 */
L_1103993D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103993D: fstp st(0) */
    eax = ebp + (-0x24); /* 0x1103993F: lea eax, [ebp - 0x24] */
    _st[0] *= *(double*)ADDR(edi); /* 0x11039942: fmul qword ptr [edi] */
    PUSH32(esp, eax); /* 0x11039944: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x11039945: fstp qword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_11012D6A); /* 0x11039948: call 0x11012d6a */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x1103994D: movzx esi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11039950: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11039952: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x11039953: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_11039989; /* 0x11039956: jg 0x11039989 */
L_11039958:
    /* cmp LO16(esi), 2 */ /* 0x11039958: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11039966; /* 0x1103995C: jne 0x11039966 */
L_1103995E:
    PUSH32(esp, 1); /* 0x1103995E: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x11039960: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11039965: pop ecx */
L_11039966:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x11039966: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11039969: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1103996B: fstp qword ptr [edi] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1103996D: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_11039A78; /* 0x11039970: jge 0x11039a78 */
L_11039976:
    /* cmp ebx, 1 */ /* 0x11039976: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039A78; /* 0x11039979: jle 0x11039a78 */
L_1103997F:
    fp_push(0.0); /* 0x1103997F: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x8) = _v; } /* 0x11039981: fstp qword ptr [edi + 8] */
    goto L_11039A78; /* 0x11039984: jmp 0x11039a78 */
L_11039989:
    fp_push(0.0); /* 0x11039989: fldz  */
    *(double*)ADDR(edi) = _st[0]; /* 0x1103998B: fst qword ptr [edi] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103998D: fld qword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x11039990: fxch st(1) */
L_11039992:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11039992: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11039994: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11039996: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x11039997: mov dword ptr [ebp - 0x2c], edx */
    /* test ebx, ebx */ /* 0x1103999A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110399A7; /* 0x1103999C: jg 0x110399a7 */
L_1103999E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103999E: fstp st(0) */
    goto L_11039A76; /* 0x110399A0: jmp 0x11039a76 */
L_110399A5:
    fp_xch(1); /* 0x110399A5: fxch st(1) */
L_110399A7:
    /* cmp esi, 4 */ /* 0x110399A7: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_110399DF; /* 0x110399AA: jge 0x110399df */
L_110399AC:
    eax = edx + esi; /* 0x110399AC: lea eax, [edx + esi] */
    ecx = edi + eax * 8; /* 0x110399AF: lea ecx, [edi + eax*8] */
L_110399B2:
    eax = edx + esi; /* 0x110399B2: lea eax, [edx + esi] */
    /* cmp eax, ebx */ /* 0x110399B5: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11039A8B; /* 0x110399B7: jge 0x11039a8b */
L_110399BD:
    fp_push(*(double*)ADDR(ecx)); /* 0x110399BD: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110399BF: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110399C1: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110399C3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039A8B; /* 0x110399C6: jnp 0x11039a8b */
L_110399CC:
    fp_push(_st[1]); /* 0x110399CC: fld st(1) */
    _st[0] *= *(double*)ADDR(ecx); /* 0x110399CE: fmul qword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + esi * 8 + (-0x24)) = _v; } /* 0x110399D0: fstp qword ptr [ebp + esi*8 - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110399D4: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ecx) = _st[0]; /* 0x110399D5: fst qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x110399D7: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 4 */ /* 0x110399DA: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110399B2; /* 0x110399DD: jl 0x110399b2 */
L_110399DF:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110399DF: fstp st(1) */
L_110399E1:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x110399E1: fld qword ptr [ebp - 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110399E4: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110399E6: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110399E8: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x110399EA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039A76; /* 0x110399ED: jnp 0x11039a76 */
L_110399F3:
    eax = ebp + (-0x34); /* 0x110399F3: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x110399F6: push eax */
    eax = ebp + (-0x28); /* 0x110399F7: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x110399FA: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x110399FB: fstp qword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_110393C7); /* 0x110399FE: call 0x110393c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x11039A03: lea eax, [ebp - 0x34] */
    PUSH32(esp, 0x1Au); /* 0x11039A06: push 0x1a */
    PUSH32(esp, eax); /* 0x11039A08: push eax */
    RECOMP_CALL(sub_1103929B); /* 0x11039A09: call 0x1103929b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x28)); /* 0x11039A0E: movsx eax, word ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x11039A12: push eax */
    eax = ebp + (-0x34); /* 0x11039A13: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11039A16: push eax */
    RECOMP_CALL(sub_1102FE25); /* 0x11039A17: call 0x1102fe25 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x11039A1C: fld qword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039A1F: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039A22: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x11039A25: push ebx */
    PUSH32(esp, edi); /* 0x11039A26: push edi */
    RECOMP_CALL(sub_110393D0); /* 0x11039A27: call 0x110393d0 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x11039A2C: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x11039A2F: add esp, 8 */
    _flag_k = FK_ADD;
    _st[0] -= *(double*)ADDR(ebp + (-0x34)); /* 0x11039A32: fsub qword ptr [ebp - 0x34] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039A35: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x11039A38: push ebx */
    PUSH32(esp, edi); /* 0x11039A39: push edi */
    RECOMP_CALL(sub_110393D0); /* 0x11039A3A: call 0x110393d0 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x11039A3F: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039A41: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11039A43: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039A44: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x11039A47: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039A61; /* 0x11039A49: jle 0x11039a61 */
L_11039A4B:
    fp_push(*(double*)ADDR(ebp + ecx * 8 + (-0x24))); /* 0x11039A4B: fld qword ptr [ebp + ecx*8 - 0x24] */
    *(double*)ADDR(ebp + ecx * 8 + (-0x2C)) = _st[0]; /* 0x11039A4F: fst qword ptr [ebp + ecx*8 - 0x2c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039A53: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039A55: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039A57: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039A61; /* 0x11039A5A: jnp 0x11039a61 */
L_11039A5C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11039A5C: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x11039A5D: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11039A4B; /* 0x11039A5F: jl 0x11039a4b */
L_11039A61:
    edx = MEM32(ebp + (-0x2C)); /* 0x11039A61: mov edx, dword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11039A64: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11039A67: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11039A68: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x11039A69: mov dword ptr [ebp - 0x2c], edx */
    /* cmp edx, ebx */ /* 0x11039A6C: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110399A5; /* 0x11039A6E: jl 0x110399a5 */
L_11039A74:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11039A74: fstp st(1) */
L_11039A76:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039A76: fstp st(0) */
L_11039A78:
    ecx = MEM32(ebp + (-0x4)); /* 0x11039A78: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x11039A7B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11039A7D: pop edi */
    esi = POP32_VAL(esp); /* 0x11039A7E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11039A7F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11039A81: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11039A82: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11039A87: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11039A89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039A8A: ret  */
L_11039A8B:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11039A8B: fstp st(1) */
    PUSH32(esp, 8); /* 0x11039A8D: push 8 */
    *(double*)ADDR(ebp + esi * 8 + (-0x24)) = _st[0]; /* 0x11039A8F: fst qword ptr [ebp + esi*8 - 0x24] */
    esi = POP32_VAL(esp); /* 0x11039A93: pop esi */
    RECOMP_BACKEDGE();
    goto L_110399E1; /* 0x11039A94: jmp 0x110399e1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11039A99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039A99u);

L_11039A99:
    PUSH32(esp, ebp); /* 0x11039A99: push ebp */
    ebp = esp; /* 0x11039A9A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11039A9C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11039A9D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11039AA0: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11039AA1: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x11039AA4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11039B66; /* 0x11039AA6: je 0x11039b66 */
L_11039AAC:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x11039AAC: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11039B66; /* 0x11039AB0: je 0x11039b66 */
L_11039AB6:
    PUSH32(esp, ebx); /* 0x11039AB6: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x11039AB7: mov ebx, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebx)); /* 0x11039ABA: fld qword ptr [ebx] */
    fp_push(0.0); /* 0x11039ABC: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039ABE: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039AC0: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11039AC2: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11039AC4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039B52; /* 0x11039AC7: jnp 0x11039b52 */
L_11039ACD:
    fp_push(*(double*)ADDR(ebx + 0x8)); /* 0x11039ACD: fld qword ptr [ebx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039AD0: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039AD2: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039AD4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039B54; /* 0x11039AD7: jnp 0x11039b54 */
L_11039AD9:
    ecx = MEM32(ebp + 0x18); /* 0x11039AD9: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x11039ADC: push edi */
    PUSH32(esp, esi); /* 0x11039ADD: push esi */
    PUSH32(esp, ecx); /* 0x11039ADE: push ecx */
    RECOMP_CALL(sub_110398FE); /* 0x11039ADF: call 0x110398fe */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebx)); /* 0x11039AE4: fld qword ptr [ebx] */
    ecx = POP32_VAL(esp); /* 0x11039AE6: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039AE7: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039AEA: push esi */
    PUSH32(esp, edi); /* 0x11039AEB: push edi */
    RECOMP_CALL(sub_1103991B); /* 0x11039AEC: call 0x1103991b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11039AF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039AF3: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11039AF6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x11039AF7: mov dword ptr [ebp + 0xc], eax */
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x11039AFA: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039B65; /* 0x11039AFD: jle 0x11039b65 */
L_11039AFF:
    fp_push(*(double*)ADDR(ebx + eax * 8)); /* 0x11039AFF: fld qword ptr [ebx + eax*8] */
    fp_push(0.0); /* 0x11039B02: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039B04: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039B06: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039B08: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039B65; /* 0x11039B0B: jnp 0x11039b65 */
L_11039B0D:
    ecx = MEM32(ebp + 0x18); /* 0x11039B0D: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x11039B10: push ecx */
    PUSH32(esp, esi); /* 0x11039B11: push esi */
    eax = ecx + esi * 8; /* 0x11039B12: lea eax, [ecx + esi*8] */
    PUSH32(esp, eax); /* 0x11039B15: push eax */
    RECOMP_CALL(sub_110398FE); /* 0x11039B16: call 0x110398fe */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x11039B1B: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x11039B1E: pop ecx */
    ecx = MEM32(ebp + 0x18); /* 0x11039B1F: mov ecx, dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(ebx + eax * 8)); /* 0x11039B22: fld qword ptr [ebx + eax*8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039B25: fstp qword ptr [esp] */
    eax = ecx + esi * 8; /* 0x11039B28: lea eax, [ecx + esi*8] */
    PUSH32(esp, esi); /* 0x11039B2B: push esi */
    PUSH32(esp, eax); /* 0x11039B2C: push eax */
    RECOMP_CALL(sub_1103991B); /* 0x11039B2D: call 0x1103991b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x11039B32: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11039B35: push esi */
    eax = ecx + esi * 8; /* 0x11039B36: lea eax, [ecx + esi*8] */
    PUSH32(esp, eax); /* 0x11039B39: push eax */
    PUSH32(esp, esi); /* 0x11039B3A: push esi */
    PUSH32(esp, edi); /* 0x11039B3B: push edi */
    RECOMP_CALL(sub_110396D6); /* 0x11039B3C: call 0x110396d6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x11039B41: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x11039B44: add esp, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11039B47: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x11039B48: mov dword ptr [ebp + 0xc], eax */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x11039B4B: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11039AFF; /* 0x11039B4E: jl 0x11039aff */
L_11039B50:
    goto L_11039B65; /* 0x11039B50: jmp 0x11039b65 */
L_11039B52:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039B52: fstp st(0) */
L_11039B54:
    fp_push(*(double*)ADDR(ebx)); /* 0x11039B54: fld qword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x11039B56: push ecx */
    PUSH32(esp, ecx); /* 0x11039B57: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039B58: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039B5B: push esi */
    PUSH32(esp, edi); /* 0x11039B5C: push edi */
    RECOMP_CALL(sub_1103991B); /* 0x11039B5D: call 0x1103991b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039B62: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11039B65:
    ebx = POP32_VAL(esp); /* 0x11039B65: pop ebx */
L_11039B66:
    eax = edi; /* 0x11039B66: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11039B68: pop edi */
    esi = POP32_VAL(esp); /* 0x11039B69: pop esi */
    ebp = POP32_VAL(esp); /* 0x11039B6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039B6B: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039B6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039B6Cu);

L_11039B6C:
    PUSH32(esp, ebp); /* 0x11039B6C: push ebp */
    ebp = esp; /* 0x11039B6D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11039B6F: push ecx */
    PUSH32(esp, ecx); /* 0x11039B70: push ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x11039B71: fild dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x11039B74: push ecx */
    PUSH32(esp, ecx); /* 0x11039B75: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x11039B76: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x11039B79: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039B7C: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039B7F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11039B82: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11039B94); /* 0x11039B85: call 0x11039b94 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11039B8A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039B8D: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x11039B90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11039B92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039B93: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039B94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039B94u);

L_11039B94:
    PUSH32(esp, ebp); /* 0x11039B94: push ebp */
    ebp = esp; /* 0x11039B95: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11039B97: push ecx */
    PUSH32(esp, ecx); /* 0x11039B98: push ecx */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11039B99: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x11039B9C: push ebx */
    PUSH32(esp, esi); /* 0x11039B9D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11039B9E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x11039BA1: push edi */
    edi = MEM32(ebp + 0xC); /* 0x11039BA2: mov edi, dword ptr [ebp + 0xc] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x11039BA5: fst qword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x11039BA8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11039C77; /* 0x11039BAA: jle 0x11039c77 */
L_11039BB0:
    /* cmp edi, 1 */ /* 0x11039BB0: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11039C73; /* 0x11039BB3: je 0x11039c73 */
L_11039BB9:
    eax = ebp + (-0x8); /* 0x11039BB9: lea eax, [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039BBC: fstp st(0) */
    PUSH32(esp, eax); /* 0x11039BBE: push eax */
    eax = ebp + 0xC; /* 0x11039BBF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11039BC2: push eax */
    RECOMP_CALL(sub_110393C7); /* 0x11039BC3: call 0x110393c7 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11039BC8: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x11039BCB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11039BCC: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x11039BCD: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11039C70; /* 0x11039BD0: je 0x11039c70 */
L_11039BD6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039BD6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11039BD8: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_11039BEC; /* 0x11039BDB: jge 0x11039bec */
L_11039BDD:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x11039BDD: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x11039BE0: fstp qword ptr [esi] */
    fp_push(0.0); /* 0x11039BE2: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x11039BE4: fstp qword ptr [esi + 8] */
    goto L_11039C79; /* 0x11039BE7: jmp 0x11039c79 */
L_11039BEC:
    eax = ebp + (-0x8); /* 0x11039BEC: lea eax, [ebp - 8] */
    PUSH32(esp, 0x1Au); /* 0x11039BEF: push 0x1a */
    PUSH32(esp, eax); /* 0x11039BF1: push eax */
    RECOMP_CALL(sub_1103929B); /* 0x11039BF2: call 0x1103929b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x11039BF7: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11039BFB: push eax */
    eax = ebp + (-0x8); /* 0x11039BFC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x11039BFF: push eax */
    RECOMP_CALL(sub_1102FE25); /* 0x11039C00: call 0x1102fe25 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x11039C05: fld qword ptr [ebp - 8] */
    ebx = esi + 0x8; /* 0x11039C08: lea ebx, [esi + 8] */
    *(double*)ADDR(esi) = _st[0]; /* 0x11039C0B: fst qword ptr [esi] */
    _st[0] = *(double*)ADDR(ebp + 0x10) - _st[0]; /* 0x11039C0D: fsubr qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039C10: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x11039C13: fst qword ptr [ebp + 0x10] */
    *(double*)ADDR(ebx) = _st[0]; /* 0x11039C16: fst qword ptr [ebx] */
    /* cmp edi, 2 */ /* 0x11039C18: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039C77; /* 0x11039C1B: jle 0x11039c77 */
L_11039C1D:
    fp_push(0.0); /* 0x11039C1D: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039C1F: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039C21: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11039C23: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11039C25: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039C6B; /* 0x11039C28: jnp 0x11039c6b */
L_11039C2A:
    eax = ebp + 0xC; /* 0x11039C2A: lea eax, [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039C2D: fstp st(0) */
    PUSH32(esp, ebx); /* 0x11039C2F: push ebx */
    PUSH32(esp, eax); /* 0x11039C30: push eax */
    RECOMP_CALL(sub_110393C7); /* 0x11039C31: call 0x110393c7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Au); /* 0x11039C36: push 0x1a */
    PUSH32(esp, ebx); /* 0x11039C38: push ebx */
    RECOMP_CALL(sub_1103929B); /* 0x11039C39: call 0x1103929b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x11039C3E: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11039C42: push eax */
    PUSH32(esp, ebx); /* 0x11039C43: push ebx */
    RECOMP_CALL(sub_1102FE25); /* 0x11039C44: call 0x1102fe25 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11039C49: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11039C4C: add esp, 0x18 */
    _flag_k = FK_ADD;
    _st[0] -= *(double*)ADDR(ebx); /* 0x11039C4F: fsub qword ptr [ebx] */
    *(double*)ADDR(esi + 0x10) = _st[0]; /* 0x11039C51: fst qword ptr [esi + 0x10] */
    /* cmp edi, 3 */ /* 0x11039C54: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039C77; /* 0x11039C57: jle 0x11039c77 */
L_11039C59:
    fp_push(0.0); /* 0x11039C59: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039C5B: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039C5D: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11039C5F: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11039C61: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039C77; /* 0x11039C64: jnp 0x11039c77 */
L_11039C66:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x18) = _v; } /* 0x11039C66: fstp qword ptr [esi + 0x18] */
    goto L_11039C79; /* 0x11039C69: jmp 0x11039c79 */
L_11039C6B:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x11039C6B: fstp qword ptr [esi + 0x10] */
    goto L_11039C79; /* 0x11039C6E: jmp 0x11039c79 */
L_11039C70:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x11039C70: fld qword ptr [ebp - 8] */
L_11039C73:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x11039C73: fstp qword ptr [esi] */
    goto L_11039C79; /* 0x11039C75: jmp 0x11039c79 */
L_11039C77:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039C77: fstp st(0) */
L_11039C79:
    edi = POP32_VAL(esp); /* 0x11039C79: pop edi */
    eax = esi; /* 0x11039C7A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11039C7C: pop esi */
    ebx = POP32_VAL(esp); /* 0x11039C7D: pop ebx */
    esp = ebp; /* 0x11039C7E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11039C80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039C81: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039C82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039C82u);

L_11039C82:
    PUSH32(esp, ebp); /* 0x11039C82: push ebp */
    ebp = esp; /* 0x11039C83: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11039C85: push ecx */
    PUSH32(esp, esi); /* 0x11039C86: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11039C87: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11039C8A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11039C8B: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x11039C8E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11039D8A; /* 0x11039C90: je 0x11039d8a */
L_11039C96:
    PUSH32(esp, edi); /* 0x11039C96: push edi */
    RECOMP_CALL(sub_11012D6A); /* 0x11039C97: call 0x11012d6a */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x11039C9C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi)); /* 0x11039C9E: fcomp qword ptr [edi] */
    fp_pop();
    ecx = POP32_VAL(esp); /* 0x11039CA0: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039CA1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11039CA3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039CA6: fnstsw ax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039D75; /* 0x11039CA8: jle 0x11039d75 */
L_11039CAE:
    /* test HI8(eax), 0x41u */ /* 0x11039CAE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11039D7A; /* 0x11039CB1: je 0x11039d7a */
L_11039CB7:
    fp_push(*(double*)ADDR(edi)); /* 0x11039CB7: fld qword ptr [edi] */
    PUSH32(esp, ebx); /* 0x11039CB9: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x11039CBA: mov ebx, dword ptr [ebp + 0x10] */
    eax = ebx + esi * 8; /* 0x11039CBD: lea eax, [ebx + esi*8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x11039CC0: mov dword ptr [ebp - 4], eax */
    eax = eax + esi * 8; /* 0x11039CC3: lea eax, [eax + esi*8] */
    MEM32(ebp + 0xC) = eax; /* 0x11039CC6: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, 1 */ /* 0x11039CC9: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039CD1; /* 0x11039CCC: jle 0x11039cd1 */
L_11039CCE:
    _st[0] += *(double*)ADDR(edi + 0x8); /* 0x11039CCE: fadd qword ptr [edi + 8] */
L_11039CD1:
    PUSH32(esp, ecx); /* 0x11039CD1: push ecx */
    PUSH32(esp, ecx); /* 0x11039CD2: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039CD3: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1103B870); /* 0x11039CD6: call 0x1103b870 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x11039CDB: fld1  */
    eax = ebx + esi * 8; /* 0x11039CDD: lea eax, [ebx + esi*8] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x11039CE0: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039CE2: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039CE5: push esi */
    PUSH32(esp, eax); /* 0x11039CE6: push eax */
    RECOMP_CALL(sub_11039B94); /* 0x11039CE7: call 0x11039b94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039CEC: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x11039CEF: push 2 */
    eax = POP32_VAL(esp); /* 0x11039CF1: pop eax */
    MEM32(ebp + 0x8) = eax; /* 0x11039CF2: mov dword ptr [ebp + 8], eax */
    /* cmp esi, eax */ /* 0x11039CF5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039D61; /* 0x11039CF7: jle 0x11039d61 */
L_11039CF9:
    eax = ebx + esi * 8; /* 0x11039CF9: lea eax, [ebx + esi*8] */
    PUSH32(esp, eax); /* 0x11039CFC: push eax */
    PUSH32(esp, esi); /* 0x11039CFD: push esi */
    PUSH32(esp, ebx); /* 0x11039CFE: push ebx */
    RECOMP_CALL(sub_110398FE); /* 0x11039CFF: call 0x110398fe */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x110011E0)); /* 0x11039D04: fld qword ptr [0x110011e0] */
    ecx = POP32_VAL(esp); /* 0x11039D0A: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039D0B: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039D0E: push esi */
    PUSH32(esp, ebx); /* 0x11039D0F: push ebx */
    RECOMP_CALL(sub_1103991B); /* 0x11039D10: call 0x1103991b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039D15: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11039D18: push esi */
    PUSH32(esp, edi); /* 0x11039D19: push edi */
    PUSH32(esp, esi); /* 0x11039D1A: push esi */
    PUSH32(esp, ebx); /* 0x11039D1B: push ebx */
    RECOMP_CALL(sub_11039A99); /* 0x11039D1C: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039D21: push dword ptr [ebp + 0xc] */
    eax = ebx + esi * 8; /* 0x11039D24: lea eax, [ebx + esi*8] */
    PUSH32(esp, esi); /* 0x11039D27: push esi */
    PUSH32(esp, eax); /* 0x11039D28: push eax */
    PUSH32(esp, esi); /* 0x11039D29: push esi */
    PUSH32(esp, ebx); /* 0x11039D2A: push ebx */
    RECOMP_CALL(sub_11039A99); /* 0x11039D2B: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11003828)); /* 0x11039D30: fld qword ptr [0x11003828] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11039D36: add esp, 0x30 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039D39: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039D3C: push esi */
    PUSH32(esp, ebx); /* 0x11039D3D: push ebx */
    RECOMP_CALL(sub_110393D0); /* 0x11039D3E: call 0x110393d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039D43: push dword ptr [ebp + 0xc] */
    eax = ebx + esi * 8; /* 0x11039D46: lea eax, [ebx + esi*8] */
    PUSH32(esp, esi); /* 0x11039D49: push esi */
    PUSH32(esp, ebx); /* 0x11039D4A: push ebx */
    PUSH32(esp, esi); /* 0x11039D4B: push esi */
    PUSH32(esp, eax); /* 0x11039D4C: push eax */
    RECOMP_CALL(sub_11039A99); /* 0x11039D4D: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11039D52: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x11039D55: add esp, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x11039D58: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x11039D5A: mov dword ptr [ebp + 8], eax */
    /* cmp eax, esi */ /* 0x11039D5D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11039CF9; /* 0x11039D5F: jl 0x11039cf9 */
L_11039D61:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039D61: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11039D64: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x11039D65: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x11039D68: push esi */
    PUSH32(esp, edi); /* 0x11039D69: push edi */
    RECOMP_CALL(sub_11039A99); /* 0x11039D6A: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11039D6F: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x11039D72: pop ebx */
    goto L_11039D8A; /* 0x11039D73: jmp 0x11039d8a */
L_11039D75:
    /* test HI8(eax), 0x41u */ /* 0x11039D75: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11039D8A; /* 0x11039D78: jne 0x11039d8a */
L_11039D7A:
    PUSH32(esp, 1); /* 0x11039D7A: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x11039D7C: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11063178)); /* 0x11039D81: fld qword ptr [0x11063178] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x11039D87: fstp qword ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x11039D89: pop ecx */
L_11039D8A:
    eax = edi; /* 0x11039D8A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11039D8C: pop edi */
    esi = POP32_VAL(esp); /* 0x11039D8D: pop esi */
    esp = ebp; /* 0x11039D8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11039D90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039D91: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039D92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039D92u);

L_11039D92:
    PUSH32(esp, ebp); /* 0x11039D92: push ebp */
    ebp = esp; /* 0x11039D93: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11039D95: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11039D96: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x11039D98: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039DD2; /* 0x11039D9B: jle 0x11039dd2 */
L_11039D9D:
    fp_push(0.0); /* 0x11039D9D: fldz  */
    PUSH32(esp, edi); /* 0x11039D9F: push edi */
    edi = MEM32(ebp + 0x10); /* 0x11039DA0: mov edi, dword ptr [ebp + 0x10] */
L_11039DA3:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x11039DA3: fld qword ptr [edi + esi*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11039DA6: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039DA8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11039DAA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039DD1; /* 0x11039DAD: jnp 0x11039dd1 */
L_11039DAF:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x11039DAF: fld qword ptr [edi + esi*8] */
    PUSH32(esp, ecx); /* 0x11039DB2: push ecx */
    PUSH32(esp, ecx); /* 0x11039DB3: push ecx */
    _st[0] = -_st[0]; /* 0x11039DB4: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11039DB6: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039DB9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11039DBC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110393D0); /* 0x11039DBF: call 0x110393d0 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x11039DC4: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11039DC6: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11039DC9: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x11039DCA: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11039DA3; /* 0x11039DCD: jl 0x11039da3 */
L_11039DCF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039DCF: fstp st(0) */
L_11039DD1:
    edi = POP32_VAL(esp); /* 0x11039DD1: pop edi */
L_11039DD2:
    eax = MEM32(ebp + 0x8); /* 0x11039DD2: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x11039DD5: pop esi */
    ebp = POP32_VAL(esp); /* 0x11039DD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039DD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039DD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039DD8u);

L_11039DD8:
    PUSH32(esp, ebp); /* 0x11039DD8: push ebp */
    ebp = esp; /* 0x11039DD9: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11039DDB: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069070)); /* 0x11039DDE: call dword ptr [0x11069070] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x11039DE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039DE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039DE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039DE6u);

L_11039DE6:
    PUSH32(esp, ebp); /* 0x11039DE6: push ebp */
    ebp = esp; /* 0x11039DE7: mov ebp, esp */
    PUSH32(esp, 0); /* 0x11039DE9: push 0 */
    PUSH32(esp, 0xFA0u); /* 0x11039DEB: push 0xfa0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11039DF0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069328)); /* 0x11039DF3: call dword ptr [0x11069328] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11039DF9: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11039DFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039DFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039DFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039DFEu);

L_11039DFE:
    PUSH32(esp, ebp); /* 0x11039DFE: push ebp */
    ebp = esp; /* 0x11039DFF: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11039E01: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069078)); /* 0x11039E04: call dword ptr [0x11069078] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x11039E0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039E0B: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039E0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039E0Cu);

L_11039E0C:
    PUSH32(esp, ebp); /* 0x11039E0C: push ebp */
    ebp = esp; /* 0x11039E0D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11039E0F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11039E10: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x11039E13: push edi */
    PUSH32(esp, 2); /* 0x11039E14: push 2 */
    edi = POP32_VAL(esp); /* 0x11039E16: pop edi */
    /* cmp MEM32(esi), edi */ /* 0x11039E17: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11039E3E; /* 0x11039E19: je 0x11039e3e */
L_11039E1B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11039E1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11039E1D: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(esi); /* 0x11039E1E: xchg dword ptr [esi], eax */
      MEM32(esi) = eax;
      eax = _tmp; }
    /* test eax, eax */ /* 0x11039E20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11039E29; /* 0x11039E22: jne 0x11039e29 */
L_11039E24:
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x11039E24: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_11039E2D; /* 0x11039E27: jmp 0x11039e2d */
L_11039E29:
    /* cmp eax, edi */ /* 0x11039E29: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11039E3A; /* 0x11039E2B: jne 0x11039e3a */
L_11039E2D:
    MEM32(esi) = edi; /* 0x11039E2D: mov dword ptr [esi], edi */
    goto L_11039E3E; /* 0x11039E2F: jmp 0x11039e3e */
L_11039E31:
    PUSH32(esp, 1); /* 0x11039E31: push 1 */
    RECOMP_ICALL(MEM32(0x110691C8)); /* 0x11039E33: call dword ptr [0x110691c8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11039E39: pop ecx */
L_11039E3A:
    /* cmp MEM32(esi), edi */ /* 0x11039E3A: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11039E31; /* 0x11039E3C: jne 0x11039e31 */
L_11039E3E:
    edi = POP32_VAL(esp); /* 0x11039E3E: pop edi */
    esi = POP32_VAL(esp); /* 0x11039E3F: pop esi */
    ebp = POP32_VAL(esp); /* 0x11039E40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039E41: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039E42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039E42u);

L_11039E42:
    PUSH32(esp, ebp); /* 0x11039E42: push ebp */
    ebp = esp; /* 0x11039E43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x11039E45: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11039E48: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11039E4D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11039E4F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x11039E52: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x11039E55: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x11039E56: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x11039E59: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11039E5A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11039E5D: push edi */
    MEM32(ebp + (-0x54)) = eax; /* 0x11039E5E: mov dword ptr [ebp - 0x54], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x18) * (int32_t)9); /* 0x11039E61: imul eax, dword ptr [ebp + 0x18], 9 */
    PUSH32(esp, 0x2Du); /* 0x11039E65: push 0x2d */
    ecx = POP32_VAL(esp); /* 0x11039E67: pop ecx */
    MEM32(ebp + (-0x3C)) = esi; /* 0x11039E68: mov dword ptr [ebp - 0x3c], esi */
    MEM32(ebp + (-0x58)) = ebx; /* 0x11039E6B: mov dword ptr [ebp - 0x58], ebx */
    MEM32(ebp + (-0x38)) = eax; /* 0x11039E6E: mov dword ptr [ebp - 0x38], eax */
    /* cmp eax, ecx */ /* 0x11039E71: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039E78; /* 0x11039E73: jle 0x11039e78 */
L_11039E75:
    MEM32(ebp + (-0x38)) = ecx; /* 0x11039E75: mov dword ptr [ebp - 0x38], ecx */
L_11039E78:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11039E78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = eax; /* 0x11039E7A: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x4) = eax; /* 0x11039E7C: mov dword ptr [ebx + 4], eax */
    /* cmp MEM8(esi), 0x30u */ /* 0x11039E7F: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x44)) = eax; /* 0x11039E82: mov dword ptr [ebp - 0x44], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11039E96; /* 0x11039E85: jne 0x11039e96 */
L_11039E87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039E87: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11039E89: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x44)) = ecx; /* 0x11039E8A: mov dword ptr [ebp - 0x44], ecx */
L_11039E8D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11039E8D: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0x30u */ /* 0x11039E8E: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11039E8D; /* 0x11039E91: je 0x11039e8d */
L_11039E93:
    MEM32(ebp + (-0x3C)) = esi; /* 0x11039E93: mov dword ptr [ebp - 0x3c], esi */
L_11039E96:
    edi = eax; /* 0x11039E96: mov edi, eax */
    eax = (uint32_t)MEM8(esi); /* 0x11039E98: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x11039E9B: push eax */
    RECOMP_ICALL(MEM32(0x11069278)); /* 0x11039E9C: call dword ptr [0x11069278] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11039EA2: pop ecx */
    /* test eax, eax */ /* 0x11039EA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11039ED2; /* 0x11039EA5: je 0x11039ed2 */
L_11039EA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039EA7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11039EA9: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x44)) = ecx; /* 0x11039EAA: mov dword ptr [ebp - 0x44], ecx */
L_11039EAD:
    /* cmp edi, MEM32(ebp + (-0x38)) */ /* 0x11039EAD: cmp edi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_11039EBD; /* 0x11039EB0: jg 0x11039ebd */
L_11039EB2:
    SET_LO8(eax, MEM8(esi)); /* 0x11039EB2: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x30u); /* 0x11039EB4: sub al, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + edi + (-0x34)) = (uint8_t)(LO8(eax)); /* 0x11039EB6: mov byte ptr [ebp + edi - 0x34], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11039EBA: inc edi */
    _flag_k = FK_INC;
    goto L_11039EBF; /* 0x11039EBB: jmp 0x11039ebf */
L_11039EBD:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x11039EBD: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_11039EBF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11039EBF: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x11039EC0: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x11039EC3: push eax */
    RECOMP_ICALL(MEM32(0x11069278)); /* 0x11039EC4: call dword ptr [0x11069278] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11039ECA: pop ecx */
    /* test eax, eax */ /* 0x11039ECB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11039EAD; /* 0x11039ECD: jne 0x11039ead */
L_11039ECF:
    MEM32(ebp + (-0x3C)) = esi; /* 0x11039ECF: mov dword ptr [ebp - 0x3c], esi */
L_11039ED2:
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x11039ED2: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x11039ED8: mov ecx, dword ptr [eax] */
    SET_LO8(eax, MEM8(esi)); /* 0x11039EDA: mov al, byte ptr [esi] */
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x11039EDC: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11039EE4; /* 0x11039EDE: jne 0x11039ee4 */
L_11039EE0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11039EE0: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C)) = esi; /* 0x11039EE1: mov dword ptr [ebp - 0x3c], esi */
L_11039EE4:
    /* test edi, edi */ /* 0x11039EE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11039EFE; /* 0x11039EE6: jne 0x11039efe */
L_11039EE8:
    /* cmp MEM8(esi), 0x30u */ /* 0x11039EE8: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11039EFE; /* 0x11039EEB: jne 0x11039efe */
L_11039EED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039EED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11039EEF: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x44)) = ecx; /* 0x11039EF0: mov dword ptr [ebp - 0x44], ecx */
L_11039EF3:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x11039EF3: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11039EF5: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0x30u */ /* 0x11039EF6: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11039EF3; /* 0x11039EF9: je 0x11039ef3 */
L_11039EFB:
    MEM32(ebp + (-0x3C)) = esi; /* 0x11039EFB: mov dword ptr [ebp - 0x3c], esi */
L_11039EFE:
    eax = (uint32_t)MEM8(esi); /* 0x11039EFE: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x11039F01: push eax */
    RECOMP_ICALL(MEM32(0x11069278)); /* 0x11039F02: call dword ptr [0x11069278] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11039F08: pop ecx */
    /* test eax, eax */ /* 0x11039F09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11039F36; /* 0x11039F0B: je 0x11039f36 */
L_11039F0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039F0D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11039F0F: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x44)) = ecx; /* 0x11039F10: mov dword ptr [ebp - 0x44], ecx */
L_11039F13:
    /* cmp edi, MEM32(ebp + (-0x38)) */ /* 0x11039F13: cmp edi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_11039F23; /* 0x11039F16: jg 0x11039f23 */
L_11039F18:
    SET_LO8(eax, MEM8(esi)); /* 0x11039F18: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x30u); /* 0x11039F1A: sub al, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + edi + (-0x34)) = (uint8_t)(LO8(eax)); /* 0x11039F1C: mov byte ptr [ebp + edi - 0x34], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11039F20: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x11039F21: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
L_11039F23:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11039F23: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x11039F24: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x11039F27: push eax */
    RECOMP_ICALL(MEM32(0x11069278)); /* 0x11039F28: call dword ptr [0x11069278] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11039F2E: pop ecx */
    /* test eax, eax */ /* 0x11039F2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11039F13; /* 0x11039F31: jne 0x11039f13 */
L_11039F33:
    MEM32(ebp + (-0x3C)) = esi; /* 0x11039F33: mov dword ptr [ebp - 0x3c], esi */
L_11039F36:
    eax = MEM32(ebp + (-0x38)); /* 0x11039F36: mov eax, dword ptr [ebp - 0x38] */
    /* cmp eax, edi */ /* 0x11039F39: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11039F4C; /* 0x11039F3B: jge 0x11039f4c */
L_11039F3D:
    /* cmp MEM8(ebp + eax + (-0x34)), 5 */ /* 0x11039F3D: cmp byte ptr [ebp + eax - 0x34], 5 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x34))) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_11039F48; /* 0x11039F42: jl 0x11039f48 */
L_11039F44:
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x35))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + eax + (-0x35)) = (uint8_t)(MEM8(ebp + eax + (-0x35)) + 1); /* 0x11039F44: inc byte ptr [ebp + eax - 0x35] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_11039F48:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x11039F48: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    edi = eax; /* 0x11039F4A: mov edi, eax */
L_11039F4C:
    /* test edi, edi */ /* 0x11039F4C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11039F63; /* 0x11039F4E: jle 0x11039f63 */
L_11039F50:
    eax = ebp + (-0x34); /* 0x11039F50: lea eax, [ebp - 0x34] */
L_11039F53:
    /* cmp MEM8(eax + edi + (-0x1)), 0 */ /* 0x11039F53: cmp byte ptr [eax + edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11039F61; /* 0x11039F58: jne 0x11039f61 */
L_11039F5A:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x11039F5A: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x11039F5C: dec edi */
    _flag_k = FK_DEC;
    /* test edi, edi */ /* 0x11039F5D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11039F53; /* 0x11039F5F: jg 0x11039f53 */
L_11039F61:
    /* test edi, edi */ /* 0x11039F61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
L_11039F63:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_11039F6F; /* 0x11039F63: jne 0x11039f6f */
L_11039F65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11039F65: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11039F67: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039F68: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ecx)); /* 0x11039F6A: mov byte ptr [ebp - 0x34], cl */
    goto L_11039F71; /* 0x11039F6D: jmp 0x11039f71 */
L_11039F6F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039F6F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11039F71:
    eax = MEM32(ebp + (-0x44)); /* 0x11039F71: mov eax, dword ptr [ebp - 0x44] */
    /* test eax, eax */ /* 0x11039F74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A079; /* 0x11039F76: je 0x1103a079 */
L_11039F7C:
    eax = edi; /* 0x11039F7C: mov eax, edi */
    MEM32(ebp + (-0x4C)) = 9; /* 0x11039F7E: mov dword ptr [ebp - 0x4c], 9 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11039F85: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4C)); /* 0x11039F86: idiv dword ptr [ebp - 0x4c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 9); /* 0x11039F89: push 9 */
    eax = POP32_VAL(esp); /* 0x11039F8B: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x11039F8C: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50)) = eax; /* 0x11039F8E: mov dword ptr [ebp - 0x50], eax */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11039F91: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4C)); /* 0x11039F92: idiv dword ptr [ebp - 0x4c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = edx; /* 0x11039F95: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x11039F97: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11039F99: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x11039F9B: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x38)) = eax; /* 0x11039F9D: mov dword ptr [ebp - 0x38], eax */
    eax = ecx; /* 0x11039FA0: mov eax, ecx */
    MEM32(ebp + (-0x48)) = eax; /* 0x11039FA2: mov dword ptr [ebp - 0x48], eax */
    /* test edi, edi */ /* 0x11039FA5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11039FF4; /* 0x11039FA7: jle 0x11039ff4 */
L_11039FA9:
    ecx = MEM32(ebp + (-0x50)); /* 0x11039FA9: mov ecx, dword ptr [ebp - 0x50] */
    edx = ebp + (-0x34); /* 0x11039FAC: lea edx, [ebp - 0x34] */
    esi = MEM32(ebp + (-0x38)); /* 0x11039FAF: mov esi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x11039FB2: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50)) = ecx; /* 0x11039FB4: mov dword ptr [ebp - 0x50], ecx */
L_11039FB7:
    edx = ebp + (-0x34); /* 0x11039FB7: lea edx, [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x11039FBA: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = eax; /* 0x11039FBC: mov dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x11039FBF: add eax, ecx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11039FC1: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4C)); /* 0x11039FC2: idiv dword ptr [ebp - 0x4c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x38)); /* 0x11039FC5: mov eax, dword ptr [ebp - 0x38] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x11039FC8: movsx eax, byte ptr [eax] */
    /* test edx, edx */ /* 0x11039FCB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11039FD5; /* 0x11039FCD: jne 0x11039fd5 */
L_11039FCF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11039FCF: inc esi */
    _flag_k = FK_INC;
    MEM32(ebx + esi * 4) = eax; /* 0x11039FD0: mov dword ptr [ebx + esi*4], eax */
    goto L_11039FE1; /* 0x11039FD3: jmp 0x11039fe1 */
L_11039FD5:
    ecx = (uint32_t)((int32_t)MEM32(ebx + esi * 4) * (int32_t)0xAu); /* 0x11039FD5: imul ecx, dword ptr [ebx + esi*4], 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11039FD9: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebx + esi * 4) = ecx; /* 0x11039FDB: mov dword ptr [ebx + esi*4], ecx */
    ecx = MEM32(ebp + (-0x50)); /* 0x11039FDE: mov ecx, dword ptr [ebp - 0x50] */
L_11039FE1:
    eax = MEM32(ebp + (-0x48)); /* 0x11039FE1: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11039FE4: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x48)) = eax; /* 0x11039FE5: mov dword ptr [ebp - 0x48], eax */
    /* cmp eax, edi */ /* 0x11039FE8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11039FB7; /* 0x11039FEA: jl 0x11039fb7 */
L_11039FEC:
    MEM32(ebp + (-0x38)) = esi; /* 0x11039FEC: mov dword ptr [ebp - 0x38], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11039FEF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x3C)); /* 0x11039FF1: mov esi, dword ptr [ebp - 0x3c] */
L_11039FF4:
    SET_LO8(eax, MEM8(esi)); /* 0x11039FF4: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x65u */ /* 0x11039FF6: cmp al, 0x65 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x65u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11039FFE; /* 0x11039FF8: je 0x11039ffe */
L_11039FFA:
    /* cmp LO8(eax), 0x45u */ /* 0x11039FFA: cmp al, 0x45 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A073; /* 0x11039FFC: jne 0x1103a073 */
L_11039FFE:
    MEM32(ebp + (-0x48)) = esi; /* 0x11039FFE: mov dword ptr [ebp - 0x48], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A001: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x1103A002: mov al, byte ptr [esi] */
    MEM8(ebp + (-0x3D)) = (uint8_t)(LO8(eax)); /* 0x1103A004: mov byte ptr [ebp - 0x3d], al */
    /* cmp LO8(eax), 0x2Bu */ /* 0x1103A007: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A015; /* 0x1103A009: je 0x1103a015 */
L_1103A00B:
    /* cmp LO8(eax), 0x2Du */ /* 0x1103A00B: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A015; /* 0x1103A00D: je 0x1103a015 */
L_1103A00F:
    MEM8(ebp + (-0x3D)) = (uint8_t)(0x2Bu); /* 0x1103A00F: mov byte ptr [ebp - 0x3d], 0x2b */
    goto L_1103A016; /* 0x1103A013: jmp 0x1103a016 */
L_1103A015:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A015: inc esi */
    _flag_k = FK_INC;
L_1103A016:
    eax = (uint32_t)MEM8(esi); /* 0x1103A016: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1103A019: push eax */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x1103A01A: mov dword ptr [ebp - 0x3c], ecx */
    RECOMP_ICALL(MEM32(0x11069278)); /* 0x1103A01D: call dword ptr [0x11069278] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103A023: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1103A025: pop ecx */
    /* test eax, eax */ /* 0x1103A026: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A057; /* 0x1103A028: je 0x1103a057 */
L_1103A02A:
    ebx = MEM32(ebp + (-0x3C)); /* 0x1103A02A: mov ebx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103A02D: inc edi */
    _flag_k = FK_INC;
L_1103A02E:
    /* cmp ebx, 0x05F5E100u */ /* 0x1103A02E: cmp ebx, 0x5f5e100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x05F5E100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A041; /* 0x1103A034: jge 0x1103a041 */
L_1103A036:
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0xAu); /* 0x1103A036: imul ecx, ebx, 0xa */
    ebx = (uint32_t)MEM8(esi); /* 0x1103A039: movzx ebx, byte ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFD0u; /* 0x1103A03C: add ebx, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1103A03F: add ebx, ecx */
    _flag_k = FK_ADD;
L_1103A041:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A041: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x1103A042: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1103A045: push eax */
    RECOMP_ICALL(MEM32(0x11069278)); /* 0x1103A046: call dword ptr [0x11069278] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A04C: pop ecx */
    /* test eax, eax */ /* 0x1103A04D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A02E; /* 0x1103A04F: jne 0x1103a02e */
L_1103A051:
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1103A051: mov dword ptr [ebp - 0x3c], ebx */
    ebx = MEM32(ebp + (-0x58)); /* 0x1103A054: mov ebx, dword ptr [ebp - 0x58] */
L_1103A057:
    /* cmp MEM8(ebp + (-0x3D)), 0x2Du */ /* 0x1103A057: cmp byte ptr [ebp - 0x3d], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3D))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x3C)); /* 0x1103A05B: mov eax, dword ptr [ebp - 0x3c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A062; /* 0x1103A05E: jne 0x1103a062 */
L_1103A060:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1103A060: neg eax */
    _flag_k = FK_CMP;
L_1103A062:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x1103A062: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x38)); /* 0x1103A064: mov ecx, dword ptr [ebp - 0x38] */
    eax = MEM32(ebp + (-0x44)); /* 0x1103A067: mov eax, dword ptr [ebp - 0x44] */
    /* test edi, edi */ /* 0x1103A06A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A079; /* 0x1103A06C: jne 0x1103a079 */
L_1103A06E:
    esi = MEM32(ebp + (-0x48)); /* 0x1103A06E: mov esi, dword ptr [ebp - 0x48] */
    goto L_1103A079; /* 0x1103A071: jmp 0x1103a079 */
L_1103A073:
    ecx = MEM32(ebp + (-0x38)); /* 0x1103A073: mov ecx, dword ptr [ebp - 0x38] */
    eax = MEM32(ebp + (-0x44)); /* 0x1103A076: mov eax, dword ptr [ebp - 0x44] */
L_1103A079:
    edx = MEM32(ebp + (-0x54)); /* 0x1103A079: mov edx, dword ptr [ebp - 0x54] */
    /* test edx, edx */ /* 0x1103A07C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A089; /* 0x1103A07E: je 0x1103a089 */
L_1103A080:
    /* test eax, eax */ /* 0x1103A080: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A087; /* 0x1103A082: jne 0x1103a087 */
L_1103A084:
    esi = MEM32(ebp + 0x8); /* 0x1103A084: mov esi, dword ptr [ebp + 8] */
L_1103A087:
    MEM32(edx) = esi; /* 0x1103A087: mov dword ptr [edx], esi */
L_1103A089:
    eax = ecx; /* 0x1103A089: mov eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1103A08B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1103A08E: pop edi */
    esi = POP32_VAL(esp); /* 0x1103A08F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1103A090: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1103A092: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1103A093: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1103A098: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103A09A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103A09B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103A09C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103A09Cu);

L_1103A09C:
    PUSH32(esp, ebp); /* 0x1103A09C: push ebp */
    ebp = esp; /* 0x1103A09D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1103A09F: push ebx */
    ebx = MEM32(0x11069268); /* 0x1103A0A0: mov ebx, dword ptr [0x11069268] */
    PUSH32(esp, esi); /* 0x1103A0A6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1103A0A7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1103A0AA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103A0AB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esi); /* 0x1103A0AD: mov esi, dword ptr [esi] */
    goto L_1103A0B2; /* 0x1103A0AF: jmp 0x1103a0b2 */
L_1103A0B1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A0B1: inc esi */
    _flag_k = FK_INC;
L_1103A0B2:
    eax = (uint32_t)MEM8(esi); /* 0x1103A0B2: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1103A0B5: push eax */
    RECOMP_ICALL(ebx); /* 0x1103A0B6: call ebx */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A0B8: pop ecx */
    /* test eax, eax */ /* 0x1103A0B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A0B1; /* 0x1103A0BB: jne 0x1103a0b1 */
L_1103A0BD:
    SET_LO8(eax, MEM8(esi)); /* 0x1103A0BD: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x2Du */ /* 0x1103A0BF: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A0C8; /* 0x1103A0C1: jne 0x1103a0c8 */
L_1103A0C3:
    PUSH32(esp, 8); /* 0x1103A0C3: push 8 */
    edi = POP32_VAL(esp); /* 0x1103A0C5: pop edi */
    goto L_1103A0CC; /* 0x1103A0C6: jmp 0x1103a0cc */
L_1103A0C8:
    /* cmp LO8(eax), 0x2Bu */ /* 0x1103A0C8: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A0CD; /* 0x1103A0CA: jne 0x1103a0cd */
L_1103A0CC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A0CC: inc esi */
    _flag_k = FK_INC;
L_1103A0CD:
    SET_LO8(eax, MEM8(esi)); /* 0x1103A0CD: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x6Eu */ /* 0x1103A0CF: cmp al, 0x6e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A184; /* 0x1103A0D1: je 0x1103a184 */
L_1103A0D7:
    /* cmp LO8(eax), 0x4Eu */ /* 0x1103A0D7: cmp al, 0x4e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A184; /* 0x1103A0D9: je 0x1103a184 */
L_1103A0DF:
    /* cmp LO8(eax), 0x69u */ /* 0x1103A0DF: cmp al, 0x69 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A121; /* 0x1103A0E1: je 0x1103a121 */
L_1103A0E3:
    /* cmp LO8(eax), 0x49u */ /* 0x1103A0E3: cmp al, 0x49 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A121; /* 0x1103A0E5: je 0x1103a121 */
L_1103A0E7:
    /* cmp LO8(eax), 0x30u */ /* 0x1103A0E7: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A119; /* 0x1103A0E9: jne 0x1103a119 */
L_1103A0EB:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1103A0EB: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x78u */ /* 0x1103A0EE: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A0F6; /* 0x1103A0F0: je 0x1103a0f6 */
L_1103A0F2:
    /* cmp LO8(eax), 0x58u */ /* 0x1103A0F2: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A119; /* 0x1103A0F4: jne 0x1103a119 */
L_1103A0F6:
    eax = esi + 0x2; /* 0x1103A0F6: lea eax, [esi + 2] */
    /* cmp MEM8(eax), 0x2Eu */ /* 0x1103A0F9: cmp byte ptr [eax], 0x2e */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A0FF; /* 0x1103A0FC: jne 0x1103a0ff */
L_1103A0FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103A0FE: inc eax */
    _flag_k = FK_INC;
L_1103A0FF:
    eax = (uint32_t)MEM8(eax); /* 0x1103A0FF: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x1103A102: push eax */
    RECOMP_ICALL(MEM32(0x1106927C)); /* 0x1103A103: call dword ptr [0x1106927c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A109: pop ecx */
    /* test eax, eax */ /* 0x1103A10A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A119; /* 0x1103A10C: je 0x1103a119 */
L_1103A10E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1103A10E: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x1103A111: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1103A1D6; /* 0x1103A114: jmp 0x1103a1d6 */
L_1103A119:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x1103A119: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1103A1D6; /* 0x1103A11C: jmp 0x1103a1d6 */
L_1103A121:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1103A121: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x6Eu */ /* 0x1103A124: cmp al, 0x6e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A12C; /* 0x1103A126: je 0x1103a12c */
L_1103A128:
    /* cmp LO8(eax), 0x4Eu */ /* 0x1103A128: cmp al, 0x4e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A19A; /* 0x1103A12A: jne 0x1103a19a */
L_1103A12C:
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1103A12C: mov al, byte ptr [esi + 2] */
    /* cmp LO8(eax), 0x66u */ /* 0x1103A12F: cmp al, 0x66 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x66u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A137; /* 0x1103A131: je 0x1103a137 */
L_1103A133:
    /* cmp LO8(eax), 0x46u */ /* 0x1103A133: cmp al, 0x46 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x46u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A19A; /* 0x1103A135: jne 0x1103a19a */
L_1103A137:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x1103A137: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | 3)); _flag_b = (uint32_t)((edi | 3));
    edi = edi | 3; /* 0x1103A13A: or edi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi)); /* 0x1103A13D: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x69u */ /* 0x1103A13F: cmp al, 0x69 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A14B; /* 0x1103A141: je 0x1103a14b */
L_1103A143:
    /* cmp LO8(eax), 0x49u */ /* 0x1103A143: cmp al, 0x49 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A1CD; /* 0x1103A145: jne 0x1103a1cd */
L_1103A14B:
    SET_LO8(ecx, MEM8(esi + 0x1)); /* 0x1103A14B: mov cl, byte ptr [esi + 1] */
    /* cmp LO8(ecx), 0x6Eu */ /* 0x1103A14E: cmp cl, 0x6e */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x6Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A158; /* 0x1103A151: je 0x1103a158 */
L_1103A153:
    /* cmp LO8(ecx), 0x4Eu */ /* 0x1103A153: cmp cl, 0x4e */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x4Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A1CD; /* 0x1103A156: jne 0x1103a1cd */
L_1103A158:
    SET_LO8(ecx, MEM8(esi + 0x2)); /* 0x1103A158: mov cl, byte ptr [esi + 2] */
    /* cmp LO8(ecx), 0x69u */ /* 0x1103A15B: cmp cl, 0x69 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A165; /* 0x1103A15E: je 0x1103a165 */
L_1103A160:
    /* cmp LO8(ecx), 0x49u */ /* 0x1103A160: cmp cl, 0x49 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A1CD; /* 0x1103A163: jne 0x1103a1cd */
L_1103A165:
    SET_LO8(ecx, MEM8(esi + 0x3)); /* 0x1103A165: mov cl, byte ptr [esi + 3] */
    /* cmp LO8(ecx), 0x74u */ /* 0x1103A168: cmp cl, 0x74 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x74u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A172; /* 0x1103A16B: je 0x1103a172 */
L_1103A16D:
    /* cmp LO8(ecx), 0x54u */ /* 0x1103A16D: cmp cl, 0x54 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x54u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A1CD; /* 0x1103A170: jne 0x1103a1cd */
L_1103A172:
    SET_LO8(ecx, MEM8(esi + 0x4)); /* 0x1103A172: mov cl, byte ptr [esi + 4] */
    /* cmp LO8(ecx), 0x79u */ /* 0x1103A175: cmp cl, 0x79 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x79u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A17F; /* 0x1103A178: je 0x1103a17f */
L_1103A17A:
    /* cmp LO8(ecx), 0x59u */ /* 0x1103A17A: cmp cl, 0x59 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x59u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A1CD; /* 0x1103A17D: jne 0x1103a1cd */
L_1103A17F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 5; /* 0x1103A17F: add esi, 5 */
    _flag_k = FK_ADD;
    goto L_1103A1CD; /* 0x1103A182: jmp 0x1103a1cd */
L_1103A184:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1103A184: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x61u */ /* 0x1103A187: cmp al, 0x61 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A18F; /* 0x1103A189: je 0x1103a18f */
L_1103A18B:
    /* cmp LO8(eax), 0x41u */ /* 0x1103A18B: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A19A; /* 0x1103A18D: jne 0x1103a19a */
L_1103A18F:
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1103A18F: mov al, byte ptr [esi + 2] */
    /* cmp LO8(eax), 0x6Eu */ /* 0x1103A192: cmp al, 0x6e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A1A3; /* 0x1103A194: je 0x1103a1a3 */
L_1103A196:
    /* cmp LO8(eax), 0x4Eu */ /* 0x1103A196: cmp al, 0x4e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A1A3; /* 0x1103A198: je 0x1103a1a3 */
L_1103A19A:
    eax = MEM32(ebp + 0x8); /* 0x1103A19A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103A19D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax); /* 0x1103A19F: mov esi, dword ptr [eax] */
    goto L_1103A1CD; /* 0x1103A1A1: jmp 0x1103a1cd */
L_1103A1A3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x1103A1A3: add esi, 3 */
    _flag_k = FK_ADD;
    PUSH32(esp, 4); /* 0x1103A1A6: push 4 */
    ebx = esi; /* 0x1103A1A8: mov ebx, esi */
    edi = POP32_VAL(esp); /* 0x1103A1AA: pop edi */
    /* cmp MEM8(esi), 0x28u */ /* 0x1103A1AB: cmp byte ptr [esi], 0x28 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x28u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A1CD; /* 0x1103A1AE: jne 0x1103a1cd */
L_1103A1B0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1103A1B0: inc ebx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(ebx); /* 0x1103A1B1: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1103A1B4: push eax */
    RECOMP_ICALL(MEM32(0x11069280)); /* 0x1103A1B5: call dword ptr [0x11069280] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A1BB: pop ecx */
    /* test eax, eax */ /* 0x1103A1BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A1B0; /* 0x1103A1BE: jne 0x1103a1b0 */
L_1103A1C0:
    /* cmp MEM8(ebx), 0x5Fu */ /* 0x1103A1C0: cmp byte ptr [ebx], 0x5f */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A1B0; /* 0x1103A1C3: je 0x1103a1b0 */
L_1103A1C5:
    /* cmp MEM8(ebx), 0x29u */ /* 0x1103A1C5: cmp byte ptr [ebx], 0x29 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A1CD; /* 0x1103A1C8: jne 0x1103a1cd */
L_1103A1CA:
    esi = ebx + 0x1; /* 0x1103A1CA: lea esi, [ebx + 1] */
L_1103A1CD:
    eax = MEM32(ebp + 0xC); /* 0x1103A1CD: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1103A1D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A1D6; /* 0x1103A1D2: je 0x1103a1d6 */
L_1103A1D4:
    MEM32(eax) = esi; /* 0x1103A1D4: mov dword ptr [eax], esi */
L_1103A1D6:
    eax = MEM32(ebp + 0x8); /* 0x1103A1D6: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x1103A1D9: mov dword ptr [eax], esi */
    eax = edi; /* 0x1103A1DB: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1103A1DD: pop edi */
    esi = POP32_VAL(esp); /* 0x1103A1DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103A1DF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1103A1E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103A1E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103A1E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103A1E2u);

L_1103A1E2:
    PUSH32(esp, ebp); /* 0x1103A1E2: push ebp */
    ebp = esp; /* 0x1103A1E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x1103A1E5: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1103A1E8: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1103A1ED: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1103A1EF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1103A1F2: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1103A1F5: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1103A1F6: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1103A1F9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1103A1FA: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1103A1FD: push edi */
    MEM32(ebp + (-0x48)) = eax; /* 0x1103A1FE: mov dword ptr [ebp - 0x48], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x18) * (int32_t)7); /* 0x1103A201: imul eax, dword ptr [ebp + 0x18], 7 */
    PUSH32(esp, 0x23u); /* 0x1103A205: push 0x23 */
    ecx = POP32_VAL(esp); /* 0x1103A207: pop ecx */
    MEM32(ebp + (-0x30)) = esi; /* 0x1103A208: mov dword ptr [ebp - 0x30], esi */
    MEM32(ebp + (-0x4C)) = ebx; /* 0x1103A20B: mov dword ptr [ebp - 0x4c], ebx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1103A20E: mov dword ptr [ebp - 0x2c], eax */
    /* cmp eax, ecx */ /* 0x1103A211: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103A218; /* 0x1103A213: jle 0x1103a218 */
L_1103A215:
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1103A215: mov dword ptr [ebp - 0x2c], ecx */
L_1103A218:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103A218: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = eax; /* 0x1103A21A: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x4) = eax; /* 0x1103A21C: mov dword ptr [ebx + 4], eax */
    /* cmp MEM8(esi), 0x30u */ /* 0x1103A21F: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x38)) = eax; /* 0x1103A222: mov dword ptr [ebp - 0x38], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A236; /* 0x1103A225: jne 0x1103a236 */
L_1103A227:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A227: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103A229: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = ecx; /* 0x1103A22A: mov dword ptr [ebp - 0x38], ecx */
L_1103A22D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A22D: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0x30u */ /* 0x1103A22E: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A22D; /* 0x1103A231: je 0x1103a22d */
L_1103A233:
    MEM32(ebp + (-0x30)) = esi; /* 0x1103A233: mov dword ptr [ebp - 0x30], esi */
L_1103A236:
    edi = eax; /* 0x1103A236: mov edi, eax */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1103A238: movsx eax, byte ptr [esi] */
    PUSH32(esp, 0x16u); /* 0x1103A23B: push 0x16 */
    PUSH32(esp, eax); /* 0x1103A23D: push eax */
    PUSH32(esp, 0x11003838u); /* 0x1103A23E: push 0x11003838 */
    RECOMP_ICALL(MEM32(0x11069270)); /* 0x1103A243: call dword ptr [0x11069270] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103A249: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103A24C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A28B; /* 0x1103A24E: je 0x1103a28b */
L_1103A250:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A250: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103A252: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = ecx; /* 0x1103A253: mov dword ptr [ebp - 0x38], ecx */
L_1103A256:
    /* cmp edi, MEM32(ebp + (-0x2C)) */ /* 0x1103A256: cmp edi, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1103A26D; /* 0x1103A259: jg 0x1103a26d */
L_1103A25B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11003838u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x11003838u; /* 0x1103A25B: sub eax, 0x11003838 */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(eax + 0x11003850)); /* 0x1103A260: mov al, byte ptr [eax + 0x11003850] */
    MEM8(ebp + edi + (-0x28)) = (uint8_t)(LO8(eax)); /* 0x1103A266: mov byte ptr [ebp + edi - 0x28], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103A26A: inc edi */
    _flag_k = FK_INC;
    goto L_1103A26F; /* 0x1103A26B: jmp 0x1103a26f */
L_1103A26D:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1103A26D: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_1103A26F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A26F: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, 0x16u); /* 0x1103A270: push 0x16 */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1103A272: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1103A275: push eax */
    PUSH32(esp, 0x11003838u); /* 0x1103A276: push 0x11003838 */
    RECOMP_ICALL(MEM32(0x11069270)); /* 0x1103A27B: call dword ptr [0x11069270] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103A281: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103A284: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A256; /* 0x1103A286: jne 0x1103a256 */
L_1103A288:
    MEM32(ebp + (-0x30)) = esi; /* 0x1103A288: mov dword ptr [ebp - 0x30], esi */
L_1103A28B:
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x1103A28B: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1103A291: mov ecx, dword ptr [eax] */
    SET_LO8(eax, MEM8(esi)); /* 0x1103A293: mov al, byte ptr [esi] */
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1103A295: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A29D; /* 0x1103A297: jne 0x1103a29d */
L_1103A299:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A299: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = esi; /* 0x1103A29A: mov dword ptr [ebp - 0x30], esi */
L_1103A29D:
    /* test edi, edi */ /* 0x1103A29D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A2B7; /* 0x1103A29F: jne 0x1103a2b7 */
L_1103A2A1:
    /* cmp MEM8(esi), 0x30u */ /* 0x1103A2A1: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A2B7; /* 0x1103A2A4: jne 0x1103a2b7 */
L_1103A2A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A2A6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103A2A8: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = ecx; /* 0x1103A2A9: mov dword ptr [ebp - 0x38], ecx */
L_1103A2AC:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x1103A2AC: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A2AE: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0x30u */ /* 0x1103A2AF: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A2AC; /* 0x1103A2B2: je 0x1103a2ac */
L_1103A2B4:
    MEM32(ebp + (-0x30)) = esi; /* 0x1103A2B4: mov dword ptr [ebp - 0x30], esi */
L_1103A2B7:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1103A2B7: movsx eax, byte ptr [esi] */
    PUSH32(esp, 0x16u); /* 0x1103A2BA: push 0x16 */
    PUSH32(esp, eax); /* 0x1103A2BC: push eax */
    PUSH32(esp, 0x11003838u); /* 0x1103A2BD: push 0x11003838 */
    RECOMP_ICALL(MEM32(0x11069270)); /* 0x1103A2C2: call dword ptr [0x11069270] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103A2C8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103A2CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A308; /* 0x1103A2CD: je 0x1103a308 */
L_1103A2CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A2CF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103A2D1: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = ecx; /* 0x1103A2D2: mov dword ptr [ebp - 0x38], ecx */
L_1103A2D5:
    /* cmp edi, MEM32(ebp + (-0x2C)) */ /* 0x1103A2D5: cmp edi, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1103A2EC; /* 0x1103A2D8: jg 0x1103a2ec */
L_1103A2DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11003838u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x11003838u; /* 0x1103A2DA: sub eax, 0x11003838 */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(eax + 0x11003850)); /* 0x1103A2DF: mov al, byte ptr [eax + 0x11003850] */
    MEM8(ebp + edi + (-0x28)) = (uint8_t)(LO8(eax)); /* 0x1103A2E5: mov byte ptr [ebp + edi - 0x28], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103A2E9: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x1103A2EA: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
L_1103A2EC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A2EC: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, 0x16u); /* 0x1103A2ED: push 0x16 */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1103A2EF: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1103A2F2: push eax */
    PUSH32(esp, 0x11003838u); /* 0x1103A2F3: push 0x11003838 */
    RECOMP_ICALL(MEM32(0x11069270)); /* 0x1103A2F8: call dword ptr [0x11069270] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103A2FE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103A301: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A2D5; /* 0x1103A303: jne 0x1103a2d5 */
L_1103A305:
    MEM32(ebp + (-0x30)) = esi; /* 0x1103A305: mov dword ptr [ebp - 0x30], esi */
L_1103A308:
    eax = MEM32(ebp + (-0x2C)); /* 0x1103A308: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, edi */ /* 0x1103A30B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A31E; /* 0x1103A30D: jge 0x1103a31e */
L_1103A30F:
    /* cmp MEM8(ebp + eax + (-0x28)), 8 */ /* 0x1103A30F: cmp byte ptr [ebp + eax - 0x28], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x28))) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1103A31A; /* 0x1103A314: jl 0x1103a31a */
L_1103A316:
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x29))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + eax + (-0x29)) = (uint8_t)(MEM8(ebp + eax + (-0x29)) + 1); /* 0x1103A316: inc byte ptr [ebp + eax - 0x29] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_1103A31A:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1103A31A: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    edi = eax; /* 0x1103A31C: mov edi, eax */
L_1103A31E:
    /* test edi, edi */ /* 0x1103A31E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103A335; /* 0x1103A320: jle 0x1103a335 */
L_1103A322:
    eax = ebp + (-0x28); /* 0x1103A322: lea eax, [ebp - 0x28] */
L_1103A325:
    /* cmp MEM8(eax + edi + (-0x1)), 0 */ /* 0x1103A325: cmp byte ptr [eax + edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A333; /* 0x1103A32A: jne 0x1103a333 */
L_1103A32C:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1103A32C: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1103A32E: dec edi */
    _flag_k = FK_DEC;
    /* test edi, edi */ /* 0x1103A32F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1103A325; /* 0x1103A331: jg 0x1103a325 */
L_1103A333:
    /* test edi, edi */ /* 0x1103A333: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1103A335:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1103A341; /* 0x1103A335: jne 0x1103a341 */
L_1103A337:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103A337: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103A339: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A33A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ecx)); /* 0x1103A33C: mov byte ptr [ebp - 0x28], cl */
    goto L_1103A343; /* 0x1103A33F: jmp 0x1103a343 */
L_1103A341:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A341: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103A343:
    if (2u) _cf = (((MEM32(ebx)) >> 30) & 1u); /* 0x1103A343: shl dword ptr [ebx], 2 */
    if (2u) { _flag_a = recomp_flags_pack((MEM32(ebx) << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebx) = MEM32(ebx) << 2u; /* 0x1103A343: shl dword ptr [ebx], 2 */
    eax = MEM32(ebp + (-0x38)); /* 0x1103A346: mov eax, dword ptr [ebp - 0x38] */
    /* test eax, eax */ /* 0x1103A349: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A450; /* 0x1103A34B: je 0x1103a450 */
L_1103A351:
    eax = edi; /* 0x1103A351: mov eax, edi */
    MEM32(ebp + (-0x40)) = 7; /* 0x1103A353: mov dword ptr [ebp - 0x40], 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1103A35A: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x40)); /* 0x1103A35B: idiv dword ptr [ebp - 0x40] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 7); /* 0x1103A35E: push 7 */
    eax = POP32_VAL(esp); /* 0x1103A360: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1103A361: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x44)) = eax; /* 0x1103A363: mov dword ptr [ebp - 0x44], eax */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1103A366: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x40)); /* 0x1103A367: idiv dword ptr [ebp - 0x40] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = edx; /* 0x1103A36A: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1103A36C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1103A36E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1103A370: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1103A372: mov dword ptr [ebp - 0x2c], eax */
    eax = ecx; /* 0x1103A375: mov eax, ecx */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1103A377: mov dword ptr [ebp - 0x3c], eax */
    /* test edi, edi */ /* 0x1103A37A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103A3CB; /* 0x1103A37C: jle 0x1103a3cb */
L_1103A37E:
    ecx = MEM32(ebp + (-0x44)); /* 0x1103A37E: mov ecx, dword ptr [ebp - 0x44] */
    edx = ebp + (-0x28); /* 0x1103A381: lea edx, [ebp - 0x28] */
    esi = MEM32(ebp + (-0x2C)); /* 0x1103A384: mov esi, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1103A387: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x44)) = ecx; /* 0x1103A389: mov dword ptr [ebp - 0x44], ecx */
L_1103A38C:
    edx = ebp + (-0x28); /* 0x1103A38C: lea edx, [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1103A38F: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1103A391: mov dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1103A394: add eax, ecx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1103A396: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x40)); /* 0x1103A397: idiv dword ptr [ebp - 0x40] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x2C)); /* 0x1103A39A: mov eax, dword ptr [ebp - 0x2c] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1103A39D: movsx eax, byte ptr [eax] */
    /* test edx, edx */ /* 0x1103A3A0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A3AA; /* 0x1103A3A2: jne 0x1103a3aa */
L_1103A3A4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A3A4: inc esi */
    _flag_k = FK_INC;
    MEM32(ebx + esi * 4) = eax; /* 0x1103A3A5: mov dword ptr [ebx + esi*4], eax */
    goto L_1103A3B8; /* 0x1103A3A8: jmp 0x1103a3b8 */
L_1103A3AA:
    ecx = MEM32(ebx + esi * 4); /* 0x1103A3AA: mov ecx, dword ptr [ebx + esi*4] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1103A3AD: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1103A3AD: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1103A3B0: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebx + esi * 4) = ecx; /* 0x1103A3B2: mov dword ptr [ebx + esi*4], ecx */
    ecx = MEM32(ebp + (-0x44)); /* 0x1103A3B5: mov ecx, dword ptr [ebp - 0x44] */
L_1103A3B8:
    eax = MEM32(ebp + (-0x3C)); /* 0x1103A3B8: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103A3BB: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C)) = eax; /* 0x1103A3BC: mov dword ptr [ebp - 0x3c], eax */
    /* cmp eax, edi */ /* 0x1103A3BF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103A38C; /* 0x1103A3C1: jl 0x1103a38c */
L_1103A3C3:
    MEM32(ebp + (-0x2C)) = esi; /* 0x1103A3C3: mov dword ptr [ebp - 0x2c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A3C6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x30)); /* 0x1103A3C8: mov esi, dword ptr [ebp - 0x30] */
L_1103A3CB:
    SET_LO8(eax, MEM8(esi)); /* 0x1103A3CB: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x70u */ /* 0x1103A3CD: cmp al, 0x70 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x70u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A3D5; /* 0x1103A3CF: je 0x1103a3d5 */
L_1103A3D1:
    /* cmp LO8(eax), 0x50u */ /* 0x1103A3D1: cmp al, 0x50 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A44A; /* 0x1103A3D3: jne 0x1103a44a */
L_1103A3D5:
    MEM32(ebp + (-0x3C)) = esi; /* 0x1103A3D5: mov dword ptr [ebp - 0x3c], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A3D8: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x1103A3D9: mov al, byte ptr [esi] */
    MEM8(ebp + (-0x31)) = (uint8_t)(LO8(eax)); /* 0x1103A3DB: mov byte ptr [ebp - 0x31], al */
    /* cmp LO8(eax), 0x2Bu */ /* 0x1103A3DE: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A3EC; /* 0x1103A3E0: je 0x1103a3ec */
L_1103A3E2:
    /* cmp LO8(eax), 0x2Du */ /* 0x1103A3E2: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A3EC; /* 0x1103A3E4: je 0x1103a3ec */
L_1103A3E6:
    MEM8(ebp + (-0x31)) = (uint8_t)(0x2Bu); /* 0x1103A3E6: mov byte ptr [ebp - 0x31], 0x2b */
    goto L_1103A3ED; /* 0x1103A3EA: jmp 0x1103a3ed */
L_1103A3EC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A3EC: inc esi */
    _flag_k = FK_INC;
L_1103A3ED:
    eax = (uint32_t)MEM8(esi); /* 0x1103A3ED: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1103A3F0: push eax */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1103A3F1: mov dword ptr [ebp - 0x30], ecx */
    RECOMP_ICALL(MEM32(0x11069278)); /* 0x1103A3F4: call dword ptr [0x11069278] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103A3FA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1103A3FC: pop ecx */
    /* test eax, eax */ /* 0x1103A3FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A42E; /* 0x1103A3FF: je 0x1103a42e */
L_1103A401:
    ebx = MEM32(ebp + (-0x30)); /* 0x1103A401: mov ebx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103A404: inc edi */
    _flag_k = FK_INC;
L_1103A405:
    /* cmp ebx, 0x05F5E100u */ /* 0x1103A405: cmp ebx, 0x5f5e100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x05F5E100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A418; /* 0x1103A40B: jge 0x1103a418 */
L_1103A40D:
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0xAu); /* 0x1103A40D: imul ecx, ebx, 0xa */
    ebx = (uint32_t)MEM8(esi); /* 0x1103A410: movzx ebx, byte ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFD0u; /* 0x1103A413: add ebx, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1103A416: add ebx, ecx */
    _flag_k = FK_ADD;
L_1103A418:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A418: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x1103A419: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1103A41C: push eax */
    RECOMP_ICALL(MEM32(0x11069278)); /* 0x1103A41D: call dword ptr [0x11069278] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A423: pop ecx */
    /* test eax, eax */ /* 0x1103A424: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A405; /* 0x1103A426: jne 0x1103a405 */
L_1103A428:
    MEM32(ebp + (-0x30)) = ebx; /* 0x1103A428: mov dword ptr [ebp - 0x30], ebx */
    ebx = MEM32(ebp + (-0x4C)); /* 0x1103A42B: mov ebx, dword ptr [ebp - 0x4c] */
L_1103A42E:
    /* cmp MEM8(ebp + (-0x31)), 0x2Du */ /* 0x1103A42E: cmp byte ptr [ebp - 0x31], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x31))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x30)); /* 0x1103A432: mov eax, dword ptr [ebp - 0x30] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A439; /* 0x1103A435: jne 0x1103a439 */
L_1103A437:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1103A437: neg eax */
    _flag_k = FK_CMP;
L_1103A439:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x1103A439: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x2C)); /* 0x1103A43B: mov ecx, dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + (-0x38)); /* 0x1103A43E: mov eax, dword ptr [ebp - 0x38] */
    /* test edi, edi */ /* 0x1103A441: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A450; /* 0x1103A443: jne 0x1103a450 */
L_1103A445:
    esi = MEM32(ebp + (-0x3C)); /* 0x1103A445: mov esi, dword ptr [ebp - 0x3c] */
    goto L_1103A450; /* 0x1103A448: jmp 0x1103a450 */
L_1103A44A:
    ecx = MEM32(ebp + (-0x2C)); /* 0x1103A44A: mov ecx, dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + (-0x38)); /* 0x1103A44D: mov eax, dword ptr [ebp - 0x38] */
L_1103A450:
    edx = MEM32(ebp + (-0x48)); /* 0x1103A450: mov edx, dword ptr [ebp - 0x48] */
    /* test edx, edx */ /* 0x1103A453: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A460; /* 0x1103A455: je 0x1103a460 */
L_1103A457:
    /* test eax, eax */ /* 0x1103A457: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A45E; /* 0x1103A459: jne 0x1103a45e */
L_1103A45B:
    esi = MEM32(ebp + 0x8); /* 0x1103A45B: mov esi, dword ptr [ebp + 8] */
L_1103A45E:
    MEM32(edx) = esi; /* 0x1103A45E: mov dword ptr [edx], esi */
L_1103A460:
    eax = ecx; /* 0x1103A460: mov eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1103A462: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1103A465: pop edi */
    esi = POP32_VAL(esp); /* 0x1103A466: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1103A467: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1103A469: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1103A46A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1103A46F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103A471: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103A472: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103A473(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103A473u);

L_1103A473:
    PUSH32(esp, ebp); /* 0x1103A473: push ebp */
    ebp = esp; /* 0x1103A474: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1103A476: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x18); /* 0x1103A479: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1103A47C: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1103A47D: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1103A480: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1103A481: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1103A484: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1103A485: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1103A488: sub esi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1103A48A: sub edi, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1103A48C: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1103A48E: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    /* test eax, eax */ /* 0x1103A490: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A49D; /* 0x1103A492: jne 0x1103a49d */
L_1103A494:
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x1103A494: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1103A49A: mov edx, dword ptr [ebp + 8] */
L_1103A49D:
    eax = MEM32(eax + 0x4); /* 0x1103A49D: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x1103A4A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A4E7; /* 0x1103A4A2: jne 0x1103a4e7 */
L_1103A4A4:
    ecx = esi; /* 0x1103A4A4: mov ecx, esi */
    /* cmp esi, edi */ /* 0x1103A4A6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1103A4BD; /* 0x1103A4A8: jl 0x1103a4bd */
L_1103A4AA:
    ecx = edi; /* 0x1103A4AA: mov ecx, edi */
    goto L_1103A4BD; /* 0x1103A4AC: jmp 0x1103a4bd */
L_1103A4AE:
    SET_LO16(eax, MEM16(edx)); /* 0x1103A4AE: mov ax, word ptr [edx] */
    /* cmp LO16(eax), MEM16(ebx) */ /* 0x1103A4B1: cmp ax, word ptr [ebx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A4D9; /* 0x1103A4B4: jne 0x1103a4d9 */
L_1103A4B6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1103A4B6: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1103A4B9: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1103A4BC: dec ecx */
    _flag_k = FK_DEC;
L_1103A4BD:
    /* test ecx, ecx */ /* 0x1103A4BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1103A4AE; /* 0x1103A4BF: jg 0x1103a4ae */
L_1103A4C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103A4C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103A4C3:
    /* test eax, eax */ /* 0x1103A4C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A513; /* 0x1103A4C5: jne 0x1103a513 */
L_1103A4C7:
    /* cmp esi, edi */ /* 0x1103A4C7: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A513; /* 0x1103A4C9: je 0x1103a513 */
L_1103A4CB:
    /* cmp esi, edi */ /* 0x1103A4CB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1103A4CD: setge al */
    eax = eax * 2 + (-0x1); /* 0x1103A4D0: lea eax, [eax*2 - 1] */
    goto L_1103A513; /* 0x1103A4D7: jmp 0x1103a513 */
L_1103A4D9:
    eax = (uint32_t)MEM16(edx); /* 0x1103A4D9: movzx eax, word ptr [edx] */
    /* cmp LO16(eax), MEM16(ebx) */ /* 0x1103A4DC: cmp ax, word ptr [ebx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1103A4DF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1103A4E1: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103A4E4: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1103A4C3; /* 0x1103A4E5: jmp 0x1103a4c3 */
L_1103A4E7:
    PUSH32(esp, edi); /* 0x1103A4E7: push edi */
    PUSH32(esp, ebx); /* 0x1103A4E8: push ebx */
    PUSH32(esp, esi); /* 0x1103A4E9: push esi */
    PUSH32(esp, edx); /* 0x1103A4EA: push edx */
    PUSH32(esp, 0x1000u); /* 0x1103A4EB: push 0x1000 */
    PUSH32(esp, eax); /* 0x1103A4F0: push eax */
    RECOMP_CALL(sub_1103B876); /* 0x1103A4F1: call 0x1103b876 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1103A4F6: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103A4F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A510; /* 0x1103A4FB: jne 0x1103a510 */
L_1103A4FD:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1103A4FD: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1103A503: mov dword ptr [eax], 0x16 */
    eax = 0x7FFFFFFFu; /* 0x1103A509: mov eax, 0x7fffffff */
    goto L_1103A513; /* 0x1103A50E: jmp 0x1103a513 */
L_1103A510:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1103A510: sub eax, 2 */
    _flag_k = FK_CMP;
L_1103A513:
    edi = POP32_VAL(esp); /* 0x1103A513: pop edi */
    esi = POP32_VAL(esp); /* 0x1103A514: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103A515: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1103A516: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103A517: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103A518(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103A518u);

L_1103A518:
    PUSH32(esp, ebp); /* 0x1103A518: push ebp */
    ebp = esp; /* 0x1103A519: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1103A51B: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x18); /* 0x1103A51E: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1103A521: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1103A522: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1103A525: push esi */
    PUSH32(esp, edi); /* 0x1103A526: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1103A527: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1103A52A: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0x10); /* 0x1103A52C: sub edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1103A52F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1103A532: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1103A534: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    /* test eax, eax */ /* 0x1103A536: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A543; /* 0x1103A538: jne 0x1103a543 */
L_1103A53A:
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x1103A53A: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1103A540: mov ecx, dword ptr [ebp + 8] */
L_1103A543:
    eax = MEM32(eax + 0x4); /* 0x1103A543: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x1103A546: mov dword ptr [ebp + 0x14], eax */
    /* test eax, eax */ /* 0x1103A549: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A565; /* 0x1103A54B: jne 0x1103a565 */
L_1103A54D:
    /* cmp edi, ebx */ /* 0x1103A54D: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1103A561; /* 0x1103A54F: ja 0x1103a561 */
L_1103A551:
    eax = edi + edi; /* 0x1103A551: lea eax, [edi + edi] */
    PUSH32(esp, eax); /* 0x1103A554: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103A555: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1103A558: push ecx */
    RECOMP_CALL(sub_1103B300); /* 0x1103A559: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103A55E: add esp, 0xc */
    _flag_k = FK_ADD;
L_1103A561:
    esi = edi; /* 0x1103A561: mov esi, edi */
    goto L_1103A5D6; /* 0x1103A563: jmp 0x1103a5d6 */
L_1103A565:
    PUSH32(esp, ebx); /* 0x1103A565: push ebx */
    RECOMP_ICALL(MEM32(0x11069124)); /* 0x1103A566: call dword ptr [0x11069124] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1103A56C: mov dword ptr [ebp + 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1103A56F: pop ecx */
    /* test eax, eax */ /* 0x1103A570: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A5D6; /* 0x1103A572: je 0x1103a5d6 */
L_1103A574:
    PUSH32(esp, ebx); /* 0x1103A574: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1103A575: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1103A578: push eax */
    PUSH32(esp, edi); /* 0x1103A579: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103A57A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x400u); /* 0x1103A57D: push 0x400 */
    PUSH32(esp, ebx); /* 0x1103A582: push ebx */
    RECOMP_CALL(sub_1103B86A); /* 0x1103A583: call 0x1103b86a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103A588: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1103A58A: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1103A58D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A5B5; /* 0x1103A58F: jne 0x1103a5b5 */
L_1103A591:
    PUSH32(esp, eax); /* 0x1103A591: push eax */
    PUSH32(esp, eax); /* 0x1103A592: push eax */
    PUSH32(esp, edi); /* 0x1103A593: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103A594: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x400u); /* 0x1103A597: push 0x400 */
    PUSH32(esp, ebx); /* 0x1103A59C: push ebx */
    RECOMP_CALL(sub_1103B86A); /* 0x1103A59D: call 0x1103b86a */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x1103A5A2: mov edx, dword ptr [ebp + 0xc] */
    esi = eax; /* 0x1103A5A5: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1103A5A7: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1103A5AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103A5CE; /* 0x1103A5AC: jne 0x1103a5ce */
L_1103A5AE:
    esi = 0x7FFFFFFFu; /* 0x1103A5AE: mov esi, 0x7fffffff */
    goto L_1103A5CE; /* 0x1103A5B3: jmp 0x1103a5ce */
L_1103A5B5:
    edx = MEM32(ebp + 0xC); /* 0x1103A5B5: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A5B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1103A5BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A5CE; /* 0x1103A5BC: je 0x1103a5ce */
L_1103A5BE:
    edi = MEM32(ebp + 0x8); /* 0x1103A5BE: mov edi, dword ptr [ebp + 8] */
L_1103A5C1:
    eax = (uint32_t)MEM8(ecx + edx); /* 0x1103A5C1: movzx eax, byte ptr [ecx + edx] */
    MEM16(edi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x1103A5C5: mov word ptr [edi + ecx*2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103A5C9: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x1103A5CA: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1103A5C1; /* 0x1103A5CC: jb 0x1103a5c1 */
L_1103A5CE:
    PUSH32(esp, edx); /* 0x1103A5CE: push edx */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1103A5CF: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A5D5: pop ecx */
L_1103A5D6:
    edi = POP32_VAL(esp); /* 0x1103A5D6: pop edi */
    eax = esi; /* 0x1103A5D7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1103A5D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103A5DA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1103A5DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103A5DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103A5DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103A5DDu);

L_1103A5DD:
    PUSH32(esp, ebp); /* 0x1103A5DD: push ebp */
    ebp = esp; /* 0x1103A5DE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1103A5E0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103A5E3: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1103A5E6: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1103A5E7: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1103A5EA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1103A5EB: mov edi, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x1103A5EE: fstp qword ptr [ebp - 0x10] */
    /* test ebx, ebx */ /* 0x1103A5F1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A8DB; /* 0x1103A5F3: je 0x1103a8db */
L_1103A5F9:
    PUSH32(esp, esi); /* 0x1103A5F9: push esi */
    eax = ebp + (-0x10); /* 0x1103A5FA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1103A5FD: push eax */
    eax = ebp + 0x8; /* 0x1103A5FE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1103A601: push eax */
    RECOMP_CALL(sub_1103848F); /* 0x1103A602: call 0x1103848f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A607: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103A608: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x1103A609: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A60C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1103A60E: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A697; /* 0x1103A611: jge 0x1103a697 */
L_1103A617:
    PUSH32(esp, 2); /* 0x1103A617: push 2 */
    esi = POP32_VAL(esp); /* 0x1103A619: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1103A61A: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A68D; /* 0x1103A61D: je 0x1103a68d */
L_1103A61F:
    PUSH32(esp, edi); /* 0x1103A61F: push edi */
    RECOMP_CALL(sub_1101278A); /* 0x1103A620: call 0x1101278a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1103A625: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x1103A628: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x1103A629: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103A68D; /* 0x1103A62C: jle 0x1103a68d */
L_1103A62E:
    /* cmp LO16(eax), LO16(esi) */ /* 0x1103A62E: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A8DA; /* 0x1103A631: je 0x1103a8da */
L_1103A637:
    PUSH32(esp, edi); /* 0x1103A637: push edi */
    RECOMP_CALL(sub_110127F4); /* 0x1103A638: call 0x110127f4 */
    RECOMP_FLAGS_IN();
    ecx = 0x8000u; /* 0x1103A63D: mov ecx, 0x8000 */
    SET_LO16(eax, MEM16(eax)); /* 0x1103A642: mov ax, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x1103A645: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = (uint32_t)LO16(eax); /* 0x1103A648: movzx esi, ax */
    eax = ebp + 0x10; /* 0x1103A64B: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1103A64E: push eax */
    RECOMP_CALL(sub_110127F4); /* 0x1103A64F: call 0x110127f4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A654: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103A655: pop ecx */
    ecx = 0x8000u; /* 0x1103A656: mov ecx, 0x8000 */
    SET_LO16(eax, MEM16(eax)); /* 0x1103A65B: mov ax, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x1103A65E: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(eax), LO16(esi) */ /* 0x1103A661: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A8DA; /* 0x1103A664: je 0x1103a8da */
L_1103A66A:
    PUSH32(esp, 1); /* 0x1103A66A: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x1103A66C: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x110630A8)); /* 0x1103A671: fld qword ptr [0x110630a8] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1103A677: fstp qword ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x1103A679: pop ecx */
    /* cmp ebx, 1 */ /* 0x1103A67A: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103A8DA; /* 0x1103A67D: jle 0x1103a8da */
L_1103A683:
    fp_push(0.0); /* 0x1103A683: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x8) = _v; } /* 0x1103A685: fstp qword ptr [edi + 8] */
    goto L_1103A8DA; /* 0x1103A688: jmp 0x1103a8da */
L_1103A68D:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103A68D: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1103A690: fstp qword ptr [edi] */
    goto L_1103A8DA; /* 0x1103A692: jmp 0x1103a8da */
L_1103A697:
    /* test LO16(eax), LO16(eax) */ /* 0x1103A697: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1103A8DA; /* 0x1103A69A: jns 0x1103a8da */
L_1103A6A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103A6A0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x800u; /* 0x1103A6A2: mov dword ptr [ebp - 4], 0x800 */
    /* test ebx, ebx */ /* 0x1103A6A9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103A8DA; /* 0x1103A6AB: jle 0x1103a8da */
L_1103A6B1:
    eax = edi + esi * 8; /* 0x1103A6B1: lea eax, [edi + esi*8] */
    fp_push(*(double*)ADDR(eax)); /* 0x1103A6B4: fld qword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1103A6B6: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x18); /* 0x1103A6B9: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1103A6BC: push eax */
    eax = ebp + 0xC; /* 0x1103A6BD: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103A6C0: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x1103A6C1: fstp qword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1103848F); /* 0x1103A6C4: call 0x1103848f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A6C9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103A6CA: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x1103A6CB: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A6CE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1103A6D0: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_1103A8DA; /* 0x1103A6D3: jl 0x1103a8da */
L_1103A6D9:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103A6D9: fld qword ptr [ebp + 0x10] */
    /* test LO16(eax), LO16(eax) */ /* 0x1103A6DC: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103A8CA; /* 0x1103A6DF: je 0x1103a8ca */
L_1103A6E5:
    edx = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x1103A6E5: movsx edx, word ptr [ebp + 0xc] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x1103A6E9: movsx eax, word ptr [ebp + 8] */
    ecx = edx; /* 0x1103A6ED: mov ecx, edx */
    fp_push(0.0); /* 0x1103A6EF: fldz  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1103A6F1: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0xFFFFFFE6u */ /* 0x1103A6F3: cmp ecx, -0x1a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE6u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1103A742; /* 0x1103A6F6: jg 0x1103a742 */
L_1103A6F8:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A6F8: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A6FA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A6FC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103A742; /* 0x1103A6FF: jnp 0x1103a742 */
L_1103A701:
    ecx = esi; /* 0x1103A701: mov ecx, esi */
L_1103A703:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103A703: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x1103A704: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A714; /* 0x1103A706: jge 0x1103a714 */
L_1103A708:
    fp_push(*(double*)ADDR(edi + ecx * 8)); /* 0x1103A708: fld qword ptr [edi + ecx*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A70B: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A70D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A70F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103A703; /* 0x1103A712: jp 0x1103a703 */
L_1103A714:
    eax = ebx + (-0x1); /* 0x1103A714: lea eax, [ebx - 1] */
    /* cmp ecx, eax */ /* 0x1103A717: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A71E; /* 0x1103A719: jge 0x1103a71e */
L_1103A71B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103A71B: inc ecx */
    _flag_k = FK_INC;
    goto L_1103A723; /* 0x1103A71C: jmp 0x1103a723 */
L_1103A71E:
    /* cmp ecx, ebx */ /* 0x1103A71E: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A723; /* 0x1103A720: jne 0x1103a723 */
L_1103A722:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1103A722: dec ecx */
    _flag_k = FK_DEC;
L_1103A723:
    /* cmp esi, ecx */ /* 0x1103A723: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A733; /* 0x1103A725: jge 0x1103a733 */
L_1103A727:
    fp_push(*(double*)ADDR(edi + ecx * 8 + (-0x8))); /* 0x1103A727: fld qword ptr [edi + ecx*8 - 8] */
    { double _v = fp_pop(); *(double*)ADDR(edi + ecx * 8) = _v; } /* 0x1103A72B: fstp qword ptr [edi + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1103A72E: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, esi */ /* 0x1103A72F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1103A727; /* 0x1103A731: jg 0x1103a727 */
L_1103A733:
    eax = MEM32(ebp + (-0x8)); /* 0x1103A733: mov eax, dword ptr [ebp - 8] */
    fp_xch(1); /* 0x1103A736: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1103A738: fstp qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x1103A73A: fstp qword ptr [ebp + 0x10] */
    goto L_1103A8C0; /* 0x1103A73D: jmp 0x1103a8c0 */
L_1103A742:
    PUSH32(esp, 0x1Au); /* 0x1103A742: push 0x1a */
    eax = POP32_VAL(esp); /* 0x1103A744: pop eax */
    /* cmp ecx, eax */ /* 0x1103A745: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1103A75F; /* 0x1103A747: jl 0x1103a75f */
L_1103A749:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A749: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A74B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A74D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103A75F; /* 0x1103A750: jnp 0x1103a75f */
L_1103A752:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103A752: fstp st(0) */
    MEM32(ebp + (-0x4)) = edx; /* 0x1103A754: mov dword ptr [ebp - 4], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103A757: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A759: inc esi */
    _flag_k = FK_INC;
    goto L_1103A8C0; /* 0x1103A75A: jmp 0x1103a8c0 */
L_1103A75F:
    ecx = MEM32(ebp + (-0x8)); /* 0x1103A75F: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x1103A762: fld qword ptr [ecx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1103A764: faddp st(2) */
    fp_xch(1); /* 0x1103A766: fxch st(1) */
    *(double*)ADDR(ecx) = _st[0]; /* 0x1103A768: fst qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A76A: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A76C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A76E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103A79F; /* 0x1103A771: jp 0x1103a79f */
L_1103A773:
    edx = esi; /* 0x1103A773: mov edx, esi */
L_1103A775:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1103A775: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x1103A776: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A78A; /* 0x1103A778: jge 0x1103a78a */
L_1103A77A:
    fp_push(*(double*)ADDR(edi + edx * 8)); /* 0x1103A77A: fld qword ptr [edi + edx*8] */
    *(double*)ADDR(edi + edx * 8 + (-0x8)) = _st[0]; /* 0x1103A77D: fst qword ptr [edi + edx*8 - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A781: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A783: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A785: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103A775; /* 0x1103A788: jp 0x1103a775 */
L_1103A78A:
    *(double*)ADDR(edi + ebx * 8 + (-0x8)) = _st[0]; /* 0x1103A78A: fst qword ptr [edi + ebx*8 - 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x1103A78E: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A790: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A792: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A794: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103A8DA; /* 0x1103A797: jnp 0x1103a8da */
L_1103A79D:
    goto L_1103A7A1; /* 0x1103A79D: jmp 0x1103a7a1 */
L_1103A79F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103A79F: fstp st(0) */
L_1103A7A1:
    fp_push(*(double*)ADDR(ecx)); /* 0x1103A7A1: fld qword ptr [ecx] */
    eax = ebp + 0x10; /* 0x1103A7A3: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1103A7A6: push eax */
    eax = ebp + 0x8; /* 0x1103A7A7: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1103A7AA: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x1103A7AB: fstp qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1103848F); /* 0x1103A7AE: call 0x1103848f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1103A7B3: mov edx, dword ptr [ebp - 4] */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x1103A7B6: mov ax, word ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1103A7BA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103A7BB: pop ecx */
    MEM16(ebp + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x1103A7BC: mov word ptr [ebp - 2], ax */
    ecx = edx + (-0x1A); /* 0x1103A7C0: lea ecx, [edx - 0x1a] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x1103A7C3: cwde  */
    /* cmp ecx, eax */ /* 0x1103A7C4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A859; /* 0x1103A7C6: jge 0x1103a859 */
L_1103A7CC:
    SET_LO16(eax, MEM16(ebp + (-0x2))); /* 0x1103A7CC: mov ax, word ptr [ebp - 2] */
    PUSH32(esp, 0x1Au); /* 0x1103A7D0: push 0x1a */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(edx)); /* 0x1103A7D2: sub ax, dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = POP32_VAL(esp); /* 0x1103A7D5: pop ecx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x1103A7D6: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(eax); /* 0x1103A7D9: movzx eax, ax */
    PUSH32(esp, eax); /* 0x1103A7DC: push eax */
    eax = ebp + 0x10; /* 0x1103A7DD: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1103A7E0: push eax */
    RECOMP_CALL(sub_110380FF); /* 0x1103A7E1: call 0x110380ff */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x1103A7E6: movsx eax, word ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1103A7EA: push eax */
    eax = ebp + 0x10; /* 0x1103A7EB: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1103A7EE: push eax */
    RECOMP_CALL(sub_1102FA24); /* 0x1103A7EF: call 0x1102fa24 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1103A7F4: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103A7F7: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(eax)); /* 0x1103A7FA: fld qword ptr [eax] */
    _st[0] -= *(double*)ADDR(ebp + 0x10); /* 0x1103A7FC: fsub qword ptr [ebp + 0x10] */
    *(double*)ADDR(eax) = _st[0]; /* 0x1103A7FF: fst qword ptr [eax] */
    fp_push(0.0); /* 0x1103A801: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A803: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A805: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1103A807: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x1103A809: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103A82B; /* 0x1103A80C: jp 0x1103a82b */
L_1103A80E:
    ecx = esi; /* 0x1103A80E: mov ecx, esi */
L_1103A810:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103A810: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x1103A811: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A825; /* 0x1103A813: jge 0x1103a825 */
L_1103A815:
    fp_push(*(double*)ADDR(edi + ecx * 8)); /* 0x1103A815: fld qword ptr [edi + ecx*8] */
    *(double*)ADDR(edi + ecx * 8 + (-0x8)) = _st[0]; /* 0x1103A818: fst qword ptr [edi + ecx*8 - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A81C: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A81E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A820: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103A810; /* 0x1103A823: jp 0x1103a810 */
L_1103A825:
    { double _v = fp_pop(); *(double*)ADDR(edi + ebx * 8 + (-0x8)) = _v; } /* 0x1103A825: fstp qword ptr [edi + ebx*8 - 8] */
    goto L_1103A82D; /* 0x1103A829: jmp 0x1103a82d */
L_1103A82B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103A82B: fstp st(0) */
L_1103A82D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1103A82D: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1103A83C; /* 0x1103A82E: jne 0x1103a83c */
L_1103A830:
    MEM32(ebp + (-0x4)) = 0x800u; /* 0x1103A830: mov dword ptr [ebp - 4], 0x800 */
    goto L_1103A8C0; /* 0x1103A837: jmp 0x1103a8c0 */
L_1103A83C:
    fp_push(*(double*)ADDR(edi + esi * 8 + (-0x8))); /* 0x1103A83C: fld qword ptr [edi + esi*8 - 8] */
    eax = ebp + (-0x10); /* 0x1103A840: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1103A843: push eax */
    eax = ebp + 0xC; /* 0x1103A844: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103A847: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x1103A848: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1103848F); /* 0x1103A84B: call 0x1103848f */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x1103A850: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1103A854: mov dword ptr [ebp - 4], eax */
    goto L_1103A8BE; /* 0x1103A857: jmp 0x1103a8be */
L_1103A859:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A859: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x1103A85A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103A8DA; /* 0x1103A85C: je 0x1103a8da */
L_1103A85E:
    eax = MEM32(ebp + (-0x8)); /* 0x1103A85E: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1103A861: push eax */
    fp_push(*(double*)ADDR(eax)); /* 0x1103A862: fld qword ptr [eax] */
    eax = ebp + 0xC; /* 0x1103A864: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103A867: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x1103A868: fstp qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1103848F); /* 0x1103A86B: call 0x1103848f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Au); /* 0x1103A870: push 0x1a */
    eax = POP32_VAL(esp); /* 0x1103A872: pop eax */
    PUSH32(esp, eax); /* 0x1103A873: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1103A874: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1103A877: push eax */
    RECOMP_CALL(sub_110380FF); /* 0x1103A878: call 0x110380ff */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x1103A87D: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103A881: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1103A882: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1102FA24); /* 0x1103A885: call 0x1102fa24 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1103A88A: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1103A88D: add esp, 0x18 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103A890: fld qword ptr [ebp + 0x10] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x1103A893: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1103A897: mov dword ptr [ebp - 4], eax */
    _st[0] -= *(double*)ADDR(ecx); /* 0x1103A89A: fsub qword ptr [ecx] */
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x1103A89C: fst qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x1103A89F: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A8A1: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A8A3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A8A5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103A8AE; /* 0x1103A8A8: jp 0x1103a8ae */
L_1103A8AA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103A8AA: fstp st(0) */
    fp_push(*(double*)ADDR(ecx)); /* 0x1103A8AC: fld qword ptr [ecx] */
L_1103A8AE:
    eax = ebp + (-0x10); /* 0x1103A8AE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1103A8B1: push eax */
    eax = ebp + 0x8; /* 0x1103A8B2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1103A8B5: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x1103A8B6: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1103848F); /* 0x1103A8B9: call 0x1103848f */
    RECOMP_FLAGS_IN();
L_1103A8BE:
    ecx = POP32_VAL(esp); /* 0x1103A8BE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103A8BF: pop ecx */
L_1103A8C0:
    /* cmp esi, ebx */ /* 0x1103A8C0: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103A6B1; /* 0x1103A8C2: jl 0x1103a6b1 */
L_1103A8C8:
    goto L_1103A8DA; /* 0x1103A8C8: jmp 0x1103a8da */
L_1103A8CA:
    ecx = esi + 0x1; /* 0x1103A8CA: lea ecx, [esi + 1] */
    { double _v = fp_pop(); *(double*)ADDR(edi + esi * 8) = _v; } /* 0x1103A8CD: fstp qword ptr [edi + esi*8] */
    /* cmp ecx, ebx */ /* 0x1103A8D0: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103A8DA; /* 0x1103A8D2: jge 0x1103a8da */
L_1103A8D4:
    fp_push(0.0); /* 0x1103A8D4: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + esi * 8 + 0x8) = _v; } /* 0x1103A8D6: fstp qword ptr [edi + esi*8 + 8] */
L_1103A8DA:
    esi = POP32_VAL(esp); /* 0x1103A8DA: pop esi */
L_1103A8DB:
    eax = edi; /* 0x1103A8DB: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1103A8DD: pop edi */
    ebx = POP32_VAL(esp); /* 0x1103A8DE: pop ebx */
    esp = ebp; /* 0x1103A8DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103A8E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103A8E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103A8E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103A8E3u);

L_1103A8E3:
    PUSH32(esp, ebp); /* 0x1103A8E3: push ebp */
    ebp = esp; /* 0x1103A8E4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1103A8E6: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103A8E7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1103A8E9: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103A921; /* 0x1103A8EC: jle 0x1103a921 */
L_1103A8EE:
    fp_push(0.0); /* 0x1103A8EE: fldz  */
    PUSH32(esp, edi); /* 0x1103A8F0: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1103A8F1: mov edi, dword ptr [ebp + 0x10] */
L_1103A8F4:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x1103A8F4: fld qword ptr [edi + esi*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103A8F7: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103A8F9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103A8FB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103A920; /* 0x1103A8FE: jnp 0x1103a920 */
L_1103A900:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x1103A900: fld qword ptr [edi + esi*8] */
    PUSH32(esp, ecx); /* 0x1103A903: push ecx */
    PUSH32(esp, ecx); /* 0x1103A904: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103A905: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103A908: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103A90B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103A5DD); /* 0x1103A90E: call 0x1103a5dd */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1103A913: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103A915: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103A918: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1103A919: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103A8F4; /* 0x1103A91C: jl 0x1103a8f4 */
L_1103A91E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103A91E: fstp st(0) */
L_1103A920:
    edi = POP32_VAL(esp); /* 0x1103A920: pop edi */
L_1103A921:
    eax = MEM32(ebp + 0x8); /* 0x1103A921: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1103A924: pop esi */
    ebp = POP32_VAL(esp); /* 0x1103A925: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103A926: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103A927(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103A927u);

L_1103A927:
    PUSH32(esp, ebp); /* 0x1103A927: push ebp */
    ebp = esp; /* 0x1103A928: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103A92A: push ecx */
    PUSH32(esp, ecx); /* 0x1103A92B: push ecx */
    PUSH32(esp, esi); /* 0x1103A92C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1103A92D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1103A930: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1103A931: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1103A934: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103AA15; /* 0x1103A936: je 0x1103aa15 */
L_1103A93C:
    PUSH32(esp, edi); /* 0x1103A93C: push edi */
    RECOMP_CALL(sub_1101278A); /* 0x1103A93D: call 0x1101278a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103A942: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x1103A943: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103A946: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1103A948: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_1103A96D; /* 0x1103A94B: jg 0x1103a96d */
L_1103A94D:
    /* cmp LO16(eax), 1 */ /* 0x1103A94D: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103A957; /* 0x1103A951: jne 0x1103a957 */
L_1103A953:
    fp_push(0.0); /* 0x1103A953: fldz  */
    goto L_1103A966; /* 0x1103A955: jmp 0x1103a966 */
L_1103A957:
    /* test LO16(eax), LO16(eax) */ /* 0x1103A957: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103AA15; /* 0x1103A95A: jne 0x1103aa15 */
L_1103A960:
    fp_push(*(double*)ADDR(0x11063098)); /* 0x1103A960: fld qword ptr [0x11063098] */
L_1103A966:
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1103A966: fstp qword ptr [edi] */
    goto L_1103AA15; /* 0x1103A968: jmp 0x1103aa15 */
L_1103A96D:
    fp_push(*(double*)ADDR(edi)); /* 0x1103A96D: fld qword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1103A96F: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1103A970: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1103A973: push edi */
    PUSH32(esp, esi); /* 0x1103A974: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1103A975: fstp qword ptr [ebp - 8] */
    eax = ebx + esi * 8; /* 0x1103A978: lea eax, [ebx + esi*8] */
    ecx = eax + esi * 8; /* 0x1103A97B: lea ecx, [eax + esi*8] */
    PUSH32(esp, eax); /* 0x1103A97E: push eax */
    MEM32(ebp + 0xC) = ecx; /* 0x1103A97F: mov dword ptr [ebp + 0xc], ecx */
    RECOMP_CALL(sub_110398FE); /* 0x1103A982: call 0x110398fe */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11003830)); /* 0x1103A987: fld qword ptr [0x11003830] */
    eax = ebx + esi * 8; /* 0x1103A98D: lea eax, [ebx + esi*8] */
    ecx = POP32_VAL(esp); /* 0x1103A990: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103A991: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103A994: push esi */
    PUSH32(esp, eax); /* 0x1103A995: push eax */
    RECOMP_CALL(sub_1103AA1D); /* 0x1103A996: call 0x1103aa1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103A99B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103A99D: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103A9A0: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x1103A9A1: mov dword ptr [ebp + 8], eax */
    /* cmp esi, eax */ /* 0x1103A9A4: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103A9B1; /* 0x1103A9A6: jle 0x1103a9b1 */
L_1103A9A8:
    fp_push(*(double*)ADDR(edi + 0x8)); /* 0x1103A9A8: fld qword ptr [edi + 8] */
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x1103A9AB: fadd qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1103A9AE: fstp qword ptr [ebp - 8] */
L_1103A9B1:
    fp_push(1.0); /* 0x1103A9B1: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0x8)); /* 0x1103A9B3: fdiv qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1103A9B6: push ecx */
    PUSH32(esp, ecx); /* 0x1103A9B7: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103A9B8: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103A9BB: push esi */
    PUSH32(esp, edi); /* 0x1103A9BC: push edi */
    RECOMP_CALL(sub_1103AC96); /* 0x1103A9BD: call 0x1103ac96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103A9C2: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, 1 */ /* 0x1103A9C5: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AA14; /* 0x1103A9C8: jle 0x1103aa14 */
L_1103A9CA:
    PUSH32(esp, edi); /* 0x1103A9CA: push edi */
    PUSH32(esp, esi); /* 0x1103A9CB: push esi */
    PUSH32(esp, ebx); /* 0x1103A9CC: push ebx */
    RECOMP_CALL(sub_110398FE); /* 0x1103A9CD: call 0x110398fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103A9D2: push dword ptr [ebp + 0xc] */
    eax = ebx + esi * 8; /* 0x1103A9D5: lea eax, [ebx + esi*8] */
    PUSH32(esp, esi); /* 0x1103A9D8: push esi */
    PUSH32(esp, eax); /* 0x1103A9D9: push eax */
    PUSH32(esp, esi); /* 0x1103A9DA: push esi */
    PUSH32(esp, ebx); /* 0x1103A9DB: push ebx */
    RECOMP_CALL(sub_1103AB9B); /* 0x1103A9DC: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1103A9E1: fld1  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1103A9E3: add esp, 0x18 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103A9E6: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103A9E9: push esi */
    PUSH32(esp, ebx); /* 0x1103A9EA: push ebx */
    RECOMP_CALL(sub_1103A5DD); /* 0x1103A9EB: call 0x1103a5dd */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103A9F0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1103A9F3: push esi */
    PUSH32(esp, edi); /* 0x1103A9F4: push edi */
    PUSH32(esp, esi); /* 0x1103A9F5: push esi */
    PUSH32(esp, ebx); /* 0x1103A9F6: push ebx */
    RECOMP_CALL(sub_1103AB9B); /* 0x1103A9F7: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103A9FC: push esi */
    PUSH32(esp, ebx); /* 0x1103A9FD: push ebx */
    PUSH32(esp, esi); /* 0x1103A9FE: push esi */
    PUSH32(esp, edi); /* 0x1103A9FF: push edi */
    RECOMP_CALL(sub_1103A8E3); /* 0x1103AA00: call 0x1103a8e3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1103AA05: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x1103AA08: add esp, 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1103AA0B: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1103AA0D: mov dword ptr [ebp + 8], eax */
    /* cmp eax, esi */ /* 0x1103AA10: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103A9CA; /* 0x1103AA12: jl 0x1103a9ca */
L_1103AA14:
    ebx = POP32_VAL(esp); /* 0x1103AA14: pop ebx */
L_1103AA15:
    eax = edi; /* 0x1103AA15: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1103AA17: pop edi */
    esi = POP32_VAL(esp); /* 0x1103AA18: pop esi */
    esp = ebp; /* 0x1103AA19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103AA1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AA1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103AA1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AA1Du);

L_1103AA1D:
    PUSH32(esp, ebp); /* 0x1103AA1D: push ebp */
    ebp = esp; /* 0x1103AA1E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1103AA20: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1103AA23: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1103AA28: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1103AA2A: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103AA2D: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x1103AA30: fldz  */
    PUSH32(esp, ebx); /* 0x1103AA32: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1103AA33: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1103AA36: push esi */
    PUSH32(esp, edi); /* 0x1103AA37: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1103AA38: mov edi, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1103AA3B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103AA94; /* 0x1103AA3D: jle 0x1103aa94 */
L_1103AA3F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103AA3F: fstp st(0) */
    eax = ebp + (-0x24); /* 0x1103AA41: lea eax, [ebp - 0x24] */
    _st[0] *= *(double*)ADDR(edi); /* 0x1103AA44: fmul qword ptr [edi] */
    PUSH32(esp, eax); /* 0x1103AA46: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x1103AA47: fstp qword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1101278A); /* 0x1103AA4A: call 0x1101278a */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x1103AA4F: movzx esi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103AA52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1103AA54: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1103AA55: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_1103AA8B; /* 0x1103AA58: jg 0x1103aa8b */
L_1103AA5A:
    /* cmp LO16(esi), 2 */ /* 0x1103AA5A: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103AA68; /* 0x1103AA5E: jne 0x1103aa68 */
L_1103AA60:
    PUSH32(esp, 1); /* 0x1103AA60: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x1103AA62: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103AA67: pop ecx */
L_1103AA68:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x1103AA68: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103AA6B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1103AA6D: fstp qword ptr [edi] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1103AA6F: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103AB7A; /* 0x1103AA72: jge 0x1103ab7a */
L_1103AA78:
    /* cmp ebx, 1 */ /* 0x1103AA78: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AB7A; /* 0x1103AA7B: jle 0x1103ab7a */
L_1103AA81:
    fp_push(0.0); /* 0x1103AA81: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x8) = _v; } /* 0x1103AA83: fstp qword ptr [edi + 8] */
    goto L_1103AB7A; /* 0x1103AA86: jmp 0x1103ab7a */
L_1103AA8B:
    fp_push(0.0); /* 0x1103AA8B: fldz  */
    *(double*)ADDR(edi) = _st[0]; /* 0x1103AA8D: fst qword ptr [edi] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103AA8F: fld qword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x1103AA92: fxch st(1) */
L_1103AA94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103AA94: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1103AA96: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103AA98: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x1103AA99: mov dword ptr [ebp - 0x2c], edx */
    /* test ebx, ebx */ /* 0x1103AA9C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1103AAA9; /* 0x1103AA9E: jg 0x1103aaa9 */
L_1103AAA0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103AAA0: fstp st(0) */
    goto L_1103AB78; /* 0x1103AAA2: jmp 0x1103ab78 */
L_1103AAA7:
    fp_xch(1); /* 0x1103AAA7: fxch st(1) */
L_1103AAA9:
    /* cmp esi, 4 */ /* 0x1103AAA9: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103AAE1; /* 0x1103AAAC: jge 0x1103aae1 */
L_1103AAAE:
    eax = edx + esi; /* 0x1103AAAE: lea eax, [edx + esi] */
    ecx = edi + eax * 8; /* 0x1103AAB1: lea ecx, [edi + eax*8] */
L_1103AAB4:
    eax = edx + esi; /* 0x1103AAB4: lea eax, [edx + esi] */
    /* cmp eax, ebx */ /* 0x1103AAB7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103AB8D; /* 0x1103AAB9: jge 0x1103ab8d */
L_1103AABF:
    fp_push(*(double*)ADDR(ecx)); /* 0x1103AABF: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103AAC1: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103AAC3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103AAC5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AB8D; /* 0x1103AAC8: jnp 0x1103ab8d */
L_1103AACE:
    fp_push(_st[1]); /* 0x1103AACE: fld st(1) */
    _st[0] *= *(double*)ADDR(ecx); /* 0x1103AAD0: fmul qword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + esi * 8 + (-0x24)) = _v; } /* 0x1103AAD2: fstp qword ptr [ebp + esi*8 - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103AAD6: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ecx) = _st[0]; /* 0x1103AAD7: fst qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1103AAD9: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 4 */ /* 0x1103AADC: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103AAB4; /* 0x1103AADF: jl 0x1103aab4 */
L_1103AAE1:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1103AAE1: fstp st(1) */
L_1103AAE3:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x1103AAE3: fld qword ptr [ebp - 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103AAE6: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103AAE8: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1103AAEA: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x1103AAEC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AB78; /* 0x1103AAEF: jnp 0x1103ab78 */
L_1103AAF5:
    eax = ebp + (-0x34); /* 0x1103AAF5: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1103AAF8: push eax */
    eax = ebp + (-0x28); /* 0x1103AAF9: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1103AAFC: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x1103AAFD: fstp qword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1103848F); /* 0x1103AB00: call 0x1103848f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x1103AB05: lea eax, [ebp - 0x34] */
    PUSH32(esp, 0x1Au); /* 0x1103AB08: push 0x1a */
    PUSH32(esp, eax); /* 0x1103AB0A: push eax */
    RECOMP_CALL(sub_110380FF); /* 0x1103AB0B: call 0x110380ff */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x28)); /* 0x1103AB10: movsx eax, word ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1103AB14: push eax */
    eax = ebp + (-0x34); /* 0x1103AB15: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1103AB18: push eax */
    RECOMP_CALL(sub_1102FA24); /* 0x1103AB19: call 0x1102fa24 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x1103AB1E: fld qword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103AB21: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AB24: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x1103AB27: push ebx */
    PUSH32(esp, edi); /* 0x1103AB28: push edi */
    RECOMP_CALL(sub_1103A5DD); /* 0x1103AB29: call 0x1103a5dd */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x1103AB2E: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1103AB31: add esp, 8 */
    _flag_k = FK_ADD;
    _st[0] -= *(double*)ADDR(ebp + (-0x34)); /* 0x1103AB34: fsub qword ptr [ebp - 0x34] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AB37: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x1103AB3A: push ebx */
    PUSH32(esp, edi); /* 0x1103AB3B: push edi */
    RECOMP_CALL(sub_1103A5DD); /* 0x1103AB3C: call 0x1103a5dd */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1103AB41: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103AB43: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103AB45: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103AB46: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x1103AB49: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AB63; /* 0x1103AB4B: jle 0x1103ab63 */
L_1103AB4D:
    fp_push(*(double*)ADDR(ebp + ecx * 8 + (-0x24))); /* 0x1103AB4D: fld qword ptr [ebp + ecx*8 - 0x24] */
    *(double*)ADDR(ebp + ecx * 8 + (-0x2C)) = _st[0]; /* 0x1103AB51: fst qword ptr [ebp + ecx*8 - 0x2c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103AB55: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103AB57: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103AB59: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AB63; /* 0x1103AB5C: jnp 0x1103ab63 */
L_1103AB5E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103AB5E: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x1103AB5F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103AB4D; /* 0x1103AB61: jl 0x1103ab4d */
L_1103AB63:
    edx = MEM32(ebp + (-0x2C)); /* 0x1103AB63: mov edx, dword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103AB66: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1103AB69: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1103AB6A: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x1103AB6B: mov dword ptr [ebp - 0x2c], edx */
    /* cmp edx, ebx */ /* 0x1103AB6E: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103AAA7; /* 0x1103AB70: jl 0x1103aaa7 */
L_1103AB76:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1103AB76: fstp st(1) */
L_1103AB78:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103AB78: fstp st(0) */
L_1103AB7A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1103AB7A: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1103AB7D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1103AB7F: pop edi */
    esi = POP32_VAL(esp); /* 0x1103AB80: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1103AB81: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1103AB83: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1103AB84: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1103AB89: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103AB8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AB8C: ret  */
L_1103AB8D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1103AB8D: fstp st(1) */
    PUSH32(esp, 8); /* 0x1103AB8F: push 8 */
    *(double*)ADDR(ebp + esi * 8 + (-0x24)) = _st[0]; /* 0x1103AB91: fst qword ptr [ebp + esi*8 - 0x24] */
    esi = POP32_VAL(esp); /* 0x1103AB95: pop esi */
    RECOMP_BACKEDGE();
    goto L_1103AAE3; /* 0x1103AB96: jmp 0x1103aae3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103AB9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AB9Bu);

L_1103AB9B:
    PUSH32(esp, ebp); /* 0x1103AB9B: push ebp */
    ebp = esp; /* 0x1103AB9C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1103AB9E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1103AB9F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1103ABA2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1103ABA3: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1103ABA6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103AC68; /* 0x1103ABA8: je 0x1103ac68 */
L_1103ABAE:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1103ABAE: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103AC68; /* 0x1103ABB2: je 0x1103ac68 */
L_1103ABB8:
    PUSH32(esp, ebx); /* 0x1103ABB8: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1103ABB9: mov ebx, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebx)); /* 0x1103ABBC: fld qword ptr [ebx] */
    fp_push(0.0); /* 0x1103ABBE: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103ABC0: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103ABC2: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1103ABC4: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x1103ABC6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AC54; /* 0x1103ABC9: jnp 0x1103ac54 */
L_1103ABCF:
    fp_push(*(double*)ADDR(ebx + 0x8)); /* 0x1103ABCF: fld qword ptr [ebx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103ABD2: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103ABD4: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103ABD6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AC56; /* 0x1103ABD9: jnp 0x1103ac56 */
L_1103ABDB:
    ecx = MEM32(ebp + 0x18); /* 0x1103ABDB: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1103ABDE: push edi */
    PUSH32(esp, esi); /* 0x1103ABDF: push esi */
    PUSH32(esp, ecx); /* 0x1103ABE0: push ecx */
    RECOMP_CALL(sub_110398FE); /* 0x1103ABE1: call 0x110398fe */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebx)); /* 0x1103ABE6: fld qword ptr [ebx] */
    ecx = POP32_VAL(esp); /* 0x1103ABE8: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103ABE9: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103ABEC: push esi */
    PUSH32(esp, edi); /* 0x1103ABED: push edi */
    RECOMP_CALL(sub_1103AA1D); /* 0x1103ABEE: call 0x1103aa1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103ABF3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103ABF5: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103ABF8: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x1103ABF9: mov dword ptr [ebp + 0xc], eax */
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x1103ABFC: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AC67; /* 0x1103ABFF: jle 0x1103ac67 */
L_1103AC01:
    fp_push(*(double*)ADDR(ebx + eax * 8)); /* 0x1103AC01: fld qword ptr [ebx + eax*8] */
    fp_push(0.0); /* 0x1103AC04: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103AC06: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103AC08: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103AC0A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AC67; /* 0x1103AC0D: jnp 0x1103ac67 */
L_1103AC0F:
    ecx = MEM32(ebp + 0x18); /* 0x1103AC0F: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x1103AC12: push ecx */
    PUSH32(esp, esi); /* 0x1103AC13: push esi */
    eax = ecx + esi * 8; /* 0x1103AC14: lea eax, [ecx + esi*8] */
    PUSH32(esp, eax); /* 0x1103AC17: push eax */
    RECOMP_CALL(sub_110398FE); /* 0x1103AC18: call 0x110398fe */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1103AC1D: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1103AC20: pop ecx */
    ecx = MEM32(ebp + 0x18); /* 0x1103AC21: mov ecx, dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(ebx + eax * 8)); /* 0x1103AC24: fld qword ptr [ebx + eax*8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AC27: fstp qword ptr [esp] */
    eax = ecx + esi * 8; /* 0x1103AC2A: lea eax, [ecx + esi*8] */
    PUSH32(esp, esi); /* 0x1103AC2D: push esi */
    PUSH32(esp, eax); /* 0x1103AC2E: push eax */
    RECOMP_CALL(sub_1103AA1D); /* 0x1103AC2F: call 0x1103aa1d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x1103AC34: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1103AC37: push esi */
    eax = ecx + esi * 8; /* 0x1103AC38: lea eax, [ecx + esi*8] */
    PUSH32(esp, eax); /* 0x1103AC3B: push eax */
    PUSH32(esp, esi); /* 0x1103AC3C: push esi */
    PUSH32(esp, edi); /* 0x1103AC3D: push edi */
    RECOMP_CALL(sub_1103A8E3); /* 0x1103AC3E: call 0x1103a8e3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1103AC43: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1103AC46: add esp, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103AC49: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x1103AC4A: mov dword ptr [ebp + 0xc], eax */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1103AC4D: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103AC01; /* 0x1103AC50: jl 0x1103ac01 */
L_1103AC52:
    goto L_1103AC67; /* 0x1103AC52: jmp 0x1103ac67 */
L_1103AC54:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103AC54: fstp st(0) */
L_1103AC56:
    fp_push(*(double*)ADDR(ebx)); /* 0x1103AC56: fld qword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x1103AC58: push ecx */
    PUSH32(esp, ecx); /* 0x1103AC59: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AC5A: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103AC5D: push esi */
    PUSH32(esp, edi); /* 0x1103AC5E: push edi */
    RECOMP_CALL(sub_1103AA1D); /* 0x1103AC5F: call 0x1103aa1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103AC64: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1103AC67:
    ebx = POP32_VAL(esp); /* 0x1103AC67: pop ebx */
L_1103AC68:
    eax = edi; /* 0x1103AC68: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1103AC6A: pop edi */
    esi = POP32_VAL(esp); /* 0x1103AC6B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1103AC6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AC6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103AC6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AC6Eu);

L_1103AC6E:
    PUSH32(esp, ebp); /* 0x1103AC6E: push ebp */
    ebp = esp; /* 0x1103AC6F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103AC71: push ecx */
    PUSH32(esp, ecx); /* 0x1103AC72: push ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x1103AC73: fild dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1103AC76: push ecx */
    PUSH32(esp, ecx); /* 0x1103AC77: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1103AC78: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1103AC7B: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AC7E: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103AC81: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103AC84: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103AC96); /* 0x1103AC87: call 0x1103ac96 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1103AC8C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103AC8F: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1103AC92: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103AC94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AC95: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103AC96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AC96u);

L_1103AC96:
    PUSH32(esp, ebp); /* 0x1103AC96: push ebp */
    ebp = esp; /* 0x1103AC97: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103AC99: push ecx */
    PUSH32(esp, ecx); /* 0x1103AC9A: push ecx */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103AC9B: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1103AC9E: push ebx */
    PUSH32(esp, esi); /* 0x1103AC9F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1103ACA0: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1103ACA3: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1103ACA4: mov edi, dword ptr [ebp + 0xc] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1103ACA7: fst qword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x1103ACAA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103AD79; /* 0x1103ACAC: jle 0x1103ad79 */
L_1103ACB2:
    /* cmp edi, 1 */ /* 0x1103ACB2: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103AD75; /* 0x1103ACB5: je 0x1103ad75 */
L_1103ACBB:
    eax = ebp + (-0x8); /* 0x1103ACBB: lea eax, [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103ACBE: fstp st(0) */
    PUSH32(esp, eax); /* 0x1103ACC0: push eax */
    eax = ebp + 0xC; /* 0x1103ACC1: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103ACC4: push eax */
    RECOMP_CALL(sub_1103848F); /* 0x1103ACC5: call 0x1103848f */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1103ACCA: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x1103ACCD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103ACCE: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x1103ACCF: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103AD72; /* 0x1103ACD2: je 0x1103ad72 */
L_1103ACD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103ACD8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1103ACDA: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103ACEE; /* 0x1103ACDD: jge 0x1103acee */
L_1103ACDF:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1103ACDF: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x1103ACE2: fstp qword ptr [esi] */
    fp_push(0.0); /* 0x1103ACE4: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x1103ACE6: fstp qword ptr [esi + 8] */
    goto L_1103AD7B; /* 0x1103ACE9: jmp 0x1103ad7b */
L_1103ACEE:
    eax = ebp + (-0x8); /* 0x1103ACEE: lea eax, [ebp - 8] */
    PUSH32(esp, 0x1Au); /* 0x1103ACF1: push 0x1a */
    PUSH32(esp, eax); /* 0x1103ACF3: push eax */
    RECOMP_CALL(sub_110380FF); /* 0x1103ACF4: call 0x110380ff */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x1103ACF9: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103ACFD: push eax */
    eax = ebp + (-0x8); /* 0x1103ACFE: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1103AD01: push eax */
    RECOMP_CALL(sub_1102FA24); /* 0x1103AD02: call 0x1102fa24 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1103AD07: fld qword ptr [ebp - 8] */
    ebx = esi + 0x8; /* 0x1103AD0A: lea ebx, [esi + 8] */
    *(double*)ADDR(esi) = _st[0]; /* 0x1103AD0D: fst qword ptr [esi] */
    _st[0] = *(double*)ADDR(ebp + 0x10) - _st[0]; /* 0x1103AD0F: fsubr qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103AD12: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x1103AD15: fst qword ptr [ebp + 0x10] */
    *(double*)ADDR(ebx) = _st[0]; /* 0x1103AD18: fst qword ptr [ebx] */
    /* cmp edi, 2 */ /* 0x1103AD1A: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AD79; /* 0x1103AD1D: jle 0x1103ad79 */
L_1103AD1F:
    fp_push(0.0); /* 0x1103AD1F: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103AD21: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103AD23: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1103AD25: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x1103AD27: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AD6D; /* 0x1103AD2A: jnp 0x1103ad6d */
L_1103AD2C:
    eax = ebp + 0xC; /* 0x1103AD2C: lea eax, [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103AD2F: fstp st(0) */
    PUSH32(esp, ebx); /* 0x1103AD31: push ebx */
    PUSH32(esp, eax); /* 0x1103AD32: push eax */
    RECOMP_CALL(sub_1103848F); /* 0x1103AD33: call 0x1103848f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Au); /* 0x1103AD38: push 0x1a */
    PUSH32(esp, ebx); /* 0x1103AD3A: push ebx */
    RECOMP_CALL(sub_110380FF); /* 0x1103AD3B: call 0x110380ff */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x1103AD40: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103AD44: push eax */
    PUSH32(esp, ebx); /* 0x1103AD45: push ebx */
    RECOMP_CALL(sub_1102FA24); /* 0x1103AD46: call 0x1102fa24 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1103AD4B: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1103AD4E: add esp, 0x18 */
    _flag_k = FK_ADD;
    _st[0] -= *(double*)ADDR(ebx); /* 0x1103AD51: fsub qword ptr [ebx] */
    *(double*)ADDR(esi + 0x10) = _st[0]; /* 0x1103AD53: fst qword ptr [esi + 0x10] */
    /* cmp edi, 3 */ /* 0x1103AD56: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AD79; /* 0x1103AD59: jle 0x1103ad79 */
L_1103AD5B:
    fp_push(0.0); /* 0x1103AD5B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103AD5D: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103AD5F: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1103AD61: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x1103AD63: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AD79; /* 0x1103AD66: jnp 0x1103ad79 */
L_1103AD68:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x18) = _v; } /* 0x1103AD68: fstp qword ptr [esi + 0x18] */
    goto L_1103AD7B; /* 0x1103AD6B: jmp 0x1103ad7b */
L_1103AD6D:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x1103AD6D: fstp qword ptr [esi + 0x10] */
    goto L_1103AD7B; /* 0x1103AD70: jmp 0x1103ad7b */
L_1103AD72:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1103AD72: fld qword ptr [ebp - 8] */
L_1103AD75:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x1103AD75: fstp qword ptr [esi] */
    goto L_1103AD7B; /* 0x1103AD77: jmp 0x1103ad7b */
L_1103AD79:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103AD79: fstp st(0) */
L_1103AD7B:
    edi = POP32_VAL(esp); /* 0x1103AD7B: pop edi */
    eax = esi; /* 0x1103AD7C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1103AD7E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103AD7F: pop ebx */
    esp = ebp; /* 0x1103AD80: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103AD82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AD83: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103AD84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AD84u);

L_1103AD84:
    PUSH32(esp, ebp); /* 0x1103AD84: push ebp */
    ebp = esp; /* 0x1103AD85: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103AD87: push ecx */
    PUSH32(esp, esi); /* 0x1103AD88: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1103AD89: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1103AD8C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1103AD8D: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1103AD90: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103AE8C; /* 0x1103AD92: je 0x1103ae8c */
L_1103AD98:
    PUSH32(esp, edi); /* 0x1103AD98: push edi */
    RECOMP_CALL(sub_1101278A); /* 0x1103AD99: call 0x1101278a */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1103AD9E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi)); /* 0x1103ADA0: fcomp qword ptr [edi] */
    fp_pop();
    ecx = POP32_VAL(esp); /* 0x1103ADA2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103ADA3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1103ADA5: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103ADA8: fnstsw ax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AE77; /* 0x1103ADAA: jle 0x1103ae77 */
L_1103ADB0:
    /* test HI8(eax), 0x41u */ /* 0x1103ADB0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103AE7C; /* 0x1103ADB3: je 0x1103ae7c */
L_1103ADB9:
    fp_push(*(double*)ADDR(edi)); /* 0x1103ADB9: fld qword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1103ADBB: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1103ADBC: mov ebx, dword ptr [ebp + 0x10] */
    eax = ebx + esi * 8; /* 0x1103ADBF: lea eax, [ebx + esi*8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1103ADC2: mov dword ptr [ebp - 4], eax */
    eax = eax + esi * 8; /* 0x1103ADC5: lea eax, [eax + esi*8] */
    MEM32(ebp + 0xC) = eax; /* 0x1103ADC8: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, 1 */ /* 0x1103ADCB: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103ADD3; /* 0x1103ADCE: jle 0x1103add3 */
L_1103ADD0:
    _st[0] += *(double*)ADDR(edi + 0x8); /* 0x1103ADD0: fadd qword ptr [edi + 8] */
L_1103ADD3:
    PUSH32(esp, ecx); /* 0x1103ADD3: push ecx */
    PUSH32(esp, ecx); /* 0x1103ADD4: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103ADD5: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1103B870); /* 0x1103ADD8: call 0x1103b870 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1103ADDD: fld1  */
    eax = ebx + esi * 8; /* 0x1103ADDF: lea eax, [ebx + esi*8] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1103ADE2: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103ADE4: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103ADE7: push esi */
    PUSH32(esp, eax); /* 0x1103ADE8: push eax */
    RECOMP_CALL(sub_1103AC96); /* 0x1103ADE9: call 0x1103ac96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103ADEE: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x1103ADF1: push 2 */
    eax = POP32_VAL(esp); /* 0x1103ADF3: pop eax */
    MEM32(ebp + 0x8) = eax; /* 0x1103ADF4: mov dword ptr [ebp + 8], eax */
    /* cmp esi, eax */ /* 0x1103ADF7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AE63; /* 0x1103ADF9: jle 0x1103ae63 */
L_1103ADFB:
    eax = ebx + esi * 8; /* 0x1103ADFB: lea eax, [ebx + esi*8] */
    PUSH32(esp, eax); /* 0x1103ADFE: push eax */
    PUSH32(esp, esi); /* 0x1103ADFF: push esi */
    PUSH32(esp, ebx); /* 0x1103AE00: push ebx */
    RECOMP_CALL(sub_110398FE); /* 0x1103AE01: call 0x110398fe */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x110011E0)); /* 0x1103AE06: fld qword ptr [0x110011e0] */
    ecx = POP32_VAL(esp); /* 0x1103AE0C: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AE0D: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103AE10: push esi */
    PUSH32(esp, ebx); /* 0x1103AE11: push ebx */
    RECOMP_CALL(sub_1103AA1D); /* 0x1103AE12: call 0x1103aa1d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103AE17: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1103AE1A: push esi */
    PUSH32(esp, edi); /* 0x1103AE1B: push edi */
    PUSH32(esp, esi); /* 0x1103AE1C: push esi */
    PUSH32(esp, ebx); /* 0x1103AE1D: push ebx */
    RECOMP_CALL(sub_1103AB9B); /* 0x1103AE1E: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103AE23: push dword ptr [ebp + 0xc] */
    eax = ebx + esi * 8; /* 0x1103AE26: lea eax, [ebx + esi*8] */
    PUSH32(esp, esi); /* 0x1103AE29: push esi */
    PUSH32(esp, eax); /* 0x1103AE2A: push eax */
    PUSH32(esp, esi); /* 0x1103AE2B: push esi */
    PUSH32(esp, ebx); /* 0x1103AE2C: push ebx */
    RECOMP_CALL(sub_1103AB9B); /* 0x1103AE2D: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11003828)); /* 0x1103AE32: fld qword ptr [0x11003828] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1103AE38: add esp, 0x30 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AE3B: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1103AE3E: push esi */
    PUSH32(esp, ebx); /* 0x1103AE3F: push ebx */
    RECOMP_CALL(sub_1103A5DD); /* 0x1103AE40: call 0x1103a5dd */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103AE45: push dword ptr [ebp + 0xc] */
    eax = ebx + esi * 8; /* 0x1103AE48: lea eax, [ebx + esi*8] */
    PUSH32(esp, esi); /* 0x1103AE4B: push esi */
    PUSH32(esp, ebx); /* 0x1103AE4C: push ebx */
    PUSH32(esp, esi); /* 0x1103AE4D: push esi */
    PUSH32(esp, eax); /* 0x1103AE4E: push eax */
    RECOMP_CALL(sub_1103AB9B); /* 0x1103AE4F: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1103AE54: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1103AE57: add esp, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1103AE5A: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1103AE5C: mov dword ptr [ebp + 8], eax */
    /* cmp eax, esi */ /* 0x1103AE5F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103ADFB; /* 0x1103AE61: jl 0x1103adfb */
L_1103AE63:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103AE63: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1103AE66: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1103AE67: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x1103AE6A: push esi */
    PUSH32(esp, edi); /* 0x1103AE6B: push edi */
    RECOMP_CALL(sub_1103AB9B); /* 0x1103AE6C: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1103AE71: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1103AE74: pop ebx */
    goto L_1103AE8C; /* 0x1103AE75: jmp 0x1103ae8c */
L_1103AE77:
    /* test HI8(eax), 0x41u */ /* 0x1103AE77: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103AE8C; /* 0x1103AE7A: jne 0x1103ae8c */
L_1103AE7C:
    PUSH32(esp, 1); /* 0x1103AE7C: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x1103AE7E: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x110630A8)); /* 0x1103AE83: fld qword ptr [0x110630a8] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1103AE89: fstp qword ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x1103AE8B: pop ecx */
L_1103AE8C:
    eax = edi; /* 0x1103AE8C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1103AE8E: pop edi */
    esi = POP32_VAL(esp); /* 0x1103AE8F: pop esi */
    esp = ebp; /* 0x1103AE90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103AE92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AE93: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103AE94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AE94u);

L_1103AE94:
    PUSH32(esp, ebp); /* 0x1103AE94: push ebp */
    ebp = esp; /* 0x1103AE95: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1103AE97: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103AE98: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1103AE9A: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103AED4; /* 0x1103AE9D: jle 0x1103aed4 */
L_1103AE9F:
    fp_push(0.0); /* 0x1103AE9F: fldz  */
    PUSH32(esp, edi); /* 0x1103AEA1: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1103AEA2: mov edi, dword ptr [ebp + 0x10] */
L_1103AEA5:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x1103AEA5: fld qword ptr [edi + esi*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103AEA8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103AEAA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103AEAC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103AED3; /* 0x1103AEAF: jnp 0x1103aed3 */
L_1103AEB1:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x1103AEB1: fld qword ptr [edi + esi*8] */
    PUSH32(esp, ecx); /* 0x1103AEB4: push ecx */
    PUSH32(esp, ecx); /* 0x1103AEB5: push ecx */
    _st[0] = -_st[0]; /* 0x1103AEB6: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AEB8: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103AEBB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103AEBE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103A5DD); /* 0x1103AEC1: call 0x1103a5dd */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1103AEC6: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103AEC8: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103AECB: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1103AECC: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1103AEA5; /* 0x1103AECF: jl 0x1103aea5 */
L_1103AED1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103AED1: fstp st(0) */
L_1103AED3:
    edi = POP32_VAL(esp); /* 0x1103AED3: pop edi */
L_1103AED4:
    eax = MEM32(ebp + 0x8); /* 0x1103AED4: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1103AED7: pop esi */
    ebp = POP32_VAL(esp); /* 0x1103AED8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AED9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103AEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AEE0u);

L_1103AEE0:
    /* cmp MEM32(0x11068B40), 0 */ /* 0x1103AEE0: cmp dword ptr [0x11068b40], 0 */
    _flag_a = (uint32_t)(MEM32(0x11068B40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103AF16; /* 0x1103AEE7: je 0x1103af16 */
L_1103AEE9:
    PUSH32(esp, ebp); /* 0x1103AEE9: push ebp */
    ebp = esp; /* 0x1103AEEA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1103AEEC: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1103AEEF: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103AEF2: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x1103AEF5: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1103AEFA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AEFB: ret  */
L_1103AF16:
    PUSH32(esp, ebp); /* 0x1103AF16: push ebp */
    ebp = esp; /* 0x1103AF17: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1103AF19: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1103AF1C: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x1103AF1F: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x1103AF21: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x1103AF25: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x1103AF29: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x1103AF2D: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x1103AF31: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x1103AF35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103AF75; /* 0x1103AF37: je 0x1103af75 */
L_1103AF39:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1103AF39: fsubp st(1) */
    /* test edx, edx */ /* 0x1103AF3B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1103AF5D; /* 0x1103AF3D: jns 0x1103af5d */
L_1103AF3F:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1103AF3F: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x1103AF42: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x1103AF45: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x1103AF4B: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1103AF51: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x1103AF54: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1103AF58: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1103AF89; /* 0x1103AF5B: jmp 0x1103af89 */
L_1103AF5D:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1103AF5D: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x1103AF60: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x1103AF63: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1103AF69: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x1103AF6C: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1103AF70: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1103AF89; /* 0x1103AF73: jmp 0x1103af89 */
L_1103AF75:
    edx = MEM32(esp + 0x14); /* 0x1103AF75: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x1103AF79: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103AF39; /* 0x1103AF7F: jne 0x1103af39 */
L_1103AF81:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x1103AF81: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x1103AF85: fstp dword ptr [esp + 0x18] */
L_1103AF89:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1103AF89: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AF8A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103AF90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AF90u);

L_1103AF90:
    eax = MEM32(esp + 0x8); /* 0x1103AF90: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x1103AF94: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1103AF98: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0xC); /* 0x1103AF9A: mov ecx, dword ptr [esp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103AFA9; /* 0x1103AF9E: jne 0x1103afa9 */
L_1103AFA0:
    eax = MEM32(esp + 0x4); /* 0x1103AFA0: mov eax, dword ptr [esp + 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x1103AFA4: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1103AFA6: ret 0x10 */
L_1103AFA9:
    PUSH32(esp, ebx); /* 0x1103AFA9: push ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x1103AFAA: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = eax; /* 0x1103AFAC: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x1103AFAE: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x1103AFB2: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1103AFB6: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x8); /* 0x1103AFB8: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x1103AFBC: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x1103AFBE: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1103AFC0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1103AFC1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1103AFD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AFD0u);

L_1103AFD0:
    /* cmp LO8(ecx), 0x40u */ /* 0x1103AFD0: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103AFEA; /* 0x1103AFD3: jae 0x1103afea */
L_1103AFD5:
    /* cmp LO8(ecx), 0x20u */ /* 0x1103AFD5: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103AFE0; /* 0x1103AFD8: jae 0x1103afe0 */
L_1103AFDA:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1103AFDA: shld edx, eax, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1103AFDD: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1103AFDD: shl eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AFDF: ret  */
L_1103AFE0:
    edx = eax; /* 0x1103AFE0: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103AFE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x1103AFE4: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1103AFE7: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x1103AFE7: shl edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AFE9: ret  */
L_1103AFEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103AFEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1103AFEC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103AFEE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103AFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103AFF0u);

L_1103AFF0:
    PUSH32(esp, ebx); /* 0x1103AFF0: push ebx */
    PUSH32(esp, esi); /* 0x1103AFF1: push esi */
    eax = MEM32(esp + 0x18); /* 0x1103AFF2: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x1103AFF6: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B012; /* 0x1103AFF8: jne 0x1103b012 */
L_1103AFFA:
    ecx = MEM32(esp + 0x14); /* 0x1103AFFA: mov ecx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x1103AFFE: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1103B002: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1103B004: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x1103B006: mov ebx, eax */
    eax = MEM32(esp + 0xC); /* 0x1103B008: mov eax, dword ptr [esp + 0xc] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1103B00C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = ebx; /* 0x1103B00E: mov edx, ebx */
    goto L_1103B053; /* 0x1103B010: jmp 0x1103b053 */
L_1103B012:
    ecx = eax; /* 0x1103B012: mov ecx, eax */
    ebx = MEM32(esp + 0x14); /* 0x1103B014: mov ebx, dword ptr [esp + 0x14] */
    edx = MEM32(esp + 0x10); /* 0x1103B018: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x1103B01C: mov eax, dword ptr [esp + 0xc] */
L_1103B020:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1103B020: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1103B020: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x1103B022: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1103B024: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1103B024: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x1103B026: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x1103B028: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B020; /* 0x1103B02A: jne 0x1103b020 */
L_1103B02C:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1103B02C: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x1103B02E: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x1103B030: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x1103B034: mov ecx, eax */
    eax = MEM32(esp + 0x14); /* 0x1103B036: mov eax, dword ptr [esp + 0x14] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1103B03A: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1103B03C: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1103B04E; /* 0x1103B03E: jb 0x1103b04e */
L_1103B040:
    /* cmp edx, MEM32(esp + 0x10) */ /* 0x1103B040: cmp edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1103B04E; /* 0x1103B044: ja 0x1103b04e */
L_1103B046:
    if (CMP_B(_flag_a, _flag_b)) goto L_1103B04F; /* 0x1103B046: jb 0x1103b04f */
L_1103B048:
    /* cmp eax, MEM32(esp + 0xC) */ /* 0x1103B048: cmp eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1103B04F; /* 0x1103B04C: jbe 0x1103b04f */
L_1103B04E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1103B04E: dec esi */
    _flag_k = FK_DEC;
L_1103B04F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1103B04F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1103B051: mov eax, esi */
L_1103B053:
    esi = POP32_VAL(esp); /* 0x1103B053: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103B054: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1103B055: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1103B060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B060u);

L_1103B060:
    PUSH32(esp, esi); /* 0x1103B060: push esi */
    eax = MEM32(esp + 0x14); /* 0x1103B061: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x1103B065: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B091; /* 0x1103B067: jne 0x1103b091 */
L_1103B069:
    ecx = MEM32(esp + 0x10); /* 0x1103B069: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x1103B06D: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1103B071: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1103B073: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x1103B075: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x1103B077: mov eax, dword ptr [esp + 8] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1103B07B: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x1103B07D: mov esi, eax */
    eax = ebx; /* 0x1103B07F: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x1103B081: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x1103B085: mov ecx, eax */
    eax = esi; /* 0x1103B087: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x1103B089: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1103B08D: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_1103B0D8; /* 0x1103B08F: jmp 0x1103b0d8 */
L_1103B091:
    ecx = eax; /* 0x1103B091: mov ecx, eax */
    ebx = MEM32(esp + 0x10); /* 0x1103B093: mov ebx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x1103B097: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x1103B09B: mov eax, dword ptr [esp + 8] */
L_1103B09F:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1103B09F: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1103B09F: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x1103B0A1: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1103B0A3: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1103B0A3: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x1103B0A5: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x1103B0A7: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B09F; /* 0x1103B0A9: jne 0x1103b09f */
L_1103B0AB:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1103B0AB: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x1103B0AD: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x1103B0AF: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x1103B0B3: mov ecx, eax */
    eax = MEM32(esp + 0x10); /* 0x1103B0B5: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1103B0B9: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1103B0BB: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1103B0CD; /* 0x1103B0BD: jb 0x1103b0cd */
L_1103B0BF:
    /* cmp edx, MEM32(esp + 0xC) */ /* 0x1103B0BF: cmp edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1103B0CD; /* 0x1103B0C3: ja 0x1103b0cd */
L_1103B0C5:
    if (CMP_B(_flag_a, _flag_b)) goto L_1103B0D6; /* 0x1103B0C5: jb 0x1103b0d6 */
L_1103B0C7:
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x1103B0C7: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1103B0D6; /* 0x1103B0CB: jbe 0x1103b0d6 */
L_1103B0CD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1103B0CD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x1103B0CE: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1103B0D2: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1103B0D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103B0D6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103B0D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x8); /* 0x1103B0D8: sub eax, dword ptr [esp + 8] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0xC), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1103B0DC: sbb edx, dword ptr [esp + 0xc] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1103B0E0: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1103B0E2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1103B0E4: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edx; /* 0x1103B0E7: mov ecx, edx */
    edx = ebx; /* 0x1103B0E9: mov edx, ebx */
    ebx = ecx; /* 0x1103B0EB: mov ebx, ecx */
    ecx = eax; /* 0x1103B0ED: mov ecx, eax */
    eax = esi; /* 0x1103B0EF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1103B0F1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1103B0F2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1103B100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B100u);

L_1103B100:
    /* cmp LO8(ecx), 0x40u */ /* 0x1103B100: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103B11A; /* 0x1103B103: jae 0x1103b11a */
L_1103B105:
    /* cmp LO8(ecx), 0x20u */ /* 0x1103B105: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103B110; /* 0x1103B108: jae 0x1103b110 */
L_1103B10A:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1103B10A: shrd eax, edx, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1103B10D: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x1103B10D: shr edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B10F: ret  */
L_1103B110:
    eax = edx; /* 0x1103B110: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1103B112: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x1103B114: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1103B117: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x1103B117: shr eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B119: ret  */
L_1103B11A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B11A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1103B11C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B11E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B120u);

L_1103B120:
    { _itail_tgt = (uint32_t)(MEM32(0x11069330)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B126(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B126u);

L_1103B126:
    { _itail_tgt = (uint32_t)(MEM32(0x1106932C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B12C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B12Cu);

L_1103B12C:
    { _itail_tgt = (uint32_t)(MEM32(0x11069324)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B132(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B132u);

L_1103B132:
    PUSH32(esp, 0xCu); /* 0x1103B132: push 0xc */
    PUSH32(esp, 0x110453E0u); /* 0x1103B134: push 0x110453e0 */
    RECOMP_CALL(sub_1103BA00); /* 0x1103B139: call 0x1103ba00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1103B13E: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x1103B142: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x1103B145: mov eax, ebx */
    edi = MEM32(ebp + 0x10); /* 0x1103B147: mov edi, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1103B14A: imul eax, edi */
    esi = MEM32(ebp + 0x8); /* 0x1103B14D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1103B150: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x1103B152: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1103B155: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103B159:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1103B159: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = edi; /* 0x1103B15A: mov dword ptr [ebp + 0x10], edi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1103B16B; /* 0x1103B15D: js 0x1103b16b */
L_1103B15F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1103B15F: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x1103B161: mov dword ptr [ebp + 8], esi */
    ecx = esi; /* 0x1103B164: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x1103B166: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1103B159; /* 0x1103B169: jmp 0x1103b159 */
L_1103B16B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B16B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103B16D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1103B16E: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1103B171: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1103B191); /* 0x1103B178: call 0x1103b191 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103BA45); /* 0x1103B17D: call 0x1103ba45 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1103B182: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1103B191(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B191u);

L_1103B191:
    /* test eax, eax */ /* 0x1103B191: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B1A0; /* 0x1103B193: jne 0x1103b1a0 */
L_1103B195:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1103B195: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1103B198: push edi */
    PUSH32(esp, ebx); /* 0x1103B199: push ebx */
    PUSH32(esp, esi); /* 0x1103B19A: push esi */
    RECOMP_CALL(sub_1103B1A1); /* 0x1103B19B: call 0x1103b1a1 */
    RECOMP_FLAGS_IN();
L_1103B1A0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B1A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B1A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B1A1u);

L_1103B1A1:
    PUSH32(esp, 0x14u); /* 0x1103B1A1: push 0x14 */
    PUSH32(esp, 0x11045400u); /* 0x1103B1A3: push 0x11045400 */
    RECOMP_CALL(sub_1103BA00); /* 0x1103B1A8: call 0x1103ba00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1103B1AD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103B1B1:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1103B1B1: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1103B1F0; /* 0x1103B1B4: js 0x1103b1f0 */
L_1103B1B6:
    ecx = MEM32(ebp + 0x8); /* 0x1103B1B6: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x1103B1B9: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x1103B1BC: mov dword ptr [ebp + 8], ecx */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x1103B1BF: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1103B1B1; /* 0x1103B1C2: jmp 0x1103b1b1 */
L_1103B1F0:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1103B1F0: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1103BA45); /* 0x1103B1F7: call 0x1103ba45 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1103B1FC: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1103B200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B200u);

L_1103B200:
    { _itail_tgt = (uint32_t)(MEM32(0x1106930C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B206(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B206u);

L_1103B206:
    /* cmp MEM32(0x11068EAC), 0 */ /* 0x1103B206: cmp dword ptr [0x11068eac], 0 */
    _flag_a = (uint32_t)(MEM32(0x11068EAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B212; /* 0x1103B20D: je 0x1103b212 */
L_1103B20F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B20F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B211: ret  */
L_1103B212:
    PUSH32(esp, esi); /* 0x1103B212: push esi */
    PUSH32(esp, 4); /* 0x1103B213: push 4 */
    PUSH32(esp, 0x20u); /* 0x1103B215: push 0x20 */
    RECOMP_ICALL(MEM32(0x110691AC)); /* 0x1103B217: call dword ptr [0x110691ac] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B21D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103B21E: pop ecx */
    esi = eax; /* 0x1103B21F: mov esi, eax */
    PUSH32(esp, esi); /* 0x1103B221: push esi */
    RECOMP_ICALL(MEM32(0x1106906C)); /* 0x1103B222: call dword ptr [0x1106906c] */
    RECOMP_FLAGS_IN();
    MEM32(0x11068EAC) = eax; /* 0x1103B228: mov dword ptr [0x11068eac], eax */
    MEM32(0x11068EA8) = eax; /* 0x1103B22D: mov dword ptr [0x11068ea8], eax */
    /* test esi, esi */ /* 0x1103B232: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B23B; /* 0x1103B234: jne 0x1103b23b */
L_1103B236:
    PUSH32(esp, 0x18u); /* 0x1103B236: push 0x18 */
    eax = POP32_VAL(esp); /* 0x1103B238: pop eax */
    esi = POP32_VAL(esp); /* 0x1103B239: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B23A: ret  */
L_1103B23B:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1103B23B: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B23E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1103B240: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B241: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B242(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B242u);

L_1103B242:
    PUSH32(esp, 0x14u); /* 0x1103B242: push 0x14 */
    PUSH32(esp, 0x11045420u); /* 0x1103B244: push 0x11045420 */
    RECOMP_CALL(sub_1103BA00); /* 0x1103B249: call 0x1103ba00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1103B24E: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(0x11068EAC)); /* 0x1103B252: push dword ptr [0x11068eac] */
    esi = MEM32(0x11069068); /* 0x1103B258: mov esi, dword ptr [0x11069068] */
    RECOMP_ICALL(esi); /* 0x1103B25E: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1103B260: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1103B263: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B274; /* 0x1103B266: jne 0x1103b274 */
L_1103B268:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B268: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106928C)); /* 0x1103B26B: call dword ptr [0x1106928c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B271: pop ecx */
    goto L_1103B2D9; /* 0x1103B272: jmp 0x1103b2d9 */
L_1103B274:
    PUSH32(esp, 8); /* 0x1103B274: push 8 */
    RECOMP_CALL(sub_1103B85E); /* 0x1103B276: call 0x1103b85e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B27B: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1103B27C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(0x11068EAC)); /* 0x1103B280: push dword ptr [0x11068eac] */
    RECOMP_ICALL(esi); /* 0x1103B286: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1103B288: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, MEM32(0x11068EA8)); /* 0x1103B28B: push dword ptr [0x11068ea8] */
    RECOMP_ICALL(esi); /* 0x1103B291: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x1103B293: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x1103B296: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1103B299: push eax */
    eax = ebp + (-0x1C); /* 0x1103B29A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1103B29D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B29E: push dword ptr [ebp + 8] */
    esi = MEM32(0x1106906C); /* 0x1103B2A1: mov esi, dword ptr [0x1106906c] */
    RECOMP_ICALL(esi); /* 0x1103B2A7: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103B2A9: push eax */
    RECOMP_CALL(sub_1103BA7C); /* 0x1103B2AA: call 0x1103ba7c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103B2AF: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1103B2B2: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x1103B2B4: mov dword ptr [ebp - 0x24], edi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1103B2B7: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(esi); /* 0x1103B2BA: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x11068EAC) = eax; /* 0x1103B2BC: mov dword ptr [0x11068eac], eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1103B2C1: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(esi); /* 0x1103B2C4: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x11068EA8) = eax; /* 0x1103B2C6: mov dword ptr [0x11068ea8], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1103B2CB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1103B2E2); /* 0x1103B2D2: call 0x1103b2e2 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1103B2D7: mov eax, edi */
L_1103B2D9:
    RECOMP_CALL(sub_1103BA45); /* 0x1103B2D9: call 0x1103ba45 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B2DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B2E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B2E2u);

L_1103B2E2:
    PUSH32(esp, 8); /* 0x1103B2E2: push 8 */
    RECOMP_CALL(sub_1103B864); /* 0x1103B2E4: call 0x1103b864 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B2E9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B2EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B2EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B2EBu);

L_1103B2EB:
    PUSH32(esp, ebp); /* 0x1103B2EB: push ebp */
    ebp = esp; /* 0x1103B2EC: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B2EE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B242); /* 0x1103B2F1: call 0x1103b242 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1103B2F6: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1103B2F8: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1103B2F9: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1103B2FB: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1103B2FD: dec eax */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x1103B2FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B2FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B300u);

L_1103B300:
    { _itail_tgt = (uint32_t)(MEM32(0x110692FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B306(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B306u);

L_1103B306:
    { _itail_tgt = (uint32_t)(MEM32(0x110692F8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B312(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B312u);

L_1103B312:
    { _itail_tgt = (uint32_t)(MEM32(0x110692DC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B324(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B324u);

L_1103B324:
    { _itail_tgt = (uint32_t)(MEM32(0x11069084)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B32A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B32Au);

L_1103B32A:
    /* cmp ecx, MEM32(0x110631D0) */ /* 0x1103B32A: cmp ecx, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110631D0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B334; /* 0x1103B330: jne 0x1103b334 */
L_1103B332:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B332: repz ret  */
L_1103B334:
    goto L_1103BABF; /* 0x1103B334: jmp 0x1103babf */
L_1103BABF:
    PUSH32(esp, ebp); /* 0x1103BABF: push ebp */
    ebp = esp; /* 0x1103BAC0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x324u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x324u; /* 0x1103BAC2: sub esp, 0x324 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x17u); /* 0x1103BAC8: push 0x17 */
    RECOMP_CALL(sub_1103BE46); /* 0x1103BACA: call 0x1103be46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1103BACF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103BAD8; /* 0x1103BAD1: je 0x1103bad8 */
L_1103BAD3:
    PUSH32(esp, 2); /* 0x1103BAD3: push 2 */
    ecx = POP32_VAL(esp); /* 0x1103BAD5: pop ecx */
    void_lift_trap(0x1103BAD6u, "int 0x29");
L_1103BAD8:
    MEM32(0x11068C48) = eax; /* 0x1103BAD8: mov dword ptr [0x11068c48], eax */
    MEM32(0x11068C44) = ecx; /* 0x1103BADD: mov dword ptr [0x11068c44], ecx */
    MEM32(0x11068C40) = edx; /* 0x1103BAE3: mov dword ptr [0x11068c40], edx */
    MEM32(0x11068C3C) = ebx; /* 0x1103BAE9: mov dword ptr [0x11068c3c], ebx */
    MEM32(0x11068C38) = esi; /* 0x1103BAEF: mov dword ptr [0x11068c38], esi */
    MEM32(0x11068C34) = edi; /* 0x1103BAF5: mov dword ptr [0x11068c34], edi */
    MEM16(0x11068C60) = (uint16_t)(_seg_ss); /* 0x1103BAFB: mov word ptr [0x11068c60], ss */
    MEM16(0x11068C54) = (uint16_t)(_seg_cs); /* 0x1103BB02: mov word ptr [0x11068c54], cs */
    MEM16(0x11068C30) = (uint16_t)(_seg_ds); /* 0x1103BB09: mov word ptr [0x11068c30], ds */
    MEM16(0x11068C2C) = (uint16_t)(_seg_es); /* 0x1103BB10: mov word ptr [0x11068c2c], es */
    MEM16(0x11068C28) = (uint16_t)(_seg_fs); /* 0x1103BB17: mov word ptr [0x11068c28], fs */
    MEM16(0x11068C24) = (uint16_t)(_seg_gs); /* 0x1103BB1E: mov word ptr [0x11068c24], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x1103BB25: pushfd  */
    POP32(esp, MEM32(0x11068C58)); /* 0x1103BB26: pop dword ptr [0x11068c58] */
    eax = MEM32(ebp); /* 0x1103BB2C: mov eax, dword ptr [ebp] */
    MEM32(0x11068C4C) = eax; /* 0x1103BB2F: mov dword ptr [0x11068c4c], eax */
    eax = MEM32(ebp + 0x4); /* 0x1103BB34: mov eax, dword ptr [ebp + 4] */
    MEM32(0x11068C50) = eax; /* 0x1103BB37: mov dword ptr [0x11068c50], eax */
    eax = ebp + 0x8; /* 0x1103BB3C: lea eax, [ebp + 8] */
    MEM32(0x11068C5C) = eax; /* 0x1103BB3F: mov dword ptr [0x11068c5c], eax */
    eax = MEM32(ebp + (-0x324)); /* 0x1103BB44: mov eax, dword ptr [ebp - 0x324] */
    MEM32(0x11068B98) = 0x00010001u; /* 0x1103BB4A: mov dword ptr [0x11068b98], 0x10001 */
    eax = MEM32(0x11068C50); /* 0x1103BB54: mov eax, dword ptr [0x11068c50] */
    MEM32(0x11068B54) = eax; /* 0x1103BB59: mov dword ptr [0x11068b54], eax */
    MEM32(0x11068B48) = 0xC0000409u; /* 0x1103BB5E: mov dword ptr [0x11068b48], 0xc0000409 */
    MEM32(0x11068B4C) = 1; /* 0x1103BB68: mov dword ptr [0x11068b4c], 1 */
    MEM32(0x11068B58) = 1; /* 0x1103BB72: mov dword ptr [0x11068b58], 1 */
    PUSH32(esp, 4); /* 0x1103BB7C: push 4 */
    eax = POP32_VAL(esp); /* 0x1103BB7E: pop eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0); /* 0x1103BB7F: imul eax, eax, 0 */
    MEM32(eax + 0x11068B5C) = 2; /* 0x1103BB82: mov dword ptr [eax + 0x11068b5c], 2 */
    PUSH32(esp, 4); /* 0x1103BB8C: push 4 */
    eax = POP32_VAL(esp); /* 0x1103BB8E: pop eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0); /* 0x1103BB8F: imul eax, eax, 0 */
    ecx = MEM32(0x110631D0); /* 0x1103BB92: mov ecx, dword ptr [0x110631d0] */
    MEM32(ebp + eax + (-0x8)) = ecx; /* 0x1103BB98: mov dword ptr [ebp + eax - 8], ecx */
    PUSH32(esp, 4); /* 0x1103BB9C: push 4 */
    eax = POP32_VAL(esp); /* 0x1103BB9E: pop eax */
    if (0u) _cf = _cf; /* 0x1103BB9F: shl eax, 0 */
    if (0u) { _flag_a = recomp_flags_pack((eax << 0u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 0u; /* 0x1103BB9F: shl eax, 0 */
    ecx = MEM32(0x110631D4); /* 0x1103BBA2: mov ecx, dword ptr [0x110631d4] */
    MEM32(ebp + eax + (-0x8)) = ecx; /* 0x1103BBA8: mov dword ptr [ebp + eax - 8], ecx */
    PUSH32(esp, 0x11003874u); /* 0x1103BBAC: push 0x11003874 */
    RECOMP_CALL(sub_1103BA82); /* 0x1103BBB1: call 0x1103ba82 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1103BBB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103BBB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BBB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B33A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B33Au);

L_1103B33A:
    { _itail_tgt = (uint32_t)(MEM32(0x11069088)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B340u);

L_1103B340:
    ecx = MEM32(ebp + (-0xC)); /* 0x1103B340: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1103B343: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1103B34A: pop ecx */
    edi = POP32_VAL(esp); /* 0x1103B34B: pop edi */
    edi = POP32_VAL(esp); /* 0x1103B34C: pop edi */
    esi = POP32_VAL(esp); /* 0x1103B34D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103B34E: pop ebx */
    esp = ebp; /* 0x1103B34F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103B351: pop ebp */
    PUSH32(esp, ecx); /* 0x1103B352: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B353: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B354(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B354u);

    goto L_1103B354;
L_1103B340:
    ecx = MEM32(ebp + (-0xC)); /* 0x1103B340: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1103B343: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1103B34A: pop ecx */
    edi = POP32_VAL(esp); /* 0x1103B34B: pop edi */
    edi = POP32_VAL(esp); /* 0x1103B34C: pop edi */
    esi = POP32_VAL(esp); /* 0x1103B34D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103B34E: pop ebx */
    esp = ebp; /* 0x1103B34F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103B351: pop ebp */
    PUSH32(esp, ecx); /* 0x1103B352: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B353: ret  */
L_1103B354:
    ecx = MEM32(ebp + (-0x10)); /* 0x1103B354: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1103B357: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103B359: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1103B340; /* 0x1103B35E: jmp 0x1103b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103B363(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B363u);

    goto L_1103B363;
L_1103B340:
    ecx = MEM32(ebp + (-0xC)); /* 0x1103B340: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1103B343: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1103B34A: pop ecx */
    edi = POP32_VAL(esp); /* 0x1103B34B: pop edi */
    edi = POP32_VAL(esp); /* 0x1103B34C: pop edi */
    esi = POP32_VAL(esp); /* 0x1103B34D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103B34E: pop ebx */
    esp = ebp; /* 0x1103B34F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103B351: pop ebp */
    PUSH32(esp, ecx); /* 0x1103B352: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B353: ret  */
L_1103B363:
    ecx = MEM32(ebp + (-0x14)); /* 0x1103B363: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1103B366: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103B368: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1103B340; /* 0x1103B36D: jmp 0x1103b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103B372(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B372u);

L_1103B372:
    PUSH32(esp, eax); /* 0x1103B372: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x1103B373: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x1103B37A: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x1103B37E: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1103B382: push ebx */
    PUSH32(esp, esi); /* 0x1103B383: push esi */
    PUSH32(esp, edi); /* 0x1103B384: push edi */
    MEM32(eax) = ebp; /* 0x1103B385: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x1103B387: mov ebp, eax */
    eax = MEM32(0x110631D0); /* 0x1103B389: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1103B38E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1103B390: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1103B391: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x1103B394: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x1103B39B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1103B39E: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B3A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B3A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B3A5u);

L_1103B3A5:
    PUSH32(esp, eax); /* 0x1103B3A5: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x1103B3A6: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x1103B3AD: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x1103B3B1: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1103B3B5: push ebx */
    PUSH32(esp, esi); /* 0x1103B3B6: push esi */
    PUSH32(esp, edi); /* 0x1103B3B7: push edi */
    MEM32(eax) = ebp; /* 0x1103B3B8: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x1103B3BA: mov ebp, eax */
    eax = MEM32(0x110631D0); /* 0x1103B3BC: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1103B3C1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1103B3C3: push eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1103B3C4: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1103B3C7: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x1103B3CA: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x1103B3D1: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1103B3D4: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B3DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B3DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B3DBu);

L_1103B3DB:
    PUSH32(esp, eax); /* 0x1103B3DB: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x1103B3DC: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x1103B3E3: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x1103B3E7: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1103B3EB: push ebx */
    PUSH32(esp, esi); /* 0x1103B3EC: push esi */
    PUSH32(esp, edi); /* 0x1103B3ED: push edi */
    MEM32(eax) = ebp; /* 0x1103B3EE: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x1103B3F0: mov ebp, eax */
    eax = MEM32(0x110631D0); /* 0x1103B3F2: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1103B3F7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1103B3F9: push eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x1103B3FA: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1103B3FD: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x1103B400: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x1103B407: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1103B40A: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B410: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B411(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B411u);

L_1103B411:
    PUSH32(esp, eax); /* 0x1103B411: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x1103B412: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x1103B419: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x1103B41D: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1103B421: push ebx */
    PUSH32(esp, esi); /* 0x1103B422: push esi */
    PUSH32(esp, edi); /* 0x1103B423: push edi */
    MEM32(eax) = ebp; /* 0x1103B424: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x1103B426: mov ebp, eax */
    eax = MEM32(0x110631D0); /* 0x1103B428: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1103B42D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1103B42F: push eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x1103B430: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x1103B433: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1103B436: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x1103B439: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x1103B440: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1103B443: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B449: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B49A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B49Au);

L_1103B49A:
    { _itail_tgt = (uint32_t)(MEM32(0x110690C0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B4A0u);

L_1103B4A0:
    { _itail_tgt = (uint32_t)(MEM32(0x1106911C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B4A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B4A6u);

L_1103B4A6:
    { _itail_tgt = (uint32_t)(MEM32(0x1106912C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B4AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B4ACu);

L_1103B4AC:
    { _itail_tgt = (uint32_t)(MEM32(0x11069144)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B4B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B4B2u);

L_1103B4B2:
    { _itail_tgt = (uint32_t)(MEM32(0x11069154)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B4B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B4B8u);

L_1103B4B8:
    { _itail_tgt = (uint32_t)(MEM32(0x11069158)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B4C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B4C4u);

L_1103B4C4:
    PUSH32(esp, esi); /* 0x1103B4C4: push esi */
    PUSH32(esp, 0x80u); /* 0x1103B4C5: push 0x80 */
    RECOMP_ICALL(MEM32(0x11069124)); /* 0x1103B4CA: call dword ptr [0x11069124] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B4D0: pop ecx */
    esi = eax; /* 0x1103B4D1: mov esi, eax */
    PUSH32(esp, esi); /* 0x1103B4D3: push esi */
    RECOMP_ICALL(MEM32(0x1106906C)); /* 0x1103B4D4: call dword ptr [0x1106906c] */
    RECOMP_FLAGS_IN();
    MEM32(0x11068EAC) = eax; /* 0x1103B4DA: mov dword ptr [0x11068eac], eax */
    MEM32(0x11068EA8) = eax; /* 0x1103B4DF: mov dword ptr [0x11068ea8], eax */
    /* test esi, esi */ /* 0x1103B4E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B4ED; /* 0x1103B4E6: jne 0x1103b4ed */
L_1103B4E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B4E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103B4EA: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1103B4EB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B4EC: ret  */
L_1103B4ED:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1103B4ED: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103BDCF); /* 0x1103B4F0: call 0x1103bdcf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103BDEFu); /* 0x1103B4F5: push 0x1103bdef */
    RECOMP_CALL(sub_1103B2EB); /* 0x1103B4FA: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    MEM32(esp) = 0x1103BE1Cu; /* 0x1103B4FF: mov dword ptr [esp], 0x1103be1c */
    RECOMP_CALL(sub_1103B2EB); /* 0x1103B506: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B50B: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B50C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1103B50E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B50F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B510u);

L_1103B510:
    PUSH32(esp, ebp); /* 0x1103B510: push ebp */
    ebp = esp; /* 0x1103B511: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103B513: push ecx */
    PUSH32(esp, ecx); /* 0x1103B514: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1103B515: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1103B519: push ebx */
    PUSH32(esp, esi); /* 0x1103B51A: push esi */
    PUSH32(esp, edi); /* 0x1103B51B: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B64B; /* 0x1103B51C: jne 0x1103b64b */
L_1103B522:
    eax = MEM32(0x11068B3C); /* 0x1103B522: mov eax, dword ptr [0x11068b3c] */
    /* test eax, eax */ /* 0x1103B527: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103B644; /* 0x1103B529: jle 0x1103b644 */
L_1103B52F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1103B52F: dec eax */
    _flag_k = FK_DEC;
    ebx = 0x11068E9Cu; /* 0x1103B530: mov ebx, 0x11068e9c */
    MEM32(0x11068B3C) = eax; /* 0x1103B535: mov dword ptr [0x11068b3c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103B53A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(FS_BASE + (0x18)); /* 0x1103B53C: mov eax, dword ptr fs:[0x18] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1103B542: mov dword ptr [ebp - 4], edi */
    edx = MEM32(eax + 0x4); /* 0x1103B545: mov edx, dword ptr [eax + 4] */
    goto L_1103B54E; /* 0x1103B548: jmp 0x1103b54e */
L_1103B54A:
    /* cmp eax, edx */ /* 0x1103B54A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B55C; /* 0x1103B54C: je 0x1103b55c */
L_1103B54E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B54E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1103B550: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1103B552: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1103B556: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B54A; /* 0x1103B558: jne 0x1103b54a */
L_1103B55A:
    goto L_1103B563; /* 0x1103B55A: jmp 0x1103b563 */
L_1103B55C:
    MEM32(ebp + (-0x4)) = 1; /* 0x1103B55C: mov dword ptr [ebp - 4], 1 */
L_1103B563:
    /* cmp MEM32(0x11068EA0), 2 */ /* 0x1103B563: cmp dword ptr [0x11068ea0], 2 */
    _flag_a = (uint32_t)(MEM32(0x11068EA0)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B579; /* 0x1103B56A: je 0x1103b579 */
L_1103B56C:
    PUSH32(esp, 0x1Fu); /* 0x1103B56C: push 0x1f */
    RECOMP_CALL(sub_1103BBC6); /* 0x1103B56E: call 0x1103bbc6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B573: pop ecx */
    goto L_1103B6FB; /* 0x1103B574: jmp 0x1103b6fb */
L_1103B579:
    PUSH32(esp, MEM32(0x11068EAC)); /* 0x1103B579: push dword ptr [0x11068eac] */
    RECOMP_ICALL(MEM32(0x11069068)); /* 0x1103B57F: call dword ptr [0x11069068] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103B585: mov esi, eax */
    MEM32(ebp + 0x10) = esi; /* 0x1103B587: mov dword ptr [ebp + 0x10], esi */
    /* test esi, esi */ /* 0x1103B58A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B62C; /* 0x1103B58C: je 0x1103b62c */
L_1103B592:
    PUSH32(esp, MEM32(0x11068EA8)); /* 0x1103B592: push dword ptr [0x11068ea8] */
    RECOMP_ICALL(MEM32(0x11069068)); /* 0x1103B598: call dword ptr [0x11069068] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1103B59E: mov ebx, eax */
    MEM32(ebp + 0xC) = esi; /* 0x1103B5A0: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + 0x8) = ebx; /* 0x1103B5A3: mov dword ptr [ebp + 8], ebx */
L_1103B5A6:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x1103B5A6: sub ebx, 4 */
    _flag_k = FK_CMP;
    /* cmp ebx, esi */ /* 0x1103B5A9: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1103B609; /* 0x1103B5AB: jb 0x1103b609 */
L_1103B5AD:
    /* cmp MEM32(ebx), edi */ /* 0x1103B5AD: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B5A6; /* 0x1103B5AF: je 0x1103b5a6 */
L_1103B5B1:
    PUSH32(esp, edi); /* 0x1103B5B1: push edi */
    RECOMP_ICALL(MEM32(0x1106906C)); /* 0x1103B5B2: call dword ptr [0x1106906c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), eax */ /* 0x1103B5B8: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B5A6; /* 0x1103B5BA: je 0x1103b5a6 */
L_1103B5BC:
    PUSH32(esp, MEM32(ebx)); /* 0x1103B5BC: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x11069068)); /* 0x1103B5BE: call dword ptr [0x11069068] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1103B5C4: push edi */
    esi = eax; /* 0x1103B5C5: mov esi, eax */
    RECOMP_ICALL(MEM32(0x1106906C)); /* 0x1103B5C7: call dword ptr [0x1106906c] */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x1103B5CD: mov dword ptr [ebx], eax */
    RECOMP_ICALL(esi); /* 0x1103B5CF: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x11068EAC)); /* 0x1103B5D1: push dword ptr [0x11068eac] */
    esi = MEM32(0x11069068); /* 0x1103B5D7: mov esi, dword ptr [0x11069068] */
    RECOMP_ICALL(esi); /* 0x1103B5DD: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x11068EA8)); /* 0x1103B5DF: push dword ptr [0x11068ea8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1103B5E5: mov dword ptr [ebp - 8], eax */
    RECOMP_ICALL(esi); /* 0x1103B5E8: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1103B5EA: mov ecx, dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1103B5ED: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B5FA; /* 0x1103B5F0: jne 0x1103b5fa */
L_1103B5F2:
    esi = MEM32(ebp + 0x10); /* 0x1103B5F2: mov esi, dword ptr [ebp + 0x10] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1103B5F5: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B5A6; /* 0x1103B5F8: je 0x1103b5a6 */
L_1103B5FA:
    esi = ecx; /* 0x1103B5FA: mov esi, ecx */
    MEM32(ebp + 0xC) = ecx; /* 0x1103B5FC: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + 0x10) = esi; /* 0x1103B5FF: mov dword ptr [ebp + 0x10], esi */
    ebx = eax; /* 0x1103B602: mov ebx, eax */
    MEM32(ebp + 0x8) = eax; /* 0x1103B604: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    goto L_1103B5A6; /* 0x1103B607: jmp 0x1103b5a6 */
L_1103B609:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1103B609: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B616; /* 0x1103B60C: je 0x1103b616 */
L_1103B60E:
    PUSH32(esp, esi); /* 0x1103B60E: push esi */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1103B60F: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B615: pop ecx */
L_1103B616:
    PUSH32(esp, edi); /* 0x1103B616: push edi */
    RECOMP_ICALL(MEM32(0x1106906C)); /* 0x1103B617: call dword ptr [0x1106906c] */
    RECOMP_FLAGS_IN();
    MEM32(0x11068EA8) = eax; /* 0x1103B61D: mov dword ptr [0x11068ea8], eax */
    ebx = 0x11068E9Cu; /* 0x1103B622: mov ebx, 0x11068e9c */
    MEM32(0x11068EAC) = eax; /* 0x1103B627: mov dword ptr [0x11068eac], eax */
L_1103B62C:
    MEM32(0x11068EA0) = edi; /* 0x1103B62C: mov dword ptr [0x11068ea0], edi */
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x1103B632: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B6FB; /* 0x1103B635: jne 0x1103b6fb */
L_1103B63B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B63B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(ebx); /* 0x1103B63D: xchg dword ptr [ebx], eax */
      MEM32(ebx) = eax;
      eax = _tmp; }
    goto L_1103B6FB; /* 0x1103B63F: jmp 0x1103b6fb */
L_1103B644:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B644: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1103B6FE; /* 0x1103B646: jmp 0x1103b6fe */
L_1103B64B:
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1103B64B: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B6FB; /* 0x1103B64F: jne 0x1103b6fb */
L_1103B655:
    eax = MEM32(FS_BASE + (0x18)); /* 0x1103B655: mov eax, dword ptr fs:[0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103B65B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1103B65D: mov esi, edi */
    ebx = 0x11068E9Cu; /* 0x1103B65F: mov ebx, 0x11068e9c */
    edx = MEM32(eax + 0x4); /* 0x1103B664: mov edx, dword ptr [eax + 4] */
    goto L_1103B66D; /* 0x1103B667: jmp 0x1103b66d */
L_1103B669:
    /* cmp eax, edx */ /* 0x1103B669: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B67B; /* 0x1103B66B: je 0x1103b67b */
L_1103B66D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B66D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1103B66F: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1103B671: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1103B675: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B669; /* 0x1103B677: jne 0x1103b669 */
L_1103B679:
    goto L_1103B67E; /* 0x1103B679: jmp 0x1103b67e */
L_1103B67B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103B67B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103B67D: inc esi */
    _flag_k = FK_INC;
L_1103B67E:
    /* cmp MEM32(0x11068EA0), edi */ /* 0x1103B67E: cmp dword ptr [0x11068ea0], edi */
    _flag_a = (uint32_t)(MEM32(0x11068EA0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 2); /* 0x1103B684: push 2 */
    edi = POP32_VAL(esp); /* 0x1103B686: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B692; /* 0x1103B687: je 0x1103b692 */
L_1103B689:
    PUSH32(esp, 0x1Fu); /* 0x1103B689: push 0x1f */
    RECOMP_CALL(sub_1103BBC6); /* 0x1103B68B: call 0x1103bbc6 */
    RECOMP_FLAGS_IN();
    goto L_1103B6C7; /* 0x1103B690: jmp 0x1103b6c7 */
L_1103B692:
    PUSH32(esp, 0x110010FCu); /* 0x1103B692: push 0x110010fc */
    PUSH32(esp, 0x110010ECu); /* 0x1103B697: push 0x110010ec */
    MEM32(0x11068EA0) = 1; /* 0x1103B69C: mov dword ptr [0x11068ea0], 1 */
    RECOMP_CALL(sub_1103BE16); /* 0x1103B6A6: call 0x1103be16 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B6AB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103B6AC: pop ecx */
    /* test eax, eax */ /* 0x1103B6AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B644; /* 0x1103B6AF: jne 0x1103b644 */
L_1103B6B1:
    PUSH32(esp, 0x110010E8u); /* 0x1103B6B1: push 0x110010e8 */
    PUSH32(esp, 0x11001000u); /* 0x1103B6B6: push 0x11001000 */
    RECOMP_CALL(sub_1103BE10); /* 0x1103B6BB: call 0x1103be10 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B6C0: pop ecx */
    MEM32(0x11068EA0) = edi; /* 0x1103B6C1: mov dword ptr [0x11068ea0], edi */
L_1103B6C7:
    ecx = POP32_VAL(esp); /* 0x1103B6C7: pop ecx */
    /* test esi, esi */ /* 0x1103B6C8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B6D0; /* 0x1103B6CA: jne 0x1103b6d0 */
L_1103B6CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B6CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(ebx); /* 0x1103B6CE: xchg dword ptr [ebx], eax */
      MEM32(ebx) = eax;
      eax = _tmp; }
L_1103B6D0:
    /* cmp MEM32(0x11068EA4), 0 */ /* 0x1103B6D0: cmp dword ptr [0x11068ea4], 0 */
    _flag_a = (uint32_t)(MEM32(0x11068EA4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B6F5; /* 0x1103B6D7: je 0x1103b6f5 */
L_1103B6D9:
    PUSH32(esp, 0x11068EA4u); /* 0x1103B6D9: push 0x11068ea4 */
    RECOMP_CALL(sub_1103BC20); /* 0x1103B6DE: call 0x1103bc20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103B6E3: pop ecx */
    /* test eax, eax */ /* 0x1103B6E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B6F5; /* 0x1103B6E6: je 0x1103b6f5 */
L_1103B6E8:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B6E8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1103B6EB: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B6EC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11068EA4)); /* 0x1103B6EF: call dword ptr [0x11068ea4] */
    RECOMP_FLAGS_IN();
L_1103B6F5:
    _flag_a = (uint32_t)(MEM32(0x11068B3C)); _flag_b = (uint32_t)(1);
    MEM32(0x11068B3C) = MEM32(0x11068B3C) + 1; /* 0x1103B6F5: inc dword ptr [0x11068b3c] */
    _flag_k = FK_INC;
L_1103B6FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B6FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103B6FD: inc eax */
    _flag_k = FK_INC;
L_1103B6FE:
    edi = POP32_VAL(esp); /* 0x1103B6FE: pop edi */
    esi = POP32_VAL(esp); /* 0x1103B6FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103B700: pop ebx */
    esp = ebp; /* 0x1103B701: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103B703: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1103B704: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1103B707(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B707u);

L_1103B707:
    PUSH32(esp, ebp); /* 0x1103B707: push ebp */
    ebp = esp; /* 0x1103B708: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1103B70A: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B715; /* 0x1103B70E: jne 0x1103b715 */
L_1103B710:
    RECOMP_CALL(sub_1103BD11); /* 0x1103B710: call 0x1103bd11 */
    RECOMP_FLAGS_IN();
L_1103B715:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B715: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103B718: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B71B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B72A); /* 0x1103B71E: call 0x1103b72a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103B723: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1103B726: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1103B727: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1103B72A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B72Au);

L_1103B72A:
    PUSH32(esp, 0x10u); /* 0x1103B72A: push 0x10 */
    PUSH32(esp, 0x11045440u); /* 0x1103B72C: push 0x11045440 */
    RECOMP_CALL(sub_1103BA00); /* 0x1103B731: call 0x1103ba00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B736: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103B738: inc eax */
    _flag_k = FK_INC;
    esi = eax; /* 0x1103B739: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1103B73B: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103B73E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1103B740: mov dword ptr [ebp - 4], ebx */
    edi = MEM32(ebp + 0xC); /* 0x1103B743: mov edi, dword ptr [ebp + 0xc] */
    MEM32(0x110631E0) = edi; /* 0x1103B746: mov dword ptr [0x110631e0], edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1103B74C: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x1103B74F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B75F; /* 0x1103B751: jne 0x1103b75f */
L_1103B753:
    /* cmp MEM32(0x11068B3C), edi */ /* 0x1103B753: cmp dword ptr [0x11068b3c], edi */
    _flag_a = (uint32_t)(MEM32(0x11068B3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B833; /* 0x1103B759: je 0x1103b833 */
L_1103B75F:
    /* cmp edi, eax */ /* 0x1103B75F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B768; /* 0x1103B761: je 0x1103b768 */
L_1103B763:
    /* cmp edi, 2 */ /* 0x1103B763: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B7A0; /* 0x1103B766: jne 0x1103b7a0 */
L_1103B768:
    eax = MEM32(0x11003870); /* 0x1103B768: mov eax, dword ptr [0x11003870] */
    /* test eax, eax */ /* 0x1103B76D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B77F; /* 0x1103B76F: je 0x1103b77f */
L_1103B771:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B771: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1103B774: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B775: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1103B778: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103B77A: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1103B77C: mov dword ptr [ebp - 0x1c], esi */
L_1103B77F:
    /* test esi, esi */ /* 0x1103B77F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B838; /* 0x1103B781: je 0x1103b838 */
L_1103B787:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B787: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1103B78A: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B78B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B510); /* 0x1103B78E: call 0x1103b510 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103B793: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1103B795: mov dword ptr [ebp - 0x1c], esi */
    /* test esi, esi */ /* 0x1103B798: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B838; /* 0x1103B79A: je 0x1103b838 */
L_1103B7A0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B7A0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1103B7A3: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B7A4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103BDAD); /* 0x1103B7A7: call 0x1103bdad */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103B7AC: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1103B7AE: mov dword ptr [ebp - 0x1c], esi */
    /* cmp edi, 1 */ /* 0x1103B7B1: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B7E4; /* 0x1103B7B4: jne 0x1103b7e4 */
L_1103B7B6:
    /* test esi, esi */ /* 0x1103B7B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103B7E4; /* 0x1103B7B8: jne 0x1103b7e4 */
L_1103B7BA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B7BA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1103B7BD: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B7BE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103BDAD); /* 0x1103B7C1: call 0x1103bdad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B7C6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1103B7C9: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B7CA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B510); /* 0x1103B7CD: call 0x1103b510 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x11003870); /* 0x1103B7D2: mov eax, dword ptr [0x11003870] */
    /* test eax, eax */ /* 0x1103B7D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B7E4; /* 0x1103B7D9: je 0x1103b7e4 */
L_1103B7DB:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B7DB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1103B7DE: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B7DF: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1103B7E2: call eax */
    RECOMP_FLAGS_IN();
L_1103B7E4:
    /* test edi, edi */ /* 0x1103B7E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B7ED; /* 0x1103B7E6: je 0x1103b7ed */
L_1103B7E8:
    /* cmp edi, 3 */ /* 0x1103B7E8: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B838; /* 0x1103B7EB: jne 0x1103b838 */
L_1103B7ED:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B7ED: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1103B7F0: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B7F1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B510); /* 0x1103B7F4: call 0x1103b510 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1103B7F9: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1103B7FB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1103B7FD: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1103B7FF: mov dword ptr [ebp - 0x1c], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B838; /* 0x1103B802: je 0x1103b838 */
L_1103B804:
    eax = MEM32(0x11003870); /* 0x1103B804: mov eax, dword ptr [0x11003870] */
    /* test eax, eax */ /* 0x1103B809: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B838; /* 0x1103B80B: je 0x1103b838 */
L_1103B80D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103B80D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1103B810: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103B811: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1103B814: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103B816: mov esi, eax */
    goto L_1103B835; /* 0x1103B818: jmp 0x1103b835 */
L_1103B833:
    esi = ebx; /* 0x1103B833: mov esi, ebx */
L_1103B835:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1103B835: mov dword ptr [ebp - 0x1c], esi */
L_1103B838:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1103B838: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1103B83B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1103B852); /* 0x1103B842: call 0x1103b852 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1103B847: mov eax, esi */
    RECOMP_CALL(sub_1103BA45); /* 0x1103B849: call 0x1103ba45 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B84E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B852(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B852u);

L_1103B852:
    MEM32(0x110631E0) = 0xFFFFFFFFu; /* 0x1103B852: mov dword ptr [0x110631e0], 0xffffffff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B85C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103B85E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B85Eu);

L_1103B85E:
    { _itail_tgt = (uint32_t)(MEM32(0x1106924C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B864(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B864u);

L_1103B864:
    { _itail_tgt = (uint32_t)(MEM32(0x11069250)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B86A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B86Au);

L_1103B86A:
    { _itail_tgt = (uint32_t)(MEM32(0x11069264)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B870u);

L_1103B870:
    { _itail_tgt = (uint32_t)(MEM32(0x11069274)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B876(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B876u);

L_1103B876:
    { _itail_tgt = (uint32_t)(MEM32(0x11069284)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103B87C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103B87Cu);

L_1103B87C:
    PUSH32(esp, ebp); /* 0x1103B87C: push ebp */
    ebp = esp; /* 0x1103B87D: mov ebp, esp */
    _flag_a = (uint32_t)(MEM32(0x11068B40)); _flag_b = (uint32_t)(0);
    MEM32(0x11068B40) = MEM32(0x11068B40) & 0; /* 0x1103B87F: and dword ptr [0x11068b40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1103B886: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1103B889: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103B88A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1103B88C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(0x110631D8) | ebx)); _flag_b = (uint32_t)((MEM32(0x110631D8) | ebx));
    MEM32(0x110631D8) = MEM32(0x110631D8) | ebx; /* 0x1103B88D: or dword ptr [0x110631d8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xAu); /* 0x1103B893: push 0xa */
    RECOMP_CALL(sub_1103BE46); /* 0x1103B895: call 0x1103be46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1103B89A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B9EE; /* 0x1103B89C: je 0x1103b9ee */
L_1103B8A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103B8A2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x11068B40) = ebx; /* 0x1103B8A4: mov dword ptr [0x11068b40], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B8AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x1103B8AC: cpuid  */
    PUSH32(esp, esi); /* 0x1103B8AE: push esi */
    esi = MEM32(0x110631D8); /* 0x1103B8AF: mov esi, dword ptr [0x110631d8] */
    PUSH32(esp, edi); /* 0x1103B8B5: push edi */
    edi = ebp + (-0x1C); /* 0x1103B8B6: lea edi, [ebp - 0x1c] */
    _flag_a = (uint32_t)((esi | 2)); _flag_b = (uint32_t)((esi | 2));
    esi = esi | 2; /* 0x1103B8B9: or esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x1103B8BC: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = ebx; /* 0x1103B8BE: mov dword ptr [edi + 4], ebx */
    MEM32(edi + 0x8) = ecx; /* 0x1103B8C1: mov dword ptr [edi + 8], ecx */
    MEM32(edi + 0xC) = edx; /* 0x1103B8C4: mov dword ptr [edi + 0xc], edx */
    eax = MEM32(ebp + (-0x1C)); /* 0x1103B8C7: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1103B8CA: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1103B8CD: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)((ecx ^ 0x49656E69u)); _flag_b = (uint32_t)((ecx ^ 0x49656E69u));
    ecx = ecx ^ 0x49656E69u; /* 0x1103B8D0: xor ecx, 0x49656e69 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x14)); /* 0x1103B8D6: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((eax ^ 0x6C65746Eu)); _flag_b = (uint32_t)((eax ^ 0x6C65746Eu));
    eax = eax ^ 0x6C65746Eu; /* 0x1103B8D9: xor eax, 0x6c65746e */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x110631D8) = esi; /* 0x1103B8DE: mov dword ptr [0x110631d8], esi */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1103B8E4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x18)); /* 0x1103B8E6: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((eax ^ 0x756E6547u)); _flag_b = (uint32_t)((eax ^ 0x756E6547u));
    eax = eax ^ 0x756E6547u; /* 0x1103B8E9: xor eax, 0x756e6547 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1103B8EE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1103B8F0: neg ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x1103B8F2: push 1 */
    { uint32_t _sa = LO8(ecx), _sb = LO8(ecx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1103B8F4: sbb cl, cl */
      SET_LO8(ecx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = POP32_VAL(esp); /* 0x1103B8F6: pop eax */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x1103B8F7: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    PUSH32(esp, 0); /* 0x1103B8F9: push 0 */
    ecx = POP32_VAL(esp); /* 0x1103B8FB: pop ecx */
    CPUID(eax, ebx, ecx, edx); /* 0x1103B8FC: cpuid  */
    MEM32(edi) = eax; /* 0x1103B8FE: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = ebx; /* 0x1103B900: mov dword ptr [edi + 4], ebx */
    MEM32(edi + 0x8) = ecx; /* 0x1103B903: mov dword ptr [edi + 8], ecx */
    MEM32(edi + 0xC) = edx; /* 0x1103B906: mov dword ptr [edi + 0xc], edx */
    ecx = MEM32(ebp + (-0x14)); /* 0x1103B909: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1103B90C: mov dword ptr [ebp - 8], ecx */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1103B954; /* 0x1103B90F: je 0x1103b954 */
L_1103B911:
    eax = MEM32(ebp + (-0x1C)); /* 0x1103B911: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFF3FF0u);
    eax = eax & 0x0FFF3FF0u; /* 0x1103B914: and eax, 0xfff3ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x000106C0u */ /* 0x1103B919: cmp eax, 0x106c0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000106C0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B943; /* 0x1103B91E: je 0x1103b943 */
L_1103B920:
    /* cmp eax, 0x00020660u */ /* 0x1103B920: cmp eax, 0x20660 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020660u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B943; /* 0x1103B925: je 0x1103b943 */
L_1103B927:
    /* cmp eax, 0x00020670u */ /* 0x1103B927: cmp eax, 0x20670 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020670u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B943; /* 0x1103B92C: je 0x1103b943 */
L_1103B92E:
    /* cmp eax, 0x00030650u */ /* 0x1103B92E: cmp eax, 0x30650 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00030650u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B943; /* 0x1103B933: je 0x1103b943 */
L_1103B935:
    /* cmp eax, 0x00030660u */ /* 0x1103B935: cmp eax, 0x30660 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00030660u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103B943; /* 0x1103B93A: je 0x1103b943 */
L_1103B93C:
    /* cmp eax, 0x00030670u */ /* 0x1103B93C: cmp eax, 0x30670 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00030670u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103B954; /* 0x1103B941: jne 0x1103b954 */
L_1103B943:
    edi = MEM32(0x11068B44); /* 0x1103B943: mov edi, dword ptr [0x11068b44] */
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x1103B949: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x11068B44) = edi; /* 0x1103B94C: mov dword ptr [0x11068b44], edi */
    goto L_1103B95A; /* 0x1103B952: jmp 0x1103b95a */
L_1103B954:
    edi = MEM32(0x11068B44); /* 0x1103B954: mov edi, dword ptr [0x11068b44] */
L_1103B95A:
    /* cmp MEM32(ebp + (-0xC)), 7 */ /* 0x1103B95A: cmp dword ptr [ebp - 0xc], 7 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1103B995; /* 0x1103B95E: jl 0x1103b995 */
L_1103B960:
    PUSH32(esp, 7); /* 0x1103B960: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103B962: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x1C); /* 0x1103B964: lea esi, [ebp - 0x1c] */
    eax = POP32_VAL(esp); /* 0x1103B967: pop eax */
    CPUID(eax, ebx, ecx, edx); /* 0x1103B968: cpuid  */
    MEM32(esi) = eax; /* 0x1103B96A: mov dword ptr [esi], eax */
    eax = esi; /* 0x1103B96C: mov eax, esi */
    esi = MEM32(0x110631D8); /* 0x1103B96E: mov esi, dword ptr [0x110631d8] */
    MEM32(eax + 0x4) = ebx; /* 0x1103B974: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ecx; /* 0x1103B977: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1103B97A: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0xC) = edx; /* 0x1103B97D: mov dword ptr [eax + 0xc], edx */
    eax = MEM32(ebp + (-0x18)); /* 0x1103B980: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, 0x200u */ /* 0x1103B983: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B997; /* 0x1103B988: je 0x1103b997 */
L_1103B98A:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x1103B98A: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x11068B44) = edi; /* 0x1103B98D: mov dword ptr [0x11068b44], edi */
    goto L_1103B997; /* 0x1103B993: jmp 0x1103b997 */
L_1103B995:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B995: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103B997:
    /* test ecx, 0x00100000u */ /* 0x1103B997: test ecx, 0x100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00100000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B9EC; /* 0x1103B99D: je 0x1103b9ec */
L_1103B99F:
    _flag_a = (uint32_t)((esi | 4)); _flag_b = (uint32_t)((esi | 4));
    esi = esi | 4; /* 0x1103B99F: or esi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x11068B40) = 2; /* 0x1103B9A2: mov dword ptr [0x11068b40], 2 */
    MEM32(0x110631D8) = esi; /* 0x1103B9AC: mov dword ptr [0x110631d8], esi */
    /* test ecx, 0x08000000u */ /* 0x1103B9B2: test ecx, 0x8000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x08000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B9EC; /* 0x1103B9B8: je 0x1103b9ec */
L_1103B9BA:
    /* test ecx, 0x10000000u */ /* 0x1103B9BA: test ecx, 0x10000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B9EC; /* 0x1103B9C0: je 0x1103b9ec */
L_1103B9C2:
    _flag_a = (uint32_t)((esi | 8)); _flag_b = (uint32_t)((esi | 8));
    esi = esi | 8; /* 0x1103B9C2: or esi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x11068B40) = 3; /* 0x1103B9C5: mov dword ptr [0x11068b40], 3 */
    MEM32(0x110631D8) = esi; /* 0x1103B9CF: mov dword ptr [0x110631d8], esi */
    /* test LO8(eax), 0x20u */ /* 0x1103B9D5: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103B9EC; /* 0x1103B9D7: je 0x1103b9ec */
L_1103B9D9:
    _flag_a = (uint32_t)((esi | 0x20u)); _flag_b = (uint32_t)((esi | 0x20u));
    esi = esi | 0x20u; /* 0x1103B9D9: or esi, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x11068B40) = 5; /* 0x1103B9DC: mov dword ptr [0x11068b40], 5 */
    MEM32(0x110631D8) = esi; /* 0x1103B9E6: mov dword ptr [0x110631d8], esi */
L_1103B9EC:
    edi = POP32_VAL(esp); /* 0x1103B9EC: pop edi */
    esi = POP32_VAL(esp); /* 0x1103B9ED: pop esi */
L_1103B9EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103B9EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1103B9F0: pop ebx */
    esp = ebp; /* 0x1103B9F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103B9F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103B9F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BA00u);

L_1103BA00:
    PUSH32(esp, 0x1103BA59u); /* 0x1103BA00: push 0x1103ba59 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x1103BA05: push dword ptr fs:[0] */
    eax = MEM32(esp + 0x10); /* 0x1103BA0C: mov eax, dword ptr [esp + 0x10] */
    MEM32(esp + 0x10) = ebp; /* 0x1103BA10: mov dword ptr [esp + 0x10], ebp */
    ebp = esp + 0x10; /* 0x1103BA14: lea ebp, [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - eax; /* 0x1103BA18: sub esp, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1103BA1A: push ebx */
    PUSH32(esp, esi); /* 0x1103BA1B: push esi */
    PUSH32(esp, edi); /* 0x1103BA1C: push edi */
    eax = MEM32(0x110631D0); /* 0x1103BA1D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x1103BA22: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1103BA25: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1103BA27: push eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x1103BA28: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1103BA2B: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x1103BA2E: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1103BA31: mov dword ptr [ebp - 4], 0xfffffffe */
    MEM32(ebp + (-0x8)) = eax; /* 0x1103BA38: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x1103BA3B: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1103BA3E: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BA44: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BA45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BA45u);

L_1103BA45:
    ecx = MEM32(ebp + (-0x10)); /* 0x1103BA45: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1103BA48: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1103BA4F: pop ecx */
    edi = POP32_VAL(esp); /* 0x1103BA50: pop edi */
    edi = POP32_VAL(esp); /* 0x1103BA51: pop edi */
    esi = POP32_VAL(esp); /* 0x1103BA52: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103BA53: pop ebx */
    esp = ebp; /* 0x1103BA54: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103BA56: pop ebp */
    PUSH32(esp, ecx); /* 0x1103BA57: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BA58: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BA59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BA59u);

L_1103BA59:
    PUSH32(esp, ebp); /* 0x1103BA59: push ebp */
    ebp = esp; /* 0x1103BA5A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1103BA5C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103BA5F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103BA62: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103BA65: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1103B32Au); /* 0x1103BA68: push 0x1103b32a */
    PUSH32(esp, 0x110631D0u); /* 0x1103BA6D: push 0x110631d0 */
    RECOMP_CALL(sub_1103BE28); /* 0x1103BA72: call 0x1103be28 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1103BA77: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1103BA7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BA7B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BA7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BA7Cu);

L_1103BA7C:
    { _itail_tgt = (uint32_t)(MEM32(0x11069288)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BA82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BA82u);

L_1103BA82:
    PUSH32(esp, ebp); /* 0x1103BA82: push ebp */
    ebp = esp; /* 0x1103BA83: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x11069008)); /* 0x1103BA85: call dword ptr [0x11069008] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1103BA8B: push 1 */
    MEM32(0x11068E64) = eax; /* 0x1103BA8D: mov dword ptr [0x11068e64], eax */
    RECOMP_CALL(sub_1103BE2E); /* 0x1103BA92: call 0x1103be2e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103BA97: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103BE34); /* 0x1103BA9A: call 0x1103be34 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x11068E64), 0 */ /* 0x1103BA9F: cmp dword ptr [0x11068e64], 0 */
    _flag_a = (uint32_t)(MEM32(0x11068E64)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1103BAA6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103BAA7: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103BAB2; /* 0x1103BAA8: jne 0x1103bab2 */
L_1103BAAA:
    PUSH32(esp, 1); /* 0x1103BAAA: push 1 */
    RECOMP_CALL(sub_1103BE2E); /* 0x1103BAAC: call 0x1103be2e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103BAB1: pop ecx */
L_1103BAB2:
    PUSH32(esp, 0xC0000409u); /* 0x1103BAB2: push 0xc0000409 */
    RECOMP_CALL(sub_1103BE3A); /* 0x1103BAB7: call 0x1103be3a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103BABC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1103BABD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BABE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BABF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BABFu);

L_1103BABF:
    PUSH32(esp, ebp); /* 0x1103BABF: push ebp */
    ebp = esp; /* 0x1103BAC0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x324u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x324u; /* 0x1103BAC2: sub esp, 0x324 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x17u); /* 0x1103BAC8: push 0x17 */
    RECOMP_CALL(sub_1103BE46); /* 0x1103BACA: call 0x1103be46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1103BACF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103BAD8; /* 0x1103BAD1: je 0x1103bad8 */
L_1103BAD3:
    PUSH32(esp, 2); /* 0x1103BAD3: push 2 */
    ecx = POP32_VAL(esp); /* 0x1103BAD5: pop ecx */
    void_lift_trap(0x1103BAD6u, "int 0x29");
L_1103BAD8:
    MEM32(0x11068C48) = eax; /* 0x1103BAD8: mov dword ptr [0x11068c48], eax */
    MEM32(0x11068C44) = ecx; /* 0x1103BADD: mov dword ptr [0x11068c44], ecx */
    MEM32(0x11068C40) = edx; /* 0x1103BAE3: mov dword ptr [0x11068c40], edx */
    MEM32(0x11068C3C) = ebx; /* 0x1103BAE9: mov dword ptr [0x11068c3c], ebx */
    MEM32(0x11068C38) = esi; /* 0x1103BAEF: mov dword ptr [0x11068c38], esi */
    MEM32(0x11068C34) = edi; /* 0x1103BAF5: mov dword ptr [0x11068c34], edi */
    MEM16(0x11068C60) = (uint16_t)(_seg_ss); /* 0x1103BAFB: mov word ptr [0x11068c60], ss */
    MEM16(0x11068C54) = (uint16_t)(_seg_cs); /* 0x1103BB02: mov word ptr [0x11068c54], cs */
    MEM16(0x11068C30) = (uint16_t)(_seg_ds); /* 0x1103BB09: mov word ptr [0x11068c30], ds */
    MEM16(0x11068C2C) = (uint16_t)(_seg_es); /* 0x1103BB10: mov word ptr [0x11068c2c], es */
    MEM16(0x11068C28) = (uint16_t)(_seg_fs); /* 0x1103BB17: mov word ptr [0x11068c28], fs */
    MEM16(0x11068C24) = (uint16_t)(_seg_gs); /* 0x1103BB1E: mov word ptr [0x11068c24], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x1103BB25: pushfd  */
    POP32(esp, MEM32(0x11068C58)); /* 0x1103BB26: pop dword ptr [0x11068c58] */
    eax = MEM32(ebp); /* 0x1103BB2C: mov eax, dword ptr [ebp] */
    MEM32(0x11068C4C) = eax; /* 0x1103BB2F: mov dword ptr [0x11068c4c], eax */
    eax = MEM32(ebp + 0x4); /* 0x1103BB34: mov eax, dword ptr [ebp + 4] */
    MEM32(0x11068C50) = eax; /* 0x1103BB37: mov dword ptr [0x11068c50], eax */
    eax = ebp + 0x8; /* 0x1103BB3C: lea eax, [ebp + 8] */
    MEM32(0x11068C5C) = eax; /* 0x1103BB3F: mov dword ptr [0x11068c5c], eax */
    eax = MEM32(ebp + (-0x324)); /* 0x1103BB44: mov eax, dword ptr [ebp - 0x324] */
    MEM32(0x11068B98) = 0x00010001u; /* 0x1103BB4A: mov dword ptr [0x11068b98], 0x10001 */
    eax = MEM32(0x11068C50); /* 0x1103BB54: mov eax, dword ptr [0x11068c50] */
    MEM32(0x11068B54) = eax; /* 0x1103BB59: mov dword ptr [0x11068b54], eax */
    MEM32(0x11068B48) = 0xC0000409u; /* 0x1103BB5E: mov dword ptr [0x11068b48], 0xc0000409 */
    MEM32(0x11068B4C) = 1; /* 0x1103BB68: mov dword ptr [0x11068b4c], 1 */
    MEM32(0x11068B58) = 1; /* 0x1103BB72: mov dword ptr [0x11068b58], 1 */
    PUSH32(esp, 4); /* 0x1103BB7C: push 4 */
    eax = POP32_VAL(esp); /* 0x1103BB7E: pop eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0); /* 0x1103BB7F: imul eax, eax, 0 */
    MEM32(eax + 0x11068B5C) = 2; /* 0x1103BB82: mov dword ptr [eax + 0x11068b5c], 2 */
    PUSH32(esp, 4); /* 0x1103BB8C: push 4 */
    eax = POP32_VAL(esp); /* 0x1103BB8E: pop eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0); /* 0x1103BB8F: imul eax, eax, 0 */
    ecx = MEM32(0x110631D0); /* 0x1103BB92: mov ecx, dword ptr [0x110631d0] */
    MEM32(ebp + eax + (-0x8)) = ecx; /* 0x1103BB98: mov dword ptr [ebp + eax - 8], ecx */
    PUSH32(esp, 4); /* 0x1103BB9C: push 4 */
    eax = POP32_VAL(esp); /* 0x1103BB9E: pop eax */
    if (0u) _cf = _cf; /* 0x1103BB9F: shl eax, 0 */
    if (0u) { _flag_a = recomp_flags_pack((eax << 0u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 0u; /* 0x1103BB9F: shl eax, 0 */
    ecx = MEM32(0x110631D4); /* 0x1103BBA2: mov ecx, dword ptr [0x110631d4] */
    MEM32(ebp + eax + (-0x8)) = ecx; /* 0x1103BBA8: mov dword ptr [ebp + eax - 8], ecx */
    PUSH32(esp, 0x11003874u); /* 0x1103BBAC: push 0x11003874 */
    RECOMP_CALL(sub_1103BA82); /* 0x1103BBB1: call 0x1103ba82 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1103BBB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103BBB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BBB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BBC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BBC6u);

L_1103BBC6:
    { _itail_tgt = (uint32_t)(MEM32(0x11069298)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BBD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BBD0u);

L_1103BBD0:
    PUSH32(esp, ebp); /* 0x1103BBD0: push ebp */
    ebp = esp; /* 0x1103BBD1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1103BBD3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1103BBD6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1103BBD8: push ebx */
    PUSH32(esp, esi); /* 0x1103BBD9: push esi */
    PUSH32(esp, edi); /* 0x1103BBDA: push edi */
    ecx = MEM32(eax + 0x3C); /* 0x1103BBDB: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1103BBDE: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx + 0x14); /* 0x1103BBE0: movzx eax, word ptr [ecx + 0x14] */
    ebx = (uint32_t)MEM16(ecx + 0x6); /* 0x1103BBE4: movzx ebx, word ptr [ecx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1103BBE8: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1103BBEB: add eax, ecx */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1103BBED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103BC0C; /* 0x1103BBEF: je 0x1103bc0c */
L_1103BBF1:
    edi = MEM32(ebp + 0xC); /* 0x1103BBF1: mov edi, dword ptr [ebp + 0xc] */
L_1103BBF4:
    esi = MEM32(eax + 0xC); /* 0x1103BBF4: mov esi, dword ptr [eax + 0xc] */
    /* cmp edi, esi */ /* 0x1103BBF7: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1103BC04; /* 0x1103BBF9: jb 0x1103bc04 */
L_1103BBFB:
    ecx = MEM32(eax + 0x8); /* 0x1103BBFB: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1103BBFE: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp edi, ecx */ /* 0x1103BC00: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1103BC0E; /* 0x1103BC02: jb 0x1103bc0e */
L_1103BC04:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1103BC04: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x1103BC05: add eax, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edx, ebx */ /* 0x1103BC08: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1103BBF4; /* 0x1103BC0A: jb 0x1103bbf4 */
L_1103BC0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103BC0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103BC0E:
    edi = POP32_VAL(esp); /* 0x1103BC0E: pop edi */
    esi = POP32_VAL(esp); /* 0x1103BC0F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103BC10: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1103BC11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BC12: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BC20u);

L_1103BC20:
    PUSH32(esp, ebp); /* 0x1103BC20: push ebp */
    ebp = esp; /* 0x1103BC21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1103BC23: push -2 */
    PUSH32(esp, 0x11045468u); /* 0x1103BC25: push 0x11045468 */
    PUSH32(esp, 0x1103BA59u); /* 0x1103BC2A: push 0x1103ba59 */
    eax = MEM32(FS_BASE + (0)); /* 0x1103BC2F: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1103BC35: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1103BC36: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1103BC39: push ebx */
    PUSH32(esp, esi); /* 0x1103BC3A: push esi */
    PUSH32(esp, edi); /* 0x1103BC3B: push edi */
    eax = MEM32(0x110631D0); /* 0x1103BC3C: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) ^ eax; /* 0x1103BC41: xor dword ptr [ebp - 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1103BC44: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1103BC46: push eax */
    eax = ebp + (-0x10); /* 0x1103BC47: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1103BC4A: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x1103BC50: mov dword ptr [ebp - 0x18], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x1103BC53: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, 0x11000000u); /* 0x1103BC5A: push 0x11000000 */
    RECOMP_CALL(sub_1103BCE0); /* 0x1103BC5F: call 0x1103bce0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1103BC64: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103BC67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103BCBF; /* 0x1103BC69: je 0x1103bcbf */
L_1103BC6B:
    eax = MEM32(ebp + 0x8); /* 0x1103BC6B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x11000000u; /* 0x1103BC6E: sub eax, 0x11000000 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1103BC73: push eax */
    PUSH32(esp, 0x11000000u); /* 0x1103BC74: push 0x11000000 */
    RECOMP_CALL(sub_1103BBD0); /* 0x1103BC79: call 0x1103bbd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1103BC7E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103BC81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103BCBF; /* 0x1103BC83: je 0x1103bcbf */
L_1103BC85:
    eax = MEM32(eax + 0x24); /* 0x1103BC85: mov eax, dword ptr [eax + 0x24] */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1103BC88: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1103BC88: shr eax, 0x1f */
    eax = ~eax; /* 0x1103BC8B: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1103BC8D: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1103BC90: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x1103BC97: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1103BC9A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1103BCA1: pop ecx */
    edi = POP32_VAL(esp); /* 0x1103BCA2: pop edi */
    esi = POP32_VAL(esp); /* 0x1103BCA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103BCA4: pop ebx */
    esp = ebp; /* 0x1103BCA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103BCA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BCA8: ret  */
L_1103BCBF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1103BCBF: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103BCC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x1103BCC8: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1103BCCB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1103BCD2: pop ecx */
    edi = POP32_VAL(esp); /* 0x1103BCD3: pop edi */
    esi = POP32_VAL(esp); /* 0x1103BCD4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103BCD5: pop ebx */
    esp = ebp; /* 0x1103BCD6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103BCD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BCD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BCE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BCE0u);

L_1103BCE0:
    PUSH32(esp, ebp); /* 0x1103BCE0: push ebp */
    ebp = esp; /* 0x1103BCE1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1103BCE3: mov eax, dword ptr [ebp + 8] */
    ecx = 0x5A4Du; /* 0x1103BCE6: mov ecx, 0x5a4d */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x1103BCEB: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103BCF4; /* 0x1103BCEE: je 0x1103bcf4 */
L_1103BCF0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103BCF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1103BCF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BCF3: ret  */
L_1103BCF4:
    ecx = MEM32(eax + 0x3C); /* 0x1103BCF4: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1103BCF7: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103BCF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), 0x4550u */ /* 0x1103BCFB: cmp dword ptr [ecx], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103BD0F; /* 0x1103BD01: jne 0x1103bd0f */
L_1103BD03:
    edx = 0x10Bu; /* 0x1103BD03: mov edx, 0x10b */
    /* cmp MEM16(ecx + 0x18), LO16(edx) */ /* 0x1103BD08: cmp word ptr [ecx + 0x18], dx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x18)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1103BD0C: sete al */
L_1103BD0F:
    ebp = POP32_VAL(esp); /* 0x1103BD0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BD10: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BD11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BD11u);

L_1103BD11:
    PUSH32(esp, ebp); /* 0x1103BD11: push ebp */
    ebp = esp; /* 0x1103BD12: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1103BD14: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1103BD17: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1103BD1B: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x110631D0); /* 0x1103BD1F: mov eax, dword ptr [0x110631d0] */
    PUSH32(esp, esi); /* 0x1103BD24: push esi */
    PUSH32(esp, edi); /* 0x1103BD25: push edi */
    edi = 0xBB40E64Eu; /* 0x1103BD26: mov edi, 0xbb40e64e */
    esi = 0xFFFF0000u; /* 0x1103BD2B: mov esi, 0xffff0000 */
    /* cmp eax, edi */ /* 0x1103BD30: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103BD41; /* 0x1103BD32: je 0x1103bd41 */
L_1103BD34:
    /* test esi, eax */ /* 0x1103BD34: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103BD41; /* 0x1103BD36: je 0x1103bd41 */
L_1103BD38:
    eax = ~eax; /* 0x1103BD38: not eax */
    MEM32(0x110631D4) = eax; /* 0x1103BD3A: mov dword ptr [0x110631d4], eax */
    goto L_1103BDA7; /* 0x1103BD3F: jmp 0x1103bda7 */
L_1103BD41:
    eax = ebp + (-0xC); /* 0x1103BD41: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1103BD44: push eax */
    RECOMP_ICALL(MEM32(0x11069014)); /* 0x1103BD45: call dword ptr [0x11069014] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1103BD4B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0xC)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0xC))));
    eax = eax ^ MEM32(ebp + (-0xC)); /* 0x1103BD4E: xor eax, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1103BD51: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(MEM32(0x1106901C)); /* 0x1103BD54: call dword ptr [0x1106901c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x1103BD5A: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x11069000)); /* 0x1103BD5D: call dword ptr [0x11069000] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x1103BD63: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x14); /* 0x1103BD66: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1103BD69: push eax */
    RECOMP_ICALL(MEM32(0x11069004)); /* 0x1103BD6A: call dword ptr [0x11069004] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1103BD70: mov ecx, dword ptr [ebp - 0x10] */
    eax = ebp + (-0x4); /* 0x1103BD73: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ MEM32(ebp + (-0x14)))); _flag_b = (uint32_t)((ecx ^ MEM32(ebp + (-0x14))));
    ecx = ecx ^ MEM32(ebp + (-0x14)); /* 0x1103BD76: xor ecx, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((ecx ^ MEM32(ebp + (-0x4))));
    ecx = ecx ^ MEM32(ebp + (-0x4)); /* 0x1103BD79: xor ecx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BD7C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x1103BD7E: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103BD89; /* 0x1103BD80: jne 0x1103bd89 */
L_1103BD82:
    ecx = 0xBB40E64Fu; /* 0x1103BD82: mov ecx, 0xbb40e64f */
    goto L_1103BD99; /* 0x1103BD87: jmp 0x1103bd99 */
L_1103BD89:
    /* test esi, ecx */ /* 0x1103BD89: test esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103BD99; /* 0x1103BD8B: jne 0x1103bd99 */
L_1103BD8D:
    eax = ecx; /* 0x1103BD8D: mov eax, ecx */
    _flag_a = (uint32_t)((eax | 0x4711u)); _flag_b = (uint32_t)((eax | 0x4711u));
    eax = eax | 0x4711u; /* 0x1103BD8F: or eax, 0x4711 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x1103BD94: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x1103BD94: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1103BD97: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103BD99:
    MEM32(0x110631D0) = ecx; /* 0x1103BD99: mov dword ptr [0x110631d0], ecx */
    ecx = ~ecx; /* 0x1103BD9F: not ecx */
    MEM32(0x110631D4) = ecx; /* 0x1103BDA1: mov dword ptr [0x110631d4], ecx */
L_1103BDA7:
    edi = POP32_VAL(esp); /* 0x1103BDA7: pop edi */
    esi = POP32_VAL(esp); /* 0x1103BDA8: pop esi */
    esp = ebp; /* 0x1103BDA9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103BDAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BDAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BDAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BDADu);

L_1103BDAD:
    PUSH32(esp, ebp); /* 0x1103BDAD: push ebp */
    ebp = esp; /* 0x1103BDAE: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1103BDB0: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103BDC8; /* 0x1103BDB4: jne 0x1103bdc8 */
L_1103BDB6:
    /* cmp MEM32(0x11003870), 0 */ /* 0x1103BDB6: cmp dword ptr [0x11003870], 0 */
    _flag_a = (uint32_t)(MEM32(0x11003870)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103BDC8; /* 0x1103BDBD: jne 0x1103bdc8 */
L_1103BDBF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103BDBF: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106907C)); /* 0x1103BDC2: call dword ptr [0x1106907c] */
    RECOMP_FLAGS_IN();
L_1103BDC8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103BDC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103BDCA: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1103BDCB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1103BDCC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1103BDCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BDCFu);

L_1103BDCF:
    PUSH32(esp, esi); /* 0x1103BDCF: push esi */
    PUSH32(esp, edi); /* 0x1103BDD0: push edi */
    esi = 0x11008210u; /* 0x1103BDD1: mov esi, 0x11008210 */
    edi = 0x11008210u; /* 0x1103BDD6: mov edi, 0x11008210 */
    goto L_1103BDE8; /* 0x1103BDDB: jmp 0x1103bde8 */
L_1103BDDD:
    eax = MEM32(esi); /* 0x1103BDDD: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1103BDDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103BDE5; /* 0x1103BDE1: je 0x1103bde5 */
L_1103BDE3:
    RECOMP_ICALL(eax); /* 0x1103BDE3: call eax */
    RECOMP_FLAGS_IN();
L_1103BDE5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1103BDE5: add esi, 4 */
    _flag_k = FK_ADD;
L_1103BDE8:
    /* cmp esi, edi */ /* 0x1103BDE8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1103BDDD; /* 0x1103BDEA: jb 0x1103bddd */
L_1103BDEC:
    edi = POP32_VAL(esp); /* 0x1103BDEC: pop edi */
    esi = POP32_VAL(esp); /* 0x1103BDED: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BDEE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BDEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BDEFu);

L_1103BDEF:
    PUSH32(esp, esi); /* 0x1103BDEF: push esi */
    PUSH32(esp, edi); /* 0x1103BDF0: push edi */
    esi = 0x11008218u; /* 0x1103BDF1: mov esi, 0x11008218 */
    edi = 0x11008218u; /* 0x1103BDF6: mov edi, 0x11008218 */
    goto L_1103BE08; /* 0x1103BDFB: jmp 0x1103be08 */
L_1103BDFD:
    eax = MEM32(esi); /* 0x1103BDFD: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1103BDFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103BE05; /* 0x1103BE01: je 0x1103be05 */
L_1103BE03:
    RECOMP_ICALL(eax); /* 0x1103BE03: call eax */
    RECOMP_FLAGS_IN();
L_1103BE05:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1103BE05: add esi, 4 */
    _flag_k = FK_ADD;
L_1103BE08:
    /* cmp esi, edi */ /* 0x1103BE08: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1103BDFD; /* 0x1103BE0A: jb 0x1103bdfd */
L_1103BE0C:
    edi = POP32_VAL(esp); /* 0x1103BE0C: pop edi */
    esi = POP32_VAL(esp); /* 0x1103BE0D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BE0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE10u);

L_1103BE10:
    { _itail_tgt = (uint32_t)(MEM32(0x1106929C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BE16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE16u);

L_1103BE16:
    { _itail_tgt = (uint32_t)(MEM32(0x110692A0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BE1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE1Cu);

L_1103BE1C:
    PUSH32(esp, 0x11068E68u); /* 0x1103BE1C: push 0x11068e68 */
    RECOMP_CALL(sub_1103BE40); /* 0x1103BE21: call 0x1103be40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103BE26: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103BE27: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103BE28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE28u);

L_1103BE28:
    { _itail_tgt = (uint32_t)(MEM32(0x110692A4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BE2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE2Eu);

L_1103BE2E:
    { _itail_tgt = (uint32_t)(MEM32(0x110692A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BE34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE34u);

L_1103BE34:
    { _itail_tgt = (uint32_t)(MEM32(0x110692AC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BE3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE3Au);

L_1103BE3A:
    { _itail_tgt = (uint32_t)(MEM32(0x110692B0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
