#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10082D49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082D49u);

L_10082D49:
    PUSH32(esp, esi); /* 0x10082D49: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x10082D4A: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082D4F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082D50: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082D74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082D74u);

L_10082D74:
    PUSH32(esp, ebp); /* 0x10082D74: push ebp */
    ebp = esp; /* 0x10082D75: mov ebp, esp */
    PUSH32(esp, 1); /* 0x10082D77: push 1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10082D79: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082D7B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10082D88); /* 0x10082D7E: call 0x10082d88 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082D83: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082D86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082D87: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082D88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082D88u);

L_10082D88:
    PUSH32(esp, 0x18u); /* 0x10082D88: push 0x18 */
    PUSH32(esp, 0x10082ED8u); /* 0x10082D8A: push 0x10082ed8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10082D8F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10082D94: mov ecx, dword ptr [ebp + 8] */
    esi = ecx; /* 0x10082D97: mov esi, ecx */
    ebx = ecx; /* 0x10082D99: mov ebx, ecx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x10082D9B: mov dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082D9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x10082DA0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082DA2: setne al */
    /* test eax, eax */ /* 0x10082DA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082DC0; /* 0x10082DA7: jne 0x10082dc0 */
L_10082DA9:
    RECOMP_CALL(sub_1001177D); /* 0x10082DA9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082DAE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10082DB4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10082DB9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082DB9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10082EB8; /* 0x10082DBB: jmp 0x10082eb8 */
L_10082DC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082DC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x10082DC2: mov edi, dword ptr [ebp + 0xc] */
    /* cmp eax, edi */ /* 0x10082DC5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10082DC7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10082DC9: neg eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10082DA9; /* 0x10082DCB: je 0x10082da9 */
L_10082DCD:
    RECOMP_CALL(sub_100142B5); /* 0x10082DCD: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082DD2: push eax */
    PUSH32(esp, 0); /* 0x10082DD3: push 0 */
    RECOMP_CALL(sub_100142FC); /* 0x10082DD5: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082DDA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10082DDB: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10082DDC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100142B5); /* 0x10082DE0: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082DE5: push eax */
    RECOMP_CALL(sub_1001C722); /* 0x10082DE6: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082DEB: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x10082DEC: movzx eax, ax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10082DEF: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFu */ /* 0x10082DF2: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082E07; /* 0x10082DF7: jne 0x10082e07 */
L_10082DF9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10082DF9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10082DFB: mov dword ptr [ebp - 0x20], ebx */
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x10082DFE: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082EAA; /* 0x10082E01: jne 0x10082eaa */
L_10082E07:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x10082E07: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082E3D; /* 0x10082E0A: jne 0x10082e3d */
L_10082E0C:
    /* cmp eax, 0xAu */ /* 0x10082E0C: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082EA5; /* 0x10082E0F: je 0x10082ea5 */
L_10082E15:
    /* cmp eax, 0xFFFFu */ /* 0x10082E15: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082EA5; /* 0x10082E1A: je 0x10082ea5 */
L_10082E20:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10082E20: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10082E23: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = esi; /* 0x10082E26: mov dword ptr [ebp - 0x28], esi */
    RECOMP_CALL(sub_100142B5); /* 0x10082E29: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082E2E: push eax */
    RECOMP_CALL(sub_1001C722); /* 0x10082E2F: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082E34: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x10082E35: movzx eax, ax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10082E38: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_BACKEDGE();
    goto L_10082E0C; /* 0x10082E3B: jmp 0x10082e0c */
L_10082E3D:
    MEM32(ebp + (-0x24)) = edi; /* 0x10082E3D: mov dword ptr [ebp - 0x24], edi */
L_10082E40:
    /* cmp eax, 0xAu */ /* 0x10082E40: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082E71; /* 0x10082E43: je 0x10082e71 */
L_10082E45:
    /* cmp eax, 0xFFFFu */ /* 0x10082E45: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082E71; /* 0x10082E4A: je 0x10082e71 */
L_10082E4C:
    /* test edi, edi */ /* 0x10082E4C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082E5D; /* 0x10082E4E: je 0x10082e5d */
L_10082E50:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10082E50: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = edi; /* 0x10082E51: mov dword ptr [ebp - 0x24], edi */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10082E54: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10082E57: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = esi; /* 0x10082E5A: mov dword ptr [ebp - 0x28], esi */
L_10082E5D:
    RECOMP_CALL(sub_100142B5); /* 0x10082E5D: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082E62: push eax */
    RECOMP_CALL(sub_1001C722); /* 0x10082E63: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082E68: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x10082E69: movzx eax, ax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10082E6C: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_BACKEDGE();
    goto L_10082E40; /* 0x10082E6F: jmp 0x10082e40 */
L_10082E71:
    /* test edi, edi */ /* 0x10082E71: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082EA5; /* 0x10082E73: jne 0x10082ea5 */
L_10082E75:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10082E75: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10082E77: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x10082E7A: mov word ptr [eax], cx */
    RECOMP_CALL(sub_1001177D); /* 0x10082E7D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x10082E82: mov dword ptr [eax], 0x22 */
    RECOMP_CALL(sub_100A4670); /* 0x10082E88: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10082E8D: push -2 */
    eax = ebp + (-0x10); /* 0x10082E8F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10082E92: push eax */
    PUSH32(esp, 0x100DF7B8u); /* 0x10082E93: push 0x100df7b8 */
    RECOMP_CALL(sub_100321EE); /* 0x10082E98: call 0x100321ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082E9D: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10082DB9; /* 0x10082EA0: jmp 0x10082db9 */
L_10082EA5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082EA5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10082EA7: mov word ptr [esi], ax */
L_10082EAA:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10082EAA: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10082EC1); /* 0x10082EB1: call 0x10082ec1 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x10082EB6: mov eax, ebx */
L_10082EB8:
    RECOMP_CALL(sub_1000EDC3); /* 0x10082EB8: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082EBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082EC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082EC1u);

L_10082EC1:
    RECOMP_CALL(sub_100142B5); /* 0x10082EC1: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082EC6: push eax */
    PUSH32(esp, 0); /* 0x10082EC7: push 0 */
    RECOMP_CALL(sub_10020611); /* 0x10082EC9: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082ECE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10082ECF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082ED0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082EF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082EF4u);

L_10082EF4:
    PUSH32(esp, ebp); /* 0x10082EF4: push ebp */
    ebp = esp; /* 0x10082EF5: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10082EF7: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082EF9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082EFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10082D88); /* 0x10082EFF: call 0x10082d88 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082F04: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082F07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082F08: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082F09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082F09u);

L_10082F09:
    eax = MEM32(0x100E0038); /* 0x10082F09: mov eax, dword ptr [0x100e0038] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082F0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082F0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082F0Fu);

L_10082F0F:
    PUSH32(esp, ebp); /* 0x10082F0F: push ebp */
    ebp = esp; /* 0x10082F10: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10082F12: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10082F15: push esi */
    esi = MEM32(0x100E0038); /* 0x10082F16: mov esi, dword ptr [0x100e0038] */
    /* test ecx, 0xFFFFFFFEu */ /* 0x10082F1C: test ecx, 0xfffffffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082F36; /* 0x10082F22: je 0x10082f36 */
L_10082F24:
    RECOMP_CALL(sub_1001177D); /* 0x10082F24: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082F29: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10082F2F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10082F3C; /* 0x10082F34: jmp 0x10082f3c */
L_10082F36:
    MEM32(0x100E0038) = ecx; /* 0x10082F36: mov dword ptr [0x100e0038], ecx */
L_10082F3C:
    eax = esi; /* 0x10082F3C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10082F3E: pop esi */
    ebp = POP32_VAL(esp); /* 0x10082F3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082F40: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082F41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082F41u);

L_10082F41:
    ecx = MEM32(0x100DF7B8); /* 0x10082F41: mov ecx, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082F47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x10082F49: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E3CC0), ecx */ /* 0x10082F4C: cmp dword ptr [0x100e3cc0], ecx */
    _flag_a = (uint32_t)(MEM32(0x100E3CC0)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082F52: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082F55: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082F56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082F56u);

L_10082F56:
    PUSH32(esp, ebp); /* 0x10082F56: push ebp */
    ebp = esp; /* 0x10082F57: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10082F59: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10082F5C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082F5D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082F60: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100845FC); /* 0x10082F63: call 0x100845fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082F68: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082F6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082F6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082F6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082F6Du);

L_10082F6D:
    PUSH32(esp, ebp); /* 0x10082F6D: push ebp */
    ebp = esp; /* 0x10082F6E: mov ebp, esp */
    eax = ebp + 0xC; /* 0x10082F70: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10082F73: push eax */
    PUSH32(esp, 0); /* 0x10082F74: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082F76: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084631); /* 0x10082F79: call 0x10084631 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082F7E: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082F81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082F82: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082F83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082F83u);

L_10082F83:
    PUSH32(esp, ebp); /* 0x10082F83: push ebp */
    ebp = esp; /* 0x10082F84: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10082F86: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10082F89: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082F8A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082F8D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084631); /* 0x10082F90: call 0x10084631 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082F95: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082F98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082F99: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082F9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082F9Au);

L_10082F9A:
    PUSH32(esp, ebp); /* 0x10082F9A: push ebp */
    ebp = esp; /* 0x10082F9B: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10082F9D: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10082FA0: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082FA1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082FA4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008464C); /* 0x10082FA7: call 0x1008464c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082FAC: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082FAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082FB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082FB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082FB1u);

L_10082FB1:
    PUSH32(esp, ebp); /* 0x10082FB1: push ebp */
    ebp = esp; /* 0x10082FB2: mov ebp, esp */
    edx = MEM32(0x100DF7B8); /* 0x10082FB4: mov edx, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082FBA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10082FBC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 1)); _flag_b = (uint32_t)((edx | 1));
    edx = edx | 1; /* 0x10082FBF: or edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E3CC0), edx */ /* 0x10082FC2: cmp dword ptr [0x100e3cc0], edx */
    _flag_a = (uint32_t)(MEM32(0x100E3CC0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082FC8: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10082FCB: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10082FCD: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x10082FCF: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E3CC0) = ecx; /* 0x10082FD1: mov dword ptr [0x100e3cc0], ecx */
    ebp = POP32_VAL(esp); /* 0x10082FD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082FD8: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082FD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082FD9u);

L_10082FD9:
    PUSH32(esp, 0xCu); /* 0x10082FD9: push 0xc */
    PUSH32(esp, 0x10083088u); /* 0x10082FDB: push 0x10083088 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10082FE0: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10082FE5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x10082FE7: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082FEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x10082FEC: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082FEF: setne al */
    /* test eax, eax */ /* 0x10082FF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008300B; /* 0x10082FF4: jne 0x1008300b */
L_10082FF6:
    RECOMP_CALL(sub_1001177D); /* 0x10082FF6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082FFB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10083001: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10083006: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008306C; /* 0x10083009: jmp 0x1008306c */
L_1008300B:
    RECOMP_CALL(sub_100142B5); /* 0x1008300B: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10083010: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10083013: push eax */
    PUSH32(esp, 1); /* 0x10083014: push 1 */
    RECOMP_CALL(sub_100142FC); /* 0x10083016: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008301B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008301C: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1008301D: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_100142B5); /* 0x10083020: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10083025: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10083028: push eax */
    RECOMP_CALL(sub_10020477); /* 0x10083029: call 0x10020477 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008302E: pop ecx */
    esi = eax; /* 0x1008302F: mov esi, eax */
    eax = ebp + 0xC; /* 0x10083031: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10083034: push eax */
    PUSH32(esp, edi); /* 0x10083035: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083036: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100142B5); /* 0x10083039: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1008303E: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10083041: push eax */
    RECOMP_CALL(sub_10016C0F); /* 0x10083042: call 0x10016c0f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10083047: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10083049: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_CALL(sub_100142B5); /* 0x1008304C: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10083051: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10083054: push eax */
    PUSH32(esp, esi); /* 0x10083055: push esi */
    RECOMP_CALL(sub_100204F6); /* 0x10083056: call 0x100204f6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008305B: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1008305E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10083075); /* 0x10083065: call 0x10083075 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1008306A: mov eax, edi */
L_1008306C:
    RECOMP_CALL(sub_1000EDC3); /* 0x1008306C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083071: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083075(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083075u);

L_10083075:
    RECOMP_CALL(sub_100142B5); /* 0x10083075: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1008307A: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1008307D: push eax */
    PUSH32(esp, 1); /* 0x1008307E: push 1 */
    RECOMP_CALL(sub_10020611); /* 0x10083080: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083085: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083086: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083087: ret  */
    RECOMP_REGS_OUT();
}

void sub_100830A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100830A4u);

L_100830A4:
    PUSH32(esp, ebp); /* 0x100830A4: push ebp */
    ebp = esp; /* 0x100830A5: mov ebp, esp */
    eax = ebp + 0xC; /* 0x100830A7: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100830AA: push eax */
    PUSH32(esp, 0); /* 0x100830AB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100830AD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008464C); /* 0x100830B0: call 0x1008464c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100830B5: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100830B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100830B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100830BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100830BAu);

L_100830BA:
    PUSH32(esp, 0x10u); /* 0x100830BA: push 0x10 */
    PUSH32(esp, 0x10083210u); /* 0x100830BC: push 0x10083210 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100830C1: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100830C6: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100830C9: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100830CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x100830CE: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100830D1: setne al */
    /* test eax, eax */ /* 0x100830D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100830F0; /* 0x100830D6: jne 0x100830f0 */
L_100830D8:
    RECOMP_CALL(sub_1001177D); /* 0x100830D8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100830DD: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100830E3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100830E8:
    eax = edi; /* 0x100830E8: mov eax, edi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100830EA: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100830EF: ret  */
