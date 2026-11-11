#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100A299E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A299Eu);

L_100A299E:
    PUSH32(esp, 3); /* 0x100A299E: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A29A0: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A29A5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A29A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A29C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A29C4u);

L_100A29C4:
    PUSH32(esp, ebp); /* 0x100A29C4: push ebp */
    ebp = esp; /* 0x100A29C5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100A29C7: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A29CA: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A29CF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A29D1: mov dword ptr [ebp - 4], eax */
    SET_LO16(eax, MEM16(0x100E186C)); /* 0x100A29D4: mov ax, word ptr [0x100e186c] */
    PUSH32(esp, esi); /* 0x100A29DA: push esi */
    esi = 0xFFFFu; /* 0x100A29DB: mov esi, 0xffff */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100A29E0: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A29F4; /* 0x100A29E3: je 0x100a29f4 */
L_100A29E5:
    eax = (uint32_t)LO16(eax); /* 0x100A29E5: movzx eax, ax */
    MEM16(0x100E186C) = (uint16_t)(LO16(esi)); /* 0x100A29E8: mov word ptr [0x100e186c], si */
    goto L_100A2AAA; /* 0x100A29EF: jmp 0x100a2aaa */
L_100A29F4:
    eax = MEM32(0x100E142C); /* 0x100A29F4: mov eax, dword ptr [0x100e142c] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x100A29F9: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2A08; /* 0x100A29FC: jne 0x100a2a08 */
L_100A29FE:
    RECOMP_CALL(sub_100A44B2); /* 0x100A29FE: call 0x100a44b2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E142C); /* 0x100A2A03: mov eax, dword ptr [0x100e142c] */
L_100A2A08:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A2A08: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2AA7; /* 0x100A2A0B: je 0x100a2aa7 */
L_100A2A11:
    ecx = ebp + (-0x20); /* 0x100A2A11: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x100A2A14: push ecx */
    PUSH32(esp, eax); /* 0x100A2A15: push eax */
    RECOMP_ICALL(MEM32(0x100E5228)); /* 0x100A2A16: call dword ptr [0x100e5228] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100A2A1C: push 0 */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A2A1E: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5250)); /* 0x100A2A24: call dword ptr [0x100e5250] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x100A2A2A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100A2A2D: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2A2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A2A30: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100A2A31: push eax */
    eax = ebp + (-0x18); /* 0x100A2A32: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100A2A35: push eax */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A2A36: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5254)); /* 0x100A2A3C: call dword ptr [0x100e5254] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A2A42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2A98; /* 0x100A2A44: je 0x100a2a98 */
L_100A2A46:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x100A2A46: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2A93; /* 0x100A2A4A: je 0x100a2a93 */
L_100A2A4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2A4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A2A4E: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM16(ebp + (-0x18)), LO16(eax) */ /* 0x100A2A4F: cmp word ptr [ebp - 0x18], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x18))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2A77; /* 0x100A2A53: jne 0x100a2a77 */
L_100A2A55:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x100A2A55: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2A77; /* 0x100A2A59: je 0x100a2a77 */
L_100A2A5B:
    SET_LO16(eax, MEM16(ebp + (-0xA))); /* 0x100A2A5B: mov ax, word ptr [ebp - 0xa] */
    esi = (uint32_t)LO16(eax); /* 0x100A2A5F: movzx esi, ax */
    /* test LO16(eax), LO16(eax) */ /* 0x100A2A62: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2A98; /* 0x100A2A65: jne 0x100a2a98 */
L_100A2A67:
    eax = ebp + (-0x14); /* 0x100A2A67: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100A2A6A: push eax */
    RECOMP_CALL(sub_100A233A); /* 0x100A2A6B: call 0x100a233a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2A70: pop ecx */
    ecx = eax; /* 0x100A2A71: mov ecx, eax */
    /* test ecx, ecx */ /* 0x100A2A73: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2AB9; /* 0x100A2A75: jne 0x100a2ab9 */
L_100A2A77:
    eax = ebp + (-0x1C); /* 0x100A2A77: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100A2A7A: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2A7B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A2A7D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100A2A7E: push eax */
    eax = ebp + (-0x18); /* 0x100A2A7F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100A2A82: push eax */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A2A83: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5254)); /* 0x100A2A89: call dword ptr [0x100e5254] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A2A8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2A46; /* 0x100A2A91: jne 0x100a2a46 */
L_100A2A93:
    esi = 0xFFFFu; /* 0x100A2A93: mov esi, 0xffff */
L_100A2A98:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100A2A98: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A2A9B: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5250)); /* 0x100A2AA1: call dword ptr [0x100e5250] */
    RECOMP_FLAGS_IN();
L_100A2AA7:
    SET_LO16(eax, LO16(esi)); /* 0x100A2AA7: mov ax, si */
L_100A2AAA:
    ecx = MEM32(ebp + (-0x4)); /* 0x100A2AAA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A2AAD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100A2AAF: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100A2AB0: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A2AB5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2AB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2AB8: ret  */
L_100A2AB9:
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x100A2AB9: movzx eax, byte ptr [ecx + 1] */
    esi = (uint32_t)MEM8(ecx); /* 0x100A2ABD: movzx esi, byte ptr [ecx] */
    MEM16(0x100E186C) = (uint16_t)(LO16(eax)); /* 0x100A2AC0: mov word ptr [0x100e186c], ax */
    RECOMP_BACKEDGE();
    goto L_100A2A98; /* 0x100A2AC6: jmp 0x100a2a98 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A2AC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2AC8u);

L_100A2AC8:
    PUSH32(esp, 0xCu); /* 0x100A2AC8: push 0xc */
    PUSH32(esp, 0x100A2B10u); /* 0x100A2ACA: push 0x100a2b10 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A2ACF: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2AD4: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2AD8: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A2ADA: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2ADF: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2AE0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A2B2C); /* 0x100A2AE4: call 0x100a2b2c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100A2AE9: movzx esi, ax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A2AEC: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A2AEF: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2B07); /* 0x100A2AF6: call 0x100a2b07 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x100A2AFB: mov ax, si */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A2AFE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2B03: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2B07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2B07u);

L_100A2B07:
    PUSH32(esp, 3); /* 0x100A2B07: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A2B09: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2B0E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2B0F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2B2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2B2Cu);

L_100A2B2C:
    SET_LO16(eax, MEM16(0x100E186C)); /* 0x100A2B2C: mov ax, word ptr [0x100e186c] */
    PUSH32(esp, edi); /* 0x100A2B32: push edi */
    edi = 0xFFFFu; /* 0x100A2B33: mov edi, 0xffff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100A2B38: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2B49; /* 0x100A2B3B: je 0x100a2b49 */
L_100A2B3D:
    MEM16(0x100E186C) = (uint16_t)(LO16(edi)); /* 0x100A2B3D: mov word ptr [0x100e186c], di */
    eax = (uint32_t)LO16(eax); /* 0x100A2B44: movzx eax, ax */
    edi = POP32_VAL(esp); /* 0x100A2B47: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2B48: ret  */
L_100A2B49:
    PUSH32(esp, esi); /* 0x100A2B49: push esi */
    RECOMP_CALL(sub_100A29C4); /* 0x100A2B4A: call 0x100a29c4 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100A2B4F: movzx esi, ax */
    /* cmp LO16(esi), LO16(edi) */ /* 0x100A2B52: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2B66; /* 0x100A2B55: je 0x100a2b66 */
L_100A2B57:
    PUSH32(esp, esi); /* 0x100A2B57: push esi */
    RECOMP_CALL(sub_100A2D4C); /* 0x100A2B58: call 0x100a2d4c */
    RECOMP_FLAGS_IN();
    /* cmp LO16(eax), LO16(edi) */ /* 0x100A2B5D: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO16(eax, LO16(esi)); /* 0x100A2B60: mov ax, si */
    ecx = POP32_VAL(esp); /* 0x100A2B63: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2B69; /* 0x100A2B64: jne 0x100a2b69 */
L_100A2B66:
    SET_LO16(eax, LO16(edi)); /* 0x100A2B66: mov ax, di */
L_100A2B69:
    esi = POP32_VAL(esp); /* 0x100A2B69: pop esi */
    edi = POP32_VAL(esp); /* 0x100A2B6A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2B6B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2B6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2B6Cu);

L_100A2B6C:
    PUSH32(esp, 0xCu); /* 0x100A2B6C: push 0xc */
    PUSH32(esp, 0x100A2BB8u); /* 0x100A2B6E: push 0x100a2bb8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A2B73: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2B78: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2B7C: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A2B7E: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2B83: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2B84: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A2B88: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A2BD4); /* 0x100A2B8B: call 0x100a2bd4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2B90: pop ecx */
    esi = (uint32_t)LO16(eax); /* 0x100A2B91: movzx esi, ax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A2B94: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A2B97: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2BAF); /* 0x100A2B9E: call 0x100a2baf */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x100A2BA3: mov ax, si */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A2BA6: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2BAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2BAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2BAFu);

L_100A2BAF:
    PUSH32(esp, 3); /* 0x100A2BAF: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A2BB1: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2BB6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2BB7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2BD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2BD4u);

L_100A2BD4:
    PUSH32(esp, ebp); /* 0x100A2BD4: push ebp */
    ebp = esp; /* 0x100A2BD5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A2BD7: mov eax, dword ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x100A2BDA: mov ecx, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100A2BDF: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2BF8; /* 0x100A2BE2: je 0x100a2bf8 */
L_100A2BE4:
    /* cmp MEM16(0x100E186C), LO16(ecx) */ /* 0x100A2BE4: cmp word ptr [0x100e186c], cx */
    _flag_a = (uint32_t)(MEM16(0x100E186C)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2BF8; /* 0x100A2BEB: jne 0x100a2bf8 */
L_100A2BED:
    eax = (uint32_t)LO8(eax); /* 0x100A2BED: movzx eax, al */
    MEM16(0x100E186C) = (uint16_t)(LO16(eax)); /* 0x100A2BF0: mov word ptr [0x100e186c], ax */
    ebp = POP32_VAL(esp); /* 0x100A2BF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2BF7: ret  */
L_100A2BF8:
    SET_LO16(eax, LO16(ecx)); /* 0x100A2BF8: mov ax, cx */
    ebp = POP32_VAL(esp); /* 0x100A2BFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2BFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2BFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2BFDu);

L_100A2BFD:
    PUSH32(esp, 0xCu); /* 0x100A2BFD: push 0xc */
    PUSH32(esp, 0x100A2C48u); /* 0x100A2BFF: push 0x100a2c48 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A2C04: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2C09: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2C0D: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A2C0F: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2C14: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2C15: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A2C19: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A2C64); /* 0x100A2C1C: call 0x100a2c64 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2C21: pop ecx */
    esi = eax; /* 0x100A2C22: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A2C24: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A2C27: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2C3E); /* 0x100A2C2E: call 0x100a2c3e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A2C33: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A2C35: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2C3A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2C3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2C3Eu);

L_100A2C3E:
    PUSH32(esp, 3); /* 0x100A2C3E: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A2C40: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2C45: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2C46: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2C64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2C64u);

L_100A2C64:
    PUSH32(esp, ebp); /* 0x100A2C64: push ebp */
    ebp = esp; /* 0x100A2C65: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A2C67: push ecx */
    PUSH32(esp, ebx); /* 0x100A2C68: push ebx */
    PUSH32(esp, esi); /* 0x100A2C69: push esi */
    PUSH32(esp, edi); /* 0x100A2C6A: push edi */
    RECOMP_CALL(sub_1000F750); /* 0x100A2C6B: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x100A2C70: mov ebx, dword ptr [ebp + 8] */
    esi = eax; /* 0x100A2C73: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2C75: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A2C77: inc eax */
    _flag_k = FK_INC;
    edi = esi + 0x4C; /* 0x100A2C78: lea edi, [esi + 0x4c] */
    /* cmp MEM16(esi + 0x52), LO16(eax) */ /* 0x100A2C7B: cmp word ptr [esi + 0x52], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x52)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2C86; /* 0x100A2C7F: jne 0x100a2c86 */
L_100A2C81:
    MEM8(edi + 0x1) = (uint8_t)(LO8(ebx)); /* 0x100A2C81: mov byte ptr [edi + 1], bl */
    goto L_100A2C88; /* 0x100A2C84: jmp 0x100a2c88 */
L_100A2C86:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A2C86: mov byte ptr [edi], bl */
L_100A2C88:
    /* cmp MEM16(esi + 0x52), 0 */ /* 0x100A2C88: cmp word ptr [esi + 0x52], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x52)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2CA2; /* 0x100A2C8D: jne 0x100a2ca2 */
L_100A2C8F:
    eax = (uint32_t)MEM8(edi); /* 0x100A2C8F: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x100A2C92: push eax */
    RECOMP_CALL(sub_1002DFC5); /* 0x100A2C93: call 0x1002dfc5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2C98: pop ecx */
    /* test eax, eax */ /* 0x100A2C99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2CA2; /* 0x100A2C9B: je 0x100a2ca2 */
L_100A2C9D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2C9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A2C9F: inc eax */
    _flag_k = FK_INC;
    goto L_100A2CD2; /* 0x100A2CA0: jmp 0x100a2cd2 */
L_100A2CA2:
    eax = (uint32_t)MEM16(esi + 0x52); /* 0x100A2CA2: movzx eax, word ptr [esi + 0x52] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A2CA6: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100A2CA7: push eax */
    eax = ebp + (-0x4); /* 0x100A2CA8: lea eax, [ebp - 4] */
    PUSH32(esp, edi); /* 0x100A2CAB: push edi */
    PUSH32(esp, eax); /* 0x100A2CAC: push eax */
    RECOMP_CALL(sub_1002DFE2); /* 0x100A2CAD: call 0x1002dfe2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A2CB2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A2CB5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2CCD; /* 0x100A2CB8: je 0x100a2ccd */
L_100A2CBA:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A2CBA: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100A2D4C); /* 0x100A2CBD: call 0x100a2d4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2CC2: pop ecx */
    ecx = 0xFFFFu; /* 0x100A2CC3: mov ecx, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100A2CC8: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2CD0; /* 0x100A2CCB: jne 0x100a2cd0 */
L_100A2CCD:
    _flag_a = (uint32_t)((LO8(ebx) | 0xFFu)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0xFFu)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0xFFu); /* 0x100A2CCD: or bl, 0xff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A2CD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2CD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A2CD2:
    edi = POP32_VAL(esp); /* 0x100A2CD2: pop edi */
    MEM16(esi + 0x52) = (uint16_t)(LO16(eax)); /* 0x100A2CD3: mov word ptr [esi + 0x52], ax */
    esi = POP32_VAL(esp); /* 0x100A2CD7: pop esi */
    eax = (uint32_t)LO8(ebx); /* 0x100A2CD8: movzx eax, bl */
    ebx = POP32_VAL(esp); /* 0x100A2CDB: pop ebx */
    esp = ebp; /* 0x100A2CDC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2CDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2CDF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2CE0u);

L_100A2CE0:
    PUSH32(esp, 0xCu); /* 0x100A2CE0: push 0xc */
    PUSH32(esp, 0x100A2D30u); /* 0x100A2CE2: push 0x100a2d30 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A2CE7: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2CEC: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2CF0: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A2CF2: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2CF7: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2CF8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A2CFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A2D4C); /* 0x100A2CFF: call 0x100a2d4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2D04: pop ecx */
    esi = (uint32_t)LO16(eax); /* 0x100A2D05: movzx esi, ax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A2D08: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A2D0B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2D23); /* 0x100A2D12: call 0x100a2d23 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x100A2D17: mov ax, si */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A2D1A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2D1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2D23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2D23u);

L_100A2D23:
    PUSH32(esp, 3); /* 0x100A2D23: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A2D25: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2D2A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2D2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2D4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2D4Cu);

L_100A2D4C:
    PUSH32(esp, ebp); /* 0x100A2D4C: push ebp */
    ebp = esp; /* 0x100A2D4D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A2D4F: push ecx */
    eax = MEM32(0x100E1430); /* 0x100A2D50: mov eax, dword ptr [0x100e1430] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x100A2D55: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2D64; /* 0x100A2D58: jne 0x100a2d64 */
L_100A2D5A:
    RECOMP_CALL(sub_100A44E2); /* 0x100A2D5A: call 0x100a44e2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E1430); /* 0x100A2D5F: mov eax, dword ptr [0x100e1430] */
L_100A2D64:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A2D64: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2D70; /* 0x100A2D67: jne 0x100a2d70 */
L_100A2D69:
    eax = 0xFFFFu; /* 0x100A2D69: mov eax, 0xffff */
    goto L_100A2D8B; /* 0x100A2D6E: jmp 0x100a2d8b */
L_100A2D70:
    PUSH32(esp, 0); /* 0x100A2D70: push 0 */
    ecx = ebp + (-0x4); /* 0x100A2D72: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100A2D75: push ecx */
    PUSH32(esp, 1); /* 0x100A2D76: push 1 */
    ecx = ebp + 0x8; /* 0x100A2D78: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100A2D7B: push ecx */
    PUSH32(esp, eax); /* 0x100A2D7C: push eax */
    RECOMP_ICALL(MEM32(0x100E5258)); /* 0x100A2D7D: call dword ptr [0x100e5258] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A2D83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2D69; /* 0x100A2D85: je 0x100a2d69 */
L_100A2D87:
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x100A2D87: mov ax, word ptr [ebp + 8] */
L_100A2D8B:
    esp = ebp; /* 0x100A2D8B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2D8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2D8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2D8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2D8Fu);

L_100A2D8F:
    PUSH32(esp, ebp); /* 0x100A2D8F: push ebp */
    ebp = esp; /* 0x100A2D90: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A2D92: push ecx */
    PUSH32(esp, 0); /* 0x100A2D93: push 0 */
    eax = ebp + (-0x4); /* 0x100A2D95: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100A2D98: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A2D99: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x40u); /* 0x100A2D9C: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A2D9E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A2DA1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A1B17); /* 0x100A2DA4: call 0x100a1b17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A2DA9: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A2DAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2DB5; /* 0x100A2DAE: je 0x100a2db5 */
L_100A2DB0:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A2DB0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2DB8; /* 0x100A2DB3: jmp 0x100a2db8 */
L_100A2DB5:
    eax = MEM32(ebp + (-0x4)); /* 0x100A2DB5: mov eax, dword ptr [ebp - 4] */
L_100A2DB8:
    esp = ebp; /* 0x100A2DB8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2DBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2DBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2DBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2DBCu);

L_100A2DBC:
    PUSH32(esp, ebp); /* 0x100A2DBC: push ebp */
    ebp = esp; /* 0x100A2DBD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A2DBF: push ecx */
    PUSH32(esp, 0); /* 0x100A2DC0: push 0 */
    eax = ebp + (-0x4); /* 0x100A2DC2: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100A2DC5: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A2DC6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A2DC9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A2DCC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A2DCF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A1B17); /* 0x100A2DD2: call 0x100a1b17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A2DD7: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A2DDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2DE3; /* 0x100A2DDC: je 0x100a2de3 */
L_100A2DDE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A2DDE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2DE6; /* 0x100A2DE1: jmp 0x100a2de6 */
L_100A2DE3:
    eax = MEM32(ebp + (-0x4)); /* 0x100A2DE3: mov eax, dword ptr [ebp - 4] */
L_100A2DE6:
    esp = ebp; /* 0x100A2DE6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2DE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2DE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2DEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2DEAu);

L_100A2DEA:
    PUSH32(esp, ebp); /* 0x100A2DEA: push ebp */
    ebp = esp; /* 0x100A2DEB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A2DED: push ecx */
    PUSH32(esp, 0); /* 0x100A2DEE: push 0 */
    eax = ebp + (-0x4); /* 0x100A2DF0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100A2DF3: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A2DF4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x40u); /* 0x100A2DF7: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A2DF9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A2DFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100153C7); /* 0x100A2DFF: call 0x100153c7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A2E04: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A2E07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2E10; /* 0x100A2E09: je 0x100a2e10 */
L_100A2E0B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A2E0B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2E13; /* 0x100A2E0E: jmp 0x100a2e13 */
L_100A2E10:
    eax = MEM32(ebp + (-0x4)); /* 0x100A2E10: mov eax, dword ptr [ebp - 4] */
L_100A2E13:
    esp = ebp; /* 0x100A2E13: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2E15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2E16: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2E17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2E17u);

L_100A2E17:
    PUSH32(esp, ebp); /* 0x100A2E17: push ebp */
    ebp = esp; /* 0x100A2E18: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A2E1A: push ecx */
    PUSH32(esp, 0); /* 0x100A2E1B: push 0 */
    eax = ebp + (-0x4); /* 0x100A2E1D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100A2E20: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A2E21: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A2E24: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A2E27: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A2E2A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100153C7); /* 0x100A2E2D: call 0x100153c7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A2E32: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A2E35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2E3E; /* 0x100A2E37: je 0x100a2e3e */
L_100A2E39:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A2E39: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2E41; /* 0x100A2E3C: jmp 0x100a2e41 */
L_100A2E3E:
    eax = MEM32(ebp + (-0x4)); /* 0x100A2E3E: mov eax, dword ptr [ebp - 4] */
L_100A2E41:
    esp = ebp; /* 0x100A2E41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2E43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2E44: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2E45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2E45u);

L_100A2E45:
    PUSH32(esp, ebp); /* 0x100A2E45: push ebp */
    ebp = esp; /* 0x100A2E46: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A2E48: push ecx */
    PUSH32(esp, esi); /* 0x100A2E49: push esi */
    PUSH32(esp, edi); /* 0x100A2E4A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A2E4B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A2E4E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x100A2E50: mov dword ptr [ebp - 4], esi */
    /* test edi, edi */ /* 0x100A2E53: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2E72; /* 0x100A2E55: jne 0x100a2e72 */
L_100A2E57:
    RECOMP_CALL(sub_1001E471); /* 0x100A2E57: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A2E5C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A2E5E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A2E63: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A2E69: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2E6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2E9A; /* 0x100A2E70: jmp 0x100a2e9a */
L_100A2E72:
    SET_LO8(eax, MEM8(edi)); /* 0x100A2E72: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x100A2E74: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A2E57; /* 0x100A2E76: jle 0x100a2e57 */
L_100A2E78:
    ecx = ebp + (-0x4); /* 0x100A2E78: lea ecx, [ebp - 4] */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100A2E7B: movsx eax, al */
    PUSH32(esp, ecx); /* 0x100A2E7E: push ecx */
    PUSH32(esp, eax); /* 0x100A2E7F: push eax */
    esi = edi + 0x2; /* 0x100A2E80: lea esi, [edi + 2] */
    PUSH32(esp, esi); /* 0x100A2E83: push esi */
    RECOMP_CALL(sub_100A2EA0); /* 0x100A2E84: call 0x100a2ea0 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(ebp + (-0x4))); /* 0x100A2E89: mov cl, byte ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A2E8C: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A2E8F: neg eax */
    _flag_k = FK_CMP;
    MEM8(edi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x100A2E91: mov byte ptr [edi + 1], cl */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A2E94: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x100A2E96: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100A2E98: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A2E9A:
    edi = POP32_VAL(esp); /* 0x100A2E9A: pop edi */
    esi = POP32_VAL(esp); /* 0x100A2E9B: pop esi */
    esp = ebp; /* 0x100A2E9C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2E9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2E9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2EA0u);

L_100A2EA0:
    PUSH32(esp, 0x20u); /* 0x100A2EA0: push 0x20 */
    PUSH32(esp, 0x100A2FB0u); /* 0x100A2EA2: push 0x100a2fb0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A2EA7: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A2EAC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x100A2EAE: mov dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2EB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x100A2EB3: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100A2EB6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A2EB8: setne al */
    /* test eax, eax */ /* 0x100A2EBB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2EDA; /* 0x100A2EBD: jne 0x100a2eda */
L_100A2EBF:
    RECOMP_CALL(sub_1001E471); /* 0x100A2EBF: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A2EC4: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x100A2EC6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A2ECB: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A2ECD: pop esi */
    MEM32(eax) = esi; /* 0x100A2ECE: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A2ED0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100A2F96; /* 0x100A2ED5: jmp 0x100a2f96 */
L_100A2EDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2EDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x100A2EDC: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp eax, ecx */ /* 0x100A2EDF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A2EE1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A2EE3: neg eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A2EBF; /* 0x100A2EE5: je 0x100a2ebf */
L_100A2EE7:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A2EE7: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2EE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x10); /* 0x100A2EEB: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x100A2EEE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A2EF0: setne al */
    /* test eax, eax */ /* 0x100A2EF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2EBF; /* 0x100A2EF5: je 0x100a2ebf */
L_100A2EF7:
    eax = ecx + (-0x1); /* 0x100A2EF7: lea eax, [ecx - 1] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x100A2EFA: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, 3); /* 0x100A2EFD: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A2EFF: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2F04: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x100A2F05: mov dword ptr [ebp - 4], ebx */
    MEM32(esi) = ebx; /* 0x100A2F08: mov dword ptr [esi], ebx */
L_100A2F0A:
    MEM32(ebp + (-0x2C)) = ebx; /* 0x100A2F0A: mov dword ptr [ebp - 0x2c], ebx */
    eax = ebp + (-0x2C); /* 0x100A2F0D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A2F10: push eax */
    PUSH32(esp, 2); /* 0x100A2F11: push 2 */
    eax = ebp + (-0x20); /* 0x100A2F13: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A2F16: push eax */
    RECOMP_CALL(sub_100A3023); /* 0x100A2F17: call 0x100a3023 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A2F1C: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100A2F1F: mov esi, eax */
    MEM32(ebp + (-0x24)) = esi; /* 0x100A2F21: mov dword ptr [ebp - 0x24], esi */
    /* test esi, esi */ /* 0x100A2F24: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2F7D; /* 0x100A2F26: jne 0x100a2f7d */
L_100A2F28:
    MEM32(ebp + (-0x28)) = ebx; /* 0x100A2F28: mov dword ptr [ebp - 0x28], ebx */
    /* cmp MEM16(ebp + (-0x20)), LO16(eax) */ /* 0x100A2F2B: cmp word ptr [ebp - 0x20], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x20))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2F7D; /* 0x100A2F2F: je 0x100a2f7d */
L_100A2F31:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100A2F31: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x100A2F34: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x100A2F37: push edi */
    eax = ebp + (-0x28); /* 0x100A2F38: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100A2F3B: push eax */
    RECOMP_CALL(sub_10020636); /* 0x100A2F3C: call 0x10020636 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A2F41: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100A2F44: mov esi, eax */
    MEM32(ebp + (-0x24)) = esi; /* 0x100A2F46: mov dword ptr [ebp - 0x24], esi */
    /* test esi, esi */ /* 0x100A2F49: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2F69; /* 0x100A2F4B: jne 0x100a2f69 */
L_100A2F4D:
    eax = MEM32(ebp + (-0x28)); /* 0x100A2F4D: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100A2F50: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x100A2F52: mov dword ptr [ebp + 8], edi */
    ecx = MEM32(ebp + 0x10); /* 0x100A2F55: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x100A2F58: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x1C)); /* 0x100A2F5A: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A2F5D: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100A2F5F: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x30)) = ecx; /* 0x100A2F62: mov dword ptr [ebp - 0x30], ecx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A2F7D; /* 0x100A2F65: je 0x100a2f7d */
L_100A2F67:
    RECOMP_BACKEDGE();
    goto L_100A2F0A; /* 0x100A2F67: jmp 0x100a2f0a */
L_100A2F69:
    SET_LO16(eax, MEM16(ebp + (-0x20))); /* 0x100A2F69: mov ax, word ptr [ebp - 0x20] */
    MEM16(0x100E4528) = (uint16_t)(LO16(eax)); /* 0x100A2F6D: mov word ptr [0x100e4528], ax */
    MEM32(0x100E40F8) = 1; /* 0x100A2F73: mov dword ptr [0x100e40f8], 1 */
L_100A2F7D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A2F7D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2FA6); /* 0x100A2F84: call 0x100a2fa6 */
    RECOMP_FLAGS_IN();
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A2F89: mov byte ptr [edi], bl */
    /* test esi, esi */ /* 0x100A2F8B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2F96; /* 0x100A2F8D: je 0x100a2f96 */
