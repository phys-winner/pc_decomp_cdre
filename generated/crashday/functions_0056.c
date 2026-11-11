#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_006F2D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2D10u);

L_006F2D10:
    PUSH32(esp, ebx); /* 0x006F2D10: push ebx */
    ebx = ecx; /* 0x006F2D11: mov ebx, ecx */
    edx = ebx; /* 0x006F2D13: mov edx, ebx */
    PUSH32(esp, esi); /* 0x006F2D15: push esi */
    PUSH32(esp, edi); /* 0x006F2D16: push edi */
    ecx = edx + 0x1; /* 0x006F2D17: lea ecx, [edx + 1] */
    ebx = ebx; /* 0x006F2D1A: lea ebx, [ebx] */
L_006F2D20:
    SET_LO8(eax, MEM8(edx)); /* 0x006F2D20: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006F2D22: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2D23: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2D20; /* 0x006F2D25: jne 0x6f2d20 */
L_006F2D27:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x006F2D27: sub edx, ecx */
    _flag_k = FK_CMP;
    esi = edx + 0x1; /* 0x006F2D29: lea esi, [edx + 1] */
    PUSH32(esp, esi); /* 0x006F2D2C: push esi */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F2D2D: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F2D33: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2D35: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F2D38: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2D63; /* 0x006F2D3A: je 0x6f2d63 */
L_006F2D3C:
    ecx = ebx; /* 0x006F2D3C: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x006F2D3E: lea edx, [ecx + 1] */
L_006F2D41:
    SET_LO8(eax, MEM8(ecx)); /* 0x006F2D41: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F2D43: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2D44: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2D41; /* 0x006F2D46: jne 0x6f2d41 */
L_006F2D48:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006F2D48: sub ecx, edx */
    _flag_k = FK_CMP;
    /* test esi, esi */ /* 0x006F2D4A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2D63; /* 0x006F2D4C: je 0x6f2d63 */
L_006F2D4E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F2D4E: dec esi */
    _flag_k = FK_DEC;
    /* cmp ecx, esi */ /* 0x006F2D4F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006F2D51: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006F2D54: push esi */
    PUSH32(esp, ebx); /* 0x006F2D55: push ebx */
    PUSH32(esp, edi); /* 0x006F2D56: push edi */
    RECOMP_CALL(sub_00780838); /* 0x006F2D57: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2D5C: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + edi) = (uint8_t)(0); /* 0x006F2D5F: mov byte ptr [esi + edi], 0 */
L_006F2D63:
    eax = edi; /* 0x006F2D63: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F2D65: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2D66: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2D67: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2D68: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2D70u);

L_006F2D70:
    PUSH32(esp, ebp); /* 0x006F2D70: push ebp */
    ebp = esp; /* 0x006F2D71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F2D73: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F2D76: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x006F2D77: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006F2D7A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F2D7B: mov esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x006F2D7E: mov eax, esi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x006F2D80: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x006F2D82: push edi */
    edi = ecx; /* 0x006F2D83: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x006F2D85: mov dword ptr [ebp - 0x10], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2DD4; /* 0x006F2D88: je 0x6f2dd4 */
L_006F2D8A:
    /* test ebx, ebx */ /* 0x006F2D8A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2D92; /* 0x006F2D8C: jne 0x6f2d92 */
L_006F2D8E:
    /* test esi, esi */ /* 0x006F2D8E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2DDA; /* 0x006F2D90: je 0x6f2dda */
L_006F2D92:
    eax = edx; /* 0x006F2D92: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F2D94: cdq  */
    ecx = eax; /* 0x006F2D95: mov ecx, eax */
    eax = edx; /* 0x006F2D97: mov eax, edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006F2D99: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0xC) = eax; /* 0x006F2D9C: mov dword ptr [ebp + 0xc], eax */
    /* nop */ /* 0x006F2D9F: nop  */
L_006F2DA0:
    PUSH32(esp, eax); /* 0x006F2DA0: push eax */
    PUSH32(esp, ecx); /* 0x006F2DA1: push ecx */
    PUSH32(esp, ebx); /* 0x006F2DA2: push ebx */
    PUSH32(esp, esi); /* 0x006F2DA3: push esi */
    RECOMP_CALL(sub_007802C0); /* 0x006F2DA4: call 0x7802c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x006F2DA9: mov dword ptr [ebp - 4], ebx */
    esi = eax; /* 0x006F2DAC: mov esi, eax */
    eax = MEM32(ebp + 0xC); /* 0x006F2DAE: mov eax, dword ptr [ebp + 0xc] */
    ebx = edx; /* 0x006F2DB1: mov ebx, edx */
    SET_LO8(ecx, MEM8(ecx + 0x7D5ED0)); /* 0x006F2DB3: mov cl, byte ptr [ecx + 0x7d5ed0] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x006F2DB9: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F2DBB: inc edi */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0xC)); /* 0x006F2DBC: mov ecx, dword ptr [ebp - 0xc] */
    /* test ebx, ebx */ /* 0x006F2DBF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2DA0; /* 0x006F2DC1: ja 0x6f2da0 */
L_006F2DC3:
    if (0) goto L_006F2DC9; /* 0x006F2DC3: jb 0x6f2dc9 */
L_006F2DC5:
    /* test esi, esi */ /* 0x006F2DC5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2DA0; /* 0x006F2DC7: jne 0x6f2da0 */
L_006F2DC9:
    MEM32(ebp + (-0x4)) = edi; /* 0x006F2DC9: mov dword ptr [ebp - 4], edi */
    edi = MEM32(ebp + (-0x10)); /* 0x006F2DCC: mov edi, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F2DCF: mov ecx, dword ptr [ebp - 4] */
    goto L_006F2DDA; /* 0x006F2DD2: jmp 0x6f2dda */
L_006F2DD4:
    MEM8(edi) = (uint8_t)(0x30u); /* 0x006F2DD4: mov byte ptr [edi], 0x30 */
    ecx = edi + 0x1; /* 0x006F2DD7: lea ecx, [edi + 1] */
L_006F2DDA:
    PUSH32(esp, edi); /* 0x006F2DDA: push edi */
    MEM8(ecx) = (uint8_t)(0); /* 0x006F2DDB: mov byte ptr [ecx], 0 */
    RECOMP_ICALL(MEM32(0x7CC590)); /* 0x006F2DDE: call dword ptr [0x7cc590] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2DE4: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x006F2DE7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F2DE9: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2DEA: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2DEB: pop ebx */
    esp = ebp; /* 0x006F2DEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2DEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2DEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2DF0u);

L_006F2DF0:
    SET_LO8(eax, MEM8(ecx)); /* 0x006F2DF0: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx) */ /* 0x006F2DF2: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2E0F; /* 0x006F2DF4: jne 0x6f2e0f */
L_006F2DF6:
    /* test LO8(eax), LO8(eax) */ /* 0x006F2DF6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2E0C; /* 0x006F2DF8: je 0x6f2e0c */
L_006F2DFA:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x006F2DFA: mov al, byte ptr [ecx + 1] */
    /* cmp LO8(eax), MEM8(edx + 0x1) */ /* 0x006F2DFD: cmp al, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2E0F; /* 0x006F2E00: jne 0x6f2e0f */
L_006F2E02:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F2E02: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x006F2E05: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2E08: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2DF0; /* 0x006F2E0A: jne 0x6f2df0 */
L_006F2E0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F2E0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2E0E: ret  */
L_006F2E0F:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F2E0F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F2E11: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2E14: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2E20u);

L_006F2E20:
    PUSH32(esp, ebp); /* 0x006F2E20: push ebp */
    ebp = esp; /* 0x006F2E21: mov ebp, esp */
    eax = ebp + 0x10; /* 0x006F2E23: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x006F2E26: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F2E27: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F2E2A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC5B0)); /* 0x006F2E2D: call dword ptr [0x7cc5b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2E33: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006F2E36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2E37: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2E40u);

L_006F2E40:
    PUSH32(esp, ebp); /* 0x006F2E40: push ebp */
    ebp = esp; /* 0x006F2E41: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x006F2E43: mov edx, dword ptr [ebp + 0xc] */
    eax = ebp + 0x14; /* 0x006F2E46: lea eax, [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x006F2E49: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x006F2E4C: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006F2E4D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_006F3340); /* 0x006F2E50: call 0x6f3340 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2E55: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006F2E58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2E59: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2E60u);

L_006F2E60:
    PUSH32(esp, ebp); /* 0x006F2E60: push ebp */
    ebp = esp; /* 0x006F2E61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F2E63: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x006F2E66: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x006F2E69: push ebx */
    PUSH32(esp, esi); /* 0x006F2E6A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F2E6B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F2E6D: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = esi; /* 0x006F2E70: mov dword ptr [ebp - 8], esi */
    PUSH32(esp, edi); /* 0x006F2E73: push edi */
    edi = edx; /* 0x006F2E74: mov edi, edx */
    /* test eax, eax */ /* 0x006F2E76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2EE5; /* 0x006F2E78: je 0x6f2ee5 */
L_006F2E7A:
    edx = MEM32(eax + 0x14); /* 0x006F2E7A: mov edx, dword ptr [eax + 0x14] */
    /* test edx, edx */ /* 0x006F2E7D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2EE5; /* 0x006F2E7F: je 0x6f2ee5 */
L_006F2E81:
    ebx = MEM32(ebp + 0xC); /* 0x006F2E81: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx + 0x1; /* 0x006F2E84: lea eax, [ebx + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F2E87: mov dword ptr [ebp - 0xc], eax */
    ebx = ebx; /* 0x006F2E8A: lea ebx, [ebx] */
L_006F2E90:
    SET_LO8(eax, MEM8(ebx)); /* 0x006F2E90: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006F2E92: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2E93: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2E90; /* 0x006F2E95: jne 0x6f2e90 */
L_006F2E97:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0xC)); /* 0x006F2E97: sub ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    /* cmp edx, ebx */ /* 0x006F2E9A: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F2EE5; /* 0x006F2E9C: jbe 0x6f2ee5 */
L_006F2E9E:
    ebx = MEM32(ebp + 0x8); /* 0x006F2E9E: mov ebx, dword ptr [ebp + 8] */
    eax = 0x20u; /* 0x006F2EA1: mov eax, 0x20 */
    /* cmp MEM32(ebx + 0xC), esi */ /* 0x006F2EA6: cmp dword ptr [ebx + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = 0x30u; /* 0x006F2EA9: mov ebx, 0x30 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ebx; } /* 0x006F2EAE: cmovne eax, ebx */
    ebx = MEM32(ebp + 0xC); /* 0x006F2EB1: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x006F2EB4: mov dword ptr [ebp - 0x10], eax */
    eax = ebx + 0x1; /* 0x006F2EB7: lea eax, [ebx + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F2EBA: mov dword ptr [ebp - 0xc], eax */
    ecx = ecx; /* 0x006F2EBD: lea ecx, [ecx] */
L_006F2EC0:
    SET_LO8(eax, MEM8(ebx)); /* 0x006F2EC0: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006F2EC2: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2EC3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2EC0; /* 0x006F2EC5: jne 0x6f2ec0 */
L_006F2EC7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0xC)); /* 0x006F2EC7: sub ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x006F2ECA: sub edx, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F2EE5; /* 0x006F2ECC: je 0x6f2ee5 */
L_006F2ECE:
    eax = MEM32(ebp + (-0x10)); /* 0x006F2ECE: mov eax, dword ptr [ebp - 0x10] */
L_006F2ED1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F2ED1: dec edx */
    _flag_k = FK_DEC;
    /* test edi, edi */ /* 0x006F2ED2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2EDF; /* 0x006F2ED4: je 0x6f2edf */
L_006F2ED6:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x006F2ED6: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F2ED8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F2ED9: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006F2EDA: dec edi */
    _flag_k = FK_DEC;
    /* test edx, edx */ /* 0x006F2EDB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2ED1; /* 0x006F2EDD: jne 0x6f2ed1 */
L_006F2EDF:
    MEM32(ebp + (-0x8)) = esi; /* 0x006F2EDF: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F2EE2: mov dword ptr [ebp - 4], ecx */
L_006F2EE5:
    ebx = MEM32(ebp + 0xC); /* 0x006F2EE5: mov ebx, dword ptr [ebp + 0xc] */
    edx = ebx + 0x1; /* 0x006F2EE8: lea edx, [ebx + 1] */
    goto L_006F2EF0; /* 0x006F2EEB: jmp 0x6f2ef0 */
L_006F2EF0:
    SET_LO8(eax, MEM8(ebx)); /* 0x006F2EF0: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006F2EF2: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2EF3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2EF0; /* 0x006F2EF5: jne 0x6f2ef0 */
L_006F2EF7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x006F2EF7: sub ebx, edx */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x006F2EF9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2F1C; /* 0x006F2EFB: je 0x6f2f1c */
L_006F2EFD:
    esi = edi + (-0x1); /* 0x006F2EFD: lea esi, [edi - 1] */
    /* cmp ebx, esi */ /* 0x006F2F00: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ebx; } /* 0x006F2F02: cmovb esi, ebx */
    PUSH32(esp, esi); /* 0x006F2F05: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F2F06: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x006F2F09: push ecx */
    RECOMP_CALL(sub_00780838); /* 0x006F2F0A: call 0x780838 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F2F0F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2F12: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + ecx) = (uint8_t)(0); /* 0x006F2F15: mov byte ptr [esi + ecx], 0 */
    esi = MEM32(ebp + (-0x8)); /* 0x006F2F19: mov esi, dword ptr [ebp - 8] */
L_006F2F1C:
    eax = MEM32(ebp + 0x8); /* 0x006F2F1C: mov eax, dword ptr [ebp + 8] */
    /* cmp ebx, edi */ /* 0x006F2F1F: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = ebx; } /* 0x006F2F21: cmovb edi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x006F2F24: add esi, edi */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F2F26: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2F54; /* 0x006F2F28: je 0x6f2f54 */
L_006F2F2A:
    eax = MEM32(eax + 0x10); /* 0x006F2F2A: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, 1 */ /* 0x006F2F2D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2F45; /* 0x006F2F30: jne 0x6f2f45 */
L_006F2F32:
    PUSH32(esp, ecx); /* 0x006F2F32: push ecx */
    RECOMP_ICALL(MEM32(0x7CC58C)); /* 0x006F2F33: call dword ptr [0x7cc58c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2F39: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F2F3C: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F2F3E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2F3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2F40: pop ebx */
    esp = ebp; /* 0x006F2F41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2F43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2F44: ret  */
L_006F2F45:
    /* cmp eax, 2 */ /* 0x006F2F45: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2F54; /* 0x006F2F48: jne 0x6f2f54 */
L_006F2F4A:
    PUSH32(esp, ecx); /* 0x006F2F4A: push ecx */
    RECOMP_ICALL(MEM32(0x7CC59C)); /* 0x006F2F4B: call dword ptr [0x7cc59c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2F51: add esp, 4 */
    _flag_k = FK_ADD;
L_006F2F54:
    edi = POP32_VAL(esp); /* 0x006F2F54: pop edi */
    eax = esi; /* 0x006F2F55: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F2F57: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2F58: pop ebx */
    esp = ebp; /* 0x006F2F59: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2F5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2F5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2F60u);

L_006F2F60:
    PUSH32(esp, ebp); /* 0x006F2F60: push ebp */
    ebp = esp; /* 0x006F2F61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x90u; /* 0x006F2F63: sub esp, 0x90 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F2F69: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F2F6E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F2F70: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006F2F73: push ebx */
    PUSH32(esp, esi); /* 0x006F2F74: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F2F75: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x006F2F78: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x006F2F7A: push edi */
    edi = edx; /* 0x006F2F7B: mov edi, edx */
    /* test esi, esi */ /* 0x006F2F7D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2F86; /* 0x006F2F7F: je 0x6f2f86 */
L_006F2F81:
    edx = MEM32(esi + 0x18); /* 0x006F2F81: mov edx, dword ptr [esi + 0x18] */
    goto L_006F2F8B; /* 0x006F2F84: jmp 0x6f2f8b */
L_006F2F86:
    edx = 0xAu; /* 0x006F2F86: mov edx, 0xa */
L_006F2F8B:
    eax = MEM32(ebp + 0x10); /* 0x006F2F8B: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x006F2F8E: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x006F2F91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F2FB3; /* 0x006F2F93: jg 0x6f2fb3 */
L_006F2F95:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F2F9B; /* 0x006F2F95: jl 0x6f2f9b */
L_006F2F97:
    /* test ecx, ecx */ /* 0x006F2F97: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_006F2FB3; /* 0x006F2F99: jae 0x6f2fb3 */
L_006F2F9B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x006F2F9B: neg ecx */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x90)) = (uint8_t)(0x2Du); /* 0x006F2F9D: mov byte ptr [ebp - 0x90], 0x2d */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F2FA4: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006F2FA7: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006F2FA9: push eax */
    PUSH32(esp, ecx); /* 0x006F2FAA: push ecx */
    ecx = ebp + (-0x8F); /* 0x006F2FAB: lea ecx, [ebp - 0x8f] */
    goto L_006F2FBB; /* 0x006F2FB1: jmp 0x6f2fbb */
L_006F2FB3:
    PUSH32(esp, eax); /* 0x006F2FB3: push eax */
    PUSH32(esp, ecx); /* 0x006F2FB4: push ecx */
    ecx = ebp + (-0x90); /* 0x006F2FB5: lea ecx, [ebp - 0x90] */
L_006F2FBB:
    RECOMP_CALL(sub_006F2D70); /* 0x006F2FBB: call 0x6f2d70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2FC0: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x90); /* 0x006F2FC3: lea eax, [ebp - 0x90] */
    edx = edi; /* 0x006F2FC9: mov edx, edi */
    ecx = ebx; /* 0x006F2FCB: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x006F2FCD: push eax */
    PUSH32(esp, esi); /* 0x006F2FCE: push esi */
    RECOMP_CALL(sub_006F2E60); /* 0x006F2FCF: call 0x6f2e60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F2FD4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2FD7: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F2FDA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F2FDC: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2FDD: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2FDE: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F2FDF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2FE4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2FE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2FE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2FF0u);

L_006F2FF0:
    PUSH32(esp, ebp); /* 0x006F2FF0: push ebp */
    ebp = esp; /* 0x006F2FF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x128u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x128u; /* 0x006F2FF3: sub esp, 0x128 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F2FF9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F2FFE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3000: mov dword ptr [ebp - 4], eax */
    _xmm[0] = _xmm[3]; /* 0x006F3003: movapd xmm0, xmm3 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x006F3007: xorps xmm1, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[1].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F300A: ucomisd xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    PUSH32(esp, esi); /* 0x006F300E: push esi */
    PUSH32(esp, edi); /* 0x006F300F: push edi */
    esi = edx; /* 0x006F3010: mov esi, edx */
    edx = MEM32(ebp + 0x8); /* 0x006F3012: mov edx, dword ptr [ebp + 8] */
    edi = ecx; /* 0x006F3015: mov edi, ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x006F3017: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x11C)) = edi; /* 0x006F301D: mov dword ptr [ebp - 0x11c], edi */
    MEM64(ebp + (-0x124)) = _xmm[0].u64[0]; /* 0x006F3023: movsd qword ptr [ebp - 0x124], xmm0 */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006F302B: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006F302C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_006F321B; /* 0x006F302F: jnp 0x6f321b */
L_006F3035:
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[0].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F3035: comisd xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006F3056; /* 0x006F3039: jbe 0x6f3056 */
L_006F303B:
    /* cmp esi, 1 */ /* 0x006F303B: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F3044; /* 0x006F303E: jbe 0x6f3044 */
L_006F3040:
    MEM8(edi) = (uint8_t)(0x2Du); /* 0x006F3040: mov byte ptr [edi], 0x2d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F3043: dec esi */
    _flag_k = FK_DEC;
L_006F3044:
    { xmm_t _s = xmm_ld(0x809CA0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006F3044: xorpd xmm0, xmmword ptr [0x809ca0] */
    MEM64(ebp + (-0x124)) = _xmm[0].u64[0]; /* 0x006F304C: movsd qword ptr [ebp - 0x124], xmm0 */
    goto L_006F3065; /* 0x006F3054: jmp 0x6f3065 */
L_006F3056:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x006F3056: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3066; /* 0x006F305A: je 0x6f3066 */
L_006F305C:
    /* cmp esi, 1 */ /* 0x006F305C: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F3065; /* 0x006F305F: jbe 0x6f3065 */
L_006F3061:
    MEM8(edi) = (uint8_t)(0x2Bu); /* 0x006F3061: mov byte ptr [edi], 0x2b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F3064: dec esi */
    _flag_k = FK_DEC;
L_006F3065:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F3065: inc edi */
    _flag_k = FK_INC;
L_006F3066:
    RECOMP_CALL(sub_00780591); /* 0x006F3066: call 0x780591 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x006F306B: push 0xa */
    ecx = ebp + (-0x88); /* 0x006F306D: lea ecx, [ebp - 0x88] */
    MEM32(ebp + (-0x110)) = eax; /* 0x006F3073: mov dword ptr [ebp - 0x110], eax */
    PUSH32(esp, ecx); /* 0x006F3079: push ecx */
    PUSH32(esp, eax); /* 0x006F307A: push eax */
    RECOMP_ICALL(MEM32(0x7CC5A4)); /* 0x006F307B: call dword ptr [0x7cc5a4] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x88); /* 0x006F3081: lea eax, [ebp - 0x88] */
    edx = esi; /* 0x006F3087: mov edx, esi */
    PUSH32(esp, eax); /* 0x006F3089: push eax */
    PUSH32(esp, 0); /* 0x006F308A: push 0 */
    ecx = edi; /* 0x006F308C: mov ecx, edi */
    RECOMP_CALL(sub_006F2E60); /* 0x006F308E: call 0x6f2e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F3093: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x006F3096: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006F30C4; /* 0x006F3098: jb 0x6f30c4 */
L_006F309A:
    /* cmp esi, 1 */ /* 0x006F309A: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F30B2; /* 0x006F309D: jbe 0x6f30b2 */
L_006F309F:
    eax = esi + (-0x1); /* 0x006F309F: lea eax, [esi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006F30A2: add edi, eax */
    _flag_k = FK_ADD;
    eax = 1; /* 0x006F30A4: mov eax, 1 */
    /* cmp esi, eax */ /* 0x006F30A9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x006F30AB: cmovb eax, esi */
    esi = eax; /* 0x006F30AE: mov esi, eax */
    goto L_006F30C8; /* 0x006F30B0: jmp 0x6f30c8 */
L_006F30B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F30B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006F30B4: add edi, eax */
    _flag_k = FK_ADD;
    eax = 1; /* 0x006F30B6: mov eax, 1 */
    /* cmp esi, eax */ /* 0x006F30BB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x006F30BD: cmovb eax, esi */
    esi = eax; /* 0x006F30C0: mov esi, eax */
    goto L_006F30C8; /* 0x006F30C2: jmp 0x6f30c8 */
L_006F30C4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006F30C4: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x006F30C6: sub esi, eax */
    _flag_k = FK_CMP;
L_006F30C8:
    eax = MEM32(ebp + (-0x110)); /* 0x006F30C8: mov eax, dword ptr [ebp - 0x110] */
    _xmm[1].u64[0] = MEM64(ebp + (-0x124)); _xmm[1].u64[1] = 0; /* 0x006F30CE: movsd xmm1, qword ptr [ebp - 0x124] */
    edx = MEM32(ebp + (-0x118)); /* 0x006F30D6: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x114)) = edi; /* 0x006F30DC: mov dword ptr [ebp - 0x114], edi */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F30E2: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F30E6: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006F30EA: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006F30EA: shr eax, 0x1f */
    /* cmp MEM32(edx + 0x1C), 0 */ /* 0x006F30ED: cmp dword ptr [edx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F30F1: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x006F30FA: subsd xmm1, xmm0 */
    MEM64(ebp + (-0x124)) = _xmm[1].u64[0]; /* 0x006F30FE: movsd qword ptr [ebp - 0x124], xmm1 */
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F310F; /* 0x006F3106: jge 0x6f310f */
L_006F3108:
    MEM32(edx + 0x1C) = 6; /* 0x006F3108: mov dword ptr [edx + 0x1c], 6 */
L_006F310F:
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x006F310F: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F311F; /* 0x006F3113: jne 0x6f311f */
L_006F3115:
    /* cmp MEM32(edx + 0x1C), 0 */ /* 0x006F3115: cmp dword ptr [edx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F3241; /* 0x006F3119: jle 0x6f3241 */
L_006F311F:
    eax = 0xAu; /* 0x006F311F: mov eax, 0xa */
    MEM32(ebp + (-0x110)) = eax; /* 0x006F3124: mov dword ptr [ebp - 0x110], eax */
    /* cmp esi, 1 */ /* 0x006F312A: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F3133; /* 0x006F312D: jbe 0x6f3133 */
L_006F312F:
    MEM8(edi) = (uint8_t)(0x2Eu); /* 0x006F312F: mov byte ptr [edi], 0x2e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F3132: dec esi */
    _flag_k = FK_DEC;
L_006F3133:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F3133: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(edx + 0x1C), 0 */ /* 0x006F3134: cmp dword ptr [edx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x114)) = edi; /* 0x006F3138: mov dword ptr [ebp - 0x114], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F3216; /* 0x006F313E: jle 0x6f3216 */
L_006F3144:
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) - 1; /* 0x006F3144: dec dword ptr [edx + 0x1c] */
    _flag_k = FK_DEC;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F3147: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F314B: cvtdq2pd xmm0, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006F314F: mulsd xmm0, xmm1 */
    RECOMP_CALL(sub_00780591); /* 0x006F3153: call 0x780591 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x006F3158: push 0xa */
    ecx = ebp + (-0x10C); /* 0x006F315A: lea ecx, [ebp - 0x10c] */
    MEM32(ebp + (-0x114)) = eax; /* 0x006F3160: mov dword ptr [ebp - 0x114], eax */
    PUSH32(esp, ecx); /* 0x006F3166: push ecx */
    PUSH32(esp, eax); /* 0x006F3167: push eax */
    RECOMP_ICALL(MEM32(0x7CC5A4)); /* 0x006F3168: call dword ptr [0x7cc5a4] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10C); /* 0x006F316E: lea eax, [ebp - 0x10c] */
    edx = esi; /* 0x006F3174: mov edx, esi */
    PUSH32(esp, eax); /* 0x006F3176: push eax */
    PUSH32(esp, 0); /* 0x006F3177: push 0 */
    ecx = edi; /* 0x006F3179: mov ecx, edi */
    RECOMP_CALL(sub_006F2E60); /* 0x006F317B: call 0x6f2e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F3180: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x006F3183: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006F31B1; /* 0x006F3185: jb 0x6f31b1 */
L_006F3187:
    /* cmp esi, 1 */ /* 0x006F3187: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F319F; /* 0x006F318A: jbe 0x6f319f */
L_006F318C:
    eax = esi + (-0x1); /* 0x006F318C: lea eax, [esi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006F318F: add edi, eax */
    _flag_k = FK_ADD;
    eax = 1; /* 0x006F3191: mov eax, 1 */
    /* cmp esi, eax */ /* 0x006F3196: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3198: cmovb eax, esi */
    esi = eax; /* 0x006F319B: mov esi, eax */
    goto L_006F31B5; /* 0x006F319D: jmp 0x6f31b5 */
L_006F319F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F319F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006F31A1: add edi, eax */
    _flag_k = FK_ADD;
    eax = 1; /* 0x006F31A3: mov eax, 1 */
    /* cmp esi, eax */ /* 0x006F31A8: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x006F31AA: cmovb eax, esi */
    esi = eax; /* 0x006F31AD: mov esi, eax */
    goto L_006F31B5; /* 0x006F31AF: jmp 0x6f31b5 */
L_006F31B1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006F31B1: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x006F31B3: sub esi, eax */
    _flag_k = FK_CMP;
L_006F31B5:
    eax = MEM32(ebp + (-0x114)); /* 0x006F31B5: mov eax, dword ptr [ebp - 0x114] */
    edx = MEM32(ebp + (-0x118)); /* 0x006F31BB: mov edx, dword ptr [ebp - 0x118] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F31C1: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F31C5: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006F31C9: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006F31C9: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F31CC: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(ebp + (-0x110)); /* 0x006F31D5: mov eax, dword ptr [ebp - 0x110] */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006F31DB: movd xmm1, eax */
    eax = eax + eax * 4; /* 0x006F31DF: lea eax, [eax + eax*4] */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006F31E2: cvtdq2pd xmm1, xmm1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006F31E6: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + 0x1C), 0 */ /* 0x006F31E8: cmp dword ptr [edx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x110)) = eax; /* 0x006F31EC: mov dword ptr [ebp - 0x110], eax */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x006F31F2: divsd xmm0, xmm1 */
    _xmm[1].u64[0] = MEM64(ebp + (-0x124)); _xmm[1].u64[1] = 0; /* 0x006F31F6: movsd xmm1, qword ptr [ebp - 0x124] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x006F31FE: subsd xmm1, xmm0 */
    MEM64(ebp + (-0x124)) = _xmm[1].u64[0]; /* 0x006F3202: movsd qword ptr [ebp - 0x124], xmm1 */
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_006F3144; /* 0x006F320A: jg 0x6f3144 */
L_006F3210:
    MEM32(ebp + (-0x114)) = edi; /* 0x006F3210: mov dword ptr [ebp - 0x114], edi */
L_006F3216:
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) - 1; /* 0x006F3216: dec dword ptr [edx + 0x1c] */
    _flag_k = FK_DEC;
    goto L_006F3241; /* 0x006F3219: jmp 0x6f3241 */
L_006F321B:
    /* cmp esi, 1 */ /* 0x006F321B: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F3224; /* 0x006F321E: jbe 0x6f3224 */
L_006F3220:
    MEM8(edi) = (uint8_t)(0x30u); /* 0x006F3220: mov byte ptr [edi], 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F3223: dec esi */
    _flag_k = FK_DEC;
L_006F3224:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F3224: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x006F3225: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x114)) = edi; /* 0x006F3229: mov dword ptr [ebp - 0x114], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3241; /* 0x006F322F: je 0x6f3241 */
L_006F3231:
    /* cmp esi, 1 */ /* 0x006F3231: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F323A; /* 0x006F3234: jbe 0x6f323a */
L_006F3236:
    MEM8(edi) = (uint8_t)(0x2Eu); /* 0x006F3236: mov byte ptr [edi], 0x2e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F3239: dec esi */
    _flag_k = FK_DEC;
L_006F323A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F323A: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x114)) = edi; /* 0x006F323B: mov dword ptr [ebp - 0x114], edi */
L_006F3241:
    ecx = MEM32(edx + 0x14); /* 0x006F3241: mov ecx, dword ptr [edx + 0x14] */
    eax = MEM32(ebp + (-0x11C)); /* 0x006F3244: mov eax, dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x006F324A: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006F324C: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x128)) = ecx; /* 0x006F324E: mov dword ptr [ebp - 0x128], ecx */
    /* test ecx, ecx */ /* 0x006F3254: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F331E; /* 0x006F3256: jle 0x6f331e */
L_006F325C:
    /* cmp MEM32(edx + 0xC), 0 */ /* 0x006F325C: cmp dword ptr [edx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x20u; /* 0x006F3260: mov eax, 0x20 */
    MEM32(ebp + (-0x118)) = 0x30u; /* 0x006F3265: mov dword ptr [ebp - 0x118], 0x30 */
    edx = edi; /* 0x006F326F: mov edx, edi */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x118)); } /* 0x006F3271: cmovne eax, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x120)) = eax; /* 0x006F3278: mov dword ptr [ebp - 0x120], eax */
    eax = esi + (-0x1); /* 0x006F327E: lea eax, [esi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006F3281: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x110)) = eax; /* 0x006F3283: mov dword ptr [ebp - 0x110], eax */
    eax = MEM32(ebp + (-0x11C)); /* 0x006F3289: mov eax, dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x006F328F: sub edx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F32D9; /* 0x006F3291: je 0x6f32d9 */
L_006F3293:
    edi = MEM32(ebp + (-0x11C)); /* 0x006F3293: mov edi, dword ptr [ebp - 0x11c] */
    eax = ecx + edx; /* 0x006F3299: lea eax, [ecx + edx] */
    ecx = MEM32(ebp + (-0x110)); /* 0x006F329C: mov ecx, dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006F32A2: add eax, edi */
    _flag_k = FK_ADD;
L_006F32A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F32A4: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F32A5: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = eax; /* 0x006F32A6: mov dword ptr [ebp - 0x118], eax */
    /* cmp eax, ecx */ /* 0x006F32AC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F32C3; /* 0x006F32AE: jae 0x6f32c3 */
L_006F32B0:
    ecx = MEM32(ebp + (-0x118)); /* 0x006F32B0: mov ecx, dword ptr [ebp - 0x118] */
    SET_LO8(eax, MEM8(edx + edi)); /* 0x006F32B6: mov al, byte ptr [edx + edi] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x006F32B9: mov byte ptr [ecx], al */
    eax = ecx; /* 0x006F32BB: mov eax, ecx */
    ecx = MEM32(ebp + (-0x110)); /* 0x006F32BD: mov ecx, dword ptr [ebp - 0x110] */
L_006F32C3:
    /* test edx, edx */ /* 0x006F32C3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F32A4; /* 0x006F32C5: jne 0x6f32a4 */
L_006F32C7:
    edi = MEM32(ebp + (-0x114)); /* 0x006F32C7: mov edi, dword ptr [ebp - 0x114] */
    ecx = MEM32(ebp + (-0x128)); /* 0x006F32CD: mov ecx, dword ptr [ebp - 0x128] */
    eax = MEM32(ebp + (-0x11C)); /* 0x006F32D3: mov eax, dword ptr [ebp - 0x11c] */
L_006F32D9:
    /* cmp ecx, esi */ /* 0x006F32D9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006F32ED; /* 0x006F32DB: jb 0x6f32ed */
L_006F32DD:
    /* cmp esi, 1 */ /* 0x006F32DD: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F32E7; /* 0x006F32E0: jbe 0x6f32e7 */
L_006F32E2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F32E2: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x006F32E3: add edi, esi */
    _flag_k = FK_ADD;
    goto L_006F32EF; /* 0x006F32E5: jmp 0x6f32ef */
L_006F32E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F32E7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x006F32E9: add edi, esi */
    _flag_k = FK_ADD;
    goto L_006F32EF; /* 0x006F32EB: jmp 0x6f32ef */
L_006F32ED:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x006F32ED: add edi, ecx */
    _flag_k = FK_ADD;
L_006F32EF:
    /* test ecx, ecx */ /* 0x006F32EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F331E; /* 0x006F32F1: je 0x6f331e */
L_006F32F3:
    edx = MEM32(ebp + (-0x110)); /* 0x006F32F3: mov edx, dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x006F32F9: add eax, ecx */
    _flag_k = FK_ADD;
    goto L_006F3300; /* 0x006F32FB: jmp 0x6f3300 */
L_006F3300:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F3300: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F3301: dec ecx */
    _flag_k = FK_DEC;
    /* cmp eax, edx */ /* 0x006F3302: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F3314; /* 0x006F3304: jae 0x6f3314 */
L_006F3306:
    edx = MEM32(ebp + (-0x120)); /* 0x006F3306: mov edx, dword ptr [ebp - 0x120] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x006F330C: mov byte ptr [eax], dl */
    edx = MEM32(ebp + (-0x110)); /* 0x006F330E: mov edx, dword ptr [ebp - 0x110] */
L_006F3314:
    /* test ecx, ecx */ /* 0x006F3314: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F3300; /* 0x006F3316: jne 0x6f3300 */
L_006F3318:
    eax = MEM32(ebp + (-0x11C)); /* 0x006F3318: mov eax, dword ptr [ebp - 0x11c] */
L_006F331E:
    ecx = MEM32(ebp + (-0x4)); /* 0x006F331E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006F3321: sub edi, eax */
    _flag_k = FK_CMP;
    eax = edi; /* 0x006F3323: mov eax, edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F3325: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F3327: pop edi */
    esi = POP32_VAL(esp); /* 0x006F3328: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F3329: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F332E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3330: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3331: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3340u);

L_006F3340:
    PUSH32(esp, ebp); /* 0x006F3340: push ebp */
    ebp = esp; /* 0x006F3341: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006F3343: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2F8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2F8u; /* 0x006F3346: sub esp, 0x2f8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F334C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F3351: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2F4) = eax; /* 0x006F3353: mov dword ptr [esp + 0x2f4], eax */
    PUSH32(esp, esi); /* 0x006F335A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F335B: mov esi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x006F335E: mov eax, ecx */
    MEM32(esp + 0x10) = ecx; /* 0x006F3360: mov dword ptr [esp + 0x10], ecx */
    MEM32(esp + 0x4) = esi; /* 0x006F3364: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x48) = eax; /* 0x006F3368: mov dword ptr [esp + 0x48], eax */
    PUSH32(esp, edi); /* 0x006F336C: push edi */
    edi = edx; /* 0x006F336D: mov edi, edx */
    edx = MEM32(ebp + 0xC); /* 0x006F336F: mov edx, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x006F3372: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3781; /* 0x006F3374: je 0x6f3781 */
L_006F337A:
    SET_LO8(eax, MEM8(esi)); /* 0x006F337A: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006F337C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F377F; /* 0x006F337E: je 0x6f377f */
L_006F3384:
    ecx = edx + (-0x4); /* 0x006F3384: lea ecx, [edx - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFF8u; /* 0x006F3387: add edx, -8 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = ecx; /* 0x006F338A: mov dword ptr [esp + 0x10], ecx */
    ecx = MEM32(esp + 0x14); /* 0x006F338E: mov ecx, dword ptr [esp + 0x14] */
    MEM32(esp + 0xC) = edx; /* 0x006F3392: mov dword ptr [esp + 0xc], edx */
    edx = MEM32(0x7CC5A0); /* 0x006F3396: mov edx, dword ptr [0x7cc5a0] */
    esp = esp; /* 0x006F339C: lea esp, [esp] */
L_006F33A0:
    /* cmp LO8(eax), 0x25u */ /* 0x006F33A0: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F3759; /* 0x006F33A2: jne 0x6f3759 */
L_006F33A8:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006F33A8: xorps xmm0, xmm0 */
    MEM32(esp + 0x1C) = 0; /* 0x006F33AB: mov dword ptr [esp + 0x1c], 0 */
    xmm_st(esp + 0x30, _xmm[0]); /* 0x006F33B3: movdqa xmmword ptr [esp + 0x30], xmm0 */
    MEM32(esp + 0x18) = 0; /* 0x006F33B9: mov dword ptr [esp + 0x18], 0 */
    xmm_st(esp + 0x20, _xmm[0]); /* 0x006F33C1: movdqa xmmword ptr [esp + 0x20], xmm0 */
    MEM32(esp + 0x38) = 0xAu; /* 0x006F33C7: mov dword ptr [esp + 0x38], 0xa */
    MEM32(esp + 0x3C) = 0xFFFFFFFFu; /* 0x006F33CF: mov dword ptr [esp + 0x3c], 0xffffffff */
L_006F33D7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F33D7: inc esi */
    _flag_k = FK_INC;
    MEM32(esp + 0x8) = esi; /* 0x006F33D8: mov dword ptr [esp + 8], esi */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x006F33DC: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFDDu; /* 0x006F33DF: add eax, -0x23 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xDu */ /* 0x006F33E2: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F341D; /* 0x006F33E5: ja 0x6f341d */
L_006F33E7:
    eax = (uint32_t)MEM8(eax + 0x6F37B4); /* 0x006F33E7: movzx eax, byte ptr [eax + 0x6f37b4] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6F37A0)); goto _ljump; }
L_006F33F5:
    MEM32(esp + 0x20) = 1; /* 0x006F33F5: mov dword ptr [esp + 0x20], 1 */
    RECOMP_BACKEDGE();
    goto L_006F33D7; /* 0x006F33FD: jmp 0x6f33d7 */
L_006F33FF:
    MEM32(esp + 0x24) = 1; /* 0x006F33FF: mov dword ptr [esp + 0x24], 1 */
    RECOMP_BACKEDGE();
    goto L_006F33D7; /* 0x006F3407: jmp 0x6f33d7 */
L_006F3409:
    MEM32(esp + 0x28) = 1; /* 0x006F3409: mov dword ptr [esp + 0x28], 1 */
    RECOMP_BACKEDGE();
    goto L_006F33D7; /* 0x006F3411: jmp 0x6f33d7 */
L_006F3413:
    MEM32(esp + 0x2C) = 1; /* 0x006F3413: mov dword ptr [esp + 0x2c], 1 */
    RECOMP_BACKEDGE();
    goto L_006F33D7; /* 0x006F341B: jmp 0x6f33d7 */
L_006F341D:
    SET_LO8(eax, MEM8(esi)); /* 0x006F341D: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x30u */ /* 0x006F341F: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_006F3442; /* 0x006F3421: jl 0x6f3442 */
L_006F3423:
    /* cmp LO8(eax), 0x39u */ /* 0x006F3423: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_006F3442; /* 0x006F3425: jg 0x6f3442 */
L_006F3427:
    PUSH32(esp, 0); /* 0x006F3427: push 0 */
    eax = esp + 0xC; /* 0x006F3429: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006F342D: push eax */
    PUSH32(esp, esi); /* 0x006F342E: push esi */
    RECOMP_ICALL(edx); /* 0x006F342F: call edx */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x14); /* 0x006F3431: mov esi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F3435: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(0x7CC5A0); /* 0x006F3438: mov edx, dword ptr [0x7cc5a0] */
    MEM32(esp + 0x34) = eax; /* 0x006F343E: mov dword ptr [esp + 0x34], eax */
L_006F3442:
    /* cmp MEM8(esi), 0x2Eu */ /* 0x006F3442: cmp byte ptr [esi], 0x2e */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F3475; /* 0x006F3445: jne 0x6f3475 */
L_006F3447:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F3447: inc esi */
    _flag_k = FK_INC;
    MEM32(esp + 0x8) = esi; /* 0x006F3448: mov dword ptr [esp + 8], esi */
    SET_LO8(eax, MEM8(esi)); /* 0x006F344C: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x30u */ /* 0x006F344E: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_006F346D; /* 0x006F3450: jl 0x6f346d */
L_006F3452:
    /* cmp LO8(eax), 0x39u */ /* 0x006F3452: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_006F346D; /* 0x006F3454: jg 0x6f346d */
L_006F3456:
    PUSH32(esp, 0); /* 0x006F3456: push 0 */
    eax = esp + 0xC; /* 0x006F3458: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006F345C: push eax */
    PUSH32(esp, esi); /* 0x006F345D: push esi */
    RECOMP_ICALL(edx); /* 0x006F345E: call edx */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x14); /* 0x006F3460: mov esi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F3464: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = eax; /* 0x006F3467: mov dword ptr [esp + 0x3c], eax */
    goto L_006F3475; /* 0x006F346B: jmp 0x6f3475 */
L_006F346D:
    MEM32(esp + 0x3C) = 0; /* 0x006F346D: mov dword ptr [esp + 0x3c], 0 */
L_006F3475:
    ecx = MEM32(esp + 0x18); /* 0x006F3475: mov ecx, dword ptr [esp + 0x18] */
    esp = esp; /* 0x006F3479: lea esp, [esp] */
L_006F3480:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x006F3480: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFDBu; /* 0x006F3483: add eax, -0x25 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x53u */ /* 0x006F3486: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F3716; /* 0x006F3489: ja 0x6f3716 */
L_006F348F:
    eax = (uint32_t)MEM8(eax + 0x6F37F8); /* 0x006F348F: movzx eax, byte ptr [eax + 0x6f37f8] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6F37C4)); goto _ljump; }
L_006F349D:
    /* cmp ecx, 2 */ /* 0x006F349D: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F34A7; /* 0x006F34A0: jge 0x6f34a7 */
L_006F34A2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F34A2: inc ecx */
    _flag_k = FK_INC;
    MEM32(esp + 0x18) = ecx; /* 0x006F34A3: mov dword ptr [esp + 0x18], ecx */
L_006F34A7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F34A7: inc esi */
    _flag_k = FK_INC;
    MEM32(esp + 0x8) = esi; /* 0x006F34A8: mov dword ptr [esp + 8], esi */
    RECOMP_BACKEDGE();
    goto L_006F3480; /* 0x006F34AC: jmp 0x6f3480 */
L_006F34AE:
    PUSH32(esp, 3); /* 0x006F34AE: push 3 */
    PUSH32(esp, 0x00805EF8u); /* 0x006F34B0: push 0x805ef8 */
    PUSH32(esp, esi); /* 0x006F34B5: push esi */
    RECOMP_ICALL(MEM32(0x7CC588)); /* 0x006F34B6: call dword ptr [0x7cc588] */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x14); /* 0x006F34BC: mov esi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F34C0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F34C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F34DA; /* 0x006F34C5: jne 0x6f34da */
L_006F34C7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x006F34C7: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = 2; /* 0x006F34CA: mov ecx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F34CF: inc esi */
    _flag_k = FK_INC;
    MEM32(esp + 0x18) = ecx; /* 0x006F34D0: mov dword ptr [esp + 0x18], ecx */
    MEM32(esp + 0x8) = esi; /* 0x006F34D4: mov dword ptr [esp + 8], esi */
    RECOMP_BACKEDGE();
    goto L_006F3480; /* 0x006F34D8: jmp 0x6f3480 */
L_006F34DA:
    ecx = MEM32(esp + 0x18); /* 0x006F34DA: mov ecx, dword ptr [esp + 0x18] */
L_006F34DE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F34DE: inc esi */
    _flag_k = FK_INC;
    MEM32(esp + 0x8) = esi; /* 0x006F34DF: mov dword ptr [esp + 8], esi */
    RECOMP_BACKEDGE();
    goto L_006F3480; /* 0x006F34E3: jmp 0x6f3480 */
L_006F34E5:
    /* cmp edi, 1 */ /* 0x006F34E5: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F34F5; /* 0x006F34E8: jbe 0x6f34f5 */
L_006F34EA:
    ecx = MEM32(esp + 0x14); /* 0x006F34EA: mov ecx, dword ptr [esp + 0x14] */
    MEM8(ecx) = (uint8_t)(0x25u); /* 0x006F34EE: mov byte ptr [ecx], 0x25 */
    esi = MEM32(esp + 0x8); /* 0x006F34F1: mov esi, dword ptr [esp + 8] */
L_006F34F5:
    eax = 1; /* 0x006F34F5: mov eax, 1 */
    goto L_006F371A; /* 0x006F34FA: jmp 0x6f371a */
L_006F34FF:
    /* cmp edi, 1 */ /* 0x006F34FF: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F3520; /* 0x006F3502: jbe 0x6f3520 */
L_006F3504:
    eax = MEM32(esp + 0x10); /* 0x006F3504: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 4; /* 0x006F3508: add dword ptr [esp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F350D: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x14); /* 0x006F3510: mov ecx, dword ptr [esp + 0x14] */
    MEM32(esp + 0x10) = eax; /* 0x006F3514: mov dword ptr [esp + 0x10], eax */
    SET_LO8(eax, MEM8(eax)); /* 0x006F3518: mov al, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x006F351A: mov byte ptr [ecx], al */
    esi = MEM32(esp + 0x8); /* 0x006F351C: mov esi, dword ptr [esp + 8] */
L_006F3520:
    eax = 1; /* 0x006F3520: mov eax, 1 */
    goto L_006F371A; /* 0x006F3525: jmp 0x6f371a */
L_006F352A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x006F352A: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F35B7; /* 0x006F352D: je 0x6f35b7 */
L_006F3533:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F3533: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F356E; /* 0x006F3534: je 0x6f356e */
L_006F3536:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F3536: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F3716; /* 0x006F3537: jne 0x6f3716 */
L_006F353D:
    eax = MEM32(esp + 0xC); /* 0x006F353D: mov eax, dword ptr [esp + 0xc] */
    edx = edi; /* 0x006F3541: mov edx, edi */
    ecx = MEM32(esp + 0x14); /* 0x006F3543: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x006F3547: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 8; /* 0x006F354A: add dword ptr [esp + 0x10], 8 */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = eax; /* 0x006F354F: mov dword ptr [esp + 0xc], eax */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006F3553: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x006F3556: push dword ptr [eax] */
    eax = esp + 0x28; /* 0x006F3558: lea eax, [esp + 0x28] */
    PUSH32(esp, eax); /* 0x006F355C: push eax */
    RECOMP_CALL(sub_006F2F60); /* 0x006F355D: call 0x6f2f60 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x14); /* 0x006F3562: mov esi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F3566: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_006F371A; /* 0x006F3569: jmp 0x6f371a */
L_006F356E:
    eax = MEM32(esp + 0x10); /* 0x006F356E: mov eax, dword ptr [esp + 0x10] */
    ecx = esp + 0xD8; /* 0x006F3572: lea ecx, [esp + 0xd8] */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 4; /* 0x006F3579: add dword ptr [esp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F357E: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xAu); /* 0x006F3581: push 0xa */
    PUSH32(esp, ecx); /* 0x006F3583: push ecx */
    MEM32(esp + 0x18) = eax; /* 0x006F3584: mov dword ptr [esp + 0x18], eax */
    PUSH32(esp, MEM32(eax)); /* 0x006F3588: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC5AC)); /* 0x006F358A: call dword ptr [0x7cc5ac] */
    RECOMP_FLAGS_IN();
    eax = esp + 0xE4; /* 0x006F3590: lea eax, [esp + 0xe4] */
L_006F3597:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F3597: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006F359A: push eax */
L_006F359B:
    ecx = MEM32(esp + 0x18); /* 0x006F359B: mov ecx, dword ptr [esp + 0x18] */
    eax = esp + 0x24; /* 0x006F359F: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x006F35A3: push eax */
    edx = edi; /* 0x006F35A4: mov edx, edi */
    RECOMP_CALL(sub_006F2E60); /* 0x006F35A6: call 0x6f2e60 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x10); /* 0x006F35AB: mov esi, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F35AF: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_006F371A; /* 0x006F35B2: jmp 0x6f371a */
L_006F35B7:
    eax = MEM32(esp + 0x10); /* 0x006F35B7: mov eax, dword ptr [esp + 0x10] */
    ecx = esp + 0x1E8; /* 0x006F35BB: lea ecx, [esp + 0x1e8] */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 4; /* 0x006F35C2: add dword ptr [esp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F35C7: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xAu); /* 0x006F35CA: push 0xa */
    PUSH32(esp, ecx); /* 0x006F35CC: push ecx */
    MEM32(esp + 0x18) = eax; /* 0x006F35CD: mov dword ptr [esp + 0x18], eax */
    PUSH32(esp, MEM32(eax)); /* 0x006F35D1: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC5AC)); /* 0x006F35D3: call dword ptr [0x7cc5ac] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1F4; /* 0x006F35D9: lea eax, [esp + 0x1f4] */
    RECOMP_BACKEDGE();
    goto L_006F3597; /* 0x006F35E0: jmp 0x6f3597 */
L_006F35E2:
    MEM32(esp + 0x30) = 1; /* 0x006F35E2: mov dword ptr [esp + 0x30], 1 */
    goto L_006F35FE; /* 0x006F35EA: jmp 0x6f35fe */
L_006F35EC:
    eax = MEM32(esp + 0x30); /* 0x006F35EC: mov eax, dword ptr [esp + 0x30] */
    edx = 2; /* 0x006F35F0: mov edx, 2 */
    /* test eax, eax */ /* 0x006F35F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = edx; } /* 0x006F35F7: cmove eax, edx */
    MEM32(esp + 0x30) = eax; /* 0x006F35FA: mov dword ptr [esp + 0x30], eax */
L_006F35FE:
    /* cmp MEM8(esi), 0x70u */ /* 0x006F35FE: cmp byte ptr [esi], 0x70 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x70u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x10u; /* 0x006F3601: mov eax, 0x10 */
    MEM32(esp + 0x38) = eax; /* 0x006F3606: mov dword ptr [esp + 0x38], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F3620; /* 0x006F360A: jne 0x6f3620 */
L_006F360C:
    ecx = eax + (-0xF); /* 0x006F360C: lea ecx, [eax - 0xf] */
    goto L_006F3620; /* 0x006F360F: jmp 0x6f3620 */
L_006F3611:
    eax = 8; /* 0x006F3611: mov eax, 8 */
    MEM32(esp + 0x38) = eax; /* 0x006F3616: mov dword ptr [esp + 0x38], eax */
    goto L_006F3620; /* 0x006F361A: jmp 0x6f3620 */
L_006F361C:
    eax = MEM32(esp + 0x38); /* 0x006F361C: mov eax, dword ptr [esp + 0x38] */
L_006F3620:
    MEM32(esp + 0x2C) = 1; /* 0x006F3620: mov dword ptr [esp + 0x2c], 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x006F3628: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F36A5; /* 0x006F362B: je 0x6f36a5 */
L_006F362D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F362D: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F3678; /* 0x006F362E: je 0x6f3678 */
L_006F3630:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F3630: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F3716; /* 0x006F3631: jne 0x6f3716 */
L_006F3637:
    ecx = MEM32(esp + 0xC); /* 0x006F3637: mov ecx, dword ptr [esp + 0xc] */
    edx = eax; /* 0x006F363B: mov edx, eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 8; /* 0x006F363D: add dword ptr [esp + 0x10], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x006F3642: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = ecx; /* 0x006F3645: mov dword ptr [esp + 0xc], ecx */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006F3649: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x006F364C: push dword ptr [ecx] */
    ecx = esp + 0x58; /* 0x006F364E: lea ecx, [esp + 0x58] */
    RECOMP_CALL(sub_006F2D70); /* 0x006F3652: call 0x6f2d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x1C); /* 0x006F3657: mov ecx, dword ptr [esp + 0x1c] */
    eax = esp + 0x58; /* 0x006F365B: lea eax, [esp + 0x58] */
    PUSH32(esp, eax); /* 0x006F365F: push eax */
    eax = esp + 0x2C; /* 0x006F3660: lea eax, [esp + 0x2c] */
    edx = edi; /* 0x006F3664: mov edx, edi */
    PUSH32(esp, eax); /* 0x006F3666: push eax */
    RECOMP_CALL(sub_006F2E60); /* 0x006F3667: call 0x6f2e60 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x18); /* 0x006F366C: mov esi, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F3670: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_006F371A; /* 0x006F3673: jmp 0x6f371a */
L_006F3678:
    ecx = MEM32(esp + 0x10); /* 0x006F3678: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 4; /* 0x006F367C: add dword ptr [esp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x006F3681: add ecx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006F3684: push eax */
    eax = esp + 0x164; /* 0x006F3685: lea eax, [esp + 0x164] */
    MEM32(esp + 0x14) = ecx; /* 0x006F368C: mov dword ptr [esp + 0x14], ecx */
    PUSH32(esp, eax); /* 0x006F3690: push eax */
    PUSH32(esp, MEM32(ecx)); /* 0x006F3691: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC5A4)); /* 0x006F3693: call dword ptr [0x7cc5a4] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x16C; /* 0x006F3699: lea eax, [esp + 0x16c] */
    RECOMP_BACKEDGE();
    goto L_006F3597; /* 0x006F36A0: jmp 0x6f3597 */
L_006F36A5:
    ecx = MEM32(esp + 0x10); /* 0x006F36A5: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 4; /* 0x006F36A9: add dword ptr [esp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x006F36AE: add ecx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006F36B1: push eax */
    eax = esp + 0x274; /* 0x006F36B2: lea eax, [esp + 0x274] */
    MEM32(esp + 0x14) = ecx; /* 0x006F36B9: mov dword ptr [esp + 0x14], ecx */
    PUSH32(esp, eax); /* 0x006F36BD: push eax */
    PUSH32(esp, MEM32(ecx)); /* 0x006F36BE: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC5A4)); /* 0x006F36C0: call dword ptr [0x7cc5a4] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x27C; /* 0x006F36C6: lea eax, [esp + 0x27c] */
    RECOMP_BACKEDGE();
    goto L_006F3597; /* 0x006F36CD: jmp 0x6f3597 */
L_006F36D2:
    eax = MEM32(esp + 0xC); /* 0x006F36D2: mov eax, dword ptr [esp + 0xc] */
    ecx = esp + 0x20; /* 0x006F36D6: lea ecx, [esp + 0x20] */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 8; /* 0x006F36DA: add dword ptr [esp + 0x10], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x006F36DF: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x006F36E2: push ecx */
    ecx = MEM32(esp + 0x18); /* 0x006F36E3: mov ecx, dword ptr [esp + 0x18] */
    edx = edi; /* 0x006F36E7: mov edx, edi */
    MEM32(esp + 0x10) = eax; /* 0x006F36E9: mov dword ptr [esp + 0x10], eax */
    _xmm[3].u64[0] = MEM64(eax); _xmm[3].u64[1] = 0; /* 0x006F36ED: movsd xmm3, qword ptr [eax] */
    RECOMP_CALL(sub_006F2FF0); /* 0x006F36F1: call 0x6f2ff0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0xC); /* 0x006F36F6: mov esi, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F36FA: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F371A; /* 0x006F36FD: jmp 0x6f371a */
L_006F36FF:
    eax = MEM32(esp + 0x10); /* 0x006F36FF: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 4; /* 0x006F3703: add dword ptr [esp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F3708: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = eax; /* 0x006F370B: mov dword ptr [esp + 0x10], eax */
    PUSH32(esp, MEM32(eax)); /* 0x006F370F: push dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_006F359B; /* 0x006F3711: jmp 0x6f359b */
L_006F3716:
    eax = MEM32(esp + 0x1C); /* 0x006F3716: mov eax, dword ptr [esp + 0x1c] */
L_006F371A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F371A: inc esi */
    _flag_k = FK_INC;
    MEM32(esp + 0x8) = esi; /* 0x006F371B: mov dword ptr [esp + 8], esi */
    /* cmp eax, edi */ /* 0x006F371F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006F3749; /* 0x006F3721: jb 0x6f3749 */
L_006F3723:
    /* cmp edi, 1 */ /* 0x006F3723: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F372D; /* 0x006F3726: jbe 0x6f372d */
L_006F3728:
    eax = edi + (-0x1); /* 0x006F3728: lea eax, [edi - 1] */
    goto L_006F372F; /* 0x006F372B: jmp 0x6f372f */
L_006F372D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F372D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F372F:
    ecx = MEM32(esp + 0x14); /* 0x006F372F: mov ecx, dword ptr [esp + 0x14] */
    edx = MEM32(0x7CC5A0); /* 0x006F3733: mov edx, dword ptr [0x7cc5a0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006F3739: add ecx, eax */
    _flag_k = FK_ADD;
    eax = 1; /* 0x006F373B: mov eax, 1 */
    /* cmp edi, eax */ /* 0x006F3740: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = edi; } /* 0x006F3742: cmovb eax, edi */
    edi = eax; /* 0x006F3745: mov edi, eax */
    goto L_006F376B; /* 0x006F3747: jmp 0x6f376b */
L_006F3749:
    ecx = MEM32(esp + 0x14); /* 0x006F3749: mov ecx, dword ptr [esp + 0x14] */
    edx = MEM32(0x7CC5A0); /* 0x006F374D: mov edx, dword ptr [0x7cc5a0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006F3753: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006F3755: sub edi, eax */
    _flag_k = FK_CMP;
    goto L_006F376B; /* 0x006F3757: jmp 0x6f376b */
L_006F3759:
    /* cmp edi, 1 */ /* 0x006F3759: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F3765; /* 0x006F375C: jbe 0x6f3765 */
L_006F375E:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x006F375E: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006F3760: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(esp + 0x8); /* 0x006F3761: mov esi, dword ptr [esp + 8] */
L_006F3765:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F3765: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F3766: inc ecx */
    _flag_k = FK_INC;
    MEM32(esp + 0x8) = esi; /* 0x006F3767: mov dword ptr [esp + 8], esi */
L_006F376B:
    SET_LO8(eax, MEM8(esi)); /* 0x006F376B: mov al, byte ptr [esi] */
    MEM32(esp + 0x14) = ecx; /* 0x006F376D: mov dword ptr [esp + 0x14], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x006F3771: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F33A0; /* 0x006F3773: jne 0x6f33a0 */
L_006F3779:
    eax = MEM32(esp + 0x4C); /* 0x006F3779: mov eax, dword ptr [esp + 0x4c] */
    goto L_006F3781; /* 0x006F377D: jmp 0x6f3781 */
L_006F377F:
    eax = ecx; /* 0x006F377F: mov eax, ecx */
L_006F3781:
    /* test edi, edi */ /* 0x006F3781: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3788; /* 0x006F3783: je 0x6f3788 */
L_006F3785:
    MEM8(ecx) = (uint8_t)(0); /* 0x006F3785: mov byte ptr [ecx], 0 */
L_006F3788:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006F3788: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x006F378A: mov eax, ecx */
    ecx = MEM32(esp + 0x2FC); /* 0x006F378C: mov ecx, dword ptr [esp + 0x2fc] */
    edi = POP32_VAL(esp); /* 0x006F3793: pop edi */
    esi = POP32_VAL(esp); /* 0x006F3794: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F3795: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F3797: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F379C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F379E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F379F: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006F33F5u: goto L_006F33F5;
      case 0x006F33FFu: goto L_006F33FF;
      case 0x006F3409u: goto L_006F3409;
      case 0x006F3413u: goto L_006F3413;
      case 0x006F341Du: goto L_006F341D;
      case 0x006F349Du: goto L_006F349D;
      case 0x006F34AEu: goto L_006F34AE;
      case 0x006F34DEu: goto L_006F34DE;
      case 0x006F34E5u: goto L_006F34E5;
      case 0x006F34FFu: goto L_006F34FF;
      case 0x006F352Au: goto L_006F352A;
      case 0x006F35E2u: goto L_006F35E2;
      case 0x006F35ECu: goto L_006F35EC;
      case 0x006F3611u: goto L_006F3611;
      case 0x006F361Cu: goto L_006F361C;
      case 0x006F36D2u: goto L_006F36D2;
      case 0x006F36FFu: goto L_006F36FF;
      case 0x006F3716u: goto L_006F3716;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F3850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3850u);

L_006F3850:
    PUSH32(esp, ebp); /* 0x006F3850: push ebp */
    ebp = esp; /* 0x006F3851: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F3853: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F3856: push ebx */
    eax = 0; /* 0x006F3857: mov eax, 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F385C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F385E: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3860: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3863: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x006F3866: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006F3869: mov dword ptr [ebp - 8], edx */
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x006F386C: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F388F; /* 0x006F3870: jl 0x6f388f */
L_006F3872:
    eax = 1; /* 0x006F3872: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3877: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3879: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F387B: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F387E: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x006F3881: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006F3884: mov dword ptr [ebp - 8], edx */
    eax = MEM32(ebp + (-0x8)); /* 0x006F3887: mov eax, dword ptr [ebp - 8] */
    ebx = POP32_VAL(esp); /* 0x006F388A: pop ebx */
    esp = ebp; /* 0x006F388B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F388D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F388E: ret  */
L_006F388F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F388F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3891: pop ebx */
    esp = ebp; /* 0x006F3892: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3894: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3895: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F38A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F38A0u);

L_006F38A0:
    PUSH32(esp, ebp); /* 0x006F38A0: push ebp */
    ebp = esp; /* 0x006F38A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F38A3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F38A6: push ebx */
    eax = 0; /* 0x006F38A7: mov eax, 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F38AC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F38AE: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F38B0: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F38B3: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F38B6: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F38B9: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x006F38BC: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F38C9; /* 0x006F38C0: jge 0x6f38c9 */
L_006F38C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F38C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F38C4: pop ebx */
    esp = ebp; /* 0x006F38C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F38C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F38C8: ret  */
L_006F38C9:
    eax = 1; /* 0x006F38C9: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F38CE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F38D0: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F38D2: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F38D5: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F38D8: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F38DB: mov dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F38DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM32(ebp + (-0x8)), 0x08000000u */ /* 0x006F38E0: test dword ptr [ebp - 8], 0x8000000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x08000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F38FA; /* 0x006F38E7: je 0x6f38fa */
L_006F38E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F38E9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F38EB: mov dword ptr [ebp - 4], eax */
    void_lift_trap(0x006F38EEu, "xgetbv ");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    ecx = ecx & 6; /* 0x006F38F1: and ecx, 6 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), 6 */ /* 0x006F38F4: cmp cl, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F38F7: sete al */
L_006F38FA:
    ebx = POP32_VAL(esp); /* 0x006F38FA: pop ebx */
    esp = ebp; /* 0x006F38FB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F38FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F38FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3900u);

L_006F3900:
    PUSH32(esp, ebp); /* 0x006F3900: push ebp */
    ebp = esp; /* 0x006F3901: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F3903: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F3906: push ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006F3907: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F390E: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F390F: pop eax */
    ecx = eax; /* 0x006F3910: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3912: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3917: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3918: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3919: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F391A: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F391B: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3926; /* 0x006F391D: je 0x6f3926 */
L_006F391F:
    MEM32(ebp + (-0x4)) = 1; /* 0x006F391F: mov dword ptr [ebp - 4], 1 */
L_006F3926:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F3926: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F396C; /* 0x006F392A: je 0x6f396c */
L_006F392C:
    eax = 0x80000000u; /* 0x006F392C: mov eax, 0x80000000 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3931: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3933: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3935: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3938: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x006F393B: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006F393E: mov dword ptr [ebp - 8], edx */
    /* cmp MEM32(ebp + (-0x4)), 0x80000001u */ /* 0x006F3941: cmp dword ptr [ebp - 4], 0x80000001 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x80000001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006F396C; /* 0x006F3948: jb 0x6f396c */
L_006F394A:
    eax = 0x80000001u; /* 0x006F394A: mov eax, 0x80000001 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F394F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3951: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3953: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3956: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x006F3959: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006F395C: mov dword ptr [ebp - 8], edx */
    eax = MEM32(ebp + (-0x8)); /* 0x006F395F: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x006F3962: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3967: pop ebx */
    esp = ebp; /* 0x006F3968: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F396A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F396B: ret  */
L_006F396C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F396C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F396E: pop ebx */
    esp = ebp; /* 0x006F396F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3971: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3972: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3980u);

L_006F3980:
    PUSH32(esp, ebp); /* 0x006F3980: push ebp */
    ebp = esp; /* 0x006F3981: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F3983: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F3986: push ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006F3987: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F398E: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F398F: pop eax */
    ecx = eax; /* 0x006F3990: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3992: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3997: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3998: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3999: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F399A: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F399B: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F39A6; /* 0x006F399D: je 0x6f39a6 */
L_006F399F:
    MEM32(ebp + (-0x4)) = 1; /* 0x006F399F: mov dword ptr [ebp - 4], 1 */
L_006F39A6:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F39A6: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F39E7; /* 0x006F39AA: je 0x6f39e7 */
L_006F39AC:
    eax = 0; /* 0x006F39AC: mov eax, 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F39B1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F39B3: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F39B5: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F39B8: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F39BB: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F39BE: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x006F39C1: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F39E7; /* 0x006F39C5: jl 0x6f39e7 */
L_006F39C7:
    eax = 1; /* 0x006F39C7: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F39CC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F39CE: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F39D0: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F39D3: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F39D6: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F39D9: mov dword ptr [ebp - 0x10], edx */
    eax = MEM32(ebp + (-0x8)); /* 0x006F39DC: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x006F39DF: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F39E2: pop ebx */
    esp = ebp; /* 0x006F39E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F39E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F39E6: ret  */
L_006F39E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F39E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F39E9: pop ebx */
    esp = ebp; /* 0x006F39EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F39EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F39ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F39F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F39F0u);

L_006F39F0:
    PUSH32(esp, ebp); /* 0x006F39F0: push ebp */
    ebp = esp; /* 0x006F39F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F39F3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F39F6: push ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006F39F7: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F39FE: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F39FF: pop eax */
    ecx = eax; /* 0x006F3A00: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3A02: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3A07: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3A08: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3A09: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3A0A: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F3A0B: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3A16; /* 0x006F3A0D: je 0x6f3a16 */
L_006F3A0F:
    MEM32(ebp + (-0x4)) = 1; /* 0x006F3A0F: mov dword ptr [ebp - 4], 1 */
L_006F3A16:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F3A16: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3A59; /* 0x006F3A1A: je 0x6f3a59 */
L_006F3A1C:
    eax = 0; /* 0x006F3A1C: mov eax, 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3A21: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3A23: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3A25: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3A28: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F3A2B: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F3A2E: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x006F3A31: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F3A59; /* 0x006F3A35: jl 0x6f3a59 */
L_006F3A37:
    eax = 1; /* 0x006F3A37: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3A3C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3A3E: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3A40: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3A43: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F3A46: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F3A49: mov dword ptr [ebp - 0x10], edx */
    eax = MEM32(ebp + (-0x8)); /* 0x006F3A4C: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x006F3A4F: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3A54: pop ebx */
    esp = ebp; /* 0x006F3A55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3A57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3A58: ret  */
L_006F3A59:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F3A59: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3A5B: pop ebx */
    esp = ebp; /* 0x006F3A5C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3A5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3A5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3A60u);

L_006F3A60:
    PUSH32(esp, ebp); /* 0x006F3A60: push ebp */
    ebp = esp; /* 0x006F3A61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F3A63: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F3A66: push ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006F3A67: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3A6E: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3A6F: pop eax */
    ecx = eax; /* 0x006F3A70: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3A72: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3A77: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3A78: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3A79: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3A7A: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F3A7B: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3A86; /* 0x006F3A7D: je 0x6f3a86 */
L_006F3A7F:
    MEM32(ebp + (-0x4)) = 1; /* 0x006F3A7F: mov dword ptr [ebp - 4], 1 */
L_006F3A86:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F3A86: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3AC9; /* 0x006F3A8A: je 0x6f3ac9 */
L_006F3A8C:
    eax = 0; /* 0x006F3A8C: mov eax, 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3A91: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3A93: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3A95: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3A98: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F3A9B: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F3A9E: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x006F3AA1: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F3AC9; /* 0x006F3AA5: jl 0x6f3ac9 */
L_006F3AA7:
    eax = 1; /* 0x006F3AA7: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3AAC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3AAE: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3AB0: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3AB3: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F3AB6: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F3AB9: mov dword ptr [ebp - 0x10], edx */
    eax = MEM32(ebp + (-0x8)); /* 0x006F3ABC: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x006F3ABF: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3AC4: pop ebx */
    esp = ebp; /* 0x006F3AC5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3AC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3AC8: ret  */
L_006F3AC9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F3AC9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3ACB: pop ebx */
    esp = ebp; /* 0x006F3ACC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3ACE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3ACF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3AD0u);

L_006F3AD0:
    PUSH32(esp, ebp); /* 0x006F3AD0: push ebp */
    ebp = esp; /* 0x006F3AD1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F3AD3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F3AD6: push ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006F3AD7: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3ADE: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3ADF: pop eax */
    ecx = eax; /* 0x006F3AE0: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3AE2: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3AE7: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3AE8: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3AE9: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3AEA: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F3AEB: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3AF6; /* 0x006F3AED: je 0x6f3af6 */
L_006F3AEF:
    MEM32(ebp + (-0x4)) = 1; /* 0x006F3AEF: mov dword ptr [ebp - 4], 1 */
L_006F3AF6:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F3AF6: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3B42; /* 0x006F3AFA: je 0x6f3b42 */
L_006F3AFC:
    RECOMP_CALL(sub_006F38A0); /* 0x006F3AFC: call 0x6f38a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F3B01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3B42; /* 0x006F3B03: je 0x6f3b42 */
L_006F3B05:
    eax = 0; /* 0x006F3B05: mov eax, 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3B0A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3B0C: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3B0E: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3B11: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F3B14: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F3B17: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x006F3B1A: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F3B42; /* 0x006F3B1E: jl 0x6f3b42 */
L_006F3B20:
    eax = 1; /* 0x006F3B20: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3B25: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3B27: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3B29: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F3B2C: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F3B2F: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F3B32: mov dword ptr [ebp - 0x10], edx */
    eax = MEM32(ebp + (-0x8)); /* 0x006F3B35: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x006F3B38: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3B3D: pop ebx */
    esp = ebp; /* 0x006F3B3E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3B40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3B41: ret  */
L_006F3B42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F3B42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3B44: pop ebx */
    esp = ebp; /* 0x006F3B45: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3B47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3B48: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3B50u);

L_006F3B50:
    PUSH32(esp, ebp); /* 0x006F3B50: push ebp */
    ebp = esp; /* 0x006F3B51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F3B53: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F3B56: push ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006F3B57: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3B5E: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3B5F: pop eax */
    ecx = eax; /* 0x006F3B60: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3B62: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3B67: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3B68: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3B69: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3B6A: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F3B6B: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3B76; /* 0x006F3B6D: je 0x6f3b76 */
L_006F3B6F:
    MEM32(ebp + (-0x4)) = 1; /* 0x006F3B6F: mov dword ptr [ebp - 4], 1 */
L_006F3B76:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F3B76: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3BC0; /* 0x006F3B7A: je 0x6f3bc0 */
L_006F3B7C:
    RECOMP_CALL(sub_006F38A0); /* 0x006F3B7C: call 0x6f38a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F3B81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3BC0; /* 0x006F3B83: je 0x6f3bc0 */
L_006F3B85:
    eax = 0; /* 0x006F3B85: mov eax, 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3B8A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3B8C: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3B8E: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x006F3B91: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006F3B94: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F3B97: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + (-0x4)), 7 */ /* 0x006F3B9A: cmp dword ptr [ebp - 4], 7 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F3BC0; /* 0x006F3B9E: jl 0x6f3bc0 */
L_006F3BA0:
    eax = 7; /* 0x006F3BA0: mov eax, 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F3BA5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x006F3BA7: cpuid  */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F3BA9: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x006F3BAC: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006F3BAF: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F3BB2: mov dword ptr [ebp - 0x10], edx */
    eax = MEM32(ebp + (-0x8)); /* 0x006F3BB5: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x006F3BB8: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3BBB: pop ebx */
    esp = ebp; /* 0x006F3BBC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3BBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3BBF: ret  */
L_006F3BC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F3BC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F3BC2: pop ebx */
    esp = ebp; /* 0x006F3BC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3BC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3BC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3BD0u);

L_006F3BD0:
    PUSH32(esp, ebp); /* 0x006F3BD0: push ebp */
    ebp = esp; /* 0x006F3BD1: mov ebp, esp */
    eax = MEM32(0x863130); /* 0x006F3BD3: mov eax, dword ptr [0x863130] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006F3BD8: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F3BDB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F3D51; /* 0x006F3BDE: jne 0x6f3d51 */
L_006F3BE4:
    MEM32(0x863130) = 0; /* 0x006F3BE4: mov dword ptr [0x863130], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006F3BEE: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3BF5: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3BF6: pop eax */
    ecx = eax; /* 0x006F3BF7: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3BF9: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3BFE: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3BFF: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3C00: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3C01: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F3C02: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3C0D; /* 0x006F3C04: je 0x6f3c0d */
L_006F3C06:
    MEM32(ebp + (-0x4)) = 1; /* 0x006F3C06: mov dword ptr [ebp - 4], 1 */
L_006F3C0D:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F3C0D: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3C24; /* 0x006F3C11: je 0x6f3c24 */
L_006F3C13:
    RECOMP_CALL(sub_006F3850); /* 0x006F3C13: call 0x6f3850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x006F3C18: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3C24; /* 0x006F3C1B: je 0x6f3c24 */
L_006F3C1D:
    _flag_a = (uint32_t)((MEM32(0x863130) | 1)); _flag_b = (uint32_t)((MEM32(0x863130) | 1));
    MEM32(0x863130) = MEM32(0x863130) | 1; /* 0x006F3C1D: or dword ptr [0x863130], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3C24:
    MEM32(ebp + (-0x14)) = 0; /* 0x006F3C24: mov dword ptr [ebp - 0x14], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x006F3C2B: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3C38; /* 0x006F3C2F: je 0x6f3c38 */
L_006F3C31:
    _flag_a = (uint32_t)((MEM32(0x863130) | 2)); _flag_b = (uint32_t)((MEM32(0x863130) | 2));
    MEM32(0x863130) = MEM32(0x863130) | 2; /* 0x006F3C31: or dword ptr [0x863130], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3C38:
    MEM32(ebp + (-0x8)) = 0; /* 0x006F3C38: mov dword ptr [ebp - 8], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3C3F: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3C40: pop eax */
    ecx = eax; /* 0x006F3C41: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3C43: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3C48: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3C49: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3C4A: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3C4B: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F3C4C: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3C57; /* 0x006F3C4E: je 0x6f3c57 */
L_006F3C50:
    MEM32(ebp + (-0x8)) = 1; /* 0x006F3C50: mov dword ptr [ebp - 8], 1 */
L_006F3C57:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x006F3C57: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3C70; /* 0x006F3C5B: je 0x6f3c70 */
L_006F3C5D:
    RECOMP_CALL(sub_006F3850); /* 0x006F3C5D: call 0x6f3850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00800000u);
    eax = eax & 0x00800000u; /* 0x006F3C62: and eax, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3C70; /* 0x006F3C67: je 0x6f3c70 */
L_006F3C69:
    _flag_a = (uint32_t)((MEM32(0x863130) | 4)); _flag_b = (uint32_t)((MEM32(0x863130) | 4));
    MEM32(0x863130) = MEM32(0x863130) | 4; /* 0x006F3C69: or dword ptr [0x863130], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3C70:
    RECOMP_CALL(sub_006F3900); /* 0x006F3C70: call 0x6f3900 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F3C75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3C80; /* 0x006F3C77: je 0x6f3c80 */
L_006F3C79:
    _flag_a = (uint32_t)((MEM32(0x863130) | 8)); _flag_b = (uint32_t)((MEM32(0x863130) | 8));
    MEM32(0x863130) = MEM32(0x863130) | 8; /* 0x006F3C79: or dword ptr [0x863130], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3C80:
    MEM32(ebp + (-0xC)) = 0; /* 0x006F3C80: mov dword ptr [ebp - 0xc], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3C87: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3C88: pop eax */
    ecx = eax; /* 0x006F3C89: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3C8B: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3C90: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3C91: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3C92: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3C93: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F3C94: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3C9F; /* 0x006F3C96: je 0x6f3c9f */
L_006F3C98:
    MEM32(ebp + (-0xC)) = 1; /* 0x006F3C98: mov dword ptr [ebp - 0xc], 1 */
L_006F3C9F:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x006F3C9F: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3CB8; /* 0x006F3CA3: je 0x6f3cb8 */
L_006F3CA5:
    RECOMP_CALL(sub_006F3850); /* 0x006F3CA5: call 0x6f3850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02000000u);
    eax = eax & 0x02000000u; /* 0x006F3CAA: and eax, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3CB8; /* 0x006F3CAF: je 0x6f3cb8 */
L_006F3CB1:
    _flag_a = (uint32_t)((MEM32(0x863130) | 0x10u)); _flag_b = (uint32_t)((MEM32(0x863130) | 0x10u));
    MEM32(0x863130) = MEM32(0x863130) | 0x10u; /* 0x006F3CB1: or dword ptr [0x863130], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3CB8:
    MEM32(ebp + (-0x10)) = 0; /* 0x006F3CB8: mov dword ptr [ebp - 0x10], 0 */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3CBF: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3CC0: pop eax */
    ecx = eax; /* 0x006F3CC1: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x006F3CC3: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F3CC8: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x006F3CC9: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x006F3CCA: pushfd  */
    eax = POP32_VAL(esp); /* 0x006F3CCB: pop eax */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006F3CCC: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3CD7; /* 0x006F3CCE: je 0x6f3cd7 */
L_006F3CD0:
    MEM32(ebp + (-0x10)) = 1; /* 0x006F3CD0: mov dword ptr [ebp - 0x10], 1 */
L_006F3CD7:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x006F3CD7: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3CF0; /* 0x006F3CDB: je 0x6f3cf0 */
L_006F3CDD:
    RECOMP_CALL(sub_006F3850); /* 0x006F3CDD: call 0x6f3850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x006F3CE2: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3CF0; /* 0x006F3CE7: je 0x6f3cf0 */
L_006F3CE9:
    _flag_a = (uint32_t)((MEM32(0x863130) | 0x20u)); _flag_b = (uint32_t)((MEM32(0x863130) | 0x20u));
    MEM32(0x863130) = MEM32(0x863130) | 0x20u; /* 0x006F3CE9: or dword ptr [0x863130], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3CF0:
    RECOMP_CALL(sub_006F3980); /* 0x006F3CF0: call 0x6f3980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F3CF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3D00; /* 0x006F3CF7: je 0x6f3d00 */
L_006F3CF9:
    _flag_a = (uint32_t)((MEM32(0x863130) | 0x40u)); _flag_b = (uint32_t)((MEM32(0x863130) | 0x40u));
    MEM32(0x863130) = MEM32(0x863130) | 0x40u; /* 0x006F3CF9: or dword ptr [0x863130], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3D00:
    RECOMP_CALL(sub_006F39F0); /* 0x006F3D00: call 0x6f39f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F3D05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3D13; /* 0x006F3D07: je 0x6f3d13 */
L_006F3D09:
    _flag_a = (uint32_t)((MEM32(0x863130) | 0x100u)); _flag_b = (uint32_t)((MEM32(0x863130) | 0x100u));
    MEM32(0x863130) = MEM32(0x863130) | 0x100u; /* 0x006F3D09: or dword ptr [0x863130], 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3D13:
    RECOMP_CALL(sub_006F3A60); /* 0x006F3D13: call 0x6f3a60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F3D18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3D26; /* 0x006F3D1A: je 0x6f3d26 */
L_006F3D1C:
    _flag_a = (uint32_t)((MEM32(0x863130) | 0x200u)); _flag_b = (uint32_t)((MEM32(0x863130) | 0x200u));
    MEM32(0x863130) = MEM32(0x863130) | 0x200u; /* 0x006F3D1C: or dword ptr [0x863130], 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3D26:
    RECOMP_CALL(sub_006F3AD0); /* 0x006F3D26: call 0x6f3ad0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F3D2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3D39; /* 0x006F3D2D: je 0x6f3d39 */
L_006F3D2F:
    _flag_a = (uint32_t)((MEM32(0x863130) | 0x400u)); _flag_b = (uint32_t)((MEM32(0x863130) | 0x400u));
    MEM32(0x863130) = MEM32(0x863130) | 0x400u; /* 0x006F3D2F: or dword ptr [0x863130], 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F3D39:
    RECOMP_CALL(sub_006F3B50); /* 0x006F3D39: call 0x6f3b50 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F3D3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x863130); /* 0x006F3D40: mov eax, dword ptr [0x863130] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3D51; /* 0x006F3D45: je 0x6f3d51 */
L_006F3D47:
    _flag_a = (uint32_t)((eax | 0x800u)); _flag_b = (uint32_t)((eax | 0x800u));
    eax = eax | 0x800u; /* 0x006F3D47: or eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x863130) = eax; /* 0x006F3D4C: mov dword ptr [0x863130], eax */
L_006F3D51:
    esp = ebp; /* 0x006F3D51: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3D53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3D54: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3D60u);

L_006F3D60:
    PUSH32(esp, ebp); /* 0x006F3D60: push ebp */
    ebp = esp; /* 0x006F3D61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F3D63: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006F3D66: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F3D69: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F3D6E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x006F3D70: mov dword ptr [esp + 0x38], eax */
    PUSH32(esp, esi); /* 0x006F3D74: push esi */
    PUSH32(esp, 0x00926AB8u); /* 0x006F3D75: push 0x926ab8 */
    PUSH32(esp, 0x00926AC0u); /* 0x006F3D7A: push 0x926ac0 */
    edx = 1; /* 0x006F3D7F: mov edx, 1 */
    ecx = 0x00805F50u; /* 0x006F3D84: mov ecx, 0x805f50 */
    RECOMP_CALL(sub_006F4040); /* 0x006F3D89: call 0x6f4040 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F3D8E: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F3D90: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x006F3D93: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3DD2; /* 0x006F3D96: je 0x6f3dd2 */
L_006F3D98:
    ecx = MEM32(0x9254B4); /* 0x006F3D98: mov ecx, dword ptr [0x9254b4] */
    /* test ecx, ecx */ /* 0x006F3D9E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3DA7; /* 0x006F3DA0: je 0x6f3da7 */
L_006F3DA2:
    /* test MEM8(ecx), 1 */ /* 0x006F3DA2: test byte ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F3DD2; /* 0x006F3DA5: jne 0x6f3dd2 */
L_006F3DA7:
    PUSH32(esp, 0x38u); /* 0x006F3DA7: push 0x38 */
    eax = esp + 0x8; /* 0x006F3DA9: lea eax, [esp + 8] */
    PUSH32(esp, 0); /* 0x006F3DAD: push 0 */
    PUSH32(esp, eax); /* 0x006F3DAF: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006F3DB0: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F3DB5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x4) = 0x1100u; /* 0x006F3DB8: mov dword ptr [esp + 4], 0x1100 */
    ecx = esp + 0x4; /* 0x006F3DC0: lea ecx, [esp + 4] */
    MEM32(esp + 0xC) = esi; /* 0x006F3DC4: mov dword ptr [esp + 0xc], esi */
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x006F3DC8: mov byte ptr [esp + 0x10], 0 */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F3DCD: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
L_006F3DD2:
    /* cmp MEM32(0x926A9C), 0 */ /* 0x006F3DD2: cmp dword ptr [0x926a9c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A9C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3E38; /* 0x006F3DD9: je 0x6f3e38 */
L_006F3DDB:
    PUSH32(esp, 0x00926ABCu); /* 0x006F3DDB: push 0x926abc */
    PUSH32(esp, 0x00926AC4u); /* 0x006F3DE0: push 0x926ac4 */
    edx = 2; /* 0x006F3DE5: mov edx, 2 */
    ecx = 0x00805F34u; /* 0x006F3DEA: mov ecx, 0x805f34 */
    RECOMP_CALL(sub_006F4040); /* 0x006F3DEF: call 0x6f4040 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F3DF4: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F3DF6: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x006F3DF9: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3E38; /* 0x006F3DFC: je 0x6f3e38 */
L_006F3DFE:
    ecx = MEM32(0x9254B4); /* 0x006F3DFE: mov ecx, dword ptr [0x9254b4] */
    /* test ecx, ecx */ /* 0x006F3E04: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F3E0D; /* 0x006F3E06: je 0x6f3e0d */
L_006F3E08:
    /* test MEM8(ecx), 1 */ /* 0x006F3E08: test byte ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F3E38; /* 0x006F3E0B: jne 0x6f3e38 */
L_006F3E0D:
    PUSH32(esp, 0x38u); /* 0x006F3E0D: push 0x38 */
    eax = esp + 0x8; /* 0x006F3E0F: lea eax, [esp + 8] */
    PUSH32(esp, 0); /* 0x006F3E13: push 0 */
    PUSH32(esp, eax); /* 0x006F3E15: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006F3E16: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F3E1B: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x4) = 0x1100u; /* 0x006F3E1E: mov dword ptr [esp + 4], 0x1100 */
    ecx = esp + 0x4; /* 0x006F3E26: lea ecx, [esp + 4] */
    MEM32(esp + 0xC) = esi; /* 0x006F3E2A: mov dword ptr [esp + 0xc], esi */
    MEM8(esp + 0x10) = (uint8_t)(1); /* 0x006F3E2E: mov byte ptr [esp + 0x10], 1 */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F3E33: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
L_006F3E38:
    ecx = MEM32(esp + 0x3C); /* 0x006F3E38: mov ecx, dword ptr [esp + 0x3c] */
    esi = POP32_VAL(esp); /* 0x006F3E3C: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F3E3D: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F3E3F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F3E44: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F3E46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3E47: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3E50u);

L_006F3E50:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F3E50: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3E53: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3E60u);

L_006F3E60:
    PUSH32(esp, 0x00804310u); /* 0x006F3E60: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F3E65: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F3E6A: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3E6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F3E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3E70u);

    goto L_006F3E70;
L_006EDB70:
    PUSH32(esp, ebp); /* 0x006EDB70: push ebp */
    ebp = esp; /* 0x006EDB71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EDB73: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006EDB76: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EDB79: push ebx */
    PUSH32(esp, esi); /* 0x006EDB7A: push esi */
    PUSH32(esp, edi); /* 0x006EDB7B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006EDB7C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x006EDB7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDCF4; /* 0x006EDB81: je 0x6edcf4 */
L_006EDB87:
    RECOMP_CALL(sub_006EE3A0); /* 0x006EDB87: call 0x6ee3a0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006EDB8C: mov ebx, eax */
    ecx = edi; /* 0x006EDB8E: mov ecx, edi */
    MEM32(ebx) = 1; /* 0x006EDB90: mov dword ptr [ebx], 1 */
    edx = ebx + 0x4; /* 0x006EDB96: lea edx, [ebx + 4] */
    esi = ecx + 0x1; /* 0x006EDB99: lea esi, [ecx + 1] */
    esp = esp; /* 0x006EDB9C: lea esp, [esp] */
L_006EDBA0:
    SET_LO8(eax, MEM8(ecx)); /* 0x006EDBA0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDBA2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EDBA3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDBA0; /* 0x006EDBA5: jne 0x6edba0 */
L_006EDBA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006EDBA7: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0x7Fu; /* 0x006EDBA9: mov esi, 0x7f */
    /* cmp ecx, esi */ /* 0x006EDBAE: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006EDBB0: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006EDBB3: push esi */
    PUSH32(esp, edi); /* 0x006EDBB4: push edi */
    PUSH32(esp, edx); /* 0x006EDBB5: push edx */
    RECOMP_CALL(sub_00780838); /* 0x006EDBB6: call 0x780838 */
    RECOMP_FLAGS_IN();
    MEM8(esi + ebx + 0x4) = (uint8_t)(0); /* 0x006EDBBB: mov byte ptr [esi + ebx + 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDBC0: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x84) = 0; /* 0x006EDBC3: mov dword ptr [ebx + 0x84], 0 */
    SET_LO8(eax, MEM8(edi)); /* 0x006EDBCD: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006EDBCF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDCDF; /* 0x006EDBD1: je 0x6edcdf */
L_006EDBD7:
    edx = ebp + 0xC; /* 0x006EDBD7: lea edx, [ebp + 0xc] */
    esi = ebp + 0x8; /* 0x006EDBDA: lea esi, [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x006EDBDD: sub edx, 8 */
    _flag_k = FK_CMP;
L_006EDBE0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDBE0: inc edi */
    _flag_k = FK_INC;
    /* cmp LO8(eax), 0x25u */ /* 0x006EDBE1: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EDCD5; /* 0x006EDBE3: jne 0x6edcd5 */
L_006EDBE9:
    esp = esp; /* 0x006EDBE9: lea esp, [esp] */
L_006EDBF0:
    SET_LO8(eax, MEM8(edi)); /* 0x006EDBF0: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x2Eu */ /* 0x006EDBF2: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDBFE; /* 0x006EDBF4: je 0x6edbfe */
L_006EDBF6:
    /* cmp LO8(eax), 0x30u */ /* 0x006EDBF6: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_006EDC01; /* 0x006EDBF8: jl 0x6edc01 */
L_006EDBFA:
    /* cmp LO8(eax), 0x39u */ /* 0x006EDBFA: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_006EDC01; /* 0x006EDBFC: jg 0x6edc01 */
L_006EDBFE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDBFE: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_006EDBF0; /* 0x006EDBFF: jmp 0x6edbf0 */
L_006EDC01:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x006EDC01: movsx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDC04: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x006EDC05: mov dword ptr [ebp + 8], edi */
    /* cmp eax, 0x78u */ /* 0x006EDC08: cmp eax, 0x78 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EDCCC; /* 0x006EDC0B: ja 0x6edccc */
L_006EDC11:
    eax = (uint32_t)MEM8(eax + 0x6EDD14); /* 0x006EDC11: movzx eax, byte ptr [eax + 0x6edd14] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6EDD00)); goto _ljump; }
L_006EDC1F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006EDC1F: dec edi */
    _flag_k = FK_DEC;
    goto L_006EDCCC; /* 0x006EDC20: jmp 0x6edccc */
L_006EDC25:
    ecx = MEM32(ebx + 0x84); /* 0x006EDC25: mov ecx, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EDC2B: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EDC2E: add edx, 4 */
    _flag_k = FK_ADD;
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x006EDC31: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x006EDC31: shl ecx, 7 */
    eax = MEM32(esi); /* 0x006EDC34: mov eax, dword ptr [esi] */
    MEM32(ecx + ebx + 0x88) = eax; /* 0x006EDC36: mov dword ptr [ecx + ebx + 0x88], eax */
    goto L_006EDCC6; /* 0x006EDC3D: jmp 0x6edcc6 */
L_006EDC42:
    eax = MEM32(ebx + 0x84); /* 0x006EDC42: mov eax, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x006EDC48: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x006EDC4B: add esi, 8 */
    _flag_k = FK_ADD;
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x006EDC4E: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x006EDC4E: shl eax, 7 */
    _xmm[0].u64[0] = MEM64(edx); _xmm[0].u64[1] = 0; /* 0x006EDC51: movsd xmm0, qword ptr [edx] */
    MEM64(eax + ebx + 0x88) = _xmm[0].u64[0]; /* 0x006EDC55: movsd qword ptr [eax + ebx + 0x88], xmm0 */
    goto L_006EDCC6; /* 0x006EDC5E: jmp 0x6edcc6 */
L_006EDC60:
    eax = MEM32(esi + 0x4); /* 0x006EDC60: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EDC63: add esi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x84); /* 0x006EDC66: mov ecx, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EDC6C: add edx, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EDC6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = edx; /* 0x006EDC71: mov dword ptr [esp + 0x10], edx */
    edx = 0x00804308u; /* 0x006EDC75: mov edx, 0x804308 */
    MEM32(esp + 0x14) = esi; /* 0x006EDC7A: mov dword ptr [esp + 0x14], esi */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x006EDC7E: cmovne edx, eax */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x006EDC81: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x006EDC81: shl ecx, 7 */
    eax = ecx + 0x88; /* 0x006EDC84: lea eax, [ecx + 0x88] */
    ecx = edx; /* 0x006EDC8A: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006EDC8C: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = eax; /* 0x006EDC8E: mov dword ptr [esp + 0xc], eax */
    esi = ecx + 0x1; /* 0x006EDC92: lea esi, [ecx + 1] */
L_006EDC95:
    SET_LO8(eax, MEM8(ecx)); /* 0x006EDC95: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDC97: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EDC98: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDC95; /* 0x006EDC9A: jne 0x6edc95 */
L_006EDC9C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006EDC9C: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0x7Fu; /* 0x006EDC9E: mov esi, 0x7f */
    /* cmp ecx, esi */ /* 0x006EDCA3: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006EDCA5: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006EDCA8: push esi */
    PUSH32(esp, edx); /* 0x006EDCA9: push edx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x006EDCAA: push dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_00780838); /* 0x006EDCAE: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x006EDCB3: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDCB7: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(esp + 0x10); /* 0x006EDCBA: mov edx, dword ptr [esp + 0x10] */
    MEM8(esi + eax) = (uint8_t)(0); /* 0x006EDCBE: mov byte ptr [esi + eax], 0 */
    esi = MEM32(esp + 0x14); /* 0x006EDCC2: mov esi, dword ptr [esp + 0x14] */
L_006EDCC6:
    _flag_a = (uint32_t)(MEM32(ebx + 0x84)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x84) = MEM32(ebx + 0x84) + 1; /* 0x006EDCC6: inc dword ptr [ebx + 0x84] */
    _flag_k = FK_INC;
L_006EDCCC:
    /* cmp MEM32(ebx + 0x84), 5 */ /* 0x006EDCCC: cmp dword ptr [ebx + 0x84], 5 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x84)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EDCDF; /* 0x006EDCD3: jge 0x6edcdf */
L_006EDCD5:
    SET_LO8(eax, MEM8(edi)); /* 0x006EDCD5: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006EDCD7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDBE0; /* 0x006EDCD9: jne 0x6edbe0 */
L_006EDCDF:
    RECOMP_CALL(sub_006EDD90); /* 0x006EDCDF: call 0x6edd90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006EDCE4: push eax */
    PUSH32(esp, 0x00800A98u); /* 0x006EDCE5: push 0x800a98 */
    PUSH32(esp, 1); /* 0x006EDCEA: push 1 */
    RECOMP_CALL(sub_006FD020); /* 0x006EDCEC: call 0x6fd020 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDCF1: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EDCF4:
    edi = POP32_VAL(esp); /* 0x006EDCF4: pop edi */
    esi = POP32_VAL(esp); /* 0x006EDCF5: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EDCF6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EDCF9: pop ebx */
    esp = ebp; /* 0x006EDCFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EDCFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDCFD: ret  */
L_006F3E70:
    PUSH32(esp, ebp); /* 0x006F3E70: push ebp */
    ebp = esp; /* 0x006F3E71: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006F3E73: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F3E74: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x9C), 0 */ /* 0x006F3E77: cmp dword ptr [esi + 0x9c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x9C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3E8E; /* 0x006F3E7E: je 0x6f3e8e */
L_006F3E80:
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x006F3E80: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(esi + 0xA0) */ /* 0x006F3E86: cmp eax, dword ptr [esi + 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3EAD; /* 0x006F3E8C: je 0x6f3ead */
L_006F3E8E:
    eax = MEM32(esi + 0x98); /* 0x006F3E8E: mov eax, dword ptr [esi + 0x98] */
    /* test eax, eax */ /* 0x006F3E94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F3EA6; /* 0x006F3E96: jne 0x6f3ea6 */
L_006F3E98:
    esi = POP32_VAL(esp); /* 0x006F3E98: pop esi */
    MEM32(ebp + 0x8) = 0x00806748u; /* 0x006F3E99: mov dword ptr [ebp + 8], 0x806748 */
    ebp = POP32_VAL(esp); /* 0x006F3EA0: pop ebp */
    RECOMP_BACKEDGE();
    goto L_006EDB70; /* 0x006F3EA1: jmp 0x6edb70 */
L_006F3EA6:
    PUSH32(esp, eax); /* 0x006F3EA6: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006F3EA7: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_006F3EAD:
    esi = POP32_VAL(esp); /* 0x006F3EAD: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F3EAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3EAF: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006EDC1Fu: goto L_006EDC1F;
      case 0x006EDC25u: goto L_006EDC25;
      case 0x006EDC42u: goto L_006EDC42;
      case 0x006EDC60u: goto L_006EDC60;
      case 0x006EDCCCu: goto L_006EDCCC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F3EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3EB0u);

    goto L_006F3EB0;
L_006EDB70:
    PUSH32(esp, ebp); /* 0x006EDB70: push ebp */
    ebp = esp; /* 0x006EDB71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EDB73: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006EDB76: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EDB79: push ebx */
    PUSH32(esp, esi); /* 0x006EDB7A: push esi */
    PUSH32(esp, edi); /* 0x006EDB7B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006EDB7C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x006EDB7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDCF4; /* 0x006EDB81: je 0x6edcf4 */
L_006EDB87:
    RECOMP_CALL(sub_006EE3A0); /* 0x006EDB87: call 0x6ee3a0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006EDB8C: mov ebx, eax */
    ecx = edi; /* 0x006EDB8E: mov ecx, edi */
    MEM32(ebx) = 1; /* 0x006EDB90: mov dword ptr [ebx], 1 */
    edx = ebx + 0x4; /* 0x006EDB96: lea edx, [ebx + 4] */
    esi = ecx + 0x1; /* 0x006EDB99: lea esi, [ecx + 1] */
    esp = esp; /* 0x006EDB9C: lea esp, [esp] */
L_006EDBA0:
    SET_LO8(eax, MEM8(ecx)); /* 0x006EDBA0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDBA2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EDBA3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDBA0; /* 0x006EDBA5: jne 0x6edba0 */
L_006EDBA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006EDBA7: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0x7Fu; /* 0x006EDBA9: mov esi, 0x7f */
    /* cmp ecx, esi */ /* 0x006EDBAE: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006EDBB0: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006EDBB3: push esi */
    PUSH32(esp, edi); /* 0x006EDBB4: push edi */
    PUSH32(esp, edx); /* 0x006EDBB5: push edx */
    RECOMP_CALL(sub_00780838); /* 0x006EDBB6: call 0x780838 */
    RECOMP_FLAGS_IN();
    MEM8(esi + ebx + 0x4) = (uint8_t)(0); /* 0x006EDBBB: mov byte ptr [esi + ebx + 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDBC0: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x84) = 0; /* 0x006EDBC3: mov dword ptr [ebx + 0x84], 0 */
    SET_LO8(eax, MEM8(edi)); /* 0x006EDBCD: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006EDBCF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDCDF; /* 0x006EDBD1: je 0x6edcdf */
L_006EDBD7:
    edx = ebp + 0xC; /* 0x006EDBD7: lea edx, [ebp + 0xc] */
    esi = ebp + 0x8; /* 0x006EDBDA: lea esi, [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x006EDBDD: sub edx, 8 */
    _flag_k = FK_CMP;
L_006EDBE0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDBE0: inc edi */
    _flag_k = FK_INC;
    /* cmp LO8(eax), 0x25u */ /* 0x006EDBE1: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EDCD5; /* 0x006EDBE3: jne 0x6edcd5 */
L_006EDBE9:
    esp = esp; /* 0x006EDBE9: lea esp, [esp] */
L_006EDBF0:
    SET_LO8(eax, MEM8(edi)); /* 0x006EDBF0: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x2Eu */ /* 0x006EDBF2: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDBFE; /* 0x006EDBF4: je 0x6edbfe */
L_006EDBF6:
    /* cmp LO8(eax), 0x30u */ /* 0x006EDBF6: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_006EDC01; /* 0x006EDBF8: jl 0x6edc01 */
L_006EDBFA:
    /* cmp LO8(eax), 0x39u */ /* 0x006EDBFA: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_006EDC01; /* 0x006EDBFC: jg 0x6edc01 */
L_006EDBFE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDBFE: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_006EDBF0; /* 0x006EDBFF: jmp 0x6edbf0 */
L_006EDC01:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x006EDC01: movsx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDC04: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x006EDC05: mov dword ptr [ebp + 8], edi */
    /* cmp eax, 0x78u */ /* 0x006EDC08: cmp eax, 0x78 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EDCCC; /* 0x006EDC0B: ja 0x6edccc */
L_006EDC11:
    eax = (uint32_t)MEM8(eax + 0x6EDD14); /* 0x006EDC11: movzx eax, byte ptr [eax + 0x6edd14] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6EDD00)); goto _ljump; }
L_006EDC1F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006EDC1F: dec edi */
    _flag_k = FK_DEC;
    goto L_006EDCCC; /* 0x006EDC20: jmp 0x6edccc */
L_006EDC25:
    ecx = MEM32(ebx + 0x84); /* 0x006EDC25: mov ecx, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EDC2B: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EDC2E: add edx, 4 */
    _flag_k = FK_ADD;
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x006EDC31: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x006EDC31: shl ecx, 7 */
    eax = MEM32(esi); /* 0x006EDC34: mov eax, dword ptr [esi] */
    MEM32(ecx + ebx + 0x88) = eax; /* 0x006EDC36: mov dword ptr [ecx + ebx + 0x88], eax */
    goto L_006EDCC6; /* 0x006EDC3D: jmp 0x6edcc6 */
L_006EDC42:
    eax = MEM32(ebx + 0x84); /* 0x006EDC42: mov eax, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x006EDC48: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x006EDC4B: add esi, 8 */
    _flag_k = FK_ADD;
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x006EDC4E: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x006EDC4E: shl eax, 7 */
    _xmm[0].u64[0] = MEM64(edx); _xmm[0].u64[1] = 0; /* 0x006EDC51: movsd xmm0, qword ptr [edx] */
    MEM64(eax + ebx + 0x88) = _xmm[0].u64[0]; /* 0x006EDC55: movsd qword ptr [eax + ebx + 0x88], xmm0 */
    goto L_006EDCC6; /* 0x006EDC5E: jmp 0x6edcc6 */
L_006EDC60:
    eax = MEM32(esi + 0x4); /* 0x006EDC60: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EDC63: add esi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x84); /* 0x006EDC66: mov ecx, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EDC6C: add edx, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EDC6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = edx; /* 0x006EDC71: mov dword ptr [esp + 0x10], edx */
    edx = 0x00804308u; /* 0x006EDC75: mov edx, 0x804308 */
    MEM32(esp + 0x14) = esi; /* 0x006EDC7A: mov dword ptr [esp + 0x14], esi */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x006EDC7E: cmovne edx, eax */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x006EDC81: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x006EDC81: shl ecx, 7 */
    eax = ecx + 0x88; /* 0x006EDC84: lea eax, [ecx + 0x88] */
    ecx = edx; /* 0x006EDC8A: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006EDC8C: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = eax; /* 0x006EDC8E: mov dword ptr [esp + 0xc], eax */
    esi = ecx + 0x1; /* 0x006EDC92: lea esi, [ecx + 1] */
L_006EDC95:
    SET_LO8(eax, MEM8(ecx)); /* 0x006EDC95: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDC97: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EDC98: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDC95; /* 0x006EDC9A: jne 0x6edc95 */
L_006EDC9C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006EDC9C: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0x7Fu; /* 0x006EDC9E: mov esi, 0x7f */
    /* cmp ecx, esi */ /* 0x006EDCA3: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006EDCA5: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006EDCA8: push esi */
    PUSH32(esp, edx); /* 0x006EDCA9: push edx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x006EDCAA: push dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_00780838); /* 0x006EDCAE: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x006EDCB3: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDCB7: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(esp + 0x10); /* 0x006EDCBA: mov edx, dword ptr [esp + 0x10] */
    MEM8(esi + eax) = (uint8_t)(0); /* 0x006EDCBE: mov byte ptr [esi + eax], 0 */
    esi = MEM32(esp + 0x14); /* 0x006EDCC2: mov esi, dword ptr [esp + 0x14] */
L_006EDCC6:
    _flag_a = (uint32_t)(MEM32(ebx + 0x84)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x84) = MEM32(ebx + 0x84) + 1; /* 0x006EDCC6: inc dword ptr [ebx + 0x84] */
    _flag_k = FK_INC;
L_006EDCCC:
    /* cmp MEM32(ebx + 0x84), 5 */ /* 0x006EDCCC: cmp dword ptr [ebx + 0x84], 5 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x84)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EDCDF; /* 0x006EDCD3: jge 0x6edcdf */
L_006EDCD5:
    SET_LO8(eax, MEM8(edi)); /* 0x006EDCD5: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006EDCD7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDBE0; /* 0x006EDCD9: jne 0x6edbe0 */
L_006EDCDF:
    RECOMP_CALL(sub_006EDD90); /* 0x006EDCDF: call 0x6edd90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006EDCE4: push eax */
    PUSH32(esp, 0x00800A98u); /* 0x006EDCE5: push 0x800a98 */
    PUSH32(esp, 1); /* 0x006EDCEA: push 1 */
    RECOMP_CALL(sub_006FD020); /* 0x006EDCEC: call 0x6fd020 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDCF1: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EDCF4:
    edi = POP32_VAL(esp); /* 0x006EDCF4: pop edi */
    esi = POP32_VAL(esp); /* 0x006EDCF5: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EDCF6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EDCF9: pop ebx */
    esp = ebp; /* 0x006EDCFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EDCFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDCFD: ret  */
L_006F3EB0:
    PUSH32(esp, ebp); /* 0x006F3EB0: push ebp */
    ebp = esp; /* 0x006F3EB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006F3EB3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F3EB4: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x9C), 0 */ /* 0x006F3EB7: cmp dword ptr [esi + 0x9c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x9C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3ECE; /* 0x006F3EBE: je 0x6f3ece */
L_006F3EC0:
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x006F3EC0: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(esi + 0xA0) */ /* 0x006F3EC6: cmp eax, dword ptr [esi + 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3EED; /* 0x006F3ECC: je 0x6f3eed */
L_006F3ECE:
    eax = MEM32(esi + 0x98); /* 0x006F3ECE: mov eax, dword ptr [esi + 0x98] */
    /* test eax, eax */ /* 0x006F3ED4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F3EE6; /* 0x006F3ED6: jne 0x6f3ee6 */
L_006F3ED8:
    esi = POP32_VAL(esp); /* 0x006F3ED8: pop esi */
    MEM32(ebp + 0x8) = 0x00806748u; /* 0x006F3ED9: mov dword ptr [ebp + 8], 0x806748 */
    ebp = POP32_VAL(esp); /* 0x006F3EE0: pop ebp */
    RECOMP_BACKEDGE();
    goto L_006EDB70; /* 0x006F3EE1: jmp 0x6edb70 */
L_006F3EE6:
    PUSH32(esp, eax); /* 0x006F3EE6: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006F3EE7: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006F3EED:
    esi = POP32_VAL(esp); /* 0x006F3EED: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F3EEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F3EEF: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006EDC1Fu: goto L_006EDC1F;
      case 0x006EDC25u: goto L_006EDC25;
      case 0x006EDC42u: goto L_006EDC42;
      case 0x006EDC60u: goto L_006EDC60;
      case 0x006EDCCCu: goto L_006EDCCC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F3EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F3EF0u);

L_006F3EF0:
    /* cmp MEM32(0x926A98), 0 */ /* 0x006F3EF0: cmp dword ptr [0x926a98], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(0x926A84); /* 0x006F3EF7: mov ecx, dword ptr [0x926a84] */
    edx = MEM32(0x926A88); /* 0x006F3EFD: mov edx, dword ptr [0x926a88] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F3F14; /* 0x006F3F03: je 0x6f3f14 */
L_006F3F05:
    /* test ecx, ecx */ /* 0x006F3F05: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x00409980u; /* 0x006F3F07: mov eax, 0x409980 */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = eax; } /* 0x006F3F0C: cmove ecx, eax */
    /* test edx, edx */ /* 0x006F3F0F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { edx = eax; } /* 0x006F3F11: cmove edx, eax */
L_006F3F14:
    eax = MEM32(0x926A58); /* 0x006F3F14: mov eax, dword ptr [0x926a58] */
    /* test eax, eax */ /* 0x006F3F19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006F3F1B: push esi */
    esi = 0x006F3D60u; /* 0x006F3F1C: mov esi, 0x6f3d60 */
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3F21: cmove eax, esi */
    esi = 0x006F3E60u; /* 0x006F3F24: mov esi, 0x6f3e60 */
    MEM32(0x926A58) = eax; /* 0x006F3F29: mov dword ptr [0x926a58], eax */
    eax = MEM32(0x926A5C); /* 0x006F3F2E: mov eax, dword ptr [0x926a5c] */
    /* test eax, eax */ /* 0x006F3F33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3F35: cmove eax, esi */
    esi = 0x00409980u; /* 0x006F3F38: mov esi, 0x409980 */
    MEM32(0x926A5C) = eax; /* 0x006F3F3D: mov dword ptr [0x926a5c], eax */
    eax = MEM32(0x926A60); /* 0x006F3F42: mov eax, dword ptr [0x926a60] */
    /* test eax, eax */ /* 0x006F3F47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3F49: cmove eax, esi */
    esi = 0x00409980u; /* 0x006F3F4C: mov esi, 0x409980 */
    MEM32(0x926A60) = eax; /* 0x006F3F51: mov dword ptr [0x926a60], eax */
    eax = MEM32(0x926A64); /* 0x006F3F56: mov eax, dword ptr [0x926a64] */
    /* test eax, eax */ /* 0x006F3F5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3F5D: cmove eax, esi */
    esi = 0x00409980u; /* 0x006F3F60: mov esi, 0x409980 */
    MEM32(0x926A64) = eax; /* 0x006F3F65: mov dword ptr [0x926a64], eax */
    eax = MEM32(0x926A68); /* 0x006F3F6A: mov eax, dword ptr [0x926a68] */
    /* test eax, eax */ /* 0x006F3F6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3F71: cmove eax, esi */
    esi = 0x006658D0u; /* 0x006F3F74: mov esi, 0x6658d0 */
    MEM32(0x926A68) = eax; /* 0x006F3F79: mov dword ptr [0x926a68], eax */
    eax = MEM32(0x926A6C); /* 0x006F3F7E: mov eax, dword ptr [0x926a6c] */
    /* test eax, eax */ /* 0x006F3F83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3F85: cmove eax, esi */
    esi = 0x006658D0u; /* 0x006F3F88: mov esi, 0x6658d0 */
    MEM32(0x926A6C) = eax; /* 0x006F3F8D: mov dword ptr [0x926a6c], eax */
    eax = MEM32(0x926A70); /* 0x006F3F92: mov eax, dword ptr [0x926a70] */
    /* test eax, eax */ /* 0x006F3F97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3F99: cmove eax, esi */
    esi = 0x006F3E50u; /* 0x006F3F9C: mov esi, 0x6f3e50 */
    MEM32(0x926A70) = eax; /* 0x006F3FA1: mov dword ptr [0x926a70], eax */
    eax = MEM32(0x926A74); /* 0x006F3FA6: mov eax, dword ptr [0x926a74] */
    /* test eax, eax */ /* 0x006F3FAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3FAD: cmove eax, esi */
    esi = 0x00409980u; /* 0x006F3FB0: mov esi, 0x409980 */
    MEM32(0x926A74) = eax; /* 0x006F3FB5: mov dword ptr [0x926a74], eax */
    eax = MEM32(0x926A78); /* 0x006F3FBA: mov eax, dword ptr [0x926a78] */
    /* test eax, eax */ /* 0x006F3FBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3FC1: cmove eax, esi */
    esi = 0x00409980u; /* 0x006F3FC4: mov esi, 0x409980 */
    MEM32(0x926A78) = eax; /* 0x006F3FC9: mov dword ptr [0x926a78], eax */
    eax = MEM32(0x926A7C); /* 0x006F3FCE: mov eax, dword ptr [0x926a7c] */
    /* test eax, eax */ /* 0x006F3FD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3FD5: cmove eax, esi */
    esi = 0x00409980u; /* 0x006F3FD8: mov esi, 0x409980 */
    MEM32(0x926A7C) = eax; /* 0x006F3FDD: mov dword ptr [0x926a7c], eax */
    eax = MEM32(0x926A80); /* 0x006F3FE2: mov eax, dword ptr [0x926a80] */
    /* test eax, eax */ /* 0x006F3FE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006F3FE9: cmove eax, esi */
    /* test ecx, ecx */ /* 0x006F3FEC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x926A80) = eax; /* 0x006F3FEE: mov dword ptr [0x926a80], eax */
    eax = 0x006F3E70u; /* 0x006F3FF3: mov eax, 0x6f3e70 */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = eax; } /* 0x006F3FF8: cmove ecx, eax */
    eax = 0x006F3EB0u; /* 0x006F3FFB: mov eax, 0x6f3eb0 */
    /* test edx, edx */ /* 0x006F4000: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x926A84) = ecx; /* 0x006F4002: mov dword ptr [0x926a84], ecx */
    ecx = 0x00409980u; /* 0x006F4008: mov ecx, 0x409980 */
    if (TEST_Z(_flag_a, _flag_b)) { edx = eax; } /* 0x006F400D: cmove edx, eax */
    eax = MEM32(0x926A8C); /* 0x006F4010: mov eax, dword ptr [0x926a8c] */
    /* test eax, eax */ /* 0x006F4015: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x926A88) = edx; /* 0x006F4017: mov dword ptr [0x926a88], edx */
    esi = POP32_VAL(esp); /* 0x006F401D: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F401E: cmove eax, ecx */
    ecx = 0x00409980u; /* 0x006F4021: mov ecx, 0x409980 */
    MEM32(0x926A8C) = eax; /* 0x006F4026: mov dword ptr [0x926a8c], eax */
    eax = MEM32(0x926A90); /* 0x006F402B: mov eax, dword ptr [0x926a90] */
    /* test eax, eax */ /* 0x006F4030: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F4032: cmove eax, ecx */
    MEM32(0x926A90) = eax; /* 0x006F4035: mov dword ptr [0x926a90], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F403A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F4040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F4040u);

L_006F4040:
    PUSH32(esp, ebp); /* 0x006F4040: push ebp */
    ebp = esp; /* 0x006F4041: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F4043: push ecx */
    PUSH32(esp, ebx); /* 0x006F4044: push ebx */
    ebx = ecx; /* 0x006F4045: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x006F4047: mov dword ptr [ebp - 4], edx */
    PUSH32(esp, esi); /* 0x006F404A: push esi */
    esi = ebx; /* 0x006F404B: mov esi, ebx */
    PUSH32(esp, edi); /* 0x006F404D: push edi */
    ecx = esi + 0x1; /* 0x006F404E: lea ecx, [esi + 1] */
L_006F4051:
    SET_LO8(eax, MEM8(esi)); /* 0x006F4051: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F4053: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F4054: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4051; /* 0x006F4056: jne 0x6f4051 */
L_006F4058:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x006F4058: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 9; /* 0x006F405A: add esi, 9 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006F405D: push esi */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F405E: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F4064: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4066: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F4069: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4077; /* 0x006F406B: jne 0x6f4077 */
L_006F406D:
    edi = POP32_VAL(esp); /* 0x006F406D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F406E: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F406F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F4072: pop ebx */
    esp = ebp; /* 0x006F4073: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4075: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4076: ret  */
L_006F4077:
    eax = MEM32(ebp + (-0x4)); /* 0x006F4077: mov eax, dword ptr [ebp - 4] */
    edx = edi + 0x8; /* 0x006F407A: lea edx, [edi + 8] */
    ecx = ebx; /* 0x006F407D: mov ecx, ebx */
    MEM32(edi) = eax; /* 0x006F407F: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFF8u; /* 0x006F4081: add esi, -8 */
    _flag_k = FK_ADD;
    eax = ecx + 0x1; /* 0x006F4084: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F4087: mov dword ptr [ebp - 4], eax */
    ebx = ebx; /* 0x006F408A: lea ebx, [ebx] */
L_006F4090:
    SET_LO8(eax, MEM8(ecx)); /* 0x006F4090: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F4092: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F4093: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4090; /* 0x006F4095: jne 0x6f4090 */
L_006F4097:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x006F4097: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    /* test esi, esi */ /* 0x006F409A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F40B4; /* 0x006F409C: je 0x6f40b4 */
L_006F409E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F409E: dec esi */
    _flag_k = FK_DEC;
    /* cmp ecx, esi */ /* 0x006F409F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006F40A1: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006F40A4: push esi */
    PUSH32(esp, ebx); /* 0x006F40A5: push ebx */
    PUSH32(esp, edx); /* 0x006F40A6: push edx */
    RECOMP_CALL(sub_00780838); /* 0x006F40A7: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F40AC: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + edi + 0x8) = (uint8_t)(0); /* 0x006F40AF: mov byte ptr [esi + edi + 8], 0 */
L_006F40B4:
    eax = MEM32(0x926AAC); /* 0x006F40B4: mov eax, dword ptr [0x926aac] */
    /* test eax, eax */ /* 0x006F40B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F40CC; /* 0x006F40BB: jne 0x6f40cc */
L_006F40BD:
    PUSH32(esp, 0x00806748u); /* 0x006F40BD: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F40C2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F40C7: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F40D3; /* 0x006F40CA: jmp 0x6f40d3 */
L_006F40CC:
    PUSH32(esp, eax); /* 0x006F40CC: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006F40CD: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_006F40D3:
    ecx = MEM32(ebp + 0x8); /* 0x006F40D3: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x006F40D6: mov eax, dword ptr [ecx] */
    MEM32(edi + 0x4) = eax; /* 0x006F40D8: mov dword ptr [edi + 4], eax */
    MEM32(ecx) = edi; /* 0x006F40DB: mov dword ptr [ecx], edi */
    ecx = MEM32(ebp + 0xC); /* 0x006F40DD: mov ecx, dword ptr [ebp + 0xc] */
    esi = MEM32(ecx); /* 0x006F40E0: mov esi, dword ptr [ecx] */
    eax = esi + 0x1; /* 0x006F40E2: lea eax, [esi + 1] */
    MEM32(ecx) = eax; /* 0x006F40E5: mov dword ptr [ecx], eax */
    eax = MEM32(0x926AAC); /* 0x006F40E7: mov eax, dword ptr [0x926aac] */
    /* test eax, eax */ /* 0x006F40EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4106; /* 0x006F40EE: jne 0x6f4106 */
L_006F40F0:
    PUSH32(esp, 0x00806748u); /* 0x006F40F0: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F40F5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F40FA: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F40FD: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F40FF: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4100: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4101: pop ebx */
    esp = ebp; /* 0x006F4102: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4104: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4105: ret  */
L_006F4106:
    PUSH32(esp, eax); /* 0x006F4106: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006F4107: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006F410D: pop edi */
    eax = esi; /* 0x006F410E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F4110: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4111: pop ebx */
    esp = ebp; /* 0x006F4112: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4114: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4115: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F4120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F4120u);

L_006F4120:
    PUSH32(esp, ebp); /* 0x006F4120: push ebp */
    ebp = esp; /* 0x006F4121: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F4123: push ecx */
    PUSH32(esp, ebx); /* 0x006F4124: push ebx */
    ebx = ecx; /* 0x006F4125: mov ebx, ecx */
    eax = edx; /* 0x006F4127: mov eax, edx */
    PUSH32(esp, esi); /* 0x006F4129: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F412A: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebx); /* 0x006F412D: mov esi, dword ptr [ebx] */
    /* test esi, esi */ /* 0x006F412F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F415B; /* 0x006F4131: je 0x6f415b */
L_006F4133:
    PUSH32(esp, edi); /* 0x006F4133: push edi */
L_006F4134:
    eax = MEM32(esi); /* 0x006F4134: mov eax, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x006F4136: mov edi, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006F4139: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4147; /* 0x006F413B: je 0x6f4147 */
L_006F413D:
    PUSH32(esp, eax); /* 0x006F413D: push eax */
    RECOMP_ICALL(MEM32(0x926A8C)); /* 0x006F413E: call dword ptr [0x926a8c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4144: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4147:
    PUSH32(esp, esi); /* 0x006F4147: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F4148: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F414E: add esp, 4 */
    _flag_k = FK_ADD;
    esi = edi; /* 0x006F4151: mov esi, edi */
    /* test edi, edi */ /* 0x006F4153: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4134; /* 0x006F4155: jne 0x6f4134 */
L_006F4157:
    eax = MEM32(ebp + (-0x4)); /* 0x006F4157: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006F415A: pop edi */
L_006F415B:
    MEM32(ebx) = 0; /* 0x006F415B: mov dword ptr [ebx], 0 */
    esi = POP32_VAL(esp); /* 0x006F4161: pop esi */
    MEM32(eax) = 0; /* 0x006F4162: mov dword ptr [eax], 0 */
    ebx = POP32_VAL(esp); /* 0x006F4168: pop ebx */
    esp = ebp; /* 0x006F4169: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F416B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F416C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F4170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F4170u);

L_006F4170:
    PUSH32(esp, ebp); /* 0x006F4170: push ebp */
    ebp = esp; /* 0x006F4171: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F4173: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x006F4176: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F4179: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F417E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x40) = eax; /* 0x006F4180: mov dword ptr [esp + 0x40], eax */
    eax = ecx; /* 0x006F4184: mov eax, ecx */
    MEM32(esp + 0x4) = eax; /* 0x006F4186: mov dword ptr [esp + 4], eax */
    PUSH32(esp, esi); /* 0x006F418A: push esi */
    esi = edx; /* 0x006F418B: mov esi, edx */
    edx = MEM32(ebp + 0x8); /* 0x006F418D: mov edx, dword ptr [ebp + 8] */
    ecx = esi; /* 0x006F4190: mov ecx, esi */
    /* test eax, eax */ /* 0x006F4192: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F41A2; /* 0x006F4194: je 0x6f41a2 */
L_006F4196:
    PUSH32(esp, 0x00926ABCu); /* 0x006F4196: push 0x926abc */
    PUSH32(esp, 0x00926AC4u); /* 0x006F419B: push 0x926ac4 */
    goto L_006F41AC; /* 0x006F41A0: jmp 0x6f41ac */
L_006F41A2:
    PUSH32(esp, 0x00926AB8u); /* 0x006F41A2: push 0x926ab8 */
    PUSH32(esp, 0x00926AC0u); /* 0x006F41A7: push 0x926ac0 */
L_006F41AC:
    RECOMP_CALL(sub_006F4040); /* 0x006F41AC: call 0x6f4040 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F41B1: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F41B3: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x006F41B6: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F41F7; /* 0x006F41B9: je 0x6f41f7 */
L_006F41BB:
    eax = MEM32(0x9254B4); /* 0x006F41BB: mov eax, dword ptr [0x9254b4] */
    /* test eax, eax */ /* 0x006F41C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F41C9; /* 0x006F41C2: je 0x6f41c9 */
L_006F41C4:
    /* test MEM8(eax), 1 */ /* 0x006F41C4: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F41F7; /* 0x006F41C7: jne 0x6f41f7 */
L_006F41C9:
    PUSH32(esp, 0x38u); /* 0x006F41C9: push 0x38 */
    eax = esp + 0x10; /* 0x006F41CB: lea eax, [esp + 0x10] */
    PUSH32(esp, 0); /* 0x006F41CF: push 0 */
    PUSH32(esp, eax); /* 0x006F41D1: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006F41D2: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x14); /* 0x006F41D7: mov eax, dword ptr [esp + 0x14] */
    ecx = esp + 0x18; /* 0x006F41DB: lea ecx, [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F41DF: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = 0x1100u; /* 0x006F41E2: mov dword ptr [esp + 0xc], 0x1100 */
    MEM32(esp + 0x14) = esi; /* 0x006F41EA: mov dword ptr [esp + 0x14], esi */
    MEM8(esp + 0x18) = (uint8_t)(LO8(eax)); /* 0x006F41EE: mov byte ptr [esp + 0x18], al */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F41F2: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
L_006F41F7:
    ecx = MEM32(esp + 0x44); /* 0x006F41F7: mov ecx, dword ptr [esp + 0x44] */
    esi = POP32_VAL(esp); /* 0x006F41FB: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F41FC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F41FE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F4203: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4205: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4206: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F42B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F42B0u);

L_006F42B0:
    PUSH32(esp, ebp); /* 0x006F42B0: push ebp */
    ebp = esp; /* 0x006F42B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F42B3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F42B6: push ebx */
    ebx = ecx; /* 0x006F42B7: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x006F42B9: mov dword ptr [ebp - 4], edx */
    ecx = MEM32(ebp + 0x8); /* 0x006F42BC: mov ecx, dword ptr [ebp + 8] */
    eax = edx; /* 0x006F42BF: mov eax, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F42C1: mov dword ptr [ebp - 8], eax */
    /* test ecx, ecx */ /* 0x006F42C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F434B; /* 0x006F42C6: je 0x6f434b */
L_006F42CC:
    PUSH32(esp, esi); /* 0x006F42CC: push esi */
    PUSH32(esp, edi); /* 0x006F42CD: push edi */
    edi = edi; /* 0x006F42CE: mov edi, edi */
L_006F42D0:
    esi = MEM32(ebx + 0xA4); /* 0x006F42D0: mov esi, dword ptr [ebx + 0xa4] */
    /* test esi, esi */ /* 0x006F42D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4346; /* 0x006F42D8: je 0x6f4346 */
L_006F42DA:
    eax = MEM32(esi + 0x2004); /* 0x006F42DA: mov eax, dword ptr [esi + 0x2004] */
    edi = MEM32(esi + 0x2000); /* 0x006F42E0: mov edi, dword ptr [esi + 0x2000] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006F42E6: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, edi */ /* 0x006F42E8: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = ecx; } /* 0x006F42EA: cmovb edi, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x006F42ED: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006F42EF: push edi */
    PUSH32(esp, eax); /* 0x006F42F0: push eax */
    PUSH32(esp, edx); /* 0x006F42F1: push edx */
    RECOMP_CALL(sub_00780838); /* 0x006F42F2: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x2004)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x2004) = MEM32(esi + 0x2004) + edi; /* 0x006F42F7: add dword ptr [esi + 0x2004], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F42FD: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x006F4300: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x006F4303: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x006F4306: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx + 0xB0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) - edi; /* 0x006F4308: sub dword ptr [ebx + 0xb0], edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x006F430E: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x2004); /* 0x006F4310: mov eax, dword ptr [esi + 0x2004] */
    MEM32(ebp + (-0x4)) = edx; /* 0x006F4316: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x8) = ecx; /* 0x006F4319: mov dword ptr [ebp + 8], ecx */
    /* cmp eax, MEM32(esi + 0x2000) */ /* 0x006F431C: cmp eax, dword ptr [esi + 0x2000] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x2000));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4342; /* 0x006F4322: jne 0x6f4342 */
L_006F4324:
    eax = MEM32(esi + 0x2008); /* 0x006F4324: mov eax, dword ptr [esi + 0x2008] */
    MEM32(ebx + 0xA4) = eax; /* 0x006F432A: mov dword ptr [ebx + 0xa4], eax */
    eax = MEM32(ebx + 0xAC); /* 0x006F4330: mov eax, dword ptr [ebx + 0xac] */
    MEM32(esi + 0x2008) = eax; /* 0x006F4336: mov dword ptr [esi + 0x2008], eax */
    MEM32(ebx + 0xAC) = esi; /* 0x006F433C: mov dword ptr [ebx + 0xac], esi */
L_006F4342:
    /* test ecx, ecx */ /* 0x006F4342: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F42D0; /* 0x006F4344: jne 0x6f42d0 */
L_006F4346:
    eax = MEM32(ebp + (-0x8)); /* 0x006F4346: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x006F4349: pop edi */
    esi = POP32_VAL(esp); /* 0x006F434A: pop esi */
L_006F434B:
    /* cmp MEM32(ebx + 0xA4), 0 */ /* 0x006F434B: cmp dword ptr [ebx + 0xa4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xA4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F435E; /* 0x006F4352: jne 0x6f435e */
L_006F4354:
    MEM32(ebx + 0xA8) = 0; /* 0x006F4354: mov dword ptr [ebx + 0xa8], 0 */
L_006F435E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x006F435E: sub edx, eax */
    _flag_k = FK_CMP;
    eax = edx; /* 0x006F4360: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x006F4362: pop ebx */
    esp = ebp; /* 0x006F4363: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4365: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4366: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F4370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F4370u);

L_006F4370:
    PUSH32(esp, ebp); /* 0x006F4370: push ebp */
    ebp = esp; /* 0x006F4371: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F4373: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006F4374: mov ebx, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x006F4377: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x006F4379: push esi */
    esi = MEM32(ebp + 0x10); /* 0x006F437A: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x006F437D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006F437E: mov edi, dword ptr [ebp + 0xc] */
    edx = edi; /* 0x006F4381: mov edx, edi */
    PUSH32(esp, esi); /* 0x006F4383: push esi */
    RECOMP_CALL(sub_006F42B0); /* 0x006F4384: call 0x6f42b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x006F4389: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F438B: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F438E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F43A3; /* 0x006F4390: jle 0x6f43a3 */
L_006F4392:
    ecx = (uint32_t)MEM8(ebx + 0xB); /* 0x006F4392: movzx ecx, byte ptr [ebx + 0xb] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006F4396: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006F4398: push esi */
    PUSH32(esp, ecx); /* 0x006F4399: push ecx */
    PUSH32(esp, eax); /* 0x006F439A: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006F439B: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F43A0: add esp, 0xc */
    _flag_k = FK_ADD;
L_006F43A3:
    edi = POP32_VAL(esp); /* 0x006F43A3: pop edi */
    esi = POP32_VAL(esp); /* 0x006F43A4: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F43A5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F43A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F43A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F43B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F43B0u);

L_006F43B0:
    PUSH32(esp, ebp); /* 0x006F43B0: push ebp */
    ebp = esp; /* 0x006F43B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F43B3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F43B6: push ebx */
    PUSH32(esp, esi); /* 0x006F43B7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F43B8: mov esi, dword ptr [ebp + 8] */
    ebx = esi + 0x1C; /* 0x006F43BB: lea ebx, [esi + 0x1c] */
    PUSH32(esp, edi); /* 0x006F43BE: push edi */
    eax = (uint32_t)MEM8(esi + 0xB); /* 0x006F43BF: movzx eax, byte ptr [esi + 0xb] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F43C3: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(esi + 0xC); /* 0x006F43C6: movzx eax, word ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x006F43CA: imul eax, eax, 0x3e8 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F43D0: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi + 0x4); /* 0x006F43D1: idiv dword ptr [esi + 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* cmp MEM32(ebx), 0 */ /* 0x006F43D4: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x006F43D7: mov dword ptr [ebp - 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F43E4; /* 0x006F43DA: je 0x6f43e4 */
L_006F43DC:
    edi = MEM32(esi + 0x30); /* 0x006F43DC: mov edi, dword ptr [esi + 0x30] */
    MEM32(ebp + 0x8) = edi; /* 0x006F43DF: mov dword ptr [ebp + 8], edi */
    goto L_006F43EA; /* 0x006F43E2: jmp 0x6f43ea */
L_006F43E4:
    eax = MEM32(esi + 0x10); /* 0x006F43E4: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x006F43E7: mov dword ptr [ebp + 8], eax */
L_006F43EA:
    eax = MEM32(esi + 0x18); /* 0x006F43EA: mov eax, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F43ED: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + 0x14); /* 0x006F43F0: mov eax, dword ptr [esi + 0x14] */
    PUSH32(esp, 2); /* 0x006F43F3: push 2 */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F43F5: mov dword ptr [ebp - 0xc], eax */
    RECOMP_ICALL(MEM32(0x7CC118)); /* 0x006F43F8: call dword ptr [0x7cc118] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006F43FE: push eax */
    RECOMP_ICALL(MEM32(0x7CC198)); /* 0x006F43FF: call dword ptr [0x7cc198] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4405: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F441B; /* 0x006F4407: jne 0x6f441b */
L_006F4409:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006F4409: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006F440F: mov edx, eax */
    ecx = 0x00806BF4u; /* 0x006F4411: mov ecx, 0x806bf4 */
    RECOMP_CALL(sub_006FFE20); /* 0x006F4416: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
L_006F441B:
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x006F441B: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F4421: push esi */
    MEM32(esi + 0xA0) = eax; /* 0x006F4422: mov dword ptr [esi + 0xa0], eax */
    RECOMP_ICALL(MEM32(0x926A60)); /* 0x006F4428: call dword ptr [0x926a60] */
    RECOMP_FLAGS_IN();
L_006F442E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F442E: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4431:
    edi = esi + 0x84; /* 0x006F4431: lea edi, [esi + 0x84] */
L_006F4437:
    edx = MEM32(edi); /* 0x006F4437: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x006F4439: mov ecx, edx */
    eax = edx; /* 0x006F443B: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x006F443D: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006F4441: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4437; /* 0x006F4443: jne 0x6f4437 */
L_006F4445:
    /* test edx, edx */ /* 0x006F4445: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F45D1; /* 0x006F4447: jne 0x6f45d1 */
L_006F444D:
    /* cmp MEM32(ebx), edx */ /* 0x006F444D: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4456; /* 0x006F444F: je 0x6f4456 */
L_006F4451:
    edi = MEM32(esi + 0x2C); /* 0x006F4451: mov edi, dword ptr [esi + 0x2c] */
    goto L_006F447E; /* 0x006F4454: jmp 0x6f447e */
L_006F4456:
    edi = esi + 0x88; /* 0x006F4456: lea edi, [esi + 0x88] */
    esp = esp; /* 0x006F445C: lea esp, [esp] */
L_006F4460:
    edx = MEM32(edi); /* 0x006F4460: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x006F4462: mov ecx, edx */
    eax = edx; /* 0x006F4464: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x006F4466: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006F446A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4460; /* 0x006F446C: jne 0x6f4460 */
L_006F446E:
    /* test edx, edx */ /* 0x006F446E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4482; /* 0x006F4470: je 0x6f4482 */
L_006F4472:
    PUSH32(esp, esi); /* 0x006F4472: push esi */
    RECOMP_ICALL(MEM32(0x926A70)); /* 0x006F4473: call dword ptr [0x926a70] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4479: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x006F447C: mov edi, eax */
L_006F447E:
    /* test edi, edi */ /* 0x006F447E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4488; /* 0x006F4480: jne 0x6f4488 */
L_006F4482:
    edi = MEM32(esi + 0x94); /* 0x006F4482: mov edi, dword ptr [esi + 0x94] */
L_006F4488:
    ebx = esi + 0x88; /* 0x006F4488: lea ebx, [esi + 0x88] */
    edi = edi; /* 0x006F448E: mov edi, edi */
L_006F4490:
    edx = MEM32(ebx); /* 0x006F4490: mov edx, dword ptr [ebx] */
    ecx = edx; /* 0x006F4492: mov ecx, edx */
    eax = edx; /* 0x006F4494: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x006F4496: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006F449A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4490; /* 0x006F449C: jne 0x6f4490 */
L_006F449E:
    /* test edx, edx */ /* 0x006F449E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4518; /* 0x006F44A0: je 0x6f4518 */
L_006F44A2:
    eax = MEM32(esi + 0x98); /* 0x006F44A2: mov eax, dword ptr [esi + 0x98] */
    /* test eax, eax */ /* 0x006F44A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F44BB; /* 0x006F44AA: jne 0x6f44bb */
L_006F44AC:
    PUSH32(esp, 0x00806748u); /* 0x006F44AC: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F44B1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F44B6: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F44C2; /* 0x006F44B9: jmp 0x6f44c2 */
L_006F44BB:
    PUSH32(esp, eax); /* 0x006F44BB: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006F44BC: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_006F44C2:
    ebx = esi + 0x8C; /* 0x006F44C2: lea ebx, [esi + 0x8c] */
L_006F44C8:
    edx = MEM32(ebx); /* 0x006F44C8: mov edx, dword ptr [ebx] */
    ecx = edx; /* 0x006F44CA: mov ecx, edx */
    eax = edx; /* 0x006F44CC: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x006F44CE: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006F44D2: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F44C8; /* 0x006F44D4: jne 0x6f44c8 */
L_006F44D6:
    ebx = esi + 0x88; /* 0x006F44D6: lea ebx, [esi + 0x88] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F44DC: push dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x006F44DF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F44EE; /* 0x006F44E1: je 0x6f44ee */
L_006F44E3:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006F44E3: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x006F44E6: push edi */
    RECOMP_CALL(sub_0078083E); /* 0x006F44E7: call 0x78083e */
    RECOMP_FLAGS_IN();
    goto L_006F44F5; /* 0x006F44EC: jmp 0x6f44f5 */
L_006F44EE:
    PUSH32(esp, edi); /* 0x006F44EE: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006F44EF: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(ebp + (-0xC))); /* 0x006F44F2: call dword ptr [ebp - 0xc] */
    RECOMP_FLAGS_IN();
L_006F44F5:
    eax = MEM32(esi + 0x98); /* 0x006F44F5: mov eax, dword ptr [esi + 0x98] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F44FB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F44FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4511; /* 0x006F4500: jne 0x6f4511 */
L_006F4502:
    PUSH32(esp, 0x00806748u); /* 0x006F4502: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4507: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F450C: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F4518; /* 0x006F450F: jmp 0x6f4518 */
L_006F4511:
    PUSH32(esp, eax); /* 0x006F4511: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006F4512: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006F4518:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F4518: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4594; /* 0x006F451C: je 0x6f4594 */
L_006F451E:
    edi = edi; /* 0x006F451E: mov edi, edi */
L_006F4520:
    edx = MEM32(ebx); /* 0x006F4520: mov edx, dword ptr [ebx] */
    ecx = edx; /* 0x006F4522: mov ecx, edx */
    eax = edx; /* 0x006F4524: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x006F4526: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006F452A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4520; /* 0x006F452C: jne 0x6f4520 */
L_006F452E:
    ebx = esi + 0x1C; /* 0x006F452E: lea ebx, [esi + 0x1c] */
    /* test edx, edx */ /* 0x006F4531: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4597; /* 0x006F4533: je 0x6f4597 */
L_006F4535:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x006F4535: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F454A; /* 0x006F4539: jne 0x6f454a */
L_006F453B:
    PUSH32(esp, 0x008072A8u); /* 0x006F453B: push 0x8072a8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4540: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4545: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F456B; /* 0x006F4548: jmp 0x6f456b */
L_006F454A:
    eax = MEM32(ebx + 0x14); /* 0x006F454A: mov eax, dword ptr [ebx + 0x14] */
    MEM32(ebx + 0x18) = eax; /* 0x006F454D: mov dword ptr [ebx + 0x18], eax */
    /* cmp MEM32(ebx + 0x28), 0 */ /* 0x006F4550: cmp dword ptr [ebx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F456B; /* 0x006F4554: je 0x6f456b */
L_006F4556:
    eax = (uint32_t)MEM16(ebx + 0x4); /* 0x006F4556: movzx eax, word ptr [ebx + 4] */
    PUSH32(esp, eax); /* 0x006F455A: push eax */
    MEM32(ebx + 0x50) = 0; /* 0x006F455B: mov dword ptr [ebx + 0x50], 0 */
    eax = MEM32(ebx + 0x28); /* 0x006F4562: mov eax, dword ptr [ebx + 0x28] */
    PUSH32(esp, ebx); /* 0x006F4565: push ebx */
    RECOMP_ICALL(eax); /* 0x006F4566: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F4568: add esp, 8 */
    _flag_k = FK_ADD;
L_006F456B:
    PUSH32(esp, esi); /* 0x006F456B: push esi */
    RECOMP_ICALL(MEM32(0x926A70)); /* 0x006F456C: call dword ptr [0x926a70] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F4572: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4574: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F4577: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4583; /* 0x006F4579: jne 0x6f4583 */
L_006F457B:
    edi = MEM32(esi + 0x94); /* 0x006F457B: mov edi, dword ptr [esi + 0x94] */
    goto L_006F4597; /* 0x006F4581: jmp 0x6f4597 */
L_006F4583:
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x006F4583: push dword ptr [esi + 0x34] */
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x006F4586: push dword ptr [esi + 0x2c] */
    PUSH32(esp, edi); /* 0x006F4589: push edi */
    RECOMP_CALL(sub_00780838); /* 0x006F458A: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F458F: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_006F4597; /* 0x006F4592: jmp 0x6f4597 */
L_006F4594:
    ebx = esi + 0x1C; /* 0x006F4594: lea ebx, [esi + 0x1c] */
L_006F4597:
    /* cmp edi, MEM32(esi + 0x94) */ /* 0x006F4597: cmp edi, dword ptr [esi + 0x94] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x94));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F45BB; /* 0x006F459D: jne 0x6f45bb */
L_006F459F:
    /* cmp MEM32(0x87CBE4), 0 */ /* 0x006F459F: cmp dword ptr [0x87cbe4], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F45AD; /* 0x006F45A6: jne 0x6f45ad */
L_006F45A8:
    RECOMP_CALL(sub_006EDFA0); /* 0x006F45A8: call 0x6edfa0 */
    RECOMP_FLAGS_IN();
L_006F45AD:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x006F45AD: push dword ptr [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x7CC134)); /* 0x006F45B0: call dword ptr [0x7cc134] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_006F4431; /* 0x006F45B6: jmp 0x6f4431 */
L_006F45BB:
    PUSH32(esp, esi); /* 0x006F45BB: push esi */
    RECOMP_ICALL(MEM32(0x926A68)); /* 0x006F45BC: call dword ptr [0x926a68] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F45C2: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006F45C5: push esi */
    RECOMP_ICALL(MEM32(0x926A64)); /* 0x006F45C6: call dword ptr [0x926a64] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_006F442E; /* 0x006F45CC: jmp 0x6f442e */
L_006F45D1:
    PUSH32(esp, esi); /* 0x006F45D1: push esi */
    RECOMP_ICALL(MEM32(0x926A7C)); /* 0x006F45D2: call dword ptr [0x926a7c] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi + 0xC); /* 0x006F45D8: movzx eax, word ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F45DC: add esp, 4 */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x006F45DF: imul eax, eax, 0x3e8 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F45E5: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi + 0x4); /* 0x006F45E6: idiv dword ptr [esi + 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x006F45E9: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x006F45EB: add esi, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(0x87CBE4), 0 */ /* 0x006F45ED: cmp dword ptr [0x87cbe4], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F45FB; /* 0x006F45F4: jne 0x6f45fb */
L_006F45F6:
    RECOMP_CALL(sub_006EDFA0); /* 0x006F45F6: call 0x6edfa0 */
    RECOMP_FLAGS_IN();
L_006F45FB:
    PUSH32(esp, esi); /* 0x006F45FB: push esi */
    RECOMP_ICALL(MEM32(0x7CC134)); /* 0x006F45FC: call dword ptr [0x7cc134] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006F4602: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4603: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4604: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F4606: pop ebx */
    esp = ebp; /* 0x006F4607: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4609: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F460A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F4610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F4610u);

L_006F4610:
    PUSH32(esp, esi); /* 0x006F4610: push esi */
    esi = ecx; /* 0x006F4611: mov esi, ecx */
    edx = 0x00805F88u; /* 0x006F4613: mov edx, 0x805f88 */
    eax = esi; /* 0x006F4618: mov eax, esi */
    ebx = ebx; /* 0x006F461A: lea ebx, [ebx] */
L_006F4620:
    SET_LO8(ecx, MEM8(eax)); /* 0x006F4620: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(edx) */ /* 0x006F4622: cmp cl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4640; /* 0x006F4624: jne 0x6f4640 */
L_006F4626:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006F4626: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F463C; /* 0x006F4628: je 0x6f463c */
L_006F462A:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x006F462A: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(edx + 0x1) */ /* 0x006F462D: cmp cl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4640; /* 0x006F4630: jne 0x6f4640 */
L_006F4632:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F4632: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x006F4635: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006F4638: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4620; /* 0x006F463A: jne 0x6f4620 */
L_006F463C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F463C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F4645; /* 0x006F463E: jmp 0x6f4645 */
L_006F4640:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F4640: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F4642: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F4645:
    /* test eax, eax */ /* 0x006F4645: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4650; /* 0x006F4647: jne 0x6f4650 */
L_006F4649:
    eax = 8; /* 0x006F4649: mov eax, 8 */
    esi = POP32_VAL(esp); /* 0x006F464E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F464F: ret  */
L_006F4650:
    ecx = 0x00805F84u; /* 0x006F4650: mov ecx, 0x805f84 */
    eax = esi; /* 0x006F4655: mov eax, esi */
L_006F4657:
    SET_LO8(edx, MEM8(eax)); /* 0x006F4657: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006F4659: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4677; /* 0x006F465B: jne 0x6f4677 */
L_006F465D:
    /* test LO8(edx), LO8(edx) */ /* 0x006F465D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4673; /* 0x006F465F: je 0x6f4673 */
L_006F4661:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006F4661: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006F4664: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4677; /* 0x006F4667: jne 0x6f4677 */
L_006F4669:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F4669: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F466C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006F466F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4657; /* 0x006F4671: jne 0x6f4657 */
L_006F4673:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4673: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F467C; /* 0x006F4675: jmp 0x6f467c */
L_006F4677:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F4677: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F4679: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F467C:
    /* test eax, eax */ /* 0x006F467C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4687; /* 0x006F467E: jne 0x6f4687 */
L_006F4680:
    eax = 0x8008u; /* 0x006F4680: mov eax, 0x8008 */
    esi = POP32_VAL(esp); /* 0x006F4685: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4686: ret  */
L_006F4687:
    ecx = 0x00805F14u; /* 0x006F4687: mov ecx, 0x805f14 */
    eax = esi; /* 0x006F468C: mov eax, esi */
    edi = edi; /* 0x006F468E: mov edi, edi */
L_006F4690:
    SET_LO8(edx, MEM8(eax)); /* 0x006F4690: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006F4692: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F46B0; /* 0x006F4694: jne 0x6f46b0 */
L_006F4696:
    /* test LO8(edx), LO8(edx) */ /* 0x006F4696: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F46AC; /* 0x006F4698: je 0x6f46ac */
L_006F469A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006F469A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006F469D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F46B0; /* 0x006F46A0: jne 0x6f46b0 */
L_006F46A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F46A2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F46A5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006F46A8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4690; /* 0x006F46AA: jne 0x6f4690 */
L_006F46AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F46AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F46B5; /* 0x006F46AE: jmp 0x6f46b5 */
L_006F46B0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F46B0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F46B2: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F46B5:
    /* test eax, eax */ /* 0x006F46B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F46C0; /* 0x006F46B7: jne 0x6f46c0 */
L_006F46B9:
    eax = 0x10u; /* 0x006F46B9: mov eax, 0x10 */
    esi = POP32_VAL(esp); /* 0x006F46BE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F46BF: ret  */
L_006F46C0:
    ecx = 0x00805F0Cu; /* 0x006F46C0: mov ecx, 0x805f0c */
    eax = esi; /* 0x006F46C5: mov eax, esi */
L_006F46C7:
    SET_LO8(edx, MEM8(eax)); /* 0x006F46C7: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006F46C9: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F46E7; /* 0x006F46CB: jne 0x6f46e7 */
L_006F46CD:
    /* test LO8(edx), LO8(edx) */ /* 0x006F46CD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F46E3; /* 0x006F46CF: je 0x6f46e3 */
L_006F46D1:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006F46D1: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006F46D4: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F46E7; /* 0x006F46D7: jne 0x6f46e7 */
L_006F46D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F46D9: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F46DC: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006F46DF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F46C7; /* 0x006F46E1: jne 0x6f46c7 */
L_006F46E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F46E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F46EC; /* 0x006F46E5: jmp 0x6f46ec */
L_006F46E7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F46E7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F46E9: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F46EC:
    /* test eax, eax */ /* 0x006F46EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F46F7; /* 0x006F46EE: jne 0x6f46f7 */
L_006F46F0:
    eax = 0x8010u; /* 0x006F46F0: mov eax, 0x8010 */
    esi = POP32_VAL(esp); /* 0x006F46F5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F46F6: ret  */
L_006F46F7:
    eax = 0x00805F04u; /* 0x006F46F7: mov eax, 0x805f04 */
    ecx = esi; /* 0x006F46FC: mov ecx, esi */
    edi = edi; /* 0x006F46FE: mov edi, edi */
L_006F4700:
    SET_LO8(edx, MEM8(ecx)); /* 0x006F4700: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x006F4702: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4720; /* 0x006F4704: jne 0x6f4720 */
L_006F4706:
    /* test LO8(edx), LO8(edx) */ /* 0x006F4706: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F471C; /* 0x006F4708: je 0x6f471c */
L_006F470A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x006F470A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x006F470D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4720; /* 0x006F4710: jne 0x6f4720 */
L_006F4712:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F4712: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F4715: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006F4718: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4700; /* 0x006F471A: jne 0x6f4700 */
L_006F471C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F471C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F4725; /* 0x006F471E: jmp 0x6f4725 */
L_006F4720:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F4720: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F4722: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F4725:
    /* test eax, eax */ /* 0x006F4725: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4730; /* 0x006F4727: jne 0x6f4730 */
L_006F4729:
    eax = 0x1010u; /* 0x006F4729: mov eax, 0x1010 */
    esi = POP32_VAL(esp); /* 0x006F472E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F472F: ret  */
L_006F4730:
    edx = 0x00805EFCu; /* 0x006F4730: mov edx, 0x805efc */
    ecx = esi; /* 0x006F4735: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F4737: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F473C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4747; /* 0x006F473E: jne 0x6f4747 */
L_006F4740:
    eax = 0x9010u; /* 0x006F4740: mov eax, 0x9010 */
    esi = POP32_VAL(esp); /* 0x006F4745: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4746: ret  */
L_006F4747:
    edx = 0x00805F2Cu; /* 0x006F4747: mov edx, 0x805f2c */
    ecx = esi; /* 0x006F474C: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F474E: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4753: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F46B9; /* 0x006F4755: je 0x6f46b9 */
L_006F475B:
    edx = 0x00805F24u; /* 0x006F475B: mov edx, 0x805f24 */
    ecx = esi; /* 0x006F4760: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F4762: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4767: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F46F0; /* 0x006F4769: je 0x6f46f0 */
L_006F476B:
    edx = 0x00805F20u; /* 0x006F476B: mov edx, 0x805f20 */
    ecx = esi; /* 0x006F4770: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F4772: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4777: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F46B9; /* 0x006F4779: je 0x6f46b9 */
L_006F477F:
    edx = 0x00805F1Cu; /* 0x006F477F: mov edx, 0x805f1c */
    ecx = esi; /* 0x006F4784: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F4786: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F478B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F46F0; /* 0x006F478D: je 0x6f46f0 */
L_006F4793:
    edx = 0x00806048u; /* 0x006F4793: mov edx, 0x806048 */
    ecx = esi; /* 0x006F4798: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F479A: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F479F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F47AA; /* 0x006F47A1: jne 0x6f47aa */
L_006F47A3:
    eax = 0x8020u; /* 0x006F47A3: mov eax, 0x8020 */
    esi = POP32_VAL(esp); /* 0x006F47A8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F47A9: ret  */
L_006F47AA:
    edx = 0x00806040u; /* 0x006F47AA: mov edx, 0x806040 */
    ecx = esi; /* 0x006F47AF: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F47B1: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F47B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F47C1; /* 0x006F47B8: jne 0x6f47c1 */
L_006F47BA:
    eax = 0x9020u; /* 0x006F47BA: mov eax, 0x9020 */
    esi = POP32_VAL(esp); /* 0x006F47BF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F47C0: ret  */
L_006F47C1:
    edx = 0x00806038u; /* 0x006F47C1: mov edx, 0x806038 */
    ecx = esi; /* 0x006F47C6: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F47C8: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F47CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F47A3; /* 0x006F47CF: je 0x6f47a3 */
L_006F47D1:
    edx = 0x00806034u; /* 0x006F47D1: mov edx, 0x806034 */
    ecx = esi; /* 0x006F47D6: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F47D8: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F47DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F47A3; /* 0x006F47DF: je 0x6f47a3 */
L_006F47E1:
    edx = 0x00806064u; /* 0x006F47E1: mov edx, 0x806064 */
    ecx = esi; /* 0x006F47E6: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F47E8: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F47ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F47F8; /* 0x006F47EF: jne 0x6f47f8 */
L_006F47F1:
    eax = 0x8120u; /* 0x006F47F1: mov eax, 0x8120 */
    esi = POP32_VAL(esp); /* 0x006F47F6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F47F7: ret  */
L_006F47F8:
    edx = 0x0080605Cu; /* 0x006F47F8: mov edx, 0x80605c */
    ecx = esi; /* 0x006F47FD: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F47FF: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4804: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F480F; /* 0x006F4806: jne 0x6f480f */
L_006F4808:
    eax = 0x9120u; /* 0x006F4808: mov eax, 0x9120 */
    esi = POP32_VAL(esp); /* 0x006F480D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F480E: ret  */
L_006F480F:
    edx = 0x00806054u; /* 0x006F480F: mov edx, 0x806054 */
    ecx = esi; /* 0x006F4814: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F4816: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F481B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F47F1; /* 0x006F481D: je 0x6f47f1 */
L_006F481F:
    edx = 0x00806050u; /* 0x006F481F: mov edx, 0x806050 */
    ecx = esi; /* 0x006F4824: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006F4826: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F482B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F47F1; /* 0x006F482D: je 0x6f47f1 */
L_006F482F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F482F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F4831: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4832: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F4840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F4840u);

L_006F4840:
    PUSH32(esp, ebp); /* 0x006F4840: push ebp */
    ebp = esp; /* 0x006F4841: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F4843: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4846: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0; /* 0x006F4848: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, ebx); /* 0x006F484F: push ebx */
    PUSH32(esp, esi); /* 0x006F4850: push esi */
    PUSH32(esp, edi); /* 0x006F4851: push edi */
    ecx = eax + 0x10; /* 0x006F4852: lea ecx, [eax + 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F4855: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_006EDA00); /* 0x006F4858: call 0x6eda00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F485D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4866; /* 0x006F485F: je 0x6f4866 */
L_006F4861:
    RECOMP_CALL(sub_006F51C0); /* 0x006F4861: call 0x6f51c0 */
    RECOMP_FLAGS_IN();
L_006F4866:
    PUSH32(esp, 0x78u); /* 0x006F4866: push 0x78 */
    PUSH32(esp, 0); /* 0x006F4868: push 0 */
    PUSH32(esp, 0x00926A50u); /* 0x006F486A: push 0x926a50 */
    RECOMP_CALL(sub_0078083E); /* 0x006F486F: call 0x78083e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x40u); /* 0x006F4874: push 0x40 */
    PUSH32(esp, 0); /* 0x006F4876: push 0 */
    PUSH32(esp, 0x00926AD0u); /* 0x006F4878: push 0x926ad0 */
    RECOMP_CALL(sub_0078083E); /* 0x006F487D: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F4882: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = 0x00805FECu; /* 0x006F4885: mov ecx, 0x805fec */
    RECOMP_CALL(sub_006FBC10); /* 0x006F488A: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F488F: mov ebx, eax */
    edi = 0x007D5FE0u; /* 0x006F4891: mov edi, 0x7d5fe0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4896: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F48A0; /* 0x006F4898: jmp 0x6f48a0 */
L_006F48A0:
    esi = MEM32(edi); /* 0x006F48A0: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x006F48A2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4939; /* 0x006F48A4: je 0x6f4939 */
L_006F48AA:
    /* test ebx, ebx */ /* 0x006F48AA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F48FD; /* 0x006F48AC: je 0x6f48fd */
L_006F48AE:
    eax = ebx; /* 0x006F48AE: mov eax, ebx */
    edx = eax + 0x1; /* 0x006F48B0: lea edx, [eax + 1] */
L_006F48B3:
    SET_LO8(ecx, MEM8(eax)); /* 0x006F48B3: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F48B5: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006F48B6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F48B3; /* 0x006F48B8: jne 0x6f48b3 */
L_006F48BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F48BA: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006F48BC: push eax */
    PUSH32(esp, ebx); /* 0x006F48BD: push ebx */
    PUSH32(esp, MEM32(esi)); /* 0x006F48BE: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC584)); /* 0x006F48C0: call dword ptr [0x7cc584] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F48C6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F48C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4903; /* 0x006F48CB: je 0x6f4903 */
L_006F48CD:
    eax = MEM32(ebp + (-0x4)); /* 0x006F48CD: mov eax, dword ptr [ebp - 4] */
L_006F48D0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x006F48D0: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F48D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F48A0; /* 0x006F48D5: je 0x6f48a0 */
L_006F48D7:
    PUSH32(esp, 0x18u); /* 0x006F48D7: push 0x18 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F48D9: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F48DF: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F48E1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F48E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4980; /* 0x006F48E6: je 0x6f4980 */
L_006F48EC:
    PUSH32(esp, 0x7D0u); /* 0x006F48EC: push 0x7d0 */
    PUSH32(esp, esi); /* 0x006F48F1: push esi */
    RECOMP_ICALL(MEM32(0x7CC150)); /* 0x006F48F2: call dword ptr [0x7cc150] */
    RECOMP_FLAGS_IN();
    goto L_006F498D; /* 0x006F48F8: jmp 0x6f498d */
L_006F48FD:
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x006F48FD: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F48D0; /* 0x006F4901: jne 0x6f48d0 */
L_006F4903:
    PUSH32(esp, 0x78u); /* 0x006F4903: push 0x78 */
    PUSH32(esp, 0); /* 0x006F4905: push 0 */
    PUSH32(esp, 0x00926A50u); /* 0x006F4907: push 0x926a50 */
    MEM32(ebp + (-0x8)) = 1; /* 0x006F490C: mov dword ptr [ebp - 8], 1 */
    RECOMP_CALL(sub_0078083E); /* 0x006F4913: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006F4918: mov eax, dword ptr [esi] */
    MEM32(0x926A50) = eax; /* 0x006F491A: mov dword ptr [0x926a50], eax */
    eax = MEM32(esi + 0x4); /* 0x006F491F: mov eax, dword ptr [esi + 4] */
    MEM32(0x926A54) = eax; /* 0x006F4922: mov dword ptr [0x926a54], eax */
    eax = MEM32(esi + 0x8); /* 0x006F4927: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, 0x00926A58u); /* 0x006F492A: push 0x926a58 */
    RECOMP_ICALL(eax); /* 0x006F492F: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F4931: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F4934: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_006F48D0; /* 0x006F4937: jmp 0x6f48d0 */
L_006F4939:
    /* test eax, eax */ /* 0x006F4939: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F48D7; /* 0x006F493B: jne 0x6f48d7 */
L_006F493D:
    eax = MEM32(ebp + (-0x8)); /* 0x006F493D: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x006F4940: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4965; /* 0x006F4942: jne 0x6f4965 */
L_006F4944:
    /* test ebx, ebx */ /* 0x006F4944: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4958; /* 0x006F4946: je 0x6f4958 */
L_006F4948:
    PUSH32(esp, ebx); /* 0x006F4948: push ebx */
    PUSH32(esp, 0x00805FCCu); /* 0x006F4949: push 0x805fcc */
    RECOMP_CALL(sub_006EDB70); /* 0x006F494E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F4953: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_006F4965; /* 0x006F4956: jmp 0x6f4965 */
L_006F4958:
    PUSH32(esp, 0x00805FB0u); /* 0x006F4958: push 0x805fb0 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F495D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4962: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4965:
    PUSH32(esp, 0x78u); /* 0x006F4965: push 0x78 */
    PUSH32(esp, 0); /* 0x006F4967: push 0 */
    PUSH32(esp, 0x00926A50u); /* 0x006F4969: push 0x926a50 */
    RECOMP_CALL(sub_0078083E); /* 0x006F496E: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F4973: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F4976: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4979: pop edi */
    esi = POP32_VAL(esp); /* 0x006F497A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F497B: pop ebx */
    esp = ebp; /* 0x006F497C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F497E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F497F: ret  */
L_006F4980:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F4980: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4985: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F498A: add esp, 4 */
    _flag_k = FK_ADD;
L_006F498D:
    MEM32(0x926AAC) = esi; /* 0x006F498D: mov dword ptr [0x926aac], esi */
    RECOMP_CALL(sub_006F3EF0); /* 0x006F4993: call 0x6f3ef0 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x926A58)); /* 0x006F4998: call dword ptr [0x926a58] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006F499E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F499F: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F49A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F49A2: pop ebx */
    esp = ebp; /* 0x006F49A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F49A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F49A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F49B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F49B0u);

L_006F49B0:
    PUSH32(esp, edi); /* 0x006F49B0: push edi */
    edi = ecx; /* 0x006F49B1: mov edi, ecx */
    /* test edi, edi */ /* 0x006F49B3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4A8A; /* 0x006F49B5: je 0x6f4a8a */
L_006F49BB:
    eax = MEM32(edi); /* 0x006F49BB: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x006F49BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F49D5; /* 0x006F49BF: je 0x6f49d5 */
L_006F49C1:
    /* cmp MEM32(eax * 4 + 0x926ACC), edi */ /* 0x006F49C1: cmp dword ptr [eax*4 + 0x926acc], edi */
    _flag_a = (uint32_t)(MEM32(eax * 4 + 0x926ACC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F49D5; /* 0x006F49C8: jne 0x6f49d5 */
L_006F49CA:
    MEM32(eax * 4 + 0x926ACC) = 0; /* 0x006F49CA: mov dword ptr [eax*4 + 0x926acc], 0 */
L_006F49D5:
    ecx = 1; /* 0x006F49D5: mov ecx, 1 */
    eax = edi + 0x84; /* 0x006F49DA: lea eax, [edi + 0x84] */
    { uint32_t _tmp = MEM32(eax); /* 0x006F49E0: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F49E2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x88; /* 0x006F49E4: lea eax, [edi + 0x88] */
    { uint32_t _tmp = MEM32(eax); /* 0x006F49EA: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    ecx = MEM32(edi + 0x9C); /* 0x006F49EC: mov ecx, dword ptr [edi + 0x9c] */
    /* test ecx, ecx */ /* 0x006F49F2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F49FB; /* 0x006F49F4: je 0x6f49fb */
L_006F49F6:
    RECOMP_CALL(sub_006EE760); /* 0x006F49F6: call 0x6ee760 */
    RECOMP_FLAGS_IN();
L_006F49FB:
    PUSH32(esp, ebx); /* 0x006F49FB: push ebx */
    ebx = MEM32(0x7CC44C); /* 0x006F49FC: mov ebx, dword ptr [0x7cc44c] */
    PUSH32(esp, esi); /* 0x006F4A02: push esi */
    esi = MEM32(edi + 0x98); /* 0x006F4A03: mov esi, dword ptr [edi + 0x98] */
    /* test esi, esi */ /* 0x006F4A09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4A1A; /* 0x006F4A0B: je 0x6f4a1a */
L_006F4A0D:
    PUSH32(esp, esi); /* 0x006F4A0D: push esi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006F4A0E: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F4A14: push esi */
    RECOMP_ICALL(ebx); /* 0x006F4A15: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A17: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4A1A:
    PUSH32(esp, MEM32(edi + 0x94)); /* 0x006F4A1A: push dword ptr [edi + 0x94] */
    RECOMP_ICALL(ebx); /* 0x006F4A20: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A22: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x006F4A25: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4A33; /* 0x006F4A29: je 0x6f4a33 */
L_006F4A2B:
    PUSH32(esp, MEM32(edi + 0x2C)); /* 0x006F4A2B: push dword ptr [edi + 0x2c] */
    RECOMP_ICALL(ebx); /* 0x006F4A2E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A30: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4A33:
    /* cmp MEM32(edi + 0xB4), 0 */ /* 0x006F4A33: cmp dword ptr [edi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4A46; /* 0x006F4A3A: je 0x6f4a46 */
L_006F4A3C:
    PUSH32(esp, edi); /* 0x006F4A3C: push edi */
    RECOMP_ICALL(MEM32(0x926A80)); /* 0x006F4A3D: call dword ptr [0x926a80] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A43: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4A46:
    eax = MEM32(edi + 0xA4); /* 0x006F4A46: mov eax, dword ptr [edi + 0xa4] */
    /* test eax, eax */ /* 0x006F4A4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4A62; /* 0x006F4A4E: je 0x6f4a62 */
L_006F4A50:
    esi = MEM32(eax + 0x2008); /* 0x006F4A50: mov esi, dword ptr [eax + 0x2008] */
    PUSH32(esp, eax); /* 0x006F4A56: push eax */
    RECOMP_ICALL(ebx); /* 0x006F4A57: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A59: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F4A5C: mov eax, esi */
    /* test esi, esi */ /* 0x006F4A5E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4A50; /* 0x006F4A60: jne 0x6f4a50 */
L_006F4A62:
    eax = MEM32(edi + 0xAC); /* 0x006F4A62: mov eax, dword ptr [edi + 0xac] */
    /* test eax, eax */ /* 0x006F4A68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4A82; /* 0x006F4A6A: je 0x6f4a82 */
L_006F4A6C:
    esp = esp; /* 0x006F4A6C: lea esp, [esp] */
L_006F4A70:
    esi = MEM32(eax + 0x2008); /* 0x006F4A70: mov esi, dword ptr [eax + 0x2008] */
    PUSH32(esp, eax); /* 0x006F4A76: push eax */
    RECOMP_ICALL(ebx); /* 0x006F4A77: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A79: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F4A7C: mov eax, esi */
    /* test esi, esi */ /* 0x006F4A7E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4A70; /* 0x006F4A80: jne 0x6f4a70 */
L_006F4A82:
    PUSH32(esp, edi); /* 0x006F4A82: push edi */
    RECOMP_ICALL(ebx); /* 0x006F4A83: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A85: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F4A88: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4A89: pop ebx */
L_006F4A8A:
    edi = POP32_VAL(esp); /* 0x006F4A8A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4A8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F4A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F4A90u);

L_006F4A90:
    PUSH32(esp, ebx); /* 0x006F4A90: push ebx */
    ebx = MEM32(0x7CC6B0); /* 0x006F4A91: mov ebx, dword ptr [0x7cc6b0] */
    PUSH32(esp, esi); /* 0x006F4A97: push esi */
    PUSH32(esp, edi); /* 0x006F4A98: push edi */
    edi = ecx; /* 0x006F4A99: mov edi, ecx */
    esi = edx; /* 0x006F4A9B: mov esi, edx */
    /* cmp MEM32(edi), 0 */ /* 0x006F4A9D: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _xmm[0] = xmm_ld(edi); /* 0x006F4AA0: movdqu xmm0, xmmword ptr [edi] */
    xmm_st(esi, _xmm[0]); /* 0x006F4AA4: movdqu xmmword ptr [esi], xmm0 */
    _xmm[0].u64[0] = MEM64(edi + 0x10); _xmm[0].u64[1] = 0; /* 0x006F4AA8: movq xmm0, qword ptr [edi + 0x10] */
    MEM64(esi + 0x10) = _xmm[0].u64[0]; /* 0x006F4AAD: movq qword ptr [esi + 0x10], xmm0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4AD4; /* 0x006F4AB2: jne 0x6f4ad4 */
L_006F4AB4:
    ecx = 0x00806010u; /* 0x006F4AB4: mov ecx, 0x806010 */
    RECOMP_CALL(sub_006FBC10); /* 0x006F4AB9: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4ABE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4ACE; /* 0x006F4AC0: je 0x6f4ace */
L_006F4AC2:
    PUSH32(esp, eax); /* 0x006F4AC2: push eax */
    RECOMP_ICALL(ebx); /* 0x006F4AC3: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4AC5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x006F4AC8: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x006F4ACA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4AD4; /* 0x006F4ACC: jne 0x6f4ad4 */
L_006F4ACE:
    MEM32(esi) = 0x5622u; /* 0x006F4ACE: mov dword ptr [esi], 0x5622 */
L_006F4AD4:
    /* cmp MEM16(edi + 0x4), 0 */ /* 0x006F4AD4: cmp word ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4B02; /* 0x006F4AD9: jne 0x6f4b02 */
L_006F4ADB:
    ecx = 0x00805FFCu; /* 0x006F4ADB: mov ecx, 0x805ffc */
    RECOMP_CALL(sub_006FBC10); /* 0x006F4AE0: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4AE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4AF9; /* 0x006F4AE7: je 0x6f4af9 */
L_006F4AE9:
    ecx = eax; /* 0x006F4AE9: mov ecx, eax */
    RECOMP_CALL(sub_006F4610); /* 0x006F4AEB: call 0x6f4610 */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x006F4AF0: mov word ptr [esi + 4], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006F4AF4: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4B02; /* 0x006F4AF7: jne 0x6f4b02 */
L_006F4AF9:
    eax = 0x8010u; /* 0x006F4AF9: mov eax, 0x8010 */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x006F4AFE: mov word ptr [esi + 4], ax */
L_006F4B02:
    eax = (uint32_t)MEM8(edi + 0x6); /* 0x006F4B02: movzx eax, byte ptr [edi + 6] */
    /* cmp eax, 6 */ /* 0x006F4B06: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F4BBB; /* 0x006F4B09: ja 0x6f4bbb */
L_006F4B0F:
    eax = (uint32_t)MEM8(eax + 0x6F4BDC); /* 0x006F4B0F: movzx eax, byte ptr [eax + 0x6f4bdc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6F4BD0)); goto _ljump; }
L_006F4B1D:
    ecx = 0x008060F4u; /* 0x006F4B1D: mov ecx, 0x8060f4 */
    RECOMP_CALL(sub_006FBC10); /* 0x006F4B22: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4B27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4B38; /* 0x006F4B29: je 0x6f4b38 */
L_006F4B2B:
    PUSH32(esp, eax); /* 0x006F4B2B: push eax */
    RECOMP_ICALL(ebx); /* 0x006F4B2C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4B2E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x6) = (uint8_t)(LO8(eax)); /* 0x006F4B31: mov byte ptr [esi + 6], al */
    /* test LO8(eax), LO8(eax) */ /* 0x006F4B34: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4B3C; /* 0x006F4B36: jne 0x6f4b3c */
L_006F4B38:
    MEM8(esi + 0x6) = (uint8_t)(2); /* 0x006F4B38: mov byte ptr [esi + 6], 2 */
L_006F4B3C:
    /* cmp MEM16(edi + 0x8), 0 */ /* 0x006F4B3C: cmp word ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM16(edi + 0x8)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4B8A; /* 0x006F4B41: jne 0x6f4b8a */
L_006F4B43:
    ecx = 0x008060B8u; /* 0x006F4B43: mov ecx, 0x8060b8 */
    RECOMP_CALL(sub_006FBC10); /* 0x006F4B48: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4B4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4B60; /* 0x006F4B4F: je 0x6f4b60 */
L_006F4B51:
    PUSH32(esp, eax); /* 0x006F4B51: push eax */
    RECOMP_ICALL(ebx); /* 0x006F4B52: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4B54: add esp, 4 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x006F4B57: mov word ptr [esi + 8], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006F4B5B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4B8A; /* 0x006F4B5E: jne 0x6f4b8a */
L_006F4B60:
    eax = 0x10624DD3u; /* 0x006F4B60: mov eax, 0x10624dd3 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(MEM32(esi)); /* 0x006F4B65: imul dword ptr [esi] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x006F4B67: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x006F4B6A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006F4B6C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006F4B6C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006F4B6F: add eax, edx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2Eu); /* 0x006F4B71: imul ecx, eax, 0x2e */
    eax = 1; /* 0x006F4B74: mov eax, 1 */
    /* cmp ecx, eax */ /* 0x006F4B79: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F4B86; /* 0x006F4B7B: jle 0x6f4b86 */
L_006F4B7D:
    ecx = ecx; /* 0x006F4B7D: lea ecx, [ecx] */
L_006F4B80:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006F4B80: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x006F4B82: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F4B80; /* 0x006F4B84: jl 0x6f4b80 */
L_006F4B86:
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x006F4B86: mov word ptr [esi + 8], ax */
L_006F4B8A:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x006F4B8A: movzx ecx, word ptr [esi + 4] */
    /* cmp ecx, 8 */ /* 0x006F4B8E: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F4B91: setne al */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x006F4B94: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x006F4B94: shr ecx, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x006F4B97: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006F4B99: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    SET_LO8(eax, LO8(eax) & 0x80u); /* 0x006F4B9C: and al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x7) = (uint8_t)(LO8(eax)); /* 0x006F4B9E: mov byte ptr [esi + 7], al */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x006F4BA1: movzx eax, word ptr [esi + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x006F4BA5: imul ecx, eax */
    eax = (uint32_t)MEM8(esi + 0x6); /* 0x006F4BA8: movzx eax, byte ptr [esi + 6] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x006F4BAC: imul ecx, eax */
    eax = 1; /* 0x006F4BAF: mov eax, 1 */
    MEM32(esi + 0xC) = ecx; /* 0x006F4BB4: mov dword ptr [esi + 0xc], ecx */
    edi = POP32_VAL(esp); /* 0x006F4BB7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4BB8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4BB9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4BBA: ret  */
L_006F4BBB:
    PUSH32(esp, 0x008060CCu); /* 0x006F4BBB: push 0x8060cc */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4BC0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4BC5: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4BC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4BCA: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4BCB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4BCC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4BCD: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006F4B1Du: goto L_006F4B1D;
      case 0x006F4B3Cu: goto L_006F4B3C;
      case 0x006F4BBBu: goto L_006F4BBB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F4C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F4C00u);

L_006F4C00:
    PUSH32(esp, ebp); /* 0x006F4C00: push ebp */
    ebp = esp; /* 0x006F4C01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x006F4C03: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F4C06: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F4C0B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F4C0D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006F4C10: push ebx */
    PUSH32(esp, esi); /* 0x006F4C11: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F4C12: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4C15: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x006F4C17: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006F4C18: mov edi, dword ptr [ebp + 0xc] */
    ecx = 0x10u; /* 0x006F4C1B: mov ecx, 0x10 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x006F4C20: mov dword ptr [ebp - 0x4c], 0 */
    /* cmp MEM32(esi + 0x10), eax */ /* 0x006F4C27: cmp dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F4C2A: setne al */
    MEM32(ebp + (-0x58)) = eax; /* 0x006F4C2D: mov dword ptr [ebp - 0x58], eax */
    RECOMP_CALL(sub_006EDA00); /* 0x006F4C30: call 0x6eda00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4C35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4C59; /* 0x006F4C37: jne 0x6f4c59 */
L_006F4C39:
    PUSH32(esp, 0x00805F8Cu); /* 0x006F4C39: push 0x805f8c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4C3E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4C43: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4C46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4C46: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4C48: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4C49: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4C4A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F4C4B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F4C4E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F4C50: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F4C55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4C57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4C58: ret  */
L_006F4C59:
    ebx = 1; /* 0x006F4C59: mov ebx, 1 */
    edi = edi; /* 0x006F4C5E: mov edi, edi */
L_006F4C60:
    /* cmp MEM32(ebx * 4 + 0x926AD0), 0 */ /* 0x006F4C60: cmp dword ptr [ebx*4 + 0x926ad0], 0 */
    _flag_a = (uint32_t)(MEM32(ebx * 4 + 0x926AD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4C70; /* 0x006F4C68: je 0x6f4c70 */
L_006F4C6A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006F4C6A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 0x10u */ /* 0x006F4C6B: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006F4C60; /* 0x006F4C6E: jb 0x6f4c60 */
L_006F4C70:
    /* cmp ebx, 0x10u */ /* 0x006F4C70: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4C95; /* 0x006F4C73: jne 0x6f4c95 */
L_006F4C75:
    PUSH32(esp, 0x0080609Cu); /* 0x006F4C75: push 0x80609c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4C7A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4C7F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4C82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4C84: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4C85: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4C86: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F4C87: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F4C8A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F4C8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F4C91: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4C93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4C94: ret  */
L_006F4C95:
    /* test edi, edi */ /* 0x006F4C95: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x70); /* 0x006F4C97: lea eax, [ebp - 0x70] */
    ecx = esi; /* 0x006F4C9A: mov ecx, esi */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = edi; } /* 0x006F4C9C: cmovne eax, edi */
    edx = eax; /* 0x006F4C9F: mov edx, eax */
    MEM32(ebp + (-0x54)) = eax; /* 0x006F4CA1: mov dword ptr [ebp - 0x54], eax */
    RECOMP_CALL(sub_006F4A90); /* 0x006F4CA4: call 0x6f4a90 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F4CA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4C46; /* 0x006F4CAB: je 0x6f4c46 */
L_006F4CAD:
    ecx = 0x00806150u; /* 0x006F4CAD: mov ecx, 0x806150 */
    RECOMP_CALL(sub_006FBC10); /* 0x006F4CB2: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x926AA0), 0 */ /* 0x006F4CB7: cmp dword ptr [0x926aa0], 0 */
    _flag_a = (uint32_t)(MEM32(0x926AA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = eax; /* 0x006F4CBE: mov edi, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4D5F; /* 0x006F4CC0: je 0x6f4d5f */
L_006F4CC6:
    /* test edi, edi */ /* 0x006F4CC6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4D19; /* 0x006F4CC8: je 0x6f4d19 */
L_006F4CCA:
    eax = 0x00805F50u; /* 0x006F4CCA: mov eax, 0x805f50 */
    /* nop */ /* 0x006F4CCF: nop  */
L_006F4CD0:
    SET_LO8(ecx, MEM8(edi)); /* 0x006F4CD0: mov cl, byte ptr [edi] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x006F4CD2: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4CF0; /* 0x006F4CD4: jne 0x6f4cf0 */
L_006F4CD6:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006F4CD6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4CEC; /* 0x006F4CD8: je 0x6f4cec */
L_006F4CDA:
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x006F4CDA: mov cl, byte ptr [edi + 1] */
    /* cmp LO8(ecx), MEM8(eax + 0x1) */ /* 0x006F4CDD: cmp cl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4CF0; /* 0x006F4CE0: jne 0x6f4cf0 */
L_006F4CE2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x006F4CE2: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F4CE5: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006F4CE8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4CD0; /* 0x006F4CEA: jne 0x6f4cd0 */
L_006F4CEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4CEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F4CF5; /* 0x006F4CEE: jmp 0x6f4cf5 */
L_006F4CF0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F4CF0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F4CF2: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F4CF5:
    /* test eax, eax */ /* 0x006F4CF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4D19; /* 0x006F4CF7: je 0x6f4d19 */
L_006F4CF9:
    PUSH32(esp, 0x00806024u); /* 0x006F4CF9: push 0x806024 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4CFE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4D03: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4D06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4D08: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4D09: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4D0A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F4D0B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F4D0E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F4D10: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F4D15: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4D17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4D18: ret  */
L_006F4D19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006F4D19: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4D1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x006F4D1D: lea ecx, [ecx] */
L_006F4D20:
    ecx = MEM32(eax + 0x926AD0); /* 0x006F4D20: mov ecx, dword ptr [eax + 0x926ad0] */
    /* test ecx, ecx */ /* 0x006F4D26: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4D32; /* 0x006F4D28: je 0x6f4d32 */
L_006F4D2A:
    /* cmp MEM32(ecx + 0x90), edi */ /* 0x006F4D2A: cmp dword ptr [ecx + 0x90], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x90)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4D3F; /* 0x006F4D30: je 0x6f4d3f */
L_006F4D32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F4D32: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x40u */ /* 0x006F4D35: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006F4D20; /* 0x006F4D38: jb 0x6f4d20 */
L_006F4D3A:
    goto L_006F4DF6; /* 0x006F4D3A: jmp 0x6f4df6 */
L_006F4D3F:
    PUSH32(esp, 0x00806134u); /* 0x006F4D3F: push 0x806134 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4D44: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4D49: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4D4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4D4E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4D4F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4D50: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F4D51: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F4D54: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F4D56: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F4D5B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4D5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4D5E: ret  */
L_006F4D5F:
    /* test edi, edi */ /* 0x006F4D5F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4DF6; /* 0x006F4D61: je 0x6f4df6 */
L_006F4D67:
    eax = MEM32(0x926AAC); /* 0x006F4D67: mov eax, dword ptr [0x926aac] */
    /* test eax, eax */ /* 0x006F4D6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4D7F; /* 0x006F4D6E: jne 0x6f4d7f */
L_006F4D70:
    PUSH32(esp, 0x00806748u); /* 0x006F4D70: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4D75: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4D7A: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F4D86; /* 0x006F4D7D: jmp 0x6f4d86 */
L_006F4D7F:
    PUSH32(esp, eax); /* 0x006F4D7F: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006F4D80: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_006F4D86:
    esi = MEM32(0x926AC0); /* 0x006F4D86: mov esi, dword ptr [0x926ac0] */
    /* test esi, esi */ /* 0x006F4D8C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4DD7; /* 0x006F4D8E: je 0x6f4dd7 */
L_006F4D90:
    /* cmp MEM32(esi), 0 */ /* 0x006F4D90: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4DC9; /* 0x006F4D93: je 0x6f4dc9 */
L_006F4D95:
    ecx = edi; /* 0x006F4D95: mov ecx, edi */
    eax = esi + 0x8; /* 0x006F4D97: lea eax, [esi + 8] */
    ebx = ebx; /* 0x006F4D9A: lea ebx, [ebx] */
L_006F4DA0:
    SET_LO8(edx, MEM8(eax)); /* 0x006F4DA0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006F4DA2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4DC0; /* 0x006F4DA4: jne 0x6f4dc0 */
L_006F4DA6:
    /* test LO8(edx), LO8(edx) */ /* 0x006F4DA6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4DBC; /* 0x006F4DA8: je 0x6f4dbc */
L_006F4DAA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006F4DAA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006F4DAD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4DC0; /* 0x006F4DB0: jne 0x6f4dc0 */
L_006F4DB2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F4DB2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F4DB5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006F4DB8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4DA0; /* 0x006F4DBA: jne 0x6f4da0 */
L_006F4DBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4DBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F4DC5; /* 0x006F4DBE: jmp 0x6f4dc5 */
L_006F4DC0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F4DC0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F4DC2: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F4DC5:
    /* test eax, eax */ /* 0x006F4DC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4DD2; /* 0x006F4DC7: je 0x6f4dd2 */
L_006F4DC9:
    esi = MEM32(esi + 0x4); /* 0x006F4DC9: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x006F4DCC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4D90; /* 0x006F4DCE: jne 0x6f4d90 */
L_006F4DD0:
    goto L_006F4DD7; /* 0x006F4DD0: jmp 0x6f4dd7 */
L_006F4DD2:
    eax = MEM32(esi); /* 0x006F4DD2: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x006F4DD4: mov dword ptr [ebp - 0x4c], eax */
L_006F4DD7:
    eax = MEM32(0x926AAC); /* 0x006F4DD7: mov eax, dword ptr [0x926aac] */
    /* test eax, eax */ /* 0x006F4DDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4DEF; /* 0x006F4DDE: jne 0x6f4def */
L_006F4DE0:
    PUSH32(esp, 0x00806748u); /* 0x006F4DE0: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4DE5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4DEA: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F4DF6; /* 0x006F4DED: jmp 0x6f4df6 */
L_006F4DEF:
    PUSH32(esp, eax); /* 0x006F4DEF: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006F4DF0: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006F4DF6:
    /* cmp MEM32(0x926AA8), 0 */ /* 0x006F4DF6: cmp dword ptr [0x926aa8], 0 */
    _flag_a = (uint32_t)(MEM32(0x926AA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4E29; /* 0x006F4DFD: jne 0x6f4e29 */
L_006F4DFF:
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x006F4DFF: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4E29; /* 0x006F4E03: jne 0x6f4e29 */
L_006F4E05:
    /* test edi, edi */ /* 0x006F4E05: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4E29; /* 0x006F4E07: je 0x6f4e29 */
L_006F4E09:
    PUSH32(esp, 0x00806124u); /* 0x006F4E09: push 0x806124 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4E0E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4E13: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4E16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4E18: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4E19: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4E1A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F4E1B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F4E1E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F4E20: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F4E25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4E27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4E28: ret  */
L_006F4E29:
    PUSH32(esp, 0xBCu); /* 0x006F4E29: push 0xbc */
    PUSH32(esp, 1); /* 0x006F4E2E: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006F4E30: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F4E36: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F4E38: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F4E3B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F500D; /* 0x006F4E3D: je 0x6f500d */
L_006F4E43:
    eax = ebx + 0x1; /* 0x006F4E43: lea eax, [ebx + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F4E46: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x006F4E48: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x006F4E4A: mov eax, dword ptr [ebp - 0x54] */
    _xmm[0] = xmm_ld(eax); /* 0x006F4E4D: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(esi + 0x4, _xmm[0]); /* 0x006F4E51: movdqu xmmword ptr [esi + 4], xmm0 */
    _xmm[0].u64[0] = MEM64(eax + 0x10); _xmm[0].u64[1] = 0; /* 0x006F4E56: movq xmm0, qword ptr [eax + 0x10] */
    eax = MEM32(ebp + (-0x4C)); /* 0x006F4E5B: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(esi + 0xB8) = eax; /* 0x006F4E5E: mov dword ptr [esi + 0xb8], eax */
    eax = esi + 0x84; /* 0x006F4E64: lea eax, [esi + 0x84] */
    MEM64(esi + 0x14) = _xmm[0].u64[0]; /* 0x006F4E6A: movq qword ptr [esi + 0x14], xmm0 */
    MEM32(esi + 0x90) = 0; /* 0x006F4E6F: mov dword ptr [esi + 0x90], 0 */
    { uint32_t _tmp = MEM32(eax); /* 0x006F4E79: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    edx = 1; /* 0x006F4E7B: mov edx, 1 */
    eax = esi + 0x8C; /* 0x006F4E80: lea eax, [esi + 0x8c] */
    ecx = edx; /* 0x006F4E86: mov ecx, edx */
    { uint32_t _tmp = MEM32(eax); /* 0x006F4E88: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    ecx = edx; /* 0x006F4E8A: mov ecx, edx */
    eax = esi + 0x88; /* 0x006F4E8C: lea eax, [esi + 0x88] */
    { uint32_t _tmp = MEM32(eax); /* 0x006F4E92: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    /* cmp MEM32(0x926A98), 0 */ /* 0x006F4E94: cmp dword ptr [0x926a98], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F4EFE; /* 0x006F4E9B: jne 0x6f4efe */
L_006F4E9D:
    PUSH32(esp, 0x18u); /* 0x006F4E9D: push 0x18 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F4E9F: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4EA5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = eax; /* 0x006F4EA8: mov dword ptr [ebp - 0x50], eax */
    /* test eax, eax */ /* 0x006F4EAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4EBD; /* 0x006F4EAD: je 0x6f4ebd */
L_006F4EAF:
    PUSH32(esp, 0x7D0u); /* 0x006F4EAF: push 0x7d0 */
    PUSH32(esp, eax); /* 0x006F4EB4: push eax */
    RECOMP_ICALL(MEM32(0x7CC150)); /* 0x006F4EB5: call dword ptr [0x7cc150] */
    RECOMP_FLAGS_IN();
    goto L_006F4ECA; /* 0x006F4EBB: jmp 0x6f4eca */
L_006F4EBD:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F4EBD: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4EC2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4EC7: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4ECA:
    eax = MEM32(ebp + (-0x50)); /* 0x006F4ECA: mov eax, dword ptr [ebp - 0x50] */
    MEM32(esi + 0x98) = eax; /* 0x006F4ECD: mov dword ptr [esi + 0x98], eax */
    /* test eax, eax */ /* 0x006F4ED3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4EFE; /* 0x006F4ED5: jne 0x6f4efe */
L_006F4ED7:
    ecx = esi; /* 0x006F4ED7: mov ecx, esi */
    RECOMP_CALL(sub_006F49B0); /* 0x006F4ED9: call 0x6f49b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00806108u); /* 0x006F4EDE: push 0x806108 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F4EE3: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4EE8: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4EEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4EED: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4EEE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4EEF: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F4EF0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F4EF3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F4EF5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F4EFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4EFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4EFD: ret  */
L_006F4EFE:
    PUSH32(esp, 0); /* 0x006F4EFE: push 0 */
    PUSH32(esp, edi); /* 0x006F4F00: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x006F4F01: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, esi); /* 0x006F4F04: push esi */
    RECOMP_ICALL(MEM32(0x926A5C)); /* 0x006F4F05: call dword ptr [0x926a5c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F4F0B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F4F0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F4F2C; /* 0x006F4F10: jns 0x6f4f2c */
L_006F4F12:
    ecx = esi; /* 0x006F4F12: mov ecx, esi */
    RECOMP_CALL(sub_006F49B0); /* 0x006F4F14: call 0x6f49b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F4F19: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F4F1B: pop edi */
    esi = POP32_VAL(esp); /* 0x006F4F1C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4F1D: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F4F1E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F4F21: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F4F23: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F4F28: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F4F2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4F2B: ret  */
L_006F4F2C:
    edi = MEM32(ebp + (-0x54)); /* 0x006F4F2C: mov edi, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F4F2F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x4); /* 0x006F4F31: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(edi), eax */ /* 0x006F4F34: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4F3A; /* 0x006F4F36: je 0x6f4f3a */
L_006F4F38:
    MEM32(edi) = eax; /* 0x006F4F38: mov dword ptr [edi], eax */
L_006F4F3A:
    ecx = (uint32_t)MEM16(edi + 0x4); /* 0x006F4F3A: movzx ecx, word ptr [edi + 4] */
    eax = 1; /* 0x006F4F3E: mov eax, 1 */
    /* cmp LO16(ecx), MEM16(esi + 0x8) */ /* 0x006F4F43: cmp cx, word ptr [esi + 8] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x50)) = ecx; /* 0x006F4F47: mov dword ptr [ebp - 0x50], ecx */
    if (CMP_NE(_flag_a, _flag_b)) { edx = eax; } /* 0x006F4F4A: cmovne edx, eax */
    SET_LO8(eax, MEM8(edi + 0x6)); /* 0x006F4F4D: mov al, byte ptr [edi + 6] */
    /* cmp LO8(eax), MEM8(esi + 0xA) */ /* 0x006F4F50: cmp al, byte ptr [esi + 0xa] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0xA)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4C)) = eax; /* 0x006F4F53: mov dword ptr [ebp - 0x4c], eax */
    eax = 1; /* 0x006F4F56: mov eax, 1 */
    if (CMP_NE(_flag_a, _flag_b)) { edx = eax; } /* 0x006F4F5B: cmovne edx, eax */
    eax = (uint32_t)MEM16(esi + 0xC); /* 0x006F4F5E: movzx eax, word ptr [esi + 0xc] */
    /* cmp LO16(eax), MEM16(edi + 0x8) */ /* 0x006F4F62: cmp ax, word ptr [edi + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4F95; /* 0x006F4F66: je 0x6f4f95 */
L_006F4F68:
    /* cmp ecx, 8 */ /* 0x006F4F68: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(edi + 0x8) = (uint16_t)(LO16(eax)); /* 0x006F4F6B: mov word ptr [edi + 8], ax */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F4F6F: setne al */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x006F4F72: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x006F4F72: shr ecx, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x006F4F75: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006F4F77: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    SET_LO8(eax, LO8(eax) & 0x80u); /* 0x006F4F7A: and al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + 0x7) = (uint8_t)(LO8(eax)); /* 0x006F4F7C: mov byte ptr [edi + 7], al */
    eax = MEM32(ebp + (-0x4C)); /* 0x006F4F7F: mov eax, dword ptr [ebp - 0x4c] */
    eax = (uint32_t)LO8(eax); /* 0x006F4F82: movzx eax, al */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x006F4F85: imul ecx, eax */
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x006F4F88: movzx eax, word ptr [edi + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x006F4F8C: imul ecx, eax */
    MEM32(edi + 0xC) = ecx; /* 0x006F4F8F: mov dword ptr [edi + 0xc], ecx */
    ecx = MEM32(ebp + (-0x50)); /* 0x006F4F92: mov ecx, dword ptr [ebp - 0x50] */
L_006F4F95:
    /* test edx, edx */ /* 0x006F4F95: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F502D; /* 0x006F4F97: je 0x6f502d */
L_006F4F9D:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006F4F9D: push dword ptr [esi + 4] */
    eax = (uint32_t)MEM8(esi + 0xA); /* 0x006F4FA0: movzx eax, byte ptr [esi + 0xa] */
    edx = ecx; /* 0x006F4FA4: mov edx, ecx */
    PUSH32(esp, eax); /* 0x006F4FA6: push eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x006F4FA7: movzx eax, word ptr [esi + 8] */
    ecx = esi + 0x1C; /* 0x006F4FAB: lea ecx, [esi + 0x1c] */
    PUSH32(esp, eax); /* 0x006F4FAE: push eax */
    eax = edi; /* 0x006F4FAF: mov eax, edi */
    PUSH32(esp, MEM32(eax)); /* 0x006F4FB1: push dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x006F4FB3: push dword ptr [ebp - 0x4c] */
    RECOMP_CALL(sub_007033C0); /* 0x006F4FB6: call 0x7033c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F4FBB: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F4FBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F4F12; /* 0x006F4FC0: js 0x6f4f12 */
L_006F4FC6:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F4FC6: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F502D; /* 0x006F4FCA: je 0x6f502d */
L_006F4FCC:
    eax = MEM32(esi + 0x10); /* 0x006F4FCC: mov eax, dword ptr [esi + 0x10] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F4FCF: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F4FD3: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006F4FD7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006F4FD7: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F4FDA: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(esi + 0x38); /* 0x006F4FE3: mov eax, dword ptr [esi + 0x38] */
    { double _s = sse_f64(MEM64(esi + 0x3C)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x006F4FE6: divsd xmm0, qword ptr [esi + 0x3c] */
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x006F4FEB: cvttsd2si ecx, xmm0 */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006F4FEF: imul eax, ecx */
    MEM32(esi + 0x30) = ecx; /* 0x006F4FF2: mov dword ptr [esi + 0x30], ecx */
    PUSH32(esp, eax); /* 0x006F4FF5: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F4FF6: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4FFC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x2C) = eax; /* 0x006F4FFF: mov dword ptr [esi + 0x2c], eax */
    /* test eax, eax */ /* 0x006F5002: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F502D; /* 0x006F5004: jne 0x6f502d */
L_006F5006:
    ecx = esi; /* 0x006F5006: mov ecx, esi */
    RECOMP_CALL(sub_006F49B0); /* 0x006F5008: call 0x6f49b0 */
    RECOMP_FLAGS_IN();
L_006F500D:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F500D: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5012: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5017: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F501A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F501C: pop edi */
    esi = POP32_VAL(esp); /* 0x006F501D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F501E: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F501F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F5022: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F5024: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F5029: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F502B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F502C: ret  */
L_006F502D:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x006F502D: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F50BA; /* 0x006F5031: jne 0x6f50ba */
L_006F5037:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F5037: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5042; /* 0x006F503B: je 0x6f5042 */
L_006F503D:
    eax = MEM32(esi + 0x30); /* 0x006F503D: mov eax, dword ptr [esi + 0x30] */
    goto L_006F5045; /* 0x006F5040: jmp 0x6f5045 */
L_006F5042:
    eax = MEM32(esi + 0x10); /* 0x006F5042: mov eax, dword ptr [esi + 0x10] */
L_006F5045:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006F5045: add eax, eax */
    _flag_k = FK_ADD;
    edi = eax; /* 0x006F5047: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80001FFFu);
    edi = edi & 0x80001FFFu; /* 0x006F5049: and edi, 0x80001fff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F5059; /* 0x006F504F: jns 0x6f5059 */
L_006F5051:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006F5051: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((edi | 0xFFFFE000u)); _flag_b = (uint32_t)((edi | 0xFFFFE000u));
    edi = edi | 0xFFFFE000u; /* 0x006F5052: or edi, 0xffffe000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F5058: inc edi */
    _flag_k = FK_INC;
L_006F5059:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x006F5059: neg edi */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F505B: cdq  */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F505C: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1FFFu);
    edx = edx & 0x1FFFu; /* 0x006F505E: and edx, 0x1fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006F5064: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x2000u);
    edi = edi & 0x2000u; /* 0x006F5066: and edi, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x006F506C: sar eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 13u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006F506F: add edi, eax */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F5071: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F50B0; /* 0x006F5073: jle 0x6f50b0 */
L_006F5075:
    PUSH32(esp, 0x200Cu); /* 0x006F5075: push 0x200c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F507A: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5080: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F5083: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F50AD; /* 0x006F5085: je 0x6f50ad */
L_006F5087:
    MEM32(eax + 0x2000) = 0; /* 0x006F5087: mov dword ptr [eax + 0x2000], 0 */
    MEM32(eax + 0x2004) = 0; /* 0x006F5091: mov dword ptr [eax + 0x2004], 0 */
    ecx = MEM32(esi + 0xAC); /* 0x006F509B: mov ecx, dword ptr [esi + 0xac] */
    MEM32(eax + 0x2008) = ecx; /* 0x006F50A1: mov dword ptr [eax + 0x2008], ecx */
    MEM32(esi + 0xAC) = eax; /* 0x006F50A7: mov dword ptr [esi + 0xac], eax */
L_006F50AD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006F50AD: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F5075; /* 0x006F50AE: jne 0x6f5075 */
L_006F50B0:
    MEM32(esi + 0x14) = 0x006F4370u; /* 0x006F50B0: mov dword ptr [esi + 0x14], 0x6f4370 */
    MEM32(esi + 0x18) = esi; /* 0x006F50B7: mov dword ptr [esi + 0x18], esi */
L_006F50BA:
    /* cmp MEM32(0x926A94), 0 */ /* 0x006F50BA: cmp dword ptr [0x926a94], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A94)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx * 4 + 0x926AD0) = esi; /* 0x006F50C1: mov dword ptr [ebx*4 + 0x926ad0], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F515C; /* 0x006F50C8: jne 0x6f515c */
L_006F50CE:
    ebx = MEM32(ebp + (-0x58)); /* 0x006F50CE: mov ebx, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x006F50D1: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F50D3: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    ebx = ebx & 0x00010000u; /* 0x006F50D5: and ebx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F50DB: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F50E6; /* 0x006F50DF: je 0x6f50e6 */
L_006F50E1:
    ecx = MEM32(esi + 0x34); /* 0x006F50E1: mov ecx, dword ptr [esi + 0x34] */
    goto L_006F50E8; /* 0x006F50E4: jmp 0x6f50e8 */
L_006F50E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F50E6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F50E8:
    /* cmp MEM32(esi + 0x10), ecx */ /* 0x006F50E8: cmp dword ptr [esi + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ecx = MEM32(esi + 0x10); } /* 0x006F50EB: cmova ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, ecx); /* 0x006F50EF: push ecx */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F50F0: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F50F6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x94) = eax; /* 0x006F50F9: mov dword ptr [esi + 0x94], eax */
    /* test eax, eax */ /* 0x006F50FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5006; /* 0x006F5101: je 0x6f5006 */
L_006F5107:
    PUSH32(esp, MEM32(esi)); /* 0x006F5107: push dword ptr [esi] */
    eax = ebp + (-0x48); /* 0x006F5109: lea eax, [ebp - 0x48] */
    PUSH32(esp, 0x0080608Cu); /* 0x006F510C: push 0x80608c */
    PUSH32(esp, 0x40u); /* 0x006F5111: push 0x40 */
    PUSH32(esp, eax); /* 0x006F5113: push eax */
    RECOMP_CALL(sub_006F2E40); /* 0x006F5114: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F5119: push esi */
    PUSH32(esp, ebx); /* 0x006F511A: push ebx */
    edx = ebp + (-0x48); /* 0x006F511B: lea edx, [ebp - 0x48] */
    ecx = 0x006F43B0u; /* 0x006F511E: mov ecx, 0x6f43b0 */
    RECOMP_CALL(sub_006EE580); /* 0x006F5123: call 0x6ee580 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F5128: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x9C) = eax; /* 0x006F512B: mov dword ptr [esi + 0x9c], eax */
    /* test eax, eax */ /* 0x006F5131: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F515C; /* 0x006F5133: jne 0x6f515c */
L_006F5135:
    ecx = esi; /* 0x006F5135: mov ecx, esi */
    RECOMP_CALL(sub_006F49B0); /* 0x006F5137: call 0x6f49b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0080606Cu); /* 0x006F513C: push 0x80606c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5141: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5146: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5149: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F514B: pop edi */
    esi = POP32_VAL(esp); /* 0x006F514C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F514D: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F514E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F5151: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F5153: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F5158: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F515A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F515B: ret  */
L_006F515C:
    eax = MEM32(esi); /* 0x006F515C: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F515E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006F5161: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5162: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F5163: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F5165: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F5166: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F516B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F516D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F516E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5170u);

L_006F5170:
    PUSH32(esp, esi); /* 0x006F5170: push esi */
    esi = MEM32(0x87CBC8); /* 0x006F5171: mov esi, dword ptr [0x87cbc8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F5177: dec esi */
    _flag_k = FK_DEC;
    /* cmp esi, 0x10u */ /* 0x006F5178: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F51A8; /* 0x006F517B: jae 0x6f51a8 */
L_006F517D:
    esi = MEM32(esi * 4 + 0x926AD0); /* 0x006F517D: mov esi, dword ptr [esi*4 + 0x926ad0] */
    /* test esi, esi */ /* 0x006F5184: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F51A8; /* 0x006F5186: je 0x6f51a8 */
L_006F5188:
    PUSH32(esp, esi); /* 0x006F5188: push esi */
    RECOMP_ICALL(MEM32(0x926A84)); /* 0x006F5189: call dword ptr [0x926a84] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F518F: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi + 0x8C; /* 0x006F5192: lea eax, [esi + 0x8c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F5198: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(eax); /* 0x006F519A: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    PUSH32(esp, esi); /* 0x006F519C: push esi */
    RECOMP_ICALL(MEM32(0x926A88)); /* 0x006F519D: call dword ptr [0x926a88] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F51A3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F51A6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F51A7: ret  */
L_006F51A8:
    PUSH32(esp, 0x00805F6Cu); /* 0x006F51A8: push 0x805f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F51AD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F51B2: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F51B5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F51B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F51C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F51C0u);

L_006F51C0:
    /* cmp MEM32(0x926A50), 0 */ /* 0x006F51C0: cmp dword ptr [0x926a50], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5242; /* 0x006F51C7: je 0x6f5242 */
L_006F51C9:
    PUSH32(esp, esi); /* 0x006F51C9: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F51CA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x006F51CC: lea esp, [esp] */
L_006F51D0:
    ecx = MEM32(esi + 0x926AD0); /* 0x006F51D0: mov ecx, dword ptr [esi + 0x926ad0] */
    RECOMP_CALL(sub_006F49B0); /* 0x006F51D6: call 0x6f49b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006F51DB: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x40u */ /* 0x006F51DE: cmp esi, 0x40 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006F51D0; /* 0x006F51E1: jb 0x6f51d0 */
L_006F51E3:
    edx = 0x00926AB8u; /* 0x006F51E3: mov edx, 0x926ab8 */
    ecx = 0x00926AC0u; /* 0x006F51E8: mov ecx, 0x926ac0 */
    RECOMP_CALL(sub_006F4120); /* 0x006F51ED: call 0x6f4120 */
    RECOMP_FLAGS_IN();
    edx = 0x00926ABCu; /* 0x006F51F2: mov edx, 0x926abc */
    ecx = 0x00926AC4u; /* 0x006F51F7: mov ecx, 0x926ac4 */
    RECOMP_CALL(sub_006F4120); /* 0x006F51FC: call 0x6f4120 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x926A90)); /* 0x006F5201: call dword ptr [0x926a90] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x926AAC); /* 0x006F5207: mov esi, dword ptr [0x926aac] */
    /* test esi, esi */ /* 0x006F520D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5222; /* 0x006F520F: je 0x6f5222 */
L_006F5211:
    PUSH32(esp, esi); /* 0x006F5211: push esi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006F5212: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F5218: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F5219: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F521F: add esp, 4 */
    _flag_k = FK_ADD;
L_006F5222:
    PUSH32(esp, 0x78u); /* 0x006F5222: push 0x78 */
    PUSH32(esp, 0); /* 0x006F5224: push 0 */
    PUSH32(esp, 0x00926A50u); /* 0x006F5226: push 0x926a50 */
    RECOMP_CALL(sub_0078083E); /* 0x006F522B: call 0x78083e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x40u); /* 0x006F5230: push 0x40 */
    PUSH32(esp, 0); /* 0x006F5232: push 0 */
    PUSH32(esp, 0x00926AD0u); /* 0x006F5234: push 0x926ad0 */
    RECOMP_CALL(sub_0078083E); /* 0x006F5239: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F523E: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F5241: pop esi */
L_006F5242:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5242: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5250u);

L_006F5250:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F5250: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x007D5F10u; /* 0x006F5252: mov eax, 0x7d5f10 */
    MEM32(0x9269D8) = edx; /* 0x006F5257: mov dword ptr [0x9269d8], edx */
    ecx = ecx; /* 0x006F525D: lea ecx, [ecx] */
L_006F5260:
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x006F5260: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5270; /* 0x006F5263: je 0x6f5270 */
L_006F5265:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x006F5265: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006F5268: inc edx */
    _flag_k = FK_INC;
    /* cmp eax, 0x007D5FD8u */ /* 0x006F5269: cmp eax, 0x7d5fd8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x007D5FD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F5260; /* 0x006F526E: jl 0x6f5260 */
L_006F5270:
    MEM32(0x9269D8) = edx; /* 0x006F5270: mov dword ptr [0x9269d8], edx */
    MEM32(0x9269DC) = 0; /* 0x006F5276: mov dword ptr [0x9269dc], 0 */
    /* cmp edx, 0xAu */ /* 0x006F5280: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F529B; /* 0x006F5283: je 0x6f529b */
L_006F5285:
    eax = edx + edx * 4; /* 0x006F5285: lea eax, [edx + edx*4] */
    MEM32(0x9269DC) = 1; /* 0x006F5288: mov dword ptr [0x9269dc], 1 */
    eax = (uint32_t)MEM16(eax * 4 + 0x7D5F10); /* 0x006F5292: movzx eax, word ptr [eax*4 + 0x7d5f10] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F529A: ret  */
L_006F529B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F529B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F529D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F52A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F52A0u);

L_006F52A0:
    PUSH32(esp, ebp); /* 0x006F52A0: push ebp */
    ebp = esp; /* 0x006F52A1: mov ebp, esp */
    edx = MEM32(0x87CC08); /* 0x006F52A3: mov edx, dword ptr [0x87cc08] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F52A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x006F52AB: push ebx */
    PUSH32(esp, esi); /* 0x006F52AC: push esi */
    PUSH32(esp, edi); /* 0x006F52AD: push edi */
    /* test edx, edx */ /* 0x006F52AE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F52D1; /* 0x006F52B0: jle 0x6f52d1 */
L_006F52B2:
    edi = MEM32(ebp + 0xC); /* 0x006F52B2: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x006F52B5: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(0x87CC0C); /* 0x006F52B8: mov esi, dword ptr [0x87cc0c] */
    edi = edi; /* 0x006F52BE: mov edi, edi */
L_006F52C0:
    ecx = MEM32(esi + eax * 4); /* 0x006F52C0: mov ecx, dword ptr [esi + eax*4] */
    /* cmp MEM32(ecx), ebx */ /* 0x006F52C3: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F52CC; /* 0x006F52C5: jne 0x6f52cc */
L_006F52C7:
    /* cmp MEM32(ecx + 0x4), edi */ /* 0x006F52C7: cmp dword ptr [ecx + 4], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F52E5; /* 0x006F52CA: je 0x6f52e5 */
L_006F52CC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F52CC: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x006F52CD: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F52C0; /* 0x006F52CF: jl 0x6f52c0 */
L_006F52D1:
    PUSH32(esp, 0x00806168u); /* 0x006F52D1: push 0x806168 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F52D6: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F52DB: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F52DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F52E0: pop edi */
    esi = POP32_VAL(esp); /* 0x006F52E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F52E2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F52E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F52E4: ret  */
L_006F52E5:
    /* test eax, eax */ /* 0x006F52E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F52D1; /* 0x006F52E7: js 0x6f52d1 */
L_006F52E9:
    /* cmp eax, edx */ /* 0x006F52E9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F52D1; /* 0x006F52EB: jge 0x6f52d1 */
L_006F52ED:
    edi = POP32_VAL(esp); /* 0x006F52ED: pop edi */
    esi = POP32_VAL(esp); /* 0x006F52EE: pop esi */
    eax = ecx; /* 0x006F52EF: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x006F52F1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F52F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F52F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5300u);

L_006F5300:
    PUSH32(esp, ebp); /* 0x006F5300: push ebp */
    ebp = esp; /* 0x006F5301: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F5303: push ecx */
    PUSH32(esp, ebx); /* 0x006F5304: push ebx */
    PUSH32(esp, esi); /* 0x006F5305: push esi */
    esi = MEM32(ecx + 0x8); /* 0x006F5306: mov esi, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5309: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x006F530B: push edi */
    /* test esi, esi */ /* 0x006F530C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F5333; /* 0x006F530E: jle 0x6f5333 */
L_006F5310:
    ecx = MEM32(ecx + 0x10); /* 0x006F5310: mov ecx, dword ptr [ecx + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x006F5313: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x006F5316: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F5319: mov dword ptr [ebp - 4], ecx */
    esp = esp; /* 0x006F531C: lea esp, [esp] */
L_006F5320:
    edx = MEM32(ecx); /* 0x006F5320: mov edx, dword ptr [ecx] */
    /* cmp MEM32(edx), ebx */ /* 0x006F5322: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F532B; /* 0x006F5324: jne 0x6f532b */
L_006F5326:
    /* cmp MEM32(edx + 0x4), edi */ /* 0x006F5326: cmp dword ptr [edx + 4], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F533C; /* 0x006F5329: je 0x6f533c */
L_006F532B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F532B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x006F532C: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x006F532F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F5320; /* 0x006F5331: jl 0x6f5320 */
L_006F5333:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5333: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F5335: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5336: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5337: pop ebx */
    esp = ebp; /* 0x006F5338: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F533A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F533B: ret  */
L_006F533C:
    /* test eax, eax */ /* 0x006F533C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F5333; /* 0x006F533E: js 0x6f5333 */
L_006F5340:
    /* cmp eax, esi */ /* 0x006F5340: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F5333; /* 0x006F5342: jge 0x6f5333 */
L_006F5344:
    ecx = MEM32(ebp + (-0x4)); /* 0x006F5344: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006F5347: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5348: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5349: pop ebx */
    eax = MEM32(ecx + eax * 4); /* 0x006F534A: mov eax, dword ptr [ecx + eax*4] */
    esp = ebp; /* 0x006F534D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F534F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5350: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5360u);

L_006F5360:
    PUSH32(esp, ebp); /* 0x006F5360: push ebp */
    ebp = esp; /* 0x006F5361: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F5363: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(0x87CC0C); /* 0x006F5366: mov edx, dword ptr [0x87cc0c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F536C: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F536F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x006F5371: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006F5372: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006F5375: push esi */
    esi = MEM32(0x87CC08); /* 0x006F5376: mov esi, dword ptr [0x87cc08] */
    PUSH32(esp, edi); /* 0x006F537C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006F537D: mov edi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x006F5380: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F539F; /* 0x006F5382: jle 0x6f539f */
L_006F5384:
    ecx = MEM32(edx + eax * 4); /* 0x006F5384: mov ecx, dword ptr [edx + eax*4] */
    /* cmp MEM32(ecx), ebx */ /* 0x006F5387: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5390; /* 0x006F5389: jne 0x6f5390 */
L_006F538B:
    /* cmp MEM32(ecx + 0x4), edi */ /* 0x006F538B: cmp dword ptr [ecx + 4], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5397; /* 0x006F538E: je 0x6f5397 */
L_006F5390:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F5390: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x006F5391: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F5384; /* 0x006F5393: jl 0x6f5384 */
L_006F5395:
    goto L_006F539F; /* 0x006F5395: jmp 0x6f539f */
L_006F5397:
    /* test eax, eax */ /* 0x006F5397: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F5429; /* 0x006F5399: jns 0x6f5429 */
L_006F539F:
    eax = esi * 4 + 0x4; /* 0x006F539F: lea eax, [esi*4 + 4] */
    PUSH32(esp, eax); /* 0x006F53A6: push eax */
    PUSH32(esp, edx); /* 0x006F53A7: push edx */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006F53A8: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F53AE: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = eax; /* 0x006F53B1: mov dword ptr [esp + 0x10], eax */
    /* test eax, eax */ /* 0x006F53B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F53CD; /* 0x006F53B7: jne 0x6f53cd */
L_006F53B9:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F53B9: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F53BE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F53C3: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F53C6: pop edi */
    esi = POP32_VAL(esp); /* 0x006F53C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F53C8: pop ebx */
    esp = ebp; /* 0x006F53C9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F53CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F53CC: ret  */
L_006F53CD:
    PUSH32(esp, 0x18u); /* 0x006F53CD: push 0x18 */
    MEM32(0x87CC0C) = eax; /* 0x006F53CF: mov dword ptr [0x87cc0c], eax */
    MEM32(esp + 0x18) = esi; /* 0x006F53D4: mov dword ptr [esp + 0x18], esi */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F53D8: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x14); /* 0x006F53DE: mov edx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F53E2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edx + esi * 4) = eax; /* 0x006F53E5: mov dword ptr [edx + esi*4], eax */
    /* test eax, eax */ /* 0x006F53E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F53B9; /* 0x006F53EA: je 0x6f53b9 */
L_006F53EC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F53EC: inc esi */
    _flag_k = FK_INC;
    MEM32(0x87CC08) = esi; /* 0x006F53ED: mov dword ptr [0x87cc08], esi */
    esi = MEM32(esp + 0x14); /* 0x006F53F3: mov esi, dword ptr [esp + 0x14] */
    PUSH32(esp, edi); /* 0x006F53F7: push edi */
    PUSH32(esp, ebx); /* 0x006F53F8: push ebx */
    eax = MEM32(edx + esi * 4); /* 0x006F53F9: mov eax, dword ptr [edx + esi*4] */
    MEM32(eax) = ebx; /* 0x006F53FC: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = edi; /* 0x006F53FE: mov dword ptr [eax + 4], edi */
    eax = MEM32(edx + esi * 4); /* 0x006F5401: mov eax, dword ptr [edx + esi*4] */
    MEM32(eax + 0x8) = 0; /* 0x006F5404: mov dword ptr [eax + 8], 0 */
    ecx = MEM32(edx + esi * 4); /* 0x006F540B: mov ecx, dword ptr [edx + esi*4] */
    MEM32(ecx + 0xC) = 0; /* 0x006F540E: mov dword ptr [ecx + 0xc], 0 */
    ecx = MEM32(edx + esi * 4); /* 0x006F5415: mov ecx, dword ptr [edx + esi*4] */
    MEM32(ecx + 0x10) = 0; /* 0x006F5418: mov dword ptr [ecx + 0x10], 0 */
    RECOMP_CALL(sub_006FC780); /* 0x006F541F: call 0x6fc780 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5424: add esp, 8 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F5427: mov eax, esi */
L_006F5429:
    edi = POP32_VAL(esp); /* 0x006F5429: pop edi */
    esi = POP32_VAL(esp); /* 0x006F542A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F542B: pop ebx */
    esp = ebp; /* 0x006F542C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F542E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F542F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5430u);

L_006F5430:
    PUSH32(esp, ebp); /* 0x006F5430: push ebp */
    ebp = esp; /* 0x006F5431: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F5433: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006F5436: push esi */
    esi = ecx; /* 0x006F5437: mov esi, ecx */
    _xmm[0] = _xmm[3]; /* 0x006F5439: movaps xmm0, xmm3 */
    _xmm[1] = _xmm[2]; /* 0x006F543C: movaps xmm1, xmm2 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x006F543F: movss dword ptr [ebp - 4], xmm0 */
    PUSH32(esp, edi); /* 0x006F5444: push edi */
    MEM32(ebp + (-0x8)) = _xmm[1].u32[0]; /* 0x006F5445: movss dword ptr [ebp - 8], xmm1 */
    eax = MEM32(esi + 0xC); /* 0x006F544A: mov eax, dword ptr [esi + 0xc] */
    /* cmp MEM32(esi + 0x8), eax */ /* 0x006F544D: cmp dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F54AF; /* 0x006F5450: jne 0x6f54af */
L_006F5452:
    eax = eax * 4 + 0x4; /* 0x006F5452: lea eax, [eax*4 + 4] */
    PUSH32(esp, eax); /* 0x006F5459: push eax */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x006F545A: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006F545D: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F5463: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5465: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F5468: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F547F; /* 0x006F546A: jne 0x6f547f */
L_006F546C:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F546C: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5471: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5476: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F5479: pop edi */
    esi = POP32_VAL(esp); /* 0x006F547A: pop esi */
    esp = ebp; /* 0x006F547B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F547D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F547E: ret  */
L_006F547F:
    PUSH32(esp, 0x14u); /* 0x006F547F: push 0x14 */
    MEM32(esi + 0x10) = edi; /* 0x006F5481: mov dword ptr [esi + 0x10], edi */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F5484: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x006F548A: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F548D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + ecx * 4) = eax; /* 0x006F5490: mov dword ptr [edi + ecx*4], eax */
    ecx = MEM32(esi + 0xC); /* 0x006F5493: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x10); /* 0x006F5496: mov eax, dword ptr [esi + 0x10] */
    /* cmp MEM32(eax + ecx * 4), 0 */ /* 0x006F5499: cmp dword ptr [eax + ecx*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F546C; /* 0x006F549D: je 0x6f546c */
L_006F549F:
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006F549F: movss xmm0, dword ptr [ebp - 4] */
    eax = ecx + 0x1; /* 0x006F54A4: lea eax, [ecx + 1] */
    _xmm[1].u64[0] = MEM32(ebp + (-0x8)); _xmm[1].u64[1] = 0; /* 0x006F54A7: movss xmm1, dword ptr [ebp - 8] */
    MEM32(esi + 0xC) = eax; /* 0x006F54AC: mov dword ptr [esi + 0xc], eax */
L_006F54AF:
    ecx = MEM32(esi + 0x8); /* 0x006F54AF: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x10); /* 0x006F54B2: mov eax, dword ptr [esi + 0x10] */
    edi = POP32_VAL(esp); /* 0x006F54B5: pop edi */
    edx = MEM32(eax + ecx * 4); /* 0x006F54B6: mov edx, dword ptr [eax + ecx*4] */
    eax = ecx + 0x1; /* 0x006F54B9: lea eax, [ecx + 1] */
    MEM32(esi + 0x8) = eax; /* 0x006F54BC: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x006F54BF: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x006F54C2: pop esi */
    MEM32(edx) = eax; /* 0x006F54C3: mov dword ptr [edx], eax */
    eax = MEM32(ebp + 0xC); /* 0x006F54C5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx + 0xC) = _xmm[0].u32[0]; /* 0x006F54C8: movss dword ptr [edx + 0xc], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + 0x10); _xmm[0].u64[1] = 0; /* 0x006F54CD: movss xmm0, dword ptr [ebp + 0x10] */
    MEM32(edx + 0x4) = eax; /* 0x006F54D2: mov dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F54D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x8) = _xmm[1].u32[0]; /* 0x006F54D7: movss dword ptr [edx + 8], xmm1 */
    MEM32(edx + 0x10) = _xmm[0].u32[0]; /* 0x006F54DC: movss dword ptr [edx + 0x10], xmm0 */
    esp = ebp; /* 0x006F54E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F54E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F54E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F54F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F54F0u);

L_006F54F0:
    PUSH32(esp, ebp); /* 0x006F54F0: push ebp */
    ebp = esp; /* 0x006F54F1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F54F3: push ecx */
    PUSH32(esp, ebx); /* 0x006F54F4: push ebx */
    PUSH32(esp, esi); /* 0x006F54F5: push esi */
    PUSH32(esp, edi); /* 0x006F54F6: push edi */
    edi = ecx; /* 0x006F54F7: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F54F9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(edi + 0x8); /* 0x006F54FB: mov edx, dword ptr [edi + 8] */
    /* test edx, edx */ /* 0x006F54FE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F5521; /* 0x006F5500: jle 0x6f5521 */
L_006F5502:
    eax = MEM32(edi + 0x10); /* 0x006F5502: mov eax, dword ptr [edi + 0x10] */
    ebx = MEM32(ebp + 0xC); /* 0x006F5505: mov ebx, dword ptr [ebp + 0xc] */
L_006F5508:
    ecx = MEM32(eax); /* 0x006F5508: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + 0x8); /* 0x006F550A: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx), edx */ /* 0x006F550D: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(edi + 0x8); /* 0x006F550F: mov edx, dword ptr [edi + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5519; /* 0x006F5512: jne 0x6f5519 */
L_006F5514:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x006F5514: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F552B; /* 0x006F5517: je 0x6f552b */
L_006F5519:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F5519: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F551A: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, edx */ /* 0x006F551D: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F5508; /* 0x006F551F: jl 0x6f5508 */
L_006F5521:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F5521: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F5524: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5525: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5526: pop ebx */
    esp = ebp; /* 0x006F5527: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5529: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F552A: ret  */
L_006F552B:
    /* test esi, esi */ /* 0x006F552B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F5521; /* 0x006F552D: js 0x6f5521 */
L_006F552F:
    ecx = MEM32(edi + 0x10); /* 0x006F552F: mov ecx, dword ptr [edi + 0x10] */
    eax = edx + (-0x1); /* 0x006F5532: lea eax, [edx - 1] */
    MEM32(edi + 0x8) = eax; /* 0x006F5535: mov dword ptr [edi + 8], eax */
    eax = MEM32(ecx + eax * 4); /* 0x006F5538: mov eax, dword ptr [ecx + eax*4] */
    edx = MEM32(ecx + esi * 4); /* 0x006F553B: mov edx, dword ptr [ecx + esi*4] */
    MEM32(ecx + esi * 4) = eax; /* 0x006F553E: mov dword ptr [ecx + esi*4], eax */
    eax = MEM32(edi + 0x10); /* 0x006F5541: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(edi + 0x8); /* 0x006F5544: mov ecx, dword ptr [edi + 8] */
    edi = POP32_VAL(esp); /* 0x006F5547: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5548: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5549: pop ebx */
    MEM32(eax + ecx * 4) = edx; /* 0x006F554A: mov dword ptr [eax + ecx*4], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F554D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x006F554F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5551: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5552: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5560u);

L_006F5560:
    PUSH32(esp, ebp); /* 0x006F5560: push ebp */
    ebp = esp; /* 0x006F5561: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F5563: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x006F5566: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F5569: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F556E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4C) = eax; /* 0x006F5570: mov dword ptr [esp + 0x4c], eax */
    eax = MEM32(ebp + 0x8); /* 0x006F5574: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006F5577: push esi */
    esi = MEM32(ebp + 0x10); /* 0x006F5578: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x006F557B: push edi */
    edi = MEM32(ebp + 0x14); /* 0x006F557C: mov edi, dword ptr [ebp + 0x14] */
    MEM32(esp + 0x18) = ecx; /* 0x006F557F: mov dword ptr [esp + 0x18], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x006F5583: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x006F5586: push ecx */
    PUSH32(esp, eax); /* 0x006F5587: push eax */
    MEM32(esp + 0x10) = _xmm[3].u32[0]; /* 0x006F5588: movss dword ptr [esp + 0x10], xmm3 */
    MEM32(esp + 0x1C) = eax; /* 0x006F558E: mov dword ptr [esp + 0x1c], eax */
    MEM32(esp + 0x14) = ecx; /* 0x006F5592: mov dword ptr [esp + 0x14], ecx */
    RECOMP_CALL(sub_006F52A0); /* 0x006F5596: call 0x6f52a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F559B: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = eax; /* 0x006F559E: mov dword ptr [esp + 0x10], eax */
    /* test eax, eax */ /* 0x006F55A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F55BA; /* 0x006F55A4: jne 0x6f55ba */
L_006F55A6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F55A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F55A9: pop edi */
    esi = POP32_VAL(esp); /* 0x006F55AA: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006F55AB: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F55AF: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F55B1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F55B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F55B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F55B9: ret  */
L_006F55BA:
    PUSH32(esp, edi); /* 0x006F55BA: push edi */
    PUSH32(esp, esi); /* 0x006F55BB: push esi */
    ecx = eax; /* 0x006F55BC: mov ecx, eax */
    RECOMP_CALL(sub_006F5300); /* 0x006F55BE: call 0x6f5300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F55C3: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esp + 0x18), 0 */ /* 0x006F55C6: cmp dword ptr [esp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5699; /* 0x006F55CB: je 0x6f5699 */
L_006F55D1:
    /* test eax, eax */ /* 0x006F55D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F55E8; /* 0x006F55D3: je 0x6f55e8 */
L_006F55D5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F55D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F55D7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F55D8: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006F55D9: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F55DD: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F55DF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F55E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F55E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F55E7: ret  */
L_006F55E8:
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x006F55E8: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[3].u64[0] = MEM32(ebp + 0x18); _xmm[3].u64[1] = 0; /* 0x006F55ED: movss xmm3, dword ptr [ebp + 0x18] */
    _xmm[2].u64[0] = MEM32(esp + 0x8); _xmm[2].u64[1] = 0; /* 0x006F55F2: movss xmm2, dword ptr [esp + 8] */
    PUSH32(esp, ecx); /* 0x006F55F8: push ecx */
    ecx = MEM32(esp + 0x14); /* 0x006F55F9: mov ecx, dword ptr [esp + 0x14] */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x006F55FD: movss dword ptr [esp], xmm0 */
    PUSH32(esp, edi); /* 0x006F5602: push edi */
    PUSH32(esp, esi); /* 0x006F5603: push esi */
    RECOMP_CALL(sub_006F5430); /* 0x006F5604: call 0x6f5430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F5609: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F560C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F55D5; /* 0x006F560E: js 0x6f55d5 */
L_006F5610:
    eax = MEM32(0x92548C); /* 0x006F5610: mov eax, dword ptr [0x92548c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F5615: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F5617: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5624; /* 0x006F5619: je 0x6f5624 */
L_006F561B:
    /* test MEM8(eax), 1 */ /* 0x006F561B: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F572F; /* 0x006F561E: jne 0x6f572f */
L_006F5624:
    _xmm[0].u64[0] = MEM32(esp + 0x8); _xmm[0].u64[1] = 0; /* 0x006F5624: movss xmm0, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x14); /* 0x006F562A: mov ecx, dword ptr [esp + 0x14] */
    MEM32(esp + 0x34) = _xmm[0].u32[0]; /* 0x006F562E: movss dword ptr [esp + 0x34], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + 0x18); _xmm[0].u64[1] = 0; /* 0x006F5634: movss xmm0, dword ptr [ebp + 0x18] */
    MEM32(esp + 0x24) = ecx; /* 0x006F5639: mov dword ptr [esp + 0x24], ecx */
    ecx = MEM32(esp + 0xC); /* 0x006F563D: mov ecx, dword ptr [esp + 0xc] */
    MEM32(esp + 0x38) = _xmm[0].u32[0]; /* 0x006F5641: movss dword ptr [esp + 0x38], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x006F5647: movss xmm0, dword ptr [ebp + 0x1c] */
    MEM32(esp + 0x28) = ecx; /* 0x006F564C: mov dword ptr [esp + 0x28], ecx */
    ecx = esp + 0x1C; /* 0x006F5650: lea ecx, [esp + 0x1c] */
    MEM32(esp + 0x1C) = 0x700u; /* 0x006F5654: mov dword ptr [esp + 0x1c], 0x700 */
    MEM32(esp + 0x2C) = esi; /* 0x006F565C: mov dword ptr [esp + 0x2c], esi */
    MEM32(esp + 0x30) = edi; /* 0x006F5660: mov dword ptr [esp + 0x30], edi */
    MEM32(esp + 0x3C) = 0; /* 0x006F5664: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x40) = 0; /* 0x006F566C: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x44) = _xmm[0].u32[0]; /* 0x006F5674: movss dword ptr [esp + 0x44], xmm0 */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F567A: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F567F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F5681: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F5683: setg cl */
    eax = ecx; /* 0x006F5686: mov eax, ecx */
    edi = POP32_VAL(esp); /* 0x006F5688: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5689: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006F568A: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F568E: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F5690: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F5695: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5697: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5698: ret  */
L_006F5699:
    /* test eax, eax */ /* 0x006F5699: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F55D5; /* 0x006F569B: je 0x6f55d5 */
L_006F56A1:
    ecx = MEM32(0x92548C); /* 0x006F56A1: mov ecx, dword ptr [0x92548c] */
    MEM32(esp + 0x8) = 0; /* 0x006F56A7: mov dword ptr [esp + 8], 0 */
    /* test ecx, ecx */ /* 0x006F56AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F56B8; /* 0x006F56B1: je 0x6f56b8 */
L_006F56B3:
    /* test MEM8(ecx), 2 */ /* 0x006F56B3: test byte ptr [ecx], 2 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F571D; /* 0x006F56B6: jne 0x6f571d */
L_006F56B8:
    _xmm[0].u64[0] = MEM32(eax + 0x8); _xmm[0].u64[1] = 0; /* 0x006F56B8: movss xmm0, dword ptr [eax + 8] */
    ecx = MEM32(esp + 0x14); /* 0x006F56BD: mov ecx, dword ptr [esp + 0x14] */
    MEM32(esp + 0x34) = _xmm[0].u32[0]; /* 0x006F56C1: movss dword ptr [esp + 0x34], xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0xC); _xmm[0].u64[1] = 0; /* 0x006F56C7: movss xmm0, dword ptr [eax + 0xc] */
    MEM32(esp + 0x24) = ecx; /* 0x006F56CC: mov dword ptr [esp + 0x24], ecx */
    ecx = MEM32(esp + 0xC); /* 0x006F56D0: mov ecx, dword ptr [esp + 0xc] */
    MEM32(esp + 0x38) = _xmm[0].u32[0]; /* 0x006F56D4: movss dword ptr [esp + 0x38], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x006F56DA: movss xmm0, dword ptr [ebp + 0x1c] */
    MEM32(esp + 0x28) = ecx; /* 0x006F56DF: mov dword ptr [esp + 0x28], ecx */
    ecx = esp + 0x1C; /* 0x006F56E3: lea ecx, [esp + 0x1c] */
    MEM32(esp + 0x1C) = 0x701u; /* 0x006F56E7: mov dword ptr [esp + 0x1c], 0x701 */
    MEM32(esp + 0x2C) = esi; /* 0x006F56EF: mov dword ptr [esp + 0x2c], esi */
    MEM32(esp + 0x30) = edi; /* 0x006F56F3: mov dword ptr [esp + 0x30], edi */
    MEM32(esp + 0x3C) = 0; /* 0x006F56F7: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x40) = 0; /* 0x006F56FF: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x44) = _xmm[0].u32[0]; /* 0x006F5707: movss dword ptr [esp + 0x44], xmm0 */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F570D: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F5712: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F5714: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F5716: setg cl */
    MEM32(esp + 0x8) = ecx; /* 0x006F5719: mov dword ptr [esp + 8], ecx */
L_006F571D:
    ecx = MEM32(esp + 0x10); /* 0x006F571D: mov ecx, dword ptr [esp + 0x10] */
    PUSH32(esp, edi); /* 0x006F5721: push edi */
    PUSH32(esp, esi); /* 0x006F5722: push esi */
    RECOMP_CALL(sub_006F54F0); /* 0x006F5723: call 0x6f54f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x10); /* 0x006F5728: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F572C: add esp, 8 */
    _flag_k = FK_ADD;
L_006F572F:
    eax = ecx; /* 0x006F572F: mov eax, ecx */
    ecx = MEM32(esp + 0x54); /* 0x006F5731: mov ecx, dword ptr [esp + 0x54] */
    edi = POP32_VAL(esp); /* 0x006F5735: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5736: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F5737: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F5739: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F573E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5740: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5741: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5750u);

L_006F5750:
    PUSH32(esp, ebp); /* 0x006F5750: push ebp */
    ebp = esp; /* 0x006F5751: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F5753: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x006F5756: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F5759: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F575E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4C) = eax; /* 0x006F5760: mov dword ptr [esp + 0x4c], eax */
    ecx = MEM32(ebp + 0xC); /* 0x006F5764: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x006F5767: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006F576A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x006F576B: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x006F576E: push edi */
    edi = MEM32(ebp + 0x14); /* 0x006F576F: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x006F5772: push ecx */
    PUSH32(esp, eax); /* 0x006F5773: push eax */
    MEM32(esp + 0x20) = _xmm[3].u32[0]; /* 0x006F5774: movss dword ptr [esp + 0x20], xmm3 */
    MEM32(esp + 0x18) = _xmm[2].u32[0]; /* 0x006F577A: movss dword ptr [esp + 0x18], xmm2 */
    MEM32(esp + 0x14) = eax; /* 0x006F5780: mov dword ptr [esp + 0x14], eax */
    MEM32(esp + 0x1C) = ecx; /* 0x006F5784: mov dword ptr [esp + 0x1c], ecx */
    RECOMP_CALL(sub_006F52A0); /* 0x006F5788: call 0x6f52a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F578D: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F5790: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F57A8; /* 0x006F5792: jne 0x6f57a8 */
L_006F5794:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F5794: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F5797: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5798: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006F5799: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F579D: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F579F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F57A4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F57A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F57A7: ret  */
L_006F57A8:
    PUSH32(esp, edi); /* 0x006F57A8: push edi */
    PUSH32(esp, esi); /* 0x006F57A9: push esi */
    ecx = eax; /* 0x006F57AA: mov ecx, eax */
    RECOMP_CALL(sub_006F5300); /* 0x006F57AC: call 0x6f5300 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006F57B1: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F57B3: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006F57B6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5803; /* 0x006F57B8: jne 0x6f5803 */
L_006F57BA:
    _xmm[0].u64[0] = MEM32(ebp + 0x18); _xmm[0].u64[1] = 0; /* 0x006F57BA: movss xmm0, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F57BF: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x1C); /* 0x006F57C2: mov eax, dword ptr [esp + 0x1c] */
    ecx = 1; /* 0x006F57C6: mov ecx, 1 */
    _xmm[3].u64[0] = MEM32(esp + 0x18); _xmm[3].u64[1] = 0; /* 0x006F57CB: movss xmm3, dword ptr [esp + 0x18] */
    MEM32(esp + 0x4) = _xmm[0].u32[0]; /* 0x006F57D1: movss dword ptr [esp + 4], xmm0 */
    _xmm[0].u64[0] = MEM32(esp + 0x20); _xmm[0].u64[1] = 0; /* 0x006F57D7: movss xmm0, dword ptr [esp + 0x20] */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x006F57DD: movss dword ptr [esp], xmm0 */
    PUSH32(esp, edi); /* 0x006F57E2: push edi */
    PUSH32(esp, esi); /* 0x006F57E3: push esi */
    PUSH32(esp, eax); /* 0x006F57E4: push eax */
    eax = MEM32(esp + 0x20); /* 0x006F57E5: mov eax, dword ptr [esp + 0x20] */
    PUSH32(esp, eax); /* 0x006F57E9: push eax */
    RECOMP_CALL(sub_006F5560); /* 0x006F57EA: call 0x6f5560 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F57EF: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F57F2: pop edi */
    esi = POP32_VAL(esp); /* 0x006F57F3: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006F57F4: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F57F8: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F57FA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F57FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5801: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5802: ret  */
L_006F5803:
    _xmm[4].u64[0] = MEM32(esp + 0x10); _xmm[4].u64[1] = 0; /* 0x006F5803: movss xmm4, dword ptr [esp + 0x10] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x006F5809: xorps xmm1, xmm1 */
    _xmm[3].u64[0] = MEM32(esp + 0x18); _xmm[3].u64[1] = 0; /* 0x006F580C: movss xmm3, dword ptr [esp + 0x18] */
    _xmm[5] = _xmm[4]; /* 0x006F5812: movaps xmm5, xmm4 */
    { float _s = sse_f32(MEM32(ecx + 0x8)); _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x006F5815: subss xmm5, dword ptr [ecx + 8] */
    _xmm[6].u64[0] = MEM32(ebp + 0x18); _xmm[6].u64[1] = 0; /* 0x006F581A: movss xmm6, dword ptr [ebp + 0x18] */
    _xmm[2] = _xmm[3]; /* 0x006F581F: movaps xmm2, xmm3 */
    { float _s = sse_f32(MEM32(ecx + 0xC)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x006F5822: subss xmm2, dword ptr [ecx + 0xc] */
    _flag_a = SSE_COMI(_xmm[5].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F5827: ucomiss xmm5, xmm1 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006F582A: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006F582B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006F585D; /* 0x006F582E: jp 0x6f585d */
L_006F5830:
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F5830: ucomiss xmm2, xmm1 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006F5833: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006F5834: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006F585D; /* 0x006F5837: jp 0x6f585d */
L_006F5839:
    _xmm[0] = _xmm[6]; /* 0x006F5839: movaps xmm0, xmm6 */
    { float _s = sse_f32(MEM32(ecx + 0x10)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006F583C: subss xmm0, dword ptr [ecx + 0x10] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F5841: ucomiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006F5844: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006F5845: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006F585D; /* 0x006F5848: jp 0x6f585d */
L_006F584A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F584A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F584C: pop edi */
    esi = POP32_VAL(esp); /* 0x006F584D: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006F584E: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F5852: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F5854: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F5859: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F585B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F585C: ret  */
L_006F585D:
    eax = MEM32(0x92548C); /* 0x006F585D: mov eax, dword ptr [0x92548c] */
    MEM32(ecx + 0x8) = _xmm[4].u32[0]; /* 0x006F5862: movss dword ptr [ecx + 8], xmm4 */
    MEM32(ecx + 0xC) = _xmm[3].u32[0]; /* 0x006F5867: movss dword ptr [ecx + 0xc], xmm3 */
    MEM32(ecx + 0x10) = _xmm[6].u32[0]; /* 0x006F586C: movss dword ptr [ecx + 0x10], xmm6 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F5871: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F5873: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F587C; /* 0x006F5875: je 0x6f587c */
L_006F5877:
    /* test MEM8(eax), 4 */ /* 0x006F5877: test byte ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F58CA; /* 0x006F587A: jne 0x6f58ca */
L_006F587C:
    eax = MEM32(esp + 0xC); /* 0x006F587C: mov eax, dword ptr [esp + 0xc] */
    ecx = esp + 0x1C; /* 0x006F5880: lea ecx, [esp + 0x1c] */
    MEM32(esp + 0x24) = eax; /* 0x006F5884: mov dword ptr [esp + 0x24], eax */
    eax = MEM32(esp + 0x14); /* 0x006F5888: mov eax, dword ptr [esp + 0x14] */
    MEM32(esp + 0x1C) = 0x702u; /* 0x006F588C: mov dword ptr [esp + 0x1c], 0x702 */
    MEM32(esp + 0x28) = eax; /* 0x006F5894: mov dword ptr [esp + 0x28], eax */
    MEM32(esp + 0x2C) = esi; /* 0x006F5898: mov dword ptr [esp + 0x2c], esi */
    MEM32(esp + 0x30) = edi; /* 0x006F589C: mov dword ptr [esp + 0x30], edi */
    MEM32(esp + 0x34) = _xmm[4].u32[0]; /* 0x006F58A0: movss dword ptr [esp + 0x34], xmm4 */
    MEM32(esp + 0x38) = _xmm[3].u32[0]; /* 0x006F58A6: movss dword ptr [esp + 0x38], xmm3 */
    MEM32(esp + 0x3C) = _xmm[5].u32[0]; /* 0x006F58AC: movss dword ptr [esp + 0x3c], xmm5 */
    MEM32(esp + 0x40) = _xmm[2].u32[0]; /* 0x006F58B2: movss dword ptr [esp + 0x40], xmm2 */
    MEM32(esp + 0x44) = _xmm[6].u32[0]; /* 0x006F58B8: movss dword ptr [esp + 0x44], xmm6 */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F58BE: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F58C3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F58C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F58C7: setg cl */
L_006F58CA:
    eax = ecx; /* 0x006F58CA: mov eax, ecx */
    ecx = MEM32(esp + 0x54); /* 0x006F58CC: mov ecx, dword ptr [esp + 0x54] */
    edi = POP32_VAL(esp); /* 0x006F58D0: pop edi */
    esi = POP32_VAL(esp); /* 0x006F58D1: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F58D2: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F58D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F58D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F58DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F58DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F58E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F58E0u);

L_006F58E0:
    PUSH32(esp, ebp); /* 0x006F58E0: push ebp */
    ebp = esp; /* 0x006F58E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F58E3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F58E6: push ebx */
    ebx = MEM32(0x7CC44C); /* 0x006F58E7: mov ebx, dword ptr [0x7cc44c] */
    PUSH32(esp, esi); /* 0x006F58ED: push esi */
    PUSH32(esp, edi); /* 0x006F58EE: push edi */
    edi = MEM32(0x87CC08); /* 0x006F58EF: mov edi, dword ptr [0x87cc08] */
    eax = edi; /* 0x006F58F5: mov eax, edi */
    /* test edi, edi */ /* 0x006F58F7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5970; /* 0x006F58F9: je 0x6f5970 */
L_006F58FB:
    edx = MEM32(0x87CC0C); /* 0x006F58FB: mov edx, dword ptr [0x87cc0c] */
L_006F5901:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F5901: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F5902: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006F5904: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edx + eax * 4); /* 0x006F5907: mov eax, dword ptr [edx + eax*4] */
    ecx = MEM32(eax); /* 0x006F590A: mov ecx, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x006F590C: mov ebx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F590F: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x006F5912: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F5927; /* 0x006F5914: jle 0x6f5927 */
L_006F5916:
    eax = MEM32(edx + esi * 4); /* 0x006F5916: mov eax, dword ptr [edx + esi*4] */
    /* cmp MEM32(eax), ecx */ /* 0x006F5919: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5922; /* 0x006F591B: jne 0x6f5922 */
L_006F591D:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x006F591D: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F592A; /* 0x006F5920: je 0x6f592a */
L_006F5922:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F5922: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x006F5923: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F5916; /* 0x006F5925: jl 0x6f5916 */
L_006F5927:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x006F5927: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F592A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F592A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x006F592C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F594A; /* 0x006F592E: jle 0x6f594a */
L_006F5930:
    ecx = MEM32(edx + eax * 4); /* 0x006F5930: mov ecx, dword ptr [edx + eax*4] */
    edx = MEM32(ebp + (-0x4)); /* 0x006F5933: mov edx, dword ptr [ebp - 4] */
    /* cmp MEM32(ecx), edx */ /* 0x006F5936: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(0x87CC0C); /* 0x006F5938: mov edx, dword ptr [0x87cc0c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5945; /* 0x006F593E: jne 0x6f5945 */
L_006F5940:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x006F5940: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F598C; /* 0x006F5943: je 0x6f598c */
L_006F5945:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F5945: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x006F5946: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F5930; /* 0x006F5948: jl 0x6f5930 */
L_006F594A:
    PUSH32(esp, 0x00806168u); /* 0x006F594A: push 0x806168 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F594F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x87CC08); /* 0x006F5954: mov edi, dword ptr [0x87cc08] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F595A: add esp, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(0x87CC0C); /* 0x006F595D: mov edx, dword ptr [0x87cc0c] */
L_006F5963:
    ebx = MEM32(0x7CC44C); /* 0x006F5963: mov ebx, dword ptr [0x7cc44c] */
L_006F5969:
    eax = MEM32(ebp + (-0x8)); /* 0x006F5969: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x006F596C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5901; /* 0x006F596E: jne 0x6f5901 */
L_006F5970:
    PUSH32(esp, MEM32(0x87CC0C)); /* 0x006F5970: push dword ptr [0x87cc0c] */
    RECOMP_ICALL(ebx); /* 0x006F5976: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5978: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CC0C) = 0; /* 0x006F597B: mov dword ptr [0x87cc0c], 0 */
    edi = POP32_VAL(esp); /* 0x006F5985: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5986: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5987: pop ebx */
    esp = ebp; /* 0x006F5988: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F598A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F598B: ret  */
L_006F598C:
    /* test eax, eax */ /* 0x006F598C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F594A; /* 0x006F598E: js 0x6f594a */
L_006F5990:
    /* cmp eax, edi */ /* 0x006F5990: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F594A; /* 0x006F5992: jge 0x6f594a */
L_006F5994:
    eax = MEM32(edx + eax * 4); /* 0x006F5994: mov eax, dword ptr [edx + eax*4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F5997: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006F599A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5963; /* 0x006F599C: je 0x6f5963 */
L_006F599E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006F599E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0xC), ebx */ /* 0x006F59A0: cmp dword ptr [eax + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F59CE; /* 0x006F59A3: jle 0x6f59ce */
L_006F59A5:
    edi = eax; /* 0x006F59A5: mov edi, eax */
    goto L_006F59B0; /* 0x006F59A7: jmp 0x6f59b0 */
L_006F59B0:
    eax = MEM32(edi + 0x10); /* 0x006F59B0: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x006F59B3: push dword ptr [eax + ebx*4] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F59B6: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006F59BC: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F59BD: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(edi + 0xC) */ /* 0x006F59C0: cmp ebx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F59B0; /* 0x006F59C3: jl 0x6f59b0 */
L_006F59C5:
    edi = MEM32(0x87CC08); /* 0x006F59C5: mov edi, dword ptr [0x87cc08] */
    eax = MEM32(ebp + (-0x4)); /* 0x006F59CB: mov eax, dword ptr [ebp - 4] */
L_006F59CE:
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x006F59CE: push dword ptr [eax + 0x10] */
    ebx = MEM32(0x7CC44C); /* 0x006F59D1: mov ebx, dword ptr [0x7cc44c] */
    RECOMP_ICALL(ebx); /* 0x006F59D7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F59D9: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006F59DC: push dword ptr [ebp - 4] */
    RECOMP_ICALL(ebx); /* 0x006F59DF: call ebx */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x87CC0C); /* 0x006F59E1: mov edx, dword ptr [0x87cc0c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F59E7: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006F59EA: dec edi */
    _flag_k = FK_DEC;
    MEM32(0x87CC08) = edi; /* 0x006F59EB: mov dword ptr [0x87cc08], edi */
    eax = MEM32(edx + edi * 4); /* 0x006F59F1: mov eax, dword ptr [edx + edi*4] */
    MEM32(edx + esi * 4) = eax; /* 0x006F59F4: mov dword ptr [edx + esi*4], eax */
    RECOMP_BACKEDGE();
    goto L_006F5969; /* 0x006F59F7: jmp 0x6f5969 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006F5A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5A00u);

L_006F5A00:
    PUSH32(esp, ebx); /* 0x006F5A00: push ebx */
    PUSH32(esp, esi); /* 0x006F5A01: push esi */
    PUSH32(esp, edi); /* 0x006F5A02: push edi */
    edi = ecx; /* 0x006F5A03: mov edi, ecx */
    RECOMP_CALL(sub_006FBC10); /* 0x006F5A05: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x926AC8); /* 0x006F5A0A: mov esi, dword ptr [0x926ac8] */
    ebx = eax; /* 0x006F5A10: mov ebx, eax */
    /* test esi, esi */ /* 0x006F5A12: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5A50; /* 0x006F5A14: je 0x6f5a50 */
L_006F5A16:
    ecx = MEM32(esi); /* 0x006F5A16: mov ecx, dword ptr [esi] */
    eax = edi; /* 0x006F5A18: mov eax, edi */
    ebx = ebx; /* 0x006F5A1A: lea ebx, [ebx] */
L_006F5A20:
    SET_LO8(edx, MEM8(eax)); /* 0x006F5A20: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006F5A22: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5A40; /* 0x006F5A24: jne 0x6f5a40 */
L_006F5A26:
    /* test LO8(edx), LO8(edx) */ /* 0x006F5A26: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5A3C; /* 0x006F5A28: je 0x6f5a3c */
L_006F5A2A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006F5A2A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006F5A2D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5A40; /* 0x006F5A30: jne 0x6f5a40 */
L_006F5A32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F5A32: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F5A35: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006F5A38: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5A20; /* 0x006F5A3A: jne 0x6f5a20 */
L_006F5A3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5A3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F5A45; /* 0x006F5A3E: jmp 0x6f5a45 */
L_006F5A40:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F5A40: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F5A42: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F5A45:
    /* test eax, eax */ /* 0x006F5A45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5A56; /* 0x006F5A47: je 0x6f5a56 */
L_006F5A49:
    esi = MEM32(esi + 0x10); /* 0x006F5A49: mov esi, dword ptr [esi + 0x10] */
    /* test esi, esi */ /* 0x006F5A4C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5A16; /* 0x006F5A4E: jne 0x6f5a16 */
L_006F5A50:
    edi = POP32_VAL(esp); /* 0x006F5A50: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5A51: pop esi */
    eax = ebx; /* 0x006F5A52: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x006F5A54: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5A55: ret  */
L_006F5A56:
    /* test ebx, ebx */ /* 0x006F5A56: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5A60; /* 0x006F5A58: je 0x6f5a60 */
L_006F5A5A:
    /* cmp MEM32(esi + 0x8), 2 */ /* 0x006F5A5A: cmp dword ptr [esi + 8], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5A50; /* 0x006F5A5E: jne 0x6f5a50 */
L_006F5A60:
    eax = MEM32(esi + 0x4); /* 0x006F5A60: mov eax, dword ptr [esi + 4] */
    edi = POP32_VAL(esp); /* 0x006F5A63: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5A64: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5A65: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5A66: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5A70u);

L_006F5A70:
    PUSH32(esp, esi); /* 0x006F5A70: push esi */
    esi = edx; /* 0x006F5A71: mov esi, edx */
    RECOMP_CALL(sub_006F5A00); /* 0x006F5A73: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F5A78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5A80; /* 0x006F5A7A: jne 0x6f5a80 */
L_006F5A7C:
    eax = esi; /* 0x006F5A7C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F5A7E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5A7F: ret  */
L_006F5A80:
    /* cmp MEM8(eax), 0x30u */ /* 0x006F5A80: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5A9F; /* 0x006F5A83: je 0x6f5a9f */
L_006F5A85:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006F5A85: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x006F5A8A: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006F5A8B: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5A91: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F5A94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5A9F; /* 0x006F5A96: je 0x6f5a9f */
L_006F5A98:
    eax = 1; /* 0x006F5A98: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x006F5A9D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5A9E: ret  */
L_006F5A9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5A9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F5AA1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5AA2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5AB0u);

L_006F5AB0:
    PUSH32(esp, ebp); /* 0x006F5AB0: push ebp */
    ebp = esp; /* 0x006F5AB1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F5AB3: push ecx */
    PUSH32(esp, esi); /* 0x006F5AB4: push esi */
    PUSH32(esp, edi); /* 0x006F5AB5: push edi */
    edi = ecx; /* 0x006F5AB6: mov edi, ecx */
    esi = edx; /* 0x006F5AB8: mov esi, edx */
    MEM32(ebp + (-0x4)) = esi; /* 0x006F5ABA: mov dword ptr [ebp - 4], esi */
    /* test edi, edi */ /* 0x006F5ABD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5BDE; /* 0x006F5ABF: je 0x6f5bde */
L_006F5AC5:
    /* cmp MEM8(edi), 0 */ /* 0x006F5AC5: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5BDE; /* 0x006F5AC8: je 0x6f5bde */
L_006F5ACE:
    /* test esi, esi */ /* 0x006F5ACE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5AEA; /* 0x006F5AD0: jne 0x6f5aea */
L_006F5AD2:
    PUSH32(esp, 0x00806180u); /* 0x006F5AD2: push 0x806180 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F5AD7: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5ADC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5AE1: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F5AE4: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5AE5: pop esi */
    esp = ebp; /* 0x006F5AE6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5AE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5AE9: ret  */
L_006F5AEA:
    PUSH32(esp, ebx); /* 0x006F5AEA: push ebx */
    PUSH32(esp, 0); /* 0x006F5AEB: push 0 */
    RECOMP_CALL(sub_006F5C00); /* 0x006F5AED: call 0x6f5c00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x006F5AF2: push 0xc */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F5AF4: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F5AFA: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5AFC: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006F5AFF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5B17; /* 0x006F5B01: jne 0x6f5b17 */
L_006F5B03:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F5B03: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5B08: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5B0D: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x006F5B10: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F5B11: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5B12: pop esi */
    esp = ebp; /* 0x006F5B13: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5B15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5B16: ret  */
L_006F5B17:
    MEM32(ebx) = esi; /* 0x006F5B17: mov dword ptr [ebx], esi */
    esi = MEM32(0x926AC8); /* 0x006F5B19: mov esi, dword ptr [0x926ac8] */
    MEM32(ebx + 0x4) = 0; /* 0x006F5B1F: mov dword ptr [ebx + 4], 0 */
    /* test esi, esi */ /* 0x006F5B26: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5B64; /* 0x006F5B28: je 0x6f5b64 */
L_006F5B2A:
    ebx = ebx; /* 0x006F5B2A: lea ebx, [ebx] */
L_006F5B30:
    eax = MEM32(esi); /* 0x006F5B30: mov eax, dword ptr [esi] */
    ecx = edi; /* 0x006F5B32: mov ecx, edi */
L_006F5B34:
    SET_LO8(edx, MEM8(ecx)); /* 0x006F5B34: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x006F5B36: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5B54; /* 0x006F5B38: jne 0x6f5b54 */
L_006F5B3A:
    /* test LO8(edx), LO8(edx) */ /* 0x006F5B3A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5B50; /* 0x006F5B3C: je 0x6f5b50 */
L_006F5B3E:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x006F5B3E: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x006F5B41: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5B54; /* 0x006F5B44: jne 0x6f5b54 */
L_006F5B46:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F5B46: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F5B49: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006F5B4C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5B34; /* 0x006F5B4E: jne 0x6f5b34 */
L_006F5B50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5B50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F5B59; /* 0x006F5B52: jmp 0x6f5b59 */
L_006F5B54:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F5B54: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F5B56: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F5B59:
    /* test eax, eax */ /* 0x006F5B59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5BBC; /* 0x006F5B5B: je 0x6f5bbc */
L_006F5B5D:
    esi = MEM32(esi + 0x10); /* 0x006F5B5D: mov esi, dword ptr [esi + 0x10] */
    /* test esi, esi */ /* 0x006F5B60: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5B30; /* 0x006F5B62: jne 0x6f5b30 */
L_006F5B64:
    PUSH32(esp, 0x14u); /* 0x006F5B64: push 0x14 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F5B66: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F5B6C: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5B6E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F5B71: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5B90; /* 0x006F5B73: jne 0x6f5b90 */
L_006F5B75:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F5B75: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5B7A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x006F5B7F: push ebx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F5B80: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5B86: add esp, 8 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x006F5B89: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F5B8A: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5B8B: pop esi */
    esp = ebp; /* 0x006F5B8C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5B8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5B8F: ret  */
L_006F5B90:
    ecx = edi; /* 0x006F5B90: mov ecx, edi */
    RECOMP_CALL(sub_006F2D10); /* 0x006F5B92: call 0x6f2d10 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x006F5B97: mov dword ptr [esi], eax */
    eax = MEM32(0x926AC8); /* 0x006F5B99: mov eax, dword ptr [0x926ac8] */
    MEM32(esi + 0x4) = 0; /* 0x006F5B9E: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x006F5BA5: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x006F5BAC: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = eax; /* 0x006F5BB3: mov dword ptr [esi + 0x10], eax */
    MEM32(0x926AC8) = esi; /* 0x006F5BB6: mov dword ptr [0x926ac8], esi */
L_006F5BBC:
    eax = MEM32(esi + 0xC); /* 0x006F5BBC: mov eax, dword ptr [esi + 0xc] */
    ecx = edi; /* 0x006F5BBF: mov ecx, edi */
    MEM32(ebx + 0x8) = eax; /* 0x006F5BC1: mov dword ptr [ebx + 8], eax */
    MEM32(esi + 0xC) = ebx; /* 0x006F5BC4: mov dword ptr [esi + 0xc], ebx */
    RECOMP_CALL(sub_006F5A00); /* 0x006F5BC7: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006F5BCC: push eax */
    PUSH32(esp, eax); /* 0x006F5BCD: push eax */
    PUSH32(esp, edi); /* 0x006F5BCE: push edi */
    PUSH32(esp, 0); /* 0x006F5BCF: push 0 */
    RECOMP_ICALL(MEM32(ebp + (-0x4))); /* 0x006F5BD1: call dword ptr [ebp - 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F5BD4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x006F5BD7: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F5BD8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5BD9: pop esi */
    esp = ebp; /* 0x006F5BDA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5BDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5BDD: ret  */
L_006F5BDE:
    PUSH32(esp, 0x007CD6C8u); /* 0x006F5BDE: push 0x7cd6c8 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F5BE3: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5BE8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5BED: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F5BF0: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5BF1: pop esi */
    esp = ebp; /* 0x006F5BF2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5BF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5BF5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5C00u);

L_006F5C00:
    PUSH32(esp, ebp); /* 0x006F5C00: push ebp */
    ebp = esp; /* 0x006F5C01: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F5C03: push ebx */
    PUSH32(esp, esi); /* 0x006F5C04: push esi */
    esi = MEM32(0x926AC8); /* 0x006F5C05: mov esi, dword ptr [0x926ac8] */
    ebx = edx; /* 0x006F5C0B: mov ebx, edx */
    PUSH32(esp, edi); /* 0x006F5C0D: push edi */
    edi = ecx; /* 0x006F5C0E: mov edi, ecx */
    /* test esi, esi */ /* 0x006F5C10: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5C48; /* 0x006F5C12: je 0x6f5c48 */
L_006F5C14:
    eax = MEM32(esi); /* 0x006F5C14: mov eax, dword ptr [esi] */
    ecx = edi; /* 0x006F5C16: mov ecx, edi */
L_006F5C18:
    SET_LO8(edx, MEM8(ecx)); /* 0x006F5C18: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x006F5C1A: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5C38; /* 0x006F5C1C: jne 0x6f5c38 */
L_006F5C1E:
    /* test LO8(edx), LO8(edx) */ /* 0x006F5C1E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5C34; /* 0x006F5C20: je 0x6f5c34 */
L_006F5C22:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x006F5C22: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x006F5C25: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5C38; /* 0x006F5C28: jne 0x6f5c38 */
L_006F5C2A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F5C2A: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006F5C2D: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006F5C30: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5C18; /* 0x006F5C32: jne 0x6f5c18 */
L_006F5C34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5C34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F5C3D; /* 0x006F5C36: jmp 0x6f5c3d */
L_006F5C38:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F5C38: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F5C3A: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F5C3D:
    /* test eax, eax */ /* 0x006F5C3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5C4D; /* 0x006F5C3F: je 0x6f5c4d */
L_006F5C41:
    esi = MEM32(esi + 0x10); /* 0x006F5C41: mov esi, dword ptr [esi + 0x10] */
    /* test esi, esi */ /* 0x006F5C44: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5C14; /* 0x006F5C46: jne 0x6f5c14 */
L_006F5C48:
    edi = POP32_VAL(esp); /* 0x006F5C48: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5C49: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5C4A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F5C4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5C4C: ret  */
L_006F5C4D:
    ecx = MEM32(esi + 0xC); /* 0x006F5C4D: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F5C50: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006F5C52: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5C48; /* 0x006F5C54: je 0x6f5c48 */
L_006F5C56:
    eax = MEM32(ebp + 0x8); /* 0x006F5C56: mov eax, dword ptr [ebp + 8] */
    esp = esp; /* 0x006F5C59: lea esp, [esp] */
L_006F5C60:
    /* cmp ebx, MEM32(ecx) */ /* 0x006F5C60: cmp ebx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5C69; /* 0x006F5C62: jne 0x6f5c69 */
L_006F5C64:
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x006F5C64: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5C77; /* 0x006F5C67: je 0x6f5c77 */
L_006F5C69:
    edx = ecx; /* 0x006F5C69: mov edx, ecx */
    ecx = MEM32(ecx + 0x8); /* 0x006F5C6B: mov ecx, dword ptr [ecx + 8] */
    /* test ecx, ecx */ /* 0x006F5C6E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5C60; /* 0x006F5C70: jne 0x6f5c60 */
L_006F5C72:
    edi = POP32_VAL(esp); /* 0x006F5C72: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5C73: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5C74: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F5C75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5C76: ret  */
L_006F5C77:
    eax = MEM32(ecx + 0x8); /* 0x006F5C77: mov eax, dword ptr [ecx + 8] */
    /* test edx, edx */ /* 0x006F5C7A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5C83; /* 0x006F5C7C: je 0x6f5c83 */
L_006F5C7E:
    MEM32(edx + 0x8) = eax; /* 0x006F5C7E: mov dword ptr [edx + 8], eax */
    goto L_006F5C86; /* 0x006F5C81: jmp 0x6f5c86 */
L_006F5C83:
    MEM32(esi + 0xC) = eax; /* 0x006F5C83: mov dword ptr [esi + 0xc], eax */
L_006F5C86:
    edi = POP32_VAL(esp); /* 0x006F5C86: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5C87: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5C88: pop ebx */
    MEM32(ebp + 0x8) = ecx; /* 0x006F5C89: mov dword ptr [ebp + 8], ecx */
    ebp = POP32_VAL(esp); /* 0x006F5C8C: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC44C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F5CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5CA0u);

L_006F5CA0:
    PUSH32(esp, ebp); /* 0x006F5CA0: push ebp */
    ebp = esp; /* 0x006F5CA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F5CA3: push ecx */
    PUSH32(esp, ebx); /* 0x006F5CA4: push ebx */
    ebx = MEM32(0x926AC8); /* 0x006F5CA5: mov ebx, dword ptr [0x926ac8] */
    /* test ebx, ebx */ /* 0x006F5CAB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5CF3; /* 0x006F5CAD: je 0x6f5cf3 */
L_006F5CAF:
    PUSH32(esp, esi); /* 0x006F5CAF: push esi */
    PUSH32(esp, edi); /* 0x006F5CB0: push edi */
    edi = MEM32(0x7CC44C); /* 0x006F5CB1: mov edi, dword ptr [0x7cc44c] */
L_006F5CB7:
    esi = ebx; /* 0x006F5CB7: mov esi, ebx */
    ebx = MEM32(ebx + 0x10); /* 0x006F5CB9: mov ebx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x4)) = esi; /* 0x006F5CBC: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(esi)); /* 0x006F5CBF: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x006F5CC1: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006F5CC3: push dword ptr [esi + 4] */
    RECOMP_ICALL(edi); /* 0x006F5CC6: call edi */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0xC); /* 0x006F5CC8: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5CCB: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F5CCE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5CDF; /* 0x006F5CD0: je 0x6f5cdf */
L_006F5CD2:
    PUSH32(esp, esi); /* 0x006F5CD2: push esi */
    esi = MEM32(esi + 0x8); /* 0x006F5CD3: mov esi, dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x006F5CD6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5CD8: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F5CDB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5CD2; /* 0x006F5CDD: jne 0x6f5cd2 */
L_006F5CDF:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006F5CDF: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x006F5CE2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5CE4: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006F5CE7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5CB7; /* 0x006F5CE9: jne 0x6f5cb7 */
L_006F5CEB:
    edi = POP32_VAL(esp); /* 0x006F5CEB: pop edi */
    MEM32(0x926AC8) = ebx; /* 0x006F5CEC: mov dword ptr [0x926ac8], ebx */
    esi = POP32_VAL(esp); /* 0x006F5CF2: pop esi */
L_006F5CF3:
    ebx = POP32_VAL(esp); /* 0x006F5CF3: pop ebx */
    esp = ebp; /* 0x006F5CF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F5CF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5CF7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5D00u);

L_006F5D00:
    PUSH32(esp, ebp); /* 0x006F5D00: push ebp */
    ebp = esp; /* 0x006F5D01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F5D03: push ecx */
    PUSH32(esp, esi); /* 0x006F5D04: push esi */
    PUSH32(esp, edi); /* 0x006F5D05: push edi */
    PUSH32(esp, 0x3Cu); /* 0x006F5D06: push 0x3c */
    PUSH32(esp, 1); /* 0x006F5D08: push 1 */
    edi = edx; /* 0x006F5D0A: mov edi, edx */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006F5D0C: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F5D12: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5D14: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F5D17: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5E02; /* 0x006F5D19: je 0x6f5e02 */
L_006F5D1F:
    ecx = MEM32(ebp + 0x10); /* 0x006F5D1F: mov ecx, dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_006FA520); /* 0x006F5D22: call 0x6fa520 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x006F5D27: mov dword ptr [esi + 4], eax */
    ecx = esi; /* 0x006F5D2A: mov ecx, esi */
    /* test eax, eax */ /* 0x006F5D2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5D8D; /* 0x006F5D2E: je 0x6f5d8d */
L_006F5D30:
    eax = MEM32(ebp + 0x8); /* 0x006F5D30: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = edi; /* 0x006F5D33: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = eax; /* 0x006F5D36: mov dword ptr [esi + 0xc], eax */
    RECOMP_CALL(sub_006FA950); /* 0x006F5D39: call 0x6fa950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F5D3E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = eax; /* 0x006F5D40: mov dword ptr [esi + 0x10], eax */
    RECOMP_CALL(sub_006F63A0); /* 0x006F5D43: call 0x6f63a0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x006F5D48: mov ecx, dword ptr [esi + 4] */
    edx = MEM32(ecx); /* 0x006F5D4B: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x006F5D4D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5D5F; /* 0x006F5D4F: je 0x6f5d5f */
L_006F5D51:
    eax = edx; /* 0x006F5D51: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F5D53: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F5D58: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5DD7; /* 0x006F5D5D: jne 0x6f5dd7 */
L_006F5D5F:
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x006F5D5F: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x006F5D5F: shr edx, 0x18 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x006F5D62: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 1 */ /* 0x006F5D65: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5D74; /* 0x006F5D68: je 0x6f5d74 */
L_006F5D6A:
    /* cmp edx, 2 */ /* 0x006F5D6A: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5D74; /* 0x006F5D6D: je 0x6f5d74 */
L_006F5D6F:
    /* cmp edx, 3 */ /* 0x006F5D6F: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5DD7; /* 0x006F5D72: jne 0x6f5dd7 */
L_006F5D74:
    SET_LO8(ecx, MEM8(ecx + 0x8)); /* 0x006F5D74: mov cl, byte ptr [ecx + 8] */
    eax = 1; /* 0x006F5D77: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006F5D7C: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006F5D7C: shl eax, cl */
    ecx = eax; /* 0x006F5D7E: mov ecx, eax */
    RECOMP_CALL(sub_006FA7A0); /* 0x006F5D80: call 0x6fa7a0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F5D85: mov edi, eax */
    /* test edi, edi */ /* 0x006F5D87: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5D99; /* 0x006F5D89: jne 0x6f5d99 */
L_006F5D8B:
    ecx = esi; /* 0x006F5D8B: mov ecx, esi */
L_006F5D8D:
    RECOMP_CALL(sub_006F7460); /* 0x006F5D8D: call 0x6f7460 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5D92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F5D94: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5D95: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F5D96: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F5D97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5D98: ret  */
L_006F5D99:
    /* cmp MEM32(edi), 2 */ /* 0x006F5D99: cmp dword ptr [edi], 2 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F5DC7; /* 0x006F5D9C: jne 0x6f5dc7 */
L_006F5D9E:
    eax = MEM32(edi + 0x4); /* 0x006F5D9E: mov eax, dword ptr [edi + 4] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x006F5DA1: mov byte ptr [eax], 0xff */
    eax = MEM32(edi + 0x4); /* 0x006F5DA4: mov eax, dword ptr [edi + 4] */
    MEM8(eax + 0x1) = (uint8_t)(0xFFu); /* 0x006F5DA7: mov byte ptr [eax + 1], 0xff */
    eax = MEM32(edi + 0x4); /* 0x006F5DAB: mov eax, dword ptr [edi + 4] */
    MEM8(eax + 0x2) = (uint8_t)(0xFFu); /* 0x006F5DAE: mov byte ptr [eax + 2], 0xff */
    eax = MEM32(edi + 0x4); /* 0x006F5DB2: mov eax, dword ptr [edi + 4] */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x006F5DB5: mov byte ptr [eax + 4], 0 */
    eax = MEM32(edi + 0x4); /* 0x006F5DB9: mov eax, dword ptr [edi + 4] */
    MEM8(eax + 0x5) = (uint8_t)(0); /* 0x006F5DBC: mov byte ptr [eax + 5], 0 */
    eax = MEM32(edi + 0x4); /* 0x006F5DC0: mov eax, dword ptr [edi + 4] */
    MEM8(eax + 0x6) = (uint8_t)(0); /* 0x006F5DC3: mov byte ptr [eax + 6], 0 */
L_006F5DC7:
    edx = edi; /* 0x006F5DC7: mov edx, edi */
    ecx = esi; /* 0x006F5DC9: mov ecx, esi */
    RECOMP_CALL(sub_006F5F60); /* 0x006F5DCB: call 0x6f5f60 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x006F5DD0: mov ecx, edi */
    RECOMP_CALL(sub_006FA8A0); /* 0x006F5DD2: call 0x6fa8a0 */
    RECOMP_FLAGS_IN();
L_006F5DD7:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x006F5DD7: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5E22; /* 0x006F5DDB: je 0x6f5e22 */
L_006F5DDD:
    eax = MEM32(esi + 0xC); /* 0x006F5DDD: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x006F5DE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5E22; /* 0x006F5DE2: je 0x6f5e22 */
L_006F5DE4:
    edi = MEM32(esi + 0x10); /* 0x006F5DE4: mov edi, dword ptr [esi + 0x10] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x006F5DE7: imul edi, eax */
    PUSH32(esp, edi); /* 0x006F5DEA: push edi */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F5DEB: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5DF1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x006F5DF4: mov dword ptr [esi + 0x14], eax */
    /* test eax, eax */ /* 0x006F5DF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5E16; /* 0x006F5DF9: jne 0x6f5e16 */
L_006F5DFB:
    ecx = esi; /* 0x006F5DFB: mov ecx, esi */
    RECOMP_CALL(sub_006F7460); /* 0x006F5DFD: call 0x6f7460 */
    RECOMP_FLAGS_IN();
L_006F5E02:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F5E02: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5E07: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5E0C: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5E0F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F5E11: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5E12: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F5E13: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F5E14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5E15: ret  */
L_006F5E16:
    PUSH32(esp, edi); /* 0x006F5E16: push edi */
    PUSH32(esp, 0); /* 0x006F5E17: push 0 */
    PUSH32(esp, eax); /* 0x006F5E19: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006F5E1A: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F5E1F: add esp, 0xc */
    _flag_k = FK_ADD;
L_006F5E22:
    PUSH32(esp, 0x58u); /* 0x006F5E22: push 0x58 */
    PUSH32(esp, 1); /* 0x006F5E24: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006F5E26: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006F5E2C: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5E2E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006F5E31: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5E46; /* 0x006F5E33: jne 0x6f5e46 */
L_006F5E35:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F5E35: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5E3A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5E3F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F5E42: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F5E4D; /* 0x006F5E44: jmp 0x6f5e4d */
L_006F5E46:
    MEM32(ecx + 0x4C) = 0xFFFFFFFFu; /* 0x006F5E46: mov dword ptr [ecx + 0x4c], 0xffffffff */
L_006F5E4D:
    MEM32(esi + 0x34) = ecx; /* 0x006F5E4D: mov dword ptr [esi + 0x34], ecx */
    /* test ecx, ecx */ /* 0x006F5E50: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5D8B; /* 0x006F5E52: je 0x6f5d8b */
L_006F5E58:
    eax = MEM32(esi + 0x4); /* 0x006F5E58: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x006F5E5B: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5E80; /* 0x006F5E5F: je 0x6f5e80 */
L_006F5E61:
    edx = MEM32(ecx + 0x44); /* 0x006F5E61: mov edx, dword ptr [ecx + 0x44] */
    eax = edx; /* 0x006F5E64: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF8Fu);
    eax = eax & 0xFFFFFF8Fu; /* 0x006F5E66: and eax, 0xffffff8f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = eax; /* 0x006F5E69: mov dword ptr [ecx + 0x44], eax */
    eax = MEM32(esi + 0x34); /* 0x006F5E6C: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)((MEM32(eax + 0x44) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax + 0x44) | 0x10u));
    MEM32(eax + 0x44) = MEM32(eax + 0x44) | 0x10u; /* 0x006F5E6F: or dword ptr [eax + 0x44], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x34); /* 0x006F5E73: mov ecx, dword ptr [esi + 0x34] */
    /* cmp MEM32(ecx + 0x44), edx */ /* 0x006F5E76: cmp dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F5E80; /* 0x006F5E79: je 0x6f5e80 */
L_006F5E7B:
    RECOMP_CALL(sub_006FB030); /* 0x006F5E7B: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F5E80:
    edi = POP32_VAL(esp); /* 0x006F5E80: pop edi */
    MEM32(esi + 0x38) = 1; /* 0x006F5E81: mov dword ptr [esi + 0x38], 1 */
    eax = esi; /* 0x006F5E88: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F5E8A: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F5E8B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F5E8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5E8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5E90u);

L_006F5E90:
    PUSH32(esp, ebp); /* 0x006F5E90: push ebp */
    ebp = esp; /* 0x006F5E91: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F5E93: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x006F5E94: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006F5E97: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x006F5E98: push dword ptr [ebp + 0x1c] */
    esi = edx; /* 0x006F5E9B: mov esi, edx */
    edx = MEM32(ebp + 0x10); /* 0x006F5E9D: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x006F5EA0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006F5EA3: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_006FA0F0); /* 0x006F5EA6: call 0x6fa0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F5EAB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F5EAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5EC5; /* 0x006F5EB0: jne 0x6f5ec5 */
L_006F5EB2:
    PUSH32(esp, 0x0080618Cu); /* 0x006F5EB2: push 0x80618c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5EB7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5EBC: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5EBF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F5EC1: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F5EC2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F5EC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5EC4: ret  */
L_006F5EC5:
    PUSH32(esp, eax); /* 0x006F5EC5: push eax */
    PUSH32(esp, ecx); /* 0x006F5EC6: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F5EC7: push dword ptr [ebp + 8] */
    edx = esi; /* 0x006F5ECA: mov edx, esi */
    RECOMP_CALL(sub_006F5D00); /* 0x006F5ECC: call 0x6f5d00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F5ED1: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F5ED4: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F5ED5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F5ED6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5ED7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5EE0u);

L_006F5EE0:
    PUSH32(esp, ebp); /* 0x006F5EE0: push ebp */
    ebp = esp; /* 0x006F5EE1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F5EE3: push ebx */
    PUSH32(esp, esi); /* 0x006F5EE4: push esi */
    PUSH32(esp, edi); /* 0x006F5EE5: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x006F5EE6: push dword ptr [ebp + 0x20] */
    ebx = ecx; /* 0x006F5EE9: mov ebx, ecx */
    edi = edx; /* 0x006F5EEB: mov edi, edx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x006F5EED: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x006F5EF0: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x006F5EF3: push dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x14); /* 0x006F5EF6: mov edx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_006FA0F0); /* 0x006F5EF9: call 0x6fa0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F5EFE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F5F01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5F19; /* 0x006F5F03: jne 0x6f5f19 */
L_006F5F05:
    PUSH32(esp, 0x0080618Cu); /* 0x006F5F05: push 0x80618c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5F0A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5F0F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5F12: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F5F14: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5F15: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5F16: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F5F17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5F18: ret  */
L_006F5F19:
    PUSH32(esp, eax); /* 0x006F5F19: push eax */
    PUSH32(esp, ecx); /* 0x006F5F1A: push ecx */
    PUSH32(esp, 0); /* 0x006F5F1B: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F5F1D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F5D00); /* 0x006F5F1F: call 0x6f5d00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F5F24: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F5F26: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F5F29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5F4D; /* 0x006F5F2B: je 0x6f5f4d */
L_006F5F2D:
    ecx = MEM32(ebp + 0x8); /* 0x006F5F2D: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F5F30: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x006F5F32: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ecx; /* 0x006F5F35: mov dword ptr [esi + 0xc], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x006F5F38: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x10) = ecx; /* 0x006F5F3B: mov dword ptr [esi + 0x10], ecx */
    ecx = esi; /* 0x006F5F3E: mov ecx, esi */
    MEM32(esi + 0x14) = ebx; /* 0x006F5F40: mov dword ptr [esi + 0x14], ebx */
    MEM32(esi + 0x8) = edi; /* 0x006F5F43: mov dword ptr [esi + 8], edi */
    RECOMP_CALL(sub_006F63A0); /* 0x006F5F46: call 0x6f63a0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006F5F4B: mov eax, esi */
L_006F5F4D:
    edi = POP32_VAL(esp); /* 0x006F5F4D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5F4E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5F4F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F5F50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5F51: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5F60u);

L_006F5F60:
    PUSH32(esp, esi); /* 0x006F5F60: push esi */
    esi = ecx; /* 0x006F5F61: mov esi, ecx */
    /* test esi, esi */ /* 0x006F5F63: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5F76; /* 0x006F5F65: jne 0x6f5f76 */
L_006F5F67:
    PUSH32(esp, 0x008061FCu); /* 0x006F5F67: push 0x8061fc */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5F6C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F5F71: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F5F74: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5F75: ret  */
L_006F5F76:
    ecx = MEM32(esi + 0x4); /* 0x006F5F76: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_006FA840); /* 0x006F5F79: call 0x6fa840 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F5F7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F5F87; /* 0x006F5F80: jns 0x6f5f87 */
L_006F5F82:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F5F82: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F5F85: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5F86: ret  */
L_006F5F87:
    ecx = MEM32(esi + 0x34); /* 0x006F5F87: mov ecx, dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_006FB030); /* 0x006F5F8A: call 0x6fb030 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F5F8F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F5F91: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5F92: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F5FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F5FA0u);

L_006F5FA0:
    PUSH32(esp, ebp); /* 0x006F5FA0: push ebp */
    ebp = esp; /* 0x006F5FA1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F5FA3: push ebx */
    PUSH32(esp, esi); /* 0x006F5FA4: push esi */
    esi = ecx; /* 0x006F5FA5: mov esi, ecx */
    ebx = edx; /* 0x006F5FA7: mov ebx, edx */
    PUSH32(esp, edi); /* 0x006F5FA9: push edi */
    /* test esi, esi */ /* 0x006F5FAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F5FC5; /* 0x006F5FAC: jne 0x6f5fc5 */
L_006F5FAE:
    PUSH32(esp, 0x008061F4u); /* 0x006F5FAE: push 0x8061f4 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F5FB3: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5FB8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5FBD: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F5FC0: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5FC1: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5FC2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F5FC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5FC4: ret  */
L_006F5FC5:
    eax = MEM32(esi + 0x4); /* 0x006F5FC5: mov eax, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x006F5FC8: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x006F5FCB: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x006F5FCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F5FED; /* 0x006F5FD0: je 0x6f5fed */
L_006F5FD2:
    /* cmp edi, MEM32(eax) */ /* 0x006F5FD2: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006F5FED; /* 0x006F5FD4: jb 0x6f5fed */
L_006F5FD6:
    PUSH32(esp, 0x007F8EC8u); /* 0x006F5FD6: push 0x7f8ec8 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F5FDB: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F5FE0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F5FE5: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F5FE8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F5FE9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F5FEA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F5FEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F5FEC: ret  */
L_006F5FED:
    /* test LO8(ebx), 2 */ /* 0x006F5FED: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F600F; /* 0x006F5FF0: je 0x6f600f */
L_006F5FF2:
    ecx = MEM32(esi + 0x34); /* 0x006F5FF2: mov ecx, dword ptr [esi + 0x34] */
    edx = MEM32(ecx + 0x44); /* 0x006F5FF5: mov edx, dword ptr [ecx + 0x44] */
    eax = edx; /* 0x006F5FF8: mov eax, edx */
    _flag_a = (uint32_t)((eax | 0x1000u)); _flag_b = (uint32_t)((eax | 0x1000u));
    eax = eax | 0x1000u; /* 0x006F5FFA: or eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = eax; /* 0x006F5FFF: mov dword ptr [ecx + 0x44], eax */
    ecx = MEM32(esi + 0x34); /* 0x006F6002: mov ecx, dword ptr [esi + 0x34] */
    /* cmp MEM32(ecx + 0x44), edx */ /* 0x006F6005: cmp dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F600F; /* 0x006F6008: je 0x6f600f */
L_006F600A:
    RECOMP_CALL(sub_006FB030); /* 0x006F600A: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F600F:
    ecx = MEM32(esi + 0x34); /* 0x006F600F: mov ecx, dword ptr [esi + 0x34] */
    edx = MEM32(ecx + 0x44); /* 0x006F6012: mov edx, dword ptr [ecx + 0x44] */
    /* test ebx, ebx */ /* 0x006F6015: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F605F; /* 0x006F6017: je 0x6f605f */
L_006F6019:
    eax = edx; /* 0x006F6019: mov eax, edx */
    _flag_a = (uint32_t)((eax | 0x100u)); _flag_b = (uint32_t)((eax | 0x100u));
    eax = eax | 0x100u; /* 0x006F601B: or eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = eax; /* 0x006F6020: mov dword ptr [ecx + 0x44], eax */
    eax = MEM32(esi + 0x34); /* 0x006F6023: mov eax, dword ptr [esi + 0x34] */
    MEM32(eax + 0x48) = edi; /* 0x006F6026: mov dword ptr [eax + 0x48], edi */
    eax = MEM32(esi + 0x4); /* 0x006F6029: mov eax, dword ptr [esi + 4] */
    edi = MEM32(eax + 0x4); /* 0x006F602C: mov edi, dword ptr [eax + 4] */
    /* test edi, edi */ /* 0x006F602F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F609A; /* 0x006F6031: je 0x6f609a */
L_006F6033:
    eax = MEM32(esi + 0x34); /* 0x006F6033: mov eax, dword ptr [esi + 0x34] */
    ecx = MEM32(eax + 0x48); /* 0x006F6036: mov ecx, dword ptr [eax + 0x48] */
    eax = MEM32(edi + 0x4); /* 0x006F6039: mov eax, dword ptr [edi + 4] */
    MEM8(eax + ecx * 4 + 0x3) = (uint8_t)(0); /* 0x006F603C: mov byte ptr [eax + ecx*4 + 3], 0 */
    eax = MEM32(esi + 0x4); /* 0x006F6041: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006F6044: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x006F6047: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x4); /* 0x006F604A: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006F604D: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x006F6050: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F609A; /* 0x006F6054: jne 0x6f609a */
L_006F6056:
    MEM32(eax + 0x8) = 1; /* 0x006F6056: mov dword ptr [eax + 8], 1 */
    goto L_006F609A; /* 0x006F605D: jmp 0x6f609a */
L_006F605F:
    eax = MEM32(esi + 0x4); /* 0x006F605F: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006F6062: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x006F6065: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6090; /* 0x006F6067: je 0x6f6090 */
L_006F6069:
    eax = MEM32(eax + 0x4); /* 0x006F6069: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(ecx + 0x48); /* 0x006F606C: mov ecx, dword ptr [ecx + 0x48] */
    MEM8(eax + ecx * 4 + 0x3) = (uint8_t)(0xFFu); /* 0x006F606F: mov byte ptr [eax + ecx*4 + 3], 0xff */
    eax = MEM32(esi + 0x4); /* 0x006F6074: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006F6077: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x006F607A: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x4); /* 0x006F607D: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006F6080: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x006F6083: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6090; /* 0x006F6087: jne 0x6f6090 */
L_006F6089:
    MEM32(eax + 0x8) = 1; /* 0x006F6089: mov dword ptr [eax + 8], 1 */
L_006F6090:
    eax = MEM32(esi + 0x34); /* 0x006F6090: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(MEM32(eax + 0x44)); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(eax + 0x44) = MEM32(eax + 0x44) & 0xFFFFFEFFu; /* 0x006F6093: and dword ptr [eax + 0x44], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F609A:
    ecx = MEM32(esi + 0x34); /* 0x006F609A: mov ecx, dword ptr [esi + 0x34] */
    /* cmp MEM32(ecx + 0x44), edx */ /* 0x006F609D: cmp dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F60A7; /* 0x006F60A0: je 0x6f60a7 */
L_006F60A2:
    RECOMP_CALL(sub_006FB030); /* 0x006F60A2: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F60A7:
    edi = POP32_VAL(esp); /* 0x006F60A7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F60A8: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F60A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F60AB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F60AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F60AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F60B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F60B0u);

L_006F60B0:
    PUSH32(esp, ebp); /* 0x006F60B0: push ebp */
    ebp = esp; /* 0x006F60B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F60B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F60B6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F60B9: push ebx */
    PUSH32(esp, esi); /* 0x006F60BA: push esi */
    esi = ecx; /* 0x006F60BB: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F60BD: push edi */
    /* test esi, esi */ /* 0x006F60BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6226; /* 0x006F60C0: je 0x6f6226 */
L_006F60C6:
    eax = MEM32(esi + 0x34); /* 0x006F60C6: mov eax, dword ptr [esi + 0x34] */
    /* test MEM32(eax + 0x44), 0x100u */ /* 0x006F60C9: test dword ptr [eax + 0x44], 0x100 */
    _flag_a = (uint32_t)(MEM32(eax + 0x44)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6226; /* 0x006F60D0: je 0x6f6226 */
L_006F60D6:
    eax = MEM32(esi + 0x4); /* 0x006F60D6: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x006F60D9: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6226; /* 0x006F60DD: je 0x6f6226 */
L_006F60E3:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F60E3: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F60FB; /* 0x006F60E7: jne 0x6f60fb */
L_006F60E9:
    /* test MEM8(esi), 2 */ /* 0x006F60E9: test byte ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F60FB; /* 0x006F60EC: je 0x6f60fb */
L_006F60EE:
    edx = 1; /* 0x006F60EE: mov edx, 1 */
    RECOMP_CALL(sub_007092B0); /* 0x006F60F3: call 0x7092b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x006F60F8: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F60FB:
    ecx = MEM32(esi + 0x4); /* 0x006F60FB: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1; /* 0x006F60FE: inc dword ptr [esi + 0x1c] */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(ecx + 0x9); /* 0x006F6101: movzx eax, byte ptr [ecx + 9] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x006F6105: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F6173; /* 0x006F6108: je 0x6f6173 */
L_006F610A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x006F610A: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_006F61D5; /* 0x006F610D: jne 0x6f61d5 */
L_006F6113:
    eax = MEM32(esi + 0x34); /* 0x006F6113: mov eax, dword ptr [esi + 0x34] */
    edi = MEM32(ecx + 0x18); /* 0x006F6116: mov edi, dword ptr [ecx + 0x18] */
    ecx = MEM32(esi + 0x14); /* 0x006F6119: mov ecx, dword ptr [esi + 0x14] */
    edi = ~edi; /* 0x006F611C: not edi */
    MEM32(esp + 0x10) = ecx; /* 0x006F611E: mov dword ptr [esp + 0x10], ecx */
    ebx = MEM32(eax + 0x48); /* 0x006F6122: mov ebx, dword ptr [eax + 0x48] */
    eax = MEM32(esi + 0xC); /* 0x006F6125: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    ebx = ebx & edi; /* 0x006F6128: and ebx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F612A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F61D5; /* 0x006F612C: je 0x6f61d5 */
L_006F6132:
    edx = MEM32(esi + 0x8); /* 0x006F6132: mov edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F6135: dec eax */
    _flag_k = FK_DEC;
    MEM32(esp + 0x14) = eax; /* 0x006F6136: mov dword ptr [esp + 0x14], eax */
    /* test edx, edx */ /* 0x006F613A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6152; /* 0x006F613C: je 0x6f6152 */
L_006F613E:
    edi = edi; /* 0x006F613E: mov edi, edi */
L_006F6140:
    eax = MEM32(ecx); /* 0x006F6140: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F6142: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x006F6143: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x006F6145: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F614B; /* 0x006F6147: jne 0x6f614b */
L_006F6149:
    MEM32(ecx) = eax; /* 0x006F6149: mov dword ptr [ecx], eax */
L_006F614B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x006F614B: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x006F614E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6140; /* 0x006F6150: jne 0x6f6140 */
L_006F6152:
    eax = MEM32(esi + 0x10); /* 0x006F6152: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(esp + 0x10); /* 0x006F6155: mov ecx, dword ptr [esp + 0x10] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F6159: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x006F615A: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006F615D: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006F615F: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    ecx = ecx + eax * 4; /* 0x006F6162: lea ecx, [ecx + eax*4] */
    eax = MEM32(esp + 0x14); /* 0x006F6165: mov eax, dword ptr [esp + 0x14] */
    MEM32(esp + 0x10) = ecx; /* 0x006F6169: mov dword ptr [esp + 0x10], ecx */
    /* test eax, eax */ /* 0x006F616D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6132; /* 0x006F616F: jne 0x6f6132 */
L_006F6171:
    goto L_006F61D5; /* 0x006F6171: jmp 0x6f61d5 */
L_006F6173:
    eax = (uint32_t)MEM16(ecx + 0x18); /* 0x006F6173: movzx eax, word ptr [ecx + 0x18] */
    ecx = MEM32(esi + 0x14); /* 0x006F6177: mov ecx, dword ptr [esi + 0x14] */
    SET_LO16(eax, ~LO16(eax)); /* 0x006F617A: not ax */
    edi = (uint32_t)LO16(eax); /* 0x006F617D: movzx edi, ax */
    eax = MEM32(esi + 0x34); /* 0x006F6180: mov eax, dword ptr [esi + 0x34] */
    MEM32(esp + 0x10) = ecx; /* 0x006F6183: mov dword ptr [esp + 0x10], ecx */
    eax = (uint32_t)MEM16(eax + 0x48); /* 0x006F6187: movzx eax, word ptr [eax + 0x48] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edi)); /* 0x006F618B: and ax, di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ebx = (uint32_t)LO16(eax); /* 0x006F618E: movzx ebx, ax */
    eax = MEM32(esi + 0xC); /* 0x006F6191: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x006F6194: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F61D5; /* 0x006F6196: je 0x6f61d5 */
L_006F6198:
    edx = MEM32(esi + 0x8); /* 0x006F6198: mov edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F619B: dec eax */
    _flag_k = FK_DEC;
    MEM32(esp + 0x14) = eax; /* 0x006F619C: mov dword ptr [esp + 0x14], eax */
    /* test edx, edx */ /* 0x006F61A0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F61BA; /* 0x006F61A2: je 0x6f61ba */
L_006F61A4:
    SET_LO16(eax, MEM16(ecx)); /* 0x006F61A4: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F61A7: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edi)); /* 0x006F61A8: and ax, di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(eax), LO16(ebx) */ /* 0x006F61AB: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F61B3; /* 0x006F61AE: jne 0x6f61b3 */
L_006F61B0:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x006F61B0: mov word ptr [ecx], ax */
L_006F61B3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006F61B3: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x006F61B6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F61A4; /* 0x006F61B8: jne 0x6f61a4 */
L_006F61BA:
    eax = MEM32(esi + 0x10); /* 0x006F61BA: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(esp + 0x10); /* 0x006F61BD: mov ecx, dword ptr [esp + 0x10] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F61C1: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F61C2: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F61C4: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = ecx + eax * 2; /* 0x006F61C6: lea ecx, [ecx + eax*2] */
    eax = MEM32(esp + 0x14); /* 0x006F61C9: mov eax, dword ptr [esp + 0x14] */
    MEM32(esp + 0x10) = ecx; /* 0x006F61CD: mov dword ptr [esp + 0x10], ecx */
    /* test eax, eax */ /* 0x006F61D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6198; /* 0x006F61D3: jne 0x6f6198 */
L_006F61D5:
    eax = MEM32(esi + 0x1C); /* 0x006F61D5: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x006F61D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F61F6; /* 0x006F61DA: je 0x6f61f6 */
L_006F61DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F61DC: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x1C) = eax; /* 0x006F61DD: mov dword ptr [esi + 0x1c], eax */
    /* test eax, eax */ /* 0x006F61E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F61F6; /* 0x006F61E2: jg 0x6f61f6 */
L_006F61E4:
    eax = MEM32(esi); /* 0x006F61E4: mov eax, dword ptr [esi] */
    /* test LO8(eax), 2 */ /* 0x006F61E6: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F61F6; /* 0x006F61E8: je 0x6f61f6 */
L_006F61EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x006F61EA: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F61ED: mov ecx, esi */
    MEM32(esi) = eax; /* 0x006F61EF: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_007090D0); /* 0x006F61F1: call 0x7090d0 */
    RECOMP_FLAGS_IN();
L_006F61F6:
    PUSH32(esp, 0); /* 0x006F61F6: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F61F8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F61FA: mov ecx, esi */
    RECOMP_CALL(sub_006F5FA0); /* 0x006F61FC: call 0x6f5fa0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x34); /* 0x006F6201: mov ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6204: add esp, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x44); /* 0x006F6207: mov edx, dword ptr [ecx + 0x44] */
    eax = edx; /* 0x006F620A: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF8Fu);
    eax = eax & 0xFFFFFF8Fu; /* 0x006F620C: and eax, 0xffffff8f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = eax; /* 0x006F620F: mov dword ptr [ecx + 0x44], eax */
    eax = MEM32(esi + 0x34); /* 0x006F6212: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)((MEM32(eax + 0x44) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax + 0x44) | 0x10u));
    MEM32(eax + 0x44) = MEM32(eax + 0x44) | 0x10u; /* 0x006F6215: or dword ptr [eax + 0x44], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x34); /* 0x006F6219: mov ecx, dword ptr [esi + 0x34] */
    /* cmp MEM32(ecx + 0x44), edx */ /* 0x006F621C: cmp dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6226; /* 0x006F621F: je 0x6f6226 */
L_006F6221:
    RECOMP_CALL(sub_006FB030); /* 0x006F6221: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F6226:
    edi = POP32_VAL(esp); /* 0x006F6226: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6227: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F6228: pop ebx */
    esp = ebp; /* 0x006F6229: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F622B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F622C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6230u);

L_006F6230:
    PUSH32(esp, ebp); /* 0x006F6230: push ebp */
    ebp = esp; /* 0x006F6231: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F6233: push ebx */
    SET_LO8(ebx, LO8(edx)); /* 0x006F6234: mov bl, dl */
    /* test ecx, ecx */ /* 0x006F6236: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6240; /* 0x006F6238: jne 0x6f6240 */
L_006F623A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F623A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F623D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F623E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F623F: ret  */
L_006F6240:
    eax = MEM32(ecx + 0x34); /* 0x006F6240: mov eax, dword ptr [ecx + 0x34] */
    SET_LO8(edx, MEM8(ebp + 0x8)); /* 0x006F6243: mov dl, byte ptr [ebp + 8] */
    SET_HI8(ebx, MEM8(ebp + 0xC)); /* 0x006F6246: mov bh, byte ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006F6249: push esi */
    MEM8(eax + 0x4C) = (uint8_t)(LO8(ebx)); /* 0x006F624A: mov byte ptr [eax + 0x4c], bl */
    eax = MEM32(ecx + 0x34); /* 0x006F624D: mov eax, dword ptr [ecx + 0x34] */
    MEM8(eax + 0x4D) = (uint8_t)(LO8(edx)); /* 0x006F6250: mov byte ptr [eax + 0x4d], dl */
    eax = MEM32(ecx + 0x34); /* 0x006F6253: mov eax, dword ptr [ecx + 0x34] */
    MEM8(eax + 0x4E) = (uint8_t)(HI8(ebx)); /* 0x006F6256: mov byte ptr [eax + 0x4e], bh */
    esi = MEM32(ecx + 0x34); /* 0x006F6259: mov esi, dword ptr [ecx + 0x34] */
    edx = MEM32(esi + 0x44); /* 0x006F625C: mov edx, dword ptr [esi + 0x44] */
    /* cmp LO8(ebx), 0xFFu */ /* 0x006F625F: cmp bl, 0xff */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6274; /* 0x006F6262: jne 0x6f6274 */
L_006F6264:
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x006F6264: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6274; /* 0x006F6267: jne 0x6f6274 */
L_006F6269:
    /* cmp HI8(ebx), LO8(ebx) */ /* 0x006F6269: cmp bh, bl */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6274; /* 0x006F626B: jne 0x6f6274 */
L_006F626D:
    eax = edx; /* 0x006F626D: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x006F626F: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F6279; /* 0x006F6272: jmp 0x6f6279 */
L_006F6274:
    eax = edx; /* 0x006F6274: mov eax, edx */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F6276: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F6279:
    MEM32(esi + 0x44) = eax; /* 0x006F6279: mov dword ptr [esi + 0x44], eax */
    ecx = MEM32(ecx + 0x34); /* 0x006F627C: mov ecx, dword ptr [ecx + 0x34] */
    esi = POP32_VAL(esp); /* 0x006F627F: pop esi */
    /* cmp MEM32(ecx + 0x44), edx */ /* 0x006F6280: cmp dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F628A; /* 0x006F6283: je 0x6f628a */
L_006F6285:
    RECOMP_CALL(sub_006FB030); /* 0x006F6285: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F628A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F628A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F628C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F628D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F628E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6290u);

L_006F6290:
    PUSH32(esp, ebx); /* 0x006F6290: push ebx */
    SET_LO8(ebx, LO8(edx)); /* 0x006F6291: mov bl, dl */
    /* test ecx, ecx */ /* 0x006F6293: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F629C; /* 0x006F6295: jne 0x6f629c */
L_006F6297:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F6297: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F629A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F629B: ret  */
L_006F629C:
    eax = MEM32(ecx + 0x34); /* 0x006F629C: mov eax, dword ptr [ecx + 0x34] */
    PUSH32(esp, esi); /* 0x006F629F: push esi */
    MEM8(eax + 0x4F) = (uint8_t)(LO8(ebx)); /* 0x006F62A0: mov byte ptr [eax + 0x4f], bl */
    esi = MEM32(ecx + 0x34); /* 0x006F62A3: mov esi, dword ptr [ecx + 0x34] */
    edx = MEM32(esi + 0x44); /* 0x006F62A6: mov edx, dword ptr [esi + 0x44] */
    eax = edx; /* 0x006F62A9: mov eax, edx */
    /* cmp LO8(ebx), 0xFFu */ /* 0x006F62AB: cmp bl, 0xff */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F62B5; /* 0x006F62AE: je 0x6f62b5 */
L_006F62B0:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x006F62B0: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F62B8; /* 0x006F62B3: jmp 0x6f62b8 */
L_006F62B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x006F62B5: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F62B8:
    MEM32(esi + 0x44) = eax; /* 0x006F62B8: mov dword ptr [esi + 0x44], eax */
    ecx = MEM32(ecx + 0x34); /* 0x006F62BB: mov ecx, dword ptr [ecx + 0x34] */
    esi = POP32_VAL(esp); /* 0x006F62BE: pop esi */
    /* cmp MEM32(ecx + 0x44), edx */ /* 0x006F62BF: cmp dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F62C9; /* 0x006F62C2: je 0x6f62c9 */
L_006F62C4:
    RECOMP_CALL(sub_006FB030); /* 0x006F62C4: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F62C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F62C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F62CB: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F62CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F62D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F62D0u);

L_006F62D0:
    PUSH32(esp, esi); /* 0x006F62D0: push esi */
    esi = ecx; /* 0x006F62D1: mov esi, ecx */
    /* test esi, esi */ /* 0x006F62D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F62DC; /* 0x006F62D5: jne 0x6f62dc */
L_006F62D7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F62D7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F62DA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F62DB: ret  */
L_006F62DC:
    ecx = MEM32(esi + 0x34); /* 0x006F62DC: mov ecx, dword ptr [esi + 0x34] */
    PUSH32(esp, ebx); /* 0x006F62DF: push ebx */
    PUSH32(esp, edi); /* 0x006F62E0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006F62E1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ecx + 0x44); /* 0x006F62E3: mov ebx, dword ptr [ecx + 0x44] */
    eax = ebx; /* 0x006F62E6: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF8Fu);
    eax = eax & 0xFFFFFF8Fu; /* 0x006F62E8: and eax, 0xffffff8f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = eax; /* 0x006F62EB: mov dword ptr [ecx + 0x44], eax */
    /* cmp edx, 4 */ /* 0x006F62EE: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F6315; /* 0x006F62F1: ja 0x6f6315 */
L_006F62F3:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x6F6338)); goto _ljump; }
L_006F62FA:
    eax = MEM32(esi + 0x34); /* 0x006F62FA: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)((MEM32(eax + 0x44) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax + 0x44) | 0x10u));
    MEM32(eax + 0x44) = MEM32(eax + 0x44) | 0x10u; /* 0x006F62FD: or dword ptr [eax + 0x44], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F6324; /* 0x006F6301: jmp 0x6f6324 */
L_006F6303:
    eax = MEM32(esi + 0x34); /* 0x006F6303: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)((MEM32(eax + 0x44) | 0x20u)); _flag_b = (uint32_t)((MEM32(eax + 0x44) | 0x20u));
    MEM32(eax + 0x44) = MEM32(eax + 0x44) | 0x20u; /* 0x006F6306: or dword ptr [eax + 0x44], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F6324; /* 0x006F630A: jmp 0x6f6324 */
L_006F630C:
    eax = MEM32(esi + 0x34); /* 0x006F630C: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)((MEM32(eax + 0x44) | 0x40u)); _flag_b = (uint32_t)((MEM32(eax + 0x44) | 0x40u));
    MEM32(eax + 0x44) = MEM32(eax + 0x44) | 0x40u; /* 0x006F630F: or dword ptr [eax + 0x44], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F6324; /* 0x006F6313: jmp 0x6f6324 */
L_006F6315:
    PUSH32(esp, 0x00804310u); /* 0x006F6315: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F631A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F631F: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x006F6322: mov edi, eax */
L_006F6324:
    ecx = MEM32(esi + 0x34); /* 0x006F6324: mov ecx, dword ptr [esi + 0x34] */
    /* cmp MEM32(ecx + 0x44), ebx */ /* 0x006F6327: cmp dword ptr [ecx + 0x44], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6331; /* 0x006F632A: je 0x6f6331 */
L_006F632C:
    RECOMP_CALL(sub_006FB030); /* 0x006F632C: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F6331:
    eax = edi; /* 0x006F6331: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F6333: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F6334: pop ebx */
    esi = POP32_VAL(esp); /* 0x006F6335: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6336: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006F62FAu: goto L_006F62FA;
      case 0x006F6303u: goto L_006F6303;
      case 0x006F630Cu: goto L_006F630C;
      case 0x006F6315u: goto L_006F6315;
      case 0x006F6324u: goto L_006F6324;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F6350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6350u);

L_006F6350:
    /* test ecx, ecx */ /* 0x006F6350: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6358; /* 0x006F6352: jne 0x6f6358 */
L_006F6354:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F6354: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6357: ret  */
L_006F6358:
    /* test edx, edx */ /* 0x006F6358: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6392; /* 0x006F635A: je 0x6f6392 */
L_006F635C:
    eax = MEM32(ecx + 0x34); /* 0x006F635C: mov eax, dword ptr [ecx + 0x34] */
    ecx = MEM32(eax + 0x44); /* 0x006F635F: mov ecx, dword ptr [eax + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    ecx = ecx & 0x70u; /* 0x006F6362: and ecx, 0x70 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x10u */ /* 0x006F6365: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F638C; /* 0x006F6368: je 0x6f638c */
L_006F636A:
    /* cmp ecx, 0x20u */ /* 0x006F636A: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6383; /* 0x006F636D: je 0x6f6383 */
L_006F636F:
    PUSH32(esp, esi); /* 0x006F636F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F6370: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 4; /* 0x006F6372: mov eax, 4 */
    /* cmp ecx, 0x40u */ /* 0x006F6377: cmp ecx, 0x40 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { eax = esi; } /* 0x006F637A: cmovne eax, esi */
    MEM32(edx) = eax; /* 0x006F637D: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F637F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F6381: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6382: ret  */
L_006F6383:
    MEM32(edx) = 2; /* 0x006F6383: mov dword ptr [edx], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F6389: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F638B: ret  */
L_006F638C:
    MEM32(edx) = 1; /* 0x006F638C: mov dword ptr [edx], 1 */
L_006F6392:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F6392: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6394: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F63A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F63A0u);

L_006F63A0:
    PUSH32(esp, ebp); /* 0x006F63A0: push ebp */
    ebp = esp; /* 0x006F63A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006F63A3: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006F63A6: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006F63A9: push esi */
    esi = edx; /* 0x006F63AA: mov esi, edx */
    /* test ecx, ecx */ /* 0x006F63AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F63B7; /* 0x006F63AE: jne 0x6f63b7 */
L_006F63B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F63B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F63B2: pop esi */
    esp = ebp; /* 0x006F63B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F63B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F63B6: ret  */
L_006F63B7:
    eax = MEM32(ecx + 0x8); /* 0x006F63B7: mov eax, dword ptr [ecx + 8] */
    MEM32(esp + 0x18) = eax; /* 0x006F63BA: mov dword ptr [esp + 0x18], eax */
    eax = MEM32(ecx + 0xC); /* 0x006F63BE: mov eax, dword ptr [ecx + 0xc] */
    MEM32(esp + 0x10) = 0; /* 0x006F63C1: mov dword ptr [esp + 0x10], 0 */
    MEM32(esp + 0x14) = 0; /* 0x006F63C9: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x1C) = eax; /* 0x006F63D1: mov dword ptr [esp + 0x1c], eax */
    /* test esi, esi */ /* 0x006F63D5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F63EC; /* 0x006F63D7: jne 0x6f63ec */
L_006F63D9:
    _xmm[0] = xmm_ld(esp + 0x10); /* 0x006F63D9: movdqu xmm0, xmmword ptr [esp + 0x10] */
    eax = esi + 0x1; /* 0x006F63DF: lea eax, [esi + 1] */
    xmm_st(ecx + 0x24, _xmm[0]); /* 0x006F63E2: movdqu xmmword ptr [ecx + 0x24], xmm0 */
    esi = POP32_VAL(esp); /* 0x006F63E7: pop esi */
    esp = ebp; /* 0x006F63E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F63EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F63EB: ret  */
L_006F63EC:
    eax = ecx + 0x24; /* 0x006F63EC: lea eax, [ecx + 0x24] */
    ecx = esi; /* 0x006F63EF: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006F63F1: push eax */
    edx = esp + 0x14; /* 0x006F63F2: lea edx, [esp + 0x14] */
    RECOMP_CALL(sub_006F7520); /* 0x006F63F6: call 0x6f7520 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F63FB: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F63FE: pop esi */
    esp = ebp; /* 0x006F63FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F6401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6402: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6410u);

L_006F6410:
    PUSH32(esp, ebp); /* 0x006F6410: push ebp */
    ebp = esp; /* 0x006F6411: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F6413: push ecx */
    PUSH32(esp, ebx); /* 0x006F6414: push ebx */
    PUSH32(esp, esi); /* 0x006F6415: push esi */
    esi = ecx; /* 0x006F6416: mov esi, ecx */
    ebx = edx; /* 0x006F6418: mov ebx, edx */
    PUSH32(esp, edi); /* 0x006F641A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006F641B: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x34); /* 0x006F641E: mov ecx, dword ptr [esi + 0x34] */
    /* cmp MEM32(ecx), edi */ /* 0x006F6421: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6449; /* 0x006F6423: jne 0x6f6449 */
L_006F6425:
    eax = MEM32(edi + 0x4); /* 0x006F6425: mov eax, dword ptr [edi + 4] */
    edx = MEM32(eax + 0x4); /* 0x006F6428: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x006F642B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6437; /* 0x006F642D: je 0x6f6437 */
L_006F642F:
    eax = MEM32(ecx + 0x50); /* 0x006F642F: mov eax, dword ptr [ecx + 0x50] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x006F6432: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6449; /* 0x006F6435: jne 0x6f6449 */
L_006F6437:
    eax = MEM32(esi + 0x4); /* 0x006F6437: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x006F643A: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x006F643D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F645F; /* 0x006F643F: je 0x6f645f */
L_006F6441:
    eax = MEM32(ecx + 0x54); /* 0x006F6441: mov eax, dword ptr [ecx + 0x54] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x006F6444: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F645F; /* 0x006F6447: je 0x6f645f */
L_006F6449:
    edx = edi; /* 0x006F6449: mov edx, edi */
    ecx = esi; /* 0x006F644B: mov ecx, esi */
    RECOMP_CALL(sub_006FB080); /* 0x006F644D: call 0x6fb080 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F6452: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F645F; /* 0x006F6454: jns 0x6f645f */
L_006F6456:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F6456: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F6459: pop edi */
    esi = POP32_VAL(esp); /* 0x006F645A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F645B: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006F645C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F645D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F645E: ret  */
L_006F645F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F645F: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x34); /* 0x006F6462: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, edi); /* 0x006F6465: push edi */
    PUSH32(esp, ebx); /* 0x006F6466: push ebx */
    PUSH32(esp, esi); /* 0x006F6467: push esi */
    eax = MEM32(eax + 0x8); /* 0x006F6468: mov eax, dword ptr [eax + 8] */
    RECOMP_ICALL(eax); /* 0x006F646B: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F646D: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F6470: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6471: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F6472: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006F6473: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F6474: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6475: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6480u);

L_006F6480:
    PUSH32(esp, ebp); /* 0x006F6480: push ebp */
    ebp = esp; /* 0x006F6481: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006F6483: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F6486: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F648B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F648D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006F6490: push ebx */
    eax = ecx; /* 0x006F6491: mov eax, ecx */
    ebx = edx; /* 0x006F6493: mov ebx, edx */
    ecx = MEM32(ebp + 0x8); /* 0x006F6495: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x006F6498: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x38)) = ecx; /* 0x006F649B: mov dword ptr [ebp - 0x38], ecx */
    PUSH32(esp, esi); /* 0x006F649E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x006F649F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x006F64A2: push edi */
    /* test eax, eax */ /* 0x006F64A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6622; /* 0x006F64A5: je 0x6f6622 */
L_006F64AB:
    /* test ecx, ecx */ /* 0x006F64AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6622; /* 0x006F64AD: je 0x6f6622 */
L_006F64B3:
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x006F64B3: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F661B; /* 0x006F64B7: jne 0x6f661b */
L_006F64BD:
    /* cmp MEM32(ecx + 0x1C), 0 */ /* 0x006F64BD: cmp dword ptr [ecx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F661B; /* 0x006F64C1: jne 0x6f661b */
L_006F64C7:
    /* test esi, esi */ /* 0x006F64C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F64E3; /* 0x006F64C9: jne 0x6f64e3 */
L_006F64CB:
    eax = MEM32(ecx + 0x8); /* 0x006F64CB: mov eax, dword ptr [ecx + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F64CE: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ecx + 0xC); /* 0x006F64D1: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x10)) = esi; /* 0x006F64D4: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x006F64D7: mov dword ptr [ebp - 0x14], esi */
    esi = ebp + (-0x14); /* 0x006F64DA: lea esi, [ebp - 0x14] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F64DD: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x006F64E0: mov eax, dword ptr [ebp - 0x30] */
L_006F64E3:
    /* test ebx, ebx */ /* 0x006F64E3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6530; /* 0x006F64E5: je 0x6f6530 */
L_006F64E7:
    edx = MEM32(ebx); /* 0x006F64E7: mov edx, dword ptr [ebx] */
    edi = MEM32(ebx + 0x8); /* 0x006F64E9: mov edi, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x006F64EC: mov dword ptr [ebp - 0x2c], edx */
    /* test edx, edx */ /* 0x006F64EF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F64FC; /* 0x006F64F1: jns 0x6f64fc */
L_006F64F3:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi) = MEM32(esi) - edx; /* 0x006F64F3: sub dword ptr [esi], edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x006F64F5: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F64F7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = edx; /* 0x006F64F9: mov dword ptr [ebp - 0x2c], edx */
L_006F64FC:
    eax = MEM32(eax + 0x8); /* 0x006F64FC: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F64FF: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x006F6501: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) { edi = eax; } /* 0x006F6503: cmovl edi, eax */
    eax = MEM32(ebx + 0x4); /* 0x006F6506: mov eax, dword ptr [ebx + 4] */
    ebx = MEM32(ebx + 0xC); /* 0x006F6509: mov ebx, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x006F650C: mov dword ptr [ebp - 0x28], eax */
    /* test eax, eax */ /* 0x006F650F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F651F; /* 0x006F6511: jns 0x6f651f */
L_006F6513:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x006F6513: add ebx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = 0; /* 0x006F6515: mov dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - eax; /* 0x006F651C: sub dword ptr [esi + 4], eax */
    _flag_k = FK_CMP;
L_006F651F:
    eax = MEM32(ebp + (-0x30)); /* 0x006F651F: mov eax, dword ptr [ebp - 0x30] */
    eax = MEM32(eax + 0xC); /* 0x006F6522: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x28)); /* 0x006F6525: sub eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x006F6528: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F6542; /* 0x006F652A: jge 0x6f6542 */
L_006F652C:
    ebx = eax; /* 0x006F652C: mov ebx, eax */
    goto L_006F6542; /* 0x006F652E: jmp 0x6f6542 */
L_006F6530:
    edi = MEM32(eax + 0x8); /* 0x006F6530: mov edi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F6533: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(eax + 0xC); /* 0x006F6535: mov ebx, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x28)) = 0; /* 0x006F6538: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = edx; /* 0x006F653F: mov dword ptr [ebp - 0x2c], edx */
L_006F6542:
    eax = MEM32(ecx + 0x24); /* 0x006F6542: mov eax, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x006F6545: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x34)) = eax; /* 0x006F6547: mov dword ptr [ebp - 0x34], eax */
    /* test eax, eax */ /* 0x006F654A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F655A; /* 0x006F654C: jle 0x6f655a */
L_006F654E:
    edx = MEM32(ebp + (-0x2C)); /* 0x006F654E: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006F6551: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x006F6553: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x006F6555: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = edx; /* 0x006F6557: mov dword ptr [ebp - 0x2c], edx */
L_006F655A:
    eax = MEM32(esi); /* 0x006F655A: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x2C); /* 0x006F655C: sub eax, dword ptr [ecx + 0x2c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x24); /* 0x006F655F: sub eax, dword ptr [ecx + 0x24] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006F6562: add eax, edi */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F6564: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F656A; /* 0x006F6566: jle 0x6f656a */
L_006F6568:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006F6568: sub edi, eax */
    _flag_k = FK_CMP;
L_006F656A:
    edx = MEM32(ecx + 0x28); /* 0x006F656A: mov edx, dword ptr [ecx + 0x28] */
    eax = MEM32(esi + 0x4); /* 0x006F656D: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x006F6570: sub edx, eax */
    _flag_k = FK_CMP;
    /* test edx, edx */ /* 0x006F6572: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F6580; /* 0x006F6574: jle 0x6f6580 */
L_006F6576:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006F6576: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x006F6578: sub ebx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + edx; /* 0x006F657A: add dword ptr [ebp - 0x28], edx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x006F657D: mov dword ptr [esi + 4], eax */
L_006F6580:
    eax = MEM32(esi + 0x4); /* 0x006F6580: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x30); /* 0x006F6583: sub eax, dword ptr [ecx + 0x30] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x28); /* 0x006F6586: sub eax, dword ptr [ecx + 0x28] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006F6589: add eax, ebx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F658B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F6591; /* 0x006F658D: jle 0x6f6591 */
L_006F658F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x006F658F: sub ebx, eax */
    _flag_k = FK_CMP;
L_006F6591:
    eax = MEM32(ebp + (-0x30)); /* 0x006F6591: mov eax, dword ptr [ebp - 0x30] */
    edx = MEM32(eax + 0x34); /* 0x006F6594: mov edx, dword ptr [eax + 0x34] */
    edx = MEM32(edx + 0x44); /* 0x006F6597: mov edx, dword ptr [edx + 0x44] */
    /* test edx, 0x200u */ /* 0x006F659A: test edx, 0x200 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F65B9; /* 0x006F65A0: je 0x6f65b9 */
L_006F65A2:
    ecx = MEM32(eax + 0x34); /* 0x006F65A2: mov ecx, dword ptr [eax + 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFDFFu);
    edx = edx & 0xFFFFFDFFu; /* 0x006F65A5: and edx, 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = edx; /* 0x006F65AB: mov dword ptr [ecx + 0x44], edx */
    ecx = MEM32(eax + 0x34); /* 0x006F65AE: mov ecx, dword ptr [eax + 0x34] */
    RECOMP_CALL(sub_006FB030); /* 0x006F65B1: call 0x6fb030 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x38)); /* 0x006F65B6: mov ecx, dword ptr [ebp - 0x38] */
L_006F65B9:
    /* test edi, edi */ /* 0x006F65B9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F65FA; /* 0x006F65BB: jle 0x6f65fa */
L_006F65BD:
    /* test ebx, ebx */ /* 0x006F65BD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F65FA; /* 0x006F65BF: jle 0x6f65fa */
L_006F65C1:
    eax = MEM32(ebp + (-0x2C)); /* 0x006F65C1: mov eax, dword ptr [ebp - 0x2c] */
    edx = ebp + (-0x24); /* 0x006F65C4: lea edx, [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x006F65C7: push esi */
    MEM32(ebp + (-0x24)) = eax; /* 0x006F65C8: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x006F65CB: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x006F65CE: push ecx */
    ecx = MEM32(ebp + (-0x30)); /* 0x006F65CF: mov ecx, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = eax; /* 0x006F65D2: mov dword ptr [ebp - 0x20], eax */
    MEM32(esi + 0x8) = edi; /* 0x006F65D5: mov dword ptr [esi + 8], edi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x006F65D8: mov dword ptr [ebp - 0x1c], edi */
    MEM32(esi + 0xC) = ebx; /* 0x006F65DB: mov dword ptr [esi + 0xc], ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x006F65DE: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_006F6410); /* 0x006F65E1: call 0x6f6410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F65E6: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F65E9: pop edi */
    esi = POP32_VAL(esp); /* 0x006F65EA: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F65EB: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F65EC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F65EF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F65F1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F65F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F65F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F65F9: ret  */
L_006F65FA:
    MEM32(esi + 0xC) = 0; /* 0x006F65FA: mov dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F6601: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = 0; /* 0x006F6603: mov dword ptr [esi + 8], 0 */
    edi = POP32_VAL(esp); /* 0x006F660A: pop edi */
    esi = POP32_VAL(esp); /* 0x006F660B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F660C: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F660D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F6610: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F6612: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F6617: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F6619: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F661A: ret  */
L_006F661B:
    PUSH32(esp, 0x008061A4u); /* 0x006F661B: push 0x8061a4 */
    goto L_006F6627; /* 0x006F6620: jmp 0x6f6627 */
L_006F6622:
    PUSH32(esp, 0x008061CCu); /* 0x006F6622: push 0x8061cc */
L_006F6627:
    RECOMP_CALL(sub_006EDB70); /* 0x006F6627: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F662C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F662F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F6632: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F6634: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6635: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F6636: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F6637: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F663C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F663E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F663F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6640u);

L_006F6640:
    PUSH32(esp, ebp); /* 0x006F6640: push ebp */
    ebp = esp; /* 0x006F6641: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x006F6643: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F6646: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F664B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F664D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006F6650: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x006F6651: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006F6654: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F6655: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006F6658: push edi */
    edi = ecx; /* 0x006F6659: mov edi, ecx */
    /* test edi, edi */ /* 0x006F665B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6B23; /* 0x006F665D: je 0x6f6b23 */
L_006F6663:
    /* test esi, esi */ /* 0x006F6663: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6B23; /* 0x006F6665: je 0x6f6b23 */
L_006F666B:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x006F666B: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6B1C; /* 0x006F666F: jne 0x6f6b1c */
L_006F6675:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F6675: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6B1C; /* 0x006F6679: jne 0x6f6b1c */
L_006F667F:
    /* test edx, edx */ /* 0x006F667F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F668E; /* 0x006F6681: jne 0x6f668e */
L_006F6683:
    eax = MEM32(edi + 0x8); /* 0x006F6683: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x34)) = eax; /* 0x006F6686: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(edi + 0xC); /* 0x006F6689: mov eax, dword ptr [edi + 0xc] */
    goto L_006F6697; /* 0x006F668C: jmp 0x6f6697 */
L_006F668E:
    eax = MEM32(edx + 0x8); /* 0x006F668E: mov eax, dword ptr [edx + 8] */
    MEM32(ebp + (-0x34)) = eax; /* 0x006F6691: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(edx + 0xC); /* 0x006F6694: mov eax, dword ptr [edx + 0xc] */
L_006F6697:
    MEM32(ebp + (-0x3C)) = eax; /* 0x006F6697: mov dword ptr [ebp - 0x3c], eax */
    /* test ebx, ebx */ /* 0x006F669A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F66A6; /* 0x006F669C: jne 0x6f66a6 */
L_006F669E:
    eax = MEM32(esi + 0x8); /* 0x006F669E: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(esi + 0xC); /* 0x006F66A1: mov ecx, dword ptr [esi + 0xc] */
    goto L_006F66AC; /* 0x006F66A4: jmp 0x6f66ac */
L_006F66A6:
    eax = MEM32(ebx + 0x8); /* 0x006F66A6: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(ebx + 0xC); /* 0x006F66A9: mov ecx, dword ptr [ebx + 0xc] */
L_006F66AC:
    /* cmp eax, MEM32(ebp + (-0x34)) */ /* 0x006F66AC: cmp eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F66D3; /* 0x006F66AF: jne 0x6f66d3 */
L_006F66B1:
    /* cmp ecx, MEM32(ebp + (-0x3C)) */ /* 0x006F66B1: cmp ecx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F66D3; /* 0x006F66B4: jne 0x6f66d3 */
L_006F66B6:
    PUSH32(esp, ebx); /* 0x006F66B6: push ebx */
    PUSH32(esp, esi); /* 0x006F66B7: push esi */
    ecx = edi; /* 0x006F66B8: mov ecx, edi */
    RECOMP_CALL(sub_006F6480); /* 0x006F66BA: call 0x6f6480 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F66BF: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F66C2: pop edi */
    esi = POP32_VAL(esp); /* 0x006F66C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F66C4: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F66C5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F66C8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F66CA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F66CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F66D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F66D2: ret  */
L_006F66D3:
    _xmm[3].u64[0] = (uint32_t)(MEM32(ebp + (-0x34))); _xmm[3].u64[1] = 0; /* 0x006F66D3: movd xmm3, dword ptr [ebp - 0x34] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x006F66D8: xorps xmm6, xmm6 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x006F66DB: movd xmm2, eax */
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x006F66DF: movd xmm1, ecx */
    _xmm[7].u64[0] = MEM64(0x808FB8); _xmm[7].u64[1] = 0; /* 0x006F66E3: movsd xmm7, qword ptr [0x808fb8] */
    { int32_t _a = (int32_t)_xmm[2].u32[0], _b = (int32_t)_xmm[2].u32[1]; _xmm[2].f64[0] = _a; _xmm[2].f64[1] = _b; } /* 0x006F66EB: cvtdq2pd xmm2, xmm2 */
    { int32_t _a = (int32_t)_xmm[3].u32[0], _b = (int32_t)_xmm[3].u32[1]; _xmm[3].f64[0] = _a; _xmm[3].f64[1] = _b; } /* 0x006F66EF: cvtdq2pd xmm3, xmm3 */
    _xmm[0] = _xmm[2]; /* 0x006F66F3: movapd xmm0, xmm2 */
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x006F66F7: divsd xmm0, xmm3 */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006F66FB: cvtdq2pd xmm1, xmm1 */
    MEM64(ebp + (-0x68)) = _xmm[0].u64[0]; /* 0x006F66FF: movsd qword ptr [ebp - 0x68], xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebp + (-0x3C))); _xmm[0].u64[1] = 0; /* 0x006F6704: movd xmm0, dword ptr [ebp - 0x3c] */
    _xmm[4] = _xmm[1]; /* 0x006F6709: movapd xmm4, xmm1 */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F670D: cvtdq2pd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] / _s); } /* 0x006F6711: divsd xmm4, xmm0 */
    MEM64(ebp + (-0x58)) = _xmm[4].u64[0]; /* 0x006F6715: movsd qword ptr [ebp - 0x58], xmm4 */
    /* test ebx, ebx */ /* 0x006F671A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F673C; /* 0x006F671C: jne 0x6f673c */
L_006F671E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F671E: dec eax */
    _flag_k = FK_DEC;
    _xmm[5] = _xmm[6]; /* 0x006F671F: movapd xmm5, xmm6 */
    _xmm[4] = _xmm[6]; /* 0x006F6723: movapd xmm4, xmm6 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x006F6727: movd xmm2, eax */
    eax = ecx + (-0x1); /* 0x006F672B: lea eax, [ecx - 1] */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006F672E: movd xmm1, eax */
    { int32_t _a = (int32_t)_xmm[2].u32[0], _b = (int32_t)_xmm[2].u32[1]; _xmm[2].f64[0] = _a; _xmm[2].f64[1] = _b; } /* 0x006F6732: cvtdq2pd xmm2, xmm2 */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006F6736: cvtdq2pd xmm1, xmm1 */
    goto L_006F675D; /* 0x006F673A: jmp 0x6f675d */
L_006F673C:
    _xmm[5].u64[0] = (uint32_t)(MEM32(ebx)); _xmm[5].u64[1] = 0; /* 0x006F673C: movd xmm5, dword ptr [ebx] */
    _xmm[4].u64[0] = (uint32_t)(MEM32(ebx + 0x4)); _xmm[4].u64[1] = 0; /* 0x006F6740: movd xmm4, dword ptr [ebx + 4] */
    { int32_t _a = (int32_t)_xmm[5].u32[0], _b = (int32_t)_xmm[5].u32[1]; _xmm[5].f64[0] = _a; _xmm[5].f64[1] = _b; } /* 0x006F6745: cvtdq2pd xmm5, xmm5 */
    { int32_t _a = (int32_t)_xmm[4].u32[0], _b = (int32_t)_xmm[4].u32[1]; _xmm[4].f64[0] = _a; _xmm[4].f64[1] = _b; } /* 0x006F6749: cvtdq2pd xmm4, xmm4 */
    { double _s = _xmm[5].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x006F674D: addsd xmm2, xmm5 */
    { double _s = _xmm[4].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006F6751: addsd xmm1, xmm4 */
    { double _s = _xmm[7].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x006F6755: subsd xmm2, xmm7 */
    { double _s = _xmm[7].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x006F6759: subsd xmm1, xmm7 */
L_006F675D:
    MEM64(ebp + (-0x60)) = _xmm[4].u64[0]; /* 0x006F675D: movsd qword ptr [ebp - 0x60], xmm4 */
    /* test edx, edx */ /* 0x006F6762: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F678C; /* 0x006F6764: jne 0x6f678c */
L_006F6766:
    eax = MEM32(ebp + (-0x34)); /* 0x006F6766: mov eax, dword ptr [ebp - 0x34] */
    _xmm[7] = _xmm[6]; /* 0x006F6769: movaps xmm7, xmm6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F676C: dec eax */
    _flag_k = FK_DEC;
    MEM64(ebp + (-0x50)) = _xmm[6].u64[0]; /* 0x006F676D: movsd qword ptr [ebp - 0x50], xmm6 */
    MEM64(ebp + (-0x48)) = _xmm[7].u64[0]; /* 0x006F6772: movsd qword ptr [ebp - 0x48], xmm7 */
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x006F6777: movd xmm3, eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x006F677B: mov eax, dword ptr [ebp - 0x3c] */
    { int32_t _a = (int32_t)_xmm[3].u32[0], _b = (int32_t)_xmm[3].u32[1]; _xmm[3].f64[0] = _a; _xmm[3].f64[1] = _b; } /* 0x006F677E: cvtdq2pd xmm3, xmm3 */
    MEM64(ebp + (-0x38)) = _xmm[3].u64[0]; /* 0x006F6782: movsd qword ptr [ebp - 0x38], xmm3 */
    goto L_006F686F; /* 0x006F6787: jmp 0x6f686f */
L_006F678C:
    _xmm[7].u64[0] = (uint32_t)(MEM32(edx)); _xmm[7].u64[1] = 0; /* 0x006F678C: movd xmm7, dword ptr [edx] */
    { int32_t _a = (int32_t)_xmm[7].u32[0], _b = (int32_t)_xmm[7].u32[1]; _xmm[7].f64[0] = _a; _xmm[7].f64[1] = _b; } /* 0x006F6790: cvtdq2pd xmm7, xmm7 */
    _xmm[4].u64[0] = MEM64(ebp + (-0x60)); _xmm[4].u64[1] = 0; /* 0x006F6794: movsd xmm4, qword ptr [ebp - 0x60] */
    MEM64(ebp + (-0x50)) = _xmm[7].u64[0]; /* 0x006F6799: movsd qword ptr [ebp - 0x50], xmm7 */
    _flag_a = SSE_COMI(_xmm[6].f64[0], sse_f64(MEM64(ebp + (-0x50)))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F679E: comisd xmm6, xmmword ptr [ebp - 0x50] */
    _flag_k = FK_EFLAGS;
    _xmm[7].u64[0] = (uint32_t)(MEM32(edx + 0x4)); _xmm[7].u64[1] = 0; /* 0x006F67A3: movd xmm7, dword ptr [edx + 4] */
    { double _s = sse_f64(MEM64(ebp + (-0x50))); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x006F67A8: addsd xmm3, qword ptr [ebp - 0x50] */
    { int32_t _a = (int32_t)_xmm[7].u32[0], _b = (int32_t)_xmm[7].u32[1]; _xmm[7].f64[0] = _a; _xmm[7].f64[1] = _b; } /* 0x006F67AD: cvtdq2pd xmm7, xmm7 */
    { double _s = sse_f64(MEM64(0x808FB8)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x006F67B1: subsd xmm3, qword ptr [0x808fb8] */
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F67B9: addsd xmm0, xmm7 */
    MEM64(ebp + (-0x48)) = _xmm[7].u64[0]; /* 0x006F67BD: movsd qword ptr [ebp - 0x48], xmm7 */
    MEM64(ebp + (-0x38)) = _xmm[3].u64[0]; /* 0x006F67C2: movsd qword ptr [ebp - 0x38], xmm3 */
    { double _s = sse_f64(MEM64(0x808FB8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006F67C7: subsd xmm0, qword ptr [0x808fb8] */
    MEM64(ebp + (-0x40)) = _xmm[0].u64[0]; /* 0x006F67CF: movsd qword ptr [ebp - 0x40], xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006F67EE; /* 0x006F67D4: jbe 0x6f67ee */
L_006F67D6:
    _xmm[4].u64[0] = MEM64(ebp + (-0x50)); _xmm[4].u64[1] = 0; /* 0x006F67D6: movsd xmm4, qword ptr [ebp - 0x50] */
    { double _s = sse_f64(MEM64(ebp + (-0x68))); _xmm[4].f64[0] = (double)(_xmm[4].f64[0] * _s); } /* 0x006F67DB: mulsd xmm4, qword ptr [ebp - 0x68] */
    MEM64(ebp + (-0x50)) = _xmm[6].u64[0]; /* 0x006F67E0: movsd qword ptr [ebp - 0x50], xmm6 */
    { double _s = _xmm[4].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x006F67E5: subsd xmm5, xmm4 */
    _xmm[4].u64[0] = MEM64(ebp + (-0x60)); _xmm[4].u64[1] = 0; /* 0x006F67E9: movsd xmm4, qword ptr [ebp - 0x60] */
L_006F67EE:
    eax = MEM32(edi + 0x8); /* 0x006F67EE: mov eax, dword ptr [edi + 8] */
    _xmm[7].u64[0] = (uint32_t)(eax); _xmm[7].u64[1] = 0; /* 0x006F67F1: movd xmm7, eax */
    { int32_t _a = (int32_t)_xmm[7].u32[0], _b = (int32_t)_xmm[7].u32[1]; _xmm[7].f64[0] = _a; _xmm[7].f64[1] = _b; } /* 0x006F67F5: cvtdq2pd xmm7, xmm7 */
    MEM64(ebp + (-0x70)) = _xmm[7].u64[0]; /* 0x006F67F9: movsd qword ptr [ebp - 0x70], xmm7 */
    _flag_a = SSE_COMI(_xmm[3].f64[0], _xmm[7].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F67FE: comisd xmm3, xmm7 */
    _flag_k = FK_EFLAGS;
    _xmm[7].u64[0] = MEM64(ebp + (-0x48)); _xmm[7].u64[1] = 0; /* 0x006F6802: movsd xmm7, qword ptr [ebp - 0x48] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_006F682D; /* 0x006F6807: jb 0x6f682d */
L_006F6809:
    { double _s = sse_f64(MEM64(ebp + (-0x70))); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x006F6809: subsd xmm3, qword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F680E: dec eax */
    _flag_k = FK_DEC;
    { double _s = sse_f64(MEM64(0x808FB8)); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x006F680F: addsd xmm3, qword ptr [0x808fb8] */
    { double _s = sse_f64(MEM64(ebp + (-0x68))); _xmm[3].f64[0] = (double)(_xmm[3].f64[0] * _s); } /* 0x006F6817: mulsd xmm3, qword ptr [ebp - 0x68] */
    { double _s = _xmm[3].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x006F681C: subsd xmm2, xmm3 */
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x006F6820: movd xmm3, eax */
    { int32_t _a = (int32_t)_xmm[3].u32[0], _b = (int32_t)_xmm[3].u32[1]; _xmm[3].f64[0] = _a; _xmm[3].f64[1] = _b; } /* 0x006F6824: cvtdq2pd xmm3, xmm3 */
    MEM64(ebp + (-0x38)) = _xmm[3].u64[0]; /* 0x006F6828: movsd qword ptr [ebp - 0x38], xmm3 */
L_006F682D:
    _flag_a = SSE_COMI(_xmm[6].f64[0], _xmm[7].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F682D: comisd xmm6, xmm7 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006F6844; /* 0x006F6831: jbe 0x6f6844 */
L_006F6833:
    { double _s = sse_f64(MEM64(ebp + (-0x58))); _xmm[7].f64[0] = (double)(_xmm[7].f64[0] * _s); } /* 0x006F6833: mulsd xmm7, qword ptr [ebp - 0x58] */
    { double _s = _xmm[7].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x006F6838: subsd xmm4, xmm7 */
    _xmm[7] = _xmm[6]; /* 0x006F683C: movaps xmm7, xmm6 */
    MEM64(ebp + (-0x48)) = _xmm[7].u64[0]; /* 0x006F683F: movsd qword ptr [ebp - 0x48], xmm7 */
L_006F6844:
    eax = MEM32(edi + 0xC); /* 0x006F6844: mov eax, dword ptr [edi + 0xc] */
    _xmm[7].u64[0] = (uint32_t)(eax); _xmm[7].u64[1] = 0; /* 0x006F6847: movd xmm7, eax */
    { int32_t _a = (int32_t)_xmm[7].u32[0], _b = (int32_t)_xmm[7].u32[1]; _xmm[7].f64[0] = _a; _xmm[7].f64[1] = _b; } /* 0x006F684B: cvtdq2pd xmm7, xmm7 */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[7].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F684F: comisd xmm0, xmm7 */
    _flag_k = FK_EFLAGS;
    MEM64(ebp + (-0x70)) = _xmm[7].u64[0]; /* 0x006F6853: movsd qword ptr [ebp - 0x70], xmm7 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_006F687D; /* 0x006F6858: jb 0x6f687d */
L_006F685A:
    { double _s = _xmm[7].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006F685A: subsd xmm0, xmm7 */
    { double _s = sse_f64(MEM64(0x808FB8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F685E: addsd xmm0, qword ptr [0x808fb8] */
    { double _s = sse_f64(MEM64(ebp + (-0x58))); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006F6866: mulsd xmm0, qword ptr [ebp - 0x58] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x006F686B: subsd xmm1, xmm0 */
L_006F686F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F686F: dec eax */
    _flag_k = FK_DEC;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F6870: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F6874: cvtdq2pd xmm0, xmm0 */
    MEM64(ebp + (-0x40)) = _xmm[0].u64[0]; /* 0x006F6878: movsd qword ptr [ebp - 0x40], xmm0 */
L_006F687D:
    _xmm[6].u64[0] = (uint32_t)(MEM32(esi + 0x24)); _xmm[6].u64[1] = 0; /* 0x006F687D: movd xmm6, dword ptr [esi + 0x24] */
    { int32_t _a = (int32_t)_xmm[6].u32[0], _b = (int32_t)_xmm[6].u32[1]; _xmm[6].f64[0] = _a; _xmm[6].f64[1] = _b; } /* 0x006F6882: cvtdq2pd xmm6, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[5].f64[0] = (double)(_xmm[5].f64[0] - _s); } /* 0x006F6886: subsd xmm5, xmm6 */
    MEM64(ebp + (-0x60)) = _xmm[6].u64[0]; /* 0x006F688A: movsd qword ptr [ebp - 0x60], xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x006F688F: subsd xmm2, xmm6 */
    _xmm[6].u64[0] = (uint32_t)(MEM32(esi + 0x28)); _xmm[6].u64[1] = 0; /* 0x006F6893: movd xmm6, dword ptr [esi + 0x28] */
    { int32_t _a = (int32_t)_xmm[6].u32[0], _b = (int32_t)_xmm[6].u32[1]; _xmm[6].f64[0] = _a; _xmm[6].f64[1] = _b; } /* 0x006F6898: cvtdq2pd xmm6, xmm6 */
    MEM64(ebp + (-0x70)) = _xmm[6].u64[0]; /* 0x006F689C: movsd qword ptr [ebp - 0x70], xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] - _s); } /* 0x006F68A1: subsd xmm4, xmm6 */
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x006F68A5: subsd xmm1, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x006F68A9: xorps xmm6, xmm6 */
    _flag_a = SSE_COMI(_xmm[6].f64[0], _xmm[5].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F68AC: comisd xmm6, xmm5 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006F68C9; /* 0x006F68B0: jbe 0x6f68c9 */
L_006F68B2:
    { double _s = sse_f64(MEM64(ebp + (-0x68))); _xmm[5].f64[0] = (double)(_xmm[5].f64[0] / _s); } /* 0x006F68B2: divsd xmm5, qword ptr [ebp - 0x68] */
    _xmm[7].u64[0] = MEM64(ebp + (-0x50)); _xmm[7].u64[1] = 0; /* 0x006F68B7: movsd xmm7, qword ptr [ebp - 0x50] */
    { double _s = _xmm[5].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x006F68BC: subsd xmm7, xmm5 */
    _xmm[5] = _xmm[6]; /* 0x006F68C0: movapd xmm5, xmm6 */
    MEM64(ebp + (-0x50)) = _xmm[7].u64[0]; /* 0x006F68C4: movsd qword ptr [ebp - 0x50], xmm7 */
L_006F68C9:
    eax = MEM32(esi + 0x2C); /* 0x006F68C9: mov eax, dword ptr [esi + 0x2c] */
    _xmm[7].u64[0] = (uint32_t)(eax); _xmm[7].u64[1] = 0; /* 0x006F68CC: movd xmm7, eax */
    { int32_t _a = (int32_t)_xmm[7].u32[0], _b = (int32_t)_xmm[7].u32[1]; _xmm[7].f64[0] = _a; _xmm[7].f64[1] = _b; } /* 0x006F68D0: cvtdq2pd xmm7, xmm7 */
    MEM64(ebp + (-0x30)) = _xmm[7].u64[0]; /* 0x006F68D4: movsd qword ptr [ebp - 0x30], xmm7 */
    _flag_a = SSE_COMI(_xmm[2].f64[0], _xmm[7].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F68D9: comisd xmm2, xmm7 */
    _flag_k = FK_EFLAGS;
    _xmm[7].u64[0] = MEM64(ebp + (-0x48)); _xmm[7].u64[1] = 0; /* 0x006F68DD: movsd xmm7, qword ptr [ebp - 0x48] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_006F6908; /* 0x006F68E2: jb 0x6f6908 */
L_006F68E4:
    { double _s = sse_f64(MEM64(ebp + (-0x30))); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x006F68E4: subsd xmm2, qword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F68E9: dec eax */
    _flag_k = FK_DEC;
    { double _s = sse_f64(MEM64(0x808FB8)); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x006F68EA: addsd xmm2, qword ptr [0x808fb8] */
    { double _s = sse_f64(MEM64(ebp + (-0x68))); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] / _s); } /* 0x006F68F2: divsd xmm2, qword ptr [ebp - 0x68] */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] - _s); } /* 0x006F68F7: subsd xmm3, xmm2 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x006F68FB: movd xmm2, eax */
    { int32_t _a = (int32_t)_xmm[2].u32[0], _b = (int32_t)_xmm[2].u32[1]; _xmm[2].f64[0] = _a; _xmm[2].f64[1] = _b; } /* 0x006F68FF: cvtdq2pd xmm2, xmm2 */
    MEM64(ebp + (-0x38)) = _xmm[3].u64[0]; /* 0x006F6903: movsd qword ptr [ebp - 0x38], xmm3 */
L_006F6908:
    _flag_a = SSE_COMI(_xmm[6].f64[0], _xmm[4].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F6908: comisd xmm6, xmm4 */
    _flag_k = FK_EFLAGS;
    _xmm[3].u64[0] = MEM64(ebp + (-0x58)); _xmm[3].u64[1] = 0; /* 0x006F690C: movsd xmm3, qword ptr [ebp - 0x58] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006F6924; /* 0x006F6911: jbe 0x6f6924 */
L_006F6913:
    { double _s = _xmm[3].f64[0]; _xmm[4].f64[0] = (double)(_xmm[4].f64[0] / _s); } /* 0x006F6913: divsd xmm4, xmm3 */
    { double _s = _xmm[4].f64[0]; _xmm[7].f64[0] = (double)(_xmm[7].f64[0] - _s); } /* 0x006F6917: subsd xmm7, xmm4 */
    _xmm[4] = _xmm[6]; /* 0x006F691B: movapd xmm4, xmm6 */
    MEM64(ebp + (-0x48)) = _xmm[7].u64[0]; /* 0x006F691F: movsd qword ptr [ebp - 0x48], xmm7 */
L_006F6924:
    eax = MEM32(esi + 0x30); /* 0x006F6924: mov eax, dword ptr [esi + 0x30] */
    _xmm[6].u64[0] = (uint32_t)(eax); _xmm[6].u64[1] = 0; /* 0x006F6927: movd xmm6, eax */
    { int32_t _a = (int32_t)_xmm[6].u32[0], _b = (int32_t)_xmm[6].u32[1]; _xmm[6].f64[0] = _a; _xmm[6].f64[1] = _b; } /* 0x006F692B: cvtdq2pd xmm6, xmm6 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F692F: comisd xmm1, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_006F6957; /* 0x006F6933: jb 0x6f6957 */
L_006F6935:
    { double _s = _xmm[6].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x006F6935: subsd xmm1, xmm6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F6939: dec eax */
    _flag_k = FK_DEC;
    { double _s = sse_f64(MEM64(0x808FB8)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006F693A: addsd xmm1, qword ptr [0x808fb8] */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] / _s); } /* 0x006F6942: divsd xmm1, xmm3 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006F6946: subsd xmm0, xmm1 */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006F694A: movd xmm1, eax */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006F694E: cvtdq2pd xmm1, xmm1 */
    MEM64(ebp + (-0x40)) = _xmm[0].u64[0]; /* 0x006F6952: movsd qword ptr [ebp - 0x40], xmm0 */
L_006F6957:
    _xmm[3].u64[0] = MEM64(ebp + (-0x60)); _xmm[3].u64[1] = 0; /* 0x006F6957: movsd xmm3, qword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F695C: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[0] = _xmm[3]; /* 0x006F695F: movaps xmm0, xmm3 */
    { double _s = _xmm[2].f64[0]; _xmm[3].f64[0] = (double)(_xmm[3].f64[0] + _s); } /* 0x006F6962: addsd xmm3, xmm2 */
    _xmm[2].u64[0] = MEM64(ebp + (-0x70)); _xmm[2].u64[1] = 0; /* 0x006F6966: movsd xmm2, qword ptr [ebp - 0x70] */
    { double _s = _xmm[5].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F696B: addsd xmm0, xmm5 */
    MEM64(ebp + (-0x60)) = _xmm[3].u64[0]; /* 0x006F696F: movsd qword ptr [ebp - 0x60], xmm3 */
    MEM64(ebp + (-0x58)) = _xmm[0].u64[0]; /* 0x006F6974: movsd qword ptr [ebp - 0x58], xmm0 */
    _xmm[0] = _xmm[2]; /* 0x006F6979: movaps xmm0, xmm2 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F697C: addsd xmm0, xmm4 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x006F6980: addsd xmm2, xmm1 */
    MEM64(ebp + (-0x68)) = _xmm[0].u64[0]; /* 0x006F6984: movsd qword ptr [ebp - 0x68], xmm0 */
    _xmm[0].u64[0] = MEM64(ebp + (-0x50)); _xmm[0].u64[1] = 0; /* 0x006F6989: movsd xmm0, qword ptr [ebp - 0x50] */
    { double _s = sse_f64(MEM64(0x808E98)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F698E: addsd xmm0, qword ptr [0x808e98] */
    MEM64(ebp + (-0x70)) = _xmm[2].u64[0]; /* 0x006F6996: movsd qword ptr [ebp - 0x70], xmm2 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F699B: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F380); /* 0x006F69A0: call 0x77f380 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x48)); _xmm[0].u64[1] = 0; /* 0x006F69A5: movsd xmm0, qword ptr [ebp - 0x48] */
    { double _s = sse_f64(MEM64(0x808E98)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F69AA: addsd xmm0, qword ptr [0x808e98] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006F69B2: fstp qword ptr [ebp - 0x30] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(ebp + (-0x30))), 1); /* 0x006F69B5: cvttsd2si eax, qword ptr [ebp - 0x30] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F69BA: movsd qword ptr [esp], xmm0 */
    MEM32(ebp + (-0x24)) = eax; /* 0x006F69BF: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_0077F380); /* 0x006F69C2: call 0x77f380 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x38)); _xmm[0].u64[1] = 0; /* 0x006F69C7: movsd xmm0, qword ptr [ebp - 0x38] */
    { double _s = sse_f64(MEM64(ebp + (-0x50))); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006F69CC: subsd xmm0, qword ptr [ebp - 0x50] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006F69D1: fstp qword ptr [ebp - 0x30] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(ebp + (-0x30))), 1); /* 0x006F69D4: cvttsd2si eax, qword ptr [ebp - 0x30] */
    { double _s = sse_f64(MEM64(0x809010)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F69D9: addsd xmm0, qword ptr [0x809010] */
    MEM32(ebp + (-0x20)) = eax; /* 0x006F69E1: mov dword ptr [ebp - 0x20], eax */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F69E4: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F380); /* 0x006F69E9: call 0x77f380 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x40)); _xmm[0].u64[1] = 0; /* 0x006F69EE: movsd xmm0, qword ptr [ebp - 0x40] */
    { double _s = sse_f64(MEM64(ebp + (-0x48))); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006F69F3: subsd xmm0, qword ptr [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006F69F8: fstp qword ptr [ebp - 0x30] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(ebp + (-0x30))), 1); /* 0x006F69FB: cvttsd2si eax, qword ptr [ebp - 0x30] */
    { double _s = sse_f64(MEM64(0x809010)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F6A00: addsd xmm0, qword ptr [0x809010] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x006F6A08: mov dword ptr [ebp - 0x1c], eax */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F6A0B: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F380); /* 0x006F6A10: call 0x77f380 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x58)); _xmm[0].u64[1] = 0; /* 0x006F6A15: movsd xmm0, qword ptr [ebp - 0x58] */
    { double _s = sse_f64(MEM64(0x808E98)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F6A1A: addsd xmm0, qword ptr [0x808e98] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006F6A22: fstp qword ptr [ebp - 0x30] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(ebp + (-0x30))), 1); /* 0x006F6A25: cvttsd2si eax, qword ptr [ebp - 0x30] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F6A2A: movsd qword ptr [esp], xmm0 */
    MEM32(ebp + (-0x18)) = eax; /* 0x006F6A2F: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_0077F380); /* 0x006F6A32: call 0x77f380 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x68)); _xmm[0].u64[1] = 0; /* 0x006F6A37: movsd xmm0, qword ptr [ebp - 0x68] */
    { double _s = sse_f64(MEM64(0x808E98)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F6A3C: addsd xmm0, qword ptr [0x808e98] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006F6A44: fstp qword ptr [ebp - 0x30] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(ebp + (-0x30))), 1); /* 0x006F6A47: cvttsd2si eax, qword ptr [ebp - 0x30] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F6A4C: movsd qword ptr [esp], xmm0 */
    MEM32(ebp + (-0x14)) = eax; /* 0x006F6A51: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_0077F380); /* 0x006F6A54: call 0x77f380 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x60)); _xmm[0].u64[1] = 0; /* 0x006F6A59: movsd xmm0, qword ptr [ebp - 0x60] */
    { double _s = sse_f64(MEM64(ebp + (-0x58))); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006F6A5E: subsd xmm0, qword ptr [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006F6A63: fstp qword ptr [ebp - 0x30] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(ebp + (-0x30))), 1); /* 0x006F6A66: cvttsd2si eax, qword ptr [ebp - 0x30] */
    { double _s = sse_f64(MEM64(0x809010)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F6A6B: addsd xmm0, qword ptr [0x809010] */
    MEM32(ebp + (-0x10)) = eax; /* 0x006F6A73: mov dword ptr [ebp - 0x10], eax */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F6A76: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F380); /* 0x006F6A7B: call 0x77f380 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x70)); _xmm[0].u64[1] = 0; /* 0x006F6A80: movsd xmm0, qword ptr [ebp - 0x70] */
    { double _s = sse_f64(MEM64(ebp + (-0x68))); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006F6A85: subsd xmm0, qword ptr [ebp - 0x68] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006F6A8A: fstp qword ptr [ebp - 0x30] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(ebp + (-0x30))), 1); /* 0x006F6A8D: cvttsd2si eax, qword ptr [ebp - 0x30] */
    { double _s = sse_f64(MEM64(0x809010)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006F6A92: addsd xmm0, qword ptr [0x809010] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F6A9A: mov dword ptr [ebp - 0xc], eax */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F6A9D: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F380); /* 0x006F6AA2: call 0x77f380 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x006F6AA7: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F6AAA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006F6AAC: fstp qword ptr [ebp - 0x30] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(ebp + (-0x30))), 1); /* 0x006F6AAF: cvttsd2si eax, qword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F6AB4: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006F6AB7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { ecx = edx; } /* 0x006F6AB9: cmovs ecx, edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006F6ABC: mov dword ptr [ebp - 0xc], ecx */
    /* test eax, eax */ /* 0x006F6ABF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { eax = edx; } /* 0x006F6AC1: cmovs eax, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F6AC4: mov dword ptr [ebp - 8], eax */
    /* test ebx, ebx */ /* 0x006F6AC7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6AD4; /* 0x006F6AC9: je 0x6f6ad4 */
L_006F6ACB:
    _xmm[0] = xmm_ld(ebp + (-0x14)); /* 0x006F6ACB: movdqu xmm0, xmmword ptr [ebp - 0x14] */
    xmm_st(ebx, _xmm[0]); /* 0x006F6AD0: movdqu xmmword ptr [ebx], xmm0 */
L_006F6AD4:
    /* test ecx, ecx */ /* 0x006F6AD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6B09; /* 0x006F6AD6: je 0x6f6b09 */
L_006F6AD8:
    /* test eax, eax */ /* 0x006F6AD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6B09; /* 0x006F6ADA: je 0x6f6b09 */
L_006F6ADC:
    /* cmp MEM32(ebp + (-0x1C)), edx */ /* 0x006F6ADC: cmp dword ptr [ebp - 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F6B09; /* 0x006F6ADF: jle 0x6f6b09 */
L_006F6AE1:
    /* cmp MEM32(ebp + (-0x18)), edx */ /* 0x006F6AE1: cmp dword ptr [ebp - 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F6B09; /* 0x006F6AE4: jle 0x6f6b09 */
L_006F6AE6:
    eax = ebp + (-0x14); /* 0x006F6AE6: lea eax, [ebp - 0x14] */
    ecx = edi; /* 0x006F6AE9: mov ecx, edi */
    PUSH32(esp, eax); /* 0x006F6AEB: push eax */
    PUSH32(esp, esi); /* 0x006F6AEC: push esi */
    edx = ebp + (-0x24); /* 0x006F6AED: lea edx, [ebp - 0x24] */
    RECOMP_CALL(sub_006F6B50); /* 0x006F6AF0: call 0x6f6b50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F6AF5: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F6AF8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6AF9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F6AFA: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F6AFB: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F6AFE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F6B00: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F6B05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F6B07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6B08: ret  */
L_006F6B09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F6B09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F6B0B: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6B0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F6B0D: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F6B0E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F6B11: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F6B13: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F6B18: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F6B1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6B1B: ret  */
L_006F6B1C:
    PUSH32(esp, 0x008061A4u); /* 0x006F6B1C: push 0x8061a4 */
    goto L_006F6B28; /* 0x006F6B21: jmp 0x6f6b28 */
L_006F6B23:
    PUSH32(esp, 0x00806270u); /* 0x006F6B23: push 0x806270 */
L_006F6B28:
    RECOMP_CALL(sub_006EDB70); /* 0x006F6B28: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F6B2D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6B30: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F6B33: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F6B35: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6B36: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F6B37: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F6B38: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F6B3D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F6B3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6B40: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6B50u);

L_006F6B50:
    PUSH32(esp, ebp); /* 0x006F6B50: push ebp */
    ebp = esp; /* 0x006F6B51: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006F6B53: push esi */
    esi = ecx; /* 0x006F6B54: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F6B56: push edi */
    edi = edx; /* 0x006F6B57: mov edi, edx */
    ecx = MEM32(esi + 0x34); /* 0x006F6B59: mov ecx, dword ptr [esi + 0x34] */
    eax = MEM32(ecx + 0x44); /* 0x006F6B5C: mov eax, dword ptr [ecx + 0x44] */
    /* test eax, 0x200u */ /* 0x006F6B5F: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6B76; /* 0x006F6B64: jne 0x6f6b76 */
L_006F6B66:
    _flag_a = (uint32_t)((eax | 0x200u)); _flag_b = (uint32_t)((eax | 0x200u));
    eax = eax | 0x200u; /* 0x006F6B66: or eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = eax; /* 0x006F6B6B: mov dword ptr [ecx + 0x44], eax */
    ecx = MEM32(esi + 0x34); /* 0x006F6B6E: mov ecx, dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_006FB030); /* 0x006F6B71: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F6B76:
    eax = MEM32(esi + 0x34); /* 0x006F6B76: mov eax, dword ptr [esi + 0x34] */
    edx = MEM32(ebp + 0x8); /* 0x006F6B79: mov edx, dword ptr [ebp + 8] */
    /* test MEM32(eax + 0x44), 0x173u */ /* 0x006F6B7C: test dword ptr [eax + 0x44], 0x173 */
    _flag_a = (uint32_t)(MEM32(eax + 0x44)); _flag_b = (uint32_t)(0x173u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6BCC; /* 0x006F6B83: jne 0x6f6bcc */
L_006F6B85:
    eax = MEM32(esi + 0x4); /* 0x006F6B85: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax); /* 0x006F6B88: mov ecx, dword ptr [eax] */
    eax = MEM32(edx + 0x4); /* 0x006F6B8A: mov eax, dword ptr [edx + 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x006F6B8D: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6BCC; /* 0x006F6B8F: jne 0x6f6bcc */
L_006F6B91:
    /* test ecx, ecx */ /* 0x006F6B91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6BA3; /* 0x006F6B93: je 0x6f6ba3 */
L_006F6B95:
    eax = ecx; /* 0x006F6B95: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F6B97: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F6B9C: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6BB8; /* 0x006F6BA1: jne 0x6f6bb8 */
L_006F6BA3:
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x006F6BA3: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x006F6BA3: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006F6BA6: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x006F6BA9: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6BCC; /* 0x006F6BAC: je 0x6f6bcc */
L_006F6BAE:
    /* cmp ecx, 2 */ /* 0x006F6BAE: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6BCC; /* 0x006F6BB1: je 0x6f6bcc */
L_006F6BB3:
    /* cmp ecx, 3 */ /* 0x006F6BB3: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6BCC; /* 0x006F6BB6: je 0x6f6bcc */
L_006F6BB8:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F6BB8: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x006F6BBB: mov ecx, esi */
    PUSH32(esp, edx); /* 0x006F6BBD: push edx */
    edx = edi; /* 0x006F6BBE: mov edx, edi */
    RECOMP_CALL(sub_00709580); /* 0x006F6BC0: call 0x709580 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F6BC5: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F6BC8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6BC9: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F6BCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6BCB: ret  */
L_006F6BCC:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F6BCC: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x006F6BCF: mov ecx, esi */
    PUSH32(esp, edx); /* 0x006F6BD1: push edx */
    edx = edi; /* 0x006F6BD2: mov edx, edi */
    RECOMP_CALL(sub_006F6410); /* 0x006F6BD4: call 0x6f6410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F6BD9: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F6BDC: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6BDD: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F6BDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6BDF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6BE0u);

L_006F6BE0:
    PUSH32(esp, esi); /* 0x006F6BE0: push esi */
    esi = ecx; /* 0x006F6BE1: mov esi, ecx */
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F6BE3: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6BFB; /* 0x006F6BE7: jne 0x6f6bfb */
L_006F6BE9:
    /* test MEM8(esi), 2 */ /* 0x006F6BE9: test byte ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6BFB; /* 0x006F6BEC: je 0x6f6bfb */
L_006F6BEE:
    edx = 1; /* 0x006F6BEE: mov edx, 1 */
    RECOMP_CALL(sub_007092B0); /* 0x006F6BF3: call 0x7092b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x006F6BF8: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F6BFB:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1; /* 0x006F6BFB: inc dword ptr [esi + 0x1c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F6BFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F6C00: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6C01: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6C10u);

L_006F6C10:
    PUSH32(esp, ebp); /* 0x006F6C10: push ebp */
    ebp = esp; /* 0x006F6C11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F6C13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x1C); /* 0x006F6C16: mov eax, dword ptr [ecx + 0x1c] */
    /* test eax, eax */ /* 0x006F6C19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6C35; /* 0x006F6C1B: je 0x6f6c35 */
L_006F6C1D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F6C1D: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x1C) = eax; /* 0x006F6C1E: mov dword ptr [ecx + 0x1c], eax */
    /* test eax, eax */ /* 0x006F6C21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F6C35; /* 0x006F6C23: jg 0x6f6c35 */
L_006F6C25:
    eax = MEM32(ecx); /* 0x006F6C25: mov eax, dword ptr [ecx] */
    /* test LO8(eax), 2 */ /* 0x006F6C27: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6C35; /* 0x006F6C29: je 0x6f6c35 */
L_006F6C2B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x006F6C2B: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x006F6C2E: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_007090D0); /* 0x006F6C30: call 0x7090d0 */
    RECOMP_FLAGS_IN();
L_006F6C35:
    esp = ebp; /* 0x006F6C35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F6C37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6C38: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F6C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F6C40u);

L_006F6C40:
    PUSH32(esp, ebp); /* 0x006F6C40: push ebp */
    ebp = esp; /* 0x006F6C41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006F6C43: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x006F6C46: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F6C49: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F6C4E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x54) = eax; /* 0x006F6C50: mov dword ptr [esp + 0x54], eax */
    eax = MEM32(ebp + 0x8); /* 0x006F6C54: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006F6C57: push esi */
    esi = MEM32(edx + 0x4); /* 0x006F6C58: mov esi, dword ptr [edx + 4] */
    MEM32(esp + 0x18) = edx; /* 0x006F6C5B: mov dword ptr [esp + 0x18], edx */
    MEM32(esp + 0x20) = eax; /* 0x006F6C5F: mov dword ptr [esp + 0x20], eax */
    PUSH32(esp, edi); /* 0x006F6C63: push edi */
    edi = ecx; /* 0x006F6C64: mov edi, ecx */
    /* test esi, esi */ /* 0x006F6C66: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6CB2; /* 0x006F6C68: je 0x6f6cb2 */
L_006F6C6A:
    ecx = MEM32(esi); /* 0x006F6C6A: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F6C6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006F6C6E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F6C8E; /* 0x006F6C70: jle 0x6f6c8e */
L_006F6C72:
    esi = MEM32(esi + 0x4); /* 0x006F6C72: mov esi, dword ptr [esi + 4] */
L_006F6C75:
    /* cmp MEM8(esi + eax * 4), 0xFFu */ /* 0x006F6C75: cmp byte ptr [esi + eax*4], 0xff */
    _flag_a = (uint32_t)(MEM8(esi + eax * 4)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6C8E; /* 0x006F6C79: jne 0x6f6c8e */
L_006F6C7B:
    /* cmp MEM8(esi + eax * 4 + 0x1), 0xFFu */ /* 0x006F6C7B: cmp byte ptr [esi + eax*4 + 1], 0xff */
    _flag_a = (uint32_t)(MEM8(esi + eax * 4 + 0x1)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6C8E; /* 0x006F6C80: jne 0x6f6c8e */
L_006F6C82:
    /* cmp MEM8(esi + eax * 4 + 0x2), 0xFFu */ /* 0x006F6C82: cmp byte ptr [esi + eax*4 + 2], 0xff */
    _flag_a = (uint32_t)(MEM8(esi + eax * 4 + 0x2)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6C8E; /* 0x006F6C87: jne 0x6f6c8e */
L_006F6C89:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F6C89: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x006F6C8A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F6C75; /* 0x006F6C8C: jl 0x6f6c75 */
L_006F6C8E:
    /* cmp eax, ecx */ /* 0x006F6C8E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6CB2; /* 0x006F6C90: jne 0x6f6cb2 */
L_006F6C92:
    PUSH32(esp, 0x00806254u); /* 0x006F6C92: push 0x806254 */
L_006F6C97:
    RECOMP_CALL(sub_006EDB70); /* 0x006F6C97: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6C9C: add esp, 4 */
    _flag_k = FK_ADD;
L_006F6C9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F6C9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F6CA1: pop edi */
    esi = POP32_VAL(esp); /* 0x006F6CA2: pop esi */
    ecx = MEM32(esp + 0x54); /* 0x006F6CA3: mov ecx, dword ptr [esp + 0x54] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F6CA7: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F6CA9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F6CAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F6CB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F6CB1: ret  */
L_006F6CB2:
    PUSH32(esp, MEM32(edx + 0x18)); /* 0x006F6CB2: push dword ptr [edx + 0x18] */
    ecx = (uint32_t)MEM8(edx + 0x8); /* 0x006F6CB5: movzx ecx, byte ptr [edx + 8] */
    PUSH32(esp, MEM32(edx + 0x14)); /* 0x006F6CB9: push dword ptr [edx + 0x14] */
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x006F6CBC: push dword ptr [edx + 0x10] */
    edx = MEM32(edx + 0xC); /* 0x006F6CBF: mov edx, dword ptr [edx + 0xc] */
    RECOMP_CALL(sub_006FA0F0); /* 0x006F6CC2: call 0x6fa0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F6CC7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F6CCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6CD5; /* 0x006F6CCC: jne 0x6f6cd5 */
L_006F6CCE:
    PUSH32(esp, 0x0080618Cu); /* 0x006F6CCE: push 0x80618c */
    RECOMP_BACKEDGE();
    goto L_006F6C97; /* 0x006F6CD3: jmp 0x6f6c97 */
L_006F6CD5:
    edx = MEM32(edi + 0x8); /* 0x006F6CD5: mov edx, dword ptr [edi + 8] */
    PUSH32(esp, eax); /* 0x006F6CD8: push eax */
    PUSH32(esp, ecx); /* 0x006F6CD9: push ecx */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006F6CDA: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_006F5D00); /* 0x006F6CDD: call 0x6f5d00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F6CE2: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F6CE4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F6CE7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6C9F; /* 0x006F6CE9: je 0x6f6c9f */
L_006F6CEB:
    eax = MEM32(esp + 0x1C); /* 0x006F6CEB: mov eax, dword ptr [esp + 0x1c] */
    ecx = MEM32(eax + 0x4); /* 0x006F6CEF: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x006F6CF2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6D25; /* 0x006F6CF4: je 0x6f6d25 */
L_006F6CF6:
    eax = MEM32(esi + 0x4); /* 0x006F6CF6: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x006F6CF9: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x006F6CFC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6D25; /* 0x006F6CFE: je 0x6f6d25 */
L_006F6D00:
    eax = MEM32(ecx); /* 0x006F6D00: mov eax, dword ptr [ecx] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x006F6D02: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x006F6D02: shl eax, 2 */
    PUSH32(esp, eax); /* 0x006F6D05: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006F6D06: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x006F6D09: push dword ptr [edx + 4] */
    RECOMP_CALL(sub_00780838); /* 0x006F6D0C: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x006F6D11: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F6D15: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x4); /* 0x006F6D18: mov edx, dword ptr [eax + 4] */
    eax = MEM32(esi + 0x4); /* 0x006F6D1B: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x006F6D1E: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(edx); /* 0x006F6D21: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x006F6D23: mov dword ptr [ecx], eax */
L_006F6D25:
    eax = MEM32(edi + 0x34); /* 0x006F6D25: mov eax, dword ptr [edi + 0x34] */
    ecx = MEM32(eax + 0x44); /* 0x006F6D28: mov ecx, dword ptr [eax + 0x44] */
    MEM32(esp + 0x20) = ecx; /* 0x006F6D2B: mov dword ptr [esp + 0x20], ecx */
    SET_LO8(ecx, MEM8(eax + 0x4C)); /* 0x006F6D2F: mov cl, byte ptr [eax + 0x4c] */
    MEM8(esp + 0x17) = (uint8_t)(LO8(ecx)); /* 0x006F6D32: mov byte ptr [esp + 0x17], cl */
    SET_LO8(ecx, MEM8(eax + 0x4D)); /* 0x006F6D36: mov cl, byte ptr [eax + 0x4d] */
    MEM8(esp + 0x16) = (uint8_t)(LO8(ecx)); /* 0x006F6D39: mov byte ptr [esp + 0x16], cl */
    SET_LO8(ecx, MEM8(eax + 0x4E)); /* 0x006F6D3D: mov cl, byte ptr [eax + 0x4e] */
    MEM8(esp + 0x15) = (uint8_t)(LO8(ecx)); /* 0x006F6D40: mov byte ptr [esp + 0x15], cl */
    SET_LO8(ecx, MEM8(eax + 0x4F)); /* 0x006F6D44: mov cl, byte ptr [eax + 0x4f] */
    MEM8(eax + 0x4C) = (uint8_t)(0xFFu); /* 0x006F6D47: mov byte ptr [eax + 0x4c], 0xff */
    eax = MEM32(edi + 0x34); /* 0x006F6D4B: mov eax, dword ptr [edi + 0x34] */
    MEM8(esp + 0x14) = (uint8_t)(LO8(ecx)); /* 0x006F6D4E: mov byte ptr [esp + 0x14], cl */
    MEM8(eax + 0x4D) = (uint8_t)(0xFFu); /* 0x006F6D52: mov byte ptr [eax + 0x4d], 0xff */
    eax = MEM32(edi + 0x34); /* 0x006F6D56: mov eax, dword ptr [edi + 0x34] */
    MEM8(eax + 0x4E) = (uint8_t)(0xFFu); /* 0x006F6D59: mov byte ptr [eax + 0x4e], 0xff */
    eax = MEM32(edi + 0x34); /* 0x006F6D5D: mov eax, dword ptr [edi + 0x34] */
    MEM8(eax + 0x4F) = (uint8_t)(0xFFu); /* 0x006F6D60: mov byte ptr [eax + 0x4f], 0xff */
    eax = MEM32(edi + 0x34); /* 0x006F6D64: mov eax, dword ptr [edi + 0x34] */
    MEM32(eax + 0x44) = 0; /* 0x006F6D67: mov dword ptr [eax + 0x44], 0 */
    eax = MEM32(edi + 0x34); /* 0x006F6D6E: mov eax, dword ptr [edi + 0x34] */
    MEM32(esp + 0x18) = eax; /* 0x006F6D71: mov dword ptr [esp + 0x18], eax */
    /* test eax, eax */ /* 0x006F6D75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6DBE; /* 0x006F6D77: je 0x6f6dbe */
L_006F6D79:
    ecx = MEM32(eax); /* 0x006F6D79: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x006F6D7B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6D93; /* 0x006F6D7D: je 0x6f6d93 */
L_006F6D7F:
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) - 1; /* 0x006F6D7F: dec dword ptr [ecx + 0x38] */
    _flag_k = FK_DEC;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x006F6D82: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F6D93; /* 0x006F6D86: jg 0x6f6d93 */
L_006F6D88:
    ecx = MEM32(eax); /* 0x006F6D88: mov ecx, dword ptr [eax] */
    RECOMP_CALL(sub_006F7460); /* 0x006F6D8A: call 0x6f7460 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x006F6D8F: mov eax, dword ptr [esp + 0x18] */
L_006F6D93:
    PUSH32(esp, MEM32(eax + 0x40)); /* 0x006F6D93: push dword ptr [eax + 0x40] */
    MEM32(eax) = 0; /* 0x006F6D96: mov dword ptr [eax], 0 */
    MEM32(eax + 0x54) = 0; /* 0x006F6D9C: mov dword ptr [eax + 0x54], 0 */
    MEM32(eax + 0x50) = 0; /* 0x006F6DA3: mov dword ptr [eax + 0x50], 0 */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F6DAA: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x1C); /* 0x006F6DB0: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6DB4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x40) = 0; /* 0x006F6DB7: mov dword ptr [eax + 0x40], 0 */
L_006F6DBE:
    eax = MEM32(edi + 0x8); /* 0x006F6DBE: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(edi + 0x34); /* 0x006F6DC1: mov ecx, dword ptr [edi + 0x34] */
    MEM32(esp + 0x54) = eax; /* 0x006F6DC4: mov dword ptr [esp + 0x54], eax */
    eax = MEM32(edi + 0xC); /* 0x006F6DC8: mov eax, dword ptr [edi + 0xc] */
    MEM32(esp + 0x4C) = 0; /* 0x006F6DCB: mov dword ptr [esp + 0x4c], 0 */
    MEM32(esp + 0x50) = 0; /* 0x006F6DD3: mov dword ptr [esp + 0x50], 0 */
    MEM32(esp + 0x58) = eax; /* 0x006F6DDB: mov dword ptr [esp + 0x58], eax */
    /* cmp MEM32(ecx), esi */ /* 0x006F6DDF: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6E07; /* 0x006F6DE1: jne 0x6f6e07 */
L_006F6DE3:
    eax = MEM32(esi + 0x4); /* 0x006F6DE3: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x006F6DE6: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x006F6DE9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6DF5; /* 0x006F6DEB: je 0x6f6df5 */
L_006F6DED:
    eax = MEM32(ecx + 0x50); /* 0x006F6DED: mov eax, dword ptr [ecx + 0x50] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x006F6DF0: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6E07; /* 0x006F6DF3: jne 0x6f6e07 */
L_006F6DF5:
    eax = MEM32(edi + 0x4); /* 0x006F6DF5: mov eax, dword ptr [edi + 4] */
    edx = MEM32(eax + 0x4); /* 0x006F6DF8: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x006F6DFB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6E14; /* 0x006F6DFD: je 0x6f6e14 */
L_006F6DFF:
    eax = MEM32(ecx + 0x54); /* 0x006F6DFF: mov eax, dword ptr [ecx + 0x54] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x006F6E02: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6E14; /* 0x006F6E05: je 0x6f6e14 */
L_006F6E07:
    edx = esi; /* 0x006F6E07: mov edx, esi */
    ecx = edi; /* 0x006F6E09: mov ecx, edi */
    RECOMP_CALL(sub_006FB080); /* 0x006F6E0B: call 0x6fb080 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F6E10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F6E27; /* 0x006F6E12: js 0x6f6e27 */
L_006F6E14:
    eax = MEM32(edi + 0x34); /* 0x006F6E14: mov eax, dword ptr [edi + 0x34] */
    ecx = esp + 0x4C; /* 0x006F6E17: lea ecx, [esp + 0x4c] */
    PUSH32(esp, ecx); /* 0x006F6E1B: push ecx */
    PUSH32(esp, esi); /* 0x006F6E1C: push esi */
    PUSH32(esp, ecx); /* 0x006F6E1D: push ecx */
    eax = MEM32(eax + 0x8); /* 0x006F6E1E: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x006F6E21: push edi */
    RECOMP_ICALL(eax); /* 0x006F6E22: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F6E24: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006F6E27:
    eax = MEM32(esi + 0x34); /* 0x006F6E27: mov eax, dword ptr [esi + 0x34] */
    SET_LO8(ecx, MEM8(esp + 0x17)); /* 0x006F6E2A: mov cl, byte ptr [esp + 0x17] */
    edx = MEM32(esp + 0x20); /* 0x006F6E2E: mov edx, dword ptr [esp + 0x20] */
    MEM8(eax + 0x4C) = (uint8_t)(LO8(ecx)); /* 0x006F6E32: mov byte ptr [eax + 0x4c], cl */
    eax = MEM32(esi + 0x34); /* 0x006F6E35: mov eax, dword ptr [esi + 0x34] */
    SET_LO8(ecx, MEM8(esp + 0x16)); /* 0x006F6E38: mov cl, byte ptr [esp + 0x16] */
    MEM8(eax + 0x4D) = (uint8_t)(LO8(ecx)); /* 0x006F6E3C: mov byte ptr [eax + 0x4d], cl */
    eax = MEM32(esi + 0x34); /* 0x006F6E3F: mov eax, dword ptr [esi + 0x34] */
    SET_LO8(ecx, MEM8(esp + 0x15)); /* 0x006F6E42: mov cl, byte ptr [esp + 0x15] */
    MEM8(eax + 0x4E) = (uint8_t)(LO8(ecx)); /* 0x006F6E46: mov byte ptr [eax + 0x4e], cl */
    eax = MEM32(esi + 0x34); /* 0x006F6E49: mov eax, dword ptr [esi + 0x34] */
    SET_LO8(ecx, MEM8(esp + 0x14)); /* 0x006F6E4C: mov cl, byte ptr [esp + 0x14] */
    MEM8(eax + 0x4F) = (uint8_t)(LO8(ecx)); /* 0x006F6E50: mov byte ptr [eax + 0x4f], cl */
    ecx = edx; /* 0x006F6E53: mov ecx, edx */
    eax = MEM32(esi + 0x34); /* 0x006F6E55: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF8EEFu);
    ecx = ecx & 0xFFFF8EEFu; /* 0x006F6E58: and ecx, 0xffff8eef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x44) = ecx; /* 0x006F6E5E: mov dword ptr [eax + 0x44], ecx */
    eax = MEM32(edi + 0x34); /* 0x006F6E61: mov eax, dword ptr [edi + 0x34] */
    SET_LO8(ecx, MEM8(esp + 0x17)); /* 0x006F6E64: mov cl, byte ptr [esp + 0x17] */
    MEM8(eax + 0x4C) = (uint8_t)(LO8(ecx)); /* 0x006F6E68: mov byte ptr [eax + 0x4c], cl */
    eax = MEM32(edi + 0x34); /* 0x006F6E6B: mov eax, dword ptr [edi + 0x34] */
    SET_LO8(ecx, MEM8(esp + 0x16)); /* 0x006F6E6E: mov cl, byte ptr [esp + 0x16] */
    MEM8(eax + 0x4D) = (uint8_t)(LO8(ecx)); /* 0x006F6E72: mov byte ptr [eax + 0x4d], cl */
    eax = MEM32(edi + 0x34); /* 0x006F6E75: mov eax, dword ptr [edi + 0x34] */
    SET_LO8(ecx, MEM8(esp + 0x15)); /* 0x006F6E78: mov cl, byte ptr [esp + 0x15] */
    MEM8(eax + 0x4E) = (uint8_t)(LO8(ecx)); /* 0x006F6E7C: mov byte ptr [eax + 0x4e], cl */
    eax = MEM32(edi + 0x34); /* 0x006F6E7F: mov eax, dword ptr [edi + 0x34] */
    SET_LO8(ecx, MEM8(esp + 0x14)); /* 0x006F6E82: mov cl, byte ptr [esp + 0x14] */
    MEM8(eax + 0x4F) = (uint8_t)(LO8(ecx)); /* 0x006F6E86: mov byte ptr [eax + 0x4f], cl */
    eax = MEM32(edi + 0x34); /* 0x006F6E89: mov eax, dword ptr [edi + 0x34] */
    MEM32(eax + 0x44) = edx; /* 0x006F6E8C: mov dword ptr [eax + 0x44], edx */
    eax = MEM32(edi + 0x34); /* 0x006F6E8F: mov eax, dword ptr [edi + 0x34] */
    MEM32(esp + 0x18) = eax; /* 0x006F6E92: mov dword ptr [esp + 0x18], eax */
    /* test eax, eax */ /* 0x006F6E96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6EE3; /* 0x006F6E98: je 0x6f6ee3 */
L_006F6E9A:
    ecx = MEM32(eax); /* 0x006F6E9A: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x006F6E9C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6EB4; /* 0x006F6E9E: je 0x6f6eb4 */
L_006F6EA0:
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) - 1; /* 0x006F6EA0: dec dword ptr [ecx + 0x38] */
    _flag_k = FK_DEC;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x006F6EA3: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F6EB4; /* 0x006F6EA7: jg 0x6f6eb4 */
L_006F6EA9:
    ecx = MEM32(eax); /* 0x006F6EA9: mov ecx, dword ptr [eax] */
    RECOMP_CALL(sub_006F7460); /* 0x006F6EAB: call 0x6f7460 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x006F6EB0: mov eax, dword ptr [esp + 0x18] */
L_006F6EB4:
    PUSH32(esp, MEM32(eax + 0x40)); /* 0x006F6EB4: push dword ptr [eax + 0x40] */
    MEM32(eax) = 0; /* 0x006F6EB7: mov dword ptr [eax], 0 */
    MEM32(eax + 0x54) = 0; /* 0x006F6EBD: mov dword ptr [eax + 0x54], 0 */
    MEM32(eax + 0x50) = 0; /* 0x006F6EC4: mov dword ptr [eax + 0x50], 0 */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F6ECB: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x1C); /* 0x006F6ED1: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6ED5: add esp, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(esp + 0x20); /* 0x006F6ED8: mov edx, dword ptr [esp + 0x20] */
    MEM32(eax + 0x40) = 0; /* 0x006F6EDC: mov dword ptr [eax + 0x40], 0 */
L_006F6EE3:
    /* test edx, 0x100u */ /* 0x006F6EE3: test edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6F9D; /* 0x006F6EE9: je 0x6f6f9d */
L_006F6EEF:
    eax = MEM32(edi + 0x4); /* 0x006F6EEF: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x006F6EF2: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x006F6EF5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6F4A; /* 0x006F6EF7: je 0x6f6f4a */
L_006F6EF9:
    eax = MEM32(esp + 0x1C); /* 0x006F6EF9: mov eax, dword ptr [esp + 0x1c] */
    edx = MEM32(eax + 0x4); /* 0x006F6EFD: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x006F6F00: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6F41; /* 0x006F6F02: je 0x6f6f41 */
L_006F6F04:
    eax = MEM32(ecx); /* 0x006F6F04: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x006F6F06: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x1C); /* 0x006F6F08: mov eax, dword ptr [esp + 0x1c] */
    if (CMP_G(_flag_a, _flag_b)) goto L_006F6F41; /* 0x006F6F0C: jg 0x6f6f41 */
L_006F6F0E:
    eax = MEM32(ecx); /* 0x006F6F0E: mov eax, dword ptr [ecx] */
    edx = MEM32(edx + 0x4); /* 0x006F6F10: mov edx, dword ptr [edx + 4] */
    ecx = MEM32(ecx + 0x4); /* 0x006F6F13: mov ecx, dword ptr [ecx + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x006F6F16: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x006F6F16: shl eax, 2 */
    PUSH32(esp, eax); /* 0x006F6F19: push eax */
    RECOMP_CALL(sub_006F2A80); /* 0x006F6F1A: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6F1F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F6F22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6F3D; /* 0x006F6F24: jne 0x6f6f3d */
L_006F6F26:
    eax = MEM32(edi + 0x34); /* 0x006F6F26: mov eax, dword ptr [edi + 0x34] */
    edx = 1; /* 0x006F6F29: mov edx, 1 */
    ecx = esi; /* 0x006F6F2E: mov ecx, esi */
    PUSH32(esp, MEM32(eax + 0x48)); /* 0x006F6F30: push dword ptr [eax + 0x48] */
    RECOMP_CALL(sub_006F5FA0); /* 0x006F6F33: call 0x6f5fa0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6F38: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F6F9D; /* 0x006F6F3B: jmp 0x6f6f9d */
L_006F6F3D:
    eax = MEM32(esp + 0x1C); /* 0x006F6F3D: mov eax, dword ptr [esp + 0x1c] */
L_006F6F41:
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x006F6F41: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F6F9D; /* 0x006F6F45: jne 0x6f6f9d */
L_006F6F47:
    eax = MEM32(edi + 0x4); /* 0x006F6F47: mov eax, dword ptr [edi + 4] */
L_006F6F4A:
    ecx = esp + 0x18; /* 0x006F6F4A: lea ecx, [esp + 0x18] */
    edx = eax; /* 0x006F6F4E: mov edx, eax */
    PUSH32(esp, ecx); /* 0x006F6F50: push ecx */
    ecx = esp + 0x2C; /* 0x006F6F51: lea ecx, [esp + 0x2c] */
    PUSH32(esp, ecx); /* 0x006F6F55: push ecx */
    ecx = esp + 0x34; /* 0x006F6F56: lea ecx, [esp + 0x34] */
    PUSH32(esp, ecx); /* 0x006F6F5A: push ecx */
    ecx = esp + 0x20; /* 0x006F6F5B: lea ecx, [esp + 0x20] */
    PUSH32(esp, ecx); /* 0x006F6F5F: push ecx */
    ecx = MEM32(edi + 0x34); /* 0x006F6F60: mov ecx, dword ptr [edi + 0x34] */
    ecx = MEM32(ecx + 0x48); /* 0x006F6F63: mov ecx, dword ptr [ecx + 0x48] */
    RECOMP_CALL(sub_006FABF0); /* 0x006F6F66: call 0x6fabf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x006F6F6B: push dword ptr [esp + 0x28] */
    SET_LO8(edx, MEM8(esp + 0x28)); /* 0x006F6F6F: mov dl, byte ptr [esp + 0x28] */
    PUSH32(esp, MEM32(esp + 0x3C)); /* 0x006F6F73: push dword ptr [esp + 0x3c] */
    ecx = MEM32(esi + 0x4); /* 0x006F6F77: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esp + 0x44)); /* 0x006F6F7A: push dword ptr [esp + 0x44] */
    RECOMP_CALL(sub_006FAAB0); /* 0x006F6F7E: call 0x6faab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x006F6F83: add esp, 0x1c */
    _flag_k = FK_ADD;
    edx = 1; /* 0x006F6F86: mov edx, 1 */
    ecx = esi; /* 0x006F6F8B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006F6F8D: push eax */
    RECOMP_CALL(sub_006F5FA0); /* 0x006F6F8E: call 0x6f5fa0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6F93: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006F6F96: mov ecx, esi */
    RECOMP_CALL(sub_006F60B0); /* 0x006F6F98: call 0x6f60b0 */
    RECOMP_FLAGS_IN();
L_006F6F9D:
    eax = MEM32(esi + 0x8); /* 0x006F6F9D: mov eax, dword ptr [esi + 8] */
    ecx = edi + 0x24; /* 0x006F6FA0: lea ecx, [edi + 0x24] */
    MEM32(esp + 0x38) = eax; /* 0x006F6FA3: mov dword ptr [esp + 0x38], eax */
    eax = MEM32(esi + 0xC); /* 0x006F6FA7: mov eax, dword ptr [esi + 0xc] */
    MEM32(esp + 0x30) = 0; /* 0x006F6FAA: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x006F6FB2: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x3C) = eax; /* 0x006F6FBA: mov dword ptr [esp + 0x3c], eax */
    /* test ecx, ecx */ /* 0x006F6FBE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6FCF; /* 0x006F6FC0: jne 0x6f6fcf */
L_006F6FC2:
    _xmm[0] = xmm_ld(esp + 0x30); /* 0x006F6FC2: movdqu xmm0, xmmword ptr [esp + 0x30] */
    xmm_st(esi + 0x24, _xmm[0]); /* 0x006F6FC8: movdqu xmmword ptr [esi + 0x24], xmm0 */
    goto L_006F6FDF; /* 0x006F6FCD: jmp 0x6f6fdf */
L_006F6FCF:
    eax = esi + 0x24; /* 0x006F6FCF: lea eax, [esi + 0x24] */
    PUSH32(esp, eax); /* 0x006F6FD2: push eax */
    edx = esp + 0x34; /* 0x006F6FD3: lea edx, [esp + 0x34] */
    RECOMP_CALL(sub_006F7520); /* 0x006F6FD7: call 0x6f7520 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F6FDC: add esp, 4 */
    _flag_k = FK_ADD;
L_006F6FDF:
    eax = MEM32(edi + 0x4); /* 0x006F6FDF: mov eax, dword ptr [edi + 4] */
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x006F6FE2: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F6FF2; /* 0x006F6FE6: je 0x6f6ff2 */
L_006F6FE8:
    eax = MEM32(esp + 0x1C); /* 0x006F6FE8: mov eax, dword ptr [esp + 0x1c] */
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x006F6FEC: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7000; /* 0x006F6FF0: jne 0x6f7000 */
L_006F6FF2:
    edi = MEM32(esp + 0x20); /* 0x006F6FF2: mov edi, dword ptr [esp + 0x20] */
    /* test edi, 0x102u */ /* 0x006F6FF6: test edi, 0x102 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x102u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7026; /* 0x006F6FFC: je 0x6f7026 */
L_006F6FFE:
    goto L_006F7004; /* 0x006F6FFE: jmp 0x6f7004 */
L_006F7000:
    edi = MEM32(esp + 0x20); /* 0x006F7000: mov edi, dword ptr [esp + 0x20] */
L_006F7004:
    ecx = MEM32(esi + 0x34); /* 0x006F7004: mov ecx, dword ptr [esi + 0x34] */
    edx = MEM32(ecx + 0x44); /* 0x006F7007: mov edx, dword ptr [ecx + 0x44] */
    eax = edx; /* 0x006F700A: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF8Fu);
    eax = eax & 0xFFFFFF8Fu; /* 0x006F700C: and eax, 0xffffff8f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = eax; /* 0x006F700F: mov dword ptr [ecx + 0x44], eax */
    eax = MEM32(esi + 0x34); /* 0x006F7012: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)((MEM32(eax + 0x44) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax + 0x44) | 0x10u));
    MEM32(eax + 0x44) = MEM32(eax + 0x44) | 0x10u; /* 0x006F7015: or dword ptr [eax + 0x44], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x34); /* 0x006F7019: mov ecx, dword ptr [esi + 0x34] */
    /* cmp MEM32(ecx + 0x44), edx */ /* 0x006F701C: cmp dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7026; /* 0x006F701F: je 0x6f7026 */
L_006F7021:
    RECOMP_CALL(sub_006FB030); /* 0x006F7021: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F7026:
    /* test edi, 0x1000u */ /* 0x006F7026: test edi, 0x1000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7035; /* 0x006F702C: jne 0x6f7035 */
L_006F702E:
    /* test MEM8(esp + 0x24), 2 */ /* 0x006F702E: test byte ptr [esp + 0x24], 2 */
    _flag_a = (uint32_t)(MEM8(esp + 0x24)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7052; /* 0x006F7033: je 0x6f7052 */
L_006F7035:
    ecx = MEM32(esi + 0x34); /* 0x006F7035: mov ecx, dword ptr [esi + 0x34] */
    edx = MEM32(ecx + 0x44); /* 0x006F7038: mov edx, dword ptr [ecx + 0x44] */
    eax = edx; /* 0x006F703B: mov eax, edx */
    _flag_a = (uint32_t)((eax | 0x1000u)); _flag_b = (uint32_t)((eax | 0x1000u));
    eax = eax | 0x1000u; /* 0x006F703D: or eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x44) = eax; /* 0x006F7042: mov dword ptr [ecx + 0x44], eax */
    ecx = MEM32(esi + 0x34); /* 0x006F7045: mov ecx, dword ptr [esi + 0x34] */
    /* cmp MEM32(ecx + 0x44), edx */ /* 0x006F7048: cmp dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x44)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7052; /* 0x006F704B: je 0x6f7052 */
L_006F704D:
    RECOMP_CALL(sub_006FB030); /* 0x006F704D: call 0x6fb030 */
    RECOMP_FLAGS_IN();
L_006F7052:
    ecx = MEM32(esp + 0x5C); /* 0x006F7052: mov ecx, dword ptr [esp + 0x5c] */
    eax = esi; /* 0x006F7056: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F7058: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7059: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F705A: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F705C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F7061: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7063: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7064: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7070u);

L_006F7070:
    PUSH32(esp, ebp); /* 0x006F7070: push ebp */
    ebp = esp; /* 0x006F7071: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F7073: push ecx */
    PUSH32(esp, esi); /* 0x006F7074: push esi */
    esi = ecx; /* 0x006F7075: mov esi, ecx */
    ecx = 0x16862004u; /* 0x006F7077: mov ecx, 0x16862004 */
    PUSH32(esp, edi); /* 0x006F707C: push edi */
    RECOMP_CALL(sub_006FA520); /* 0x006F707D: call 0x6fa520 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F7082: mov edi, eax */
    /* test edi, edi */ /* 0x006F7084: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F70A7; /* 0x006F7086: je 0x6f70a7 */
L_006F7088:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F7088: push dword ptr [ebp + 8] */
    edx = edi; /* 0x006F708B: mov edx, edi */
    ecx = esi; /* 0x006F708D: mov ecx, esi */
    RECOMP_CALL(sub_006F6C40); /* 0x006F708F: call 0x6f6c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F7094: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006F7097: mov ecx, edi */
    esi = eax; /* 0x006F7099: mov esi, eax */
    RECOMP_CALL(sub_006FA710); /* 0x006F709B: call 0x6fa710 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006F70A0: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F70A2: pop edi */
    esi = POP32_VAL(esp); /* 0x006F70A3: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F70A4: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F70A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F70A6: ret  */
L_006F70A7:
    edi = POP32_VAL(esp); /* 0x006F70A7: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F70A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F70AA: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F70AB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F70AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F70AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F70B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F70B0u);

L_006F70B0:
    PUSH32(esp, ebp); /* 0x006F70B0: push ebp */
    ebp = esp; /* 0x006F70B1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F70B3: push ecx */
    PUSH32(esp, ebx); /* 0x006F70B4: push ebx */
    ebx = edx; /* 0x006F70B5: mov ebx, edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F70B7: mov dword ptr [ebp - 4], ecx */
    edx = MEM32(ebp + 0x8); /* 0x006F70BA: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006F70BD: push esi */
    PUSH32(esp, edi); /* 0x006F70BE: push edi */
    /* test edx, edx */ /* 0x006F70BF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F70D1; /* 0x006F70C1: je 0x6f70d1 */
L_006F70C3:
    eax = edx; /* 0x006F70C3: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F70C5: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F70CA: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F70E8; /* 0x006F70CF: jne 0x6f70e8 */
L_006F70D1:
    eax = edx; /* 0x006F70D1: mov eax, edx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006F70D3: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006F70D3: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006F70D6: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x006F70D9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7151; /* 0x006F70DC: je 0x6f7151 */
L_006F70DE:
    /* cmp eax, 2 */ /* 0x006F70DE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7151; /* 0x006F70E1: je 0x6f7151 */
L_006F70E3:
    /* cmp eax, 3 */ /* 0x006F70E3: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7151; /* 0x006F70E6: je 0x6f7151 */
L_006F70E8:
    esi = MEM32(ebp + 0x18); /* 0x006F70E8: mov esi, dword ptr [ebp + 0x18] */
    ecx = esi; /* 0x006F70EB: mov ecx, esi */
    RECOMP_CALL(sub_006FA5D0); /* 0x006F70ED: call 0x6fa5d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F70F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F715E; /* 0x006F70F4: js 0x6f715e */
L_006F70F6:
    edi = MEM32(ebp + 0x14); /* 0x006F70F6: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x3Cu); /* 0x006F70F9: push 0x3c */
    PUSH32(esp, 0); /* 0x006F70FB: push 0 */
    PUSH32(esp, edi); /* 0x006F70FD: push edi */
    RECOMP_CALL(sub_0078083E); /* 0x006F70FE: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x006F7103: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F7106: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x14) = eax; /* 0x006F7109: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x006F710C: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x4) = esi; /* 0x006F710F: mov dword ptr [edi + 4], esi */
    esi = MEM32(ebp + 0x1C); /* 0x006F7112: mov esi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0x58u); /* 0x006F7115: push 0x58 */
    MEM32(edi + 0x8) = eax; /* 0x006F7117: mov dword ptr [edi + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x006F711A: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x006F711D: push 0 */
    PUSH32(esp, esi); /* 0x006F711F: push esi */
    MEM32(edi) = 1; /* 0x006F7120: mov dword ptr [edi], 1 */
    MEM32(edi + 0xC) = ebx; /* 0x006F7126: mov dword ptr [edi + 0xc], ebx */
    MEM32(edi + 0x10) = eax; /* 0x006F7129: mov dword ptr [edi + 0x10], eax */
    RECOMP_CALL(sub_0078083E); /* 0x006F712C: call 0x78083e */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4C) = 0xFFFFFFFFu; /* 0x006F7131: mov dword ptr [esi + 0x4c], 0xffffffff */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F7138: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x34) = esi; /* 0x006F713B: mov dword ptr [edi + 0x34], esi */
    eax = 1; /* 0x006F713E: mov eax, 1 */
    MEM32(edi + 0x38) = 1; /* 0x006F7143: mov dword ptr [edi + 0x38], 1 */
    edi = POP32_VAL(esp); /* 0x006F714A: pop edi */
    esi = POP32_VAL(esp); /* 0x006F714B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F714C: pop ebx */
    esp = ebp; /* 0x006F714D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F714F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7150: ret  */
L_006F7151:
    PUSH32(esp, 0x00806230u); /* 0x006F7151: push 0x806230 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F7156: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F715B: add esp, 4 */
    _flag_k = FK_ADD;
L_006F715E:
    edi = POP32_VAL(esp); /* 0x006F715E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F715F: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7160: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F7162: pop ebx */
    esp = ebp; /* 0x006F7163: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7165: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7166: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7170u);

L_006F7170:
    PUSH32(esp, ebp); /* 0x006F7170: push ebp */
    ebp = esp; /* 0x006F7171: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1ACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1ACu; /* 0x006F7173: sub esp, 0x1ac */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F7179: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F717E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F7180: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x006F7183: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x006F7186: push ebx */
    PUSH32(esp, esi); /* 0x006F7187: push esi */
    esi = MEM32(ebp + 0x18); /* 0x006F7188: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xE8)) = ecx; /* 0x006F718B: mov dword ptr [ebp - 0xe8], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x006F7191: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xF4)) = edx; /* 0x006F7194: mov dword ptr [ebp - 0xf4], edx */
    MEM32(ebp + (-0xEC)) = ecx; /* 0x006F719A: mov dword ptr [ebp - 0xec], ecx */
    MEM32(ebp + (-0xF0)) = eax; /* 0x006F71A0: mov dword ptr [ebp - 0xf0], eax */
    PUSH32(esp, edi); /* 0x006F71A6: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006F71A7: mov edi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x006F71AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F71D1; /* 0x006F71AC: jne 0x6f71d1 */
L_006F71AE:
    PUSH32(esp, 0x0080622Cu); /* 0x006F71AE: push 0x80622c */
    PUSH32(esp, 0x00803FE8u); /* 0x006F71B3: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F71B8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F71BD: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F71C0: pop edi */
    esi = POP32_VAL(esp); /* 0x006F71C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F71C2: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F71C3: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F71C6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F71C8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F71CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F71CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F71D0: ret  */
L_006F71D1:
    /* test eax, eax */ /* 0x006F71D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F71F8; /* 0x006F71D3: jne 0x6f71f8 */
L_006F71D5:
    PUSH32(esp, 0x008062B8u); /* 0x006F71D5: push 0x8062b8 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F71DA: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F71DF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F71E4: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F71E7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F71E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F71E9: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F71EA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F71ED: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F71EF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F71F4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F71F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F71F7: ret  */
L_006F71F8:
    ebx = MEM32(ebp + 0x8); /* 0x006F71F8: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(ebp + 0x14) */ /* 0x006F71FB: cmp ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F73A8; /* 0x006F71FE: jne 0x6f73a8 */
L_006F7204:
    /* test ebx, ebx */ /* 0x006F7204: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7279; /* 0x006F7206: je 0x6f7279 */
L_006F7208:
    eax = ebx; /* 0x006F7208: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F720A: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F720F: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7279; /* 0x006F7214: je 0x6f7279 */
L_006F7216:
    /* cmp ebx, 0x32595559u */ /* 0x006F7216: cmp ebx, 0x32595559 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F723C; /* 0x006F721C: ja 0x6f723c */
L_006F721E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7272; /* 0x006F721E: je 0x6f7272 */
L_006F7220:
    eax = ebx; /* 0x006F7220: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3132564Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3132564Eu; /* 0x006F7222: sub eax, 0x3132564e */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F7235; /* 0x006F7227: je 0x6f7235 */
L_006F7229:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x00FF0000u; /* 0x006F7229: sub eax, 0xff0000 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F7235; /* 0x006F722E: je 0x6f7235 */
L_006F7230:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x006F7230: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_006F7254; /* 0x006F7233: jne 0x6f7254 */
L_006F7235:
    ecx = 1; /* 0x006F7235: mov ecx, 1 */
    goto L_006F727C; /* 0x006F723A: jmp 0x6f727c */
L_006F723C:
    /* cmp ebx, 0x55595659u */ /* 0x006F723C: cmp ebx, 0x55595659 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x55595659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7272; /* 0x006F7242: je 0x6f7272 */
L_006F7244:
    /* cmp ebx, 0x56555949u */ /* 0x006F7244: cmp ebx, 0x56555949 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x56555949u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7235; /* 0x006F724A: je 0x6f7235 */
L_006F724C:
    /* cmp ebx, 0x59565955u */ /* 0x006F724C: cmp ebx, 0x59565955 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7272; /* 0x006F7252: je 0x6f7272 */
L_006F7254:
    PUSH32(esp, 0x0080629Cu); /* 0x006F7254: push 0x80629c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F7259: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F725E: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F7261: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7262: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7263: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F7264: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F7267: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F7269: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F726E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7270: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7271: ret  */
L_006F7272:
    ecx = 2; /* 0x006F7272: mov ecx, 2 */
    goto L_006F727C; /* 0x006F7277: jmp 0x6f727c */
L_006F7279:
    ecx = (uint32_t)LO8(ebx); /* 0x006F7279: movzx ecx, bl */
L_006F727C:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0xE8))); /* 0x006F727C: imul ecx, dword ptr [ebp - 0xe8] */
    eax = edx; /* 0x006F7283: mov eax, edx */
    MEM32(ebp + (-0xE8)) = ecx; /* 0x006F7285: mov dword ptr [ebp - 0xe8], ecx */
    /* test edx, edx */ /* 0x006F728B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F72C8; /* 0x006F728D: je 0x6f72c8 */
L_006F728F:
    ebx = ecx; /* 0x006F728F: mov ebx, ecx */
L_006F7291:
    PUSH32(esp, ebx); /* 0x006F7291: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F7292: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x006F7293: push edi */
    PUSH32(esp, esi); /* 0x006F7294: push esi */
    MEM32(ebp + (-0xF8)) = eax; /* 0x006F7295: mov dword ptr [ebp - 0xf8], eax */
    RECOMP_CALL(sub_00780838); /* 0x006F729B: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xEC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0xEC)); /* 0x006F72A0: add edi, dword ptr [ebp - 0xec] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F72A6: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xF0)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0xF0)); /* 0x006F72A9: add esi, dword ptr [ebp - 0xf0] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xF8)); /* 0x006F72AF: mov eax, dword ptr [ebp - 0xf8] */
    /* test eax, eax */ /* 0x006F72B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7291; /* 0x006F72B7: jne 0x6f7291 */
L_006F72B9:
    ebx = MEM32(ebp + 0x8); /* 0x006F72B9: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xE8)); /* 0x006F72BC: mov ecx, dword ptr [ebp - 0xe8] */
    edx = MEM32(ebp + (-0xF4)); /* 0x006F72C2: mov edx, dword ptr [ebp - 0xf4] */
L_006F72C8:
    /* cmp ebx, 0x32315659u */ /* 0x006F72C8: cmp ebx, 0x32315659 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x32315659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7333; /* 0x006F72CE: je 0x6f7333 */
L_006F72D0:
    /* cmp ebx, 0x56555949u */ /* 0x006F72D0: cmp ebx, 0x56555949 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x56555949u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7333; /* 0x006F72D6: je 0x6f7333 */
L_006F72D8:
    /* cmp ebx, 0x3231564Eu */ /* 0x006F72D8: cmp ebx, 0x3231564e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3231564Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F72EC; /* 0x006F72DE: je 0x6f72ec */
L_006F72E0:
    /* cmp ebx, 0x3132564Eu */ /* 0x006F72E0: cmp ebx, 0x3132564e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3132564Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7395; /* 0x006F72E6: jne 0x6f7395 */
L_006F72EC:
    eax = edx; /* 0x006F72EC: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F72EE: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F72EF: sub eax, edx */
    _flag_k = FK_CMP;
    ebx = eax; /* 0x006F72F1: mov ebx, eax */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x006F72F3: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_006F7395; /* 0x006F72F5: je 0x6f7395 */
L_006F72FB:
    goto L_006F7300; /* 0x006F72FB: jmp 0x6f7300 */
L_006F7300:
    PUSH32(esp, ecx); /* 0x006F7300: push ecx */
    PUSH32(esp, edi); /* 0x006F7301: push edi */
    PUSH32(esp, esi); /* 0x006F7302: push esi */
    RECOMP_CALL(sub_00780838); /* 0x006F7303: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xEC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0xEC)); /* 0x006F7308: add edi, dword ptr [ebp - 0xec] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F730E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xF0)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0xF0)); /* 0x006F7311: add esi, dword ptr [ebp - 0xf0] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xE8)); /* 0x006F7317: mov ecx, dword ptr [ebp - 0xe8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006F731D: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F7300; /* 0x006F731E: jne 0x6f7300 */
L_006F7320:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7320: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7322: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7323: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7324: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F7325: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F7328: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F732A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F732F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7331: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7332: ret  */
L_006F7333:
    eax = ecx; /* 0x006F7333: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F7335: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F7336: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x006F7338: mov ecx, eax */
    eax = MEM32(ebp + (-0xEC)); /* 0x006F733A: mov eax, dword ptr [ebp - 0xec] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F7340: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F7341: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006F7343: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F7345: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebp + (-0xF8)) = eax; /* 0x006F7347: mov dword ptr [ebp - 0xf8], eax */
    eax = MEM32(ebp + (-0xF0)); /* 0x006F734D: mov eax, dword ptr [ebp - 0xf0] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F7353: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F7354: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xE8)) = ecx; /* 0x006F7356: mov dword ptr [ebp - 0xe8], ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F735C: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebp + (-0xEC)) = eax; /* 0x006F735E: mov dword ptr [ebp - 0xec], eax */
    eax = MEM32(ebp + (-0xF4)); /* 0x006F7364: mov eax, dword ptr [ebp - 0xf4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F736A: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F736B: sub eax, edx */
    _flag_k = FK_CMP;
    ebx = eax; /* 0x006F736D: mov ebx, eax */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x006F736F: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x006F7371: add ebx, ebx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006F7395; /* 0x006F7373: je 0x6f7395 */
L_006F7375:
    PUSH32(esp, ecx); /* 0x006F7375: push ecx */
    PUSH32(esp, edi); /* 0x006F7376: push edi */
    PUSH32(esp, esi); /* 0x006F7377: push esi */
    RECOMP_CALL(sub_00780838); /* 0x006F7378: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xF8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0xF8)); /* 0x006F737D: add edi, dword ptr [ebp - 0xf8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F7383: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xEC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0xEC)); /* 0x006F7386: add esi, dword ptr [ebp - 0xec] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xE8)); /* 0x006F738C: mov ecx, dword ptr [ebp - 0xe8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006F7392: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F7375; /* 0x006F7393: jne 0x6f7375 */
L_006F7395:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7395: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7397: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7398: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7399: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F739A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F739D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F739F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F73A4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F73A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F73A7: ret  */
L_006F73A8:
    eax = ebp + (-0x150); /* 0x006F73A8: lea eax, [ebp - 0x150] */
    PUSH32(esp, eax); /* 0x006F73AE: push eax */
    eax = ebp + (-0xB8); /* 0x006F73AF: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x006F73B5: push eax */
    eax = ebp + (-0x50); /* 0x006F73B6: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x006F73B9: push eax */
    PUSH32(esp, ecx); /* 0x006F73BA: push ecx */
    PUSH32(esp, edi); /* 0x006F73BB: push edi */
    edi = MEM32(ebp + (-0xE8)); /* 0x006F73BC: mov edi, dword ptr [ebp - 0xe8] */
    ecx = edi; /* 0x006F73C2: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x006F73C4: push ebx */
    RECOMP_CALL(sub_006F70B0); /* 0x006F73C5: call 0x6f70b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F73CA: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F73CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F73E5; /* 0x006F73CF: jne 0x6f73e5 */
L_006F73D1:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F73D1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F73D4: pop edi */
    esi = POP32_VAL(esp); /* 0x006F73D5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F73D6: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F73D7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F73DA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F73DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F73E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F73E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F73E4: ret  */
L_006F73E5:
    ebx = MEM32(ebp + (-0xF4)); /* 0x006F73E5: mov ebx, dword ptr [ebp - 0xf4] */
    eax = ebp + (-0x1A8); /* 0x006F73EB: lea eax, [ebp - 0x1a8] */
    PUSH32(esp, eax); /* 0x006F73F1: push eax */
    eax = ebp + (-0xE4); /* 0x006F73F2: lea eax, [ebp - 0xe4] */
    edx = ebx; /* 0x006F73F8: mov edx, ebx */
    PUSH32(esp, eax); /* 0x006F73FA: push eax */
    eax = ebp + (-0x8C); /* 0x006F73FB: lea eax, [ebp - 0x8c] */
    ecx = edi; /* 0x006F7401: mov ecx, edi */
    PUSH32(esp, eax); /* 0x006F7403: push eax */
    PUSH32(esp, MEM32(ebp + (-0xF0))); /* 0x006F7404: push dword ptr [ebp - 0xf0] */
    PUSH32(esp, esi); /* 0x006F740A: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006F740B: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_006F70B0); /* 0x006F740E: call 0x6f70b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F7413: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F7416: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F73D1; /* 0x006F7418: je 0x6f73d1 */
L_006F741A:
    eax = ebp + (-0x14); /* 0x006F741A: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = 0; /* 0x006F741D: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, eax); /* 0x006F7424: push eax */
    eax = ebp + (-0x8C); /* 0x006F7425: lea eax, [ebp - 0x8c] */
    MEM32(ebp + (-0x10)) = 0; /* 0x006F742B: mov dword ptr [ebp - 0x10], 0 */
    PUSH32(esp, eax); /* 0x006F7432: push eax */
    edx = ebp + (-0x14); /* 0x006F7433: lea edx, [ebp - 0x14] */
    MEM32(ebp + (-0xC)) = edi; /* 0x006F7436: mov dword ptr [ebp - 0xc], edi */
    ecx = ebp + (-0x50); /* 0x006F7439: lea ecx, [ebp - 0x50] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x006F743C: mov dword ptr [ebp - 8], ebx */
    RECOMP_CALL(sub_006F6410); /* 0x006F743F: call 0x6f6410 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F7444: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7447: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F744A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F744C: pop edi */
    esi = POP32_VAL(esp); /* 0x006F744D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F744E: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F744F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F7454: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7456: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7457: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7460u);

L_006F7460:
    PUSH32(esp, ebp); /* 0x006F7460: push ebp */
    ebp = esp; /* 0x006F7461: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F7463: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006F7466: push ecx */
    PUSH32(esp, ebx); /* 0x006F7467: push ebx */
    PUSH32(esp, esi); /* 0x006F7468: push esi */
    esi = ecx; /* 0x006F7469: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F746B: push edi */
    /* test esi, esi */ /* 0x006F746C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7517; /* 0x006F746E: je 0x6f7517 */
L_006F7474:
    /* test MEM8(esi), 4 */ /* 0x006F7474: test byte ptr [esi], 4 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7517; /* 0x006F7477: jne 0x6f7517 */
L_006F747D:
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) - 1; /* 0x006F747D: dec dword ptr [esi + 0x38] */
    _flag_k = FK_DEC;
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x006F7480: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F7517; /* 0x006F7484: jg 0x6f7517 */
L_006F748A:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F748A: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F74B7; /* 0x006F748E: jle 0x6f74b7 */
L_006F7490:
    eax = MEM32(esi + 0x1C); /* 0x006F7490: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x006F7493: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F74B1; /* 0x006F7495: je 0x6f74b1 */
L_006F7497:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F7497: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x1C) = eax; /* 0x006F7498: mov dword ptr [esi + 0x1c], eax */
    /* test eax, eax */ /* 0x006F749B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F74B1; /* 0x006F749D: jg 0x6f74b1 */
L_006F749F:
    eax = MEM32(esi); /* 0x006F749F: mov eax, dword ptr [esi] */
    /* test LO8(eax), 2 */ /* 0x006F74A1: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F74B1; /* 0x006F74A3: je 0x6f74b1 */
L_006F74A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x006F74A5: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F74A8: mov ecx, esi */
    MEM32(esi) = eax; /* 0x006F74AA: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_007090D0); /* 0x006F74AC: call 0x7090d0 */
    RECOMP_FLAGS_IN();
L_006F74B1:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F74B1: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_006F7490; /* 0x006F74B5: jg 0x6f7490 */
L_006F74B7:
    /* test MEM8(esi), 2 */ /* 0x006F74B7: test byte ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F74C5; /* 0x006F74BA: je 0x6f74c5 */
L_006F74BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F74BC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F74BE: mov ecx, esi */
    RECOMP_CALL(sub_007092B0); /* 0x006F74C0: call 0x7092b0 */
    RECOMP_FLAGS_IN();
L_006F74C5:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x006F74C5: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F74E3; /* 0x006F74C9: je 0x6f74e3 */
L_006F74CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F74CB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F74CD: mov ecx, esi */
    RECOMP_CALL(sub_006F5F60); /* 0x006F74CF: call 0x6f5f60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x006F74D4: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_006FA710); /* 0x006F74D7: call 0x6fa710 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = 0; /* 0x006F74DC: mov dword ptr [esi + 4], 0 */
L_006F74E3:
    ebx = MEM32(esi + 0x34); /* 0x006F74E3: mov ebx, dword ptr [esi + 0x34] */
    edi = MEM32(0x7CC44C); /* 0x006F74E6: mov edi, dword ptr [0x7cc44c] */
    /* test ebx, ebx */ /* 0x006F74EC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7504; /* 0x006F74EE: je 0x6f7504 */
L_006F74F0:
    ecx = ebx; /* 0x006F74F0: mov ecx, ebx */
    RECOMP_CALL(sub_006FB030); /* 0x006F74F2: call 0x6fb030 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x006F74F7: push ebx */
    RECOMP_ICALL(edi); /* 0x006F74F8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F74FA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x34) = 0; /* 0x006F74FD: mov dword ptr [esi + 0x34], 0 */
L_006F7504:
    /* test MEM8(esi), 1 */ /* 0x006F7504: test byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7511; /* 0x006F7507: jne 0x6f7511 */
L_006F7509:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x006F7509: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(edi); /* 0x006F750C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F750E: add esp, 4 */
    _flag_k = FK_ADD;
L_006F7511:
    PUSH32(esp, esi); /* 0x006F7511: push esi */
    RECOMP_ICALL(edi); /* 0x006F7512: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F7514: add esp, 4 */
    _flag_k = FK_ADD;
L_006F7517:
    edi = POP32_VAL(esp); /* 0x006F7517: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7518: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7519: pop ebx */
    esp = ebp; /* 0x006F751A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F751C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F751D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7520u);

L_006F7520:
    PUSH32(esp, ebp); /* 0x006F7520: push ebp */
    ebp = esp; /* 0x006F7521: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F7523: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F7526: push ebx */
    ebx = ecx; /* 0x006F7527: mov ebx, ecx */
    eax = edx; /* 0x006F7529: mov eax, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F752B: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, esi); /* 0x006F752E: push esi */
    PUSH32(esp, edi); /* 0x006F752F: push edi */
    /* test ebx, ebx */ /* 0x006F7530: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F754F; /* 0x006F7532: jne 0x6f754f */
L_006F7534:
    PUSH32(esp, 0x007E1ECCu); /* 0x006F7534: push 0x7e1ecc */
    PUSH32(esp, 0x00803FE8u); /* 0x006F7539: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F753E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7543: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7546: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7548: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7549: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F754A: pop ebx */
    esp = ebp; /* 0x006F754B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F754D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F754E: ret  */
L_006F754F:
    /* test eax, eax */ /* 0x006F754F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F756E; /* 0x006F7551: jne 0x6f756e */
L_006F7553:
    PUSH32(esp, 0x007E1EACu); /* 0x006F7553: push 0x7e1eac */
    PUSH32(esp, 0x00803FE8u); /* 0x006F7558: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F755D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7562: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7565: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7567: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7568: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7569: pop ebx */
    esp = ebp; /* 0x006F756A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F756C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F756D: ret  */
L_006F756E:
    edi = MEM32(ebp + 0x8); /* 0x006F756E: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x006F7571: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7590; /* 0x006F7573: jne 0x6f7590 */
L_006F7575:
    PUSH32(esp, 0x008062C4u); /* 0x006F7575: push 0x8062c4 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F757A: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F757F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7584: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7587: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7589: pop edi */
    esi = POP32_VAL(esp); /* 0x006F758A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F758B: pop ebx */
    esp = ebp; /* 0x006F758C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F758E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F758F: ret  */
L_006F7590:
    ecx = MEM32(ebx + 0x8); /* 0x006F7590: mov ecx, dword ptr [ebx + 8] */
    /* test ecx, ecx */ /* 0x006F7593: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F7620; /* 0x006F7595: jle 0x6f7620 */
L_006F759B:
    /* cmp MEM32(ebx + 0xC), 0 */ /* 0x006F759B: cmp dword ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F7620; /* 0x006F759F: jle 0x6f7620 */
L_006F75A1:
    edx = MEM32(eax + 0x8); /* 0x006F75A1: mov edx, dword ptr [eax + 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x006F75A4: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x006F75A7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F7620; /* 0x006F75A9: jle 0x6f7620 */
L_006F75AB:
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x006F75AB: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F7620; /* 0x006F75AF: jle 0x6f7620 */
L_006F75B1:
    edx = MEM32(ebx); /* 0x006F75B1: mov edx, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x006F75B3: mov eax, dword ptr [eax] */
    esi = ecx + edx; /* 0x006F75B5: lea esi, [ecx + edx] */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F75B8: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006F75BB: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x006F75BD: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { edx = eax; } /* 0x006F75BF: cmovg edx, eax */
    /* cmp ecx, esi */ /* 0x006F75C2: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = edx; /* 0x006F75C4: mov dword ptr [edi], edx */
    if (CMP_L(_flag_a, _flag_b)) { esi = ecx; } /* 0x006F75C6: cmovl esi, ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x006F75C9: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x006F75CC: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(edi + 0x8) = esi; /* 0x006F75CE: mov dword ptr [edi + 8], esi */
    edx = MEM32(ebx + 0x4); /* 0x006F75D1: mov edx, dword ptr [ebx + 4] */
    eax = MEM32(ecx + 0x4); /* 0x006F75D4: mov eax, dword ptr [ecx + 4] */
    esi = MEM32(ebx + 0xC); /* 0x006F75D7: mov esi, dword ptr [ebx + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x006F75DA: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x006F75DD: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006F75DF: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x006F75E1: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { edx = eax; } /* 0x006F75E3: cmovg edx, eax */
    /* cmp ecx, esi */ /* 0x006F75E6: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x4) = edx; /* 0x006F75E8: mov dword ptr [edi + 4], edx */
    if (CMP_L(_flag_a, _flag_b)) { esi = ecx; } /* 0x006F75EB: cmovl esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x006F75EE: sub esi, edx */
    _flag_k = FK_CMP;
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x006F75F0: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0xC) = esi; /* 0x006F75F4: mov dword ptr [edi + 0xc], esi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F760D; /* 0x006F75F7: jle 0x6f760d */
L_006F75F9:
    /* test esi, esi */ /* 0x006F75F9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F760D; /* 0x006F75FB: jle 0x6f760d */
L_006F75FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F75FD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F75FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006F7601: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F7603: sete al */
    edi = POP32_VAL(esp); /* 0x006F7606: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7607: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7608: pop ebx */
    esp = ebp; /* 0x006F7609: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F760B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F760C: ret  */
L_006F760D:
    ecx = 1; /* 0x006F760D: mov ecx, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7612: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006F7614: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F7616: sete al */
    edi = POP32_VAL(esp); /* 0x006F7619: pop edi */
    esi = POP32_VAL(esp); /* 0x006F761A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F761B: pop ebx */
    esp = ebp; /* 0x006F761C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F761E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F761F: ret  */
L_006F7620:
    MEM32(edi + 0x8) = 0; /* 0x006F7620: mov dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7627: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC) = 0; /* 0x006F7629: mov dword ptr [edi + 0xc], 0 */
    edi = POP32_VAL(esp); /* 0x006F7630: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7631: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7632: pop ebx */
    esp = ebp; /* 0x006F7633: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7635: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7636: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7640u);

L_006F7640:
    PUSH32(esp, ebp); /* 0x006F7640: push ebp */
    ebp = esp; /* 0x006F7641: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F7643: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F7646: push ebx */
    PUSH32(esp, esi); /* 0x006F7647: push esi */
    esi = ecx; /* 0x006F7648: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F764A: push edi */
    /* test esi, esi */ /* 0x006F764B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F766A; /* 0x006F764D: jne 0x6f766a */
L_006F764F:
    PUSH32(esp, 0x008062D8u); /* 0x006F764F: push 0x8062d8 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F7654: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F7659: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F765E: add esp, 8 */
    _flag_k = FK_ADD;
L_006F7661:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7661: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7663: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7664: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7665: pop ebx */
    esp = ebp; /* 0x006F7666: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7668: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7669: ret  */
L_006F766A:
    ecx = MEM32(ebp + 0x8); /* 0x006F766A: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x006F766D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F76BC; /* 0x006F766F: je 0x6f76bc */
L_006F7671:
    edi = MEM32(ecx + 0x4); /* 0x006F7671: mov edi, dword ptr [ecx + 4] */
    edx = MEM32(ecx); /* 0x006F7674: mov edx, dword ptr [ecx] */
    eax = MEM32(ecx + 0x8); /* 0x006F7676: mov eax, dword ptr [ecx + 8] */
    ecx = MEM32(ecx + 0xC); /* 0x006F7679: mov ecx, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x4)) = edx; /* 0x006F767C: mov dword ptr [ebp - 4], edx */
    ebx = edi + (-0x1); /* 0x006F767F: lea ebx, [edi - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F7682: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x006F7683: add ebx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x006F7685: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x006F7687: mov dword ptr [ebp - 8], edx */
    /* test eax, eax */ /* 0x006F768A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F7661; /* 0x006F768C: jle 0x6f7661 */
L_006F768E:
    /* test ecx, ecx */ /* 0x006F768E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F7661; /* 0x006F7690: jle 0x6f7661 */
L_006F7692:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7692: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F7694:
    edx = MEM32(esi + eax * 8); /* 0x006F7694: mov edx, dword ptr [esi + eax*8] */
    ecx = MEM32(esi + eax * 8 + 0x4); /* 0x006F7697: mov ecx, dword ptr [esi + eax*8 + 4] */
    /* cmp edx, MEM32(ebp + (-0x4)) */ /* 0x006F769B: cmp edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F76AD; /* 0x006F769E: jl 0x6f76ad */
L_006F76A0:
    /* cmp edx, MEM32(ebp + (-0x8)) */ /* 0x006F76A0: cmp edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F76AD; /* 0x006F76A3: jg 0x6f76ad */
L_006F76A5:
    /* cmp ecx, edi */ /* 0x006F76A5: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F76AD; /* 0x006F76A7: jl 0x6f76ad */
L_006F76A9:
    /* cmp ecx, ebx */ /* 0x006F76A9: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F76BC; /* 0x006F76AB: jle 0x6f76bc */
L_006F76AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F76AD: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x006F76AE: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F7694; /* 0x006F76B1: jl 0x6f7694 */
L_006F76B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F76B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F76B5: pop edi */
    esi = POP32_VAL(esp); /* 0x006F76B6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F76B7: pop ebx */
    esp = ebp; /* 0x006F76B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F76BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F76BB: ret  */
L_006F76BC:
    edi = POP32_VAL(esp); /* 0x006F76BC: pop edi */
    esi = POP32_VAL(esp); /* 0x006F76BD: pop esi */
    eax = 1; /* 0x006F76BE: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x006F76C3: pop ebx */
    esp = ebp; /* 0x006F76C4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F76C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F76C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F76D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F76D0u);

L_006F76D0:
    PUSH32(esp, ebp); /* 0x006F76D0: push ebp */
    ebp = esp; /* 0x006F76D1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006F76D3: push esi */
    PUSH32(esp, edi); /* 0x006F76D4: push edi */
    edi = edx; /* 0x006F76D5: mov edi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F76D7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx + 0x4); /* 0x006F76D9: mov edx, dword ptr [ecx + 4] */
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x006F76DC: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F76E8; /* 0x006F76DF: jge 0x6f76e8 */
L_006F76E1:
    esi = 2; /* 0x006F76E1: mov esi, 2 */
    goto L_006F76F8; /* 0x006F76E6: jmp 0x6f76f8 */
L_006F76E8:
    eax = MEM32(ecx + 0xC); /* 0x006F76E8: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006F76EB: add eax, edx */
    _flag_k = FK_ADD;
    edx = 1; /* 0x006F76ED: mov edx, 1 */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x006F76F2: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) { esi = edx; } /* 0x006F76F5: cmovge esi, edx */
L_006F76F8:
    edx = MEM32(ecx); /* 0x006F76F8: mov edx, dword ptr [ecx] */
    /* cmp edi, edx */ /* 0x006F76FA: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F7707; /* 0x006F76FC: jge 0x6f7707 */
L_006F76FE:
    _flag_a = (uint32_t)((esi | 4)); _flag_b = (uint32_t)((esi | 4));
    esi = esi | 4; /* 0x006F76FE: or esi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7701: pop edi */
    eax = esi; /* 0x006F7702: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F7704: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F7705: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7706: ret  */
L_006F7707:
    eax = MEM32(ecx + 0x8); /* 0x006F7707: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006F770A: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x006F770C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F7713; /* 0x006F770E: jl 0x6f7713 */
L_006F7710:
    _flag_a = (uint32_t)((esi | 8)); _flag_b = (uint32_t)((esi | 8));
    esi = esi | 8; /* 0x006F7710: or esi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F7713:
    edi = POP32_VAL(esp); /* 0x006F7713: pop edi */
    eax = esi; /* 0x006F7714: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F7716: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F7717: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7718: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7720u);

L_006F7720:
    PUSH32(esp, ebp); /* 0x006F7720: push ebp */
    ebp = esp; /* 0x006F7721: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006F7723: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x006F7726: push edi */
    edi = edx; /* 0x006F7727: mov edi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7729: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x006F772B: mov edx, ecx */
    MEM32(ebp + (-0x20)) = edi; /* 0x006F772D: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F7730: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F7733: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F7736: mov dword ptr [ebp - 8], eax */
    /* test edx, edx */ /* 0x006F7739: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7756; /* 0x006F773B: jne 0x6f7756 */
L_006F773D:
    PUSH32(esp, 0x008062D0u); /* 0x006F773D: push 0x8062d0 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F7742: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F7747: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F774C: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F774F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7751: pop edi */
    esp = ebp; /* 0x006F7752: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7754: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7755: ret  */
L_006F7756:
    /* test edi, edi */ /* 0x006F7756: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7773; /* 0x006F7758: jne 0x6f7773 */
L_006F775A:
    PUSH32(esp, 0x008062CCu); /* 0x006F775A: push 0x8062cc */
    PUSH32(esp, 0x00803FE8u); /* 0x006F775F: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F7764: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7769: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F776C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F776E: pop edi */
    esp = ebp; /* 0x006F776F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7771: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7772: ret  */
L_006F7773:
    PUSH32(esp, ebx); /* 0x006F7773: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006F7774: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x006F7777: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7795; /* 0x006F7779: jne 0x6f7795 */
L_006F777B:
    PUSH32(esp, 0x008062F0u); /* 0x006F777B: push 0x8062f0 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F7780: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F7785: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F778A: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F778D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F778F: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F7790: pop edi */
    esp = ebp; /* 0x006F7791: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7793: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7794: ret  */
L_006F7795:
    PUSH32(esp, esi); /* 0x006F7795: push esi */
    esi = MEM32(ebp + 0xC); /* 0x006F7796: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x006F7799: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F77B8; /* 0x006F779B: jne 0x6f77b8 */
L_006F779D:
    PUSH32(esp, 0x008062ECu); /* 0x006F779D: push 0x8062ec */
L_006F77A2:
    PUSH32(esp, 0x00803FE8u); /* 0x006F77A2: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F77A7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F77AC: add esp, 8 */
    _flag_k = FK_ADD;
L_006F77AF:
    esi = POP32_VAL(esp); /* 0x006F77AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F77B0: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F77B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F77B3: pop edi */
    esp = ebp; /* 0x006F77B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F77B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F77B7: ret  */
L_006F77B8:
    ecx = MEM32(ebp + 0x10); /* 0x006F77B8: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x006F77BB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F77C6; /* 0x006F77BD: jne 0x6f77c6 */
L_006F77BF:
    PUSH32(esp, 0x008062E8u); /* 0x006F77BF: push 0x8062e8 */
    RECOMP_BACKEDGE();
    goto L_006F77A2; /* 0x006F77C4: jmp 0x6f77a2 */
L_006F77C6:
    ecx = MEM32(edx + 0x8); /* 0x006F77C6: mov ecx, dword ptr [edx + 8] */
    /* test ecx, ecx */ /* 0x006F77C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F77AF; /* 0x006F77CB: jle 0x6f77af */
L_006F77CD:
    edx = MEM32(edx + 0xC); /* 0x006F77CD: mov edx, dword ptr [edx + 0xc] */
    /* test edx, edx */ /* 0x006F77D0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F77AF; /* 0x006F77D2: jle 0x6f77af */
L_006F77D4:
    eax = MEM32(edi); /* 0x006F77D4: mov eax, dword ptr [edi] */
    edi = MEM32(esi); /* 0x006F77D6: mov edi, dword ptr [esi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F77D8: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x006F77DB: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebx); /* 0x006F77DE: mov ebx, dword ptr [ebx] */
    esi = MEM32(eax); /* 0x006F77E0: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x24)) = esi; /* 0x006F77E2: mov dword ptr [ebp - 0x24], esi */
    esi = MEM32(ebp + (-0x10)); /* 0x006F77E5: mov esi, dword ptr [ebp - 0x10] */
    eax = MEM32(esi); /* 0x006F77E8: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F77EA: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x006F77EB: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x006F77ED: mov dword ptr [ebp - 0x18], eax */
    eax = esi; /* 0x006F77F0: mov eax, esi */
    ecx = MEM32(eax + 0x4); /* 0x006F77F2: mov ecx, dword ptr [eax + 4] */
    eax = edx + (-0x1); /* 0x006F77F5: lea eax, [edx - 1] */
    edx = MEM32(esi); /* 0x006F77F8: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x006F77FA: add eax, ecx */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x24)); /* 0x006F77FC: mov esi, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x14)) = eax; /* 0x006F77FF: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x006F7802: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, edx */ /* 0x006F7805: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F783C; /* 0x006F7807: jl 0x6f783c */
L_006F7809:
    edx = MEM32(ebp + (-0x18)); /* 0x006F7809: mov edx, dword ptr [ebp - 0x18] */
    /* cmp eax, edx */ /* 0x006F780C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F784B; /* 0x006F780E: jg 0x6f784b */
L_006F7810:
    eax = MEM32(ebp + (-0x10)); /* 0x006F7810: mov eax, dword ptr [ebp - 0x10] */
    /* cmp edi, MEM32(eax) */ /* 0x006F7813: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0xC)); /* 0x006F7815: mov eax, dword ptr [ebp - 0xc] */
    if (CMP_L(_flag_a, _flag_b)) goto L_006F7847; /* 0x006F7818: jl 0x6f7847 */
L_006F781A:
    /* cmp edi, edx */ /* 0x006F781A: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F7847; /* 0x006F781C: jg 0x6f7847 */
L_006F781E:
    /* cmp ebx, ecx */ /* 0x006F781E: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F7847; /* 0x006F7820: jl 0x6f7847 */
L_006F7822:
    /* cmp ebx, MEM32(ebp + (-0x14)) */ /* 0x006F7822: cmp ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F7847; /* 0x006F7825: jg 0x6f7847 */
L_006F7827:
    /* cmp esi, ecx */ /* 0x006F7827: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F7847; /* 0x006F7829: jl 0x6f7847 */
L_006F782B:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x006F782B: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F7847; /* 0x006F782E: jg 0x6f7847 */
L_006F7830:
    esi = POP32_VAL(esp); /* 0x006F7830: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7831: pop ebx */
    eax = 1; /* 0x006F7832: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006F7837: pop edi */
    esp = ebp; /* 0x006F7838: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F783A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F783B: ret  */
L_006F783C:
    /* cmp edi, edx */ /* 0x006F783C: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F77AF; /* 0x006F783E: jl 0x6f77af */
L_006F7844:
    edx = MEM32(ebp + (-0x18)); /* 0x006F7844: mov edx, dword ptr [ebp - 0x18] */
L_006F7847:
    /* cmp eax, edx */ /* 0x006F7847: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F7853; /* 0x006F7849: jle 0x6f7853 */
L_006F784B:
    /* cmp edi, edx */ /* 0x006F784B: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_006F77AF; /* 0x006F784D: jg 0x6f77af */
L_006F7853:
    /* cmp ebx, ecx */ /* 0x006F7853: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F785F; /* 0x006F7855: jge 0x6f785f */
L_006F7857:
    /* cmp esi, ecx */ /* 0x006F7857: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F77AF; /* 0x006F7859: jl 0x6f77af */
L_006F785F:
    /* cmp ebx, MEM32(ebp + (-0x14)) */ /* 0x006F785F: cmp ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F786D; /* 0x006F7862: jle 0x6f786d */
L_006F7864:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x006F7864: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_006F77AF; /* 0x006F7867: jg 0x6f77af */
L_006F786D:
    /* cmp ebx, esi */ /* 0x006F786D: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F78B4; /* 0x006F786F: jne 0x6f78b4 */
L_006F7871:
    ebx = MEM32(ebp + (-0x10)); /* 0x006F7871: mov ebx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebx); /* 0x006F7874: mov ecx, dword ptr [ebx] */
    /* cmp eax, ecx */ /* 0x006F7876: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F7881; /* 0x006F7878: jge 0x6f7881 */
L_006F787A:
    eax = MEM32(ebp + (-0x20)); /* 0x006F787A: mov eax, dword ptr [ebp - 0x20] */
    MEM32(eax) = ecx; /* 0x006F787D: mov dword ptr [eax], ecx */
    goto L_006F788A; /* 0x006F787F: jmp 0x6f788a */
L_006F7881:
    /* cmp eax, edx */ /* 0x006F7881: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F788A; /* 0x006F7883: jle 0x6f788a */
L_006F7885:
    eax = MEM32(ebp + (-0x20)); /* 0x006F7885: mov eax, dword ptr [ebp - 0x20] */
    MEM32(eax) = edx; /* 0x006F7888: mov dword ptr [eax], edx */
L_006F788A:
    /* cmp edi, ecx */ /* 0x006F788A: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F789F; /* 0x006F788C: jge 0x6f789f */
L_006F788E:
    eax = MEM32(ebp + 0xC); /* 0x006F788E: mov eax, dword ptr [ebp + 0xc] */
    esi = POP32_VAL(esp); /* 0x006F7891: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7892: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F7893: pop edi */
    MEM32(eax) = ecx; /* 0x006F7894: mov dword ptr [eax], ecx */
    eax = 1; /* 0x006F7896: mov eax, 1 */
    esp = ebp; /* 0x006F789B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F789D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F789E: ret  */
L_006F789F:
    /* cmp edi, edx */ /* 0x006F789F: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F78A8; /* 0x006F78A1: jle 0x6f78a8 */
L_006F78A3:
    eax = MEM32(ebp + 0xC); /* 0x006F78A3: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = edx; /* 0x006F78A6: mov dword ptr [eax], edx */
L_006F78A8:
    esi = POP32_VAL(esp); /* 0x006F78A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F78A9: pop ebx */
    eax = 1; /* 0x006F78AA: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006F78AF: pop edi */
    esp = ebp; /* 0x006F78B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F78B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F78B3: ret  */
L_006F78B4:
    /* cmp eax, edi */ /* 0x006F78B4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F78F9; /* 0x006F78B6: jne 0x6f78f9 */
L_006F78B8:
    eax = MEM32(ebp + (-0x14)); /* 0x006F78B8: mov eax, dword ptr [ebp - 0x14] */
    /* cmp ebx, ecx */ /* 0x006F78BB: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F78C6; /* 0x006F78BD: jge 0x6f78c6 */
L_006F78BF:
    edx = MEM32(ebp + 0x8); /* 0x006F78BF: mov edx, dword ptr [ebp + 8] */
    MEM32(edx) = ecx; /* 0x006F78C2: mov dword ptr [edx], ecx */
    goto L_006F78CF; /* 0x006F78C4: jmp 0x6f78cf */
L_006F78C6:
    /* cmp ebx, eax */ /* 0x006F78C6: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F78CF; /* 0x006F78C8: jle 0x6f78cf */
L_006F78CA:
    edx = MEM32(ebp + 0x8); /* 0x006F78CA: mov edx, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x006F78CD: mov dword ptr [edx], eax */
L_006F78CF:
    /* cmp esi, ecx */ /* 0x006F78CF: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F78E4; /* 0x006F78D1: jge 0x6f78e4 */
L_006F78D3:
    eax = MEM32(ebp + 0x10); /* 0x006F78D3: mov eax, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x006F78D6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F78D7: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F78D8: pop edi */
    MEM32(eax) = ecx; /* 0x006F78D9: mov dword ptr [eax], ecx */
    eax = 1; /* 0x006F78DB: mov eax, 1 */
    esp = ebp; /* 0x006F78E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F78E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F78E3: ret  */
L_006F78E4:
    /* cmp esi, eax */ /* 0x006F78E4: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F78ED; /* 0x006F78E6: jle 0x6f78ed */
L_006F78E8:
    ecx = MEM32(ebp + 0x10); /* 0x006F78E8: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x006F78EB: mov dword ptr [ecx], eax */
L_006F78ED:
    esi = POP32_VAL(esp); /* 0x006F78ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F78EE: pop ebx */
    eax = 1; /* 0x006F78EF: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006F78F4: pop edi */
    esp = ebp; /* 0x006F78F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F78F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F78F8: ret  */
L_006F78F9:
    ecx = MEM32(ebp + (-0x10)); /* 0x006F78F9: mov ecx, dword ptr [ebp - 0x10] */
    edx = eax; /* 0x006F78FC: mov edx, eax */
    PUSH32(esp, ebx); /* 0x006F78FE: push ebx */
    RECOMP_CALL(sub_006F76D0); /* 0x006F78FF: call 0x6f76d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F7904: push esi */
    edx = edi; /* 0x006F7905: mov edx, edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x006F7907: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_006F76D0); /* 0x006F790A: call 0x6f76d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F790F: add esp, 8 */
    _flag_k = FK_ADD;
L_006F7912:
    ecx = eax; /* 0x006F7912: mov ecx, eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x006F7914: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x006F7917: mov dword ptr [ebp - 0x24], ecx */
    ebx = ebx; /* 0x006F791A: lea ebx, [ebx] */
L_006F7920:
    /* test eax, eax */ /* 0x006F7920: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F792C; /* 0x006F7922: jne 0x6f792c */
L_006F7924:
    /* test ecx, ecx */ /* 0x006F7924: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7A81; /* 0x006F7926: je 0x6f7a81 */
L_006F792C:
    /* test eax, ecx */ /* 0x006F792C: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F77AF; /* 0x006F792E: jne 0x6f77af */
L_006F7934:
    /* test eax, eax */ /* 0x006F7934: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F79ED; /* 0x006F7936: je 0x6f79ed */
L_006F793C:
    /* test LO8(eax), 2 */ /* 0x006F793C: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7962; /* 0x006F793E: je 0x6f7962 */
L_006F7940:
    eax = MEM32(ebp + (-0x10)); /* 0x006F7940: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x006F7943: mov ecx, dword ptr [eax + 4] */
    eax = edi; /* 0x006F7946: mov eax, edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F7948: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x006F794B: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xC)); /* 0x006F794D: sub eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
L_006F7950:
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006F7950: imul eax, ecx */
    ecx = esi; /* 0x006F7953: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x006F7955: sub ecx, ebx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F7957: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x006F7958: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x006F795A: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F795D: mov dword ptr [ebp - 4], eax */
    goto L_006F79CC; /* 0x006F7960: jmp 0x6f79cc */
L_006F7962:
    /* test LO8(eax), 1 */ /* 0x006F7962: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7977; /* 0x006F7964: je 0x6f7977 */
L_006F7966:
    ecx = MEM32(ebp + (-0x14)); /* 0x006F7966: mov ecx, dword ptr [ebp - 0x14] */
    eax = ecx; /* 0x006F7969: mov eax, ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F796B: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x006F796E: sub eax, ebx */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x006F7970: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x006F7972: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_006F7950; /* 0x006F7975: jmp 0x6f7950 */
L_006F7977:
    /* test LO8(eax), 4 */ /* 0x006F7977: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F79A0; /* 0x006F7979: je 0x6f79a0 */
L_006F797B:
    eax = MEM32(ebp + (-0x10)); /* 0x006F797B: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x006F797E: mov ecx, dword ptr [eax] */
    eax = esi; /* 0x006F7980: mov eax, esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F7982: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x006F7985: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x006F7987: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006F798A: imul eax, ecx */
    ecx = edi; /* 0x006F798D: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x006F798F: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F7992: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x006F7993: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = ebx + eax; /* 0x006F7995: lea ecx, [ebx + eax] */
    eax = MEM32(ebp + (-0x4)); /* 0x006F7998: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F799B: mov dword ptr [ebp - 8], ecx */
    goto L_006F79CF; /* 0x006F799E: jmp 0x6f79cf */
L_006F79A0:
    /* test LO8(eax), 8 */ /* 0x006F79A0: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F79C9; /* 0x006F79A2: je 0x6f79c9 */
L_006F79A4:
    ecx = MEM32(ebp + (-0x18)); /* 0x006F79A4: mov ecx, dword ptr [ebp - 0x18] */
    eax = ecx; /* 0x006F79A7: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xC)); /* 0x006F79A9: sub eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F79AC: mov dword ptr [ebp - 4], ecx */
    ecx = esi; /* 0x006F79AF: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x006F79B1: sub ecx, ebx */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006F79B3: imul eax, ecx */
    ecx = edi; /* 0x006F79B6: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x006F79B8: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F79BB: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x006F79BC: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = ebx + eax; /* 0x006F79BE: lea ecx, [ebx + eax] */
    eax = MEM32(ebp + (-0x4)); /* 0x006F79C1: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F79C4: mov dword ptr [ebp - 8], ecx */
    goto L_006F79CF; /* 0x006F79C7: jmp 0x6f79cf */
L_006F79C9:
    eax = MEM32(ebp + (-0x4)); /* 0x006F79C9: mov eax, dword ptr [ebp - 4] */
L_006F79CC:
    ecx = MEM32(ebp + (-0x8)); /* 0x006F79CC: mov ecx, dword ptr [ebp - 8] */
L_006F79CF:
    PUSH32(esp, ecx); /* 0x006F79CF: push ecx */
    ebx = ecx; /* 0x006F79D0: mov ebx, ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F79D2: mov dword ptr [ebp - 0xc], eax */
    ecx = MEM32(ebp + (-0x10)); /* 0x006F79D5: mov ecx, dword ptr [ebp - 0x10] */
    edx = eax; /* 0x006F79D8: mov edx, eax */
    RECOMP_CALL(sub_006F76D0); /* 0x006F79DA: call 0x6f76d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x006F79DF: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F79E2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x006F79E5: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_BACKEDGE();
    goto L_006F7920; /* 0x006F79E8: jmp 0x6f7920 */
L_006F79ED:
    /* test LO8(ecx), 2 */ /* 0x006F79ED: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F79FA; /* 0x006F79F0: je 0x6f79fa */
L_006F79F2:
    eax = MEM32(ebp + (-0x10)); /* 0x006F79F2: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x006F79F5: mov ecx, dword ptr [eax + 4] */
    goto L_006F7A02; /* 0x006F79F8: jmp 0x6f7a02 */
L_006F79FA:
    /* test LO8(ecx), 1 */ /* 0x006F79FA: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7A1C; /* 0x006F79FD: je 0x6f7a1c */
L_006F79FF:
    ecx = MEM32(ebp + (-0x14)); /* 0x006F79FF: mov ecx, dword ptr [ebp - 0x14] */
L_006F7A02:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0xC)); /* 0x006F7A02: sub edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x006F7A05: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x006F7A07: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F7A09: mov dword ptr [ebp - 8], ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x006F7A0C: imul eax, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x006F7A0F: sub esi, ebx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F7A11: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x006F7A12: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x006F7A14: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F7A17: mov dword ptr [ebp - 4], eax */
    goto L_006F7A6A; /* 0x006F7A1A: jmp 0x6f7a6a */
L_006F7A1C:
    /* test LO8(ecx), 4 */ /* 0x006F7A1C: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7A41; /* 0x006F7A1F: je 0x6f7a41 */
L_006F7A21:
    eax = MEM32(ebp + (-0x10)); /* 0x006F7A21: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x006F7A24: sub esi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0xC)); /* 0x006F7A26: sub edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x006F7A29: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F7A2B: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x006F7A2E: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x006F7A31: imul esi, ecx */
    eax = esi; /* 0x006F7A34: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F7A36: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x006F7A37: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = ebx + eax; /* 0x006F7A39: lea ecx, [ebx + eax] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F7A3C: mov dword ptr [ebp - 8], ecx */
    goto L_006F7A67; /* 0x006F7A3F: jmp 0x6f7a67 */
L_006F7A41:
    /* test LO8(ecx), 8 */ /* 0x006F7A41: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7A64; /* 0x006F7A44: je 0x6f7a64 */
L_006F7A46:
    ecx = MEM32(ebp + (-0x18)); /* 0x006F7A46: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x006F7A49: sub esi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0xC)); /* 0x006F7A4B: sub edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x006F7A4E: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xC)); /* 0x006F7A50: sub eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x006F7A53: imul eax, esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006F7A56: mov dword ptr [ebp - 4], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F7A59: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x006F7A5A: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = ebx + eax; /* 0x006F7A5C: lea ecx, [ebx + eax] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F7A5F: mov dword ptr [ebp - 8], ecx */
    goto L_006F7A67; /* 0x006F7A62: jmp 0x6f7a67 */
L_006F7A64:
    ecx = MEM32(ebp + (-0x8)); /* 0x006F7A64: mov ecx, dword ptr [ebp - 8] */
L_006F7A67:
    eax = MEM32(ebp + (-0x4)); /* 0x006F7A67: mov eax, dword ptr [ebp - 4] */
L_006F7A6A:
    PUSH32(esp, ecx); /* 0x006F7A6A: push ecx */
    esi = ecx; /* 0x006F7A6B: mov esi, ecx */
    edx = eax; /* 0x006F7A6D: mov edx, eax */
    ecx = MEM32(ebp + (-0x10)); /* 0x006F7A6F: mov ecx, dword ptr [ebp - 0x10] */
    edi = eax; /* 0x006F7A72: mov edi, eax */
    RECOMP_CALL(sub_006F76D0); /* 0x006F7A74: call 0x6f76d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F7A79: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006F7912; /* 0x006F7A7C: jmp 0x6f7912 */
L_006F7A81:
    ecx = MEM32(ebp + (-0x20)); /* 0x006F7A81: mov ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0xC)); /* 0x006F7A84: mov eax, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x006F7A87: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x006F7A8A: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0xC); /* 0x006F7A8C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx) = ebx; /* 0x006F7A8F: mov dword ptr [edx], ebx */
    MEM32(eax) = edi; /* 0x006F7A91: mov dword ptr [eax], edi */
    eax = MEM32(ebp + 0x10); /* 0x006F7A93: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = esi; /* 0x006F7A96: mov dword ptr [eax], esi */
    eax = 1; /* 0x006F7A98: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x006F7A9D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7A9E: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F7A9F: pop edi */
    esp = ebp; /* 0x006F7AA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7AA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7AA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7AB0u);

L_006F7AB0:
    PUSH32(esp, ebp); /* 0x006F7AB0: push ebp */
    ebp = esp; /* 0x006F7AB1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F7AB3: push ecx */
    PUSH32(esp, ebx); /* 0x006F7AB4: push ebx */
    eax = ecx; /* 0x006F7AB5: mov eax, ecx */
    ebx = edx; /* 0x006F7AB7: mov ebx, edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F7AB9: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006F7ABC: push esi */
    PUSH32(esp, edi); /* 0x006F7ABD: push edi */
    /* cmp eax, 1 */ /* 0x006F7ABE: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F7ADE; /* 0x006F7AC1: jge 0x6f7ade */
L_006F7AC3:
    PUSH32(esp, 0x008062E0u); /* 0x006F7AC3: push 0x8062e0 */
L_006F7AC8:
    PUSH32(esp, 0x00803FE8u); /* 0x006F7AC8: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F7ACD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7AD2: add esp, 8 */
    _flag_k = FK_ADD;
L_006F7AD5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7AD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7AD7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7AD8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7AD9: pop ebx */
    esp = ebp; /* 0x006F7ADA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7ADC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7ADD: ret  */
L_006F7ADE:
    /* cmp ebx, 1 */ /* 0x006F7ADE: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F7AEA; /* 0x006F7AE1: jge 0x6f7aea */
L_006F7AE3:
    PUSH32(esp, 0x00806310u); /* 0x006F7AE3: push 0x806310 */
    RECOMP_BACKEDGE();
    goto L_006F7AC8; /* 0x006F7AE8: jmp 0x6f7ac8 */
L_006F7AEA:
    edi = MEM32(ebp + 0xC); /* 0x006F7AEA: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x006F7AED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7AF8; /* 0x006F7AEF: jne 0x6f7af8 */
L_006F7AF1:
    PUSH32(esp, 0x00806308u); /* 0x006F7AF1: push 0x806308 */
    RECOMP_BACKEDGE();
    goto L_006F7AC8; /* 0x006F7AF6: jmp 0x6f7ac8 */
L_006F7AF8:
    esi = MEM32(ebp + 0x10); /* 0x006F7AF8: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x006F7AFB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7B06; /* 0x006F7AFD: jne 0x6f7b06 */
L_006F7AFF:
    PUSH32(esp, 0x00806300u); /* 0x006F7AFF: push 0x806300 */
    RECOMP_BACKEDGE();
    goto L_006F7AC8; /* 0x006F7B04: jmp 0x6f7ac8 */
L_006F7B06:
    ecx = MEM32(ebp + 0x8); /* 0x006F7B06: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 1 */ /* 0x006F7B09: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F7B15; /* 0x006F7B0C: jge 0x6f7b15 */
L_006F7B0E:
    PUSH32(esp, 0x008062F4u); /* 0x006F7B0E: push 0x8062f4 */
    RECOMP_BACKEDGE();
    goto L_006F7AC8; /* 0x006F7B13: jmp 0x6f7ac8 */
L_006F7B15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7B15: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006F7B17: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F7B4C; /* 0x006F7B19: jle 0x6f7b4c */
L_006F7B1B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x006F7B1B: add edi, 0xc */
    _flag_k = FK_ADD;
    edi = edi; /* 0x006F7B1E: mov edi, edi */
L_006F7B20:
    esi = MEM32(edi + (-0x8)); /* 0x006F7B20: mov esi, dword ptr [edi - 8] */
    ecx = MEM32(edi); /* 0x006F7B23: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006F7B25: add ecx, esi */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F7B27: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F7B2F; /* 0x006F7B29: jns 0x6f7b2f */
L_006F7B2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F7B2B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F7B34; /* 0x006F7B2D: jmp 0x6f7b34 */
L_006F7B2F:
    /* cmp esi, edx */ /* 0x006F7B2F: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) { edx = esi; } /* 0x006F7B31: cmovl edx, esi */
L_006F7B34:
    /* cmp ecx, ebx */ /* 0x006F7B34: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F7B3C; /* 0x006F7B36: jle 0x6f7b3c */
L_006F7B38:
    eax = ebx; /* 0x006F7B38: mov eax, ebx */
    goto L_006F7B41; /* 0x006F7B3A: jmp 0x6f7b41 */
L_006F7B3C:
    /* cmp ecx, eax */ /* 0x006F7B3C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F7B3E: cmovg eax, ecx */
L_006F7B41:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x006F7B41: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x006F7B44: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F7B20; /* 0x006F7B47: jne 0x6f7b20 */
L_006F7B49:
    esi = MEM32(ebp + 0x10); /* 0x006F7B49: mov esi, dword ptr [ebp + 0x10] */
L_006F7B4C:
    /* cmp eax, edx */ /* 0x006F7B4C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F7AD5; /* 0x006F7B4E: jle 0x6f7ad5 */
L_006F7B50:
    ecx = MEM32(ebp + (-0x4)); /* 0x006F7B50: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F7B53: sub eax, edx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006F7B55: pop edi */
    MEM32(esi + 0xC) = eax; /* 0x006F7B56: mov dword ptr [esi + 0xc], eax */
    eax = 1; /* 0x006F7B59: mov eax, 1 */
    MEM32(esi) = 0; /* 0x006F7B5E: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = edx; /* 0x006F7B64: mov dword ptr [esi + 4], edx */
    MEM32(esi + 0x8) = ecx; /* 0x006F7B67: mov dword ptr [esi + 8], ecx */
    esi = POP32_VAL(esp); /* 0x006F7B6A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7B6B: pop ebx */
    esp = ebp; /* 0x006F7B6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7B6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7B6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7B70u);

L_006F7B70:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC44C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F7B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7B80u);

L_006F7B80:
    PUSH32(esp, ebp); /* 0x006F7B80: push ebp */
    ebp = esp; /* 0x006F7B81: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x006F7B83: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx), 0x200u */ /* 0x006F7B86: cmp dword ptr [ecx], 0x200 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7BA3; /* 0x006F7B8C: jne 0x6f7ba3 */
L_006F7B8E:
    /* cmp MEM8(ecx + 0xC), 5 */ /* 0x006F7B8E: cmp byte ptr [ecx + 0xc], 5 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7BA3; /* 0x006F7B92: jne 0x6f7ba3 */
L_006F7B94:
    eax = MEM32(ebp + 0x8); /* 0x006F7B94: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x8); /* 0x006F7B97: mov ecx, dword ptr [ecx + 8] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x006F7B9A: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7BA3; /* 0x006F7B9D: jne 0x6f7ba3 */
L_006F7B9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7B9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F7BA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7BA2: ret  */
L_006F7BA3:
    eax = 1; /* 0x006F7BA3: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x006F7BA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7BA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7BB0u);

L_006F7BB0:
    PUSH32(esp, ebp); /* 0x006F7BB0: push ebp */
    ebp = esp; /* 0x006F7BB1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x006F7BB3: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx), 0x200u */ /* 0x006F7BB6: cmp dword ptr [ecx], 0x200 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7BD3; /* 0x006F7BBC: jne 0x6f7bd3 */
L_006F7BBE:
    /* cmp MEM8(ecx + 0xC), 6 */ /* 0x006F7BBE: cmp byte ptr [ecx + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7BD3; /* 0x006F7BC2: jne 0x6f7bd3 */
L_006F7BC4:
    eax = MEM32(ebp + 0x8); /* 0x006F7BC4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x8); /* 0x006F7BC7: mov ecx, dword ptr [ecx + 8] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x006F7BCA: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7BD3; /* 0x006F7BCD: jne 0x6f7bd3 */
L_006F7BCF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7BCF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F7BD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7BD2: ret  */
L_006F7BD3:
    eax = 1; /* 0x006F7BD3: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x006F7BD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7BD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7BE0u);

L_006F7BE0:
    PUSH32(esp, ebp); /* 0x006F7BE0: push ebp */
    ebp = esp; /* 0x006F7BE1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x006F7BE3: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx), 0x200u */ /* 0x006F7BE6: cmp dword ptr [ecx], 0x200 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7C03; /* 0x006F7BEC: jne 0x6f7c03 */
L_006F7BEE:
    /* cmp MEM8(ecx + 0xC), 4 */ /* 0x006F7BEE: cmp byte ptr [ecx + 0xc], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7C03; /* 0x006F7BF2: jne 0x6f7c03 */
L_006F7BF4:
    eax = MEM32(ebp + 0x8); /* 0x006F7BF4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x8); /* 0x006F7BF7: mov ecx, dword ptr [ecx + 8] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x006F7BFA: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7C03; /* 0x006F7BFD: jne 0x6f7c03 */
L_006F7BFF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7BFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F7C01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7C02: ret  */
L_006F7C03:
    eax = 1; /* 0x006F7C03: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x006F7C08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7C09: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7C10u);

L_006F7C10:
    PUSH32(esp, ebp); /* 0x006F7C10: push ebp */
    ebp = esp; /* 0x006F7C11: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x006F7C13: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx), 0x200u */ /* 0x006F7C16: cmp dword ptr [ecx], 0x200 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7C33; /* 0x006F7C1C: jne 0x6f7c33 */
L_006F7C1E:
    /* cmp MEM8(ecx + 0xC), 3 */ /* 0x006F7C1E: cmp byte ptr [ecx + 0xc], 3 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7C33; /* 0x006F7C22: jne 0x6f7c33 */
L_006F7C24:
    eax = MEM32(ebp + 0x8); /* 0x006F7C24: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x8); /* 0x006F7C27: mov ecx, dword ptr [ecx + 8] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x006F7C2A: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7C33; /* 0x006F7C2D: jne 0x6f7c33 */
L_006F7C2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7C2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F7C31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7C32: ret  */
L_006F7C33:
    eax = 1; /* 0x006F7C33: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x006F7C38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7C39: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7C40u);

L_006F7C40:
    PUSH32(esp, ebp); /* 0x006F7C40: push ebp */
    ebp = esp; /* 0x006F7C41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F7C43: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x006F7C46: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F7C49: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F7C4E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x44) = eax; /* 0x006F7C50: mov dword ptr [esp + 0x44], eax */
    PUSH32(esp, esi); /* 0x006F7C54: push esi */
    esi = ecx; /* 0x006F7C55: mov esi, ecx */
    MEM8(esp + 0xB) = (uint8_t)(LO8(edx)); /* 0x006F7C57: mov byte ptr [esp + 0xb], dl */
    PUSH32(esp, edi); /* 0x006F7C5B: push edi */
    /* test esi, esi */ /* 0x006F7C5C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7C73; /* 0x006F7C5E: jne 0x6f7c73 */
L_006F7C60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7C60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F7C62: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7C63: pop esi */
    ecx = MEM32(esp + 0x44); /* 0x006F7C64: mov ecx, dword ptr [esp + 0x44] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F7C68: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F7C6A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F7C6F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7C71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7C72: ret  */
L_006F7C73:
    edi = MEM32(ebp + 0xC); /* 0x006F7C73: mov edi, dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO8(edx); /* 0x006F7C76: movzx eax, dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F7C79: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0xCu */ /* 0x006F7C7A: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F7E2F; /* 0x006F7C7D: ja 0x6f7e2f */
L_006F7C83:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6F7EE4)); goto _ljump; }
L_006F7C8A:
    eax = MEM32(esi + 0x30); /* 0x006F7C8A: mov eax, dword ptr [esi + 0x30] */
    /* test LO8(eax), 4 */ /* 0x006F7C8D: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7C8F: jne 0x6f7c60 */
L_006F7C91:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF7u);
    eax = eax & 0xFFFFFFF7u; /* 0x006F7C91: and eax, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x006F7C94: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7C97: mov dword ptr [esi + 0x30], eax */
    /* test LO8(eax), 1 */ /* 0x006F7C9A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7E2F; /* 0x006F7C9C: je 0x6f7e2f */
L_006F7CA2:
    /* test LO8(eax), 4 */ /* 0x006F7CA2: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7E2F; /* 0x006F7CA4: je 0x6f7e2f */
L_006F7CAA:
    /* test LO8(eax), 0x40u */ /* 0x006F7CAA: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7E2F; /* 0x006F7CAC: jne 0x6f7e2f */
L_006F7CB2:
    edx = 1; /* 0x006F7CB2: mov edx, 1 */
    RECOMP_CALL(sub_006EB450); /* 0x006F7CB7: call 0x6eb450 */
    RECOMP_FLAGS_IN();
    goto L_006F7E2B; /* 0x006F7CBC: jmp 0x6f7e2b */
L_006F7CC1:
    eax = MEM32(esi + 0x30); /* 0x006F7CC1: mov eax, dword ptr [esi + 0x30] */
    /* test LO8(eax), 4 */ /* 0x006F7CC4: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7CC6: je 0x6f7c60 */
L_006F7CC8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFBu);
    eax = eax & 0xFFFFFFFBu; /* 0x006F7CC8: and eax, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F7CCB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x006F7CCD: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7CD0: mov dword ptr [esi + 0x30], eax */
    RECOMP_CALL(sub_006EB450); /* 0x006F7CD3: call 0x6eb450 */
    RECOMP_FLAGS_IN();
    goto L_006F7E2B; /* 0x006F7CD8: jmp 0x6f7e2b */
L_006F7CDD:
    ecx = MEM32(ebp + 0x8); /* 0x006F7CDD: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x006F7CE0: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006F7CE2: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1FFF0000u */ /* 0x006F7CE7: cmp eax, 0x1fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7CEC: je 0x6f7c60 */
L_006F7CF2:
    eax = edi; /* 0x006F7CF2: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006F7CF4: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1FFF0000u */ /* 0x006F7CF9: cmp eax, 0x1fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7CFE: je 0x6f7c60 */
L_006F7D04:
    /* test MEM8(esi + 0x30), 1 */ /* 0x006F7D04: test byte ptr [esi + 0x30], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7D10; /* 0x006F7D08: jne 0x6f7d10 */
L_006F7D0A:
    MEM32(esi + 0x38) = ecx; /* 0x006F7D0A: mov dword ptr [esi + 0x38], ecx */
    MEM32(esi + 0x3C) = edi; /* 0x006F7D0D: mov dword ptr [esi + 0x3c], edi */
L_006F7D10:
    /* cmp ecx, MEM32(esi + 0x10) */ /* 0x006F7D10: cmp ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7D1E; /* 0x006F7D13: jne 0x6f7d1e */
L_006F7D15:
    /* cmp edi, MEM32(esi + 0x14) */ /* 0x006F7D15: cmp edi, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7D18: je 0x6f7c60 */
L_006F7D1E:
    MEM32(esi + 0x10) = ecx; /* 0x006F7D1E: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x14) = edi; /* 0x006F7D21: mov dword ptr [esi + 0x14], edi */
    goto L_006F7E32; /* 0x006F7D24: jmp 0x6f7e32 */
L_006F7D29:
    /* test MEM8(esi + 0x30), 1 */ /* 0x006F7D29: test byte ptr [esi + 0x30], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x8); /* 0x006F7D2D: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7D38; /* 0x006F7D30: jne 0x6f7d38 */
L_006F7D32:
    MEM32(esi + 0x40) = eax; /* 0x006F7D32: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = edi; /* 0x006F7D35: mov dword ptr [esi + 0x44], edi */
L_006F7D38:
    /* cmp eax, MEM32(esi + 0x18) */ /* 0x006F7D38: cmp eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7D46; /* 0x006F7D3B: jne 0x6f7d46 */
L_006F7D3D:
    /* cmp edi, MEM32(esi + 0x1C) */ /* 0x006F7D3D: cmp edi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7D40: je 0x6f7c60 */
L_006F7D46:
    MEM32(esi + 0x18) = eax; /* 0x006F7D46: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = edi; /* 0x006F7D49: mov dword ptr [esi + 0x1c], edi */
    RECOMP_CALL(sub_006EC130); /* 0x006F7D4C: call 0x6ec130 */
    RECOMP_FLAGS_IN();
    goto L_006F7E2B; /* 0x006F7D51: jmp 0x6f7e2b */
L_006F7D56:
    eax = MEM32(esi + 0x30); /* 0x006F7D56: mov eax, dword ptr [esi + 0x30] */
    /* test LO8(eax), 0x40u */ /* 0x006F7D59: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7D5B: jne 0x6f7c60 */
L_006F7D61:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    eax = eax & 0xFFFFFF7Fu; /* 0x006F7D61: and eax, 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F7D66: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x40u)); _flag_b = (uint32_t)((eax | 0x40u));
    eax = eax | 0x40u; /* 0x006F7D68: or eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7D6B: mov dword ptr [esi + 0x30], eax */
    RECOMP_CALL(sub_006EB450); /* 0x006F7D6E: call 0x6eb450 */
    RECOMP_FLAGS_IN();
    goto L_006F7E2B; /* 0x006F7D73: jmp 0x6f7e2b */
L_006F7D78:
    eax = MEM32(esi + 0x30); /* 0x006F7D78: mov eax, dword ptr [esi + 0x30] */
    /* test LO8(eax), LO8(eax) */ /* 0x006F7D7B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F7C60; /* 0x006F7D7D: js 0x6f7c60 */
L_006F7D83:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFBFu);
    eax = eax & 0xFFFFFFBFu; /* 0x006F7D83: and eax, 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80u)); _flag_b = (uint32_t)((eax | 0x80u));
    eax = eax | 0x80u; /* 0x006F7D86: or eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7D8B: mov dword ptr [esi + 0x30], eax */
    goto L_006F7E2F; /* 0x006F7D8E: jmp 0x6f7e2f */
L_006F7D93:
    eax = MEM32(esi + 0x30); /* 0x006F7D93: mov eax, dword ptr [esi + 0x30] */
    /* test LO8(eax), 0xC0u */ /* 0x006F7D96: test al, 0xc0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7D98: je 0x6f7c60 */
L_006F7D9E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF3Fu);
    eax = eax & 0xFFFFFF3Fu; /* 0x006F7D9E: and eax, 0xffffff3f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7DA3: mov dword ptr [esi + 0x30], eax */
    RECOMP_CALL(sub_006EC150); /* 0x006F7DA6: call 0x6ec150 */
    RECOMP_FLAGS_IN();
    goto L_006F7E2B; /* 0x006F7DAB: jmp 0x6f7e2b */
L_006F7DAD:
    eax = MEM32(esi + 0x30); /* 0x006F7DAD: mov eax, dword ptr [esi + 0x30] */
    /* test eax, 0x400u */ /* 0x006F7DB0: test eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7DB5: jne 0x6f7c60 */
L_006F7DBB:
    _flag_a = (uint32_t)((eax | 0x400u)); _flag_b = (uint32_t)((eax | 0x400u));
    eax = eax | 0x400u; /* 0x006F7DBB: or eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7DC0: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(0x87CBCC); /* 0x006F7DC3: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x90); /* 0x006F7DC8: mov ecx, dword ptr [eax + 0x90] */
    /* test ecx, ecx */ /* 0x006F7DCE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7E2F; /* 0x006F7DD0: je 0x6f7e2f */
L_006F7DD2:
    PUSH32(esp, esi); /* 0x006F7DD2: push esi */
    PUSH32(esp, eax); /* 0x006F7DD3: push eax */
    RECOMP_ICALL(ecx); /* 0x006F7DD4: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7DD6: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_006F7E2B; /* 0x006F7DD9: jmp 0x6f7e2b */
L_006F7DDB:
    eax = MEM32(esi + 0x30); /* 0x006F7DDB: mov eax, dword ptr [esi + 0x30] */
    /* test eax, 0x400u */ /* 0x006F7DDE: test eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7DE3: je 0x6f7c60 */
L_006F7DE9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFBFFu);
    eax = eax & 0xFFFFFBFFu; /* 0x006F7DE9: and eax, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7DEE: mov dword ptr [esi + 0x30], eax */
    goto L_006F7E2F; /* 0x006F7DF1: jmp 0x6f7e2f */
L_006F7DF3:
    eax = MEM32(esi + 0x30); /* 0x006F7DF3: mov eax, dword ptr [esi + 0x30] */
    /* test eax, 0x200u */ /* 0x006F7DF6: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7DFB: jne 0x6f7c60 */
L_006F7E01:
    _flag_a = (uint32_t)((eax | 0x200u)); _flag_b = (uint32_t)((eax | 0x200u));
    eax = eax | 0x200u; /* 0x006F7E01: or eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7E06: mov dword ptr [esi + 0x30], eax */
    RECOMP_CALL(sub_006EC170); /* 0x006F7E09: call 0x6ec170 */
    RECOMP_FLAGS_IN();
    goto L_006F7E2B; /* 0x006F7E0E: jmp 0x6f7e2b */
L_006F7E10:
    eax = MEM32(esi + 0x30); /* 0x006F7E10: mov eax, dword ptr [esi + 0x30] */
    /* test eax, 0x200u */ /* 0x006F7E13: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7C60; /* 0x006F7E18: je 0x6f7c60 */
L_006F7E1E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFDFFu);
    eax = eax & 0xFFFFFDFFu; /* 0x006F7E1E: and eax, 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F7E23: mov dword ptr [esi + 0x30], eax */
    RECOMP_CALL(sub_006EC1D0); /* 0x006F7E26: call 0x6ec1d0 */
    RECOMP_FLAGS_IN();
L_006F7E2B:
    SET_LO8(edx, MEM8(esp + 0xF)); /* 0x006F7E2B: mov dl, byte ptr [esp + 0xf] */
L_006F7E2F:
    ecx = MEM32(ebp + 0x8); /* 0x006F7E2F: mov ecx, dword ptr [ebp + 8] */
L_006F7E32:
    eax = MEM32(0x925478); /* 0x006F7E32: mov eax, dword ptr [0x925478] */
    MEM32(esp + 0x10) = 0; /* 0x006F7E37: mov dword ptr [esp + 0x10], 0 */
    /* test eax, eax */ /* 0x006F7E3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7E48; /* 0x006F7E41: je 0x6f7e48 */
L_006F7E43:
    /* test MEM8(eax), 1 */ /* 0x006F7E43: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7EAE; /* 0x006F7E46: jne 0x6f7eae */
L_006F7E48:
    eax = MEM32(esi + 0x4); /* 0x006F7E48: mov eax, dword ptr [esi + 4] */
    MEM32(esp + 0x14) = 0x200u; /* 0x006F7E4B: mov dword ptr [esp + 0x14], 0x200 */
    MEM8(esp + 0x20) = (uint8_t)(LO8(edx)); /* 0x006F7E53: mov byte ptr [esp + 0x20], dl */
    MEM32(esp + 0x24) = ecx; /* 0x006F7E57: mov dword ptr [esp + 0x24], ecx */
    MEM32(esp + 0x28) = edi; /* 0x006F7E5B: mov dword ptr [esp + 0x28], edi */
    MEM32(esp + 0x1C) = eax; /* 0x006F7E5F: mov dword ptr [esp + 0x1c], eax */
    /* cmp LO8(edx), 5 */ /* 0x006F7E63: cmp dl, 5 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7E6F; /* 0x006F7E66: jne 0x6f7e6f */
L_006F7E68:
    ecx = 0x006F7B80u; /* 0x006F7E68: mov ecx, 0x6f7b80 */
    goto L_006F7E91; /* 0x006F7E6D: jmp 0x6f7e91 */
L_006F7E6F:
    /* cmp LO8(edx), 6 */ /* 0x006F7E6F: cmp dl, 6 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7E7B; /* 0x006F7E72: jne 0x6f7e7b */
L_006F7E74:
    ecx = 0x006F7BB0u; /* 0x006F7E74: mov ecx, 0x6f7bb0 */
    goto L_006F7E91; /* 0x006F7E79: jmp 0x6f7e91 */
L_006F7E7B:
    /* cmp LO8(edx), 4 */ /* 0x006F7E7B: cmp dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7E87; /* 0x006F7E7E: jne 0x6f7e87 */
L_006F7E80:
    ecx = 0x006F7BE0u; /* 0x006F7E80: mov ecx, 0x6f7be0 */
    goto L_006F7E91; /* 0x006F7E85: jmp 0x6f7e91 */
L_006F7E87:
    /* cmp LO8(edx), 3 */ /* 0x006F7E87: cmp dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7E9A; /* 0x006F7E8A: jne 0x6f7e9a */
L_006F7E8C:
    ecx = 0x006F7C10u; /* 0x006F7E8C: mov ecx, 0x6f7c10 */
L_006F7E91:
    edx = esp + 0x14; /* 0x006F7E91: lea edx, [esp + 0x14] */
    RECOMP_CALL(sub_006ED420); /* 0x006F7E95: call 0x6ed420 */
    RECOMP_FLAGS_IN();
L_006F7E9A:
    ecx = esp + 0x14; /* 0x006F7E9A: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F7E9E: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F7EA3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F7EA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F7EA7: setg cl */
    MEM32(esp + 0x10) = ecx; /* 0x006F7EAA: mov dword ptr [esp + 0x10], ecx */
L_006F7EAE:
    /* cmp MEM8(esp + 0xF), 0xEu */ /* 0x006F7EAE: cmp byte ptr [esp + 0xf], 0xe */
    _flag_a = (uint32_t)(MEM8(esp + 0xF)) << 24; _flag_b = (uint32_t)(0xEu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7ECC; /* 0x006F7EB3: jne 0x6f7ecc */
L_006F7EB5:
    /* cmp MEM32(esi + 0x94), 0 */ /* 0x006F7EB5: cmp dword ptr [esi + 0x94], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x94)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7ECC; /* 0x006F7EBC: jne 0x6f7ecc */
L_006F7EBE:
    /* cmp MEM32(esi + 0x98), 0 */ /* 0x006F7EBE: cmp dword ptr [esi + 0x98], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F7ECC; /* 0x006F7EC5: jne 0x6f7ecc */
L_006F7EC7:
    RECOMP_CALL(sub_006FCF40); /* 0x006F7EC7: call 0x6fcf40 */
    RECOMP_FLAGS_IN();
L_006F7ECC:
    ecx = MEM32(esp + 0x4C); /* 0x006F7ECC: mov ecx, dword ptr [esp + 0x4c] */
    eax = MEM32(esp + 0x10); /* 0x006F7ED0: mov eax, dword ptr [esp + 0x10] */
    edi = POP32_VAL(esp); /* 0x006F7ED4: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7ED5: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F7ED6: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F7ED8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F7EDD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F7EDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7EE0: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006F7C8Au: goto L_006F7C8A;
      case 0x006F7CC1u: goto L_006F7CC1;
      case 0x006F7CDDu: goto L_006F7CDD;
      case 0x006F7D29u: goto L_006F7D29;
      case 0x006F7D56u: goto L_006F7D56;
      case 0x006F7D78u: goto L_006F7D78;
      case 0x006F7D93u: goto L_006F7D93;
      case 0x006F7DADu: goto L_006F7DAD;
      case 0x006F7DDBu: goto L_006F7DDB;
      case 0x006F7DF3u: goto L_006F7DF3;
      case 0x006F7E10u: goto L_006F7E10;
      case 0x006F7E2Fu: goto L_006F7E2F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F7F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7F20u);

L_006F7F20:
    /* test ecx, ecx */ /* 0x006F7F20: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7F65; /* 0x006F7F22: jne 0x6f7f65 */
L_006F7F24:
    eax = MEM32(ecx * 4 + 0x7D5624); /* 0x006F7F24: mov eax, dword ptr [ecx*4 + 0x7d5624] */
    _xmm[0] = xmm_ld(eax + 0x4); /* 0x006F7F2B: movdqu xmm0, xmmword ptr [eax + 4] */
    xmm_st(edx, _xmm[0]); /* 0x006F7F30: movdqu xmmword ptr [edx], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x14); /* 0x006F7F34: movdqu xmm0, xmmword ptr [eax + 0x14] */
    xmm_st(edx + 0x10, _xmm[0]); /* 0x006F7F39: movdqu xmmword ptr [edx + 0x10], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x24); /* 0x006F7F3E: movdqu xmm0, xmmword ptr [eax + 0x24] */
    xmm_st(edx + 0x20, _xmm[0]); /* 0x006F7F43: movdqu xmmword ptr [edx + 0x20], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x34); /* 0x006F7F48: movdqu xmm0, xmmword ptr [eax + 0x34] */
    xmm_st(edx + 0x30, _xmm[0]); /* 0x006F7F4D: movdqu xmmword ptr [edx + 0x30], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x44); /* 0x006F7F52: movdqu xmm0, xmmword ptr [eax + 0x44] */
    eax = MEM32(eax + 0x54); /* 0x006F7F57: mov eax, dword ptr [eax + 0x54] */
    xmm_st(edx + 0x40, _xmm[0]); /* 0x006F7F5A: movdqu xmmword ptr [edx + 0x40], xmm0 */
    MEM32(edx + 0x50) = eax; /* 0x006F7F5F: mov dword ptr [edx + 0x50], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F7F62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7F64: ret  */
L_006F7F65:
    PUSH32(esp, 0); /* 0x006F7F65: push 0 */
    PUSH32(esp, 0x0080414Cu); /* 0x006F7F67: push 0x80414c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F7F6C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7F71: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F7F74: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F7F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F7F80u);

L_006F7F80:
    PUSH32(esp, ebp); /* 0x006F7F80: push ebp */
    ebp = esp; /* 0x006F7F81: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F7F83: push ecx */
    PUSH32(esp, ebx); /* 0x006F7F84: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x006F7F85: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006F7F88: push esi */
    PUSH32(esp, edi); /* 0x006F7F89: push edi */
    eax = MEM32(ebx); /* 0x006F7F8A: mov eax, dword ptr [ebx] */
    /* cmp eax, 0x200u */ /* 0x006F7F8C: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8109; /* 0x006F7F91: jne 0x6f8109 */
L_006F7F97:
    edi = MEM32(0x87CBCC); /* 0x006F7F97: mov edi, dword ptr [0x87cbcc] */
    /* test edi, edi */ /* 0x006F7F9D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7FBF; /* 0x006F7F9F: je 0x6f7fbf */
L_006F7FA1:
    edi = MEM32(edi + 0x110); /* 0x006F7FA1: mov edi, dword ptr [edi + 0x110] */
    /* test edi, edi */ /* 0x006F7FA7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7FBF; /* 0x006F7FA9: je 0x6f7fbf */
L_006F7FAB:
    eax = MEM32(ebx + 0x8); /* 0x006F7FAB: mov eax, dword ptr [ebx + 8] */
    edi = edi; /* 0x006F7FAE: mov edi, edi */
L_006F7FB0:
    /* cmp MEM32(edi + 0x4), eax */ /* 0x006F7FB0: cmp dword ptr [edi + 4], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F7FC1; /* 0x006F7FB3: je 0x6f7fc1 */
L_006F7FB5:
    edi = MEM32(edi + 0x98); /* 0x006F7FB5: mov edi, dword ptr [edi + 0x98] */
    /* test edi, edi */ /* 0x006F7FBB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7FB0; /* 0x006F7FBD: jne 0x6f7fb0 */
L_006F7FBF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006F7FBF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F7FC1:
    esi = MEM32(ebp + 0x8); /* 0x006F7FC1: mov esi, dword ptr [ebp + 8] */
    /* cmp edi, MEM32(esi + 0xBC) */ /* 0x006F7FC4: cmp edi, dword ptr [esi + 0xbc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xBC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F82A3; /* 0x006F7FCA: jne 0x6f82a3 */
L_006F7FD0:
    eax = MEM32(esi + 0x4); /* 0x006F7FD0: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006F7FD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7FDE; /* 0x006F7FD5: je 0x6f7fde */
L_006F7FD7:
    PUSH32(esp, ebx); /* 0x006F7FD7: push ebx */
    PUSH32(esp, esi); /* 0x006F7FD8: push esi */
    RECOMP_ICALL(eax); /* 0x006F7FD9: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F7FDB: add esp, 8 */
    _flag_k = FK_ADD;
L_006F7FDE:
    SET_LO8(eax, MEM8(ebx + 0xC)); /* 0x006F7FDE: mov al, byte ptr [ebx + 0xc] */
    /* cmp LO8(eax), 6 */ /* 0x006F7FE1: cmp al, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F80B3; /* 0x006F7FE3: jne 0x6f80b3 */
L_006F7FE9:
    edi = MEM32(esi + 0x134); /* 0x006F7FE9: mov edi, dword ptr [esi + 0x134] */
    /* test edi, edi */ /* 0x006F7FEF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7FFC; /* 0x006F7FF1: je 0x6f7ffc */
L_006F7FF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F7FF3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F7FF5: mov ecx, esi */
    RECOMP_CALL(sub_006F9180); /* 0x006F7FF7: call 0x6f9180 */
    RECOMP_FLAGS_IN();
L_006F7FFC:
    /* cmp MEM32(esi + 0xC4), 0 */ /* 0x006F7FFC: cmp dword ptr [esi + 0xc4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8011; /* 0x006F8003: je 0x6f8011 */
L_006F8005:
    ecx = esi; /* 0x006F8005: mov ecx, esi */
    RECOMP_CALL(sub_006F9390); /* 0x006F8007: call 0x6f9390 */
    RECOMP_FLAGS_IN();
    goto L_006F809A; /* 0x006F800C: jmp 0x6f809a */
L_006F8011:
    eax = MEM32(esi + 0x8); /* 0x006F8011: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x006F8014: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8028; /* 0x006F8016: je 0x6f8028 */
L_006F8018:
    ecx = ebp + 0xC; /* 0x006F8018: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x006F801B: push ecx */
    ecx = ebp + 0x8; /* 0x006F801C: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x006F801F: push ecx */
    PUSH32(esp, esi); /* 0x006F8020: push esi */
    RECOMP_ICALL(eax); /* 0x006F8021: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F8023: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_006F803D; /* 0x006F8026: jmp 0x6f803d */
L_006F8028:
    ecx = MEM32(esi + 0xBC); /* 0x006F8028: mov ecx, dword ptr [esi + 0xbc] */
    eax = ebp + 0xC; /* 0x006F802E: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x006F8031: push eax */
    edx = ebp + 0x8; /* 0x006F8032: lea edx, [ebp + 8] */
    RECOMP_CALL(sub_006EBC00); /* 0x006F8035: call 0x6ebc00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F803A: add esp, 4 */
    _flag_k = FK_ADD;
L_006F803D:
    /* cmp MEM32(esi + 0x134), 0 */ /* 0x006F803D: cmp dword ptr [esi + 0x134], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x134)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x006F8044: mov eax, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F806E; /* 0x006F8047: je 0x6f806e */
L_006F8049:
    MEM32(esi + 0xF0) = eax; /* 0x006F8049: mov dword ptr [esi + 0xf0], eax */
    eax = MEM32(ebp + 0xC); /* 0x006F804F: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0xE8) = 0; /* 0x006F8052: mov dword ptr [esi + 0xe8], 0 */
    MEM32(esi + 0xEC) = 0; /* 0x006F805C: mov dword ptr [esi + 0xec], 0 */
    MEM32(esi + 0xF4) = eax; /* 0x006F8066: mov dword ptr [esi + 0xf4], eax */
    goto L_006F809A; /* 0x006F806C: jmp 0x6f809a */
L_006F806E:
    MEM32(esi + 0xE0) = eax; /* 0x006F806E: mov dword ptr [esi + 0xe0], eax */
    eax = MEM32(ebp + 0xC); /* 0x006F8074: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0xE4) = eax; /* 0x006F8077: mov dword ptr [esi + 0xe4], eax */
    eax = MEM32(esi + 0x30); /* 0x006F807D: mov eax, dword ptr [esi + 0x30] */
    PUSH32(esp, esi); /* 0x006F8080: push esi */
    MEM32(esi + 0xD8) = 0; /* 0x006F8081: mov dword ptr [esi + 0xd8], 0 */
    MEM32(esi + 0xDC) = 0; /* 0x006F808B: mov dword ptr [esi + 0xdc], 0 */
    RECOMP_ICALL(eax); /* 0x006F8095: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8097: add esp, 4 */
    _flag_k = FK_ADD;
L_006F809A:
    /* test edi, edi */ /* 0x006F809A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F82A3; /* 0x006F809C: je 0x6f82a3 */
L_006F80A2:
    edx = edi; /* 0x006F80A2: mov edx, edi */
    ecx = esi; /* 0x006F80A4: mov ecx, esi */
    RECOMP_CALL(sub_006F9180); /* 0x006F80A6: call 0x6f9180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F80AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F80AD: pop edi */
    esi = POP32_VAL(esp); /* 0x006F80AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F80AF: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006F80B0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F80B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F80B2: ret  */
L_006F80B3:
    /* cmp LO8(eax), 2 */ /* 0x006F80B3: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F80CA; /* 0x006F80B5: je 0x6f80ca */
L_006F80B7:
    /* cmp LO8(eax), 1 */ /* 0x006F80B7: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F80C6; /* 0x006F80B9: jne 0x6f80c6 */
L_006F80BB:
    ecx = edi; /* 0x006F80BB: mov ecx, edi */
    RECOMP_CALL(sub_006EB810); /* 0x006F80BD: call 0x6eb810 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 0x40u */ /* 0x006F80C2: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006F80F1; /* 0x006F80C4: jmp 0x6f80f1 */
L_006F80C6:
    /* cmp LO8(eax), 7 */ /* 0x006F80C6: cmp al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F80DC; /* 0x006F80C8: jne 0x6f80dc */
L_006F80CA:
    MEM32(esi + 0xC0) = 1; /* 0x006F80CA: mov dword ptr [esi + 0xc0], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F80D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F80D6: pop edi */
    esi = POP32_VAL(esp); /* 0x006F80D7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F80D8: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006F80D9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F80DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F80DB: ret  */
L_006F80DC:
    /* cmp LO8(eax), 9 */ /* 0x006F80DC: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F80E8; /* 0x006F80DE: je 0x6f80e8 */
L_006F80E0:
    /* cmp LO8(eax), 8 */ /* 0x006F80E0: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F82A3; /* 0x006F80E2: jne 0x6f82a3 */
L_006F80E8:
    ecx = edi; /* 0x006F80E8: mov ecx, edi */
    RECOMP_CALL(sub_006EB810); /* 0x006F80EA: call 0x6eb810 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 8 */ /* 0x006F80EF: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006F80F1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_006F82A3; /* 0x006F80F1: jne 0x6f82a3 */
L_006F80F7:
    MEM32(esi + 0xC0) = 0; /* 0x006F80F7: mov dword ptr [esi + 0xc0], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8101: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8103: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8104: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8105: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006F8106: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F8107: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8108: ret  */
L_006F8109:
    /* cmp eax, 0x400u */ /* 0x006F8109: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8239; /* 0x006F810E: jne 0x6f8239 */
L_006F8114:
    eax = MEM32(0x87CBCC); /* 0x006F8114: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006F8119: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F813F; /* 0x006F811B: je 0x6f813f */
L_006F811D:
    eax = MEM32(eax + 0x110); /* 0x006F811D: mov eax, dword ptr [eax + 0x110] */
    /* test eax, eax */ /* 0x006F8123: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F813F; /* 0x006F8125: je 0x6f813f */
L_006F8127:
    ecx = MEM32(ebx + 0x8); /* 0x006F8127: mov ecx, dword ptr [ebx + 8] */
    ebx = ebx; /* 0x006F812A: lea ebx, [ebx] */
L_006F8130:
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x006F8130: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8141; /* 0x006F8133: je 0x6f8141 */
L_006F8135:
    eax = MEM32(eax + 0x98); /* 0x006F8135: mov eax, dword ptr [eax + 0x98] */
    /* test eax, eax */ /* 0x006F813B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8130; /* 0x006F813D: jne 0x6f8130 */
L_006F813F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F813F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F8141:
    ecx = MEM32(ebp + 0x8); /* 0x006F8141: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0xC4), 0 */ /* 0x006F8144: cmp dword ptr [ecx + 0xc4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F82A3; /* 0x006F814B: je 0x6f82a3 */
L_006F8151:
    /* cmp eax, MEM32(ecx + 0xBC) */ /* 0x006F8151: cmp eax, dword ptr [ecx + 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xBC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F82A3; /* 0x006F8157: jne 0x6f82a3 */
L_006F815D:
    eax = MEM32(ecx + 0xD8); /* 0x006F815D: mov eax, dword ptr [ecx + 0xd8] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x006F8163: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - eax; /* 0x006F8166: sub dword ptr [ebx + 0x14], eax */
    _flag_k = FK_CMP;
    edx = 1; /* 0x006F8169: mov edx, 1 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebx + 0x14)); _xmm[0].u64[1] = 0; /* 0x006F816E: movd xmm0, dword ptr [ebx + 0x14] */
    eax = MEM32(ecx + 0xDC); /* 0x006F8173: mov eax, dword ptr [ecx + 0xdc] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) - eax; /* 0x006F8179: sub dword ptr [ebx + 0x18], eax */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F817C: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(ecx + 0x120)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F817F: divss xmm0, dword ptr [ecx + 0x120] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F8187: cvttss2si eax, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebx + 0x18)); _xmm[0].u64[1] = 0; /* 0x006F818B: movd xmm0, dword ptr [ebx + 0x18] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F8190: cvtdq2ps xmm0, xmm0 */
    MEM32(ebx + 0x14) = eax; /* 0x006F8193: mov dword ptr [ebx + 0x14], eax */
    { float _s = sse_f32(MEM32(ecx + 0x124)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F8196: divss xmm0, dword ptr [ecx + 0x124] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F819E: cvttss2si eax, xmm0 */
    MEM32(ebx + 0x18) = eax; /* 0x006F81A2: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebx + 0x1C); /* 0x006F81A5: mov eax, dword ptr [ebx + 0x1c] */
    /* test eax, eax */ /* 0x006F81A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F81C6; /* 0x006F81AA: jle 0x6f81c6 */
L_006F81AC:
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F81AC: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F81B0: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(ecx + 0x120)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F81B3: divss xmm0, dword ptr [ecx + 0x120] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F81BB: cvttss2si eax, xmm0 */
    /* cmp eax, edx */ /* 0x006F81BF: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) { eax = edx; } /* 0x006F81C1: cmovl eax, edx */
    goto L_006F81E1; /* 0x006F81C4: jmp 0x6f81e1 */
L_006F81C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_006F81E4; /* 0x006F81C6: jns 0x6f81e4 */
L_006F81C8:
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F81C8: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F81CC: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(ecx + 0x120)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F81CF: divss xmm0, dword ptr [ecx + 0x120] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F81D7: cvttss2si eax, xmm0 */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F81DB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = esi; } /* 0x006F81DE: cmovg eax, esi */
L_006F81E1:
    MEM32(ebx + 0x1C) = eax; /* 0x006F81E1: mov dword ptr [ebx + 0x1c], eax */
L_006F81E4:
    eax = MEM32(ebx + 0x20); /* 0x006F81E4: mov eax, dword ptr [ebx + 0x20] */
    /* test eax, eax */ /* 0x006F81E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F820F; /* 0x006F81E9: jle 0x6f820f */
L_006F81EB:
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F81EB: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F81EF: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(ecx + 0x124)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F81F2: divss xmm0, dword ptr [ecx + 0x124] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F81FA: cvttss2si eax, xmm0 */
    /* cmp eax, 1 */ /* 0x006F81FE: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) { eax = edx; } /* 0x006F8201: cmovl eax, edx */
    MEM32(ebx + 0x20) = eax; /* 0x006F8204: mov dword ptr [ebx + 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8207: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8209: pop edi */
    esi = POP32_VAL(esp); /* 0x006F820A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F820B: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006F820C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F820D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F820E: ret  */
L_006F820F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_006F82A3; /* 0x006F820F: jns 0x6f82a3 */
L_006F8215:
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006F8215: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F8219: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(ecx + 0x124)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F821C: divss xmm0, dword ptr [ecx + 0x124] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F8224: cvttss2si eax, xmm0 */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F8228: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = esi; } /* 0x006F822B: cmovg eax, esi */
    MEM32(ebx + 0x20) = eax; /* 0x006F822E: mov dword ptr [ebx + 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8231: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8233: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8234: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8235: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006F8236: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F8237: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8238: ret  */
L_006F8239:
    /* cmp eax, 0x401u */ /* 0x006F8239: cmp eax, 0x401 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x401u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8247; /* 0x006F823E: je 0x6f8247 */
L_006F8240:
    /* cmp eax, 0x402u */ /* 0x006F8240: cmp eax, 0x402 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x402u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F82A3; /* 0x006F8245: jne 0x6f82a3 */
L_006F8247:
    edx = MEM32(ebp + 0x8); /* 0x006F8247: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(edx + 0xC4), 0 */ /* 0x006F824A: cmp dword ptr [edx + 0xc4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0xC4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F82A3; /* 0x006F8251: je 0x6f82a3 */
L_006F8253:
    ecx = MEM32(ebx + 0x8); /* 0x006F8253: mov ecx, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_006EB7E0); /* 0x006F8256: call 0x6eb7e0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(edx + 0xBC) */ /* 0x006F825B: cmp eax, dword ptr [edx + 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xBC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F82A3; /* 0x006F8261: jne 0x6f82a3 */
L_006F8263:
    eax = MEM32(edx + 0xD8); /* 0x006F8263: mov eax, dword ptr [edx + 0xd8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - eax; /* 0x006F8269: sub dword ptr [ebx + 0x14], eax */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebx + 0x14)); _xmm[0].u64[1] = 0; /* 0x006F826C: movd xmm0, dword ptr [ebx + 0x14] */
    eax = MEM32(edx + 0xDC); /* 0x006F8271: mov eax, dword ptr [edx + 0xdc] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) - eax; /* 0x006F8277: sub dword ptr [ebx + 0x18], eax */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F827A: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(edx + 0x120)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F827D: divss xmm0, dword ptr [edx + 0x120] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F8285: cvttss2si eax, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebx + 0x18)); _xmm[0].u64[1] = 0; /* 0x006F8289: movd xmm0, dword ptr [ebx + 0x18] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F828E: cvtdq2ps xmm0, xmm0 */
    MEM32(ebx + 0x14) = eax; /* 0x006F8291: mov dword ptr [ebx + 0x14], eax */
    { float _s = sse_f32(MEM32(edx + 0x124)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F8294: divss xmm0, dword ptr [edx + 0x124] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F829C: cvttss2si eax, xmm0 */
    MEM32(ebx + 0x18) = eax; /* 0x006F82A0: mov dword ptr [ebx + 0x18], eax */
L_006F82A3:
    edi = POP32_VAL(esp); /* 0x006F82A3: pop edi */
    esi = POP32_VAL(esp); /* 0x006F82A4: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F82A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F82A7: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006F82A8: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F82A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F82AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F82B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F82B0u);

L_006F82B0:
    PUSH32(esp, ebp); /* 0x006F82B0: push ebp */
    ebp = esp; /* 0x006F82B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F82B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F82B6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F82B9: push ebx */
    PUSH32(esp, esi); /* 0x006F82BA: push esi */
    esi = ecx; /* 0x006F82BB: mov esi, ecx */
    MEM32(esp + 0xC) = edx; /* 0x006F82BD: mov dword ptr [esp + 0xc], edx */
    PUSH32(esp, edi); /* 0x006F82C1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006F82C2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xC) = esi; /* 0x006F82C4: mov dword ptr [esp + 0xc], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006F82C8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x006F82CA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F82E4; /* 0x006F82CC: jne 0x6f82e4 */
L_006F82CE:
    PUSH32(esp, 0x00804020u); /* 0x006F82CE: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F82D3: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F82D8: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F82DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F82DD: pop edi */
    esi = POP32_VAL(esp); /* 0x006F82DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F82DF: pop ebx */
    esp = ebp; /* 0x006F82E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F82E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F82E3: ret  */
L_006F82E4:
    edx = 0x0080636Cu; /* 0x006F82E4: mov edx, 0x80636c */
    RECOMP_CALL(sub_006EB9B0); /* 0x006F82E9: call 0x6eb9b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F82EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8308; /* 0x006F82F0: je 0x6f8308 */
L_006F82F2:
    PUSH32(esp, 0x0080632Cu); /* 0x006F82F2: push 0x80632c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F82F7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F82FC: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F82FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8301: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8302: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8303: pop ebx */
    esp = ebp; /* 0x006F8304: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8306: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8307: ret  */
L_006F8308:
    ecx = 0x00806318u; /* 0x006F8308: mov ecx, 0x806318 */
    RECOMP_CALL(sub_006F5A00); /* 0x006F830D: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F8312: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F832E; /* 0x006F8314: je 0x6f832e */
L_006F8316:
    edx = 1; /* 0x006F8316: mov edx, 1 */
    ecx = 0x00806318u; /* 0x006F831B: mov ecx, 0x806318 */
    RECOMP_CALL(sub_006F5A70); /* 0x006F8320: call 0x6f5a70 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F8325: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x006F8327: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F8329: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    ebx = ebx & 4; /* 0x006F832B: and ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F832E:
    eax = MEM32(esp + 0x10); /* 0x006F832E: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x006F8332: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F83D3; /* 0x006F8334: jns 0x6f83d3 */
L_006F833A:
    ecx = 0x00803FB0u; /* 0x006F833A: mov ecx, 0x803fb0 */
    RECOMP_CALL(sub_006F5A00); /* 0x006F833F: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006F8344: mov ecx, eax */
    MEM32(esp + 0x10) = ecx; /* 0x006F8346: mov dword ptr [esp + 0x10], ecx */
    /* test ecx, ecx */ /* 0x006F834A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F838E; /* 0x006F834C: je 0x6f838e */
L_006F834E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F834E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F8350:
    eax = MEM32(esi * 4 + 0x7D5624); /* 0x006F8350: mov eax, dword ptr [esi*4 + 0x7d5624] */
    MEM32(esp + 0x14) = eax; /* 0x006F8357: mov dword ptr [esp + 0x14], eax */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006F835B: push dword ptr [eax + 4] */
    PUSH32(esp, ecx); /* 0x006F835E: push ecx */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006F835F: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8365: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F8368: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8378; /* 0x006F836A: je 0x6f8378 */
L_006F836C:
    ecx = MEM32(esp + 0x10); /* 0x006F836C: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F8370: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 1 */ /* 0x006F8371: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F8350; /* 0x006F8374: jl 0x6f8350 */
L_006F8376:
    goto L_006F838E; /* 0x006F8376: jmp 0x6f838e */
L_006F8378:
    eax = MEM32(esp + 0x14); /* 0x006F8378: mov eax, dword ptr [esp + 0x14] */
    PUSH32(esp, ebx); /* 0x006F837C: push ebx */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x006F837D: push dword ptr [esp + 0x10] */
    eax = MEM32(eax); /* 0x006F8381: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x006F8383: call eax */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F8385: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8387: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F838A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F83B8; /* 0x006F838C: jne 0x6f83b8 */
L_006F838E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F838E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F8390:
    ecx = MEM32(esi * 4 + 0x7D5624); /* 0x006F8390: mov ecx, dword ptr [esi*4 + 0x7d5624] */
    eax = MEM32(ecx + 0x8); /* 0x006F8397: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x006F839A: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x006F839C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F83B2; /* 0x006F839E: jne 0x6f83b2 */
L_006F83A0:
    eax = MEM32(ecx); /* 0x006F83A0: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x006F83A2: push ebx */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x006F83A3: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(eax); /* 0x006F83A7: call eax */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F83A9: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F83AB: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F83AE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F83B8; /* 0x006F83B0: jne 0x6f83b8 */
L_006F83B2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F83B2: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 1 */ /* 0x006F83B3: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F8390; /* 0x006F83B6: jl 0x6f8390 */
L_006F83B8:
    /* cmp esi, 1 */ /* 0x006F83B8: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8404; /* 0x006F83BB: jne 0x6f8404 */
L_006F83BD:
    PUSH32(esp, 0x008063B0u); /* 0x006F83BD: push 0x8063b0 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F83C2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F83C7: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F83CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F83CC: pop edi */
    esi = POP32_VAL(esp); /* 0x006F83CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F83CE: pop ebx */
    esp = ebp; /* 0x006F83CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F83D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F83D2: ret  */
L_006F83D3:
    /* cmp eax, 1 */ /* 0x006F83D3: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F83F0; /* 0x006F83D6: jl 0x6f83f0 */
L_006F83D8:
    PUSH32(esp, 0); /* 0x006F83D8: push 0 */
    PUSH32(esp, 0x00806384u); /* 0x006F83DA: push 0x806384 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F83DF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F83E4: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F83E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F83E9: pop edi */
    esi = POP32_VAL(esp); /* 0x006F83EA: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F83EB: pop ebx */
    esp = ebp; /* 0x006F83EC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F83EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F83EF: ret  */
L_006F83F0:
    eax = MEM32(eax * 4 + 0x7D5624); /* 0x006F83F0: mov eax, dword ptr [eax*4 + 0x7d5624] */
    PUSH32(esp, ebx); /* 0x006F83F7: push ebx */
    PUSH32(esp, esi); /* 0x006F83F8: push esi */
    eax = MEM32(eax); /* 0x006F83F9: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x006F83FB: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F83FD: add esp, 8 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x006F8400: mov edi, eax */
    goto L_006F8408; /* 0x006F8402: jmp 0x6f8408 */
L_006F8404:
    esi = MEM32(esp + 0xC); /* 0x006F8404: mov esi, dword ptr [esp + 0xc] */
L_006F8408:
    /* test edi, edi */ /* 0x006F8408: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F84E7; /* 0x006F840A: je 0x6f84e7 */
L_006F8410:
    eax = MEM32(0x87CBCC); /* 0x006F8410: mov eax, dword ptr [0x87cbcc] */
    MEM32(edi) = 0x0092501Bu; /* 0x006F8415: mov dword ptr [edi], 0x92501b */
    MEM32(edi + 0xBC) = esi; /* 0x006F841B: mov dword ptr [edi + 0xbc], esi */
    MEM32(edi + 0x120) = 0x3F800000u; /* 0x006F8421: mov dword ptr [edi + 0x120], 0x3f800000 */
    MEM32(edi + 0x124) = 0x3F800000u; /* 0x006F842B: mov dword ptr [edi + 0x124], 0x3f800000 */
    /* test eax, eax */ /* 0x006F8435: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8440; /* 0x006F8437: jne 0x6f8440 */
L_006F8439:
    PUSH32(esp, 0x00803F6Cu); /* 0x006F8439: push 0x803f6c */
    goto L_006F8453; /* 0x006F843E: jmp 0x6f8453 */
L_006F8440:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006F8440: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x006F8445: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F844E; /* 0x006F8447: jne 0x6f844e */
L_006F8449:
    eax = MEM32(esi + 0x30); /* 0x006F8449: mov eax, dword ptr [esi + 0x30] */
    goto L_006F845D; /* 0x006F844C: jmp 0x6f845d */
L_006F844E:
    PUSH32(esp, 0x00804020u); /* 0x006F844E: push 0x804020 */
L_006F8453:
    RECOMP_CALL(sub_006EDB70); /* 0x006F8453: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8458: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F845B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F845D:
    /* test LO8(eax), 0x48u */ /* 0x006F845D: test al, 0x48 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = 0x0080636Cu; /* 0x006F845F: mov edx, 0x80636c */
    eax = 0; /* 0x006F8464: mov eax, 0 */
    ecx = esi; /* 0x006F8469: mov ecx, esi */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F846B: setne al */
    PUSH32(esp, edi); /* 0x006F846E: push edi */
    MEM32(edi + 0xC0) = eax; /* 0x006F846F: mov dword ptr [edi + 0xc0], eax */
    RECOMP_CALL(sub_006EB850); /* 0x006F8475: call 0x6eb850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F847A: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), 0x0092501Bu */ /* 0x006F847D: cmp dword ptr [edi], 0x92501b */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F84BC; /* 0x006F8483: jne 0x6f84bc */
L_006F8485:
    eax = edi + 0xE4; /* 0x006F8485: lea eax, [edi + 0xe4] */
    MEM32(edi + 0xD8) = 0; /* 0x006F848B: mov dword ptr [edi + 0xd8], 0 */
    PUSH32(esp, eax); /* 0x006F8495: push eax */
    edx = edi + 0xE0; /* 0x006F8496: lea edx, [edi + 0xe0] */
    MEM32(edi + 0xDC) = 0; /* 0x006F849C: mov dword ptr [edi + 0xdc], 0 */
    ecx = edi; /* 0x006F84A6: mov ecx, edi */
    RECOMP_CALL(sub_006F8560); /* 0x006F84A8: call 0x6f8560 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F84AD: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F84B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F84C9; /* 0x006F84B2: js 0x6f84c9 */
L_006F84B4:
    eax = MEM32(edi + 0x30); /* 0x006F84B4: mov eax, dword ptr [edi + 0x30] */
    PUSH32(esp, edi); /* 0x006F84B7: push edi */
    RECOMP_ICALL(eax); /* 0x006F84B8: call eax */
    RECOMP_FLAGS_IN();
    goto L_006F84C6; /* 0x006F84BA: jmp 0x6f84c6 */
L_006F84BC:
    PUSH32(esp, 0x00806458u); /* 0x006F84BC: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F84C1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
L_006F84C6:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F84C6: add esp, 4 */
    _flag_k = FK_ADD;
L_006F84C9:
    edx = edi; /* 0x006F84C9: mov edx, edi */
    ecx = 0x006F7F80u; /* 0x006F84CB: mov ecx, 0x6f7f80 */
    RECOMP_CALL(sub_006ED380); /* 0x006F84D0: call 0x6ed380 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x68)); /* 0x006F84D5: push dword ptr [edi + 0x68] */
    PUSH32(esp, 0x00806354u); /* 0x006F84D8: push 0x806354 */
    PUSH32(esp, 6); /* 0x006F84DD: push 6 */
    RECOMP_CALL(sub_006FD040); /* 0x006F84DF: call 0x6fd040 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F84E4: add esp, 0xc */
    _flag_k = FK_ADD;
L_006F84E7:
    eax = edi; /* 0x006F84E7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F84E9: pop edi */
    esi = POP32_VAL(esp); /* 0x006F84EA: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F84EB: pop ebx */
    esp = ebp; /* 0x006F84EC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F84EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F84EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F84F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F84F0u);

L_006F84F0:
    /* test ecx, ecx */ /* 0x006F84F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8542; /* 0x006F84F2: je 0x6f8542 */
L_006F84F4:
    /* cmp MEM32(ecx), 0x0092501Bu */ /* 0x006F84F4: cmp dword ptr [ecx], 0x92501b */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8542; /* 0x006F84FA: jne 0x6f8542 */
L_006F84FC:
    _xmm[0] = xmm_ld(ecx + 0x68); /* 0x006F84FC: movdqu xmm0, xmmword ptr [ecx + 0x68] */
    xmm_st(edx, _xmm[0]); /* 0x006F8501: movdqu xmmword ptr [edx], xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x78); /* 0x006F8505: movdqu xmm0, xmmword ptr [ecx + 0x78] */
    xmm_st(edx + 0x10, _xmm[0]); /* 0x006F850A: movdqu xmmword ptr [edx + 0x10], xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x88); /* 0x006F850F: movdqu xmm0, xmmword ptr [ecx + 0x88] */
    xmm_st(edx + 0x20, _xmm[0]); /* 0x006F8517: movdqu xmmword ptr [edx + 0x20], xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x98); /* 0x006F851C: movdqu xmm0, xmmword ptr [ecx + 0x98] */
    xmm_st(edx + 0x30, _xmm[0]); /* 0x006F8524: movdqu xmmword ptr [edx + 0x30], xmm0 */
    _xmm[0] = xmm_ld(ecx + 0xA8); /* 0x006F8529: movdqu xmm0, xmmword ptr [ecx + 0xa8] */
    xmm_st(edx + 0x40, _xmm[0]); /* 0x006F8531: movdqu xmmword ptr [edx + 0x40], xmm0 */
    eax = MEM32(ecx + 0xB8); /* 0x006F8536: mov eax, dword ptr [ecx + 0xb8] */
    MEM32(edx + 0x50) = eax; /* 0x006F853C: mov dword ptr [edx + 0x50], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F853F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8541: ret  */
L_006F8542:
    PUSH32(esp, 0x00806458u); /* 0x006F8542: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8547: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F854C: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F854F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8552: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8560u);

L_006F8560:
    PUSH32(esp, ebp); /* 0x006F8560: push ebp */
    ebp = esp; /* 0x006F8561: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F8563: push ecx */
    /* test ecx, ecx */ /* 0x006F8564: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F85CA; /* 0x006F8566: je 0x6f85ca */
L_006F8568:
    /* cmp MEM32(ecx), 0x0092501Bu */ /* 0x006F8568: cmp dword ptr [ecx], 0x92501b */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F85CA; /* 0x006F856E: jne 0x6f85ca */
L_006F8570:
    eax = MEM32(ecx + 0x134); /* 0x006F8570: mov eax, dword ptr [ecx + 0x134] */
    /* test eax, eax */ /* 0x006F8576: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F858C; /* 0x006F8578: je 0x6f858c */
L_006F857A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F857A: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x006F857D: push edx */
    PUSH32(esp, ecx); /* 0x006F857E: push ecx */
    ecx = eax; /* 0x006F857F: mov ecx, eax */
    RECOMP_CALL(sub_006F8A40); /* 0x006F8581: call 0x6f8a40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F8586: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006F8589: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F858A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F858B: ret  */
L_006F858C:
    eax = MEM32(ecx + 0x8); /* 0x006F858C: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x006F858F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F85A0; /* 0x006F8591: je 0x6f85a0 */
L_006F8593:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F8593: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x006F8596: push edx */
    PUSH32(esp, ecx); /* 0x006F8597: push ecx */
    RECOMP_ICALL(eax); /* 0x006F8598: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F859A: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006F859D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F859E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F859F: ret  */
L_006F85A0:
    ecx = MEM32(ecx + 0xBC); /* 0x006F85A0: mov ecx, dword ptr [ecx + 0xbc] */
    /* test ecx, ecx */ /* 0x006F85A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F85BA; /* 0x006F85A8: je 0x6f85ba */
L_006F85AA:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F85AA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_006EBC00); /* 0x006F85AD: call 0x6ebc00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F85B2: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F85B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006F85B7: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F85B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F85B9: ret  */
L_006F85BA:
    PUSH32(esp, 0x00806428u); /* 0x006F85BA: push 0x806428 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F85BF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F85C4: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006F85C7: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F85C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F85C9: ret  */
L_006F85CA:
    PUSH32(esp, 0x00806458u); /* 0x006F85CA: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F85CF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F85D4: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F85D7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006F85DA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006F85DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F85DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F85E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F85E0u);

L_006F85E0:
    PUSH32(esp, ebx); /* 0x006F85E0: push ebx */
    PUSH32(esp, esi); /* 0x006F85E1: push esi */
    PUSH32(esp, edi); /* 0x006F85E2: push edi */
    edi = ecx; /* 0x006F85E3: mov edi, ecx */
    /* test edx, edx */ /* 0x006F85E5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F861E; /* 0x006F85E7: je 0x6f861e */
L_006F85E9:
    eax = edx; /* 0x006F85E9: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F85EB: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F85F0: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F861E; /* 0x006F85F5: je 0x6f861e */
L_006F85F7:
    esi = MEM32(edi + 0x70); /* 0x006F85F7: mov esi, dword ptr [edi + 0x70] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F85FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x006F85FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F860F; /* 0x006F85FE: je 0x6f860f */
L_006F8600:
    ecx = edi + 0x74; /* 0x006F8600: lea ecx, [edi + 0x74] */
L_006F8603:
    /* cmp MEM32(ecx), edx */ /* 0x006F8603: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8616; /* 0x006F8605: je 0x6f8616 */
L_006F8607:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F8607: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x006F8608: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x006F860B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006F8603; /* 0x006F860D: jb 0x6f8603 */
L_006F860F:
    eax = MEM32(edi + 0x74); /* 0x006F860F: mov eax, dword ptr [edi + 0x74] */
    edi = POP32_VAL(esp); /* 0x006F8612: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8613: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8614: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8615: ret  */
L_006F8616:
    eax = MEM32(edi + eax * 4 + 0x74); /* 0x006F8616: mov eax, dword ptr [edi + eax*4 + 0x74] */
    edi = POP32_VAL(esp); /* 0x006F861A: pop edi */
    esi = POP32_VAL(esp); /* 0x006F861B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F861C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F861D: ret  */
L_006F861E:
    ecx = edx; /* 0x006F861E: mov ecx, edx */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x006F8620: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x006F8620: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006F8623: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 4 */ /* 0x006F8626: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8635; /* 0x006F8629: je 0x6f8635 */
L_006F862B:
    /* cmp ecx, 5 */ /* 0x006F862B: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8635; /* 0x006F862E: je 0x6f8635 */
L_006F8630:
    /* cmp ecx, 6 */ /* 0x006F8630: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8651; /* 0x006F8633: jne 0x6f8651 */
L_006F8635:
    eax = edx; /* 0x006F8635: mov eax, edx */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x006F8637: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x006F8637: shr eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006F863A: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 3 */ /* 0x006F863D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F869A; /* 0x006F8640: je 0x6f869a */
L_006F8642:
    /* cmp eax, 4 */ /* 0x006F8642: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F869A; /* 0x006F8645: je 0x6f869a */
L_006F8647:
    /* cmp eax, 7 */ /* 0x006F8647: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F869A; /* 0x006F864A: je 0x6f869a */
L_006F864C:
    /* cmp eax, 8 */ /* 0x006F864C: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F869A; /* 0x006F864F: je 0x6f869a */
L_006F8651:
    /* test edx, edx */ /* 0x006F8651: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8663; /* 0x006F8653: je 0x6f8663 */
L_006F8655:
    eax = edx; /* 0x006F8655: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F8657: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F865C: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8696; /* 0x006F8661: jne 0x6f8696 */
L_006F8663:
    /* cmp ecx, 7 */ /* 0x006F8663: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F867C; /* 0x006F8666: je 0x6f867c */
L_006F8668:
    /* cmp ecx, 8 */ /* 0x006F8668: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F867C; /* 0x006F866B: je 0x6f867c */
L_006F866D:
    /* cmp ecx, 9 */ /* 0x006F866D: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F867C; /* 0x006F8670: je 0x6f867c */
L_006F8672:
    /* cmp ecx, 0xAu */ /* 0x006F8672: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F867C; /* 0x006F8675: je 0x6f867c */
L_006F8677:
    /* cmp ecx, 0xBu */ /* 0x006F8677: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8696; /* 0x006F867A: jne 0x6f8696 */
L_006F867C:
    if (20u) _cf = (((edx) >> 19) & 1u); /* 0x006F867C: shr edx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((edx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 20u; /* 0x006F867C: shr edx, 0x14 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x006F867F: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 3 */ /* 0x006F8682: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F869A; /* 0x006F8685: je 0x6f869a */
L_006F8687:
    /* cmp edx, 2 */ /* 0x006F8687: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F869A; /* 0x006F868A: je 0x6f869a */
L_006F868C:
    /* cmp edx, 6 */ /* 0x006F868C: cmp edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F869A; /* 0x006F868F: je 0x6f869a */
L_006F8691:
    /* cmp edx, 5 */ /* 0x006F8691: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F869A; /* 0x006F8694: je 0x6f869a */
L_006F8696:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006F8696: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F869F; /* 0x006F8698: jmp 0x6f869f */
L_006F869A:
    ebx = 1; /* 0x006F869A: mov ebx, 1 */
L_006F869F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F869F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x70), edx */ /* 0x006F86A1: cmp dword ptr [edi + 0x70], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x70)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F860F; /* 0x006F86A4: jbe 0x6f860f */
L_006F86AA:
    esi = edi + 0x74; /* 0x006F86AA: lea esi, [edi + 0x74] */
    ecx = ecx; /* 0x006F86AD: lea ecx, [ecx] */
L_006F86B0:
    ecx = MEM32(esi); /* 0x006F86B0: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x006F86B2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F86C4; /* 0x006F86B4: je 0x6f86c4 */
L_006F86B6:
    eax = ecx; /* 0x006F86B6: mov eax, ecx */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x006F86B8: shr eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax >> 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 28u; /* 0x006F86B8: shr eax, 0x1c */
    /* cmp eax, 1 */ /* 0x006F86BB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8751; /* 0x006F86BE: jne 0x6f8751 */
L_006F86C4:
    eax = ecx; /* 0x006F86C4: mov eax, ecx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006F86C6: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006F86C6: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006F86C9: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x006F86CC: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F86DB; /* 0x006F86CF: je 0x6f86db */
L_006F86D1:
    /* cmp eax, 5 */ /* 0x006F86D1: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F86DB; /* 0x006F86D4: je 0x6f86db */
L_006F86D6:
    /* cmp eax, 6 */ /* 0x006F86D6: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F86F7; /* 0x006F86D9: jne 0x6f86f7 */
L_006F86DB:
    eax = ecx; /* 0x006F86DB: mov eax, ecx */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x006F86DD: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x006F86DD: shr eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006F86E0: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 3 */ /* 0x006F86E3: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8748; /* 0x006F86E6: je 0x6f8748 */
L_006F86E8:
    /* cmp eax, 4 */ /* 0x006F86E8: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8748; /* 0x006F86EB: je 0x6f8748 */
L_006F86ED:
    /* cmp eax, 7 */ /* 0x006F86ED: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8748; /* 0x006F86F0: je 0x6f8748 */
L_006F86F2:
    /* cmp eax, 8 */ /* 0x006F86F2: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8748; /* 0x006F86F5: je 0x6f8748 */
L_006F86F7:
    /* test ecx, ecx */ /* 0x006F86F7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8709; /* 0x006F86F9: je 0x6f8709 */
L_006F86FB:
    eax = ecx; /* 0x006F86FB: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F86FD: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F8702: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8744; /* 0x006F8707: jne 0x6f8744 */
L_006F8709:
    eax = ecx; /* 0x006F8709: mov eax, ecx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006F870B: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006F870B: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006F870E: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x006F8711: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F872A; /* 0x006F8714: je 0x6f872a */
L_006F8716:
    /* cmp eax, 8 */ /* 0x006F8716: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F872A; /* 0x006F8719: je 0x6f872a */
L_006F871B:
    /* cmp eax, 9 */ /* 0x006F871B: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F872A; /* 0x006F871E: je 0x6f872a */
L_006F8720:
    /* cmp eax, 0xAu */ /* 0x006F8720: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F872A; /* 0x006F8723: je 0x6f872a */
L_006F8725:
    /* cmp eax, 0xBu */ /* 0x006F8725: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8744; /* 0x006F8728: jne 0x6f8744 */
L_006F872A:
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x006F872A: shr ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ecx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 20u; /* 0x006F872A: shr ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006F872D: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 3 */ /* 0x006F8730: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8748; /* 0x006F8733: je 0x6f8748 */
L_006F8735:
    /* cmp ecx, 2 */ /* 0x006F8735: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8748; /* 0x006F8738: je 0x6f8748 */
L_006F873A:
    /* cmp ecx, 6 */ /* 0x006F873A: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8748; /* 0x006F873D: je 0x6f8748 */
L_006F873F:
    /* cmp ecx, 5 */ /* 0x006F873F: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8748; /* 0x006F8742: je 0x6f8748 */
L_006F8744:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8744: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F874D; /* 0x006F8746: jmp 0x6f874d */
L_006F8748:
    eax = 1; /* 0x006F8748: mov eax, 1 */
L_006F874D:
    /* cmp eax, ebx */ /* 0x006F874D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8765; /* 0x006F874F: je 0x6f8765 */
L_006F8751:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006F8751: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006F8752: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(edi + 0x70) */ /* 0x006F8755: cmp edx, dword ptr [edi + 0x70] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006F86B0; /* 0x006F8758: jb 0x6f86b0 */
L_006F875E:
    eax = MEM32(edi + 0x74); /* 0x006F875E: mov eax, dword ptr [edi + 0x74] */
    edi = POP32_VAL(esp); /* 0x006F8761: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8762: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8763: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8764: ret  */
L_006F8765:
    eax = MEM32(edi + edx * 4 + 0x74); /* 0x006F8765: mov eax, dword ptr [edi + edx*4 + 0x74] */
    edi = POP32_VAL(esp); /* 0x006F8769: pop edi */
    esi = POP32_VAL(esp); /* 0x006F876A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F876B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F876C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8770u);

L_006F8770:
    PUSH32(esp, ebp); /* 0x006F8770: push ebp */
    ebp = esp; /* 0x006F8771: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F8773: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006F8776: push ecx */
    PUSH32(esp, ebx); /* 0x006F8777: push ebx */
    PUSH32(esp, esi); /* 0x006F8778: push esi */
    PUSH32(esp, edi); /* 0x006F8779: push edi */
    edi = ecx; /* 0x006F877A: mov edi, ecx */
    ebx = edx; /* 0x006F877C: mov ebx, edx */
    /* test edi, edi */ /* 0x006F877E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8A25; /* 0x006F8780: je 0x6f8a25 */
L_006F8786:
    /* cmp MEM32(edi), 0x0092501Bu */ /* 0x006F8786: cmp dword ptr [edi], 0x92501b */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8A25; /* 0x006F878C: jne 0x6f8a25 */
L_006F8792:
    /* test ebx, ebx */ /* 0x006F8792: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F879D; /* 0x006F8794: jne 0x6f879d */
L_006F8796:
    ebx = MEM32(edi + 0x74); /* 0x006F8796: mov ebx, dword ptr [edi + 0x74] */
    /* test ebx, ebx */ /* 0x006F8799: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F87AB; /* 0x006F879B: je 0x6f87ab */
L_006F879D:
    eax = ebx; /* 0x006F879D: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F879F: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F87A4: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F87C5; /* 0x006F87A9: jne 0x6f87c5 */
L_006F87AB:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006F87AB: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F87C5; /* 0x006F87AD: jne 0x6f87c5 */
L_006F87AF:
    PUSH32(esp, 0x00806410u); /* 0x006F87AF: push 0x806410 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F87B4: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F87B9: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F87BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F87BE: pop edi */
    esi = POP32_VAL(esp); /* 0x006F87BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F87C0: pop ebx */
    esp = ebp; /* 0x006F87C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F87C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F87C4: ret  */
L_006F87C5:
    /* test ebx, ebx */ /* 0x006F87C5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F87D7; /* 0x006F87C7: je 0x6f87d7 */
L_006F87C9:
    eax = ebx; /* 0x006F87C9: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F87CB: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F87D0: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F87FA; /* 0x006F87D5: jne 0x6f87fa */
L_006F87D7:
    eax = ebx; /* 0x006F87D7: mov eax, ebx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006F87D9: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006F87D9: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006F87DC: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x006F87DF: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8A0F; /* 0x006F87E2: je 0x6f8a0f */
L_006F87E8:
    /* cmp eax, 2 */ /* 0x006F87E8: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8A0F; /* 0x006F87EB: je 0x6f8a0f */
L_006F87F1:
    /* cmp eax, 3 */ /* 0x006F87F1: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8A0F; /* 0x006F87F4: je 0x6f8a0f */
L_006F87FA:
    ecx = MEM32(ebp + 0xC); /* 0x006F87FA: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x006F87FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F89F9; /* 0x006F87FF: jle 0x6f89f9 */
L_006F8805:
    edx = MEM32(ebp + 0x10); /* 0x006F8805: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x006F8808: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F89F9; /* 0x006F880A: jle 0x6f89f9 */
L_006F8810:
    eax = MEM32(edi + 0xB4); /* 0x006F8810: mov eax, dword ptr [edi + 0xb4] */
    /* test eax, eax */ /* 0x006F8816: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F881E; /* 0x006F8818: je 0x6f881e */
L_006F881A:
    /* cmp ecx, eax */ /* 0x006F881A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F882C; /* 0x006F881C: jg 0x6f882c */
L_006F881E:
    ecx = MEM32(edi + 0xB8); /* 0x006F881E: mov ecx, dword ptr [edi + 0xb8] */
    /* test ecx, ecx */ /* 0x006F8824: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8849; /* 0x006F8826: je 0x6f8849 */
L_006F8828:
    /* cmp edx, ecx */ /* 0x006F8828: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F8849; /* 0x006F882A: jle 0x6f8849 */
L_006F882C:
    PUSH32(esp, MEM32(edi + 0xB8)); /* 0x006F882C: push dword ptr [edi + 0xb8] */
    PUSH32(esp, eax); /* 0x006F8832: push eax */
    PUSH32(esp, 0x0080647Cu); /* 0x006F8833: push 0x80647c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8838: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F883D: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8840: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8842: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8843: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8844: pop ebx */
    esp = ebp; /* 0x006F8845: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8847: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8848: ret  */
L_006F8849:
    PUSH32(esp, 0x50u); /* 0x006F8849: push 0x50 */
    PUSH32(esp, 1); /* 0x006F884B: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006F884D: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F8853: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8855: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F8858: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8872; /* 0x006F885A: jne 0x6f8872 */
L_006F885C:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F885C: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8861: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8866: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8869: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F886B: pop edi */
    esi = POP32_VAL(esp); /* 0x006F886C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F886D: pop ebx */
    esp = ebp; /* 0x006F886E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8870: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8871: ret  */
L_006F8872:
    eax = MEM32(ebp + 0x8); /* 0x006F8872: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x006F8875: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x006F8878: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi) = 0x0092501Au; /* 0x006F887B: mov dword ptr [esi], 0x92501a */
    MEM32(esi + 0x4) = ebx; /* 0x006F8881: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = eax; /* 0x006F8884: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = edx; /* 0x006F8887: mov dword ptr [esi + 0xc], edx */
    MEM32(esi + 0x10) = ecx; /* 0x006F888A: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x1C) = 0xFFFFFFFFu; /* 0x006F888D: mov dword ptr [esi + 0x1c], 0xffffffff */
    MEM32(esi + 0x20) = edi; /* 0x006F8894: mov dword ptr [esi + 0x20], edi */
    eax = MEM32(edi + 0x130); /* 0x006F8897: mov eax, dword ptr [edi + 0x130] */
    MEM32(esi + 0x4C) = eax; /* 0x006F889D: mov dword ptr [esi + 0x4c], eax */
    eax = MEM32(edi + 0x130); /* 0x006F88A0: mov eax, dword ptr [edi + 0x130] */
    /* test eax, eax */ /* 0x006F88A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F88AD; /* 0x006F88A8: je 0x6f88ad */
L_006F88AA:
    MEM32(eax + 0x48) = esi; /* 0x006F88AA: mov dword ptr [eax + 0x48], esi */
L_006F88AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F88AD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x130) = esi; /* 0x006F88AF: mov dword ptr [edi + 0x130], esi */
    /* cmp MEM32(edi + 0x70), ecx */ /* 0x006F88B5: cmp dword ptr [edi + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x70)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F88D1; /* 0x006F88B8: jbe 0x6f88d1 */
L_006F88BA:
    eax = edi + 0x74; /* 0x006F88BA: lea eax, [edi + 0x74] */
    ecx = ecx; /* 0x006F88BD: lea ecx, [ecx] */
L_006F88C0:
    /* cmp MEM32(eax), ebx */ /* 0x006F88C0: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F896D; /* 0x006F88C2: je 0x6f896d */
L_006F88C8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F88C8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F88C9: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(edi + 0x70) */ /* 0x006F88CC: cmp ecx, dword ptr [edi + 0x70] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006F88C0; /* 0x006F88CF: jb 0x6f88c0 */
L_006F88D1:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006F88D1: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x006F88D4: mov ecx, edi */
    PUSH32(esp, edx); /* 0x006F88D6: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F88D7: push dword ptr [ebp + 8] */
    edx = ebx; /* 0x006F88DA: mov edx, ebx */
    RECOMP_CALL(sub_006F85E0); /* 0x006F88DC: call 0x6f85e0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006F88E1: mov edx, eax */
    ecx = edi; /* 0x006F88E3: mov ecx, edi */
    RECOMP_CALL(sub_006F8770); /* 0x006F88E5: call 0x6f8770 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006F88EA: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F88EC: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x24) = ecx; /* 0x006F88EF: mov dword ptr [esi + 0x24], ecx */
    /* test ecx, ecx */ /* 0x006F88F2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F897B; /* 0x006F88F4: je 0x6f897b */
L_006F88FA:
    eax = MEM32(esi + 0x4C); /* 0x006F88FA: mov eax, dword ptr [esi + 0x4c] */
    MEM32(ecx + 0x4C) = eax; /* 0x006F88FD: mov dword ptr [ecx + 0x4c], eax */
    eax = MEM32(esi + 0x24); /* 0x006F8900: mov eax, dword ptr [esi + 0x24] */
    ecx = MEM32(eax + 0x4C); /* 0x006F8903: mov ecx, dword ptr [eax + 0x4c] */
    /* test ecx, ecx */ /* 0x006F8906: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F890D; /* 0x006F8908: je 0x6f890d */
L_006F890A:
    MEM32(ecx + 0x48) = eax; /* 0x006F890A: mov dword ptr [ecx + 0x48], eax */
L_006F890D:
    eax = MEM32(esi + 0x24); /* 0x006F890D: mov eax, dword ptr [esi + 0x24] */
    eax = MEM32(eax + 0x48); /* 0x006F8910: mov eax, dword ptr [eax + 0x48] */
    MEM32(esi + 0x48) = eax; /* 0x006F8913: mov dword ptr [esi + 0x48], eax */
    /* test eax, eax */ /* 0x006F8916: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F891D; /* 0x006F8918: je 0x6f891d */
L_006F891A:
    MEM32(eax + 0x4C) = esi; /* 0x006F891A: mov dword ptr [eax + 0x4c], esi */
L_006F891D:
    eax = MEM32(esi + 0x24); /* 0x006F891D: mov eax, dword ptr [esi + 0x24] */
    MEM32(eax + 0x48) = esi; /* 0x006F8920: mov dword ptr [eax + 0x48], esi */
    eax = MEM32(esi + 0x24); /* 0x006F8923: mov eax, dword ptr [esi + 0x24] */
    MEM32(esi + 0x4C) = eax; /* 0x006F8926: mov dword ptr [esi + 0x4c], eax */
    MEM32(edi + 0x130) = esi; /* 0x006F8929: mov dword ptr [edi + 0x130], esi */
    eax = MEM32(esi + 0x4); /* 0x006F892F: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006F8932: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F898B; /* 0x006F8934: je 0x6f898b */
L_006F8936:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F8936: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F893B: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F898B; /* 0x006F8940: je 0x6f898b */
L_006F8942:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006F8942: push dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x006F8945: mov edx, dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x006F8948: mov ecx, ebx */
    RECOMP_CALL(sub_0070B0A0); /* 0x006F894A: call 0x70b0a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F894F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x28) = eax; /* 0x006F8952: mov dword ptr [esi + 0x28], eax */
    /* test eax, eax */ /* 0x006F8955: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F89F0; /* 0x006F8957: jne 0x6f89f0 */
L_006F895D:
    ecx = esi; /* 0x006F895D: mov ecx, esi */
    RECOMP_CALL(sub_006F99A0); /* 0x006F895F: call 0x6f99a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8964: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8966: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8967: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8968: pop ebx */
    esp = ebp; /* 0x006F8969: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F896B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F896C: ret  */
L_006F896D:
    eax = MEM32(edi + 0xC); /* 0x006F896D: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, esi); /* 0x006F8970: push esi */
    PUSH32(esp, edi); /* 0x006F8971: push edi */
    RECOMP_ICALL(eax); /* 0x006F8972: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8974: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F8977: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F89F0; /* 0x006F8979: jns 0x6f89f0 */
L_006F897B:
    ecx = esi; /* 0x006F897B: mov ecx, esi */
    RECOMP_CALL(sub_006F99A0); /* 0x006F897D: call 0x6f99a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8982: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8984: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8985: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8986: pop ebx */
    esp = ebp; /* 0x006F8987: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8989: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F898A: ret  */
L_006F898B:
    /* cmp MEM32(ebp + 0x8), 1 */ /* 0x006F898B: cmp dword ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F89F0; /* 0x006F898F: jne 0x6f89f0 */
L_006F8991:
    /* test ebx, ebx */ /* 0x006F8991: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F89C9; /* 0x006F8993: je 0x6f89c9 */
L_006F8995:
    eax = ebx; /* 0x006F8995: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F8997: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F899C: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F89C9; /* 0x006F89A1: je 0x6f89c9 */
L_006F89A3:
    /* cmp ebx, 0x32595559u */ /* 0x006F89A3: cmp ebx, 0x32595559 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F89C2; /* 0x006F89A9: je 0x6f89c2 */
L_006F89AB:
    /* cmp ebx, 0x59565955u */ /* 0x006F89AB: cmp ebx, 0x59565955 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F89C2; /* 0x006F89B1: je 0x6f89c2 */
L_006F89B3:
    /* cmp ebx, 0x55595659u */ /* 0x006F89B3: cmp ebx, 0x55595659 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x55595659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F89C2; /* 0x006F89B9: je 0x6f89c2 */
L_006F89BB:
    eax = 1; /* 0x006F89BB: mov eax, 1 */
    goto L_006F89CC; /* 0x006F89C0: jmp 0x6f89cc */
L_006F89C2:
    eax = 2; /* 0x006F89C2: mov eax, 2 */
    goto L_006F89CC; /* 0x006F89C7: jmp 0x6f89cc */
L_006F89C9:
    eax = (uint32_t)LO8(ebx); /* 0x006F89C9: movzx eax, bl */
L_006F89CC:
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x006F89CC: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x006F89D0: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x006F89D3: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x006F89D6: mov dword ptr [esi + 0x30], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x006F89D9: imul eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x006F89DD: push eax */
    PUSH32(esp, 1); /* 0x006F89DE: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006F89E0: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F89E6: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x2C) = eax; /* 0x006F89E9: mov dword ptr [esi + 0x2c], eax */
    /* test eax, eax */ /* 0x006F89EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F897B; /* 0x006F89EE: je 0x6f897b */
L_006F89F0:
    eax = esi; /* 0x006F89F0: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F89F2: pop edi */
    esi = POP32_VAL(esp); /* 0x006F89F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F89F4: pop ebx */
    esp = ebp; /* 0x006F89F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F89F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F89F8: ret  */
L_006F89F9:
    PUSH32(esp, 0x008064A4u); /* 0x006F89F9: push 0x8064a4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F89FE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8A03: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8A06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8A08: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8A09: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8A0A: pop ebx */
    esp = ebp; /* 0x006F8A0B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8A0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8A0E: ret  */
L_006F8A0F:
    PUSH32(esp, 0x008063E8u); /* 0x006F8A0F: push 0x8063e8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8A14: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8A19: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8A1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8A1E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8A1F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8A20: pop ebx */
    esp = ebp; /* 0x006F8A21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8A23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8A24: ret  */
L_006F8A25:
    PUSH32(esp, 0x00806458u); /* 0x006F8A25: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8A2A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8A2F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8A32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8A34: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8A35: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8A36: pop ebx */
    esp = ebp; /* 0x006F8A37: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8A39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8A3A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8A40u);

L_006F8A40:
    PUSH32(esp, ebp); /* 0x006F8A40: push ebp */
    ebp = esp; /* 0x006F8A41: mov ebp, esp */
    /* test ecx, ecx */ /* 0x006F8A43: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8A6B; /* 0x006F8A45: je 0x6f8a6b */
L_006F8A47:
    /* cmp MEM32(ecx), 0x0092501Au */ /* 0x006F8A47: cmp dword ptr [ecx], 0x92501a */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x0092501Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8A6B; /* 0x006F8A4D: jne 0x6f8a6b */
L_006F8A4F:
    edx = MEM32(ebp + 0xC); /* 0x006F8A4F: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x006F8A52: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8A5B; /* 0x006F8A54: je 0x6f8a5b */
L_006F8A56:
    eax = MEM32(ecx + 0xC); /* 0x006F8A56: mov eax, dword ptr [ecx + 0xc] */
    MEM32(edx) = eax; /* 0x006F8A59: mov dword ptr [edx], eax */
L_006F8A5B:
    edx = MEM32(ebp + 0x10); /* 0x006F8A5B: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x006F8A5E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8A67; /* 0x006F8A60: je 0x6f8a67 */
L_006F8A62:
    eax = MEM32(ecx + 0x10); /* 0x006F8A62: mov eax, dword ptr [ecx + 0x10] */
    MEM32(edx) = eax; /* 0x006F8A65: mov dword ptr [edx], eax */
L_006F8A67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8A67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F8A69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8A6A: ret  */
L_006F8A6B:
    PUSH32(esp, 0x0080646Cu); /* 0x006F8A6B: push 0x80646c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8A70: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8A75: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F8A78: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F8A7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8A7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8A80u);

L_006F8A80:
    PUSH32(esp, ebp); /* 0x006F8A80: push ebp */
    ebp = esp; /* 0x006F8A81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006F8A83: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F8A86: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F8A8B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F8A8D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x006F8A90: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x006F8A93: push ebx */
    PUSH32(esp, esi); /* 0x006F8A94: push esi */
    PUSH32(esp, edi); /* 0x006F8A95: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F8A96: push dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x006F8A99: mov edi, ecx */
    PUSH32(esp, eax); /* 0x006F8A9B: push eax */
    ebx = MEM32(edi + 0x24); /* 0x006F8A9C: mov ebx, dword ptr [edi + 0x24] */
    ecx = MEM32(edi + 0x28); /* 0x006F8A9F: mov ecx, dword ptr [edi + 0x28] */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x006F8AA2: mov dword ptr [ebp - 0x1c], ebx */
    RECOMP_CALL(sub_0070B2F0); /* 0x006F8AA5: call 0x70b2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8AAA: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F8AAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F8AC5; /* 0x006F8AAF: jns 0x6f8ac5 */
L_006F8AB1:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F8AB1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8AB4: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8AB5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8AB6: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8AB7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8ABA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8ABC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8AC1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8AC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8AC4: ret  */
L_006F8AC5:
    /* cmp MEM32(edi + 0x8), 1 */ /* 0x006F8AC5: cmp dword ptr [edi + 8], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0xC); /* 0x006F8AC9: mov ecx, dword ptr [edi + 0xc] */
    edx = MEM32(edi + 0x10); /* 0x006F8ACC: mov edx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x14)) = 0; /* 0x006F8ACF: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x10)) = 0; /* 0x006F8AD6: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006F8ADD: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006F8AE0: mov dword ptr [ebp - 8], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8B35; /* 0x006F8AE3: jne 0x6f8b35 */
L_006F8AE5:
    eax = ebp + (-0x1C); /* 0x006F8AE5: lea eax, [ebp - 0x1c] */
    ecx = ebx; /* 0x006F8AE8: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x006F8AEA: push eax */
    eax = ebp + (-0x18); /* 0x006F8AEB: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x006F8AEE: push eax */
    edx = ebp + (-0x14); /* 0x006F8AEF: lea edx, [ebp - 0x14] */
    RECOMP_CALL(sub_006F8EE0); /* 0x006F8AF2: call 0x6f8ee0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8AF7: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F8AFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F8AB1; /* 0x006F8AFC: js 0x6f8ab1 */
L_006F8AFE:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x006F8AFE: push dword ptr [ebp - 0x1c] */
    ecx = MEM32(edi + 0x28); /* 0x006F8B01: mov ecx, dword ptr [edi + 0x28] */
    edx = ebp + (-0x14); /* 0x006F8B04: lea edx, [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x006F8B07: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006F8B0A: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x006F8B0D: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x006F8B10: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_0070B610); /* 0x006F8B13: call 0x70b610 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F8B18: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x006F8B1B: mov ecx, ebx */
    RECOMP_CALL(sub_006F9120); /* 0x006F8B1D: call 0x6f9120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8B22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8B24: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8B25: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8B26: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8B27: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8B2A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8B2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8B31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8B33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8B34: ret  */
L_006F8B35:
    ebx = MEM32(ebx + 0x4); /* 0x006F8B35: mov ebx, dword ptr [ebx + 4] */
    /* test ebx, ebx */ /* 0x006F8B38: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8B70; /* 0x006F8B3A: je 0x6f8b70 */
L_006F8B3C:
    eax = ebx; /* 0x006F8B3C: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F8B3E: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F8B43: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8B70; /* 0x006F8B48: je 0x6f8b70 */
L_006F8B4A:
    /* cmp ebx, 0x32595559u */ /* 0x006F8B4A: cmp ebx, 0x32595559 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8B69; /* 0x006F8B50: je 0x6f8b69 */
L_006F8B52:
    /* cmp ebx, 0x59565955u */ /* 0x006F8B52: cmp ebx, 0x59565955 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8B69; /* 0x006F8B58: je 0x6f8b69 */
L_006F8B5A:
    /* cmp ebx, 0x55595659u */ /* 0x006F8B5A: cmp ebx, 0x55595659 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x55595659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8B69; /* 0x006F8B60: je 0x6f8b69 */
L_006F8B62:
    esi = 1; /* 0x006F8B62: mov esi, 1 */
    goto L_006F8B73; /* 0x006F8B67: jmp 0x6f8b73 */
L_006F8B69:
    esi = 2; /* 0x006F8B69: mov esi, 2 */
    goto L_006F8B73; /* 0x006F8B6E: jmp 0x6f8b73 */
L_006F8B70:
    esi = (uint32_t)LO8(ebx); /* 0x006F8B70: movzx esi, bl */
L_006F8B73:
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x006F8B73: imul esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x006F8B76: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    esi = esi & 0xFFFFFFFCu; /* 0x006F8B79: and esi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x006F8B7C: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x006F8B7E: imul eax, edx */
    PUSH32(esp, eax); /* 0x006F8B81: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F8B82: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8B88: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x006F8B8B: mov dword ptr [ebp - 0x18], eax */
    /* test eax, eax */ /* 0x006F8B8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8BB0; /* 0x006F8B90: jne 0x6f8bb0 */
L_006F8B92:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F8B92: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8B97: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8B9C: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8B9F: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8BA0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8BA1: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8BA2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8BA5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8BA7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8BAC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8BAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8BAF: ret  */
L_006F8BB0:
    ecx = MEM32(edi + 0x28); /* 0x006F8BB0: mov ecx, dword ptr [edi + 0x28] */
    edx = ebp + (-0x14); /* 0x006F8BB3: lea edx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x006F8BB6: push esi */
    PUSH32(esp, eax); /* 0x006F8BB7: push eax */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x006F8BB8: push dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006F8BBB: push dword ptr [edi + 0xc] */
    PUSH32(esp, ebx); /* 0x006F8BBE: push ebx */
    RECOMP_CALL(sub_0070B610); /* 0x006F8BBF: call 0x70b610 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x006F8BC4: mov ecx, dword ptr [ebp - 0x1c] */
    edx = ebp + (-0x14); /* 0x006F8BC7: lea edx, [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F8BCA: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006F8BCD: push esi */
    esi = MEM32(ebp + (-0x18)); /* 0x006F8BCE: mov esi, dword ptr [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x006F8BD1: push esi */
    RECOMP_CALL(sub_006F8D20); /* 0x006F8BD2: call 0x6f8d20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F8BD7: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F8BD8: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8BDE: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F8BE1: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8BE4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8BE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8BE8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8BE9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8BEA: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8BEB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8BF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8BF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8BF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8C00u);

L_006F8C00:
    PUSH32(esp, ebp); /* 0x006F8C00: push ebp */
    ebp = esp; /* 0x006F8C01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F8C03: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F8C06: push ebx */
    PUSH32(esp, esi); /* 0x006F8C07: push esi */
    esi = ecx; /* 0x006F8C08: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F8C0A: push edi */
    edi = edx; /* 0x006F8C0B: mov edi, edx */
    MEM32(ebp + (-0x8)) = esi; /* 0x006F8C0D: mov dword ptr [ebp - 8], esi */
    /* cmp MEM32(esi + 0x8), 1 */ /* 0x006F8C10: cmp dword ptr [esi + 8], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esi + 0x24); /* 0x006F8C14: mov ebx, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006F8C17: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8C6C; /* 0x006F8C1A: jne 0x6f8c6c */
L_006F8C1C:
    eax = ebp + (-0x4); /* 0x006F8C1C: lea eax, [ebp - 4] */
    ecx = ebx; /* 0x006F8C1F: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x006F8C21: push eax */
    eax = ebp + (-0x8); /* 0x006F8C22: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006F8C25: push eax */
    RECOMP_CALL(sub_006F8EE0); /* 0x006F8C26: call 0x6f8ee0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8C2B: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F8C2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F8C3C; /* 0x006F8C30: jns 0x6f8c3c */
L_006F8C32:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F8C32: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8C35: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8C36: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8C37: pop ebx */
    esp = ebp; /* 0x006F8C38: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8C3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8C3B: ret  */
L_006F8C3C:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006F8C3C: push dword ptr [ebp - 4] */
    edx = MEM32(edi + 0xC); /* 0x006F8C3F: mov edx, dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006F8C42: push dword ptr [ebp - 8] */
    ecx = MEM32(edi + 0x8); /* 0x006F8C45: mov ecx, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x006F8C48: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F8C4B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F8C4E: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006F8C51: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_006F7170); /* 0x006F8C54: call 0x6f7170 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F8C59: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x006F8C5C: mov ecx, ebx */
    RECOMP_CALL(sub_006F9120); /* 0x006F8C5E: call 0x6f9120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8C63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8C65: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8C66: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8C67: pop ebx */
    esp = ebp; /* 0x006F8C68: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8C6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8C6B: ret  */
L_006F8C6C:
    ebx = MEM32(ebx + 0x4); /* 0x006F8C6C: mov ebx, dword ptr [ebx + 4] */
    /* test ebx, ebx */ /* 0x006F8C6F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8CA7; /* 0x006F8C71: je 0x6f8ca7 */
L_006F8C73:
    eax = ebx; /* 0x006F8C73: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F8C75: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F8C7A: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8CA7; /* 0x006F8C7F: je 0x6f8ca7 */
L_006F8C81:
    /* cmp ebx, 0x32595559u */ /* 0x006F8C81: cmp ebx, 0x32595559 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8CA0; /* 0x006F8C87: je 0x6f8ca0 */
L_006F8C89:
    /* cmp ebx, 0x59565955u */ /* 0x006F8C89: cmp ebx, 0x59565955 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8CA0; /* 0x006F8C8F: je 0x6f8ca0 */
L_006F8C91:
    /* cmp ebx, 0x55595659u */ /* 0x006F8C91: cmp ebx, 0x55595659 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x55595659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8CA0; /* 0x006F8C97: je 0x6f8ca0 */
L_006F8C99:
    eax = 1; /* 0x006F8C99: mov eax, 1 */
    goto L_006F8CAA; /* 0x006F8C9E: jmp 0x6f8caa */
L_006F8CA0:
    eax = 2; /* 0x006F8CA0: mov eax, 2 */
    goto L_006F8CAA; /* 0x006F8CA5: jmp 0x6f8caa */
L_006F8CA7:
    eax = (uint32_t)LO8(ebx); /* 0x006F8CA7: movzx eax, bl */
L_006F8CAA:
    esi = MEM32(edi + 0x8); /* 0x006F8CAA: mov esi, dword ptr [edi + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x006F8CAD: imul esi, eax */
    eax = MEM32(edi + 0xC); /* 0x006F8CB0: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x006F8CB3: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    esi = esi & 0xFFFFFFFCu; /* 0x006F8CB6: and esi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x006F8CB9: imul eax, esi */
    PUSH32(esp, eax); /* 0x006F8CBC: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F8CBD: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8CC3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F8CC6: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006F8CC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8CE1; /* 0x006F8CCB: jne 0x6f8ce1 */
L_006F8CCD:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F8CCD: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8CD2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8CD7: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8CDA: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8CDB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8CDC: pop ebx */
    esp = ebp; /* 0x006F8CDD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8CDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8CE0: ret  */
L_006F8CE1:
    edx = MEM32(edi + 0xC); /* 0x006F8CE1: mov edx, dword ptr [edi + 0xc] */
    ecx = MEM32(edi + 0x8); /* 0x006F8CE4: mov ecx, dword ptr [edi + 8] */
    PUSH32(esp, esi); /* 0x006F8CE7: push esi */
    PUSH32(esp, eax); /* 0x006F8CE8: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x006F8CE9: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x006F8CEC: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F8CED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F8CF0: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006F8CF3: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_006F7170); /* 0x006F8CF6: call 0x6f7170 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x006F8CFB: mov ecx, dword ptr [ebp - 0xc] */
    edx = edi; /* 0x006F8CFE: mov edx, edi */
    PUSH32(esp, esi); /* 0x006F8D00: push esi */
    esi = MEM32(ebp + (-0x4)); /* 0x006F8D01: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x006F8D04: push esi */
    RECOMP_CALL(sub_006F8D20); /* 0x006F8D05: call 0x6f8d20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F8D0A: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F8D0B: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x006F8D11: add esp, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8D14: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8D16: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8D17: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F8D18: pop ebx */
    esp = ebp; /* 0x006F8D19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8D1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8D1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8D20u);

L_006F8D20:
    PUSH32(esp, ebp); /* 0x006F8D20: push ebp */
    ebp = esp; /* 0x006F8D21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F8D23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006F8D26: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F8D29: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F8D2E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = eax; /* 0x006F8D30: mov dword ptr [esp + 0x14], eax */
    PUSH32(esp, esi); /* 0x006F8D34: push esi */
    PUSH32(esp, edi); /* 0x006F8D35: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006F8D36: mov edi, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x006F8D39: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8E3A; /* 0x006F8D3B: je 0x6f8e3a */
L_006F8D41:
    /* cmp MEM32(ecx), 0x0092501Au */ /* 0x006F8D41: cmp dword ptr [ecx], 0x92501a */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x0092501Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8E3A; /* 0x006F8D47: jne 0x6f8e3a */
L_006F8D4D:
    /* test edi, edi */ /* 0x006F8D4D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8D74; /* 0x006F8D4F: jne 0x6f8d74 */
L_006F8D51:
    PUSH32(esp, 0x008063E0u); /* 0x006F8D51: push 0x8063e0 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F8D56: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8D5B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8D60: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8D63: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8D64: pop esi */
    ecx = MEM32(esp + 0x14); /* 0x006F8D65: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F8D69: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8D6B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8D70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8D72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8D73: ret  */
L_006F8D74:
    esi = MEM32(ebp + 0xC); /* 0x006F8D74: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x006F8D77: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8D9E; /* 0x006F8D79: jne 0x6f8d9e */
L_006F8D7B:
    PUSH32(esp, 0x008063D8u); /* 0x006F8D7B: push 0x8063d8 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F8D80: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8D85: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8D8A: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8D8D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8D8E: pop esi */
    ecx = MEM32(esp + 0x14); /* 0x006F8D8F: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F8D93: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8D95: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8D9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8D9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8D9D: ret  */
L_006F8D9E:
    /* test edx, edx */ /* 0x006F8D9E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8DBC; /* 0x006F8DA0: jne 0x6f8dbc */
L_006F8DA2:
    eax = MEM32(ecx + 0xC); /* 0x006F8DA2: mov eax, dword ptr [ecx + 0xc] */
    MEM32(esp + 0x14) = eax; /* 0x006F8DA5: mov dword ptr [esp + 0x14], eax */
    eax = MEM32(ecx + 0x10); /* 0x006F8DA9: mov eax, dword ptr [ecx + 0x10] */
    MEM32(esp + 0xC) = edx; /* 0x006F8DAC: mov dword ptr [esp + 0xc], edx */
    MEM32(esp + 0x10) = edx; /* 0x006F8DB0: mov dword ptr [esp + 0x10], edx */
    edx = esp + 0xC; /* 0x006F8DB4: lea edx, [esp + 0xc] */
    MEM32(esp + 0x18) = eax; /* 0x006F8DB8: mov dword ptr [esp + 0x18], eax */
L_006F8DBC:
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x006F8DBC: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8E27; /* 0x006F8DC0: je 0x6f8e27 */
L_006F8DC2:
    /* cmp MEM32(edx + 0xC), 0 */ /* 0x006F8DC2: cmp dword ptr [edx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8E27; /* 0x006F8DC6: je 0x6f8e27 */
L_006F8DC8:
    /* cmp MEM32(ecx + 0x28), 0 */ /* 0x006F8DC8: cmp dword ptr [ecx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006F8DCC: push esi */
    PUSH32(esp, edi); /* 0x006F8DCD: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8DE9; /* 0x006F8DCE: je 0x6f8de9 */
L_006F8DD0:
    RECOMP_CALL(sub_006F8A80); /* 0x006F8DD0: call 0x6f8a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8DD5: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8DD8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8DD9: pop esi */
    ecx = MEM32(esp + 0x14); /* 0x006F8DDA: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F8DDE: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8DE0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8DE5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8DE7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8DE8: ret  */
L_006F8DE9:
    /* cmp MEM32(ecx + 0x24), 0 */ /* 0x006F8DE9: cmp dword ptr [ecx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8E08; /* 0x006F8DED: je 0x6f8e08 */
L_006F8DEF:
    RECOMP_CALL(sub_006F8C00); /* 0x006F8DEF: call 0x6f8c00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8DF4: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8DF7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8DF8: pop esi */
    ecx = MEM32(esp + 0x14); /* 0x006F8DF9: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F8DFD: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8DFF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8E04: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8E06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8E07: ret  */
L_006F8E08:
    eax = MEM32(ecx + 0x20); /* 0x006F8E08: mov eax, dword ptr [ecx + 0x20] */
    PUSH32(esp, edx); /* 0x006F8E0B: push edx */
    PUSH32(esp, ecx); /* 0x006F8E0C: push ecx */
    PUSH32(esp, eax); /* 0x006F8E0D: push eax */
    eax = MEM32(eax + 0x1C); /* 0x006F8E0E: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x006F8E11: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F8E13: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8E16: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8E17: pop esi */
    ecx = MEM32(esp + 0x14); /* 0x006F8E18: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F8E1C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8E1E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8E23: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8E25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8E26: ret  */
L_006F8E27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8E27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8E29: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8E2A: pop esi */
    ecx = MEM32(esp + 0x14); /* 0x006F8E2B: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F8E2F: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8E31: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8E36: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8E38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8E39: ret  */
L_006F8E3A:
    PUSH32(esp, 0x0080646Cu); /* 0x006F8E3A: push 0x80646c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8E3F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x20); /* 0x006F8E44: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8E48: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F8E4B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8E4E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8E4F: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F8E50: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8E52: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8E57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8E59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8E5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8E60u);

L_006F8E60:
    PUSH32(esp, ebp); /* 0x006F8E60: push ebp */
    ebp = esp; /* 0x006F8E61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006F8E63: push esi */
    PUSH32(esp, edi); /* 0x006F8E64: push edi */
    edi = edx; /* 0x006F8E65: mov edi, edx */
    esi = ecx; /* 0x006F8E67: mov esi, ecx */
    _xmm[0] = xmm_ld(edi); /* 0x006F8E69: movdqu xmm0, xmmword ptr [edi] */
    ecx = MEM32(esi + 0x4); /* 0x006F8E6D: mov ecx, dword ptr [esi + 4] */
    xmm_st(esi + 0x34, _xmm[0]); /* 0x006F8E70: movdqu xmmword ptr [esi + 0x34], xmm0 */
    /* test ecx, ecx */ /* 0x006F8E75: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8EAD; /* 0x006F8E77: je 0x6f8ead */
L_006F8E79:
    eax = ecx; /* 0x006F8E79: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F8E7B: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F8E80: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8EAD; /* 0x006F8E85: je 0x6f8ead */
L_006F8E87:
    /* cmp ecx, 0x32595559u */ /* 0x006F8E87: cmp ecx, 0x32595559 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8EA6; /* 0x006F8E8D: je 0x6f8ea6 */
L_006F8E8F:
    /* cmp ecx, 0x59565955u */ /* 0x006F8E8F: cmp ecx, 0x59565955 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8EA6; /* 0x006F8E95: je 0x6f8ea6 */
L_006F8E97:
    /* cmp ecx, 0x55595659u */ /* 0x006F8E97: cmp ecx, 0x55595659 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x55595659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8EA6; /* 0x006F8E9D: je 0x6f8ea6 */
L_006F8E9F:
    edx = 1; /* 0x006F8E9F: mov edx, 1 */
    goto L_006F8EB0; /* 0x006F8EA4: jmp 0x6f8eb0 */
L_006F8EA6:
    edx = 2; /* 0x006F8EA6: mov edx, 2 */
    goto L_006F8EB0; /* 0x006F8EAB: jmp 0x6f8eb0 */
L_006F8EAD:
    edx = (uint32_t)LO8(ecx); /* 0x006F8EAD: movzx edx, cl */
L_006F8EB0:
    ecx = MEM32(edi + 0x4); /* 0x006F8EB0: mov ecx, dword ptr [edi + 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x30)); /* 0x006F8EB3: imul ecx, dword ptr [esi + 0x30] */
    eax = MEM32(edi); /* 0x006F8EB7: mov eax, dword ptr [edi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x006F8EB9: imul eax, edx */
    edi = POP32_VAL(esp); /* 0x006F8EBC: pop edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006F8EBD: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x006F8EBF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x2C); /* 0x006F8EC2: add ecx, dword ptr [esi + 0x2c] */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x006F8EC5: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0xC); /* 0x006F8EC7: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x30); /* 0x006F8ECA: mov ecx, dword ptr [esi + 0x30] */
    esi = POP32_VAL(esp); /* 0x006F8ECD: pop esi */
    MEM32(eax) = ecx; /* 0x006F8ECE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F8ED0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F8ED2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8ED3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8EE0u);

L_006F8EE0:
    PUSH32(esp, ebp); /* 0x006F8EE0: push ebp */
    ebp = esp; /* 0x006F8EE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006F8EE3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F8EE6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F8EEB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F8EED: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006F8EF0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F8EF1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006F8EF4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006F8EF5: mov edi, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x006F8EF8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8FA7; /* 0x006F8EFA: je 0x6f8fa7 */
L_006F8F00:
    /* cmp MEM32(ecx), 0x0092501Au */ /* 0x006F8F00: cmp dword ptr [ecx], 0x92501a */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x0092501Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F8FA7; /* 0x006F8F06: jne 0x6f8fa7 */
L_006F8F0C:
    /* cmp MEM32(ecx + 0x8), 1 */ /* 0x006F8F0C: cmp dword ptr [ecx + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8F2F; /* 0x006F8F10: je 0x6f8f2f */
L_006F8F12:
    PUSH32(esp, 0x00806524u); /* 0x006F8F12: push 0x806524 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8F17: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8F1C: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8F1F: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8F20: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8F21: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8F24: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8F26: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8F2B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8F2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8F2E: ret  */
L_006F8F2F:
    /* test edx, edx */ /* 0x006F8F2F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F8F48; /* 0x006F8F31: jne 0x6f8f48 */
L_006F8F33:
    eax = MEM32(ecx + 0xC); /* 0x006F8F33: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F8F36: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ecx + 0x10); /* 0x006F8F39: mov eax, dword ptr [ecx + 0x10] */
    MEM32(ebp + (-0x14)) = edx; /* 0x006F8F3C: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006F8F3F: mov dword ptr [ebp - 0x10], edx */
    edx = ebp + (-0x14); /* 0x006F8F42: lea edx, [ebp - 0x14] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F8F45: mov dword ptr [ebp - 8], eax */
L_006F8F48:
    eax = MEM32(ecx + 0x28); /* 0x006F8F48: mov eax, dword ptr [ecx + 0x28] */
    PUSH32(esp, edi); /* 0x006F8F4B: push edi */
    PUSH32(esp, esi); /* 0x006F8F4C: push esi */
    /* test eax, eax */ /* 0x006F8F4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F8F6B; /* 0x006F8F4F: je 0x6f8f6b */
L_006F8F51:
    ecx = eax; /* 0x006F8F51: mov ecx, eax */
    RECOMP_CALL(sub_0070B580); /* 0x006F8F53: call 0x70b580 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8F58: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8F5B: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8F5C: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8F5D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8F60: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8F62: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8F67: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8F69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8F6A: ret  */
L_006F8F6B:
    /* cmp MEM32(ecx + 0x24), 0 */ /* 0x006F8F6B: cmp dword ptr [ecx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F8F89; /* 0x006F8F6F: je 0x6f8f89 */
L_006F8F71:
    RECOMP_CALL(sub_006F8E60); /* 0x006F8F71: call 0x6f8e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F8F76: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8F79: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8F7A: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8F7B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8F7E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8F80: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8F85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8F87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8F88: ret  */
L_006F8F89:
    eax = MEM32(ecx + 0x20); /* 0x006F8F89: mov eax, dword ptr [ecx + 0x20] */
    PUSH32(esp, edx); /* 0x006F8F8C: push edx */
    PUSH32(esp, ecx); /* 0x006F8F8D: push ecx */
    PUSH32(esp, eax); /* 0x006F8F8E: push eax */
    eax = MEM32(eax + 0x24); /* 0x006F8F8F: mov eax, dword ptr [eax + 0x24] */
    RECOMP_ICALL(eax); /* 0x006F8F92: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F8F94: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F8F97: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8F98: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8F99: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8F9C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8F9E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8FA3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8FA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8FA6: ret  */
L_006F8FA7:
    PUSH32(esp, 0x0080646Cu); /* 0x006F8FA7: push 0x80646c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F8FAC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F8FB1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F8FB4: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F8FB7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F8FB9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F8FBC: pop edi */
    esi = POP32_VAL(esp); /* 0x006F8FBD: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F8FBE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F8FC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F8FC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F8FC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F8FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F8FD0u);

L_006F8FD0:
    PUSH32(esp, ebp); /* 0x006F8FD0: push ebp */
    ebp = esp; /* 0x006F8FD1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x006F8FD3: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F8FD6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F8FDB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F8FDD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006F8FE0: push esi */
    esi = ecx; /* 0x006F8FE1: mov esi, ecx */
    MEM32(ebp + (-0x18)) = 0; /* 0x006F8FE3: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, edi); /* 0x006F8FEA: push edi */
    edx = ebp + (-0x14); /* 0x006F8FEB: lea edx, [ebp - 0x14] */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006F8FEE: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x006F8FF5: mov dword ptr [ebp - 0x14], 0 */
    eax = MEM32(esi + 0xC); /* 0x006F8FFC: mov eax, dword ptr [esi + 0xc] */
    edi = MEM32(esi + 0x24); /* 0x006F8FFF: mov edi, dword ptr [esi + 0x24] */
    ecx = edi; /* 0x006F9002: mov ecx, edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F9004: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi + 0x10); /* 0x006F9007: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F900A: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x1C); /* 0x006F900D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x006F9010: push eax */
    eax = ebp + (-0x18); /* 0x006F9011: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = 0; /* 0x006F9014: mov dword ptr [ebp - 0x10], 0 */
    PUSH32(esp, eax); /* 0x006F901B: push eax */
    RECOMP_CALL(sub_006F8EE0); /* 0x006F901C: call 0x6f8ee0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F9021: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F9024: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F904C; /* 0x006F9026: js 0x6f904c */
L_006F9028:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x006F9028: push dword ptr [ebp - 0x1c] */
    ecx = MEM32(esi + 0x28); /* 0x006F902B: mov ecx, dword ptr [esi + 0x28] */
    edx = ebp + (-0x14); /* 0x006F902E: lea edx, [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x006F9031: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006F9034: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x006F9037: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006F903A: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_0070B610); /* 0x006F903D: call 0x70b610 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F9042: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006F9045: mov ecx, edi */
    RECOMP_CALL(sub_006F9120); /* 0x006F9047: call 0x6f9120 */
    RECOMP_FLAGS_IN();
L_006F904C:
    ecx = MEM32(ebp + (-0x4)); /* 0x006F904C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006F904F: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F9050: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F9052: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F9053: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F9058: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F905A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F905B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9060u);

L_006F9060:
    PUSH32(esp, ebp); /* 0x006F9060: push ebp */
    ebp = esp; /* 0x006F9061: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006F9063: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F9066: push ebx */
    PUSH32(esp, esi); /* 0x006F9067: push esi */
    esi = ecx; /* 0x006F9068: mov esi, ecx */
    MEM32(ebp + (-0xC)) = 0; /* 0x006F906A: mov dword ptr [ebp - 0xc], 0 */
    PUSH32(esp, edi); /* 0x006F9071: push edi */
    MEM32(ebp + (-0x8)) = 0; /* 0x006F9072: mov dword ptr [ebp - 8], 0 */
    edx = MEM32(esi + 0x4); /* 0x006F9079: mov edx, dword ptr [esi + 4] */
    eax = MEM32(esi + 0x24); /* 0x006F907C: mov eax, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006F907F: mov dword ptr [ebp - 4], eax */
    /* test edx, edx */ /* 0x006F9082: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F90BA; /* 0x006F9084: je 0x6f90ba */
L_006F9086:
    eax = edx; /* 0x006F9086: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F9088: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F908D: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F90BA; /* 0x006F9092: je 0x6f90ba */
L_006F9094:
    /* cmp edx, 0x32595559u */ /* 0x006F9094: cmp edx, 0x32595559 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F90B3; /* 0x006F909A: je 0x6f90b3 */
L_006F909C:
    /* cmp edx, 0x59565955u */ /* 0x006F909C: cmp edx, 0x59565955 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F90B3; /* 0x006F90A2: je 0x6f90b3 */
L_006F90A4:
    /* cmp edx, 0x55595659u */ /* 0x006F90A4: cmp edx, 0x55595659 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x55595659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F90B3; /* 0x006F90AA: je 0x6f90b3 */
L_006F90AC:
    ecx = 1; /* 0x006F90AC: mov ecx, 1 */
    goto L_006F90BD; /* 0x006F90B1: jmp 0x6f90bd */
L_006F90B3:
    ecx = 2; /* 0x006F90B3: mov ecx, 2 */
    goto L_006F90BD; /* 0x006F90B8: jmp 0x6f90bd */
L_006F90BA:
    ecx = (uint32_t)LO8(edx); /* 0x006F90BA: movzx ecx, dl */
L_006F90BD:
    eax = MEM32(esi + 0x30); /* 0x006F90BD: mov eax, dword ptr [esi + 0x30] */
    edx = esi + 0x34; /* 0x006F90C0: lea edx, [esi + 0x34] */
    edi = MEM32(esi + 0x38); /* 0x006F90C3: mov edi, dword ptr [esi + 0x38] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x006F90C6: imul edi, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x006F90C9: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi + 0x34); /* 0x006F90CC: mov eax, dword ptr [esi + 0x34] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006F90CF: imul eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F90D2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006F90D5: add edi, eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x8); /* 0x006F90D7: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x2C); /* 0x006F90DA: add edi, dword ptr [esi + 0x2c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006F90DD: push eax */
    eax = ebp + (-0xC); /* 0x006F90DE: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x006F90E1: push eax */
    RECOMP_CALL(sub_006F8EE0); /* 0x006F90E2: call 0x6f8ee0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F90E7: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F90EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F9117; /* 0x006F90EC: js 0x6f9117 */
L_006F90EE:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006F90EE: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x006F90F1: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x006F90F4: push dword ptr [ebp - 0xc] */
    edx = MEM32(esi + 0x40); /* 0x006F90F7: mov edx, dword ptr [esi + 0x40] */
    ecx = MEM32(esi + 0x3C); /* 0x006F90FA: mov ecx, dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006F90FD: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x006F9100: push dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x006F9103: push edi */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006F9104: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_006F7170); /* 0x006F9107: call 0x6f7170 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F910C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F910F: add esp, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006F9120); /* 0x006F9112: call 0x6f9120 */
    RECOMP_FLAGS_IN();
L_006F9117:
    edi = POP32_VAL(esp); /* 0x006F9117: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9118: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F9119: pop ebx */
    esp = ebp; /* 0x006F911A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F911C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F911D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9120u);

L_006F9120:
    PUSH32(esp, ebp); /* 0x006F9120: push ebp */
    ebp = esp; /* 0x006F9121: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F9123: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006F9126: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9167; /* 0x006F9128: je 0x6f9167 */
L_006F912A:
    /* cmp MEM32(ecx), 0x0092501Au */ /* 0x006F912A: cmp dword ptr [ecx], 0x92501a */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x0092501Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9167; /* 0x006F9130: jne 0x6f9167 */
L_006F9132:
    /* cmp MEM32(ecx + 0x8), 1 */ /* 0x006F9132: cmp dword ptr [ecx + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9174; /* 0x006F9136: jne 0x6f9174 */
L_006F9138:
    /* cmp MEM32(ecx + 0x28), 0 */ /* 0x006F9138: cmp dword ptr [ecx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9147; /* 0x006F913C: je 0x6f9147 */
L_006F913E:
    RECOMP_CALL(sub_006F8FD0); /* 0x006F913E: call 0x6f8fd0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F9143: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9145: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9146: ret  */
L_006F9147:
    /* cmp MEM32(ecx + 0x24), 0 */ /* 0x006F9147: cmp dword ptr [ecx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9156; /* 0x006F914B: je 0x6f9156 */
L_006F914D:
    RECOMP_CALL(sub_006F9060); /* 0x006F914D: call 0x6f9060 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F9152: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9154: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9155: ret  */
L_006F9156:
    eax = MEM32(ecx + 0x20); /* 0x006F9156: mov eax, dword ptr [ecx + 0x20] */
    PUSH32(esp, ecx); /* 0x006F9159: push ecx */
    PUSH32(esp, eax); /* 0x006F915A: push eax */
    eax = MEM32(eax + 0x28); /* 0x006F915B: mov eax, dword ptr [eax + 0x28] */
    RECOMP_ICALL(eax); /* 0x006F915E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F9160: add esp, 8 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x006F9163: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9165: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9166: ret  */
L_006F9167:
    PUSH32(esp, 0x0080646Cu); /* 0x006F9167: push 0x80646c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F916C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9171: add esp, 4 */
    _flag_k = FK_ADD;
L_006F9174:
    esp = ebp; /* 0x006F9174: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9176: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9177: ret  */
    RECOMP_REGS_OUT();
}