L_100830F0:
    RECOMP_CALL(sub_100142B5); /* 0x100830F0: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100830F5: add eax, 0x20 */
    _flag_k = FK_ADD;
    /* test MEM8(eax + 0xC), 0x40u */ /* 0x100830F8: test byte ptr [eax + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083157; /* 0x100830FC: jne 0x10083157 */
L_100830FE:
    PUSH32(esp, eax); /* 0x100830FE: push eax */
    RECOMP_CALL(sub_1001427C); /* 0x100830FF: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083104: pop ecx */
    edx = eax; /* 0x10083105: mov edx, eax */
    /* cmp edx, edi */ /* 0x10083107: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083124; /* 0x10083109: je 0x10083124 */
L_1008310B:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x1008310B: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083124; /* 0x1008310E: je 0x10083124 */
L_10083110:
    ecx = edx; /* 0x10083110: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x10083112: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x10083115: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x10083118: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x10083118: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x100DF640); /* 0x1008311B: add eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10083129; /* 0x10083122: jmp 0x10083129 */
L_10083124:
    eax = 0x100DF520u; /* 0x10083124: mov eax, 0x100df520 */
L_10083129:
    /* test MEM8(eax + 0x24), 0x7Fu */ /* 0x10083129: test byte ptr [eax + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100830D8; /* 0x1008312D: jne 0x100830d8 */
L_1008312F:
    /* cmp edx, edi */ /* 0x1008312F: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008314C; /* 0x10083131: je 0x1008314c */
L_10083133:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x10083133: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008314C; /* 0x10083136: je 0x1008314c */
L_10083138:
    eax = edx; /* 0x10083138: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1008313A: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1008313D: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10083140: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10083140: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x10083143: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10083151; /* 0x1008314A: jmp 0x10083151 */
L_1008314C:
    edx = 0x100DF520u; /* 0x1008314C: mov edx, 0x100df520 */
L_10083151:
    /* test MEM8(edx + 0x24), 0x80u */ /* 0x10083151: test byte ptr [edx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100830D8; /* 0x10083155: jne 0x100830d8 */
L_10083157:
    RECOMP_CALL(sub_100142B5); /* 0x10083157: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1008315C: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1008315F: push eax */
    PUSH32(esp, 1); /* 0x10083160: push 1 */
    RECOMP_CALL(sub_100142FC); /* 0x10083162: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083167: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083168: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10083169: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100142B5); /* 0x1008316D: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10083172: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10083175: push eax */
    RECOMP_CALL(sub_10020477); /* 0x10083176: call 0x10020477 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x1008317B: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008317E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100129AF); /* 0x10083181: call 0x100129af */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10083186: mov esi, eax */
    RECOMP_CALL(sub_100142B5); /* 0x10083188: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1008318D: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10083190: push eax */
    PUSH32(esp, esi); /* 0x10083191: push esi */
    PUSH32(esp, 1); /* 0x10083192: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083194: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10020891); /* 0x10083197: call 0x10020891 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008319C: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x1008319F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100831D5; /* 0x100831A1: jne 0x100831d5 */
L_100831A3:
    RECOMP_CALL(sub_100142B5); /* 0x100831A3: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) - 1; /* 0x100831A8: dec dword ptr [eax + 0x24] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100831BE; /* 0x100831AB: js 0x100831be */
L_100831AD:
    RECOMP_CALL(sub_100142B5); /* 0x100831AD: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    ecx = eax + 0x20; /* 0x100831B2: lea ecx, [eax + 0x20] */
    eax = MEM32(ecx); /* 0x100831B5: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xAu); /* 0x100831B7: mov byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x100831BA: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    goto L_100831D0; /* 0x100831BC: jmp 0x100831d0 */
L_100831BE:
    RECOMP_CALL(sub_100142B5); /* 0x100831BE: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100831C3: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100831C6: push eax */
    PUSH32(esp, 0xAu); /* 0x100831C7: push 0xa */
    RECOMP_CALL(sub_1002C35B); /* 0x100831C9: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100831CE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100831CF: pop ecx */
L_100831D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100831D0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100831D2: mov dword ptr [ebp - 0x1c], edi */
L_100831D5:
    RECOMP_CALL(sub_100142B5); /* 0x100831D5: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100831DA: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100831DD: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100831DE: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_100204F6); /* 0x100831E1: call 0x100204f6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100831E6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100831E7: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100831E8: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100831FC); /* 0x100831EF: call 0x100831fc */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100830E8; /* 0x100831F4: jmp 0x100830e8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100831FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100831FCu);

L_100831FC:
    RECOMP_CALL(sub_100142B5); /* 0x100831FC: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10083201: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10083204: push eax */
    PUSH32(esp, 1); /* 0x10083205: push 1 */
    RECOMP_CALL(sub_10020611); /* 0x10083207: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008320C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008320D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008320E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008322C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008322Cu);

L_1008322C:
    PUSH32(esp, 0x14u); /* 0x1008322C: push 0x14 */
    PUSH32(esp, 0x100832D8u); /* 0x1008322E: push 0x100832d8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10083233: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x10083238: push 4 */
    ebx = POP32_VAL(esp); /* 0x1008323A: pop ebx */
    edi = ebp + 0x8; /* 0x1008323B: lea edi, [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1008323E: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10083242: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0xC); /* 0x10083244: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x10083247: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10083249: setne al */
    /* test eax, eax */ /* 0x1008324C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083265; /* 0x1008324E: jne 0x10083265 */
L_10083250:
    RECOMP_CALL(sub_1001177D); /* 0x10083250: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10083255: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008325B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10083260: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100832C2; /* 0x10083263: jmp 0x100832c2 */
L_10083265:
    MEM32(ebp + 0xC) = esi; /* 0x10083265: mov dword ptr [ebp + 0xc], esi */
    PUSH32(esp, esi); /* 0x10083268: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10083269: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008326E: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1008326F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10083273:
    eax = ebx; /* 0x10083273: mov eax, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10083275: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10083276: mov dword ptr [ebp - 0x20], ebx */
    /* test eax, eax */ /* 0x10083279: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008329E; /* 0x1008327B: je 0x1008329e */
L_1008327D:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x1008327D: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1008328C; /* 0x10083280: js 0x1008328c */
L_10083282:
    SET_LO8(ecx, MEM8(edi)); /* 0x10083282: mov cl, byte ptr [edi] */
    eax = MEM32(esi); /* 0x10083284: mov eax, dword ptr [esi] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x10083286: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x10083288: inc dword ptr [esi] */
    _flag_k = FK_INC;
    goto L_10083298; /* 0x1008328A: jmp 0x10083298 */
L_1008328C:
    PUSH32(esp, esi); /* 0x1008328C: push esi */
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x1008328D: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x10083290: push eax */
    RECOMP_CALL(sub_1002C35B); /* 0x10083291: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083296: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083297: pop ecx */
L_10083298:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10083298: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = edi; /* 0x10083299: mov dword ptr [ebp - 0x24], edi */
    RECOMP_BACKEDGE();
    goto L_10083273; /* 0x1008329C: jmp 0x10083273 */
L_1008329E:
    PUSH32(esp, esi); /* 0x1008329E: push esi */
    RECOMP_CALL(sub_10081477); /* 0x1008329F: call 0x10081477 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100832A4: pop ecx */
    /* test eax, eax */ /* 0x100832A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100832AE; /* 0x100832A7: je 0x100832ae */
L_100832A9:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100832A9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100832B1; /* 0x100832AC: jmp 0x100832b1 */
L_100832AE:
    edi = MEM32(ebp + 0x8); /* 0x100832AE: mov edi, dword ptr [ebp + 8] */
L_100832B1:
    MEM32(ebp + (-0x1C)) = edi; /* 0x100832B1: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100832B4: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100832CE); /* 0x100832BB: call 0x100832ce */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100832C0: mov eax, edi */
L_100832C2:
    RECOMP_CALL(sub_1000EDC3); /* 0x100832C2: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100832C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100832CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100832CEu);

L_100832CE:
    PUSH32(esp, esi); /* 0x100832CE: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x100832CF: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100832D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100832D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100832F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100832F4u);

L_100832F4:
    PUSH32(esp, ebp); /* 0x100832F4: push ebp */
    ebp = esp; /* 0x100832F5: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100832F7: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100832FA: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100832FB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100832FE: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x10083301: push 0x1001b879 */
    RECOMP_CALL(sub_10085424); /* 0x10083306: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008330B: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008330E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008330F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083310u);

L_10083310:
    PUSH32(esp, ebp); /* 0x10083310: push ebp */
    ebp = esp; /* 0x10083311: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10083313: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10083316: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083317: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008331A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x1008331D: push 0x1002ea80 */
    RECOMP_CALL(sub_10085424); /* 0x10083322: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083327: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008332A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008332B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008332C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008332Cu);

L_1008332C:
    PUSH32(esp, ebp); /* 0x1008332C: push ebp */
    ebp = esp; /* 0x1008332D: mov ebp, esp */
    eax = ebp + 0xC; /* 0x1008332F: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10083332: push eax */
    PUSH32(esp, 0); /* 0x10083333: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083335: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x10083338: push 0x1001b879 */
    RECOMP_CALL(sub_10085424); /* 0x1008333D: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083342: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083345: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083346: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083347(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083347u);

L_10083347:
    PUSH32(esp, ebp); /* 0x10083347: push ebp */
    ebp = esp; /* 0x10083348: mov ebp, esp */
    eax = ebp + 0xC; /* 0x1008334A: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1008334D: push eax */
    PUSH32(esp, 0); /* 0x1008334E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083350: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x10083353: push 0x1002ea80 */
    RECOMP_CALL(sub_10085424); /* 0x10083358: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008335D: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083360: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083361: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083362(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083362u);

L_10083362:
    PUSH32(esp, ebp); /* 0x10083362: push ebp */
    ebp = esp; /* 0x10083363: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083365: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10083368: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008336A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x1008336D: push 0x1001b879 */
    RECOMP_CALL(sub_10085424); /* 0x10083372: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083377: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008337A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008337B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008337C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008337Cu);

L_1008337C:
    PUSH32(esp, ebp); /* 0x1008337C: push ebp */
    ebp = esp; /* 0x1008337D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008337F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10083382: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083384: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x10083387: push 0x1002ea80 */
    RECOMP_CALL(sub_10085424); /* 0x1008338C: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083391: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083394: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083395: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083396(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083396u);

L_10083396:
    eax = MEM32(0x100DFDF0); /* 0x10083396: mov eax, dword ptr [0x100dfdf0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008339B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008339C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008339Cu);

L_1008339C:
    PUSH32(esp, 0x10u); /* 0x1008339C: push 0x10 */
    PUSH32(esp, 0x100834A0u); /* 0x1008339E: push 0x100834a0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100833A3: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100833A8: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x100833AC: mov esi, dword ptr [ebp + 8] */
    eax = esi + (-0x14); /* 0x100833AF: lea eax, [esi - 0x14] */
    /* cmp eax, 0x7ECu */ /* 0x100833B2: cmp eax, 0x7ec */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7ECu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100833D1; /* 0x100833B7: jbe 0x100833d1 */
L_100833B9:
    RECOMP_CALL(sub_1001177D); /* 0x100833B9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100833BE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100833C4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100833C9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10083488; /* 0x100833CC: jmp 0x10083488 */
L_100833D1:
    PUSH32(esp, 1); /* 0x100833D1: push 1 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100833D3: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100833D8: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100833D9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(0x100DFDF0); /* 0x100833DD: mov edi, dword ptr [0x100dfdf0] */
    /* cmp esi, edi */ /* 0x100833E3: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008341B; /* 0x100833E5: jle 0x1008341b */
L_100833E7:
    PUSH32(esp, 4); /* 0x100833E7: push 4 */
    PUSH32(esp, esi); /* 0x100833E9: push esi */
    PUSH32(esp, MEM32(0x100DFDF8)); /* 0x100833EA: push dword ptr [0x100dfdf8] */
    RECOMP_CALL(sub_100A02C4); /* 0x100833F0: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100833F5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100833F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083474; /* 0x100833FA: je 0x10083474 */
L_100833FC:
    ecx = MEM32(0x100DFDF0); /* 0x100833FC: mov ecx, dword ptr [0x100dfdf0] */
L_10083402:
    MEM32(ebp + (-0x20)) = ecx; /* 0x10083402: mov dword ptr [ebp - 0x20], ecx */
    /* cmp ecx, esi */ /* 0x10083405: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10083410; /* 0x10083407: jge 0x10083410 */
L_10083409:
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) & 0; /* 0x10083409: and dword ptr [eax + ecx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008340D: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10083402; /* 0x1008340E: jmp 0x10083402 */
L_10083410:
    MEM32(0x100DFDF0) = esi; /* 0x10083410: mov dword ptr [0x100dfdf0], esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10083416: mov dword ptr [ebp - 0x1c], esi */
    goto L_1008346D; /* 0x10083419: jmp 0x1008346d */
L_1008341B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10083421; /* 0x1008341B: jne 0x10083421 */
L_1008341D:
    esi = edi; /* 0x1008341D: mov esi, edi */
    goto L_10083477; /* 0x1008341F: jmp 0x10083477 */
L_10083421:
    MEM32(ebp + (-0x1C)) = esi; /* 0x10083421: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10083424: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = edi; /* 0x10083425: mov dword ptr [ebp - 0x20], edi */
    ecx = MEM32(0x100DFDF8); /* 0x10083428: mov ecx, dword ptr [0x100dfdf8] */
L_1008342E:
    /* cmp edi, esi */ /* 0x1008342E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10083452; /* 0x10083430: jl 0x10083452 */
L_10083432:
    eax = MEM32(ecx + edi * 4); /* 0x10083432: mov eax, dword ptr [ecx + edi*4] */
    /* test eax, eax */ /* 0x10083435: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008344C; /* 0x10083437: je 0x1008344c */