L_100A2F8F:
    RECOMP_CALL(sub_1001177D); /* 0x100A2F8F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A2F94: mov dword ptr [eax], esi */
L_100A2F96:
    eax = esi; /* 0x100A2F96: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A2F98: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2F9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2FA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2FA6u);

L_100A2FA6:
    PUSH32(esp, 3); /* 0x100A2FA6: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A2FA8: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2FAD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2FAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2FCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2FCCu);

L_100A2FCC:
    PUSH32(esp, ebp); /* 0x100A2FCC: push ebp */
    ebp = esp; /* 0x100A2FCD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A2FCF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A2FD0: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A2FD3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2FF3; /* 0x100A2FD5: jne 0x100a2ff3 */
L_100A2FD7:
    RECOMP_CALL(sub_1001E471); /* 0x100A2FD7: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A2FDC: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100A2FDF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A2FE4: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A2FEA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2FEF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A3020; /* 0x100A2FF1: jmp 0x100a3020 */
L_100A2FF3:
    eax = (uint32_t)MEM16(esi); /* 0x100A2FF3: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x100A2FF6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2FD7; /* 0x100A2FF9: je 0x100a2fd7 */
L_100A2FFB:
    PUSH32(esp, edi); /* 0x100A2FFB: push edi */
    ecx = ebp + 0x8; /* 0x100A2FFC: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100A2FFF: push ecx */
    PUSH32(esp, eax); /* 0x100A3000: push eax */
    edi = esi + 0x4; /* 0x100A3001: lea edi, [esi + 4] */
    PUSH32(esp, edi); /* 0x100A3004: push edi */
    RECOMP_CALL(sub_100A3023); /* 0x100A3005: call 0x100a3023 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A300A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A300D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3015; /* 0x100A300F: je 0x100a3015 */
L_100A3011:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A3011: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A301F; /* 0x100A3013: jmp 0x100a301f */
L_100A3015:
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x100A3015: mov cx, word ptr [ebp + 8] */
    eax = edi; /* 0x100A3019: mov eax, edi */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x100A301B: mov word ptr [esi + 2], cx */
L_100A301F:
    edi = POP32_VAL(esp); /* 0x100A301F: pop edi */
L_100A3020:
    esi = POP32_VAL(esp); /* 0x100A3020: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A3021: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3022: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3023(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3023u);

L_100A3023:
    PUSH32(esp, 0x14u); /* 0x100A3023: push 0x14 */
    PUSH32(esp, 0x100A31D8u); /* 0x100A3025: push 0x100a31d8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A302A: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A302F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A3031: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A3034: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x100A3036: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x100A3039: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A303B: setne al */
    /* test eax, eax */ /* 0x100A303E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A305D; /* 0x100A3040: jne 0x100a305d */
L_100A3042:
    RECOMP_CALL(sub_1001E471); /* 0x100A3042: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A3047: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A3049: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A304E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A3050: pop esi */
    MEM32(eax) = esi; /* 0x100A3051: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A3053: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100A31C4; /* 0x100A3058: jmp 0x100a31c4 */
L_100A305D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A305D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x100A305F: mov edi, dword ptr [ebp + 0xc] */
    /* cmp eax, edi */ /* 0x100A3062: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A3064: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A3066: neg eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A3042; /* 0x100A3068: je 0x100a3042 */
L_100A306A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A306A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x100A306C: mov word ptr [ebx], ax */
    edx = MEM32(ebp + 0x10); /* 0x100A306F: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x100A3072: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A3074: setne al */
    /* test eax, eax */ /* 0x100A3077: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3042; /* 0x100A3079: je 0x100a3042 */
L_100A307B:
    PUSH32(esp, 3); /* 0x100A307B: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A307D: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3082: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A3083: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A3086: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edi; /* 0x100A3087: mov dword ptr [ebp + 0xc], edi */
    ecx = MEM32(ebp + 0x10); /* 0x100A308A: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = esi; /* 0x100A308D: mov dword ptr [ecx], esi */
    /* cmp MEM32(0x100E40F8), 0 */ /* 0x100A308F: cmp dword ptr [0x100e40f8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E40F8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A30CD; /* 0x100A3096: je 0x100a30cd */
L_100A3098:
    /* test edi, edi */ /* 0x100A3098: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A31AD; /* 0x100A309A: je 0x100a31ad */
L_100A30A0:
    SET_LO16(eax, MEM16(0x100E4528)); /* 0x100A30A0: mov ax, word ptr [0x100e4528] */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x100A30A6: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x100A30A9: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x100A30AC: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A30AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(0x100E4528) = (uint16_t)(LO16(eax)); /* 0x100A30B1: mov word ptr [0x100e4528], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A30B7: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edi; /* 0x100A30B8: mov dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x100A30BB: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM16(0x100E4528); /* 0x100A30BD: movzx eax, word ptr [0x100e4528] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A30C4: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A30C6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x100A30C8: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = edi; /* 0x100A30CA: mov dword ptr [ebp + 0xc], edi */
L_100A30CD:
    /* test edi, edi */ /* 0x100A30CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A31AD; /* 0x100A30CF: je 0x100a31ad */
L_100A30D5:
    eax = MEM32(0x100E142C); /* 0x100A30D5: mov eax, dword ptr [0x100e142c] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x100A30DA: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A30E9; /* 0x100A30DD: jne 0x100a30e9 */
L_100A30DF:
    RECOMP_CALL(sub_100A44B2); /* 0x100A30DF: call 0x100a44b2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E142C); /* 0x100A30E4: mov eax, dword ptr [0x100e142c] */
L_100A30E9:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A30E9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3196; /* 0x100A30EC: je 0x100a3196 */
L_100A30F2:
    ecx = ebp + (-0x24); /* 0x100A30F2: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x100A30F5: push ecx */
    PUSH32(esp, eax); /* 0x100A30F6: push eax */
    RECOMP_ICALL(MEM32(0x100E5228)); /* 0x100A30F7: call dword ptr [0x100e5228] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x100A30FD: push 7 */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A30FF: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5250)); /* 0x100A3105: call dword ptr [0x100e5250] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100A310B: push esi */
    eax = ebp + (-0x20); /* 0x100A310C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A310F: push eax */
    PUSH32(esp, edi); /* 0x100A3110: push edi */
    PUSH32(esp, ebx); /* 0x100A3111: push ebx */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A3112: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E522C)); /* 0x100A3118: call dword ptr [0x100e522c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A311E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3185; /* 0x100A3120: je 0x100a3185 */
L_100A3122:
    ecx = MEM32(ebp + (-0x20)); /* 0x100A3122: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0xDu); /* 0x100A3125: push 0xd */
    eax = POP32_VAL(esp); /* 0x100A3127: pop eax */
    /* cmp ecx, 2 */ /* 0x100A3128: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A3145; /* 0x100A312B: jb 0x100a3145 */
L_100A312D:
    /* cmp MEM16(ebx + ecx * 2 + (-0x4)), LO16(eax) */ /* 0x100A312D: cmp word ptr [ebx + ecx*2 - 4], ax */
    _flag_a = (uint32_t)(MEM16(ebx + ecx * 2 + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3145; /* 0x100A3132: jne 0x100a3145 */
L_100A3134:
    eax = ecx + (-0x2); /* 0x100A3134: lea eax, [ecx - 2] */
    edx = MEM32(ebp + 0x10); /* 0x100A3137: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x100A313A: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A313C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + ecx * 2 + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x100A313E: mov word ptr [ebx + ecx*2 - 4], ax */
    goto L_100A3185; /* 0x100A3143: jmp 0x100a3185 */
L_100A3145:
    /* cmp ecx, edi */ /* 0x100A3145: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3161; /* 0x100A3147: jne 0x100a3161 */
L_100A3149:
    /* cmp MEM16(ebx + ecx * 2 + (-0x2)), LO16(eax) */ /* 0x100A3149: cmp word ptr [ebx + ecx*2 - 2], ax */
    _flag_a = (uint32_t)(MEM16(ebx + ecx * 2 + (-0x2))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3161; /* 0x100A314E: jne 0x100a3161 */
L_100A3150:
    eax = ecx + (-0x1); /* 0x100A3150: lea eax, [ecx - 1] */
    edx = MEM32(ebp + 0x10); /* 0x100A3153: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x100A3156: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A3158: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + ecx * 2 + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x100A315A: mov word ptr [ebx + ecx*2 - 2], ax */
    goto L_100A3185; /* 0x100A315F: jmp 0x100a3185 */
L_100A3161:
    /* cmp ecx, 1 */ /* 0x100A3161: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A317A; /* 0x100A3164: jne 0x100a317a */
L_100A3166:
    /* cmp MEM16(ebx), 0xAu */ /* 0x100A3166: cmp word ptr [ebx], 0xa */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(0xAu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A317A; /* 0x100A316A: jne 0x100a317a */
L_100A316C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A316C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x100A316E: mov word ptr [ebx], ax */
    edx = MEM32(ebp + 0x10); /* 0x100A3171: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edx); /* 0x100A3174: mov eax, dword ptr [edx] */
    MEM32(edx) = eax; /* 0x100A3176: mov dword ptr [edx], eax */
    goto L_100A3185; /* 0x100A3178: jmp 0x100a3185 */
L_100A317A:
    edx = MEM32(ebp + 0x10); /* 0x100A317A: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + ecx; /* 0x100A317D: add dword ptr [edx], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A317F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x100A3181: mov word ptr [ebx + ecx*2], ax */
L_100A3185:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x100A3185: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A3188: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5250)); /* 0x100A318E: call dword ptr [0x100e5250] */
    RECOMP_FLAGS_IN();
    goto L_100A31AD; /* 0x100A3194: jmp 0x100a31ad */
L_100A3196:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A3196: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A319C: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A319D: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A31A2: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x100A31A3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x100A31A8: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A31AA: mov dword ptr [ebp - 0x1c], esi */
L_100A31AD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A31AD: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A31CF); /* 0x100A31B4: call 0x100a31cf */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x100A31B9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A31C4; /* 0x100A31BB: je 0x100a31c4 */
L_100A31BD:
    RECOMP_CALL(sub_1001177D); /* 0x100A31BD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A31C2: mov dword ptr [eax], esi */
L_100A31C4:
    eax = esi; /* 0x100A31C4: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A31C6: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A31CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A31CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A31CFu);

L_100A31CF:
    PUSH32(esp, 3); /* 0x100A31CF: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A31D1: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A31D6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A31D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A31F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A31F4u);

L_100A31F4:
    PUSH32(esp, ebp); /* 0x100A31F4: push ebp */
    ebp = esp; /* 0x100A31F5: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x100A31F7: mov eax, dword ptr [ebp + 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100A31FA: cdq  */
    PUSH32(esp, edx); /* 0x100A31FB: push edx */
    PUSH32(esp, eax); /* 0x100A31FC: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A31FD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A33C4); /* 0x100A3200: call 0x100a33c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A3205: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A3208: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A320A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = POP32_VAL(esp); /* 0x100A320C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A320D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A320E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A320Eu);

L_100A320E:
    PUSH32(esp, ebp); /* 0x100A320E: push ebp */
    ebp = esp; /* 0x100A320F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100A3211: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100A3214: push ebx */
    PUSH32(esp, esi); /* 0x100A3215: push esi */
    PUSH32(esp, edi); /* 0x100A3216: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A3217: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A321A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x100A321C: push 1 */
    PUSH32(esp, esi); /* 0x100A321E: push esi */
    PUSH32(esp, esi); /* 0x100A321F: push esi */
    PUSH32(esp, edi); /* 0x100A3220: push edi */
    ebx = esi; /* 0x100A3221: mov ebx, esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x100A3223: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3226: call 0x10017fde */
    RECOMP_FLAGS_IN();
    ecx = edx; /* 0x100A322B: mov ecx, edx */
    MEM32(ebp + (-0x18)) = eax; /* 0x100A322D: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A3230: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x100A3232: mov dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3235: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A3238: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3296; /* 0x100A323B: je 0x100a3296 */
L_100A323D:
    PUSH32(esp, 2); /* 0x100A323D: push 2 */
    PUSH32(esp, esi); /* 0x100A323F: push esi */
    PUSH32(esp, esi); /* 0x100A3240: push esi */
    PUSH32(esp, edi); /* 0x100A3241: push edi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3242: call 0x10017fde */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A3247: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3249: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100A324C: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A324E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3296; /* 0x100A3251: je 0x100a3296 */
L_100A3253:
    esi = MEM32(ebp + 0xC); /* 0x100A3253: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x100A3256: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x100A3259: sub esi, ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A325B: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x4)) = eax; /* 0x100A325D: mov dword ptr [ebp - 4], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100A332F; /* 0x100A3260: js 0x100a332f */
L_100A3266:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_100A3270; /* 0x100A3266: jg 0x100a3270 */
L_100A3268:
    /* test esi, esi */ /* 0x100A3268: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A332F; /* 0x100A326A: je 0x100a332f */
L_100A3270:
    PUSH32(esp, 0x1000u); /* 0x100A3270: push 0x1000 */
    PUSH32(esp, 8); /* 0x100A3275: push 8 */
    RECOMP_ICALL(MEM32(0x100E51EC)); /* 0x100A3277: call dword ptr [0x100e51ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A327D: push eax */
    RECOMP_ICALL(MEM32(0x100E51E8)); /* 0x100A327E: call dword ptr [0x100e51e8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x100A3284: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x100A3287: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A32A4; /* 0x100A3289: jne 0x100a32a4 */
L_100A328B:
    RECOMP_CALL(sub_1001177D); /* 0x100A328B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A3290: mov dword ptr [eax], 0xc */
L_100A3296:
    RECOMP_CALL(sub_1001177D); /* 0x100A3296: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100A329B: mov eax, dword ptr [eax] */
L_100A329D:
    edi = POP32_VAL(esp); /* 0x100A329D: pop edi */
    esi = POP32_VAL(esp); /* 0x100A329E: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A329F: pop ebx */
    esp = ebp; /* 0x100A32A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A32A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A32A3: ret  */
L_100A32A4:
    PUSH32(esp, 0x8000u); /* 0x100A32A4: push 0x8000 */
    PUSH32(esp, edi); /* 0x100A32A9: push edi */
    RECOMP_CALL(sub_100A3EE4); /* 0x100A32AA: call 0x100a3ee4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A32AF: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x100A32B0: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x100A32B3: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100A32B6: pop ecx */
L_100A32B7:
    /* test eax, eax */ /* 0x100A32B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A32CC; /* 0x100A32B9: jl 0x100a32cc */
L_100A32BB:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A32C5; /* 0x100A32BB: jg 0x100a32c5 */
L_100A32BD:
    /* cmp esi, 0x1000u */ /* 0x100A32BD: cmp esi, 0x1000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A32CC; /* 0x100A32C3: jb 0x100a32cc */
L_100A32C5:
    eax = 0x1000u; /* 0x100A32C5: mov eax, 0x1000 */
    goto L_100A32CE; /* 0x100A32CA: jmp 0x100a32ce */
L_100A32CC:
    eax = esi; /* 0x100A32CC: mov eax, esi */
L_100A32CE:
    PUSH32(esp, eax); /* 0x100A32CE: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x100A32CF: push dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x100A32D2: push edi */
    RECOMP_CALL(sub_10020189); /* 0x100A32D3: call 0x10020189 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A32D8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A32DB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A32F5; /* 0x100A32DE: je 0x100a32f5 */
L_100A32E0:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100A32E0: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x100A32E1: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x100A32E3: mov eax, dword ptr [ebp - 4] */
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A32E6: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x4)) = eax; /* 0x100A32E8: mov dword ptr [ebp - 4], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100A3310; /* 0x100A32EB: js 0x100a3310 */
L_100A32ED:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_100A32B7; /* 0x100A32ED: jg 0x100a32b7 */
L_100A32EF:
    /* test esi, esi */ /* 0x100A32EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A32B7; /* 0x100A32F1: jne 0x100a32b7 */
L_100A32F3:
    goto L_100A3310; /* 0x100A32F3: jmp 0x100a3310 */
L_100A32F5:
    RECOMP_CALL(sub_1001E471); /* 0x100A32F5: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 5 */ /* 0x100A32FA: cmp dword ptr [eax], 5 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A330A; /* 0x100A32FD: jne 0x100a330a */
L_100A32FF:
    RECOMP_CALL(sub_1001177D); /* 0x100A32FF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x100A3304: mov dword ptr [eax], 0xd */
L_100A330A:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x100A330A: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | ebx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | ebx));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | ebx; /* 0x100A330D: or dword ptr [ebp - 8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3310:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x100A3310: push dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x100A3313: push edi */
    RECOMP_CALL(sub_100A3EE4); /* 0x100A3314: call 0x100a3ee4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3319: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A331A: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x100A331B: push dword ptr [ebp - 0xc] */
    PUSH32(esp, 0); /* 0x100A331E: push 0 */
    RECOMP_ICALL(MEM32(0x100E51EC)); /* 0x100A3320: call dword ptr [0x100e51ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A3326: push eax */
    RECOMP_ICALL(MEM32(0x100E51E4)); /* 0x100A3327: call dword ptr [0x100e51e4] */
    RECOMP_FLAGS_IN();
    goto L_100A3395; /* 0x100A332D: jmp 0x100a3395 */
L_100A332F:
    /* test eax, eax */ /* 0x100A332F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A33A1; /* 0x100A3331: jg 0x100a33a1 */
L_100A3333:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A3339; /* 0x100A3333: jl 0x100a3339 */
L_100A3335:
    /* test esi, esi */ /* 0x100A3335: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_100A33A1; /* 0x100A3337: jae 0x100a33a1 */
L_100A3339:
    PUSH32(esp, 0); /* 0x100A3339: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A333B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A333E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100A3341: push edi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3342: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100A3347: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3349: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A334C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3296; /* 0x100A334F: je 0x100a3296 */
L_100A3355:
    PUSH32(esp, edi); /* 0x100A3355: push edi */
    RECOMP_CALL(sub_10014D4B); /* 0x100A3356: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A335B: pop ecx */
    PUSH32(esp, eax); /* 0x100A335C: push eax */
    RECOMP_ICALL(MEM32(0x100E525C)); /* 0x100A335D: call dword ptr [0x100e525c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A3363: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A3365: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A3367: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A3369: dec eax */
    _flag_k = FK_DEC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100A336A: cdq  */
    ebx = eax; /* 0x100A336B: mov ebx, eax */
    eax = edx; /* 0x100A336D: mov eax, edx */
    ecx = ebx; /* 0x100A336F: mov ecx, ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x100A3371: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100A3374: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x100A3376: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A33A1; /* 0x100A3379: jne 0x100a33a1 */
L_100A337B:
    RECOMP_CALL(sub_1001177D); /* 0x100A337B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x100A3380: mov dword ptr [eax], 0xd */
    RECOMP_CALL(sub_1001E471); /* 0x100A3386: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A338B: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A338D: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x100A3393: mov dword ptr [esi], eax */
L_100A3395:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    ebx = ebx & MEM32(ebp + (-0x8)); /* 0x100A3395: and ebx, dword ptr [ebp - 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x100A3398: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3296; /* 0x100A339B: je 0x100a3296 */
L_100A33A1:
    PUSH32(esp, 0); /* 0x100A33A1: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x100A33A3: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x100A33A6: push dword ptr [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x100A33A9: push edi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A33AA: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100A33AF: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A33B1: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A33B4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3296; /* 0x100A33B7: je 0x100a3296 */
L_100A33BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A33BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100A329D; /* 0x100A33BF: jmp 0x100a329d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A33C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A33C4u);

L_100A33C4:
    PUSH32(esp, 0x10u); /* 0x100A33C4: push 0x10 */
    PUSH32(esp, 0x100A34B0u); /* 0x100A33C6: push 0x100a34b0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A33CB: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A33D0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100A33D2: mov dword ptr [ebp - 0x1c], ecx */
    edi = MEM32(ebp + 0x8); /* 0x100A33D5: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x100A33D8: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A33ED; /* 0x100A33DB: jne 0x100a33ed */
L_100A33DD:
    RECOMP_CALL(sub_1001E471); /* 0x100A33DD: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A33E2: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 9); /* 0x100A33E5: push 9 */
    eax = POP32_VAL(esp); /* 0x100A33E7: pop eax */
    goto L_100A34AA; /* 0x100A33E8: jmp 0x100a34aa */
L_100A33ED:
    /* test edi, edi */ /* 0x100A33ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A3491; /* 0x100A33EF: js 0x100a3491 */
L_100A33F5:
    /* cmp edi, MEM32(0x100DFDD8) */ /* 0x100A33F5: cmp edi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A3491; /* 0x100A33FB: jae 0x100a3491 */
L_100A3401:
    ebx = edi; /* 0x100A3401: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x100A3403: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    esi = edi; /* 0x100A3406: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x100A3408: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x100A340B: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x100A340B: shl esi, 6 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A340E: mov eax, dword ptr [ebx*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + esi + 0x4); /* 0x100A3415: movsx eax, byte ptr [eax + esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100A341A: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3491; /* 0x100A341D: je 0x100a3491 */
L_100A341F:
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x100A341F: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100A343C; /* 0x100A3422: jg 0x100a343c */
L_100A3424:
    if (CMP_L(_flag_a, _flag_b)) goto L_100A342B; /* 0x100A3424: jl 0x100a342b */
L_100A3426:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x100A3426: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A343C; /* 0x100A3429: jae 0x100a343c */
L_100A342B:
    RECOMP_CALL(sub_1001E471); /* 0x100A342B: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3430: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100A3433: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A3438: push 0x16 */
    goto L_100A34A0; /* 0x100A343A: jmp 0x100a34a0 */
L_100A343C:
    PUSH32(esp, edi); /* 0x100A343C: push edi */
    RECOMP_CALL(sub_10014206); /* 0x100A343D: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3442: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A3443: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3447: mov eax, dword ptr [ebx*4 + 0x100df640] */
    /* test MEM8(eax + esi + 0x4), 1 */ /* 0x100A344E: test byte ptr [eax + esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3468; /* 0x100A3453: je 0x100a3468 */
L_100A3455:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A3455: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A3458: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100A345B: push edi */
    RECOMP_CALL(sub_100A320E); /* 0x100A345C: call 0x100a320e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A3461: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100A3464: mov esi, eax */
    goto L_100A3472; /* 0x100A3466: jmp 0x100a3472 */
L_100A3468:
    RECOMP_CALL(sub_1001177D); /* 0x100A3468: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x100A346D: push 9 */
    esi = POP32_VAL(esp); /* 0x100A346F: pop esi */
    MEM32(eax) = esi; /* 0x100A3470: mov dword ptr [eax], esi */
L_100A3472:
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A3472: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A3475: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A3489); /* 0x100A347C: call 0x100a3489 */
    RECOMP_FLAGS_IN();
    goto L_100A34A8; /* 0x100A3481: jmp 0x100a34a8 */
L_100A3491:
    RECOMP_CALL(sub_1001E471); /* 0x100A3491: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3496: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100A3499: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x100A349E: push 9 */
L_100A34A0:
    esi = POP32_VAL(esp); /* 0x100A34A0: pop esi */
    MEM32(eax) = esi; /* 0x100A34A1: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A34A3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A34A8:
    eax = esi; /* 0x100A34A8: mov eax, esi */
L_100A34AA:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A34AA: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A34AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3489(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3489u);

L_100A3489:
    PUSH32(esp, edi); /* 0x100A3489: push edi */
    RECOMP_CALL(sub_100141E0); /* 0x100A348A: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A348F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3490: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A34CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A34CCu);

L_100A34CC:
    PUSH32(esp, 0xCu); /* 0x100A34CC: push 0xc */
    PUSH32(esp, 0x100A3550u); /* 0x100A34CE: push 0x100a3550 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A34D3: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A34D8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A34DA: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A34DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x100A34DF: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100A34E2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A34E4: setne al */
    /* test eax, eax */ /* 0x100A34E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A3507; /* 0x100A34E9: jne 0x100a3507 */
L_100A34EB:
    RECOMP_CALL(sub_1001E471); /* 0x100A34EB: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A34F0: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A34F2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A34F7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A34FD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A3502: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A353E; /* 0x100A3505: jmp 0x100a353e */
L_100A3507:
    PUSH32(esp, 3); /* 0x100A3507: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A3509: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A350E: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A350F: mov dword ptr [ebp - 4], esi */
L_100A3512:
    SET_LO8(eax, MEM8(edi)); /* 0x100A3512: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x100A3514: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3530; /* 0x100A3516: je 0x100a3530 */
L_100A3518:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100A3518: movsx eax, al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A351B: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x100A351C: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, eax); /* 0x100A351F: push eax */
    RECOMP_CALL(sub_100A2C64); /* 0x100A3520: call 0x100a2c64 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3525: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A3526: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3512; /* 0x100A3529: jne 0x100a3512 */
L_100A352B:
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x100A352B: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A352D: mov dword ptr [ebp - 0x1c], esi */
L_100A3530:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A3530: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A3547); /* 0x100A3537: call 0x100a3547 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A353C: mov eax, esi */
L_100A353E:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A353E: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3543: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3547(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3547u);

L_100A3547:
    PUSH32(esp, 3); /* 0x100A3547: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A3549: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A354E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A354F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A356C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A356Cu);

L_100A356C:
    PUSH32(esp, 0x18u); /* 0x100A356C: push 0x18 */
    PUSH32(esp, 0x100A3640u); /* 0x100A356E: push 0x100a3640 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A3573: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A3578: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x100A357A: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A357D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x100A357F: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100A3582: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A3584: setne al */
    /* test eax, eax */ /* 0x100A3587: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A35A7; /* 0x100A3589: jne 0x100a35a7 */
L_100A358B:
    RECOMP_CALL(sub_1001E471); /* 0x100A358B: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A3590: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A3592: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A3597: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A359D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A35A2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A35A2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A361A; /* 0x100A35A5: jmp 0x100a361a */
L_100A35A7:
    eax = MEM32(0x100E1430); /* 0x100A35A7: mov eax, dword ptr [0x100e1430] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x100A35AC: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A35BB; /* 0x100A35AF: jne 0x100a35bb */
L_100A35B1:
    RECOMP_CALL(sub_100A44E2); /* 0x100A35B1: call 0x100a44e2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E1430); /* 0x100A35B6: mov eax, dword ptr [0x100e1430] */
L_100A35BB:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A35BB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A35A2; /* 0x100A35BE: je 0x100a35a2 */
L_100A35C0:
    PUSH32(esp, edi); /* 0x100A35C0: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A35C1: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100A35C6: mov ebx, eax */
    PUSH32(esp, 3); /* 0x100A35C8: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A35CA: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A35CF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A35D0: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A35D1: mov dword ptr [ebp - 4], esi */
L_100A35D4:
    /* test ebx, ebx */ /* 0x100A35D4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A360C; /* 0x100A35D6: je 0x100a360c */
L_100A35D8:
    /* cmp ebx, 0x7FFFu */ /* 0x100A35D8: cmp ebx, 0x7fff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A35EA; /* 0x100A35DE: jbe 0x100a35ea */
L_100A35E0:
    eax = 0x7FFFu; /* 0x100A35E0: mov eax, 0x7fff */
    MEM32(ebp + (-0x1C)) = eax; /* 0x100A35E5: mov dword ptr [ebp - 0x1c], eax */
    goto L_100A35EF; /* 0x100A35E8: jmp 0x100a35ef */
L_100A35EA:
    eax = ebx; /* 0x100A35EA: mov eax, ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x100A35EC: mov dword ptr [ebp - 0x1c], ebx */
L_100A35EF:
    PUSH32(esp, esi); /* 0x100A35EF: push esi */
    ecx = ebp + (-0x24); /* 0x100A35F0: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x100A35F3: push ecx */
    PUSH32(esp, eax); /* 0x100A35F4: push eax */
    PUSH32(esp, edi); /* 0x100A35F5: push edi */
    PUSH32(esp, MEM32(0x100E1430)); /* 0x100A35F6: push dword ptr [0x100e1430] */
    RECOMP_ICALL(MEM32(0x100E5258)); /* 0x100A35FC: call dword ptr [0x100e5258] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A3602: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A3620; /* 0x100A3604: jne 0x100a3620 */
