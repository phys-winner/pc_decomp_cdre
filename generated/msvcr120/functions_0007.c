#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10028D59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028D59u);

    goto L_10028D59;
L_10028D35:
    MEM32(ebp + (-0x24)) = ebx; /* 0x10028D35: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x10028D38: mov dword ptr [ebp - 0x28], ebx */
    goto L_10028E6D; /* 0x10028D3B: jmp 0x10028e6d */
L_10028D40:
    eax = MEM32(ebp + (-0x20)); /* 0x10028D40: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax); /* 0x10028D43: mov eax, dword ptr [eax] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10028D45: mov byte ptr [eax], bl */
    goto L_10028EA4; /* 0x10028D47: jmp 0x10028ea4 */
L_10028D4C:
    eax = MEM32(ebp + (-0x20)); /* 0x10028D4C: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax + 0x4); /* 0x10028D4F: mov eax, dword ptr [eax + 4] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10028D52: mov byte ptr [eax], bl */
    goto L_10028EDD; /* 0x10028D54: jmp 0x10028edd */
L_10028D59:
    PUSH32(esp, 0x30u); /* 0x10028D59: push 0x30 */
    PUSH32(esp, 0x10028F20u); /* 0x10028D5B: push 0x10028f20 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10028D60: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10028D65: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10028D67: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x10028D6A: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x10028D6D: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x10028D70: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x10028D73: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x34)) = ebx; /* 0x10028D76: mov dword ptr [ebp - 0x34], ebx */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x10028D79: mov dword ptr [ebp - 0x3c], ebx */
    PUSH32(esp, 7); /* 0x10028D7C: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10028D7E: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028D83: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10028D84: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_10028D1A); /* 0x10028D87: call 0x10028d1a */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x10028D8C: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x1C); /* 0x10028D8F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10028D92: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x10028D93: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028D98: pop ecx */
    /* test eax, eax */ /* 0x10028D99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056704; /* 0x10028D9B: jne 0x10056704 */
L_10028DA1:
    eax = ebp + (-0x24); /* 0x10028DA1: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x10028DA4: push eax */
    RECOMP_CALL(sub_10015B1A); /* 0x10028DA5: call 0x10015b1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028DAA: pop ecx */
    /* test eax, eax */ /* 0x10028DAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056704; /* 0x10028DAD: jne 0x10056704 */
L_10028DB3:
    eax = ebp + (-0x28); /* 0x10028DB3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10028DB6: push eax */
    RECOMP_CALL(sub_10015B33); /* 0x10028DB7: call 0x10015b33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028DBC: pop ecx */
    /* test eax, eax */ /* 0x10028DBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056704; /* 0x10028DBF: jne 0x10056704 */
L_10028DC5:
    RECOMP_CALL(sub_10020FA7); /* 0x10028DC5: call 0x10020fa7 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x10028DCA: mov dword ptr [ebp - 0x38], eax */
    MEM32(0x100E0BF8) = ebx; /* 0x10028DCD: mov dword ptr [0x100e0bf8], ebx */
    _flag_a = (uint32_t)((MEM32(0x100DFE2C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(0x100DFE2C) | 0xFFFFFFFFu));
    MEM32(0x100DFE2C) = MEM32(0x100DFE2C) | 0xFFFFFFFFu; /* 0x10028DD3: or dword ptr [0x100dfe2c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(0x100DFE20) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(0x100DFE20) | 0xFFFFFFFFu));
    MEM32(0x100DFE20) = MEM32(0x100DFE20) | 0xFFFFFFFFu; /* 0x10028DDA: or dword ptr [0x100dfe20], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10028F1Cu); /* 0x10028DE1: push 0x10028f1c */
    RECOMP_CALL(sub_10017060); /* 0x10028DE6: call 0x10017060 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028DEB: pop ecx */
    edi = eax; /* 0x10028DEC: mov edi, eax */
    MEM32(ebp + (-0x3C)) = edi; /* 0x10028DEE: mov dword ptr [ebp - 0x3c], edi */
    /* test edi, edi */ /* 0x10028DF1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056692; /* 0x10028DF3: jne 0x10056692 */
L_10028DF9:
    eax = MEM32(0x100E0BF4); /* 0x10028DF9: mov eax, dword ptr [0x100e0bf4] */
    /* test eax, eax */ /* 0x10028DFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005670E; /* 0x10028E00: jne 0x1005670e */
L_10028E06:
    PUSH32(esp, 0x100E0C00u); /* 0x10028E06: push 0x100e0c00 */
    RECOMP_ICALL(MEM32(0x100E5114)); /* 0x10028E0B: call dword ptr [0x100e5114] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10028E11: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10028E13: inc esi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10028E14: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028EDD; /* 0x10028E17: je 0x10028edd */
L_10028E1D:
    MEM32(0x100E0BF8) = esi; /* 0x10028E1D: mov dword ptr [0x100e0bf8], esi */
    ecx = (uint32_t)((int32_t)MEM32(0x100E0C00) * (int32_t)0x3Cu); /* 0x10028E23: imul ecx, dword ptr [0x100e0c00], 0x3c */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10028E2A: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp MEM16(0x100E0C46), 0 */ /* 0x10028E2D: cmp word ptr [0x100e0c46], 0 */
    _flag_a = (uint32_t)(MEM16(0x100E0C46)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028E43; /* 0x10028E35: je 0x10028e43 */
L_10028E37:
    eax = (uint32_t)((int32_t)MEM32(0x100E0C54) * (int32_t)0x3Cu); /* 0x10028E37: imul eax, dword ptr [0x100e0c54], 0x3c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10028E3E: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10028E40: mov dword ptr [ebp - 0x1c], ecx */
L_10028E43:
    /* cmp MEM16(0x100E0C9A), 0 */ /* 0x10028E43: cmp word ptr [0x100e0c9a], 0 */
    _flag_a = (uint32_t)(MEM16(0x100E0C9A)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028D35; /* 0x10028E4B: je 0x10028d35 */
L_10028E51:
    eax = MEM32(0x100E0CA8); /* 0x10028E51: mov eax, dword ptr [0x100e0ca8] */
    /* test eax, eax */ /* 0x10028E56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028D35; /* 0x10028E58: je 0x10028d35 */
L_10028E5E:
    MEM32(ebp + (-0x24)) = esi; /* 0x10028E5E: mov dword ptr [ebp - 0x24], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E0C54));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(0x100E0C54); /* 0x10028E61: sub eax, dword ptr [0x100e0c54] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x10028E67: imul eax, eax, 0x3c */
    MEM32(ebp + (-0x28)) = eax; /* 0x10028E6A: mov dword ptr [ebp - 0x28], eax */
L_10028E6D:
    eax = ebp + (-0x30); /* 0x10028E6D: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x10028E70: push eax */
    PUSH32(esp, ebx); /* 0x10028E71: push ebx */
    PUSH32(esp, 0x3Fu); /* 0x10028E72: push 0x3f */
    eax = MEM32(ebp + (-0x20)); /* 0x10028E74: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(eax)); /* 0x10028E77: push dword ptr [eax] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10028E79: push -1 */
    PUSH32(esp, 0x100E0C04u); /* 0x10028E7B: push 0x100e0c04 */
    PUSH32(esp, ebx); /* 0x10028E80: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x10028E81: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x10028E84: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10028E8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028D40; /* 0x10028E8C: je 0x10028d40 */
L_10028E92:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x10028E92: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10028D40; /* 0x10028E96: jne 0x10028d40 */
L_10028E9C:
    eax = MEM32(ebp + (-0x20)); /* 0x10028E9C: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax); /* 0x10028E9F: mov eax, dword ptr [eax] */
    MEM8(eax + 0x3F) = (uint8_t)(LO8(ebx)); /* 0x10028EA1: mov byte ptr [eax + 0x3f], bl */
L_10028EA4:
    eax = ebp + (-0x30); /* 0x10028EA4: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x10028EA7: push eax */
    PUSH32(esp, ebx); /* 0x10028EA8: push ebx */
    PUSH32(esp, 0x3Fu); /* 0x10028EA9: push 0x3f */
    eax = MEM32(ebp + (-0x20)); /* 0x10028EAB: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10028EAE: push dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10028EB1: push -1 */
    PUSH32(esp, 0x100E0C58u); /* 0x10028EB3: push 0x100e0c58 */
    PUSH32(esp, ebx); /* 0x10028EB8: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x10028EB9: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x10028EBC: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10028EC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028D4C; /* 0x10028EC4: je 0x10028d4c */
L_10028ECA:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x10028ECA: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10028D4C; /* 0x10028ECE: jne 0x10028d4c */
L_10028ED4:
    eax = MEM32(ebp + (-0x20)); /* 0x10028ED4: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax + 0x4); /* 0x10028ED7: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0x3F) = (uint8_t)(LO8(ebx)); /* 0x10028EDA: mov byte ptr [eax + 0x3f], bl */
L_10028EDD:
    MEM32(ebp + (-0x2C)) = esi; /* 0x10028EDD: mov dword ptr [ebp - 0x2c], esi */
L_10028EE0:
    esi = MEM32(ebp + (-0x1C)); /* 0x10028EE0: mov esi, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_10028D20); /* 0x10028EE3: call 0x10028d20 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x10028EE8: mov dword ptr [eax], esi */
    esi = MEM32(ebp + (-0x24)); /* 0x10028EEA: mov esi, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_10028D26); /* 0x10028EED: call 0x10028d26 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x10028EF2: mov dword ptr [eax], esi */
    esi = MEM32(ebp + (-0x28)); /* 0x10028EF4: mov esi, dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_10028F3C); /* 0x10028EF7: call 0x10028f3c */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x10028EFC: mov dword ptr [eax], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10028EFE: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10028D2C); /* 0x10028F05: call 0x10028d2c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x10028F0A: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056720; /* 0x10028F0E: je 0x10056720 */
L_10028F14:
    RECOMP_CALL(sub_1000EDC3); /* 0x10028F14: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028F19: ret  */
L_10056692:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x10056692: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028DF9; /* 0x10056694: je 0x10028df9 */
L_1005669A:
    eax = MEM32(0x100E0BF4); /* 0x1005669A: mov eax, dword ptr [0x100e0bf4] */
    /* test eax, eax */ /* 0x1005669F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100566C0; /* 0x100566A1: je 0x100566c0 */
L_100566A3:
    PUSH32(esp, eax); /* 0x100566A3: push eax */
    PUSH32(esp, edi); /* 0x100566A4: push edi */
    RECOMP_CALL(sub_1001413E); /* 0x100566A5: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100566AA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100566AB: pop ecx */
    /* test eax, eax */ /* 0x100566AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100566D8; /* 0x100566AE: je 0x100566d8 */
L_100566B0:
    eax = MEM32(0x100E0BF4); /* 0x100566B0: mov eax, dword ptr [0x100e0bf4] */
    /* test eax, eax */ /* 0x100566B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100566C0; /* 0x100566B7: je 0x100566c0 */
L_100566B9:
    PUSH32(esp, eax); /* 0x100566B9: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100566BA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100566BF: pop ecx */
L_100566C0:
    PUSH32(esp, edi); /* 0x100566C0: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x100566C1: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100566C6: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100566C7: push eax */
    RECOMP_CALL(sub_10012226); /* 0x100566C8: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100566CD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100566CE: pop ecx */
    MEM32(0x100E0BF4) = eax; /* 0x100566CF: mov dword ptr [0x100e0bf4], eax */
    /* test eax, eax */ /* 0x100566D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100566E4; /* 0x100566D6: jne 0x100566e4 */
L_100566D8:
    MEM32(ebp + (-0x2C)) = 1; /* 0x100566D8: mov dword ptr [ebp - 0x2c], 1 */
    RECOMP_BACKEDGE();
    goto L_10028EE0; /* 0x100566DF: jmp 0x10028ee0 */
L_100566E4:
    PUSH32(esp, edi); /* 0x100566E4: push edi */
    PUSH32(esp, edi); /* 0x100566E5: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x100566E6: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100566EB: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100566EC: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100566ED: push eax */
    PUSH32(esp, MEM32(0x100E0BF4)); /* 0x100566EE: push dword ptr [0x100e0bf4] */
    RECOMP_CALL(sub_100147CD); /* 0x100566F4: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100566F9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100566FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028EE0; /* 0x100566FE: je 0x10028ee0 */
L_10056704:
    PUSH32(esp, ebx); /* 0x10056704: push ebx */
    PUSH32(esp, ebx); /* 0x10056705: push ebx */
    PUSH32(esp, ebx); /* 0x10056706: push ebx */
    PUSH32(esp, ebx); /* 0x10056707: push ebx */
    PUSH32(esp, ebx); /* 0x10056708: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x10056709: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_1005670E:
    PUSH32(esp, eax); /* 0x1005670E: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005670F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10056714: pop ecx */
    MEM32(0x100E0BF4) = ebx; /* 0x10056715: mov dword ptr [0x100e0bf4], ebx */
    RECOMP_BACKEDGE();
    goto L_10028E06; /* 0x1005671B: jmp 0x10028e06 */
L_10056720:
    PUSH32(esp, 3); /* 0x10056720: push 3 */
    PUSH32(esp, edi); /* 0x10056722: push edi */
    PUSH32(esp, 0x40u); /* 0x10056723: push 0x40 */
    esi = MEM32(ebp + (-0x20)); /* 0x10056725: mov esi, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(esi)); /* 0x10056728: push dword ptr [esi] */
    RECOMP_CALL(sub_10012A18); /* 0x1005672A: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005672F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10056732: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056704; /* 0x10056734: jne 0x10056704 */
L_10056736:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 3; /* 0x10056736: add edi, 3 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi), 0x2Du */ /* 0x10056739: cmp byte ptr [edi], 0x2d */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056746; /* 0x1005673C: jne 0x10056746 */
L_1005673E:
    MEM32(ebp + (-0x34)) = 1; /* 0x1005673E: mov dword ptr [ebp - 0x34], 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10056745: inc edi */
    _flag_k = FK_INC;
L_10056746:
    PUSH32(esp, edi); /* 0x10056746: push edi */
    RECOMP_CALL(sub_1002E662); /* 0x10056747: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005674C: pop ecx */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xE10u); /* 0x1005674D: imul ecx, eax, 0xe10 */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10056753: mov dword ptr [ebp - 0x1c], ecx */
L_10056756:
    SET_LO8(eax, MEM8(edi)); /* 0x10056756: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x2Bu */ /* 0x10056758: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056764; /* 0x1005675A: je 0x10056764 */
L_1005675C:
    /* cmp LO8(eax), 0x30u */ /* 0x1005675C: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_10056776; /* 0x1005675E: jl 0x10056776 */
L_10056760:
    /* cmp LO8(eax), 0x39u */ /* 0x10056760: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_10056776; /* 0x10056762: jg 0x10056776 */
L_10056764:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10056764: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10056756; /* 0x10056765: jmp 0x10056756 */
L_10056776:
    /* cmp MEM8(edi), 0x3Au */ /* 0x10056776: cmp byte ptr [edi], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100567BD; /* 0x10056779: jne 0x100567bd */
L_1005677B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005677B: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x1005677C: push edi */
    RECOMP_CALL(sub_1002E662); /* 0x1005677D: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10056782: pop ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x10056783: imul eax, eax, 0x3c */
    ecx = MEM32(ebp + (-0x1C)); /* 0x10056786: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10056789: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1005678B: mov dword ptr [ebp - 0x1c], ecx */
    goto L_10056795; /* 0x1005678E: jmp 0x10056795 */
L_10056790:
    /* cmp LO8(eax), 0x39u */ /* 0x10056790: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005679B; /* 0x10056792: jg 0x1005679b */
L_10056794:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10056794: inc edi */
    _flag_k = FK_INC;
L_10056795:
    SET_LO8(eax, MEM8(edi)); /* 0x10056795: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x30u */ /* 0x10056797: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10056790; /* 0x10056799: jge 0x10056790 */
L_1005679B:
    /* cmp MEM8(edi), 0x3Au */ /* 0x1005679B: cmp byte ptr [edi], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100567BD; /* 0x1005679E: jne 0x100567bd */
L_100567A0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100567A0: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x100567A1: push edi */
    RECOMP_CALL(sub_1002E662); /* 0x100567A2: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100567A7: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x100567A8: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100567AB: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100567AD: mov dword ptr [ebp - 0x1c], ecx */
    goto L_100567B7; /* 0x100567B0: jmp 0x100567b7 */
L_100567B2:
    /* cmp LO8(eax), 0x39u */ /* 0x100567B2: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100567BD; /* 0x100567B4: jg 0x100567bd */
L_100567B6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100567B6: inc edi */
    _flag_k = FK_INC;
L_100567B7:
    SET_LO8(eax, MEM8(edi)); /* 0x100567B7: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x30u */ /* 0x100567B9: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_100567B2; /* 0x100567BB: jge 0x100567b2 */
L_100567BD:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x100567BD: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100567C8; /* 0x100567C1: je 0x100567c8 */
L_100567C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100567C3: neg ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100567C5: mov dword ptr [ebp - 0x1c], ecx */
L_100567C8:
    /* cmp MEM8(edi), 0 */ /* 0x100567C8: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100567EE; /* 0x100567CB: je 0x100567ee */
L_100567CD:
    MEM32(ebp + (-0x24)) = 1; /* 0x100567CD: mov dword ptr [ebp - 0x24], 1 */
    PUSH32(esp, 3); /* 0x100567D4: push 3 */
    PUSH32(esp, edi); /* 0x100567D6: push edi */
    PUSH32(esp, 0x40u); /* 0x100567D7: push 0x40 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x100567D9: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_10012A18); /* 0x100567DC: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100567E1: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100567E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056704; /* 0x100567E6: jne 0x10056704 */
L_100567EC:
    goto L_100567F6; /* 0x100567EC: jmp 0x100567f6 */
L_100567EE:
    MEM32(ebp + (-0x24)) = ebx; /* 0x100567EE: mov dword ptr [ebp - 0x24], ebx */
    eax = MEM32(esi + 0x4); /* 0x100567F1: mov eax, dword ptr [esi + 4] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x100567F4: mov byte ptr [eax], bl */
L_100567F6:
    esi = MEM32(ebp + (-0x1C)); /* 0x100567F6: mov esi, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_10028D20); /* 0x100567F9: call 0x10028d20 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100567FE: mov dword ptr [eax], esi */
    esi = MEM32(ebp + (-0x24)); /* 0x10056800: mov esi, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_10028D26); /* 0x10056803: call 0x10028d26 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x10056808: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_10028F14; /* 0x1005680A: jmp 0x10028f14 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028F1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028F1Cu);

L_10028F1C:
    PUSH32(esp, esp); /* 0x10028F1C: push esp */
    edx = POP32_VAL(esp); /* 0x10028F1D: pop edx */
    _flag_a = (uint32_t)(MEM8(eax + (-0x2))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x2)) = (uint8_t)(MEM8(eax + (-0x2)) + LO8(edx)); /* 0x10028F1E: add byte ptr [eax - 2], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028F24: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028F26: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, 0xFFu); /* 0x10028F28: mov al, 0xff */
    RECOMP_ITAIL(0x10028F2Au); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_10028F3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028F3Cu);

L_10028F3C:
    eax = 0x100DF288u; /* 0x10028F3C: mov eax, 0x100df288 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028F41: ret  */
    RECOMP_REGS_OUT();
}

void sub_10028F92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028F92u);

    goto L_10028F92;
L_10028F42:
    MEM32(0x100DFE34) = eax; /* 0x10028F42: mov dword ptr [0x100dfe34], eax */
    eax = ebp + (-0x4); /* 0x10028F47: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10028F4A: push eax */
    MEM32(0x100DFE30) = edi; /* 0x10028F4B: mov dword ptr [0x100dfe30], edi */
    RECOMP_CALL(sub_10015B33); /* 0x10028F51: call 0x10015b33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028F56: pop ecx */
    /* test eax, eax */ /* 0x10028F57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100568F1; /* 0x10028F59: jne 0x100568f1 */
L_10028F5F:
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x4)) * (int32_t)0x3E8u); /* 0x10028F5F: imul eax, dword ptr [ebp - 4], 0x3e8 */
    ecx = MEM32(0x100DFE34); /* 0x10028F66: mov ecx, dword ptr [0x100dfe34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10028F6C: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(0x100DFE34) = ecx; /* 0x10028F6E: mov dword ptr [0x100dfe34], ecx */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_100568D0; /* 0x10028F74: js 0x100568d0 */
L_10028F7A:
    eax = 0x05265C00u; /* 0x10028F7A: mov eax, 0x5265c00 */
    /* cmp ecx, eax */ /* 0x10028F7F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100568DE; /* 0x10028F81: jge 0x100568de */
L_10028F87:
    MEM32(0x100DFE2C) = ebx; /* 0x10028F87: mov dword ptr [0x100dfe2c], ebx */
    goto L_10029072; /* 0x10028F8D: jmp 0x10029072 */
L_10028F92:
    PUSH32(esp, ebp); /* 0x10028F92: push ebp */
    ebp = esp; /* 0x10028F93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10028F95: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10028F98: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x10028F9C: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10028FA0: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x10028FA1: mov ebx, dword ptr [ebp + 0x10] */
    eax = ebx; /* 0x10028FA4: mov eax, ebx */
    PUSH32(esp, esi); /* 0x10028FA6: push esi */
    PUSH32(esp, edi); /* 0x10028FA7: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056886; /* 0x10028FA8: jne 0x10056886 */
L_10028FAE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x10028FAE: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1005680F; /* 0x10028FB3: js 0x1005680f */
L_10028FB9:
    PUSH32(esp, 0x64u); /* 0x10028FB9: push 0x64 */
    MEM32(ebp + (-0xC)) = eax; /* 0x10028FBB: mov dword ptr [ebp - 0xc], eax */
    esi = 0x190u; /* 0x10028FBE: mov esi, 0x190 */
    ecx = POP32_VAL(esp); /* 0x10028FC3: pop ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10056819; /* 0x10028FC4: je 0x10056819 */
L_10028FCA:
    eax = ebx + 0x76C; /* 0x10028FCA: lea eax, [ebx + 0x76c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10028FD0: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10028FD1: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10028FD3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056826; /* 0x10028FD5: je 0x10056826 */
L_10028FDB:
    eax = MEM32(ebp + 0x14); /* 0x10028FDB: mov eax, dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10028FDE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10028FDE: shl eax, 2 */
    edi = MEM32(eax + 0x100DFE34); /* 0x10028FE1: mov edi, dword ptr [eax + 0x100dfe34] */
L_10028FE7:
    MEM32(ebp + 0xC) = eax; /* 0x10028FE7: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10028FEA: inc edi */
    _flag_k = FK_INC;
    eax = ebx + 0x12B; /* 0x10028FEB: lea eax, [ebx + 0x12b] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10028FF1: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10028FF2: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 7); /* 0x10028FF4: push 7 */
    esi = eax; /* 0x10028FF6: mov esi, eax */
    eax = ebx + (-0x1); /* 0x10028FF8: lea eax, [ebx - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10028FFB: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10028FFC: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x16Du); /* 0x10028FFE: imul ecx, ebx, 0x16d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x10029004: sub esi, eax */
    _flag_k = FK_CMP;
    eax = ebx + (-0x1); /* 0x10029006: lea eax, [ebx - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10029009: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1002900A: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1002900D: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1002900F: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF9C25u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFF9C25u; /* 0x10029012: add ecx, 0xffff9c25 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x10029018: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1002901A: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1002901C: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x18); /* 0x1002901E: mov ecx, dword ptr [ebp + 0x18] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10029021: cdq  */
    esi = POP32_VAL(esp); /* 0x10029022: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10029023: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)((int32_t)ecx * (int32_t)7); /* 0x10029025: imul eax, ecx, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10029028: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp edx, MEM32(ebp + 0x1C) */ /* 0x1002902A: cmp edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10056837; /* 0x1002902D: jle 0x10056837 */
L_10029033:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x1C); /* 0x10029033: add eax, dword ptr [ebp + 0x1c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10029036: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, 5 */ /* 0x10029038: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005683F; /* 0x1002903B: je 0x1005683f */
L_10029041:
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x24) * (int32_t)0x3Cu); /* 0x10029041: imul eax, dword ptr [ebp + 0x24], 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x28); /* 0x10029045: add eax, dword ptr [ebp + 0x28] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x10029048: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x2C); /* 0x1002904B: add eax, dword ptr [ebp + 0x2c] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x1002904E: imul eax, eax, 0x3e8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x30); /* 0x10029054: add eax, dword ptr [ebp + 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), 1 */ /* 0x10029057: cmp dword ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10028F42; /* 0x1002905B: jne 0x10028f42 */
L_10029061:
    MEM32(0x100DFE24) = edi; /* 0x10029061: mov dword ptr [0x100dfe24], edi */
    MEM32(0x100DFE28) = eax; /* 0x10029067: mov dword ptr [0x100dfe28], eax */
    MEM32(0x100DFE20) = ebx; /* 0x1002906C: mov dword ptr [0x100dfe20], ebx */
L_10029072:
    edi = POP32_VAL(esp); /* 0x10029072: pop edi */
    esi = POP32_VAL(esp); /* 0x10029073: pop esi */
    ebx = POP32_VAL(esp); /* 0x10029074: pop ebx */
    esp = ebp; /* 0x10029075: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10029077: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029078: ret  */
L_1005680F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005680F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x10056810: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10056813: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10028FB9; /* 0x10056814: jmp 0x10028fb9 */
L_10056819:
    eax = ebx; /* 0x10056819: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1005681B: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1005681C: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1005681E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028FCA; /* 0x10056820: je 0x10028fca */
L_10056826:
    eax = MEM32(ebp + 0x14); /* 0x10056826: mov eax, dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10056829: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10056829: shl eax, 2 */
    edi = MEM32(eax + 0x100DFE6C); /* 0x1005682C: mov edi, dword ptr [eax + 0x100dfe6c] */
    RECOMP_BACKEDGE();
    goto L_10028FE7; /* 0x10056832: jmp 0x10028fe7 */
L_10056837:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF9u; /* 0x10056837: add eax, -7 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10029033; /* 0x1005683A: jmp 0x10029033 */
L_1005683F:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1005683F: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056851; /* 0x10056843: jne 0x10056851 */
L_10056845:
    eax = ebx; /* 0x10056845: mov eax, ebx */
    PUSH32(esp, 0x64u); /* 0x10056847: push 0x64 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056849: cdq  */
    ecx = POP32_VAL(esp); /* 0x1005684A: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1005684B: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1005684D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005686E; /* 0x1005684F: jne 0x1005686e */
L_10056851:
    eax = ebx + 0x76C; /* 0x10056851: lea eax, [ebx + 0x76c] */
    ecx = 0x190u; /* 0x10056857: mov ecx, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1005685C: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1005685D: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1005685F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005686E; /* 0x10056861: je 0x1005686e */
L_10056863:
    eax = MEM32(ebp + 0xC); /* 0x10056863: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x100DFE38); /* 0x10056866: mov eax, dword ptr [eax + 0x100dfe38] */
    goto L_10056877; /* 0x1005686C: jmp 0x10056877 */
L_1005686E:
    eax = MEM32(ebp + 0xC); /* 0x1005686E: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x100DFE70); /* 0x10056871: mov eax, dword ptr [eax + 0x100dfe70] */
L_10056877:
    /* cmp edi, eax */ /* 0x10056877: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10029041; /* 0x10056879: jle 0x10029041 */
L_1005687F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x1005687F: sub edi, esi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_10029041; /* 0x10056881: jmp 0x10029041 */
L_10056886:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x10056886: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10056892; /* 0x1005688B: jns 0x10056892 */
L_1005688D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005688D: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x1005688E: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10056891: inc eax */
    _flag_k = FK_INC;
L_10056892:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100568A0; /* 0x10056892: jne 0x100568a0 */
L_10056894:
    eax = ebx; /* 0x10056894: mov eax, ebx */
    PUSH32(esp, 0x64u); /* 0x10056896: push 0x64 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056898: cdq  */
    ecx = POP32_VAL(esp); /* 0x10056899: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1005689A: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1005689C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100568BE; /* 0x1005689E: jne 0x100568be */
L_100568A0:
    eax = ebx + 0x76C; /* 0x100568A0: lea eax, [ebx + 0x76c] */
    ecx = 0x190u; /* 0x100568A6: mov ecx, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100568AB: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100568AC: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x100568AE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100568BE; /* 0x100568B0: je 0x100568be */
L_100568B2:
    eax = MEM32(ebp + 0x14); /* 0x100568B2: mov eax, dword ptr [ebp + 0x14] */
    edi = MEM32(eax * 4 + 0x100DFE34); /* 0x100568B5: mov edi, dword ptr [eax*4 + 0x100dfe34] */
    goto L_100568C8; /* 0x100568BC: jmp 0x100568c8 */
L_100568BE:
    eax = MEM32(ebp + 0x14); /* 0x100568BE: mov eax, dword ptr [ebp + 0x14] */
    edi = MEM32(eax * 4 + 0x100DFE6C); /* 0x100568C1: mov edi, dword ptr [eax*4 + 0x100dfe6c] */
L_100568C8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x20); /* 0x100568C8: add edi, dword ptr [ebp + 0x20] */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10029041; /* 0x100568CB: jmp 0x10029041 */
L_100568D0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x05265C00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x05265C00u; /* 0x100568D0: add ecx, 0x5265c00 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(0x100DFE30)); _flag_b = (uint32_t)(1);
    MEM32(0x100DFE30) = MEM32(0x100DFE30) - 1; /* 0x100568D6: dec dword ptr [0x100dfe30] */
    _flag_k = FK_DEC;
    goto L_100568E6; /* 0x100568DC: jmp 0x100568e6 */
L_100568DE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100568DE: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(0x100DFE30)); _flag_b = (uint32_t)(1);
    MEM32(0x100DFE30) = MEM32(0x100DFE30) + 1; /* 0x100568E0: inc dword ptr [0x100dfe30] */
    _flag_k = FK_INC;
L_100568E6:
    MEM32(0x100DFE34) = ecx; /* 0x100568E6: mov dword ptr [0x100dfe34], ecx */
    RECOMP_BACKEDGE();
    goto L_10028F87; /* 0x100568EC: jmp 0x10028f87 */
L_100568F1:
    PUSH32(esp, 0); /* 0x100568F1: push 0 */
    PUSH32(esp, 0); /* 0x100568F3: push 0 */
    PUSH32(esp, 0); /* 0x100568F5: push 0 */
    PUSH32(esp, 0); /* 0x100568F7: push 0 */
    PUSH32(esp, 0); /* 0x100568F9: push 0 */
    RECOMP_CALL(sub_100A469B); /* 0x100568FB: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10056900u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10029173(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029173u);

L_10029173:
    PUSH32(esp, 6); /* 0x10029173: push 6 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10029175: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002917A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002917B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10029207(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029207u);

L_10029207:
    PUSH32(esp, 0); /* 0x10029207: push 0 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10029209: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002920E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002920F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10029210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029210u);

    goto L_10029210;
L_1002917C:
    /* cmp edi, 0x15u */ /* 0x1002917C: cmp edi, 0x15 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029248; /* 0x1002917F: je 0x10029248 */
L_10029185:
    /* cmp edi, 0x16u */ /* 0x10029185: cmp edi, 0x16 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029248; /* 0x10029188: je 0x10029248 */
L_1002918E:
    /* cmp edi, 6 */ /* 0x1002918E: cmp edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029248; /* 0x10029191: je 0x10029248 */
L_10029197:
    /* cmp edi, 0xFu */ /* 0x10029197: cmp edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029248; /* 0x1002919A: je 0x10029248 */
L_100291A0:
    goto L_1005F267; /* 0x100291A0: jmp 0x1005f267 */
L_100291A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x100291A5: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005F362; /* 0x100291A8: je 0x1005f362 */
L_100291AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 9; /* 0x100291AE: sub eax, 9 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005F327; /* 0x100291B1: jne 0x1005f327 */
L_100291B7:
    PUSH32(esp, MEM32(0x100E0BF0)); /* 0x100291B7: push dword ptr [0x100e0bf0] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100291BD: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100291C3: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100291C5: mov dword ptr [ebp - 0x1c], esi */
    /* cmp ebx, 2 */ /* 0x100291C8: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100292AD; /* 0x100291CB: je 0x100292ad */
L_100291D1:
    PUSH32(esp, ebx); /* 0x100291D1: push ebx */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100291D2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0BF0) = eax; /* 0x100291D8: mov dword ptr [0x100e0bf0], eax */
    goto L_100292AD; /* 0x100291DD: jmp 0x100292ad */
L_10029210:
    PUSH32(esp, 0x14u); /* 0x10029210: push 0x14 */
    PUSH32(esp, 0x100292C8u); /* 0x10029212: push 0x100292c8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10029217: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002921C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x1002921E: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10029221: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & eax; /* 0x10029224: and dword ptr [ebp - 0x20], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x10029227: mov ebx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1002922A: mov edi, dword ptr [ebp + 8] */
    /* cmp ebx, 4 */ /* 0x1002922D: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100292EE; /* 0x10029230: je 0x100292ee */
L_10029236:
    /* cmp ebx, 3 */ /* 0x10029236: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100292EE; /* 0x10029239: je 0x100292ee */
L_1002923F:
    /* cmp edi, 2 */ /* 0x1002923F: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002917C; /* 0x10029242: jne 0x1002917c */
L_10029248:
    PUSH32(esp, 0); /* 0x10029248: push 0 */
    RECOMP_CALL(sub_1000EDD7); /* 0x1002924A: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002924F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10029250: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 2 */ /* 0x10029254: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100292E4; /* 0x10029257: jne 0x100292e4 */
L_1002925D:
    /* cmp MEM32(0x100E0CAC), 0 */ /* 0x1002925D: cmp dword ptr [0x100e0cac], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0CAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029281; /* 0x10029264: jne 0x10029281 */
L_10029266:
    PUSH32(esp, 1); /* 0x10029266: push 1 */
    PUSH32(esp, 0x100A485Bu); /* 0x10029268: push 0x100a485b */
    RECOMP_ICALL(MEM32(0x100E5284)); /* 0x1002926D: call dword ptr [0x100e5284] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x10029273: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005F30C; /* 0x10029276: jne 0x1005f30c */
L_1002927C:
    MEM32(0x100E0CAC) = eax; /* 0x1002927C: mov dword ptr [0x100e0cac], eax */
L_10029281:
    eax = edi + (-0x1); /* 0x10029281: lea eax, [edi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10029284: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100291A5; /* 0x10029285: jne 0x100291a5 */
L_1002928B:
    PUSH32(esp, MEM32(0x100E0BEC)); /* 0x1002928B: push dword ptr [0x100e0bec] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10029291: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10029297: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10029299: mov dword ptr [ebp - 0x1c], esi */
    /* cmp ebx, 2 */ /* 0x1002929C: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100292AD; /* 0x1002929F: je 0x100292ad */
L_100292A1:
    PUSH32(esp, ebx); /* 0x100292A1: push ebx */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100292A2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0BEC) = eax; /* 0x100292A8: mov dword ptr [0x100e0bec], eax */
L_100292AD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100292AD: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10029207); /* 0x100292B4: call 0x10029207 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x100292B9: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100292EE; /* 0x100292BD: jne 0x100292ee */
L_100292BF:
    eax = esi; /* 0x100292BF: mov eax, esi */
L_100292C1:
    RECOMP_CALL(sub_1000EDC3); /* 0x100292C1: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100292C6: ret  */
L_100292E4:
    /* cmp edi, 0x15u */ /* 0x100292E4: cmp edi, 0x15 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029281; /* 0x100292E7: jne 0x10029281 */
L_100292E9:
    RECOMP_BACKEDGE();
    goto L_1002925D; /* 0x100292E9: jmp 0x1002925d */
L_100292EE:
    /* cmp edi, 1 */ /* 0x100292EE: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005F398; /* 0x100292F1: jne 0x1005f398 */
L_100292F7:
    goto L_1005F3BC; /* 0x100292F7: jmp 0x1005f3bc */
L_1005F267:
    /* cmp edi, 8 */ /* 0x1005F267: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F27A; /* 0x1005F26A: je 0x1005f27a */
L_1005F26C:
    /* cmp edi, 4 */ /* 0x1005F26C: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F27A; /* 0x1005F26F: je 0x1005f27a */
L_1005F271:
    /* cmp edi, 0xBu */ /* 0x1005F271: cmp edi, 0xb */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100292EE; /* 0x1005F274: jne 0x100292ee */
L_1005F27A:
    RECOMP_CALL(sub_1000F720); /* 0x1005F27A: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005F27F: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x1005F281: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x1005F284: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100292EE; /* 0x1005F286: je 0x100292ee */
L_1005F28C:
    /* cmp MEM32(esi + 0x5C), 0x10011900u */ /* 0x1005F28C: cmp dword ptr [esi + 0x5c], 0x10011900 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0x10011900u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005F2C0; /* 0x1005F293: jne 0x1005f2c0 */
L_1005F295:
    PUSH32(esp, MEM32(0x1005F3C4)); /* 0x1005F295: push dword ptr [0x1005f3c4] */
    RECOMP_CALL(sub_10012226); /* 0x1005F29B: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005F2A0: pop ecx */
    MEM32(esi + 0x5C) = eax; /* 0x1005F2A1: mov dword ptr [esi + 0x5c], eax */
    /* test eax, eax */ /* 0x1005F2A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100292EE; /* 0x1005F2A6: je 0x100292ee */
L_1005F2AC:
    PUSH32(esp, MEM32(0x1005F3C4)); /* 0x1005F2AC: push dword ptr [0x1005f3c4] */
    PUSH32(esp, 0x10011900u); /* 0x1005F2B2: push 0x10011900 */
    PUSH32(esp, eax); /* 0x1005F2B7: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x1005F2B8: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005F2BD: add esp, 0xc */
    _flag_k = FK_ADD;
L_1005F2C0:
    PUSH32(esp, MEM32(esi + 0x5C)); /* 0x1005F2C0: push dword ptr [esi + 0x5c] */
    PUSH32(esp, edi); /* 0x1005F2C3: push edi */
    RECOMP_CALL(sub_100A4AFC); /* 0x1005F2C4: call 0x100a4afc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005F2C9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005F2CA: pop ecx */
    /* test eax, eax */ /* 0x1005F2CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100292EE; /* 0x1005F2CD: je 0x100292ee */
L_1005F2D3:
    esi = MEM32(eax + 0x8); /* 0x1005F2D3: mov esi, dword ptr [eax + 8] */
    /* cmp ebx, 2 */ /* 0x1005F2D6: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100292BF; /* 0x1005F2D9: je 0x100292bf */
L_1005F2DF:
    edx = eax + 0x4; /* 0x1005F2DF: lea edx, [eax + 4] */
    goto L_1005F302; /* 0x1005F2E2: jmp 0x1005f302 */
L_1005F2E4:
    MEM32(edx + 0x4) = ebx; /* 0x1005F2E4: mov dword ptr [edx + 4], ebx */
    edx = edx + 0xC; /* 0x1005F2E7: lea edx, [edx + 0xc] */
    ecx = (uint32_t)((int32_t)MEM32(0x10062754) * (int32_t)0xCu); /* 0x1005F2EA: imul ecx, dword ptr [0x10062754], 0xc */
    eax = MEM32(ebp + 0xC); /* 0x1005F2F1: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x5C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x5C); /* 0x1005F2F4: add ecx, dword ptr [eax + 0x5c] */
    _flag_k = FK_ADD;
    eax = edx + (-0x4); /* 0x1005F2F7: lea eax, [edx - 4] */
    /* cmp eax, ecx */ /* 0x1005F2FA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100292BF; /* 0x1005F2FC: jae 0x100292bf */
L_1005F302:
    /* cmp MEM32(edx), edi */ /* 0x1005F302: cmp dword ptr [edx], edi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100292BF; /* 0x1005F304: jne 0x100292bf */
L_1005F30A:
    RECOMP_BACKEDGE();
    goto L_1005F2E4; /* 0x1005F30A: jmp 0x1005f2e4 */
L_1005F30C:
    RECOMP_CALL(sub_1001E471); /* 0x1005F30C: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005F311: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005F313: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1005F319: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x20)) = 1; /* 0x1005F31B: mov dword ptr [ebp - 0x20], 1 */
    RECOMP_BACKEDGE();
    goto L_10029281; /* 0x1005F322: jmp 0x10029281 */
L_1005F327:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1005F327: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005F337; /* 0x1005F32A: je 0x1005f337 */
L_1005F32C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005F32C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005F362; /* 0x1005F32D: je 0x1005f362 */
L_1005F32F:
    esi = MEM32(ebp + (-0x24)); /* 0x1005F32F: mov esi, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_100292AD; /* 0x1005F332: jmp 0x100292ad */
L_1005F337:
    PUSH32(esp, MEM32(0x100E0EDC)); /* 0x1005F337: push dword ptr [0x100e0edc] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1005F33D: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005F343: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1005F345: mov dword ptr [ebp - 0x1c], esi */
    /* cmp ebx, 2 */ /* 0x1005F348: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100292AD; /* 0x1005F34B: je 0x100292ad */
L_1005F351:
    PUSH32(esp, ebx); /* 0x1005F351: push ebx */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1005F352: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0EDC) = eax; /* 0x1005F358: mov dword ptr [0x100e0edc], eax */
    RECOMP_BACKEDGE();
    goto L_100292AD; /* 0x1005F35D: jmp 0x100292ad */
L_1005F362:
    PUSH32(esp, MEM32(0x100E0EE0)); /* 0x1005F362: push dword ptr [0x100e0ee0] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1005F368: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005F36E: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1005F370: mov dword ptr [ebp - 0x1c], esi */
    /* cmp ebx, 2 */ /* 0x1005F373: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100292AD; /* 0x1005F376: je 0x100292ad */
L_1005F37C:
    PUSH32(esp, ebx); /* 0x1005F37C: push ebx */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1005F37D: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0EE0) = eax; /* 0x1005F383: mov dword ptr [0x100e0ee0], eax */
    RECOMP_BACKEDGE();
    goto L_100292AD; /* 0x1005F388: jmp 0x100292ad */
L_1005F398:
    /* cmp edi, 3 */ /* 0x1005F398: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F3BC; /* 0x1005F39B: je 0x1005f3bc */
L_1005F39D:
    /* cmp edi, 0xDu */ /* 0x1005F39D: cmp edi, 0xd */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F3BC; /* 0x1005F3A0: je 0x1005f3bc */
L_1005F3A2:
    /* cmp edi, 0xFu */ /* 0x1005F3A2: cmp edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005F3AC; /* 0x1005F3A5: jle 0x1005f3ac */
L_1005F3A7:
    /* cmp edi, 0x11u */ /* 0x1005F3A7: cmp edi, 0x11 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005F3BC; /* 0x1005F3AA: jle 0x1005f3bc */
L_1005F3AC:
    RECOMP_CALL(sub_1001177D); /* 0x1005F3AC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005F3B1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005F3B7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005F3BC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005F3BC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100292C1; /* 0x1005F3BF: jmp 0x100292c1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100292FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100292FCu);

L_100292FC:
    PUSH32(esp, ebp); /* 0x100292FC: push ebp */
    ebp = esp; /* 0x100292FD: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 5 */ /* 0x100292FF: cmp dword ptr [ebp + 8], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10029303: push esi */
    PUSH32(esp, edi); /* 0x10029304: push edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_100293A1; /* 0x10029305: ja 0x100293a1 */
L_1002930B:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1002930B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100293A1; /* 0x1002930F: je 0x100293a1 */
L_10029315:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10029315: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10029317: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x10029318: push edi */
    PUSH32(esp, 8); /* 0x10029319: push 8 */
    RECOMP_CALL(sub_10011208); /* 0x1002931B: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10029320: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10029322: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10029323: pop ecx */
    /* test esi, esi */ /* 0x10029324: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F85B; /* 0x10029326: je 0x1005f85b */
L_1002932C:
    PUSH32(esp, edi); /* 0x1002932C: push edi */
    PUSH32(esp, 0xB8u); /* 0x1002932D: push 0xb8 */
    RECOMP_CALL(sub_10011208); /* 0x10029332: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x10029337: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x10029339: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002933A: pop ecx */
    /* test eax, eax */ /* 0x1002933B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F86B; /* 0x1002933D: je 0x1005f86b */
L_10029343:
    PUSH32(esp, edi); /* 0x10029343: push edi */
    PUSH32(esp, 0x220u); /* 0x10029344: push 0x220 */
    RECOMP_CALL(sub_10011208); /* 0x10029349: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1002934E: mov dword ptr [esi + 4], eax */
    ecx = POP32_VAL(esp); /* 0x10029351: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10029352: pop ecx */
    /* test eax, eax */ /* 0x10029353: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F874; /* 0x10029355: je 0x1005f874 */
L_1002935B:
    PUSH32(esp, 0x100DF7C8u); /* 0x1002935B: push 0x100df7c8 */
    PUSH32(esp, MEM32(esi)); /* 0x10029360: push dword ptr [esi] */
    RECOMP_CALL(sub_10012D7A); /* 0x10029362: call 0x10012d7a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10029367: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002936A: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x1002936D: push dword ptr [esi] */
    RECOMP_CALL(sub_10013267); /* 0x1002936F: call 0x10013267 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10029374: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10029377: push dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1002937A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F887; /* 0x1002937C: je 0x1005f887 */
L_10029382:
    eax = MEM32(esi); /* 0x10029382: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10029384: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_10028C4C); /* 0x10029387: call 0x10028c4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002938C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002938D: pop ecx */
    /* test eax, eax */ /* 0x1002938E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F884; /* 0x10029390: jne 0x1005f884 */
L_10029396:
    eax = MEM32(esi + 0x4); /* 0x10029396: mov eax, dword ptr [esi + 4] */
    MEM32(eax) = edi; /* 0x10029399: mov dword ptr [eax], edi */
L_1002939B:
    eax = esi; /* 0x1002939B: mov eax, esi */
L_1002939D:
    edi = POP32_VAL(esp); /* 0x1002939D: pop edi */
    esi = POP32_VAL(esp); /* 0x1002939E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002939F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100293A0: ret  */
L_100293A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100293A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002939D; /* 0x100293A3: jmp 0x1002939d */
L_1005F85B:
    RECOMP_CALL(sub_1001177D); /* 0x1005F85B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1005F860: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_100293A1; /* 0x1005F866: jmp 0x100293a1 */
L_1005F86B:
    PUSH32(esp, esi); /* 0x1005F86B: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005F86C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
L_1005F871:
    ecx = POP32_VAL(esp); /* 0x1005F871: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1005F85B; /* 0x1005F872: jmp 0x1005f85b */
L_1005F874:
    PUSH32(esp, MEM32(esi)); /* 0x1005F874: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005F876: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005F87B: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005F87C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005F881: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1005F871; /* 0x1005F882: jmp 0x1005f871 */
L_1005F884:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1005F884: push dword ptr [esi + 4] */
L_1005F887:
    RECOMP_CALL(sub_1000ECE0); /* 0x1005F887: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1005F88C: push dword ptr [esi] */
    RECOMP_CALL(sub_10010E0A); /* 0x1005F88E: call 0x10010e0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1005F893: push dword ptr [esi] */
    RECOMP_CALL(sub_1001448C); /* 0x1005F895: call 0x1001448c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005F89A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005F89B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005F8A0: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1005F8A3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002939B; /* 0x1005F8A5: jmp 0x1002939b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100293A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100293A5u);

L_100293A5:
    PUSH32(esp, ebp); /* 0x100293A5: push ebp */
    ebp = esp; /* 0x100293A6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10Cu; /* 0x100293A8: sub esp, 0x10c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100293AE: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100293B3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100293B5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x100293B8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100293BB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100293BC: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 5 */ /* 0x100293BF: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10029403; /* 0x100293C2: ja 0x10029403 */
L_100293C4:
    /* test eax, eax */ /* 0x100293C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029403; /* 0x100293C6: je 0x10029403 */
L_100293C8:
    PUSH32(esp, 0x83u); /* 0x100293C8: push 0x83 */
    ecx = ebp + (-0x10C); /* 0x100293CD: lea ecx, [ebp - 0x10c] */
    PUSH32(esp, ecx); /* 0x100293D3: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100293D4: push -1 */
    PUSH32(esp, eax); /* 0x100293D6: push eax */
    PUSH32(esp, 0); /* 0x100293D7: push 0 */
    PUSH32(esp, 0); /* 0x100293D9: push 0 */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100293DB: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100293E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029403; /* 0x100293E3: je 0x10029403 */
L_100293E5:
    eax = ebp + (-0x10C); /* 0x100293E5: lea eax, [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x100293EB: push eax */
    PUSH32(esp, esi); /* 0x100293EC: push esi */
    RECOMP_CALL(sub_100292FC); /* 0x100293ED: call 0x100292fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100293F2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100293F3: pop ecx */
L_100293F4:
    ecx = MEM32(ebp + (-0x4)); /* 0x100293F4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100293F7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100293F9: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100293FA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100293FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10029401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029402: ret  */
L_10029403:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10029403: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100293F4; /* 0x10029405: jmp 0x100293f4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10029458(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029458u);

L_10029458:
    PUSH32(esp, 0xAu); /* 0x10029458: push 0xa */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002945A: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002945F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029460: ret  */
    RECOMP_REGS_OUT();
}

void sub_10029461(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029461u);

L_10029461:
    PUSH32(esp, ebp); /* 0x10029461: push ebp */
    ebp = esp; /* 0x10029462: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10029464: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10029467: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x10029468: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1002946B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AD8C; /* 0x1002946D: je 0x1005ad8c */
L_10029473:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10029473: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AD93; /* 0x10029477: je 0x1005ad93 */
L_1002947D:
    PUSH32(esp, edi); /* 0x1002947D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1002947E: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x10029481: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005ADAD; /* 0x10029483: je 0x1005adad */
L_10029489:
    PUSH32(esp, esi); /* 0x10029489: push esi */
    esi = 0x7FFFFFFFu; /* 0x1002948A: mov esi, 0x7fffffff */
    /* cmp ebx, esi */ /* 0x1002948F: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005ADC7; /* 0x10029491: ja 0x1005adc7 */
L_10029497:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10029497: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x1002949A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1002949D: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x100294A2: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0xA4); /* 0x100294A5: mov eax, dword ptr [eax + 0xa4] */
    /* test eax, eax */ /* 0x100294AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002981A; /* 0x100294AD: jne 0x1002981a */
L_100294B3:
    eax = MEM32(ebp + 0x8); /* 0x100294B3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100294B6: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x41u); /* 0x100294B8: push 0x41 */
    MEM32(ebp + 0x8) = eax; /* 0x100294BA: mov dword ptr [ebp + 8], eax */
    esi = POP32_VAL(esp); /* 0x100294BD: pop esi */
L_100294BE:
    eax = (uint32_t)MEM16(eax + edi); /* 0x100294BE: movzx eax, word ptr [eax + edi] */
    PUSH32(esp, 0x5Au); /* 0x100294C2: push 0x5a */
    edx = POP32_VAL(esp); /* 0x100294C4: pop edx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100294C5: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1002E405; /* 0x100294C8: jb 0x1002e405 */
L_100294CE:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100294CE: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1002E405; /* 0x100294D1: ja 0x1002e405 */
L_100294D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100294D7: add eax, 0x20 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)LO16(eax); /* 0x100294DA: movzx ecx, ax */
L_100294DD:
    eax = (uint32_t)MEM16(edi); /* 0x100294DD: movzx eax, word ptr [edi] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100294E0: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_10030ED6; /* 0x100294E3: jb 0x10030ed6 */
L_100294E9:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100294E9: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_10030ED6; /* 0x100294EC: ja 0x10030ed6 */
L_100294F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100294F2: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x100294F5: movzx edx, ax */
L_100294F8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x100294F8: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100294FB: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002950B; /* 0x100294FC: je 0x1002950b */
L_100294FE:
    /* test LO16(ecx), LO16(ecx) */ /* 0x100294FE: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002950B; /* 0x10029501: je 0x1002950b */
L_10029503:
    eax = MEM32(ebp + 0x8); /* 0x10029503: mov eax, dword ptr [ebp + 8] */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x10029506: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100294BE; /* 0x10029509: je 0x100294be */
L_1002950B:
    eax = (uint32_t)LO16(edx); /* 0x1002950B: movzx eax, dx */
    esi = (uint32_t)LO16(ecx); /* 0x1002950E: movzx esi, cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x10029511: sub esi, eax */
    _flag_k = FK_CMP;
L_10029513:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10029513: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029520; /* 0x10029517: je 0x10029520 */
L_10029519:
    ecx = MEM32(ebp + (-0x8)); /* 0x10029519: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1002951C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10029520:
    eax = esi; /* 0x10029520: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10029522: pop esi */
L_10029523:
    edi = POP32_VAL(esp); /* 0x10029523: pop edi */
L_10029524:
    ebx = POP32_VAL(esp); /* 0x10029524: pop ebx */
    esp = ebp; /* 0x10029525: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10029527: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029528: ret  */
L_1002981A:
    PUSH32(esp, ebx); /* 0x1002981A: push ebx */
    PUSH32(esp, edi); /* 0x1002981B: push edi */
    PUSH32(esp, ebx); /* 0x1002981C: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002981D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001u); /* 0x10029820: push 0x1001 */
    PUSH32(esp, eax); /* 0x10029825: push eax */
    RECOMP_CALL(sub_100297C2); /* 0x10029826: call 0x100297c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1002982B: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002982E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005ADDC; /* 0x10029830: je 0x1005addc */
L_10029836:
    esi = eax + (-0x2); /* 0x10029836: lea esi, [eax - 2] */
    RECOMP_BACKEDGE();
    goto L_10029513; /* 0x10029839: jmp 0x10029513 */
L_1002E405:
    ecx = eax; /* 0x1002E405: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_100294DD; /* 0x1002E407: jmp 0x100294dd */
L_10030ED6:
    edx = eax; /* 0x10030ED6: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_100294F8; /* 0x10030ED8: jmp 0x100294f8 */
L_1005AD8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005AD8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10029524; /* 0x1005AD8E: jmp 0x10029524 */
L_1005AD93:
    RECOMP_CALL(sub_1001177D); /* 0x1005AD93: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005AD98: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005AD9E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1005ADA3: mov eax, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_10029524; /* 0x1005ADA8: jmp 0x10029524 */
L_1005ADAD:
    RECOMP_CALL(sub_1001177D); /* 0x1005ADAD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005ADB2: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005ADB8: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1005ADBD: mov eax, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_10029523; /* 0x1005ADC2: jmp 0x10029523 */
L_1005ADC7:
    RECOMP_CALL(sub_1001177D); /* 0x1005ADC7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005ADCC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005ADD2: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10029520; /* 0x1005ADD7: jmp 0x10029520 */
L_1005ADDC:
    RECOMP_CALL(sub_1001177D); /* 0x1005ADDC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005ADE1: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_10029513; /* 0x1005ADE7: jmp 0x10029513 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10029529(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029529u);

L_10029529:
    PUSH32(esp, ebp); /* 0x10029529: push ebp */
    ebp = esp; /* 0x1002952A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002952C: push ecx */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1002952D: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10029534: push esi */
    PUSH32(esp, edi); /* 0x10029535: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005ACE6; /* 0x10029536: je 0x1005ace6 */
L_1002953C:
    PUSH32(esp, 0); /* 0x1002953C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002953E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10029541: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10029544: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10029461); /* 0x10029547: call 0x10029461 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002954C: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1002954F:
    edi = POP32_VAL(esp); /* 0x1002954F: pop edi */
    esi = POP32_VAL(esp); /* 0x10029550: pop esi */
    esp = ebp; /* 0x10029551: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10029553: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029554: ret  */
L_1005ACE6:
    edx = MEM32(ebp + 0x8); /* 0x1005ACE6: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1005ACE9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005AD07; /* 0x1005ACEB: jne 0x1005ad07 */
L_1005ACED:
    RECOMP_CALL(sub_1001177D); /* 0x1005ACED: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005ACF2: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005ACF8: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1005ACFD: mov eax, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_1002954F; /* 0x1005AD02: jmp 0x1002954f */
L_1005AD07:
    ecx = MEM32(ebp + 0xC); /* 0x1005AD07: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1005AD0A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005ACED; /* 0x1005AD0C: je 0x1005aced */
L_1005AD0E:
    edi = MEM32(ebp + 0x10); /* 0x1005AD0E: mov edi, dword ptr [ebp + 0x10] */
    esi = 0x7FFFFFFFu; /* 0x1005AD11: mov esi, 0x7fffffff */
    /* cmp edi, esi */ /* 0x1005AD16: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005AD31; /* 0x1005AD18: jbe 0x1005ad31 */
L_1005AD1A:
    RECOMP_CALL(sub_1001177D); /* 0x1005AD1A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005AD1F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005AD25: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005AD2A: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1002954F; /* 0x1005AD2C: jmp 0x1002954f */
L_1005AD31:
    PUSH32(esp, ebx); /* 0x1005AD31: push ebx */
    PUSH32(esp, 0x41u); /* 0x1005AD32: push 0x41 */
    ebx = POP32_VAL(esp); /* 0x1005AD34: pop ebx */
    PUSH32(esp, 0x5Au); /* 0x1005AD35: push 0x5a */
    esi = POP32_VAL(esp); /* 0x1005AD37: pop esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1005AD38: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x1005AD3A: mov dword ptr [ebp - 4], esi */
    goto L_1005AD42; /* 0x1005AD3D: jmp 0x1005ad42 */
L_1005AD3F:
    PUSH32(esp, 0x5Au); /* 0x1005AD3F: push 0x5a */
    esi = POP32_VAL(esp); /* 0x1005AD41: pop esi */
L_1005AD42:
    eax = (uint32_t)MEM16(edx + ecx); /* 0x1005AD42: movzx eax, word ptr [edx + ecx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1005AD46: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1005AD58; /* 0x1005AD49: jb 0x1005ad58 */
L_1005AD4B:
    /* cmp LO16(eax), LO16(esi) */ /* 0x1005AD4B: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1005AD58; /* 0x1005AD4E: ja 0x1005ad58 */
L_1005AD50:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1005AD50: add eax, 0x20 */
    _flag_k = FK_ADD;
    esi = (uint32_t)LO16(eax); /* 0x1005AD53: movzx esi, ax */
    goto L_1005AD5A; /* 0x1005AD56: jmp 0x1005ad5a */
L_1005AD58:
    esi = eax; /* 0x1005AD58: mov esi, eax */
L_1005AD5A:
    eax = (uint32_t)MEM16(ecx); /* 0x1005AD5A: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1005AD5D: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1005AD6E; /* 0x1005AD60: jb 0x1005ad6e */
L_1005AD62:
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1005AD62: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1005AD6E; /* 0x1005AD66: ja 0x1005ad6e */
L_1005AD68:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1005AD68: add eax, 0x20 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x1005AD6B: movzx eax, ax */
L_1005AD6E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1005AD6E: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005AD71: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005AD7E; /* 0x1005AD72: je 0x1005ad7e */
L_1005AD74:
    /* test LO16(esi), LO16(esi) */ /* 0x1005AD74: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AD7E; /* 0x1005AD77: je 0x1005ad7e */
L_1005AD79:
    /* cmp LO16(esi), LO16(eax) */ /* 0x1005AD79: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AD3F; /* 0x1005AD7C: je 0x1005ad3f */
L_1005AD7E:
    ecx = (uint32_t)LO16(eax); /* 0x1005AD7E: movzx ecx, ax */
    eax = (uint32_t)LO16(esi); /* 0x1005AD81: movzx eax, si */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1005AD84: sub eax, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1005AD86: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1002954F; /* 0x1005AD87: jmp 0x1002954f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10029555(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029555u);

L_10029555:
    PUSH32(esp, ebp); /* 0x10029555: push ebp */
    ebp = esp; /* 0x10029556: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10029558: push esi */
    esi = MEM32(0x100DF61C); /* 0x10029559: mov esi, dword ptr [0x100df61c] */
    PUSH32(esp, edi); /* 0x1002955F: push edi */
    /* test esi, esi */ /* 0x10029560: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029D92; /* 0x10029562: je 0x10029d92 */
L_10029568:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10029568: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100295B5; /* 0x1002956C: je 0x100295b5 */
L_1002956E:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002956E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10029571: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029576: pop ecx */
    edi = eax; /* 0x10029577: mov edi, eax */
L_10029579:
    ecx = MEM32(esi); /* 0x10029579: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1002957B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100295B5; /* 0x1002957D: je 0x100295b5 */
L_1002957F:
    PUSH32(esp, ecx); /* 0x1002957F: push ecx */
    RECOMP_CALL(sub_1000F1F3); /* 0x10029580: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029585: pop ecx */
    /* cmp eax, edi */ /* 0x10029586: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10029593; /* 0x10029588: jbe 0x10029593 */
L_1002958A:
    eax = MEM32(esi); /* 0x1002958A: mov eax, dword ptr [esi] */
    /* cmp MEM16(eax + edi * 2), 0x3Du */ /* 0x1002958C: cmp word ptr [eax + edi*2], 0x3d */
    _flag_a = (uint32_t)(MEM16(eax + edi * 2)) << 16; _flag_b = (uint32_t)(0x3Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029598; /* 0x10029591: je 0x10029598 */
L_10029593:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10029593: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10029579; /* 0x10029596: jmp 0x10029579 */
L_10029598:
    PUSH32(esp, edi); /* 0x10029598: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10029599: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1002959C: push eax */
    RECOMP_CALL(sub_10029529); /* 0x1002959D: call 0x10029529 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100295A2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100295A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10029593; /* 0x100295A7: jne 0x10029593 */
L_100295A9:
    eax = MEM32(esi); /* 0x100295A9: mov eax, dword ptr [esi] */
    eax = eax + edi * 2; /* 0x100295AB: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100295AE: add eax, 2 */
    _flag_k = FK_ADD;
L_100295B1:
    edi = POP32_VAL(esp); /* 0x100295B1: pop edi */
    esi = POP32_VAL(esp); /* 0x100295B2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100295B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100295B4: ret  */
L_100295B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100295B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100295B1; /* 0x100295B7: jmp 0x100295b1 */
L_10029D92:
    /* cmp MEM32(0x100DF618), esi */ /* 0x10029D92: cmp dword ptr [0x100df618], esi */
    _flag_a = (uint32_t)(MEM32(0x100DF618)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100295B5; /* 0x10029D98: je 0x100295b5 */
L_10029D9E:
    RECOMP_CALL(sub_100295B9); /* 0x10029D9E: call 0x100295b9 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E029C) = eax; /* 0x10029DA3: mov dword ptr [0x100e029c], eax */
    RECOMP_CALL(sub_10029704); /* 0x10029DA8: call 0x10029704 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10029DAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1005F520; /* 0x10029DAF: js 0x1005f520 */
L_10029DB5:
    esi = MEM32(0x100DF61C); /* 0x10029DB5: mov esi, dword ptr [0x100df61c] */
    /* test esi, esi */ /* 0x10029DBB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10029568; /* 0x10029DBD: jne 0x10029568 */
L_10029DC3:
    RECOMP_BACKEDGE();
    goto L_100295B5; /* 0x10029DC3: jmp 0x100295b5 */
L_10029DC8:
    /* test eax, eax */ /* 0x10029DC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029DB5; /* 0x10029DCA: je 0x10029db5 */
L_10029DCC:
    RECOMP_BACKEDGE();
    goto L_100295B5; /* 0x10029DCC: jmp 0x100295b5 */
L_1005F520:
    RECOMP_CALL(sub_100A4C6A); /* 0x1005F520: call 0x100a4c6a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10029DC8; /* 0x1005F525: jmp 0x10029dc8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100295B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100295B9u);

L_100295B9:
    PUSH32(esp, ebp); /* 0x100295B9: push ebp */
    ebp = esp; /* 0x100295BA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100295BC: push ecx */
    PUSH32(esp, edi); /* 0x100295BD: push edi */
    RECOMP_ICALL(MEM32(0x100E528C)); /* 0x100295BE: call dword ptr [0x100e528c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100295C4: mov edi, eax */
    /* test edi, edi */ /* 0x100295C6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029611; /* 0x100295C8: je 0x10029611 */
L_100295CA:
    PUSH32(esp, ebx); /* 0x100295CA: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100295CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100295CD: push esi */
    esi = edi; /* 0x100295CE: mov esi, edi */
    /* cmp MEM16(edi), LO16(ebx) */ /* 0x100295D0: cmp word ptr [edi], bx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100295E5; /* 0x100295D3: je 0x100295e5 */
L_100295D5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x100295D5: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x100295D8: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100295D5; /* 0x100295DB: jne 0x100295d5 */
L_100295DD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x100295DD: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x100295E0: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100295D5; /* 0x100295E3: jne 0x100295d5 */
L_100295E5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x100295E5: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x100295E7: add esi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x100295EA: push esi */
    RECOMP_CALL(sub_10012226); /* 0x100295EB: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x100295F0: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x100295F3: pop ecx */
    /* test eax, eax */ /* 0x100295F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029606; /* 0x100295F6: je 0x10029606 */
L_100295F8:
    PUSH32(esp, esi); /* 0x100295F8: push esi */
    PUSH32(esp, edi); /* 0x100295F9: push edi */
    PUSH32(esp, eax); /* 0x100295FA: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100295FB: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x10029600: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10029603: add esp, 0xc */
    _flag_k = FK_ADD;
L_10029606:
    PUSH32(esp, edi); /* 0x10029606: push edi */
    RECOMP_ICALL(MEM32(0x100E5290)); /* 0x10029607: call dword ptr [0x100e5290] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1002960D: pop esi */
    eax = ebx; /* 0x1002960E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x10029610: pop ebx */
L_10029611:
    edi = POP32_VAL(esp); /* 0x10029611: pop edi */
    esp = ebp; /* 0x10029612: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10029614: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029615: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002965B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002965Bu);

L_1002965B:
    PUSH32(esp, 7); /* 0x1002965B: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002965D: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029662: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029663: ret  */
    RECOMP_REGS_OUT();
}

void sub_10029664(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029664u);

    goto L_10029664;
L_1002965B:
    PUSH32(esp, 7); /* 0x1002965B: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002965D: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029662: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029663: ret  */
L_10029664:
    PUSH32(esp, 0xCu); /* 0x10029664: push 0xc */
    PUSH32(esp, 0x100296E8u); /* 0x10029666: push 0x100296e8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002966B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10029670: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x10029672: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 7); /* 0x10029675: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10029677: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002967C: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1002967D: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10029680: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10029682: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10029685: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10029687: setne al */
    /* test eax, eax */ /* 0x1002968A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F52A; /* 0x1002968C: je 0x1005f52a */
L_10029692:
    MEM32(ecx) = esi; /* 0x10029692: mov dword ptr [ecx], esi */
    edi = MEM32(ebp + 0xC); /* 0x10029694: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x10029697: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100329AF; /* 0x10029699: jne 0x100329af */
L_1002969F:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1002969F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100329C8; /* 0x100296A3: jne 0x100329c8 */
L_100296A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100296A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100296AB: inc eax */
    _flag_k = FK_INC;
L_100296AC:
    /* test eax, eax */ /* 0x100296AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F52A; /* 0x100296AE: je 0x1005f52a */
L_100296B4:
    /* test edi, edi */ /* 0x100296B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100329BE; /* 0x100296B6: jne 0x100329be */
L_100296BC:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100296BC: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_10029555); /* 0x100296BF: call 0x10029555 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100296C4: pop ecx */
    ebx = eax; /* 0x100296C5: mov ebx, eax */
    /* test ebx, ebx */ /* 0x100296C7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100329CF; /* 0x100296C9: jne 0x100329cf */
L_100296CF:
    MEM32(ebp + (-0x1C)) = esi; /* 0x100296CF: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100296D2: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002965B); /* 0x100296D9: call 0x1002965b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100296DE: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100296E0: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100296E5: ret  */
L_100329AF:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100329AF: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_100296A9; /* 0x100329B3: ja 0x100296a9 */
L_100329B9:
    goto L_1005F53E; /* 0x100329B9: jmp 0x1005f53e */
L_100329BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100329BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x100329C0: mov word ptr [edi], ax */
    RECOMP_BACKEDGE();
    goto L_100296BC; /* 0x100329C3: jmp 0x100296bc */
L_100329C8:
    eax = esi; /* 0x100329C8: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_100296AC; /* 0x100329CA: jmp 0x100296ac */
L_100329CF:
    PUSH32(esp, ebx); /* 0x100329CF: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x100329D0: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100329D5: pop ecx */
    ecx = eax + 0x1; /* 0x100329D6: lea ecx, [eax + 1] */
    eax = MEM32(ebp + 0x8); /* 0x100329D9: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x100329DC: mov dword ptr [eax], ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100329DE: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100296CF; /* 0x100329E2: je 0x100296cf */
L_100329E8:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x100329E8: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005F54B; /* 0x100329EB: ja 0x1005f54b */
L_100329F1:
    PUSH32(esp, ebx); /* 0x100329F1: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100329F2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100329F5: push edi */
    RECOMP_CALL(sub_10011693); /* 0x100329F6: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100329FB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100329FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100296CF; /* 0x10032A00: je 0x100296cf */
L_10032A06:
    goto L_1005F553; /* 0x10032A06: jmp 0x1005f553 */
L_1005F52A:
    RECOMP_CALL(sub_1001177D); /* 0x1005F52A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005F52F: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1005F531: pop esi */
    MEM32(eax) = esi; /* 0x1005F532: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005F534: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100296CF; /* 0x1005F539: jmp 0x100296cf */
L_1005F53E:
    /* test edi, edi */ /* 0x1005F53E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002969F; /* 0x1005F540: je 0x1002969f */
L_1005F546:
    RECOMP_BACKEDGE();
    goto L_100329C8; /* 0x1005F546: jmp 0x100329c8 */
L_1005F54B:
    PUSH32(esp, 0x22u); /* 0x1005F54B: push 0x22 */
    esi = POP32_VAL(esp); /* 0x1005F54D: pop esi */
    RECOMP_BACKEDGE();
    goto L_100296CF; /* 0x1005F54E: jmp 0x100296cf */
L_1005F553:
    PUSH32(esp, esi); /* 0x1005F553: push esi */
    PUSH32(esp, esi); /* 0x1005F554: push esi */
    PUSH32(esp, esi); /* 0x1005F555: push esi */
    PUSH32(esp, esi); /* 0x1005F556: push esi */
    PUSH32(esp, esi); /* 0x1005F557: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x1005F558: call 0x100a469b */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x1005F55D: mov esi, dword ptr [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_1002965B; /* 0x1005F560: jmp 0x1002965b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10029704(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029704u);

L_10029704:
    PUSH32(esp, ebx); /* 0x10029704: push ebx */
    PUSH32(esp, esi); /* 0x10029705: push esi */
    esi = MEM32(0x100E029C); /* 0x10029706: mov esi, dword ptr [0x100e029c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002970C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1002970E: push edi */
    edi = ebx; /* 0x1002970F: mov edi, ebx */
    /* test esi, esi */ /* 0x10029711: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029735; /* 0x10029713: je 0x10029735 */
L_10029715:
    eax = (uint32_t)MEM16(esi); /* 0x10029715: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x3Du); /* 0x10029718: push 0x3d */
    ecx = POP32_VAL(esp); /* 0x1002971A: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x1002971B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002973D; /* 0x1002971E: je 0x1002973d */
L_10029720:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10029720: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029726; /* 0x10029723: je 0x10029726 */
L_10029725:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10029725: inc edi */
    _flag_k = FK_INC;
L_10029726:
    PUSH32(esp, esi); /* 0x10029726: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10029727: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002972C: pop ecx */
    esi = esi + eax * 2; /* 0x1002972D: lea esi, [esi + eax*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10029730: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10029715; /* 0x10029733: jmp 0x10029715 */
L_10029735:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10029735: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100297BE; /* 0x10029738: jmp 0x100297be */
L_1002973D:
    eax = edi + 0x1; /* 0x1002973D: lea eax, [edi + 1] */
    PUSH32(esp, 4); /* 0x10029740: push 4 */
    PUSH32(esp, eax); /* 0x10029742: push eax */
    RECOMP_CALL(sub_10011208); /* 0x10029743: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10029748: mov edi, eax */
    MEM32(0x100DF61C) = edi; /* 0x1002974A: mov dword ptr [0x100df61c], edi */
    ecx = POP32_VAL(esp); /* 0x10029750: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10029751: pop ecx */
    /* test edi, edi */ /* 0x10029752: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029735; /* 0x10029754: je 0x10029735 */
L_10029756:
    esi = MEM32(0x100E029C); /* 0x10029756: mov esi, dword ptr [0x100e029c] */
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x1002975C: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100297AD; /* 0x1002975F: je 0x100297ad */
L_10029761:
    PUSH32(esp, esi); /* 0x10029761: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10029762: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029767: pop ecx */
    PUSH32(esp, 0x3Du); /* 0x10029768: push 0x3d */
    ebx = eax + 0x1; /* 0x1002976A: lea ebx, [eax + 1] */
    eax = POP32_VAL(esp); /* 0x1002976D: pop eax */
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1002976E: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002979D; /* 0x10029771: je 0x1002979d */
L_10029773:
    PUSH32(esp, 2); /* 0x10029773: push 2 */
    PUSH32(esp, ebx); /* 0x10029775: push ebx */
    RECOMP_CALL(sub_10011208); /* 0x10029776: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x1002977B: mov dword ptr [edi], eax */
    ecx = POP32_VAL(esp); /* 0x1002977D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002977E: pop ecx */
    /* test eax, eax */ /* 0x1002977F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053E75; /* 0x10029781: je 0x10053e75 */
L_10029787:
    PUSH32(esp, esi); /* 0x10029787: push esi */
    PUSH32(esp, ebx); /* 0x10029788: push ebx */
    PUSH32(esp, eax); /* 0x10029789: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1002978A: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002978F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10029792: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053E8F; /* 0x10029794: jne 0x10053e8f */
L_1002979A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1002979A: add edi, 4 */
    _flag_k = FK_ADD;
L_1002979D:
    esi = esi + ebx * 2; /* 0x1002979D: lea esi, [esi + ebx*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100297A0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x100297A2: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029761; /* 0x100297A5: jne 0x10029761 */
L_100297A7:
    esi = MEM32(0x100E029C); /* 0x100297A7: mov esi, dword ptr [0x100e029c] */
L_100297AD:
    PUSH32(esp, esi); /* 0x100297AD: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100297AE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E029C) = ebx; /* 0x100297B3: mov dword ptr [0x100e029c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100297B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = ebx; /* 0x100297BB: mov dword ptr [edi], ebx */
L_100297BD:
    ecx = POP32_VAL(esp); /* 0x100297BD: pop ecx */
L_100297BE:
    edi = POP32_VAL(esp); /* 0x100297BE: pop edi */
    esi = POP32_VAL(esp); /* 0x100297BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x100297C0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100297C1: ret  */
L_10053E75:
    PUSH32(esp, MEM32(0x100DF61C)); /* 0x10053E75: push dword ptr [0x100df61c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053E7B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100DF61C)); _flag_b = (uint32_t)(0);
    MEM32(0x100DF61C) = MEM32(0x100DF61C) & 0; /* 0x10053E80: and dword ptr [0x100df61c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10053E87: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100297BD; /* 0x10053E8A: jmp 0x100297bd */
L_10053E8F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10053E8F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10053E91: push eax */
    PUSH32(esp, eax); /* 0x10053E92: push eax */
    PUSH32(esp, eax); /* 0x10053E93: push eax */
    PUSH32(esp, eax); /* 0x10053E94: push eax */
    PUSH32(esp, eax); /* 0x10053E95: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x10053E96: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10053E9Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100297C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100297C2u);

L_100297C2:
    PUSH32(esp, ebp); /* 0x100297C2: push ebp */
    ebp = esp; /* 0x100297C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100297C5: push esi */
    esi = MEM32(ebp + 0x14); /* 0x100297C6: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x100297C9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100297DA; /* 0x100297CB: jle 0x100297da */
L_100297CD:
    PUSH32(esp, esi); /* 0x100297CD: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100297CE: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F810); /* 0x100297D1: call 0x1000f810 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100297D6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100297D7: pop ecx */
    esi = eax; /* 0x100297D8: mov esi, eax */
L_100297DA:
    eax = MEM32(ebp + 0x1C); /* 0x100297DA: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x100297DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100297EC; /* 0x100297DF: jle 0x100297ec */
L_100297E1:
    PUSH32(esp, eax); /* 0x100297E1: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100297E2: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1000F810); /* 0x100297E5: call 0x1000f810 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100297EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100297EB: pop ecx */
L_100297EC:
    /* test esi, esi */ /* 0x100297EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002980D; /* 0x100297EE: je 0x1002980d */
L_100297F0:
    /* test eax, eax */ /* 0x100297F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002980D; /* 0x100297F2: je 0x1002980d */
L_100297F4:
    PUSH32(esp, eax); /* 0x100297F4: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100297F5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x100297F8: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100297F9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100297FC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100297FF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014567); /* 0x10029802: call 0x10014567 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10029807: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1002980A:
    esi = POP32_VAL(esp); /* 0x1002980A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002980B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002980C: ret  */
L_1002980D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1002980D: sub esi, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005FBD3; /* 0x1002980F: jne 0x1005fbd3 */
L_10029815:
    goto L_1005FBCB; /* 0x10029815: jmp 0x1005fbcb */
L_1005FBCB:
    PUSH32(esp, 2); /* 0x1005FBCB: push 2 */
    eax = POP32_VAL(esp); /* 0x1005FBCD: pop eax */
    RECOMP_BACKEDGE();
    goto L_1002980A; /* 0x1005FBCE: jmp 0x1002980a */
L_1005FBD3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005FBD3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1005FBD5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x1005FBD7: setns al */
    eax = eax * 2 + 0x1; /* 0x1005FBDA: lea eax, [eax*2 + 1] */
    RECOMP_BACKEDGE();
    goto L_1002980A; /* 0x1005FBE1: jmp 0x1002980a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002983E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002983Eu);

L_1002983E:
    PUSH32(esp, ebp); /* 0x1002983E: push ebp */
    ebp = esp; /* 0x1002983F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10029841: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10029842: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10029845: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100298A2; /* 0x10029847: je 0x100298a2 */
L_10029849:
    eax = MEM32(esi); /* 0x10029849: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(0x100DF750) */ /* 0x1002984B: cmp eax, dword ptr [0x100df750] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF750));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002985A; /* 0x10029851: je 0x1002985a */
L_10029853:
    PUSH32(esp, eax); /* 0x10029853: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029854: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029859: pop ecx */
L_1002985A:
    eax = MEM32(esi + 0x4); /* 0x1002985A: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(0x100DF754) */ /* 0x1002985D: cmp eax, dword ptr [0x100df754] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF754));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002986C; /* 0x10029863: je 0x1002986c */
L_10029865:
    PUSH32(esp, eax); /* 0x10029865: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029866: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002986B: pop ecx */
L_1002986C:
    eax = MEM32(esi + 0x8); /* 0x1002986C: mov eax, dword ptr [esi + 8] */
    /* cmp eax, MEM32(0x100DF758) */ /* 0x1002986F: cmp eax, dword ptr [0x100df758] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF758));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002987E; /* 0x10029875: je 0x1002987e */
L_10029877:
    PUSH32(esp, eax); /* 0x10029877: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029878: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002987D: pop ecx */
L_1002987E:
    eax = MEM32(esi + 0x30); /* 0x1002987E: mov eax, dword ptr [esi + 0x30] */
    /* cmp eax, MEM32(0x100DF780) */ /* 0x10029881: cmp eax, dword ptr [0x100df780] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF780));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029890; /* 0x10029887: je 0x10029890 */
L_10029889:
    PUSH32(esp, eax); /* 0x10029889: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1002988A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002988F: pop ecx */
L_10029890:
    eax = MEM32(esi + 0x34); /* 0x10029890: mov eax, dword ptr [esi + 0x34] */
    /* cmp eax, MEM32(0x100DF784) */ /* 0x10029893: cmp eax, dword ptr [0x100df784] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF784));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100298A2; /* 0x10029899: je 0x100298a2 */
L_1002989B:
    PUSH32(esp, eax); /* 0x1002989B: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1002989C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100298A1: pop ecx */
L_100298A2:
    esi = POP32_VAL(esp); /* 0x100298A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100298A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100298A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100298FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100298FEu);

L_100298FE:
    PUSH32(esp, ebp); /* 0x100298FE: push ebp */
    ebp = esp; /* 0x100298FF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10029901: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10029902: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10029905: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100299F7; /* 0x10029907: je 0x100299f7 */
L_1002990D:
    eax = MEM32(esi + 0xC); /* 0x1002990D: mov eax, dword ptr [esi + 0xc] */
    /* cmp eax, MEM32(0x100DF75C) */ /* 0x10029910: cmp eax, dword ptr [0x100df75c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF75C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002991F; /* 0x10029916: je 0x1002991f */
L_10029918:
    PUSH32(esp, eax); /* 0x10029918: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029919: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002991E: pop ecx */
L_1002991F:
    eax = MEM32(esi + 0x10); /* 0x1002991F: mov eax, dword ptr [esi + 0x10] */
    /* cmp eax, MEM32(0x100DF760) */ /* 0x10029922: cmp eax, dword ptr [0x100df760] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF760));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029931; /* 0x10029928: je 0x10029931 */
L_1002992A:
    PUSH32(esp, eax); /* 0x1002992A: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1002992B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029930: pop ecx */
L_10029931:
    eax = MEM32(esi + 0x14); /* 0x10029931: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, MEM32(0x100DF764) */ /* 0x10029934: cmp eax, dword ptr [0x100df764] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF764));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029943; /* 0x1002993A: je 0x10029943 */
L_1002993C:
    PUSH32(esp, eax); /* 0x1002993C: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1002993D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029942: pop ecx */
L_10029943:
    eax = MEM32(esi + 0x18); /* 0x10029943: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, MEM32(0x100DF768) */ /* 0x10029946: cmp eax, dword ptr [0x100df768] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF768));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029955; /* 0x1002994C: je 0x10029955 */
L_1002994E:
    PUSH32(esp, eax); /* 0x1002994E: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1002994F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029954: pop ecx */
L_10029955:
    eax = MEM32(esi + 0x1C); /* 0x10029955: mov eax, dword ptr [esi + 0x1c] */
    /* cmp eax, MEM32(0x100DF76C) */ /* 0x10029958: cmp eax, dword ptr [0x100df76c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF76C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029967; /* 0x1002995E: je 0x10029967 */
L_10029960:
    PUSH32(esp, eax); /* 0x10029960: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029961: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029966: pop ecx */
L_10029967:
    eax = MEM32(esi + 0x20); /* 0x10029967: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, MEM32(0x100DF770) */ /* 0x1002996A: cmp eax, dword ptr [0x100df770] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF770));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029979; /* 0x10029970: je 0x10029979 */
L_10029972:
    PUSH32(esp, eax); /* 0x10029972: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029973: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029978: pop ecx */
L_10029979:
    eax = MEM32(esi + 0x24); /* 0x10029979: mov eax, dword ptr [esi + 0x24] */
    /* cmp eax, MEM32(0x100DF774) */ /* 0x1002997C: cmp eax, dword ptr [0x100df774] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF774));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002998B; /* 0x10029982: je 0x1002998b */
L_10029984:
    PUSH32(esp, eax); /* 0x10029984: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029985: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002998A: pop ecx */
L_1002998B:
    eax = MEM32(esi + 0x38); /* 0x1002998B: mov eax, dword ptr [esi + 0x38] */
    /* cmp eax, MEM32(0x100DF788) */ /* 0x1002998E: cmp eax, dword ptr [0x100df788] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF788));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002999D; /* 0x10029994: je 0x1002999d */
L_10029996:
    PUSH32(esp, eax); /* 0x10029996: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029997: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002999C: pop ecx */
L_1002999D:
    eax = MEM32(esi + 0x3C); /* 0x1002999D: mov eax, dword ptr [esi + 0x3c] */
    /* cmp eax, MEM32(0x100DF78C) */ /* 0x100299A0: cmp eax, dword ptr [0x100df78c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF78C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100299AF; /* 0x100299A6: je 0x100299af */
L_100299A8:
    PUSH32(esp, eax); /* 0x100299A8: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100299A9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100299AE: pop ecx */
L_100299AF:
    eax = MEM32(esi + 0x40); /* 0x100299AF: mov eax, dword ptr [esi + 0x40] */
    /* cmp eax, MEM32(0x100DF790) */ /* 0x100299B2: cmp eax, dword ptr [0x100df790] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF790));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100299C1; /* 0x100299B8: je 0x100299c1 */
L_100299BA:
    PUSH32(esp, eax); /* 0x100299BA: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100299BB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100299C0: pop ecx */
L_100299C1:
    eax = MEM32(esi + 0x44); /* 0x100299C1: mov eax, dword ptr [esi + 0x44] */
    /* cmp eax, MEM32(0x100DF794) */ /* 0x100299C4: cmp eax, dword ptr [0x100df794] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF794));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100299D3; /* 0x100299CA: je 0x100299d3 */
L_100299CC:
    PUSH32(esp, eax); /* 0x100299CC: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100299CD: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100299D2: pop ecx */
L_100299D3:
    eax = MEM32(esi + 0x48); /* 0x100299D3: mov eax, dword ptr [esi + 0x48] */
    /* cmp eax, MEM32(0x100DF798) */ /* 0x100299D6: cmp eax, dword ptr [0x100df798] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF798));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100299E5; /* 0x100299DC: je 0x100299e5 */
L_100299DE:
    PUSH32(esp, eax); /* 0x100299DE: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100299DF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100299E4: pop ecx */
L_100299E5:
    eax = MEM32(esi + 0x4C); /* 0x100299E5: mov eax, dword ptr [esi + 0x4c] */
    /* cmp eax, MEM32(0x100DF79C) */ /* 0x100299E8: cmp eax, dword ptr [0x100df79c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DF79C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100299F7; /* 0x100299EE: je 0x100299f7 */
L_100299F0:
    PUSH32(esp, eax); /* 0x100299F0: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100299F1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100299F6: pop ecx */
L_100299F7:
    esi = POP32_VAL(esp); /* 0x100299F7: pop esi */
    ebp = POP32_VAL(esp); /* 0x100299F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100299F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100299FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100299FAu);

L_100299FA:
    PUSH32(esp, ebp); /* 0x100299FA: push ebp */
    ebp = esp; /* 0x100299FB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100299FD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100299FE: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10029A01: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029D77; /* 0x10029A03: je 0x10029d77 */
L_10029A09:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10029A09: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A0C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x10029A11: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A14: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x10029A19: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A1C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x10029A21: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A24: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x10029A29: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A2C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x10029A31: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A34: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x10029A39: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A3B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x10029A40: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A43: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x10029A48: push dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A4B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x10029A50: push dword ptr [esi + 0x28] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A53: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x10029A58: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A5B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x10029A60: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A63: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x10029A68: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A6B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x10029A70: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A73: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x10029A78: push dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A7B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x10029A80: push dword ptr [esi + 0x3c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A83: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x10029A88: add esp, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x10029A8B: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A8E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x10029A93: push dword ptr [esi + 0x44] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A96: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x48)); /* 0x10029A9B: push dword ptr [esi + 0x48] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029A9E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x10029AA3: push dword ptr [esi + 0x4c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AA6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x10029AAB: push dword ptr [esi + 0x50] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AAE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x10029AB3: push dword ptr [esi + 0x54] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AB6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x10029ABB: push dword ptr [esi + 0x58] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029ABE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x5C)); /* 0x10029AC3: push dword ptr [esi + 0x5c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AC6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x60)); /* 0x10029ACB: push dword ptr [esi + 0x60] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029ACE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x64)); /* 0x10029AD3: push dword ptr [esi + 0x64] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AD6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x10029ADB: push dword ptr [esi + 0x68] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029ADE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x6C)); /* 0x10029AE3: push dword ptr [esi + 0x6c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AE6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x70)); /* 0x10029AEB: push dword ptr [esi + 0x70] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AEE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x74)); /* 0x10029AF3: push dword ptr [esi + 0x74] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AF6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x78)); /* 0x10029AFB: push dword ptr [esi + 0x78] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029AFE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x7C)); /* 0x10029B03: push dword ptr [esi + 0x7c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B06: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x10029B0B: add esp, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x80)); /* 0x10029B0E: push dword ptr [esi + 0x80] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B14: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x84)); /* 0x10029B19: push dword ptr [esi + 0x84] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B1F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x88)); /* 0x10029B24: push dword ptr [esi + 0x88] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B2A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8C)); /* 0x10029B2F: push dword ptr [esi + 0x8c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B35: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x90)); /* 0x10029B3A: push dword ptr [esi + 0x90] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B40: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x94)); /* 0x10029B45: push dword ptr [esi + 0x94] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B4B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x98)); /* 0x10029B50: push dword ptr [esi + 0x98] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B56: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x9C)); /* 0x10029B5B: push dword ptr [esi + 0x9c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B61: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xA0)); /* 0x10029B66: push dword ptr [esi + 0xa0] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B6C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xA4)); /* 0x10029B71: push dword ptr [esi + 0xa4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B77: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xA8)); /* 0x10029B7C: push dword ptr [esi + 0xa8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B82: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xB8)); /* 0x10029B87: push dword ptr [esi + 0xb8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B8D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xBC)); /* 0x10029B92: push dword ptr [esi + 0xbc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029B98: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC0)); /* 0x10029B9D: push dword ptr [esi + 0xc0] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BA3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC4)); /* 0x10029BA8: push dword ptr [esi + 0xc4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BAE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC8)); /* 0x10029BB3: push dword ptr [esi + 0xc8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BB9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x10029BBE: add esp, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0xCC)); /* 0x10029BC1: push dword ptr [esi + 0xcc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BC7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xB4)); /* 0x10029BCC: push dword ptr [esi + 0xb4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BD2: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xD4)); /* 0x10029BD7: push dword ptr [esi + 0xd4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BDD: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xD8)); /* 0x10029BE2: push dword ptr [esi + 0xd8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BE8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xDC)); /* 0x10029BED: push dword ptr [esi + 0xdc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BF3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xE0)); /* 0x10029BF8: push dword ptr [esi + 0xe0] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029BFE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xE4)); /* 0x10029C03: push dword ptr [esi + 0xe4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C09: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xE8)); /* 0x10029C0E: push dword ptr [esi + 0xe8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C14: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xD0)); /* 0x10029C19: push dword ptr [esi + 0xd0] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C1F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xEC)); /* 0x10029C24: push dword ptr [esi + 0xec] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C2A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xF0)); /* 0x10029C2F: push dword ptr [esi + 0xf0] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C35: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xF4)); /* 0x10029C3A: push dword ptr [esi + 0xf4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C40: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x10029C45: push dword ptr [esi + 0xf8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C4B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xFC)); /* 0x10029C50: push dword ptr [esi + 0xfc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C56: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x100)); /* 0x10029C5B: push dword ptr [esi + 0x100] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C61: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x104)); /* 0x10029C66: push dword ptr [esi + 0x104] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C6C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x10029C71: add esp, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x108)); /* 0x10029C74: push dword ptr [esi + 0x108] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C7A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10C)); /* 0x10029C7F: push dword ptr [esi + 0x10c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C85: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x110)); /* 0x10029C8A: push dword ptr [esi + 0x110] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C90: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x114)); /* 0x10029C95: push dword ptr [esi + 0x114] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029C9B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x118)); /* 0x10029CA0: push dword ptr [esi + 0x118] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CA6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x11C)); /* 0x10029CAB: push dword ptr [esi + 0x11c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CB1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x120)); /* 0x10029CB6: push dword ptr [esi + 0x120] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CBC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x124)); /* 0x10029CC1: push dword ptr [esi + 0x124] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CC7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x128)); /* 0x10029CCC: push dword ptr [esi + 0x128] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CD2: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x12C)); /* 0x10029CD7: push dword ptr [esi + 0x12c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CDD: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x130)); /* 0x10029CE2: push dword ptr [esi + 0x130] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CE8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x134)); /* 0x10029CED: push dword ptr [esi + 0x134] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CF3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x138)); /* 0x10029CF8: push dword ptr [esi + 0x138] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029CFE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x13C)); /* 0x10029D03: push dword ptr [esi + 0x13c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D09: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x140)); /* 0x10029D0E: push dword ptr [esi + 0x140] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D14: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x144)); /* 0x10029D19: push dword ptr [esi + 0x144] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D1F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x10029D24: add esp, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x148)); /* 0x10029D27: push dword ptr [esi + 0x148] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D2D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x14C)); /* 0x10029D32: push dword ptr [esi + 0x14c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D38: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x150)); /* 0x10029D3D: push dword ptr [esi + 0x150] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D43: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x154)); /* 0x10029D48: push dword ptr [esi + 0x154] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D4E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x158)); /* 0x10029D53: push dword ptr [esi + 0x158] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D59: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x15C)); /* 0x10029D5E: push dword ptr [esi + 0x15c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D64: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x160)); /* 0x10029D69: push dword ptr [esi + 0x160] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D6F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x10029D74: add esp, 0x1c */
    _flag_k = FK_ADD;
L_10029D77:
    esi = POP32_VAL(esp); /* 0x10029D77: pop esi */
    ebp = POP32_VAL(esp); /* 0x10029D78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029D79: ret  */
    RECOMP_REGS_OUT();
}

void sub_10029E34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029E34u);

L_10029E34:
    RECOMP_CALL(sub_1000F750); /* 0x10029E34: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x6C); /* 0x10029E39: mov ecx, dword ptr [eax + 0x6c] */
    /* cmp ecx, MEM32(0x100DFA84) */ /* 0x10029E3C: cmp ecx, dword ptr [0x100dfa84] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100DFA84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005FC66; /* 0x10029E42: jne 0x1005fc66 */
L_10029E48:
    eax = MEM32(0x100DF74C); /* 0x10029E48: mov eax, dword ptr [0x100df74c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029E4D: ret  */
L_1005FC66:
    ecx = MEM32(0x100DFDD4); /* 0x1005FC66: mov ecx, dword ptr [0x100dfdd4] */
    /* test MEM32(eax + 0x70), ecx */ /* 0x1005FC6C: test dword ptr [eax + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10029E48; /* 0x1005FC6F: jne 0x10029e48 */
L_1005FC75:
    RECOMP_CALL(sub_10012C8B); /* 0x1005FC75: call 0x10012c8b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10029E48; /* 0x1005FC7A: jmp 0x10029e48 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10029E98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029E98u);

L_10029E98:
    ecx = MEM32(esp + 0x8); /* 0x10029E98: mov ecx, dword ptr [esp + 8] */
    eax = MEM32(esp + 0x4); /* 0x10029E9C: mov eax, dword ptr [esp + 4] */
    PUSH32(esp, edi); /* 0x10029EA0: push edi */
    PUSH32(esp, ebx); /* 0x10029EA1: push ebx */
    PUSH32(esp, esi); /* 0x10029EA2: push esi */
    /* cmp MEM32(0x100DF7C0), 1 */ /* 0x10029EA3: cmp dword ptr [0x100df7c0], 1 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10034BDD; /* 0x10029EAA: jb 0x10034bdd */
L_10029EB0:
    if (CMP_A(_flag_a, _flag_b)) goto L_1002F398; /* 0x10029EB0: ja 0x1002f398 */
L_10029EB6:
    edx = (uint32_t)MEM8(ecx); /* 0x10029EB6: movzx edx, byte ptr [ecx] */
    ebx = edx; /* 0x10029EB9: mov ebx, edx */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x10029EBB: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x10029EBB: shl edx, 8 */
    _flag_a = (uint32_t)((edx | ebx)); _flag_b = (uint32_t)((edx | ebx));
    edx = edx | ebx; /* 0x10029EBE: or edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029F40; /* 0x10029EC0: je 0x10029f40 */
L_10029EC2:
    _xmm[3].u64[0] = (uint32_t)(edx); _xmm[3].u64[1] = 0; /* 0x10029EC2: movd xmm3, edx */
    { xmm_t _s = _xmm[3]; _xmm[3].u64[1] = _s.u64[1]; _xmm[3].u16[0] = _s.u16[0]; _xmm[3].u16[1] = _s.u16[0]; _xmm[3].u16[2] = _s.u16[0]; _xmm[3].u16[3] = _s.u16[0]; } /* 0x10029EC6: pshuflw xmm3, xmm3, 0 */
    _xmm[3].u64[1] = _xmm[3].u64[0]; /* 0x10029ECB: movlhps xmm3, xmm3 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x10029ECE: pxor xmm0, xmm0 */
    esi = ecx; /* 0x10029ED2: mov esi, ecx */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10029ED4: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10029ED7:
    ebx = (uint32_t)MEM8(ecx); /* 0x10029ED7: movzx ebx, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x10029EDA: add ecx, 1 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x10029EDD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029EFD; /* 0x10029EDF: je 0x10029efd */
L_10029EE1:
    /* test ecx, 0xFu */ /* 0x10029EE1: test ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10029ED7; /* 0x10029EE7: jne 0x10029ed7 */
L_10029EE9:
    _xmm[2] = xmm_ld(ecx); /* 0x10029EE9: movdqa xmm2, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_xmm[2].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x10029EED: pcmpeqb xmm2, xmm0 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[2].u8[_k] >> 7) << _k; ebx = _m; } /* 0x10029EF1: pmovmskb ebx, xmm2 */
    /* test ebx, ebx */ /* 0x10029EF5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F3F3; /* 0x10029EF7: je 0x1002f3f3 */
L_10029EFD:
    edx = _xmm[3].u32[0]; /* 0x10029EFD: movd edx, xmm3 */
L_10029F01:
    ebx = 0xFFFu; /* 0x10029F01: mov ebx, 0xfff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    ebx = ebx & eax; /* 0x10029F06: and ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFF0u */ /* 0x10029F08: cmp ebx, 0xff0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10029F37; /* 0x10029F0E: ja 0x10029f37 */
L_10029F10:
    _xmm[1] = xmm_ld(eax); /* 0x10029F10: movdqu xmm1, xmmword ptr [eax] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x10029F14: pxor xmm2, xmm2 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_xmm[2].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x10029F18: pcmpeqb xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_xmm[1].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x10029F1C: pcmpeqb xmm1, xmm3 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x10029F20: por xmm1, xmm2 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[1].u8[_k] >> 7) << _k; ebx = _m; } /* 0x10029F24: pmovmskb ebx, xmm1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x10029F28: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x10029F2B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029F01; /* 0x10029F2D: je 0x10029f01 */
L_10029F2F:
    { uint32_t _v = ebx, _i; if (_v) { for (_i = 0; !((_v >> _i) & 1u); _i++) ; ebx = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x10029F2F: bsf ebx, ebx */
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10u; /* 0x10029F32: sub eax, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x10029F35: add eax, ebx */
    _flag_k = FK_ADD;
L_10029F37:
    ebx = (uint32_t)MEM8(eax); /* 0x10029F37: movzx ebx, byte ptr [eax] */
    /* test ebx, ebx */ /* 0x10029F3A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10029F44; /* 0x10029F3C: jne 0x10029f44 */
L_10029F3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10029F3E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10029F40:
    esi = POP32_VAL(esp); /* 0x10029F40: pop esi */
    ebx = POP32_VAL(esp); /* 0x10029F41: pop ebx */
    edi = POP32_VAL(esp); /* 0x10029F42: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029F43: ret  */
L_10029F44:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x10029F44: add eax, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(edx), LO8(ebx) */ /* 0x10029F47: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029F01; /* 0x10029F49: jne 0x10029f01 */
L_10029F4B:
    edx = eax; /* 0x10029F4B: mov edx, eax */
    ecx = esi + 0x1; /* 0x10029F4D: lea ecx, [esi + 1] */
L_10029F50:
    ebx = 0xFFFu; /* 0x10029F50: mov ebx, 0xfff */
    /* test edi, ecx */ /* 0x10029F55: test edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F353; /* 0x10029F57: je 0x1002f353 */
L_10029F5D:
    ebx = (uint32_t)MEM8(ecx); /* 0x10029F5D: movzx ebx, byte ptr [ecx] */
    /* test ebx, ebx */ /* 0x10029F60: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029F70; /* 0x10029F62: je 0x10029f70 */
L_10029F64:
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x10029F64: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029EFD; /* 0x10029F66: jne 0x10029efd */
L_10029F68:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x10029F68: add edx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x10029F6B: add ecx, 1 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10029F50; /* 0x10029F6E: jmp 0x10029f50 */
L_10029F70:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10029F70: dec eax */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x10029F71: pop esi */
    ebx = POP32_VAL(esp); /* 0x10029F72: pop ebx */
    edi = POP32_VAL(esp); /* 0x10029F73: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029F74: ret  */
L_1002F353:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x1002F353: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFF0u */ /* 0x1002F355: cmp ebx, 0xff0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10029F5D; /* 0x1002F35B: ja 0x10029f5d */
L_1002F361:
    _xmm[1] = xmm_ld(edx); /* 0x1002F361: movdqu xmm1, xmmword ptr [edx] */
    _xmm[2] = xmm_ld(ecx); /* 0x1002F365: movdqa xmm2, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_xmm[1].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x1002F369: pcmpeqb xmm1, xmm2 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_xmm[2].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x1002F36D: pcmpeqb xmm2, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_xmm[1].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x1002F371: pcmpeqb xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1002F375: por xmm2, xmm1 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[2].u8[_k] >> 7) << _k; ebx = _m; } /* 0x1002F379: pmovmskb ebx, xmm2 */
    /* test ebx, ebx */ /* 0x1002F37D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002F38C; /* 0x1002F37F: jne 0x1002f38c */
L_1002F381:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1002F381: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1002F384: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10029F50; /* 0x1002F387: jmp 0x10029f50 */
L_1002F38C:
    { uint32_t _v = ebx, _i; if (_v) { for (_i = 0; !((_v >> _i) & 1u); _i++) ; ebx = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x1002F38C: bsf ebx, ebx */
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x1002F38F: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1002F391: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10029F5D; /* 0x1002F393: jmp 0x10029f5d */
L_1002F398:
    /* cmp MEM8(ecx), 0 */ /* 0x1002F398: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10034B0E; /* 0x1002F39B: jne 0x10034b0e */
L_1002F3A1:
    RECOMP_BACKEDGE();
    goto L_10029F40; /* 0x1002F3A1: jmp 0x10029f40 */
L_1002F3F3:
    edi = 0xFu; /* 0x1002F3F3: mov edi, 0xf */
    RECOMP_BACKEDGE();
    goto L_10029EFD; /* 0x1002F3F8: jmp 0x10029efd */
L_100346A4:
    PUSH32(esp, ebx); /* 0x100346A4: push ebx */
    ebx = eax; /* 0x100346A5: mov ebx, eax */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x100346A7: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x100346A7: shl eax, 8 */
    edx = MEM32(esp + 0x8); /* 0x100346AA: mov edx, dword ptr [esp + 8] */
    /* test edx, 3 */ /* 0x100346AE: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100346CB; /* 0x100346B4: je 0x100346cb */
L_100346B6:
    SET_LO8(ecx, MEM8(edx)); /* 0x100346B6: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x100346B8: add edx, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x100346BB: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034718; /* 0x100346BD: je 0x10034718 */
L_100346BF:
    /* test LO8(ecx), LO8(ecx) */ /* 0x100346BF: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034714; /* 0x100346C1: je 0x10034714 */
L_100346C3:
    /* test edx, 3 */ /* 0x100346C3: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100346B6; /* 0x100346C9: jne 0x100346b6 */
L_100346CB:
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x100346CB: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100346CD: push edi */
    eax = ebx; /* 0x100346CE: mov eax, ebx */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100346D0: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100346D0: shl ebx, 0x10 */
    PUSH32(esp, esi); /* 0x100346D3: push esi */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x100346D4: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100346D6:
    ecx = MEM32(edx); /* 0x100346D6: mov ecx, dword ptr [edx] */
    edi = 0x7EFEFEFFu; /* 0x100346D8: mov edi, 0x7efefeff */
    eax = ecx; /* 0x100346DD: mov eax, ecx */
    esi = edi; /* 0x100346DF: mov esi, edi */
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x100346E1: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100346E3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x100346E5: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx ^ 0xFFFFFFFFu));
    ecx = ecx ^ 0xFFFFFFFFu; /* 0x100346E7: xor ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x100346EA: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x100346ED: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x100346EF: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x100346F1: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x81010100u);
    ecx = ecx & 0x81010100u; /* 0x100346F4: and ecx, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003471D; /* 0x100346FA: jne 0x1003471d */
L_100346FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    eax = eax & 0x81010100u; /* 0x100346FC: and eax, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100346D6; /* 0x10034701: je 0x100346d6 */
L_10034703:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01010100u);
    eax = eax & 0x01010100u; /* 0x10034703: and eax, 0x1010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034712; /* 0x10034708: jne 0x10034712 */
L_1003470A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80000000u);
    esi = esi & 0x80000000u; /* 0x1003470A: and esi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100346D6; /* 0x10034710: jne 0x100346d6 */
L_10034712:
    esi = POP32_VAL(esp); /* 0x10034712: pop esi */
    edi = POP32_VAL(esp); /* 0x10034713: pop edi */
L_10034714:
    ebx = POP32_VAL(esp); /* 0x10034714: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034715: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034717: ret  */
L_10034718:
    eax = edx + (-0x1); /* 0x10034718: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1003471B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003471C: ret  */
L_1003471D:
    eax = MEM32(edx + (-0x4)); /* 0x1003471D: mov eax, dword ptr [edx - 4] */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x10034720: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003475A; /* 0x10034722: je 0x1003475a */
L_10034724:
    /* test LO8(eax), LO8(eax) */ /* 0x10034724: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034712; /* 0x10034726: je 0x10034712 */
L_10034728:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x10034728: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034753; /* 0x1003472A: je 0x10034753 */
L_1003472C:
    /* test HI8(eax), HI8(eax) */ /* 0x1003472C: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034712; /* 0x1003472E: je 0x10034712 */
L_10034730:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x10034730: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x10034730: shr eax, 0x10 */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x10034733: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003474C; /* 0x10034735: je 0x1003474c */
L_10034737:
    /* test LO8(eax), LO8(eax) */ /* 0x10034737: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034712; /* 0x10034739: je 0x10034712 */
L_1003473B:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1003473B: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034745; /* 0x1003473D: je 0x10034745 */
L_1003473F:
    /* test HI8(eax), HI8(eax) */ /* 0x1003473F: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100346D6; /* 0x10034741: jne 0x100346d6 */
L_10034743:
    RECOMP_BACKEDGE();
    goto L_10034712; /* 0x10034743: jmp 0x10034712 */
L_10034745:
    esi = POP32_VAL(esp); /* 0x10034745: pop esi */
    edi = POP32_VAL(esp); /* 0x10034746: pop edi */
    eax = edx + (-0x1); /* 0x10034747: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1003474A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003474B: ret  */
L_1003474C:
    eax = edx + (-0x2); /* 0x1003474C: lea eax, [edx - 2] */
    esi = POP32_VAL(esp); /* 0x1003474F: pop esi */
    edi = POP32_VAL(esp); /* 0x10034750: pop edi */
    ebx = POP32_VAL(esp); /* 0x10034751: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034752: ret  */
L_10034753:
    eax = edx + (-0x3); /* 0x10034753: lea eax, [edx - 3] */
    esi = POP32_VAL(esp); /* 0x10034756: pop esi */
    edi = POP32_VAL(esp); /* 0x10034757: pop edi */
    ebx = POP32_VAL(esp); /* 0x10034758: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034759: ret  */
L_1003475A:
    eax = edx + (-0x4); /* 0x1003475A: lea eax, [edx - 4] */
    esi = POP32_VAL(esp); /* 0x1003475D: pop esi */
    edi = POP32_VAL(esp); /* 0x1003475E: pop edi */
    ebx = POP32_VAL(esp); /* 0x1003475F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034760: ret  */
L_10034B0E:
    edi = ecx; /* 0x10034B0E: mov edi, ecx */
    ebx = 0xFFFu; /* 0x10034B10: mov ebx, 0xfff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    ebx = ebx & ecx; /* 0x10034B15: and ebx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFF0u */ /* 0x10034B17: cmp ebx, 0xff0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10034B25; /* 0x10034B1D: ja 0x10034b25 */
L_10034B1F:
    _xmm[0] = xmm_ld(ecx); /* 0x10034B1F: movdqu xmm0, xmmword ptr [ecx] */
    goto L_10034B47; /* 0x10034B23: jmp 0x10034b47 */
L_10034B25:
    ebx = 0xFu; /* 0x10034B25: mov ebx, 0xf */
L_10034B2A:
    esi = (uint32_t)MEM8(ecx); /* 0x10034B2A: movzx esi, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x10034B2D: add ecx, 1 */
    _flag_k = FK_ADD;
L_10034B30:
    void_lift_trap(0x10034B30u, "pinsrb xmm0, esi, 0xf");
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 1 >= 0 && _k + 1 < 16) ? _s.u8[_k + 1] : 0; } /* 0x10034B36: psrldq xmm0, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10034B3B: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10034B47; /* 0x10034B3C: je 0x10034b47 */
L_10034B3E:
    /* test esi, esi */ /* 0x10034B3E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034B2A; /* 0x10034B40: jne 0x10034b2a */
L_10034B42:
    RECOMP_BACKEDGE();
    goto L_10034B30; /* 0x10034B42: jmp 0x10034b30 */
L_10034B44:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x10034B44: add eax, 1 */
    _flag_k = FK_ADD;
L_10034B47:
    edx = _xmm[0].u32[0]; /* 0x10034B47: movd edx, xmm0 */
L_10034B4B:
    ebx = 0xFFFu; /* 0x10034B4B: mov ebx, 0xfff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    ebx = ebx & eax; /* 0x10034B50: and ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFF0u */ /* 0x10034B52: cmp ebx, 0xff0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10034B6E; /* 0x10034B58: jbe 0x10034b6e */
L_10034B5A:
    ebx = (uint32_t)MEM8(eax); /* 0x10034B5A: movzx ebx, byte ptr [eax] */
    /* test ebx, ebx */ /* 0x10034B5D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029F3E; /* 0x10034B5F: je 0x10029f3e */
L_10034B65:
    /* cmp LO8(edx), LO8(ebx) */ /* 0x10034B65: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034B85; /* 0x10034B67: je 0x10034b85 */
L_10034B69:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x10034B69: add eax, 1 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10034B4B; /* 0x10034B6C: jmp 0x10034b4b */
L_10034B6E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x10034B6E: add eax, 0x10 */
    _flag_k = FK_ADD;
    { uint32_t _index, _f = recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df); _f = (_f & ~0x8D5u) | recomp_pcmpistri(_xmm[0], xmm_ld(eax + (-0x10)), 12u, &_index); ecx = _index; _flag_k = FK_EFLAGS; _flag_a = _f; _flag_b = 0; _cf = _f & 1u; } /* 0x10034B71: pcmpistri xmm0, xmmword ptr [eax - 0x10], 0xc */
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_10034B4B; /* 0x10034B78: ja 0x10034b4b */
L_10034B7A:
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10029F3E; /* 0x10034B7A: jae 0x10029f3e */
L_10034B80:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10u; /* 0x10034B80: sub eax, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10034B83: add eax, ecx */
    _flag_k = FK_ADD;
L_10034B85:
    edx = edi; /* 0x10034B85: mov edx, edi */
    esi = eax; /* 0x10034B87: mov esi, eax */
L_10034B89:
    ebx = 0xFFFu; /* 0x10034B89: mov ebx, 0xfff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    ebx = ebx & esi; /* 0x10034B8E: and ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFF0u */ /* 0x10034B90: cmp ebx, 0xff0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10034BC2; /* 0x10034B96: ja 0x10034bc2 */
L_10034B98:
    ebx = 0xFFFu; /* 0x10034B98: mov ebx, 0xfff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x10034B9D: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFF0u */ /* 0x10034B9F: cmp ebx, 0xff0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10034BC2; /* 0x10034BA5: ja 0x10034bc2 */
L_10034BA7:
    _xmm[1] = xmm_ld(edx); /* 0x10034BA7: movdqu xmm1, xmmword ptr [edx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x10034BAB: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x10034BAE: add edx, 0x10 */
    _flag_k = FK_ADD;
    { uint32_t _index, _f = recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df); _f = (_f & ~0x8D5u) | recomp_pcmpistri(_xmm[1], xmm_ld(esi + (-0x10)), 12u, &_index); ecx = _index; _flag_k = FK_EFLAGS; _flag_a = _f; _flag_b = 0; _cf = _f & 1u; } /* 0x10034BB1: pcmpistri xmm1, xmmword ptr [esi - 0x10], 0xc */
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NO)) goto L_10034B44; /* 0x10034BB8: jno 0x10034b44 */
L_10034BBA:
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10029F40; /* 0x10034BBA: js 0x10029f40 */
L_10034BC0:
    RECOMP_BACKEDGE();
    goto L_10034B89; /* 0x10034BC0: jmp 0x10034b89 */
L_10034BC2:
    ebx = (uint32_t)MEM8(edx); /* 0x10034BC2: movzx ebx, byte ptr [edx] */
    /* test ebx, ebx */ /* 0x10034BC5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029F40; /* 0x10034BC7: je 0x10029f40 */
L_10034BCD:
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x10034BCD: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10034B44; /* 0x10034BCF: jne 0x10034b44 */
L_10034BD5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034BD5: add esi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x10034BD8: add edx, 1 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10034B89; /* 0x10034BDB: jmp 0x10034b89 */
L_10034BDD:
    SET_LO8(edx, MEM8(ecx)); /* 0x10034BDD: mov dl, byte ptr [ecx] */
    edi = eax; /* 0x10034BDF: mov edi, eax */
    /* test LO8(edx), LO8(edx) */ /* 0x10034BE1: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034C54; /* 0x10034BE3: je 0x10034c54 */
L_10034BE5:
    SET_HI8(edx, MEM8(ecx + 0x1)); /* 0x10034BE5: mov dh, byte ptr [ecx + 1] */
    /* test HI8(edx), HI8(edx) */ /* 0x10034BE8: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034C41; /* 0x10034BEA: je 0x10034c41 */
L_10034BEC:
    esi = edi; /* 0x10034BEC: mov esi, edi */
    ecx = MEM32(esp + 0x14); /* 0x10034BEE: mov ecx, dword ptr [esp + 0x14] */
    SET_LO8(eax, MEM8(edi)); /* 0x10034BF2: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034BF4: add esi, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), LO8(edx) */ /* 0x10034BF7: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034C12; /* 0x10034BF9: je 0x10034c12 */
L_10034BFB:
    /* test LO8(eax), LO8(eax) */ /* 0x10034BFB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034C0C; /* 0x10034BFD: je 0x10034c0c */
L_10034BFF:
    SET_LO8(eax, MEM8(esi)); /* 0x10034BFF: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034C01: add esi, 1 */
    _flag_k = FK_ADD;
L_10034C04:
    /* cmp LO8(eax), LO8(edx) */ /* 0x10034C04: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034C12; /* 0x10034C06: je 0x10034c12 */
L_10034C08:
    /* test LO8(eax), LO8(eax) */ /* 0x10034C08: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034BFF; /* 0x10034C0A: jne 0x10034bff */
L_10034C0C:
    esi = POP32_VAL(esp); /* 0x10034C0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x10034C0D: pop ebx */
    edi = POP32_VAL(esp); /* 0x10034C0E: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034C0F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034C11: ret  */
L_10034C12:
    SET_LO8(eax, MEM8(esi)); /* 0x10034C12: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034C14: add esi, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), HI8(edx) */ /* 0x10034C17: cmp al, dh */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10034C04; /* 0x10034C19: jne 0x10034c04 */
L_10034C1B:
    edi = esi + (-0x1); /* 0x10034C1B: lea edi, [esi - 1] */
L_10034C1E:
    SET_HI8(eax, MEM8(ecx + 0x2)); /* 0x10034C1E: mov ah, byte ptr [ecx + 2] */
    /* test HI8(eax), HI8(eax) */ /* 0x10034C21: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034C4D; /* 0x10034C23: je 0x10034c4d */
L_10034C25:
    SET_LO8(eax, MEM8(esi)); /* 0x10034C25: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10034C27: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), HI8(eax) */ /* 0x10034C2A: cmp al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10034BEC; /* 0x10034C2C: jne 0x10034bec */
L_10034C2E:
    SET_LO8(eax, MEM8(ecx + 0x3)); /* 0x10034C2E: mov al, byte ptr [ecx + 3] */
    /* test LO8(eax), LO8(eax) */ /* 0x10034C31: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034C4D; /* 0x10034C33: je 0x10034c4d */
L_10034C35:
    SET_HI8(eax, MEM8(esi + (-0x1))); /* 0x10034C35: mov ah, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10034C38: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), HI8(eax) */ /* 0x10034C3B: cmp al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10034BEC; /* 0x10034C3D: jne 0x10034bec */
L_10034C3F:
    RECOMP_BACKEDGE();
    goto L_10034C1E; /* 0x10034C3F: jmp 0x10034c1e */
L_10034C41:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034C41: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10034C43: pop esi */
    ebx = POP32_VAL(esp); /* 0x10034C44: pop ebx */
    edi = POP32_VAL(esp); /* 0x10034C45: pop edi */
    SET_LO8(eax, LO8(edx)); /* 0x10034C46: mov al, dl */
    RECOMP_BACKEDGE();
    goto L_100346A4; /* 0x10034C48: jmp 0x100346a4 */
L_10034C4D:
    eax = edi + (-0x1); /* 0x10034C4D: lea eax, [edi - 1] */
    esi = POP32_VAL(esp); /* 0x10034C50: pop esi */
    ebx = POP32_VAL(esp); /* 0x10034C51: pop ebx */
    edi = POP32_VAL(esp); /* 0x10034C52: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034C53: ret  */
L_10034C54:
    eax = edi; /* 0x10034C54: mov eax, edi */
    esi = POP32_VAL(esp); /* 0x10034C56: pop esi */
    ebx = POP32_VAL(esp); /* 0x10034C57: pop ebx */
    edi = POP32_VAL(esp); /* 0x10034C58: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034C59: ret  */
    RECOMP_REGS_OUT();
}

void sub_10029F75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10029F75u);

L_10029F75:
    PUSH32(esp, ebp); /* 0x10029F75: push ebp */
    ebp = esp; /* 0x10029F76: mov ebp, esp */
    eax = ecx + 0x9; /* 0x10029F78: lea eax, [ecx + 9] */
    PUSH32(esp, eax); /* 0x10029F7B: push eax */
    eax = MEM32(ebp + 0x8); /* 0x10029F7C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x10029F7F: add eax, 9 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10029F82: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x10029F83: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029F88: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10029F89: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10029F8A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10029F8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x10029F8E: setg al */
    ebp = POP32_VAL(esp); /* 0x10029F91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10029F92: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1002A069(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A069u);

L_1002A069:
    PUSH32(esp, ebp); /* 0x1002A069: push ebp */
    ebp = esp; /* 0x1002A06A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1002A06C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x1002A06F: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x1002A072: push ebx */
    PUSH32(esp, edi); /* 0x1002A073: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002A074: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1002A077: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1002A07C: mov ebx, dword ptr [ebp + 8] */
    edi = 0x100u; /* 0x1002A07F: mov edi, 0x100 */
    /* cmp ebx, edi */ /* 0x1002A084: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100570BF; /* 0x1002A086: jae 0x100570bf */
L_1002A08C:
    ecx = MEM32(ebp + (-0x18)); /* 0x1002A08C: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x1002A08F: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10057090; /* 0x1002A093: jg 0x10057090 */
L_1002A099:
    eax = MEM32(ecx + 0x90); /* 0x1002A099: mov eax, dword ptr [ecx + 0x90] */
    eax = (uint32_t)MEM16(eax + ebx * 2); /* 0x1002A09F: movzx eax, word ptr [eax + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1002A0A3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002A0A6:
    /* test eax, eax */ /* 0x1002A0A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A0BC; /* 0x1002A0A8: jne 0x1002a0bc */
L_1002A0AA:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1002A0AA: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100570B3; /* 0x1002A0AE: jne 0x100570b3 */
L_1002A0B4:
    eax = ebx; /* 0x1002A0B4: mov eax, ebx */
L_1002A0B6:
    edi = POP32_VAL(esp); /* 0x1002A0B6: pop edi */
    ebx = POP32_VAL(esp); /* 0x1002A0B7: pop ebx */
    esp = ebp; /* 0x1002A0B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002A0BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A0BB: ret  */
L_1002A0BC:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1002A0BC: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ecx + 0x94); /* 0x1002A0C0: mov eax, dword ptr [ecx + 0x94] */
    ecx = (uint32_t)MEM8(eax + ebx); /* 0x1002A0C6: movzx ecx, byte ptr [eax + ebx] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100570A7; /* 0x1002A0CA: jne 0x100570a7 */
L_1002A0D0:
    eax = ecx; /* 0x1002A0D0: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_1002A0B6; /* 0x1002A0D2: jmp 0x1002a0b6 */
L_10057090:
    eax = ebp + (-0x18); /* 0x10057090: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x10057093: push eax */
    PUSH32(esp, 1); /* 0x10057094: push 1 */
    PUSH32(esp, ebx); /* 0x10057096: push ebx */
    RECOMP_CALL(sub_100895AC); /* 0x10057097: call 0x100895ac */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1005709C: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005709F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002A0A6; /* 0x100570A2: jmp 0x1002a0a6 */
L_100570A7:
    eax = MEM32(ebp + (-0x10)); /* 0x100570A7: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x100570AA: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A0D0; /* 0x100570AE: jmp 0x1002a0d0 */
L_100570B3:
    ecx = MEM32(ebp + (-0x10)); /* 0x100570B3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x100570B6: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A0B4; /* 0x100570BA: jmp 0x1002a0b4 */
L_100570BF:
    eax = MEM32(ebp + (-0x18)); /* 0x100570BF: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x100570C2: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100570F5; /* 0x100570C6: jle 0x100570f5 */
L_100570C8:
    eax = ebx; /* 0x100570C8: mov eax, ebx */
    ecx = ebp + (-0x18); /* 0x100570CA: lea ecx, [ebp - 0x18] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100570CD: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    MEM32(ebp + 0x8) = eax; /* 0x100570D0: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, ecx); /* 0x100570D3: push ecx */
    eax = (uint32_t)LO8(eax); /* 0x100570D4: movzx eax, al */
    PUSH32(esp, eax); /* 0x100570D7: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x100570D8: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100570DD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100570DE: pop ecx */
    /* test eax, eax */ /* 0x100570DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100570F5; /* 0x100570E1: je 0x100570f5 */
L_100570E3:
    eax = MEM32(ebp + 0x8); /* 0x100570E3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x100570E6: push 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x100570E8: mov byte ptr [ebp - 4], al */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ebx)); /* 0x100570EB: mov byte ptr [ebp - 3], bl */
    MEM8(ebp + (-0x2)) = (uint8_t)(0); /* 0x100570EE: mov byte ptr [ebp - 2], 0 */
    ecx = POP32_VAL(esp); /* 0x100570F2: pop ecx */
    goto L_1005710A; /* 0x100570F3: jmp 0x1005710a */
L_100570F5:
    RECOMP_CALL(sub_1001177D); /* 0x100570F5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100570FA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100570FC: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = 0x2Au; /* 0x100570FD: mov dword ptr [eax], 0x2a */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x10057103: mov byte ptr [ebp - 4], bl */
    MEM8(ebp + (-0x3)) = (uint8_t)(0); /* 0x10057106: mov byte ptr [ebp - 3], 0 */
L_1005710A:
    eax = MEM32(ebp + (-0x18)); /* 0x1005710A: mov eax, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x8); /* 0x1005710D: lea edx, [ebp - 8] */
    PUSH32(esp, 1); /* 0x10057110: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10057112: push dword ptr [eax + 4] */
    PUSH32(esp, 3); /* 0x10057115: push 3 */
    PUSH32(esp, edx); /* 0x10057117: push edx */
    PUSH32(esp, ecx); /* 0x10057118: push ecx */
    ecx = ebp + (-0x4); /* 0x10057119: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1005711C: push ecx */
    PUSH32(esp, edi); /* 0x1005711D: push edi */
    PUSH32(esp, MEM32(eax + 0xA8)); /* 0x1005711E: push dword ptr [eax + 0xa8] */
    eax = ebp + (-0x18); /* 0x10057124: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x10057127: push eax */
    RECOMP_CALL(sub_10020EFE); /* 0x10057128: call 0x10020efe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1005712D: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10057130: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057149; /* 0x10057132: jne 0x10057149 */
L_10057134:
    /* cmp MEM8(ebp + (-0xC)), LO8(eax) */ /* 0x10057134: cmp byte ptr [ebp - 0xc], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A0B4; /* 0x10057137: je 0x1002a0b4 */
L_1005713D:
    eax = MEM32(ebp + (-0x10)); /* 0x1005713D: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10057140: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A0B4; /* 0x10057144: jmp 0x1002a0b4 */
L_10057149:
    /* cmp eax, 1 */ /* 0x10057149: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057168; /* 0x1005714C: jne 0x10057168 */
L_1005714E:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1005714E: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (uint32_t)MEM8(ebp + (-0x8)); /* 0x10057152: movzx eax, byte ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A0B6; /* 0x10057156: je 0x1002a0b6 */
L_1005715C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1005715C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1005715F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A0B6; /* 0x10057163: jmp 0x1002a0b6 */
L_10057168:
    edx = (uint32_t)MEM8(ebp + (-0x8)); /* 0x10057168: movzx edx, byte ptr [ebp - 8] */
    eax = (uint32_t)MEM8(ebp + (-0x7)); /* 0x1005716C: movzx eax, byte ptr [ebp - 7] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x10057170: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x10057170: shl edx, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x10057173: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x10057175: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057182; /* 0x10057179: je 0x10057182 */
L_1005717B:
    ecx = MEM32(ebp + (-0x10)); /* 0x1005717B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1005717E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10057182:
    eax = edx; /* 0x10057182: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_1002A0B6; /* 0x10057184: jmp 0x1002a0b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A0D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A0D4u);

L_1002A0D4:
    PUSH32(esp, ebp); /* 0x1002A0D4: push ebp */
    ebp = esp; /* 0x1002A0D5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1002A0D7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1002A0DA: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1002A0DD: push ebx */
    PUSH32(esp, esi); /* 0x1002A0DE: push esi */
    PUSH32(esp, edi); /* 0x1002A0DF: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002A0E0: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1002A0E3: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1002A0E8: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1002A0EB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AA7B; /* 0x1002A0ED: je 0x1005aa7b */
L_1002A0F3:
    ebx = MEM32(ebp + 0xC); /* 0x1002A0F3: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1002A0F6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AA7B; /* 0x1002A0F8: je 0x1005aa7b */
L_1002A0FE:
    eax = MEM32(ebp + (-0x10)); /* 0x1002A0FE: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0xA8), 0 */ /* 0x1002A101: cmp dword ptr [eax + 0xa8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AA95; /* 0x1002A108: je 0x1005aa95 */
L_1002A10E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1002A10E: sub edi, ebx */
    _flag_k = FK_CMP;
L_1002A110:
    eax = (uint32_t)MEM8(edi + ebx); /* 0x1002A110: movzx eax, byte ptr [edi + ebx] */
    ecx = ebp + (-0x10); /* 0x1002A114: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1002A117: push ecx */
    PUSH32(esp, eax); /* 0x1002A118: push eax */
    RECOMP_CALL(sub_1002A069); /* 0x1002A119: call 0x1002a069 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x1002A11E: lea ecx, [ebp - 0x10] */
    esi = eax; /* 0x1002A121: mov esi, eax */
    eax = (uint32_t)MEM8(ebx); /* 0x1002A123: movzx eax, byte ptr [ebx] */
    PUSH32(esp, ecx); /* 0x1002A126: push ecx */
    PUSH32(esp, eax); /* 0x1002A127: push eax */
    RECOMP_CALL(sub_1002A069); /* 0x1002A128: call 0x1002a069 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A12D: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1002A130: inc ebx */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x1002A131: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A139; /* 0x1002A133: je 0x1002a139 */
L_1002A135:
    /* cmp esi, eax */ /* 0x1002A135: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A110; /* 0x1002A137: je 0x1002a110 */
L_1002A139:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1002A139: sub esi, eax */
    _flag_k = FK_CMP;
L_1002A13B:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1002A13B: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A148; /* 0x1002A13F: je 0x1002a148 */
L_1002A141:
    ecx = MEM32(ebp + (-0x8)); /* 0x1002A141: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1002A144: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002A148:
    edi = POP32_VAL(esp); /* 0x1002A148: pop edi */
    eax = esi; /* 0x1002A149: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002A14B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002A14C: pop ebx */
    esp = ebp; /* 0x1002A14D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002A14F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A150: ret  */
L_1005AA7B:
    RECOMP_CALL(sub_1001177D); /* 0x1005AA7B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005AA80: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005AA86: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    esi = 0x7FFFFFFFu; /* 0x1005AA8B: mov esi, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_1002A13B; /* 0x1005AA90: jmp 0x1002a13b */
L_1005AA95:
    PUSH32(esp, ebx); /* 0x1005AA95: push ebx */
    PUSH32(esp, edi); /* 0x1005AA96: push edi */
    RECOMP_CALL(sub_1009B6DA); /* 0x1005AA97: call 0x1009b6da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005AA9C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005AA9D: pop ecx */
    esi = eax; /* 0x1005AA9E: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_1002A13B; /* 0x1005AAA0: jmp 0x1002a13b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A151(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A151u);

L_1002A151:
    PUSH32(esp, ebp); /* 0x1002A151: push ebp */
    ebp = esp; /* 0x1002A152: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1002A154: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AA52; /* 0x1002A15B: je 0x1005aa52 */
L_1002A161:
    PUSH32(esp, 0); /* 0x1002A161: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002A163: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A166: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002A0D4); /* 0x1002A169: call 0x1002a0d4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002A16E: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002A171: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A172: ret  */
L_1005AA52:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1005AA52: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AA6F; /* 0x1005AA56: jne 0x1005aa6f */
L_1005AA58:
    RECOMP_CALL(sub_1001177D); /* 0x1005AA58: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005AA5D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005AA63: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1005AA68: mov eax, 0x7fffffff */
    ebp = POP32_VAL(esp); /* 0x1005AA6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005AA6E: ret  */
L_1005AA6F:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1005AA6F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AA58; /* 0x1005AA73: je 0x1005aa58 */
L_1005AA75:
    ebp = POP32_VAL(esp); /* 0x1005AA75: pop ebp */
    goto L_1009B6DA; /* 0x1005AA76: jmp 0x1009b6da */
L_1009B6DA:
    PUSH32(esp, ebp); /* 0x1009B6DA: push ebp */
    ebp = esp; /* 0x1009B6DB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009B6DD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1009B6DE: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1009B6E1: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1009B6E2: mov edi, dword ptr [ebp + 0xc] */
L_1009B6E5:
    ecx = (uint32_t)MEM8(esi); /* 0x1009B6E5: movzx ecx, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009B6E8: inc esi */
    _flag_k = FK_INC;
    eax = ecx + (-0x41); /* 0x1009B6E9: lea eax, [ecx - 0x41] */
    /* cmp eax, 0x19u */ /* 0x1009B6EC: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009B6F4; /* 0x1009B6EF: ja 0x1009b6f4 */
L_1009B6F1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x1009B6F1: add ecx, 0x20 */
    _flag_k = FK_ADD;
L_1009B6F4:
    edx = (uint32_t)MEM8(edi); /* 0x1009B6F4: movzx edx, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1009B6F7: inc edi */
    _flag_k = FK_INC;
    eax = edx + (-0x41); /* 0x1009B6F8: lea eax, [edx - 0x41] */
    /* cmp eax, 0x19u */ /* 0x1009B6FB: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009B703; /* 0x1009B6FE: ja 0x1009b703 */
L_1009B700:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x1009B700: add edx, 0x20 */
    _flag_k = FK_ADD;
L_1009B703:
    /* test ecx, ecx */ /* 0x1009B703: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009B70B; /* 0x1009B705: je 0x1009b70b */
L_1009B707:
    /* cmp ecx, edx */ /* 0x1009B707: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009B6E5; /* 0x1009B709: je 0x1009b6e5 */
L_1009B70B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1009B70B: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1009B70D: pop edi */
    eax = ecx; /* 0x1009B70E: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1009B710: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009B711: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009B712: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002A173(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A173u);

L_1002A173:
    PUSH32(esp, ebp); /* 0x1002A173: push ebp */
    ebp = esp; /* 0x1002A174: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002A176: push esi */
    esi = ecx; /* 0x1002A177: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1002A179: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1002A17C: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1002A180: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1002A187: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A198; /* 0x1002A18B: je 0x1002a198 */
L_1002A18D:
    PUSH32(esp, 1); /* 0x1002A18D: push 1 */
    eax = ebp + 0x8; /* 0x1002A18F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1002A192: push eax */
    RECOMP_CALL(sub_10023174); /* 0x1002A193: call 0x10023174 */
    RECOMP_FLAGS_IN();
L_1002A198:
    eax = esi; /* 0x1002A198: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002A19A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002A19B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1002A19C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1002A19F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A19Fu);

L_1002A19F:
    PUSH32(esp, ebp); /* 0x1002A19F: push ebp */
    ebp = esp; /* 0x1002A1A0: mov ebp, esp */
    edx = MEM32(ecx); /* 0x1002A1A2: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1002A1A4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002A1A5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002A1A8: push dword ptr [ebp + 0xc] */
    MEM32(esi) = edx; /* 0x1002A1AB: mov dword ptr [esi], edx */
    ecx = MEM32(ecx + 0x4); /* 0x1002A1AD: mov ecx, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x1002A1B0: mov dword ptr [esi + 4], ecx */
    ecx = esi; /* 0x1002A1B3: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A1B5: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1002A1BA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002A1BC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002A1BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002A1BE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1002A1C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A1C1u);

L_1002A1C1:
    PUSH32(esp, ebp); /* 0x1002A1C1: push ebp */
    ebp = esp; /* 0x1002A1C2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002A1C4: push esi */
    esi = ecx; /* 0x1002A1C5: mov esi, ecx */
    /* cmp MEM8(esi + 0x4), 1 */ /* 0x1002A1C7: cmp byte ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1002A202; /* 0x1002A1CB: jg 0x1002a202 */
L_1002A1CD:
    PUSH32(esp, ebx); /* 0x1002A1CD: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1002A1CE: mov ebx, dword ptr [ebp + 8] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1002A1D1: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A201; /* 0x1002A1D3: je 0x1002a201 */
L_1002A1D5:
    /* cmp MEM32(esi), 0 */ /* 0x1002A1D5: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B6BD; /* 0x1002A1D8: je 0x1005b6bd */
L_1002A1DE:
    PUSH32(esp, 0); /* 0x1002A1DE: push 0 */
    PUSH32(esp, 8); /* 0x1002A1E0: push 8 */
    ecx = 0x100E030Cu; /* 0x1002A1E2: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x1002A1E7: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002A1EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A209; /* 0x1002A1EE: je 0x1002a209 */
L_1002A1F0:
    MEM32(eax) = 0x1002A4F4u; /* 0x1002A1F0: mov dword ptr [eax], 0x1002a4f4 */
    MEM8(eax + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1002A1F6: mov byte ptr [eax + 4], bl */
L_1002A1F9:
    PUSH32(esp, eax); /* 0x1002A1F9: push eax */
    ecx = esi; /* 0x1002A1FA: mov ecx, esi */
    RECOMP_CALL(sub_10022CF3); /* 0x1002A1FC: call 0x10022cf3 */
    RECOMP_FLAGS_IN();
L_1002A201:
    ebx = POP32_VAL(esp); /* 0x1002A201: pop ebx */
L_1002A202:
    eax = esi; /* 0x1002A202: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002A204: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002A205: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1002A206: ret 4 */
L_1002A209:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002A209: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A1F9; /* 0x1002A20B: jmp 0x1002a1f9 */
L_1005B6BD:
    PUSH32(esp, ebx); /* 0x1005B6BD: push ebx */
    RECOMP_CALL(sub_1002A173); /* 0x1005B6BE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A201; /* 0x1005B6C3: jmp 0x1002a201 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A20D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A20Du);

L_1002A20D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002A20D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002A20F: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A210: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002A211(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A211u);

L_1002A211:
    PUSH32(esp, ebp); /* 0x1002A211: push ebp */
    ebp = esp; /* 0x1002A212: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1002A214: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1002A217: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1002A222; /* 0x1002A21A: jae 0x1002a222 */
L_1002A21C:
    SET_LO8(ecx, MEM8(ecx + 0x4)); /* 0x1002A21C: mov cl, byte ptr [ecx + 4] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1002A21F: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002A221: inc eax */
    _flag_k = FK_INC;
L_1002A222:
    ebp = POP32_VAL(esp); /* 0x1002A222: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002A223: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1002A3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A3D0u);

    goto L_1002A3D0;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A3D0:
    edi = POP32_VAL(esp); /* 0x1002A3D0: pop edi */
    edi = POP32_VAL(esp); /* 0x1002A3D1: pop edi */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x5F900038u); /* 0x1002A3D2: imul ebp, dword ptr [esi + 0x74], 0x5f900038 */
    edi = POP32_VAL(esp); /* 0x1002A3D9: pop edi */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x3C003631u); /* 0x1002A3DA: imul ebp, dword ptr [esi + 0x74], 0x3c003631 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1002A451; /* 0x1002A3E1: jne 0x1002a451 */
L_1002A3E3:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77u); /* 0x1002A3E3: imul ebp, dword ptr [esi + 0x6f], 0x77 */
    /* outsb: no port I/O under Win32 */ /* 0x1002A3E7: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + 0x775F5F90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x775F5F90) = (uint8_t)(MEM8(eax + 0x775F5F90) + LO8(edx)); /* 0x1002A3E8: add byte ptr ds:[eax + 0x775f5f90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x20u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x20u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x20u); /* 0x1002A3EF: xor al, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x4E4B4E55)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4E4B4E55) = (uint8_t)(MEM8(eax + 0x4E4B4E55) + LO8(edx)); /* 0x1002A3F2: add byte ptr [eax + 0x4e4b4e55], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002A3F8: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x1002A3F9: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002A3FA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ebx + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x6F) = (uint8_t)(MEM8(ebx + 0x6F) + HI8(eax)); /* 0x1002A3FB: add byte ptr [ebx + 0x6f], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x1002A3FE: outsb dx, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1002A475; /* 0x1002A3FF: jae 0x1002a475 */
L_1002A401:
    _flag_a = (uint32_t)(MEM8(eax + 0x6F762090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F762090) = (uint8_t)(MEM8(eax + 0x6F762090) + LO8(edx)); /* 0x1002A401: add byte ptr [eax + 0x6f762090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1002A407u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x1002A408: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1002A474; /* 0x1002A409: je 0x1002a474 */
L_1002A40B:
    void_lift_trap(0x1002A40Bu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x76))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp + 0x76)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x76)) + HI8(edx)); /* 0x1002A40C: add byte ptr gs:[ebp + 0x76], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
    goto L_1002A452; /* falls through past a gap */
L_1002A451:
    PUSH32(esp, esi); /* 0x1002A451: push esi */
    goto L_1002A453; /* falls through past a gap */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A455; /* falls through past a gap */
L_1002A453:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A453: ret  */
L_1002A455:
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    goto L_1002A476; /* falls through past a gap */
L_1002A474:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002A474: inc ebp */
    _flag_k = FK_INC;
L_1002A475:
    _flag_a = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24;
    SET_LO8(ecx, LO8(ecx) | HI8(ecx)); /* 0x1002A475: or cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A477; /* falls through past a gap */
L_1002A476:
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A477:
    void_lift_trap(0x1002A477u, "int 0x8e");
    RECOMP_ITAIL(0x1002A479u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A3D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A3D8u);

    goto L_1002A3D8;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A3D8:
    edi = POP32_VAL(esp); /* 0x1002A3D8: pop edi */
    edi = POP32_VAL(esp); /* 0x1002A3D9: pop edi */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x3C003631u); /* 0x1002A3DA: imul ebp, dword ptr [esi + 0x74], 0x3c003631 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1002A451; /* 0x1002A3E1: jne 0x1002a451 */
L_1002A3E3:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77u); /* 0x1002A3E3: imul ebp, dword ptr [esi + 0x6f], 0x77 */
    /* outsb: no port I/O under Win32 */ /* 0x1002A3E7: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + 0x775F5F90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x775F5F90) = (uint8_t)(MEM8(eax + 0x775F5F90) + LO8(edx)); /* 0x1002A3E8: add byte ptr ds:[eax + 0x775f5f90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x20u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x20u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x20u); /* 0x1002A3EF: xor al, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x4E4B4E55)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4E4B4E55) = (uint8_t)(MEM8(eax + 0x4E4B4E55) + LO8(edx)); /* 0x1002A3F2: add byte ptr [eax + 0x4e4b4e55], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002A3F8: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x1002A3F9: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002A3FA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ebx + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x6F) = (uint8_t)(MEM8(ebx + 0x6F) + HI8(eax)); /* 0x1002A3FB: add byte ptr [ebx + 0x6f], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x1002A3FE: outsb dx, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1002A475; /* 0x1002A3FF: jae 0x1002a475 */
L_1002A401:
    _flag_a = (uint32_t)(MEM8(eax + 0x6F762090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F762090) = (uint8_t)(MEM8(eax + 0x6F762090) + LO8(edx)); /* 0x1002A401: add byte ptr [eax + 0x6f762090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1002A407u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x1002A408: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1002A474; /* 0x1002A409: je 0x1002a474 */
L_1002A40B:
    void_lift_trap(0x1002A40Bu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x76))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp + 0x76)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x76)) + HI8(edx)); /* 0x1002A40C: add byte ptr gs:[ebp + 0x76], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
    goto L_1002A452; /* falls through past a gap */
L_1002A451:
    PUSH32(esp, esi); /* 0x1002A451: push esi */
    goto L_1002A453; /* falls through past a gap */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A455; /* falls through past a gap */
L_1002A453:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A453: ret  */
L_1002A455:
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    goto L_1002A476; /* falls through past a gap */
L_1002A474:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002A474: inc ebp */
    _flag_k = FK_INC;
L_1002A475:
    _flag_a = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24;
    SET_LO8(ecx, LO8(ecx) | HI8(ecx)); /* 0x1002A475: or cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A477; /* falls through past a gap */
L_1002A476:
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A477:
    void_lift_trap(0x1002A477u, "int 0x8e");
    RECOMP_ITAIL(0x1002A479u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A3E0u);

    goto L_1002A3E0;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A3E0:
    /* cmp LO8(eax), 0x75u */ /* 0x1002A3E0: cmp al, 0x75 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x75u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* outsb: no port I/O under Win32 */ /* 0x1002A3E2: outsb dx, byte ptr [esi] */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77u); /* 0x1002A3E3: imul ebp, dword ptr [esi + 0x6f], 0x77 */
    /* outsb: no port I/O under Win32 */ /* 0x1002A3E7: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + 0x775F5F90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x775F5F90) = (uint8_t)(MEM8(eax + 0x775F5F90) + LO8(edx)); /* 0x1002A3E8: add byte ptr ds:[eax + 0x775f5f90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x20u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x20u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x20u); /* 0x1002A3EF: xor al, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x4E4B4E55)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4E4B4E55) = (uint8_t)(MEM8(eax + 0x4E4B4E55) + LO8(edx)); /* 0x1002A3F2: add byte ptr [eax + 0x4e4b4e55], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002A3F8: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x1002A3F9: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002A3FA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ebx + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x6F) = (uint8_t)(MEM8(ebx + 0x6F) + HI8(eax)); /* 0x1002A3FB: add byte ptr [ebx + 0x6f], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x1002A3FE: outsb dx, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1002A475; /* 0x1002A3FF: jae 0x1002a475 */
L_1002A401:
    _flag_a = (uint32_t)(MEM8(eax + 0x6F762090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F762090) = (uint8_t)(MEM8(eax + 0x6F762090) + LO8(edx)); /* 0x1002A401: add byte ptr [eax + 0x6f762090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1002A407u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x1002A408: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1002A474; /* 0x1002A409: je 0x1002a474 */
L_1002A40B:
    void_lift_trap(0x1002A40Bu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x76))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp + 0x76)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x76)) + HI8(edx)); /* 0x1002A40C: add byte ptr gs:[ebp + 0x76], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    goto L_1002A476; /* falls through past a gap */
L_1002A474:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002A474: inc ebp */
    _flag_k = FK_INC;
L_1002A475:
    _flag_a = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24;
    SET_LO8(ecx, LO8(ecx) | HI8(ecx)); /* 0x1002A475: or cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A477; /* falls through past a gap */
L_1002A476:
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A477:
    void_lift_trap(0x1002A477u, "int 0x8e");
    RECOMP_ITAIL(0x1002A479u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A3EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A3ECu);

    goto L_1002A3EC;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A3EC:
    edi = POP32_VAL(esp); /* 0x1002A3EC: pop edi */
    edi = POP32_VAL(esp); /* 0x1002A3ED: pop edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_1002A426; /* 0x1002A3EE: ja 0x1002a426 */
L_1002A3F0:
    _flag_a = (uint32_t)((LO8(eax) ^ 0x20u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x20u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x20u); /* 0x1002A3F0: xor al, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x4E4B4E55)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4E4B4E55) = (uint8_t)(MEM8(eax + 0x4E4B4E55) + LO8(edx)); /* 0x1002A3F2: add byte ptr [eax + 0x4e4b4e55], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002A3F8: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x1002A3F9: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002A3FA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ebx + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x6F) = (uint8_t)(MEM8(ebx + 0x6F) + HI8(eax)); /* 0x1002A3FB: add byte ptr [ebx + 0x6f], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x1002A3FE: outsb dx, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1002A475; /* 0x1002A3FF: jae 0x1002a475 */
L_1002A401:
    _flag_a = (uint32_t)(MEM8(eax + 0x6F762090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F762090) = (uint8_t)(MEM8(eax + 0x6F762090) + LO8(edx)); /* 0x1002A401: add byte ptr [eax + 0x6f762090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1002A407u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x1002A408: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1002A474; /* 0x1002A409: je 0x1002a474 */
L_1002A40B:
    void_lift_trap(0x1002A40Bu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x76))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp + 0x76)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x76)) + HI8(edx)); /* 0x1002A40C: add byte ptr gs:[ebp + 0x76], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    goto L_1002A476; /* falls through past a gap */
L_1002A474:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002A474: inc ebp */
    _flag_k = FK_INC;
L_1002A475:
    _flag_a = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24;
    SET_LO8(ecx, LO8(ecx) | HI8(ecx)); /* 0x1002A475: or cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A477; /* falls through past a gap */
L_1002A476:
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A477:
    void_lift_trap(0x1002A477u, "int 0x8e");
    RECOMP_ITAIL(0x1002A479u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A3F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A3F4u);

    goto L_1002A3F4;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A3F4:
    PUSH32(esp, ebp); /* 0x1002A3F4: push ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002A3F5: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1002A3F6: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002A3F7: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002A3F8: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x1002A3F9: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002A3FA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ebx + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x6F) = (uint8_t)(MEM8(ebx + 0x6F) + HI8(eax)); /* 0x1002A3FB: add byte ptr [ebx + 0x6f], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x1002A3FE: outsb dx, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1002A475; /* 0x1002A3FF: jae 0x1002a475 */
L_1002A401:
    _flag_a = (uint32_t)(MEM8(eax + 0x6F762090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F762090) = (uint8_t)(MEM8(eax + 0x6F762090) + LO8(edx)); /* 0x1002A401: add byte ptr [eax + 0x6f762090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1002A407u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x1002A408: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1002A474; /* 0x1002A409: je 0x1002a474 */
L_1002A40B:
    void_lift_trap(0x1002A40Bu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x76))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp + 0x76)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x76)) + HI8(edx)); /* 0x1002A40C: add byte ptr gs:[ebp + 0x76], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    goto L_1002A476; /* falls through past a gap */
L_1002A474:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002A474: inc ebp */
    _flag_k = FK_INC;
L_1002A475:
    _flag_a = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24;
    SET_LO8(ecx, LO8(ecx) | HI8(ecx)); /* 0x1002A475: or cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A477; /* falls through past a gap */
L_1002A476:
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A477:
    void_lift_trap(0x1002A477u, "int 0x8e");
    RECOMP_ITAIL(0x1002A479u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A3FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A3FCu);

    goto L_1002A3FC;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A3FC:
    void_lift_trap(0x1002A3FCu, "arpl word ptr [edi + 0x6e], bp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1002A475; /* 0x1002A3FF: jae 0x1002a475 */
L_1002A401:
    _flag_a = (uint32_t)(MEM8(eax + 0x6F762090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F762090) = (uint8_t)(MEM8(eax + 0x6F762090) + LO8(edx)); /* 0x1002A401: add byte ptr [eax + 0x6f762090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1002A407u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x1002A408: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1002A474; /* 0x1002A409: je 0x1002a474 */
L_1002A40B:
    void_lift_trap(0x1002A40Bu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x76))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp + 0x76)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x76)) + HI8(edx)); /* 0x1002A40C: add byte ptr gs:[ebp + 0x76], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    goto L_1002A476; /* falls through past a gap */
L_1002A474:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002A474: inc ebp */
    _flag_k = FK_INC;
L_1002A475:
    _flag_a = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24;
    SET_LO8(ecx, LO8(ecx) | HI8(ecx)); /* 0x1002A475: or cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A477; /* falls through past a gap */
L_1002A476:
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A477:
    void_lift_trap(0x1002A477u, "int 0x8e");
    RECOMP_ITAIL(0x1002A479u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A404(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A404u);

    goto L_1002A404;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A404:
    _flag_a = (uint32_t)(MEM8(esi + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(esi + 0x6F) = (uint8_t)(MEM8(esi + 0x6F) & HI8(edx)); /* 0x1002A404: and byte ptr [esi + 0x6f], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x1002A407u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x1002A408: popal  */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A474; /* 0x1002A409: je 0x1002a474 */
L_1002A40B:
    void_lift_trap(0x1002A40Bu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x76))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp + 0x76)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x76)) + HI8(edx)); /* 0x1002A40C: add byte ptr gs:[ebp + 0x76], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    goto L_1002A476; /* falls through past a gap */
L_1002A474:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002A474: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24;
    SET_LO8(ecx, LO8(ecx) | HI8(ecx)); /* 0x1002A475: or cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002A477; /* falls through past a gap */
L_1002A476:
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A477:
    void_lift_trap(0x1002A477u, "int 0x8e");
    RECOMP_ITAIL(0x1002A479u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A47C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A47Cu);

    goto L_1002A47C;
L_100232D2:
    eax = ebp + (-0x24); /* 0x100232D2: lea eax, [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100232D5: dec ecx */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x100232D6: push eax */
    MEM32(0x100E02F0) = ecx; /* 0x100232D7: mov dword ptr [0x100e02f0], ecx */
    RECOMP_CALL(sub_1002367E); /* 0x100232DD: call 0x1002367e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100232E2: pop ecx */
    ecx = MEM32(eax); /* 0x100232E3: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x100232E5: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x100232E8: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x100232EB: mov dword ptr [ebp - 8], edx */
    /* test ecx, ecx */ /* 0x100232EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A2F2; /* 0x100232F0: je 0x1002a2f2 */
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A47C:
    /* outsd: no port I/O under Win32 */ /* 0x1002A47C: outsd dx, dword ptr fs:[esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1002A4E2; /* 0x1002A47E: jne 0x1002a4e2 */
L_1002A480:
    void_lift_trap(0x1002A480u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + (-0x177CFFD6)))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + (-0x177CFFD6))) = (uint8_t)(MEM8(GS_BASE + (eax + (-0x177CFFD6))) + LO8(edx)); /* 0x1002A481: add byte ptr gs:[eax - 0x177cffd6], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1002A488: inc ebx */
    _flag_k = FK_INC;
    /* cmp eax, 0xAu */ /* 0x1002A489: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_100232D2; /* 0x1002A48C: ja 0x100232d2 */
L_1002A492:
    eax = (uint32_t)MEM8(eax + 0x1002A3C3); /* 0x1002A492: movzx eax, byte ptr [eax + 0x1002a3c3] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1002A3AB)); goto _ljump; }
L_1002A4A0:
    PUSH32(esp, 0x1002A4B4u); /* 0x1002A4A0: push 0x1002a4b4 */
L_1002A4A5:
    ecx = ebp + (-0xC); /* 0x1002A4A5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A4A8: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100232F6; /* 0x1002A4AD: jmp 0x100232f6 */
L_1002A6C6:
    PUSH32(esp, 0x1002A6D0u); /* 0x1002A6C6: push 0x1002a6d0 */
    RECOMP_BACKEDGE();
    goto L_1002A4A5; /* 0x1002A6CB: jmp 0x1002a4a5 */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_10030094:
    PUSH32(esp, 0x100300A0u); /* 0x10030094: push 0x100300a0 */
    RECOMP_BACKEDGE();
    goto L_1002A4A5; /* 0x10030099: jmp 0x1002a4a5 */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_10030449:
    PUSH32(esp, 0x10030454u); /* 0x10030449: push 0x10030454 */
    RECOMP_BACKEDGE();
    goto L_1002A4A5; /* 0x1003044E: jmp 0x1002a4a5 */
L_100304E8:
    PUSH32(esp, 0x100304F4u); /* 0x100304E8: push 0x100304f4 */
    RECOMP_BACKEDGE();
    goto L_1002A4A5; /* 0x100304ED: jmp 0x1002a4a5 */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x100232D2u: goto L_100232D2;
      case 0x1002A4A0u: goto L_1002A4A0;
      case 0x1002A6C6u: goto L_1002A6C6;
      case 0x10030094u: goto L_10030094;
      case 0x10030449u: goto L_10030449;
      case 0x100304E8u: goto L_100304E8;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    L_1002A4E2: RECOMP_ITAIL(0x1002A4E2u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_1002A484(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A484u);

    goto L_1002A484;
L_100232D2:
    eax = ebp + (-0x24); /* 0x100232D2: lea eax, [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100232D5: dec ecx */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x100232D6: push eax */
    MEM32(0x100E02F0) = ecx; /* 0x100232D7: mov dword ptr [0x100e02f0], ecx */
    RECOMP_CALL(sub_1002367E); /* 0x100232DD: call 0x1002367e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100232E2: pop ecx */
    ecx = MEM32(eax); /* 0x100232E3: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x100232E5: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x100232E8: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x100232EB: mov dword ptr [ebp - 8], edx */
    /* test ecx, ecx */ /* 0x100232EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A2F2; /* 0x100232F0: je 0x1002a2f2 */
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A484:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(eax)); /* 0x1002A484: sub al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x43u; /* 0x1002A486: sub eax, 0x43 */
    _flag_k = FK_CMP;
    /* cmp eax, 0xAu */ /* 0x1002A489: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_100232D2; /* 0x1002A48C: ja 0x100232d2 */
L_1002A492:
    eax = (uint32_t)MEM8(eax + 0x1002A3C3); /* 0x1002A492: movzx eax, byte ptr [eax + 0x1002a3c3] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1002A3AB)); goto _ljump; }
L_1002A4A0:
    PUSH32(esp, 0x1002A4B4u); /* 0x1002A4A0: push 0x1002a4b4 */
L_1002A4A5:
    ecx = ebp + (-0xC); /* 0x1002A4A5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A4A8: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100232F6; /* 0x1002A4AD: jmp 0x100232f6 */
L_1002A6C6:
    PUSH32(esp, 0x1002A6D0u); /* 0x1002A6C6: push 0x1002a6d0 */
    RECOMP_BACKEDGE();
    goto L_1002A4A5; /* 0x1002A6CB: jmp 0x1002a4a5 */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_10030094:
    PUSH32(esp, 0x100300A0u); /* 0x10030094: push 0x100300a0 */
    RECOMP_BACKEDGE();
    goto L_1002A4A5; /* 0x10030099: jmp 0x1002a4a5 */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_10030449:
    PUSH32(esp, 0x10030454u); /* 0x10030449: push 0x10030454 */
    RECOMP_BACKEDGE();
    goto L_1002A4A5; /* 0x1003044E: jmp 0x1002a4a5 */
L_100304E8:
    PUSH32(esp, 0x100304F4u); /* 0x100304E8: push 0x100304f4 */
    RECOMP_BACKEDGE();
    goto L_1002A4A5; /* 0x100304ED: jmp 0x1002a4a5 */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x100232D2u: goto L_100232D2;
      case 0x1002A4A0u: goto L_1002A4A0;
      case 0x1002A6C6u: goto L_1002A6C6;
      case 0x10030094u: goto L_10030094;
      case 0x10030449u: goto L_10030449;
      case 0x100304E8u: goto L_100304E8;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1002A4B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A4B4u);

    goto L_1002A4B4;
L_100231CE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002A4DC; /* 0x100231CE: je 0x1002a4dc */
L_100231D4:
    ebx = POP32_VAL(esp); /* 0x100231D4: pop ebx */
    edi = POP32_VAL(esp); /* 0x100231D5: pop edi */
    esi = POP32_VAL(esp); /* 0x100231D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x100231D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100231D8: ret 8 */
L_1002A4B4:
    void_lift_trap(0x1002A4B4u, "arpl word ptr [eax + 0x61], bp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1002A4B9; /* 0x1002A4B7: jb 0x1002a4b9 */
L_1002A4B9:
    PUSH32(esp, 8); /* 0x1002A4B9: push 8 */
    RECOMP_CALL(sub_10022CB8); /* 0x1002A4BB: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002A4C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A4D8; /* 0x1002A4C2: je 0x1002a4d8 */
L_1002A4C4:
    SET_LO8(ecx, MEM8(ebx)); /* 0x1002A4C4: mov cl, byte ptr [ebx] */
    MEM32(eax) = 0x1002A4F4u; /* 0x1002A4C6: mov dword ptr [eax], 0x1002a4f4 */
    MEM8(eax + 0x4) = (uint8_t)(LO8(ecx)); /* 0x1002A4CC: mov byte ptr [eax + 4], cl */
L_1002A4CF:
    MEM32(esi) = eax; /* 0x1002A4CF: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1002A4D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100231CE; /* 0x1002A4D3: jmp 0x100231ce */
L_1002A4D8:
    eax = edi; /* 0x1002A4D8: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1002A4CF; /* 0x1002A4DA: jmp 0x1002a4cf */
L_1002A4DC:
    MEM8(esi + 0x4) = (uint8_t)(3); /* 0x1002A4DC: mov byte ptr [esi + 4], 3 */
    RECOMP_BACKEDGE();
    goto L_100231D4; /* 0x1002A4E0: jmp 0x100231d4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A4F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A4F4u);

L_1002A4F4:
    _flag_a = (uint32_t)((eax | 0xF51002A2u)); _flag_b = (uint32_t)((eax | 0xF51002A2u));
    eax = eax | 0xF51002A2u; /* 0x1002A4F4: or eax, 0xf51002a2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx) | eax)); _flag_b = (uint32_t)((MEM32(ebx) | eax));
    MEM32(ebx) = MEM32(ebx) | eax; /* 0x1002A4F9: or dword ptr [ebx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(ecx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002A4FB: adc byte ptr [ecx], dl */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM8(0x1002) = (uint8_t)(LO8(eax)); /* 0x1002A4FD: mov byte ptr [0x1002], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A502: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A504: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A506: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A508: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A50A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x14100E05u); /* 0x1002A50C: push 0x14100e05 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002A511: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002A512: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A514: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A516: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A518: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A51A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1002A51C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A51E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xA5u) << 24;
    SET_LO8(eax, LO8(eax) & 0xA5u); /* 0x1002A520: and al, 0xa5 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002A522: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebp + 0x34181002) ^ HI8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x34181002) ^ HI8(eax))) << 24;
    MEM8(ebp + 0x34181002) = (uint8_t)(MEM8(ebp + 0x34181002) ^ HI8(eax)); /* 0x1002A524: xor byte ptr [ebp + 0x34181002], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002A52A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x5689090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x5689090) = (uint8_t)(MEM8(eax + 0x5689090) + LO8(edx)); /* 0x1002A52C: add byte ptr [eax + 0x5689090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_cs); /* 0x1002A532: push cs */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002A533: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A535: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A537: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002A539: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1002A53B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1002A53Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1002A664(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A664u);

L_1002A664:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_1002A6D5; /* 0x1002A664: jbe 0x1002a6d5 */
L_1002A666:
    esp = (uint32_t)((int32_t)MEM32(eax + eax + 0x55) * (int32_t)0x8B53EC8Bu); /* 0x1002A666: imul esp, dword ptr [eax + eax + 0x55], 0x8b53ec8b */
    fp_push(*(float*)&MEM32(eax + 0x7F01047B)); /* 0x1002A66E: fld dword ptr [eax + 0x7f01047b] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1002A674: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x1002A675: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1002A676: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1002A679: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A6BE; /* 0x1002A67B: je 0x1002a6be */
L_1002A67D:
    /* cmp MEM8(edi), 0 */ /* 0x1002A67D: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A6BE; /* 0x1002A680: je 0x1002a6be */
L_1002A682:
    PUSH32(esp, esi); /* 0x1002A682: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002A683: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), esi */ /* 0x1002A685: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030466; /* 0x1002A687: je 0x10030466 */
L_1002A68D:
    PUSH32(esp, esi); /* 0x1002A68D: push esi */
    PUSH32(esp, 0xCu); /* 0x1002A68E: push 0xc */
    ecx = 0x100E030Cu; /* 0x1002A690: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x1002A695: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002A69A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A6B5; /* 0x1002A69C: je 0x1002a6b5 */
L_1002A69E:
    /* cmp MEM8(edi), 0 */ /* 0x1002A69E: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A6AA; /* 0x1002A6A1: je 0x1002a6aa */
L_1002A6A3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002A6A3: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + edi), 0 */ /* 0x1002A6A4: cmp byte ptr [esi + edi], 0 */
    _flag_a = (uint32_t)(MEM8(esi + edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A6A3; /* 0x1002A6A8: jne 0x1002a6a3 */
L_1002A6AA:
    PUSH32(esp, esi); /* 0x1002A6AA: push esi */
    PUSH32(esp, edi); /* 0x1002A6AB: push edi */
    ecx = eax; /* 0x1002A6AC: mov ecx, eax */
    RECOMP_CALL(sub_1002310C); /* 0x1002A6AE: call 0x1002310c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002A6B3: mov esi, eax */
L_1002A6B5:
    PUSH32(esp, esi); /* 0x1002A6B5: push esi */
    ecx = ebx; /* 0x1002A6B6: mov ecx, ebx */
    RECOMP_CALL(sub_10022CF3); /* 0x1002A6B8: call 0x10022cf3 */
    RECOMP_FLAGS_IN();
L_1002A6BD:
    esi = POP32_VAL(esp); /* 0x1002A6BD: pop esi */
L_1002A6BE:
    edi = POP32_VAL(esp); /* 0x1002A6BE: pop edi */
    eax = ebx; /* 0x1002A6BF: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1002A6C1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1002A6C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1002A6C3: ret 4 */
L_1002A6D5:
    PUSH32(esp, ebp); /* 0x1002A6D5: push ebp */
    ebp = esp; /* 0x1002A6D6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF0u; /* 0x1002A6D8: sub esp, 0xf0 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002A6DE: push ebx */
    PUSH32(esp, esi); /* 0x1002A6DF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002A6E0: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1002A6E3: push edi */
    MEM8(ebp + 0xB) = (uint8_t)(0); /* 0x1002A6E4: mov byte ptr [ebp + 0xb], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1002A6E8: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1002A6EB: mov byte ptr [esi + 4], 0 */
    eax = MEM32(esi + 0x4); /* 0x1002A6EF: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF00FFu);
    eax = eax & 0xFFFF00FFu; /* 0x1002A6F2: and eax, 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1002A6F7: mov dword ptr [esi + 4], eax */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A6FA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A6FC: jne 0x1002a762 */
L_1002A6FE:
    ebx = MEM32(ebp + (-0x4)); /* 0x1002A6FE: mov ebx, dword ptr [ebp - 4] */
L_1002A701:
    eax = MEM32(0x100E02F0); /* 0x1002A701: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002A706: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A708: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A70A: je 0x1002a762 */
L_1002A70C:
    /* cmp LO8(eax), 0x40u */ /* 0x1002A70C: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A70E: je 0x1002a762 */
L_1002A710:
    /* cmp MEM8(0x100E0304), 0 */ /* 0x1002A710: cmp byte ptr [0x100e0304], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0304)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CCAE; /* 0x1002A717: jne 0x1005ccae */
L_1002A71D:
    /* cmp MEM32(esi), 0 */ /* 0x1002A71D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A929; /* 0x1002A720: jne 0x1002a929 */
L_1002A726:
    eax = MEM32(0x100E02F0); /* 0x1002A726: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x1002A72B: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002ACA3; /* 0x1002A72E: je 0x1002aca3 */
L_1002A734:
    eax = ebp + (-0x78); /* 0x1002A734: lea eax, [ebp - 0x78] */
    PUSH32(esp, esi); /* 0x1002A737: push esi */
    PUSH32(esp, eax); /* 0x1002A738: push eax */
    eax = ebp + (-0x70); /* 0x1002A739: lea eax, [ebp - 0x70] */
L_1002A73C:
    PUSH32(esp, 0); /* 0x1002A73C: push 0 */
    PUSH32(esp, 1); /* 0x1002A73E: push 1 */
    PUSH32(esp, eax); /* 0x1002A740: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1002A741: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002A746: add esp, 0xc */
    _flag_k = FK_ADD;
L_1002A749:
    ecx = eax; /* 0x1002A749: mov ecx, eax */
L_1002A74B:
    RECOMP_CALL(sub_1002A19F); /* 0x1002A74B: call 0x1002a19f */
    RECOMP_FLAGS_IN();
L_1002A750:
    ecx = eax; /* 0x1002A750: mov ecx, eax */
    eax = MEM32(ecx); /* 0x1002A752: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x1002A754: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A756: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1002A759: mov dword ptr [esi + 4], eax */
L_1002A75C:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x1002A75C: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A701; /* 0x1002A760: je 0x1002a701 */
L_1002A762:
    eax = MEM32(0x100E02F0); /* 0x1002A762: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002A767: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A769: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CEE1; /* 0x1002A76B: je 0x1005cee1 */
L_1002A771:
    /* cmp LO8(eax), 0x40u */ /* 0x1002A771: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CECE; /* 0x1002A773: jne 0x1005cece */
L_1002A779:
    edi = POP32_VAL(esp); /* 0x1002A779: pop edi */
    eax = esi; /* 0x1002A77A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002A77C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002A77D: pop ebx */
    esp = ebp; /* 0x1002A77E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002A780: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A781: ret  */
L_1002A929:
    PUSH32(esp, esi); /* 0x1002A929: push esi */
    eax = ebp + (-0x50); /* 0x1002A92A: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1002A92D: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1002A92E: push 0x1002a7cc */
    ecx = ebp + (-0xE0); /* 0x1002A933: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_10022BC1); /* 0x1002A939: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A93E: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A940: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xB), 0 */ /* 0x1002A945: cmp byte ptr [ebp + 0xb], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xB)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x50)); /* 0x1002A949: mov eax, dword ptr [ebp - 0x50] */
    MEM32(esi) = eax; /* 0x1002A94C: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1002A94E: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(esi + 0x4) = eax; /* 0x1002A951: mov dword ptr [esi + 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A726; /* 0x1002A954: je 0x1002a726 */
L_1002A95A:
    goto L_1005CCC0; /* 0x1002A95A: jmp 0x1005ccc0 */
L_1002ACA3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002ACA3: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1002ACA4: mov dword ptr [0x100e02f0], eax */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1002ACA9: movsx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x24u; /* 0x1002ACAC: sub eax, 0x24 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CEB8; /* 0x1002ACAF: je 0x1005ceb8 */
L_1002ACB5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACB5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CE65; /* 0x1002ACB6: je 0x1005ce65 */
L_1002ACBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Au; /* 0x1002ACBC: sub eax, 0x1a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002ACF2; /* 0x1002ACBF: je 0x1002acf2 */
L_1002ACC1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACC1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACC2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CE65; /* 0x1002ACC3: je 0x1005ce65 */
L_1002ACC9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x1002ACC9: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CDD3; /* 0x1002ACCC: je 0x1005cdd3 */
L_1002ACD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x1002ACD2: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CCED; /* 0x1002ACD5: je 0x1005cced */
L_1002ACDB:
    PUSH32(esp, esi); /* 0x1002ACDB: push esi */
    eax = ebp + (-0x80); /* 0x1002ACDC: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1002ACDF: push eax */
    eax = ebp + (-0xF0); /* 0x1002ACE0: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x1002ACE6: push eax */
    RECOMP_CALL(sub_1002AC66); /* 0x1002ACE7: call 0x1002ac66 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002ACEC: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002A749; /* 0x1002ACED: jmp 0x1002a749 */
L_1002ACF2:
    eax = MEM32(0x100E02F0); /* 0x1002ACF2: mov eax, dword ptr [0x100e02f0] */
    ecx = eax + 0x1; /* 0x1002ACF7: lea ecx, [eax + 1] */
    /* cmp MEM8(ecx), 0x5Fu */ /* 0x1002ACFA: cmp byte ptr [ecx], 0x5f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CE14; /* 0x1002ACFD: je 0x1005ce14 */
L_1002AD03:
    eax = ebp + (-0x88); /* 0x1002AD03: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1002AD09: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1002AD0A: call 0x10023854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AD0F: pop ecx */
    PUSH32(esp, eax); /* 0x1002AD10: push eax */
    eax = ebp + (-0x48); /* 0x1002AD11: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1002AD14: push eax */
    PUSH32(esp, 0x60u); /* 0x1002AD15: push 0x60 */
    ecx = ebp + (-0x90); /* 0x1002AD17: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_1002A173); /* 0x1002AD1D: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002AD22: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002AD24: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1002AD29: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1002AD2C: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1002AD2F: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1002AD32: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x27u); /* 0x1002AD35: push 0x27 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1002AD37: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1002AD3A: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1002AD3F: push esi */
    eax = ebp + (-0xA0); /* 0x1002AD40: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1002AD46: push eax */
    ecx = ebp + (-0x30); /* 0x1002AD47: lea ecx, [ebp - 0x30] */
    RECOMP_BACKEDGE();
    goto L_1002A74B; /* 0x1002AD4A: jmp 0x1002a74b */
L_10030466:
    PUSH32(esp, edi); /* 0x10030466: push edi */
    RECOMP_CALL(sub_10022C2C); /* 0x10030467: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A6BD; /* 0x1003046C: jmp 0x1002a6bd */
L_1005CCAE:
    /* cmp MEM8(0x100E0664), 0 */ /* 0x1005CCAE: cmp byte ptr [0x100e0664], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0664)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A71D; /* 0x1005CCB5: jne 0x1002a71d */
L_1005CCBB:
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CCBB: jmp 0x1002a779 */
L_1005CCC0:
    PUSH32(esp, esi); /* 0x1005CCC0: push esi */
    eax = ebp + (-0x38); /* 0x1005CCC1: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1005CCC4: push eax */
    PUSH32(esp, 0x5Bu); /* 0x1005CCC5: push 0x5b */
    ecx = ebp + (-0xD0); /* 0x1005CCC7: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_1002A173); /* 0x1005CCCD: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CCD2: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CCD4: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x1005CCD9: mov eax, dword ptr [ebp - 0x38] */
    MEM32(esi) = eax; /* 0x1005CCDC: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1005CCDE: mov eax, dword ptr [ebp - 0x34] */
    MEM32(esi + 0x4) = eax; /* 0x1005CCE1: mov dword ptr [esi + 4], eax */
    MEM8(ebp + 0xB) = (uint8_t)(0); /* 0x1005CCE4: mov byte ptr [ebp + 0xb], 0 */
    RECOMP_BACKEDGE();
    goto L_1002A726; /* 0x1005CCE8: jmp 0x1002a726 */
L_1005CCED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1005CCED: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF0000u);
    ebx = ebx & 0xFFFF0000u; /* 0x1005CCEF: and ebx, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CCF5: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edi; /* 0x1005CCFB: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1005CCFE: mov dword ptr [ebp - 4], ebx */
L_1005CD01:
    PUSH32(esp, 0); /* 0x1005CD01: push 0 */
    eax = ebp + (-0x28); /* 0x1005CD03: lea eax, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x1005CD06: push 1 */
    PUSH32(esp, eax); /* 0x1005CD08: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1005CD09: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x1005CD0E: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CD11: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005CD14: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CD59; /* 0x1005CD16: jne 0x1005cd59 */
L_1005CD18:
    /* test edi, edi */ /* 0x1005CD18: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CD52; /* 0x1005CD1A: je 0x1005cd52 */
L_1005CD1C:
    eax = MEM32(ebp + (-0x28)); /* 0x1005CD1C: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1005CD1F: mov dword ptr [ebp - 0x1c], ecx */
    ecx = ebp + (-0x20); /* 0x1005CD22: lea ecx, [ebp - 0x20] */
    PUSH32(esp, 0x1002A7CCu); /* 0x1005CD25: push 0x1002a7cc */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005CD2A: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005CD2D: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1005CD32: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x10); /* 0x1005CD35: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1005CD38: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1005CD3B: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1005CD3E: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x1005CD41: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CD44: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005CD45: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x10)); /* 0x1005CD4A: mov edi, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1005CD4D: mov ebx, dword ptr [ebp - 0xc] */
    goto L_1005CD64; /* 0x1005CD50: jmp 0x1005cd64 */
L_1005CD52:
    edi = MEM32(ebp + (-0x28)); /* 0x1005CD52: mov edi, dword ptr [ebp - 0x28] */
    ebx = ecx; /* 0x1005CD55: mov ebx, ecx */
    goto L_1005CD64; /* 0x1005CD57: jmp 0x1005cd64 */
L_1005CD59:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF0002u);
    ebx = ebx & 0xFFFF0002u; /* 0x1005CD59: and ebx, 0xffff0002 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x1005CD5F: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1005CD62: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005CD64:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1005CD64: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1005CD67: mov dword ptr [ebp - 8], edi */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1005CD6A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CDC0; /* 0x1005CD6C: jne 0x1005cdc0 */
L_1005CD6E:
    eax = MEM32(0x100E02F0); /* 0x1005CD6E: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1005CD73: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CD01; /* 0x1005CD76: jne 0x1005cd01 */
L_1005CD78:
    eax = ebp + (-0x8); /* 0x1005CD78: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CD7B: push eax */
    eax = ebp + (-0x58); /* 0x1005CD7C: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1005CD7F: push eax */
    PUSH32(esp, 0x5Bu); /* 0x1005CD80: push 0x5b */
    ecx = ebp + (-0xD8); /* 0x1005CD82: lea ecx, [ebp - 0xd8] */
    RECOMP_CALL(sub_1002A173); /* 0x1005CD88: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CD8D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CD8F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x58)); /* 0x1005CD94: mov eax, dword ptr [ebp - 0x58] */
    ecx = ebp + (-0x18); /* 0x1005CD97: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1005CD9A: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x1005CD9D: mov eax, dword ptr [ebp - 0x54] */
    PUSH32(esp, 0x5Du); /* 0x1005CDA0: push 0x5d */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005CDA2: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005CDA5: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1005CDAA: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi) = eax; /* 0x1005CDAD: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1005CDAF: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0x4) = eax; /* 0x1005CDB2: mov dword ptr [esi + 4], eax */
L_1005CDB5:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CDB5: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CDBB: jmp 0x1002a75c */
L_1005CDC0:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005CDC0: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1005CDC7: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1005CDCA: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CDCE: jmp 0x1002a75c */
L_1005CDD3:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CDD3: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    eax = ebp + (-0x98); /* 0x1005CDD9: lea eax, [ebp - 0x98] */
    PUSH32(esp, esi); /* 0x1005CDDF: push esi */
    PUSH32(esp, eax); /* 0x1005CDE0: push eax */
    PUSH32(esp, 0x5Du); /* 0x1005CDE1: push 0x5d */
    eax = ebp + (-0xC8); /* 0x1005CDE3: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x1005CDE9: push eax */
    PUSH32(esp, 0); /* 0x1005CDEA: push 0 */
    eax = ebp + (-0xA8); /* 0x1005CDEC: lea eax, [ebp - 0xa8] */
    PUSH32(esp, 1); /* 0x1005CDF2: push 1 */
    PUSH32(esp, eax); /* 0x1005CDF4: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1005CDF5: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CDFA: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1005CDFD: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1005CDFF: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE04: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE06: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    MEM8(ebp + 0xB) = (uint8_t)(1); /* 0x1005CE0B: mov byte ptr [ebp + 0xb], 1 */
    RECOMP_BACKEDGE();
    goto L_1002A750; /* 0x1005CE0F: jmp 0x1002a750 */
L_1005CE14:
    /* cmp MEM8(eax + 0x2), 0x3Fu */ /* 0x1005CE14: cmp byte ptr [eax + 2], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax + 0x2)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002AD03; /* 0x1005CE18: jne 0x1002ad03 */
L_1005CE1E:
    PUSH32(esp, esi); /* 0x1005CE1E: push esi */
    eax = ebp + (-0xE8); /* 0x1005CE1F: lea eax, [ebp - 0xe8] */
    MEM32(0x100E02F0) = ecx; /* 0x1005CE25: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x1005CE2B: push eax */
    PUSH32(esp, 0); /* 0x1005CE2C: push 0 */
    eax = ebp + (-0xB8); /* 0x1005CE2E: lea eax, [ebp - 0xb8] */
    PUSH32(esp, 0); /* 0x1005CE34: push 0 */
    PUSH32(esp, eax); /* 0x1005CE36: push eax */
    RECOMP_CALL(sub_1009F7D3); /* 0x1005CE37: call 0x1009f7d3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CE3C: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1005CE3F: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE41: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE46: mov ecx, eax */
    eax = MEM32(ecx); /* 0x1005CE48: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x1005CE4A: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x1005CE4C: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1005CE4F: mov dword ptr [esi + 4], eax */
    eax = MEM32(0x100E02F0); /* 0x1005CE52: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1005CE57: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CDB5; /* 0x1005CE5A: je 0x1005cdb5 */
L_1005CE60:
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CE60: jmp 0x1002a75c */
L_1005CE65:
    PUSH32(esp, 0x40u); /* 0x1005CE65: push 0x40 */
    PUSH32(esp, 0x100E02F0u); /* 0x1005CE67: push 0x100e02f0 */
    ecx = ebp + (-0x60); /* 0x1005CE6C: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_100231DB); /* 0x1005CE6F: call 0x100231db */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005CE74: push esi */
    eax = ebp + (-0x40); /* 0x1005CE75: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005CE78: push eax */
    PUSH32(esp, 0x100626ECu); /* 0x1005CE79: push 0x100626ec */
    ecx = ebp + (-0xB0); /* 0x1005CE7E: lea ecx, [ebp - 0xb0] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CE84: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE89: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE8B: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x1005CE90: mov eax, dword ptr [ebp - 0x40] */
    MEM32(esi) = eax; /* 0x1005CE93: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x1005CE95: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(esi + 0x4) = eax; /* 0x1005CE98: mov dword ptr [esi + 4], eax */
    ecx = MEM32(0x100E02EC); /* 0x1005CE9B: mov ecx, dword ptr [0x100e02ec] */
    /* cmp MEM32(ecx), 9 */ /* 0x1005CEA1: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A75C; /* 0x1005CEA4: je 0x1002a75c */
L_1005CEAA:
    eax = ebp + (-0x60); /* 0x1005CEAA: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x1005CEAD: push eax */
    RECOMP_CALL(sub_100230C2); /* 0x1005CEAE: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CEB3: jmp 0x1002a75c */
L_1005CEB8:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) - 1; /* 0x1005CEB8: dec dword ptr [0x100e02f0] */
    _flag_k = FK_DEC;
    eax = ebp + (-0xC0); /* 0x1005CEBE: lea eax, [ebp - 0xc0] */
    PUSH32(esp, esi); /* 0x1005CEC4: push esi */
    PUSH32(esp, eax); /* 0x1005CEC5: push eax */
    eax = ebp + (-0x68); /* 0x1005CEC6: lea eax, [ebp - 0x68] */
    RECOMP_BACKEDGE();
    goto L_1002A73C; /* 0x1005CEC9: jmp 0x1002a73c */
L_1005CECE:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005CECE: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1005CED5: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1005CED8: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CEDC: jmp 0x1002a779 */
L_1005CEE1:
    /* cmp MEM32(esi), 0 */ /* 0x1005CEE1: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CEF4; /* 0x1005CEE4: jne 0x1005cef4 */
L_1005CEE6:
    PUSH32(esp, 1); /* 0x1005CEE6: push 1 */
    ecx = esi; /* 0x1005CEE8: mov ecx, esi */
    RECOMP_CALL(sub_10023A53); /* 0x1005CEEA: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CEEF: jmp 0x1002a779 */
L_1005CEF4:
    PUSH32(esp, esi); /* 0x1005CEF4: push esi */
    eax = ebp + (-0x70); /* 0x1005CEF5: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1005CEF8: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1005CEF9: push 0x1002a7cc */
    eax = ebp + (-0x78); /* 0x1005CEFE: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1005CF01: push eax */
    PUSH32(esp, 1); /* 0x1005CF02: push 1 */
    ecx = ebp + (-0x68); /* 0x1005CF04: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005CF07: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CF0C: mov ecx, eax */
    RECOMP_CALL(sub_1002A782); /* 0x1005CF0E: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CF13: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CF15: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1005CF1A: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1005CF1C: mov dword ptr [esi], ecx */
    eax = MEM32(eax + 0x4); /* 0x1005CF1E: mov eax, dword ptr [eax + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1005CF21: mov dword ptr [esi + 4], eax */
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CF24: jmp 0x1002a779 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A669(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A669u);

L_1002A669:
    PUSH32(esp, ebp); /* 0x1002A669: push ebp */
    ebp = esp; /* 0x1002A66A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1002A66C: push ebx */
    ebx = ecx; /* 0x1002A66D: mov ebx, ecx */
    /* cmp MEM8(ebx + 0x4), 1 */ /* 0x1002A66F: cmp byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1002A6BF; /* 0x1002A673: jg 0x1002a6bf */
L_1002A675:
    PUSH32(esp, edi); /* 0x1002A675: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1002A676: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1002A679: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A6BE; /* 0x1002A67B: je 0x1002a6be */
L_1002A67D:
    /* cmp MEM8(edi), 0 */ /* 0x1002A67D: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A6BE; /* 0x1002A680: je 0x1002a6be */
L_1002A682:
    PUSH32(esp, esi); /* 0x1002A682: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002A683: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), esi */ /* 0x1002A685: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030466; /* 0x1002A687: je 0x10030466 */
L_1002A68D:
    PUSH32(esp, esi); /* 0x1002A68D: push esi */
    PUSH32(esp, 0xCu); /* 0x1002A68E: push 0xc */
    ecx = 0x100E030Cu; /* 0x1002A690: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x1002A695: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002A69A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A6B5; /* 0x1002A69C: je 0x1002a6b5 */
L_1002A69E:
    /* cmp MEM8(edi), 0 */ /* 0x1002A69E: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A6AA; /* 0x1002A6A1: je 0x1002a6aa */
L_1002A6A3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002A6A3: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + edi), 0 */ /* 0x1002A6A4: cmp byte ptr [esi + edi], 0 */
    _flag_a = (uint32_t)(MEM8(esi + edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A6A3; /* 0x1002A6A8: jne 0x1002a6a3 */
L_1002A6AA:
    PUSH32(esp, esi); /* 0x1002A6AA: push esi */
    PUSH32(esp, edi); /* 0x1002A6AB: push edi */
    ecx = eax; /* 0x1002A6AC: mov ecx, eax */
    RECOMP_CALL(sub_1002310C); /* 0x1002A6AE: call 0x1002310c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002A6B3: mov esi, eax */
L_1002A6B5:
    PUSH32(esp, esi); /* 0x1002A6B5: push esi */
    ecx = ebx; /* 0x1002A6B6: mov ecx, ebx */
    RECOMP_CALL(sub_10022CF3); /* 0x1002A6B8: call 0x10022cf3 */
    RECOMP_FLAGS_IN();
L_1002A6BD:
    esi = POP32_VAL(esp); /* 0x1002A6BD: pop esi */
L_1002A6BE:
    edi = POP32_VAL(esp); /* 0x1002A6BE: pop edi */
L_1002A6BF:
    eax = ebx; /* 0x1002A6BF: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1002A6C1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1002A6C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1002A6C3: ret 4 */
L_10030466:
    PUSH32(esp, edi); /* 0x10030466: push edi */
    RECOMP_CALL(sub_10022C2C); /* 0x10030467: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A6BD; /* 0x1003046C: jmp 0x1002a6bd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A6D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A6D0u);

L_1002A6D0:
    void_lift_trap(0x1002A6D0u, "insb byte ptr es:[edi], dx");
    /* outsd: no port I/O under Win32 */ /* 0x1002A6D1: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x1002A6D2: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + (-0x75)) = (uint8_t)(MEM8(edi + (-0x75)) + LO8(edx)); /* 0x1002A6D3: add byte ptr [di - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1002A6D7: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF0u; /* 0x1002A6D8: sub esp, 0xf0 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002A6DE: push ebx */
    PUSH32(esp, esi); /* 0x1002A6DF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002A6E0: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1002A6E3: push edi */
    MEM8(ebp + 0xB) = (uint8_t)(0); /* 0x1002A6E4: mov byte ptr [ebp + 0xb], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1002A6E8: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1002A6EB: mov byte ptr [esi + 4], 0 */
    eax = MEM32(esi + 0x4); /* 0x1002A6EF: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF00FFu);
    eax = eax & 0xFFFF00FFu; /* 0x1002A6F2: and eax, 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1002A6F7: mov dword ptr [esi + 4], eax */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A6FA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A6FC: jne 0x1002a762 */
L_1002A6FE:
    ebx = MEM32(ebp + (-0x4)); /* 0x1002A6FE: mov ebx, dword ptr [ebp - 4] */
L_1002A701:
    eax = MEM32(0x100E02F0); /* 0x1002A701: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002A706: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A708: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A70A: je 0x1002a762 */
L_1002A70C:
    /* cmp LO8(eax), 0x40u */ /* 0x1002A70C: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A70E: je 0x1002a762 */
L_1002A710:
    /* cmp MEM8(0x100E0304), 0 */ /* 0x1002A710: cmp byte ptr [0x100e0304], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0304)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CCAE; /* 0x1002A717: jne 0x1005ccae */
L_1002A71D:
    /* cmp MEM32(esi), 0 */ /* 0x1002A71D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A929; /* 0x1002A720: jne 0x1002a929 */
L_1002A726:
    eax = MEM32(0x100E02F0); /* 0x1002A726: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x1002A72B: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002ACA3; /* 0x1002A72E: je 0x1002aca3 */
L_1002A734:
    eax = ebp + (-0x78); /* 0x1002A734: lea eax, [ebp - 0x78] */
    PUSH32(esp, esi); /* 0x1002A737: push esi */
    PUSH32(esp, eax); /* 0x1002A738: push eax */
    eax = ebp + (-0x70); /* 0x1002A739: lea eax, [ebp - 0x70] */
L_1002A73C:
    PUSH32(esp, 0); /* 0x1002A73C: push 0 */
    PUSH32(esp, 1); /* 0x1002A73E: push 1 */
    PUSH32(esp, eax); /* 0x1002A740: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1002A741: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002A746: add esp, 0xc */
    _flag_k = FK_ADD;
L_1002A749:
    ecx = eax; /* 0x1002A749: mov ecx, eax */
L_1002A74B:
    RECOMP_CALL(sub_1002A19F); /* 0x1002A74B: call 0x1002a19f */
    RECOMP_FLAGS_IN();
L_1002A750:
    ecx = eax; /* 0x1002A750: mov ecx, eax */
    eax = MEM32(ecx); /* 0x1002A752: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x1002A754: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A756: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1002A759: mov dword ptr [esi + 4], eax */
L_1002A75C:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x1002A75C: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A701; /* 0x1002A760: je 0x1002a701 */
L_1002A762:
    eax = MEM32(0x100E02F0); /* 0x1002A762: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002A767: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A769: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CEE1; /* 0x1002A76B: je 0x1005cee1 */
L_1002A771:
    /* cmp LO8(eax), 0x40u */ /* 0x1002A771: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CECE; /* 0x1002A773: jne 0x1005cece */
L_1002A779:
    edi = POP32_VAL(esp); /* 0x1002A779: pop edi */
    eax = esi; /* 0x1002A77A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002A77C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002A77D: pop ebx */
    esp = ebp; /* 0x1002A77E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002A780: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A781: ret  */
L_1002A929:
    PUSH32(esp, esi); /* 0x1002A929: push esi */
    eax = ebp + (-0x50); /* 0x1002A92A: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1002A92D: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1002A92E: push 0x1002a7cc */
    ecx = ebp + (-0xE0); /* 0x1002A933: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_10022BC1); /* 0x1002A939: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A93E: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A940: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xB), 0 */ /* 0x1002A945: cmp byte ptr [ebp + 0xb], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xB)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x50)); /* 0x1002A949: mov eax, dword ptr [ebp - 0x50] */
    MEM32(esi) = eax; /* 0x1002A94C: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1002A94E: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(esi + 0x4) = eax; /* 0x1002A951: mov dword ptr [esi + 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A726; /* 0x1002A954: je 0x1002a726 */
L_1002A95A:
    goto L_1005CCC0; /* 0x1002A95A: jmp 0x1005ccc0 */
L_1002ACA3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002ACA3: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1002ACA4: mov dword ptr [0x100e02f0], eax */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1002ACA9: movsx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x24u; /* 0x1002ACAC: sub eax, 0x24 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CEB8; /* 0x1002ACAF: je 0x1005ceb8 */
L_1002ACB5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACB5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CE65; /* 0x1002ACB6: je 0x1005ce65 */
L_1002ACBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Au; /* 0x1002ACBC: sub eax, 0x1a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002ACF2; /* 0x1002ACBF: je 0x1002acf2 */
L_1002ACC1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACC1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACC2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CE65; /* 0x1002ACC3: je 0x1005ce65 */
L_1002ACC9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x1002ACC9: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CDD3; /* 0x1002ACCC: je 0x1005cdd3 */
L_1002ACD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x1002ACD2: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CCED; /* 0x1002ACD5: je 0x1005cced */
L_1002ACDB:
    PUSH32(esp, esi); /* 0x1002ACDB: push esi */
    eax = ebp + (-0x80); /* 0x1002ACDC: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1002ACDF: push eax */
    eax = ebp + (-0xF0); /* 0x1002ACE0: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x1002ACE6: push eax */
    RECOMP_CALL(sub_1002AC66); /* 0x1002ACE7: call 0x1002ac66 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002ACEC: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002A749; /* 0x1002ACED: jmp 0x1002a749 */
L_1002ACF2:
    eax = MEM32(0x100E02F0); /* 0x1002ACF2: mov eax, dword ptr [0x100e02f0] */
    ecx = eax + 0x1; /* 0x1002ACF7: lea ecx, [eax + 1] */
    /* cmp MEM8(ecx), 0x5Fu */ /* 0x1002ACFA: cmp byte ptr [ecx], 0x5f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CE14; /* 0x1002ACFD: je 0x1005ce14 */
L_1002AD03:
    eax = ebp + (-0x88); /* 0x1002AD03: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1002AD09: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1002AD0A: call 0x10023854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AD0F: pop ecx */
    PUSH32(esp, eax); /* 0x1002AD10: push eax */
    eax = ebp + (-0x48); /* 0x1002AD11: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1002AD14: push eax */
    PUSH32(esp, 0x60u); /* 0x1002AD15: push 0x60 */
    ecx = ebp + (-0x90); /* 0x1002AD17: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_1002A173); /* 0x1002AD1D: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002AD22: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002AD24: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1002AD29: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1002AD2C: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1002AD2F: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1002AD32: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x27u); /* 0x1002AD35: push 0x27 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1002AD37: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1002AD3A: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1002AD3F: push esi */
    eax = ebp + (-0xA0); /* 0x1002AD40: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1002AD46: push eax */
    ecx = ebp + (-0x30); /* 0x1002AD47: lea ecx, [ebp - 0x30] */
    RECOMP_BACKEDGE();
    goto L_1002A74B; /* 0x1002AD4A: jmp 0x1002a74b */
L_1005CCAE:
    /* cmp MEM8(0x100E0664), 0 */ /* 0x1005CCAE: cmp byte ptr [0x100e0664], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0664)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A71D; /* 0x1005CCB5: jne 0x1002a71d */
L_1005CCBB:
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CCBB: jmp 0x1002a779 */
L_1005CCC0:
    PUSH32(esp, esi); /* 0x1005CCC0: push esi */
    eax = ebp + (-0x38); /* 0x1005CCC1: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1005CCC4: push eax */
    PUSH32(esp, 0x5Bu); /* 0x1005CCC5: push 0x5b */
    ecx = ebp + (-0xD0); /* 0x1005CCC7: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_1002A173); /* 0x1005CCCD: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CCD2: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CCD4: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x1005CCD9: mov eax, dword ptr [ebp - 0x38] */
    MEM32(esi) = eax; /* 0x1005CCDC: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1005CCDE: mov eax, dword ptr [ebp - 0x34] */
    MEM32(esi + 0x4) = eax; /* 0x1005CCE1: mov dword ptr [esi + 4], eax */
    MEM8(ebp + 0xB) = (uint8_t)(0); /* 0x1005CCE4: mov byte ptr [ebp + 0xb], 0 */
    RECOMP_BACKEDGE();
    goto L_1002A726; /* 0x1005CCE8: jmp 0x1002a726 */
L_1005CCED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1005CCED: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF0000u);
    ebx = ebx & 0xFFFF0000u; /* 0x1005CCEF: and ebx, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CCF5: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edi; /* 0x1005CCFB: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1005CCFE: mov dword ptr [ebp - 4], ebx */
L_1005CD01:
    PUSH32(esp, 0); /* 0x1005CD01: push 0 */
    eax = ebp + (-0x28); /* 0x1005CD03: lea eax, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x1005CD06: push 1 */
    PUSH32(esp, eax); /* 0x1005CD08: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1005CD09: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x1005CD0E: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CD11: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005CD14: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CD59; /* 0x1005CD16: jne 0x1005cd59 */
L_1005CD18:
    /* test edi, edi */ /* 0x1005CD18: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CD52; /* 0x1005CD1A: je 0x1005cd52 */
L_1005CD1C:
    eax = MEM32(ebp + (-0x28)); /* 0x1005CD1C: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1005CD1F: mov dword ptr [ebp - 0x1c], ecx */
    ecx = ebp + (-0x20); /* 0x1005CD22: lea ecx, [ebp - 0x20] */
    PUSH32(esp, 0x1002A7CCu); /* 0x1005CD25: push 0x1002a7cc */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005CD2A: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005CD2D: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1005CD32: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x10); /* 0x1005CD35: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1005CD38: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1005CD3B: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1005CD3E: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x1005CD41: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CD44: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005CD45: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x10)); /* 0x1005CD4A: mov edi, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1005CD4D: mov ebx, dword ptr [ebp - 0xc] */
    goto L_1005CD64; /* 0x1005CD50: jmp 0x1005cd64 */
L_1005CD52:
    edi = MEM32(ebp + (-0x28)); /* 0x1005CD52: mov edi, dword ptr [ebp - 0x28] */
    ebx = ecx; /* 0x1005CD55: mov ebx, ecx */
    goto L_1005CD64; /* 0x1005CD57: jmp 0x1005cd64 */
L_1005CD59:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF0002u);
    ebx = ebx & 0xFFFF0002u; /* 0x1005CD59: and ebx, 0xffff0002 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x1005CD5F: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1005CD62: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005CD64:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1005CD64: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1005CD67: mov dword ptr [ebp - 8], edi */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1005CD6A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CDC0; /* 0x1005CD6C: jne 0x1005cdc0 */
L_1005CD6E:
    eax = MEM32(0x100E02F0); /* 0x1005CD6E: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1005CD73: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CD01; /* 0x1005CD76: jne 0x1005cd01 */
L_1005CD78:
    eax = ebp + (-0x8); /* 0x1005CD78: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CD7B: push eax */
    eax = ebp + (-0x58); /* 0x1005CD7C: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1005CD7F: push eax */
    PUSH32(esp, 0x5Bu); /* 0x1005CD80: push 0x5b */
    ecx = ebp + (-0xD8); /* 0x1005CD82: lea ecx, [ebp - 0xd8] */
    RECOMP_CALL(sub_1002A173); /* 0x1005CD88: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CD8D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CD8F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x58)); /* 0x1005CD94: mov eax, dword ptr [ebp - 0x58] */
    ecx = ebp + (-0x18); /* 0x1005CD97: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1005CD9A: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x1005CD9D: mov eax, dword ptr [ebp - 0x54] */
    PUSH32(esp, 0x5Du); /* 0x1005CDA0: push 0x5d */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005CDA2: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005CDA5: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1005CDAA: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi) = eax; /* 0x1005CDAD: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1005CDAF: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0x4) = eax; /* 0x1005CDB2: mov dword ptr [esi + 4], eax */
L_1005CDB5:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CDB5: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CDBB: jmp 0x1002a75c */
L_1005CDC0:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005CDC0: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1005CDC7: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1005CDCA: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CDCE: jmp 0x1002a75c */
L_1005CDD3:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CDD3: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    eax = ebp + (-0x98); /* 0x1005CDD9: lea eax, [ebp - 0x98] */
    PUSH32(esp, esi); /* 0x1005CDDF: push esi */
    PUSH32(esp, eax); /* 0x1005CDE0: push eax */
    PUSH32(esp, 0x5Du); /* 0x1005CDE1: push 0x5d */
    eax = ebp + (-0xC8); /* 0x1005CDE3: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x1005CDE9: push eax */
    PUSH32(esp, 0); /* 0x1005CDEA: push 0 */
    eax = ebp + (-0xA8); /* 0x1005CDEC: lea eax, [ebp - 0xa8] */
    PUSH32(esp, 1); /* 0x1005CDF2: push 1 */
    PUSH32(esp, eax); /* 0x1005CDF4: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1005CDF5: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CDFA: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1005CDFD: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1005CDFF: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE04: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE06: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    MEM8(ebp + 0xB) = (uint8_t)(1); /* 0x1005CE0B: mov byte ptr [ebp + 0xb], 1 */
    RECOMP_BACKEDGE();
    goto L_1002A750; /* 0x1005CE0F: jmp 0x1002a750 */
L_1005CE14:
    /* cmp MEM8(eax + 0x2), 0x3Fu */ /* 0x1005CE14: cmp byte ptr [eax + 2], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax + 0x2)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002AD03; /* 0x1005CE18: jne 0x1002ad03 */
L_1005CE1E:
    PUSH32(esp, esi); /* 0x1005CE1E: push esi */
    eax = ebp + (-0xE8); /* 0x1005CE1F: lea eax, [ebp - 0xe8] */
    MEM32(0x100E02F0) = ecx; /* 0x1005CE25: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x1005CE2B: push eax */
    PUSH32(esp, 0); /* 0x1005CE2C: push 0 */
    eax = ebp + (-0xB8); /* 0x1005CE2E: lea eax, [ebp - 0xb8] */
    PUSH32(esp, 0); /* 0x1005CE34: push 0 */
    PUSH32(esp, eax); /* 0x1005CE36: push eax */
    RECOMP_CALL(sub_1009F7D3); /* 0x1005CE37: call 0x1009f7d3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CE3C: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1005CE3F: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE41: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE46: mov ecx, eax */
    eax = MEM32(ecx); /* 0x1005CE48: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x1005CE4A: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x1005CE4C: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1005CE4F: mov dword ptr [esi + 4], eax */
    eax = MEM32(0x100E02F0); /* 0x1005CE52: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1005CE57: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CDB5; /* 0x1005CE5A: je 0x1005cdb5 */
L_1005CE60:
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CE60: jmp 0x1002a75c */
L_1005CE65:
    PUSH32(esp, 0x40u); /* 0x1005CE65: push 0x40 */
    PUSH32(esp, 0x100E02F0u); /* 0x1005CE67: push 0x100e02f0 */
    ecx = ebp + (-0x60); /* 0x1005CE6C: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_100231DB); /* 0x1005CE6F: call 0x100231db */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005CE74: push esi */
    eax = ebp + (-0x40); /* 0x1005CE75: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005CE78: push eax */
    PUSH32(esp, 0x100626ECu); /* 0x1005CE79: push 0x100626ec */
    ecx = ebp + (-0xB0); /* 0x1005CE7E: lea ecx, [ebp - 0xb0] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CE84: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE89: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE8B: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x1005CE90: mov eax, dword ptr [ebp - 0x40] */
    MEM32(esi) = eax; /* 0x1005CE93: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x1005CE95: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(esi + 0x4) = eax; /* 0x1005CE98: mov dword ptr [esi + 4], eax */
    ecx = MEM32(0x100E02EC); /* 0x1005CE9B: mov ecx, dword ptr [0x100e02ec] */
    /* cmp MEM32(ecx), 9 */ /* 0x1005CEA1: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A75C; /* 0x1005CEA4: je 0x1002a75c */
L_1005CEAA:
    eax = ebp + (-0x60); /* 0x1005CEAA: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x1005CEAD: push eax */
    RECOMP_CALL(sub_100230C2); /* 0x1005CEAE: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CEB3: jmp 0x1002a75c */
L_1005CEB8:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) - 1; /* 0x1005CEB8: dec dword ptr [0x100e02f0] */
    _flag_k = FK_DEC;
    eax = ebp + (-0xC0); /* 0x1005CEBE: lea eax, [ebp - 0xc0] */
    PUSH32(esp, esi); /* 0x1005CEC4: push esi */
    PUSH32(esp, eax); /* 0x1005CEC5: push eax */
    eax = ebp + (-0x68); /* 0x1005CEC6: lea eax, [ebp - 0x68] */
    RECOMP_BACKEDGE();
    goto L_1002A73C; /* 0x1005CEC9: jmp 0x1002a73c */
L_1005CECE:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005CECE: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1005CED5: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1005CED8: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CEDC: jmp 0x1002a779 */
L_1005CEE1:
    /* cmp MEM32(esi), 0 */ /* 0x1005CEE1: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CEF4; /* 0x1005CEE4: jne 0x1005cef4 */
L_1005CEE6:
    PUSH32(esp, 1); /* 0x1005CEE6: push 1 */
    ecx = esi; /* 0x1005CEE8: mov ecx, esi */
    RECOMP_CALL(sub_10023A53); /* 0x1005CEEA: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CEEF: jmp 0x1002a779 */
L_1005CEF4:
    PUSH32(esp, esi); /* 0x1005CEF4: push esi */
    eax = ebp + (-0x70); /* 0x1005CEF5: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1005CEF8: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1005CEF9: push 0x1002a7cc */
    eax = ebp + (-0x78); /* 0x1005CEFE: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1005CF01: push eax */
    PUSH32(esp, 1); /* 0x1005CF02: push 1 */
    ecx = ebp + (-0x68); /* 0x1005CF04: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005CF07: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CF0C: mov ecx, eax */
    RECOMP_CALL(sub_1002A782); /* 0x1005CF0E: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CF13: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CF15: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1005CF1A: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1005CF1C: mov dword ptr [esi], ecx */
    eax = MEM32(eax + 0x4); /* 0x1005CF1E: mov eax, dword ptr [eax + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1005CF21: mov dword ptr [esi + 4], eax */
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CF24: jmp 0x1002a779 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A6D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A6D5u);

L_1002A6D5:
    PUSH32(esp, ebp); /* 0x1002A6D5: push ebp */
    ebp = esp; /* 0x1002A6D6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF0u; /* 0x1002A6D8: sub esp, 0xf0 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002A6DE: push ebx */
    PUSH32(esp, esi); /* 0x1002A6DF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002A6E0: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1002A6E3: push edi */
    MEM8(ebp + 0xB) = (uint8_t)(0); /* 0x1002A6E4: mov byte ptr [ebp + 0xb], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1002A6E8: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1002A6EB: mov byte ptr [esi + 4], 0 */
    eax = MEM32(esi + 0x4); /* 0x1002A6EF: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF00FFu);
    eax = eax & 0xFFFF00FFu; /* 0x1002A6F2: and eax, 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1002A6F7: mov dword ptr [esi + 4], eax */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A6FA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A6FC: jne 0x1002a762 */
L_1002A6FE:
    ebx = MEM32(ebp + (-0x4)); /* 0x1002A6FE: mov ebx, dword ptr [ebp - 4] */
L_1002A701:
    eax = MEM32(0x100E02F0); /* 0x1002A701: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002A706: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A708: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A70A: je 0x1002a762 */
L_1002A70C:
    /* cmp LO8(eax), 0x40u */ /* 0x1002A70C: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A762; /* 0x1002A70E: je 0x1002a762 */
L_1002A710:
    /* cmp MEM8(0x100E0304), 0 */ /* 0x1002A710: cmp byte ptr [0x100e0304], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0304)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CCAE; /* 0x1002A717: jne 0x1005ccae */
L_1002A71D:
    /* cmp MEM32(esi), 0 */ /* 0x1002A71D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A929; /* 0x1002A720: jne 0x1002a929 */
L_1002A726:
    eax = MEM32(0x100E02F0); /* 0x1002A726: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x1002A72B: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002ACA3; /* 0x1002A72E: je 0x1002aca3 */
L_1002A734:
    eax = ebp + (-0x78); /* 0x1002A734: lea eax, [ebp - 0x78] */
    PUSH32(esp, esi); /* 0x1002A737: push esi */
    PUSH32(esp, eax); /* 0x1002A738: push eax */
    eax = ebp + (-0x70); /* 0x1002A739: lea eax, [ebp - 0x70] */
L_1002A73C:
    PUSH32(esp, 0); /* 0x1002A73C: push 0 */
    PUSH32(esp, 1); /* 0x1002A73E: push 1 */
    PUSH32(esp, eax); /* 0x1002A740: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1002A741: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002A746: add esp, 0xc */
    _flag_k = FK_ADD;
L_1002A749:
    ecx = eax; /* 0x1002A749: mov ecx, eax */
L_1002A74B:
    RECOMP_CALL(sub_1002A19F); /* 0x1002A74B: call 0x1002a19f */
    RECOMP_FLAGS_IN();
L_1002A750:
    ecx = eax; /* 0x1002A750: mov ecx, eax */
    eax = MEM32(ecx); /* 0x1002A752: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x1002A754: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A756: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1002A759: mov dword ptr [esi + 4], eax */
L_1002A75C:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x1002A75C: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A701; /* 0x1002A760: je 0x1002a701 */
L_1002A762:
    eax = MEM32(0x100E02F0); /* 0x1002A762: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002A767: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A769: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CEE1; /* 0x1002A76B: je 0x1005cee1 */
L_1002A771:
    /* cmp LO8(eax), 0x40u */ /* 0x1002A771: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CECE; /* 0x1002A773: jne 0x1005cece */
L_1002A779:
    edi = POP32_VAL(esp); /* 0x1002A779: pop edi */
    eax = esi; /* 0x1002A77A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002A77C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002A77D: pop ebx */
    esp = ebp; /* 0x1002A77E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002A780: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A781: ret  */
L_1002A929:
    PUSH32(esp, esi); /* 0x1002A929: push esi */
    eax = ebp + (-0x50); /* 0x1002A92A: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1002A92D: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1002A92E: push 0x1002a7cc */
    ecx = ebp + (-0xE0); /* 0x1002A933: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_10022BC1); /* 0x1002A939: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A93E: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A940: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xB), 0 */ /* 0x1002A945: cmp byte ptr [ebp + 0xb], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xB)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x50)); /* 0x1002A949: mov eax, dword ptr [ebp - 0x50] */
    MEM32(esi) = eax; /* 0x1002A94C: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1002A94E: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(esi + 0x4) = eax; /* 0x1002A951: mov dword ptr [esi + 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A726; /* 0x1002A954: je 0x1002a726 */
L_1002A95A:
    goto L_1005CCC0; /* 0x1002A95A: jmp 0x1005ccc0 */
L_1002ACA3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002ACA3: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1002ACA4: mov dword ptr [0x100e02f0], eax */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1002ACA9: movsx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x24u; /* 0x1002ACAC: sub eax, 0x24 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CEB8; /* 0x1002ACAF: je 0x1005ceb8 */
L_1002ACB5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACB5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CE65; /* 0x1002ACB6: je 0x1005ce65 */
L_1002ACBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Au; /* 0x1002ACBC: sub eax, 0x1a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002ACF2; /* 0x1002ACBF: je 0x1002acf2 */
L_1002ACC1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACC1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ACC2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CE65; /* 0x1002ACC3: je 0x1005ce65 */
L_1002ACC9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x1002ACC9: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CDD3; /* 0x1002ACCC: je 0x1005cdd3 */
L_1002ACD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x1002ACD2: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CCED; /* 0x1002ACD5: je 0x1005cced */
L_1002ACDB:
    PUSH32(esp, esi); /* 0x1002ACDB: push esi */
    eax = ebp + (-0x80); /* 0x1002ACDC: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1002ACDF: push eax */
    eax = ebp + (-0xF0); /* 0x1002ACE0: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x1002ACE6: push eax */
    RECOMP_CALL(sub_1002AC66); /* 0x1002ACE7: call 0x1002ac66 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002ACEC: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002A749; /* 0x1002ACED: jmp 0x1002a749 */
L_1002ACF2:
    eax = MEM32(0x100E02F0); /* 0x1002ACF2: mov eax, dword ptr [0x100e02f0] */
    ecx = eax + 0x1; /* 0x1002ACF7: lea ecx, [eax + 1] */
    /* cmp MEM8(ecx), 0x5Fu */ /* 0x1002ACFA: cmp byte ptr [ecx], 0x5f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CE14; /* 0x1002ACFD: je 0x1005ce14 */
L_1002AD03:
    eax = ebp + (-0x88); /* 0x1002AD03: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1002AD09: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1002AD0A: call 0x10023854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AD0F: pop ecx */
    PUSH32(esp, eax); /* 0x1002AD10: push eax */
    eax = ebp + (-0x48); /* 0x1002AD11: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1002AD14: push eax */
    PUSH32(esp, 0x60u); /* 0x1002AD15: push 0x60 */
    ecx = ebp + (-0x90); /* 0x1002AD17: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_1002A173); /* 0x1002AD1D: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002AD22: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002AD24: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1002AD29: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1002AD2C: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1002AD2F: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1002AD32: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x27u); /* 0x1002AD35: push 0x27 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1002AD37: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1002AD3A: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1002AD3F: push esi */
    eax = ebp + (-0xA0); /* 0x1002AD40: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1002AD46: push eax */
    ecx = ebp + (-0x30); /* 0x1002AD47: lea ecx, [ebp - 0x30] */
    RECOMP_BACKEDGE();
    goto L_1002A74B; /* 0x1002AD4A: jmp 0x1002a74b */
L_1005CCAE:
    /* cmp MEM8(0x100E0664), 0 */ /* 0x1005CCAE: cmp byte ptr [0x100e0664], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0664)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A71D; /* 0x1005CCB5: jne 0x1002a71d */
L_1005CCBB:
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CCBB: jmp 0x1002a779 */
L_1005CCC0:
    PUSH32(esp, esi); /* 0x1005CCC0: push esi */
    eax = ebp + (-0x38); /* 0x1005CCC1: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1005CCC4: push eax */
    PUSH32(esp, 0x5Bu); /* 0x1005CCC5: push 0x5b */
    ecx = ebp + (-0xD0); /* 0x1005CCC7: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_1002A173); /* 0x1005CCCD: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CCD2: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CCD4: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x1005CCD9: mov eax, dword ptr [ebp - 0x38] */
    MEM32(esi) = eax; /* 0x1005CCDC: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1005CCDE: mov eax, dword ptr [ebp - 0x34] */
    MEM32(esi + 0x4) = eax; /* 0x1005CCE1: mov dword ptr [esi + 4], eax */
    MEM8(ebp + 0xB) = (uint8_t)(0); /* 0x1005CCE4: mov byte ptr [ebp + 0xb], 0 */
    RECOMP_BACKEDGE();
    goto L_1002A726; /* 0x1005CCE8: jmp 0x1002a726 */
L_1005CCED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1005CCED: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF0000u);
    ebx = ebx & 0xFFFF0000u; /* 0x1005CCEF: and ebx, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CCF5: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edi; /* 0x1005CCFB: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1005CCFE: mov dword ptr [ebp - 4], ebx */
L_1005CD01:
    PUSH32(esp, 0); /* 0x1005CD01: push 0 */
    eax = ebp + (-0x28); /* 0x1005CD03: lea eax, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x1005CD06: push 1 */
    PUSH32(esp, eax); /* 0x1005CD08: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1005CD09: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x1005CD0E: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CD11: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005CD14: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CD59; /* 0x1005CD16: jne 0x1005cd59 */
L_1005CD18:
    /* test edi, edi */ /* 0x1005CD18: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CD52; /* 0x1005CD1A: je 0x1005cd52 */
L_1005CD1C:
    eax = MEM32(ebp + (-0x28)); /* 0x1005CD1C: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1005CD1F: mov dword ptr [ebp - 0x1c], ecx */
    ecx = ebp + (-0x20); /* 0x1005CD22: lea ecx, [ebp - 0x20] */
    PUSH32(esp, 0x1002A7CCu); /* 0x1005CD25: push 0x1002a7cc */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005CD2A: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005CD2D: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1005CD32: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x10); /* 0x1005CD35: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1005CD38: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1005CD3B: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1005CD3E: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x1005CD41: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CD44: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005CD45: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x10)); /* 0x1005CD4A: mov edi, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1005CD4D: mov ebx, dword ptr [ebp - 0xc] */
    goto L_1005CD64; /* 0x1005CD50: jmp 0x1005cd64 */
L_1005CD52:
    edi = MEM32(ebp + (-0x28)); /* 0x1005CD52: mov edi, dword ptr [ebp - 0x28] */
    ebx = ecx; /* 0x1005CD55: mov ebx, ecx */
    goto L_1005CD64; /* 0x1005CD57: jmp 0x1005cd64 */
L_1005CD59:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF0002u);
    ebx = ebx & 0xFFFF0002u; /* 0x1005CD59: and ebx, 0xffff0002 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x1005CD5F: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1005CD62: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005CD64:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1005CD64: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1005CD67: mov dword ptr [ebp - 8], edi */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1005CD6A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CDC0; /* 0x1005CD6C: jne 0x1005cdc0 */
L_1005CD6E:
    eax = MEM32(0x100E02F0); /* 0x1005CD6E: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1005CD73: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CD01; /* 0x1005CD76: jne 0x1005cd01 */
L_1005CD78:
    eax = ebp + (-0x8); /* 0x1005CD78: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CD7B: push eax */
    eax = ebp + (-0x58); /* 0x1005CD7C: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1005CD7F: push eax */
    PUSH32(esp, 0x5Bu); /* 0x1005CD80: push 0x5b */
    ecx = ebp + (-0xD8); /* 0x1005CD82: lea ecx, [ebp - 0xd8] */
    RECOMP_CALL(sub_1002A173); /* 0x1005CD88: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CD8D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CD8F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x58)); /* 0x1005CD94: mov eax, dword ptr [ebp - 0x58] */
    ecx = ebp + (-0x18); /* 0x1005CD97: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1005CD9A: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x1005CD9D: mov eax, dword ptr [ebp - 0x54] */
    PUSH32(esp, 0x5Du); /* 0x1005CDA0: push 0x5d */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005CDA2: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005CDA5: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1005CDAA: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi) = eax; /* 0x1005CDAD: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1005CDAF: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0x4) = eax; /* 0x1005CDB2: mov dword ptr [esi + 4], eax */
L_1005CDB5:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CDB5: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CDBB: jmp 0x1002a75c */
L_1005CDC0:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005CDC0: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1005CDC7: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1005CDCA: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CDCE: jmp 0x1002a75c */
L_1005CDD3:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1005CDD3: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    eax = ebp + (-0x98); /* 0x1005CDD9: lea eax, [ebp - 0x98] */
    PUSH32(esp, esi); /* 0x1005CDDF: push esi */
    PUSH32(esp, eax); /* 0x1005CDE0: push eax */
    PUSH32(esp, 0x5Du); /* 0x1005CDE1: push 0x5d */
    eax = ebp + (-0xC8); /* 0x1005CDE3: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x1005CDE9: push eax */
    PUSH32(esp, 0); /* 0x1005CDEA: push 0 */
    eax = ebp + (-0xA8); /* 0x1005CDEC: lea eax, [ebp - 0xa8] */
    PUSH32(esp, 1); /* 0x1005CDF2: push 1 */
    PUSH32(esp, eax); /* 0x1005CDF4: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1005CDF5: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CDFA: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1005CDFD: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1005CDFF: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE04: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE06: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    MEM8(ebp + 0xB) = (uint8_t)(1); /* 0x1005CE0B: mov byte ptr [ebp + 0xb], 1 */
    RECOMP_BACKEDGE();
    goto L_1002A750; /* 0x1005CE0F: jmp 0x1002a750 */
L_1005CE14:
    /* cmp MEM8(eax + 0x2), 0x3Fu */ /* 0x1005CE14: cmp byte ptr [eax + 2], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax + 0x2)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002AD03; /* 0x1005CE18: jne 0x1002ad03 */
L_1005CE1E:
    PUSH32(esp, esi); /* 0x1005CE1E: push esi */
    eax = ebp + (-0xE8); /* 0x1005CE1F: lea eax, [ebp - 0xe8] */
    MEM32(0x100E02F0) = ecx; /* 0x1005CE25: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x1005CE2B: push eax */
    PUSH32(esp, 0); /* 0x1005CE2C: push 0 */
    eax = ebp + (-0xB8); /* 0x1005CE2E: lea eax, [ebp - 0xb8] */
    PUSH32(esp, 0); /* 0x1005CE34: push 0 */
    PUSH32(esp, eax); /* 0x1005CE36: push eax */
    RECOMP_CALL(sub_1009F7D3); /* 0x1005CE37: call 0x1009f7d3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CE3C: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1005CE3F: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE41: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE46: mov ecx, eax */
    eax = MEM32(ecx); /* 0x1005CE48: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x1005CE4A: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x1005CE4C: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1005CE4F: mov dword ptr [esi + 4], eax */
    eax = MEM32(0x100E02F0); /* 0x1005CE52: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1005CE57: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CDB5; /* 0x1005CE5A: je 0x1005cdb5 */
L_1005CE60:
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CE60: jmp 0x1002a75c */
L_1005CE65:
    PUSH32(esp, 0x40u); /* 0x1005CE65: push 0x40 */
    PUSH32(esp, 0x100E02F0u); /* 0x1005CE67: push 0x100e02f0 */
    ecx = ebp + (-0x60); /* 0x1005CE6C: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_100231DB); /* 0x1005CE6F: call 0x100231db */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005CE74: push esi */
    eax = ebp + (-0x40); /* 0x1005CE75: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005CE78: push eax */
    PUSH32(esp, 0x100626ECu); /* 0x1005CE79: push 0x100626ec */
    ecx = ebp + (-0xB0); /* 0x1005CE7E: lea ecx, [ebp - 0xb0] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CE84: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CE89: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CE8B: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x1005CE90: mov eax, dword ptr [ebp - 0x40] */
    MEM32(esi) = eax; /* 0x1005CE93: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x1005CE95: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(esi + 0x4) = eax; /* 0x1005CE98: mov dword ptr [esi + 4], eax */
    ecx = MEM32(0x100E02EC); /* 0x1005CE9B: mov ecx, dword ptr [0x100e02ec] */
    /* cmp MEM32(ecx), 9 */ /* 0x1005CEA1: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A75C; /* 0x1005CEA4: je 0x1002a75c */
L_1005CEAA:
    eax = ebp + (-0x60); /* 0x1005CEAA: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x1005CEAD: push eax */
    RECOMP_CALL(sub_100230C2); /* 0x1005CEAE: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A75C; /* 0x1005CEB3: jmp 0x1002a75c */
L_1005CEB8:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) - 1; /* 0x1005CEB8: dec dword ptr [0x100e02f0] */
    _flag_k = FK_DEC;
    eax = ebp + (-0xC0); /* 0x1005CEBE: lea eax, [ebp - 0xc0] */
    PUSH32(esp, esi); /* 0x1005CEC4: push esi */
    PUSH32(esp, eax); /* 0x1005CEC5: push eax */
    eax = ebp + (-0x68); /* 0x1005CEC6: lea eax, [ebp - 0x68] */
    RECOMP_BACKEDGE();
    goto L_1002A73C; /* 0x1005CEC9: jmp 0x1002a73c */
L_1005CECE:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005CECE: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1005CED5: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1005CED8: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CEDC: jmp 0x1002a779 */
L_1005CEE1:
    /* cmp MEM32(esi), 0 */ /* 0x1005CEE1: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CEF4; /* 0x1005CEE4: jne 0x1005cef4 */
L_1005CEE6:
    PUSH32(esp, 1); /* 0x1005CEE6: push 1 */
    ecx = esi; /* 0x1005CEE8: mov ecx, esi */
    RECOMP_CALL(sub_10023A53); /* 0x1005CEEA: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CEEF: jmp 0x1002a779 */
L_1005CEF4:
    PUSH32(esp, esi); /* 0x1005CEF4: push esi */
    eax = ebp + (-0x70); /* 0x1005CEF5: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1005CEF8: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1005CEF9: push 0x1002a7cc */
    eax = ebp + (-0x78); /* 0x1005CEFE: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1005CF01: push eax */
    PUSH32(esp, 1); /* 0x1005CF02: push 1 */
    ecx = ebp + (-0x68); /* 0x1005CF04: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005CF07: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CF0C: mov ecx, eax */
    RECOMP_CALL(sub_1002A782); /* 0x1005CF0E: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CF13: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CF15: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1005CF1A: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1005CF1C: mov dword ptr [esi], ecx */
    eax = MEM32(eax + 0x4); /* 0x1005CF1E: mov eax, dword ptr [eax + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1005CF21: mov dword ptr [esi + 4], eax */
    RECOMP_BACKEDGE();
    goto L_1002A779; /* 0x1005CF24: jmp 0x1002a779 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A782(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A782u);

L_1002A782:
    PUSH32(esp, ebp); /* 0x1002A782: push ebp */
    ebp = esp; /* 0x1002A783: mov ebp, esp */
    edx = MEM32(ecx); /* 0x1002A785: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1002A787: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002A788: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002A78B: push dword ptr [ebp + 0xc] */
    MEM32(esi) = edx; /* 0x1002A78E: mov dword ptr [esi], edx */
    ecx = MEM32(ecx + 0x4); /* 0x1002A790: mov ecx, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x1002A793: mov dword ptr [esi + 4], ecx */
    ecx = esi; /* 0x1002A796: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x1002A798: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1002A79D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002A79F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002A7A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002A7A1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1002A7CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A7CCu);

L_1002A7CC:
    /* cmp HI8(ebx), MEM8(edx) */ /* 0x1002A7CC: cmp bh, byte ptr [edx] */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1002A7CE: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1002A7D1: in al, dx */
    ecx = MEM32(0x100E02F0); /* 0x1002A7D2: mov ecx, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1002A7D8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1002A7DB: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002A7DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx), 0x51u */ /* 0x1002A7DE: cmp byte ptr [ecx], 0x51 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x1002A7E1: push edi */
    edi = esi; /* 0x1002A7E2: mov edi, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C7B9; /* 0x1002A7E4: je 0x1005c7b9 */
L_1002A7EA:
    SET_LO8(eax, MEM8(ecx)); /* 0x1002A7EA: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A7EC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C7CA; /* 0x1002A7EE: je 0x1005c7ca */
L_1002A7F4:
    /* cmp LO8(eax), 0x30u */ /* 0x1002A7F4: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1002A800; /* 0x1002A7F6: jl 0x1002a800 */
L_1002A7F8:
    /* cmp LO8(eax), 0x39u */ /* 0x1002A7F8: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002A8EE; /* 0x1002A7FA: jle 0x1002a8ee */
L_1002A800:
    PUSH32(esp, ebx); /* 0x1002A800: push ebx */
    ebx = esi; /* 0x1002A801: mov ebx, esi */
L_1002A803:
    /* cmp LO8(eax), 0x40u */ /* 0x1002A803: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A83E; /* 0x1002A805: je 0x1002a83e */
L_1002A807:
    /* test LO8(eax), LO8(eax) */ /* 0x1002A807: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C807; /* 0x1002A809: je 0x1005c807 */
L_1002A80F:
    /* cmp LO8(eax), 0x41u */ /* 0x1002A80F: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1002A922; /* 0x1002A811: jl 0x1002a922 */
L_1002A817:
    /* cmp LO8(eax), 0x50u */ /* 0x1002A817: cmp al, 0x50 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1002A922; /* 0x1002A819: jg 0x1002a922 */
L_1002A81F:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1002A81F: movsx eax, al */
    if (1) _cf = (((ebx) >> 28) & 1u); /* 0x1002A822: shld ebx, esi, 4 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ebx) << (4u)) | ((uint32_t)(esi) >> (32 - (4u)))) : (ebx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ((1) ? (((ebx) << (4u)) | ((uint32_t)(esi) >> (32 - (4u)))) : (ebx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1002A826: sub eax, 0x41 */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002A829: cdq  */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1002A82A: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1002A82A: shl esi, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1002A82D: add eax, esi */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1002A82F: mov esi, eax */
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002A831: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002A833: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1002A834: mov dword ptr [0x100e02f0], ecx */
    SET_LO8(eax, MEM8(ecx)); /* 0x1002A83A: mov al, byte ptr [ecx] */
    RECOMP_BACKEDGE();
    goto L_1002A803; /* 0x1002A83C: jmp 0x1002a803 */
L_1002A83E:
    SET_LO8(eax, MEM8(ecx)); /* 0x1002A83E: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002A840: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1002A841: mov dword ptr [0x100e02f0], ecx */
    /* cmp LO8(eax), 0x40u */ /* 0x1002A847: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A922; /* 0x1002A849: jne 0x1002a922 */
L_1002A84F:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1002A84F: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x1002A853: push ebx */
    PUSH32(esp, esi); /* 0x1002A854: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C80B; /* 0x1002A855: jne 0x1005c80b */
L_1002A85B:
    /* test edi, edi */ /* 0x1002A85B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C837; /* 0x1002A85D: jne 0x1005c837 */
L_1002A863:
    ecx = ebp + (-0x8); /* 0x1002A863: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A881); /* 0x1002A866: call 0x1002a881 */
    RECOMP_FLAGS_IN();
L_1002A86B:
    edx = eax; /* 0x1002A86B: mov edx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1002A86D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x1002A870: mov ecx, dword ptr [edx] */
    MEM32(eax) = ecx; /* 0x1002A872: mov dword ptr [eax], ecx */
    ecx = MEM32(edx + 0x4); /* 0x1002A874: mov ecx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1002A877: mov dword ptr [eax + 4], ecx */
L_1002A87A:
    ebx = POP32_VAL(esp); /* 0x1002A87A: pop ebx */
L_1002A87B:
    edi = POP32_VAL(esp); /* 0x1002A87B: pop edi */
    esi = POP32_VAL(esp); /* 0x1002A87C: pop esi */
    esp = ebp; /* 0x1002A87D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002A87F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A880: ret  */
L_1002A8EE:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1002A8EE: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Fu; /* 0x1002A8F1: sub eax, 0x2f */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002A8F4: inc ecx */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002A8F5: cdq  */
    MEM32(0x100E02F0) = ecx; /* 0x1002A8F6: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, edx); /* 0x1002A8FC: push edx */
    PUSH32(esp, eax); /* 0x1002A8FD: push eax */
    /* test edi, edi */ /* 0x1002A8FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C7DC; /* 0x1002A900: jne 0x1005c7dc */
L_1002A906:
    ecx = ebp + (-0x18); /* 0x1002A906: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A881); /* 0x1002A909: call 0x1002a881 */
    RECOMP_FLAGS_IN();
L_1002A90E:
    edx = eax; /* 0x1002A90E: mov edx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1002A910: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x1002A913: mov ecx, dword ptr [edx] */
    MEM32(eax) = ecx; /* 0x1002A915: mov dword ptr [eax], ecx */
    ecx = MEM32(edx + 0x4); /* 0x1002A917: mov ecx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1002A91A: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_1002A87B; /* 0x1002A91D: jmp 0x1002a87b */
L_1002A922:
    PUSH32(esp, 2); /* 0x1002A922: push 2 */
    goto L_1005C7F7; /* 0x1002A924: jmp 0x1005c7f7 */
L_1005C7B9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005C7B9: inc ecx */
    _flag_k = FK_INC;
    edi = 0x10062704u; /* 0x1005C7BA: mov edi, 0x10062704 */
    MEM32(0x100E02F0) = ecx; /* 0x1005C7BF: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1002A7EA; /* 0x1005C7C5: jmp 0x1002a7ea */
L_1005C7CA:
    ecx = MEM32(ebp + 0x8); /* 0x1005C7CA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1005C7CD: push 1 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C7CF: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005C7D4: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002A87B; /* 0x1005C7D7: jmp 0x1002a87b */
L_1005C7DC:
    ecx = ebp + (-0x8); /* 0x1005C7DC: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A881); /* 0x1005C7DF: call 0x1002a881 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005C7E4: push eax */
    eax = ebp + (-0x10); /* 0x1005C7E5: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1005C7E8: push edi */
    PUSH32(esp, eax); /* 0x1005C7E9: push eax */
    RECOMP_CALL(sub_10030A83); /* 0x1005C7EA: call 0x10030a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005C7EF: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002A90E; /* 0x1005C7F2: jmp 0x1002a90e */
L_1005C7F7:
    ecx = MEM32(ebp + 0x8); /* 0x1005C7F7: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C7FA: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005C7FF: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002A87A; /* 0x1005C802: jmp 0x1002a87a */
L_1005C807:
    PUSH32(esp, 1); /* 0x1005C807: push 1 */
    RECOMP_BACKEDGE();
    goto L_1005C7F7; /* 0x1005C809: jmp 0x1005c7f7 */
L_1005C80B:
    /* test edi, edi */ /* 0x1005C80B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C82A; /* 0x1005C80D: je 0x1005c82a */
L_1005C80F:
    ecx = ebp + (-0x18); /* 0x1005C80F: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1009EB57); /* 0x1005C812: call 0x1009eb57 */
    RECOMP_FLAGS_IN();
L_1005C817:
    PUSH32(esp, eax); /* 0x1005C817: push eax */
    eax = ebp + (-0x10); /* 0x1005C818: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1005C81B: push edi */
    PUSH32(esp, eax); /* 0x1005C81C: push eax */
    RECOMP_CALL(sub_10030A83); /* 0x1005C81D: call 0x10030a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005C822: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002A86B; /* 0x1005C825: jmp 0x1002a86b */
L_1005C82A:
    ecx = ebp + (-0x8); /* 0x1005C82A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1009EB57); /* 0x1005C82D: call 0x1009eb57 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A86B; /* 0x1005C832: jmp 0x1002a86b */
L_1005C837:
    ecx = ebp + (-0x18); /* 0x1005C837: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A881); /* 0x1005C83A: call 0x1002a881 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1005C817; /* 0x1005C83F: jmp 0x1005c817 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A7CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A7CFu);

L_1002A7CF:
    PUSH32(esp, ebp); /* 0x1002A7CF: push ebp */
    ebp = esp; /* 0x1002A7D0: mov ebp, esp */
    ecx = MEM32(0x100E02F0); /* 0x1002A7D2: mov ecx, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1002A7D8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1002A7DB: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002A7DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx), 0x51u */ /* 0x1002A7DE: cmp byte ptr [ecx], 0x51 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x1002A7E1: push edi */
    edi = esi; /* 0x1002A7E2: mov edi, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C7B9; /* 0x1002A7E4: je 0x1005c7b9 */
L_1002A7EA:
    SET_LO8(eax, MEM8(ecx)); /* 0x1002A7EA: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002A7EC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C7CA; /* 0x1002A7EE: je 0x1005c7ca */
L_1002A7F4:
    /* cmp LO8(eax), 0x30u */ /* 0x1002A7F4: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1002A800; /* 0x1002A7F6: jl 0x1002a800 */
L_1002A7F8:
    /* cmp LO8(eax), 0x39u */ /* 0x1002A7F8: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002A8EE; /* 0x1002A7FA: jle 0x1002a8ee */
L_1002A800:
    PUSH32(esp, ebx); /* 0x1002A800: push ebx */
    ebx = esi; /* 0x1002A801: mov ebx, esi */
L_1002A803:
    /* cmp LO8(eax), 0x40u */ /* 0x1002A803: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A83E; /* 0x1002A805: je 0x1002a83e */
L_1002A807:
    /* test LO8(eax), LO8(eax) */ /* 0x1002A807: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C807; /* 0x1002A809: je 0x1005c807 */
L_1002A80F:
    /* cmp LO8(eax), 0x41u */ /* 0x1002A80F: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1002A922; /* 0x1002A811: jl 0x1002a922 */
L_1002A817:
    /* cmp LO8(eax), 0x50u */ /* 0x1002A817: cmp al, 0x50 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1002A922; /* 0x1002A819: jg 0x1002a922 */
L_1002A81F:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1002A81F: movsx eax, al */
    if (1) _cf = (((ebx) >> 28) & 1u); /* 0x1002A822: shld ebx, esi, 4 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ebx) << (4u)) | ((uint32_t)(esi) >> (32 - (4u)))) : (ebx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ((1) ? (((ebx) << (4u)) | ((uint32_t)(esi) >> (32 - (4u)))) : (ebx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1002A826: sub eax, 0x41 */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002A829: cdq  */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1002A82A: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1002A82A: shl esi, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1002A82D: add eax, esi */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1002A82F: mov esi, eax */
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002A831: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002A833: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1002A834: mov dword ptr [0x100e02f0], ecx */
    SET_LO8(eax, MEM8(ecx)); /* 0x1002A83A: mov al, byte ptr [ecx] */
    RECOMP_BACKEDGE();
    goto L_1002A803; /* 0x1002A83C: jmp 0x1002a803 */
L_1002A83E:
    SET_LO8(eax, MEM8(ecx)); /* 0x1002A83E: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002A840: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1002A841: mov dword ptr [0x100e02f0], ecx */
    /* cmp LO8(eax), 0x40u */ /* 0x1002A847: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A922; /* 0x1002A849: jne 0x1002a922 */
L_1002A84F:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1002A84F: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x1002A853: push ebx */
    PUSH32(esp, esi); /* 0x1002A854: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C80B; /* 0x1002A855: jne 0x1005c80b */
L_1002A85B:
    /* test edi, edi */ /* 0x1002A85B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C837; /* 0x1002A85D: jne 0x1005c837 */
L_1002A863:
    ecx = ebp + (-0x8); /* 0x1002A863: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A881); /* 0x1002A866: call 0x1002a881 */
    RECOMP_FLAGS_IN();
L_1002A86B:
    edx = eax; /* 0x1002A86B: mov edx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1002A86D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x1002A870: mov ecx, dword ptr [edx] */
    MEM32(eax) = ecx; /* 0x1002A872: mov dword ptr [eax], ecx */
    ecx = MEM32(edx + 0x4); /* 0x1002A874: mov ecx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1002A877: mov dword ptr [eax + 4], ecx */
L_1002A87A:
    ebx = POP32_VAL(esp); /* 0x1002A87A: pop ebx */
L_1002A87B:
    edi = POP32_VAL(esp); /* 0x1002A87B: pop edi */
    esi = POP32_VAL(esp); /* 0x1002A87C: pop esi */
    esp = ebp; /* 0x1002A87D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002A87F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002A880: ret  */
L_1002A8EE:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1002A8EE: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Fu; /* 0x1002A8F1: sub eax, 0x2f */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002A8F4: inc ecx */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002A8F5: cdq  */
    MEM32(0x100E02F0) = ecx; /* 0x1002A8F6: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, edx); /* 0x1002A8FC: push edx */
    PUSH32(esp, eax); /* 0x1002A8FD: push eax */
    /* test edi, edi */ /* 0x1002A8FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C7DC; /* 0x1002A900: jne 0x1005c7dc */
L_1002A906:
    ecx = ebp + (-0x18); /* 0x1002A906: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A881); /* 0x1002A909: call 0x1002a881 */
    RECOMP_FLAGS_IN();
L_1002A90E:
    edx = eax; /* 0x1002A90E: mov edx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1002A910: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x1002A913: mov ecx, dword ptr [edx] */
    MEM32(eax) = ecx; /* 0x1002A915: mov dword ptr [eax], ecx */
    ecx = MEM32(edx + 0x4); /* 0x1002A917: mov ecx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1002A91A: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_1002A87B; /* 0x1002A91D: jmp 0x1002a87b */
L_1002A922:
    PUSH32(esp, 2); /* 0x1002A922: push 2 */
    goto L_1005C7F7; /* 0x1002A924: jmp 0x1005c7f7 */
L_1005C7B9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005C7B9: inc ecx */
    _flag_k = FK_INC;
    edi = 0x10062704u; /* 0x1005C7BA: mov edi, 0x10062704 */
    MEM32(0x100E02F0) = ecx; /* 0x1005C7BF: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1002A7EA; /* 0x1005C7C5: jmp 0x1002a7ea */
L_1005C7CA:
    ecx = MEM32(ebp + 0x8); /* 0x1005C7CA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1005C7CD: push 1 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C7CF: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005C7D4: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002A87B; /* 0x1005C7D7: jmp 0x1002a87b */
L_1005C7DC:
    ecx = ebp + (-0x8); /* 0x1005C7DC: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A881); /* 0x1005C7DF: call 0x1002a881 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005C7E4: push eax */
    eax = ebp + (-0x10); /* 0x1005C7E5: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1005C7E8: push edi */
    PUSH32(esp, eax); /* 0x1005C7E9: push eax */
    RECOMP_CALL(sub_10030A83); /* 0x1005C7EA: call 0x10030a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005C7EF: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002A90E; /* 0x1005C7F2: jmp 0x1002a90e */
L_1005C7F7:
    ecx = MEM32(ebp + 0x8); /* 0x1005C7F7: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C7FA: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005C7FF: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002A87A; /* 0x1005C802: jmp 0x1002a87a */
L_1005C807:
    PUSH32(esp, 1); /* 0x1005C807: push 1 */
    RECOMP_BACKEDGE();
    goto L_1005C7F7; /* 0x1005C809: jmp 0x1005c7f7 */
L_1005C80B:
    /* test edi, edi */ /* 0x1005C80B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C82A; /* 0x1005C80D: je 0x1005c82a */
L_1005C80F:
    ecx = ebp + (-0x18); /* 0x1005C80F: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1009EB57); /* 0x1005C812: call 0x1009eb57 */
    RECOMP_FLAGS_IN();
L_1005C817:
    PUSH32(esp, eax); /* 0x1005C817: push eax */
    eax = ebp + (-0x10); /* 0x1005C818: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1005C81B: push edi */
    PUSH32(esp, eax); /* 0x1005C81C: push eax */
    RECOMP_CALL(sub_10030A83); /* 0x1005C81D: call 0x10030a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005C822: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002A86B; /* 0x1005C825: jmp 0x1002a86b */
L_1005C82A:
    ecx = ebp + (-0x8); /* 0x1005C82A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1009EB57); /* 0x1005C82D: call 0x1009eb57 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A86B; /* 0x1005C832: jmp 0x1002a86b */
L_1005C837:
    ecx = ebp + (-0x18); /* 0x1005C837: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A881); /* 0x1005C83A: call 0x1002a881 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1005C817; /* 0x1005C83F: jmp 0x1005c817 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002A881(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A881u);

L_1002A881:
    PUSH32(esp, ebp); /* 0x1002A881: push ebp */
    ebp = esp; /* 0x1002A882: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1002A884: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1002A887: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1002A88C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002A88E: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0xC); /* 0x1002A891: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1002A894: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1002A895: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1002A898: push esi */
    esi = ecx; /* 0x1002A899: mov esi, ecx */
    MEM8(ebp + (-0x8)) = (uint8_t)(0); /* 0x1002A89B: mov byte ptr [ebp - 8], 0 */
    PUSH32(esp, edi); /* 0x1002A89F: push edi */
    edi = ebp + (-0x8); /* 0x1002A8A0: lea edi, [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1002A8A3: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1002A8A6: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1002A8AA: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002A8B1:
    PUSH32(esp, 0); /* 0x1002A8B1: push 0 */
    PUSH32(esp, 0xAu); /* 0x1002A8B3: push 0xa */
    PUSH32(esp, edx); /* 0x1002A8B5: push edx */
    PUSH32(esp, ebx); /* 0x1002A8B6: push ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002A8B7: dec edi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_10011849); /* 0x1002A8B8: call 0x10011849 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = ebx; /* 0x1002A8BD: mov dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x30u); /* 0x1002A8C0: add cl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = eax; /* 0x1002A8C3: mov ebx, eax */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1002A8C5: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1002A8C7: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A8B1; /* 0x1002A8C9: jne 0x1002a8b1 */
L_1002A8CB:
    ecx = ebp + (-0x8); /* 0x1002A8CB: lea ecx, [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1002A8CE: sub ecx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1002A8D0: push ecx */
    PUSH32(esp, edi); /* 0x1002A8D1: push edi */
    ecx = esi; /* 0x1002A8D2: mov ecx, esi */
    RECOMP_CALL(sub_10023174); /* 0x1002A8D4: call 0x10023174 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1002A8D9: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x1002A8DC: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x1002A8DE: pop edi */
    esi = POP32_VAL(esp); /* 0x1002A8DF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002A8E0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1002A8E2: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1002A8E3: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002A8E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002A8EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002A8EB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1002A95F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002A95Fu);

L_1002A95F:
    PUSH32(esp, ebp); /* 0x1002A95F: push ebp */
    ebp = esp; /* 0x1002A960: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002A962: push ecx */
    edx = MEM32(0x100E02F0); /* 0x1002A963: mov edx, dword ptr [0x100e02f0] */
    PUSH32(esp, ebx); /* 0x1002A969: push ebx */
    PUSH32(esp, esi); /* 0x1002A96A: push esi */
    PUSH32(esp, edi); /* 0x1002A96B: push edi */
    esi = 0x4000u; /* 0x1002A96C: mov esi, 0x4000 */
L_1002A971:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002A971: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edx), 0x5Fu */ /* 0x1002A973: cmp byte ptr [edx], 0x5f */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D48C; /* 0x1002A976: je 0x1005d48c */
L_1002A97C:
    SET_LO8(eax, MEM8(edx)); /* 0x1002A97C: mov al, byte ptr [edx] */
    /* cmp LO8(eax), 0x41u */ /* 0x1002A97E: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1005D49A; /* 0x1002A980: jl 0x1005d49a */
L_1002A986:
    /* cmp LO8(eax), 0x5Au */ /* 0x1002A986: cmp al, 0x5a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D49A; /* 0x1002A988: jg 0x1005d49a */
L_1002A98E:
    ebx = (int32_t)(int8_t)MEM8(edx); /* 0x1002A98E: movsx ebx, byte ptr [edx] */
    eax = 0x8000u; /* 0x1002A991: mov eax, 0x8000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x41u; /* 0x1002A996: sub ebx, 0x41 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002A999: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002A99B: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1002A99C: mov dword ptr [0x100e02f0], edx */
    /* test LO8(ebx), 1 */ /* 0x1002A9A2: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005D522; /* 0x1002A9A5: jne 0x1005d522 */
L_1002A9AB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFDFFFu);
    ecx = ecx & 0xFFFFDFFFu; /* 0x1002A9AB: and ecx, 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002A9B1:
    /* cmp ebx, 0x18u */ /* 0x1002A9B1: cmp ebx, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002AA13; /* 0x1002A9B4: jge 0x1002aa13 */
L_1002A9B6:
    esi = 0xFFFFEFFFu; /* 0x1002A9B6: mov esi, 0xffffefff */
    edi = 0x800u; /* 0x1002A9BB: mov edi, 0x800 */
    /* test eax, ecx */ /* 0x1002A9C0: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AA1C; /* 0x1002A9C2: je 0x1002aa1c */
L_1002A9C4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1002A9C4: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x1002A9C6: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002A9C8:
    edx = ebx; /* 0x1002A9C8: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    edx = edx & 0x18u; /* 0x1002A9CA: and edx, 0x18 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D55A; /* 0x1002A9CD: je 0x1005d55a */
L_1002A9D3:
    /* cmp edx, 8 */ /* 0x1002A9D3: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D537; /* 0x1002A9D6: je 0x1005d537 */
L_1002A9DC:
    /* cmp edx, 0x10u */ /* 0x1002A9DC: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D52D; /* 0x1002A9DF: jne 0x1005d52d */
L_1002A9E5:
    /* test eax, ecx */ /* 0x1002A9E5: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AA24; /* 0x1002A9E7: je 0x1002aa24 */
L_1002A9E9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF3Fu);
    ecx = ecx & 0xFFFFFF3Fu; /* 0x1002A9E9: and ecx, 0xffffff3f */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002A9EF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    ebx = ebx & 6; /* 0x1002A9EF: and ebx, 6 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0; /* 0x1002A9F2: sub ebx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002AA13; /* 0x1002A9F5: je 0x1002aa13 */
L_1002A9F7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1002A9F7: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1002A9F8: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005D575; /* 0x1002A9F9: jne 0x1005d575 */
L_1002A9FF:
    /* test eax, ecx */ /* 0x1002A9FF: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D59F; /* 0x1002AA01: je 0x1005d59f */
L_1002AA07:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFAFFu);
    ecx = ecx & 0xFFFFFAFFu; /* 0x1002AA07: and ecx, 0xfffffaff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x200u)); _flag_b = (uint32_t)((ecx | 0x200u));
    ecx = ecx | 0x200u; /* 0x1002AA0D: or ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002AA13:
    eax = ecx; /* 0x1002AA13: mov eax, ecx */
L_1002AA15:
    edi = POP32_VAL(esp); /* 0x1002AA15: pop edi */
    esi = POP32_VAL(esp); /* 0x1002AA16: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002AA17: pop ebx */
    esp = ebp; /* 0x1002AA18: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002AA1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002AA1B: ret  */
L_1002AA1C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF9FFFu);
    ecx = ecx & 0xFFFF9FFFu; /* 0x1002AA1C: and ecx, 0xffff9fff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A9C8; /* 0x1002AA22: jmp 0x1002a9c8 */
L_1002AA24:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFE7FFu);
    ecx = ecx & 0xFFFFE7FFu; /* 0x1002AA24: and ecx, 0xffffe7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A9EF; /* 0x1002AA2A: jmp 0x1002a9ef */
L_1005D48C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D48C: inc edx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x1005D48D: mov ecx, esi */
    MEM32(0x100E02F0) = edx; /* 0x1005D48F: mov dword ptr [0x100e02f0], edx */
    RECOMP_BACKEDGE();
    goto L_1002A97C; /* 0x1005D495: jmp 0x1002a97c */
L_1005D49A:
    /* cmp LO8(eax), 0x24u */ /* 0x1005D49A: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D75B; /* 0x1005D49C: jne 0x1005d75b */
L_1005D4A2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D4A2: inc edx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1005D4A3: mov byte ptr [ebp - 1], 0 */
    MEM32(0x100E02F0) = edx; /* 0x1005D4A7: mov dword ptr [0x100e02f0], edx */
    eax = (int32_t)(int8_t)MEM8(edx); /* 0x1005D4AD: movsx eax, byte ptr [edx] */
    /* cmp eax, 0x42u */ /* 0x1005D4B0: cmp eax, 0x42 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x42u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D629; /* 0x1005D4B3: jg 0x1005d629 */
L_1005D4B9:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D61E; /* 0x1005D4B9: je 0x1005d61e */
L_1005D4BF:
    /* test eax, eax */ /* 0x1005D4BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D613; /* 0x1005D4C1: je 0x1005d613 */
L_1005D4C7:
    /* cmp eax, 0x24u */ /* 0x1005D4C7: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D5EB; /* 0x1005D4CA: jne 0x1005d5eb */
L_1005D4D0:
    /* cmp MEM8(edx + 0x1), 0x50u */ /* 0x1005D4D0: cmp byte ptr [edx + 1], 0x50 */
    _flag_a = (uint32_t)(MEM8(edx + 0x1)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D4D7; /* 0x1005D4D4: jne 0x1005d4d7 */
L_1005D4D6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D4D6: inc edx */
    _flag_k = FK_INC;
L_1005D4D7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D4D7: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1005D4D8: mov dword ptr [0x100e02f0], edx */
    eax = (int32_t)(int8_t)MEM8(edx); /* 0x1005D4DE: movsx eax, byte ptr [edx] */
    /* cmp eax, 0x4Au */ /* 0x1005D4E1: cmp eax, 0x4a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D4FE; /* 0x1005D4E4: jg 0x1005d4fe */
L_1005D4E6:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D5B4; /* 0x1005D4E6: je 0x1005d5b4 */
L_1005D4EC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1005D4EC: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D5AA; /* 0x1005D4EF: je 0x1005d5aa */
L_1005D4F5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x46u; /* 0x1005D4F5: sub eax, 0x46 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D516; /* 0x1005D4F8: je 0x1005d516 */
L_1005D4FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005D4FA: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005D4FB: dec eax */
    _flag_k = FK_DEC;
    goto L_1005D514; /* 0x1005D4FC: jmp 0x1005d514 */
L_1005D4FE:
    /* cmp eax, 0x4Cu */ /* 0x1005D4FE: cmp eax, 0x4c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1005D52D; /* 0x1005D501: jl 0x1005d52d */
L_1005D503:
    /* cmp eax, 0x4Du */ /* 0x1005D503: cmp eax, 0x4d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005D516; /* 0x1005D506: jle 0x1005d516 */
L_1005D508:
    /* cmp eax, 0x4Fu */ /* 0x1005D508: cmp eax, 0x4f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005D5B4; /* 0x1005D50B: jle 0x1005d5b4 */
L_1005D511:
    /* cmp eax, 0x51u */ /* 0x1005D511: cmp eax, 0x51 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1005D514:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1005D52D; /* 0x1005D514: jne 0x1005d52d */
L_1005D516:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D516: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1005D517: mov dword ptr [0x100e02f0], edx */
    RECOMP_BACKEDGE();
    goto L_1002A971; /* 0x1005D51D: jmp 0x1002a971 */
L_1005D522:
    _flag_a = (uint32_t)((ecx | 0x2000u)); _flag_b = (uint32_t)((ecx | 0x2000u));
    ecx = ecx | 0x2000u; /* 0x1005D522: or ecx, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A9B1; /* 0x1005D528: jmp 0x1002a9b1 */
L_1005D52D:
    eax = 0xFFFFu; /* 0x1005D52D: mov eax, 0xffff */
    RECOMP_BACKEDGE();
    goto L_1002AA15; /* 0x1005D532: jmp 0x1002aa15 */
L_1005D537:
    /* test eax, ecx */ /* 0x1005D537: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D549; /* 0x1005D539: je 0x1005d549 */
L_1005D53B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFBFu);
    ecx = ecx & 0xFFFFFFBFu; /* 0x1005D53B: and ecx, 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x80u)); _flag_b = (uint32_t)((ecx | 0x80u));
    ecx = ecx | 0x80u; /* 0x1005D53E: or ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A9EF; /* 0x1005D544: jmp 0x1002a9ef */
L_1005D549:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF7FFu);
    ecx = ecx & 0xFFFFF7FFu; /* 0x1005D549: and ecx, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x1000u)); _flag_b = (uint32_t)((ecx | 0x1000u));
    ecx = ecx | 0x1000u; /* 0x1005D54F: or ecx, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A9EF; /* 0x1005D555: jmp 0x1002a9ef */
L_1005D55A:
    /* test eax, ecx */ /* 0x1005D55A: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D56C; /* 0x1005D55C: je 0x1005d56c */
L_1005D55E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    ecx = ecx & 0xFFFFFF7Fu; /* 0x1005D55E: and ecx, 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x40u)); _flag_b = (uint32_t)((ecx | 0x40u));
    ecx = ecx | 0x40u; /* 0x1005D564: or ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A9EF; /* 0x1005D567: jmp 0x1002a9ef */
L_1005D56C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1005D56C: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x1005D56E: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A9EF; /* 0x1005D570: jmp 0x1002a9ef */
L_1005D575:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1005D575: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1005D576: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D58E; /* 0x1005D577: je 0x1005d58e */
L_1005D579:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1005D579: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1005D57A: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005D52D; /* 0x1005D57B: jne 0x1005d52d */
L_1005D57D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFCFFu);
    ecx = ecx & 0xFFFFFCFFu; /* 0x1005D57D: and ecx, 0xfffffcff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x400u)); _flag_b = (uint32_t)((ecx | 0x400u));
    ecx = ecx | 0x400u; /* 0x1005D583: or ecx, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D589: jmp 0x1002aa13 */
L_1005D58E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF9FFu);
    ecx = ecx & 0xFFFFF9FFu; /* 0x1005D58E: and ecx, 0xfffff9ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x100u)); _flag_b = (uint32_t)((ecx | 0x100u));
    ecx = ecx | 0x100u; /* 0x1005D594: or ecx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D59A: jmp 0x1002aa13 */
L_1005D59F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF9FFFu);
    ecx = ecx & 0xFFFF9FFFu; /* 0x1005D59F: and ecx, 0xffff9fff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D5A5: jmp 0x1002aa13 */
L_1005D5AA:
    eax = 0xFFFEu; /* 0x1005D5AA: mov eax, 0xfffe */
    RECOMP_BACKEDGE();
    goto L_1002AA15; /* 0x1005D5AF: jmp 0x1002aa15 */
L_1005D5B4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D5B4: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1005D5B5: mov dword ptr [0x100e02f0], edx */
    SET_LO8(eax, MEM8(edx)); /* 0x1005D5BB: mov al, byte ptr [edx] */
    /* cmp LO8(eax), 0x30u */ /* 0x1005D5BD: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1005D5E1; /* 0x1005D5BF: jl 0x1005d5e1 */
L_1005D5C1:
    /* cmp LO8(eax), 0x39u */ /* 0x1005D5C1: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D5E1; /* 0x1005D5C3: jg 0x1005d5e1 */
L_1005D5C5:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1005D5C5: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD1u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD1u; /* 0x1005D5C8: add eax, -0x2f */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1005D5CB: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = eax; /* 0x1005D5CD: mov dword ptr [0x100e02f0], eax */
    RECOMP_CALL(sub_1002A95F); /* 0x1005D5D2: call 0x1002a95f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0x00010000u)); _flag_b = (uint32_t)((eax | 0x00010000u));
    eax = eax | 0x00010000u; /* 0x1005D5D7: or eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA15; /* 0x1005D5DC: jmp 0x1002aa15 */
L_1005D5E1:
    ecx = 0xFFFFu; /* 0x1005D5E1: mov ecx, 0xffff */
    goto L_1005D74F; /* 0x1005D5E6: jmp 0x1005d74f */
L_1005D5EB:
    /* cmp eax, 0x2Fu */ /* 0x1005D5EB: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005D52D; /* 0x1005D5EE: jle 0x1005d52d */
L_1005D5F4:
    /* cmp eax, 0x35u */ /* 0x1005D5F4: cmp eax, 0x35 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005D668; /* 0x1005D5F7: jle 0x1005d668 */
L_1005D5F9:
    /* cmp eax, 0x41u */ /* 0x1005D5F9: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D52D; /* 0x1005D5FC: jne 0x1005d52d */
L_1005D602:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF4FFu);
    ecx = ecx & 0xFFFFF4FFu; /* 0x1005D602: and ecx, 0xfffff4ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x9000u)); _flag_b = (uint32_t)((ecx | 0x9000u));
    ecx = ecx | 0x9000u; /* 0x1005D608: or ecx, 0x9000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D60E: jmp 0x1005d74f */
L_1005D613:
    ecx = 0xFFFEu; /* 0x1005D613: mov ecx, 0xfffe */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1005D618: dec edx */
    _flag_k = FK_DEC;
    goto L_1005D74F; /* 0x1005D619: jmp 0x1005d74f */
L_1005D61E:
    _flag_a = (uint32_t)((ecx | 0x9800u)); _flag_b = (uint32_t)((ecx | 0x9800u));
    ecx = ecx | 0x9800u; /* 0x1005D61E: or ecx, 0x9800 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D624: jmp 0x1005d74f */
L_1005D629:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x43u; /* 0x1005D629: sub eax, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D749; /* 0x1005D62C: je 0x1005d749 */
L_1005D632:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005D632: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D73B; /* 0x1005D633: je 0x1005d73b */
L_1005D639:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005D639: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D72D; /* 0x1005D63A: je 0x1005d72d */
L_1005D640:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xDu; /* 0x1005D640: sub eax, 0xd */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005D52D; /* 0x1005D643: jne 0x1005d52d */
L_1005D649:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D649: inc edx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x1005D64A: mov byte ptr [ebp - 1], 1 */
    MEM32(0x100E02F0) = edx; /* 0x1005D64E: mov dword ptr [0x100e02f0], edx */
    SET_LO8(ebx, MEM8(edx)); /* 0x1005D654: mov bl, byte ptr [edx] */
    /* cmp LO8(ebx), 0x30u */ /* 0x1005D656: cmp bl, 0x30 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1005D71C; /* 0x1005D659: jl 0x1005d71c */
L_1005D65F:
    /* cmp LO8(ebx), 0x35u */ /* 0x1005D65F: cmp bl, 0x35 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x35u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D71C; /* 0x1005D662: jg 0x1005d71c */
L_1005D668:
    ebx = (int32_t)(int8_t)MEM8(edx); /* 0x1005D668: movsx ebx, byte ptr [edx] */
    eax = 0x8000u; /* 0x1005D66B: mov eax, 0x8000 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1005D670: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x30u; /* 0x1005D672: sub ebx, 0x30 */
    _flag_k = FK_CMP;
    esi = 0xFFFFEFFFu; /* 0x1005D675: mov esi, 0xffffefff */
    edi = 0x800u; /* 0x1005D67A: mov edi, 0x800 */
    /* test eax, ecx */ /* 0x1005D67F: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D689; /* 0x1005D681: je 0x1005d689 */
L_1005D683:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1005D683: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x1005D685: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D68F; /* 0x1005D687: jmp 0x1005d68f */
L_1005D689:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF9FFFu);
    ecx = ecx & 0xFFFF9FFFu; /* 0x1005D689: and ecx, 0xffff9fff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005D68F:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1005D68F: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D6A3; /* 0x1005D693: je 0x1005d6a3 */
L_1005D695:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFEFFu);
    ecx = ecx & 0xFFFFFEFFu; /* 0x1005D695: and ecx, 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x600u)); _flag_b = (uint32_t)((ecx | 0x600u));
    ecx = ecx | 0x600u; /* 0x1005D69B: or ecx, 0x600 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D6AF; /* 0x1005D6A1: jmp 0x1005d6af */
L_1005D6A3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFDFFu);
    ecx = ecx & 0xFFFFFDFFu; /* 0x1005D6A3: and ecx, 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x500u)); _flag_b = (uint32_t)((ecx | 0x500u));
    ecx = ecx | 0x500u; /* 0x1005D6A9: or ecx, 0x500 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005D6AF:
    /* test LO8(ebx), 1 */ /* 0x1005D6AF: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D6BC; /* 0x1005D6B2: je 0x1005d6bc */
L_1005D6B4:
    _flag_a = (uint32_t)((ecx | 0x2000u)); _flag_b = (uint32_t)((ecx | 0x2000u));
    ecx = ecx | 0x2000u; /* 0x1005D6B4: or ecx, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D6C2; /* 0x1005D6BA: jmp 0x1005d6c2 */
L_1005D6BC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFDFFFu);
    ecx = ecx & 0xFFFFDFFFu; /* 0x1005D6BC: and ecx, 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005D6C2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    ebx = ebx & 6; /* 0x1005D6C2: and ebx, 6 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0; /* 0x1005D6C5: sub ebx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D707; /* 0x1005D6C8: je 0x1005d707 */
L_1005D6CA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1005D6CA: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1005D6CB: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D6EA; /* 0x1005D6CC: je 0x1005d6ea */
L_1005D6CE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1005D6CE: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1005D6CF: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005D52D; /* 0x1005D6D0: jne 0x1005d52d */
L_1005D6D6:
    /* test eax, ecx */ /* 0x1005D6D6: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D6E2; /* 0x1005D6D8: je 0x1005d6e2 */
L_1005D6DA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF3Fu);
    ecx = ecx & 0xFFFFFF3Fu; /* 0x1005D6DA: and ecx, 0xffffff3f */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D6E0: jmp 0x1005d74f */
L_1005D6E2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFE7FFu);
    ecx = ecx & 0xFFFFE7FFu; /* 0x1005D6E2: and ecx, 0xffffe7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D6E8: jmp 0x1005d74f */
L_1005D6EA:
    /* test eax, ecx */ /* 0x1005D6EA: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D6F9; /* 0x1005D6EC: je 0x1005d6f9 */
L_1005D6EE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFBFu);
    ecx = ecx & 0xFFFFFFBFu; /* 0x1005D6EE: and ecx, 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x80u)); _flag_b = (uint32_t)((ecx | 0x80u));
    ecx = ecx | 0x80u; /* 0x1005D6F1: or ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D6F7: jmp 0x1005d74f */
L_1005D6F9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF7FFu);
    ecx = ecx & 0xFFFFF7FFu; /* 0x1005D6F9: and ecx, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x1000u)); _flag_b = (uint32_t)((ecx | 0x1000u));
    ecx = ecx | 0x1000u; /* 0x1005D6FF: or ecx, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D705: jmp 0x1005d74f */
L_1005D707:
    /* test eax, ecx */ /* 0x1005D707: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D716; /* 0x1005D709: je 0x1005d716 */
L_1005D70B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    ecx = ecx & 0xFFFFFF7Fu; /* 0x1005D70B: and ecx, 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x40u)); _flag_b = (uint32_t)((ecx | 0x40u));
    ecx = ecx | 0x40u; /* 0x1005D711: or ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D714: jmp 0x1005d74f */
L_1005D716:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1005D716: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x1005D718: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D71A: jmp 0x1005d74f */
L_1005D71C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005D71C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1005D71E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005D720: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFEu; /* 0x1005D723: add eax, 0xfffe */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002AA15; /* 0x1005D728: jmp 0x1002aa15 */
L_1005D72D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF6FFu);
    ecx = ecx & 0xFFFFF6FFu; /* 0x1005D72D: and ecx, 0xfffff6ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x9200u)); _flag_b = (uint32_t)((ecx | 0x9200u));
    ecx = ecx | 0x9200u; /* 0x1005D733: or ecx, 0x9200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D739: jmp 0x1005d74f */
L_1005D73B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF5FFu);
    ecx = ecx & 0xFFFFF5FFu; /* 0x1005D73B: and ecx, 0xfffff5ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x9100u)); _flag_b = (uint32_t)((ecx | 0x9100u));
    ecx = ecx | 0x9100u; /* 0x1005D741: or ecx, 0x9100 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D74F; /* 0x1005D747: jmp 0x1005d74f */
L_1005D749:
    _flag_a = (uint32_t)((ecx | 0x7C00u)); _flag_b = (uint32_t)((ecx | 0x7C00u));
    ecx = ecx | 0x7C00u; /* 0x1005D749: or ecx, 0x7c00 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005D74F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D74F: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1005D750: mov dword ptr [0x100e02f0], edx */
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D756: jmp 0x1002aa13 */
L_1005D75B:
    SET_LO8(eax, MEM8(edx)); /* 0x1005D75B: mov al, byte ptr [edx] */
    /* cmp LO8(eax), 0x30u */ /* 0x1005D75D: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1005D8A9; /* 0x1005D75F: jl 0x1005d8a9 */
L_1005D765:
    /* cmp LO8(eax), 0x38u */ /* 0x1005D765: cmp al, 0x38 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x38u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D8A9; /* 0x1005D767: jg 0x1005d8a9 */
L_1005D76D:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1005D76D: movsx eax, al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D770: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x1005D771: add eax, -0x30 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = edx; /* 0x1005D774: mov dword ptr [0x100e02f0], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    ecx = ecx & 0xFFFF7FFFu; /* 0x1005D77A: and ecx, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 8 */ /* 0x1005D780: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1005D52D; /* 0x1005D783: ja 0x1005d52d */
L_1005D789:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1005D8D0)); goto _ljump; }
L_1005D790:
    eax = 0x8000u; /* 0x1005D790: mov eax, 0x8000 */
    /* test eax, ecx */ /* 0x1005D795: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D7A7; /* 0x1005D797: je 0x1005d7a7 */
L_1005D799:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFAFFu);
    ecx = ecx & 0xFFFFFAFFu; /* 0x1005D799: and ecx, 0xfffffaff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x200u)); _flag_b = (uint32_t)((ecx | 0x200u));
    ecx = ecx | 0x200u; /* 0x1005D79F: or ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D7AD; /* 0x1005D7A5: jmp 0x1005d7ad */
L_1005D7A7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF9FFFu);
    ecx = ecx & 0xFFFF9FFFu; /* 0x1005D7A7: and ecx, 0xffff9fff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005D7AD:
    /* test eax, ecx */ /* 0x1005D7AD: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D7BF; /* 0x1005D7AF: je 0x1005d7bf */
L_1005D7B1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    ecx = ecx & 0xFFFFFF7Fu; /* 0x1005D7B1: and ecx, 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x40u)); _flag_b = (uint32_t)((ecx | 0x40u));
    ecx = ecx | 0x40u; /* 0x1005D7B7: or ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D7BA: jmp 0x1002aa13 */
L_1005D7BF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFEFFFu);
    ecx = ecx & 0xFFFFEFFFu; /* 0x1005D7BF: and ecx, 0xffffefff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x800u)); _flag_b = (uint32_t)((ecx | 0x800u));
    ecx = ecx | 0x800u; /* 0x1005D7C5: or ecx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D7CB: jmp 0x1002aa13 */
L_1005D7D0:
    eax = 0x8000u; /* 0x1005D7D0: mov eax, 0x8000 */
    /* test eax, ecx */ /* 0x1005D7D5: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D7E7; /* 0x1005D7D7: je 0x1005d7e7 */
L_1005D7D9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFAFFu);
    ecx = ecx & 0xFFFFFAFFu; /* 0x1005D7D9: and ecx, 0xfffffaff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x200u)); _flag_b = (uint32_t)((ecx | 0x200u));
    ecx = ecx | 0x200u; /* 0x1005D7DF: or ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D7ED; /* 0x1005D7E5: jmp 0x1005d7ed */
L_1005D7E7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF9FFFu);
    ecx = ecx & 0xFFFF9FFFu; /* 0x1005D7E7: and ecx, 0xffff9fff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005D7ED:
    /* test eax, ecx */ /* 0x1005D7ED: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D7FF; /* 0x1005D7EF: je 0x1005d7ff */
L_1005D7F1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFBFu);
    ecx = ecx & 0xFFFFFFBFu; /* 0x1005D7F1: and ecx, 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x80u)); _flag_b = (uint32_t)((ecx | 0x80u));
    ecx = ecx | 0x80u; /* 0x1005D7F4: or ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D7FA: jmp 0x1002aa13 */
L_1005D7FF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF7FFu);
    ecx = ecx & 0xFFFFF7FFu; /* 0x1005D7FF: and ecx, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x1000u)); _flag_b = (uint32_t)((ecx | 0x1000u));
    ecx = ecx | 0x1000u; /* 0x1005D805: or ecx, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D80B: jmp 0x1002aa13 */
L_1005D810:
    eax = 0x8000u; /* 0x1005D810: mov eax, 0x8000 */
    /* test eax, ecx */ /* 0x1005D815: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D827; /* 0x1005D817: je 0x1005d827 */
L_1005D819:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFAFFu);
    ecx = ecx & 0xFFFFFAFFu; /* 0x1005D819: and ecx, 0xfffffaff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x200u)); _flag_b = (uint32_t)((ecx | 0x200u));
    ecx = ecx | 0x200u; /* 0x1005D81F: or ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005D82D; /* 0x1005D825: jmp 0x1005d82d */
L_1005D827:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF9FFFu);
    ecx = ecx & 0xFFFF9FFFu; /* 0x1005D827: and ecx, 0xffff9fff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005D82D:
    /* test eax, ecx */ /* 0x1005D82D: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D83C; /* 0x1005D82F: je 0x1005d83c */
L_1005D831:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF3Fu);
    ecx = ecx & 0xFFFFFF3Fu; /* 0x1005D831: and ecx, 0xffffff3f */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D837: jmp 0x1002aa13 */
L_1005D83C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFE7FFu);
    ecx = ecx & 0xFFFFE7FFu; /* 0x1005D83C: and ecx, 0xffffe7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D842: jmp 0x1002aa13 */
L_1005D847:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFDFFFu);
    ecx = ecx & 0xFFFFDFFFu; /* 0x1005D847: and ecx, 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x1005D84D: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D84F: jmp 0x1002aa13 */
L_1005D854:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFE3FFu);
    ecx = ecx & 0xFFFFE3FFu; /* 0x1005D854: and ecx, 0xffffe3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x6000u)); _flag_b = (uint32_t)((ecx | 0x6000u));
    ecx = ecx | 0x6000u; /* 0x1005D85A: or ecx, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D860: jmp 0x1002aa13 */
L_1005D865:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFBFFFu);
    ecx = ecx & 0xFFFFBFFFu; /* 0x1005D865: and ecx, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x2000u)); _flag_b = (uint32_t)((ecx | 0x2000u));
    ecx = ecx | 0x2000u; /* 0x1005D86B: or ecx, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D871: jmp 0x1002aa13 */
L_1005D876:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFEBFFu);
    ecx = ecx & 0xFFFFEBFFu; /* 0x1005D876: and ecx, 0xffffebff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x6800u)); _flag_b = (uint32_t)((ecx | 0x6800u));
    ecx = ecx | 0x6800u; /* 0x1005D87C: or ecx, 0x6800 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D882: jmp 0x1002aa13 */
L_1005D887:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF3FFu);
    ecx = ecx & 0xFFFFF3FFu; /* 0x1005D887: and ecx, 0xfffff3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x7000u)); _flag_b = (uint32_t)((ecx | 0x7000u));
    ecx = ecx | 0x7000u; /* 0x1005D88D: or ecx, 0x7000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D893: jmp 0x1002aa13 */
L_1005D898:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFBFFu);
    ecx = ecx & 0xFFFFFBFFu; /* 0x1005D898: and ecx, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x7800u)); _flag_b = (uint32_t)((ecx | 0x7800u));
    ecx = ecx | 0x7800u; /* 0x1005D89E: or ecx, 0x7800 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D8A4: jmp 0x1002aa13 */
L_1005D8A9:
    /* cmp LO8(eax), 0x39u */ /* 0x1005D8A9: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D8BE; /* 0x1005D8AB: jne 0x1005d8be */
L_1005D8AD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005D8AD: inc edx */
    _flag_k = FK_INC;
    ecx = 0xFFFDu; /* 0x1005D8AE: mov ecx, 0xfffd */
    MEM32(0x100E02F0) = edx; /* 0x1005D8B3: mov dword ptr [0x100e02f0], edx */
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D8B9: jmp 0x1002aa13 */
L_1005D8BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005D8BE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x1005D8C0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005D8C2: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFEu; /* 0x1005D8C5: add ecx, 0xfffe */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002AA13; /* 0x1005D8CB: jmp 0x1002aa13 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1005D790u: goto L_1005D790;
      case 0x1005D7D0u: goto L_1005D7D0;
      case 0x1005D810u: goto L_1005D810;
      case 0x1005D847u: goto L_1005D847;
      case 0x1005D854u: goto L_1005D854;
      case 0x1005D865u: goto L_1005D865;
      case 0x1005D876u: goto L_1005D876;
      case 0x1005D887u: goto L_1005D887;
      case 0x1005D898u: goto L_1005D898;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1002AA2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AA2Cu);

L_1002AA2C:
    PUSH32(esp, ebp); /* 0x1002AA2C: push ebp */
    ebp = esp; /* 0x1002AA2D: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x1002AA2F: mov eax, dword ptr [0x100e02f0] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002AA34: push dword ptr [ebp + 0xc] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1002AA37: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CC9B; /* 0x1002AA3A: je 0x1005cc9b */
L_1002AA40:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002AA40: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100237E1); /* 0x1002AA43: call 0x100237e1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AA48: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002AA49: pop ecx */
L_1002AA4A:
    eax = MEM32(ebp + 0x8); /* 0x1002AA4A: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1002AA4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002AA4E: ret  */
L_1005CC9B:
    ecx = MEM32(ebp + 0x8); /* 0x1005CC9B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005CC9E: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005CC9F: mov dword ptr [0x100e02f0], eax */
    RECOMP_CALL(sub_100237BB); /* 0x1005CCA4: call 0x100237bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002AA4A; /* 0x1005CCA9: jmp 0x1002aa4a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002AA6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AA6Bu);

L_1002AA6B:
    PUSH32(esp, ebp); /* 0x1002AA6B: push ebp */
    ebp = esp; /* 0x1002AA6C: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x1002AA6E: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1002AA73: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int8_t)MEM8(eax); /* 0x1002AA76: movsx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x58u; /* 0x1002AA79: sub ecx, 0x58 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005C09A; /* 0x1002AA7C: jne 0x1005c09a */
L_1002AA82:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002AA82: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1002AA83: mov dword ptr [0x100e02f0], eax */
    PUSH32(esp, 0x1002A664u); /* 0x1002AA88: push 0x1002a664 */
L_1002AA8D:
    ecx = MEM32(ebp + 0x8); /* 0x1002AA8D: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10022BC1); /* 0x1002AA90: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
L_1002AA95:
    eax = MEM32(ebp + 0x8); /* 0x1002AA95: mov eax, dword ptr [ebp + 8] */
L_1002AA98:
    esp = ebp; /* 0x1002AA98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002AA9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002AA9B: ret  */
L_1005C09A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005C09A: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005C09B: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C12C; /* 0x1005C09C: je 0x1005c12c */
L_1005C0A2:
    eax = ebp + (-0x8); /* 0x1005C0A2: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005C0A5: push eax */
    RECOMP_CALL(sub_1009EC54); /* 0x1005C0A6: call 0x1009ec54 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1005C0AB: mov edx, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1005C0AE: pop ecx */
    /* test LO8(edx), LO8(edx) */ /* 0x1005C0AF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C11C; /* 0x1005C0B1: jne 0x1005c11c */
L_1005C0B3:
    eax = MEM32(0x100E02F0); /* 0x1005C0B3: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1005C0B8: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005C0BA: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C11C; /* 0x1005C0BC: je 0x1005c11c */
L_1005C0BE:
    /* cmp LO8(ecx), 0x40u */ /* 0x1005C0BE: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C116; /* 0x1005C0C1: je 0x1005c116 */
L_1005C0C3:
    /* cmp LO8(ecx), 0x5Au */ /* 0x1005C0C3: cmp cl, 0x5a */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C0D7; /* 0x1005C0C6: je 0x1005c0d7 */
L_1005C0C8:
    ecx = MEM32(ebp + 0x8); /* 0x1005C0C8: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1005C0CB: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C0CD: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002AA95; /* 0x1005C0D2: jmp 0x1002aa95 */
L_1005C0D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005C0D7: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005C0D8: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(0x100E0300); /* 0x1005C0DD: mov eax, dword ptr [0x100e0300] */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x1005C0E2: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x1005C0E2: shr eax, 0x12 */
    eax = ~eax; /* 0x1005C0E5: not eax */
    /* test LO8(eax), 1 */ /* 0x1005C0E7: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x1005C15Cu; /* 0x1005C0E9: mov eax, 0x1005c15c */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C0F5; /* 0x1005C0EE: jne 0x1005c0f5 */
L_1005C0F0:
    eax = 0x1005C164u; /* 0x1005C0F0: mov eax, 0x1005c164 */
L_1005C0F5:
    PUSH32(esp, eax); /* 0x1005C0F5: push eax */
    eax = ebp + (-0x10); /* 0x1005C0F6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005C0F9: push eax */
    ecx = ebp + (-0x8); /* 0x1005C0FA: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A782); /* 0x1005C0FD: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1005C102: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1005C105: mov ecx, dword ptr [eax] */
    MEM32(edx) = ecx; /* 0x1005C107: mov dword ptr [edx], ecx */
    ecx = MEM32(eax + 0x4); /* 0x1005C109: mov ecx, dword ptr [eax + 4] */
    eax = edx; /* 0x1005C10C: mov eax, edx */
    MEM32(edx + 0x4) = ecx; /* 0x1005C10E: mov dword ptr [edx + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_1002AA98; /* 0x1005C111: jmp 0x1002aa98 */
L_1005C116:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005C116: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005C117: mov dword ptr [0x100e02f0], eax */
L_1005C11C:
    eax = MEM32(ebp + 0x8); /* 0x1005C11C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1005C11F: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x1005C122: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1005C124: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_1002AA98; /* 0x1005C127: jmp 0x1002aa98 */
L_1005C12C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005C12C: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005C12D: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(0x100E0300); /* 0x1005C132: mov eax, dword ptr [0x100e0300] */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x1005C137: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x1005C137: shr eax, 0x12 */
    eax = ~eax; /* 0x1005C13A: not eax */
    /* test LO8(eax), 1 */ /* 0x1005C13C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x10062738u; /* 0x1005C13E: mov eax, 0x10062738 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C14A; /* 0x1005C143: jne 0x1005c14a */
L_1005C145:
    eax = 0x1005C150u; /* 0x1005C145: mov eax, 0x1005c150 */
L_1005C14A:
    PUSH32(esp, eax); /* 0x1005C14A: push eax */
    RECOMP_BACKEDGE();
    goto L_1002AA8D; /* 0x1005C14B: jmp 0x1002aa8d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002AA9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AA9Cu);

L_1002AA9C:
    PUSH32(esp, ebp); /* 0x1002AA9C: push ebp */
    ebp = esp; /* 0x1002AA9D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002AA9F: push ecx */
    PUSH32(esp, ecx); /* 0x1002AAA0: push ecx */
    eax = MEM32(0x100E02F0); /* 0x1002AAA1: mov eax, dword ptr [0x100e02f0] */
    PUSH32(esp, esi); /* 0x1002AAA6: push esi */
    PUSH32(esp, edi); /* 0x1002AAA7: push edi */
    SET_LO8(ecx, MEM8(eax)); /* 0x1002AAA8: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1002AAAA: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AAB7; /* 0x1002AAAC: je 0x1002aab7 */
L_1002AAAE:
    /* cmp LO8(ecx), 0x5Fu */ /* 0x1002AAAE: cmp cl, 0x5f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CBD1; /* 0x1002AAB1: je 0x1005cbd1 */
L_1002AAB7:
    eax = MEM32(ebp + 0x8); /* 0x1002AAB7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1002AABA: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x1002AABD: mov byte ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFF00FFu; /* 0x1002AAC1: and dword ptr [eax + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002AAC8:
    edi = POP32_VAL(esp); /* 0x1002AAC8: pop edi */
    esi = POP32_VAL(esp); /* 0x1002AAC9: pop esi */
    esp = ebp; /* 0x1002AACA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002AACC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002AACD: ret  */
L_1005CBD1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005CBD1: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005CBD2: mov dword ptr [0x100e02f0], eax */
    edi = (int32_t)(int8_t)MEM8(eax); /* 0x1005CBD7: movsx edi, byte ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x41u; /* 0x1005CBDA: sub edi, 0x41 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005CBDD: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005CBDE: mov dword ptr [0x100e02f0], eax */
    /* cmp edi, 3 */ /* 0x1005CBE3: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005CC60; /* 0x1005CBE6: ja 0x1005cc60 */
L_1005CBE8:
    eax = MEM32(0x100E0300); /* 0x1005CBE8: mov eax, dword ptr [0x100e0300] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005CBED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x1005CBEF: mov ecx, dword ptr [ebp - 4] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1005CBF2: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1005CBF2: shr eax, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF0000u);
    ecx = ecx & 0xFFFF0000u; /* 0x1005CBF4: and ecx, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x1005CBFA: not eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x1005CBFC: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1005CBFF: mov dword ptr [ebp - 4], ecx */
    /* test LO8(eax), 1 */ /* 0x1005CC02: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CC82; /* 0x1005CC04: je 0x1005cc82 */
L_1005CC06:
    PUSH32(esp, 0x1006273Cu); /* 0x1005CC06: push 0x1006273c */
    ecx = ebp + (-0x8); /* 0x1005CC0B: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1005CC0E: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1005CC13: push 0xc */
    RECOMP_CALL(sub_1002B49E); /* 0x1005CC15: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005CC1A: pop ecx */
    PUSH32(esp, eax); /* 0x1005CC1B: push eax */
    ecx = ebp + (-0x8); /* 0x1005CC1C: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1005CC1F: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1005CC24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CC72; /* 0x1005CC26: je 0x1005cc72 */
L_1005CC28:
    esi = edi; /* 0x1005CC28: mov esi, edi */
    esi = ~esi; /* 0x1005CC2A: not esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005CC2C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    esi = esi & edi; /* 0x1005CC2D: and esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1005CC2F: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005CC31: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CC3E; /* 0x1005CC32: je 0x1005cc3e */
L_1005CC34:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005CC34: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005CC60; /* 0x1005CC35: jne 0x1005cc60 */
L_1005CC37:
    PUSH32(esp, 0x1005CC94u); /* 0x1005CC37: push 0x1005cc94 */
    goto L_1005CC43; /* 0x1005CC3C: jmp 0x1005cc43 */
L_1005CC3E:
    PUSH32(esp, 0x1005CC90u); /* 0x1005CC3E: push 0x1005cc90 */
L_1005CC43:
    ecx = ebp + (-0x8); /* 0x1005CC43: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1005CC46: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    esi = ~esi; /* 0x1005CC4B: not esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x1005CC4D: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CC72; /* 0x1005CC4F: je 0x1005cc72 */
L_1005CC51:
    PUSH32(esp, 0x1005CC98u); /* 0x1005CC51: push 0x1005cc98 */
    ecx = ebp + (-0x8); /* 0x1005CC56: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1005CC59: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1005CC28; /* 0x1005CC5E: jmp 0x1005cc28 */
L_1005CC60:
    ecx = MEM32(ebp + 0x8); /* 0x1005CC60: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1005CC63: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005CC65: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005CC6A: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002AAC8; /* 0x1005CC6D: jmp 0x1002aac8 */
L_1005CC72:
    PUSH32(esp, 0x29u); /* 0x1005CC72: push 0x29 */
    ecx = ebp + (-0x8); /* 0x1005CC74: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005CC77: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1005CC7C: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1005CC7F: mov edx, dword ptr [ebp - 8] */
L_1005CC82:
    eax = MEM32(ebp + 0x8); /* 0x1005CC82: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x1005CC85: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x1005CC87: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_1002AAC8; /* 0x1005CC8A: jmp 0x1002aac8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002AACE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AACEu);

L_1002AACE:
    PUSH32(esp, ebp); /* 0x1002AACE: push ebp */
    ebp = esp; /* 0x1002AACF: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x1002AAD1: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1002AAD6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(eax)); /* 0x1002AAD9: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1002AADB: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D456; /* 0x1002AADD: je 0x1005d456 */
L_1002AAE3:
    /* cmp LO8(ecx), 0x5Au */ /* 0x1002AAE3: cmp cl, 0x5a */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D429; /* 0x1002AAE6: jne 0x1005d429 */
L_1002AAEC:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002AAEC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002AAEF: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1002AAF0: mov dword ptr [0x100e02f0], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF0000u);
    ecx = ecx & 0xFFFF0000u; /* 0x1002AAF5: and ecx, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1002AAFB: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1002AAFE: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x1002AB01: mov dword ptr [eax + 4], ecx */
L_1002AB04:
    esp = ebp; /* 0x1002AB04: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002AB06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002AB07: ret  */
L_1005D429:
    eax = ebp + (-0x10); /* 0x1005D429: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005D42C: push eax */
    RECOMP_CALL(sub_1002AA6B); /* 0x1005D42D: call 0x1002aa6b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D432: pop ecx */
    PUSH32(esp, eax); /* 0x1005D433: push eax */
    eax = ebp + (-0x8); /* 0x1005D434: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005D437: push eax */
    PUSH32(esp, 0x1005D484u); /* 0x1005D438: push 0x1005d484 */
    ecx = ebp + (-0x18); /* 0x1005D43D: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D440: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D445: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D447: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x29u); /* 0x1005D44C: push 0x29 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005D44E: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x1005D451: lea ecx, [ebp - 8] */
    goto L_1005D477; /* 0x1005D454: jmp 0x1005d477 */
L_1005D456:
    PUSH32(esp, 0x29u); /* 0x1005D456: push 0x29 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005D458: push dword ptr [ebp + 8] */
    eax = ebp + (-0x18); /* 0x1005D45B: lea eax, [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x1005D45E: push 1 */
    PUSH32(esp, eax); /* 0x1005D460: push eax */
    PUSH32(esp, 0x1005D484u); /* 0x1005D461: push 0x1005d484 */
    ecx = ebp + (-0x10); /* 0x1005D466: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D469: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D46E: mov ecx, eax */
    RECOMP_CALL(sub_1009EC32); /* 0x1005D470: call 0x1009ec32 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D475: mov ecx, eax */
L_1005D477:
    RECOMP_CALL(sub_1002AC44); /* 0x1005D477: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005D47C: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002AB04; /* 0x1005D47F: jmp 0x1002ab04 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002AB08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AB08u);

L_1002AB08:
    PUSH32(esp, ebp); /* 0x1002AB08: push ebp */
    ebp = esp; /* 0x1002AB09: mov ebp, esp */
    ecx = MEM32(0x100E02F0); /* 0x1002AB0B: mov ecx, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(ecx)); /* 0x1002AB11: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002AB13: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AB1F; /* 0x1002AB15: je 0x1002ab1f */
L_1002AB17:
    /* cmp LO8(eax), 0x5Fu */ /* 0x1002AB17: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C841; /* 0x1002AB19: je 0x1005c841 */
L_1002AB1F:
    eax = MEM32(ebp + 0x8); /* 0x1002AB1F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1002AB22: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x1002AB25: mov byte ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFF00FFu; /* 0x1002AB29: and dword ptr [eax + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1002AB30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002AB31: ret  */
L_1005C841:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x1005C841: mov al, byte ptr [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x1005C844: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AB1F; /* 0x1005C846: je 0x1002ab1f */
L_1005C84C:
    /* cmp LO8(eax), 0x5Fu */ /* 0x1005C84C: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002AB1F; /* 0x1005C84E: jne 0x1002ab1f */
L_1005C854:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1005C854: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005C857: mov dword ptr [0x100e02f0], ecx */
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x1005C85D: movsx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1005C860: sub eax, 0x41 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005C863: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1005C864: mov dword ptr [0x100e02f0], ecx */
    /* cmp eax, 3 */ /* 0x1005C86A: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1002AB1F; /* 0x1005C86D: jbe 0x1002ab1f */
L_1005C873:
    ecx = MEM32(ebp + 0x8); /* 0x1005C873: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1005C876: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C878: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005C87D: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1005C880: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005C881: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002AB46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AB46u);

L_1002AB46:
    PUSH32(esp, ebp); /* 0x1002AB46: push ebp */
    ebp = esp; /* 0x1002AB47: mov ebp, esp */
    ecx = MEM32(ecx + 0x4); /* 0x1002AB49: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x1002AB4C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AB5C; /* 0x1002AB4E: je 0x1002ab5c */
L_1002AB50:
    ecx = MEM32(ecx); /* 0x1002AB50: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x1002AB52: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AB5C; /* 0x1002AB54: je 0x1002ab5c */
L_1002AB56:
    eax = MEM32(ecx); /* 0x1002AB56: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1002AB58: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x8)); goto _ljump; }
L_1002AB5C:
    eax = MEM32(ebp + 0x8); /* 0x1002AB5C: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1002AB5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002AB60: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1002AC44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AC44u);

L_1002AC44:
    PUSH32(esp, ebp); /* 0x1002AC44: push ebp */
    ebp = esp; /* 0x1002AC45: mov ebp, esp */
    edx = MEM32(ecx); /* 0x1002AC47: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1002AC49: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002AC4A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002AC4D: push dword ptr [ebp + 0xc] */
    MEM32(esi) = edx; /* 0x1002AC50: mov dword ptr [esi], edx */
    ecx = MEM32(ecx + 0x4); /* 0x1002AC52: mov ecx, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x1002AC55: mov dword ptr [esi + 4], ecx */
    ecx = esi; /* 0x1002AC58: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1002AC5A: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1002AC5F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002AC61: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002AC62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002AC63: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1002AC66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AC66u);

L_1002AC66:
    PUSH32(esp, ebp); /* 0x1002AC66: push ebp */
    ebp = esp; /* 0x1002AC67: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1002AC69: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x1002AC6C: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1002AC6F: push 0 */
    PUSH32(esp, eax); /* 0x1002AC71: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1002AC72: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AC77: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002AC78: pop ecx */
    PUSH32(esp, eax); /* 0x1002AC79: push eax */
    eax = ebp + (-0x8); /* 0x1002AC7A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1002AC7D: push eax */
    PUSH32(esp, 0x60u); /* 0x1002AC7E: push 0x60 */
    ecx = ebp + (-0x18); /* 0x1002AC80: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A173); /* 0x1002AC83: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002AC88: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002AC8A: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x27u); /* 0x1002AC8F: push 0x27 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002AC91: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x1002AC94: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002AC44); /* 0x1002AC97: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1002AC9C: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1002AC9F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002ACA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002ACA2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002AD4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AD4Fu);

L_1002AD4F:
    PUSH32(esp, ebp); /* 0x1002AD4F: push ebp */
    ebp = esp; /* 0x1002AD50: mov ebp, esp */
    /* cmp MEM8(ecx + 0x4), 3 */ /* 0x1002AD52: cmp byte ptr [ecx + 4], 3 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002AD66; /* 0x1002AD56: je 0x1002ad66 */
L_1002AD58:
    eax = MEM32(ebp + 0x8); /* 0x1002AD58: mov eax, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x1002AD5B: mov al, byte ptr [eax + 4] */
    /* cmp LO8(eax), 1 */ /* 0x1002AD5E: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005B6DC; /* 0x1002AD60: jg 0x1005b6dc */
L_1002AD66:
    eax = ecx; /* 0x1002AD66: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1002AD68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1002AD69: ret 4 */
L_1005B6DC:
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x1005B6DC: mov byte ptr [ecx + 4], al */
    RECOMP_BACKEDGE();
    goto L_1002AD66; /* 0x1005B6DF: jmp 0x1002ad66 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002AD6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002AD6Cu);

L_1002AD6C:
    PUSH32(esp, ebp); /* 0x1002AD6C: push ebp */
    ebp = esp; /* 0x1002AD6D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x1002AD6F: sub esp, 0x5c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0xFFFF0000u; /* 0x1002AD72: and dword ptr [ebp - 0x28], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002AD79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1002AD7B: push ebx */
    PUSH32(esp, esi); /* 0x1002AD7C: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1002AD7D: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1002AD80: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A95F); /* 0x1002AD83: call 0x1002a95f */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x1002AD88: mov esi, dword ptr [ebp + 0xc] */
    ebx = eax; /* 0x1002AD8B: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002AD8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002AD8F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002AD91: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi), ecx */ /* 0x1002AD92: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002ADA2; /* 0x1002AD94: je 0x1002ada2 */
L_1002AD96:
    /* test MEM32(esi + 0x4), 0x200u */ /* 0x1002AD96: test dword ptr [esi + 4], 0x200 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1002AD9D: mov dword ptr [ebp - 0x14], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002ADA5; /* 0x1002ADA0: jne 0x1002ada5 */
L_1002ADA2:
    MEM32(ebp + (-0x14)) = ecx; /* 0x1002ADA2: mov dword ptr [ebp - 0x14], ecx */
L_1002ADA5:
    /* cmp ebx, 0xFFFFu */ /* 0x1002ADA5: cmp ebx, 0xffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B6EC; /* 0x1002ADAB: je 0x1005b6ec */
L_1002ADB1:
    /* cmp ebx, 0xFFFEu */ /* 0x1002ADB1: cmp ebx, 0xfffe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B6FE; /* 0x1002ADB7: je 0x1005b6fe */
L_1002ADBD:
    /* cmp ebx, 0xFFFDu */ /* 0x1002ADBD: cmp ebx, 0xfffd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B70D; /* 0x1002ADC3: je 0x1005b70d */
L_1002ADC9:
    PUSH32(esp, edi); /* 0x1002ADC9: push edi */
    edi = ebx; /* 0x1002ADCA: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8000u);
    edi = edi & 0x8000u; /* 0x1002ADCC: and edi, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB89; /* 0x1002ADD2: je 0x1005bb89 */
L_1002ADD8:
    eax = ebx; /* 0x1002ADD8: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1002ADDA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1800u);
    eax = eax & 0x1800u; /* 0x1002ADDC: and eax, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x800u */ /* 0x1002ADE1: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1002ADE6: mov dword ptr [ebp + 0xc], eax */
    eax = ebx; /* 0x1002ADE9: mov eax, ebx */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002ADEB: sete dl */
    MEM32(ebp + (-0x8)) = edx; /* 0x1002ADEE: mov dword ptr [ebp - 8], edx */
    /* test edx, edx */ /* 0x1002ADF1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B286; /* 0x1002ADF3: je 0x1002b286 */
L_1002ADF9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1002ADF9: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002ADFE:
    /* test eax, eax */ /* 0x1002ADFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B71F; /* 0x1002AE00: jne 0x1005b71f */
L_1002AE06:
    eax = ebx; /* 0x1002AE06: mov eax, ebx */
    /* test edx, edx */ /* 0x1002AE08: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B290; /* 0x1002AE0A: je 0x1002b290 */
L_1002AE10:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1002AE10: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002AE15:
    /* test eax, eax */ /* 0x1002AE15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B736; /* 0x1002AE17: jne 0x1005b736 */
L_1002AE1D:
    /* test ebx, 0x4000u */ /* 0x1002AE1D: test ebx, 0x4000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B758; /* 0x1002AE23: jne 0x1005b758 */
L_1002AE29:
    eax = ebx; /* 0x1002AE29: mov eax, ebx */
    /* test edx, edx */ /* 0x1002AE2B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B29A; /* 0x1002AE2D: je 0x1002b29a */
L_1002AE33:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1002AE33: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002AE38:
    /* test eax, eax */ /* 0x1002AE38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B7BD; /* 0x1002AE3A: jne 0x1005b7bd */
L_1002AE40:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0xFFFF0000u; /* 0x1002AE40: and dword ptr [ebp - 0x38], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFF0000u; /* 0x1002AE47: mov eax, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) & eax; /* 0x1002AE4C: and dword ptr [ebp - 0x40], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & eax; /* 0x1002AE4F: and dword ptr [ebp - 0x48], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & eax; /* 0x1002AE52: and dword ptr [ebp - 0x30], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x1002AE55: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x1002AE58: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = ecx; /* 0x1002AE5D: mov dword ptr [ebp - 0x44], ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1002AE60: mov dword ptr [ebp - 0x20], eax */
    eax = ebx; /* 0x1002AE63: mov eax, ebx */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x1002AE65: mov dword ptr [ebp - 0x4c], ecx */
    MEM32(ebp + (-0x34)) = ecx; /* 0x1002AE68: mov dword ptr [ebp - 0x34], ecx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1002AE6B: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x1002AE6E: mov dword ptr [ebp - 0x3c], ecx */
    /* test edx, edx */ /* 0x1002AE71: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2A4; /* 0x1002AE73: je 0x1002b2a4 */
L_1002AE79:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1002AE79: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002AE7E:
    /* test eax, eax */ /* 0x1002AE7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B8EA; /* 0x1002AE80: jne 0x1005b8ea */
L_1002AE86:
    /* test edx, edx */ /* 0x1002AE86: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AE9C; /* 0x1002AE88: je 0x1002ae9c */
L_1002AE8A:
    eax = ebx; /* 0x1002AE8A: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1002AE8C: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x200u */ /* 0x1002AE91: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B986; /* 0x1002AE96: jne 0x1005b986 */
L_1002AE9C:
    ecx = MEM32(0x100E0300); /* 0x1002AE9C: mov ecx, dword ptr [0x100e0300] */
    eax = ecx; /* 0x1002AEA2: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1002AEA4: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1002AEA4: shr eax, 1 */
    eax = ~eax; /* 0x1002AEA6: not eax */
    /* test LO8(eax), 1 */ /* 0x1002AEA8: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2AE; /* 0x1002AEAA: je 0x1002b2ae */
L_1002AEB0:
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x1002AEB0: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x1002AEB0: shr ecx, 4 */
    ecx = ~ecx; /* 0x1002AEB3: not ecx */
    /* test LO8(ecx), 1 */ /* 0x1002AEB5: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2AE; /* 0x1002AEB8: je 0x1002b2ae */
L_1002AEBE:
    eax = ebp + (-0x2C); /* 0x1002AEBE: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1002AEC1: push eax */
    eax = ebp + (-0x10); /* 0x1002AEC2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1002AEC5: push eax */
    eax = ebp + (-0x54); /* 0x1002AEC6: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1002AEC9: push eax */
    RECOMP_CALL(sub_1002B4F8); /* 0x1002AECA: call 0x1002b4f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AECF: pop ecx */
    ecx = eax; /* 0x1002AED0: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002AED2: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1002AED7: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1002AED9: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1002AEDC: mov dword ptr [ebp - 0x2c], ecx */
    MEM32(ebp + (-0x28)) = eax; /* 0x1002AEDF: mov dword ptr [ebp - 0x28], eax */
L_1002AEE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002AEE2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ecx */ /* 0x1002AEE4: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002AF25; /* 0x1002AEE6: je 0x1002af25 */
L_1002AEE8:
    /* cmp MEM32(ebp + (-0x2C)), ecx */ /* 0x1002AEE8: cmp dword ptr [ebp - 0x2c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B9CF; /* 0x1002AEEB: je 0x1005b9cf */
L_1002AEF1:
    /* test MEM32(0x100E0300), 0x1000u */ /* 0x1002AEF1: test dword ptr [0x100e0300], 0x1000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B9CF; /* 0x1002AEFB: jne 0x1005b9cf */
L_1002AF01:
    PUSH32(esp, esi); /* 0x1002AF01: push esi */
    eax = ebp + (-0x10); /* 0x1002AF02: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1002AF05: push eax */
    PUSH32(esp, 0x20u); /* 0x1002AF06: push 0x20 */
    ecx = ebp + (-0x54); /* 0x1002AF08: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1002A173); /* 0x1002AF0B: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002AF10: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002AF12: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1002AF17: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1002AF1A: push eax */
    ecx = ebp + (-0x2C); /* 0x1002AF1B: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002AF1E: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002AF23: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002AF25:
    eax = MEM32(ebp + (-0x50)); /* 0x1002AF25: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x1002AF28: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1002AF2D: mov dword ptr [ebp - 0xc], ecx */
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1002AF30: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1002AF34: mov dword ptr [ebp + 0xc], eax */
    PUSH32(esp, ecx); /* 0x1002AF37: push ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B9DF; /* 0x1002AF38: jne 0x1005b9df */
L_1002AF3E:
    PUSH32(esp, 8); /* 0x1002AF3E: push 8 */
    ecx = 0x100E030Cu; /* 0x1002AF40: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x1002AF45: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002AF4A: mov ecx, eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1002AF4C: mov dword ptr [ebp - 0xc], ecx */
    /* test ecx, ecx */ /* 0x1002AF4F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2BC; /* 0x1002AF51: je 0x1002b2bc */
L_1002AF57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002AF57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x1002AF59: mov byte ptr [ecx + 4], al */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0xFFFF00FFu; /* 0x1002AF5C: and dword ptr [ecx + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1002AF63: mov dword ptr [ecx], eax */
L_1002AF65:
    PUSH32(esp, ecx); /* 0x1002AF65: push ecx */
    eax = ebp + (-0x5C); /* 0x1002AF66: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1002AF69: push eax */
    RECOMP_CALL(sub_1002AA2C); /* 0x1002AF6A: call 0x1002aa2c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AF6F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002AF70: pop ecx */
    esi = MEM32(eax); /* 0x1002AF71: mov esi, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1002AF73: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1002AF76: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + 0xC) = eax; /* 0x1002AF79: mov dword ptr [ebp + 0xc], eax */
L_1002AF7C:
    ecx = MEM32(ebp + (-0x8)); /* 0x1002AF7C: mov ecx, dword ptr [ebp - 8] */
    eax = ebx; /* 0x1002AF7F: mov eax, ebx */
    /* test ecx, ecx */ /* 0x1002AF81: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2C8; /* 0x1002AF83: je 0x1002b2c8 */
L_1002AF89:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1002AF89: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002AF8E:
    /* test eax, eax */ /* 0x1002AF8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BA26; /* 0x1002AF90: jne 0x1005ba26 */
L_1002AF96:
    eax = ebp + (-0x5C); /* 0x1002AF96: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1002AF99: push eax */
    RECOMP_CALL(sub_1002AA6B); /* 0x1002AF9A: call 0x1002aa6b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AF9F: pop ecx */
    PUSH32(esp, eax); /* 0x1002AFA0: push eax */
    eax = ebp + (-0x44); /* 0x1002AFA1: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1002AFA4: push eax */
    PUSH32(esp, 0x28u); /* 0x1002AFA5: push 0x28 */
    ecx = ebp + (-0x54); /* 0x1002AFA7: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1002A173); /* 0x1002AFAA: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002AFAF: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002AFB1: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x1002AFB6: mov eax, dword ptr [ebp - 0x44] */
    ecx = ebp + (-0x4C); /* 0x1002AFB9: lea ecx, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1002AFBC: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x1002AFBF: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, 0x29u); /* 0x1002AFC2: push 0x29 */
    MEM32(ebp + (-0x48)) = eax; /* 0x1002AFC4: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1002AFC7: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4C); /* 0x1002AFCC: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1002AFCF: push eax */
    ecx = ebp + (-0x2C); /* 0x1002AFD0: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002AFD3: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1002AFD8: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1002AFDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002AFF1; /* 0x1002AFDD: je 0x1002aff1 */
L_1002AFDF:
    eax = ebx; /* 0x1002AFDF: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1002AFE1: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x200u */ /* 0x1002AFE6: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005BB3F; /* 0x1002AFEB: jne 0x1005bb3f */
L_1002AFF1:
    eax = MEM32(0x100E0300); /* 0x1002AFF1: mov eax, dword ptr [0x100e0300] */
    if (19u) _cf = (((eax) >> 18) & 1u); /* 0x1002AFF6: shr eax, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack((eax >> 19u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 19u; /* 0x1002AFF6: shr eax, 0x13 */
    eax = ~eax; /* 0x1002AFF9: not eax */
    /* test LO8(eax), 1 */ /* 0x1002AFFB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x5C); /* 0x1002AFFD: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1002B000: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB50; /* 0x1002B001: je 0x1005bb50 */
L_1002B007:
    RECOMP_CALL(sub_1002AA9C); /* 0x1002B007: call 0x1002aa9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002B00C: pop ecx */
    PUSH32(esp, eax); /* 0x1002B00D: push eax */
    ecx = ebp + (-0x2C); /* 0x1002B00E: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002B011: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1002B016:
    eax = MEM32(0x100E0300); /* 0x1002B016: mov eax, dword ptr [0x100e0300] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1002B01B: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1002B01B: shr eax, 8 */
    eax = ~eax; /* 0x1002B01E: not eax */
    /* test LO8(eax), 1 */ /* 0x1002B020: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x5C); /* 0x1002B022: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1002B025: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB64; /* 0x1002B026: je 0x1005bb64 */
L_1002B02C:
    RECOMP_CALL(sub_1002AACE); /* 0x1002B02C: call 0x1002aace */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002B031: pop ecx */
    PUSH32(esp, eax); /* 0x1002B032: push eax */
    ecx = ebp + (-0x2C); /* 0x1002B033: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002B036: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1002B03B:
    eax = ebp + (-0x5C); /* 0x1002B03B: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1002B03E: push eax */
    RECOMP_CALL(sub_1002AB08); /* 0x1002B03F: call 0x1002ab08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002B044: pop ecx */
    PUSH32(esp, eax); /* 0x1002B045: push eax */
    ecx = ebp + (-0x2C); /* 0x1002B046: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1002B049: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0300); /* 0x1002B04E: mov eax, dword ptr [0x100e0300] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1002B053: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x1002B053: shr eax, 2 */
    eax = ~eax; /* 0x1002B056: not eax */
    /* test LO8(eax), 1 */ /* 0x1002B058: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB78; /* 0x1002B05A: je 0x1005bb78 */
L_1002B060:
    ecx = MEM32(ebp + (-0xC)); /* 0x1002B060: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x1002B063: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB78; /* 0x1002B065: je 0x1005bb78 */
L_1002B06B:
    eax = MEM32(ebp + (-0x2C)); /* 0x1002B06B: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ecx) = eax; /* 0x1002B06E: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1002B070: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ecx + 0x4) = eax; /* 0x1002B073: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1002B076: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x2C)) = esi; /* 0x1002B079: mov dword ptr [ebp - 0x2c], esi */
L_1002B07C:
    MEM32(ebp + (-0x28)) = eax; /* 0x1002B07C: mov dword ptr [ebp - 0x28], eax */
L_1002B07F:
    eax = ebx; /* 0x1002B07F: mov eax, ebx */
    esi = 0x1800u; /* 0x1002B081: mov esi, 0x1800 */
    /* test edi, edi */ /* 0x1002B086: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2D2; /* 0x1002B088: je 0x1002b2d2 */
L_1002B08E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002B08E: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1002B090: sub eax, 0x800 */
    _flag_k = FK_CMP;
L_1002B095:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B095: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B097: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B099: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1002B09A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B324; /* 0x1002B09C: je 0x1002b324 */
L_1002B0A2:
    eax = MEM32(0x100E0300); /* 0x1002B0A2: mov eax, dword ptr [0x100e0300] */
    if (9u) _cf = (((eax) >> 8) & 1u); /* 0x1002B0A7: shr eax, 9 */
    if (9u) { _flag_a = recomp_flags_pack((eax >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 9u; /* 0x1002B0A7: shr eax, 9 */
    eax = ~eax; /* 0x1002B0AA: not eax */
    /* test LO8(eax), 1 */ /* 0x1002B0AC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B167; /* 0x1002B0AE: je 0x1002b167 */
L_1002B0B4:
    eax = ebx; /* 0x1002B0B4: mov eax, ebx */
    /* test edi, edi */ /* 0x1002B0B6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2DC; /* 0x1002B0B8: je 0x1002b2dc */
L_1002B0BE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002B0BE: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1002B0C0: sub eax, 0x800 */
    _flag_k = FK_CMP;
L_1002B0C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B0C5: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B0C7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B0C9: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1002B0CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B119; /* 0x1002B0CC: je 0x1002b119 */
L_1002B0CE:
    /* test edi, edi */ /* 0x1002B0CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2E6; /* 0x1002B0D0: je 0x1002b2e6 */
L_1002B0D6:
    eax = ebx; /* 0x1002B0D6: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1002B0D8: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x200u; /* 0x1002B0DD: sub eax, 0x200 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B0E2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B0E4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B0E6: inc eax */
    _flag_k = FK_INC;
L_1002B0E7:
    /* test eax, eax */ /* 0x1002B0E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B119; /* 0x1002B0E9: je 0x1002b119 */
L_1002B0EB:
    eax = ebp + (-0x2C); /* 0x1002B0EB: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1002B0EE: push eax */
    eax = ebp + (-0x4C); /* 0x1002B0EF: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1002B0F2: push eax */
    PUSH32(esp, 0x1002B344u); /* 0x1002B0F3: push 0x1002b344 */
    ecx = ebp + (-0x5C); /* 0x1002B0F8: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1002B0FB: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002B100: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002B102: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1002B107: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1002B10A: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1002B10D: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1002B110: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + 0xC) = eax; /* 0x1002B113: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x1002B116: mov dword ptr [ebp - 0x28], eax */
L_1002B119:
    /* test edi, edi */ /* 0x1002B119: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE28; /* 0x1002B11B: je 0x1005be28 */
L_1002B121:
    eax = ebx; /* 0x1002B121: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1002B123: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x100u */ /* 0x1002B128: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005BEB2; /* 0x1002B12D: je 0x1005beb2 */
L_1002B133:
    /* test edi, edi */ /* 0x1002B133: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE28; /* 0x1002B135: je 0x1005be28 */
L_1002B13B:
    eax = ebx; /* 0x1002B13B: mov eax, ebx */
    ecx = 0x800u; /* 0x1002B13D: mov ecx, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002B142: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x6000u; /* 0x1002B144: mov edx, 0x6000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1002B149: sub eax, ecx */
    _flag_k = FK_CMP;
L_1002B14B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B14B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B14D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B14F: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1002B150: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1002B152: mov eax, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2EE; /* 0x1002B154: je 0x1002b2ee */
L_1002B15A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1002B15A: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002B15F:
    /* test eax, eax */ /* 0x1002B15F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BE3B; /* 0x1002B161: jne 0x1005be3b */
L_1002B167:
    eax = MEM32(0x100E0300); /* 0x1002B167: mov eax, dword ptr [0x100e0300] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x1002B16C: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x1002B16C: shr eax, 7 */
    eax = ~eax; /* 0x1002B16F: not eax */
    /* test LO8(eax), 1 */ /* 0x1002B171: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B324; /* 0x1002B173: je 0x1002b324 */
L_1002B179:
    eax = ebx; /* 0x1002B179: mov eax, ebx */
    edx = 0x800u; /* 0x1002B17B: mov edx, 0x800 */
    /* test edi, edi */ /* 0x1002B180: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B2F8; /* 0x1002B182: je 0x1002b2f8 */
L_1002B188:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002B188: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1002B18A: sub eax, edx */
    _flag_k = FK_CMP;
L_1002B18C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B18C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B18E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B190: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1002B191: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B1B0; /* 0x1002B193: je 0x1002b1b0 */
L_1002B195:
    /* test edi, edi */ /* 0x1002B195: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BEE5; /* 0x1002B197: je 0x1005bee5 */
L_1002B19D:
    eax = ebx; /* 0x1002B19D: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002B19F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x1002B1A1: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x40u */ /* 0x1002B1A3: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002B1A5: sete cl */
L_1002B1A8:
    /* test ecx, ecx */ /* 0x1002B1A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BEF5; /* 0x1002B1AA: jne 0x1005bef5 */
L_1002B1B0:
    eax = ebx; /* 0x1002B1B0: mov eax, ebx */
    /* test edi, edi */ /* 0x1002B1B2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B302; /* 0x1002B1B4: je 0x1002b302 */
L_1002B1BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002B1BA: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1002B1BC: sub eax, edx */
    _flag_k = FK_CMP;
L_1002B1BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B1BE: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B1C0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B1C2: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1002B1C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B1E2; /* 0x1002B1C5: je 0x1002b1e2 */
L_1002B1C7:
    /* test edi, edi */ /* 0x1002B1C7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BF07; /* 0x1002B1C9: je 0x1005bf07 */
L_1002B1CF:
    eax = ebx; /* 0x1002B1CF: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002B1D1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x1002B1D3: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x1002B1D5: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002B1D7: sete cl */
L_1002B1DA:
    /* test ecx, ecx */ /* 0x1002B1DA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BF1B; /* 0x1002B1DC: jne 0x1005bf1b */
L_1002B1E2:
    eax = ebx; /* 0x1002B1E2: mov eax, ebx */
    /* test edi, edi */ /* 0x1002B1E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B30C; /* 0x1002B1E6: je 0x1002b30c */
L_1002B1EC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002B1EC: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1002B1EE: sub eax, edx */
    _flag_k = FK_CMP;
L_1002B1F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B1F0: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B1F2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B1F4: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1002B1F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B324; /* 0x1002B1F7: je 0x1002b324 */
L_1002B1FD:
    /* test edi, edi */ /* 0x1002B1FD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B316; /* 0x1002B1FF: je 0x1002b316 */
L_1002B205:
    PUSH32(esp, 0); /* 0x1002B205: push 0 */
    /* test LO8(ebx), 0xC0u */ /* 0x1002B207: test bl, 0xc0 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = POP32_VAL(esp); /* 0x1002B20A: pop eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002B20B: sete al */
L_1002B20E:
    /* test eax, eax */ /* 0x1002B20E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B324; /* 0x1002B210: je 0x1002b324 */
L_1002B216:
    eax = ebp + (-0x2C); /* 0x1002B216: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1002B219: push eax */
    eax = ebp + (-0x4C); /* 0x1002B21A: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1002B21D: push eax */
    PUSH32(esp, 0x1002B34Cu); /* 0x1002B21E: push 0x1002b34c */
L_1002B223:
    ecx = ebp + (-0x5C); /* 0x1002B223: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1002B226: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002B22B: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002B22D: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4C)); /* 0x1002B232: mov ecx, dword ptr [ebp - 0x4c] */
    edx = MEM32(ebp + (-0x48)); /* 0x1002B235: mov edx, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1002B238: mov dword ptr [ebp - 0x2c], ecx */
    MEM32(ebp + (-0x28)) = edx; /* 0x1002B23B: mov dword ptr [ebp - 0x28], edx */
L_1002B23E:
    eax = ebx; /* 0x1002B23E: mov eax, ebx */
    /* test edi, edi */ /* 0x1002B240: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B32F; /* 0x1002B242: je 0x1002b32f */
L_1002B248:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002B248: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1002B24A: sub eax, 0x800 */
    _flag_k = FK_CMP;
L_1002B24F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B24F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B251: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B253: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1002B254: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1002B256: mov eax, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B339; /* 0x1002B258: je 0x1002b339 */
L_1002B25E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1002B25E: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002B263:
    /* test eax, eax */ /* 0x1002B263: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BF2D; /* 0x1002B265: jne 0x1005bf2d */
L_1002B26B:
    /* test ebx, 0x00010000u */ /* 0x1002B26B: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BF6A; /* 0x1002B271: jne 0x1005bf6a */
L_1002B277:
    eax = MEM32(ebp + 0x8); /* 0x1002B277: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002B27A: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002B27C: mov dword ptr [eax + 4], edx */
L_1002B27F:
    edi = POP32_VAL(esp); /* 0x1002B27F: pop edi */
L_1002B280:
    esi = POP32_VAL(esp); /* 0x1002B280: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002B281: pop ebx */
    esp = ebp; /* 0x1002B282: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002B284: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002B285: ret  */
L_1002B286:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1002B286: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002ADFE; /* 0x1002B28B: jmp 0x1002adfe */
L_1002B290:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1002B290: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AE15; /* 0x1002B295: jmp 0x1002ae15 */
L_1002B29A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1002B29A: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AE38; /* 0x1002B29F: jmp 0x1002ae38 */
L_1002B2A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1002B2A4: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AE7E; /* 0x1002B2A9: jmp 0x1002ae7e */
L_1002B2AE:
    eax = ebp + (-0x54); /* 0x1002B2AE: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1002B2B1: push eax */
    RECOMP_CALL(sub_1002B4F8); /* 0x1002B2B2: call 0x1002b4f8 */
    RECOMP_FLAGS_IN();
    goto L_1005B9C0; /* 0x1002B2B7: jmp 0x1005b9c0 */
L_1002B2BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002B2BC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1002B2BE: mov ecx, esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x1002B2C0: mov dword ptr [ebp - 0xc], esi */
    RECOMP_BACKEDGE();
    goto L_1002AF65; /* 0x1002B2C3: jmp 0x1002af65 */
L_1002B2C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1002B2C8: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AF8E; /* 0x1002B2CD: jmp 0x1002af8e */
L_1002B2D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1002B2D2: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B095; /* 0x1002B2D7: jmp 0x1002b095 */
L_1002B2DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1002B2DC: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B0C5; /* 0x1002B2E1: jmp 0x1002b0c5 */
L_1002B2E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002B2E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B2E8: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002B0E7; /* 0x1002B2E9: jmp 0x1002b0e7 */
L_1002B2EE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1002B2EE: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B15F; /* 0x1002B2F3: jmp 0x1002b15f */
L_1002B2F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1002B2F8: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B18C; /* 0x1002B2FD: jmp 0x1002b18c */
L_1002B302:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1002B302: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B1BE; /* 0x1002B307: jmp 0x1002b1be */
L_1002B30C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1002B30C: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B1F0; /* 0x1002B311: jmp 0x1002b1f0 */
L_1002B316:
    eax = ebx; /* 0x1002B316: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002B318: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002B31A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002B31C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B31E: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002B20E; /* 0x1002B31F: jmp 0x1002b20e */
L_1002B324:
    edx = MEM32(ebp + 0xC); /* 0x1002B324: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1002B327: mov ecx, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1002B23E; /* 0x1002B32A: jmp 0x1002b23e */
L_1002B32F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1002B32F: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B24F; /* 0x1002B334: jmp 0x1002b24f */
L_1002B339:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1002B339: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B263; /* 0x1002B33E: jmp 0x1002b263 */
L_1005B6EC:
    ecx = MEM32(ebp + 0x8); /* 0x1005B6EC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1005B6EF: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005B6F1: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
L_1005B6F6:
    eax = MEM32(ebp + 0x8); /* 0x1005B6F6: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002B280; /* 0x1005B6F9: jmp 0x1002b280 */
L_1005B6FE:
    PUSH32(esp, esi); /* 0x1005B6FE: push esi */
    PUSH32(esp, eax); /* 0x1005B6FF: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005B700: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EC0E); /* 0x1005B703: call 0x1009ec0e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005B708: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1005B6F6; /* 0x1005B70B: jmp 0x1005b6f6 */
L_1005B70D:
    eax = MEM32(ebp + 0x8); /* 0x1005B70D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1005B710: mov ecx, dword ptr [esi] */
    MEM32(eax) = ecx; /* 0x1005B712: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x4); /* 0x1005B714: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1005B717: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_1002B280; /* 0x1005B71A: jmp 0x1002b280 */
L_1005B71F:
    eax = ebx; /* 0x1005B71F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1B00u);
    eax = eax & 0x1B00u; /* 0x1005B721: and eax, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1000u */ /* 0x1005B726: cmp eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002AE06; /* 0x1005B72B: jne 0x1002ae06 */
L_1005B731:
    goto L_1005BB89; /* 0x1005B731: jmp 0x1005bb89 */
L_1005B736:
    eax = ebx; /* 0x1005B736: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1B00u);
    eax = eax & 0x1B00u; /* 0x1005B738: and eax, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1100u */ /* 0x1005B73D: cmp eax, 0x1100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005BB89; /* 0x1005B742: je 0x1005bb89 */
L_1005B748:
    /* cmp eax, 0x1200u */ /* 0x1005B748: cmp eax, 0x1200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002AE1D; /* 0x1005B74D: jne 0x1002ae1d */
L_1005B753:
    goto L_1005BB89; /* 0x1005B753: jmp 0x1005bb89 */
L_1005B758:
    ecx = MEM32(0x100E0300); /* 0x1005B758: mov ecx, dword ptr [0x100e0300] */
    eax = ecx; /* 0x1005B75E: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1005B760: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1005B760: shr eax, 1 */
    eax = ~eax; /* 0x1005B762: not eax */
    /* test LO8(eax), 1 */ /* 0x1005B764: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B7A0; /* 0x1005B766: je 0x1005b7a0 */
L_1005B768:
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x1005B768: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x1005B768: shr ecx, 3 */
    ecx = ~ecx; /* 0x1005B76B: not ecx */
    /* test LO8(ecx), 1 */ /* 0x1005B76D: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B7A0; /* 0x1005B770: je 0x1005b7a0 */
L_1005B772:
    eax = ebp + (-0x44); /* 0x1005B772: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1005B775: push eax */
    RECOMP_CALL(sub_1009EF67); /* 0x1005B776: call 0x1009ef67 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B77B: pop ecx */
    PUSH32(esp, eax); /* 0x1005B77C: push eax */
    eax = ebp + (-0x4C); /* 0x1005B77D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005B780: push eax */
    PUSH32(esp, 0x20u); /* 0x1005B781: push 0x20 */
    ecx = ebp + (-0x3C); /* 0x1005B783: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1002A173); /* 0x1005B786: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005B78B: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005B78D: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1005B792: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005B795: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1005B798: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005B79B: mov dword ptr [ebp - 0x28], eax */
    goto L_1005B7B3; /* 0x1005B79E: jmp 0x1005b7b3 */
L_1005B7A0:
    eax = ebp + (-0x4C); /* 0x1005B7A0: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005B7A3: push eax */
    RECOMP_CALL(sub_1009EF67); /* 0x1005B7A4: call 0x1009ef67 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B7A9: pop ecx */
    PUSH32(esp, eax); /* 0x1005B7AA: push eax */
    ecx = ebp + (-0x2C); /* 0x1005B7AB: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1005B7AE: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
L_1005B7B3:
    edx = MEM32(ebp + (-0x8)); /* 0x1005B7B3: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005B7B6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AE29; /* 0x1005B7B8: jmp 0x1002ae29 */
L_1005B7BD:
    /* cmp MEM32(ebp + 0xC), 0x1800u */ /* 0x1005B7BD: cmp dword ptr [ebp + 0xc], 0x1800 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x1800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002AE40; /* 0x1005B7C4: jne 0x1002ae40 */
L_1005B7CA:
    PUSH32(esp, ecx); /* 0x1005B7CA: push ecx */
    eax = ebp + (-0x4C); /* 0x1005B7CB: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005B7CE: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005B7CF: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B7D4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B7D5: pop ecx */
    eax = ebp + (-0x4C); /* 0x1005B7D6: lea eax, [ebp - 0x4c] */
    ecx = esi; /* 0x1005B7D9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1005B7DB: push eax */
    eax = ebp + (-0x44); /* 0x1005B7DC: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1005B7DF: push eax */
    PUSH32(esp, 0x7Bu); /* 0x1005B7E0: push 0x7b */
    eax = ebp + (-0x3C); /* 0x1005B7E2: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1005B7E5: push eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1005B7E6: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005B7EB: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005B7ED: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005B7F2: push eax */
    ecx = ebp + (-0x2C); /* 0x1005B7F3: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005B7F6: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4C); /* 0x1005B7FB: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005B7FE: push eax */
    RECOMP_CALL(sub_100A0026); /* 0x1005B7FF: call 0x100a0026 */
    RECOMP_FLAGS_IN();
    esi = 0x1000u; /* 0x1005B804: mov esi, 0x1000 */
    ecx = POP32_VAL(esp); /* 0x1005B809: pop ecx */
    /* test MEM32(0x100E0300), esi */ /* 0x1005B80A: test dword ptr [0x100e0300], esi */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B850; /* 0x1005B810: jne 0x1005b850 */
L_1005B812:
    eax = ebp + (-0x4C); /* 0x1005B812: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005B815: push eax */
    eax = ebp + (-0x44); /* 0x1005B816: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1005B819: push eax */
    PUSH32(esp, 0x2Cu); /* 0x1005B81A: push 0x2c */
    ecx = ebp + (-0x3C); /* 0x1005B81C: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1002A173); /* 0x1005B81F: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005B824: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005B826: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x1005B82B: mov eax, dword ptr [ebp - 0x44] */
    ecx = ebp + (-0x4C); /* 0x1005B82E: lea ecx, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1005B831: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x1005B834: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, 0x1005BF94u); /* 0x1005B837: push 0x1005bf94 */
    MEM32(ebp + (-0x48)) = eax; /* 0x1005B83C: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005B83F: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4C); /* 0x1005B844: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005B847: push eax */
    ecx = ebp + (-0x2C); /* 0x1005B848: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005B84B: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1005B850:
    PUSH32(esp, 0x1005BF98u); /* 0x1005B850: push 0x1005bf98 */
    ecx = ebp + (-0x2C); /* 0x1005B855: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1002A669); /* 0x1005B858: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4C); /* 0x1005B85D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005B860: push eax */
    RECOMP_CALL(sub_1002B4F8); /* 0x1005B861: call 0x1002b4f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B866: pop ecx */
    ecx = MEM32(0x100E0300); /* 0x1005B867: mov ecx, dword ptr [0x100e0300] */
    eax = ecx; /* 0x1005B86D: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1005B86F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1005B86F: shr eax, 1 */
    eax = ~eax; /* 0x1005B871: not eax */
    /* test LO8(eax), 1 */ /* 0x1005B873: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB78; /* 0x1005B875: je 0x1005bb78 */
L_1005B87B:
    eax = ecx; /* 0x1005B87B: mov eax, ecx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1005B87D: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x1005B87D: shr eax, 4 */
    eax = ~eax; /* 0x1005B880: not eax */
    /* test LO8(eax), 1 */ /* 0x1005B882: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB78; /* 0x1005B884: je 0x1005bb78 */
L_1005B88A:
    /* test esi, ecx */ /* 0x1005B88A: test esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BB78; /* 0x1005B88C: jne 0x1005bb78 */
L_1005B892:
    eax = ebp + (-0x4C); /* 0x1005B892: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005B895: push eax */
    eax = ebp + (-0x44); /* 0x1005B896: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1005B899: push eax */
    PUSH32(esp, 0x20u); /* 0x1005B89A: push 0x20 */
    ecx = ebp + (-0x3C); /* 0x1005B89C: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1002A173); /* 0x1005B89F: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005B8A4: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005B8A6: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x1005B8AB: mov eax, dword ptr [ebp - 0x44] */
    ecx = ebp + (-0x4C); /* 0x1005B8AE: lea ecx, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1005B8B1: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x1005B8B4: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, 0x20u); /* 0x1005B8B7: push 0x20 */
    MEM32(ebp + (-0x48)) = eax; /* 0x1005B8B9: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005B8BC: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1005B8C1: mov eax, dword ptr [ebp - 0x4c] */
    ecx = ebp + (-0x44); /* 0x1005B8C4: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1005B8C7: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1005B8CA: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1005B8CD: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x2C); /* 0x1005B8D0: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005B8D3: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005B8D4: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1005B8D9: mov ecx, dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1005B8DC: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1005B8DF: mov dword ptr [ebp - 0x2c], ecx */
    ecx = MEM32(ebp + (-0x40)); /* 0x1005B8E2: mov ecx, dword ptr [ebp - 0x40] */
    goto L_1005BDFB; /* 0x1005B8E5: jmp 0x1005bdfb */
L_1005B8EA:
    /* test edx, edx */ /* 0x1005B8EA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B965; /* 0x1005B8EC: je 0x1005b965 */
L_1005B8EE:
    eax = ebx; /* 0x1005B8EE: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1005B8F0: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x600u */ /* 0x1005B8F5: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B93A; /* 0x1005B8FA: jne 0x1005b93a */
L_1005B8FC:
    eax = ebp + (-0x24); /* 0x1005B8FC: lea eax, [ebp - 0x24] */
    PUSH32(esp, 1); /* 0x1005B8FF: push 1 */
    PUSH32(esp, eax); /* 0x1005B901: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005B902: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1005B907: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1005B90A: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1005B90D: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1005B910: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x24); /* 0x1005B913: lea eax, [ebp - 0x24] */
    PUSH32(esp, 1); /* 0x1005B916: push 1 */
    PUSH32(esp, eax); /* 0x1005B918: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005B919: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1005B91E: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1005B921: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1005B924: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x48)) = eax; /* 0x1005B927: mov dword ptr [ebp - 0x48], eax */
    eax = ebp + (-0x24); /* 0x1005B92A: lea eax, [ebp - 0x24] */
    PUSH32(esp, 1); /* 0x1005B92D: push 1 */
    PUSH32(esp, eax); /* 0x1005B92F: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005B930: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1005B935: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_1005B959; /* 0x1005B938: jmp 0x1005b959 */
L_1005B93A:
    /* test edx, edx */ /* 0x1005B93A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B965; /* 0x1005B93C: je 0x1005b965 */
L_1005B93E:
    eax = ebx; /* 0x1005B93E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1005B940: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x500u */ /* 0x1005B945: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B965; /* 0x1005B94A: jne 0x1005b965 */
L_1005B94C:
    eax = ebp + (-0x24); /* 0x1005B94C: lea eax, [ebp - 0x24] */
    PUSH32(esp, 1); /* 0x1005B94F: push 1 */
    PUSH32(esp, eax); /* 0x1005B951: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005B952: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B957: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B958: pop ecx */
L_1005B959:
    eax = MEM32(ebp + (-0x24)); /* 0x1005B959: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x34)) = eax; /* 0x1005B95C: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1005B95F: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005B962: mov dword ptr [ebp - 0x30], eax */
L_1005B965:
    eax = ebp + (-0x24); /* 0x1005B965: lea eax, [ebp - 0x24] */
    PUSH32(esp, 1); /* 0x1005B968: push 1 */
    PUSH32(esp, eax); /* 0x1005B96A: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005B96B: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1005B970: mov eax, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x8)); /* 0x1005B973: mov edx, dword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x1005B976: pop ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1005B977: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1005B97A: mov eax, dword ptr [ebp - 0x20] */
    ecx = POP32_VAL(esp); /* 0x1005B97D: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005B97E: mov dword ptr [ebp - 0x20], eax */
    RECOMP_BACKEDGE();
    goto L_1002AE86; /* 0x1005B981: jmp 0x1002ae86 */
L_1005B986:
    eax = MEM32(0x100E0300); /* 0x1005B986: mov eax, dword ptr [0x100e0300] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    eax = eax & 0x60u; /* 0x1005B98B: and eax, 0x60 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 0x60u */ /* 0x1005B98E: cmp al, 0x60 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x10); /* 0x1005B990: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005B993: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B9AC; /* 0x1005B994: je 0x1005b9ac */
L_1005B996:
    RECOMP_CALL(sub_1009FFEC); /* 0x1005B996: call 0x1009ffec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B99B: pop ecx */
    ecx = MEM32(eax); /* 0x1005B99C: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1005B99E: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x1005B9A1: mov dword ptr [ebp - 0x3c], ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x1005B9A4: mov dword ptr [ebp - 0x38], eax */
    RECOMP_BACKEDGE();
    goto L_1002AE9C; /* 0x1005B9A7: jmp 0x1002ae9c */
L_1005B9AC:
    RECOMP_CALL(sub_1009FFEC); /* 0x1005B9AC: call 0x1009ffec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B9B1: pop ecx */
    PUSH32(esp, eax); /* 0x1005B9B2: push eax */
    ecx = ebp + (-0x3C); /* 0x1005B9B3: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1005B9B6: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002AE9C; /* 0x1005B9BB: jmp 0x1002ae9c */
L_1005B9C0:
    ecx = POP32_VAL(esp); /* 0x1005B9C0: pop ecx */
    PUSH32(esp, eax); /* 0x1005B9C1: push eax */
    ecx = ebp + (-0x2C); /* 0x1005B9C2: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1005B9C5: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002AEE2; /* 0x1005B9CA: jmp 0x1002aee2 */
L_1005B9CF:
    eax = MEM32(esi); /* 0x1005B9CF: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005B9D1: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(esi + 0x4); /* 0x1005B9D4: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005B9D7: mov dword ptr [ebp - 0x28], eax */
    RECOMP_BACKEDGE();
    goto L_1002AF25; /* 0x1005B9DA: jmp 0x1002af25 */
L_1005B9DF:
    eax = ebp + (-0x54); /* 0x1005B9DF: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1005B9E2: push eax */
    RECOMP_CALL(sub_1002AA2C); /* 0x1005B9E3: call 0x1002aa2c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B9E8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B9E9: pop ecx */
    PUSH32(esp, eax); /* 0x1005B9EA: push eax */
    eax = ebp + (-0x18); /* 0x1005B9EB: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1005B9EE: push eax */
    PUSH32(esp, 0x1006273Cu); /* 0x1005B9EF: push 0x1006273c */
    ecx = ebp + (-0x5C); /* 0x1005B9F4: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005B9F7: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005B9FC: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005B9FE: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1005BA03: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1005BA06: push eax */
    ecx = ebp + (-0x2C); /* 0x1005BA07: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005BA0A: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x1000u */ /* 0x1005BA0F: test dword ptr [0x100e0300], 0x1000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BD6C; /* 0x1005BA19: jne 0x1005bd6c */
L_1005BA1F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1005BA1F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002AF7C; /* 0x1005BA21: jmp 0x1002af7c */
L_1005BA26:
    /* test ecx, ecx */ /* 0x1005BA26: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB08; /* 0x1005BA28: je 0x1005bb08 */
L_1005BA2E:
    eax = ebx; /* 0x1005BA2E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1005BA30: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x600u */ /* 0x1005BA35: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005BAB6; /* 0x1005BA3A: jne 0x1005bab6 */
L_1005BA3C:
    eax = ebp + (-0x44); /* 0x1005BA3C: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1005BA3F: push eax */
    eax = ebp + (-0x18); /* 0x1005BA40: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1005BA43: push eax */
    PUSH32(esp, 0x1005BF9Cu); /* 0x1005BA44: push 0x1005bf9c */
    ecx = ebp + (-0x5C); /* 0x1005BA49: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005BA4C: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005BA51: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005BA53: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1005BA58: mov eax, dword ptr [ebp - 0x18] */
    ecx = ebp + (-0x44); /* 0x1005BA5B: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1005BA5E: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1005BA61: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, 0x2Cu); /* 0x1005BA64: push 0x2c */
    MEM32(ebp + (-0x40)) = eax; /* 0x1005BA66: mov dword ptr [ebp - 0x40], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005BA69: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x1005BA6E: mov eax, dword ptr [ebp - 0x44] */
    ecx = ebp + (-0x18); /* 0x1005BA71: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1005BA74: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x1005BA77: mov eax, dword ptr [ebp - 0x40] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005BA7A: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x4C); /* 0x1005BA7D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BA80: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005BA81: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1005BA86: mov eax, dword ptr [ebp - 0x18] */
    ecx = ebp + (-0x4C); /* 0x1005BA89: lea ecx, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1005BA8C: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1005BA8F: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, 0x2Cu); /* 0x1005BA92: push 0x2c */
    MEM32(ebp + (-0x48)) = eax; /* 0x1005BA94: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005BA97: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1005BA9C: mov eax, dword ptr [ebp - 0x4c] */
    ecx = ebp + (-0x44); /* 0x1005BA9F: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1005BAA2: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1005BAA5: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1005BAA8: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x34); /* 0x1005BAAB: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1005BAAE: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005BAAF: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    goto L_1005BAE4; /* 0x1005BAB4: jmp 0x1005bae4 */
L_1005BAB6:
    /* test ecx, ecx */ /* 0x1005BAB6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BB08; /* 0x1005BAB8: je 0x1005bb08 */
L_1005BABA:
    eax = ebx; /* 0x1005BABA: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1005BABC: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x500u */ /* 0x1005BAC1: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005BB08; /* 0x1005BAC6: jne 0x1005bb08 */
L_1005BAC8:
    eax = ebp + (-0x34); /* 0x1005BAC8: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1005BACB: push eax */
    eax = ebp + (-0x44); /* 0x1005BACC: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1005BACF: push eax */
    PUSH32(esp, 0x1005BFACu); /* 0x1005BAD0: push 0x1005bfac */
    ecx = ebp + (-0x5C); /* 0x1005BAD5: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005BAD8: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005BADD: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005BADF: call 0x1002a19f */
    RECOMP_FLAGS_IN();
L_1005BAE4:
    eax = MEM32(ebp + (-0x44)); /* 0x1005BAE4: mov eax, dword ptr [ebp - 0x44] */
    ecx = ebp + (-0x4C); /* 0x1005BAE7: lea ecx, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1005BAEA: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x1005BAED: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, 0x2Cu); /* 0x1005BAF0: push 0x2c */
    MEM32(ebp + (-0x48)) = eax; /* 0x1005BAF2: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005BAF5: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4C); /* 0x1005BAFA: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BAFD: push eax */
    ecx = ebp + (-0x2C); /* 0x1005BAFE: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005BB01: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    goto L_1005BB15; /* 0x1005BB06: jmp 0x1005bb15 */
L_1005BB08:
    PUSH32(esp, 0x1005BFB8u); /* 0x1005BB08: push 0x1005bfb8 */
    ecx = ebp + (-0x2C); /* 0x1005BB0D: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1002A669); /* 0x1005BB10: call 0x1002a669 */
    RECOMP_FLAGS_IN();
L_1005BB15:
    eax = MEM32(ebp + (-0x1C)); /* 0x1005BB15: mov eax, dword ptr [ebp - 0x1c] */
    ecx = ebp + (-0x4C); /* 0x1005BB18: lea ecx, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1005BB1B: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1005BB1E: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0x1005BF94u); /* 0x1005BB21: push 0x1005bf94 */
    MEM32(ebp + (-0x48)) = eax; /* 0x1005BB26: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005BB29: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4C); /* 0x1005BB2E: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BB31: push eax */
    ecx = ebp + (-0x2C); /* 0x1005BB32: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005BB35: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002AF96; /* 0x1005BB3A: jmp 0x1002af96 */
L_1005BB3F:
    eax = ebp + (-0x3C); /* 0x1005BB3F: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1005BB42: push eax */
    ecx = ebp + (-0x2C); /* 0x1005BB43: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005BB46: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002AFF1; /* 0x1005BB4B: jmp 0x1002aff1 */
L_1005BB50:
    RECOMP_CALL(sub_1002AA9C); /* 0x1005BB50: call 0x1002aa9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005BB55: pop ecx */
    PUSH32(esp, eax); /* 0x1005BB56: push eax */
    ecx = ebp + (-0x2C); /* 0x1005BB57: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1005BB5A: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002B016; /* 0x1005BB5F: jmp 0x1002b016 */
L_1005BB64:
    RECOMP_CALL(sub_1002AACE); /* 0x1005BB64: call 0x1002aace */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005BB69: pop ecx */
    PUSH32(esp, eax); /* 0x1005BB6A: push eax */
    ecx = ebp + (-0x2C); /* 0x1005BB6B: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1005BB6E: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002B03B; /* 0x1005BB73: jmp 0x1002b03b */
L_1005BB78:
    eax = MEM32(ebp + (-0x28)); /* 0x1005BB78: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + 0xC) = eax; /* 0x1005BB7B: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1005BB7E: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1005BB81: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_1002B07F; /* 0x1005BB84: jmp 0x1002b07f */
L_1005BB89:
    PUSH32(esp, esi); /* 0x1005BB89: push esi */
    ecx = ebp + (-0x2C); /* 0x1005BB8A: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005BB8D: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    ecx = 0x7C00u; /* 0x1005BB92: mov ecx, 0x7c00 */
    /* test edi, edi */ /* 0x1005BB97: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BC4E; /* 0x1005BB99: jne 0x1005bc4e */
L_1005BB9F:
    eax = ebx; /* 0x1005BB9F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1005BBA1: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x6800u */ /* 0x1005BBA3: cmp eax, 0x6800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005BBBD; /* 0x1005BBA8: je 0x1005bbbd */
L_1005BBAA:
    /* test edi, edi */ /* 0x1005BBAA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BC4E; /* 0x1005BBAC: jne 0x1005bc4e */
L_1005BBB2:
    eax = ebx; /* 0x1005BBB2: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1005BBB4: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7000u */ /* 0x1005BBB6: cmp eax, 0x7000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005BBCB; /* 0x1005BBBB: jne 0x1005bbcb */
L_1005BBBD:
    eax = ebp + (-0x2C); /* 0x1005BBBD: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BBC0: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005BBC1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A00C1); /* 0x1005BBC4: call 0x100a00c1 */
    RECOMP_FLAGS_IN();
    goto L_1005BC40; /* 0x1005BBC9: jmp 0x1005bc40 */
L_1005BBCB:
    /* test edi, edi */ /* 0x1005BBCB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BC4E; /* 0x1005BBCD: jne 0x1005bc4e */
L_1005BBCF:
    eax = ebx; /* 0x1005BBCF: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1005BBD1: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x6000u */ /* 0x1005BBD3: cmp eax, 0x6000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005BC28; /* 0x1005BBD8: jne 0x1005bc28 */
L_1005BBDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1005BBDA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x3C); /* 0x1005BBDC: lea eax, [ebp - 0x3c] */
    PUSH32(esp, esi); /* 0x1005BBDF: push esi */
    PUSH32(esp, eax); /* 0x1005BBE0: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005BBE1: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1005BBE6: mov eax, dword ptr [ebp - 0x2c] */
    ecx = POP32_VAL(esp); /* 0x1005BBE9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005BBEA: pop ecx */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1005BBEB: mov dword ptr [ebp - 0x4c], eax */
    ecx = ebp + (-0x4C); /* 0x1005BBEE: lea ecx, [ebp - 0x4c] */
    eax = MEM32(ebp + (-0x28)); /* 0x1005BBF1: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, 0x7Bu); /* 0x1005BBF4: push 0x7b */
    MEM32(ebp + (-0x48)) = eax; /* 0x1005BBF6: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005BBF9: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1005BBFE: mov eax, dword ptr [ebp - 0x4c] */
    ecx = ebp + (-0x44); /* 0x1005BC01: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1005BC04: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1005BC07: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1005BC0A: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x3C); /* 0x1005BC0D: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1005BC10: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005BC11: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1005BF98u); /* 0x1005BC16: push 0x1005bf98 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005BC1B: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x44); /* 0x1005BC1E: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1002A782); /* 0x1005BC21: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    goto L_1005BC42; /* 0x1005BC26: jmp 0x1005bc42 */
L_1005BC28:
    /* test edi, edi */ /* 0x1005BC28: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BC4E; /* 0x1005BC2A: jne 0x1005bc4e */
L_1005BC2C:
    eax = ebx; /* 0x1005BC2C: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1005BC2E: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1005BC30: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005BC4A; /* 0x1005BC32: jne 0x1005bc4a */
L_1005BC34:
    eax = ebp + (-0x2C); /* 0x1005BC34: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BC37: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005BC38: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A006B); /* 0x1005BC3B: call 0x100a006b */
    RECOMP_FLAGS_IN();
L_1005BC40:
    ecx = POP32_VAL(esp); /* 0x1005BC40: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005BC41: pop ecx */
L_1005BC42:
    eax = MEM32(ebp + 0x8); /* 0x1005BC42: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002B27F; /* 0x1005BC45: jmp 0x1002b27f */
L_1005BC4A:
    /* test edi, edi */ /* 0x1005BC4A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BC5E; /* 0x1005BC4C: je 0x1005bc5e */
L_1005BC4E:
    eax = ebx; /* 0x1005BC4E: mov eax, ebx */
    esi = 0x1800u; /* 0x1005BC50: mov esi, 0x1800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1005BC55: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1005BC57: sub eax, 0x800 */
    _flag_k = FK_CMP;
    goto L_1005BC6A; /* 0x1005BC5C: jmp 0x1005bc6a */
L_1005BC5E:
    eax = ebx; /* 0x1005BC5E: mov eax, ebx */
    esi = 0x1800u; /* 0x1005BC60: mov esi, 0x1800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1005BC65: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BC6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BC6A: neg eax */
    _flag_k = FK_CMP;
    edx = 0x1000u; /* 0x1005BC6C: mov edx, 0x1000 */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BC71: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BC73: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1005BC74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1005BC76: mov eax, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BC81; /* 0x1005BC78: je 0x1005bc81 */
L_1005BC7A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1005BC7A: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005BC83; /* 0x1005BC7F: jmp 0x1005bc83 */
L_1005BC81:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005BC81: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BC83:
    /* test eax, eax */ /* 0x1005BC83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BCA9; /* 0x1005BC85: je 0x1005bca9 */
L_1005BC87:
    eax = ebx; /* 0x1005BC87: mov eax, ebx */
    ecx = edi; /* 0x1005BC89: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1B00u);
    eax = eax & 0x1B00u; /* 0x1005BC8B: and eax, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1005BC90: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BC92: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BC94: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BC96: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1005BC97: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BC99: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1005BC9B: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BCA9; /* 0x1005BC9D: je 0x1005bca9 */
L_1005BC9F:
    PUSH32(esp, 0x1005BFC4u); /* 0x1005BC9F: push 0x1005bfc4 */
    goto L_1005BD43; /* 0x1005BCA4: jmp 0x1005bd43 */
L_1005BCA9:
    eax = ebx; /* 0x1005BCA9: mov eax, ebx */
    /* test edi, edi */ /* 0x1005BCAB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BCB8; /* 0x1005BCAD: je 0x1005bcb8 */
L_1005BCAF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1005BCAF: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1005BCB1: sub eax, 0x800 */
    _flag_k = FK_CMP;
    goto L_1005BCBD; /* 0x1005BCB6: jmp 0x1005bcbd */
L_1005BCB8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1005BCB8: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BCBD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BCBD: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BCBF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BCC1: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1005BCC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1005BCC4: mov eax, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BCCF; /* 0x1005BCC6: je 0x1005bccf */
L_1005BCC8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1005BCC8: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005BCD1; /* 0x1005BCCD: jmp 0x1005bcd1 */
L_1005BCCF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005BCCF: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BCD1:
    /* test eax, eax */ /* 0x1005BCD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BCF7; /* 0x1005BCD3: je 0x1005bcf7 */
L_1005BCD5:
    eax = ebx; /* 0x1005BCD5: mov eax, ebx */
    ecx = edi; /* 0x1005BCD7: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1B00u);
    eax = eax & 0x1B00u; /* 0x1005BCD9: and eax, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1100u; /* 0x1005BCDE: sub eax, 0x1100 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BCE3: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BCE5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BCE7: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1005BCE8: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BCEA: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1005BCEC: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BCF7; /* 0x1005BCEE: je 0x1005bcf7 */
L_1005BCF0:
    PUSH32(esp, 0x1005BFE8u); /* 0x1005BCF0: push 0x1005bfe8 */
    goto L_1005BD43; /* 0x1005BCF5: jmp 0x1005bd43 */
L_1005BCF7:
    eax = ebx; /* 0x1005BCF7: mov eax, ebx */
    /* test edi, edi */ /* 0x1005BCF9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BD06; /* 0x1005BCFB: je 0x1005bd06 */
L_1005BCFD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1005BCFD: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1005BCFF: sub eax, 0x800 */
    _flag_k = FK_CMP;
    goto L_1005BD0B; /* 0x1005BD04: jmp 0x1005bd0b */
L_1005BD06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1005BD06: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BD0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BD0B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BD0D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BD0F: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1005BD10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1005BD12: mov eax, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BD1D; /* 0x1005BD14: je 0x1005bd1d */
L_1005BD16:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1005BD16: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005BD1F; /* 0x1005BD1B: jmp 0x1005bd1f */
L_1005BD1D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005BD1D: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BD1F:
    /* test eax, eax */ /* 0x1005BD1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BD5A; /* 0x1005BD21: je 0x1005bd5a */
L_1005BD23:
    eax = ebx; /* 0x1005BD23: mov eax, ebx */
    ecx = edi; /* 0x1005BD25: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1B00u);
    eax = eax & 0x1B00u; /* 0x1005BD27: and eax, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1200u; /* 0x1005BD2C: sub eax, 0x1200 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BD31: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BD33: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BD35: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1005BD36: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BD38: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1005BD3A: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BD5A; /* 0x1005BD3C: je 0x1005bd5a */
L_1005BD3E:
    PUSH32(esp, 0x1005C01Cu); /* 0x1005BD3E: push 0x1005c01c */
L_1005BD43:
    ecx = ebp + (-0x2C); /* 0x1005BD43: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1002A669); /* 0x1005BD46: call 0x1002a669 */
    RECOMP_FLAGS_IN();
L_1005BD4B:
    /* test edi, edi */ /* 0x1005BD4B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BD7F; /* 0x1005BD4D: je 0x1005bd7f */
L_1005BD4F:
    eax = ebx; /* 0x1005BD4F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1005BD51: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1005BD53: sub eax, 0x800 */
    _flag_k = FK_CMP;
    goto L_1005BD86; /* 0x1005BD58: jmp 0x1005bd86 */
L_1005BD5A:
    /* test edi, edi */ /* 0x1005BD5A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BD4F; /* 0x1005BD5C: jne 0x1005bd4f */
L_1005BD5E:
    eax = ebx; /* 0x1005BD5E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7C00u);
    eax = eax & 0x7C00u; /* 0x1005BD60: and eax, 0x7c00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7800u */ /* 0x1005BD65: cmp eax, 0x7800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005BD4B; /* 0x1005BD6A: jne 0x1005bd4b */
L_1005BD6C:
    eax = MEM32(ebp + 0x8); /* 0x1005BD6C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1005BD6F: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(eax) = ecx; /* 0x1005BD72: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x28)); /* 0x1005BD74: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax + 0x4) = ecx; /* 0x1005BD77: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_1002B27F; /* 0x1005BD7A: jmp 0x1002b27f */
L_1005BD7F:
    eax = ebx; /* 0x1005BD7F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1005BD81: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BD86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BD86: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BD88: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BD8A: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1005BD8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1005BD8D: mov eax, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BD98; /* 0x1005BD8F: je 0x1005bd98 */
L_1005BD91:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1005BD91: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005BD9D; /* 0x1005BD96: jmp 0x1005bd9d */
L_1005BD98:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1005BD98: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BD9D:
    /* test eax, eax */ /* 0x1005BD9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE06; /* 0x1005BD9F: je 0x1005be06 */
L_1005BDA1:
    edx = ebx; /* 0x1005BDA1: mov edx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005BDA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1B00u);
    edx = edx & 0x1B00u; /* 0x1005BDA5: and edx, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1005BDAB: mov ecx, edi */
    /* cmp edx, 0x1100u */ /* 0x1005BDAD: cmp edx, 0x1100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005BDB3: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1005BDB6: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BDB8: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1005BDBA: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005BDD3; /* 0x1005BDBC: jne 0x1005bdd3 */
L_1005BDBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005BDBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1005BDC0: mov ecx, edi */
    /* cmp edx, 0x1200u */ /* 0x1005BDC2: cmp edx, 0x1200 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005BDC8: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1005BDCB: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BDCD: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1005BDCF: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE06; /* 0x1005BDD1: je 0x1005be06 */
L_1005BDD3:
    eax = ebp + (-0x2C); /* 0x1005BDD3: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BDD6: push eax */
    eax = ebp + (-0x4C); /* 0x1005BDD7: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BDDA: push eax */
    PUSH32(esp, 0x1006273Cu); /* 0x1005BDDB: push 0x1006273c */
    ecx = ebp + (-0x5C); /* 0x1005BDE0: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005BDE3: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005BDE8: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005BDEA: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1005BDEF: mov eax, dword ptr [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x48)); /* 0x1005BDF2: mov ecx, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1005BDF5: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005BDF8: mov dword ptr [ebp - 0x2c], eax */
L_1005BDFB:
    MEM32(ebp + 0xC) = ecx; /* 0x1005BDFB: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1005BDFE: mov dword ptr [ebp - 0x28], ecx */
    RECOMP_BACKEDGE();
    goto L_1002B07F; /* 0x1005BE01: jmp 0x1002b07f */
L_1005BE06:
    eax = ebp + (-0x2C); /* 0x1005BE06: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BE09: push eax */
    eax = ebp + (-0x5C); /* 0x1005BE0A: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1005BE0D: push eax */
    RECOMP_CALL(sub_1009F2E2); /* 0x1005BE0E: call 0x1009f2e2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005BE13: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005BE14: pop ecx */
    ecx = MEM32(eax); /* 0x1005BE15: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1005BE17: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1005BE1A: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1005BE1D: mov dword ptr [ebp - 0x2c], ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1005BE20: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_1002B07C; /* 0x1005BE23: jmp 0x1002b07c */
L_1005BE28:
    eax = ebx; /* 0x1005BE28: mov eax, ebx */
    edx = 0x6000u; /* 0x1005BE2A: mov edx, 0x6000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005BE2F: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x800u; /* 0x1005BE31: mov ecx, 0x800 */
    RECOMP_BACKEDGE();
    goto L_1002B14B; /* 0x1005BE36: jmp 0x1002b14b */
L_1005BE3B:
    eax = ebx; /* 0x1005BE3B: mov eax, ebx */
    /* test edi, edi */ /* 0x1005BE3D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE47; /* 0x1005BE3F: je 0x1005be47 */
L_1005BE41:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1005BE41: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1005BE43: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_1005BE49; /* 0x1005BE45: jmp 0x1005be49 */
L_1005BE47:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005BE47: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BE49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BE49: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BE4B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BE4D: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1005BE4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE60; /* 0x1005BE50: je 0x1005be60 */
L_1005BE52:
    eax = ebx; /* 0x1005BE52: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1005BE54: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x500u */ /* 0x1005BE59: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005BEB2; /* 0x1005BE5E: je 0x1005beb2 */
L_1005BE60:
    eax = ebx; /* 0x1005BE60: mov eax, ebx */
    /* test edi, edi */ /* 0x1005BE62: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE6C; /* 0x1005BE64: je 0x1005be6c */
L_1005BE66:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1005BE66: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1005BE68: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_1005BE6E; /* 0x1005BE6A: jmp 0x1005be6e */
L_1005BE6C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005BE6C: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BE6E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BE6E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BE70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BE72: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1005BE73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE85; /* 0x1005BE75: je 0x1005be85 */
L_1005BE77:
    eax = ebx; /* 0x1005BE77: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1005BE79: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x600u */ /* 0x1005BE7E: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005BEB2; /* 0x1005BE83: je 0x1005beb2 */
L_1005BE85:
    eax = ebx; /* 0x1005BE85: mov eax, ebx */
    /* test edi, edi */ /* 0x1005BE87: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005BE91; /* 0x1005BE89: je 0x1005be91 */
L_1005BE8B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1005BE8B: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1005BE8D: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_1005BE93; /* 0x1005BE8F: jmp 0x1005be93 */
L_1005BE91:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005BE91: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005BE93:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1005BE93: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BE95: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005BE97: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1005BE98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B167; /* 0x1005BE9A: je 0x1002b167 */
L_1005BEA0:
    eax = ebx; /* 0x1005BEA0: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1005BEA2: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x400u */ /* 0x1005BEA7: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002B167; /* 0x1005BEAC: jne 0x1002b167 */
L_1005BEB2:
    eax = ebp + (-0x2C); /* 0x1005BEB2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BEB5: push eax */
    eax = ebp + (-0x4C); /* 0x1005BEB6: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BEB9: push eax */
    PUSH32(esp, 0x1005C04Cu); /* 0x1005BEBA: push 0x1005c04c */
    ecx = ebp + (-0x5C); /* 0x1005BEBF: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005BEC2: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005BEC7: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005BEC9: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1005BECE: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1005BED1: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005BED4: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1005BED7: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + 0xC) = eax; /* 0x1005BEDA: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005BEDD: mov dword ptr [ebp - 0x28], eax */
    RECOMP_BACKEDGE();
    goto L_1002B167; /* 0x1005BEE0: jmp 0x1002b167 */
L_1005BEE5:
    ecx = ebx; /* 0x1005BEE5: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1005BEE7: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1005BEE9: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1005BEEB: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BEED: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005BEEF: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002B1A8; /* 0x1005BEF0: jmp 0x1002b1a8 */
L_1005BEF5:
    eax = ebp + (-0x2C); /* 0x1005BEF5: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BEF8: push eax */
    eax = ebp + (-0x4C); /* 0x1005BEF9: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BEFC: push eax */
    PUSH32(esp, 0x1005C058u); /* 0x1005BEFD: push 0x1005c058 */
    RECOMP_BACKEDGE();
    goto L_1002B223; /* 0x1005BF02: jmp 0x1002b223 */
L_1005BF07:
    ecx = ebx; /* 0x1005BF07: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1005BF09: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x1000u; /* 0x1005BF0B: sub ecx, 0x1000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1005BF11: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1005BF13: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005BF15: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002B1DA; /* 0x1005BF16: jmp 0x1002b1da */
L_1005BF1B:
    eax = ebp + (-0x2C); /* 0x1005BF1B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BF1E: push eax */
    eax = ebp + (-0x4C); /* 0x1005BF1F: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BF22: push eax */
    PUSH32(esp, 0x1005C064u); /* 0x1005BF23: push 0x1005c064 */
    RECOMP_BACKEDGE();
    goto L_1002B223; /* 0x1005BF28: jmp 0x1002b223 */
L_1005BF2D:
    /* test MEM32(0x100E0300), 0x1000u */ /* 0x1005BF2D: test dword ptr [0x100e0300], 0x1000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002B26B; /* 0x1005BF37: jne 0x1002b26b */
L_1005BF3D:
    eax = ebp + (-0x2C); /* 0x1005BF3D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BF40: push eax */
    eax = ebp + (-0x4C); /* 0x1005BF41: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BF44: push eax */
    PUSH32(esp, 0x1005C070u); /* 0x1005BF45: push 0x1005c070 */
    ecx = ebp + (-0x5C); /* 0x1005BF4A: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005BF4D: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005BF52: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005BF54: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4C)); /* 0x1005BF59: mov ecx, dword ptr [ebp - 0x4c] */
    edx = MEM32(ebp + (-0x48)); /* 0x1005BF5C: mov edx, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1005BF5F: mov dword ptr [ebp - 0x2c], ecx */
    MEM32(ebp + (-0x28)) = edx; /* 0x1005BF62: mov dword ptr [ebp - 0x28], edx */
    RECOMP_BACKEDGE();
    goto L_1002B26B; /* 0x1005BF65: jmp 0x1002b26b */
L_1005BF6A:
    eax = ebp + (-0x2C); /* 0x1005BF6A: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005BF6D: push eax */
    eax = ebp + (-0x4C); /* 0x1005BF6E: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005BF71: push eax */
    PUSH32(esp, 0x1005C07Cu); /* 0x1005BF72: push 0x1005c07c */
    ecx = ebp + (-0x5C); /* 0x1005BF77: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005BF7A: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005BF7F: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005BF81: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4C)); /* 0x1005BF86: mov ecx, dword ptr [ebp - 0x4c] */
    edx = MEM32(ebp + (-0x48)); /* 0x1005BF89: mov edx, dword ptr [ebp - 0x48] */
    RECOMP_BACKEDGE();
    goto L_1002B277; /* 0x1005BF8C: jmp 0x1002b277 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002B344(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002B344u);

    goto L_1002B344;
L_1002388C:
    eax = MEM32(ebp + 0x8); /* 0x1002388C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1002388F: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax) = ecx; /* 0x10023892: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x10023894: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(eax + 0x4) = ecx; /* 0x10023897: mov dword ptr [eax + 4], ecx */
L_1002389A:
    edi = POP32_VAL(esp); /* 0x1002389A: pop edi */
    esi = POP32_VAL(esp); /* 0x1002389B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002389C: pop ebx */
    esp = ebp; /* 0x1002389D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002389F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100238A0: ret  */
L_1002B344:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1002B3BA; /* 0x1002B344: jae 0x1002b3ba */
L_1002B346:
    POPAD(); /* 0x1002B346: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002B3B2; /* 0x1002B347: je 0x1002b3b2 */
L_1002B349:
    void_lift_trap(0x1002B349u, "arpl word ptr [eax], sp");
    _flag_a = (uint32_t)(MEM8(eax + 0x75)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x75) = (uint8_t)(MEM8(eax + 0x75) + HI8(edx)); /* 0x1002B34B: add byte ptr [eax + 0x75], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1002B34Eu, "bound ebp, qword ptr [ecx + ebp*2 + 0x63]");
    /* cmp HI8(eax), MEM8(eax) */ /* 0x1002B352: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x100E02F0)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x100E02F0) = (uint8_t)(MEM8(ecx + 0x100E02F0) + HI8(eax)); /* 0x1002B354: add byte ptr [ecx + 0x100e02f0], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(ecx, MEM8(eax)); /* 0x1002B35A: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x3Fu */ /* 0x1002B35C: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C7A6; /* 0x1002B35F: jne 0x1005c7a6 */
L_1002B365:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B365: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1002B366: mov dword ptr [0x100e02f0], eax */
    /* cmp MEM8(eax), LO8(ecx) */ /* 0x1002B36B: cmp byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C69B; /* 0x1002B36D: je 0x1005c69b */
L_1002B373:
    eax = ebp + (-0xC); /* 0x1002B373: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002B376: push eax */
    RECOMP_CALL(sub_1002B479); /* 0x1002B377: call 0x1002b479 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC)); /* 0x1002B37C: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002B37F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x8)); /* 0x1002B381: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B384: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1002B385: pop ecx */
    /* test esi, esi */ /* 0x1002B386: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B396; /* 0x1002B388: je 0x1002b396 */
L_1002B38A:
    /* test ebx, 0x200u */ /* 0x1002B38A: test ebx, 0x200 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C6C6; /* 0x1002B390: jne 0x1005c6c6 */
L_1002B396:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002B396: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002B39A:
    edi = ebx; /* 0x1002B39A: mov edi, ebx */
    if (15u) _cf = (((edi) >> 14) & 1u); /* 0x1002B39C: shr edi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edi >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 15u; /* 0x1002B39C: shr edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1002B39F: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ebx), 1 */ /* 0x1002B3A1: cmp bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005C6CE; /* 0x1002B3A4: jg 0x1005c6ce */
L_1002B3AA:
    eax = MEM32(0x100E02F0); /* 0x1002B3AA: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002B3AF: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002B3B1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1002B3B3; /* falls through past a gap */
L_1002B3B2:
    if (0u) _cf = _cf; /* 0x1002B3B2: sal byte ptr [esp + ebx*2 + 0x3c], 0x40 */
    if (0u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(esp + ebx * 2 + 0x3C) << 0u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(esp + ebx * 2 + 0x3C) = (uint8_t)(MEM8(esp + ebx * 2 + 0x3C) << 0u); /* 0x1002B3B2: sal byte ptr [esp + ebx*2 + 0x3c], 0x40 */
    goto L_1002B3B7; /* falls through past a gap */
L_1002B3B3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002B411; /* 0x1002B3B3: je 0x1002b411 */
L_1002B3B5:
    /* cmp LO8(eax), 0x40u */ /* 0x1002B3B5: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_1002B3B7:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002B411; /* 0x1002B3B7: je 0x1002b411 */
L_1002B3B9:
    eax = ebp + (-0x24); /* 0x1002B3B9: lea eax, [ebp - 0x24] */
    goto L_1002B3BC; /* falls through past a gap */
L_1002B3BA:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002B3BA: inc ebp */
    _flag_k = FK_INC;
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + (-0x18))); /* 0x1002B3BB: fcom qword ptr [eax - 0x18] */
    goto L_1002B3BE; /* falls through past a gap */
L_1002B3BC:
    PUSH32(esp, eax); /* 0x1002B3BC: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x1002B3BD: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    goto L_1002B3C2; /* falls through past a gap */
L_1002B3BE:
    { uint32_t _aa = esi, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002B3BE: adc esi, ebx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x1002B3C0u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1002B3C2:
    eax = MEM32(ebp + (-0x24)); /* 0x1002B3C2: mov eax, dword ptr [ebp - 0x24] */
    ecx = POP32_VAL(esp); /* 0x1002B3C5: pop ecx */
    /* test eax, eax */ /* 0x1002B3C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B411; /* 0x1002B3C8: je 0x1002b411 */
L_1002B3CA:
    /* cmp MEM8(0x100E0304), 0 */ /* 0x1002B3CA: cmp byte ptr [0x100e0304], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0304)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C6DB; /* 0x1002B3D1: jne 0x1005c6db */
L_1002B3D7:
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002B3D7: mov dword ptr [ebp - 0x1c], eax */
    ecx = ebp + (-0x1C); /* 0x1002B3DA: lea ecx, [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x20)); /* 0x1002B3DD: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0x1002A7CCu); /* 0x1002B3E0: push 0x1002a7cc */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002B3E5: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1002B3E8: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1002B3ED: mov eax, dword ptr [ebp - 0x1c] */
    ecx = ebp + (-0x14); /* 0x1002B3F0: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1002B3F3: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1002B3F6: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1002B3F9: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + (-0xC); /* 0x1002B3FC: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002B3FF: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1002B400: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x14)); /* 0x1002B405: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1002B408: mov ebx, dword ptr [ebp - 0x10] */
L_1002B40B:
    MEM32(ebp + (-0x8)) = ebx; /* 0x1002B40B: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1002B40E: mov dword ptr [ebp - 0xc], esi */
L_1002B411:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002B411: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1002B414: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C754; /* 0x1002B416: jne 0x1005c754 */
L_1002B41C:
    edx = 0x8000u; /* 0x1002B41C: mov edx, 0x8000 */
    /* test edi, edi */ /* 0x1002B421: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C76A; /* 0x1002B423: jne 0x1005c76a */
L_1002B429:
    /* test esi, esi */ /* 0x1002B429: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C6CE; /* 0x1002B42B: je 0x1005c6ce */
L_1002B431:
    edi = 0x1000u; /* 0x1002B431: mov edi, 0x1000 */
    /* test edi, ebx */ /* 0x1002B436: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C6CE; /* 0x1002B438: jne 0x1005c6ce */
L_1002B43E:
    eax = MEM32(0x100E02F0); /* 0x1002B43E: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002B443: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002B445: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B457; /* 0x1002B447: je 0x1002b457 */
L_1002B449:
    /* cmp LO8(eax), 0x40u */ /* 0x1002B449: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C774; /* 0x1002B44B: jne 0x1005c774 */
L_1002B451:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1002B451: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
L_1002B457:
    /* test MEM32(0x100E0300), edi */ /* 0x1002B457: test dword ptr [0x100e0300], edi */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C778; /* 0x1002B45D: jne 0x1005c778 */
L_1002B463:
    eax = ebp + (-0xC); /* 0x1002B463: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002B466: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002B467: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002AD6C); /* 0x1002B46A: call 0x1002ad6c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002B46F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002B470: pop ecx */
L_1002B471:
    eax = MEM32(ebp + 0x8); /* 0x1002B471: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002389A; /* 0x1002B474: jmp 0x1002389a */
L_1005C69B:
    /* cmp MEM8(eax + 0x1), LO8(ecx) */ /* 0x1005C69B: cmp byte ptr [eax + 1], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002B373; /* 0x1005C69E: jne 0x1002b373 */
L_1005C6A4:
    eax = ebp + (-0x24); /* 0x1005C6A4: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1005C6A7: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1005C6A8: call 0x10023854 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1005C6AD: mov eax, dword ptr [0x100e02f0] */
    ecx = POP32_VAL(esp); /* 0x1005C6B2: pop ecx */
    goto L_1005C6BB; /* 0x1005C6B3: jmp 0x1005c6bb */
L_1005C6B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005C6B5: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005C6B6: mov dword ptr [0x100e02f0], eax */
L_1005C6BB:
    /* cmp MEM8(eax), 0 */ /* 0x1005C6BB: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002388C; /* 0x1005C6BE: je 0x1002388c */
L_1005C6C4:
    RECOMP_BACKEDGE();
    goto L_1005C6B5; /* 0x1005C6C4: jmp 0x1005c6b5 */
L_1005C6C6:
    MEM32(ebp + (-0x4)) = eax; /* 0x1005C6C6: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_1002B39A; /* 0x1005C6C9: jmp 0x1002b39a */
L_1005C6CE:
    eax = MEM32(ebp + 0x8); /* 0x1005C6CE: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x1005C6D1: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x1005C6D3: mov dword ptr [eax + 4], ebx */
    RECOMP_BACKEDGE();
    goto L_1002389A; /* 0x1005C6D6: jmp 0x1002389a */
L_1005C6DB:
    eax = ebp + (-0x24); /* 0x1005C6DB: lea eax, [ebp - 0x24] */
    MEM8(0x100E0304) = (uint8_t)(0); /* 0x1005C6DE: mov byte ptr [0x100e0304], 0 */
    PUSH32(esp, eax); /* 0x1005C6E5: push eax */
    ecx = ebp + (-0x14); /* 0x1005C6E6: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1005C6E9: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1005C6EC: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_10022BFB); /* 0x1005C6EF: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1005C6F4: mov eax, dword ptr [0x100e02f0] */
    esi = MEM32(ebp + (-0x14)); /* 0x1005C6F9: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1005C6FC: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1005C6FF: mov dword ptr [ebp - 0xc], esi */
    /* cmp MEM8(eax), 0x40u */ /* 0x1005C702: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x8)) = ebx; /* 0x1005C705: mov dword ptr [ebp - 8], ebx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002B411; /* 0x1005C708: je 0x1002b411 */
L_1005C70E:
    eax = ebp + (-0x24); /* 0x1005C70E: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1005C711: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x1005C712: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = 0x1002A7CCu; /* 0x1005C717: mov dword ptr [esp], 0x1002a7cc */
    ecx = MEM32(eax); /* 0x1005C71E: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1005C720: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1005C723: mov dword ptr [ebp - 0x14], ecx */
    ecx = ebp + (-0x14); /* 0x1005C726: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1005C729: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005C72C: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1005C731: mov eax, dword ptr [ebp - 0x14] */
    ecx = ebp + (-0x1C); /* 0x1005C734: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1005C737: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1005C73A: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1005C73D: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0xC); /* 0x1005C740: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1005C743: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005C744: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x1005C749: mov esi, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1005C74C: mov ebx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_1002B40B; /* 0x1005C74F: jmp 0x1002b40b */
L_1005C754:
    /* test esi, esi */ /* 0x1005C754: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B41C; /* 0x1005C756: je 0x1002b41c */
L_1005C75C:
    _flag_a = (uint32_t)((ebx | 0x200u)); _flag_b = (uint32_t)((ebx | 0x200u));
    ebx = ebx | 0x200u; /* 0x1005C75C: or ebx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1005C762: mov dword ptr [ebp - 8], ebx */
    RECOMP_BACKEDGE();
    goto L_1002B41C; /* 0x1005C765: jmp 0x1002b41c */
L_1005C76A:
    _flag_a = (uint32_t)((ebx | edx)); _flag_b = (uint32_t)((ebx | edx));
    ebx = ebx | edx; /* 0x1005C76A: or ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1005C76C: mov dword ptr [ebp - 8], ebx */
    RECOMP_BACKEDGE();
    goto L_1002B429; /* 0x1005C76F: jmp 0x1002b429 */
L_1005C774:
    PUSH32(esp, 2); /* 0x1005C774: push 2 */
    goto L_1005C7AC; /* 0x1005C776: jmp 0x1005c7ac */
L_1005C778:
    /* test ecx, ecx */ /* 0x1005C778: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002B463; /* 0x1005C77A: jne 0x1002b463 */
L_1005C780:
    /* test edx, ebx */ /* 0x1005C780: test edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002B463; /* 0x1005C782: jne 0x1002b463 */
L_1005C788:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & ecx; /* 0x1005C788: and dword ptr [ebp - 0x24], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x24); /* 0x1005C78B: lea eax, [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0xFFFF0000u; /* 0x1005C78E: and dword ptr [ebp - 0x20], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005C795: push eax */
    eax = ebp + (-0x1C); /* 0x1005C796: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1005C799: push eax */
    RECOMP_CALL(sub_1002AD6C); /* 0x1005C79A: call 0x1002ad6c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C79F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005C7A0: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1005C6CE; /* 0x1005C7A1: jmp 0x1005c6ce */
L_1005C7A6:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005C7A6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C774; /* 0x1005C7A8: jne 0x1005c774 */
L_1005C7AA:
    PUSH32(esp, 1); /* 0x1005C7AA: push 1 */
L_1005C7AC:
    ecx = MEM32(ebp + 0x8); /* 0x1005C7AC: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C7AF: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002B471; /* 0x1005C7B4: jmp 0x1002b471 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002B34C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002B34Cu);

    goto L_1002B34C;
L_1002388C:
    eax = MEM32(ebp + 0x8); /* 0x1002388C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1002388F: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax) = ecx; /* 0x10023892: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x10023894: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(eax + 0x4) = ecx; /* 0x10023897: mov dword ptr [eax + 4], ecx */
L_1002389A:
    edi = POP32_VAL(esp); /* 0x1002389A: pop edi */
    esi = POP32_VAL(esp); /* 0x1002389B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002389C: pop ebx */
    esp = ebp; /* 0x1002389D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002389F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100238A0: ret  */
L_1002B34C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_1002B3C3; /* 0x1002B34C: jo 0x1002b3c3 */
L_1002B34E:
    void_lift_trap(0x1002B34Eu, "bound ebp, qword ptr [ecx + ebp*2 + 0x63]");
    /* cmp HI8(eax), MEM8(eax) */ /* 0x1002B352: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x100E02F0)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x100E02F0) = (uint8_t)(MEM8(ecx + 0x100E02F0) + HI8(eax)); /* 0x1002B354: add byte ptr [ecx + 0x100e02f0], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(ecx, MEM8(eax)); /* 0x1002B35A: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x3Fu */ /* 0x1002B35C: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C7A6; /* 0x1002B35F: jne 0x1005c7a6 */
L_1002B365:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B365: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1002B366: mov dword ptr [0x100e02f0], eax */
    /* cmp MEM8(eax), LO8(ecx) */ /* 0x1002B36B: cmp byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C69B; /* 0x1002B36D: je 0x1005c69b */
L_1002B373:
    eax = ebp + (-0xC); /* 0x1002B373: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002B376: push eax */
    RECOMP_CALL(sub_1002B479); /* 0x1002B377: call 0x1002b479 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC)); /* 0x1002B37C: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002B37F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x8)); /* 0x1002B381: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B384: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1002B385: pop ecx */
    /* test esi, esi */ /* 0x1002B386: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B396; /* 0x1002B388: je 0x1002b396 */
L_1002B38A:
    /* test ebx, 0x200u */ /* 0x1002B38A: test ebx, 0x200 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C6C6; /* 0x1002B390: jne 0x1005c6c6 */
L_1002B396:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002B396: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002B39A:
    edi = ebx; /* 0x1002B39A: mov edi, ebx */
    if (15u) _cf = (((edi) >> 14) & 1u); /* 0x1002B39C: shr edi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edi >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 15u; /* 0x1002B39C: shr edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1002B39F: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ebx), 1 */ /* 0x1002B3A1: cmp bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005C6CE; /* 0x1002B3A4: jg 0x1005c6ce */
L_1002B3AA:
    eax = MEM32(0x100E02F0); /* 0x1002B3AA: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002B3AF: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002B3B1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B411; /* 0x1002B3B3: je 0x1002b411 */
L_1002B3B5:
    /* cmp LO8(eax), 0x40u */ /* 0x1002B3B5: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002B411; /* 0x1002B3B7: je 0x1002b411 */
L_1002B3B9:
    eax = ebp + (-0x24); /* 0x1002B3B9: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1002B3BC: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x1002B3BD: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1002B3C2: mov eax, dword ptr [ebp - 0x24] */
    goto L_1002B3C5; /* falls through past a gap */
L_1002B3C3:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1002B3C3: inc ebp */
    _flag_k = FK_INC;
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + (-0x7B))); /* 0x1002B3C4: fcomp qword ptr [ecx - 0x7b] */
    fp_pop();
    goto L_1002B3C7; /* falls through past a gap */
L_1002B3C5:
    ecx = POP32_VAL(esp); /* 0x1002B3C5: pop ecx */
    /* test eax, eax */ /* 0x1002B3C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1002B3C8; /* falls through past a gap */
L_1002B3C7:
    if (29u) _cf = 0u; /* 0x1002B3C7: sal byte ptr [edi + eax*2 - 0x80], 0x3d */
    if (29u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(edi + eax * 2 + (-0x80)) << 29u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edi + eax * 2 + (-0x80)) = (uint8_t)(MEM8(edi + eax * 2 + (-0x80)) << 29u); /* 0x1002B3C7: sal byte ptr [edi + eax*2 - 0x80], 0x3d */
    goto L_1002B3CC; /* falls through past a gap */
L_1002B3C8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002B411; /* 0x1002B3C8: je 0x1002b411 */
L_1002B3CA:
    /* cmp MEM8(0x100E0304), 0 */ /* 0x1002B3CA: cmp byte ptr [0x100e0304], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0304)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_1002B3D1; /* falls through past a gap */
L_1002B3CC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 3); /* 0x1002B3CC: add al, 3 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_cs); /* 0x1002B3CE: push cs */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002B3CF: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1002B3D1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1005C6DB; /* 0x1002B3D1: jne 0x1005c6db */
L_1002B3D7:
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002B3D7: mov dword ptr [ebp - 0x1c], eax */
    ecx = ebp + (-0x1C); /* 0x1002B3DA: lea ecx, [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x20)); /* 0x1002B3DD: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0x1002A7CCu); /* 0x1002B3E0: push 0x1002a7cc */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002B3E5: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1002B3E8: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1002B3ED: mov eax, dword ptr [ebp - 0x1c] */
    ecx = ebp + (-0x14); /* 0x1002B3F0: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1002B3F3: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1002B3F6: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1002B3F9: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + (-0xC); /* 0x1002B3FC: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002B3FF: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1002B400: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x14)); /* 0x1002B405: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1002B408: mov ebx, dword ptr [ebp - 0x10] */
L_1002B40B:
    MEM32(ebp + (-0x8)) = ebx; /* 0x1002B40B: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1002B40E: mov dword ptr [ebp - 0xc], esi */
L_1002B411:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002B411: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1002B414: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C754; /* 0x1002B416: jne 0x1005c754 */
L_1002B41C:
    edx = 0x8000u; /* 0x1002B41C: mov edx, 0x8000 */
    /* test edi, edi */ /* 0x1002B421: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C76A; /* 0x1002B423: jne 0x1005c76a */
L_1002B429:
    /* test esi, esi */ /* 0x1002B429: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C6CE; /* 0x1002B42B: je 0x1005c6ce */
L_1002B431:
    edi = 0x1000u; /* 0x1002B431: mov edi, 0x1000 */
    /* test edi, ebx */ /* 0x1002B436: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C6CE; /* 0x1002B438: jne 0x1005c6ce */
L_1002B43E:
    eax = MEM32(0x100E02F0); /* 0x1002B43E: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1002B443: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002B445: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B457; /* 0x1002B447: je 0x1002b457 */
L_1002B449:
    /* cmp LO8(eax), 0x40u */ /* 0x1002B449: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C774; /* 0x1002B44B: jne 0x1005c774 */
L_1002B451:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1002B451: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
L_1002B457:
    /* test MEM32(0x100E0300), edi */ /* 0x1002B457: test dword ptr [0x100e0300], edi */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C778; /* 0x1002B45D: jne 0x1005c778 */
L_1002B463:
    eax = ebp + (-0xC); /* 0x1002B463: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002B466: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002B467: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002AD6C); /* 0x1002B46A: call 0x1002ad6c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002B46F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002B470: pop ecx */
L_1002B471:
    eax = MEM32(ebp + 0x8); /* 0x1002B471: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002389A; /* 0x1002B474: jmp 0x1002389a */
L_1005C69B:
    /* cmp MEM8(eax + 0x1), LO8(ecx) */ /* 0x1005C69B: cmp byte ptr [eax + 1], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002B373; /* 0x1005C69E: jne 0x1002b373 */
L_1005C6A4:
    eax = ebp + (-0x24); /* 0x1005C6A4: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1005C6A7: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1005C6A8: call 0x10023854 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1005C6AD: mov eax, dword ptr [0x100e02f0] */
    ecx = POP32_VAL(esp); /* 0x1005C6B2: pop ecx */
    goto L_1005C6BB; /* 0x1005C6B3: jmp 0x1005c6bb */
L_1005C6B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005C6B5: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005C6B6: mov dword ptr [0x100e02f0], eax */
L_1005C6BB:
    /* cmp MEM8(eax), 0 */ /* 0x1005C6BB: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002388C; /* 0x1005C6BE: je 0x1002388c */
L_1005C6C4:
    RECOMP_BACKEDGE();
    goto L_1005C6B5; /* 0x1005C6C4: jmp 0x1005c6b5 */
L_1005C6C6:
    MEM32(ebp + (-0x4)) = eax; /* 0x1005C6C6: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_1002B39A; /* 0x1005C6C9: jmp 0x1002b39a */
L_1005C6CE:
    eax = MEM32(ebp + 0x8); /* 0x1005C6CE: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x1005C6D1: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x1005C6D3: mov dword ptr [eax + 4], ebx */
    RECOMP_BACKEDGE();
    goto L_1002389A; /* 0x1005C6D6: jmp 0x1002389a */
L_1005C6DB:
    eax = ebp + (-0x24); /* 0x1005C6DB: lea eax, [ebp - 0x24] */
    MEM8(0x100E0304) = (uint8_t)(0); /* 0x1005C6DE: mov byte ptr [0x100e0304], 0 */
    PUSH32(esp, eax); /* 0x1005C6E5: push eax */
    ecx = ebp + (-0x14); /* 0x1005C6E6: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1005C6E9: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1005C6EC: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_10022BFB); /* 0x1005C6EF: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1005C6F4: mov eax, dword ptr [0x100e02f0] */
    esi = MEM32(ebp + (-0x14)); /* 0x1005C6F9: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1005C6FC: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1005C6FF: mov dword ptr [ebp - 0xc], esi */
    /* cmp MEM8(eax), 0x40u */ /* 0x1005C702: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x8)) = ebx; /* 0x1005C705: mov dword ptr [ebp - 8], ebx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002B411; /* 0x1005C708: je 0x1002b411 */
L_1005C70E:
    eax = ebp + (-0x24); /* 0x1005C70E: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1005C711: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x1005C712: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = 0x1002A7CCu; /* 0x1005C717: mov dword ptr [esp], 0x1002a7cc */
    ecx = MEM32(eax); /* 0x1005C71E: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1005C720: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1005C723: mov dword ptr [ebp - 0x14], ecx */
    ecx = ebp + (-0x14); /* 0x1005C726: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1005C729: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005C72C: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1005C731: mov eax, dword ptr [ebp - 0x14] */
    ecx = ebp + (-0x1C); /* 0x1005C734: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1005C737: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1005C73A: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1005C73D: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0xC); /* 0x1005C740: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1005C743: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005C744: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x1005C749: mov esi, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1005C74C: mov ebx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_1002B40B; /* 0x1005C74F: jmp 0x1002b40b */
L_1005C754:
    /* test esi, esi */ /* 0x1005C754: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B41C; /* 0x1005C756: je 0x1002b41c */
L_1005C75C:
    _flag_a = (uint32_t)((ebx | 0x200u)); _flag_b = (uint32_t)((ebx | 0x200u));
    ebx = ebx | 0x200u; /* 0x1005C75C: or ebx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1005C762: mov dword ptr [ebp - 8], ebx */
    RECOMP_BACKEDGE();
    goto L_1002B41C; /* 0x1005C765: jmp 0x1002b41c */
L_1005C76A:
    _flag_a = (uint32_t)((ebx | edx)); _flag_b = (uint32_t)((ebx | edx));
    ebx = ebx | edx; /* 0x1005C76A: or ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1005C76C: mov dword ptr [ebp - 8], ebx */
    RECOMP_BACKEDGE();
    goto L_1002B429; /* 0x1005C76F: jmp 0x1002b429 */
L_1005C774:
    PUSH32(esp, 2); /* 0x1005C774: push 2 */
    goto L_1005C7AC; /* 0x1005C776: jmp 0x1005c7ac */
L_1005C778:
    /* test ecx, ecx */ /* 0x1005C778: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002B463; /* 0x1005C77A: jne 0x1002b463 */
L_1005C780:
    /* test edx, ebx */ /* 0x1005C780: test edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002B463; /* 0x1005C782: jne 0x1002b463 */
L_1005C788:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & ecx; /* 0x1005C788: and dword ptr [ebp - 0x24], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x24); /* 0x1005C78B: lea eax, [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0xFFFF0000u; /* 0x1005C78E: and dword ptr [ebp - 0x20], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005C795: push eax */
    eax = ebp + (-0x1C); /* 0x1005C796: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1005C799: push eax */
    RECOMP_CALL(sub_1002AD6C); /* 0x1005C79A: call 0x1002ad6c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C79F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005C7A0: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1005C6CE; /* 0x1005C7A1: jmp 0x1005c6ce */
L_1005C7A6:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005C7A6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C774; /* 0x1005C7A8: jne 0x1005c774 */
L_1005C7AA:
    PUSH32(esp, 1); /* 0x1005C7AA: push 1 */
L_1005C7AC:
    ecx = MEM32(ebp + 0x8); /* 0x1005C7AC: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C7AF: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002B471; /* 0x1005C7B4: jmp 0x1002b471 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002B479(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002B479u);

L_1002B479:
    PUSH32(esp, ebp); /* 0x1002B479: push ebp */
    ebp = esp; /* 0x1002B47A: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x1002B47C: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x1002B481: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CFEB; /* 0x1002B484: je 0x1005cfeb */
L_1002B48A:
    PUSH32(esp, 0); /* 0x1002B48A: push 0 */
    PUSH32(esp, 1); /* 0x1002B48C: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002B48E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10022FC3); /* 0x1002B491: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
L_1002B496:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002B496: add esp, 0xc */
    _flag_k = FK_ADD;
L_1002B499:
    eax = MEM32(ebp + 0x8); /* 0x1002B499: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1002B49C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002B49D: ret  */
L_1005CFEB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005CFEB: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), 0x24u */ /* 0x1005CFEC: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D002; /* 0x1005CFEF: jne 0x1005d002 */
L_1005CFF1:
    PUSH32(esp, 1); /* 0x1005CFF1: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005CFF3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100301E3); /* 0x1005CFF6: call 0x100301e3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005CFFB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005CFFC: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002B499; /* 0x1005CFFD: jmp 0x1002b499 */
L_1005D002:
    PUSH32(esp, 0); /* 0x1005D002: push 0 */
    PUSH32(esp, 0); /* 0x1005D004: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005D006: push dword ptr [ebp + 8] */
    MEM32(0x100E02F0) = eax; /* 0x1005D009: mov dword ptr [0x100e02f0], eax */
    RECOMP_CALL(sub_1009F7D3); /* 0x1005D00E: call 0x1009f7d3 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002B496; /* 0x1005D013: jmp 0x1002b496 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002B49E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002B49Eu);

L_1002B49E:
    PUSH32(esp, ebp); /* 0x1002B49E: push ebp */
    ebp = esp; /* 0x1002B49F: mov ebp, esp */
    eax = MEM32(0x100E0300); /* 0x1002B4A1: mov eax, dword ptr [0x100e0300] */
    eax = ~eax; /* 0x1002B4A6: not eax */
    /* test LO8(eax), 1 */ /* 0x1002B4A8: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x8); /* 0x1002B4AA: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax * 4 + 0x1002B4C0); /* 0x1002B4AD: mov eax, dword ptr [eax*4 + 0x1002b4c0] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B6E4; /* 0x1002B4B4: je 0x1005b6e4 */
L_1002B4BA:
    ebp = POP32_VAL(esp); /* 0x1002B4BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002B4BB: ret  */
L_1005B6E4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1005B6E4: add eax, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002B4BA; /* 0x1005B6E7: jmp 0x1002b4ba */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002B4F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002B4F8u);

L_1002B4F8:
    PUSH32(esp, ebp); /* 0x1002B4F8: push ebp */
    ebp = esp; /* 0x1002B4F9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002B4FB: push ecx */
    PUSH32(esp, ecx); /* 0x1002B4FC: push ecx */
    eax = MEM32(0x100E02F0); /* 0x1002B4FD: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1002B502: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1002B504: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C1BA; /* 0x1002B506: je 0x1005c1ba */
L_1002B50C:
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x1002B50C: movsx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x41u; /* 0x1002B50F: sub ecx, 0x41 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B512: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1002B513: mov dword ptr [0x100e02f0], eax */
    PUSH32(esp, 2); /* 0x1002B518: push 2 */
    /* cmp ecx, 0x10u */ /* 0x1002B51A: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005C1BC; /* 0x1002B51D: ja 0x1005c1bc */
L_1002B523:
    eax = MEM32(ebp + (-0x4)); /* 0x1002B523: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1002B526: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0002u);
    eax = eax & 0xFFFF0002u; /* 0x1002B52A: and eax, 0xffff0002 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = POP32_VAL(esp); /* 0x1002B52F: pop edx */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1002B530: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002B532: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x100E0300); /* 0x1002B535: mov eax, dword ptr [0x100e0300] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1002B53A: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1002B53A: shr eax, 1 */
    eax = ~eax; /* 0x1002B53C: not eax */
    /* test LO8(eax), 1 */ /* 0x1002B53E: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B56A; /* 0x1002B540: je 0x1002b56a */
L_1002B542:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x1002B542: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 8 */ /* 0x1002B545: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005C194; /* 0x1002B548: ja 0x1005c194 */
L_1002B54E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002B57C; /* 0x1002B54E: je 0x1002b57c */
L_1002B550:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x1002B550: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005C170; /* 0x1002B553: jne 0x1005c170 */
L_1002B559:
    PUSH32(esp, 1); /* 0x1002B559: push 1 */
L_1002B55B:
    RECOMP_CALL(sub_1002B49E); /* 0x1002B55B: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002B560: pop ecx */
    PUSH32(esp, eax); /* 0x1002B561: push eax */
    ecx = ebp + (-0x8); /* 0x1002B562: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002B565: call 0x10022c2c */
    RECOMP_FLAGS_IN();
L_1002B56A:
    eax = MEM32(ebp + 0x8); /* 0x1002B56A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1002B56D: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x1002B570: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1002B572: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1002B575: mov dword ptr [eax + 4], ecx */
L_1002B578:
    esp = ebp; /* 0x1002B578: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002B57A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002B57B: ret  */
L_1002B57C:
    PUSH32(esp, 5); /* 0x1002B57C: push 5 */
    RECOMP_BACKEDGE();
    goto L_1002B55B; /* 0x1002B57E: jmp 0x1002b55b */
L_1005C170:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1005C170: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C18E; /* 0x1005C172: je 0x1005c18e */
L_1005C174:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1005C174: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C187; /* 0x1005C176: je 0x1005c187 */
L_1005C178:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1005C178: sub ecx, edx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002B56A; /* 0x1005C17A: jne 0x1002b56a */
L_1005C180:
    PUSH32(esp, 3); /* 0x1005C180: push 3 */
    RECOMP_BACKEDGE();
    goto L_1002B55B; /* 0x1005C182: jmp 0x1002b55b */
L_1005C187:
    PUSH32(esp, 4); /* 0x1005C187: push 4 */
    RECOMP_BACKEDGE();
    goto L_1002B55B; /* 0x1005C189: jmp 0x1002b55b */
L_1005C18E:
    PUSH32(esp, edx); /* 0x1005C18E: push edx */
    RECOMP_BACKEDGE();
    goto L_1002B55B; /* 0x1005C18F: jmp 0x1002b55b */
L_1005C194:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xCu; /* 0x1005C194: sub ecx, 0xc */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C1B3; /* 0x1005C197: je 0x1005c1b3 */
L_1005C199:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1005C199: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C1AC; /* 0x1005C19B: je 0x1005c1ac */
L_1005C19D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1005C19D: sub ecx, edx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002B56A; /* 0x1005C19F: jne 0x1002b56a */
L_1005C1A5:
    PUSH32(esp, 6); /* 0x1005C1A5: push 6 */
    RECOMP_BACKEDGE();
    goto L_1002B55B; /* 0x1005C1A7: jmp 0x1002b55b */
L_1005C1AC:
    PUSH32(esp, 8); /* 0x1005C1AC: push 8 */
    RECOMP_BACKEDGE();
    goto L_1002B55B; /* 0x1005C1AE: jmp 0x1002b55b */
L_1005C1B3:
    PUSH32(esp, 7); /* 0x1005C1B3: push 7 */
    RECOMP_BACKEDGE();
    goto L_1002B55B; /* 0x1005C1B5: jmp 0x1002b55b */
L_1005C1BA:
    PUSH32(esp, 1); /* 0x1005C1BA: push 1 */
L_1005C1BC:
    ecx = MEM32(ebp + 0x8); /* 0x1005C1BC: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C1BF: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005C1C4: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002B578; /* 0x1005C1C7: jmp 0x1002b578 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002B580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002B580u);

L_1002B580:
    PUSH32(esp, ebp); /* 0x1002B580: push ebp */
    ebp = esp; /* 0x1002B581: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1002B583: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = 0x1002B5B0u; /* 0x1002B586: mov dword ptr [ecx], 0x1002b5b0 */
    /* test eax, eax */ /* 0x1002B58C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B59D; /* 0x1002B58E: je 0x1002b59d */
L_1002B590:
    SET_LO8(edx, MEM8(eax + 0x4)); /* 0x1002B590: mov dl, byte ptr [eax + 4] */
    /* cmp LO8(edx), 2 */ /* 0x1002B593: cmp dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002B5A6; /* 0x1002B596: je 0x1002b5a6 */
L_1002B598:
    /* cmp LO8(edx), 3 */ /* 0x1002B598: cmp dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002B5A6; /* 0x1002B59B: je 0x1002b5a6 */
L_1002B59D:
    MEM32(ecx + 0x4) = eax; /* 0x1002B59D: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x1002B5A0: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1002B5A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1002B5A3: ret 4 */
L_1002B5A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002B5A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B59D; /* 0x1002B5A8: jmp 0x1002b59d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002B5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002B5B0u);

    goto L_1002B5B0;
L_100237D0:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x100237D0: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x100237D7: mov eax, esi */
    MEM32(esi) = ebx; /* 0x100237D9: mov dword ptr [esi], ebx */
    esi = POP32_VAL(esp); /* 0x100237DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x100237DC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100237DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100237DE: ret 4 */
L_1002B5B0:
    _flag_a = (uint32_t)((HI8(ecx) ^ MEM8(ebx + (-0x8A2EFFE)))) << 24; _flag_b = (uint32_t)((HI8(ecx) ^ MEM8(ebx + (-0x8A2EFFE)))) << 24;
    SET_HI8(ecx, HI8(ecx) ^ MEM8(ebx + (-0x8A2EFFE))); /* 0x1002B5B0: xor ch, byte ptr [ebx - 0x8a2effe] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM32(eax) | edx)); _flag_b = (uint32_t)((MEM32(eax) | edx));
    MEM32(eax) = MEM32(eax) | edx; /* 0x1002B5B6: or dword ptr [eax], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002B5B8: inc esi */
    _flag_k = FK_INC;
    MEM32(edi) = eax; edi += _df * 4; /* 0x1002B5B9: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002B5BA: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebx); /* 0x1002B5BC: push ebx */
    PUSH32(esp, 8); /* 0x1002B5BD: push 8 */
    ecx = 0x100E030Cu; /* 0x1002B5BF: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x1002B5C4: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002B5C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B5D9; /* 0x1002B5CB: je 0x1002b5d9 */
L_1002B5CD:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002B5CD: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1002B5D0: mov ecx, eax */
    RECOMP_CALL(sub_1002B580); /* 0x1002B5D2: call 0x1002b580 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1002B5D7: mov ebx, eax */
L_1002B5D9:
    /* test ebx, ebx */ /* 0x1002B5D9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002B5DB: setne al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x1002B5DE: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x1002B5E0: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1002B5E2: mov byte ptr [esi + 4], al */
    RECOMP_BACKEDGE();
    goto L_100237D0; /* 0x1002B5E5: jmp 0x100237d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002B6B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002B6B8u);

L_1002B6B8:
    PUSH32(esp, ebp); /* 0x1002B6B8: push ebp */
    ebp = esp; /* 0x1002B6B9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002B6BB: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1002B6BC: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1002B6BF: push edi */
    eax = MEM32(esi); /* 0x1002B6C0: mov eax, dword ptr [esi] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1002B6C2: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005A9FE; /* 0x1002B6C5: je 0x1005a9fe */
L_1002B6CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002B6CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002B6CD: inc eax */
    _flag_k = FK_INC;
L_1002B6CE:
    edi = POP32_VAL(esp); /* 0x1002B6CE: pop edi */
    esi = POP32_VAL(esp); /* 0x1002B6CF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002B6D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002B6D1: ret  */
L_1005A9FE:
    edi = MEM32(ebp + 0x10); /* 0x1005A9FE: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 4); /* 0x1005AA01: push 4 */
    PUSH32(esp, eax); /* 0x1005AA03: push eax */
    ecx = MEM32(edi); /* 0x1005AA04: mov ecx, dword ptr [edi] */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x1005AA06: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AA3C; /* 0x1005AA09: jne 0x1005aa3c */
L_1005AA0B:
    RECOMP_CALL(sub_10011208); /* 0x1005AA0B: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x1005AA10: mov dword ptr [edi], eax */
    ecx = POP32_VAL(esp); /* 0x1005AA12: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005AA13: pop ecx */
    /* test eax, eax */ /* 0x1005AA14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005AA1F; /* 0x1005AA16: jne 0x1005aa1f */
L_1005AA18:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005AA18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002B6CE; /* 0x1005AA1A: jmp 0x1002b6ce */
L_1005AA1F:
    eax = MEM32(ebp + 0x18); /* 0x1005AA1F: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = 1; /* 0x1005AA22: mov dword ptr [eax], 1 */
    eax = MEM32(esi); /* 0x1005AA28: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1005AA2A: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1005AA2C: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005AA2D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(edi)); /* 0x1005AA30: push dword ptr [edi] */
    RECOMP_CALL(sub_1000F594); /* 0x1005AA32: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005AA37: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1005AA4B; /* 0x1005AA3A: jmp 0x1005aa4b */
L_1005AA3C:
    PUSH32(esp, ecx); /* 0x1005AA3C: push ecx */
    RECOMP_CALL(sub_100A02C4); /* 0x1005AA3D: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005AA42: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1005AA45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AA18; /* 0x1005AA47: je 0x1005aa18 */
L_1005AA49:
    MEM32(edi) = eax; /* 0x1005AA49: mov dword ptr [edi], eax */
L_1005AA4B:
    if (1u) _cf = (((MEM32(esi)) >> 31) & 1u); /* 0x1005AA4B: shl dword ptr [esi], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(esi) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(esi) = MEM32(esi) << 1u; /* 0x1005AA4B: shl dword ptr [esi], 1 */
    RECOMP_BACKEDGE();
    goto L_1002B6CB; /* 0x1005AA4D: jmp 0x1002b6cb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002BA78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BA78u);

L_1002BA78:
    PUSH32(esp, ebp); /* 0x1002BA78: push ebp */
    ebp = esp; /* 0x1002BA79: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1002BA7B: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1002BA7E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1002BA83: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002BA85: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1002BA88: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1002BA8B: push ebx */
    PUSH32(esp, esi); /* 0x1002BA8C: push esi */
    PUSH32(esp, edi); /* 0x1002BA8D: push edi */
    eax = (uint32_t)MEM16(ecx + 0xA); /* 0x1002BA8E: movzx eax, word ptr [ecx + 0xa] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002BA92: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x1002BA94: mov edi, dword ptr [ebp + 0xc] */
    edx = eax; /* 0x1002BA97: mov edx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1002BA99: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = edi; /* 0x1002BA9E: mov dword ptr [ebp - 0x40], edi */
    MEM32(ebp + (-0x44)) = eax; /* 0x1002BAA1: mov dword ptr [ebp - 0x44], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFu);
    edx = edx & 0x7FFFu; /* 0x1002BAA4: and edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x6); /* 0x1002BAAA: mov eax, dword ptr [ecx + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3FFFu; /* 0x1002BAAD: sub edx, 0x3fff */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x1002BAB3: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ecx + 0x2); /* 0x1002BAB6: mov eax, dword ptr [ecx + 2] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1002BAB9: mov dword ptr [ebp - 0xc], eax */
    eax = (uint32_t)MEM16(ecx); /* 0x1002BABC: movzx eax, word ptr [ecx] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x1002BABF: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x1002BABF: shl eax, 0x10 */
    MEM32(ebp + (-0x20)) = edx; /* 0x1002BAC2: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1002BAC5: mov dword ptr [ebp - 8], eax */
    /* cmp edx, 0xFFFFC001u */ /* 0x1002BAC8: cmp edx, 0xffffc001 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFC001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060B47; /* 0x1002BACE: je 0x10060b47 */
L_1002BAD4:
    eax = MEM32(0x100E0640); /* 0x1002BAD4: mov eax, dword ptr [0x100e0640] */
    esi = ebp + (-0x10); /* 0x1002BAD9: lea esi, [ebp - 0x10] */
    edi = ebp + (-0x1C); /* 0x1002BADC: lea edi, [ebp - 0x1c] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1002BADF: mov dword ptr [ebp - 0x24], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002BAE2: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002BAE3: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x34)) = eax; /* 0x1002BAE4: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, 0x1Fu); /* 0x1002BAE7: push 0x1f */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1002BAE9: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002BAEC: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax + 0x1; /* 0x1002BAED: lea ecx, [eax + 1] */
    eax = ecx; /* 0x1002BAF0: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002BAF2: cdq  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002BAF3: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1002BAF4: pop esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1002BAF5: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1002BAF7: add edx, eax */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1002BAF9: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    MEM32(ebp + (-0x3C)) = edx; /* 0x1002BAFC: mov dword ptr [ebp - 0x3c], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x1002BAFF: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10060B6D; /* 0x1002BB05: js 0x10060b6d */
L_1002BB0B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002BB0B: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002BB0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002BB0F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = esi; /* 0x1002BB10: mov dword ptr [ebp - 0x30], esi */
    ecx = esi; /* 0x1002BB13: mov ecx, esi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1002BB15: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002BB18: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1002BB18: shl eax, cl */
    PUSH32(esp, 3); /* 0x1002BB1A: push 3 */
    esi = POP32_VAL(esp); /* 0x1002BB1C: pop esi */
    /* test MEM32(ebp + edx * 4 + (-0x10)), eax */ /* 0x1002BB1D: test dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002BB92; /* 0x1002BB21: je 0x1002bb92 */
L_1002BB23:
    eax = edi; /* 0x1002BB23: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002BB25: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1002BB25: shl eax, cl */
    eax = ~eax; /* 0x1002BB27: not eax */
    /* test MEM32(ebp + edx * 4 + (-0x10)), eax */ /* 0x1002BB29: test dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_1002BB2D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10060B80; /* 0x1002BB2D: je 0x10060b80 */
L_1002BB33:
    eax = MEM32(ebp + (-0x34)); /* 0x1002BB33: mov eax, dword ptr [ebp - 0x34] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002BB36: cdq  */
    PUSH32(esp, 0x1Fu); /* 0x1002BB37: push 0x1f */
    ecx = POP32_VAL(esp); /* 0x1002BB39: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1002BB3A: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1002BB3C: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x34)); /* 0x1002BB3E: mov eax, dword ptr [ebp - 0x34] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1002BB41: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000001Fu);
    eax = eax & 0x8000001Fu; /* 0x1002BB44: and eax, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10060B8B; /* 0x1002BB49: js 0x10060b8b */
L_1002BB4F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1002BB4F: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1002BB51: mov dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002BB54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002BB56: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002BB57: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1002BB57: shl eax, cl */
    MEM32(ebp + (-0x38)) = eax; /* 0x1002BB59: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + edx * 4 + (-0x10)); /* 0x1002BB5C: mov eax, dword ptr [ebp + edx*4 - 0x10] */
    ecx = MEM32(ebp + (-0x38)); /* 0x1002BB60: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1002BB63: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1002BB65: mov dword ptr [ebp - 0x28], ecx */
    /* cmp ecx, eax */ /* 0x1002BB68: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1002BB6A: mov eax, dword ptr [ebp - 0x28] */
    ecx = ebx; /* 0x1002BB6D: mov ecx, ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1002BB6F: push -1 */
    edi = POP32_VAL(esp); /* 0x1002BB71: pop edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_1002BCBF; /* 0x1002BB72: jb 0x1002bcbf */
L_1002BB78:
    /* cmp eax, MEM32(ebp + (-0x38)) */ /* 0x1002BB78: cmp eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1002BCBF; /* 0x1002BB7B: jb 0x1002bcbf */
L_1002BB81:
    MEM32(ebp + edx * 4 + (-0x10)) = eax; /* 0x1002BB81: mov dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1002BB85: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10060B95; /* 0x1002BB86: jns 0x10060b95 */
L_1002BB8C:
    ecx = MEM32(ebp + (-0x30)); /* 0x1002BB8C: mov ecx, dword ptr [ebp - 0x30] */
L_1002BB8F:
    edx = MEM32(ebp + (-0x3C)); /* 0x1002BB8F: mov edx, dword ptr [ebp - 0x3c] */
L_1002BB92:
    eax = edi; /* 0x1002BB92: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002BB94: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1002BB94: shl eax, cl */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + edx * 4 + (-0x10)) = MEM32(ebp + edx * 4 + (-0x10)) & eax; /* 0x1002BB96: and dword ptr [ebp + edx*4 - 0x10], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + 0x1; /* 0x1002BB9A: lea eax, [edx + 1] */
    /* cmp eax, esi */ /* 0x1002BB9D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002BBB2; /* 0x1002BB9F: jge 0x1002bbb2 */
L_1002BBA1:
    edi = ebp + (-0x10); /* 0x1002BBA1: lea edi, [ebp - 0x10] */
    ecx = esi; /* 0x1002BBA4: mov ecx, esi */
    edi = edi + eax * 4; /* 0x1002BBA6: lea edi, [edi + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1002BBA9: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002BBAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1002BBAD: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1002BBAF: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002BBB2:
    ecx = MEM32(ebp + (-0x20)); /* 0x1002BBB2: mov ecx, dword ptr [ebp - 0x20] */
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x1002BBB5: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060BC8; /* 0x1002BBB8: jne 0x10060bc8 */
L_1002BBBE:
    edx = MEM32(0x100E063C); /* 0x1002BBBE: mov edx, dword ptr [0x100e063c] */
    eax = edx; /* 0x1002BBC4: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E0640));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(0x100E0640); /* 0x1002BBC6: sub eax, dword ptr [0x100e0640] */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x1002BBCC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10060BCE; /* 0x1002BBCE: jl 0x10060bce */
L_1002BBD4:
    /* cmp ecx, edx */ /* 0x1002BBD4: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10060BDA; /* 0x1002BBD6: jle 0x10060bda */
L_1002BBDC:
    /* cmp ecx, MEM32(0x100E0638) */ /* 0x1002BBDC: cmp ecx, dword ptr [0x100e0638] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100E0638));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10060DF4; /* 0x1002BBE2: jge 0x10060df4 */
L_1002BBE8:
    esi = MEM32(0x100E064C); /* 0x1002BBE8: mov esi, dword ptr [0x100e064c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0x7FFFFFFFu; /* 0x1002BBEE: and dword ptr [ebp - 0x10], 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1002BBF5: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(0x100E0644); /* 0x1002BBF7: mov ecx, dword ptr [0x100e0644] */
    eax = ecx; /* 0x1002BBFD: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002BBFF: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1002BC00: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = esi; /* 0x1002BC03: mov dword ptr [ebp - 0x38], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1002BC06: add eax, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1002BC08: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x28)) = eax; /* 0x1002BC0B: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x1002BC0E: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10060E96; /* 0x1002BC14: js 0x10060e96 */
L_1002BC1A:
    PUSH32(esp, 0x20u); /* 0x1002BC1A: push 0x20 */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1002BC1C: mov dword ptr [ebp - 0x20], ebx */
    esi = ebx; /* 0x1002BC1F: mov esi, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002BC21: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x1002BC21: shl edi, cl */
    ebx = ecx; /* 0x1002BC23: mov ebx, ecx */
    eax = POP32_VAL(esp); /* 0x1002BC25: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1002BC26: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1002BC28: mov dword ptr [ebp - 0x24], ecx */
    edi = ~edi; /* 0x1002BC2B: not edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1002BC2D: mov dword ptr [ebp - 0x24], eax */
L_1002BC30:
    edx = MEM32(ebp + esi * 4 + (-0x10)); /* 0x1002BC30: mov edx, dword ptr [ebp + esi*4 - 0x10] */
    ecx = ebx; /* 0x1002BC34: mov ecx, ebx */
    eax = edx; /* 0x1002BC36: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1002BC38: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x1002BC38: shr edx, cl */
    _flag_a = (uint32_t)((edx | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((edx | MEM32(ebp + (-0x20))));
    edx = edx | MEM32(ebp + (-0x20)); /* 0x1002BC3A: or edx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1002BC3D: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x24)); /* 0x1002BC3F: mov ecx, dword ptr [ebp - 0x24] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002BC42: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1002BC42: shl eax, cl */
    MEM32(ebp + esi * 4 + (-0x10)) = edx; /* 0x1002BC44: mov dword ptr [ebp + esi*4 - 0x10], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002BC48: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x1002BC49: mov dword ptr [ebp - 0x20], eax */
    /* cmp esi, 3 */ /* 0x1002BC4C: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1002BC30; /* 0x1002BC4F: jl 0x1002bc30 */
L_1002BC51:
    edi = MEM32(ebp + (-0x28)); /* 0x1002BC51: mov edi, dword ptr [ebp - 0x28] */
    edx = ebp + (-0x8); /* 0x1002BC54: lea edx, [ebp - 8] */
    esi = MEM32(ebp + (-0x38)); /* 0x1002BC57: mov esi, dword ptr [ebp - 0x38] */
    eax = edi; /* 0x1002BC5A: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1002BC5C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1002BC5C: shl eax, 2 */
    PUSH32(esp, 2); /* 0x1002BC5F: push 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1002BC61: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002BC63: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1002BC65: pop ecx */
L_1002BC66:
    /* cmp ecx, edi */ /* 0x1002BC66: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1002BCCA; /* 0x1002BC68: jl 0x1002bcca */
L_1002BC6A:
    eax = MEM32(edx); /* 0x1002BC6A: mov eax, dword ptr [edx] */
    MEM32(ebp + ecx * 4 + (-0x10)) = eax; /* 0x1002BC6C: mov dword ptr [ebp + ecx*4 - 0x10], eax */
L_1002BC70:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x1002BC70: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002BC73: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_1002BC66; /* 0x1002BC74: jns 0x1002bc66 */
L_1002BC76:
    edi = MEM32(ebp + (-0x40)); /* 0x1002BC76: mov edi, dword ptr [ebp - 0x40] */
L_1002BC79:
    PUSH32(esp, 0x1Fu); /* 0x1002BC79: push 0x1f */
    eax = POP32_VAL(esp); /* 0x1002BC7B: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E0644));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(0x100E0644); /* 0x1002BC7C: sub eax, dword ptr [0x100e0644] */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x1002BC82: mov ecx, eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1002BC84: mov eax, dword ptr [ebp - 0x44] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002BC87: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x1002BC87: shl esi, cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002BC89: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002BC8B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1002BC8D: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1002BC92: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E0648); /* 0x1002BC94: mov eax, dword ptr [0x100e0648] */
    _flag_a = (uint32_t)((esi | MEM32(ebp + (-0x10)))); _flag_b = (uint32_t)((esi | MEM32(ebp + (-0x10))));
    esi = esi | MEM32(ebp + (-0x10)); /* 0x1002BC99: or esi, dword ptr [ebp - 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x1002BC9C: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060EA0; /* 0x1002BC9F: je 0x10060ea0 */
L_1002BCA5:
    /* cmp eax, 0x20u */ /* 0x1002BCA5: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002BCAC; /* 0x1002BCA8: jne 0x1002bcac */
L_1002BCAA:
    MEM32(edi) = esi; /* 0x1002BCAA: mov dword ptr [edi], esi */
L_1002BCAC:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002BCAC: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x1002BCAF: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1002BCB1: pop edi */
    esi = POP32_VAL(esp); /* 0x1002BCB2: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002BCB3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1002BCB5: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1002BCB6: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002BCBB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002BCBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BCBE: ret  */
L_1002BCBF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002BCBF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002BCC1: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1002BCC2: mov dword ptr [ebp - 0x2c], ecx */
    RECOMP_BACKEDGE();
    goto L_1002BB81; /* 0x1002BCC5: jmp 0x1002bb81 */
L_1002BCCA:
    MEM32(ebp + ecx * 4 + (-0x10)) = ebx; /* 0x1002BCCA: mov dword ptr [ebp + ecx*4 - 0x10], ebx */
    RECOMP_BACKEDGE();
    goto L_1002BC70; /* 0x1002BCCE: jmp 0x1002bc70 */
L_10060B47:
    esi = ebx; /* 0x10060B47: mov esi, ebx */
    eax = ebx; /* 0x10060B49: mov eax, ebx */
L_10060B4B:
    /* cmp MEM32(ebp + eax * 4 + (-0x10)), ebx */ /* 0x10060B4B: cmp dword ptr [ebp + eax*4 - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + eax * 4 + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060B5D; /* 0x10060B4F: jne 0x10060b5d */
L_10060B51:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060B51: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x10060B52: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002BC79; /* 0x10060B55: jge 0x1002bc79 */
L_10060B5B:
    RECOMP_BACKEDGE();
    goto L_10060B4B; /* 0x10060B5B: jmp 0x10060b4b */
L_10060B5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060B5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x10); /* 0x10060B5F: lea edi, [ebp - 0x10] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060B62: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060B63: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060B64: stosd dword ptr es:[edi], eax */
L_10060B65:
    PUSH32(esp, 2); /* 0x10060B65: push 2 */
    ebx = POP32_VAL(esp); /* 0x10060B67: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1002BC76; /* 0x10060B68: jmp 0x1002bc76 */
L_10060B6D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060B6D: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060B6E: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060B71: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002BB0B; /* 0x10060B72: jmp 0x1002bb0b */
L_10060B77:
    /* cmp MEM32(ebp + edx * 4 + (-0x10)), ebx */ /* 0x10060B77: cmp dword ptr [ebp + edx*4 - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1002BB2D; /* 0x10060B7B: jmp 0x1002bb2d */
L_10060B80:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10060B80: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x10060B81: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002BB8F; /* 0x10060B83: jge 0x1002bb8f */
L_10060B89:
    RECOMP_BACKEDGE();
    goto L_10060B77; /* 0x10060B89: jmp 0x10060b77 */
L_10060B8B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10060B8B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFE0u)); _flag_b = (uint32_t)((eax | 0xFFFFFFE0u));
    eax = eax | 0xFFFFFFE0u; /* 0x10060B8C: or eax, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060B8F: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002BB4F; /* 0x10060B90: jmp 0x1002bb4f */
L_10060B95:
    /* test ecx, ecx */ /* 0x10060B95: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060BC0; /* 0x10060B97: je 0x10060bc0 */
L_10060B99:
    eax = MEM32(ebp + edx * 4 + (-0x10)); /* 0x10060B99: mov eax, dword ptr [ebp + edx*4 - 0x10] */
    ecx = ebx; /* 0x10060B9D: mov ecx, ebx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x10060B9F: mov dword ptr [ebp - 0x2c], ebx */
    edi = eax + 0x1; /* 0x10060BA2: lea edi, [eax + 1] */
    /* cmp edi, eax */ /* 0x10060BA5: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = edi; /* 0x10060BA7: mov dword ptr [ebp - 0x28], edi */
    eax = edi; /* 0x10060BAA: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_10060BB3; /* 0x10060BAC: jb 0x10060bb3 */
L_10060BAE:
    /* cmp eax, 1 */ /* 0x10060BAE: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10060BB9; /* 0x10060BB1: jae 0x10060bb9 */
L_10060BB3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10060BB3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060BB5: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x10060BB6: mov dword ptr [ebp - 0x2c], ecx */
L_10060BB9:
    MEM32(ebp + edx * 4 + (-0x10)) = eax; /* 0x10060BB9: mov dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10060BBD: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10060B95; /* 0x10060BBE: jns 0x10060b95 */
L_10060BC0:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10060BC0: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002BB8C; /* 0x10060BC3: jmp 0x1002bb8c */
L_10060BC8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060BC8: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002BBBE; /* 0x10060BC9: jmp 0x1002bbbe */
L_10060BCE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060BCE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x10); /* 0x10060BD0: lea edi, [ebp - 0x10] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060BD3: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060BD4: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060BD5: stosd dword ptr es:[edi], eax */
L_10060BD6:
    esi = ebx; /* 0x10060BD6: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_10060B65; /* 0x10060BD8: jmp 0x10060b65 */
L_10060BDA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x24)); /* 0x10060BDA: sub edx, dword ptr [ebp - 0x24] */
    _flag_k = FK_CMP;
    esi = ebp + (-0x1C); /* 0x10060BDD: lea esi, [ebp - 0x1c] */
    MEM32(ebp + (-0x30)) = edx; /* 0x10060BE0: mov dword ptr [ebp - 0x30], edx */
    edi = ebp + (-0x10); /* 0x10060BE3: lea edi, [ebp - 0x10] */
    eax = edx; /* 0x10060BE6: mov eax, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10060BE8: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060BE9: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10060BEA: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10060BED: add eax, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10060BEF: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10060BF2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x10060BF3: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x10060BF6: mov eax, dword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10060BF9: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000001Fu);
    eax = eax & 0x8000001Fu; /* 0x10060BFA: and eax, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060C06; /* 0x10060BFF: jns 0x10060c06 */
L_10060C01:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10060C01: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFE0u)); _flag_b = (uint32_t)((eax | 0xFFFFFFE0u));
    eax = eax | 0xFFFFFFE0u; /* 0x10060C02: or eax, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060C05: inc eax */
    _flag_k = FK_INC;
L_10060C06:
    MEM32(ebp + (-0x30)) = eax; /* 0x10060C06: mov dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10060C09: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x10060C0C: mov eax, edi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x10060C0E: mov dword ptr [ebp - 0x20], ebx */
    edi = MEM32(ebp + (-0x30)); /* 0x10060C11: mov edi, dword ptr [ebp - 0x30] */
    ecx = edi; /* 0x10060C14: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060C16: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060C16: shl eax, cl */
    eax = ~eax; /* 0x10060C18: not eax */
    PUSH32(esp, 0x20u); /* 0x10060C1A: push 0x20 */
    MEM32(ebp + (-0x28)) = eax; /* 0x10060C1C: mov dword ptr [ebp - 0x28], eax */
    eax = POP32_VAL(esp); /* 0x10060C1F: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10060C20: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, 3); /* 0x10060C22: push 3 */
    MEM32(ebp + (-0x38)) = eax; /* 0x10060C24: mov dword ptr [ebp - 0x38], eax */
    esi = POP32_VAL(esp); /* 0x10060C27: pop esi */
L_10060C28:
    edx = MEM32(ebp + ebx * 4 + (-0x10)); /* 0x10060C28: mov edx, dword ptr [ebp + ebx*4 - 0x10] */
    ecx = edi; /* 0x10060C2C: mov ecx, edi */
    eax = edx; /* 0x10060C2E: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10060C30: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x10060C30: shr edx, cl */
    _flag_a = (uint32_t)((edx | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((edx | MEM32(ebp + (-0x20))));
    edx = edx | MEM32(ebp + (-0x20)); /* 0x10060C32: or edx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    eax = eax & MEM32(ebp + (-0x28)); /* 0x10060C35: and eax, dword ptr [ebp - 0x28] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x38)); /* 0x10060C38: mov ecx, dword ptr [ebp - 0x38] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060C3B: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060C3B: shl eax, cl */
    MEM32(ebp + ebx * 4 + (-0x10)) = edx; /* 0x10060C3D: mov dword ptr [ebp + ebx*4 - 0x10], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10060C41: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x10060C42: mov dword ptr [ebp - 0x20], eax */
    /* cmp ebx, esi */ /* 0x10060C45: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10060C28; /* 0x10060C47: jl 0x10060c28 */
L_10060C49:
    eax = MEM32(ebp + (-0x3C)); /* 0x10060C49: mov eax, dword ptr [ebp - 0x3c] */
    edx = ebp + (-0x8); /* 0x10060C4C: lea edx, [ebp - 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10060C4F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10060C4F: shl eax, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10060C52: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x10060C54: push 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x10060C56: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10060C58: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x3C)); /* 0x10060C5B: mov eax, dword ptr [ebp - 0x3c] */
    ecx = POP32_VAL(esp); /* 0x10060C5E: pop ecx */
L_10060C5F:
    /* cmp ecx, eax */ /* 0x10060C5F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10060C6E; /* 0x10060C61: jl 0x10060c6e */
L_10060C63:
    eax = MEM32(edx); /* 0x10060C63: mov eax, dword ptr [edx] */
    MEM32(ebp + ecx * 4 + (-0x10)) = eax; /* 0x10060C65: mov dword ptr [ebp + ecx*4 - 0x10], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x10060C69: mov eax, dword ptr [ebp - 0x3c] */
    goto L_10060C72; /* 0x10060C6C: jmp 0x10060c72 */
L_10060C6E:
    MEM32(ebp + ecx * 4 + (-0x10)) = ebx; /* 0x10060C6E: mov dword ptr [ebp + ecx*4 - 0x10], ebx */
L_10060C72:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x10060C72: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060C75: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10060C5F; /* 0x10060C76: jns 0x10060c5f */
L_10060C78:
    ecx = MEM32(ebp + (-0x34)); /* 0x10060C78: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060C7B: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x10060C7C: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060C7E: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10060C7F: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x10060C82: add edx, eax */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x10060C84: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    MEM32(ebp + (-0x2C)) = edx; /* 0x10060C87: mov dword ptr [ebp - 0x2c], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x10060C8A: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060C97; /* 0x10060C90: jns 0x10060c97 */
L_10060C92:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060C92: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060C93: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060C96: inc ecx */
    _flag_k = FK_INC;
L_10060C97:
    PUSH32(esp, 0x1Fu); /* 0x10060C97: push 0x1f */
    eax = POP32_VAL(esp); /* 0x10060C99: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10060C9A: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = eax; /* 0x10060C9C: mov dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060C9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x30)); /* 0x10060CA1: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060CA4: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060CA5: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060CA5: shl eax, cl */
    /* test MEM32(ebp + edx * 4 + (-0x10)), eax */ /* 0x10060CA7: test dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060D43; /* 0x10060CAB: je 0x10060d43 */
L_10060CB1:
    eax = edi; /* 0x10060CB1: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060CB3: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060CB3: shl eax, cl */
    eax = ~eax; /* 0x10060CB5: not eax */
    /* test MEM32(ebp + edx * 4 + (-0x10)), eax */ /* 0x10060CB7: test dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10060CC1; /* 0x10060CBB: jmp 0x10060cc1 */
L_10060CBD:
    /* cmp MEM32(ebp + edx * 4 + (-0x10)), ebx */ /* 0x10060CBD: cmp dword ptr [ebp + edx*4 - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_10060CC1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10060CCA; /* 0x10060CC1: jne 0x10060cca */
L_10060CC3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10060CC3: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x10060CC4: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10060D40; /* 0x10060CC6: jge 0x10060d40 */
L_10060CC8:
    RECOMP_BACKEDGE();
    goto L_10060CBD; /* 0x10060CC8: jmp 0x10060cbd */
L_10060CCA:
    edi = MEM32(ebp + (-0x34)); /* 0x10060CCA: mov edi, dword ptr [ebp - 0x34] */
    eax = edi; /* 0x10060CCD: mov eax, edi */
    PUSH32(esp, 0x1Fu); /* 0x10060CCF: push 0x1f */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060CD1: cdq  */
    ecx = POP32_VAL(esp); /* 0x10060CD2: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x10060CD3: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x10060CD5: add edx, eax */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x10060CD7: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8000001Fu);
    edi = edi & 0x8000001Fu; /* 0x10060CDA: and edi, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060CE7; /* 0x10060CE0: jns 0x10060ce7 */
L_10060CE2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10060CE2: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((edi | 0xFFFFFFE0u)); _flag_b = (uint32_t)((edi | 0xFFFFFFE0u));
    edi = edi | 0xFFFFFFE0u; /* 0x10060CE3: or edi, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10060CE6: inc edi */
    _flag_k = FK_INC;
L_10060CE7:
    eax = MEM32(ebp + edx * 4 + (-0x10)); /* 0x10060CE7: mov eax, dword ptr [ebp + edx*4 - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x10060CEB: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10060CED: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10060CEF: inc edi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060CF0: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x10060CF0: shl edi, cl */
    ecx = ebx; /* 0x10060CF2: mov ecx, ebx */
    MEM32(ebp + (-0x24)) = edi; /* 0x10060CF4: mov dword ptr [ebp - 0x24], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10060CF7: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edi; /* 0x10060CF9: mov dword ptr [ebp - 0x20], edi */
    /* cmp edi, eax */ /* 0x10060CFC: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x20)); /* 0x10060CFE: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10060D01: push -1 */
    edi = POP32_VAL(esp); /* 0x10060D03: pop edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_10060D0B; /* 0x10060D04: jb 0x10060d0b */
L_10060D06:
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x10060D06: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10060D0E; /* 0x10060D09: jae 0x10060d0e */
L_10060D0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10060D0B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060D0D: inc ecx */
    _flag_k = FK_INC;
L_10060D0E:
    MEM32(ebp + edx * 4 + (-0x10)) = eax; /* 0x10060D0E: mov dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10060D12: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10060D3D; /* 0x10060D13: js 0x10060d3d */
L_10060D15:
    /* test ecx, ecx */ /* 0x10060D15: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060D3A; /* 0x10060D17: je 0x10060d3a */
L_10060D19:
    eax = MEM32(ebp + edx * 4 + (-0x10)); /* 0x10060D19: mov eax, dword ptr [ebp + edx*4 - 0x10] */
    ecx = ebx; /* 0x10060D1D: mov ecx, ebx */
    edi = eax + 0x1; /* 0x10060D1F: lea edi, [eax + 1] */
    /* cmp edi, eax */ /* 0x10060D22: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edi; /* 0x10060D24: mov dword ptr [ebp - 0x20], edi */
    eax = edi; /* 0x10060D27: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_10060D30; /* 0x10060D29: jb 0x10060d30 */
L_10060D2B:
    /* cmp eax, 1 */ /* 0x10060D2B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10060D33; /* 0x10060D2E: jae 0x10060d33 */
L_10060D30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10060D30: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060D32: inc ecx */
    _flag_k = FK_INC;
L_10060D33:
    MEM32(ebp + edx * 4 + (-0x10)) = eax; /* 0x10060D33: mov dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10060D37: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10060D15; /* 0x10060D38: jns 0x10060d15 */
L_10060D3A:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10060D3A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10060D3D:
    ecx = MEM32(ebp + (-0x30)); /* 0x10060D3D: mov ecx, dword ptr [ebp - 0x30] */
L_10060D40:
    edx = MEM32(ebp + (-0x2C)); /* 0x10060D40: mov edx, dword ptr [ebp - 0x2c] */
L_10060D43:
    eax = edi; /* 0x10060D43: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060D45: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060D45: shl eax, cl */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + edx * 4 + (-0x10)) = MEM32(ebp + edx * 4 + (-0x10)) & eax; /* 0x10060D47: and dword ptr [ebp + edx*4 - 0x10], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10060D4B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x10060D4C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10060D61; /* 0x10060D4E: jge 0x10060d61 */
L_10060D50:
    edi = ebp + (-0x10); /* 0x10060D50: lea edi, [ebp - 0x10] */
    ecx = esi; /* 0x10060D53: mov ecx, esi */
    edi = edi + edx * 4; /* 0x10060D55: lea edi, [edi + edx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x10060D58: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060D5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10060D5C: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10060D5E: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10060D61:
    ecx = MEM32(0x100E0644); /* 0x10060D61: mov ecx, dword ptr [0x100e0644] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060D67: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x10060D68: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060D6A: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10060D6B: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10060D6E: add eax, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10060D70: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x28)) = eax; /* 0x10060D73: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x10060D76: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060D83; /* 0x10060D7C: jns 0x10060d83 */
L_10060D7E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060D7E: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060D7F: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060D82: inc ecx */
    _flag_k = FK_INC;
L_10060D83:
    MEM32(ebp + (-0x24)) = ecx; /* 0x10060D83: mov dword ptr [ebp - 0x24], ecx */
    eax = ebx; /* 0x10060D86: mov eax, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060D88: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x10060D88: shl edi, cl */
    PUSH32(esp, 0x20u); /* 0x10060D8A: push 0x20 */
    MEM32(ebp + (-0x20)) = ebx; /* 0x10060D8C: mov dword ptr [ebp - 0x20], ebx */
    edi = ~edi; /* 0x10060D8F: not edi */
    ebx = MEM32(ebp + (-0x24)); /* 0x10060D91: mov ebx, dword ptr [ebp - 0x24] */
    ecx = POP32_VAL(esp); /* 0x10060D94: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x10060D95: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x34)) = eax; /* 0x10060D97: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x10060D9A: mov dword ptr [ebp - 0x24], ecx */
L_10060D9D:
    edx = MEM32(ebp + eax * 4 + (-0x10)); /* 0x10060D9D: mov edx, dword ptr [ebp + eax*4 - 0x10] */
    ecx = ebx; /* 0x10060DA1: mov ecx, ebx */
    eax = edx; /* 0x10060DA3: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10060DA5: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x10060DA5: shr edx, cl */
    ecx = MEM32(ebp + (-0x34)); /* 0x10060DA7: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x10060DAA: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((edx | MEM32(ebp + (-0x20))));
    edx = edx | MEM32(ebp + (-0x20)); /* 0x10060DAC: or edx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + ecx * 4 + (-0x10)) = edx; /* 0x10060DAF: mov dword ptr [ebp + ecx*4 - 0x10], edx */
    ecx = MEM32(ebp + (-0x24)); /* 0x10060DB3: mov ecx, dword ptr [ebp - 0x24] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060DB6: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060DB6: shl eax, cl */
    MEM32(ebp + (-0x20)) = eax; /* 0x10060DB8: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x10060DBB: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060DBE: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x34)) = eax; /* 0x10060DBF: mov dword ptr [ebp - 0x34], eax */
    /* cmp eax, esi */ /* 0x10060DC2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10060D9D; /* 0x10060DC4: jl 0x10060d9d */
L_10060DC6:
    esi = MEM32(ebp + (-0x28)); /* 0x10060DC6: mov esi, dword ptr [ebp - 0x28] */
    edx = ebp + (-0x8); /* 0x10060DC9: lea edx, [ebp - 8] */
    eax = esi; /* 0x10060DCC: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10060DCE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10060DCE: shl eax, 2 */
    PUSH32(esp, 2); /* 0x10060DD1: push 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x10060DD3: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10060DD5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10060DD7: pop ecx */
L_10060DD8:
    /* cmp ecx, esi */ /* 0x10060DD8: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10060DE4; /* 0x10060DDA: jl 0x10060de4 */
L_10060DDC:
    eax = MEM32(edx); /* 0x10060DDC: mov eax, dword ptr [edx] */
    MEM32(ebp + ecx * 4 + (-0x10)) = eax; /* 0x10060DDE: mov dword ptr [ebp + ecx*4 - 0x10], eax */
    goto L_10060DE8; /* 0x10060DE2: jmp 0x10060de8 */
L_10060DE4:
    MEM32(ebp + ecx * 4 + (-0x10)) = ebx; /* 0x10060DE4: mov dword ptr [ebp + ecx*4 - 0x10], ebx */
L_10060DE8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x10060DE8: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060DEB: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10060BD6; /* 0x10060DEC: js 0x10060bd6 */
L_10060DF2:
    RECOMP_BACKEDGE();
    goto L_10060DD8; /* 0x10060DF2: jmp 0x10060dd8 */
L_10060DF4:
    ecx = MEM32(0x100E0644); /* 0x10060DF4: mov ecx, dword ptr [0x100e0644] */
    edi = ebp + (-0x10); /* 0x10060DFA: lea edi, [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060DFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060DFF: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060E00: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060E01: stosd dword ptr es:[edi], eax */
    eax = ecx; /* 0x10060E02: mov eax, ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0x80000000u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0x80000000u));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0x80000000u; /* 0x10060E04: or dword ptr [ebp - 0x10], 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060E0B: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10060E0C: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10060E0F: add eax, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10060E11: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x34)) = eax; /* 0x10060E14: mov dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x10060E17: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060E24; /* 0x10060E1D: jns 0x10060e24 */
L_10060E1F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060E1F: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060E20: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060E23: inc ecx */
    _flag_k = FK_INC;
L_10060E24:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10060E24: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ecx; /* 0x10060E27: mov dword ptr [ebp - 0x38], ecx */
    PUSH32(esp, 0x20u); /* 0x10060E2A: push 0x20 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060E2C: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x10060E2C: shl edi, cl */
    eax = POP32_VAL(esp); /* 0x10060E2E: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10060E2F: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10060E31: mov dword ptr [ebp - 0x20], ebx */
    edi = ~edi; /* 0x10060E34: not edi */
    MEM32(ebp + (-0x28)) = eax; /* 0x10060E36: mov dword ptr [ebp - 0x28], eax */
L_10060E39:
    edx = MEM32(ebp + ebx * 4 + (-0x10)); /* 0x10060E39: mov edx, dword ptr [ebp + ebx*4 - 0x10] */
    eax = edx; /* 0x10060E3D: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10060E3F: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x10060E3F: shr edx, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x10060E41: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((edx | MEM32(ebp + (-0x20))));
    edx = edx | MEM32(ebp + (-0x20)); /* 0x10060E43: or edx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x28)); /* 0x10060E46: mov ecx, dword ptr [ebp - 0x28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060E49: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060E49: shl eax, cl */
    ecx = MEM32(ebp + (-0x38)); /* 0x10060E4B: mov ecx, dword ptr [ebp - 0x38] */
    MEM32(ebp + ebx * 4 + (-0x10)) = edx; /* 0x10060E4E: mov dword ptr [ebp + ebx*4 - 0x10], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10060E52: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x10060E53: mov dword ptr [ebp - 0x20], eax */
    /* cmp ebx, esi */ /* 0x10060E56: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10060E39; /* 0x10060E58: jl 0x10060e39 */
L_10060E5A:
    esi = MEM32(ebp + (-0x34)); /* 0x10060E5A: mov esi, dword ptr [ebp - 0x34] */
    edx = ebp + (-0x8); /* 0x10060E5D: lea edx, [ebp - 8] */
    eax = esi; /* 0x10060E60: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10060E62: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10060E62: shl eax, 2 */
    PUSH32(esp, 2); /* 0x10060E65: push 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x10060E67: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10060E69: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10060E6B: pop ecx */
L_10060E6C:
    /* cmp ecx, esi */ /* 0x10060E6C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10060E78; /* 0x10060E6E: jl 0x10060e78 */
L_10060E70:
    eax = MEM32(edx); /* 0x10060E70: mov eax, dword ptr [edx] */
    MEM32(ebp + ecx * 4 + (-0x10)) = eax; /* 0x10060E72: mov dword ptr [ebp + ecx*4 - 0x10], eax */
    goto L_10060E7C; /* 0x10060E76: jmp 0x10060e7c */
L_10060E78:
    MEM32(ebp + ecx * 4 + (-0x10)) = ebx; /* 0x10060E78: mov dword ptr [ebp + ecx*4 - 0x10], ebx */
L_10060E7C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x10060E7C: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060E7F: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10060E6C; /* 0x10060E80: jns 0x10060e6c */
L_10060E82:
    esi = MEM32(0x100E064C); /* 0x10060E82: mov esi, dword ptr [0x100e064c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10060E88: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100E0638));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(0x100E0638); /* 0x10060E8A: add esi, dword ptr [0x100e0638] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10060E90: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002BC76; /* 0x10060E91: jmp 0x1002bc76 */
L_10060E96:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060E96: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060E97: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060E9A: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002BC1A; /* 0x10060E9B: jmp 0x1002bc1a */
L_10060EA0:
    eax = MEM32(ebp + (-0xC)); /* 0x10060EA0: mov eax, dword ptr [ebp - 0xc] */
    MEM32(edi + 0x4) = esi; /* 0x10060EA3: mov dword ptr [edi + 4], esi */
    MEM32(edi) = eax; /* 0x10060EA6: mov dword ptr [edi], eax */
    RECOMP_BACKEDGE();
    goto L_1002BCAC; /* 0x10060EA8: jmp 0x1002bcac */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002BCD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BCD0u);

L_1002BCD0:
    PUSH32(esp, ebp); /* 0x1002BCD0: push ebp */
    ebp = esp; /* 0x1002BCD1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1002BCD3: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1002BCD6: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1002BCDB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002BCDD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1002BCE0: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x1002BCE3: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1002BCE6: push ebx */
    PUSH32(esp, esi); /* 0x1002BCE7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1002BCE8: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1002BCEB: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002BCEC: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1002BCEF: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x14); /* 0x1002BCF2: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002BCF5: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1000F764); /* 0x1002BCF8: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x1002BCFD: lea eax, [ebp - 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1002BD00: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1002BD02: push eax */
    PUSH32(esp, edi); /* 0x1002BD03: push edi */
    PUSH32(esp, edi); /* 0x1002BD04: push edi */
    PUSH32(esp, edi); /* 0x1002BD05: push edi */
    PUSH32(esp, edi); /* 0x1002BD06: push edi */
    PUSH32(esp, esi); /* 0x1002BD07: push esi */
    eax = ebp + (-0x18); /* 0x1002BD08: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1002BD0B: push eax */
    eax = ebp + (-0x10); /* 0x1002BD0C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1002BD0F: push eax */
    RECOMP_CALL(sub_1001A5C0); /* 0x1002BD10: call 0x1001a5c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1002BD15: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1002BD17: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1C)); /* 0x1002BD1A: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x1002BD1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056D55; /* 0x1002BD1F: jne 0x10056d55 */
L_1002BD25:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1002BD25: push dword ptr [ebp - 0x14] */
    eax = ebp + (-0x10); /* 0x1002BD28: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1002BD2B: push eax */
    RECOMP_CALL(sub_1002BA78); /* 0x1002BD2C: call 0x1002ba78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002BD31: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002BD32: pop ecx */
    /* test LO8(ebx), 3 */ /* 0x1002BD33: test bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056D63; /* 0x1002BD36: jne 0x10056d63 */
L_1002BD3C:
    /* cmp eax, 1 */ /* 0x1002BD3C: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056D71; /* 0x1002BD3F: je 0x10056d71 */
L_1002BD45:
    /* cmp eax, 2 */ /* 0x1002BD45: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056D5F; /* 0x1002BD48: je 0x10056d5f */
L_1002BD4E:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x1002BD4E: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056D79; /* 0x1002BD52: jne 0x10056d79 */
L_1002BD58:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002BD58: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1002BD5B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1002BD5D: pop edi */
    esi = POP32_VAL(esp); /* 0x1002BD5E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002BD5F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1002BD61: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1002BD62: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002BD67: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002BD69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BD6A: ret  */
L_10056D55:
    ecx = MEM32(ebp + (-0x18)); /* 0x10056D55: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(eax) = ecx; /* 0x10056D58: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_1002BD25; /* 0x10056D5A: jmp 0x1002bd25 */
L_10056D5F:
    PUSH32(esp, 4); /* 0x10056D5F: push 4 */
    goto L_10056D73; /* 0x10056D61: jmp 0x10056d73 */
L_10056D63:
    /* test LO8(ebx), 1 */ /* 0x10056D63: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056D5F; /* 0x10056D66: jne 0x10056d5f */
L_10056D68:
    /* test LO8(ebx), 2 */ /* 0x10056D68: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002BD4E; /* 0x10056D6B: je 0x1002bd4e */
L_10056D71:
    PUSH32(esp, 3); /* 0x10056D71: push 3 */
L_10056D73:
    edi = POP32_VAL(esp); /* 0x10056D73: pop edi */
    RECOMP_BACKEDGE();
    goto L_1002BD4E; /* 0x10056D74: jmp 0x1002bd4e */
L_10056D79:
    ecx = MEM32(ebp + (-0x24)); /* 0x10056D79: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10056D7C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002BD58; /* 0x10056D80: jmp 0x1002bd58 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002BD6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BD6Bu);

L_1002BD6B:
    PUSH32(esp, ebp); /* 0x1002BD6B: push ebp */
    ebp = esp; /* 0x1002BD6C: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1002BD6E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002BD70: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002BD73: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002BD76: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002BCD0); /* 0x1002BD79: call 0x1002bcd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002BD7E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002BD81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BD82: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002BD99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BD99u);

L_1002BD99:
    PUSH32(esp, ebp); /* 0x1002BD99: push ebp */
    ebp = esp; /* 0x1002BD9A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1002BD9C: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1002BD9F: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1002BDA4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002BDA6: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1002BDA9: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1002BDAA: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1002BDAD: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1002BDAE: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1002BDB1: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1002BDB2: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1002BDB5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100547C9; /* 0x1002BDB7: jne 0x100547c9 */
L_1002BDBD:
    RECOMP_CALL(sub_10014728); /* 0x1002BDBD: call 0x10014728 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1002BDC2: mov ebx, eax */
L_1002BDC4:
    /* test edi, edi */ /* 0x1002BDC4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002BE3B; /* 0x1002BDC6: je 0x1002be3b */
L_1002BDC8:
    /* test esi, esi */ /* 0x1002BDC8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100547F8; /* 0x1002BDCA: jle 0x100547f8 */
L_1002BDD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002BDD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x1002BDD2: mov dword ptr [ebp - 0x10], esi */
    ecx = esi; /* 0x1002BDD5: mov ecx, esi */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1002BDD7: mov word ptr [edi], ax */
L_1002BDDA:
    /* test ebx, ebx */ /* 0x1002BDDA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054805; /* 0x1002BDDC: je 0x10054805 */
L_1002BDE2:
    eax = ebx + 0x40; /* 0x1002BDE2: lea eax, [ebx + 0x40] */
    PUSH32(esp, 0x3Au); /* 0x1002BDE5: push 0x3a */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x1002BDE7: mov word ptr [ebp - 0xc], ax */
    eax = POP32_VAL(esp); /* 0x1002BDEB: pop eax */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x1002BDEC: mov word ptr [ebp - 0xa], ax */
    PUSH32(esp, 0x2Eu); /* 0x1002BDF0: push 0x2e */
    eax = POP32_VAL(esp); /* 0x1002BDF2: pop eax */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1002BDF3: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002BDF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x1002BDF9: mov word ptr [ebp - 6], ax */
L_1002BDFD:
    ebx = MEM32(0x100E50B4); /* 0x1002BDFD: mov ebx, dword ptr [0x100e50b4] */
    eax = ebp + (-0x14); /* 0x1002BE03: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002BE06: push eax */
    PUSH32(esp, edi); /* 0x1002BE07: push edi */
    PUSH32(esp, ecx); /* 0x1002BE08: push ecx */
    eax = ebp + (-0xC); /* 0x1002BE09: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002BE0C: push eax */
    RECOMP_ICALL(ebx); /* 0x1002BE0D: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002BE0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005486F; /* 0x1002BE11: je 0x1005486f */
L_1002BE17:
    /* test edi, edi */ /* 0x1002BE17: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054829; /* 0x1002BE19: je 0x10054829 */
L_1002BE1F:
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x1002BE1F: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10054817; /* 0x1002BE22: jge 0x10054817 */
L_1002BE28:
    eax = edi; /* 0x1002BE28: mov eax, edi */
L_1002BE2A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002BE2A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1002BE2D: pop edi */
    esi = POP32_VAL(esp); /* 0x1002BE2E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002BE2F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1002BE31: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1002BE32: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002BE37: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002BE39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BE3A: ret  */
L_1002BE3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002BE3B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1002BE3D: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_BACKEDGE();
    goto L_1002BDDA; /* 0x1002BE40: jmp 0x1002bdda */
L_100547C9:
    PUSH32(esp, ebx); /* 0x100547C9: push ebx */
    RECOMP_CALL(sub_1007F56F); /* 0x100547CA: call 0x1007f56f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100547CF: pop ecx */
    /* test eax, eax */ /* 0x100547D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002BDC4; /* 0x100547D2: jne 0x1002bdc4 */
L_100547D8:
    RECOMP_CALL(sub_1001E471); /* 0x100547D8: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xFu; /* 0x100547DD: mov dword ptr [eax], 0xf */
    RECOMP_CALL(sub_1001177D); /* 0x100547E3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x100547E8: mov dword ptr [eax], 0xd */
L_100547EE:
    RECOMP_CALL(sub_100A4670); /* 0x100547EE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1005487C; /* 0x100547F3: jmp 0x1005487c */
L_100547F8:
    RECOMP_CALL(sub_1001177D); /* 0x100547F8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100547FD: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_100547EE; /* 0x10054803: jmp 0x100547ee */
L_10054805:
    PUSH32(esp, 0x2Eu); /* 0x10054805: push 0x2e */
    eax = POP32_VAL(esp); /* 0x10054807: pop eax */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x10054808: mov word ptr [ebp - 0xc], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005480C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x1005480E: mov word ptr [ebp - 0xa], ax */
    RECOMP_BACKEDGE();
    goto L_1002BDFD; /* 0x10054812: jmp 0x1002bdfd */
L_10054817:
    RECOMP_CALL(sub_1001177D); /* 0x10054817: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1005481C: mov dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054822: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x10054824: mov word ptr [edi], ax */
    goto L_1005487C; /* 0x10054827: jmp 0x1005487c */
L_10054829:
    /* cmp eax, esi */ /* 0x10054829: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005482F; /* 0x1005482B: jle 0x1005482f */
L_1005482D:
    esi = eax; /* 0x1005482D: mov esi, eax */
L_1005482F:
    PUSH32(esp, 2); /* 0x1005482F: push 2 */
    PUSH32(esp, esi); /* 0x10054831: push esi */
    RECOMP_CALL(sub_1001CBFF); /* 0x10054832: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10054837: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10054839: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005483A: pop ecx */
    /* test edi, edi */ /* 0x1005483B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054857; /* 0x1005483D: jne 0x10054857 */
L_1005483F:
    RECOMP_CALL(sub_1001177D); /* 0x1005483F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x10054844: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001E471); /* 0x1005484A: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 8; /* 0x1005484F: mov dword ptr [eax], 8 */
    goto L_1005487C; /* 0x10054855: jmp 0x1005487c */
L_10054857:
    eax = ebp + (-0x14); /* 0x10054857: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005485A: push eax */
    PUSH32(esp, edi); /* 0x1005485B: push edi */
    PUSH32(esp, esi); /* 0x1005485C: push esi */
    eax = ebp + (-0xC); /* 0x1005485D: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x10054860: push eax */
    RECOMP_ICALL(ebx); /* 0x10054861: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10054863: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005486F; /* 0x10054865: je 0x1005486f */
L_10054867:
    /* cmp eax, esi */ /* 0x10054867: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1002BE28; /* 0x10054869: jl 0x1002be28 */
L_1005486F:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005486F: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10054875: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x10054876: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005487B: pop ecx */
L_1005487C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005487C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002BE2A; /* 0x1005487E: jmp 0x1002be2a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002BE42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BE42u);

L_1002BE42:
    PUSH32(esp, ebp); /* 0x1002BE42: push ebp */
    ebp = esp; /* 0x1002BE43: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002BE45: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002BE48: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1002BE4B: push 0 */
    RECOMP_CALL(sub_1002BD99); /* 0x1002BE4D: call 0x1002bd99 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002BE52: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002BE55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BE56: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002BE65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BE65u);

L_1002BE65:
    RECOMP_CALL(sub_1001CA37); /* 0x1002BE65: call 0x1001ca37 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BE6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002BE6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BE6Bu);

L_1002BE6B:
    PUSH32(esp, 0xCu); /* 0x1002BE6B: push 0xc */
    PUSH32(esp, 0x1002BEA8u); /* 0x1002BE6D: push 0x1002bea8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002BE72: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1002BE77: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001CA2E); /* 0x1002BE7B: call 0x1001ca2e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002BE80: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002BE84: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002BEC4); /* 0x1002BE87: call 0x1002bec4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002BE8C: pop ecx */
    esi = eax; /* 0x1002BE8D: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1002BE8F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002BE92: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002BE65); /* 0x1002BE99: call 0x1002be65 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1002BE9E: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x1002BEA0: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BEA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002BEC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BEC4u);

L_1002BEC4:
    PUSH32(esp, ebp); /* 0x1002BEC4: push ebp */
    ebp = esp; /* 0x1002BEC5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002BEC7: push ecx */
    PUSH32(esp, ebx); /* 0x1002BEC8: push ebx */
    PUSH32(esp, esi); /* 0x1002BEC9: push esi */
    esi = MEM32(0x100E5004); /* 0x1002BECA: mov esi, dword ptr [0x100e5004] */
    PUSH32(esp, edi); /* 0x1002BED0: push edi */
    PUSH32(esp, MEM32(0x100E0654)); /* 0x1002BED1: push dword ptr [0x100e0654] */
    RECOMP_ICALL(esi); /* 0x1002BED7: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100E0650)); /* 0x1002BED9: push dword ptr [0x100e0650] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1002BEDF: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(esi); /* 0x1002BEE2: call esi */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1002BEE4: mov ebx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1002BEE6: mov eax, dword ptr [ebp - 4] */
    /* cmp ebx, eax */ /* 0x1002BEE9: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1002DC25; /* 0x1002BEEB: jb 0x1002dc25 */
L_1002BEF1:
    edi = ebx; /* 0x1002BEF1: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1002BEF3: sub edi, eax */
    _flag_k = FK_CMP;
    ecx = edi + 0x4; /* 0x1002BEF5: lea ecx, [edi + 4] */
    /* cmp ecx, 4 */ /* 0x1002BEF8: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1002DC25; /* 0x1002BEFB: jb 0x1002dc25 */
L_1002BF01:
    PUSH32(esp, eax); /* 0x1002BF01: push eax */
    RECOMP_CALL(sub_1001CA0E); /* 0x1002BF02: call 0x1001ca0e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002BF07: mov esi, eax */
    eax = edi + 0x4; /* 0x1002BF09: lea eax, [edi + 4] */
    ecx = POP32_VAL(esp); /* 0x1002BF0C: pop ecx */
    /* cmp esi, eax */ /* 0x1002BF0D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1002DBE5; /* 0x1002BF0F: jb 0x1002dbe5 */
L_1002BF15:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002BF15: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1002BF18: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x4; /* 0x1002BF1E: lea ecx, [ebx + 4] */
    MEM32(ebx) = eax; /* 0x1002BF21: mov dword ptr [ebx], eax */
    PUSH32(esp, ecx); /* 0x1002BF23: push ecx */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1002BF24: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0650) = eax; /* 0x1002BF2A: mov dword ptr [0x100e0650], eax */
    eax = MEM32(ebp + 0x8); /* 0x1002BF2F: mov eax, dword ptr [ebp + 8] */
L_1002BF32:
    edi = POP32_VAL(esp); /* 0x1002BF32: pop edi */
    esi = POP32_VAL(esp); /* 0x1002BF33: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002BF34: pop ebx */
    esp = ebp; /* 0x1002BF35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002BF37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BF38: ret  */
L_1002DBE5:
    eax = 0x800u; /* 0x1002DBE5: mov eax, 0x800 */
    /* cmp esi, eax */ /* 0x1002DBEA: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1002DBF0; /* 0x1002DBEC: jae 0x1002dbf0 */
L_1002DBEE:
    eax = esi; /* 0x1002DBEE: mov eax, esi */
L_1002DBF0:
    ebx = MEM32(ebp + (-0x4)); /* 0x1002DBF0: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1002DBF3: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x1002DBF5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1005F116; /* 0x1002DBF7: jb 0x1005f116 */
L_1002DBFD:
    PUSH32(esp, eax); /* 0x1002DBFD: push eax */
    PUSH32(esp, ebx); /* 0x1002DBFE: push ebx */
    RECOMP_CALL(sub_1001FF72); /* 0x1002DBFF: call 0x1001ff72 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002DC04: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002DC05: pop ecx */
    /* test eax, eax */ /* 0x1002DC06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F116; /* 0x1002DC08: je 0x1005f116 */
L_1002DC0E:
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x1002DC0E: sar edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 2u);
    PUSH32(esp, eax); /* 0x1002DC11: push eax */
    ebx = eax + edi * 4; /* 0x1002DC12: lea ebx, [eax + edi*4] */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1002DC15: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0654) = eax; /* 0x1002DC1B: mov dword ptr [0x100e0654], eax */
    RECOMP_BACKEDGE();
    goto L_1002BF15; /* 0x1002DC20: jmp 0x1002bf15 */
L_1002DC25:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002DC25: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002BF32; /* 0x1002DC27: jmp 0x1002bf32 */
L_1005F116:
    eax = esi + 0x10; /* 0x1005F116: lea eax, [esi + 0x10] */
    /* cmp eax, esi */ /* 0x1005F119: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1002DC25; /* 0x1005F11B: jb 0x1002dc25 */
L_1005F121:
    PUSH32(esp, eax); /* 0x1005F121: push eax */
    PUSH32(esp, ebx); /* 0x1005F122: push ebx */
    RECOMP_CALL(sub_1001FF72); /* 0x1005F123: call 0x1001ff72 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005F128: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005F129: pop ecx */
    /* test eax, eax */ /* 0x1005F12A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002DC0E; /* 0x1005F12C: jne 0x1002dc0e */
L_1005F132:
    RECOMP_BACKEDGE();
    goto L_1002DC25; /* 0x1005F132: jmp 0x1002dc25 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002BF39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BF39u);

L_1002BF39:
    PUSH32(esp, ebp); /* 0x1002BF39: push ebp */
    ebp = esp; /* 0x1002BF3A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1002BF3C: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1002BF3D: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1002BF40: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1002BF41: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1002BF43: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053EAF; /* 0x1002BF45: je 0x10053eaf */
L_1002BF4B:
    PUSH32(esp, esi); /* 0x1002BF4B: push esi */
    PUSH32(esp, 0x3BCu); /* 0x1002BF4C: push 0x3bc */
    PUSH32(esp, 1); /* 0x1002BF51: push 1 */
    RECOMP_CALL(sub_10011208); /* 0x1002BF53: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002BF58: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1002BF5A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002BF5B: pop ecx */
    /* test esi, esi */ /* 0x1002BF5C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053ECE; /* 0x1002BF5E: je 0x10053ece */
L_1002BF64:
    RECOMP_CALL(sub_1000F750); /* 0x1002BF64: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax + 0x6C)); /* 0x1002BF69: push dword ptr [eax + 0x6c] */
    PUSH32(esp, esi); /* 0x1002BF6C: push esi */
    RECOMP_CALL(sub_10011BFD); /* 0x1002BF6D: call 0x10011bfd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x1002BF72: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x1002BF75: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x58) = eax; /* 0x1002BF79: mov dword ptr [esi + 0x58], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1002BF7C: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(esi + 0x54) = ebx; /* 0x1002BF7F: mov dword ptr [esi + 0x54], ebx */
    ecx = POP32_VAL(esp); /* 0x1002BF82: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002BF83: pop ecx */
    /* test eax, eax */ /* 0x1002BF84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002BF8B; /* 0x1002BF86: jne 0x1002bf8b */
L_1002BF88:
    eax = ebp + 0x10; /* 0x1002BF88: lea eax, [ebp + 0x10] */
L_1002BF8B:
    PUSH32(esp, eax); /* 0x1002BF8B: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1002BF8C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1002BF8F: push esi */
    PUSH32(esp, 0x1002BFB4u); /* 0x1002BF90: push 0x1002bfb4 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002BF95: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002BF98: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5078)); /* 0x1002BF9B: call dword ptr [0x100e5078] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002BFA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053EC6; /* 0x1002BFA3: je 0x10053ec6 */
L_1002BFA9:
    esi = POP32_VAL(esp); /* 0x1002BFA9: pop esi */
L_1002BFAA:
    edi = POP32_VAL(esp); /* 0x1002BFAA: pop edi */
    ebx = POP32_VAL(esp); /* 0x1002BFAB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1002BFAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BFAD: ret  */
L_10053EAF:
    RECOMP_CALL(sub_1001177D); /* 0x10053EAF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10053EB4: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10053EBA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10053EBF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002BFAA; /* 0x10053EC1: jmp 0x1002bfaa */
L_10053EC6:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10053EC6: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10053ECC: mov edi, eax */
L_10053ECE:
    PUSH32(esp, esi); /* 0x10053ECE: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053ECF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10053ED4: pop ecx */
    /* test edi, edi */ /* 0x10053ED5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053EE0; /* 0x10053ED7: je 0x10053ee0 */
L_10053ED9:
    PUSH32(esp, edi); /* 0x10053ED9: push edi */
    RECOMP_CALL(sub_1001E4A7); /* 0x10053EDA: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10053EDF: pop ecx */
L_10053EE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10053EE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002BFA9; /* 0x10053EE2: jmp 0x1002bfa9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002BFAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BFAEu);

L_1002BFAE:
    eax = MEM32(0x100DF9EC); /* 0x1002BFAE: mov eax, dword ptr [0x100df9ec] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002BFB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002BFB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002BFB4u);

L_1002BFB4:
    PUSH32(esp, ebp); /* 0x1002BFB4: push ebp */
    ebp = esp; /* 0x1002BFB5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002BFB7: push esi */
    RECOMP_CALL(sub_1002BFAE); /* 0x1002BFB8: call 0x1002bfae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1002BFBD: push eax */
    RECOMP_CALL(sub_1000ED10); /* 0x1002BFBE: call 0x1000ed10 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002BFC3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1002BFC5: pop ecx */
    /* test esi, esi */ /* 0x1002BFC6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053F11; /* 0x1002BFC8: je 0x10053f11 */
L_1002BFCE:
    ecx = MEM32(ebp + 0x8); /* 0x1002BFCE: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1002BFD1: push ecx */
    eax = MEM32(ecx + 0x54); /* 0x1002BFD2: mov eax, dword ptr [ecx + 0x54] */
    MEM32(esi + 0x54) = eax; /* 0x1002BFD5: mov dword ptr [esi + 0x54], eax */
    eax = MEM32(ecx + 0x58); /* 0x1002BFD8: mov eax, dword ptr [ecx + 0x58] */
    MEM32(esi + 0x58) = eax; /* 0x1002BFDB: mov dword ptr [esi + 0x58], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002BFDE: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1002BFE1: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_10011A8D); /* 0x1002BFE4: call 0x10011a8d */
    RECOMP_FLAGS_IN();
L_1002BFE9:
    RECOMP_CALL(sub_10014BD1); /* 0x1002BFE9: call 0x10014bd1 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3B4) = eax; /* 0x1002BFEE: mov dword ptr [esi + 0x3b4], eax */
    /* test eax, eax */ /* 0x1002BFF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053F40; /* 0x1002BFF6: jne 0x10053f40 */
L_1002BFFC:
    RECOMP_CALL(sub_1002C002); /* 0x1002BFFC: call 0x1002c002 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1002C001u, "int3 ");
L_10053F11:
    esi = MEM32(ebp + 0x8); /* 0x10053F11: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10053F14: push esi */
    RECOMP_CALL(sub_1002BFAE); /* 0x10053F15: call 0x1002bfae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10053F1A: push eax */
    RECOMP_CALL(sub_10011A66); /* 0x10053F1B: call 0x10011a66 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10053F20: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10053F21: pop ecx */
    /* test eax, eax */ /* 0x10053F22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053F33; /* 0x10053F24: jne 0x10053f33 */
L_10053F26:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10053F26: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10053F2C: push eax */
    RECOMP_ICALL(MEM32(0x100E507C)); /* 0x10053F2D: call dword ptr [0x100e507c] */
    RECOMP_FLAGS_IN();
L_10053F33:
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x10053F33: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x10053F39: mov dword ptr [esi], eax */
    RECOMP_BACKEDGE();
    goto L_1002BFE9; /* 0x10053F3B: jmp 0x1002bfe9 */
L_10053F40:
    RECOMP_CALL(sub_1007C9FE); /* 0x10053F40: call 0x1007c9fe */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3B4) = eax; /* 0x10053F45: mov dword ptr [esi + 0x3b4], eax */
    RECOMP_BACKEDGE();
    goto L_1002BFFC; /* 0x10053F4B: jmp 0x1002bffc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002C002(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C002u);

L_1002C002:
    PUSH32(esp, 0xCu); /* 0x1002C002: push 0xc */
    PUSH32(esp, 0x1002C028u); /* 0x1002C004: push 0x1002c028 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002C009: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1002C00E: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002C013: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + 0x58)); /* 0x1002C017: push dword ptr [eax + 0x58] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x1002C01A: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1002C01D: push eax */
    RECOMP_CALL(sub_1002C0B0); /* 0x1002C01E: call 0x1002c0b0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1002C023u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002C0B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C0B0u);

L_1002C0B0:
    PUSH32(esp, ebp); /* 0x1002C0B0: push ebp */
    ebp = esp; /* 0x1002C0B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002C0B3: push esi */
    RECOMP_CALL(sub_1000F720); /* 0x1002C0B4: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002C0B9: mov esi, eax */
    /* test esi, esi */ /* 0x1002C0BB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002C0D3; /* 0x1002C0BD: je 0x1002c0d3 */
L_1002C0BF:
    /* cmp MEM32(esi + 0x3B4), 0 */ /* 0x1002C0BF: cmp dword ptr [esi + 0x3b4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3B4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053F07; /* 0x1002C0C6: jne 0x10053f07 */
L_1002C0CC:
    PUSH32(esp, esi); /* 0x1002C0CC: push esi */
    RECOMP_CALL(sub_10011BA9); /* 0x1002C0CD: call 0x10011ba9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002C0D2: pop ecx */
L_1002C0D3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002C0D3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E507C)); /* 0x1002C0D6: call dword ptr [0x100e507c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1002C0DCu, "int3 ");
L_10053F07:
    RECOMP_CALL(sub_1007CA56); /* 0x10053F07: call 0x1007ca56 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002C0CC; /* 0x10053F0C: jmp 0x1002c0cc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002C0DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C0DDu);

L_1002C0DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002C0DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x18) = eax; /* 0x1002C0DF: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x1002C0E2: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx) = eax; /* 0x1002C0E5: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x1002C0E7: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0xC) = eax; /* 0x1002C0EA: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x8) = 2; /* 0x1002C0ED: mov dword ptr [ecx + 8], 2 */
    MEM32(ecx + 0x10) = eax; /* 0x1002C0F4: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x14) = eax; /* 0x1002C0F7: mov dword ptr [ecx + 0x14], eax */
    eax = ecx; /* 0x1002C0FA: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C0FC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C105(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C105u);

L_1002C105:
    PUSH32(esp, ebp); /* 0x1002C105: push ebp */
    ebp = esp; /* 0x1002C106: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002C108: push esi */
    PUSH32(esp, MEM32(0x100E0658)); /* 0x1002C109: push dword ptr [0x100e0658] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1002C10F: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002C115: push dword ptr [ebp + 8] */
    esi = eax; /* 0x1002C118: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1002C11A: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0658) = eax; /* 0x1002C120: mov dword ptr [0x100e0658], eax */
    eax = esi; /* 0x1002C125: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1002C127: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002C128: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C129: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C163(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C163u);

L_1002C163:
    PUSH32(esp, 0xAu); /* 0x1002C163: push 0xa */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002C165: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002C16A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C16B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C1B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C1B2u);

L_1002C1B2:
    PUSH32(esp, esi); /* 0x1002C1B2: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1002C1B3: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002C1B8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C1B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C1BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C1BAu);

L_1002C1BA:
    PUSH32(esp, 0xCu); /* 0x1002C1BA: push 0xc */
    PUSH32(esp, 0x1002C248u); /* 0x1002C1BC: push 0x1002c248 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002C1C1: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002C1C6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1002C1C8: mov dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002C1CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x1002C1CD: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1002C1D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002C1D2: setne al */
    /* test eax, eax */ /* 0x1002C1D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100322A5; /* 0x1002C1D7: je 0x100322a5 */
L_1002C1DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002C1DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x1002C1DF: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1002C1E2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002C1E4: setne al */
    /* test eax, eax */ /* 0x1002C1E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100322A5; /* 0x1002C1E9: je 0x100322a5 */
L_1002C1EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002C1EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx), LO16(ecx) */ /* 0x1002C1F1: cmp word ptr [ebx], cx */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002C1F4: setne al */
    /* test eax, eax */ /* 0x1002C1F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100322A5; /* 0x1002C1F9: je 0x100322a5 */
L_1002C1FF:
    RECOMP_CALL(sub_10015857); /* 0x1002C1FF: call 0x10015857 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002C204: mov esi, eax */
    MEM32(ebp + 0x8) = esi; /* 0x1002C206: mov dword ptr [ebp + 8], esi */
    /* test esi, esi */ /* 0x1002C209: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055F15; /* 0x1002C20B: je 0x10055f15 */
L_1002C211:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002C211: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002C213: mov dword ptr [ebp - 4], eax */
    /* cmp MEM16(edi), LO16(eax) */ /* 0x1002C216: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032280; /* 0x1002C219: je 0x10032280 */
L_1002C21F:
    PUSH32(esp, esi); /* 0x1002C21F: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002C220: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1002C223: push ebx */
    PUSH32(esp, edi); /* 0x1002C224: push edi */
    RECOMP_CALL(sub_1002C264); /* 0x1002C225: call 0x1002c264 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002C22A: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1002C22D: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002C22F: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002C232: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002C1B2); /* 0x1002C239: call 0x1002c1b2 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1002C23E: mov eax, edi */
L_1002C240:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002C240: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C245: ret  */
L_10032280:
    RECOMP_CALL(sub_1001177D); /* 0x10032280: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10032285: mov dword ptr [eax], 0x16 */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1003228B: push -2 */
    eax = ebp + (-0x10); /* 0x1003228D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10032290: push eax */
    PUSH32(esp, 0x100DF7B8u); /* 0x10032291: push 0x100df7b8 */
    RECOMP_CALL(sub_100321EE); /* 0x10032296: call 0x100321ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1003229B: add esp, 0xc */
    _flag_k = FK_ADD;
L_1003229E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003229E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C240; /* 0x100322A0: jmp 0x1002c240 */
L_100322A5:
    RECOMP_CALL(sub_1001177D); /* 0x100322A5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10055F05; /* 0x100322AA: jmp 0x10055f05 */
L_10055F05:
    MEM32(eax) = 0x16u; /* 0x10055F05: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055F0B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003229E; /* 0x10055F10: jmp 0x1003229e */
L_10055F15:
    RECOMP_CALL(sub_1001177D); /* 0x10055F15: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x10055F1A: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_1003229E; /* 0x10055F20: jmp 0x1003229e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002C264(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C264u);

L_1002C264:
    PUSH32(esp, ebp); /* 0x1002C264: push ebp */
    ebp = esp; /* 0x1002C265: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002C267: push ecx */
    PUSH32(esp, ecx); /* 0x1002C268: push ecx */
    PUSH32(esp, ebx); /* 0x1002C269: push ebx */
    PUSH32(esp, esi); /* 0x1002C26A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1002C26B: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002C26E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1002C270: push edi */
    edi = MEM32(0x100DF638); /* 0x1002C271: mov edi, dword ptr [0x100df638] */
    edx = ecx; /* 0x1002C277: mov edx, ecx */
    PUSH32(esp, 0x20u); /* 0x1002C279: push 0x20 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1002C27B: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1002C27E: mov dword ptr [ebp - 8], ecx */
    eax = POP32_VAL(esp); /* 0x1002C281: pop eax */
L_1002C282:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1002C282: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DE94; /* 0x1002C285: je 0x1002de94 */
L_1002C28B:
    eax = (uint32_t)MEM16(esi); /* 0x1002C28B: movzx eax, word ptr [esi] */
    /* cmp eax, 0x61u */ /* 0x1002C28E: cmp eax, 0x61 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DEA6; /* 0x1002C291: je 0x1002dea6 */
L_1002C297:
    /* cmp eax, 0x72u */ /* 0x1002C297: cmp eax, 0x72 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x72u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002FC27; /* 0x1002C29A: jne 0x1002fc27 */
L_1002C2A0:
    ebx = ecx; /* 0x1002C2A0: mov ebx, ecx */
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x1002C2A2: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002C2A5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1002C2A5: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002C2A8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002C2AA: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM16(esi); /* 0x1002C2AB: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1002C2AE: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002C304; /* 0x1002C2B1: je 0x1002c304 */
L_1002C2B3:
    MEM32(ebp + 0xC) = 0x1000u; /* 0x1002C2B3: mov dword ptr [ebp + 0xc], 0x1000 */
L_1002C2BA:
    /* test ecx, ecx */ /* 0x1002C2BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002C2F9; /* 0x1002C2BC: je 0x1002c2f9 */
L_1002C2BE:
    eax = (uint32_t)LO16(eax); /* 0x1002C2BE: movzx eax, ax */
    /* cmp eax, 0x53u */ /* 0x1002C2C1: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002FC3D; /* 0x1002C2C4: jle 0x1002fc3d */
L_1002C2CA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x54u; /* 0x1002C2CA: sub eax, 0x54 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100326A9; /* 0x1002C2CD: je 0x100326a9 */
L_1002C2D3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xEu; /* 0x1002C2D3: sub eax, 0xe */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1003253F; /* 0x1002C2D6: jne 0x1003253f */
L_1002C2DC:
    /* test ebx, 0xC000u */ /* 0x1002C2DC: test ebx, 0xc000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xC000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032579; /* 0x1002C2E2: jne 0x10032579 */
L_1002C2E8:
    _flag_a = (uint32_t)((ebx | 0x8000u)); _flag_b = (uint32_t)((ebx | 0x8000u));
    ebx = ebx | 0x8000u; /* 0x1002C2E8: or ebx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002C2EE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1002C2EE: add esi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x1002C2F1: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1002C2F4: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002C2BA; /* 0x1002C2F7: jne 0x1002c2ba */
L_1002C2F9:
    eax = MEM32(ebp + (-0x8)); /* 0x1002C2F9: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1002C2FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003156E; /* 0x1002C2FE: jne 0x1003156e */
L_1002C304:
    PUSH32(esp, 0x20u); /* 0x1002C304: push 0x20 */
    eax = POP32_VAL(esp); /* 0x1002C306: pop eax */
L_1002C307:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1002C307: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DEE9; /* 0x1002C30A: je 0x1002dee9 */
L_1002C310:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002C310: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1002C312: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002DE9C; /* 0x1002C315: jne 0x1002de9c */
L_1002C31B:
    PUSH32(esp, 0x180u); /* 0x1002C31B: push 0x180 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002C320: push dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x1002C323: lea eax, [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1002C326: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002C327: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1002C32A: push eax */
    RECOMP_CALL(sub_10015474); /* 0x1002C32B: call 0x10015474 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002C330: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002C333: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002DE8D; /* 0x1002C335: jne 0x1002de8d */
L_1002C33B:
    eax = MEM32(ebp + 0x14); /* 0x1002C33B: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002C33E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x1002C340: mov dword ptr [eax + 4], ecx */
    MEM32(eax) = ecx; /* 0x1002C343: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x1002C345: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x1002C348: mov dword ptr [eax + 0x1c], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1002C34B: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0xC) = edi; /* 0x1002C34E: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = ecx; /* 0x1002C351: mov dword ptr [eax + 0x10], ecx */
L_1002C354:
    edi = POP32_VAL(esp); /* 0x1002C354: pop edi */
    esi = POP32_VAL(esp); /* 0x1002C355: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002C356: pop ebx */
    esp = ebp; /* 0x1002C357: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002C359: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C35A: ret  */
L_1002DE8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002DE8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C354; /* 0x1002DE8F: jmp 0x1002c354 */
L_1002DE94:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1002DE94: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002C282; /* 0x1002DE97: jmp 0x1002c282 */
L_1002DE9C:
    RECOMP_CALL(sub_1001177D); /* 0x1002DE9C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10055F25; /* 0x1002DEA1: jmp 0x10055f25 */
L_1002DEA6:
    ebx = 0x109u; /* 0x1002DEA6: mov ebx, 0x109 */
    goto L_1002FC35; /* 0x1002DEAB: jmp 0x1002fc35 */
L_1002DEB0:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1002DEB0: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055F7C; /* 0x1002DEB4: je 0x10055f7c */
L_1002DEBA:
    goto L_10032579; /* 0x1002DEBA: jmp 0x10032579 */
L_1002DEBF:
    /* test edx, edx */ /* 0x1002DEBF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055F8B; /* 0x1002DEC1: je 0x10055f8b */
L_1002DEC7:
    goto L_10032579; /* 0x1002DEC7: jmp 0x10032579 */
L_1002DECC:
    /* test edx, edx */ /* 0x1002DECC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055F97; /* 0x1002DECE: je 0x10055f97 */
L_1002DED4:
    goto L_10032579; /* 0x1002DED4: jmp 0x10032579 */
L_1002DED9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1002DED9: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_10031571; /* 0x1002DEDC: jmp 0x10031571 */
L_1002DEE1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1002DEE1: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_10031598; /* 0x1002DEE4: jmp 0x10031598 */
L_1002DEE9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1002DEE9: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002C307; /* 0x1002DEEC: jmp 0x1002c307 */
L_1002FC27:
    /* cmp eax, 0x77u */ /* 0x1002FC27: cmp eax, 0x77 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x77u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002DE9C; /* 0x1002FC2A: jne 0x1002de9c */
L_1002FC30:
    ebx = 0x301u; /* 0x1002FC30: mov ebx, 0x301 */
L_1002FC35:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x1002FC35: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2A5; /* 0x1002FC38: jmp 0x1002c2a5 */
L_1002FC3D:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002DEB0; /* 0x1002FC3D: je 0x1002deb0 */
L_1002FC43:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x1002FC43: sub eax, 0x20 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002C2EE; /* 0x1002FC46: je 0x1002c2ee */
L_1002FC4C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1002FC4C: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1003256B; /* 0x1002FC4F: jne 0x1003256b */
L_1002FC55:
    /* test LO8(ebx), 2 */ /* 0x1002FC55: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032579; /* 0x1002FC58: jne 0x10032579 */
L_1002FC5E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1002FC5E: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edi = edi & 0xFFFFFFFCu; /* 0x1002FC61: and edi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x1002FC64: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0x80u)); _flag_b = (uint32_t)((edi | 0x80u));
    edi = edi | 0x80u; /* 0x1002FC67: or edi, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x1002FC6D: jmp 0x1002c2ee */
L_1003156E:
    PUSH32(esp, 0x20u); /* 0x1003156E: push 0x20 */
    eax = POP32_VAL(esp); /* 0x10031570: pop eax */
L_10031571:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x10031571: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DED9; /* 0x10031574: je 0x1002ded9 */
L_1003157A:
    PUSH32(esp, 3); /* 0x1003157A: push 3 */
    PUSH32(esp, esi); /* 0x1003157C: push esi */
    PUSH32(esp, 0x1003160Cu); /* 0x1003157D: push 0x1003160c */
    RECOMP_CALL(sub_100123EE); /* 0x10031582: call 0x100123ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10031587: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1003158A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002DE9C; /* 0x1003158C: jne 0x1002de9c */
L_10031592:
    PUSH32(esp, 0x20u); /* 0x10031592: push 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 6; /* 0x10031594: add esi, 6 */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x10031597: pop eax */
L_10031598:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x10031598: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DEE1; /* 0x1003159B: je 0x1002dee1 */
L_100315A1:
    /* cmp MEM16(esi), 0x3Du */ /* 0x100315A1: cmp word ptr [esi], 0x3d */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0x3Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002DE9C; /* 0x100315A5: jne 0x1002de9c */
L_100315AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x100315AB: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(esi), LO16(eax) */ /* 0x100315AE: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100315AB; /* 0x100315B1: je 0x100315ab */
L_100315B3:
    PUSH32(esp, 5); /* 0x100315B3: push 5 */
    PUSH32(esp, 0x10031614u); /* 0x100315B5: push 0x10031614 */
    PUSH32(esp, esi); /* 0x100315BA: push esi */
    RECOMP_CALL(sub_1001C986); /* 0x100315BB: call 0x1001c986 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100315C0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100315C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055FA3; /* 0x100315C5: je 0x10055fa3 */
L_100315CB:
    PUSH32(esp, 8); /* 0x100315CB: push 8 */
    PUSH32(esp, 0x10031620u); /* 0x100315CD: push 0x10031620 */
    PUSH32(esp, esi); /* 0x100315D2: push esi */
    RECOMP_CALL(sub_1001C986); /* 0x100315D3: call 0x1001c986 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100315D8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100315DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055FB1; /* 0x100315DD: je 0x10055fb1 */
L_100315E3:
    PUSH32(esp, 7); /* 0x100315E3: push 7 */
    PUSH32(esp, 0x10031634u); /* 0x100315E5: push 0x10031634 */
    PUSH32(esp, esi); /* 0x100315EA: push esi */
    RECOMP_CALL(sub_1001C986); /* 0x100315EB: call 0x1001c986 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100315F0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100315F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002DE9C; /* 0x100315F5: jne 0x1002de9c */
L_100315FB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xEu; /* 0x100315FB: add esi, 0xe */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | 0x00010000u)); _flag_b = (uint32_t)((ebx | 0x00010000u));
    ebx = ebx | 0x00010000u; /* 0x100315FE: or ebx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C304; /* 0x10031604: jmp 0x1002c304 */
L_1003253F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1003253F: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002DECC; /* 0x10032540: je 0x1002decc */
L_10032546:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x10032546: sub eax, 0xb */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002DEBF; /* 0x10032549: je 0x1002debf */
L_1003254F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1003254F: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002DE9C; /* 0x10032552: jne 0x1002de9c */
L_10032558:
    /* test ebx, 0xC000u */ /* 0x10032558: test ebx, 0xc000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xC000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032579; /* 0x1003255E: jne 0x10032579 */
L_10032560:
    _flag_a = (uint32_t)((ebx | 0x4000u)); _flag_b = (uint32_t)((ebx | 0x4000u));
    ebx = ebx | 0x4000u; /* 0x10032560: or ebx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x10032566: jmp 0x1002c2ee */
L_1003256B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1003256B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10055F35; /* 0x1003256C: jne 0x10055f35 */
L_10032572:
    MEM32(ebp + (-0x8)) = 1; /* 0x10032572: mov dword ptr [ebp - 8], 1 */
L_10032579:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10032579: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x1003257B: jmp 0x1002c2ee */
L_100326A9:
    eax = MEM32(ebp + 0xC); /* 0x100326A9: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, ebx */ /* 0x100326AC: test eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032579; /* 0x100326AE: jne 0x10032579 */
L_100326B4:
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x100326B4: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x100326B6: jmp 0x1002c2ee */
L_10055F25:
    MEM32(eax) = 0x16u; /* 0x10055F25: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055F2B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002DE8D; /* 0x10055F30: jmp 0x1002de8d */
L_10055F35:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x18u; /* 0x10055F35: sub eax, 0x18 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10055F6B; /* 0x10055F38: je 0x10055f6b */
L_10055F3A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x10055F3A: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10055F60; /* 0x10055F3D: je 0x10055f60 */
L_10055F3F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x10055F3F: sub eax, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002DE9C; /* 0x10055F42: jne 0x1002de9c */
L_10055F48:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x10055F48: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10032579; /* 0x10055F4B: jne 0x10032579 */
L_10055F51:
    MEM32(ebp + (-0x4)) = 1; /* 0x10055F51: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)((ebx | 0x10u)); _flag_b = (uint32_t)((ebx | 0x10u));
    ebx = ebx | 0x10u; /* 0x10055F58: or ebx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x10055F5B: jmp 0x1002c2ee */
L_10055F60:
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x10055F60: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x10055F66: jmp 0x1002c2ee */
L_10055F6B:
    /* test LO8(ebx), 0x40u */ /* 0x10055F6B: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032579; /* 0x10055F6E: jne 0x10032579 */
L_10055F74:
    _flag_a = (uint32_t)((ebx | 0x40u)); _flag_b = (uint32_t)((ebx | 0x40u));
    ebx = ebx | 0x40u; /* 0x10055F74: or ebx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x10055F77: jmp 0x1002c2ee */
L_10055F7C:
    MEM32(ebp + (-0x4)) = 1; /* 0x10055F7C: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)((ebx | 0x20u)); _flag_b = (uint32_t)((ebx | 0x20u));
    ebx = ebx | 0x20u; /* 0x10055F83: or ebx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x10055F86: jmp 0x1002c2ee */
L_10055F8B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10055F8B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFBFFFu);
    edi = edi & 0xFFFFBFFFu; /* 0x10055F8C: and edi, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x10055F92: jmp 0x1002c2ee */
L_10055F97:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10055F97: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((edi | 0x4000u)); _flag_b = (uint32_t)((edi | 0x4000u));
    edi = edi | 0x4000u; /* 0x10055F98: or edi, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C2EE; /* 0x10055F9E: jmp 0x1002c2ee */
L_10055FA3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xAu; /* 0x10055FA3: add esi, 0xa */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | 0x00040000u)); _flag_b = (uint32_t)((ebx | 0x00040000u));
    ebx = ebx | 0x00040000u; /* 0x10055FA6: or ebx, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C304; /* 0x10055FAC: jmp 0x1002c304 */
L_10055FB1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x10055FB1: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | 0x00020000u)); _flag_b = (uint32_t)((ebx | 0x00020000u));
    ebx = ebx | 0x00020000u; /* 0x10055FB4: or ebx, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C304; /* 0x10055FBA: jmp 0x1002c304 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002C35B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C35Bu);

L_1002C35B:
    PUSH32(esp, ebp); /* 0x1002C35B: push ebp */
    ebp = esp; /* 0x1002C35C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002C35E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1002C35F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1002C362: push edi */
    PUSH32(esp, esi); /* 0x1002C363: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x1002C364: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002C369: pop ecx */
    ecx = MEM32(esi + 0xC); /* 0x1002C36A: mov ecx, dword ptr [esi + 0xc] */
    edi = eax; /* 0x1002C36D: mov edi, eax */
    /* test LO8(ecx), 0x82u */ /* 0x1002C36F: test cl, 0x82 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100551F6; /* 0x1002C372: je 0x100551f6 */
L_1002C378:
    /* test LO8(ecx), 0x40u */ /* 0x1002C378: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002C4E0; /* 0x1002C37B: jne 0x1002c4e0 */
L_1002C381:
    PUSH32(esp, ebx); /* 0x1002C381: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002C382: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), 1 */ /* 0x1002C384: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055206; /* 0x1002C387: jne 0x10055206 */
L_1002C38D:
    eax = MEM32(esi + 0xC); /* 0x1002C38D: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    eax = eax & 0xFFFFFFEFu; /* 0x1002C390: and eax, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ebx; /* 0x1002C393: mov dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1002C396: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x1002C399: mov dword ptr [esi + 0xc], eax */
    /* test eax, 0x10Cu */ /* 0x1002C39C: test eax, 0x10c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100313B7; /* 0x1002C3A1: je 0x100313b7 */
L_1002C3A7:
    /* test MEM32(esi + 0xC), 0x108u */ /* 0x1002C3A7: test dword ptr [esi + 0xc], 0x108 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x108u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005524B; /* 0x1002C3AE: je 0x1005524b */
L_1002C3B4:
    edx = MEM32(esi + 0x8); /* 0x1002C3B4: mov edx, dword ptr [esi + 8] */
    ecx = MEM32(esi); /* 0x1002C3B7: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1002C3B9: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x1002C3BB: mov dword ptr [ebp + 0xc], ecx */
    eax = edx + 0x1; /* 0x1002C3BE: lea eax, [edx + 1] */
    MEM32(esi) = eax; /* 0x1002C3C1: mov dword ptr [esi], eax */
    eax = MEM32(esi + 0x18); /* 0x1002C3C3: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002C3C6: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x4) = eax; /* 0x1002C3C7: mov dword ptr [esi + 4], eax */
    /* test ecx, ecx */ /* 0x1002C3CA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002C3F7; /* 0x1002C3CC: jle 0x1002c3f7 */
L_1002C3CE:
    PUSH32(esp, ecx); /* 0x1002C3CE: push ecx */
    PUSH32(esp, edx); /* 0x1002C3CF: push edx */
    PUSH32(esp, edi); /* 0x1002C3D0: push edi */
    RECOMP_CALL(sub_1002029C); /* 0x1002C3D1: call 0x1002029c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002C3D6: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1002C3D9: mov ebx, eax */
L_1002C3DB:
    ecx = MEM32(esi + 0x8); /* 0x1002C3DB: mov ecx, dword ptr [esi + 8] */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x1002C3DE: mov al, byte ptr [ebp + 8] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1002C3E1: mov byte ptr [ecx], al */
L_1002C3E3:
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x1002C3E3: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10055266; /* 0x1002C3E6: jne 0x10055266 */
L_1002C3EC:
    eax = MEM32(ebp + 0x8); /* 0x1002C3EC: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO8(eax); /* 0x1002C3EF: movzx eax, al */
L_1002C3F2:
    ebx = POP32_VAL(esp); /* 0x1002C3F2: pop ebx */
L_1002C3F3:
    edi = POP32_VAL(esp); /* 0x1002C3F3: pop edi */
    esi = POP32_VAL(esp); /* 0x1002C3F4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002C3F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C3F6: ret  */
L_1002C3F7:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1002C3F7: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002C505; /* 0x1002C3FA: je 0x1002c505 */
L_1002C400:
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1002C400: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002C505; /* 0x1002C403: je 0x1002c505 */
L_1002C409:
    eax = edi; /* 0x1002C409: mov eax, edi */
    ecx = edi; /* 0x1002C40B: mov ecx, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1002C40D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1002C410: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1002C413: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1002C413: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x1002C416: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
L_1002C41D:
    /* test MEM8(ecx + 0x4), 0x20u */ /* 0x1002C41D: test byte ptr [ecx + 4], 0x20 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002C3DB; /* 0x1002C421: je 0x1002c3db */
L_1002C423:
    goto L_10055231; /* 0x1002C423: jmp 0x10055231 */
L_1002C4E0:
    RECOMP_CALL(sub_1001177D); /* 0x1002C4E0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1002C4E5: mov dword ptr [eax], 0x22 */
L_1002C4EB:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x20u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20u; /* 0x1002C4EB: or dword ptr [esi + 0xc], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1002C4EF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C3F3; /* 0x1002C4F2: jmp 0x1002c3f3 */
L_1002C4F7:
    ecx = POP32_VAL(esp); /* 0x1002C4F7: pop ecx */
    /* test eax, eax */ /* 0x1002C4F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100313D7; /* 0x1002C4FA: je 0x100313d7 */
L_1002C500:
    RECOMP_BACKEDGE();
    goto L_1002C3A7; /* 0x1002C500: jmp 0x1002c3a7 */
L_1002C505:
    ecx = 0x100DF520u; /* 0x1002C505: mov ecx, 0x100df520 */
    RECOMP_BACKEDGE();
    goto L_1002C41D; /* 0x1002C50A: jmp 0x1002c41d */
L_100313B7:
    RECOMP_CALL(sub_100142B5); /* 0x100313B7: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100313BC: add eax, 0x20 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x100313BF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005521E; /* 0x100313C1: je 0x1005521e */
L_100313C7:
    RECOMP_CALL(sub_100142B5); /* 0x100313C7: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x100313CC: add eax, 0x40 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x100313CF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005521E; /* 0x100313D1: je 0x1005521e */
L_100313D7:
    PUSH32(esp, esi); /* 0x100313D7: push esi */
    RECOMP_CALL(sub_100158BC); /* 0x100313D8: call 0x100158bc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100313DD: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002C3A7; /* 0x100313DE: jmp 0x1002c3a7 */
L_100551F6:
    RECOMP_CALL(sub_1001177D); /* 0x100551F6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100551FB: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1002C4EB; /* 0x10055201: jmp 0x1002c4eb */
L_10055206:
    MEM32(esi + 0x4) = ebx; /* 0x10055206: mov dword ptr [esi + 4], ebx */
    /* test LO8(ecx), 0x10u */ /* 0x10055209: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055229; /* 0x1005520C: je 0x10055229 */
L_1005520E:
    eax = MEM32(esi + 0x8); /* 0x1005520E: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x10055211: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x10055214: mov dword ptr [esi], eax */
    MEM32(esi + 0xC) = ecx; /* 0x10055216: mov dword ptr [esi + 0xc], ecx */
    RECOMP_BACKEDGE();
    goto L_1002C38D; /* 0x10055219: jmp 0x1002c38d */
L_1005521E:
    PUSH32(esp, edi); /* 0x1005521E: push edi */
    RECOMP_CALL(sub_100142BB); /* 0x1005521F: call 0x100142bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002C4F7; /* 0x10055224: jmp 0x1002c4f7 */
L_10055229:
    _flag_a = (uint32_t)((ecx | 0x20u)); _flag_b = (uint32_t)((ecx | 0x20u));
    ecx = ecx | 0x20u; /* 0x10055229: or ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ecx; /* 0x1005522C: mov dword ptr [esi + 0xc], ecx */
    goto L_1005526A; /* 0x1005522F: jmp 0x1005526a */
L_10055231:
    PUSH32(esp, 2); /* 0x10055231: push 2 */
    PUSH32(esp, ebx); /* 0x10055233: push ebx */
    PUSH32(esp, ebx); /* 0x10055234: push ebx */
    PUSH32(esp, edi); /* 0x10055235: push edi */
    RECOMP_CALL(sub_100A18FC); /* 0x10055236: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005523B: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005523D: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10055240: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002C3DB; /* 0x10055243: jne 0x1002c3db */
L_10055249:
    goto L_10055266; /* 0x10055249: jmp 0x10055266 */
L_1005524B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005524B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005524D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1005524E: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x1005524F: mov dword ptr [ebp + 0xc], eax */
    eax = ebp + 0x8; /* 0x10055252: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10055255: push eax */
    PUSH32(esp, edi); /* 0x10055256: push edi */
    RECOMP_CALL(sub_1002029C); /* 0x10055257: call 0x1002029c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005525C: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1005525F: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_1002C3E3; /* 0x10055261: jmp 0x1002c3e3 */
L_10055266:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x20u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20u; /* 0x10055266: or dword ptr [esi + 0xc], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005526A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005526A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C3F2; /* 0x1005526D: jmp 0x1002c3f2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002C43E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C43Eu);

L_1002C43E:
    PUSH32(esp, 0xEu); /* 0x1002C43E: push 0xe */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002C440: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002C445: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C446: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C447(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C447u);

L_1002C447:
    PUSH32(esp, 8); /* 0x1002C447: push 8 */
    PUSH32(esp, 0x1002C480u); /* 0x1002C449: push 0x1002c480 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002C44E: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xEu); /* 0x1002C453: push 0xe */
    RECOMP_CALL(sub_1000EDD7); /* 0x1002C455: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002C45A: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002C45B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1002C45F: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x4); /* 0x1002C462: mov esi, dword ptr [eax + 4] */
L_1002C465:
    /* test esi, esi */ /* 0x1002C465: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003529B; /* 0x1002C467: jne 0x1003529b */
L_1002C46D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002C46D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002C43E); /* 0x1002C474: call 0x1002c43e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000EDC3); /* 0x1002C479: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C47E: ret  */
L_1003529B:
    edi = MEM32(esi + 0x4); /* 0x1003529B: mov edi, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1003529E: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100352A0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100352A5: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100352A6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100352AB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100352AC: pop ecx */
    esi = edi; /* 0x100352AD: mov esi, edi */
    RECOMP_BACKEDGE();
    goto L_1002C465; /* 0x100352AF: jmp 0x1002c465 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002C50F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C50Fu);

L_1002C50F:
    PUSH32(esp, ebp); /* 0x1002C50F: push ebp */
    ebp = esp; /* 0x1002C510: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1002C512: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056032; /* 0x1002C516: je 0x10056032 */
L_1002C51C:
    PUSH32(esp, ebx); /* 0x1002C51C: push ebx */
    PUSH32(esp, edi); /* 0x1002C51D: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002C51E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100129AF); /* 0x1002C521: call 0x100129af */
    RECOMP_FLAGS_IN();
    edi = eax + 0x1; /* 0x1002C526: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x1002C529: push edi */
    RECOMP_CALL(sub_1000ED30); /* 0x1002C52A: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1002C52F: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1002C531: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002C532: pop ecx */
    /* test ebx, ebx */ /* 0x1002C533: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002C552; /* 0x1002C535: je 0x1002c552 */
L_1002C537:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002C537: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1002C53A: push edi */
    PUSH32(esp, ebx); /* 0x1002C53B: push ebx */
    RECOMP_CALL(sub_100147CD); /* 0x1002C53C: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002C541: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002C544: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056036; /* 0x1002C546: jne 0x10056036 */
L_1002C54C:
    eax = ebx; /* 0x1002C54C: mov eax, ebx */
L_1002C54E:
    edi = POP32_VAL(esp); /* 0x1002C54E: pop edi */
    ebx = POP32_VAL(esp); /* 0x1002C54F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1002C550: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C551: ret  */
L_1002C552:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002C552: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002C54E; /* 0x1002C554: jmp 0x1002c54e */
L_10056032:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056032: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10056034: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10056035: ret  */
L_10056036:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056036: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10056038: push eax */
    PUSH32(esp, eax); /* 0x10056039: push eax */
    PUSH32(esp, eax); /* 0x1005603A: push eax */
    PUSH32(esp, eax); /* 0x1005603B: push eax */
    PUSH32(esp, eax); /* 0x1005603C: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1005603D: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10056042u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002C5B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C5B6u);

L_1002C5B6:
    RECOMP_ICALL(MEM32(0x100E51EC)); /* 0x1002C5B6: call dword ptr [0x100e51ec] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002C5BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF7B0) = eax; /* 0x1002C5BE: mov dword ptr [0x100df7b0], eax */
    /* test eax, eax */ /* 0x1002C5C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002C5C5: setne cl */
    eax = ecx; /* 0x1002C5C8: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C5CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C5CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C5CBu);

L_1002C5CB:
    PUSH32(esp, ebp); /* 0x1002C5CB: push ebp */
    ebp = esp; /* 0x1002C5CC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1002C5CE: mov eax, dword ptr [ebp + 8] */
    MEM32(0x100E0D54) = eax; /* 0x1002C5D1: mov dword ptr [0x100e0d54], eax */
    ebp = POP32_VAL(esp); /* 0x1002C5D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C5D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C5D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C5D8u);

L_1002C5D8:
    PUSH32(esp, ebp); /* 0x1002C5D8: push ebp */
    ebp = esp; /* 0x1002C5D9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1002C5DB: mov eax, dword ptr [ebp + 8] */
    MEM32(0x100E0ED8) = eax; /* 0x1002C5DE: mov dword ptr [0x100e0ed8], eax */
    ebp = POP32_VAL(esp); /* 0x1002C5E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C5E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C5E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C5E5u);

L_1002C5E5:
    PUSH32(esp, ebp); /* 0x1002C5E5: push ebp */
    ebp = esp; /* 0x1002C5E6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1002C5E8: mov eax, dword ptr [ebp + 8] */
    MEM32(0x100E0658) = eax; /* 0x1002C5EB: mov dword ptr [0x100e0658], eax */
    ebp = POP32_VAL(esp); /* 0x1002C5F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C5F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C5F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C5F2u);

L_1002C5F2:
    PUSH32(esp, ebp); /* 0x1002C5F2: push ebp */
    ebp = esp; /* 0x1002C5F3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1002C5F5: mov eax, dword ptr [ebp + 8] */
    MEM32(0x100E0BEC) = eax; /* 0x1002C5F8: mov dword ptr [0x100e0bec], eax */
    MEM32(0x100E0EDC) = eax; /* 0x1002C5FD: mov dword ptr [0x100e0edc], eax */
    MEM32(0x100E0EE0) = eax; /* 0x1002C602: mov dword ptr [0x100e0ee0], eax */
    MEM32(0x100E0BF0) = eax; /* 0x1002C607: mov dword ptr [0x100e0bf0], eax */
    ebp = POP32_VAL(esp); /* 0x1002C60C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C60D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C60E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C60Eu);

L_1002C60E:
    PUSH32(esp, 0x1009DC2Cu); /* 0x1002C60E: push 0x1009dc2c */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1002C613: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0ED0) = eax; /* 0x1002C619: mov dword ptr [0x100e0ed0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C61E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002C648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002C648u);

L_1002C648:
    PUSH32(esp, 0xDu); /* 0x1002C648: push 0xd */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002C64A: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002C64F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002C650: ret  */
    RECOMP_REGS_OUT();
}