L_10083439:
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x10083439: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083474; /* 0x1008343D: jne 0x10083474 */
L_1008343F:
    PUSH32(esp, eax); /* 0x1008343F: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10083440: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083445: pop ecx */
    ecx = MEM32(0x100DFDF8); /* 0x10083446: mov ecx, dword ptr [0x100dfdf8] */
L_1008344C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008344C: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = edi; /* 0x1008344D: mov dword ptr [ebp - 0x20], edi */
    RECOMP_BACKEDGE();
    goto L_1008342E; /* 0x10083450: jmp 0x1008342e */
L_10083452:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10083452: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008347A; /* 0x10083455: je 0x1008347a */
L_10083457:
    PUSH32(esp, 4); /* 0x10083457: push 4 */
    PUSH32(esp, esi); /* 0x10083459: push esi */
    PUSH32(esp, ecx); /* 0x1008345A: push ecx */
    RECOMP_CALL(sub_100A02C4); /* 0x1008345B: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10083460: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10083463: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083474; /* 0x10083465: je 0x10083474 */
L_10083467:
    MEM32(0x100DFDF0) = esi; /* 0x10083467: mov dword ptr [0x100dfdf0], esi */
L_1008346D:
    MEM32(0x100DFDF8) = eax; /* 0x1008346D: mov dword ptr [0x100dfdf8], eax */
    goto L_1008347A; /* 0x10083472: jmp 0x1008347a */
L_10083474:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10083474: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10083477:
    MEM32(ebp + (-0x1C)) = esi; /* 0x10083477: mov dword ptr [ebp - 0x1c], esi */
L_1008347A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1008347A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10083491); /* 0x10083481: call 0x10083491 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10083486: mov eax, esi */
L_10083488:
    RECOMP_CALL(sub_1000EDC3); /* 0x10083488: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008348D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083491(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083491u);

L_10083491:
    PUSH32(esp, 1); /* 0x10083491: push 1 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10083493: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083498: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083499: ret  */
    RECOMP_REGS_OUT();
}

void sub_100834BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100834BCu);

L_100834BC:
    PUSH32(esp, ebp); /* 0x100834BC: push ebp */
    ebp = esp; /* 0x100834BD: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100834BF: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100834CD; /* 0x100834C3: jne 0x100834cd */
L_100834C5:
    PUSH32(esp, 0); /* 0x100834C5: push 0 */
    PUSH32(esp, 4); /* 0x100834C7: push 4 */
    PUSH32(esp, 0); /* 0x100834C9: push 0 */
    goto L_100834D7; /* 0x100834CB: jmp 0x100834d7 */
L_100834CD:
    PUSH32(esp, 0x200u); /* 0x100834CD: push 0x200 */
    PUSH32(esp, 0); /* 0x100834D2: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100834D4: push dword ptr [ebp + 0xc] */
L_100834D7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100834D7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002FCDA); /* 0x100834DA: call 0x1002fcda */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100834DF: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100834E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100834E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100834E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100834E4u);

L_100834E4:
    PUSH32(esp, ebp); /* 0x100834E4: push ebp */
    ebp = esp; /* 0x100834E5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100834E7: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100834EA: push ebx */
    PUSH32(esp, edi); /* 0x100834EB: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100834EC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x100834EE: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x100834F1: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100834F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x100834F5: mov dword ptr [ebp - 0x20], ebx */
    ecx = POP32_VAL(esp); /* 0x100834F8: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x100834F9: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100834FB: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10083515; /* 0x100834FE: jne 0x10083515 */
L_10083500:
    RECOMP_CALL(sub_1001177D); /* 0x10083500: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10083505: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008350B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10083510: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008358A; /* 0x10083513: jmp 0x1008358a */
L_10083515:
    eax = MEM32(ebp + 0xC); /* 0x10083515: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10083518: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10083519: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1008351C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083539; /* 0x1008351E: je 0x10083539 */
L_10083520:
    /* test esi, esi */ /* 0x10083520: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083539; /* 0x10083522: jne 0x10083539 */
L_10083524:
    RECOMP_CALL(sub_1001177D); /* 0x10083524: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10083529: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008352F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10083534: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10083589; /* 0x10083537: jmp 0x10083589 */
L_10083539:
    ecx = 0x7FFFFFFFu; /* 0x10083539: mov ecx, 0x7fffffff */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1008353E: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x10083541: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10083548; /* 0x10083543: ja 0x10083548 */
L_10083545:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10083545: mov dword ptr [ebp - 0x1c], eax */
L_10083548:
    eax = ebp + 0x14; /* 0x10083548: lea eax, [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x1008354B: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x10083552: push eax */
    PUSH32(esp, ebx); /* 0x10083553: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083554: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x10083557: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x18)) = esi; /* 0x1008355A: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, eax); /* 0x1008355D: push eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x1008355E: mov dword ptr [ebp - 0x20], esi */
    RECOMP_CALL(sub_10016C0F); /* 0x10083561: call 0x10016c0f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083566: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x10083569: mov edi, eax */
    /* test esi, esi */ /* 0x1008356B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083589; /* 0x1008356D: je 0x10083589 */
L_1008356F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x1008356F: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1008357B; /* 0x10083572: js 0x1008357b */
L_10083574:
    eax = MEM32(ebp + (-0x20)); /* 0x10083574: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10083577: mov byte ptr [eax], bl */
    goto L_10083587; /* 0x10083579: jmp 0x10083587 */
L_1008357B:
    eax = ebp + (-0x20); /* 0x1008357B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008357E: push eax */
    PUSH32(esp, ebx); /* 0x1008357F: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10083580: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083585: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083586: pop ecx */
L_10083587:
    eax = edi; /* 0x10083587: mov eax, edi */
L_10083589:
    esi = POP32_VAL(esp); /* 0x10083589: pop esi */
L_1008358A:
    edi = POP32_VAL(esp); /* 0x1008358A: pop edi */
    ebx = POP32_VAL(esp); /* 0x1008358B: pop ebx */
    esp = ebp; /* 0x1008358C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008358E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008358F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083590u);

L_10083590:
    PUSH32(esp, ebp); /* 0x10083590: push ebp */
    ebp = esp; /* 0x10083591: mov ebp, esp */
    eax = ebp + 0x18; /* 0x10083593: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10083596: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083597: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008359A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008359D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100835A0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084A2E); /* 0x100835A3: call 0x10084a2e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100835A8: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100835AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100835AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100835AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100835ADu);

L_100835AD:
    PUSH32(esp, ebp); /* 0x100835AD: push ebp */
    ebp = esp; /* 0x100835AE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100835B0: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100835B3: push ebx */
    PUSH32(esp, edi); /* 0x100835B4: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100835B5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x100835B7: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x100835BA: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100835BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x100835BE: mov dword ptr [ebp - 0x20], ebx */
    ecx = POP32_VAL(esp); /* 0x100835C1: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x100835C2: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100835C4: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100835E1; /* 0x100835C7: jne 0x100835e1 */
L_100835C9:
    RECOMP_CALL(sub_1001177D); /* 0x100835C9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100835CE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100835D4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100835D9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10083663; /* 0x100835DC: jmp 0x10083663 */
L_100835E1:
    eax = MEM32(ebp + 0xC); /* 0x100835E1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100835E4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100835E5: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100835E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083602; /* 0x100835EA: je 0x10083602 */
L_100835EC:
    /* test esi, esi */ /* 0x100835EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083602; /* 0x100835EE: jne 0x10083602 */
L_100835F0:
    RECOMP_CALL(sub_1001177D); /* 0x100835F0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100835F5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100835FB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008365F; /* 0x10083600: jmp 0x1008365f */
L_10083602:
    ecx = 0x7FFFFFFFu; /* 0x10083602: mov ecx, 0x7fffffff */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10083607: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x1008360A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10083611; /* 0x1008360C: ja 0x10083611 */
L_1008360E:
    MEM32(ebp + (-0x1C)) = eax; /* 0x1008360E: mov dword ptr [ebp - 0x1c], eax */
L_10083611:
    eax = ebp + 0x14; /* 0x10083611: lea eax, [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10083614: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x1008361B: push eax */
    PUSH32(esp, ebx); /* 0x1008361C: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008361D: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x10083620: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x18)) = esi; /* 0x10083623: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, eax); /* 0x10083626: push eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x10083627: mov dword ptr [ebp - 0x20], esi */
    RECOMP_CALL(sub_10016C0F); /* 0x1008362A: call 0x10016c0f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008362F: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x10083632: mov edi, eax */
    /* test esi, esi */ /* 0x10083634: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083662; /* 0x10083636: je 0x10083662 */
L_10083638:
    /* test edi, edi */ /* 0x10083638: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008365D; /* 0x1008363A: js 0x1008365d */
L_1008363C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x1008363C: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10083648; /* 0x1008363F: js 0x10083648 */
L_10083641:
    eax = MEM32(ebp + (-0x20)); /* 0x10083641: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10083644: mov byte ptr [eax], bl */
    goto L_10083659; /* 0x10083646: jmp 0x10083659 */
L_10083648:
    eax = ebp + (-0x20); /* 0x10083648: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008364B: push eax */
    PUSH32(esp, ebx); /* 0x1008364C: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x1008364D: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083652: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083653: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10083654: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008365D; /* 0x10083657: je 0x1008365d */
L_10083659:
    eax = edi; /* 0x10083659: mov eax, edi */
    goto L_10083662; /* 0x1008365B: jmp 0x10083662 */
L_1008365D:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008365D: mov byte ptr [esi], bl */
L_1008365F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008365F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10083662:
    esi = POP32_VAL(esp); /* 0x10083662: pop esi */
L_10083663:
    edi = POP32_VAL(esp); /* 0x10083663: pop edi */
    ebx = POP32_VAL(esp); /* 0x10083664: pop ebx */
    esp = ebp; /* 0x10083665: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10083667: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083668: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083669(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083669u);

L_10083669:
    PUSH32(esp, ebp); /* 0x10083669: push ebp */
    ebp = esp; /* 0x1008366A: mov ebp, esp */
    eax = ebp + 0x18; /* 0x1008366C: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x1008366F: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083670: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083673: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083676: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083679: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084B01); /* 0x1008367C: call 0x10084b01 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083681: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083684: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083685: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083686(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083686u);

L_10083686:
    PUSH32(esp, ebp); /* 0x10083686: push ebp */
    ebp = esp; /* 0x10083687: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10083689: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1008368C: push eax */
    PUSH32(esp, 0); /* 0x1008368D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008368F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083692: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083695: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x10083698: push 0x1001b879 */
    RECOMP_CALL(sub_1008370C); /* 0x1008369D: call 0x1008370c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100836A2: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100836A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100836A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100836A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100836A7u);

L_100836A7:
    PUSH32(esp, ebp); /* 0x100836A7: push ebp */
    ebp = esp; /* 0x100836A8: mov ebp, esp */
    eax = ebp + 0x18; /* 0x100836AA: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x100836AD: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100836AE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100836B1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100836B4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100836B7: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x100836BA: push 0x1001b879 */
    RECOMP_CALL(sub_1008370C); /* 0x100836BF: call 0x1008370c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100836C4: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100836C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100836C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100836C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100836C9u);

L_100836C9:
    PUSH32(esp, ebp); /* 0x100836C9: push ebp */
    ebp = esp; /* 0x100836CA: mov ebp, esp */
    eax = ebp + 0x14; /* 0x100836CC: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100836CF: push eax */
    PUSH32(esp, 0); /* 0x100836D0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100836D2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100836D5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100836D8: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x100836DB: push 0x1002ea80 */
    RECOMP_CALL(sub_1008370C); /* 0x100836E0: call 0x1008370c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100836E5: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100836E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100836E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100836EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100836EAu);

L_100836EA:
    PUSH32(esp, ebp); /* 0x100836EA: push ebp */
    ebp = esp; /* 0x100836EB: mov ebp, esp */
    eax = ebp + 0x18; /* 0x100836ED: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x100836F0: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100836F1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100836F4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100836F7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100836FA: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x100836FD: push 0x1002ea80 */
    RECOMP_CALL(sub_1008370C); /* 0x10083702: call 0x1008370c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10083707: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008370A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008370B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008370C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008370Cu);

L_1008370C:
    PUSH32(esp, ebp); /* 0x1008370C: push ebp */
    ebp = esp; /* 0x1008370D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1008370F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10083712: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10083716: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10083718: push edi */
    PUSH32(esp, 7); /* 0x10083719: push 7 */
    ecx = POP32_VAL(esp); /* 0x1008371B: pop ecx */
    edi = ebp + (-0x1C); /* 0x1008371C: lea edi, [ebp - 0x1c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1008371F: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0xC); /* 0x10083721: mov eax, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x10083724: pop edi */
    /* test eax, eax */ /* 0x10083725: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008373E; /* 0x10083727: jne 0x1008373e */
L_10083729:
    RECOMP_CALL(sub_1001177D); /* 0x10083729: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008372E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10083734: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10083739: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10083776; /* 0x1008373C: jmp 0x10083776 */
L_1008373E:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1008373E: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083729; /* 0x10083742: je 0x10083729 */
L_10083744:
    ecx = 0x7FFFFFFFu; /* 0x10083744: mov ecx, 0x7fffffff */
    MEM32(ebp + (-0x18)) = eax; /* 0x10083749: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x1008374C: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x1008374F: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = 0x49u; /* 0x10083752: mov dword ptr [ebp - 0x14], 0x49 */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10083759: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x1008375C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10083763; /* 0x1008375E: ja 0x10083763 */
L_10083760:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10083760: mov dword ptr [ebp - 0x1c], eax */
L_10083763:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10083763: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x20); /* 0x10083766: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10083769: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008376C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1008376F: push eax */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x10083770: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083773: add esp, 0x10 */
    _flag_k = FK_ADD;