L_100A3606:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A3606: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x100A3609: mov dword ptr [ebp - 0x20], esi */
L_100A360C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A360C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A3633); /* 0x100A3613: call 0x100a3633 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A3618: mov eax, esi */
L_100A361A:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A361A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A361F: ret  */
L_100A3620:
    eax = MEM32(ebp + (-0x1C)); /* 0x100A3620: mov eax, dword ptr [ebp - 0x1c] */
    edi = edi + eax * 2; /* 0x100A3623: lea edi, [edi + eax*2] */
    MEM32(ebp + 0x8) = edi; /* 0x100A3626: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x100A3629: sub ebx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = ebx; /* 0x100A362B: mov dword ptr [ebp - 0x28], ebx */
    RECOMP_BACKEDGE();
    goto L_100A35D4; /* 0x100A362E: jmp 0x100a35d4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A3633(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3633u);

L_100A3633:
    PUSH32(esp, 3); /* 0x100A3633: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A3635: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A363A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A363B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A365C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A365Cu);

L_100A365C:
    PUSH32(esp, ebp); /* 0x100A365C: push ebp */
    ebp = esp; /* 0x100A365D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A365F: push ecx */
    PUSH32(esp, esi); /* 0x100A3660: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A3661: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x100A3664: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A3667: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x40u); /* 0x100A366A: push 0x40 */
    PUSH32(esp, 0x302u); /* 0x100A366C: push 0x302 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A3671: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A3674: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, eax); /* 0x100A3677: push eax */
    RECOMP_CALL(sub_100A1C4A); /* 0x100A3678: call 0x100a1c4a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A367D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A3680: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A3687; /* 0x100A3682: jne 0x100a3687 */
L_100A3684:
    esi = MEM32(ebp + (-0x4)); /* 0x100A3684: mov esi, dword ptr [ebp - 4] */
L_100A3687:
    eax = esi; /* 0x100A3687: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A3689: pop esi */
    esp = ebp; /* 0x100A368A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A368C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A368D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A368E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A368Eu);

L_100A368E:
    PUSH32(esp, 0x14u); /* 0x100A368E: push 0x14 */
    PUSH32(esp, 0x100A3770u); /* 0x100A3690: push 0x100a3770 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A3695: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100A369A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A369D: mov dword ptr [ebp - 0x1c], edi */
    esi = MEM32(ebp + 0x8); /* 0x100A36A0: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x100A36A3: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A36C0; /* 0x100A36A6: jne 0x100a36c0 */
L_100A36A8:
    RECOMP_CALL(sub_1001E471); /* 0x100A36A8: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A36AD: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100A36B0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A36B5: mov dword ptr [eax], 9 */
    goto L_100A3762; /* 0x100A36BB: jmp 0x100a3762 */
L_100A36C0:
    /* test esi, esi */ /* 0x100A36C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A374A; /* 0x100A36C2: js 0x100a374a */
L_100A36C8:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x100A36C8: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A374A; /* 0x100A36CE: jae 0x100a374a */
L_100A36D0:
    eax = esi; /* 0x100A36D0: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A36D2: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x20)) = eax; /* 0x100A36D5: mov dword ptr [ebp - 0x20], eax */
    ebx = esi; /* 0x100A36D8: mov ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x100A36DA: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ebx) >> 26) & 1u); /* 0x100A36DD: shl ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 6u; /* 0x100A36DD: shl ebx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A36E0: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ebx + 0x4); /* 0x100A36E7: movsx eax, byte ptr [eax + ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100A36EC: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A374A; /* 0x100A36EF: je 0x100a374a */
L_100A36F1:
    PUSH32(esp, esi); /* 0x100A36F1: push esi */
    RECOMP_CALL(sub_10014206); /* 0x100A36F2: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A36F7: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A36F8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x20)); /* 0x100A36FC: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A36FF: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ebx + 0x4), 1 */ /* 0x100A3706: test byte ptr [eax + ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3718; /* 0x100A370B: je 0x100a3718 */
L_100A370D:
    PUSH32(esp, esi); /* 0x100A370D: push esi */
    RECOMP_CALL(sub_100A378C); /* 0x100A370E: call 0x100a378c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3713: pop ecx */
    edi = eax; /* 0x100A3714: mov edi, eax */
    goto L_100A372B; /* 0x100A3716: jmp 0x100a372b */
L_100A3718:
    RECOMP_CALL(sub_1001177D); /* 0x100A3718: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A371D: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x100A3723: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3728: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A372B:
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A372B: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A372E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A3742); /* 0x100A3735: call 0x100a3742 */
    RECOMP_FLAGS_IN();
    goto L_100A3762; /* 0x100A373A: jmp 0x100a3762 */
L_100A374A:
    RECOMP_CALL(sub_1001E471); /* 0x100A374A: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A374F: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100A3752: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3757: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x100A375D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A3762:
    eax = edi; /* 0x100A3762: mov eax, edi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A3764: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3769: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3742(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3742u);

L_100A3742:
    PUSH32(esp, esi); /* 0x100A3742: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x100A3743: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3748: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3749: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A378C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A378Cu);

L_100A378C:
    PUSH32(esp, 0x20u); /* 0x100A378C: push 0x20 */
    PUSH32(esp, 0x100A38F8u); /* 0x100A378E: push 0x100a38f8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A3793: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A3798: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x100A379A: mov dword ptr [ebp - 0x24], ebx */
    eax = MEM32(ebp + 0x8); /* 0x100A379D: mov eax, dword ptr [ebp + 8] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A37A0: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x20)) = eax; /* 0x100A37A3: mov dword ptr [ebp - 0x20], eax */
    ecx = MEM32(ebp + 0x8); /* 0x100A37A6: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A37A9: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A37AC: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A37AC: shl ecx, 6 */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x100A37AF: mov dword ptr [ebp - 0x2c], ecx */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A37B2: mov eax, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(eax + ecx + 0x4)); /* 0x100A37B9: mov al, byte ptr [eax + ecx + 4] */
    MEM8(ebp + (-0x19)) = (uint8_t)(LO8(eax)); /* 0x100A37BD: mov byte ptr [ebp - 0x19], al */
    /* test LO8(eax), 1 */ /* 0x100A37C0: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A37CC; /* 0x100A37C2: jne 0x100a37cc */
L_100A37C4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A37C4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A38C7; /* 0x100A37C7: jmp 0x100a38c7 */
L_100A37CC:
    RECOMP_CALL(sub_1001530F); /* 0x100A37CC: call 0x1001530f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A37D1: mov edi, eax */
    MEM32(ebp + (-0x30)) = edi; /* 0x100A37D3: mov dword ptr [ebp - 0x30], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x100A37D6: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A37EF; /* 0x100A37D9: jne 0x100a37ef */
L_100A37DB:
    RECOMP_CALL(sub_1001177D); /* 0x100A37DB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100A37E0: mov dword ptr [eax], 0x18 */
    RECOMP_CALL(sub_1001E471); /* 0x100A37E6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A37EB: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_100A37C4; /* 0x100A37ED: jmp 0x100a37c4 */
L_100A37EF:
    MEM32(ebp + (-0x4)) = ebx; /* 0x100A37EF: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, 2); /* 0x100A37F2: push 2 */
    PUSH32(esp, 1); /* 0x100A37F4: push 1 */
    PUSH32(esp, ebx); /* 0x100A37F6: push ebx */
    eax = ebp + (-0x28); /* 0x100A37F7: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100A37FA: push eax */
    esi = MEM32(0x100E510C); /* 0x100A37FB: mov esi, dword ptr [0x100e510c] */
    RECOMP_ICALL(esi); /* 0x100A3801: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A3803: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A3804: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014D4B); /* 0x100A3807: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A380C: pop ecx */
    PUSH32(esp, eax); /* 0x100A380D: push eax */
    RECOMP_ICALL(esi); /* 0x100A380E: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A3810: push eax */
    RECOMP_ICALL(MEM32(0x100E5108)); /* 0x100A3811: call dword ptr [0x100e5108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A3817: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A3823; /* 0x100A3819: jne 0x100a3823 */
L_100A381B:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A381B: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_100A3830; /* 0x100A3821: jmp 0x100a3830 */
L_100A3823:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x100A3823: push dword ptr [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x100A3826: push edi */
    RECOMP_CALL(sub_1001501C); /* 0x100A3827: call 0x1001501c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A382C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A382D: pop ecx */
    eax = ebx; /* 0x100A382E: mov eax, ebx */
L_100A3830:
    /* test eax, eax */ /* 0x100A3830: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A383D; /* 0x100A3832: je 0x100a383d */
L_100A3834:
    PUSH32(esp, eax); /* 0x100A3834: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A3835: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A383A: pop ecx */
    goto L_100A38B2; /* 0x100A383B: jmp 0x100a38b2 */
L_100A383D:
    edx = edi; /* 0x100A383D: mov edx, edi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x100A383F: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    esi = edi; /* 0x100A3842: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x100A3844: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x100A3847: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x100A3847: shl esi, 6 */
    ecx = (int32_t)(int8_t)MEM8(ebp + (-0x19)); /* 0x100A384A: movsx ecx, byte ptr [ebp - 0x19] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xEFu); /* 0x100A384E: and cl, 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A3851: mov eax, dword ptr [edx*4 + 0x100df640] */
    MEM8(eax + esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x100A3858: mov byte ptr [eax + esi + 4], cl */
    ecx = MEM32(edx * 4 + 0x100DF640); /* 0x100A385C: mov ecx, dword ptr [edx*4 + 0x100df640] */
    eax = MEM32(ebp + (-0x20)); /* 0x100A3863: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A3866: mov eax, dword ptr [eax*4 + 0x100df640] */
    ebx = MEM32(ebp + (-0x2C)); /* 0x100A386D: mov ebx, dword ptr [ebp - 0x2c] */
    SET_LO8(eax, MEM8(eax + ebx + 0x24)); /* 0x100A3870: mov al, byte ptr [eax + ebx + 0x24] */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(ecx + esi + 0x24))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(ecx + esi + 0x24))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(ecx + esi + 0x24)); /* 0x100A3874: xor al, byte ptr [ecx + esi + 0x24] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x100A3878: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ecx + esi + 0x24) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ecx + esi + 0x24) ^ LO8(eax))) << 24;
    MEM8(ecx + esi + 0x24) = (uint8_t)(MEM8(ecx + esi + 0x24) ^ LO8(eax)); /* 0x100A387A: xor byte ptr [ecx + esi + 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(edx * 4 + 0x100DF640); /* 0x100A387E: mov edx, dword ptr [edx*4 + 0x100df640] */
    eax = MEM32(ebp + (-0x20)); /* 0x100A3885: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A3888: mov eax, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(ecx, MEM8(eax + ebx + 0x24)); /* 0x100A388F: mov cl, byte ptr [eax + ebx + 0x24] */
    _flag_a = (uint32_t)((LO8(ecx) ^ MEM8(edx + esi + 0x24))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ MEM8(edx + esi + 0x24))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(edx + esi + 0x24)); /* 0x100A3893: xor cl, byte ptr [edx + esi + 0x24] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x7Fu); /* 0x100A3897: and cl, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x20)); /* 0x100A389A: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A389D: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)((LO8(ecx) ^ MEM8(eax + ebx + 0x24))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ MEM8(eax + ebx + 0x24))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + ebx + 0x24)); /* 0x100A38A4: xor cl, byte ptr [eax + ebx + 0x24] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + esi + 0x24) = (uint8_t)(LO8(ecx)); /* 0x100A38A8: mov byte ptr [edx + esi + 0x24], cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A38AC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A38AE: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = ebx; /* 0x100A38AF: mov dword ptr [ebp - 0x24], ebx */
L_100A38B2:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A38B2: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A38D3); /* 0x100A38B9: call 0x100a38d3 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x100A38BE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A38C5; /* 0x100A38C0: jne 0x100a38c5 */
L_100A38C2:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100A38C2: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A38C5:
    eax = edi; /* 0x100A38C5: mov eax, edi */
L_100A38C7:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A38C7: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A38CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A38D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A38D3u);

L_100A38D3:
    /* test ebx, ebx */ /* 0x100A38D3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A38F0; /* 0x100A38D5: jne 0x100a38f0 */
L_100A38D7:
    eax = edi; /* 0x100A38D7: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A38D9: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = edi; /* 0x100A38DC: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A38DE: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A38E1: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A38E1: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A38E4: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x100A38EB: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A38F0:
    PUSH32(esp, edi); /* 0x100A38F0: push edi */
    RECOMP_CALL(sub_100141E0); /* 0x100A38F1: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A38F6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A38F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3914(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3914u);

L_100A3914:
    PUSH32(esp, ebp); /* 0x100A3914: push ebp */
    ebp = esp; /* 0x100A3915: mov ebp, esp */
    ecx = MEM32(0x100DFDD8); /* 0x100A3917: mov ecx, dword ptr [0x100dfdd8] */
    PUSH32(esp, esi); /* 0x100A391D: push esi */
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x100A391E: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100A398A; /* 0x100A3921: jl 0x100a398a */
L_100A3923:
    esi = 0x100DF640u; /* 0x100A3923: mov esi, 0x100df640 */
L_100A3928:
    /* cmp MEM32(esi), 0 */ /* 0x100A3928: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3982; /* 0x100A392B: jne 0x100a3982 */
L_100A392D:
    PUSH32(esp, 0x40u); /* 0x100A392D: push 0x40 */
    PUSH32(esp, 0x20u); /* 0x100A392F: push 0x20 */
    RECOMP_CALL(sub_10011208); /* 0x100A3931: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100A3936: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x100A3938: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A3939: pop ecx */
    /* test edx, edx */ /* 0x100A393A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A398F; /* 0x100A393C: je 0x100a398f */
L_100A393E:
    ecx = MEM32(0x100DFDD8); /* 0x100A393E: mov ecx, dword ptr [0x100dfdd8] */
    eax = edx + 0x800; /* 0x100A3944: lea eax, [edx + 0x800] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x100A394A: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esi) = edx; /* 0x100A394D: mov dword ptr [esi], edx */
    MEM32(0x100DFDD8) = ecx; /* 0x100A394F: mov dword ptr [0x100dfdd8], ecx */
    /* cmp edx, eax */ /* 0x100A3955: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A3982; /* 0x100A3957: jae 0x100a3982 */
L_100A3959:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 5; /* 0x100A3959: add edx, 5 */
    _flag_k = FK_ADD;
L_100A395C:
    _flag_a = (uint32_t)((MEM32(edx + (-0x5)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx + (-0x5)) | 0xFFFFFFFFu));
    MEM32(edx + (-0x5)) = MEM32(edx + (-0x5)) | 0xFFFFFFFFu; /* 0x100A395C: or dword ptr [edx - 5], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edx + 0x40; /* 0x100A3960: lea edx, [edx + 0x40] */
    _flag_a = (uint32_t)(MEM32(edx + (-0x3D))); _flag_b = (uint32_t)(0);
    MEM32(edx + (-0x3D)) = MEM32(edx + (-0x3D)) & 0; /* 0x100A3963: and dword ptr [edx - 0x3d], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + (-0x5); /* 0x100A3967: lea eax, [edx - 5] */
    MEM16(edx + (-0x41)) = (uint16_t)(0xA00u); /* 0x100A396A: mov word ptr [edx - 0x41], 0xa00 */
    ecx = MEM32(esi); /* 0x100A3970: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x800u; /* 0x100A3972: add ecx, 0x800 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x100A3978: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100A395C; /* 0x100A397A: jb 0x100a395c */
L_100A397C:
    ecx = MEM32(0x100DFDD8); /* 0x100A397C: mov ecx, dword ptr [0x100dfdd8] */
L_100A3982:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100A3982: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x100A3985: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_100A3928; /* 0x100A3988: jge 0x100a3928 */
L_100A398A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A398A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A398C:
    esi = POP32_VAL(esp); /* 0x100A398C: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A398D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A398E: ret  */
L_100A398F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A398F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100A398C; /* 0x100A3992: jmp 0x100a398c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A3994(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3994u);

L_100A3994:
    PUSH32(esp, 0x14u); /* 0x100A3994: push 0x14 */
    PUSH32(esp, 0x100A3AD0u); /* 0x100A3996: push 0x100a3ad0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A399B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A39A0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x100A39A2: mov dword ptr [ebp - 0x1c], ebx */
    esi = MEM32(ebp + 0x8); /* 0x100A39A5: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x100A39A8: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A39C4; /* 0x100A39AB: jne 0x100a39c4 */
L_100A39AD:
    RECOMP_CALL(sub_1001E471); /* 0x100A39AD: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A39B2: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x100A39B4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A39B9: mov dword ptr [eax], 9 */
    goto L_100A3AC5; /* 0x100A39BF: jmp 0x100a3ac5 */
L_100A39C4:
    /* test esi, esi */ /* 0x100A39C4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A3AAE; /* 0x100A39C6: js 0x100a3aae */
L_100A39CC:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x100A39CC: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A3AAE; /* 0x100A39D2: jae 0x100a3aae */
L_100A39D8:
    eax = esi; /* 0x100A39D8: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A39DA: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x20)) = eax; /* 0x100A39DD: mov dword ptr [ebp - 0x20], eax */
    ebx = esi; /* 0x100A39E0: mov ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x100A39E2: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ebx) >> 26) & 1u); /* 0x100A39E5: shl ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 6u; /* 0x100A39E5: shl ebx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A39E8: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ebx + 0x4); /* 0x100A39EF: movsx eax, byte ptr [eax + ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A39F4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A39F6: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x100A39F7: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A3A08; /* 0x100A39F9: jne 0x100a3a08 */
L_100A39FB:
    RECOMP_CALL(sub_1001E471); /* 0x100A39FB: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3A00: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A3AB5; /* 0x100A3A03: jmp 0x100a3ab5 */
L_100A3A08:
    PUSH32(esp, esi); /* 0x100A3A08: push esi */
    RECOMP_CALL(sub_10014206); /* 0x100A3A09: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3A0E: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A3A0F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x100A3A11: mov dword ptr [ebp - 4], ecx */
    eax = MEM32(ebp + (-0x20)); /* 0x100A3A14: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A3A17: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ebx + 0x4), 1 */ /* 0x100A3A1E: test byte ptr [eax + ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3A77; /* 0x100A3A23: je 0x100a3a77 */
L_100A3A25:
    PUSH32(esp, edi); /* 0x100A3A25: push edi */
    PUSH32(esp, ecx); /* 0x100A3A26: push ecx */
    PUSH32(esp, ecx); /* 0x100A3A27: push ecx */
    PUSH32(esp, esi); /* 0x100A3A28: push esi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3A29: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3A2E: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x100A3A31: mov dword ptr [ebp - 0x20], eax */
    ebx = edx; /* 0x100A3A34: mov ebx, edx */
    ecx = eax; /* 0x100A3A36: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x100A3A38: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x100A3A3A: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3A8A; /* 0x100A3A3D: je 0x100a3a8a */
L_100A3A3F:
    PUSH32(esp, 2); /* 0x100A3A3F: push 2 */
    PUSH32(esp, 0); /* 0x100A3A41: push 0 */
    PUSH32(esp, 0); /* 0x100A3A43: push 0 */
    PUSH32(esp, esi); /* 0x100A3A45: push esi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3A46: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3A4B: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x100A3A4E: mov dword ptr [ebp - 0x24], eax */
    ecx = eax; /* 0x100A3A51: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x100A3A53: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x100A3A55: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3A8A; /* 0x100A3A58: je 0x100a3a8a */
L_100A3A5A:
    eax = MEM32(ebp + (-0x20)); /* 0x100A3A5A: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x100A3A5D: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3A66; /* 0x100A3A60: jne 0x100a3a66 */
L_100A3A62:
    /* cmp ebx, edx */ /* 0x100A3A62: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3A8D; /* 0x100A3A64: je 0x100a3a8d */
L_100A3A66:
    PUSH32(esp, 0); /* 0x100A3A66: push 0 */
    PUSH32(esp, ebx); /* 0x100A3A68: push ebx */
    PUSH32(esp, eax); /* 0x100A3A69: push eax */
    PUSH32(esp, esi); /* 0x100A3A6A: push esi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3A6B: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3A70: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A3A73: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A3A8D; /* 0x100A3A75: jmp 0x100a3a8d */
L_100A3A77:
    RECOMP_CALL(sub_1001177D); /* 0x100A3A77: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3A7C: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x100A3A82: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3A87: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3A8A:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100A3A8A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3A8D:
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A3A8D: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A3A90: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A3AA6); /* 0x100A3A97: call 0x100a3aa6 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100A3A9C: mov eax, edi */
    goto L_100A3AC8; /* 0x100A3A9E: jmp 0x100a3ac8 */
L_100A3AAE:
    RECOMP_CALL(sub_1001E471); /* 0x100A3AAE: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A3AB3: mov dword ptr [eax], ebx */
L_100A3AB5:
    RECOMP_CALL(sub_1001177D); /* 0x100A3AB5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3ABA: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x100A3AC0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A3AC5:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A3AC5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3AC8:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A3AC8: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3ACD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3AA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3AA6u);

L_100A3AA6:
    PUSH32(esp, esi); /* 0x100A3AA6: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x100A3AA7: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3AAC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3AAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3AEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3AECu);

L_100A3AEC:
    PUSH32(esp, 0x10u); /* 0x100A3AEC: push 0x10 */
    PUSH32(esp, 0x100A3C08u); /* 0x100A3AEE: push 0x100a3c08 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A3AF3: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A3AF8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x100A3AFA: mov dword ptr [ebp - 0x1c], ebx */
    esi = MEM32(ebp + 0x8); /* 0x100A3AFD: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x100A3B00: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3B1C; /* 0x100A3B03: jne 0x100a3b1c */
L_100A3B05:
    RECOMP_CALL(sub_1001E471); /* 0x100A3B05: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A3B0A: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x100A3B0C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3B11: mov dword ptr [eax], 9 */
    goto L_100A3BFC; /* 0x100A3B17: jmp 0x100a3bfc */
L_100A3B1C:
    /* test esi, esi */ /* 0x100A3B1C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A3BE5; /* 0x100A3B1E: js 0x100a3be5 */
L_100A3B24:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x100A3B24: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A3BE5; /* 0x100A3B2A: jae 0x100a3be5 */
L_100A3B30:
    ebx = esi; /* 0x100A3B30: mov ebx, esi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x100A3B32: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    edi = esi; /* 0x100A3B35: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x100A3B37: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x100A3B3A: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x100A3B3A: shl edi, 6 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3B3D: mov eax, dword ptr [ebx*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + edi + 0x4); /* 0x100A3B44: movsx eax, byte ptr [eax + edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100A3B49: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A3B5B; /* 0x100A3B4C: jne 0x100a3b5b */
L_100A3B4E:
    RECOMP_CALL(sub_1001E471); /* 0x100A3B4E: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3B53: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A3BEC; /* 0x100A3B56: jmp 0x100a3bec */
L_100A3B5B:
    PUSH32(esp, esi); /* 0x100A3B5B: push esi */
    RECOMP_CALL(sub_10014206); /* 0x100A3B5C: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3B61: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A3B62: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3B66: mov eax, dword ptr [ebx*4 + 0x100df640] */
    /* test MEM8(eax + edi + 0x4), 1 */ /* 0x100A3B6D: test byte ptr [eax + edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3BAE; /* 0x100A3B72: je 0x100a3bae */
L_100A3B74:
    PUSH32(esp, 1); /* 0x100A3B74: push 1 */
    PUSH32(esp, 0); /* 0x100A3B76: push 0 */
    PUSH32(esp, esi); /* 0x100A3B78: push esi */
    RECOMP_CALL(sub_1002F894); /* 0x100A3B79: call 0x1002f894 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A3B7E: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x100A3B81: mov ebx, eax */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100A3B83: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x100A3B86: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3BC4; /* 0x100A3B88: je 0x100a3bc4 */
L_100A3B8A:
    PUSH32(esp, 2); /* 0x100A3B8A: push 2 */
    PUSH32(esp, 0); /* 0x100A3B8C: push 0 */
    PUSH32(esp, esi); /* 0x100A3B8E: push esi */
    RECOMP_CALL(sub_1002F894); /* 0x100A3B8F: call 0x1002f894 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A3B94: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x100A3B97: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A3B99: mov dword ptr [ebp - 0x1c], edi */
    /* cmp ebx, edi */ /* 0x100A3B9C: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3BC7; /* 0x100A3B9E: je 0x100a3bc7 */
L_100A3BA0:
    PUSH32(esp, 0); /* 0x100A3BA0: push 0 */
    PUSH32(esp, ebx); /* 0x100A3BA2: push ebx */
    PUSH32(esp, esi); /* 0x100A3BA3: push esi */
    RECOMP_CALL(sub_1002F894); /* 0x100A3BA4: call 0x1002f894 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A3BA9: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_100A3BC7; /* 0x100A3BAC: jmp 0x100a3bc7 */
L_100A3BAE:
    RECOMP_CALL(sub_1001177D); /* 0x100A3BAE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3BB3: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x100A3BB9: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3BBE: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100A3BC1: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3BC4:
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A3BC4: mov dword ptr [ebp - 0x1c], edi */
L_100A3BC7:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A3BC7: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A3BDD); /* 0x100A3BCE: call 0x100a3bdd */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100A3BD3: mov eax, edi */
    goto L_100A3BFF; /* 0x100A3BD5: jmp 0x100a3bff */
L_100A3BE5:
    RECOMP_CALL(sub_1001E471); /* 0x100A3BE5: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A3BEA: mov dword ptr [eax], ebx */
L_100A3BEC:
    RECOMP_CALL(sub_1001177D); /* 0x100A3BEC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3BF1: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x100A3BF7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A3BFC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A3BFC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3BFF:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A3BFF: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3C04: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3BDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3BDDu);

L_100A3BDD:
    PUSH32(esp, esi); /* 0x100A3BDD: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x100A3BDE: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3BE3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3BE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3C24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3C24u);

L_100A3C24:
    PUSH32(esp, 0x18u); /* 0x100A3C24: push 0x18 */
    PUSH32(esp, 0x100A3D68u); /* 0x100A3C26: push 0x100a3d68 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A3C2B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A3C30: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = ebx; /* 0x100A3C32: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x100A3C35: mov dword ptr [ebp - 0x24], ebx */
    edi = MEM32(ebp + 0x8); /* 0x100A3C38: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x100A3C3B: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3C57; /* 0x100A3C3E: jne 0x100a3c57 */
L_100A3C40:
    RECOMP_CALL(sub_1001E471); /* 0x100A3C40: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A3C45: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x100A3C47: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3C4C: mov dword ptr [eax], 9 */
    goto L_100A3D5B; /* 0x100A3C52: jmp 0x100a3d5b */
L_100A3C57:
    /* test edi, edi */ /* 0x100A3C57: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A3D44; /* 0x100A3C59: js 0x100a3d44 */
L_100A3C5F:
    /* cmp edi, MEM32(0x100DFDD8) */ /* 0x100A3C5F: cmp edi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A3D44; /* 0x100A3C65: jae 0x100a3d44 */
L_100A3C6B:
    ebx = edi; /* 0x100A3C6B: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x100A3C6D: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    esi = edi; /* 0x100A3C70: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x100A3C72: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x100A3C75: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x100A3C75: shl esi, 6 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3C78: mov eax, dword ptr [ebx*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + esi + 0x4); /* 0x100A3C7F: movsx eax, byte ptr [eax + esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100A3C84: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A3C96; /* 0x100A3C87: jne 0x100a3c96 */
L_100A3C89:
    RECOMP_CALL(sub_1001E471); /* 0x100A3C89: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3C8E: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A3D4B; /* 0x100A3C91: jmp 0x100a3d4b */