L_10083776:
    esp = ebp; /* 0x10083776: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10083778: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083779: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008377A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008377Au);

L_1008377A:
    PUSH32(esp, ebp); /* 0x1008377A: push ebp */
    ebp = esp; /* 0x1008377B: mov ebp, esp */
    eax = ebp + 0x18; /* 0x1008377D: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10083780: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083781: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083784: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083787: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008378A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E1D6); /* 0x1008378D: call 0x1001e1d6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083792: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083795: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083796: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083797(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083797u);

L_10083797:
    PUSH32(esp, ebp); /* 0x10083797: push ebp */
    ebp = esp; /* 0x10083798: mov ebp, esp */
    eax = ebp + 0x14; /* 0x1008379A: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1008379D: push eax */
    PUSH32(esp, 0); /* 0x1008379E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100837A0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100837A3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100837A6: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x100837A9: push 0x1003320e */
    RECOMP_CALL(sub_1008381D); /* 0x100837AE: call 0x1008381d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100837B3: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100837B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100837B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100837B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100837B8u);

L_100837B8:
    PUSH32(esp, ebp); /* 0x100837B8: push ebp */
    ebp = esp; /* 0x100837B9: mov ebp, esp */
    eax = ebp + 0x18; /* 0x100837BB: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x100837BE: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100837BF: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100837C2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100837C5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100837C8: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x100837CB: push 0x1003320e */
    RECOMP_CALL(sub_1008381D); /* 0x100837D0: call 0x1008381d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100837D5: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100837D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100837D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100837DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100837DAu);

L_100837DA:
    PUSH32(esp, ebp); /* 0x100837DA: push ebp */
    ebp = esp; /* 0x100837DB: mov ebp, esp */
    eax = ebp + 0x14; /* 0x100837DD: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100837E0: push eax */
    PUSH32(esp, 0); /* 0x100837E1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100837E3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100837E6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100837E9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x100837EC: push 0x1001e5dd */
    RECOMP_CALL(sub_1008381D); /* 0x100837F1: call 0x1008381d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100837F6: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100837F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100837FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100837FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100837FBu);

L_100837FB:
    PUSH32(esp, ebp); /* 0x100837FB: push ebp */
    ebp = esp; /* 0x100837FC: mov ebp, esp */
    eax = ebp + 0x18; /* 0x100837FE: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10083801: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083802: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083805: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083808: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008380B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x1008380E: push 0x1001e5dd */
    RECOMP_CALL(sub_1008381D); /* 0x10083813: call 0x1008381d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10083818: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008381B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008381C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008381D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008381Du);

L_1008381D:
    PUSH32(esp, ebp); /* 0x1008381D: push ebp */
    ebp = esp; /* 0x1008381E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10083820: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10083823: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10083827: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10083829: push edi */
    PUSH32(esp, 7); /* 0x1008382A: push 7 */
    ecx = POP32_VAL(esp); /* 0x1008382C: pop ecx */
    edi = ebp + (-0x1C); /* 0x1008382D: lea edi, [ebp - 0x1c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10083830: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0xC); /* 0x10083832: mov eax, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x10083835: pop edi */
    /* test eax, eax */ /* 0x10083836: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008384F; /* 0x10083838: jne 0x1008384f */
L_1008383A:
    RECOMP_CALL(sub_1001177D); /* 0x1008383A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008383F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10083845: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008384A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008388D; /* 0x1008384D: jmp 0x1008388d */
L_1008384F:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1008384F: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008383A; /* 0x10083853: je 0x1008383a */
L_10083855:
    MEM32(ebp + (-0x18)) = eax; /* 0x10083855: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x10083858: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x1008385B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = 0x49u; /* 0x1008385E: mov dword ptr [ebp - 0x14], 0x49 */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x10083865: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10083875; /* 0x1008386A: jbe 0x10083875 */
L_1008386C:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x1008386C: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_1008387A; /* 0x10083873: jmp 0x1008387a */
L_10083875:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10083875: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10083877: mov dword ptr [ebp - 0x1c], eax */
L_1008387A:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1008387A: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x20); /* 0x1008387D: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10083880: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083883: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10083886: push eax */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x10083887: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008388A: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1008388D:
    esp = ebp; /* 0x1008388D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008388F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083890: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083891(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083891u);

L_10083891:
    PUSH32(esp, ebp); /* 0x10083891: push ebp */
    ebp = esp; /* 0x10083892: mov ebp, esp */
    eax = ebp + 0xC; /* 0x10083894: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10083897: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083898: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008490D); /* 0x1008389B: call 0x1008490d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100838A0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100838A1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100838A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100838A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100838A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100838A4u);

L_100838A4:
    PUSH32(esp, ebp); /* 0x100838A4: push ebp */
    ebp = esp; /* 0x100838A5: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100838A7: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100838AA: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100838AB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100838AE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084927); /* 0x100838B1: call 0x10084927 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100838B6: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100838B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100838BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100838BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100838BBu);

L_100838BB:
    PUSH32(esp, ebp); /* 0x100838BB: push ebp */
    ebp = esp; /* 0x100838BC: mov ebp, esp */
    eax = ebp + 0xC; /* 0x100838BE: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100838C1: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100838C2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084942); /* 0x100838C5: call 0x10084942 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100838CA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100838CB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100838CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100838CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100838CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100838CEu);

L_100838CE:
    PUSH32(esp, ebp); /* 0x100838CE: push ebp */
    ebp = esp; /* 0x100838CF: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100838D1: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100838D4: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100838D5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100838D8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008495C); /* 0x100838DB: call 0x1008495c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100838E0: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100838E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100838E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100838E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100838E5u);

L_100838E5:
    PUSH32(esp, ebp); /* 0x100838E5: push ebp */
    ebp = esp; /* 0x100838E6: mov ebp, esp */
    eax = ebp + 0x18; /* 0x100838E8: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x100838EB: push eax */
    PUSH32(esp, 0); /* 0x100838EC: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100838EE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100838F1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100838F4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100838F7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084B47); /* 0x100838FA: call 0x10084b47 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100838FF: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083902: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083903: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083904(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083904u);

L_10083904:
    PUSH32(esp, ebp); /* 0x10083904: push ebp */
    ebp = esp; /* 0x10083905: mov ebp, esp */
    eax = ebp + 0x1C; /* 0x10083907: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x1008390A: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008390B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008390E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083911: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083914: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083917: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084B47); /* 0x1008391A: call 0x10084b47 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008391F: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083922: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083923: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083924(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083924u);

L_10083924:
    PUSH32(esp, ebp); /* 0x10083924: push ebp */
    ebp = esp; /* 0x10083925: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10083927: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1008392A: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008392B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008392E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083931: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084977); /* 0x10083934: call 0x10084977 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083939: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008393C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008393D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008393E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008393Eu);

L_1008393E:
    PUSH32(esp, ebp); /* 0x1008393E: push ebp */
    ebp = esp; /* 0x1008393F: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10083941: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10083944: push eax */
    PUSH32(esp, 0); /* 0x10083945: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083947: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008394A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008394D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084C6E); /* 0x10083950: call 0x10084c6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083955: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083958: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083959: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008395A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008395Au);

L_1008395A:
    PUSH32(esp, ebp); /* 0x1008395A: push ebp */
    ebp = esp; /* 0x1008395B: mov ebp, esp */
    eax = ebp + 0x18; /* 0x1008395D: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10083960: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083961: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083964: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083967: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008396A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084C6E); /* 0x1008396D: call 0x10084c6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083972: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083975: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083976: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083977(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083977u);

L_10083977:
    PUSH32(esp, ebp); /* 0x10083977: push ebp */
    ebp = esp; /* 0x10083978: mov ebp, esp */
    eax = ebp + 0x18; /* 0x1008397A: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x1008397D: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008397E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083981: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083984: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083987: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10013EF3); /* 0x1008398A: call 0x10013ef3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008398F: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083992: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083993: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083994(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083994u);

L_10083994:
    PUSH32(esp, ebp); /* 0x10083994: push ebp */
    ebp = esp; /* 0x10083995: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10083997: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1008399A: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008399B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008399E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100839A1: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x100839A4: push 0x1001b879 */
    RECOMP_CALL(sub_1001ACD3); /* 0x100839A9: call 0x1001acd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100839AE: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100839B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100839B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100839B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100839B3u);

L_100839B3:
    PUSH32(esp, ebp); /* 0x100839B3: push ebp */
    ebp = esp; /* 0x100839B4: mov ebp, esp */
    eax = ebp + 0x14; /* 0x100839B6: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100839B9: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100839BA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100839BD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100839C0: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x100839C3: push 0x1002ea80 */
    RECOMP_CALL(sub_1001ACD3); /* 0x100839C8: call 0x1001acd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100839CD: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100839D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100839D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100839D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100839D2u);

L_100839D2:
    PUSH32(esp, ebp); /* 0x100839D2: push ebp */
    ebp = esp; /* 0x100839D3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100839D5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x100839D8: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100839DA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100839DD: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x100839E0: push 0x1001b879 */
    RECOMP_CALL(sub_1001ACD3); /* 0x100839E5: call 0x1001acd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100839EA: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100839ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100839EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100839EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100839EFu);

L_100839EF:
    PUSH32(esp, ebp); /* 0x100839EF: push ebp */
    ebp = esp; /* 0x100839F0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100839F2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x100839F5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100839F7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100839FA: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x100839FD: push 0x1002ea80 */
    RECOMP_CALL(sub_1001ACD3); /* 0x10083A02: call 0x1001acd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083A07: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083A0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083A0B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083A0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083A0Cu);

L_10083A0C:
    PUSH32(esp, ebp); /* 0x10083A0C: push ebp */
    ebp = esp; /* 0x10083A0D: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10083A0F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10083A12: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083A13: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083A16: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083A19: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084C96); /* 0x10083A1C: call 0x10084c96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083A21: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083A24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083A25: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083A26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083A26u);

L_10083A26:
    PUSH32(esp, ebp); /* 0x10083A26: push ebp */
    ebp = esp; /* 0x10083A27: mov ebp, esp */
    eax = ebp + 0xC; /* 0x10083A29: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10083A2C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083A2D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E09B); /* 0x10083A30: call 0x1001e09b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083A35: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083A36: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10083A37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083A38: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083A39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083A39u);

L_10083A39:
    PUSH32(esp, ebp); /* 0x10083A39: push ebp */
    ebp = esp; /* 0x10083A3A: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10083A3C: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10083A3F: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083A40: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083A43: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084C9C); /* 0x10083A46: call 0x10084c9c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10083A4B: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083A4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083A4F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083A50u);

L_10083A50:
    PUSH32(esp, ebp); /* 0x10083A50: push ebp */
    ebp = esp; /* 0x10083A51: mov ebp, esp */
    eax = ebp + 0xC; /* 0x10083A53: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10083A56: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083A57: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084CB7); /* 0x10083A5A: call 0x10084cb7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083A5F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083A60: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10083A61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083A62: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083A63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083A63u);

L_10083A63:
    PUSH32(esp, ebp); /* 0x10083A63: push ebp */
    ebp = esp; /* 0x10083A64: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10083A66: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10083A69: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083A6A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083A6D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084CD1); /* 0x10083A70: call 0x10084cd1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10083A75: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083A78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083A79: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083A7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083A7Au);

L_10083A7A:
    PUSH32(esp, ebp); /* 0x10083A7A: push ebp */
    ebp = esp; /* 0x10083A7B: mov ebp, esp */
    eax = ebp + 0x1C; /* 0x10083A7D: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x10083A80: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10083A81: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083A84: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083A87: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083A8A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083A8D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E123); /* 0x10083A90: call 0x1001e123 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10083A95: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083A98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083A99: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083A9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083A9Au);

L_10083A9A:
    PUSH32(esp, ebp); /* 0x10083A9A: push ebp */
    ebp = esp; /* 0x10083A9B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10083A9D: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10083AA0: push ebx */
    PUSH32(esp, edi); /* 0x10083AA1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10083AA2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x10083AA4: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x10083AA7: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10083AA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10083AAB: mov dword ptr [ebp - 0x20], ebx */
    ecx = POP32_VAL(esp); /* 0x10083AAE: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10083AAF: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10083AB1: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10083ACB; /* 0x10083AB4: jne 0x10083acb */
L_10083AB6:
    RECOMP_CALL(sub_1001177D); /* 0x10083AB6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10083ABB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10083AC1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10083AC6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10083B37; /* 0x10083AC9: jmp 0x10083b37 */
L_10083ACB:
    eax = MEM32(ebp + 0x8); /* 0x10083ACB: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10083ACE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083AB6; /* 0x10083AD0: je 0x10083ab6 */
L_10083AD2:
    PUSH32(esp, esi); /* 0x10083AD2: push esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x10083AD3: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x10083AD6: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + 0x10; /* 0x10083AD9: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10083ADC: push eax */
    PUSH32(esp, ebx); /* 0x10083ADD: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083ADE: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x20); /* 0x10083AE1: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10083AE4: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x10083AEB: push eax */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x10083AEC: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    RECOMP_CALL(sub_1001D315); /* 0x10083AF3: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083AF8: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10083AFB: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10083AFD: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10083B10; /* 0x10083B00: js 0x10083b10 */
L_10083B02:
    ecx = MEM32(ebp + (-0x20)); /* 0x10083B02: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10083B05: mov byte ptr [ecx], bl */
    ecx = MEM32(ebp + (-0x20)); /* 0x10083B07: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10083B0A: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x10083B0B: mov dword ptr [ebp - 0x20], ecx */
    goto L_10083B1F; /* 0x10083B0E: jmp 0x10083b1f */
L_10083B10:
    eax = ebp + (-0x20); /* 0x10083B10: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10083B13: push eax */
    PUSH32(esp, ebx); /* 0x10083B14: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10083B15: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083B1A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083B1B: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x10083B1C: mov ecx, dword ptr [ebp - 0x20] */
L_10083B1F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10083B1F: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10083B28; /* 0x10083B22: js 0x10083b28 */
L_10083B24:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10083B24: mov byte ptr [ecx], bl */
    goto L_10083B34; /* 0x10083B26: jmp 0x10083b34 */
L_10083B28:
    eax = ebp + (-0x20); /* 0x10083B28: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10083B2B: push eax */
    PUSH32(esp, ebx); /* 0x10083B2C: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10083B2D: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083B32: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083B33: pop ecx */
L_10083B34:
    eax = esi; /* 0x10083B34: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10083B36: pop esi */
L_10083B37:
    edi = POP32_VAL(esp); /* 0x10083B37: pop edi */
    ebx = POP32_VAL(esp); /* 0x10083B38: pop ebx */
    esp = ebp; /* 0x10083B39: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10083B3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083B3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083B3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083B3Du);

L_10083B3D:
    PUSH32(esp, ebp); /* 0x10083B3D: push ebp */
    ebp = esp; /* 0x10083B3E: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10083B40: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10083B43: push eax */
    PUSH32(esp, 0); /* 0x10083B44: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083B46: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083B49: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083B4C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084E1E); /* 0x10083B4F: call 0x10084e1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083B54: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083B57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083B58: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083B59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083B59u);

L_10083B59:
    PUSH32(esp, ebp); /* 0x10083B59: push ebp */
    ebp = esp; /* 0x10083B5A: mov ebp, esp */
    eax = ebp + 0x18; /* 0x10083B5C: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10083B5F: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083B60: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083B63: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083B66: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083B69: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084E1E); /* 0x10083B6C: call 0x10084e1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083B71: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083B74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083B75: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083B76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083B76u);

L_10083B76:
    PUSH32(esp, ebp); /* 0x10083B76: push ebp */
    ebp = esp; /* 0x10083B77: mov ebp, esp */
    eax = ebp + 0x18; /* 0x10083B79: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10083B7C: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083B7D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083B80: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083B83: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083B86: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E0B5); /* 0x10083B89: call 0x1001e0b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083B8E: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083B91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083B92: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083B93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083B93u);

L_10083B93:
    PUSH32(esp, ebp); /* 0x10083B93: push ebp */
    ebp = esp; /* 0x10083B94: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10083B96: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10083B99: push ebx */
    PUSH32(esp, edi); /* 0x10083B9A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10083B9B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x10083B9D: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x10083BA0: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10083BA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10083BA4: mov dword ptr [ebp - 0x20], ebx */
    ecx = POP32_VAL(esp); /* 0x10083BA7: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10083BA8: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x10083BAA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10083BC7; /* 0x10083BAD: jne 0x10083bc7 */
L_10083BAF:
    RECOMP_CALL(sub_1001177D); /* 0x10083BAF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10083BB4: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10083BBA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10083BBF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10083C79; /* 0x10083BC2: jmp 0x10083c79 */
L_10083BC7:
    eax = MEM32(ebp + 0xC); /* 0x10083BC7: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10083BCA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10083BCB: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10083BCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083BEB; /* 0x10083BD0: je 0x10083beb */
L_10083BD2:
    /* test esi, esi */ /* 0x10083BD2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083BEB; /* 0x10083BD4: jne 0x10083beb */
L_10083BD6:
    RECOMP_CALL(sub_1001177D); /* 0x10083BD6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10083BDB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10083BE1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10083C75; /* 0x10083BE6: jmp 0x10083c75 */
L_10083BEB:
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10083BEB: mov dword ptr [ebp - 0x14], 0x42 */
    MEM32(ebp + (-0x18)) = esi; /* 0x10083BF2: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x10083BF5: mov dword ptr [ebp - 0x20], esi */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x10083BF8: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10083C08; /* 0x10083BFD: jbe 0x10083c08 */
L_10083BFF:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x10083BFF: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_10083C0D; /* 0x10083C06: jmp 0x10083c0d */
L_10083C08:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10083C08: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10083C0A: mov dword ptr [ebp - 0x1c], eax */
L_10083C0D:
    eax = ebp + 0x14; /* 0x10083C0D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10083C10: push eax */
    PUSH32(esp, ebx); /* 0x10083C11: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083C12: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x10083C15: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10083C18: push eax */
    RECOMP_CALL(sub_1001D315); /* 0x10083C19: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083C1E: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x10083C21: mov edi, eax */
    /* test esi, esi */ /* 0x10083C23: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083C78; /* 0x10083C25: je 0x10083c78 */
L_10083C27:
    /* test edi, edi */ /* 0x10083C27: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10083C70; /* 0x10083C29: js 0x10083c70 */
L_10083C2B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10083C2B: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10083C3E; /* 0x10083C2E: js 0x10083c3e */
L_10083C30:
    eax = MEM32(ebp + (-0x20)); /* 0x10083C30: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10083C33: mov byte ptr [eax], bl */
    eax = MEM32(ebp + (-0x20)); /* 0x10083C35: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10083C38: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x10083C39: mov dword ptr [ebp - 0x20], eax */
    goto L_10083C52; /* 0x10083C3C: jmp 0x10083c52 */
L_10083C3E:
    eax = ebp + (-0x20); /* 0x10083C3E: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10083C41: push eax */
    PUSH32(esp, ebx); /* 0x10083C42: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10083C43: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083C48: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083C49: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10083C4A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083C70; /* 0x10083C4D: je 0x10083c70 */
L_10083C4F:
    eax = MEM32(ebp + (-0x20)); /* 0x10083C4F: mov eax, dword ptr [ebp - 0x20] */
L_10083C52:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10083C52: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10083C5B; /* 0x10083C55: js 0x10083c5b */
L_10083C57:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10083C57: mov byte ptr [eax], bl */
    goto L_10083C6C; /* 0x10083C59: jmp 0x10083c6c */
L_10083C5B:
    eax = ebp + (-0x20); /* 0x10083C5B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10083C5E: push eax */
    PUSH32(esp, ebx); /* 0x10083C5F: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10083C60: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083C65: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083C66: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10083C67: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083C70; /* 0x10083C6A: je 0x10083c70 */
L_10083C6C:
    eax = edi; /* 0x10083C6C: mov eax, edi */
    goto L_10083C78; /* 0x10083C6E: jmp 0x10083c78 */
L_10083C70:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10083C70: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x10083C72: mov word ptr [esi], cx */
L_10083C75:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10083C75: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10083C78:
    esi = POP32_VAL(esp); /* 0x10083C78: pop esi */
L_10083C79:
    edi = POP32_VAL(esp); /* 0x10083C79: pop edi */
    ebx = POP32_VAL(esp); /* 0x10083C7A: pop ebx */
    esp = ebp; /* 0x10083C7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10083C7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083C7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083C7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083C7Fu);

L_10083C7F:
    PUSH32(esp, ebp); /* 0x10083C7F: push ebp */
    ebp = esp; /* 0x10083C80: mov ebp, esp */
    eax = ebp + 0x18; /* 0x10083C82: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10083C85: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10083C86: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083C89: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083C8C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083C8F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x10083C92: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083C97: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083C9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083C9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083C9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083C9Cu);

L_10083C9C:
    PUSH32(esp, ebp); /* 0x10083C9C: push ebp */
    ebp = esp; /* 0x10083C9D: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10083C9F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10083CA2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083CA3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083CA6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083CA9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x10083CAC: push 0x1003320e */
    RECOMP_CALL(sub_1001EAF3); /* 0x10083CB1: call 0x1001eaf3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083CB6: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083CB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083CBA: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083CBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083CBBu);

L_10083CBB:
    PUSH32(esp, ebp); /* 0x10083CBB: push ebp */
    ebp = esp; /* 0x10083CBC: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10083CBE: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10083CC1: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083CC2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083CC5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083CC8: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x10083CCB: push 0x1001e5dd */
    RECOMP_CALL(sub_1001EAF3); /* 0x10083CD0: call 0x1001eaf3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083CD5: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083CD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083CD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083CDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083CDAu);

L_10083CDA:
    PUSH32(esp, ebp); /* 0x10083CDA: push ebp */
    ebp = esp; /* 0x10083CDB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083CDD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10083CE0: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083CE2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083CE5: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x10083CE8: push 0x1003320e */
    RECOMP_CALL(sub_1001EAF3); /* 0x10083CED: call 0x1001eaf3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083CF2: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083CF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083CF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083CF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083CF7u);

L_10083CF7:
    PUSH32(esp, ebp); /* 0x10083CF7: push ebp */
    ebp = esp; /* 0x10083CF8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10083CFA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10083CFD: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083CFF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10083D02: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x10083D05: push 0x1001e5dd */
    RECOMP_CALL(sub_1001EAF3); /* 0x10083D0A: call 0x1001eaf3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10083D0F: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10083D12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083D13: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083D14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083D14u);

L_10083D14:
    PUSH32(esp, 0x1Cu); /* 0x10083D14: push 0x1c */
    PUSH32(esp, 0x10083F50u); /* 0x10083D16: push 0x10083f50 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10083D1B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10083D20: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x10083D22: mov esi, ebx */
    MEM32(ebp + (-0x24)) = esi; /* 0x10083D24: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x10083D27: mov dword ptr [ebp - 0x20], ebx */
    PUSH32(esp, 2); /* 0x10083D2A: push 2 */
    RECOMP_CALL(sub_100145F8); /* 0x10083D2C: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083D31: pop ecx */
    /* test eax, eax */ /* 0x10083D32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083F37; /* 0x10083D34: je 0x10083f37 */
L_10083D3A:
    PUSH32(esp, 0x10083F4Cu); /* 0x10083D3A: push 0x10083f4c */
    PUSH32(esp, ebx); /* 0x10083D3F: push ebx */
    eax = ebp + (-0x20); /* 0x10083D40: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10083D43: push eax */
    RECOMP_CALL(sub_100A5072); /* 0x10083D44: call 0x100a5072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10083D49: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10083D4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083D63; /* 0x10083D4E: je 0x10083d63 */
L_10083D50:
    /* cmp eax, 0x16u */ /* 0x10083D50: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10083D5F; /* 0x10083D53: jne 0x10083d5f */
L_10083D55:
    PUSH32(esp, ebx); /* 0x10083D55: push ebx */
    PUSH32(esp, ebx); /* 0x10083D56: push ebx */
    PUSH32(esp, ebx); /* 0x10083D57: push ebx */
    PUSH32(esp, ebx); /* 0x10083D58: push ebx */
    PUSH32(esp, ebx); /* 0x10083D59: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x10083D5A: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_10083D5F:
    /* test eax, eax */ /* 0x10083D5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083D7C; /* 0x10083D61: jne 0x10083d7c */
L_10083D63:
    /* cmp MEM32(ebp + (-0x20)), ebx */ /* 0x10083D63: cmp dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083D7C; /* 0x10083D66: je 0x10083d7c */
L_10083D68:
    PUSH32(esp, ebx); /* 0x10083D68: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x10083D69: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1007E270); /* 0x10083D6C: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083D71: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083D72: pop ecx */
    /* test eax, eax */ /* 0x10083D73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083D7C; /* 0x10083D75: jne 0x10083d7c */
L_10083D77:
    edi = MEM32(ebp + (-0x20)); /* 0x10083D77: mov edi, dword ptr [ebp - 0x20] */
    goto L_10083DAB; /* 0x10083D7A: jmp 0x10083dab */
L_10083D7C:
    edi = MEM32(ebp + 0x8); /* 0x10083D7C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10083D7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083D90; /* 0x10083D81: je 0x10083d90 */
L_10083D83:
    PUSH32(esp, ebx); /* 0x10083D83: push ebx */
    PUSH32(esp, edi); /* 0x10083D84: push edi */
    RECOMP_CALL(sub_1007E270); /* 0x10083D85: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083D8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083D8B: pop ecx */
    /* test eax, eax */ /* 0x10083D8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083DAB; /* 0x10083D8E: je 0x10083dab */
L_10083D90:
    PUSH32(esp, ebx); /* 0x10083D90: push ebx */
    esi = 0x10062164u; /* 0x10083D91: mov esi, 0x10062164 */
    PUSH32(esp, esi); /* 0x10083D96: push esi */
    RECOMP_CALL(sub_1007E270); /* 0x10083D97: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083D9C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083D9D: pop ecx */
    /* test eax, eax */ /* 0x10083D9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x10083DA0: mov edi, esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083DA9; /* 0x10083DA2: je 0x10083da9 */
L_10083DA4:
    edi = 0x10062134u; /* 0x10083DA4: mov edi, 0x10062134 */
L_10083DA9:
    esi = ebx; /* 0x10083DA9: mov esi, ebx */
L_10083DAB:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x10083DAB: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083DBE; /* 0x10083DAE: je 0x10083dbe */
L_10083DB0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083DB0: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100129AF); /* 0x10083DB3: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083DB8: pop ecx */
    esi = eax; /* 0x10083DB9: mov esi, eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x10083DBB: mov dword ptr [ebp - 0x24], eax */
L_10083DBE:
    PUSH32(esp, edi); /* 0x10083DBE: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x10083DBF: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x10083DC4: add esi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10083DC7: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10083DC9: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, 1); /* 0x10083DCC: push 1 */
    PUSH32(esp, eax); /* 0x10083DCE: push eax */
    RECOMP_CALL(sub_1001CBFF); /* 0x10083DCF: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10083DD4: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10083DD7: mov esi, eax */
    MEM32(ebp + (-0x28)) = esi; /* 0x10083DD9: mov dword ptr [ebp - 0x28], esi */
    /* test esi, esi */ /* 0x10083DDC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083F25; /* 0x10083DDE: je 0x10083f25 */