L_100A3C96:
    PUSH32(esp, edi); /* 0x100A3C96: push edi */
    RECOMP_CALL(sub_10014206); /* 0x100A3C97: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3C9C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A3C9D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3CA1: mov eax, dword ptr [ebx*4 + 0x100df640] */
    /* test MEM8(eax + esi + 0x4), 1 */ /* 0x100A3CA8: test byte ptr [eax + esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3D05; /* 0x100A3CAD: je 0x100a3d05 */
L_100A3CAF:
    PUSH32(esp, 1); /* 0x100A3CAF: push 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A3CB1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x100A3CB3: push ebx */
    PUSH32(esp, ebx); /* 0x100A3CB4: push ebx */
    PUSH32(esp, edi); /* 0x100A3CB5: push edi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3CB6: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3CBB: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x100A3CBE: mov ecx, eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x100A3CC0: mov dword ptr [ebp - 0x20], ecx */
    eax = edx; /* 0x100A3CC3: mov eax, edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x100A3CC5: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100A3CC8: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A3CCA: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, esi */ /* 0x100A3CCD: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3D1B; /* 0x100A3CCF: je 0x100a3d1b */
L_100A3CD1:
    PUSH32(esp, 2); /* 0x100A3CD1: push 2 */
    PUSH32(esp, ebx); /* 0x100A3CD3: push ebx */
    PUSH32(esp, ebx); /* 0x100A3CD4: push ebx */
    PUSH32(esp, edi); /* 0x100A3CD5: push edi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3CD6: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3CDB: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x100A3CDE: mov ebx, eax */
    MEM32(ebp + (-0x28)) = ebx; /* 0x100A3CE0: mov dword ptr [ebp - 0x28], ebx */
    esi = edx; /* 0x100A3CE3: mov esi, edx */
    MEM32(ebp + (-0x24)) = esi; /* 0x100A3CE5: mov dword ptr [ebp - 0x24], esi */
    ecx = MEM32(ebp + (-0x20)); /* 0x100A3CE8: mov ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x1C)); /* 0x100A3CEB: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp ecx, ebx */ /* 0x100A3CEE: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3CF6; /* 0x100A3CF0: jne 0x100a3cf6 */
L_100A3CF2:
    /* cmp eax, esi */ /* 0x100A3CF2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3D23; /* 0x100A3CF4: je 0x100a3d23 */
L_100A3CF6:
    PUSH32(esp, 0); /* 0x100A3CF6: push 0 */
    PUSH32(esp, eax); /* 0x100A3CF8: push eax */
    PUSH32(esp, ecx); /* 0x100A3CF9: push ecx */
    PUSH32(esp, edi); /* 0x100A3CFA: push edi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A3CFB: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A3D00: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100A3D23; /* 0x100A3D03: jmp 0x100a3d23 */
L_100A3D05:
    RECOMP_CALL(sub_1001177D); /* 0x100A3D05: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3D0A: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x100A3D10: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A3D15: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A3D18: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3D1B:
    ebx = esi; /* 0x100A3D1B: mov ebx, esi */
    MEM32(ebp + (-0x28)) = ebx; /* 0x100A3D1D: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x24)) = esi; /* 0x100A3D20: mov dword ptr [ebp - 0x24], esi */
L_100A3D23:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A3D23: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A3D3C); /* 0x100A3D2A: call 0x100a3d3c */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x100A3D2F: mov eax, ebx */
    goto L_100A3D60; /* 0x100A3D31: jmp 0x100a3d60 */
L_100A3D44:
    RECOMP_CALL(sub_1001E471); /* 0x100A3D44: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A3D49: mov dword ptr [eax], ebx */
L_100A3D4B:
    RECOMP_CALL(sub_1001177D); /* 0x100A3D4B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3D50: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x100A3D56: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A3D5B:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A3D5B: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x100A3D5E: mov eax, esi */
L_100A3D60:
    edx = esi; /* 0x100A3D60: mov edx, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A3D62: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3D67: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3D3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3D3Cu);

L_100A3D3C:
    PUSH32(esp, edi); /* 0x100A3D3C: push edi */
    RECOMP_CALL(sub_100141E0); /* 0x100A3D3D: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3D42: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3D43: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3D84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3D84u);

L_100A3D84:
    PUSH32(esp, ebp); /* 0x100A3D84: push ebp */
    ebp = esp; /* 0x100A3D85: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A3D87: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x4000u */ /* 0x100A3D8A: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3DB4; /* 0x100A3D8F: je 0x100a3db4 */
L_100A3D91:
    /* cmp eax, 0x8000u */ /* 0x100A3D91: cmp eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3DB4; /* 0x100A3D96: je 0x100a3db4 */
L_100A3D98:
    /* cmp eax, 0x00010000u */ /* 0x100A3D98: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3DB4; /* 0x100A3D9D: je 0x100a3db4 */
L_100A3D9F:
    RECOMP_CALL(sub_1001177D); /* 0x100A3D9F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A3DA4: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A3DAA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A3DAF: push 0x16 */
    eax = POP32_VAL(esp); /* 0x100A3DB1: pop eax */
    ebp = POP32_VAL(esp); /* 0x100A3DB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3DB3: ret  */
L_100A3DB4:
    ecx = 0x100DF740u; /* 0x100A3DB4: mov ecx, 0x100df740 */
    { uint32_t _tmp = MEM32(ecx); /* 0x100A3DB9: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A3DBB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A3DBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3DBE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3DBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3DBFu);

L_100A3DBF:
    PUSH32(esp, 0x10u); /* 0x100A3DBF: push 0x10 */
    PUSH32(esp, 0x100A3EC8u); /* 0x100A3DC1: push 0x100a3ec8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A3DC6: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A3DCB: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x100A3DCF: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 0x4000u */ /* 0x100A3DD2: cmp edi, 0x4000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3E0A; /* 0x100A3DD8: je 0x100a3e0a */
L_100A3DDA:
    /* cmp edi, 0x8000u */ /* 0x100A3DDA: cmp edi, 0x8000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3E0A; /* 0x100A3DE0: je 0x100a3e0a */
L_100A3DE2:
    /* cmp edi, 0x00010000u */ /* 0x100A3DE2: cmp edi, 0x10000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3E0A; /* 0x100A3DE8: je 0x100a3e0a */
L_100A3DEA:
    /* cmp edi, 0x00040000u */ /* 0x100A3DEA: cmp edi, 0x40000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3E0A; /* 0x100A3DF0: je 0x100a3e0a */
L_100A3DF2:
    /* cmp edi, 0x00020000u */ /* 0x100A3DF2: cmp edi, 0x20000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3E0A; /* 0x100A3DF8: je 0x100a3e0a */
L_100A3DFA:
    RECOMP_CALL(sub_1001177D); /* 0x100A3DFA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A3DFF: mov dword ptr [eax], 0x16 */
    goto L_100A3EB6; /* 0x100A3E05: jmp 0x100a3eb6 */
L_100A3E0A:
    esi = MEM32(ebp + 0x8); /* 0x100A3E0A: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x100A3E0D: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3E22; /* 0x100A3E10: jne 0x100a3e22 */
L_100A3E12:
    RECOMP_CALL(sub_1001177D); /* 0x100A3E12: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3E17: mov dword ptr [eax], 9 */
    goto L_100A3EBB; /* 0x100A3E1D: jmp 0x100a3ebb */
L_100A3E22:
    /* test esi, esi */ /* 0x100A3E22: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A3EAB; /* 0x100A3E24: js 0x100a3eab */
L_100A3E2A:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x100A3E2A: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A3EAB; /* 0x100A3E30: jae 0x100a3eab */
L_100A3E32:
    eax = esi; /* 0x100A3E32: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A3E34: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + 0xC) = eax; /* 0x100A3E37: mov dword ptr [ebp + 0xc], eax */
    ebx = esi; /* 0x100A3E3A: mov ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x100A3E3C: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ebx) >> 26) & 1u); /* 0x100A3E3F: shl ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 6u; /* 0x100A3E3F: shl ebx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A3E42: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ebx + 0x4); /* 0x100A3E49: movsx eax, byte ptr [eax + ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100A3E4E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3EAB; /* 0x100A3E51: je 0x100a3eab */
L_100A3E53:
    PUSH32(esp, esi); /* 0x100A3E53: push esi */
    RECOMP_CALL(sub_10014206); /* 0x100A3E54: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3E59: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A3E5A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x100A3E5E: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A3E61: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ebx + 0x4), 1 */ /* 0x100A3E68: test byte ptr [eax + ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A3E7C; /* 0x100A3E6D: je 0x100a3e7c */
L_100A3E6F:
    PUSH32(esp, edi); /* 0x100A3E6F: push edi */
    PUSH32(esp, esi); /* 0x100A3E70: push esi */
    RECOMP_CALL(sub_100A3EE4); /* 0x100A3E71: call 0x100a3ee4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3E76: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A3E77: pop ecx */
    edi = eax; /* 0x100A3E78: mov edi, eax */
    goto L_100A3E8A; /* 0x100A3E7A: jmp 0x100a3e8a */
L_100A3E7C:
    RECOMP_CALL(sub_1001177D); /* 0x100A3E7C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3E81: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100A3E87: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3E8A:
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A3E8A: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A3E8D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A3EA3); /* 0x100A3E94: call 0x100a3ea3 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100A3E99: mov eax, edi */
    goto L_100A3EBE; /* 0x100A3E9B: jmp 0x100a3ebe */
L_100A3EAB:
    RECOMP_CALL(sub_1001177D); /* 0x100A3EAB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3EB0: mov dword ptr [eax], 9 */
L_100A3EB6:
    RECOMP_CALL(sub_100A4670); /* 0x100A3EB6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A3EBB:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A3EBB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A3EBE:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A3EBE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3EC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3EA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3EA3u);

L_100A3EA3:
    PUSH32(esp, esi); /* 0x100A3EA3: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x100A3EA4: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A3EA9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3EAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3EE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3EE4u);

L_100A3EE4:
    PUSH32(esp, ebp); /* 0x100A3EE4: push ebp */
    ebp = esp; /* 0x100A3EE5: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100A3EE7: push ebx */
    PUSH32(esp, esi); /* 0x100A3EE8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A3EE9: mov esi, dword ptr [ebp + 8] */
    ebx = esi; /* 0x100A3EEC: mov ebx, esi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x100A3EEE: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x100A3EF1: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x100A3EF4: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x100A3EF4: shl esi, 6 */
    PUSH32(esp, edi); /* 0x100A3EF7: push edi */
    edi = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3EF8: mov edi, dword ptr [ebx*4 + 0x100df640] */
    SET_LO8(ecx, MEM8(edi + esi + 0x4)); /* 0x100A3EFF: mov cl, byte ptr [edi + esi + 4] */
    eax = (uint32_t)LO8(ecx); /* 0x100A3F03: movzx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x100A3F06: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x100A3F0B: mov dword ptr [ebp + 8], eax */
    SET_LO8(eax, MEM8(edi + esi + 0x24)); /* 0x100A3F0E: mov al, byte ptr [edi + esi + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100A3F12: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = (int32_t)(int8_t)LO8(eax); /* 0x100A3F14: movsx edx, al */
    eax = MEM32(ebp + 0xC); /* 0x100A3F17: mov eax, dword ptr [ebp + 0xc] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x100A3F1A: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    /* cmp eax, 0x4000u */ /* 0x100A3F1C: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3F7C; /* 0x100A3F21: je 0x100a3f7c */
L_100A3F23:
    /* cmp eax, 0x8000u */ /* 0x100A3F23: cmp eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3F73; /* 0x100A3F28: je 0x100a3f73 */
L_100A3F2A:
    /* cmp eax, 0x00010000u */ /* 0x100A3F2A: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3F5B; /* 0x100A3F2F: je 0x100a3f5b */
L_100A3F31:
    /* cmp eax, 0x00020000u */ /* 0x100A3F31: cmp eax, 0x20000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A3F5B; /* 0x100A3F36: je 0x100a3f5b */
L_100A3F38:
    /* cmp eax, 0x00040000u */ /* 0x100A3F38: cmp eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3F8F; /* 0x100A3F3D: jne 0x100a3f8f */
L_100A3F3F:
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x100A3F3F: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x100A3F42: mov byte ptr [edi + esi + 4], cl */
    ecx = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3F46: mov ecx, dword ptr [ebx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(esi + ecx + 0x24)); /* 0x100A3F4D: mov al, byte ptr [esi + ecx + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x81u) << 24;
    SET_LO8(eax, LO8(eax) & 0x81u); /* 0x100A3F51: and al, 0x81 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 1)) << 24; _flag_b = (uint32_t)((LO8(eax) | 1)) << 24;
    SET_LO8(eax, LO8(eax) | 1); /* 0x100A3F53: or al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A3F55:
    MEM8(ecx + esi + 0x24) = (uint8_t)(LO8(eax)); /* 0x100A3F55: mov byte ptr [ecx + esi + 0x24], al */
    goto L_100A3F8F; /* 0x100A3F59: jmp 0x100a3f8f */
L_100A3F5B:
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x100A3F5B: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x100A3F5E: mov byte ptr [edi + esi + 4], cl */
    ecx = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3F62: mov ecx, dword ptr [ebx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(esi + ecx + 0x24)); /* 0x100A3F69: mov al, byte ptr [esi + ecx + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    SET_LO8(eax, LO8(eax) & 0x82u); /* 0x100A3F6D: and al, 0x82 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 2)) << 24; _flag_b = (uint32_t)((LO8(eax) | 2)) << 24;
    SET_LO8(eax, LO8(eax) | 2); /* 0x100A3F6F: or al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_100A3F55; /* 0x100A3F71: jmp 0x100a3f55 */
L_100A3F73:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x7Fu); /* 0x100A3F73: and cl, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x100A3F76: mov byte ptr [edi + esi + 4], cl */
    goto L_100A3F8F; /* 0x100A3F7A: jmp 0x100a3f8f */
L_100A3F7C:
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x100A3F7C: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x100A3F7F: mov byte ptr [edi + esi + 4], cl */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A3F83: mov eax, dword ptr [ebx*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    MEM8(eax + esi + 0x24) = (uint8_t)(MEM8(eax + esi + 0x24) & 0x80u); /* 0x100A3F8A: and byte ptr [eax + esi + 0x24], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A3F8F:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100A3F8F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x100A3F93: pop edi */
    esi = POP32_VAL(esp); /* 0x100A3F94: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A3F95: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3F9F; /* 0x100A3F96: jne 0x100a3f9f */
L_100A3F98:
    eax = 0x8000u; /* 0x100A3F98: mov eax, 0x8000 */
    ebp = POP32_VAL(esp); /* 0x100A3F9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3F9E: ret  */
L_100A3F9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x100A3F9F: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A3FA1: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC000u);
    edx = edx & 0xC000u; /* 0x100A3FA3: and edx, 0xc000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + 0x4000; /* 0x100A3FA9: lea eax, [edx + 0x4000] */
    ebp = POP32_VAL(esp); /* 0x100A3FAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A3FB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A3FB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A3FB1u);

L_100A3FB1:
    PUSH32(esp, 0x10u); /* 0x100A3FB1: push 0x10 */
    PUSH32(esp, 0x100A40C8u); /* 0x100A3FB3: push 0x100a40c8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A3FB8: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A3FBD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x100A3FBF: mov dword ptr [ebp - 0x1c], ebx */
    esi = MEM32(ebp + 0x8); /* 0x100A3FC2: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x100A3FC5: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A3FE1; /* 0x100A3FC8: jne 0x100a3fe1 */
L_100A3FCA:
    RECOMP_CALL(sub_1001E471); /* 0x100A3FCA: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A3FCF: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x100A3FD1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A3FD6: mov dword ptr [eax], 9 */
    goto L_100A40BB; /* 0x100A3FDC: jmp 0x100a40bb */
L_100A3FE1:
    /* test esi, esi */ /* 0x100A3FE1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A40A4; /* 0x100A3FE3: js 0x100a40a4 */
L_100A3FE9:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x100A3FE9: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A40A4; /* 0x100A3FEF: jae 0x100a40a4 */
L_100A3FF5:
    ebx = esi; /* 0x100A3FF5: mov ebx, esi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x100A3FF7: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    edi = esi; /* 0x100A3FFA: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x100A3FFC: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x100A3FFF: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x100A3FFF: shl edi, 6 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A4002: mov eax, dword ptr [ebx*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + edi + 0x4); /* 0x100A4009: movsx eax, byte ptr [eax + edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100A400E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4020; /* 0x100A4011: jne 0x100a4020 */
L_100A4013:
    RECOMP_CALL(sub_1001E471); /* 0x100A4013: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A4018: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A40AB; /* 0x100A401B: jmp 0x100a40ab */
L_100A4020:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4020: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100A4022: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A4025: setge al */
    /* test eax, eax */ /* 0x100A4028: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4041; /* 0x100A402A: jne 0x100a4041 */
L_100A402C:
    RECOMP_CALL(sub_1001E471); /* 0x100A402C: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A4031: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100A4034: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A4039: mov dword ptr [eax], 0x16 */
    goto L_100A40B6; /* 0x100A403F: jmp 0x100a40b6 */
L_100A4041:
    PUSH32(esp, esi); /* 0x100A4041: push esi */
    RECOMP_CALL(sub_10014206); /* 0x100A4042: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4047: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A4048: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x100A404C: mov eax, dword ptr [ebx*4 + 0x100df640] */
    /* test MEM8(eax + edi + 0x4), 1 */ /* 0x100A4053: test byte ptr [eax + edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A406D; /* 0x100A4058: je 0x100a406d */
L_100A405A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A405A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A405D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100A4060: push esi */
    RECOMP_CALL(sub_100A40E4); /* 0x100A4061: call 0x100a40e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A4066: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x100A4069: mov edi, eax */
    goto L_100A4083; /* 0x100A406B: jmp 0x100a4083 */
L_100A406D:
    RECOMP_CALL(sub_1001177D); /* 0x100A406D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A4072: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x100A4078: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A407D: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100A4080: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A4083:
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A4083: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A4086: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A409C); /* 0x100A408D: call 0x100a409c */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100A4092: mov eax, edi */
    goto L_100A40BE; /* 0x100A4094: jmp 0x100a40be */
L_100A40A4:
    RECOMP_CALL(sub_1001E471); /* 0x100A40A4: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A40A9: mov dword ptr [eax], ebx */
L_100A40AB:
    RECOMP_CALL(sub_1001177D); /* 0x100A40AB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A40B0: mov dword ptr [eax], 9 */
L_100A40B6:
    RECOMP_CALL(sub_100A4670); /* 0x100A40B6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A40BB:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A40BB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A40BE:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A40BE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A40C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A409C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A409Cu);

L_100A409C:
    PUSH32(esp, esi); /* 0x100A409C: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x100A409D: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A40A2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A40A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A40E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A40E4u);

L_100A40E4:
    PUSH32(esp, ebp); /* 0x100A40E4: push ebp */
    ebp = esp; /* 0x100A40E5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100A40E7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x100A40EA: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A40EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A40F0: push edi */
    edi = ebp + (-0x10); /* 0x100A40F1: lea edi, [ebp - 0x10] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x100A40F4: stosd dword ptr es:[edi], eax */
    PUSH32(esp, 1); /* 0x100A40F5: push 1 */
    PUSH32(esp, 0); /* 0x100A40F7: push 0 */
    PUSH32(esp, 0); /* 0x100A40F9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A40FB: push dword ptr [ebp + 8] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x100A40FE: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x100A40FF: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x100A4100: stosd dword ptr es:[edi], eax */
    RECOMP_CALL(sub_10017FDE); /* 0x100A4101: call 0x10017fde */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A4106: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A4108: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x100A410B: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x100A410D: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4119; /* 0x100A4110: jne 0x100a4119 */
L_100A4112:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x100A4112: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A41C1; /* 0x100A4114: jmp 0x100a41c1 */
L_100A4119:
    edi = MEM32(ebp + 0xC); /* 0x100A4119: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x100A411C: mov dword ptr [ebp - 0xc], eax */
    eax = edx; /* 0x100A411F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x100A4121: sar eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 31u);
    MEM32(ebp + (-0x8)) = edx; /* 0x100A4124: mov dword ptr [ebp - 8], edx */
    PUSH32(esp, ebx); /* 0x100A4127: push ebx */
    /* cmp edi, 1 */ /* 0x100A4128: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4136; /* 0x100A412B: je 0x100a4136 */
L_100A412D:
    /* cmp edi, 3 */ /* 0x100A412D: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4136; /* 0x100A4130: je 0x100a4136 */
L_100A4132:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A4132: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A4139; /* 0x100A4134: jmp 0x100a4139 */
L_100A4136:
    PUSH32(esp, 9); /* 0x100A4136: push 9 */
    ebx = POP32_VAL(esp); /* 0x100A4138: pop ebx */
L_100A4139:
    PUSH32(esp, esi); /* 0x100A4139: push esi */
L_100A413A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A413A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x14); /* 0x100A413C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100A413F: push eax */
    PUSH32(esp, esi); /* 0x100A4140: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A4141: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100A4144: push esi */
    /* test edi, edi */ /* 0x100A4145: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A415B; /* 0x100A4147: jne 0x100a415b */
L_100A4149:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4149: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014D4B); /* 0x100A414C: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4151: pop ecx */
    PUSH32(esp, eax); /* 0x100A4152: push eax */
    RECOMP_ICALL(MEM32(0x100E5264)); /* 0x100A4153: call dword ptr [0x100e5264] */
    RECOMP_FLAGS_IN();
    goto L_100A416D; /* 0x100A4159: jmp 0x100a416d */
L_100A415B:
    PUSH32(esp, 3); /* 0x100A415B: push 3 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A415D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014D4B); /* 0x100A4160: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4165: pop ecx */
    PUSH32(esp, eax); /* 0x100A4166: push eax */
    RECOMP_ICALL(MEM32(0x100E5260)); /* 0x100A4167: call dword ptr [0x100e5260] */
    RECOMP_FLAGS_IN();
L_100A416D:
    /* test eax, eax */ /* 0x100A416D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4179; /* 0x100A416F: jne 0x100a4179 */
L_100A4171:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A4171: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A4177: mov esi, eax */
L_100A4179:
    /* test ebx, ebx */ /* 0x100A4179: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A418F; /* 0x100A417B: jle 0x100a418f */
L_100A417D:
    /* test esi, esi */ /* 0x100A417D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A41BD; /* 0x100A417F: je 0x100a41bd */
L_100A4181:
    PUSH32(esp, 0x3E8u); /* 0x100A4181: push 0x3e8 */
    RECOMP_CALL(sub_100A47E9); /* 0x100A4186: call 0x100a47e9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A418B: pop ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100A418C: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_100A413A; /* 0x100A418D: jmp 0x100a413a */
L_100A418F:
    /* test esi, esi */ /* 0x100A418F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A41BD; /* 0x100A4191: je 0x100a41bd */
L_100A4193:
    /* cmp edi, 1 */ /* 0x100A4193: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A41A6; /* 0x100A4196: je 0x100a41a6 */
L_100A4198:
    /* cmp edi, 3 */ /* 0x100A4198: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A41A6; /* 0x100A419B: je 0x100a41a6 */
L_100A419D:
    PUSH32(esp, esi); /* 0x100A419D: push esi */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A419E: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A41A3: pop ecx */
    goto L_100A41B8; /* 0x100A41A4: jmp 0x100a41b8 */
L_100A41A6:
    RECOMP_CALL(sub_1001177D); /* 0x100A41A6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x24u; /* 0x100A41AB: mov dword ptr [eax], 0x24 */
    RECOMP_CALL(sub_1001E471); /* 0x100A41B1: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A41B6: mov dword ptr [eax], esi */
L_100A41B8:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A41B8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A41BF; /* 0x100A41BB: jmp 0x100a41bf */
L_100A41BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A41BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A41BF:
    esi = POP32_VAL(esp); /* 0x100A41BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A41C0: pop ebx */
L_100A41C1:
    edi = POP32_VAL(esp); /* 0x100A41C1: pop edi */
    esp = ebp; /* 0x100A41C2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A41C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A41C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A41C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A41C6u);

L_100A41C6:
    PUSH32(esp, ebp); /* 0x100A41C6: push ebp */
    ebp = esp; /* 0x100A41C7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A41C9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A41CA: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A41CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A41E5; /* 0x100A41CF: jne 0x100a41e5 */
L_100A41D1:
    RECOMP_CALL(sub_1001177D); /* 0x100A41D1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A41D6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A41DC: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A41E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A41FE; /* 0x100A41E3: jmp 0x100a41fe */
L_100A41E5:
    PUSH32(esp, esi); /* 0x100A41E5: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x100A41E6: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A41EB: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100A41EC: push eax */
    PUSH32(esp, esi); /* 0x100A41ED: push esi */
    RECOMP_CALL(sub_100A4201); /* 0x100A41EE: call 0x100a4201 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A41F3: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A41F6: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A41F8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x100A41FA: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100A41FC: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A41FE:
    esi = POP32_VAL(esp); /* 0x100A41FE: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A41FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4200: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4201(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4201u);

L_100A4201:
    PUSH32(esp, ebp); /* 0x100A4201: push ebp */
    ebp = esp; /* 0x100A4202: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A4204: push ecx */
    PUSH32(esp, ebx); /* 0x100A4205: push ebx */
    PUSH32(esp, esi); /* 0x100A4206: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A4207: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100A420A: push edi */
    /* test esi, esi */ /* 0x100A420B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A42F6; /* 0x100A420D: je 0x100a42f6 */
L_100A4213:
    ebx = MEM32(ebp + 0xC); /* 0x100A4213: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x100A4216: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A42F6; /* 0x100A4218: je 0x100a42f6 */
L_100A421E:
    PUSH32(esp, ebx); /* 0x100A421E: push ebx */
    PUSH32(esp, esi); /* 0x100A421F: push esi */
    RECOMP_CALL(sub_10017154); /* 0x100A4220: call 0x10017154 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4225: mov edi, eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x100A4227: mov dword ptr [ebp - 4], edi */
    ecx = POP32_VAL(esp); /* 0x100A422A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A422B: pop ecx */
    /* cmp edi, ebx */ /* 0x100A422C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A42F3; /* 0x100A422E: jae 0x100a42f3 */
L_100A4234:
    RECOMP_CALL(sub_1006EF8B); /* 0x100A4234: call 0x1006ef8b */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x100A4239: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A423C: dec edi */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x4)); /* 0x100A423D: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, 6 */ /* 0x100A4240: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A42F3; /* 0x100A4243: jb 0x100a42f3 */
L_100A4249:
    /* cmp ebx, eax */ /* 0x100A4249: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A42F3; /* 0x100A424B: jbe 0x100a42f3 */
L_100A4251:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A4251: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x100A4253: add edi, esi */
    _flag_k = FK_ADD;
    goto L_100A4286; /* 0x100A4255: jmp 0x100a4286 */
L_100A4257:
    PUSH32(esp, edi); /* 0x100A4257: push edi */
    PUSH32(esp, esi); /* 0x100A4258: push esi */
    RECOMP_CALL(sub_1008B71B); /* 0x100A4259: call 0x1008b71b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A425E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A425F: pop ecx */
    /* test eax, eax */ /* 0x100A4260: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A428A; /* 0x100A4262: jne 0x100a428a */
L_100A4264:
    /* cmp MEM8(edi), 0x58u */ /* 0x100A4264: cmp byte ptr [edi], 0x58 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A42F3; /* 0x100A4267: jne 0x100a42f3 */
L_100A426D:
    /* cmp ebx, 5 */ /* 0x100A426D: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A428A; /* 0x100A4270: jae 0x100a428a */
L_100A4272:
    eax = MEM32(ebp + 0x8); /* 0x100A4272: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A4275: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xAu); /* 0x100A4277: push 0xa */
    ecx = POP32_VAL(esp); /* 0x100A4279: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x100A427A: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A427C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x100A427D: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(ebp + 0x8) = eax; /* 0x100A4280: mov dword ptr [ebp + 8], eax */
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x100A4283: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A4285: dec edi */
    _flag_k = FK_DEC;
L_100A4286:
    /* cmp edi, esi */ /* 0x100A4286: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A4257; /* 0x100A4288: jae 0x100a4257 */