L_10083DE4:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x10083DE4: mov byte ptr [esi], bl */
    PUSH32(esp, edi); /* 0x10083DE6: push edi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10083DE7: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x10083DEA: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x10083DEB: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10083DF0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10083DF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083D55; /* 0x10083DF5: jne 0x10083d55 */
L_10083DFB:
    PUSH32(esp, edi); /* 0x10083DFB: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x10083DFC: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083E01: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10083E02: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x10083E03: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x10083E05: mov dword ptr [ebp - 0x2c], eax */
    SET_LO8(eax, MEM8(eax)); /* 0x10083E08: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x10083E0A: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10083EF9; /* 0x10083E0C: jne 0x10083ef9 */
L_10083E12:
    PUSH32(esp, 0x5Cu); /* 0x10083E12: push 0x5c */
    PUSH32(esp, edi); /* 0x10083E14: push edi */
    RECOMP_CALL(sub_1008E5B2); /* 0x10083E15: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083E1A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083E1B: pop ecx */
    edi = MEM32(ebp + (-0x1C)); /* 0x10083E1C: mov edi, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(ebp + (-0x2C)), eax */ /* 0x10083E1F: cmp dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_10083E22:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10083E3B; /* 0x10083E22: je 0x10083e3b */
L_10083E24:
    PUSH32(esp, 0x10062164u); /* 0x10083E24: push 0x10062164 */
    PUSH32(esp, edi); /* 0x10083E29: push edi */
    PUSH32(esp, esi); /* 0x10083E2A: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x10083E2B: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10083E30: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10083E33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083D55; /* 0x10083E35: jne 0x10083d55 */
L_10083E3B:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x10083E3B: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083E55; /* 0x10083E3E: je 0x10083e55 */
L_10083E40:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10083E40: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10083E43: push edi */
    PUSH32(esp, esi); /* 0x10083E44: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x10083E45: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10083E4A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10083E4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083D55; /* 0x10083E4F: jne 0x10083d55 */
L_10083E55:
    PUSH32(esp, esi); /* 0x10083E55: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x10083E56: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10083E5B: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10083E5D: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, 2); /* 0x10083E60: push 2 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10083E62: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083E67: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083E68: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10083E69: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(ebp + (-0x24)); /* 0x10083E6C: mov eax, dword ptr [ebp - 0x24] */
    /* cmp MEM32(0x100E3CC4), eax */ /* 0x10083E6F: cmp dword ptr [0x100e3cc4], eax */
    _flag_a = (uint32_t)(MEM32(0x100E3CC4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10083E81; /* 0x10083E75: jae 0x10083e81 */
L_10083E77:
    MEM32(0x100E1490) = 1; /* 0x10083E77: mov dword ptr [0x100e1490], 1 */
L_10083E81:
    MEM32(0x100E3CC4) = eax; /* 0x10083E81: mov dword ptr [0x100e3cc4], eax */
    eax = MEM32(0x100E1490); /* 0x10083E86: mov eax, dword ptr [0x100e1490] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x10083E8B: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1001177D); /* 0x10083E8E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10083E93: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x24)) = eax; /* 0x10083E95: mov dword ptr [ebp - 0x24], eax */
L_10083E98:
    ecx = MEM32(0x100E1490); /* 0x10083E98: mov ecx, dword ptr [0x100e1490] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10083E9E: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E1490) = ecx; /* 0x10083E9F: mov dword ptr [0x100e1490], ecx */
    eax = ecx; /* 0x10083EA5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x2C)); /* 0x10083EA7: sub eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x7FFFFFFFu */ /* 0x10083EAA: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10083F03; /* 0x10083EAF: ja 0x10083f03 */
L_10083EB1:
    PUSH32(esp, 0xAu); /* 0x10083EB1: push 0xa */
    eax = edi; /* 0x10083EB3: mov eax, edi */
    edx = MEM32(ebp + (-0x1C)); /* 0x10083EB5: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10083EB8: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10083EBA: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10083EBC: push eax */
    PUSH32(esp, edx); /* 0x10083EBD: push edx */
    PUSH32(esp, ecx); /* 0x10083EBE: push ecx */
    RECOMP_CALL(sub_10030D1B); /* 0x10083EBF: call 0x10030d1b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10083EC4: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10083EC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083D55; /* 0x10083EC9: jne 0x10083d55 */
L_10083ECF:
    RECOMP_CALL(sub_1001177D); /* 0x10083ECF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x10083ED4: mov dword ptr [eax], ebx */
    PUSH32(esp, ebx); /* 0x10083ED6: push ebx */
    PUSH32(esp, esi); /* 0x10083ED7: push esi */
    RECOMP_CALL(sub_1007E270); /* 0x10083ED8: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083EDD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083EDE: pop ecx */
    /* test eax, eax */ /* 0x10083EDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10083E98; /* 0x10083EE1: je 0x10083e98 */
L_10083EE3:
    RECOMP_CALL(sub_1001177D); /* 0x10083EE3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x10083EE8: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10083E98; /* 0x10083EEB: je 0x10083e98 */
L_10083EED:
    RECOMP_CALL(sub_1001177D); /* 0x10083EED: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x10083EF2: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax) = ecx; /* 0x10083EF5: mov dword ptr [eax], ecx */
    goto L_10083F19; /* 0x10083EF7: jmp 0x10083f19 */
L_10083EF9:
    edi = MEM32(ebp + (-0x1C)); /* 0x10083EF9: mov edi, dword ptr [ebp - 0x1c] */
    /* cmp LO8(eax), 0x2Fu */ /* 0x10083EFC: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    goto L_10083E22; /* 0x10083EFE: jmp 0x10083e22 */
L_10083F03:
    RECOMP_CALL(sub_1001177D); /* 0x10083F03: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x10083F08: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax) = ecx; /* 0x10083F0B: mov dword ptr [eax], ecx */
    PUSH32(esp, esi); /* 0x10083F0D: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10083F0E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083F13: pop ecx */
    esi = ebx; /* 0x10083F14: mov esi, ebx */
    MEM32(ebp + (-0x28)) = esi; /* 0x10083F16: mov dword ptr [ebp - 0x28], esi */
L_10083F19:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10083F19: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10083F42); /* 0x10083F20: call 0x10083f42 */
    RECOMP_FLAGS_IN();
L_10083F25:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x10083F25: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10083F28: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10083F2D: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10083F2E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083F33: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10083F34: pop ecx */
    eax = esi; /* 0x10083F35: mov eax, esi */
L_10083F37:
    RECOMP_CALL(sub_1000EDC3); /* 0x10083F37: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083F3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083F42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083F42u);

L_10083F42:
    PUSH32(esp, 2); /* 0x10083F42: push 2 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10083F44: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083F49: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10083F4A: ret  */
    RECOMP_REGS_OUT();
}

void sub_10083F4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083F4Cu);

L_10083F4C:
    PUSH32(esp, esp); /* 0x10083F4C: push esp */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x10083F4D: dec ebp */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x10083F4E: push eax */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(edx, HI8(edx) + HI8(ebx)); /* 0x10083F4F: add dh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10083F51u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_10083F6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10083F6Cu);

L_10083F6C:
    PUSH32(esp, 0x1Cu); /* 0x10083F6C: push 0x1c */
    PUSH32(esp, 0x10084100u); /* 0x10083F6E: push 0x10084100 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10083F73: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10083F78: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x10083F7A: mov edi, esi */
    MEM32(ebp + (-0x20)) = edi; /* 0x10083F7C: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x24)) = esi; /* 0x10083F7F: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x28)) = esi; /* 0x10083F82: mov dword ptr [ebp - 0x28], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10083F85: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10083F87: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10083F8A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10083F8C: setne al */
    /* test eax, eax */ /* 0x10083F8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083FA7; /* 0x10083F91: jne 0x10083fa7 */
L_10083F93:
    RECOMP_CALL(sub_1001177D); /* 0x10083F93: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10083F98: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10083F9A: pop esi */
    MEM32(eax) = esi; /* 0x10083F9B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10083F9D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100840DC; /* 0x10083FA2: jmp 0x100840dc */
L_10083FA7:
    MEM32(ecx) = esi; /* 0x10083FA7: mov dword ptr [ecx], esi */
    PUSH32(esp, 2); /* 0x10083FA9: push 2 */
    RECOMP_CALL(sub_100145F8); /* 0x10083FAB: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083FB0: pop ecx */
    /* test eax, eax */ /* 0x10083FB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10083FC1; /* 0x10083FB3: jne 0x10083fc1 */
L_10083FB5:
    RECOMP_CALL(sub_1001177D); /* 0x10083FB5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10083FBA: mov eax, dword ptr [eax] */
    goto L_100840DE; /* 0x10083FBC: jmp 0x100840de */
L_10083FC1:
    PUSH32(esp, 2); /* 0x10083FC1: push 2 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10083FC3: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083FC8: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x10083FC9: mov dword ptr [ebp - 4], esi */
    /* cmp MEM8(0x100E3CD8), 0 */ /* 0x10083FCC: cmp byte ptr [0x100e3cd8], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E3CD8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10083FEC; /* 0x10083FD3: jne 0x10083fec */
L_10083FD5:
    PUSH32(esp, 1); /* 0x10083FD5: push 1 */
    RECOMP_CALL(sub_1008431A); /* 0x10083FD7: call 0x1008431a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10083FDC: pop ecx */
    /* test eax, eax */ /* 0x10083FDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100840C5; /* 0x10083FDF: jne 0x100840c5 */
L_10083FE5:
    ebx = 0x100E3CD8u; /* 0x10083FE5: mov ebx, 0x100e3cd8 */
    goto L_1008400C; /* 0x10083FEA: jmp 0x1008400c */
L_10083FEC:
    PUSH32(esp, 0x7FFFFFFFu); /* 0x10083FEC: push 0x7fffffff */
    PUSH32(esp, 0x110u); /* 0x10083FF1: push 0x110 */
    ebx = 0x100E3CD8u; /* 0x10083FF6: mov ebx, 0x100e3cd8 */
    PUSH32(esp, ebx); /* 0x10083FFB: push ebx */
    RECOMP_CALL(sub_10084284); /* 0x10083FFC: call 0x10084284 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10084001: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084004: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100840C5; /* 0x10084006: jne 0x100840c5 */
L_1008400C:
    RECOMP_CALL(sub_10015857); /* 0x1008400C: call 0x10015857 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10084011: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x10084013: mov dword ptr [ebp - 0x20], edi */
    /* test edi, edi */ /* 0x10084016: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084025; /* 0x10084018: jne 0x10084025 */
L_1008401A:
    PUSH32(esp, 0x18u); /* 0x1008401A: push 0x18 */
    esi = POP32_VAL(esp); /* 0x1008401C: pop esi */
    MEM32(ebp + (-0x24)) = esi; /* 0x1008401D: mov dword ptr [ebp - 0x24], esi */
    goto L_100840C5; /* 0x10084020: jmp 0x100840c5 */
L_10084025:
    MEM32(ebp + (-0x28)) = 1; /* 0x10084025: mov dword ptr [ebp - 0x28], 1 */
    RECOMP_CALL(sub_1001177D); /* 0x1008402C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10084031: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x10084033: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1001177D); /* 0x10084036: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1008403B: mov dword ptr [eax], esi */
L_1008403D:
    PUSH32(esp, 0x180u); /* 0x1008403D: push 0x180 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084042: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x8542u); /* 0x10084045: push 0x8542 */
    PUSH32(esp, ebx); /* 0x1008404A: push ebx */
    eax = ebp + (-0x1C); /* 0x1008404B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008404E: push eax */
    RECOMP_CALL(sub_100A1C4A); /* 0x1008404F: call 0x100a1c4a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10084054: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x11u */ /* 0x10084057: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084073; /* 0x1008405A: jne 0x10084073 */
L_1008405C:
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1008405C: push 0x7fffffff */
    PUSH32(esp, 0x110u); /* 0x10084061: push 0x110 */
    PUSH32(esp, ebx); /* 0x10084066: push ebx */
    RECOMP_CALL(sub_10084284); /* 0x10084067: call 0x10084284 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008406C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008406F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008403D; /* 0x10084071: je 0x1008403d */
L_10084073:
    RECOMP_CALL(sub_1001177D); /* 0x10084073: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), esi */ /* 0x10084078: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084086; /* 0x1008407A: jne 0x10084086 */
L_1008407C:
    RECOMP_CALL(sub_1001177D); /* 0x1008407C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x2C)); /* 0x10084081: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(eax) = ecx; /* 0x10084084: mov dword ptr [eax], ecx */
L_10084086:
    /* cmp MEM32(ebp + (-0x1C)), 0xFFFFFFFFu */ /* 0x10084086: cmp dword ptr [ebp - 0x1c], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100840C5; /* 0x1008408A: je 0x100840c5 */
L_1008408C:
    PUSH32(esp, ebx); /* 0x1008408C: push ebx */
    RECOMP_CALL(sub_1002C50F); /* 0x1008408D: call 0x1002c50f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084092: pop ecx */
    MEM32(edi + 0x1C) = eax; /* 0x10084093: mov dword ptr [edi + 0x1c], eax */
    /* test eax, eax */ /* 0x10084096: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100840A5; /* 0x10084098: jne 0x100840a5 */
L_1008409A:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1008409A: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_10014EA2); /* 0x1008409D: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100840A2: pop ecx */
    goto L_100840C5; /* 0x100840A3: jmp 0x100840c5 */
L_100840A5:
    MEM32(edi + 0x4) = esi; /* 0x100840A5: mov dword ptr [edi + 4], esi */
    MEM32(edi) = esi; /* 0x100840A8: mov dword ptr [edi], esi */
    MEM32(edi + 0x8) = esi; /* 0x100840AA: mov dword ptr [edi + 8], esi */
    eax = MEM32(0x100DF638); /* 0x100840AD: mov eax, dword ptr [0x100df638] */
    _flag_a = (uint32_t)((eax | 0x80u)); _flag_b = (uint32_t)((eax | 0x80u));
    eax = eax | 0x80u; /* 0x100840B2: or eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC) = eax; /* 0x100840B7: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x100840BA: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edi + 0x10) = eax; /* 0x100840BD: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0x8); /* 0x100840C0: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x100840C3: mov dword ptr [eax], edi */
L_100840C5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100840C5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100840EA); /* 0x100840CC: call 0x100840ea */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x100840D1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100840DC; /* 0x100840D3: je 0x100840dc */
L_100840D5:
    RECOMP_CALL(sub_1001177D); /* 0x100840D5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100840DA: mov dword ptr [eax], esi */
L_100840DC:
    eax = esi; /* 0x100840DC: mov eax, esi */
L_100840DE:
    RECOMP_CALL(sub_1000EDC3); /* 0x100840DE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100840E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100840EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100840EAu);

L_100840EA:
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x100840EA: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100840F7; /* 0x100840EE: je 0x100840f7 */
L_100840F0:
    PUSH32(esp, edi); /* 0x100840F0: push edi */
    RECOMP_CALL(sub_10014B60); /* 0x100840F1: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100840F6: pop ecx */
L_100840F7:
    PUSH32(esp, 2); /* 0x100840F7: push 2 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100840F9: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100840FE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100840FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008411C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008411Cu);

L_1008411C:
    PUSH32(esp, 0x14u); /* 0x1008411C: push 0x14 */
    PUSH32(esp, 0x10084268u); /* 0x1008411E: push 0x10084268 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10084123: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10084128: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1008412A: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_1001177D); /* 0x1008412D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10084132: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x24)) = eax; /* 0x10084134: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, 2); /* 0x10084137: push 2 */
    RECOMP_CALL(sub_100145F8); /* 0x10084139: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008413E: pop ecx */
    /* test eax, eax */ /* 0x1008413F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084154; /* 0x10084141: jne 0x10084154 */
L_10084143:
    eax = MEM32(ebp + 0x18); /* 0x10084143: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    MEM32(eax) = MEM32(eax) & esi; /* 0x10084146: and dword ptr [eax], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x10084148: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1008414D: mov eax, dword ptr [eax] */
    goto L_10084260; /* 0x1008414F: jmp 0x10084260 */
L_10084154:
    PUSH32(esp, 2); /* 0x10084154: push 2 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10084156: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008415B: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x1008415C: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x10); /* 0x1008415F: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x10084162: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008416F; /* 0x10084164: jne 0x1008416f */
L_10084166:
    edi = 0x100E3CC8u; /* 0x10084166: mov edi, 0x100e3cc8 */
    PUSH32(esp, 0xEu); /* 0x1008416B: push 0xe */
    goto L_10084176; /* 0x1008416D: jmp 0x10084176 */
L_1008416F:
    edi = 0x100E3DE8u; /* 0x1008416F: mov edi, 0x100e3de8 */
    PUSH32(esp, 0x12u); /* 0x10084174: push 0x12 */
L_10084176:
    eax = POP32_VAL(esp); /* 0x10084176: pop eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x10084177: mov dword ptr [ebp - 0x20], eax */
    /* cmp MEM8(edi), 0 */ /* 0x1008417A: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084188; /* 0x1008417D: jne 0x10084188 */
L_1008417F:
    PUSH32(esp, ebx); /* 0x1008417F: push ebx */
    RECOMP_CALL(sub_1008431A); /* 0x10084180: call 0x1008431a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084185: pop ecx */
    goto L_10084195; /* 0x10084186: jmp 0x10084195 */
L_10084188:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084188: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1008418B: push eax */
L_1008418C:
    PUSH32(esp, edi); /* 0x1008418C: push edi */
    RECOMP_CALL(sub_10084284); /* 0x1008418D: call 0x10084284 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10084192: add esp, 0xc */
    _flag_k = FK_ADD;
L_10084195:
    /* test eax, eax */ /* 0x10084195: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100841C5; /* 0x10084197: jne 0x100841c5 */
L_10084199:
    PUSH32(esp, eax); /* 0x10084199: push eax */
    PUSH32(esp, edi); /* 0x1008419A: push edi */
    RECOMP_CALL(sub_1007E270); /* 0x1008419B: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100841A0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100841A1: pop ecx */
    /* test eax, eax */ /* 0x100841A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100841AE; /* 0x100841A4: jne 0x100841ae */
L_100841A6:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100841A6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100841A9: push dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_1008418C; /* 0x100841AC: jmp 0x1008418c */
L_100841AE:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100841AE: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084220; /* 0x100841B2: jne 0x10084220 */
L_100841B4:
    RECOMP_CALL(sub_1000F720); /* 0x100841B4: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100841B9: mov ebx, eax */
    /* test ebx, ebx */ /* 0x100841BB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100841E9; /* 0x100841BD: jne 0x100841e9 */
L_100841BF:
    PUSH32(esp, 0xCu); /* 0x100841BF: push 0xc */
    esi = POP32_VAL(esp); /* 0x100841C1: pop esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100841C2: mov dword ptr [ebp - 0x1c], esi */
L_100841C5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100841C5: mov dword ptr [ebp - 4], 0xfffffffe */
    edi = MEM32(ebp + (-0x24)); /* 0x100841CC: mov edi, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_10084253); /* 0x100841CF: call 0x10084253 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x100841D4: mov ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x100841D7: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x100841DA: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_1001177D); /* 0x100841DC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x100841E1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008425C; /* 0x100841E3: je 0x1008425c */
L_100841E5:
    MEM32(eax) = esi; /* 0x100841E5: mov dword ptr [eax], esi */
    goto L_1008425E; /* 0x100841E7: jmp 0x1008425e */
L_100841E9:
    /* cmp MEM32(ebx + 0x2C), 0 */ /* 0x100841E9: cmp dword ptr [ebx + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100841FE; /* 0x100841ED: jne 0x100841fe */
L_100841EF:
    PUSH32(esp, 0xEu); /* 0x100841EF: push 0xe */
    RECOMP_CALL(sub_10012226); /* 0x100841F1: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100841F6: pop ecx */
    MEM32(ebx + 0x2C) = eax; /* 0x100841F7: mov dword ptr [ebx + 0x2c], eax */
    /* test eax, eax */ /* 0x100841FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100841BF; /* 0x100841FC: je 0x100841bf */
L_100841FE:
    eax = MEM32(ebx + 0x2C); /* 0x100841FE: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(ebp + 0x8) = eax; /* 0x10084201: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, edi); /* 0x10084204: push edi */
    PUSH32(esp, 0xEu); /* 0x10084205: push 0xe */
    PUSH32(esp, eax); /* 0x10084207: push eax */
L_10084208:
    RECOMP_CALL(sub_100147CD); /* 0x10084208: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008420D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084210: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100841C5; /* 0x10084212: je 0x100841c5 */
L_10084214:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084214: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10084216: push eax */
    PUSH32(esp, eax); /* 0x10084217: push eax */
    PUSH32(esp, eax); /* 0x10084218: push eax */
    PUSH32(esp, eax); /* 0x10084219: push eax */
    PUSH32(esp, eax); /* 0x1008421A: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1008421B: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_10084220:
    /* test ebx, ebx */ /* 0x10084220: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084244; /* 0x10084222: je 0x10084244 */
L_10084224:
    PUSH32(esp, edi); /* 0x10084224: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x10084225: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008422A: pop ecx */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1008422B: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10084244; /* 0x1008422E: jb 0x10084244 */
L_10084230:
    PUSH32(esp, 0x22u); /* 0x10084230: push 0x22 */
    esi = POP32_VAL(esp); /* 0x10084232: pop esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10084233: mov dword ptr [ebp - 0x1c], esi */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10084236: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100841C5; /* 0x1008423A: je 0x100841c5 */
L_1008423C:
    eax = MEM32(ebp + 0x8); /* 0x1008423C: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(0); /* 0x1008423F: mov byte ptr [eax], 0 */
    RECOMP_BACKEDGE();
    goto L_100841C5; /* 0x10084242: jmp 0x100841c5 */
L_10084244:
    PUSH32(esp, edi); /* 0x10084244: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084245: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084248: push dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10084208; /* 0x1008424B: jmp 0x10084208 */
L_1008425C:
    MEM32(eax) = edi; /* 0x1008425C: mov dword ptr [eax], edi */
L_1008425E:
    eax = esi; /* 0x1008425E: mov eax, esi */
L_10084260:
    RECOMP_CALL(sub_1000EDC3); /* 0x10084260: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084265: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084253(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084253u);

L_10084253:
    PUSH32(esp, 2); /* 0x10084253: push 2 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10084255: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008425A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008425B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084284(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084284u);

L_10084284:
    PUSH32(esp, ebp); /* 0x10084284: push ebp */
    ebp = esp; /* 0x10084285: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10084287: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008428A: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008428F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10084291: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10084294: push ebx */
    PUSH32(esp, esi); /* 0x10084295: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10084296: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10084299: push edi */
    PUSH32(esp, 0x2Eu); /* 0x1008429A: push 0x2e */
    PUSH32(esp, esi); /* 0x1008429C: push esi */
    RECOMP_CALL(sub_1008E5B2); /* 0x1008429D: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100842A2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100842A3: pop ecx */
    edi = eax + 0x1; /* 0x100842A4: lea edi, [eax + 1] */
    /* cmp edi, esi */ /* 0x100842A7: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100842F6; /* 0x100842A9: jb 0x100842f6 */
L_100842AB:
    ecx = edi; /* 0x100842AB: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x100842AD: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x100842AF: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100842F6; /* 0x100842B2: jbe 0x100842f6 */
L_100842B4:
    PUSH32(esp, 0x20u); /* 0x100842B4: push 0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100842B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x100842B8: push ebx */
    PUSH32(esp, edi); /* 0x100842B9: push edi */
    RECOMP_CALL(sub_10032637); /* 0x100842BA: call 0x10032637 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100842BF: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100842C2: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x100842C3: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100842FB; /* 0x100842C6: jae 0x100842fb */
L_100842C8:
    PUSH32(esp, 0x20u); /* 0x100842C8: push 0x20 */
    PUSH32(esp, 8); /* 0x100842CA: push 8 */
    ecx = ebp + (-0xC); /* 0x100842CC: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100842CF: push ecx */
    PUSH32(esp, eax); /* 0x100842D0: push eax */
    RECOMP_CALL(sub_10030D1B); /* 0x100842D1: call 0x10030d1b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100842D6: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100842D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008430F; /* 0x100842DB: jne 0x1008430f */
L_100842DD:
    eax = ebp + (-0xC); /* 0x100842DD: lea eax, [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x100842E0: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x100842E2: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100842E5: push eax */
    PUSH32(esp, esi); /* 0x100842E6: push esi */
    PUSH32(esp, edi); /* 0x100842E7: push edi */
    RECOMP_CALL(sub_100147CD); /* 0x100842E8: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100842ED: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100842F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100842FE; /* 0x100842F2: je 0x100842fe */
L_100842F4:
    goto L_1008430F; /* 0x100842F4: jmp 0x1008430f */
L_100842F6:
    RECOMP_CALL(sub_100A4670); /* 0x100842F6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100842FB:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100842FB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100842FE:
    ecx = MEM32(ebp + (-0x4)); /* 0x100842FE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10084301: pop edi */
    esi = POP32_VAL(esp); /* 0x10084302: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10084303: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10084305: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10084306: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008430B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008430D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008430E: ret  */
L_1008430F:
    PUSH32(esp, ebx); /* 0x1008430F: push ebx */
    PUSH32(esp, ebx); /* 0x10084310: push ebx */
    PUSH32(esp, ebx); /* 0x10084311: push ebx */
    PUSH32(esp, ebx); /* 0x10084312: push ebx */
    PUSH32(esp, ebx); /* 0x10084313: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x10084314: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10084319u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008431A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008431Au);

L_1008431A:
    PUSH32(esp, ebp); /* 0x1008431A: push ebp */
    ebp = esp; /* 0x1008431B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x108u; /* 0x1008431D: sub esp, 0x108 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10084323: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10084328: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008432A: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1008432D: push ebx */
    PUSH32(esp, esi); /* 0x1008432E: push esi */
    PUSH32(esp, edi); /* 0x1008432F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10084330: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x107); /* 0x10084332: lea eax, [ebp - 0x107] */
    PUSH32(esp, 0x103u); /* 0x10084338: push 0x103 */
    PUSH32(esp, ebx); /* 0x1008433D: push ebx */
    PUSH32(esp, eax); /* 0x1008433E: push eax */
    esi = ebx; /* 0x1008433F: mov esi, ebx */
    MEM8(ebp + (-0x108)) = (uint8_t)(LO8(ebx)); /* 0x10084341: mov byte ptr [ebp - 0x108], bl */
    RECOMP_CALL(sub_10011533); /* 0x10084347: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1008434C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008434F: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x10084352: mov edi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10084354: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100843A6; /* 0x10084356: je 0x100843a6 */
L_10084358:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10084358: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008439A; /* 0x10084359: je 0x1008439a */
L_1008435B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008435B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100843AE; /* 0x1008435C: jne 0x100843ae */
L_1008435E:
    PUSH32(esp, 0x12u); /* 0x1008435E: push 0x12 */
    esi = 0x100E3DE8u; /* 0x10084360: mov esi, 0x100e3de8 */
    edi = POP32_VAL(esp); /* 0x10084365: pop edi */