L_100A428A:
    /* cmp MEM8(edi), 0x58u */ /* 0x100A428A: cmp byte ptr [edi], 0x58 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A42F3; /* 0x100A428D: jne 0x100a42f3 */
L_100A428F:
    /* cmp ebx, 5 */ /* 0x100A428F: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A42F3; /* 0x100A4292: jb 0x100a42f3 */
L_100A4294:
    PUSH32(esp, 0x62u); /* 0x100A4294: push 0x62 */
    ebx = POP32_VAL(esp); /* 0x100A4296: pop ebx */
    MEM8(edi) = (uint8_t)(0x61u); /* 0x100A4297: mov byte ptr [edi], 0x61 */
    RECOMP_CALL(sub_1001177D); /* 0x100A429A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100A429F: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x100A42A1: mov dword ptr [ebp + 8], eax */
L_100A42A4:
    RECOMP_CALL(sub_1001177D); /* 0x100A42A4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100A42A9: push 0 */
    PUSH32(esp, esi); /* 0x100A42AB: push esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A42AC: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1007E270); /* 0x100A42AF: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A42B4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A42B5: pop ecx */
    /* test eax, eax */ /* 0x100A42B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A42C4; /* 0x100A42B8: je 0x100a42c4 */
L_100A42BA:
    RECOMP_CALL(sub_1001177D); /* 0x100A42BA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x100A42BF: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A42CE; /* 0x100A42C2: jne 0x100a42ce */
L_100A42C4:
    /* cmp ebx, 0x7Bu */ /* 0x100A42C4: cmp ebx, 0x7b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A42DC; /* 0x100A42C7: je 0x100a42dc */
L_100A42C9:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A42C9: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A42CB: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100A42A4; /* 0x100A42CC: jmp 0x100a42a4 */
L_100A42CE:
    RECOMP_CALL(sub_1001177D); /* 0x100A42CE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x100A42D3: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x100A42D6: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A42D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A4307; /* 0x100A42DA: jmp 0x100a4307 */
L_100A42DC:
    MEM8(esi) = (uint8_t)(0); /* 0x100A42DC: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_1001177D); /* 0x100A42DF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x11u; /* 0x100A42E4: mov dword ptr [eax], 0x11 */
    RECOMP_CALL(sub_1001177D); /* 0x100A42EA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100A42EF: mov eax, dword ptr [eax] */
    goto L_100A4307; /* 0x100A42F1: jmp 0x100a4307 */
L_100A42F3:
    MEM8(esi) = (uint8_t)(0); /* 0x100A42F3: mov byte ptr [esi], 0 */
L_100A42F6:
    RECOMP_CALL(sub_1001177D); /* 0x100A42F6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A42FB: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A42FD: pop esi */
    MEM32(eax) = esi; /* 0x100A42FE: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A4300: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A4305: mov eax, esi */
L_100A4307:
    edi = POP32_VAL(esp); /* 0x100A4307: pop edi */
    esi = POP32_VAL(esp); /* 0x100A4308: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A4309: pop ebx */
    esp = ebp; /* 0x100A430A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A430C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A430D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A430E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A430Eu);

L_100A430E:
    PUSH32(esp, ebp); /* 0x100A430E: push ebp */
    ebp = esp; /* 0x100A430F: mov ebp, esp */
    PUSH32(esp, 1); /* 0x100A4311: push 1 */
    PUSH32(esp, 0); /* 0x100A4313: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4315: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002F910); /* 0x100A4318: call 0x1002f910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A431D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A4320: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4321: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4322(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4322u);

L_100A4322:
    PUSH32(esp, ebp); /* 0x100A4322: push ebp */
    ebp = esp; /* 0x100A4323: mov ebp, esp */
    PUSH32(esp, 1); /* 0x100A4325: push 1 */
    PUSH32(esp, 0); /* 0x100A4327: push 0 */
    PUSH32(esp, 0); /* 0x100A4329: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A432B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A18FC); /* 0x100A432E: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A4333: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A4336: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4337: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4338(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4338u);

L_100A4338:
    PUSH32(esp, ebp); /* 0x100A4338: push ebp */
    ebp = esp; /* 0x100A4339: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A433B: push ecx */
    PUSH32(esp, esi); /* 0x100A433C: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A433D: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x100A4340: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A4343: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x40u); /* 0x100A4346: push 0x40 */
    PUSH32(esp, 0x302u); /* 0x100A4348: push 0x302 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A434D: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A4350: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, eax); /* 0x100A4353: push eax */
    RECOMP_CALL(sub_10015474); /* 0x100A4354: call 0x10015474 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A4359: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A435C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4363; /* 0x100A435E: jne 0x100a4363 */
L_100A4360:
    esi = MEM32(ebp + (-0x4)); /* 0x100A4360: mov esi, dword ptr [ebp - 4] */
L_100A4363:
    eax = esi; /* 0x100A4363: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A4365: pop esi */
    esp = ebp; /* 0x100A4366: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A4368: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4369: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A436A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A436Au);

L_100A436A:
    PUSH32(esp, ebp); /* 0x100A436A: push ebp */
    ebp = esp; /* 0x100A436B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A436D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A436E: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A4371: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4389; /* 0x100A4373: jne 0x100a4389 */
L_100A4375:
    RECOMP_CALL(sub_1001177D); /* 0x100A4375: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A437A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A4380: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4385: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A43A2; /* 0x100A4387: jmp 0x100a43a2 */
L_100A4389:
    PUSH32(esp, esi); /* 0x100A4389: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A438A: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A438F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100A4390: push eax */
    PUSH32(esp, esi); /* 0x100A4391: push esi */
    RECOMP_CALL(sub_100A43A5); /* 0x100A4392: call 0x100a43a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A4397: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A439A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A439C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x100A439E: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100A43A0: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A43A2:
    esi = POP32_VAL(esp); /* 0x100A43A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A43A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A43A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A43A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A43A5u);

L_100A43A5:
    PUSH32(esp, ebp); /* 0x100A43A5: push ebp */
    ebp = esp; /* 0x100A43A6: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100A43A8: push ebx */
    PUSH32(esp, esi); /* 0x100A43A9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A43AA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100A43AD: push edi */
    /* test esi, esi */ /* 0x100A43AE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A449C; /* 0x100A43B0: je 0x100a449c */
L_100A43B6:
    ebx = MEM32(ebp + 0xC); /* 0x100A43B6: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x100A43B9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A449C; /* 0x100A43BB: je 0x100a449c */
L_100A43C1:
    PUSH32(esp, ebx); /* 0x100A43C1: push ebx */
    PUSH32(esp, esi); /* 0x100A43C2: push esi */
    RECOMP_CALL(sub_1000F810); /* 0x100A43C3: call 0x1000f810 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A43C8: mov edi, eax */
    MEM32(ebp + 0x8) = edi; /* 0x100A43CA: mov dword ptr [ebp + 8], edi */
    ecx = POP32_VAL(esp); /* 0x100A43CD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A43CE: pop ecx */
    /* cmp edi, ebx */ /* 0x100A43CF: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A4497; /* 0x100A43D1: jae 0x100a4497 */
L_100A43D7:
    RECOMP_CALL(sub_1006EF8B); /* 0x100A43D7: call 0x1006ef8b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A43DC: dec edi */
    _flag_k = FK_DEC;
    edx = eax; /* 0x100A43DD: mov edx, eax */
    eax = MEM32(ebp + 0x8); /* 0x100A43DF: mov eax, dword ptr [ebp + 8] */
    edi = esi + edi * 2; /* 0x100A43E2: lea edi, [esi + edi*2] */
    /* cmp eax, 6 */ /* 0x100A43E5: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A4497; /* 0x100A43E8: jb 0x100a4497 */
L_100A43EE:
    /* cmp ebx, eax */ /* 0x100A43EE: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A4497; /* 0x100A43F0: jbe 0x100a4497 */
L_100A43F6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A43F6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A4421; /* 0x100A43F8: jmp 0x100a4421 */
L_100A43FA:
    /* cmp MEM16(edi), LO16(eax) */ /* 0x100A43FA: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4497; /* 0x100A43FD: jne 0x100a4497 */
L_100A4403:
    /* cmp ecx, 5 */ /* 0x100A4403: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A4428; /* 0x100A4406: jae 0x100a4428 */
L_100A4408:
    eax = edx; /* 0x100A4408: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A440A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A440B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xAu); /* 0x100A440D: push 0xa */
    ebx = POP32_VAL(esp); /* 0x100A440F: pop ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x100A4410: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + 0x8) = eax; /* 0x100A4412: mov dword ptr [ebp + 8], eax */
    eax = edx + 0x30; /* 0x100A4415: lea eax, [edx + 0x30] */
    edx = MEM32(ebp + 0x8); /* 0x100A4418: mov edx, dword ptr [ebp + 8] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x100A441B: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x100A441E: sub edi, 2 */
    _flag_k = FK_CMP;
L_100A4421:
    PUSH32(esp, 0x58u); /* 0x100A4421: push 0x58 */
    eax = POP32_VAL(esp); /* 0x100A4423: pop eax */
    /* cmp edi, esi */ /* 0x100A4424: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A43FA; /* 0x100A4426: jae 0x100a43fa */
L_100A4428:
    /* cmp MEM16(edi), LO16(eax) */ /* 0x100A4428: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4497; /* 0x100A442B: jne 0x100a4497 */
L_100A442D:
    /* cmp ecx, 5 */ /* 0x100A442D: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A4497; /* 0x100A4430: jb 0x100a4497 */
L_100A4432:
    PUSH32(esp, 0x61u); /* 0x100A4432: push 0x61 */
    eax = POP32_VAL(esp); /* 0x100A4434: pop eax */
    PUSH32(esp, 0x62u); /* 0x100A4435: push 0x62 */
    ebx = POP32_VAL(esp); /* 0x100A4437: pop ebx */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x100A4438: mov word ptr [edi], ax */
    RECOMP_CALL(sub_1001177D); /* 0x100A443B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100A4440: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x100A4442: mov dword ptr [ebp + 8], eax */
L_100A4445:
    RECOMP_CALL(sub_1001177D); /* 0x100A4445: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100A444A: push 0 */
    PUSH32(esp, esi); /* 0x100A444C: push esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A444D: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001EE42); /* 0x100A4450: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4455: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4456: pop ecx */
    /* test eax, eax */ /* 0x100A4457: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4465; /* 0x100A4459: je 0x100a4465 */
L_100A445B:
    RECOMP_CALL(sub_1001177D); /* 0x100A445B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x100A4460: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4470; /* 0x100A4463: jne 0x100a4470 */
L_100A4465:
    /* cmp ebx, 0x7Bu */ /* 0x100A4465: cmp ebx, 0x7b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A447E; /* 0x100A4468: je 0x100a447e */
L_100A446A:
    MEM16(edi) = (uint16_t)(LO16(ebx)); /* 0x100A446A: mov word ptr [edi], bx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A446D: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100A4445; /* 0x100A446E: jmp 0x100a4445 */
L_100A4470:
    RECOMP_CALL(sub_1001177D); /* 0x100A4470: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x100A4475: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x100A4478: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A447A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A44AD; /* 0x100A447C: jmp 0x100a44ad */
L_100A447E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A447E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100A4480: mov word ptr [esi], ax */
    RECOMP_CALL(sub_1001177D); /* 0x100A4483: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x11u; /* 0x100A4488: mov dword ptr [eax], 0x11 */
    RECOMP_CALL(sub_1001177D); /* 0x100A448E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100A4493: mov eax, dword ptr [eax] */
    goto L_100A44AD; /* 0x100A4495: jmp 0x100a44ad */
L_100A4497:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4497: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100A4499: mov word ptr [esi], ax */
L_100A449C:
    RECOMP_CALL(sub_1001177D); /* 0x100A449C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A44A1: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A44A3: pop esi */
    MEM32(eax) = esi; /* 0x100A44A4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A44A6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A44AB: mov eax, esi */
L_100A44AD:
    edi = POP32_VAL(esp); /* 0x100A44AD: pop edi */
    esi = POP32_VAL(esp); /* 0x100A44AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A44AF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A44B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A44B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A44B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A44B2u);

L_100A44B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A44B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A44B4: push eax */
    PUSH32(esp, eax); /* 0x100A44B5: push eax */
    PUSH32(esp, 3); /* 0x100A44B6: push 3 */
    PUSH32(esp, eax); /* 0x100A44B8: push eax */
    PUSH32(esp, 3); /* 0x100A44B9: push 3 */
    PUSH32(esp, 0xC0000000u); /* 0x100A44BB: push 0xc0000000 */
    PUSH32(esp, 0x100A44D4u); /* 0x100A44C0: push 0x100a44d4 */
    RECOMP_ICALL(MEM32(0x100E5224)); /* 0x100A44C5: call dword ptr [0x100e5224] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E142C) = eax; /* 0x100A44CB: mov dword ptr [0x100e142c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A44D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A44D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A44D4u);

L_100A44D4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A44D4: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A44D5: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A44D8: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A44D9: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A44DC: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x100A44DD: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A44E0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A44E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A44E4: push eax */
    PUSH32(esp, eax); /* 0x100A44E5: push eax */
    PUSH32(esp, 3); /* 0x100A44E6: push 3 */
    PUSH32(esp, eax); /* 0x100A44E8: push eax */
    PUSH32(esp, 3); /* 0x100A44E9: push 3 */
    PUSH32(esp, 0x40000000u); /* 0x100A44EB: push 0x40000000 */
    PUSH32(esp, 0x100A4504u); /* 0x100A44F0: push 0x100a4504 */
    RECOMP_ICALL(MEM32(0x100E5224)); /* 0x100A44F5: call dword ptr [0x100e5224] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E1430) = eax; /* 0x100A44FB: mov dword ptr [0x100e1430], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4500: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A44E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A44E2u);

L_100A44E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A44E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A44E4: push eax */
    PUSH32(esp, eax); /* 0x100A44E5: push eax */
    PUSH32(esp, 3); /* 0x100A44E6: push 3 */
    PUSH32(esp, eax); /* 0x100A44E8: push eax */
    PUSH32(esp, 3); /* 0x100A44E9: push 3 */
    PUSH32(esp, 0x40000000u); /* 0x100A44EB: push 0x40000000 */
    PUSH32(esp, 0x100A4504u); /* 0x100A44F0: push 0x100a4504 */
    RECOMP_ICALL(MEM32(0x100E5224)); /* 0x100A44F5: call dword ptr [0x100e5224] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E1430) = eax; /* 0x100A44FB: mov dword ptr [0x100e1430], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4500: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4504(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4504u);

L_100A4504:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A4504: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A4505: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A4508: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A4509: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x100A450C: push ebp */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x24)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x24) = (uint8_t)(MEM8(eax + eax + 0x24) + LO8(edx)); /* 0x100A450D: add byte ptr [eax + eax + 0x24], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A4511: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + HI8(ecx)); /* 0x100A4513: add cl, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 1); /* 0x100A4515: sub al, 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A4517: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x100A4519: push ebp */
    ebp = esp; /* 0x100A451A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x328u; /* 0x100A451C: sub esp, 0x328 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A4522: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A4527: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A4529: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), 0xFFFFFFFFu */ /* 0x100A452C: cmp dword ptr [ebp + 8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100A4530: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A453C; /* 0x100A4531: je 0x100a453c */
L_100A4533:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4533: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6BB8); /* 0x100A4536: call 0x100a6bb8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A453B: pop ecx */
L_100A453C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x320))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x320)) = MEM32(ebp + (-0x320)) & 0; /* 0x100A453C: and dword ptr [ebp - 0x320], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x31C); /* 0x100A4543: lea eax, [ebp - 0x31c] */
    PUSH32(esp, 0x4Cu); /* 0x100A4549: push 0x4c */
    PUSH32(esp, 0); /* 0x100A454B: push 0 */
    PUSH32(esp, eax); /* 0x100A454D: push eax */
    RECOMP_CALL(sub_10011533); /* 0x100A454E: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x320); /* 0x100A4553: lea eax, [ebp - 0x320] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A4559: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x328)) = eax; /* 0x100A455C: mov dword ptr [ebp - 0x328], eax */
    eax = ebp + (-0x2D0); /* 0x100A4562: lea eax, [ebp - 0x2d0] */
    MEM32(ebp + (-0x324)) = eax; /* 0x100A4568: mov dword ptr [ebp - 0x324], eax */
    MEM32(ebp + (-0x220)) = eax; /* 0x100A456E: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x100A4574: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x228)) = edx; /* 0x100A457A: mov dword ptr [ebp - 0x228], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x100A4580: mov dword ptr [ebp - 0x22c], ebx */
    MEM32(ebp + (-0x230)) = esi; /* 0x100A4586: mov dword ptr [ebp - 0x230], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x100A458C: mov dword ptr [ebp - 0x234], edi */
    MEM16(ebp + (-0x208)) = (uint16_t)(_seg_ss); /* 0x100A4592: mov word ptr [ebp - 0x208], ss */
    MEM16(ebp + (-0x214)) = (uint16_t)(_seg_cs); /* 0x100A4598: mov word ptr [ebp - 0x214], cs */
    MEM16(ebp + (-0x238)) = (uint16_t)(_seg_ds); /* 0x100A459E: mov word ptr [ebp - 0x238], ds */
    MEM16(ebp + (-0x23C)) = (uint16_t)(_seg_es); /* 0x100A45A4: mov word ptr [ebp - 0x23c], es */
    MEM16(ebp + (-0x240)) = (uint16_t)(_seg_fs); /* 0x100A45AA: mov word ptr [ebp - 0x240], fs */
    MEM16(ebp + (-0x244)) = (uint16_t)(_seg_gs); /* 0x100A45B0: mov word ptr [ebp - 0x244], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100A45B6: pushfd  */
    POP32(esp, MEM32(ebp + (-0x210))); /* 0x100A45B7: pop dword ptr [ebp - 0x210] */
    eax = MEM32(ebp + 0x4); /* 0x100A45BD: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x218)) = eax; /* 0x100A45C0: mov dword ptr [ebp - 0x218], eax */
    eax = ebp + 0x4; /* 0x100A45C6: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x20C)) = eax; /* 0x100A45C9: mov dword ptr [ebp - 0x20c], eax */
    MEM32(ebp + (-0x2D0)) = 0x00010001u; /* 0x100A45CF: mov dword ptr [ebp - 0x2d0], 0x10001 */
    eax = MEM32(eax + (-0x4)); /* 0x100A45D9: mov eax, dword ptr [eax - 4] */
    MEM32(ebp + (-0x21C)) = eax; /* 0x100A45DC: mov dword ptr [ebp - 0x21c], eax */
    eax = MEM32(ebp + 0xC); /* 0x100A45E2: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x320)) = eax; /* 0x100A45E5: mov dword ptr [ebp - 0x320], eax */
    eax = MEM32(ebp + 0x10); /* 0x100A45EB: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x31C)) = eax; /* 0x100A45EE: mov dword ptr [ebp - 0x31c], eax */
    eax = MEM32(ebp + 0x4); /* 0x100A45F4: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x314)) = eax; /* 0x100A45F7: mov dword ptr [ebp - 0x314], eax */
    RECOMP_ICALL(MEM32(0x100E5268)); /* 0x100A45FD: call dword ptr [0x100e5268] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4603: mov edi, eax */
    eax = ebp + (-0x328); /* 0x100A4605: lea eax, [ebp - 0x328] */
    PUSH32(esp, eax); /* 0x100A460B: push eax */
    RECOMP_CALL(sub_100A480C); /* 0x100A460C: call 0x100a480c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4611: pop ecx */
    /* test eax, eax */ /* 0x100A4612: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4629; /* 0x100A4614: jne 0x100a4629 */
L_100A4616:
    /* test edi, edi */ /* 0x100A4616: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4629; /* 0x100A4618: jne 0x100a4629 */
L_100A461A:
    /* cmp MEM32(ebp + 0x8), 0xFFFFFFFFu */ /* 0x100A461A: cmp dword ptr [ebp + 8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4629; /* 0x100A461E: je 0x100a4629 */
L_100A4620:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4620: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6BB8); /* 0x100A4623: call 0x100a6bb8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4628: pop ecx */
L_100A4629:
    ecx = MEM32(ebp + (-0x4)); /* 0x100A4629: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A462C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x100A462E: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100A462F: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A4634: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A4636: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4637: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4514(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4514u);

L_100A4514:
    goto L_100A4645; /* 0x100A4514: jmp 0x100a4645 */
L_100A4645:
    PUSH32(esp, ebp); /* 0x100A4645: push ebp */
    ebp = esp; /* 0x100A4646: mov ebp, esp */
    PUSH32(esp, MEM32(0x100E0ED8)); /* 0x100A4648: push dword ptr [0x100e0ed8] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A464E: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4654: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A465B; /* 0x100A4656: je 0x100a465b */
L_100A4658:
    ebp = POP32_VAL(esp); /* 0x100A4658: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_100A465B:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A465B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A465E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A4661: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A4664: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4667: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A469B); /* 0x100A466A: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A466Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100A4519(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4519u);

L_100A4519:
    PUSH32(esp, ebp); /* 0x100A4519: push ebp */
    ebp = esp; /* 0x100A451A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x328u; /* 0x100A451C: sub esp, 0x328 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A4522: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A4527: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A4529: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), 0xFFFFFFFFu */ /* 0x100A452C: cmp dword ptr [ebp + 8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100A4530: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A453C; /* 0x100A4531: je 0x100a453c */
L_100A4533:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4533: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6BB8); /* 0x100A4536: call 0x100a6bb8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A453B: pop ecx */
L_100A453C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x320))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x320)) = MEM32(ebp + (-0x320)) & 0; /* 0x100A453C: and dword ptr [ebp - 0x320], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x31C); /* 0x100A4543: lea eax, [ebp - 0x31c] */
    PUSH32(esp, 0x4Cu); /* 0x100A4549: push 0x4c */
    PUSH32(esp, 0); /* 0x100A454B: push 0 */
    PUSH32(esp, eax); /* 0x100A454D: push eax */
    RECOMP_CALL(sub_10011533); /* 0x100A454E: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x320); /* 0x100A4553: lea eax, [ebp - 0x320] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A4559: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x328)) = eax; /* 0x100A455C: mov dword ptr [ebp - 0x328], eax */
    eax = ebp + (-0x2D0); /* 0x100A4562: lea eax, [ebp - 0x2d0] */
    MEM32(ebp + (-0x324)) = eax; /* 0x100A4568: mov dword ptr [ebp - 0x324], eax */
    MEM32(ebp + (-0x220)) = eax; /* 0x100A456E: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x100A4574: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x228)) = edx; /* 0x100A457A: mov dword ptr [ebp - 0x228], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x100A4580: mov dword ptr [ebp - 0x22c], ebx */
    MEM32(ebp + (-0x230)) = esi; /* 0x100A4586: mov dword ptr [ebp - 0x230], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x100A458C: mov dword ptr [ebp - 0x234], edi */
    MEM16(ebp + (-0x208)) = (uint16_t)(_seg_ss); /* 0x100A4592: mov word ptr [ebp - 0x208], ss */
    MEM16(ebp + (-0x214)) = (uint16_t)(_seg_cs); /* 0x100A4598: mov word ptr [ebp - 0x214], cs */
    MEM16(ebp + (-0x238)) = (uint16_t)(_seg_ds); /* 0x100A459E: mov word ptr [ebp - 0x238], ds */
    MEM16(ebp + (-0x23C)) = (uint16_t)(_seg_es); /* 0x100A45A4: mov word ptr [ebp - 0x23c], es */
    MEM16(ebp + (-0x240)) = (uint16_t)(_seg_fs); /* 0x100A45AA: mov word ptr [ebp - 0x240], fs */
    MEM16(ebp + (-0x244)) = (uint16_t)(_seg_gs); /* 0x100A45B0: mov word ptr [ebp - 0x244], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100A45B6: pushfd  */
    POP32(esp, MEM32(ebp + (-0x210))); /* 0x100A45B7: pop dword ptr [ebp - 0x210] */
    eax = MEM32(ebp + 0x4); /* 0x100A45BD: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x218)) = eax; /* 0x100A45C0: mov dword ptr [ebp - 0x218], eax */
    eax = ebp + 0x4; /* 0x100A45C6: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x20C)) = eax; /* 0x100A45C9: mov dword ptr [ebp - 0x20c], eax */
    MEM32(ebp + (-0x2D0)) = 0x00010001u; /* 0x100A45CF: mov dword ptr [ebp - 0x2d0], 0x10001 */
    eax = MEM32(eax + (-0x4)); /* 0x100A45D9: mov eax, dword ptr [eax - 4] */
    MEM32(ebp + (-0x21C)) = eax; /* 0x100A45DC: mov dword ptr [ebp - 0x21c], eax */
    eax = MEM32(ebp + 0xC); /* 0x100A45E2: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x320)) = eax; /* 0x100A45E5: mov dword ptr [ebp - 0x320], eax */
    eax = MEM32(ebp + 0x10); /* 0x100A45EB: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x31C)) = eax; /* 0x100A45EE: mov dword ptr [ebp - 0x31c], eax */
    eax = MEM32(ebp + 0x4); /* 0x100A45F4: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x314)) = eax; /* 0x100A45F7: mov dword ptr [ebp - 0x314], eax */
    RECOMP_ICALL(MEM32(0x100E5268)); /* 0x100A45FD: call dword ptr [0x100e5268] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4603: mov edi, eax */
    eax = ebp + (-0x328); /* 0x100A4605: lea eax, [ebp - 0x328] */
    PUSH32(esp, eax); /* 0x100A460B: push eax */
    RECOMP_CALL(sub_100A480C); /* 0x100A460C: call 0x100a480c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4611: pop ecx */
    /* test eax, eax */ /* 0x100A4612: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4629; /* 0x100A4614: jne 0x100a4629 */
L_100A4616:
    /* test edi, edi */ /* 0x100A4616: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4629; /* 0x100A4618: jne 0x100a4629 */
L_100A461A:
    /* cmp MEM32(ebp + 0x8), 0xFFFFFFFFu */ /* 0x100A461A: cmp dword ptr [ebp + 8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4629; /* 0x100A461E: je 0x100a4629 */
L_100A4620:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4620: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6BB8); /* 0x100A4623: call 0x100a6bb8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4628: pop ecx */
L_100A4629:
    ecx = MEM32(ebp + (-0x4)); /* 0x100A4629: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A462C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x100A462E: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100A462F: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A4634: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A4636: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4637: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4638(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4638u);

L_100A4638:
    PUSH32(esp, MEM32(0x100E0ED8)); /* 0x100A4638: push dword ptr [0x100e0ed8] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A463E: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4644: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4645(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4645u);

L_100A4645:
    PUSH32(esp, ebp); /* 0x100A4645: push ebp */
    ebp = esp; /* 0x100A4646: mov ebp, esp */
    PUSH32(esp, MEM32(0x100E0ED8)); /* 0x100A4648: push dword ptr [0x100e0ed8] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A464E: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4654: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A465B; /* 0x100A4656: je 0x100a465b */
L_100A4658:
    ebp = POP32_VAL(esp); /* 0x100A4658: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_100A465B:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A465B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A465E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A4661: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A4664: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4667: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A469B); /* 0x100A466A: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A466Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100A4670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4670u);

L_100A4670:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4670: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A4672: push eax */
    PUSH32(esp, eax); /* 0x100A4673: push eax */
    PUSH32(esp, eax); /* 0x100A4674: push eax */
    PUSH32(esp, eax); /* 0x100A4675: push eax */
    PUSH32(esp, eax); /* 0x100A4676: push eax */
    RECOMP_CALL(sub_100A4645); /* 0x100A4677: call 0x100a4645 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A467C: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A467F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4680u);

L_100A4680:
    PUSH32(esp, esi); /* 0x100A4680: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A4681: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100A4683: push esi */
    PUSH32(esp, esi); /* 0x100A4684: push esi */
    PUSH32(esp, esi); /* 0x100A4685: push esi */
    PUSH32(esp, esi); /* 0x100A4686: push esi */
    PUSH32(esp, esi); /* 0x100A4687: push esi */
    RECOMP_CALL(sub_100A4645); /* 0x100A4688: call 0x100a4645 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A468D: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x100A4690: push esi */
    PUSH32(esp, esi); /* 0x100A4691: push esi */
    PUSH32(esp, esi); /* 0x100A4692: push esi */
    PUSH32(esp, esi); /* 0x100A4693: push esi */
    PUSH32(esp, esi); /* 0x100A4694: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x100A4695: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A469Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A469B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A469Bu);

L_100A469B:
    PUSH32(esp, 0x17u); /* 0x100A469B: push 0x17 */
    RECOMP_CALL(sub_1002DB46); /* 0x100A469D: call 0x1002db46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A46A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A46AB; /* 0x100A46A4: je 0x100a46ab */