L_10084366:
    PUSH32(esp, 0x10062164u); /* 0x10084366: push 0x10062164 */
    PUSH32(esp, edi); /* 0x1008436B: push edi */
    PUSH32(esp, esi); /* 0x1008436C: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1008436D: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10084372: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084375: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008443C; /* 0x10084377: jne 0x1008443c */
L_1008437D:
    ecx = esi + 0x1; /* 0x1008437D: lea ecx, [esi + 1] */
L_10084380:
    SET_LO8(eax, MEM8(ecx + (-0x1))); /* 0x10084380: mov al, byte ptr [ecx - 1] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x10084383: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008438F; /* 0x10084385: je 0x1008438f */
L_10084387:
    /* cmp LO8(eax), 0x2Fu */ /* 0x10084387: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008438F; /* 0x10084389: je 0x1008438f */
L_1008438B:
    MEM8(ecx) = (uint8_t)(0x5Cu); /* 0x1008438B: mov byte ptr [ecx], 0x5c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008438E: inc ecx */
    _flag_k = FK_INC;
L_1008438F:
    /* cmp MEM32(ebp + 0x8), 1 */ /* 0x1008438F: cmp dword ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084409; /* 0x10084393: jne 0x10084409 */
L_10084395:
    MEM8(ecx) = (uint8_t)(0x74u); /* 0x10084395: mov byte ptr [ecx], 0x74 */
    goto L_1008440C; /* 0x10084398: jmp 0x1008440c */
L_1008439A:
    esi = 0x100E3CD8u; /* 0x1008439A: mov esi, 0x100e3cd8 */
    edi = 0x110u; /* 0x1008439F: mov edi, 0x110 */
    goto L_100843B4; /* 0x100843A4: jmp 0x100843b4 */
L_100843A6:
    PUSH32(esp, 0xEu); /* 0x100843A6: push 0xe */
    esi = 0x100E3CC8u; /* 0x100843A8: mov esi, 0x100e3cc8 */
    edi = POP32_VAL(esp); /* 0x100843AD: pop edi */
L_100843AE:
    /* cmp MEM32(ebp + 0x8), 1 */ /* 0x100843AE: cmp dword ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084366; /* 0x100843B2: jne 0x10084366 */
L_100843B4:
    eax = ebp + (-0x108); /* 0x100843B4: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x100843BA: push eax */
    PUSH32(esp, 0x104u); /* 0x100843BB: push 0x104 */
    RECOMP_ICALL(MEM32(0x100E5100)); /* 0x100843C0: call dword ptr [0x100e5100] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100843C6: mov ebx, eax */
    /* test ebx, ebx */ /* 0x100843C8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100843F5; /* 0x100843CA: je 0x100843f5 */
L_100843CC:
    /* cmp ebx, 0x104u */ /* 0x100843CC: cmp ebx, 0x104 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100843F5; /* 0x100843D2: ja 0x100843f5 */
L_100843D4:
    eax = ebp + (-0x108); /* 0x100843D4: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x100843DA: push eax */
    ecx = ebx + 0x1; /* 0x100843DB: lea ecx, [ebx + 1] */
    PUSH32(esp, ecx); /* 0x100843DE: push ecx */
    PUSH32(esp, esi); /* 0x100843DF: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x100843E0: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100843E5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100843E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084443; /* 0x100843EA: jne 0x10084443 */
L_100843EC:
    ecx = esi + (-0x1); /* 0x100843EC: lea ecx, [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x100843EF: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100843F1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10084380; /* 0x100843F3: jmp 0x10084380 */
L_100843F5:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100843F5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100843F8:
    ecx = MEM32(ebp + (-0x4)); /* 0x100843F8: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100843FB: pop edi */
    esi = POP32_VAL(esp); /* 0x100843FC: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100843FD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100843FF: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10084400: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10084405: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10084407: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084408: ret  */
L_10084409:
    MEM8(ecx) = (uint8_t)(0x73u); /* 0x10084409: mov byte ptr [ecx], 0x73 */
L_1008440C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008440C: inc ecx */
    _flag_k = FK_INC;
    eax = edi; /* 0x1008440D: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1008440F: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x20u); /* 0x10084411: push 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10084413: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10084415: push eax */
    PUSH32(esp, ecx); /* 0x10084416: push ecx */
    RECOMP_CALL(sub_1007E384); /* 0x10084417: call 0x1007e384 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1008441C: push eax */
    RECOMP_CALL(sub_10030D1B); /* 0x1008441D: call 0x10030d1b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084422: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084425: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008443C; /* 0x10084427: jne 0x1008443c */
L_10084429:
    PUSH32(esp, 0x10062134u); /* 0x10084429: push 0x10062134 */
    PUSH32(esp, edi); /* 0x1008442E: push edi */
    PUSH32(esp, esi); /* 0x1008442F: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x10084430: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10084435: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084438: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100843F8; /* 0x1008443A: je 0x100843f8 */
L_1008443C:
    PUSH32(esp, ebx); /* 0x1008443C: push ebx */
    PUSH32(esp, ebx); /* 0x1008443D: push ebx */
    PUSH32(esp, ebx); /* 0x1008443E: push ebx */
    PUSH32(esp, ebx); /* 0x1008443F: push ebx */
    PUSH32(esp, ebx); /* 0x10084440: push ebx */
    goto L_1008444A; /* 0x10084441: jmp 0x1008444a */
L_10084443:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084443: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10084445: push eax */
    PUSH32(esp, eax); /* 0x10084446: push eax */
    PUSH32(esp, eax); /* 0x10084447: push eax */
    PUSH32(esp, eax); /* 0x10084448: push eax */
    PUSH32(esp, eax); /* 0x10084449: push eax */
L_1008444A:
    RECOMP_CALL(sub_100A469B); /* 0x1008444A: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1008444Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10084450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084450u);

L_10084450:
    PUSH32(esp, ebp); /* 0x10084450: push ebp */
    ebp = esp; /* 0x10084451: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10084453: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10084454: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x10084458: lea eax, [ebp - 4] */
    PUSH32(esp, 0x40u); /* 0x1008445B: push 0x40 */
    PUSH32(esp, eax); /* 0x1008445D: push eax */
    RECOMP_CALL(sub_10083F6C); /* 0x1008445E: call 0x10083f6c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10084463: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x10084466: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10084467: pop ecx */
    esp = ebp; /* 0x10084468: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008446A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008446B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008446C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008446Cu);

L_1008446C:
    PUSH32(esp, ebp); /* 0x1008446C: push ebp */
    ebp = esp; /* 0x1008446D: mov ebp, esp */
    PUSH32(esp, 0x10u); /* 0x1008446F: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084471: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10083F6C); /* 0x10084474: call 0x10083f6c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084479: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008447A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008447B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008447C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008447D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008447Du);

L_1008447D:
    PUSH32(esp, ebp); /* 0x1008447D: push ebp */
    ebp = esp; /* 0x1008447E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10084480: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10084481: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x10084485: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10084488: push eax */
    PUSH32(esp, 0x7FFFu); /* 0x10084489: push 0x7fff */
    PUSH32(esp, 0); /* 0x1008448E: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10084490: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084492: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008411C); /* 0x10084495: call 0x1008411c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1008449A: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008449D: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x100844A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100844A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100844A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100844A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100844A4u);

L_100844A4:
    PUSH32(esp, ebp); /* 0x100844A4: push ebp */
    ebp = esp; /* 0x100844A5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100844A7: push ecx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100844A8: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100844C3; /* 0x100844AC: jne 0x100844c3 */
L_100844AE:
    RECOMP_CALL(sub_1001177D); /* 0x100844AE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100844B3: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100844B9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100844BE: push 0x16 */
    eax = POP32_VAL(esp); /* 0x100844C0: pop eax */
    goto L_100844DC; /* 0x100844C1: jmp 0x100844dc */
L_100844C3:
    eax = ebp + (-0x4); /* 0x100844C3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100844C6: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x100844C7: push 0x7fffffff */
    PUSH32(esp, 2); /* 0x100844CC: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100844CE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100844D1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008411C); /* 0x100844D4: call 0x1008411c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100844D9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_100844DC:
    esp = ebp; /* 0x100844DC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100844DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100844DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100844E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100844E0u);

L_100844E0:
    PUSH32(esp, 0xCu); /* 0x100844E0: push 0xc */
    PUSH32(esp, 0x10084550u); /* 0x100844E2: push 0x10084550 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100844E7: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100844EC: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100844F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0xC); /* 0x100844F2: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100844F5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100844F7: setne al */
    /* test eax, eax */ /* 0x100844FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084513; /* 0x100844FC: jne 0x10084513 */
L_100844FE:
    RECOMP_CALL(sub_1001177D); /* 0x100844FE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084503: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084509: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008450E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008453C; /* 0x10084511: jmp 0x1008453c */
L_10084513:
    PUSH32(esp, esi); /* 0x10084513: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10084514: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084519: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1008451A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1008451E: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008451F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001C4D0); /* 0x10084522: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084527: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10084528: pop ecx */
    edi = eax; /* 0x10084529: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1008452B: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1008452E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10084548); /* 0x10084535: call 0x10084548 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1008453A: mov eax, edi */
L_1008453C:
    RECOMP_CALL(sub_1000EDC3); /* 0x1008453C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084541: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084548(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084548u);

L_10084548:
    PUSH32(esp, esi); /* 0x10084548: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x10084549: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008454E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008454F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008456C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008456Cu);

L_1008456C:
    PUSH32(esp, 0xCu); /* 0x1008456C: push 0xc */
    PUSH32(esp, 0x100845E0u); /* 0x1008456E: push 0x100845e0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10084573: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10084578: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008457C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0xC); /* 0x1008457E: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x10084581: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10084583: setne al */
    /* test eax, eax */ /* 0x10084586: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100845A1; /* 0x10084588: jne 0x100845a1 */
L_1008458A:
    RECOMP_CALL(sub_1001177D); /* 0x1008458A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008458F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084595: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0xFFFFu; /* 0x1008459A: mov eax, 0xffff */
    goto L_100845CC; /* 0x1008459F: jmp 0x100845cc */
L_100845A1:
    PUSH32(esp, esi); /* 0x100845A1: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x100845A2: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100845A7: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100845A8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100845AC: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100845AD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001ED6E); /* 0x100845B0: call 0x1001ed6e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100845B5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100845B6: pop ecx */
    edi = (uint32_t)LO16(eax); /* 0x100845B7: movzx edi, ax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x100845BA: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100845BD: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100845D8); /* 0x100845C4: call 0x100845d8 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(edi)); /* 0x100845C9: mov ax, di */
L_100845CC:
    RECOMP_CALL(sub_1000EDC3); /* 0x100845CC: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100845D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100845D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100845D8u);

L_100845D8:
    PUSH32(esp, esi); /* 0x100845D8: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x100845D9: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100845DE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100845DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100845FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100845FCu);

L_100845FC:
    PUSH32(esp, ebp); /* 0x100845FC: push ebp */
    ebp = esp; /* 0x100845FD: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100845FF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084602: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084605: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10016C0Fu); /* 0x10084608: push 0x10016c0f */
    RECOMP_CALL(sub_10084ECB); /* 0x1008460D: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084612: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084615: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084616: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084617(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084617u);

L_10084617:
    PUSH32(esp, ebp); /* 0x10084617: push ebp */
    ebp = esp; /* 0x10084618: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008461A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1008461D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008461F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1008F202u); /* 0x10084622: push 0x1008f202 */
    RECOMP_CALL(sub_10084ECB); /* 0x10084627: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008462C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008462F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084630: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084631(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084631u);

L_10084631:
    PUSH32(esp, ebp); /* 0x10084631: push ebp */
    ebp = esp; /* 0x10084632: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084634: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084637: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008463A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1008F202u); /* 0x1008463D: push 0x1008f202 */
    RECOMP_CALL(sub_10084ECB); /* 0x10084642: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084647: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008464A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008464B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008464C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008464Cu);

L_1008464C:
    PUSH32(esp, ebp); /* 0x1008464C: push ebp */
    ebp = esp; /* 0x1008464D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008464F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084652: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084655: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10013BECu); /* 0x10084658: push 0x10013bec */
    RECOMP_CALL(sub_10084ECB); /* 0x1008465D: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084662: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084665: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084666: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084667(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084667u);

L_10084667:
    PUSH32(esp, ebp); /* 0x10084667: push ebp */
    ebp = esp; /* 0x10084668: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008466A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1008466D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008466F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10016C0Fu); /* 0x10084672: push 0x10016c0f */
    RECOMP_CALL(sub_10084ECB); /* 0x10084677: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008467C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008467F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084680: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084681(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084681u);

L_10084681:
    PUSH32(esp, ebp); /* 0x10084681: push ebp */
    ebp = esp; /* 0x10084682: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084684: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10084687: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084689: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10013BECu); /* 0x1008468C: push 0x10013bec */
    RECOMP_CALL(sub_10084ECB); /* 0x10084691: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084696: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084699: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008469A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008469B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008469Bu);

L_1008469B:
    PUSH32(esp, ebp); /* 0x1008469B: push ebp */
    ebp = esp; /* 0x1008469C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008469E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100846A1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100846A4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100846A7: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10016C0Fu); /* 0x100846AA: push 0x10016c0f */
    RECOMP_CALL(sub_1008472F); /* 0x100846AF: call 0x1008472f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100846B4: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100846B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100846B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100846B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100846B9u);

L_100846B9:
    PUSH32(esp, ebp); /* 0x100846B9: push ebp */
    ebp = esp; /* 0x100846BA: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100846BC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x100846BF: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100846C1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100846C4: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1008F202u); /* 0x100846C7: push 0x1008f202 */
    RECOMP_CALL(sub_1008472F); /* 0x100846CC: call 0x1008472f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100846D1: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100846D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100846D5: ret  */
    RECOMP_REGS_OUT();
}