L_100A46A6:
    PUSH32(esp, 5); /* 0x100A46A6: push 5 */
    ecx = POP32_VAL(esp); /* 0x100A46A8: pop ecx */
    void_lift_trap(0x100A46A9u, "int 0x29");
L_100A46AB:
    PUSH32(esp, esi); /* 0x100A46AB: push esi */
    PUSH32(esp, 1); /* 0x100A46AC: push 1 */
    esi = 0xC0000417u; /* 0x100A46AE: mov esi, 0xc0000417 */
    PUSH32(esp, esi); /* 0x100A46B3: push esi */
    PUSH32(esp, 2); /* 0x100A46B4: push 2 */
    RECOMP_CALL(sub_100A4519); /* 0x100A46B6: call 0x100a4519 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100A46BB: push esi */
    RECOMP_CALL(sub_100A47F7); /* 0x100A46BC: call 0x100a47f7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A46C1: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A46C4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A46C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A46C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A46C6u);

L_100A46C6:
    PUSH32(esp, MEM32(0x100E0658)); /* 0x100A46C6: push dword ptr [0x100e0658] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A46CC: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A46D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A46D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A46D3u);

L_100A46D3:
    PUSH32(esp, MEM32(0x100E0658)); /* 0x100A46D3: push dword ptr [0x100e0658] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A46D9: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A46DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A46E5; /* 0x100A46E1: je 0x100a46e5 */
L_100A46E3:
    RECOMP_ICALL(eax); /* 0x100A46E3: call eax */
    RECOMP_FLAGS_IN();
L_100A46E5:
    PUSH32(esp, 1); /* 0x100A46E5: push 1 */
    PUSH32(esp, 0); /* 0x100A46E7: push 0 */
    RECOMP_CALL(sub_100A761F); /* 0x100A46E9: call 0x100a761f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A46EE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A46EF: pop ecx */
    goto L_100A763E; /* 0x100A46F0: jmp 0x100a763e */
L_100A763E:
    RECOMP_CALL(sub_100A4845); /* 0x100A763E: call 0x100a4845 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A7643: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A764F; /* 0x100A7645: je 0x100a764f */
L_100A7647:
    PUSH32(esp, 0x16u); /* 0x100A7647: push 0x16 */
    RECOMP_CALL(sub_100A491C); /* 0x100A7649: call 0x100a491c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A764E: pop ecx */
L_100A764F:
    /* test MEM8(0x100E18AC), 2 */ /* 0x100A764F: test byte ptr [0x100e18ac], 2 */
    _flag_a = (uint32_t)(MEM8(0x100E18AC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7679; /* 0x100A7656: je 0x100a7679 */
L_100A7658:
    PUSH32(esp, 0x17u); /* 0x100A7658: push 0x17 */
    RECOMP_CALL(sub_1002DB46); /* 0x100A765A: call 0x1002db46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A765F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7668; /* 0x100A7661: je 0x100a7668 */
L_100A7663:
    PUSH32(esp, 7); /* 0x100A7663: push 7 */
    ecx = POP32_VAL(esp); /* 0x100A7665: pop ecx */
    void_lift_trap(0x100A7666u, "int 0x29");
L_100A7668:
    PUSH32(esp, 1); /* 0x100A7668: push 1 */
    PUSH32(esp, 0x40000015u); /* 0x100A766A: push 0x40000015 */
    PUSH32(esp, 3); /* 0x100A766F: push 3 */
    RECOMP_CALL(sub_100A4519); /* 0x100A7671: call 0x100a4519 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7676: add esp, 0xc */
    _flag_k = FK_ADD;
L_100A7679:
    PUSH32(esp, 3); /* 0x100A7679: push 3 */
    RECOMP_CALL(sub_1007BBB8); /* 0x100A767B: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A7680u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A46F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A46F5u);

L_100A46F5:
    PUSH32(esp, ebp); /* 0x100A46F5: push ebp */
    ebp = esp; /* 0x100A46F6: mov ebp, esp */
    eax = MEM32(0x100DFA2C); /* 0x100A46F8: mov eax, dword ptr [0x100dfa2c] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A46FD: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A470A; /* 0x100A4703: je 0x100a470a */
L_100A4705:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4705: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100A4708: call eax */
    RECOMP_FLAGS_IN();
L_100A470A:
    ebp = POP32_VAL(esp); /* 0x100A470A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A470B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A470C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A470Cu);

L_100A470C:
    PUSH32(esp, ebp); /* 0x100A470C: push ebp */
    ebp = esp; /* 0x100A470D: mov ebp, esp */
    eax = MEM32(0x100DFA4C); /* 0x100A470F: mov eax, dword ptr [0x100dfa4c] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A4714: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4729; /* 0x100A471A: je 0x100a4729 */
L_100A471C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A471C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A471F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4722: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100A4725: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A4727: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4728: ret  */
L_100A4729:
    PUSH32(esp, 0x78u); /* 0x100A4729: push 0x78 */
    RECOMP_ICALL(MEM32(0x100E5048)); /* 0x100A472B: call dword ptr [0x100e5048] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100A4731: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x100A4733: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4734: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4735(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4735u);

L_100A4735:
    PUSH32(esp, ebp); /* 0x100A4735: push ebp */
    ebp = esp; /* 0x100A4736: mov ebp, esp */
    eax = MEM32(0x100DFA04); /* 0x100A4738: mov eax, dword ptr [0x100dfa04] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A473D: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4743: push dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A474C; /* 0x100A4746: je 0x100a474c */
L_100A4748:
    RECOMP_ICALL(eax); /* 0x100A4748: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A474A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A474B: ret  */
L_100A474C:
    RECOMP_ICALL(MEM32(0x100E5188)); /* 0x100A474C: call dword ptr [0x100e5188] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A4752: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4753: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4754(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4754u);

L_100A4754:
    eax = MEM32(0x100DFA3C); /* 0x100A4754: mov eax, dword ptr [0x100dfa3c] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A4759: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4763; /* 0x100A475F: je 0x100a4763 */
L_100A4761:
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_100A4763:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4763: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100A4776(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4776u);

L_100A4776:
    PUSH32(esp, ebp); /* 0x100A4776: push ebp */
    ebp = esp; /* 0x100A4777: mov ebp, esp */
    eax = MEM32(0x100DFA7C); /* 0x100A4779: mov eax, dword ptr [0x100dfa7c] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A477E: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4796; /* 0x100A4784: je 0x100a4796 */
L_100A4786:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A4786: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A4789: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A478C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A478F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100A4792: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A4794: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4795: ret  */
L_100A4796:
    PUSH32(esp, 0x78u); /* 0x100A4796: push 0x78 */
    RECOMP_ICALL(MEM32(0x100E5048)); /* 0x100A4798: call dword ptr [0x100e5048] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A479E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A47A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A47A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A47A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A47A2u);

L_100A47A2:
    PUSH32(esp, ebp); /* 0x100A47A2: push ebp */
    ebp = esp; /* 0x100A47A3: mov ebp, esp */
    eax = MEM32(0x100DFA80); /* 0x100A47A5: mov eax, dword ptr [0x100dfa80] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A47AA: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A47C2; /* 0x100A47B0: je 0x100a47c2 */
L_100A47B2:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A47B2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A47B5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A47B8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A47BB: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100A47BE: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A47C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A47C1: ret  */
L_100A47C2:
    PUSH32(esp, 0x78u); /* 0x100A47C2: push 0x78 */
    RECOMP_ICALL(MEM32(0x100E5048)); /* 0x100A47C4: call dword ptr [0x100e5048] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A47CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A47CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A47CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A47CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A47CEu);

L_100A47CE:
    PUSH32(esp, ebp); /* 0x100A47CE: push ebp */
    ebp = esp; /* 0x100A47CF: mov ebp, esp */
    eax = MEM32(0x100DFA1C); /* 0x100A47D1: mov eax, dword ptr [0x100dfa1c] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A47D6: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A47E5; /* 0x100A47DC: je 0x100a47e5 */
L_100A47DE:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A47DE: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100A47E1: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A47E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A47E4: ret  */
L_100A47E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A47E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A47E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A47E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A47E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A47E9u);

L_100A47E9:
    PUSH32(esp, ebp); /* 0x100A47E9: push ebp */
    ebp = esp; /* 0x100A47EA: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A47EC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E50A0)); /* 0x100A47EF: call dword ptr [0x100e50a0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A47F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A47F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A47F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A47F7u);

L_100A47F7:
    PUSH32(esp, ebp); /* 0x100A47F7: push ebp */
    ebp = esp; /* 0x100A47F8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A47FA: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E510C)); /* 0x100A47FD: call dword ptr [0x100e510c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A4803: push eax */
    RECOMP_ICALL(MEM32(0x100E5278)); /* 0x100A4804: call dword ptr [0x100e5278] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A480A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A480B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A480C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A480Cu);

L_100A480C:
    PUSH32(esp, ebp); /* 0x100A480C: push ebp */
    ebp = esp; /* 0x100A480D: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100A480F: push 0 */
    RECOMP_ICALL(MEM32(0x100E5270)); /* 0x100A4811: call dword ptr [0x100e5270] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4817: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E526C)); /* 0x100A481A: call dword ptr [0x100e526c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A4820: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4821: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4822(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4822u);

L_100A4822:
    PUSH32(esp, ebp); /* 0x100A4822: push ebp */
    ebp = esp; /* 0x100A4823: mov ebp, esp */
    eax = MEM32(0x100DFA28); /* 0x100A4825: mov eax, dword ptr [0x100dfa28] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A482A: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A483A; /* 0x100A4830: je 0x100a483a */
L_100A4832:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A4832: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A4835: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100A4838: call eax */
    RECOMP_FLAGS_IN();
L_100A483A:
    ebp = POP32_VAL(esp); /* 0x100A483A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A483B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A483C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A483Cu);

L_100A483C:
    RECOMP_CALL(sub_1000F750); /* 0x100A483C: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x64u; /* 0x100A4841: add eax, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4844: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4845(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4845u);

L_100A4845:
    PUSH32(esp, MEM32(0x100E0EE0)); /* 0x100A4845: push dword ptr [0x100e0ee0] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A484B: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4851: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4852(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4852u);

L_100A4852:
    RECOMP_CALL(sub_1000F750); /* 0x100A4852: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x60u; /* 0x100A4857: add eax, 0x60 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A485A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A485B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A485Bu);

L_100A485B:
    PUSH32(esp, 0x10u); /* 0x100A485B: push 0x10 */
    PUSH32(esp, 0x100A4900u); /* 0x100A485D: push 0x100a4900 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A4862: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A4867: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A4869: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x100A486C: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, esi); /* 0x100A486F: push esi */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A4870: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4875: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A4876: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x100A4879: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4895; /* 0x100A487C: jne 0x100a4895 */
L_100A487E:
    MEM32(ebp + 0x8) = 0x100E0BECu; /* 0x100A487E: mov dword ptr [ebp + 8], 0x100e0bec */
    PUSH32(esp, MEM32(0x100E0BEC)); /* 0x100A4885: push dword ptr [0x100e0bec] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A488B: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x100A4891: push 2 */
    goto L_100A48AA; /* 0x100A4893: jmp 0x100a48aa */
L_100A4895:
    MEM32(ebp + 0x8) = 0x100E0EDCu; /* 0x100A4895: mov dword ptr [ebp + 8], 0x100e0edc */
    PUSH32(esp, MEM32(0x100E0EDC)); /* 0x100A489C: push dword ptr [0x100e0edc] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A48A2: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x15u); /* 0x100A48A8: push 0x15 */
L_100A48AA:
    edi = eax; /* 0x100A48AA: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A48AC: mov dword ptr [ebp - 0x1c], edi */
    ebx = POP32_VAL(esp); /* 0x100A48AF: pop ebx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x100A48B0: mov dword ptr [ebp - 0x20], ebx */
    /* test edi, edi */ /* 0x100A48B3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A48C8; /* 0x100A48B5: je 0x100a48c8 */
L_100A48B7:
    /* cmp edi, 1 */ /* 0x100A48B7: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A48C8; /* 0x100A48BA: je 0x100a48c8 */
L_100A48BC:
    PUSH32(esp, esi); /* 0x100A48BC: push esi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100A48BD: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x100A48C3: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x100A48C6: mov dword ptr [ecx], eax */
L_100A48C8:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A48C8: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A48E4); /* 0x100A48CF: call 0x100a48e4 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x100A48D4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A48EC; /* 0x100A48D6: jne 0x100a48ec */
L_100A48D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A48D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A48F8; /* 0x100A48DA: jmp 0x100a48f8 */
L_100A48EC:
    /* cmp edi, 1 */ /* 0x100A48EC: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A48F5; /* 0x100A48EF: je 0x100a48f5 */
L_100A48F1:
    PUSH32(esp, ebx); /* 0x100A48F1: push ebx */
    RECOMP_ICALL(edi); /* 0x100A48F2: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A48F4: pop ecx */
L_100A48F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A48F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A48F7: inc eax */
    _flag_k = FK_INC;
L_100A48F8:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A48F8: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100A48FD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100A48E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A48E4u);

L_100A48E4:
    PUSH32(esp, esi); /* 0x100A48E4: push esi */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A48E5: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A48EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A48EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A491C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A491Cu);

L_100A491C:
    PUSH32(esp, 0x24u); /* 0x100A491C: push 0x24 */
    PUSH32(esp, 0x100A4AE0u); /* 0x100A491E: push 0x100a4ae0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A4923: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x100A4928: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x100A492C: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A4930: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x100A4932: mov dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A4935: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = edi; /* 0x100A4937: mov dword ptr [ebp - 0x28], edi */
    esi = MEM32(ebp + 0x8); /* 0x100A493A: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xBu */ /* 0x100A493D: cmp esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100A4992; /* 0x100A4940: jg 0x100a4992 */
L_100A4942:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4959; /* 0x100A4942: je 0x100a4959 */
L_100A4944:
    eax = esi; /* 0x100A4944: mov eax, esi */
    PUSH32(esp, 2); /* 0x100A4946: push 2 */
    ecx = POP32_VAL(esp); /* 0x100A4948: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100A4949: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A496F; /* 0x100A494B: je 0x100a496f */
L_100A494D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100A494D: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A4959; /* 0x100A494F: je 0x100a4959 */
L_100A4951:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100A4951: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A49B3; /* 0x100A4953: je 0x100a49b3 */
L_100A4955:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100A4955: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_100A49A1; /* 0x100A4957: jne 0x100a49a1 */
L_100A4959:
    RECOMP_CALL(sub_1000F720); /* 0x100A4959: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A495E: mov edi, eax */
    MEM32(ebp + (-0x28)) = edi; /* 0x100A4960: mov dword ptr [ebp - 0x28], edi */
    /* test edi, edi */ /* 0x100A4963: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A497D; /* 0x100A4965: jne 0x100a497d */
L_100A4967:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A4967: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A4AD1; /* 0x100A496A: jmp 0x100a4ad1 */
L_100A496F:
    MEM32(ebp + (-0x1C)) = 0x100E0BECu; /* 0x100A496F: mov dword ptr [ebp - 0x1c], 0x100e0bec */
    eax = MEM32(0x100E0BEC); /* 0x100A4976: mov eax, dword ptr [0x100e0bec] */
    goto L_100A49DB; /* 0x100A497B: jmp 0x100a49db */
L_100A497D:
    PUSH32(esp, MEM32(edi + 0x5C)); /* 0x100A497D: push dword ptr [edi + 0x5c] */
    PUSH32(esp, esi); /* 0x100A4980: push esi */
    RECOMP_CALL(sub_100A4AFC); /* 0x100A4981: call 0x100a4afc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4986: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4987: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x100A4988: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x100A498B: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(eax); /* 0x100A498E: mov eax, dword ptr [eax] */
    goto L_100A49E8; /* 0x100A4990: jmp 0x100a49e8 */
L_100A4992:
    eax = esi; /* 0x100A4992: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFu; /* 0x100A4994: sub eax, 0xf */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A49CF; /* 0x100A4997: je 0x100a49cf */
L_100A4999:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x100A4999: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A49C1; /* 0x100A499C: je 0x100a49c1 */
L_100A499E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A499E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A49B3; /* 0x100A499F: je 0x100a49b3 */
L_100A49A1:
    RECOMP_CALL(sub_1001177D); /* 0x100A49A1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A49A6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A49AC: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100A4967; /* 0x100A49B1: jmp 0x100a4967 */
L_100A49B3:
    MEM32(ebp + (-0x1C)) = 0x100E0EE0u; /* 0x100A49B3: mov dword ptr [ebp - 0x1c], 0x100e0ee0 */
    eax = MEM32(0x100E0EE0); /* 0x100A49BA: mov eax, dword ptr [0x100e0ee0] */
    goto L_100A49DB; /* 0x100A49BF: jmp 0x100a49db */
L_100A49C1:
    MEM32(ebp + (-0x1C)) = 0x100E0EDCu; /* 0x100A49C1: mov dword ptr [ebp - 0x1c], 0x100e0edc */
    eax = MEM32(0x100E0EDC); /* 0x100A49C8: mov eax, dword ptr [0x100e0edc] */
    goto L_100A49DB; /* 0x100A49CD: jmp 0x100a49db */
L_100A49CF:
    MEM32(ebp + (-0x1C)) = 0x100E0BF0u; /* 0x100A49CF: mov dword ptr [ebp - 0x1c], 0x100e0bf0 */
    eax = MEM32(0x100E0BF0); /* 0x100A49D6: mov eax, dword ptr [0x100e0bf0] */
L_100A49DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A49DB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A49DD: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ebx; /* 0x100A49DE: mov dword ptr [ebp - 0x20], ebx */
    PUSH32(esp, eax); /* 0x100A49E1: push eax */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A49E2: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
L_100A49E8:
    MEM32(ebp + (-0x24)) = eax; /* 0x100A49E8: mov dword ptr [ebp - 0x24], eax */
    /* cmp eax, 1 */ /* 0x100A49EB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4ACF; /* 0x100A49EE: je 0x100a4acf */
L_100A49F4:
    /* test eax, eax */ /* 0x100A49F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A49FF; /* 0x100A49F6: jne 0x100a49ff */
L_100A49F8:
    PUSH32(esp, 3); /* 0x100A49F8: push 3 */
    RECOMP_CALL(sub_1007BBB8); /* 0x100A49FA: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
L_100A49FF:
    /* test ebx, ebx */ /* 0x100A49FF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4A0B; /* 0x100A4A01: je 0x100a4a0b */
L_100A4A03:
    PUSH32(esp, 0); /* 0x100A4A03: push 0 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A4A05: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4A0A: pop ecx */
L_100A4A0B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A4A0B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 8 */ /* 0x100A4A0F: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4A1E; /* 0x100A4A12: je 0x100a4a1e */
L_100A4A14:
    /* cmp esi, 0xBu */ /* 0x100A4A14: cmp esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4A1E; /* 0x100A4A17: je 0x100a4a1e */
L_100A4A19:
    /* cmp esi, 4 */ /* 0x100A4A19: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4A3A; /* 0x100A4A1C: jne 0x100a4a3a */
L_100A4A1E:
    eax = MEM32(edi + 0x60); /* 0x100A4A1E: mov eax, dword ptr [edi + 0x60] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x100A4A21: mov dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x60)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x60) = MEM32(edi + 0x60) & 0; /* 0x100A4A24: and dword ptr [edi + 0x60], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 8 */ /* 0x100A4A28: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4A6C; /* 0x100A4A2B: jne 0x100a4a6c */
L_100A4A2D:
    eax = MEM32(edi + 0x64); /* 0x100A4A2D: mov eax, dword ptr [edi + 0x64] */
    MEM32(ebp + (-0x30)) = eax; /* 0x100A4A30: mov dword ptr [ebp - 0x30], eax */
    MEM32(edi + 0x64) = 0x8Cu; /* 0x100A4A33: mov dword ptr [edi + 0x64], 0x8c */
L_100A4A3A:
    /* cmp esi, 8 */ /* 0x100A4A3A: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4A6C; /* 0x100A4A3D: jne 0x100a4a6c */
L_100A4A3F:
    ecx = MEM32(0x100A4AD8); /* 0x100A4A3F: mov ecx, dword ptr [0x100a4ad8] */
    edx = ecx; /* 0x100A4A45: mov edx, ecx */
    MEM32(ebp + (-0x34)) = edx; /* 0x100A4A47: mov dword ptr [ebp - 0x34], edx */
L_100A4A4A:
    eax = MEM32(0x100A4ADC); /* 0x100A4A4A: mov eax, dword ptr [0x100a4adc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100A4A4F: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x100A4A51: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100A4A79; /* 0x100A4A53: jge 0x100a4a79 */
L_100A4A55:
    ecx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x100A4A55: imul ecx, edx, 0xc */
    eax = MEM32(edi + 0x5C); /* 0x100A4A58: mov eax, dword ptr [edi + 0x5c] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0; /* 0x100A4A5B: and dword ptr [eax + ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A4A60: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x34)) = edx; /* 0x100A4A61: mov dword ptr [ebp - 0x34], edx */
    ecx = MEM32(0x100A4AD8); /* 0x100A4A64: mov ecx, dword ptr [0x100a4ad8] */
    RECOMP_BACKEDGE();
    goto L_100A4A4A; /* 0x100A4A6A: jmp 0x100a4a4a */
L_100A4A6C:
    PUSH32(esp, 0); /* 0x100A4A6C: push 0 */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100A4A6E: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x100A4A74: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ecx) = eax; /* 0x100A4A77: mov dword ptr [ecx], eax */
L_100A4A79:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A4A79: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A4A9D); /* 0x100A4A80: call 0x100a4a9d */
    RECOMP_FLAGS_IN();
    /* cmp esi, 8 */ /* 0x100A4A85: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4AAA; /* 0x100A4A88: jne 0x100a4aaa */
L_100A4A8A:
    PUSH32(esp, MEM32(edi + 0x64)); /* 0x100A4A8A: push dword ptr [edi + 0x64] */
    PUSH32(esp, esi); /* 0x100A4A8D: push esi */
    RECOMP_ICALL(MEM32(ebp + (-0x24))); /* 0x100A4A8E: call dword ptr [ebp - 0x24] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4A91: pop ecx */
    goto L_100A4AAE; /* 0x100A4A92: jmp 0x100a4aae */
L_100A4AAA:
    PUSH32(esp, esi); /* 0x100A4AAA: push esi */
    RECOMP_ICALL(MEM32(ebp + (-0x24))); /* 0x100A4AAB: call dword ptr [ebp - 0x24] */
    RECOMP_FLAGS_IN();
L_100A4AAE:
    ecx = POP32_VAL(esp); /* 0x100A4AAE: pop ecx */
    /* cmp esi, 8 */ /* 0x100A4AAF: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4ABE; /* 0x100A4AB2: je 0x100a4abe */
L_100A4AB4:
    /* cmp esi, 0xBu */ /* 0x100A4AB4: cmp esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4ABE; /* 0x100A4AB7: je 0x100a4abe */
L_100A4AB9:
    /* cmp esi, 4 */ /* 0x100A4AB9: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4ACF; /* 0x100A4ABC: jne 0x100a4acf */
L_100A4ABE:
    eax = MEM32(ebp + (-0x2C)); /* 0x100A4ABE: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(edi + 0x60) = eax; /* 0x100A4AC1: mov dword ptr [edi + 0x60], eax */
    /* cmp esi, 8 */ /* 0x100A4AC4: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4ACF; /* 0x100A4AC7: jne 0x100a4acf */
L_100A4AC9:
    eax = MEM32(ebp + (-0x30)); /* 0x100A4AC9: mov eax, dword ptr [ebp - 0x30] */
    MEM32(edi + 0x64) = eax; /* 0x100A4ACC: mov dword ptr [edi + 0x64], eax */
L_100A4ACF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4ACF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A4AD1:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A4AD1: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4AD6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4A9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4A9Du);

L_100A4A9D:
    /* test ebx, ebx */ /* 0x100A4A9D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4AA9; /* 0x100A4A9F: je 0x100a4aa9 */
L_100A4AA1:
    PUSH32(esp, 0); /* 0x100A4AA1: push 0 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A4AA3: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4AA8: pop ecx */
L_100A4AA9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4AA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4AFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4AFCu);

L_100A4AFC:
    PUSH32(esp, ebp); /* 0x100A4AFC: push ebp */
    ebp = esp; /* 0x100A4AFD: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x100A4AFF: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(0x10062754); /* 0x100A4B02: mov ecx, dword ptr [0x10062754] */
    PUSH32(esp, esi); /* 0x100A4B08: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A4B09: mov esi, dword ptr [ebp + 8] */
L_100A4B0C:
    /* cmp MEM32(edx + 0x4), esi */ /* 0x100A4B0C: cmp dword ptr [edx + 4], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4B1E; /* 0x100A4B0F: je 0x100a4b1e */
L_100A4B11:
    eax = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x100A4B11: imul eax, ecx, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x100A4B14: add edx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x100A4B17: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x100A4B1A: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100A4B0C; /* 0x100A4B1C: jb 0x100a4b0c */
L_100A4B1E:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x100A4B1E: imul ecx, ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x100A4B21: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    /* cmp edx, ecx */ /* 0x100A4B24: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A4B31; /* 0x100A4B26: jae 0x100a4b31 */
L_100A4B28:
    /* cmp MEM32(edx + 0x4), esi */ /* 0x100A4B28: cmp dword ptr [edx + 4], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4B31; /* 0x100A4B2B: jne 0x100a4b31 */
L_100A4B2D:
    eax = edx; /* 0x100A4B2D: mov eax, edx */
    goto L_100A4B33; /* 0x100A4B2F: jmp 0x100a4b33 */
L_100A4B31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4B31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A4B33:
    esi = POP32_VAL(esp); /* 0x100A4B33: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A4B34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4B35: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4B36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4B36u);

L_100A4B36:
    PUSH32(esp, ebp); /* 0x100A4B36: push ebp */
    ebp = esp; /* 0x100A4B37: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A4B39: push ecx */
    PUSH32(esp, ebx); /* 0x100A4B3A: push ebx */
    PUSH32(esp, esi); /* 0x100A4B3B: push esi */
    PUSH32(esp, MEM32(0x100E0EE4)); /* 0x100A4B3C: push dword ptr [0x100e0ee4] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A4B42: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100A4B48: mov ebx, eax */
    eax = MEM32(ebp + 0x8); /* 0x100A4B4A: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100A4B4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4B67; /* 0x100A4B4F: jne 0x100a4b67 */
L_100A4B51:
    RECOMP_CALL(sub_1001177D); /* 0x100A4B51: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A4B56: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A4B58: pop esi */
    MEM32(eax) = esi; /* 0x100A4B59: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A4B5B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A4B60: mov eax, esi */
    goto L_100A4C36; /* 0x100A4B62: jmp 0x100a4c36 */
L_100A4B67:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A4B67: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A4B6A: push edi */
    /* test ebx, ebx */ /* 0x100A4B6B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4C16; /* 0x100A4B6D: jne 0x100a4c16 */
L_100A4B73:
    esi = MEM32(0x100E5084); /* 0x100A4B73: mov esi, dword ptr [0x100e5084] */
    PUSH32(esp, 0x800u); /* 0x100A4B79: push 0x800 */
    PUSH32(esp, ebx); /* 0x100A4B7E: push ebx */
    ebx = 0x100A4C3Cu; /* 0x100A4B7F: mov ebx, 0x100a4c3c */
    PUSH32(esp, ebx); /* 0x100A4B84: push ebx */
    RECOMP_ICALL(esi); /* 0x100A4B85: call esi */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x100E500C); /* 0x100A4B87: mov edi, dword ptr [0x100e500c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100A4B8D: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x100A4B90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4BBC; /* 0x100A4B92: jne 0x100a4bbc */
L_100A4B94:
    RECOMP_ICALL(edi); /* 0x100A4B94: call edi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x57u */ /* 0x100A4B96: cmp eax, 0x57 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4BA9; /* 0x100A4B99: jne 0x100a4ba9 */
L_100A4B9B:
    PUSH32(esp, 0); /* 0x100A4B9B: push 0 */
    PUSH32(esp, 0); /* 0x100A4B9D: push 0 */
    PUSH32(esp, ebx); /* 0x100A4B9F: push ebx */
    RECOMP_ICALL(esi); /* 0x100A4BA0: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x100A4BA2: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x100A4BA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4BBC; /* 0x100A4BA7: jne 0x100a4bbc */
L_100A4BA9:
    RECOMP_CALL(sub_1001177D); /* 0x100A4BA9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A4BAE: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A4BB0: pop esi */
    MEM32(eax) = esi; /* 0x100A4BB1: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A4BB3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A4BB8: mov eax, esi */
    goto L_100A4C35; /* 0x100A4BBA: jmp 0x100a4c35 */
L_100A4BBC:
    PUSH32(esp, 0x100A4C58u); /* 0x100A4BBC: push 0x100a4c58 */
    PUSH32(esp, eax); /* 0x100A4BC1: push eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x100A4BC2: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100A4BC8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x100A4BCA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4BF0; /* 0x100A4BCC: jne 0x100a4bf0 */
L_100A4BCE:
    RECOMP_CALL(sub_1001177D); /* 0x100A4BCE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A4BD3: mov esi, eax */
    RECOMP_ICALL(edi); /* 0x100A4BD5: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A4BD7: push eax */
    RECOMP_CALL(sub_1001E482); /* 0x100A4BD8: call 0x1001e482 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4BDD: pop ecx */
    MEM32(esi) = eax; /* 0x100A4BDE: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_100A4670); /* 0x100A4BE0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x100A4BE5: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A4BE7: push eax */
    RECOMP_CALL(sub_1001E482); /* 0x100A4BE8: call 0x1001e482 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4BED: pop ecx */
    goto L_100A4C35; /* 0x100A4BEE: jmp 0x100a4c35 */
L_100A4BF0:
    esi = MEM32(0x100E5000); /* 0x100A4BF0: mov esi, dword ptr [0x100e5000] */
    PUSH32(esp, ebx); /* 0x100A4BF6: push ebx */
    RECOMP_ICALL(esi); /* 0x100A4BF7: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100A4BF9: push 0 */
    edi = eax; /* 0x100A4BFB: mov edi, eax */
    RECOMP_ICALL(esi); /* 0x100A4BFD: call esi */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0EE4u; /* 0x100A4BFF: mov ecx, 0x100e0ee4 */
    { uint32_t _tmp = MEM32(ecx); /* 0x100A4C04: xchg dword ptr [ecx], edi */
      MEM32(ecx) = edi;
      edi = _tmp; }
    /* cmp edi, eax */ /* 0x100A4C06: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4C13; /* 0x100A4C08: je 0x100a4c13 */
L_100A4C0A:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A4C0A: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x100E50F0)); /* 0x100A4C0D: call dword ptr [0x100e50f0] */
    RECOMP_FLAGS_IN();
L_100A4C13:
    eax = MEM32(ebp + 0x8); /* 0x100A4C13: mov eax, dword ptr [ebp + 8] */
L_100A4C16:
    PUSH32(esp, 4); /* 0x100A4C16: push 4 */
    PUSH32(esp, eax); /* 0x100A4C18: push eax */
    RECOMP_ICALL(ebx); /* 0x100A4C19: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4C1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4C33; /* 0x100A4C1D: jne 0x100a4c33 */
L_100A4C1F:
    RECOMP_CALL(sub_1001177D); /* 0x100A4C1F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A4C24: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001177D); /* 0x100A4C2A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100A4C2F: mov eax, dword ptr [eax] */
    goto L_100A4C35; /* 0x100A4C31: jmp 0x100a4c35 */
L_100A4C33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4C33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A4C35:
    edi = POP32_VAL(esp); /* 0x100A4C35: pop edi */
L_100A4C36:
    esi = POP32_VAL(esp); /* 0x100A4C36: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A4C37: pop ebx */
    esp = ebp; /* 0x100A4C38: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A4C3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4C3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4C3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4C3Cu);

L_100A4C3C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A4C3C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x56)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x56) = (uint8_t)(MEM8(eax + eax + 0x56) + LO8(eax)); /* 0x100A4C3D: add byte ptr [eax + eax + 0x56], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A4C41: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x100A4C44: push eax */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A4C45: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100A4C48: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100A4C4A: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x4C)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x4C) = (uint8_t)(MEM8(eax + eax + 0x4C) + LO8(eax)); /* 0x100A4C4C: add byte ptr cs:[eax + eax + 0x4c], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(ecx)); /* 0x100A4C51: add byte ptr [eax + eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x73795390)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x73795390) = (uint8_t)(MEM8(eax + 0x73795390) + LO8(edx)); /* 0x100A4C55: add byte ptr [eax + 0x73795390], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A4CC2; /* 0x100A4C5B: je 0x100a4cc2 */
L_100A4C5D:
    void_lift_trap(0x100A4C5Du, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A4C5E: inc esi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A4CCF; /* 0x100A4C5F: jne 0x100a4ccf */
L_100A4C61:
    void_lift_trap(0x100A4C61u, "arpl word ptr [ecx + ebp*2 + 0x6f], si");
    /* outsb: no port I/O under Win32 */ /* 0x100A4C65: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)((MEM8(ebx) ^ HI8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebx) ^ HI8(edx))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) ^ HI8(edx)); /* 0x100A4C66: xor byte ptr [ebx], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A4C68: add byte ptr ss:[ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A4C6C: in al, dx */
    PUSH32(esp, ecx); /* 0x100A4C6D: push ecx */
    PUSH32(esp, esi); /* 0x100A4C6E: push esi */
    esi = MEM32(0x100DF618); /* 0x100A4C6F: mov esi, dword ptr [0x100df618] */
    PUSH32(esp, edi); /* 0x100A4C75: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A4C76: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x100A4C78: mov dword ptr [ebp - 4], edi */
    goto L_100A4CC8; /* 0x100A4C7B: jmp 0x100a4cc8 */
L_100A4C7D:
    PUSH32(esp, edi); /* 0x100A4C7D: push edi */
    PUSH32(esp, edi); /* 0x100A4C7E: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A4C7F: push -1 */
    PUSH32(esp, eax); /* 0x100A4C81: push eax */
    PUSH32(esp, edi); /* 0x100A4C82: push edi */
    PUSH32(esp, edi); /* 0x100A4C83: push edi */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100A4C84: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4C8A: mov edi, eax */
    /* test edi, edi */ /* 0x100A4C8C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4C8E: je 0x100a4ce2 */
L_100A4C90:
    PUSH32(esp, 2); /* 0x100A4C90: push 2 */
    PUSH32(esp, edi); /* 0x100A4C92: push edi */
    RECOMP_CALL(sub_10011208); /* 0x100A4C93: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x100A4C98: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x100A4C9B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4C9C: pop ecx */
    /* test eax, eax */ /* 0x100A4C9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4C9F: je 0x100a4ce2 */
L_100A4CA1:
    PUSH32(esp, edi); /* 0x100A4CA1: push edi */
    PUSH32(esp, eax); /* 0x100A4CA2: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A4CA3: push -1 */
    PUSH32(esp, MEM32(esi)); /* 0x100A4CA5: push dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A4CA7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A4CA9: push edi */
    PUSH32(esp, edi); /* 0x100A4CAA: push edi */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100A4CAB: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4CB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CD9; /* 0x100A4CB3: je 0x100a4cd9 */
L_100A4CB5:
    eax = ebp + (-0x4); /* 0x100A4CB5: lea eax, [ebp - 4] */
    PUSH32(esp, edi); /* 0x100A4CB8: push edi */
    PUSH32(esp, eax); /* 0x100A4CB9: push eax */
    RECOMP_CALL(sub_1003120C); /* 0x100A4CBA: call 0x1003120c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4CBF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4CC0: pop ecx */
    /* test eax, eax */ /* 0x100A4CC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A4CC3; /* falls through past a gap */
L_100A4CC2:
    if (3u) _cf = (((MEM8(eax + 0xF)) >> 2) & 1u); /* 0x100A4CC2: sar byte ptr [eax + 0xf], 0x83 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(eax + 0xF)) >> 3u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(eax + 0xF) = (uint8_t)((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(eax + 0xF)) >> 3u));
    goto L_100A4CC6; /* falls through past a gap */
L_100A4CC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100A4CD4; /* 0x100A4CC3: js 0x100a4cd4 */
L_100A4CC5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100A4CC5: add esi, 4 */
    _flag_k = FK_ADD;
    goto L_100A4CC8; /* falls through past a gap */
L_100A4CC6:
    MEM8(ebx + ecx * 4) = (uint8_t)(6); /* 0x100A4CC6: mov byte ptr [ebx + ecx*4], 6 */
    goto L_100A4CCA; /* falls through past a gap */
L_100A4CC8:
    eax = MEM32(esi); /* 0x100A4CC8: mov eax, dword ptr [esi] */
L_100A4CCA:
    /* test eax, eax */ /* 0x100A4CCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4C7D; /* 0x100A4CCC: jne 0x100a4c7d */
L_100A4CCE:
    edi = POP32_VAL(esp); /* 0x100A4CCE: pop edi */
L_100A4CCF:
    esi = POP32_VAL(esp); /* 0x100A4CCF: pop esi */
    esp = ebp; /* 0x100A4CD0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A4CD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4CD3: ret  */
L_100A4CD4:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x100A4CD4: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4CD7: je 0x100a4ce2 */
L_100A4CD9:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A4CD9: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A4CDC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4CE1: pop ecx */
L_100A4CE2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A4CE2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100A4CCE; /* 0x100A4CE5: jmp 0x100a4cce */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A4C58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4C58u);

L_100A4C58:
    PUSH32(esp, ebx); /* 0x100A4C58: push ebx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A4CCE; /* 0x100A4C59: jns 0x100a4cce */
L_100A4C5B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A4CC2; /* 0x100A4C5B: je 0x100a4cc2 */
L_100A4C5D:
    void_lift_trap(0x100A4C5Du, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A4C5E: inc esi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A4CCF; /* 0x100A4C5F: jne 0x100a4ccf */
L_100A4C61:
    void_lift_trap(0x100A4C61u, "arpl word ptr [ecx + ebp*2 + 0x6f], si");
    /* outsb: no port I/O under Win32 */ /* 0x100A4C65: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)((MEM8(ebx) ^ HI8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebx) ^ HI8(edx))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) ^ HI8(edx)); /* 0x100A4C66: xor byte ptr [ebx], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A4C68: add byte ptr ss:[ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A4C6C: in al, dx */
    PUSH32(esp, ecx); /* 0x100A4C6D: push ecx */
    PUSH32(esp, esi); /* 0x100A4C6E: push esi */
    esi = MEM32(0x100DF618); /* 0x100A4C6F: mov esi, dword ptr [0x100df618] */
    PUSH32(esp, edi); /* 0x100A4C75: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A4C76: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x100A4C78: mov dword ptr [ebp - 4], edi */
    goto L_100A4CC8; /* 0x100A4C7B: jmp 0x100a4cc8 */
L_100A4C7D:
    PUSH32(esp, edi); /* 0x100A4C7D: push edi */
    PUSH32(esp, edi); /* 0x100A4C7E: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A4C7F: push -1 */
    PUSH32(esp, eax); /* 0x100A4C81: push eax */
    PUSH32(esp, edi); /* 0x100A4C82: push edi */
    PUSH32(esp, edi); /* 0x100A4C83: push edi */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100A4C84: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4C8A: mov edi, eax */
    /* test edi, edi */ /* 0x100A4C8C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4C8E: je 0x100a4ce2 */
L_100A4C90:
    PUSH32(esp, 2); /* 0x100A4C90: push 2 */
    PUSH32(esp, edi); /* 0x100A4C92: push edi */
    RECOMP_CALL(sub_10011208); /* 0x100A4C93: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x100A4C98: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x100A4C9B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4C9C: pop ecx */
    /* test eax, eax */ /* 0x100A4C9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4C9F: je 0x100a4ce2 */
L_100A4CA1:
    PUSH32(esp, edi); /* 0x100A4CA1: push edi */
    PUSH32(esp, eax); /* 0x100A4CA2: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A4CA3: push -1 */
    PUSH32(esp, MEM32(esi)); /* 0x100A4CA5: push dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A4CA7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A4CA9: push edi */
    PUSH32(esp, edi); /* 0x100A4CAA: push edi */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100A4CAB: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4CB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CD9; /* 0x100A4CB3: je 0x100a4cd9 */
L_100A4CB5:
    eax = ebp + (-0x4); /* 0x100A4CB5: lea eax, [ebp - 4] */
    PUSH32(esp, edi); /* 0x100A4CB8: push edi */
    PUSH32(esp, eax); /* 0x100A4CB9: push eax */
    RECOMP_CALL(sub_1003120C); /* 0x100A4CBA: call 0x1003120c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4CBF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4CC0: pop ecx */
    /* test eax, eax */ /* 0x100A4CC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A4CC3; /* falls through past a gap */
L_100A4CC2:
    if (3u) _cf = (((MEM8(eax + 0xF)) >> 2) & 1u); /* 0x100A4CC2: sar byte ptr [eax + 0xf], 0x83 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(eax + 0xF)) >> 3u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(eax + 0xF) = (uint8_t)((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(eax + 0xF)) >> 3u));
    goto L_100A4CC6; /* falls through past a gap */
L_100A4CC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100A4CD4; /* 0x100A4CC3: js 0x100a4cd4 */
L_100A4CC5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100A4CC5: add esi, 4 */
    _flag_k = FK_ADD;
    goto L_100A4CC8; /* falls through past a gap */
L_100A4CC6:
    MEM8(ebx + ecx * 4) = (uint8_t)(6); /* 0x100A4CC6: mov byte ptr [ebx + ecx*4], 6 */
    goto L_100A4CCA; /* falls through past a gap */
L_100A4CC8:
    eax = MEM32(esi); /* 0x100A4CC8: mov eax, dword ptr [esi] */
L_100A4CCA:
    /* test eax, eax */ /* 0x100A4CCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4C7D; /* 0x100A4CCC: jne 0x100a4c7d */
L_100A4CCE:
    edi = POP32_VAL(esp); /* 0x100A4CCE: pop edi */
L_100A4CCF:
    esi = POP32_VAL(esp); /* 0x100A4CCF: pop esi */
    esp = ebp; /* 0x100A4CD0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A4CD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4CD3: ret  */
L_100A4CD4:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x100A4CD4: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4CD7: je 0x100a4ce2 */
L_100A4CD9:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A4CD9: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A4CDC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4CE1: pop ecx */
L_100A4CE2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A4CE2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100A4CCE; /* 0x100A4CE5: jmp 0x100a4cce */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A4C6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4C6Au);

L_100A4C6A:
    PUSH32(esp, ebp); /* 0x100A4C6A: push ebp */
    ebp = esp; /* 0x100A4C6B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A4C6D: push ecx */
    PUSH32(esp, esi); /* 0x100A4C6E: push esi */
    esi = MEM32(0x100DF618); /* 0x100A4C6F: mov esi, dword ptr [0x100df618] */
    PUSH32(esp, edi); /* 0x100A4C75: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A4C76: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x100A4C78: mov dword ptr [ebp - 4], edi */
    goto L_100A4CC8; /* 0x100A4C7B: jmp 0x100a4cc8 */
L_100A4C7D:
    PUSH32(esp, edi); /* 0x100A4C7D: push edi */
    PUSH32(esp, edi); /* 0x100A4C7E: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A4C7F: push -1 */
    PUSH32(esp, eax); /* 0x100A4C81: push eax */
    PUSH32(esp, edi); /* 0x100A4C82: push edi */
    PUSH32(esp, edi); /* 0x100A4C83: push edi */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100A4C84: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4C8A: mov edi, eax */
    /* test edi, edi */ /* 0x100A4C8C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4C8E: je 0x100a4ce2 */
L_100A4C90:
    PUSH32(esp, 2); /* 0x100A4C90: push 2 */
    PUSH32(esp, edi); /* 0x100A4C92: push edi */
    RECOMP_CALL(sub_10011208); /* 0x100A4C93: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x100A4C98: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x100A4C9B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4C9C: pop ecx */
    /* test eax, eax */ /* 0x100A4C9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4C9F: je 0x100a4ce2 */
L_100A4CA1:
    PUSH32(esp, edi); /* 0x100A4CA1: push edi */
    PUSH32(esp, eax); /* 0x100A4CA2: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A4CA3: push -1 */
    PUSH32(esp, MEM32(esi)); /* 0x100A4CA5: push dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A4CA7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A4CA9: push edi */
    PUSH32(esp, edi); /* 0x100A4CAA: push edi */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100A4CAB: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4CB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4CD9; /* 0x100A4CB3: je 0x100a4cd9 */
L_100A4CB5:
    eax = ebp + (-0x4); /* 0x100A4CB5: lea eax, [ebp - 4] */
    PUSH32(esp, edi); /* 0x100A4CB8: push edi */
    PUSH32(esp, eax); /* 0x100A4CB9: push eax */
    RECOMP_CALL(sub_1003120C); /* 0x100A4CBA: call 0x1003120c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4CBF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4CC0: pop ecx */
    /* test eax, eax */ /* 0x100A4CC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A4CD4; /* 0x100A4CC3: js 0x100a4cd4 */
L_100A4CC5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100A4CC5: add esi, 4 */
    _flag_k = FK_ADD;
L_100A4CC8:
    eax = MEM32(esi); /* 0x100A4CC8: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x100A4CCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4C7D; /* 0x100A4CCC: jne 0x100a4c7d */
L_100A4CCE:
    edi = POP32_VAL(esp); /* 0x100A4CCE: pop edi */
    esi = POP32_VAL(esp); /* 0x100A4CCF: pop esi */
    esp = ebp; /* 0x100A4CD0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A4CD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4CD3: ret  */
L_100A4CD4:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x100A4CD4: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4CE2; /* 0x100A4CD7: je 0x100a4ce2 */
L_100A4CD9:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A4CD9: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A4CDC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4CE1: pop ecx */
L_100A4CE2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A4CE2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100A4CCE; /* 0x100A4CE5: jmp 0x100a4cce */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A4CE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4CE7u);

L_100A4CE7:
    eax = MEM32(0x100DF564); /* 0x100A4CE7: mov eax, dword ptr [0x100df564] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4CEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4CED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4CEDu);

L_100A4CED:
    PUSH32(esp, ebp); /* 0x100A4CED: push ebp */
    ebp = esp; /* 0x100A4CEE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A4CF0: push esi */
    RECOMP_CALL(sub_1000F720); /* 0x100A4CF1: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A4CF6: mov esi, eax */
    /* test esi, esi */ /* 0x100A4CF8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4E45; /* 0x100A4CFA: je 0x100a4e45 */
L_100A4D00:
    edx = MEM32(esi + 0x5C); /* 0x100A4D00: mov edx, dword ptr [esi + 0x5c] */
    ecx = edx; /* 0x100A4D03: mov ecx, edx */
    PUSH32(esp, edi); /* 0x100A4D05: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A4D06: mov edi, dword ptr [ebp + 8] */
L_100A4D09:
    /* cmp MEM32(ecx), edi */ /* 0x100A4D09: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4D1A; /* 0x100A4D0B: je 0x100a4d1a */
L_100A4D0D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x100A4D0D: add ecx, 0xc */
    _flag_k = FK_ADD;
    eax = edx + 0x90; /* 0x100A4D10: lea eax, [edx + 0x90] */
    /* cmp ecx, eax */ /* 0x100A4D16: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100A4D09; /* 0x100A4D18: jb 0x100a4d09 */
L_100A4D1A:
    eax = edx + 0x90; /* 0x100A4D1A: lea eax, [edx + 0x90] */
    /* cmp ecx, eax */ /* 0x100A4D20: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A4D28; /* 0x100A4D22: jae 0x100a4d28 */
L_100A4D24:
    /* cmp MEM32(ecx), edi */ /* 0x100A4D24: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4D2A; /* 0x100A4D26: je 0x100a4d2a */
L_100A4D28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A4D28: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A4D2A:
    /* test ecx, ecx */ /* 0x100A4D2A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4E42; /* 0x100A4D2C: je 0x100a4e42 */
L_100A4D32:
    edx = MEM32(ecx + 0x8); /* 0x100A4D32: mov edx, dword ptr [ecx + 8] */
    /* test edx, edx */ /* 0x100A4D35: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4E42; /* 0x100A4D37: je 0x100a4e42 */
L_100A4D3D:
    /* cmp edx, 5 */ /* 0x100A4D3D: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4D4E; /* 0x100A4D40: jne 0x100a4d4e */
L_100A4D42:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x100A4D42: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4D46: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A4D48: inc eax */
    _flag_k = FK_INC;
    goto L_100A4E44; /* 0x100A4D49: jmp 0x100a4e44 */
L_100A4D4E:
    /* cmp edx, 1 */ /* 0x100A4D4E: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4D5B; /* 0x100A4D51: jne 0x100a4d5b */
L_100A4D53:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A4D53: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A4E44; /* 0x100A4D56: jmp 0x100a4e44 */
L_100A4D5B:
    eax = MEM32(ebp + 0xC); /* 0x100A4D5B: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x100A4D5E: push ebx */
    ebx = MEM32(esi + 0x60); /* 0x100A4D5F: mov ebx, dword ptr [esi + 0x60] */
    MEM32(esi + 0x60) = eax; /* 0x100A4D62: mov dword ptr [esi + 0x60], eax */
    /* cmp MEM32(ecx + 0x4), 8 */ /* 0x100A4D65: cmp dword ptr [ecx + 4], 8 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4E2F; /* 0x100A4D69: jne 0x100a4e2f */
L_100A4D6F:
    PUSH32(esp, 0x24u); /* 0x100A4D6F: push 0x24 */
    edi = POP32_VAL(esp); /* 0x100A4D71: pop edi */
L_100A4D72:
    eax = MEM32(esi + 0x5C); /* 0x100A4D72: mov eax, dword ptr [esi + 0x5c] */
    _flag_a = (uint32_t)(MEM32(edi + eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(edi + eax + 0x8) = MEM32(edi + eax + 0x8) & 0; /* 0x100A4D75: and dword ptr [edi + eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x100A4D7A: add edi, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, 0x90u */ /* 0x100A4D7D: cmp edi, 0x90 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100A4D72; /* 0x100A4D83: jl 0x100a4d72 */
L_100A4D85:
    /* cmp MEM32(ecx), 0xC000008Eu */ /* 0x100A4D85: cmp dword ptr [ecx], 0xc000008e */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC000008Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(esi + 0x64); /* 0x100A4D8B: mov edi, dword ptr [esi + 0x64] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4D9C; /* 0x100A4D8E: jne 0x100a4d9c */
L_100A4D90:
    MEM32(esi + 0x64) = 0x83u; /* 0x100A4D90: mov dword ptr [esi + 0x64], 0x83 */
    goto L_100A4E22; /* 0x100A4D97: jmp 0x100a4e22 */
L_100A4D9C:
    /* cmp MEM32(ecx), 0xC0000090u */ /* 0x100A4D9C: cmp dword ptr [ecx], 0xc0000090 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC0000090u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4DAD; /* 0x100A4DA2: jne 0x100a4dad */
L_100A4DA4:
    MEM32(esi + 0x64) = 0x81u; /* 0x100A4DA4: mov dword ptr [esi + 0x64], 0x81 */
    goto L_100A4E22; /* 0x100A4DAB: jmp 0x100a4e22 */
L_100A4DAD:
    /* cmp MEM32(ecx), 0xC0000091u */ /* 0x100A4DAD: cmp dword ptr [ecx], 0xc0000091 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC0000091u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4DBE; /* 0x100A4DB3: jne 0x100a4dbe */
L_100A4DB5:
    MEM32(esi + 0x64) = 0x84u; /* 0x100A4DB5: mov dword ptr [esi + 0x64], 0x84 */
    goto L_100A4E22; /* 0x100A4DBC: jmp 0x100a4e22 */
L_100A4DBE:
    /* cmp MEM32(ecx), 0xC0000093u */ /* 0x100A4DBE: cmp dword ptr [ecx], 0xc0000093 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC0000093u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4DCF; /* 0x100A4DC4: jne 0x100a4dcf */
L_100A4DC6:
    MEM32(esi + 0x64) = 0x85u; /* 0x100A4DC6: mov dword ptr [esi + 0x64], 0x85 */
    goto L_100A4E22; /* 0x100A4DCD: jmp 0x100a4e22 */
L_100A4DCF:
    /* cmp MEM32(ecx), 0xC000008Du */ /* 0x100A4DCF: cmp dword ptr [ecx], 0xc000008d */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC000008Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4DE0; /* 0x100A4DD5: jne 0x100a4de0 */
L_100A4DD7:
    MEM32(esi + 0x64) = 0x82u; /* 0x100A4DD7: mov dword ptr [esi + 0x64], 0x82 */
    goto L_100A4E22; /* 0x100A4DDE: jmp 0x100a4e22 */
L_100A4DE0:
    /* cmp MEM32(ecx), 0xC000008Fu */ /* 0x100A4DE0: cmp dword ptr [ecx], 0xc000008f */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC000008Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4DF1; /* 0x100A4DE6: jne 0x100a4df1 */
L_100A4DE8:
    MEM32(esi + 0x64) = 0x86u; /* 0x100A4DE8: mov dword ptr [esi + 0x64], 0x86 */
    goto L_100A4E22; /* 0x100A4DEF: jmp 0x100a4e22 */
L_100A4DF1:
    /* cmp MEM32(ecx), 0xC0000092u */ /* 0x100A4DF1: cmp dword ptr [ecx], 0xc0000092 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC0000092u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4E02; /* 0x100A4DF7: jne 0x100a4e02 */
L_100A4DF9:
    MEM32(esi + 0x64) = 0x8Au; /* 0x100A4DF9: mov dword ptr [esi + 0x64], 0x8a */
    goto L_100A4E22; /* 0x100A4E00: jmp 0x100a4e22 */
L_100A4E02:
    /* cmp MEM32(ecx), 0xC00002B5u */ /* 0x100A4E02: cmp dword ptr [ecx], 0xc00002b5 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC00002B5u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4E13; /* 0x100A4E08: jne 0x100a4e13 */
L_100A4E0A:
    MEM32(esi + 0x64) = 0x8Du; /* 0x100A4E0A: mov dword ptr [esi + 0x64], 0x8d */
    goto L_100A4E22; /* 0x100A4E11: jmp 0x100a4e22 */
L_100A4E13:
    /* cmp MEM32(ecx), 0xC00002B4u */ /* 0x100A4E13: cmp dword ptr [ecx], 0xc00002b4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xC00002B4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4E22; /* 0x100A4E19: jne 0x100a4e22 */
L_100A4E1B:
    MEM32(esi + 0x64) = 0x8Eu; /* 0x100A4E1B: mov dword ptr [esi + 0x64], 0x8e */
L_100A4E22:
    PUSH32(esp, MEM32(esi + 0x64)); /* 0x100A4E22: push dword ptr [esi + 0x64] */
    PUSH32(esp, 8); /* 0x100A4E25: push 8 */
    RECOMP_ICALL(edx); /* 0x100A4E27: call edx */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4E29: pop ecx */
    MEM32(esi + 0x64) = edi; /* 0x100A4E2A: mov dword ptr [esi + 0x64], edi */
    goto L_100A4E38; /* 0x100A4E2D: jmp 0x100a4e38 */
L_100A4E2F:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x100A4E2F: push dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x100A4E32: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(edx); /* 0x100A4E36: call edx */
    RECOMP_FLAGS_IN();
L_100A4E38:
    ecx = POP32_VAL(esp); /* 0x100A4E38: pop ecx */
    MEM32(esi + 0x60) = ebx; /* 0x100A4E39: mov dword ptr [esi + 0x60], ebx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A4E3C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100A4E3F: pop ebx */
    goto L_100A4E44; /* 0x100A4E40: jmp 0x100a4e44 */
L_100A4E42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4E42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A4E44:
    edi = POP32_VAL(esp); /* 0x100A4E44: pop edi */
L_100A4E45:
    esi = POP32_VAL(esp); /* 0x100A4E45: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A4E46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4E47: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4E48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4E48u);

L_100A4E48:
    PUSH32(esp, ebp); /* 0x100A4E48: push ebp */
    ebp = esp; /* 0x100A4E49: mov ebp, esp */
    eax = 0xE06D7363u; /* 0x100A4E4B: mov eax, 0xe06d7363 */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x100A4E50: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4E62; /* 0x100A4E53: jne 0x100a4e62 */
L_100A4E55:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A4E55: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100A4E58: push eax */
    RECOMP_CALL(sub_100A4CED); /* 0x100A4E59: call 0x100a4ced */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A4E5E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A4E5F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100A4E60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4E61: ret  */
L_100A4E62:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4E62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A4E64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A4E65: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A4E66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A4E66u);

L_100A4E66:
    PUSH32(esp, ebp); /* 0x100A4E66: push ebp */
    ebp = esp; /* 0x100A4E67: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100A4E69: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A4E6C: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A4E71: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A4E73: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100A4E76: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100A4E79: push ebx */
    ebx = MEM32(0x100E5000); /* 0x100A4E7A: mov ebx, dword ptr [0x100e5000] */
    PUSH32(esp, esi); /* 0x100A4E80: push esi */
    PUSH32(esp, edi); /* 0x100A4E81: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x100A4E82: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A4E85: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x100A4E87: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100A4E8A: push esi */
    MEM32(ebp + (-0x20)) = eax; /* 0x100A4E8B: mov dword ptr [ebp - 0x20], eax */
    RECOMP_ICALL(ebx); /* 0x100A4E8E: call ebx */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4E90: mov edi, eax */
    MEM32(ebp + (-0x18)) = edi; /* 0x100A4E92: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_10014BD1); /* 0x100A4E95: call 0x10014bd1 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x100A4E9A: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(0x100E40FC), esi */ /* 0x100A4E9D: cmp dword ptr [0x100e40fc], esi */
    _flag_a = (uint32_t)(MEM32(0x100E40FC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A4F59; /* 0x100A4EA3: jne 0x100a4f59 */
L_100A4EA9:
    PUSH32(esp, 0x800u); /* 0x100A4EA9: push 0x800 */
    PUSH32(esp, esi); /* 0x100A4EAE: push esi */
    PUSH32(esp, 0x10062758u); /* 0x100A4EAF: push 0x10062758 */
    RECOMP_ICALL(MEM32(0x100E5084)); /* 0x100A4EB4: call dword ptr [0x100e5084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4EBA: mov edi, eax */
    /* test edi, edi */ /* 0x100A4EBC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4EE6; /* 0x100A4EBE: jne 0x100a4ee6 */
L_100A4EC0:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A4EC0: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x57u */ /* 0x100A4EC6: cmp eax, 0x57 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A5039; /* 0x100A4EC9: jne 0x100a5039 */
L_100A4ECF:
    PUSH32(esp, esi); /* 0x100A4ECF: push esi */
    PUSH32(esp, esi); /* 0x100A4ED0: push esi */
    PUSH32(esp, 0x10062758u); /* 0x100A4ED1: push 0x10062758 */
    RECOMP_ICALL(MEM32(0x100E5084)); /* 0x100A4ED6: call dword ptr [0x100e5084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A4EDC: mov edi, eax */
    /* test edi, edi */ /* 0x100A4EDE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A5039; /* 0x100A4EE0: je 0x100a5039 */
L_100A4EE6:
    PUSH32(esp, 0x100A504Cu); /* 0x100A4EE6: push 0x100a504c */
    PUSH32(esp, edi); /* 0x100A4EEB: push edi */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x100A4EEC: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4EF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A5039; /* 0x100A4EF4: je 0x100a5039 */
L_100A4EFA:
    PUSH32(esp, eax); /* 0x100A4EFA: push eax */
    RECOMP_ICALL(ebx); /* 0x100A4EFB: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10062770u); /* 0x100A4EFD: push 0x10062770 */
    PUSH32(esp, edi); /* 0x100A4F02: push edi */
    MEM32(0x100E40FC) = eax; /* 0x100A4F03: mov dword ptr [0x100e40fc], eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x100A4F08: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A4F0E: push eax */
    RECOMP_ICALL(ebx); /* 0x100A4F0F: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10062780u); /* 0x100A4F11: push 0x10062780 */
    PUSH32(esp, edi); /* 0x100A4F16: push edi */
    MEM32(0x100E4100) = eax; /* 0x100A4F17: mov dword ptr [0x100e4100], eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x100A4F1C: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A4F22: push eax */
    RECOMP_ICALL(ebx); /* 0x100A4F23: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100A5058u); /* 0x100A4F25: push 0x100a5058 */
    PUSH32(esp, edi); /* 0x100A4F2A: push edi */
    MEM32(0x100E4104) = eax; /* 0x100A4F2B: mov dword ptr [0x100e4104], eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x100A4F30: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A4F36: push eax */
    RECOMP_ICALL(ebx); /* 0x100A4F37: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(0x100E410C) = eax; /* 0x100A4F39: mov dword ptr [0x100e410c], eax */
    /* test eax, eax */ /* 0x100A4F3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4F56; /* 0x100A4F40: je 0x100a4f56 */
L_100A4F42:
    PUSH32(esp, 0x10062794u); /* 0x100A4F42: push 0x10062794 */
    PUSH32(esp, edi); /* 0x100A4F47: push edi */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x100A4F48: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A4F4E: push eax */
    RECOMP_ICALL(ebx); /* 0x100A4F4F: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(0x100E4108) = eax; /* 0x100A4F51: mov dword ptr [0x100e4108], eax */
L_100A4F56:
    edi = MEM32(ebp + (-0x18)); /* 0x100A4F56: mov edi, dword ptr [ebp - 0x18] */
L_100A4F59:
    RECOMP_ICALL(MEM32(0x100E5268)); /* 0x100A4F59: call dword ptr [0x100e5268] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4F5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4F7E; /* 0x100A4F61: je 0x100a4f7e */
L_100A4F63:
    eax = MEM32(ebp + (-0x1C)); /* 0x100A4F63: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x100A4F66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4F71; /* 0x100A4F68: je 0x100a4f71 */
L_100A4F6A:
    PUSH32(esp, eax); /* 0x100A4F6A: push eax */
    RECOMP_ICALL(MEM32(0x100E51B8)); /* 0x100A4F6B: call dword ptr [0x100e51b8] */
    RECOMP_FLAGS_IN();
L_100A4F71:
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x100A4F71: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4F93; /* 0x100A4F74: je 0x100a4f93 */
L_100A4F76:
    PUSH32(esp, 4); /* 0x100A4F76: push 4 */
L_100A4F78:
    eax = POP32_VAL(esp); /* 0x100A4F78: pop eax */
    goto L_100A503B; /* 0x100A4F79: jmp 0x100a503b */
L_100A4F7E:
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x100A4F7E: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4F93; /* 0x100A4F81: je 0x100a4f93 */
L_100A4F83:
    PUSH32(esp, MEM32(0x100E40FC)); /* 0x100A4F83: push dword ptr [0x100e40fc] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100A4F89: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x100A4F8F: push 3 */
    RECOMP_BACKEDGE();
    goto L_100A4F78; /* 0x100A4F91: jmp 0x100a4f78 */
L_100A4F93:
    eax = MEM32(0x100E4108); /* 0x100A4F93: mov eax, dword ptr [0x100e4108] */
    ebx = MEM32(0x100E5004); /* 0x100A4F98: mov ebx, dword ptr [0x100e5004] */
    /* cmp eax, edi */ /* 0x100A4F9E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4FF1; /* 0x100A4FA0: je 0x100a4ff1 */
L_100A4FA2:
    /* cmp MEM32(0x100E410C), edi */ /* 0x100A4FA2: cmp dword ptr [0x100e410c], edi */
    _flag_a = (uint32_t)(MEM32(0x100E410C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A4FF1; /* 0x100A4FA8: je 0x100a4ff1 */
L_100A4FAA:
    PUSH32(esp, eax); /* 0x100A4FAA: push eax */
    RECOMP_ICALL(ebx); /* 0x100A4FAB: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100E410C)); /* 0x100A4FAD: push dword ptr [0x100e410c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x100A4FB3: mov dword ptr [ebp - 0x14], eax */
    RECOMP_ICALL(ebx); /* 0x100A4FB6: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x100A4FB8: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x100A4FBB: mov dword ptr [ebp - 0x18], eax */
    /* test ecx, ecx */ /* 0x100A4FBE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4FF1; /* 0x100A4FC0: je 0x100a4ff1 */
L_100A4FC2:
    /* test eax, eax */ /* 0x100A4FC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4FF1; /* 0x100A4FC4: je 0x100a4ff1 */
L_100A4FC6:
    RECOMP_ICALL(ecx); /* 0x100A4FC6: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4FC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4FE6; /* 0x100A4FCA: je 0x100a4fe6 */
L_100A4FCC:
    ecx = ebp + (-0x24); /* 0x100A4FCC: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x100A4FCF: push ecx */
    PUSH32(esp, 0xCu); /* 0x100A4FD0: push 0xc */
    ecx = ebp + (-0x10); /* 0x100A4FD2: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100A4FD5: push ecx */
    PUSH32(esp, 1); /* 0x100A4FD6: push 1 */
    PUSH32(esp, eax); /* 0x100A4FD8: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x18))); /* 0x100A4FD9: call dword ptr [ebp - 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4FDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A4FE6; /* 0x100A4FDE: je 0x100a4fe6 */
L_100A4FE0:
    /* test MEM8(ebp + (-0x8)), 1 */ /* 0x100A4FE0: test byte ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A4FF1; /* 0x100A4FE4: jne 0x100a4ff1 */
L_100A4FE6:
    edi = MEM32(ebp + 0x10); /* 0x100A4FE6: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((edi | 0x00200000u)); _flag_b = (uint32_t)((edi | 0x00200000u));
    edi = edi | 0x00200000u; /* 0x100A4FE9: or edi, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A5021; /* 0x100A4FEF: jmp 0x100a5021 */
L_100A4FF1:
    eax = MEM32(0x100E4100); /* 0x100A4FF1: mov eax, dword ptr [0x100e4100] */
    /* cmp eax, edi */ /* 0x100A4FF6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A501E; /* 0x100A4FF8: je 0x100a501e */
L_100A4FFA:
    PUSH32(esp, eax); /* 0x100A4FFA: push eax */
    RECOMP_ICALL(ebx); /* 0x100A4FFB: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A4FFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A501E; /* 0x100A4FFF: je 0x100a501e */
L_100A5001:
    RECOMP_ICALL(eax); /* 0x100A5001: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A5003: mov esi, eax */
    /* test esi, esi */ /* 0x100A5005: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A501E; /* 0x100A5007: je 0x100a501e */
L_100A5009:
    eax = MEM32(0x100E4104); /* 0x100A5009: mov eax, dword ptr [0x100e4104] */
    /* cmp eax, edi */ /* 0x100A500E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A501E; /* 0x100A5010: je 0x100a501e */
L_100A5012:
    PUSH32(esp, eax); /* 0x100A5012: push eax */
    RECOMP_ICALL(ebx); /* 0x100A5013: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A5015: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A501E; /* 0x100A5017: je 0x100a501e */
L_100A5019:
    PUSH32(esp, esi); /* 0x100A5019: push esi */
    RECOMP_ICALL(eax); /* 0x100A501A: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A501C: mov esi, eax */
L_100A501E:
    edi = MEM32(ebp + 0x10); /* 0x100A501E: mov edi, dword ptr [ebp + 0x10] */
L_100A5021:
    PUSH32(esp, MEM32(0x100E40FC)); /* 0x100A5021: push dword ptr [0x100e40fc] */
    RECOMP_ICALL(ebx); /* 0x100A5027: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A5029: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A5039; /* 0x100A502B: je 0x100a5039 */
L_100A502D:
    PUSH32(esp, edi); /* 0x100A502D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100A502E: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x100A5031: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x100A5034: push esi */
    RECOMP_ICALL(eax); /* 0x100A5035: call eax */
    RECOMP_FLAGS_IN();
    goto L_100A503B; /* 0x100A5037: jmp 0x100a503b */
L_100A5039:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A5039: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A503B:
    ecx = MEM32(ebp + (-0x4)); /* 0x100A503B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100A503E: pop edi */
    esi = POP32_VAL(esp); /* 0x100A503F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A5040: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100A5042: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100A5043: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A5048: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A504A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A504B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A504C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A504Cu);

L_100A504C:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A504C: dec ebp */
    _flag_k = FK_DEC;
    if ((_cf == 0)) goto L_100A50C3; /* 0x100A504D: jae 0x100a50c3 */
L_100A5050:
    POPAD(); /* 0x100A5050: popal  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A5051: inc edx */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x100A5054: outsd dx, dword ptr [esi] */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_100A50AE; /* 0x100A5055: js 0x100a50ae */
L_100A5057:
    _flag_a = (uint32_t)(MEM8(edi + 0x65)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x65) = (uint8_t)(MEM8(edi + 0x65) + LO8(eax)); /* 0x100A5057: add byte ptr [edi + 0x65], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A50B1; /* 0x100A505A: je 0x100a50b1 */
L_100A505C:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A50C3; /* 0x100A505C: jae 0x100a50c3 */
L_100A505E:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A50AF; /* 0x100A505E: jb 0x100a50af */
L_100A5060:
    void_lift_trap(0x100A5060u, "bound ebp, qword ptr [edx + 0x65]");
    void_lift_trap(0x100A5063u, "arpl word ptr [ecx + ecx*2 + 0x6e], si");
    void_lift_trap(0x100A5067u, "outsw dx, word ptr [esi]");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A50D8; /* 0x100A5069: jb 0x100a50d8 */
L_100A506B:
    POPAD(); /* 0x100A506B: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A50D7; /* 0x100A506C: je 0x100a50d7 */
L_100A506E:
    /* outsd: no port I/O under Win32 */ /* 0x100A506E: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A506F: outsb dx, byte ptr [esi] */
    PUSH32(esp, edi); /* 0x100A5070: push edi */
    _flag_a = (uint32_t)(MEM8(edx + 0x10)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x10) = (uint8_t)(MEM8(edx + 0x10) + HI8(ecx)); /* 0x100A5071: add byte ptr [edx + 0x10], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x100A5150u); /* 0x100A5074: push 0x100a5150 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A5079: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A507E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A5080: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 7); /* 0x100A5083: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A5085: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A508A: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A508B: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A508E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100A5090: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100A5093: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A5095: setne al */
    /* test eax, eax */ /* 0x100A5098: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A50AD; /* 0x100A509A: jne 0x100a50ad */
L_100A509C:
    RECOMP_CALL(sub_1001177D); /* 0x100A509C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A50A1: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A50A3: pop esi */
    MEM32(eax) = esi; /* 0x100A50A4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A50A6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100A511C; /* 0x100A50AB: jmp 0x100a511c */
L_100A50AD:
    MEM32(ecx) = esi; /* 0x100A50AD: mov dword ptr [ecx], esi */
    goto L_100A50AF; /* falls through past a gap */
L_100A50AE:
    _flag_a = (uint32_t)((MEM32(ebx + (-0x7AF383)) ^ ecx)); _flag_b = (uint32_t)((MEM32(ebx + (-0x7AF383)) ^ ecx));
    MEM32(ebx + (-0x7AF383)) = MEM32(ebx + (-0x7AF383)) ^ ecx; /* 0x100A50AE: xor dword ptr [ebx - 0x7af383], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A50B4; /* falls through past a gap */
L_100A50AF:
    edi = MEM32(ebp + 0xC); /* 0x100A50AF: mov edi, dword ptr [ebp + 0xc] */
    goto L_100A50B2; /* falls through past a gap */
L_100A50B1:
    _flag_a = (uint32_t)((LO8(eax) | 0x85u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x85u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x85u); /* 0x100A50B1: or al, 0x85 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A50B3; /* falls through past a gap */
L_100A50B2:
    /* test edi, edi */ /* 0x100A50B2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A50B4; /* falls through past a gap */
L_100A50B3:
    PUSH32(esp, MEM32(edx + eax + (-0x77))); /* 0x100A50B3: push dword ptr [edx + eax - 0x77] */
    goto L_100A50B7; /* falls through past a gap */
L_100A50B4:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A50B8; /* 0x100A50B4: je 0x100a50b8 */
L_100A50B6:
    MEM32(edi) = esi; /* 0x100A50B6: mov dword ptr [edi], esi */
    goto L_100A50B8; /* falls through past a gap */
L_100A50B7:
    void_lift_trap(0x100A50B7u, "aaa ");
L_100A50B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A50B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100A50BA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A50BD: setne al */
    /* test eax, eax */ /* 0x100A50C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A509C; /* 0x100A50C2: je 0x100a509c */
    goto L_100A50C4; /* falls through past a gap */
L_100A50C3:
    _st[0] = _st[7] / _st[0]; /* 0x100A50C3: fdivr st(7) */
    goto L_100A50C5; /* falls through past a gap */
L_100A50C4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A50C4: push dword ptr [ebp + 0x10] */
    goto L_100A50C7; /* falls through past a gap */
L_100A50C5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A50D7; /* 0x100A50C5: jne 0x100a50d7 */
L_100A50C7:
    RECOMP_CALL(sub_10017060); /* 0x100A50C7: call 0x10017060 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A50CC: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x100A50CD: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x100A50D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A511C; /* 0x100A50D2: je 0x100a511c */
L_100A50D4:
    PUSH32(esp, eax); /* 0x100A50D4: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A50D5: call 0x100129af */
    RECOMP_FLAGS_IN();
    goto L_100A50DA; /* falls through past a gap */
L_100A50D7:
    _st[0] /= _st[6]; /* 0x100A50D7: fdiv st(6) */
    goto L_100A50D9; /* falls through past a gap */
L_100A50D8:
    { int32_t _n = (int16_t)LO16(eax), _d = (int8_t)(HI8(ebx)); /* 0x100A50D8: idiv bh */
      SET_LO16(eax, _d ? (((uint32_t)(_n % _d) & 0xFFu) << 8) | ((uint32_t)(_n / _d) & 0xFFu) : 0u); }
    goto L_100A50DA; /* falls through past a gap */
L_100A50D9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x16A0158)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x16A0158) = MEM32(ebp + 0x16A0158) - 1; /* 0x100A50D9: dec dword ptr [ebp + 0x16a0158] */
    _flag_k = FK_DEC;
    goto L_100A50DF; /* falls through past a gap */
L_100A50DA:
    ebx = eax + 0x1; /* 0x100A50DA: lea ebx, [eax + 1] */
    PUSH32(esp, 1); /* 0x100A50DD: push 1 */
L_100A50DF:
    PUSH32(esp, ebx); /* 0x100A50DF: push ebx */
    RECOMP_CALL(sub_1001CBFF); /* 0x100A50E0: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A50E5: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x100A50E8: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x100A50EB: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x100A50ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5105; /* 0x100A50EF: jne 0x100a5105 */
L_100A50F1:
    RECOMP_CALL(sub_1001177D); /* 0x100A50F1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A50F6: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001177D); /* 0x100A50FC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x100A5101: mov esi, dword ptr [eax] */
    goto L_100A511C; /* 0x100A5103: jmp 0x100a511c */
L_100A5105:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100A5105: push dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x100A5108: push ebx */
    PUSH32(esp, eax); /* 0x100A5109: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x100A510A: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A510F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A5112: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5133; /* 0x100A5114: jne 0x100a5133 */
L_100A5116:
    /* test edi, edi */ /* 0x100A5116: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A511C; /* 0x100A5118: je 0x100a511c */
L_100A511A:
    MEM32(edi) = ebx; /* 0x100A511A: mov dword ptr [edi], ebx */
L_100A511C:
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A511C: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A511F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A5140); /* 0x100A5126: call 0x100a5140 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A512B: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A512D: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5132: ret  */
L_100A5133:
    PUSH32(esp, esi); /* 0x100A5133: push esi */
    PUSH32(esp, esi); /* 0x100A5134: push esi */
    PUSH32(esp, esi); /* 0x100A5135: push esi */
    PUSH32(esp, esi); /* 0x100A5136: push esi */
    PUSH32(esp, esi); /* 0x100A5137: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x100A5138: call 0x100a469b */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x100A513D: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x100A5140: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A5142: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5147: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5148: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5058(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5058u);

L_100A5058:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A5058: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A50B1; /* 0x100A5059: je 0x100a50b1 */
L_100A505C:
    if ((_cf == 0)) goto L_100A50C3; /* 0x100A505C: jae 0x100a50c3 */
L_100A505E:
    if ((_cf != 0)) goto L_100A50AF; /* 0x100A505E: jb 0x100a50af */
L_100A5060:
    void_lift_trap(0x100A5060u, "bound ebp, qword ptr [edx + 0x65]");
    void_lift_trap(0x100A5063u, "arpl word ptr [ecx + ecx*2 + 0x6e], si");
    void_lift_trap(0x100A5067u, "outsw dx, word ptr [esi]");
    if ((_cf != 0)) goto L_100A50D8; /* 0x100A5069: jb 0x100a50d8 */
L_100A506B:
    POPAD(); /* 0x100A506B: popal  */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A50D7; /* 0x100A506C: je 0x100a50d7 */
L_100A506E:
    /* outsd: no port I/O under Win32 */ /* 0x100A506E: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A506F: outsb dx, byte ptr [esi] */
    PUSH32(esp, edi); /* 0x100A5070: push edi */
    _flag_a = (uint32_t)(MEM8(edx + 0x10)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x10) = (uint8_t)(MEM8(edx + 0x10) + HI8(ecx)); /* 0x100A5071: add byte ptr [edx + 0x10], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x100A5150u); /* 0x100A5074: push 0x100a5150 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A5079: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A507E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A5080: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 7); /* 0x100A5083: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A5085: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A508A: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A508B: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A508E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100A5090: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100A5093: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A5095: setne al */
    /* test eax, eax */ /* 0x100A5098: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A50AD; /* 0x100A509A: jne 0x100a50ad */
L_100A509C:
    RECOMP_CALL(sub_1001177D); /* 0x100A509C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A50A1: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A50A3: pop esi */
    MEM32(eax) = esi; /* 0x100A50A4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A50A6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100A511C; /* 0x100A50AB: jmp 0x100a511c */
L_100A50AD:
    MEM32(ecx) = esi; /* 0x100A50AD: mov dword ptr [ecx], esi */
L_100A50AF:
    edi = MEM32(ebp + 0xC); /* 0x100A50AF: mov edi, dword ptr [ebp + 0xc] */
    goto L_100A50B2; /* falls through past a gap */
L_100A50B1:
    _flag_a = (uint32_t)((LO8(eax) | 0x85u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x85u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x85u); /* 0x100A50B1: or al, 0x85 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A50B3; /* falls through past a gap */
L_100A50B2:
    /* test edi, edi */ /* 0x100A50B2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A50B4; /* falls through past a gap */
L_100A50B3:
    PUSH32(esp, MEM32(edx + eax + (-0x77))); /* 0x100A50B3: push dword ptr [edx + eax - 0x77] */
    goto L_100A50B7; /* falls through past a gap */
L_100A50B4:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A50B8; /* 0x100A50B4: je 0x100a50b8 */
L_100A50B6:
    MEM32(edi) = esi; /* 0x100A50B6: mov dword ptr [edi], esi */
    goto L_100A50B8; /* falls through past a gap */
L_100A50B7:
    void_lift_trap(0x100A50B7u, "aaa ");
L_100A50B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A50B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100A50BA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A50BD: setne al */
    /* test eax, eax */ /* 0x100A50C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A509C; /* 0x100A50C2: je 0x100a509c */
    goto L_100A50C4; /* falls through past a gap */
L_100A50C3:
    _st[0] = _st[7] / _st[0]; /* 0x100A50C3: fdivr st(7) */
    goto L_100A50C5; /* falls through past a gap */
L_100A50C4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A50C4: push dword ptr [ebp + 0x10] */
    goto L_100A50C7; /* falls through past a gap */
L_100A50C5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A50D7; /* 0x100A50C5: jne 0x100a50d7 */
L_100A50C7:
    RECOMP_CALL(sub_10017060); /* 0x100A50C7: call 0x10017060 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A50CC: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x100A50CD: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x100A50D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A511C; /* 0x100A50D2: je 0x100a511c */
L_100A50D4:
    PUSH32(esp, eax); /* 0x100A50D4: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A50D5: call 0x100129af */
    RECOMP_FLAGS_IN();
    goto L_100A50DA; /* falls through past a gap */
L_100A50D7:
    _st[0] /= _st[6]; /* 0x100A50D7: fdiv st(6) */
    goto L_100A50D9; /* falls through past a gap */
L_100A50D8:
    { int32_t _n = (int16_t)LO16(eax), _d = (int8_t)(HI8(ebx)); /* 0x100A50D8: idiv bh */
      SET_LO16(eax, _d ? (((uint32_t)(_n % _d) & 0xFFu) << 8) | ((uint32_t)(_n / _d) & 0xFFu) : 0u); }
    goto L_100A50DA; /* falls through past a gap */
L_100A50D9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x16A0158)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x16A0158) = MEM32(ebp + 0x16A0158) - 1; /* 0x100A50D9: dec dword ptr [ebp + 0x16a0158] */
    _flag_k = FK_DEC;
    goto L_100A50DF; /* falls through past a gap */
L_100A50DA:
    ebx = eax + 0x1; /* 0x100A50DA: lea ebx, [eax + 1] */
    PUSH32(esp, 1); /* 0x100A50DD: push 1 */
L_100A50DF:
    PUSH32(esp, ebx); /* 0x100A50DF: push ebx */
    RECOMP_CALL(sub_1001CBFF); /* 0x100A50E0: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A50E5: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x100A50E8: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x100A50EB: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x100A50ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5105; /* 0x100A50EF: jne 0x100a5105 */
L_100A50F1:
    RECOMP_CALL(sub_1001177D); /* 0x100A50F1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A50F6: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001177D); /* 0x100A50FC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x100A5101: mov esi, dword ptr [eax] */
    goto L_100A511C; /* 0x100A5103: jmp 0x100a511c */
L_100A5105:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100A5105: push dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x100A5108: push ebx */
    PUSH32(esp, eax); /* 0x100A5109: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x100A510A: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A510F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A5112: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5133; /* 0x100A5114: jne 0x100a5133 */
L_100A5116:
    /* test edi, edi */ /* 0x100A5116: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A511C; /* 0x100A5118: je 0x100a511c */
L_100A511A:
    MEM32(edi) = ebx; /* 0x100A511A: mov dword ptr [edi], ebx */
L_100A511C:
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A511C: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A511F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A5140); /* 0x100A5126: call 0x100a5140 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A512B: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A512D: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5132: ret  */
L_100A5133:
    PUSH32(esp, esi); /* 0x100A5133: push esi */
    PUSH32(esp, esi); /* 0x100A5134: push esi */
    PUSH32(esp, esi); /* 0x100A5135: push esi */
    PUSH32(esp, esi); /* 0x100A5136: push esi */
    PUSH32(esp, esi); /* 0x100A5137: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x100A5138: call 0x100a469b */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x100A513D: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x100A5140: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A5142: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5147: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5148: ret  */
    RECOMP_REGS_OUT();
}
