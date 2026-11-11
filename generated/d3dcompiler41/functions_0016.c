#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_160CED40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CED40u);

L_160CED40:
    eax = 0x8007054Fu; /* 0x160CED40: mov eax, 0x8007054f */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CED45: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160CED50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CED50u);

L_160CED50:
    edi = edi; /* 0x160CED50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CED52: push ebp */
    ebp = esp; /* 0x160CED53: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x160CED55: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CED58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CED5A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CED66; /* 0x160CED5C: je 0x160ced66 */
L_160CED5E:
    /* cmp edx, 0x7FFFFFFFu */ /* 0x160CED5E: cmp edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CED6B; /* 0x160CED64: jbe 0x160ced6b */
L_160CED66:
    eax = 0x80070057u; /* 0x160CED66: mov eax, 0x80070057 */
L_160CED6B:
    /* test eax, eax */ /* 0x160CED6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CED7C; /* 0x160CED6D: jl 0x160ced7c */
L_160CED6F:
    ecx = MEM32(ebp + 0x8); /* 0x160CED6F: mov ecx, dword ptr [ebp + 8] */
    eax = 0x1602DEF0u; /* 0x160CED72: mov eax, 0x1602def0 */
    RECOMP_CALL(sub_160B7C80); /* 0x160CED77: call 0x160b7c80 */
    RECOMP_FLAGS_IN();
L_160CED7C:
    ebp = POP32_VAL(esp); /* 0x160CED7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CED7D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CED90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CED90u);

L_160CED90:
    edi = edi; /* 0x160CED90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CED92: push ebp */
    ebp = esp; /* 0x160CED93: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CED95: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 1; /* 0x160CED98: mov dword ptr [eax], 1 */
    ebp = POP32_VAL(esp); /* 0x160CED9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CED9F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CEDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CEDB0u);

L_160CEDB0:
    edi = edi; /* 0x160CEDB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CEDB2: push ebp */
    ebp = esp; /* 0x160CEDB3: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CEDB5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CEDC1; /* 0x160CEDB9: jne 0x160cedc1 */
L_160CEDBB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CEDBB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CEDBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CEDBE: ret 8 */
L_160CEDC1:
    eax = MEM32(ebp + 0xC); /* 0x160CEDC1: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CEDC4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x160CEDC6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CEE16; /* 0x160CEDC8: je 0x160cee16 */
L_160CEDCA:
    PUSH32(esp, esi); /* 0x160CEDCA: push esi */
    esi = MEM32(ecx + 0x4); /* 0x160CEDCB: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(MEM8(eax + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(eax + 0x58) = (uint8_t)(MEM8(eax + 0x58) & 0xFCu); /* 0x160CEDCE: and byte ptr [eax + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = esi; /* 0x160CEDD2: mov dword ptr [eax], esi */
    esi = 0x10u; /* 0x160CEDD4: mov esi, 0x10 */
    MEM32(eax + 0x4) = esi; /* 0x160CEDD9: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = esi; /* 0x160CEDDC: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = ecx; /* 0x160CEDDF: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = edx; /* 0x160CEDE2: mov dword ptr [eax + 0x10], edx */
    MEM32(eax + 0x18) = edx; /* 0x160CEDE5: mov dword ptr [eax + 0x18], edx */
    MEM32(eax + 0x1C) = edx; /* 0x160CEDE8: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x20) = edx; /* 0x160CEDEB: mov dword ptr [eax + 0x20], edx */
    MEM32(eax + 0x24) = edx; /* 0x160CEDEE: mov dword ptr [eax + 0x24], edx */
    MEM32(eax + 0x28) = edx; /* 0x160CEDF1: mov dword ptr [eax + 0x28], edx */
    MEM32(eax + 0x2C) = edx; /* 0x160CEDF4: mov dword ptr [eax + 0x2c], edx */
    MEM32(eax + 0x30) = edx; /* 0x160CEDF7: mov dword ptr [eax + 0x30], edx */
    MEM32(eax + 0x34) = edx; /* 0x160CEDFA: mov dword ptr [eax + 0x34], edx */
    MEM32(eax + 0x38) = edx; /* 0x160CEDFD: mov dword ptr [eax + 0x38], edx */
    MEM32(eax + 0x3C) = edx; /* 0x160CEE00: mov dword ptr [eax + 0x3c], edx */
    MEM32(eax + 0x40) = edx; /* 0x160CEE03: mov dword ptr [eax + 0x40], edx */
    MEM32(eax + 0x44) = edx; /* 0x160CEE06: mov dword ptr [eax + 0x44], edx */
    MEM32(eax + 0x48) = edx; /* 0x160CEE09: mov dword ptr [eax + 0x48], edx */
    MEM32(eax + 0x4C) = edx; /* 0x160CEE0C: mov dword ptr [eax + 0x4c], edx */
    MEM32(eax + 0x50) = edx; /* 0x160CEE0F: mov dword ptr [eax + 0x50], edx */
    MEM32(eax + 0x54) = edx; /* 0x160CEE12: mov dword ptr [eax + 0x54], edx */
    esi = POP32_VAL(esp); /* 0x160CEE15: pop esi */
L_160CEE16:
    SET_LO8(eax, 1); /* 0x160CEE16: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160CEE18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CEE19: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CEE30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CEE30u);

L_160CEE30:
    edi = edi; /* 0x160CEE30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CEE32: push ebp */
    ebp = esp; /* 0x160CEE33: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CEE35: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x160CEE38: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CEE3C: sete al */
    ebp = POP32_VAL(esp); /* 0x160CEE3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEE40: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CEE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CEE50u);

L_160CEE50:
    eax = ecx; /* 0x160CEE50: mov eax, ecx */
    MEM32(eax) = 0x160396F8u; /* 0x160CEE52: mov dword ptr [eax], 0x160396f8 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEE58: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CEE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CEE60u);

L_160CEE60:
    edi = edi; /* 0x160CEE60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CEE62: push ebp */
    ebp = esp; /* 0x160CEE63: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CEE65: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x160CEE67: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CEE7D; /* 0x160CEE6A: jne 0x160cee7d */
L_160CEE6C:
    eax = MEM32(ebp + 0xC); /* 0x160CEE6C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x160CEE6F: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x160CEE71: mov dword ptr [eax + 4], edx */
    MEM32(eax + 0x8) = edx; /* 0x160CEE74: mov dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CEE77: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CEE79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CEE7A: ret 8 */
L_160CEE7D:
    ecx = MEM32(ebp + 0xC); /* 0x160CEE7D: mov ecx, dword ptr [ebp + 0xc] */
    eax = 1; /* 0x160CEE80: mov eax, 1 */
    MEM32(ecx + 0x8) = eax; /* 0x160CEE85: mov dword ptr [ecx + 8], eax */
    ebp = POP32_VAL(esp); /* 0x160CEE88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CEE89: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CEEA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CEEA0u);

L_160CEEA0:
    edi = edi; /* 0x160CEEA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CEEA2: push ebp */
    ebp = esp; /* 0x160CEEA3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x160CEEA5: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x160CEEA9: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = 1; /* 0x160CEEAC: mov dword ptr [eax], 1 */
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CEEC6; /* 0x160CEEB2: jbe 0x160ceec6 */
L_160CEEB4:
    ecx = MEM32(ebp + 0x20); /* 0x160CEEB4: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(ecx) = 0; /* 0x160CEEB7: mov dword ptr [ecx], 0 */
    eax = 1; /* 0x160CEEBD: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x160CEEC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CEEC3: ret 0x1c */
L_160CEEC6:
    eax = MEM32(ecx + 0x18); /* 0x160CEEC6: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CEEC9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xEu */ /* 0x160CEECB: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CF007; /* 0x160CEECE: ja 0x160cf007 */
L_160CEED4:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CF010)); goto _ljump; }
L_160CEEDB:
    eax = MEM32(ebp + 0x8); /* 0x160CEEDB: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0x8F), 0x10u */ /* 0x160CEEDE: test byte ptr [eax + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEEEE; /* 0x160CEEE5: je 0x160ceeee */
L_160CEEE7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CEEE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CEFEA; /* 0x160CEEE9: jmp 0x160cefea */
L_160CEEEE:
    eax = 4; /* 0x160CEEEE: mov eax, 4 */
    edx = 0x20000032u; /* 0x160CEEF3: mov edx, 0x20000032 */
    goto L_160CEFEA; /* 0x160CEEF8: jmp 0x160cefea */
L_160CEEFD:
    eax = 4; /* 0x160CEEFD: mov eax, 4 */
    goto L_160CEFEA; /* 0x160CEF02: jmp 0x160cefea */
L_160CEF07:
    ecx = MEM32(ebp + 0x8); /* 0x160CEF07: mov ecx, dword ptr [ebp + 8] */
    /* test MEM8(ecx + 0x95), 0x10u */ /* 0x160CEF0A: test byte ptr [ecx + 0x95], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x95)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CEFEA; /* 0x160CEF11: jne 0x160cefea */
L_160CEF17:
    eax = 3; /* 0x160CEF17: mov eax, 3 */
    goto L_160CEFEA; /* 0x160CEF1C: jmp 0x160cefea */
L_160CEF21:
    eax = MEM32(ebp + 0x8); /* 0x160CEF21: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0x8F), 0x10u */ /* 0x160CEF24: test byte ptr [eax + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEF37; /* 0x160CEF2B: je 0x160cef37 */
L_160CEF2D:
    eax = 7; /* 0x160CEF2D: mov eax, 7 */
    goto L_160CEFEA; /* 0x160CEF32: jmp 0x160cefea */
L_160CEF37:
    eax = 4; /* 0x160CEF37: mov eax, 4 */
    edx = eax + 0x1C; /* 0x160CEF3C: lea edx, [eax + 0x1c] */
    goto L_160CEFEA; /* 0x160CEF3F: jmp 0x160cefea */
L_160CEF44:
    ecx = MEM32(ebp + 0x8); /* 0x160CEF44: mov ecx, dword ptr [ebp + 8] */
    /* test MEM8(ecx + 0x8F), 0x10u */ /* 0x160CEF47: test byte ptr [ecx + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEF5A; /* 0x160CEF4E: je 0x160cef5a */
L_160CEF50:
    eax = 8; /* 0x160CEF50: mov eax, 8 */
    goto L_160CEFEA; /* 0x160CEF55: jmp 0x160cefea */
L_160CEF5A:
    eax = 4; /* 0x160CEF5A: mov eax, 4 */
    goto L_160CEFE5; /* 0x160CEF5F: jmp 0x160cefe5 */
L_160CEF64:
    eax = MEM32(ebp + 0x8); /* 0x160CEF64: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0x8F), 0x10u */ /* 0x160CEF67: test byte ptr [eax + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEF37; /* 0x160CEF6E: je 0x160cef37 */
L_160CEF70:
    eax = 9; /* 0x160CEF70: mov eax, 9 */
    goto L_160CEFEA; /* 0x160CEF75: jmp 0x160cefea */
L_160CEF77:
    ecx = MEM32(ebp + 0x8); /* 0x160CEF77: mov ecx, dword ptr [ebp + 8] */
    /* test MEM8(ecx + 0x8F), 0x10u */ /* 0x160CEF7A: test byte ptr [ecx + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEF5A; /* 0x160CEF81: je 0x160cef5a */
L_160CEF83:
    eax = 0xAu; /* 0x160CEF83: mov eax, 0xa */
    goto L_160CEFEA; /* 0x160CEF88: jmp 0x160cefea */
L_160CEF8A:
    eax = MEM32(ebp + 0x8); /* 0x160CEF8A: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0x8F), 0x10u */ /* 0x160CEF8D: test byte ptr [eax + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEF37; /* 0x160CEF94: je 0x160cef37 */
L_160CEF96:
    eax = 0xBu; /* 0x160CEF96: mov eax, 0xb */
    goto L_160CEFEA; /* 0x160CEF9B: jmp 0x160cefea */
L_160CEF9D:
    ecx = MEM32(ebp + 0x8); /* 0x160CEF9D: mov ecx, dword ptr [ebp + 8] */
    /* test MEM8(ecx + 0x8F), 0x10u */ /* 0x160CEFA0: test byte ptr [ecx + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEF5A; /* 0x160CEFA7: je 0x160cef5a */
L_160CEFA9:
    eax = 0xCu; /* 0x160CEFA9: mov eax, 0xc */
    goto L_160CEFEA; /* 0x160CEFAE: jmp 0x160cefea */
L_160CEFB0:
    eax = MEM32(ebp + 0x8); /* 0x160CEFB0: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0x8F), 0x10u */ /* 0x160CEFB3: test byte ptr [eax + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEFC3; /* 0x160CEFBA: je 0x160cefc3 */
L_160CEFBC:
    eax = 0xDu; /* 0x160CEFBC: mov eax, 0xd */
    goto L_160CEFEA; /* 0x160CEFC1: jmp 0x160cefea */
L_160CEFC3:
    eax = 5; /* 0x160CEFC3: mov eax, 5 */
    edx = eax + 0x1B; /* 0x160CEFC8: lea edx, [eax + 0x1b] */
    goto L_160CEFEA; /* 0x160CEFCB: jmp 0x160cefea */
L_160CEFCD:
    ecx = MEM32(ebp + 0x8); /* 0x160CEFCD: mov ecx, dword ptr [ebp + 8] */
    /* test MEM8(ecx + 0x8F), 0x10u */ /* 0x160CEFD0: test byte ptr [ecx + 0x8f], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8F)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEFE0; /* 0x160CEFD7: je 0x160cefe0 */
L_160CEFD9:
    eax = 0xEu; /* 0x160CEFD9: mov eax, 0xe */
    goto L_160CEFEA; /* 0x160CEFDE: jmp 0x160cefea */
L_160CEFE0:
    eax = 5; /* 0x160CEFE0: mov eax, 5 */
L_160CEFE5:
    edx = 0x20000022u; /* 0x160CEFE5: mov edx, 0x20000022 */
L_160CEFEA:
    ecx = MEM32(ebp + 0x10); /* 0x160CEFEA: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x160CEFED: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x14); /* 0x160CEFEF: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x160CEFF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEFF8; /* 0x160CEFF4: je 0x160ceff8 */
L_160CEFF6:
    MEM32(eax) = edx; /* 0x160CEFF6: mov dword ptr [eax], edx */
L_160CEFF8:
    edx = MEM32(ebp + 0x20); /* 0x160CEFF8: mov edx, dword ptr [ebp + 0x20] */
    MEM32(edx) = 1; /* 0x160CEFFB: mov dword ptr [edx], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF001: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CF003: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CF004: ret 0x1c */
L_160CF007:
    eax = 0x8007054Fu; /* 0x160CF007: mov eax, 0x8007054f */
    ebp = POP32_VAL(esp); /* 0x160CF00C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CF00D: ret 0x1c */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CEEDBu: goto L_160CEEDB;
      case 0x160CEEFDu: goto L_160CEEFD;
      case 0x160CEF07u: goto L_160CEF07;
      case 0x160CEF21u: goto L_160CEF21;
      case 0x160CEF44u: goto L_160CEF44;
      case 0x160CEF64u: goto L_160CEF64;
      case 0x160CEF77u: goto L_160CEF77;
      case 0x160CEF8Au: goto L_160CEF8A;
      case 0x160CEF9Du: goto L_160CEF9D;
      case 0x160CEFB0u: goto L_160CEFB0;
      case 0x160CEFCDu: goto L_160CEFCD;
      case 0x160CEFEAu: goto L_160CEFEA;
      case 0x160CF007u: goto L_160CF007;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CF060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF060u);

L_160CF060:
    edi = edi; /* 0x160CF060: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF062: push ebp */
    ebp = esp; /* 0x160CF063: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x160CF065: mov eax, dword ptr [ecx + 0x18] */
    /* cmp eax, 0xEu */ /* 0x160CF068: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CF0DB; /* 0x160CF06B: ja 0x160cf0db */
L_160CF06D:
    eax = (uint32_t)MEM8(eax + 0x160CF0F8); /* 0x160CF06D: movzx eax, byte ptr [eax + 0x160cf0f8] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CF0E4)); goto _ljump; }
L_160CF07B:
    ecx = MEM32(ebp + 0xC); /* 0x160CF07B: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x160CF07E: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = 0; /* 0x160CF081: mov dword ptr [ecx], 0 */
    MEM32(edx) = 1; /* 0x160CF087: mov dword ptr [edx], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF08D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CF08F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CF090: ret 0xc */
L_160CF093:
    edx = MEM32(ebp + 0xC); /* 0x160CF093: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 3; /* 0x160CF096: mov dword ptr [edx], 3 */
    edx = MEM32(ebp + 0x10); /* 0x160CF09C: mov edx, dword ptr [ebp + 0x10] */
    MEM32(edx) = 1; /* 0x160CF09F: mov dword ptr [edx], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF0A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CF0A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CF0A8: ret 0xc */
L_160CF0AB:
    eax = MEM32(ebp + 0xC); /* 0x160CF0AB: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x160CF0AE: mov edx, dword ptr [ebp + 0x10] */
    MEM32(eax) = 1; /* 0x160CF0B1: mov dword ptr [eax], 1 */
    MEM32(edx) = 1; /* 0x160CF0B7: mov dword ptr [edx], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF0BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CF0BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CF0C0: ret 0xc */
L_160CF0C3:
    ecx = MEM32(ebp + 0xC); /* 0x160CF0C3: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x160CF0C6: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = 2; /* 0x160CF0C9: mov dword ptr [ecx], 2 */
    MEM32(edx) = 1; /* 0x160CF0CF: mov dword ptr [edx], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF0D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CF0D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CF0D8: ret 0xc */
L_160CF0DB:
    eax = 0x8007054Fu; /* 0x160CF0DB: mov eax, 0x8007054f */
    ebp = POP32_VAL(esp); /* 0x160CF0E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CF0E1: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CF07Bu: goto L_160CF07B;
      case 0x160CF093u: goto L_160CF093;
      case 0x160CF0ABu: goto L_160CF0AB;
      case 0x160CF0C3u: goto L_160CF0C3;
      case 0x160CF0DBu: goto L_160CF0DB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CF110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF110u);

L_160CF110:
    edi = edi; /* 0x160CF110: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF112: push ebp */
    ebp = esp; /* 0x160CF113: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x160CF115: mov eax, dword ptr [ecx + 0x18] */
    /* cmp eax, 0x45u */ /* 0x160CF118: cmp eax, 0x45 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CF126; /* 0x160CF11B: jae 0x160cf126 */
L_160CF11D:
    ecx = MEM32(eax * 4 + 0x161B2CE0); /* 0x160CF11D: mov ecx, dword ptr [eax*4 + 0x161b2ce0] */
    goto L_160CF12B; /* 0x160CF124: jmp 0x160cf12b */
L_160CF126:
    ecx = 0x1603964Cu; /* 0x160CF126: mov ecx, 0x1603964c */
L_160CF12B:
    edx = MEM32(ebp + 0xC); /* 0x160CF12B: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF12E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CF130: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF13C; /* 0x160CF132: je 0x160cf13c */
L_160CF134:
    /* cmp edx, 0x7FFFFFFFu */ /* 0x160CF134: cmp edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CF141; /* 0x160CF13A: jbe 0x160cf141 */
L_160CF13C:
    eax = 0x80070057u; /* 0x160CF13C: mov eax, 0x80070057 */
L_160CF141:
    /* test eax, eax */ /* 0x160CF141: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CF14F; /* 0x160CF143: jl 0x160cf14f */
L_160CF145:
    eax = ecx; /* 0x160CF145: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160CF147: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_160B7C80); /* 0x160CF14A: call 0x160b7c80 */
    RECOMP_FLAGS_IN();
L_160CF14F:
    ebp = POP32_VAL(esp); /* 0x160CF14F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF150: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CF160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF160u);

L_160CF160:
    edi = edi; /* 0x160CF160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF162: push ebp */
    ebp = esp; /* 0x160CF163: mov ebp, esp */
    ecx = MEM32(ecx + 0x18); /* 0x160CF165: mov ecx, dword ptr [ecx + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x160CF168: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0x00100010u; /* 0x160CF16B: mov dword ptr [eax], 0x100010 */
    /* cmp ecx, 0xEu */ /* 0x160CF171: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CF1AA; /* 0x160CF174: ja 0x160cf1aa */
L_160CF176:
    edx = (uint32_t)MEM8(ecx + 0x160CF1C4); /* 0x160CF176: movzx edx, byte ptr [ecx + 0x160cf1c4] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x160CF1B0)); goto _ljump; }
L_160CF184:
    _flag_a = (uint32_t)((MEM8(eax + 0x1) | 2)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x1) | 2)) << 24;
    MEM8(eax + 0x1) = (uint8_t)(MEM8(eax + 0x1) | 2); /* 0x160CF184: or byte ptr [eax + 1], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160CF188:
    _flag_a = (uint32_t)((MEM8(eax + 0x1) | 1)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x1) | 1)) << 24;
    MEM8(eax + 0x1) = (uint8_t)(MEM8(eax + 0x1) | 1); /* 0x160CF188: or byte ptr [eax + 1], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(eax) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(eax) | 0x40u)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | 0x40u); /* 0x160CF18C: or byte ptr [eax], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CF18F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CF190: ret 4 */
L_160CF193:
    _flag_a = (uint32_t)((MEM8(eax) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax) | 0x20u)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | 0x20u); /* 0x160CF193: or byte ptr [eax], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160CF196:
    /* cmp ecx, 6 */ /* 0x160CF196: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CF199: sete cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(ecx)); /* 0x160CF19C: add cl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(ecx) ^ MEM8(eax + 0x1))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ MEM8(eax + 0x1))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + 0x1)); /* 0x160CF19E: xor cl, byte ptr [eax + 1] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(ecx, LO8(ecx) & 2); /* 0x160CF1A1: and cl, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x1) ^ LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x1) ^ LO8(ecx))) << 24;
    MEM8(eax + 0x1) = (uint8_t)(MEM8(eax + 0x1) ^ LO8(ecx)); /* 0x160CF1A4: xor byte ptr [eax + 1], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(eax) | 0xC0u)) << 24; _flag_b = (uint32_t)((MEM8(eax) | 0xC0u)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | 0xC0u); /* 0x160CF1A7: or byte ptr [eax], 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160CF1AA:
    ebp = POP32_VAL(esp); /* 0x160CF1AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CF1AB: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CF184u: goto L_160CF184;
      case 0x160CF188u: goto L_160CF188;
      case 0x160CF193u: goto L_160CF193;
      case 0x160CF196u: goto L_160CF196;
      case 0x160CF1AAu: goto L_160CF1AA;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CF1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF1E0u);

L_160CF1E0:
    edi = edi; /* 0x160CF1E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF1E2: push ebp */
    ebp = esp; /* 0x160CF1E3: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x160CF1E5: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x160CF1E8: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CF1E9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x160CF1EB: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF2AC; /* 0x160CF1ED: je 0x160cf2ac */
L_160CF1F3:
    eax = MEM32(ecx + 0x4); /* 0x160CF1F3: mov eax, dword ptr [ecx + 4] */
    MEM32(edx) = eax; /* 0x160CF1F6: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x18); /* 0x160CF1F8: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(MEM8(edx + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(edx + 0x58) = (uint8_t)(MEM8(edx + 0x58) & 0xFCu); /* 0x160CF1FB: and byte ptr [edx + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(edx + 0x4) = eax; /* 0x160CF1FF: mov dword ptr [edx + 4], eax */
    eax = 1; /* 0x160CF202: mov eax, 1 */
    MEM32(edx + 0xC) = ecx; /* 0x160CF207: mov dword ptr [edx + 0xc], ecx */
    MEM32(edx + 0x8) = 0x10u; /* 0x160CF20A: mov dword ptr [edx + 8], 0x10 */
    MEM32(edx + 0x10) = esi; /* 0x160CF211: mov dword ptr [edx + 0x10], esi */
    MEM32(edx + 0x18) = esi; /* 0x160CF214: mov dword ptr [edx + 0x18], esi */
    MEM32(edx + 0x1C) = esi; /* 0x160CF217: mov dword ptr [edx + 0x1c], esi */
    MEM32(edx + 0x20) = esi; /* 0x160CF21A: mov dword ptr [edx + 0x20], esi */
    MEM32(edx + 0x24) = esi; /* 0x160CF21D: mov dword ptr [edx + 0x24], esi */
    MEM32(edx + 0x28) = esi; /* 0x160CF220: mov dword ptr [edx + 0x28], esi */
    MEM32(edx + 0x2C) = esi; /* 0x160CF223: mov dword ptr [edx + 0x2c], esi */
    MEM32(edx + 0x30) = eax; /* 0x160CF226: mov dword ptr [edx + 0x30], eax */
    MEM32(edx + 0x34) = eax; /* 0x160CF229: mov dword ptr [edx + 0x34], eax */
    MEM32(edx + 0x38) = eax; /* 0x160CF22C: mov dword ptr [edx + 0x38], eax */
    MEM32(edx + 0x3C) = esi; /* 0x160CF22F: mov dword ptr [edx + 0x3c], esi */
    MEM32(edx + 0x40) = esi; /* 0x160CF232: mov dword ptr [edx + 0x40], esi */
    MEM32(edx + 0x44) = esi; /* 0x160CF235: mov dword ptr [edx + 0x44], esi */
    ecx = MEM32(ecx + 0x18); /* 0x160CF238: mov ecx, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x160CF23B: add ecx, -2 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xCu */ /* 0x160CF23E: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CF294; /* 0x160CF241: ja 0x160cf294 */
L_160CF243:
    ecx = (uint32_t)MEM8(ecx + 0x160CF2C4); /* 0x160CF243: movzx ecx, byte ptr [ecx + 0x160cf2c4] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160CF2B4)); goto _ljump; }
L_160CF251:
    ecx = eax; /* 0x160CF251: mov ecx, eax */
    MEM32(edx + 0x4C) = eax; /* 0x160CF253: mov dword ptr [edx + 0x4c], eax */
    MEM32(edx + 0x48) = ecx; /* 0x160CF256: mov dword ptr [edx + 0x48], ecx */
    MEM32(edx + 0x50) = ecx; /* 0x160CF259: mov dword ptr [edx + 0x50], ecx */
    MEM32(edx + 0x54) = ecx; /* 0x160CF25C: mov dword ptr [edx + 0x54], ecx */
    esi = POP32_VAL(esp); /* 0x160CF25F: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CF260: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF261: ret 8 */
L_160CF264:
    MEM32(edx + 0x4C) = 2; /* 0x160CF264: mov dword ptr [edx + 0x4c], 2 */
    ecx = MEM32(edx + 0x4C); /* 0x160CF26B: mov ecx, dword ptr [edx + 0x4c] */
    MEM32(edx + 0x48) = ecx; /* 0x160CF26E: mov dword ptr [edx + 0x48], ecx */
    MEM32(edx + 0x50) = ecx; /* 0x160CF271: mov dword ptr [edx + 0x50], ecx */
    MEM32(edx + 0x54) = ecx; /* 0x160CF274: mov dword ptr [edx + 0x54], ecx */
    esi = POP32_VAL(esp); /* 0x160CF277: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CF278: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF279: ret 8 */
L_160CF27C:
    MEM32(edx + 0x4C) = 8; /* 0x160CF27C: mov dword ptr [edx + 0x4c], 8 */
    ecx = MEM32(edx + 0x4C); /* 0x160CF283: mov ecx, dword ptr [edx + 0x4c] */
    MEM32(edx + 0x48) = ecx; /* 0x160CF286: mov dword ptr [edx + 0x48], ecx */
    MEM32(edx + 0x50) = ecx; /* 0x160CF289: mov dword ptr [edx + 0x50], ecx */
    MEM32(edx + 0x54) = ecx; /* 0x160CF28C: mov dword ptr [edx + 0x54], ecx */
    esi = POP32_VAL(esp); /* 0x160CF28F: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CF290: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF291: ret 8 */
L_160CF294:
    MEM32(edx + 0x4C) = 4; /* 0x160CF294: mov dword ptr [edx + 0x4c], 4 */
    ecx = MEM32(edx + 0x4C); /* 0x160CF29B: mov ecx, dword ptr [edx + 0x4c] */
    MEM32(edx + 0x48) = ecx; /* 0x160CF29E: mov dword ptr [edx + 0x48], ecx */
    MEM32(edx + 0x50) = ecx; /* 0x160CF2A1: mov dword ptr [edx + 0x50], ecx */
    MEM32(edx + 0x54) = ecx; /* 0x160CF2A4: mov dword ptr [edx + 0x54], ecx */
    esi = POP32_VAL(esp); /* 0x160CF2A7: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CF2A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF2A9: ret 8 */
L_160CF2AC:
    SET_LO8(eax, 1); /* 0x160CF2AC: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160CF2AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CF2AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF2B0: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CF251u: goto L_160CF251;
      case 0x160CF264u: goto L_160CF264;
      case 0x160CF27Cu: goto L_160CF27C;
      case 0x160CF294u: goto L_160CF294;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CF2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF2E0u);

L_160CF2E0:
    edi = edi; /* 0x160CF2E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF2E2: push ebp */
    ebp = esp; /* 0x160CF2E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CF2E5: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x160CF2E8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CF2F2; /* 0x160CF2EA: jne 0x160cf2f2 */
L_160CF2EC:
    SET_LO8(eax, 1); /* 0x160CF2EC: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160CF2EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CF2EF: ret 4 */
L_160CF2F2:
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x160CF2F2: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF2FE; /* 0x160CF2F6: je 0x160cf2fe */
L_160CF2F8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CF2F8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CF2FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CF2FB: ret 4 */
L_160CF2FE:
    ecx = MEM32(ecx + 0x18); /* 0x160CF2FE: mov ecx, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CF301: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(eax + 0x18) */ /* 0x160CF303: cmp ecx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CF306: sete dl */
    SET_LO8(eax, LO8(edx)); /* 0x160CF309: mov al, dl */
    ebp = POP32_VAL(esp); /* 0x160CF30B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CF30C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CF320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF320u);

L_160CF320:
    /* cmp eax, 0x45u */ /* 0x160CF320: cmp eax, 0x45 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CF32D; /* 0x160CF323: jae 0x160cf32d */
L_160CF325:
    eax = MEM32(eax * 4 + 0x161B2CE0); /* 0x160CF325: mov eax, dword ptr [eax*4 + 0x161b2ce0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CF32C: ret  */
L_160CF32D:
    eax = 0x1603964Cu; /* 0x160CF32D: mov eax, 0x1603964c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CF332: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CF340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF340u);

L_160CF340:
    edi = edi; /* 0x160CF340: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CF342: push esi */
    esi = ecx; /* 0x160CF343: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF345: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), eax */ /* 0x160CF347: cmp dword ptr [esi + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF356; /* 0x160CF34A: je 0x160cf356 */
L_160CF34C:
    ecx = MEM32(esi + 0x1C); /* 0x160CF34C: mov ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(ecx); /* 0x160CF34F: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x160CF351: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CF354: call edx */
    RECOMP_FLAGS_IN();
L_160CF356:
    esi = MEM32(esi + 0x8); /* 0x160CF356: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x160CF359: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF375; /* 0x160CF35B: je 0x160cf375 */
L_160CF35D:
    ecx = MEM32(esi + 0x50); /* 0x160CF35D: mov ecx, dword ptr [esi + 0x50] */
    /* test ecx, ecx */ /* 0x160CF360: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF375; /* 0x160CF362: je 0x160cf375 */
L_160CF364:
    SET_LO8(edx, 4); /* 0x160CF364: mov dl, 4 */
L_160CF366:
    /* test MEM8(ecx + 0x64), LO8(edx) */ /* 0x160CF366: test byte ptr [ecx + 0x64], dl */
    _flag_a = (uint32_t)(MEM8(ecx + 0x64)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF36E; /* 0x160CF369: je 0x160cf36e */
L_160CF36B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x34); /* 0x160CF36B: add eax, dword ptr [ecx + 0x34] */
    _flag_k = FK_ADD;
L_160CF36E:
    ecx = MEM32(ecx + 0x58); /* 0x160CF36E: mov ecx, dword ptr [ecx + 0x58] */
    /* test ecx, ecx */ /* 0x160CF371: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF366; /* 0x160CF373: jne 0x160cf366 */
L_160CF375:
    esi = POP32_VAL(esp); /* 0x160CF375: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CF376: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CF380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF380u);

L_160CF380:
    edi = edi; /* 0x160CF380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF382: push ebp */
    ebp = esp; /* 0x160CF383: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160CF385: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CF388: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x160CF389: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160CF38C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160CF38D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x160CF390: push edi */
    edi = ecx; /* 0x160CF391: mov edi, ecx */
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x160CF393: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x160CF397: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x160CF39A: mov dword ptr [ebp - 4], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF3BD; /* 0x160CF3A1: je 0x160cf3bd */
L_160CF3A3:
    ecx = MEM32(edi + 0x1C); /* 0x160CF3A3: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx); /* 0x160CF3A6: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x8); /* 0x160CF3A8: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x160CF3AB: push esi */
    PUSH32(esp, ebx); /* 0x160CF3AC: push ebx */
    RECOMP_ICALL(edx); /* 0x160CF3AD: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CF3AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CF408; /* 0x160CF3B1: jl 0x160cf408 */
L_160CF3B3:
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF425; /* 0x160CF3B3: je 0x160cf425 */
L_160CF3B5:
    eax = MEM32(esi + 0x8); /* 0x160CF3B5: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x160CF3B8: sub ebx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x160CF3BA: mov dword ptr [ebp - 4], eax */
L_160CF3BD:
    edi = MEM32(edi + 0x8); /* 0x160CF3BD: mov edi, dword ptr [edi + 8] */
    /* test edi, edi */ /* 0x160CF3C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF3FD; /* 0x160CF3C2: je 0x160cf3fd */
L_160CF3C4:
    edi = MEM32(edi + 0x50); /* 0x160CF3C4: mov edi, dword ptr [edi + 0x50] */
    /* test edi, edi */ /* 0x160CF3C7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF3FD; /* 0x160CF3C9: je 0x160cf3fd */
L_160CF3CB:
    goto L_160CF3D0; /* 0x160CF3CB: jmp 0x160cf3d0 */
L_160CF3D0:
    /* test MEM8(edi + 0x64), 4 */ /* 0x160CF3D0: test byte ptr [edi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF3F6; /* 0x160CF3D4: je 0x160cf3f6 */
L_160CF3D6:
    /* cmp MEM32(edi + 0x48), 0 */ /* 0x160CF3D6: cmp dword ptr [edi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF3F6; /* 0x160CF3DA: je 0x160cf3f6 */
L_160CF3DC:
    ecx = MEM32(edi + 0x48); /* 0x160CF3DC: mov ecx, dword ptr [edi + 0x48] */
    edx = MEM32(ecx); /* 0x160CF3DF: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x160CF3E1: mov eax, dword ptr [edx + 8] */
    PUSH32(esp, esi); /* 0x160CF3E4: push esi */
    PUSH32(esp, ebx); /* 0x160CF3E5: push ebx */
    RECOMP_ICALL(eax); /* 0x160CF3E6: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CF3E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CF408; /* 0x160CF3EA: jl 0x160cf408 */
L_160CF3EC:
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF411; /* 0x160CF3EC: je 0x160cf411 */
L_160CF3EE:
    eax = MEM32(esi + 0x8); /* 0x160CF3EE: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x160CF3F1: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x160CF3F3: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
L_160CF3F6:
    edi = MEM32(edi + 0x58); /* 0x160CF3F6: mov edi, dword ptr [edi + 0x58] */
    /* test edi, edi */ /* 0x160CF3F9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF3D0; /* 0x160CF3FB: jne 0x160cf3d0 */
L_160CF3FD:
    eax = MEM32(ebp + (-0x4)); /* 0x160CF3FD: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x8) = eax; /* 0x160CF400: mov dword ptr [esi + 8], eax */
    eax = 1; /* 0x160CF403: mov eax, 1 */
L_160CF408:
    edi = POP32_VAL(esp); /* 0x160CF408: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF409: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CF40A: pop ebx */
    esp = ebp; /* 0x160CF40B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF40D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF40E: ret 8 */
L_160CF411:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x160CF411: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CF425; /* 0x160CF415: jne 0x160cf425 */
L_160CF417:
    edx = MEM32(ebp + (-0x4)); /* 0x160CF417: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x160CF41A: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x160CF41D: add edx, ebx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = ecx; /* 0x160CF41F: mov dword ptr [esi + 4], ecx */
    MEM32(esi + 0x8) = edx; /* 0x160CF422: mov dword ptr [esi + 8], edx */
L_160CF425:
    edi = POP32_VAL(esp); /* 0x160CF425: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF426: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF427: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CF429: pop ebx */
    esp = ebp; /* 0x160CF42A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF42C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF42D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CF440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF440u);

L_160CF440:
    edi = edi; /* 0x160CF440: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF442: push ebp */
    ebp = esp; /* 0x160CF443: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x160CF445: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CF448: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x160CF449: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF44C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x160CF44E: push esi */
    esi = MEM32(ebp + 0x18); /* 0x160CF44F: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x160CF452: push edi */
    edi = MEM32(ebp + 0x14); /* 0x160CF453: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x160CF456: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x160CF459: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x160CF45C: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(ecx + 0x1C), eax */ /* 0x160CF45F: cmp dword ptr [ecx + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF4B7; /* 0x160CF462: je 0x160cf4b7 */
L_160CF464:
    ecx = MEM32(ecx + 0x1C); /* 0x160CF464: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x160CF467: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x10); /* 0x160CF469: mov eax, dword ptr [eax + 0x10] */
    edx = ebp + 0x14; /* 0x160CF46C: lea edx, [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x160CF46F: push edx */
    edx = ebp + 0xC; /* 0x160CF470: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160CF473: push edx */
    edx = MEM32(ebp + 0x10); /* 0x160CF474: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x160CF477: push esi */
    PUSH32(esp, edi); /* 0x160CF478: push edi */
    PUSH32(esp, edx); /* 0x160CF479: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160CF47A: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x160CF47D: push ebx */
    PUSH32(esp, edx); /* 0x160CF47E: push edx */
    RECOMP_ICALL(eax); /* 0x160CF47F: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CF481: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CF571; /* 0x160CF483: jl 0x160cf571 */
L_160CF489:
    edx = MEM32(ebp + 0xC); /* 0x160CF489: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x160CF48C: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x160CF48F: mov dword ptr [ebp - 8], ecx */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x160CF492: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF553; /* 0x160CF495: je 0x160cf553 */
L_160CF49B:
    MEM32(ebp + (-0x4)) = edx; /* 0x160CF49B: mov dword ptr [ebp - 4], edx */
    /* test ecx, ecx */ /* 0x160CF49E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF4B5; /* 0x160CF4A0: jbe 0x160cf4b5 */
L_160CF4A2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x160CF4A2: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x160CF4A4: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x160CF4A6: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + ecx; /* 0x160CF4A8: add dword ptr [ebp + 0x10], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CF4AB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x160CF4AD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF4B7; /* 0x160CF4AF: je 0x160cf4b7 */
L_160CF4B1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x160CF4B1: add edi, ecx */
    _flag_k = FK_ADD;
    goto L_160CF4B7; /* 0x160CF4B3: jmp 0x160cf4b7 */
L_160CF4B5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x160CF4B5: sub esi, edx */
    _flag_k = FK_CMP;
L_160CF4B7:
    ecx = MEM32(ebp + (-0xC)); /* 0x160CF4B7: mov ecx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ecx + 0x8); /* 0x160CF4BA: mov ecx, dword ptr [ecx + 8] */
    /* test ecx, ecx */ /* 0x160CF4BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF4DA; /* 0x160CF4BF: jne 0x160cf4da */
L_160CF4C1:
    edx = MEM32(ebp + 0x1C); /* 0x160CF4C1: mov edx, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x4)); /* 0x160CF4C4: mov ecx, dword ptr [ebp - 4] */
    MEM32(edx) = ecx; /* 0x160CF4C7: mov dword ptr [edx], ecx */
    edx = MEM32(ebp + 0x20); /* 0x160CF4C9: mov edx, dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + (-0x8)); /* 0x160CF4CC: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x160CF4CF: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF4D0: pop esi */
    MEM32(edx) = ecx; /* 0x160CF4D1: mov dword ptr [edx], ecx */
    ebx = POP32_VAL(esp); /* 0x160CF4D3: pop ebx */
    esp = ebp; /* 0x160CF4D4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF4D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CF4D7: ret 0x1c */
L_160CF4DA:
    eax = MEM32(ecx + 0x50); /* 0x160CF4DA: mov eax, dword ptr [ecx + 0x50] */
    MEM32(ebp + 0x18) = eax; /* 0x160CF4DD: mov dword ptr [ebp + 0x18], eax */
    /* test eax, eax */ /* 0x160CF4E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF55A; /* 0x160CF4E2: je 0x160cf55a */
L_160CF4E4:
    goto L_160CF4E9; /* 0x160CF4E4: jmp 0x160cf4e9 */
L_160CF4E6:
    eax = MEM32(ebp + 0x18); /* 0x160CF4E6: mov eax, dword ptr [ebp + 0x18] */
L_160CF4E9:
    /* test MEM8(eax + 0x64), 4 */ /* 0x160CF4E9: test byte ptr [eax + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF547; /* 0x160CF4ED: je 0x160cf547 */
L_160CF4EF:
    /* cmp MEM32(eax + 0x48), 0 */ /* 0x160CF4EF: cmp dword ptr [eax + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF547; /* 0x160CF4F3: je 0x160cf547 */
L_160CF4F5:
    /* test ebx, ebx */ /* 0x160CF4F5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF553; /* 0x160CF4F7: je 0x160cf553 */
L_160CF4F9:
    ecx = MEM32(eax + 0x48); /* 0x160CF4F9: mov ecx, dword ptr [eax + 0x48] */
    edx = MEM32(ecx); /* 0x160CF4FC: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x10); /* 0x160CF4FE: mov edx, dword ptr [edx + 0x10] */
    eax = ebp + 0x14; /* 0x160CF501: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x160CF504: push eax */
    eax = ebp + 0xC; /* 0x160CF505: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160CF508: push eax */
    eax = MEM32(ebp + 0x10); /* 0x160CF509: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x160CF50C: push esi */
    PUSH32(esp, edi); /* 0x160CF50D: push edi */
    PUSH32(esp, eax); /* 0x160CF50E: push eax */
    eax = MEM32(ebp + 0x8); /* 0x160CF50F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x160CF512: push ebx */
    PUSH32(esp, eax); /* 0x160CF513: push eax */
    RECOMP_ICALL(edx); /* 0x160CF514: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CF516: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CF571; /* 0x160CF518: jl 0x160cf571 */
L_160CF51A:
    eax = MEM32(ebp + 0x14); /* 0x160CF51A: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0xC); /* 0x160CF51D: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x160CF520: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160CF523: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF553; /* 0x160CF526: je 0x160cf553 */
L_160CF528:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + ecx; /* 0x160CF528: add dword ptr [ebp - 4], ecx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160CF52B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF542; /* 0x160CF52D: jbe 0x160cf542 */
L_160CF52F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x160CF52F: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160CF531: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160CF533: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax; /* 0x160CF535: add dword ptr [ebp + 0x10], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CF538: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x160CF53A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF544; /* 0x160CF53C: je 0x160cf544 */
L_160CF53E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x160CF53E: add edi, eax */
    _flag_k = FK_ADD;
    goto L_160CF544; /* 0x160CF540: jmp 0x160cf544 */
L_160CF542:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x160CF542: sub esi, ecx */
    _flag_k = FK_CMP;
L_160CF544:
    eax = MEM32(ebp + 0x18); /* 0x160CF544: mov eax, dword ptr [ebp + 0x18] */
L_160CF547:
    eax = MEM32(eax + 0x58); /* 0x160CF547: mov eax, dword ptr [eax + 0x58] */
    MEM32(ebp + 0x18) = eax; /* 0x160CF54A: mov dword ptr [ebp + 0x18], eax */
    /* test eax, eax */ /* 0x160CF54D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF4E6; /* 0x160CF54F: jne 0x160cf4e6 */
L_160CF551:
    goto L_160CF55A; /* 0x160CF551: jmp 0x160cf55a */
L_160CF553:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x160CF553: mov dword ptr [ebp - 4], 0xffffffff */
L_160CF55A:
    eax = MEM32(ebp + 0x1C); /* 0x160CF55A: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x4)); /* 0x160CF55D: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x20); /* 0x160CF560: mov edx, dword ptr [ebp + 0x20] */
    MEM32(eax) = ecx; /* 0x160CF563: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x160CF565: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CF568: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x160CF56A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edx) = eax; /* 0x160CF56C: mov dword ptr [edx], eax */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CF56E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160CF570: inc eax */
    _flag_k = FK_INC;
L_160CF571:
    edi = POP32_VAL(esp); /* 0x160CF571: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF572: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CF573: pop ebx */
    esp = ebp; /* 0x160CF574: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF576: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CF577: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_160CF580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF580u);

L_160CF580:
    edi = edi; /* 0x160CF580: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF582: push ebp */
    ebp = esp; /* 0x160CF583: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CF585: push ecx */
    PUSH32(esp, ebx); /* 0x160CF586: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x160CF587: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x160CF58A: push esi */
    esi = ecx; /* 0x160CF58B: mov esi, ecx */
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x160CF58D: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x160CF591: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CF592: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = 0; /* 0x160CF595: mov dword ptr [ebp - 4], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF5BF; /* 0x160CF59C: je 0x160cf5bf */
L_160CF59E:
    ecx = MEM32(esi + 0x1C); /* 0x160CF59E: mov ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(ecx); /* 0x160CF5A1: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x14); /* 0x160CF5A3: mov eax, dword ptr [eax + 0x14] */
    edx = ebp + 0xC; /* 0x160CF5A6: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160CF5A9: push edx */
    PUSH32(esp, ebx); /* 0x160CF5AA: push ebx */
    PUSH32(esp, edi); /* 0x160CF5AB: push edi */
    RECOMP_ICALL(eax); /* 0x160CF5AC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CF5AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CF60E; /* 0x160CF5B0: jl 0x160cf60e */
L_160CF5B2:
    eax = MEM32(ebp + 0xC); /* 0x160CF5B2: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x160CF5B5: sub edi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x160CF5B7: mov dword ptr [ebp - 4], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x160CF5BA: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x160CF5BA: shl eax, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x160CF5BD: add ebx, eax */
    _flag_k = FK_ADD;
L_160CF5BF:
    esi = MEM32(esi + 0x8); /* 0x160CF5BF: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x160CF5C2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF604; /* 0x160CF5C4: je 0x160cf604 */
L_160CF5C6:
    esi = MEM32(esi + 0x50); /* 0x160CF5C6: mov esi, dword ptr [esi + 0x50] */
    /* test esi, esi */ /* 0x160CF5C9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF604; /* 0x160CF5CB: je 0x160cf604 */
L_160CF5CD:
    ecx = ecx; /* 0x160CF5CD: lea ecx, [ecx] */
L_160CF5D0:
    /* test MEM8(esi + 0x64), 4 */ /* 0x160CF5D0: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF5FD; /* 0x160CF5D4: je 0x160cf5fd */
L_160CF5D6:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x160CF5D6: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF5FD; /* 0x160CF5DA: je 0x160cf5fd */
L_160CF5DC:
    ecx = MEM32(esi + 0x48); /* 0x160CF5DC: mov ecx, dword ptr [esi + 0x48] */
    eax = MEM32(ecx); /* 0x160CF5DF: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x14); /* 0x160CF5E1: mov eax, dword ptr [eax + 0x14] */
    edx = ebp + 0xC; /* 0x160CF5E4: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160CF5E7: push edx */
    PUSH32(esp, ebx); /* 0x160CF5E8: push ebx */
    PUSH32(esp, edi); /* 0x160CF5E9: push edi */
    RECOMP_ICALL(eax); /* 0x160CF5EA: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CF5EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CF60E; /* 0x160CF5EE: jl 0x160cf60e */
L_160CF5F0:
    eax = MEM32(ebp + 0xC); /* 0x160CF5F0: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x160CF5F3: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x160CF5F6: sub edi, eax */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x160CF5F8: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x160CF5F8: shl eax, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x160CF5FB: add ebx, eax */
    _flag_k = FK_ADD;
L_160CF5FD:
    esi = MEM32(esi + 0x58); /* 0x160CF5FD: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x160CF600: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF5D0; /* 0x160CF602: jne 0x160cf5d0 */
L_160CF604:
    ecx = MEM32(ebp + 0x10); /* 0x160CF604: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x4)); /* 0x160CF607: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF60A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = edx; /* 0x160CF60C: mov dword ptr [ecx], edx */
L_160CF60E:
    edi = POP32_VAL(esp); /* 0x160CF60E: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF60F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CF610: pop ebx */
    esp = ebp; /* 0x160CF611: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF613: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CF614: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160CF620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF620u);

L_160CF620:
    edi = edi; /* 0x160CF620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF622: push ebp */
    ebp = esp; /* 0x160CF623: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x160CF625: mov eax, dword ptr [ecx + 0x18] */
    /* cmp eax, 3 */ /* 0x160CF628: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CF636; /* 0x160CF62B: jae 0x160cf636 */
L_160CF62D:
    edx = MEM32(eax * 4 + 0x161B24EC); /* 0x160CF62D: mov edx, dword ptr [eax*4 + 0x161b24ec] */
    goto L_160CF63B; /* 0x160CF634: jmp 0x160cf63b */
L_160CF636:
    edx = 0x16039654u; /* 0x160CF636: mov edx, 0x16039654 */
L_160CF63B:
    eax = MEM32(ecx + 0x8); /* 0x160CF63B: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x160CF63E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF647; /* 0x160CF640: je 0x160cf647 */
L_160CF642:
    eax = MEM32(eax + 0xC); /* 0x160CF642: mov eax, dword ptr [eax + 0xc] */
    goto L_160CF64C; /* 0x160CF645: jmp 0x160cf64c */
L_160CF647:
    eax = 0x16039660u; /* 0x160CF647: mov eax, 0x16039660 */
L_160CF64C:
    ecx = MEM32(ebp + 0x8); /* 0x160CF64C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x160CF64F: push eax */
    eax = MEM32(ebp + 0xC); /* 0x160CF650: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160CF653: push edx */
    PUSH32(esp, 0x1602E0C8u); /* 0x160CF654: push 0x1602e0c8 */
    PUSH32(esp, eax); /* 0x160CF659: push eax */
    PUSH32(esp, ecx); /* 0x160CF65A: push ecx */
    RECOMP_CALL(sub_16065F10); /* 0x160CF65B: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x160CF660: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x160CF663: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF664: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CF670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF670u);

L_160CF670:
    edi = edi; /* 0x160CF670: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF672: push ebp */
    ebp = esp; /* 0x160CF673: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CF675: push ecx */
    PUSH32(esp, ebx); /* 0x160CF676: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x160CF677: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x160CF67A: push esi */
    PUSH32(esp, edi); /* 0x160CF67B: push edi */
    edi = ecx; /* 0x160CF67C: mov edi, ecx */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x160CF67E: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = 1; /* 0x160CF682: mov dword ptr [ebp - 4], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF740; /* 0x160CF689: je 0x160cf740 */
L_160CF68F:
    /* test ebx, ebx */ /* 0x160CF68F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF699; /* 0x160CF691: je 0x160cf699 */
L_160CF693:
    MEM32(ebx) = 0; /* 0x160CF693: mov dword ptr [ebx], 0 */
L_160CF699:
    eax = MEM32(edi + 0x8); /* 0x160CF699: mov eax, dword ptr [edi + 8] */
    esi = MEM32(eax + 0x50); /* 0x160CF69C: mov esi, dword ptr [eax + 0x50] */
    /* test esi, esi */ /* 0x160CF69F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF740; /* 0x160CF6A1: je 0x160cf740 */
L_160CF6A7:
    edx = MEM32(ebp + 0x10); /* 0x160CF6A7: mov edx, dword ptr [ebp + 0x10] */
    eax = edx; /* 0x160CF6AA: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x160CF6AC: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x18) = eax; /* 0x160CF6AF: mov dword ptr [ebp + 0x18], eax */
    goto L_160CF6B7; /* 0x160CF6B2: jmp 0x160cf6b7 */
L_160CF6B4:
    eax = MEM32(ebp + 0x18); /* 0x160CF6B4: mov eax, dword ptr [ebp + 0x18] */
L_160CF6B7:
    /* test eax, eax */ /* 0x160CF6B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF6C1; /* 0x160CF6B9: je 0x160cf6c1 */
L_160CF6BB:
    /* test MEM8(esi + 0x64), 4 */ /* 0x160CF6BB: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF72C; /* 0x160CF6BF: je 0x160cf72c */
L_160CF6C1:
    ecx = MEM32(ebp + 0xC); /* 0x160CF6C1: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi + 0x4), ecx */ /* 0x160CF6C4: cmp dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CF71D; /* 0x160CF6C7: jne 0x160cf71d */
L_160CF6C9:
    ecx = MEM32(ebp + 0x8); /* 0x160CF6C9: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx), 0 */ /* 0x160CF6CC: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x8); /* 0x160CF6CF: mov eax, dword ptr [esi + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CF6D9; /* 0x160CF6D2: jne 0x160cf6d9 */
L_160CF6D4:
    /* cmp MEM8(eax), 0 */ /* 0x160CF6D4: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_160CF6E0; /* 0x160CF6D7: jmp 0x160cf6e0 */
L_160CF6D9:
    /* cmp MEM8(eax), 0 */ /* 0x160CF6D9: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF71D; /* 0x160CF6DC: je 0x160cf71d */
L_160CF6DE:
    /* cmp ecx, eax */ /* 0x160CF6DE: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_160CF6E0:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x160CF6E0: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x160CF6E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF71D; /* 0x160CF6E5: je 0x160cf71d */
L_160CF6E7:
    eax = MEM32(ebp + 0x14); /* 0x160CF6E7: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = esi; /* 0x160CF6EA: mov dword ptr [eax], esi */
    eax = esi + 0x5C; /* 0x160CF6EC: lea eax, [esi + 0x5c] */
    MEM32(eax) = 0; /* 0x160CF6EF: mov dword ptr [eax], 0 */
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x160CF6F5: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = eax; /* 0x160CF6F9: mov dword ptr [ebp + 0x14], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF711; /* 0x160CF6FC: je 0x160cf711 */
L_160CF6FE:
    /* test ebx, ebx */ /* 0x160CF6FE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF711; /* 0x160CF700: je 0x160cf711 */
L_160CF702:
    ecx = MEM32(edi + 0x1C); /* 0x160CF702: mov ecx, dword ptr [edi + 0x1c] */
    edx = MEM32(ecx); /* 0x160CF705: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x4); /* 0x160CF707: mov eax, dword ptr [edx + 4] */
    RECOMP_ICALL(eax); /* 0x160CF70A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x160CF70C: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x10); /* 0x160CF70E: mov edx, dword ptr [ebp + 0x10] */
L_160CF711:
    MEM32(ebp + (-0x4)) = 0; /* 0x160CF711: mov dword ptr [ebp - 4], 0 */
    /* test LO8(edx), 2 */ /* 0x160CF718: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF735; /* 0x160CF71B: je 0x160cf735 */
L_160CF71D:
    /* test MEM8(esi + 0x64), 4 */ /* 0x160CF71D: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF72C; /* 0x160CF721: je 0x160cf72c */
L_160CF723:
    /* test ebx, ebx */ /* 0x160CF723: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF72C; /* 0x160CF725: je 0x160cf72c */
L_160CF727:
    ecx = MEM32(esi + 0x34); /* 0x160CF727: mov ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + ecx; /* 0x160CF72A: add dword ptr [ebx], ecx */
    _flag_k = FK_ADD;
L_160CF72C:
    esi = MEM32(esi + 0x58); /* 0x160CF72C: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x160CF72F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF6B4; /* 0x160CF731: jne 0x160cf6b4 */
L_160CF733:
    goto L_160CF743; /* 0x160CF733: jmp 0x160cf743 */
L_160CF735:
    edi = POP32_VAL(esp); /* 0x160CF735: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF736: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CF737: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CF739: pop ebx */
    esp = ebp; /* 0x160CF73A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF73C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CF73D: ret 0x14 */
L_160CF740:
    edx = MEM32(ebp + 0x10); /* 0x160CF740: mov edx, dword ptr [ebp + 0x10] */
L_160CF743:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x160CF743: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF779; /* 0x160CF747: je 0x160cf779 */
L_160CF749:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x160CF749: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF754; /* 0x160CF74D: je 0x160cf754 */
L_160CF74F:
    /* test LO8(edx), 4 */ /* 0x160CF74F: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF779; /* 0x160CF752: jne 0x160cf779 */
L_160CF754:
    esi = MEM32(ebp + 0x14); /* 0x160CF754: mov esi, dword ptr [ebp + 0x14] */
    ecx = MEM32(edi + 0x1C); /* 0x160CF757: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx); /* 0x160CF75A: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x24); /* 0x160CF75C: mov eax, dword ptr [eax + 0x24] */
    PUSH32(esp, ebx); /* 0x160CF75F: push ebx */
    PUSH32(esp, esi); /* 0x160CF760: push esi */
    PUSH32(esp, edx); /* 0x160CF761: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160CF762: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160CF765: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160CF766: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160CF769: push edx */
    RECOMP_ICALL(eax); /* 0x160CF76A: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CF76C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CF77C; /* 0x160CF76E: jl 0x160cf77c */
L_160CF770:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF779; /* 0x160CF770: jne 0x160cf779 */
L_160CF772:
    MEM32(ebp + (-0x4)) = 0; /* 0x160CF772: mov dword ptr [ebp - 4], 0 */
L_160CF779:
    eax = MEM32(ebp + (-0x4)); /* 0x160CF779: mov eax, dword ptr [ebp - 4] */
L_160CF77C:
    edi = POP32_VAL(esp); /* 0x160CF77C: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF77D: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CF77E: pop ebx */
    esp = ebp; /* 0x160CF77F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF781: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CF782: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_160CF790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF790u);

L_160CF790:
    edi = edi; /* 0x160CF790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF792: push ebp */
    ebp = esp; /* 0x160CF793: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CF795: push esi */
    PUSH32(esp, edi); /* 0x160CF796: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CF797: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x160CF79A: mov esi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CF79C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x160CF79E: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = 0x4000u; /* 0x160CF7A2: mov dword ptr [edi], 0x4000 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF7CB; /* 0x160CF7A8: je 0x160cf7cb */
L_160CF7AA:
    ecx = MEM32(esi + 0x1C); /* 0x160CF7AA: mov ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(ecx); /* 0x160CF7AD: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x28); /* 0x160CF7AF: mov eax, dword ptr [eax + 0x28] */
    edx = ebp + 0x8; /* 0x160CF7B2: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x160CF7B5: push edx */
    RECOMP_ICALL(eax); /* 0x160CF7B6: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x160CF7B8: mov ecx, dword ptr [eax] */
    MEM32(edi) = ecx; /* 0x160CF7BA: mov dword ptr [edi], ecx */
    ecx = MEM32(esi + 0x1C); /* 0x160CF7BC: mov ecx, dword ptr [esi + 0x1c] */
    edx = MEM32(ecx); /* 0x160CF7BF: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x4); /* 0x160CF7C1: mov eax, dword ptr [edx + 4] */
    RECOMP_ICALL(eax); /* 0x160CF7C4: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CF7C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CF7C8: seta al */
L_160CF7CB:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x160CF7CB: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF7D5; /* 0x160CF7CF: je 0x160cf7d5 */
L_160CF7D1:
    _flag_a = (uint32_t)((MEM8(edi + 0x1) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(edi + 0x1) | 0x20u)) << 24;
    MEM8(edi + 0x1) = (uint8_t)(MEM8(edi + 0x1) | 0x20u); /* 0x160CF7D1: or byte ptr [edi + 1], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160CF7D5:
    esi = MEM32(esi + 0x8); /* 0x160CF7D5: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x160CF7D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF833; /* 0x160CF7DA: je 0x160cf833 */
L_160CF7DC:
    esi = MEM32(esi + 0x50); /* 0x160CF7DC: mov esi, dword ptr [esi + 0x50] */
    /* test LO8(eax), LO8(eax) */ /* 0x160CF7DF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF7E9; /* 0x160CF7E1: jne 0x160cf7e9 */
L_160CF7E3:
    _flag_a = (uint32_t)((MEM32(edi) | 0x1E2u)); _flag_b = (uint32_t)((MEM32(edi) | 0x1E2u));
    MEM32(edi) = MEM32(edi) | 0x1E2u; /* 0x160CF7E3: or dword ptr [edi], 0x1e2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CF7E9:
    /* test esi, esi */ /* 0x160CF7E9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF829; /* 0x160CF7EB: je 0x160cf829 */
L_160CF7ED:
    ecx = ecx; /* 0x160CF7ED: lea ecx, [ecx] */
L_160CF7F0:
    /* test MEM8(esi + 0x64), 4 */ /* 0x160CF7F0: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF822; /* 0x160CF7F4: je 0x160cf822 */
L_160CF7F6:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x160CF7F6: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF822; /* 0x160CF7FA: je 0x160cf822 */
L_160CF7FC:
    ecx = MEM32(esi + 0x48); /* 0x160CF7FC: mov ecx, dword ptr [esi + 0x48] */
    edx = MEM32(ecx); /* 0x160CF7FF: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x28); /* 0x160CF801: mov edx, dword ptr [edx + 0x28] */
    eax = ebp + 0x8; /* 0x160CF804: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x160CF807: push eax */
    RECOMP_ICALL(edx); /* 0x160CF808: call edx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x160CF80A: mov eax, dword ptr [ebp + 8] */
    ecx = eax; /* 0x160CF80D: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | 0x3CFFE000u)); _flag_b = (uint32_t)((ecx | 0x3CFFE000u));
    ecx = ecx | 0x3CFFE000u; /* 0x160CF80F: or ecx, 0x3cffe000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    ecx = ecx & MEM32(edi); /* 0x160CF815: and ecx, dword ptr [edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3CFFE000u);
    eax = eax & 0x3CFFE000u; /* 0x160CF817: and eax, 0x3cffe000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x160CF81C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = ecx; /* 0x160CF81E: mov dword ptr [edi], ecx */
    SET_LO8(eax, 1); /* 0x160CF820: mov al, 1 */
L_160CF822:
    esi = MEM32(esi + 0x58); /* 0x160CF822: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x160CF825: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF7F0; /* 0x160CF827: jne 0x160cf7f0 */
L_160CF829:
    /* test LO8(eax), LO8(eax) */ /* 0x160CF829: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF833; /* 0x160CF82B: jne 0x160cf833 */
L_160CF82D:
    MEM32(edi) = 0x40u; /* 0x160CF82D: mov dword ptr [edi], 0x40 */
L_160CF833:
    eax = edi; /* 0x160CF833: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x160CF835: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF836: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CF837: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CF838: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CF840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF840u);

L_160CF840:
    edi = edi; /* 0x160CF840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF842: push ebp */
    ebp = esp; /* 0x160CF843: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x160CF845: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x160CF848: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x160CF84B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x160CF84E: push ebx */
    PUSH32(esp, esi); /* 0x160CF84F: push esi */
    PUSH32(esp, edi); /* 0x160CF850: push edi */
    MEM32(esp + 0x10) = ecx; /* 0x160CF851: mov dword ptr [esp + 0x10], ecx */
    /* test LO8(eax), 1 */ /* 0x160CF855: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF864; /* 0x160CF857: jne 0x160cf864 */
L_160CF859:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CF859: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CF85B: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF85C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CF85D: pop ebx */
    esp = ebp; /* 0x160CF85E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF860: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF861: ret 8 */
L_160CF864:
    esi = MEM32(ebp + 0xC); /* 0x160CF864: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160CF867: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x160CF869: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF966; /* 0x160CF86B: je 0x160cf966 */
L_160CF871:
    edx = MEM32(ecx + 0x4); /* 0x160CF871: mov edx, dword ptr [ecx + 4] */
    MEM32(esi) = edx; /* 0x160CF874: mov dword ptr [esi], edx */
    edx = 0x10u; /* 0x160CF876: mov edx, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x160CF87B: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x160CF87D: mov dword ptr [esi + 4], edx */
    MEM32(esi + 0x8) = edx; /* 0x160CF880: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = ecx; /* 0x160CF883: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = ebx; /* 0x160CF886: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x18) = ebx; /* 0x160CF889: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi + 0x1C) = ebx; /* 0x160CF88C: mov dword ptr [esi + 0x1c], ebx */
    MEM32(esi + 0x20) = ebx; /* 0x160CF88F: mov dword ptr [esi + 0x20], ebx */
    MEM32(esi + 0x24) = ebx; /* 0x160CF892: mov dword ptr [esi + 0x24], ebx */
    MEM32(esi + 0x28) = ebx; /* 0x160CF895: mov dword ptr [esi + 0x28], ebx */
    MEM32(esi + 0x2C) = ebx; /* 0x160CF898: mov dword ptr [esi + 0x2c], ebx */
    MEM32(esi + 0x30) = 1; /* 0x160CF89B: mov dword ptr [esi + 0x30], 1 */
    MEM32(esi + 0x34) = ebx; /* 0x160CF8A2: mov dword ptr [esi + 0x34], ebx */
    MEM32(esi + 0x38) = ebx; /* 0x160CF8A5: mov dword ptr [esi + 0x38], ebx */
    MEM32(esi + 0x3C) = ebx; /* 0x160CF8A8: mov dword ptr [esi + 0x3c], ebx */
    MEM32(esi + 0x40) = ebx; /* 0x160CF8AB: mov dword ptr [esi + 0x40], ebx */
    MEM32(esi + 0x44) = ebx; /* 0x160CF8AE: mov dword ptr [esi + 0x44], ebx */
    MEM32(esp + 0x14) = eax; /* 0x160CF8B1: mov dword ptr [esp + 0x14], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CF8BC; /* 0x160CF8B5: jne 0x160cf8bc */
L_160CF8B7:
    MEM32(esi + 0x48) = edx; /* 0x160CF8B7: mov dword ptr [esi + 0x48], edx */
    goto L_160CF8BF; /* 0x160CF8BA: jmp 0x160cf8bf */
L_160CF8BC:
    MEM32(esi + 0x48) = ebx; /* 0x160CF8BC: mov dword ptr [esi + 0x48], ebx */
L_160CF8BF:
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x160CF8BF: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x54) = ebx; /* 0x160CF8C3: mov dword ptr [esi + 0x54], ebx */
    edx = MEM32(ecx + 0x1C); /* 0x160CF8C6: mov edx, dword ptr [ecx + 0x1c] */
    /* cmp edx, ebx */ /* 0x160CF8C9: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF8E5; /* 0x160CF8CB: je 0x160cf8e5 */
L_160CF8CD:
    edi = MEM32(ebp + 0x8); /* 0x160CF8CD: mov edi, dword ptr [ebp + 8] */
    eax = esi; /* 0x160CF8D0: mov eax, esi */
    ecx = edx; /* 0x160CF8D2: mov ecx, edx */
    RECOMP_CALL(sub_160CE080); /* 0x160CF8D4: call 0x160ce080 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CF8D9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF859; /* 0x160CF8DB: je 0x160cf859 */
L_160CF8E1:
    ecx = MEM32(esp + 0x10); /* 0x160CF8E1: mov ecx, dword ptr [esp + 0x10] */
L_160CF8E5:
    ecx = MEM32(ecx + 0x8); /* 0x160CF8E5: mov ecx, dword ptr [ecx + 8] */
    /* cmp ecx, ebx */ /* 0x160CF8E8: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF939; /* 0x160CF8EA: je 0x160cf939 */
L_160CF8EC:
    eax = MEM32(ecx + 0x50); /* 0x160CF8EC: mov eax, dword ptr [ecx + 0x50] */
    MEM32(esp + 0x10) = eax; /* 0x160CF8EF: mov dword ptr [esp + 0x10], eax */
    /* cmp eax, ebx */ /* 0x160CF8F3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF939; /* 0x160CF8F5: je 0x160cf939 */
L_160CF8F7:
    goto L_160CF904; /* 0x160CF8F7: jmp 0x160cf904 */
L_160CF900:
    eax = MEM32(esp + 0x10); /* 0x160CF900: mov eax, dword ptr [esp + 0x10] */
L_160CF904:
    /* test MEM8(eax + 0x64), 4 */ /* 0x160CF904: test byte ptr [eax + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF92E; /* 0x160CF908: je 0x160cf92e */
L_160CF90A:
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x34) = MEM32(esi + 0x34) + 1; /* 0x160CF90A: inc dword ptr [esi + 0x34] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x48); /* 0x160CF90D: mov ecx, dword ptr [eax + 0x48] */
    /* cmp ecx, ebx */ /* 0x160CF910: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF859; /* 0x160CF912: je 0x160cf859 */
L_160CF918:
    edi = MEM32(ebp + 0x8); /* 0x160CF918: mov edi, dword ptr [ebp + 8] */
    eax = esi; /* 0x160CF91B: mov eax, esi */
    RECOMP_CALL(sub_160CE080); /* 0x160CF91D: call 0x160ce080 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CF922: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF859; /* 0x160CF924: je 0x160cf859 */
L_160CF92A:
    eax = MEM32(esp + 0x10); /* 0x160CF92A: mov eax, dword ptr [esp + 0x10] */
L_160CF92E:
    eax = MEM32(eax + 0x58); /* 0x160CF92E: mov eax, dword ptr [eax + 0x58] */
    MEM32(esp + 0x10) = eax; /* 0x160CF931: mov dword ptr [esp + 0x10], eax */
    /* cmp eax, ebx */ /* 0x160CF935: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CF900; /* 0x160CF937: jne 0x160cf900 */
L_160CF939:
    /* cmp MEM32(esp + 0x14), ebx */ /* 0x160CF939: cmp dword ptr [esp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF951; /* 0x160CF93D: je 0x160cf951 */
L_160CF93F:
    eax = MEM32(esi + 0x48); /* 0x160CF93F: mov eax, dword ptr [esi + 0x48] */
    ecx = MEM32(esi + 0x54); /* 0x160CF942: mov ecx, dword ptr [esi + 0x54] */
    edx = eax + ecx + (-0x1); /* 0x160CF945: lea edx, [eax + ecx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x160CF949: dec eax */
    _flag_k = FK_DEC;
    eax = ~eax; /* 0x160CF94A: not eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x160CF94C: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x54) = edx; /* 0x160CF94E: mov dword ptr [esi + 0x54], edx */
L_160CF951:
    eax = MEM32(esi + 0x54); /* 0x160CF951: mov eax, dword ptr [esi + 0x54] */
    ecx = MEM32(esi + 0x48); /* 0x160CF954: mov ecx, dword ptr [esi + 0x48] */
    MEM32(esi + 0x4C) = eax; /* 0x160CF957: mov dword ptr [esi + 0x4c], eax */
    eax = ecx + eax + (-0x1); /* 0x160CF95A: lea eax, [ecx + eax - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160CF95E: dec ecx */
    _flag_k = FK_DEC;
    ecx = ~ecx; /* 0x160CF95F: not ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x160CF961: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x50) = eax; /* 0x160CF963: mov dword ptr [esi + 0x50], eax */
L_160CF966:
    edi = POP32_VAL(esp); /* 0x160CF966: pop edi */
    esi = POP32_VAL(esp); /* 0x160CF967: pop esi */
    SET_LO8(eax, 1); /* 0x160CF968: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x160CF96A: pop ebx */
    esp = ebp; /* 0x160CF96B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CF96D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CF96E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CF980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CF980u);

L_160CF980:
    edi = edi; /* 0x160CF980: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CF982: push ebp */
    ebp = esp; /* 0x160CF983: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x160CF985: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x160CF988: push ebx */
    ebx = ecx; /* 0x160CF989: mov ebx, ecx */
    /* cmp ebx, edx */ /* 0x160CF98B: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CF996; /* 0x160CF98D: jne 0x160cf996 */
L_160CF98F:
    SET_LO8(eax, 1); /* 0x160CF98F: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x160CF991: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CF992: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CF993: ret 4 */
L_160CF996:
    eax = MEM32(edx + 0x4); /* 0x160CF996: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(ebx + 0x4) */ /* 0x160CF999: cmp eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF9A5; /* 0x160CF99C: je 0x160cf9a5 */
L_160CF99E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CF99E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x160CF9A0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CF9A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CF9A2: ret 4 */
L_160CF9A5:
    eax = MEM32(edx + 0x1C); /* 0x160CF9A5: mov eax, dword ptr [edx + 0x1c] */
    ecx = MEM32(ebx + 0x1C); /* 0x160CF9A8: mov ecx, dword ptr [ebx + 0x1c] */
    /* cmp ecx, eax */ /* 0x160CF9AB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF9C6; /* 0x160CF9AD: je 0x160cf9c6 */
L_160CF9AF:
    /* test ecx, ecx */ /* 0x160CF9AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF99E; /* 0x160CF9B1: je 0x160cf99e */
L_160CF9B3:
    /* test eax, eax */ /* 0x160CF9B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF99E; /* 0x160CF9B5: je 0x160cf99e */
L_160CF9B7:
    edx = MEM32(ecx); /* 0x160CF9B7: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x160CF9B9: push eax */
    eax = MEM32(edx + 0x30); /* 0x160CF9BA: mov eax, dword ptr [edx + 0x30] */
    RECOMP_ICALL(eax); /* 0x160CF9BD: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CF9BF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF99E; /* 0x160CF9C1: je 0x160cf99e */
L_160CF9C3:
    edx = MEM32(ebp + 0x8); /* 0x160CF9C3: mov edx, dword ptr [ebp + 8] */
L_160CF9C6:
    PUSH32(esp, esi); /* 0x160CF9C6: push esi */
    esi = MEM32(edx + 0x20); /* 0x160CF9C7: mov esi, dword ptr [edx + 0x20] */
    PUSH32(esp, edi); /* 0x160CF9CA: push edi */
    edi = MEM32(ebx + 0x20); /* 0x160CF9CB: mov edi, dword ptr [ebx + 0x20] */
    edi = edi; /* 0x160CF9CE: mov edi, edi */
L_160CF9D0:
    /* test edi, edi */ /* 0x160CF9D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CF9FF; /* 0x160CF9D2: je 0x160cf9ff */
L_160CF9D4:
    /* test esi, esi */ /* 0x160CF9D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CF9D6: je 0x160cfa3e */
L_160CF9D8:
    eax = MEM32(esi); /* 0x160CF9D8: mov eax, dword ptr [esi] */
    ecx = MEM32(edi); /* 0x160CF9DA: mov ecx, dword ptr [edi] */
    /* cmp ecx, eax */ /* 0x160CF9DC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CF9F7; /* 0x160CF9DE: je 0x160cf9f7 */
L_160CF9E0:
    /* test ecx, ecx */ /* 0x160CF9E0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CF9E2: je 0x160cfa3e */
L_160CF9E4:
    /* test eax, eax */ /* 0x160CF9E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CF9E6: je 0x160cfa3e */
L_160CF9E8:
    edx = MEM32(ecx); /* 0x160CF9E8: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x160CF9EA: push eax */
    eax = MEM32(edx + 0x30); /* 0x160CF9EB: mov eax, dword ptr [edx + 0x30] */
    RECOMP_ICALL(eax); /* 0x160CF9EE: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CF9F0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CF9F2: je 0x160cfa3e */
L_160CF9F4:
    edx = MEM32(ebp + 0x8); /* 0x160CF9F4: mov edx, dword ptr [ebp + 8] */
L_160CF9F7:
    edi = MEM32(edi + 0x4); /* 0x160CF9F7: mov edi, dword ptr [edi + 4] */
    esi = MEM32(esi + 0x4); /* 0x160CF9FA: mov esi, dword ptr [esi + 4] */
    RECOMP_BACKEDGE();
    goto L_160CF9D0; /* 0x160CF9FD: jmp 0x160cf9d0 */
L_160CF9FF:
    /* test esi, esi */ /* 0x160CF9FF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CFA01: jne 0x160cfa3e */
L_160CFA03:
    ecx = MEM32(ebx + 0x8); /* 0x160CFA03: mov ecx, dword ptr [ebx + 8] */
    /* test ecx, ecx */ /* 0x160CFA06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFA17; /* 0x160CFA08: jne 0x160cfa17 */
L_160CFA0A:
    /* cmp MEM32(edx + 0x8), ecx */ /* 0x160CFA0A: cmp dword ptr [edx + 8], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x160CFA0D: pop edi */
    esi = POP32_VAL(esp); /* 0x160CFA0E: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CFA0F: sete al */
    ebx = POP32_VAL(esp); /* 0x160CFA12: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CFA13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFA14: ret 4 */
L_160CFA17:
    eax = MEM32(edx + 0x8); /* 0x160CFA17: mov eax, dword ptr [edx + 8] */
    /* test eax, eax */ /* 0x160CFA1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CFA1C: je 0x160cfa3e */
L_160CFA1E:
    edi = MEM32(ecx + 0x50); /* 0x160CFA1E: mov edi, dword ptr [ecx + 0x50] */
    esi = MEM32(eax + 0x50); /* 0x160CFA21: mov esi, dword ptr [eax + 0x50] */
    /* test edi, edi */ /* 0x160CFA24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA78; /* 0x160CFA26: je 0x160cfa78 */
L_160CFA28:
    SET_LO8(ebx, 4); /* 0x160CFA28: mov bl, 4 */
    ebx = ebx; /* 0x160CFA2A: lea ebx, [ebx] */
L_160CFA30:
    /* test esi, esi */ /* 0x160CFA30: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CFA32: je 0x160cfa3e */
L_160CFA34:
    /* test MEM8(edi + 0x64), LO8(ebx) */ /* 0x160CFA34: test byte ptr [edi + 0x64], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x64)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFA47; /* 0x160CFA37: jne 0x160cfa47 */
L_160CFA39:
    /* test MEM8(esi + 0x64), LO8(ebx) */ /* 0x160CFA39: test byte ptr [esi + 0x64], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA6E; /* 0x160CFA3C: je 0x160cfa6e */
L_160CFA3E:
    edi = POP32_VAL(esp); /* 0x160CFA3E: pop edi */
    esi = POP32_VAL(esp); /* 0x160CFA3F: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CFA40: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x160CFA42: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CFA43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFA44: ret 4 */
L_160CFA47:
    /* test MEM8(esi + 0x64), LO8(ebx) */ /* 0x160CFA47: test byte ptr [esi + 0x64], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CFA4A: je 0x160cfa3e */
L_160CFA4C:
    /* cmp MEM32(edi + 0x48), 0 */ /* 0x160CFA4C: cmp dword ptr [edi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x48); /* 0x160CFA50: mov eax, dword ptr [esi + 0x48] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CFA5B; /* 0x160CFA53: jne 0x160cfa5b */
L_160CFA55:
    /* test eax, eax */ /* 0x160CFA55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CFA57: jne 0x160cfa3e */
L_160CFA59:
    goto L_160CFA5F; /* 0x160CFA59: jmp 0x160cfa5f */
L_160CFA5B:
    /* test eax, eax */ /* 0x160CFA5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CFA5D: je 0x160cfa3e */
L_160CFA5F:
    ecx = MEM32(edi + 0x48); /* 0x160CFA5F: mov ecx, dword ptr [edi + 0x48] */
    edx = MEM32(ecx); /* 0x160CFA62: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x160CFA64: push eax */
    eax = MEM32(edx + 0x30); /* 0x160CFA65: mov eax, dword ptr [edx + 0x30] */
    RECOMP_ICALL(eax); /* 0x160CFA68: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CFA6A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFA3E; /* 0x160CFA6C: je 0x160cfa3e */
L_160CFA6E:
    edi = MEM32(edi + 0x58); /* 0x160CFA6E: mov edi, dword ptr [edi + 0x58] */
    esi = MEM32(esi + 0x58); /* 0x160CFA71: mov esi, dword ptr [esi + 0x58] */
    /* test edi, edi */ /* 0x160CFA74: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFA30; /* 0x160CFA76: jne 0x160cfa30 */
L_160CFA78:
    edi = POP32_VAL(esp); /* 0x160CFA78: pop edi */
    /* test esi, esi */ /* 0x160CFA79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CFA7B: pop esi */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CFA7C: sete al */
    ebx = POP32_VAL(esp); /* 0x160CFA7F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CFA80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFA81: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CFA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFA90u);

L_160CFA90:
    ecx = MEM32(eax + 0x1C); /* 0x160CFA90: mov ecx, dword ptr [eax + 0x1c] */
    /* cmp edx, ecx */ /* 0x160CFA93: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CFAB8; /* 0x160CFA95: je 0x160cfab8 */
L_160CFA97:
    eax = MEM32(eax + 0x20); /* 0x160CFA97: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x160CFA9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFAAB; /* 0x160CFA9C: je 0x160cfaab */
L_160CFA9E:
    edi = edi; /* 0x160CFA9E: mov edi, edi */
L_160CFAA0:
    /* cmp MEM32(eax), edx */ /* 0x160CFAA0: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CFAB8; /* 0x160CFAA2: je 0x160cfab8 */
L_160CFAA4:
    eax = MEM32(eax + 0x4); /* 0x160CFAA4: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x160CFAA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFAA0; /* 0x160CFAA9: jne 0x160cfaa0 */
L_160CFAAB:
    /* test ecx, ecx */ /* 0x160CFAAB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFABB; /* 0x160CFAAD: je 0x160cfabb */
L_160CFAAF:
    eax = ecx; /* 0x160CFAAF: mov eax, ecx */
    ecx = MEM32(eax + 0x1C); /* 0x160CFAB1: mov ecx, dword ptr [eax + 0x1c] */
    /* cmp edx, ecx */ /* 0x160CFAB4: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CFA97; /* 0x160CFAB6: jne 0x160cfa97 */
L_160CFAB8:
    SET_LO8(eax, 1); /* 0x160CFAB8: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CFABA: ret  */
L_160CFABB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CFABB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CFABD: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CFAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFAD0u);

L_160CFAD0:
    edi = edi; /* 0x160CFAD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFAD2: push ebp */
    ebp = esp; /* 0x160CFAD3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CFAD5: push ecx */
    eax = MEM32(esi + 0x8); /* 0x160CFAD6: mov eax, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x160CFAD9: mov edx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x160CFADB: push edi */
    PUSH32(esp, 0); /* 0x160CFADC: push 0 */
    edi = ebp + (-0x4); /* 0x160CFADE: lea edi, [ebp - 4] */
    PUSH32(esp, edi); /* 0x160CFAE1: push edi */
    PUSH32(esp, 6); /* 0x160CFAE2: push 6 */
    PUSH32(esp, 4); /* 0x160CFAE4: push 4 */
    PUSH32(esp, eax); /* 0x160CFAE6: push eax */
    eax = MEM32(edx + 0x24); /* 0x160CFAE7: mov eax, dword ptr [edx + 0x24] */
    RECOMP_ICALL(eax); /* 0x160CFAEA: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CFAEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFB3A; /* 0x160CFAEE: jne 0x160cfb3a */
L_160CFAF0:
    edi = MEM32(ebp + (-0x4)); /* 0x160CFAF0: mov edi, dword ptr [ebp - 4] */
    /* test edi, edi */ /* 0x160CFAF3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFB3A; /* 0x160CFAF5: je 0x160cfb3a */
L_160CFAF7:
    ecx = MEM32(edi + 0x58); /* 0x160CFAF7: mov ecx, dword ptr [edi + 0x58] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x160CFAFA: mov dword ptr [ebp - 4], ecx */
    ecx = esi; /* 0x160CFAFD: mov ecx, esi */
    eax = edi; /* 0x160CFAFF: mov eax, edi */
    RECOMP_CALL(sub_160CA950); /* 0x160CFB01: call 0x160ca950 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CFB06: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFB33; /* 0x160CFB08: je 0x160cfb33 */
L_160CFB0A:
    /* cmp MEM32(esi + 0x4), 4 */ /* 0x160CFB0A: cmp dword ptr [esi + 4], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CFB33; /* 0x160CFB0E: jne 0x160cfb33 */
L_160CFB10:
    eax = MEM32(edi + 0x6C); /* 0x160CFB10: mov eax, dword ptr [edi + 0x6c] */
    /* test eax, eax */ /* 0x160CFB13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFB20; /* 0x160CFB15: jne 0x160cfb20 */
L_160CFB17:
    /* cmp MEM32(esi + 0x6C), eax */ /* 0x160CFB17: cmp dword ptr [esi + 0x6c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CFB41; /* 0x160CFB1A: je 0x160cfb41 */
L_160CFB1C:
    /* test eax, eax */ /* 0x160CFB1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFB33; /* 0x160CFB1E: je 0x160cfb33 */
L_160CFB20:
    /* cmp MEM32(esi + 0x6C), 0 */ /* 0x160CFB20: cmp dword ptr [esi + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CFB33; /* 0x160CFB24: je 0x160cfb33 */
L_160CFB26:
    edx = MEM32(edi + 0x70); /* 0x160CFB26: mov edx, dword ptr [edi + 0x70] */
    /* cmp edx, MEM32(esi + 0x70) */ /* 0x160CFB29: cmp edx, dword ptr [esi + 0x70] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CFB2C: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x160CFB2F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFB41; /* 0x160CFB31: jne 0x160cfb41 */
L_160CFB33:
    edi = MEM32(ebp + (-0x4)); /* 0x160CFB33: mov edi, dword ptr [ebp - 4] */
    /* test edi, edi */ /* 0x160CFB36: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFAF7; /* 0x160CFB38: jne 0x160cfaf7 */
L_160CFB3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFB3A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CFB3C: pop edi */
    esp = ebp; /* 0x160CFB3D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CFB3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CFB40: ret  */
L_160CFB41:
    eax = edi; /* 0x160CFB41: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x160CFB43: pop edi */
    esp = ebp; /* 0x160CFB44: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CFB46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CFB47: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CFB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFB50u);

L_160CFB50:
    edi = edi; /* 0x160CFB50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFB52: push ebp */
    ebp = esp; /* 0x160CFB53: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160CFB55: push ebx */
    ebx = ecx; /* 0x160CFB56: mov ebx, ecx */
    ecx = MEM32(ebx + 0x1C); /* 0x160CFB58: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x160CFB5B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160CFB5C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x160CFB5F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CFB60: mov edi, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x160CFB63: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFB72; /* 0x160CFB65: je 0x160cfb72 */
L_160CFB67:
    PUSH32(esp, esi); /* 0x160CFB67: push esi */
    PUSH32(esp, edi); /* 0x160CFB68: push edi */
    RECOMP_CALL(sub_160CFB50); /* 0x160CFB69: call 0x160cfb50 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CFB6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CFBB1; /* 0x160CFB70: jl 0x160cfbb1 */
L_160CFB72:
    eax = MEM32(ebx + 0x20); /* 0x160CFB72: mov eax, dword ptr [ebx + 0x20] */
    MEM32(ebp + 0xC) = eax; /* 0x160CFB75: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x160CFB78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFBAF; /* 0x160CFB7A: je 0x160cfbaf */
L_160CFB7C:
    goto L_160CFB83; /* 0x160CFB7C: jmp 0x160cfb83 */
L_160CFB80:
    eax = MEM32(ebp + 0xC); /* 0x160CFB80: mov eax, dword ptr [ebp + 0xc] */
L_160CFB83:
    ecx = MEM32(eax); /* 0x160CFB83: mov ecx, dword ptr [eax] */
    edx = MEM32(ecx + 0x8); /* 0x160CFB85: mov edx, dword ptr [ecx + 8] */
    ebx = MEM32(edx + 0x50); /* 0x160CFB88: mov ebx, dword ptr [edx + 0x50] */
    /* test ebx, ebx */ /* 0x160CFB8B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFBA5; /* 0x160CFB8D: je 0x160cfba5 */
L_160CFB8F:
    /* nop */ /* 0x160CFB8F: nop  */
L_160CFB90:
    PUSH32(esp, esi); /* 0x160CFB90: push esi */
    PUSH32(esp, edi); /* 0x160CFB91: push edi */
    RECOMP_CALL(sub_160CAA40); /* 0x160CFB92: call 0x160caa40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CFB97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CFBB1; /* 0x160CFB99: jl 0x160cfbb1 */
L_160CFB9B:
    ebx = MEM32(ebx + 0x58); /* 0x160CFB9B: mov ebx, dword ptr [ebx + 0x58] */
    /* test ebx, ebx */ /* 0x160CFB9E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFB90; /* 0x160CFBA0: jne 0x160cfb90 */
L_160CFBA2:
    eax = MEM32(ebp + 0xC); /* 0x160CFBA2: mov eax, dword ptr [ebp + 0xc] */
L_160CFBA5:
    eax = MEM32(eax + 0x4); /* 0x160CFBA5: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0xC) = eax; /* 0x160CFBA8: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x160CFBAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFB80; /* 0x160CFBAD: jne 0x160cfb80 */
L_160CFBAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFBAF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CFBB1:
    edi = POP32_VAL(esp); /* 0x160CFBB1: pop edi */
    esi = POP32_VAL(esp); /* 0x160CFBB2: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CFBB3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CFBB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFBB5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CFBC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFBC0u);

L_160CFBC0:
    edi = edi; /* 0x160CFBC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFBC2: push ebp */
    ebp = esp; /* 0x160CFBC3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160CFBC5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x160CFBC6: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x160CFBC9: push esi */
    esi = ecx; /* 0x160CFBCA: mov esi, ecx */
    ecx = MEM32(esi + 0x1C); /* 0x160CFBCC: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, edi); /* 0x160CFBCF: push edi */
    edi = MEM32(ebp + 0x10); /* 0x160CFBD0: mov edi, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x160CFBD3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFBE6; /* 0x160CFBD5: je 0x160cfbe6 */
L_160CFBD7:
    eax = MEM32(ebp + 0x8); /* 0x160CFBD7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160CFBDA: push edi */
    PUSH32(esp, ebx); /* 0x160CFBDB: push ebx */
    PUSH32(esp, eax); /* 0x160CFBDC: push eax */
    RECOMP_CALL(sub_160CFBC0); /* 0x160CFBDD: call 0x160cfbc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CFBE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CFC35; /* 0x160CFBE4: jl 0x160cfc35 */
L_160CFBE6:
    esi = MEM32(esi + 0x20); /* 0x160CFBE6: mov esi, dword ptr [esi + 0x20] */
    /* test esi, esi */ /* 0x160CFBE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFC33; /* 0x160CFBEB: je 0x160cfc33 */
L_160CFBED:
    ecx = ecx; /* 0x160CFBED: lea ecx, [ecx] */
L_160CFBF0:
    ecx = MEM32(esi); /* 0x160CFBF0: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx + 0x8); /* 0x160CFBF2: mov edx, dword ptr [ecx + 8] */
    ecx = MEM32(edx + 0x50); /* 0x160CFBF5: mov ecx, dword ptr [edx + 0x50] */
    /* test ecx, ecx */ /* 0x160CFBF8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFC2C; /* 0x160CFBFA: je 0x160cfc2c */
L_160CFBFC:
    esp = esp; /* 0x160CFBFC: lea esp, [esp] */
L_160CFC00:
    eax = MEM32(ecx + 0xAC); /* 0x160CFC00: mov eax, dword ptr [ecx + 0xac] */
    /* test eax, eax */ /* 0x160CFC06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFC25; /* 0x160CFC08: je 0x160cfc25 */
L_160CFC0A:
    ebx = ebx; /* 0x160CFC0A: lea ebx, [ebx] */
L_160CFC10:
    edx = MEM32(ebp + 0x8); /* 0x160CFC10: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), edx */ /* 0x160CFC13: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CFC1E; /* 0x160CFC15: jne 0x160cfc1e */
L_160CFC17:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x160CFC17: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CFC1E; /* 0x160CFC1A: jne 0x160cfc1e */
L_160CFC1C:
    MEM32(eax) = edi; /* 0x160CFC1C: mov dword ptr [eax], edi */
L_160CFC1E:
    eax = MEM32(eax + 0x8); /* 0x160CFC1E: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x160CFC21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFC10; /* 0x160CFC23: jne 0x160cfc10 */
L_160CFC25:
    ecx = MEM32(ecx + 0x58); /* 0x160CFC25: mov ecx, dword ptr [ecx + 0x58] */
    /* test ecx, ecx */ /* 0x160CFC28: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFC00; /* 0x160CFC2A: jne 0x160cfc00 */
L_160CFC2C:
    esi = MEM32(esi + 0x4); /* 0x160CFC2C: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x160CFC2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFBF0; /* 0x160CFC31: jne 0x160cfbf0 */
L_160CFC33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFC33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CFC35:
    edi = POP32_VAL(esp); /* 0x160CFC35: pop edi */
    esi = POP32_VAL(esp); /* 0x160CFC36: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CFC37: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CFC38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CFC39: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160CFC50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFC50u);

L_160CFC50:
    eax = 4; /* 0x160CFC50: mov eax, 4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CFC55: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CFC60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFC60u);

L_160CFC60:
    edi = edi; /* 0x160CFC60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFC62: push ebp */
    ebp = esp; /* 0x160CFC63: mov ebp, esp */
    eax = 4; /* 0x160CFC65: mov eax, 4 */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x160CFC6A: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CFC82; /* 0x160CFC6D: jae 0x160cfc82 */
L_160CFC6F:
    eax = MEM32(ebp + 0xC); /* 0x160CFC6F: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x160CFC72: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CFC74: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x160CFC76: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x160CFC79: mov dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFC7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CFC7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFC7F: ret 8 */
L_160CFC82:
    ecx = MEM32(ebp + 0xC); /* 0x160CFC82: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x160CFC85: mov dword ptr [ecx + 8], eax */
    eax = 1; /* 0x160CFC88: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x160CFC8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFC8E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CFCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFCA0u);

L_160CFCA0:
    edi = edi; /* 0x160CFCA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFCA2: push ebp */
    ebp = esp; /* 0x160CFCA3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x18), 4 */ /* 0x160CFCA5: cmp dword ptr [ebp + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x160CFCA9: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = 4; /* 0x160CFCAC: mov dword ptr [eax], 4 */
    if (CMP_B(_flag_a, _flag_b)) goto L_160CFCC6; /* 0x160CFCB2: jb 0x160cfcc6 */
L_160CFCB4:
    ecx = MEM32(ebp + 0x20); /* 0x160CFCB4: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(ecx) = 0; /* 0x160CFCB7: mov dword ptr [ecx], 0 */
    eax = 1; /* 0x160CFCBD: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x160CFCC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CFCC3: ret 0x1c */
L_160CFCC6:
    eax = MEM32(ebp + 0xC); /* 0x160CFCC6: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 4 */ /* 0x160CFCC9: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CFCD3; /* 0x160CFCCC: jbe 0x160cfcd3 */
L_160CFCCE:
    eax = 4; /* 0x160CFCCE: mov eax, 4 */
L_160CFCD3:
    edx = MEM32(ebp + 0x20); /* 0x160CFCD3: mov edx, dword ptr [ebp + 0x20] */
    MEM32(edx) = eax; /* 0x160CFCD6: mov dword ptr [edx], eax */
    /* test eax, eax */ /* 0x160CFCD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFCFF; /* 0x160CFCDA: jbe 0x160cfcff */
L_160CFCDC:
    ecx = MEM32(ebp + 0x10); /* 0x160CFCDC: mov ecx, dword ptr [ebp + 0x10] */
    edx = eax; /* 0x160CFCDF: mov edx, eax */
    eax = MEM32(ebp + 0x14); /* 0x160CFCE1: mov eax, dword ptr [ebp + 0x14] */
L_160CFCE4:
    MEM32(ecx) = 0x13u; /* 0x160CFCE4: mov dword ptr [ecx], 0x13 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x160CFCEA: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160CFCED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFCFA; /* 0x160CFCEF: je 0x160cfcfa */
L_160CFCF1:
    MEM32(eax) = 0; /* 0x160CFCF1: mov dword ptr [eax], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x160CFCF7: add eax, 4 */
    _flag_k = FK_ADD;
L_160CFCFA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x160CFCFA: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160CFCE4; /* 0x160CFCFD: jne 0x160cfce4 */
L_160CFCFF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFCFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CFD01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CFD02: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_160CFD10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFD10u);

L_160CFD10:
    edi = edi; /* 0x160CFD10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFD12: push ebp */
    ebp = esp; /* 0x160CFD13: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x160CFD15: mov eax, dword ptr [ebp + 0xc] */
    ecx = 5; /* 0x160CFD18: mov ecx, 5 */
    MEM32(eax) = ecx; /* 0x160CFD1D: mov dword ptr [eax], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x160CFD1F: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x160CFD22: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x160CFD25: mov dword ptr [eax + 0x30], ecx */
    eax = MEM32(ebp + 0x10); /* 0x160CFD28: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 4; /* 0x160CFD2B: mov dword ptr [eax], 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFD31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CFD33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CFD34: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160CFD40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFD40u);

L_160CFD40:
    edi = edi; /* 0x160CFD40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFD42: push ebp */
    ebp = esp; /* 0x160CFD43: mov ebp, esp */
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x160CFD45: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CFD49: push ebx */
    PUSH32(esp, esi); /* 0x160CFD4A: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CFD6F; /* 0x160CFD4B: je 0x160cfd6f */
L_160CFD4D:
    ecx = MEM32(ecx + 0x18); /* 0x160CFD4D: mov ecx, dword ptr [ecx + 0x18] */
    esi = MEM32(ebp + 0xC); /* 0x160CFD50: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x160CFD53: mov eax, dword ptr [ecx] */
    ebx = MEM32(ebp + 0x8); /* 0x160CFD55: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x18); /* 0x160CFD58: mov edx, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x160CFD5B: push esi */
    PUSH32(esp, ebx); /* 0x160CFD5C: push ebx */
    RECOMP_ICALL(edx); /* 0x160CFD5D: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CFD5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CFD9C; /* 0x160CFD61: jl 0x160cfd9c */
L_160CFD63:
    PUSH32(esp, 0x1603966Cu); /* 0x160CFD63: push 0x1603966c */
    RECOMP_CALL(sub_160D1B20); /* 0x160CFD68: call 0x160d1b20 */
    RECOMP_FLAGS_IN();
    goto L_160CFD96; /* 0x160CFD6D: jmp 0x160cfd96 */
L_160CFD6F:
    edx = MEM32(ebp + 0xC); /* 0x160CFD6F: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFD72: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CFD74: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFD80; /* 0x160CFD76: je 0x160cfd80 */
L_160CFD78:
    /* cmp edx, 0x7FFFFFFFu */ /* 0x160CFD78: cmp edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CFD85; /* 0x160CFD7E: jbe 0x160cfd85 */
L_160CFD80:
    eax = 0x80070057u; /* 0x160CFD80: mov eax, 0x80070057 */
L_160CFD85:
    /* test eax, eax */ /* 0x160CFD85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CFD9C; /* 0x160CFD87: jl 0x160cfd9c */
L_160CFD89:
    ecx = MEM32(ebp + 0x8); /* 0x160CFD89: mov ecx, dword ptr [ebp + 8] */
    eax = 0x16039670u; /* 0x160CFD8C: mov eax, 0x16039670 */
    RECOMP_CALL(sub_160B7C80); /* 0x160CFD91: call 0x160b7c80 */
    RECOMP_FLAGS_IN();
L_160CFD96:
    /* test eax, eax */ /* 0x160CFD96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CFD9C; /* 0x160CFD98: jl 0x160cfd9c */
L_160CFD9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFD9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CFD9C:
    esi = POP32_VAL(esp); /* 0x160CFD9C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CFD9D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CFD9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFD9F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CFDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFDB0u);

L_160CFDB0:
    edi = edi; /* 0x160CFDB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFDB2: push ebp */
    ebp = esp; /* 0x160CFDB3: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x160CFDB5: mov eax, dword ptr [ecx + 0x18] */
    /* test eax, eax */ /* 0x160CFDB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFDC7; /* 0x160CFDBA: je 0x160cfdc7 */
L_160CFDBC:
    ecx = MEM32(ebp + 0x8); /* 0x160CFDBC: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x160CFDBF: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFDC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CFDC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFDC4: ret 4 */
L_160CFDC7:
    eax = 0x80004005u; /* 0x160CFDC7: mov eax, 0x80004005 */
    ebp = POP32_VAL(esp); /* 0x160CFDCC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFDCD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CFDE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFDE0u);

L_160CFDE0:
    edi = edi; /* 0x160CFDE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFDE2: push ebp */
    ebp = esp; /* 0x160CFDE3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CFDE5: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0x00800400u; /* 0x160CFDE8: mov dword ptr [eax], 0x800400 */
    ebp = POP32_VAL(esp); /* 0x160CFDEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFDEF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CFE00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFE00u);

L_160CFE00:
    edi = edi; /* 0x160CFE00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFE02: push ebp */
    ebp = esp; /* 0x160CFE03: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CFE05: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFE11; /* 0x160CFE09: jne 0x160cfe11 */
L_160CFE0B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CFE0B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CFE0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFE0E: ret 8 */
L_160CFE11:
    eax = MEM32(ebp + 0xC); /* 0x160CFE11: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CFE14: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x160CFE16: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CFE88; /* 0x160CFE18: je 0x160cfe88 */
L_160CFE1A:
    PUSH32(esp, ebx); /* 0x160CFE1A: push ebx */
    ebx = 0x10u; /* 0x160CFE1B: mov ebx, 0x10 */
    PUSH32(esp, esi); /* 0x160CFE20: push esi */
    esi = MEM32(ecx + 0x4); /* 0x160CFE21: mov esi, dword ptr [ecx + 4] */
    MEM32(eax + 0xC) = ecx; /* 0x160CFE24: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax) = esi; /* 0x160CFE27: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x160CFE29: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x160CFE2C: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(ecx + 0x18); /* 0x160CFE2F: mov ecx, dword ptr [ecx + 0x18] */
    MEM32(eax + 0x10) = ecx; /* 0x160CFE32: mov dword ptr [eax + 0x10], ecx */
    ecx = 4; /* 0x160CFE35: mov ecx, 4 */
    MEM32(eax + 0x18) = edx; /* 0x160CFE3A: mov dword ptr [eax + 0x18], edx */
    MEM32(eax + 0x1C) = edx; /* 0x160CFE3D: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x20) = edx; /* 0x160CFE40: mov dword ptr [eax + 0x20], edx */
    MEM32(eax + 0x24) = edx; /* 0x160CFE43: mov dword ptr [eax + 0x24], edx */
    MEM32(eax + 0x28) = edx; /* 0x160CFE46: mov dword ptr [eax + 0x28], edx */
    MEM32(eax + 0x2C) = edx; /* 0x160CFE49: mov dword ptr [eax + 0x2c], edx */
    MEM32(eax + 0x30) = 1; /* 0x160CFE4C: mov dword ptr [eax + 0x30], 1 */
    MEM32(eax + 0x34) = ecx; /* 0x160CFE53: mov dword ptr [eax + 0x34], ecx */
    MEM32(eax + 0x38) = ecx; /* 0x160CFE56: mov dword ptr [eax + 0x38], ecx */
    MEM32(eax + 0x3C) = edx; /* 0x160CFE59: mov dword ptr [eax + 0x3c], edx */
    MEM32(eax + 0x40) = edx; /* 0x160CFE5C: mov dword ptr [eax + 0x40], edx */
    MEM32(eax + 0x44) = edx; /* 0x160CFE5F: mov dword ptr [eax + 0x44], edx */
    MEM32(eax + 0x4C) = ebx; /* 0x160CFE62: mov dword ptr [eax + 0x4c], ebx */
    MEM32(eax + 0x54) = ebx; /* 0x160CFE65: mov dword ptr [eax + 0x54], ebx */
    MEM32(eax + 0x50) = ebx; /* 0x160CFE68: mov dword ptr [eax + 0x50], ebx */
    /* test MEM8(ebp + 0x8), LO8(ebx) */ /* 0x160CFE6B: test byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CFE7F; /* 0x160CFE6E: jne 0x160cfe7f */
L_160CFE70:
    _flag_a = (uint32_t)(MEM8(eax + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(eax + 0x58) = (uint8_t)(MEM8(eax + 0x58) & 0xFCu); /* 0x160CFE70: and byte ptr [eax + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax + 0x48) = ebx; /* 0x160CFE74: mov dword ptr [eax + 0x48], ebx */
    esi = POP32_VAL(esp); /* 0x160CFE77: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CFE78: pop ebx */
    SET_LO8(eax, 1); /* 0x160CFE79: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160CFE7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFE7C: ret 8 */
L_160CFE7F:
    _flag_a = (uint32_t)(MEM8(eax + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(eax + 0x58) = (uint8_t)(MEM8(eax + 0x58) & 0xFCu); /* 0x160CFE7F: and byte ptr [eax + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160CFE83: pop esi */
    MEM32(eax + 0x48) = ecx; /* 0x160CFE84: mov dword ptr [eax + 0x48], ecx */
    ebx = POP32_VAL(esp); /* 0x160CFE87: pop ebx */
L_160CFE88:
    SET_LO8(eax, 1); /* 0x160CFE88: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160CFE8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFE8B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CFEA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFEA0u);

L_160CFEA0:
    edi = edi; /* 0x160CFEA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFEA2: push ebp */
    ebp = esp; /* 0x160CFEA3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CFEA5: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x160CFEA8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CFEB2; /* 0x160CFEAA: jne 0x160cfeb2 */
L_160CFEAC:
    SET_LO8(eax, 1); /* 0x160CFEAC: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160CFEAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFEAF: ret 4 */
L_160CFEB2:
    /* cmp MEM32(eax + 0x4), 5 */ /* 0x160CFEB2: cmp dword ptr [eax + 4], 5 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CFED6; /* 0x160CFEB6: jne 0x160cfed6 */
L_160CFEB8:
    eax = MEM32(eax + 0x18); /* 0x160CFEB8: mov eax, dword ptr [eax + 0x18] */
    ecx = MEM32(ecx + 0x18); /* 0x160CFEBB: mov ecx, dword ptr [ecx + 0x18] */
    /* cmp ecx, eax */ /* 0x160CFEBE: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CFEAC; /* 0x160CFEC0: je 0x160cfeac */
L_160CFEC2:
    /* test ecx, ecx */ /* 0x160CFEC2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFED6; /* 0x160CFEC4: je 0x160cfed6 */
L_160CFEC6:
    /* test eax, eax */ /* 0x160CFEC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFED6; /* 0x160CFEC8: je 0x160cfed6 */
L_160CFECA:
    edx = MEM32(ecx); /* 0x160CFECA: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x160CFECC: push eax */
    eax = MEM32(edx + 0x30); /* 0x160CFECD: mov eax, dword ptr [edx + 0x30] */
    RECOMP_ICALL(eax); /* 0x160CFED0: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160CFED2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFED3: ret 4 */
L_160CFED6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CFED6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CFED8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFED9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CFEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFEF0u);

L_160CFEF0:
    eax = MEM32(ecx + 0x2C); /* 0x160CFEF0: mov eax, dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CFEF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CFF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFF00u);

L_160CFF00:
    edi = edi; /* 0x160CFF00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFF02: push ebp */
    ebp = esp; /* 0x160CFF03: mov ebp, esp */
    eax = MEM32(ecx + 0x2C); /* 0x160CFF05: mov eax, dword ptr [ecx + 0x2c] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x160CFF08: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CFF20; /* 0x160CFF0B: jae 0x160cff20 */
L_160CFF0D:
    eax = MEM32(ebp + 0xC); /* 0x160CFF0D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x160CFF10: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CFF12: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x160CFF14: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x160CFF17: mov dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CFF1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CFF1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFF1D: ret 8 */
L_160CFF20:
    ecx = MEM32(ebp + 0xC); /* 0x160CFF20: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x160CFF23: mov dword ptr [ecx + 8], eax */
    eax = 1; /* 0x160CFF26: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x160CFF2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFF2C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CFF40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFF40u);

L_160CFF40:
    edi = edi; /* 0x160CFF40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFF42: push ebp */
    ebp = esp; /* 0x160CFF43: mov ebp, esp */
    eax = MEM32(ecx + 0x28); /* 0x160CFF45: mov eax, dword ptr [ecx + 0x28] */
    edx = MEM32(ebp + 0xC); /* 0x160CFF48: mov edx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x160CFF4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CFF5E; /* 0x160CFF4D: jbe 0x160cff5e */
L_160CFF4F:
    ecx = MEM32(ebp + 0x8); /* 0x160CFF4F: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x160CFF52: mov dword ptr [ecx], eax */
    MEM32(edx) = 1; /* 0x160CFF54: mov dword ptr [edx], 1 */
    ebp = POP32_VAL(esp); /* 0x160CFF5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFF5B: ret 8 */
L_160CFF5E:
    eax = MEM32(ebp + 0x8); /* 0x160CFF5E: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 1; /* 0x160CFF61: mov dword ptr [eax], 1 */
    ecx = MEM32(ecx + 0x2C); /* 0x160CFF67: mov ecx, dword ptr [ecx + 0x2c] */
    MEM32(edx) = ecx; /* 0x160CFF6A: mov dword ptr [edx], ecx */
    ebp = POP32_VAL(esp); /* 0x160CFF6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CFF6D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CFF80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CFF80u);

L_160CFF80:
    edi = edi; /* 0x160CFF80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CFF82: push ebp */
    ebp = esp; /* 0x160CFF83: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CFF85: push ecx */
    PUSH32(esp, ebx); /* 0x160CFF86: push ebx */
    PUSH32(esp, esi); /* 0x160CFF87: push esi */
    esi = ecx; /* 0x160CFF88: mov esi, ecx */
    eax = MEM32(esi + 0x18); /* 0x160CFF8A: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE9u; /* 0x160CFF8D: add eax, -0x17 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x160CFF90: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp eax, 0x29u */ /* 0x160CFF92: cmp eax, 0x29 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D001E; /* 0x160CFF95: ja 0x160d001e */
L_160CFF9B:
    eax = (uint32_t)MEM8(eax + 0x160D0034); /* 0x160CFF9B: movzx eax, byte ptr [eax + 0x160d0034] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160D0028)); goto _ljump; }
L_160CFFA9:
    ecx = MEM32(ebp + 0x8); /* 0x160CFFA9: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x160CFFAC: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x28); /* 0x160CFFAE: mov edx, dword ptr [edx + 0x28] */
    eax = ebp + 0x8; /* 0x160CFFB1: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x160CFFB4: push eax */
    RECOMP_ICALL(edx); /* 0x160CFFB5: call edx */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, MEM8(eax)); /* 0x160CFFB7: mov bl, byte ptr [eax] */
    if (4u) _cf = (((LO8(ebx)) >> 3) & 1u); /* 0x160CFFB9: shr bl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ebx) >> 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ebx, LO8(ebx) >> 4u); /* 0x160CFFB9: shr bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) & 1); /* 0x160CFFBC: and bl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160CFFBF: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x160CFFC0: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x160CFFC2: pop ebx */
    esp = ebp; /* 0x160CFFC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CFFC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CFFC6: ret 4 */
L_160CFFC9:
    PUSH32(esp, edi); /* 0x160CFFC9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CFFCA: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 9); /* 0x160CFFCD: push 9 */
    eax = edi; /* 0x160CFFCF: mov eax, edi */
    RECOMP_CALL(sub_160C5640); /* 0x160CFFD1: call 0x160c5640 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CFFD6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D001D; /* 0x160CFFD8: je 0x160d001d */
L_160CFFDA:
    eax = MEM32(edi); /* 0x160CFFDA: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0xC); /* 0x160CFFDC: mov eax, dword ptr [eax + 0xc] */
    ecx = ebp + 0x8; /* 0x160CFFDF: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x160CFFE2: push ecx */
    edx = ebp + (-0x4); /* 0x160CFFE3: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x160CFFE6: push edx */
    ecx = edi; /* 0x160CFFE7: mov ecx, edi */
    RECOMP_ICALL(eax); /* 0x160CFFE9: call eax */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x18); /* 0x160CFFEB: mov esi, dword ptr [esi + 0x18] */
    eax = esi + (-0x18); /* 0x160CFFEE: lea eax, [esi - 0x18] */
    /* cmp eax, 0x23u */ /* 0x160CFFF1: cmp eax, 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D001D; /* 0x160CFFF4: ja 0x160d001d */
L_160CFFF6:
    ecx = (uint32_t)MEM8(eax + 0x160D006C); /* 0x160CFFF6: movzx ecx, byte ptr [eax + 0x160d006c] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160D0060)); goto _ljump; }
L_160D0004:
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x160D0004: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x160D0008: pop edi */
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160D0009: sete bl */
    esi = POP32_VAL(esp); /* 0x160D000C: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x160D000D: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x160D000F: pop ebx */
    esp = ebp; /* 0x160D0010: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0012: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0013: ret 4 */
L_160D0016:
    /* cmp MEM32(ebp + 0x8), 3 */ /* 0x160D0016: cmp dword ptr [ebp + 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160D001A: sete bl */
L_160D001D:
    edi = POP32_VAL(esp); /* 0x160D001D: pop edi */
L_160D001E:
    esi = POP32_VAL(esp); /* 0x160D001E: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x160D001F: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x160D0021: pop ebx */
    esp = ebp; /* 0x160D0022: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0024: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0025: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CFFA9u: goto L_160CFFA9;
      case 0x160CFFC9u: goto L_160CFFC9;
      case 0x160D0004u: goto L_160D0004;
      case 0x160D0016u: goto L_160D0016;
      case 0x160D001Du: goto L_160D001D;
      case 0x160D001Eu: goto L_160D001E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D00A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D00A0u);

L_160D00A0:
    edi = edi; /* 0x160D00A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D00A2: push ebp */
    ebp = esp; /* 0x160D00A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160D00A5: push ecx */
    PUSH32(esp, esi); /* 0x160D00A6: push esi */
    esi = ecx; /* 0x160D00A7: mov esi, ecx */
    eax = MEM32(esi); /* 0x160D00A9: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x28); /* 0x160D00AB: mov edx, dword ptr [eax + 0x28] */
    ecx = ebp + (-0x4); /* 0x160D00AE: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160D00B1: push ecx */
    ecx = esi; /* 0x160D00B2: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160D00B4: call edx */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax + 0x3), 1 */ /* 0x160D00B6: test byte ptr [eax + 3], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x3)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D00CD; /* 0x160D00BA: je 0x160d00cd */
L_160D00BC:
    eax = MEM32(esi + 0x1C); /* 0x160D00BC: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x160D00BF: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x160D00C2: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D00C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160D00C6: pop esi */
    esp = ebp; /* 0x160D00C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D00C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D00CA: ret 4 */
L_160D00CD:
    eax = 0x80004005u; /* 0x160D00CD: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x160D00D2: pop esi */
    esp = ebp; /* 0x160D00D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D00D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D00D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D00E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D00E0u);

L_160D00E0:
    edi = edi; /* 0x160D00E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D00E2: push ebp */
    ebp = esp; /* 0x160D00E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x160D00E5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x160D00E8: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = esp + 0x4C; /* 0x160D00EB: lea eax, [esp + 0x4c] */
    PUSH32(esp, ebx); /* 0x160D00EF: push ebx */
    ebx = ecx; /* 0x160D00F0: mov ebx, ecx */
    edx = MEM32(ebx + 0x2C); /* 0x160D00F2: mov edx, dword ptr [ebx + 0x2c] */
    MEM32(esp + 0x40) = eax; /* 0x160D00F5: mov dword ptr [esp + 0x40], eax */
    eax = 4; /* 0x160D00F9: mov eax, 4 */
    MEM32(esp + 0x44) = eax; /* 0x160D00FE: mov dword ptr [esp + 0x44], eax */
    MEM32(esp + 0x24) = eax; /* 0x160D0102: mov dword ptr [esp + 0x24], eax */
    eax = MEM32(ebp + 0x1C); /* 0x160D0106: mov eax, dword ptr [ebp + 0x1c] */
    ecx = esp + 0x30; /* 0x160D0109: lea ecx, [esp + 0x30] */
    MEM32(eax) = edx; /* 0x160D010D: mov dword ptr [eax], edx */
    edx = MEM32(ebp + 0x18); /* 0x160D010F: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x160D0112: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160D0113: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = ecx; /* 0x160D0115: mov dword ptr [esp + 0x24], ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x160D0119: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x160D011B: push edi */
    MEM32(esp + 0x24) = ebx; /* 0x160D011C: mov dword ptr [esp + 0x24], ebx */
    MEM32(esp + 0x50) = esi; /* 0x160D0120: mov dword ptr [esp + 0x50], esi */
    MEM8(esp + 0x54) = (uint8_t)(0); /* 0x160D0124: mov byte ptr [esp + 0x54], 0 */
    MEM8(esp + 0x55) = (uint8_t)(1); /* 0x160D0129: mov byte ptr [esp + 0x55], 1 */
    MEM32(esp + 0x30) = esi; /* 0x160D012E: mov dword ptr [esp + 0x30], esi */
    MEM8(esp + 0x34) = (uint8_t)(0); /* 0x160D0132: mov byte ptr [esp + 0x34], 0 */
    MEM8(esp + 0x35) = (uint8_t)(1); /* 0x160D0137: mov byte ptr [esp + 0x35], 1 */
    MEM8(esp + 0xF) = (uint8_t)(1); /* 0x160D013C: mov byte ptr [esp + 0xf], 1 */
    /* cmp edx, MEM32(ebx + 0x2C) */ /* 0x160D0141: cmp edx, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160D0157; /* 0x160D0144: jb 0x160d0157 */
L_160D0146:
    eax = MEM32(ebp + 0x20); /* 0x160D0146: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = esi; /* 0x160D0149: mov dword ptr [eax], esi */
    eax = esi + 0x1; /* 0x160D014B: lea eax, [esi + 1] */
    edi = POP32_VAL(esp); /* 0x160D014E: pop edi */
    esi = POP32_VAL(esp); /* 0x160D014F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D0150: pop ebx */
    esp = ebp; /* 0x160D0151: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0153: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160D0154: ret 0x1c */
L_160D0157:
    eax = MEM32(ebx + 0x18); /* 0x160D0157: mov eax, dword ptr [ebx + 0x18] */
    edx = eax + (-0x14); /* 0x160D015A: lea edx, [eax - 0x14] */
    /* cmp edx, 0x30u */ /* 0x160D015D: cmp edx, 0x30 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D035D; /* 0x160D0160: ja 0x160d035d */
L_160D0166:
    edx = (uint32_t)MEM8(edx + 0x160D037C); /* 0x160D0166: movzx edx, byte ptr [edx + 0x160d037c] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x160D036C)); goto _ljump; }
L_160D0174:
    SET_LO8(ecx, 1); /* 0x160D0174: mov cl, 1 */
    goto L_160D017D; /* 0x160D0176: jmp 0x160d017d */
L_160D0178:
    MEM8(esp + 0xF) = (uint8_t)(0); /* 0x160D0178: mov byte ptr [esp + 0xf], 0 */
L_160D017D:
    MEM32(esp + 0x14) = eax; /* 0x160D017D: mov dword ptr [esp + 0x14], eax */
    /* cmp MEM32(ebx + 0x1C), esi */ /* 0x160D0181: cmp dword ptr [ebx + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D02C8; /* 0x160D0184: je 0x160d02c8 */
L_160D018A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x160D018A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D02C8; /* 0x160D018C: jne 0x160d02c8 */
L_160D0192:
    ecx = MEM32(ebx + 0x1C); /* 0x160D0192: mov ecx, dword ptr [ebx + 0x1c] */
    eax = MEM32(ecx); /* 0x160D0195: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x160D0197: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160D019A: call edx */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160D019C: mov edi, eax */
    MEM32(esp + 0x10) = edi; /* 0x160D019E: mov dword ptr [esp + 0x10], edi */
    /* cmp edi, MEM32(esp + 0x4C) */ /* 0x160D01A2: cmp edi, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D01C7; /* 0x160D01A6: jbe 0x160d01c7 */
L_160D01A8:
    /* cmp MEM8(esp + 0x55), 0 */ /* 0x160D01A8: cmp byte ptr [esp + 0x55], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x55)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D01B8; /* 0x160D01AD: jne 0x160d01b8 */
L_160D01AF:
    eax = 0x8007000Eu; /* 0x160D01AF: mov eax, 0x8007000e */
L_160D01B4:
    esi = eax; /* 0x160D01B4: mov esi, eax */
    goto L_160D01CD; /* 0x160D01B6: jmp 0x160d01cd */
L_160D01B8:
    ecx = edi; /* 0x160D01B8: mov ecx, edi */
    esi = esp + 0x48; /* 0x160D01BA: lea esi, [esp + 0x48] */
    RECOMP_CALL(sub_160D1A10); /* 0x160D01BE: call 0x160d1a10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D01C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D01B4; /* 0x160D01C5: jne 0x160d01b4 */
L_160D01C7:
    MEM32(esp + 0x50) = edi; /* 0x160D01C7: mov dword ptr [esp + 0x50], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160D01CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D01CD:
    /* test esi, esi */ /* 0x160D01CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0309; /* 0x160D01CF: jl 0x160d0309 */
L_160D01D5:
    /* cmp edi, MEM32(esp + 0x2C) */ /* 0x160D01D5: cmp edi, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D01FA; /* 0x160D01D9: jbe 0x160d01fa */
L_160D01DB:
    /* cmp MEM8(esp + 0x35), 0 */ /* 0x160D01DB: cmp byte ptr [esp + 0x35], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x35)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D01EB; /* 0x160D01E0: jne 0x160d01eb */
L_160D01E2:
    eax = 0x8007000Eu; /* 0x160D01E2: mov eax, 0x8007000e */
L_160D01E7:
    esi = eax; /* 0x160D01E7: mov esi, eax */
    goto L_160D0200; /* 0x160D01E9: jmp 0x160d0200 */
L_160D01EB:
    ecx = edi; /* 0x160D01EB: mov ecx, edi */
    esi = esp + 0x28; /* 0x160D01ED: lea esi, [esp + 0x28] */
    RECOMP_CALL(sub_160D1A10); /* 0x160D01F1: call 0x160d1a10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D01F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D01E7; /* 0x160D01F8: jne 0x160d01e7 */
L_160D01FA:
    MEM32(esp + 0x30) = edi; /* 0x160D01FA: mov dword ptr [esp + 0x30], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160D01FE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D0200:
    /* test esi, esi */ /* 0x160D0200: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0309; /* 0x160D0202: jl 0x160d0309 */
L_160D0208:
    ecx = MEM32(ebx + 0x1C); /* 0x160D0208: mov ecx, dword ptr [ebx + 0x1c] */
    eax = MEM32(ecx); /* 0x160D020B: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x10); /* 0x160D020D: mov eax, dword ptr [eax + 0x10] */
    edx = esp + 0x1C; /* 0x160D0210: lea edx, [esp + 0x1c] */
    PUSH32(esp, edx); /* 0x160D0214: push edx */
    edx = esp + 0x1C; /* 0x160D0215: lea edx, [esp + 0x1c] */
    PUSH32(esp, edx); /* 0x160D0219: push edx */
    edx = MEM32(esp + 0x30); /* 0x160D021A: mov edx, dword ptr [esp + 0x30] */
    PUSH32(esp, 0); /* 0x160D021E: push 0 */
    PUSH32(esp, edx); /* 0x160D0220: push edx */
    edx = MEM32(esp + 0x58); /* 0x160D0221: mov edx, dword ptr [esp + 0x58] */
    PUSH32(esp, edx); /* 0x160D0225: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160D0226: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160D0229: push edi */
    PUSH32(esp, edx); /* 0x160D022A: push edx */
    RECOMP_ICALL(eax); /* 0x160D022B: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160D022D: mov esi, eax */
    /* test esi, esi */ /* 0x160D022F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0309; /* 0x160D0231: jl 0x160d0309 */
L_160D0237:
    /* cmp MEM32(esp + 0x18), edi */ /* 0x160D0237: cmp dword ptr [esp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0243; /* 0x160D023B: jne 0x160d0243 */
L_160D023D:
    /* cmp MEM32(esp + 0x1C), edi */ /* 0x160D023D: cmp dword ptr [esp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D024D; /* 0x160D0241: je 0x160d024d */
L_160D0243:
    esi = 0x8007054Fu; /* 0x160D0243: mov esi, 0x8007054f */
    goto L_160D0309; /* 0x160D0248: jmp 0x160d0309 */
L_160D024D:
    edi = 1; /* 0x160D024D: mov edi, 1 */
    /* cmp MEM32(esp + 0x10), edi */ /* 0x160D0252: cmp dword ptr [esp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D02C8; /* 0x160D0256: jbe 0x160d02c8 */
L_160D0258:
    ecx = MEM32(esp + 0x28); /* 0x160D0258: mov ecx, dword ptr [esp + 0x28] */
    eax = MEM32(esp + 0x48); /* 0x160D025C: mov eax, dword ptr [esp + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x160D0260: sub eax, ecx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x4; /* 0x160D0262: lea ebx, [ecx + 4] */
    MEM32(esp + 0x20) = eax; /* 0x160D0265: mov dword ptr [esp + 0x20], eax */
    esp = esp; /* 0x160D0269: lea esp, [esp] */
L_160D0270:
    /* cmp MEM8(esp + 0xF), 0 */ /* 0x160D0270: cmp byte ptr [esp + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D02BA; /* 0x160D0275: je 0x160d02ba */
L_160D0277:
    /* cmp edi, MEM32(esp + 0x50) */ /* 0x160D0277: cmp edi, dword ptr [esp + 0x50] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160D0282; /* 0x160D027B: jae 0x160d0282 */
L_160D027D:
    esi = eax + ebx; /* 0x160D027D: lea esi, [eax + ebx] */
    goto L_160D0284; /* 0x160D0280: jmp 0x160d0284 */
L_160D0282:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160D0282: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D0284:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0284: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x48; /* 0x160D0286: lea ecx, [esp + 0x48] */
    RECOMP_CALL(sub_160EC4A0); /* 0x160D028A: call 0x160ec4a0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x160D028F: mov ecx, dword ptr [esi] */
    /* cmp ecx, MEM32(eax) */ /* 0x160D0291: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0356; /* 0x160D0293: jne 0x160d0356 */
L_160D0299:
    /* cmp edi, MEM32(esp + 0x30) */ /* 0x160D0299: cmp edi, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x28; /* 0x160D029D: lea ecx, [esp + 0x28] */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160D02A1: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D02A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x160D02A5: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_160EC4A0); /* 0x160D02A7: call 0x160ec4a0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x160D02AC: mov edx, dword ptr [esi] */
    /* cmp edx, MEM32(eax) */ /* 0x160D02AE: cmp edx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0356; /* 0x160D02B0: jne 0x160d0356 */
L_160D02B6:
    eax = MEM32(esp + 0x20); /* 0x160D02B6: mov eax, dword ptr [esp + 0x20] */
L_160D02BA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x160D02BA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x160D02BB: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esp + 0x10) */ /* 0x160D02BE: cmp edi, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D0270; /* 0x160D02C2: jb 0x160d0270 */
L_160D02C4:
    ebx = MEM32(esp + 0x24); /* 0x160D02C4: mov ebx, dword ptr [esp + 0x24] */
L_160D02C8:
    ebx = MEM32(ebx + 0x2C); /* 0x160D02C8: mov ebx, dword ptr [ebx + 0x2c] */
    eax = MEM32(ebp + 0xC); /* 0x160D02CB: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, ebx */ /* 0x160D02CE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D02D4; /* 0x160D02D0: jbe 0x160d02d4 */
L_160D02D2:
    eax = ebx; /* 0x160D02D2: mov eax, ebx */
L_160D02D4:
    ecx = MEM32(ebp + 0x20); /* 0x160D02D4: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(ecx) = eax; /* 0x160D02D7: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x160D02D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D0307; /* 0x160D02DB: jbe 0x160d0307 */
L_160D02DD:
    ecx = MEM32(ebp + 0x10); /* 0x160D02DD: mov ecx, dword ptr [ebp + 0x10] */
    esi = MEM32(esp + 0x14); /* 0x160D02E0: mov esi, dword ptr [esp + 0x14] */
    edx = eax; /* 0x160D02E4: mov edx, eax */
    eax = MEM32(ebp + 0x14); /* 0x160D02E6: mov eax, dword ptr [ebp + 0x14] */
    esp = esp; /* 0x160D02E9: lea esp, [esp] */
L_160D02F0:
    MEM32(ecx) = esi; /* 0x160D02F0: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x160D02F2: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160D02F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D0302; /* 0x160D02F7: je 0x160d0302 */
L_160D02F9:
    MEM32(eax) = 0; /* 0x160D02F9: mov dword ptr [eax], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x160D02FF: add eax, 4 */
    _flag_k = FK_ADD;
L_160D0302:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x160D0302: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160D02F0; /* 0x160D0305: jne 0x160d02f0 */
L_160D0307:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160D0307: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D0309:
    /* cmp MEM8(esp + 0x34), 0 */ /* 0x160D0309: cmp byte ptr [esp + 0x34], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x34)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esp + 0x30) = 0; /* 0x160D030E: mov dword ptr [esp + 0x30], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D032A; /* 0x160D0316: je 0x160d032a */
L_160D0318:
    edx = MEM32(esp + 0x28); /* 0x160D0318: mov edx, dword ptr [esp + 0x28] */
    PUSH32(esp, edx); /* 0x160D031C: push edx */
    RECOMP_CALL(sub_161AE0F0); /* 0x160D031D: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160D0322: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esp + 0x34) = (uint8_t)(0); /* 0x160D0325: mov byte ptr [esp + 0x34], 0 */
L_160D032A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D032A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x160D032C: mov dword ptr [esp + 0x28], eax */
    MEM32(esp + 0x2C) = eax; /* 0x160D0330: mov dword ptr [esp + 0x2c], eax */
    MEM32(esp + 0x50) = eax; /* 0x160D0334: mov dword ptr [esp + 0x50], eax */
    /* cmp MEM8(esp + 0x54), LO8(eax) */ /* 0x160D0338: cmp byte ptr [esp + 0x54], al */
    _flag_a = (uint32_t)(MEM8(esp + 0x54)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D034B; /* 0x160D033C: je 0x160d034b */
L_160D033E:
    eax = MEM32(esp + 0x48); /* 0x160D033E: mov eax, dword ptr [esp + 0x48] */
    PUSH32(esp, eax); /* 0x160D0342: push eax */
    RECOMP_CALL(sub_161AE0F0); /* 0x160D0343: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160D0348: add esp, 4 */
    _flag_k = FK_ADD;
L_160D034B:
    eax = esi; /* 0x160D034B: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x160D034D: pop edi */
    esi = POP32_VAL(esp); /* 0x160D034E: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D034F: pop ebx */
    esp = ebp; /* 0x160D0350: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0352: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160D0353: ret 0x1c */
L_160D0356:
    esi = 0x80070057u; /* 0x160D0356: mov esi, 0x80070057 */
    RECOMP_BACKEDGE();
    goto L_160D0309; /* 0x160D035B: jmp 0x160d0309 */
L_160D035D:
    edi = POP32_VAL(esp); /* 0x160D035D: pop edi */
    esi = POP32_VAL(esp); /* 0x160D035E: pop esi */
    eax = 0x8007054Fu; /* 0x160D035F: mov eax, 0x8007054f */
    ebx = POP32_VAL(esp); /* 0x160D0364: pop ebx */
    esp = ebp; /* 0x160D0365: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0367: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160D0368: ret 0x1c */
  _ljump:
    switch (_itail_tgt) {
      case 0x160D0174u: goto L_160D0174;
      case 0x160D0178u: goto L_160D0178;
      case 0x160D017Du: goto L_160D017D;
      case 0x160D035Du: goto L_160D035D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D03C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D03C0u);

L_160D03C0:
    edi = edi; /* 0x160D03C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D03C2: push ebp */
    ebp = esp; /* 0x160D03C3: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x160D03C5: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFECu; /* 0x160D03C8: add eax, -0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x160D03CB: push esi */
    /* cmp eax, 0x20u */ /* 0x160D03CC: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D041A; /* 0x160D03CF: ja 0x160d041a */
L_160D03D1:
    eax = (uint32_t)MEM8(eax + 0x160D0430); /* 0x160D03D1: movzx eax, byte ptr [eax + 0x160d0430] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160D0424)); goto _ljump; }
L_160D03DF:
    esi = 6; /* 0x160D03DF: mov esi, 6 */
    goto L_160D03F2; /* 0x160D03E4: jmp 0x160d03f2 */
L_160D03E6:
    esi = 4; /* 0x160D03E6: mov esi, 4 */
    goto L_160D03F2; /* 0x160D03EB: jmp 0x160d03f2 */
L_160D03ED:
    esi = 3; /* 0x160D03ED: mov esi, 3 */
L_160D03F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D03F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x2C), eax */ /* 0x160D03F4: cmp dword ptr [ecx + 0x2c], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D040B; /* 0x160D03F7: jbe 0x160d040b */
L_160D03F9:
    edx = MEM32(ebp + 0xC); /* 0x160D03F9: mov edx, dword ptr [ebp + 0xc] */
    esp = esp; /* 0x160D03FC: lea esp, [esp] */
L_160D0400:
    MEM32(edx) = esi; /* 0x160D0400: mov dword ptr [edx], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D0402: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x160D0403: add edx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ecx + 0x2C) */ /* 0x160D0406: cmp eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D0400; /* 0x160D0409: jb 0x160d0400 */
L_160D040B:
    ecx = MEM32(ecx + 0x2C); /* 0x160D040B: mov ecx, dword ptr [ecx + 0x2c] */
    edx = MEM32(ebp + 0x10); /* 0x160D040E: mov edx, dword ptr [ebp + 0x10] */
    MEM32(edx) = ecx; /* 0x160D0411: mov dword ptr [edx], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0413: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160D0415: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D0416: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160D0417: ret 0xc */
L_160D041A:
    eax = 0x8007054Fu; /* 0x160D041A: mov eax, 0x8007054f */
    esi = POP32_VAL(esp); /* 0x160D041F: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D0420: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160D0421: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x160D03DFu: goto L_160D03DF;
      case 0x160D03E6u: goto L_160D03E6;
      case 0x160D03EDu: goto L_160D03ED;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D0460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0460u);

L_160D0460:
    edi = edi; /* 0x160D0460: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0462: push ebp */
    ebp = esp; /* 0x160D0463: mov ebp, esp */
    edx = MEM32(ecx + 0x18); /* 0x160D0465: mov edx, dword ptr [ecx + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x160D0468: mov eax, dword ptr [ebp + 8] */
    ecx = edx + (-0x16); /* 0x160D046B: lea ecx, [edx - 0x16] */
    MEM32(eax) = 8; /* 0x160D046E: mov dword ptr [eax], 8 */
    /* cmp ecx, 0x2Eu */ /* 0x160D0474: cmp ecx, 0x2e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D04D1; /* 0x160D0477: ja 0x160d04d1 */
L_160D0479:
    ecx = (uint32_t)MEM8(ecx + 0x160D0540); /* 0x160D0479: movzx ecx, byte ptr [ecx + 0x160d0540] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160D0510)); goto _ljump; }
L_160D0487:
    _flag_a = (uint32_t)((MEM8(eax + 0x2) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x2) | 0x20u)) << 24;
    MEM8(eax + 0x2) = (uint8_t)(MEM8(eax + 0x2) | 0x20u); /* 0x160D0487: or byte ptr [eax + 2], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D048B: jmp 0x160d04d5 */
L_160D048D:
    _flag_a = (uint32_t)((MEM8(eax + 0x1) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x1) | 0x80u)) << 24;
    MEM8(eax + 0x1) = (uint8_t)(MEM8(eax + 0x1) | 0x80u); /* 0x160D048D: or byte ptr [eax + 1], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D0491: jmp 0x160d04d5 */
L_160D0493:
    _flag_a = (uint32_t)((MEM8(eax + 0x1) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x1) | 0x80u)) << 24;
    MEM8(eax + 0x1) = (uint8_t)(MEM8(eax + 0x1) | 0x80u); /* 0x160D0493: or byte ptr [eax + 1], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 0x10u)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 0x10u); /* 0x160D0497: or byte ptr [eax + 3], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D049B: jmp 0x160d04d5 */
L_160D049D:
    _flag_a = (uint32_t)((MEM8(eax + 0x1) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x1) | 0x80u)) << 24;
    MEM8(eax + 0x1) = (uint8_t)(MEM8(eax + 0x1) | 0x80u); /* 0x160D049D: or byte ptr [eax + 1], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 0x20u)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 0x20u); /* 0x160D04A1: or byte ptr [eax + 3], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D04A5: jmp 0x160d04d5 */
L_160D04A7:
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 8)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 8)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 8); /* 0x160D04A7: or byte ptr [eax + 3], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D04AB: jmp 0x160d04d5 */
L_160D04AD:
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 0x18u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 0x18u)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 0x18u); /* 0x160D04AD: or byte ptr [eax + 3], 0x18 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D04B1: jmp 0x160d04d5 */
L_160D04B3:
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 0x28u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 0x28u)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 0x28u); /* 0x160D04B3: or byte ptr [eax + 3], 0x28 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D04B7: jmp 0x160d04d5 */
L_160D04B9:
    _flag_a = (uint32_t)((MEM8(eax + 0x2) | 1)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x2) | 1)) << 24;
    MEM8(eax + 0x2) = (uint8_t)(MEM8(eax + 0x2) | 1); /* 0x160D04B9: or byte ptr [eax + 2], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D04BD: jmp 0x160d04d5 */
L_160D04BF:
    _flag_a = (uint32_t)((MEM8(eax + 0x2) | 2)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x2) | 2)) << 24;
    MEM8(eax + 0x2) = (uint8_t)(MEM8(eax + 0x2) | 2); /* 0x160D04BF: or byte ptr [eax + 2], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D04C3: jmp 0x160d04d5 */
L_160D04C5:
    _flag_a = (uint32_t)((MEM8(eax + 0x2) | 4)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x2) | 4)) << 24;
    MEM8(eax + 0x2) = (uint8_t)(MEM8(eax + 0x2) | 4); /* 0x160D04C5: or byte ptr [eax + 2], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D04C9: jmp 0x160d04d5 */
L_160D04CB:
    _flag_a = (uint32_t)((MEM8(eax + 0x2) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x2) | 0x40u)) << 24;
    MEM8(eax + 0x2) = (uint8_t)(MEM8(eax + 0x2) | 0x40u); /* 0x160D04CB: or byte ptr [eax + 2], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04D5; /* 0x160D04CF: jmp 0x160d04d5 */
L_160D04D1:
    _flag_a = (uint32_t)((MEM8(eax + 0x2) | 8)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x2) | 8)) << 24;
    MEM8(eax + 0x2) = (uint8_t)(MEM8(eax + 0x2) | 8); /* 0x160D04D1: or byte ptr [eax + 2], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D04D5:
    ecx = edx + (-0x17); /* 0x160D04D5: lea ecx, [edx - 0x17] */
    /* cmp ecx, 0x29u */ /* 0x160D04D8: cmp ecx, 0x29 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D04F9; /* 0x160D04DB: ja 0x160d04f9 */
L_160D04DD:
    ecx = (uint32_t)MEM8(ecx + 0x160D0580); /* 0x160D04DD: movzx ecx, byte ptr [ecx + 0x160d0580] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160D0570)); goto _ljump; }
L_160D04EB:
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 2)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 2)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 2); /* 0x160D04EB: or byte ptr [eax + 3], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_160D04F9; /* 0x160D04EF: jmp 0x160d04f9 */
L_160D04F1:
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 2)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 2)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 2); /* 0x160D04F1: or byte ptr [eax + 3], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D04F5:
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 1)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 1)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 1); /* 0x160D04F5: or byte ptr [eax + 3], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D04F9:
    /* cmp edx, 0x37u */ /* 0x160D04F9: cmp edx, 0x37 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_160D050C; /* 0x160D04FC: jl 0x160d050c */
L_160D04FE:
    /* cmp edx, 0x3Cu */ /* 0x160D04FE: cmp edx, 0x3c */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_160D0508; /* 0x160D0501: jle 0x160d0508 */
L_160D0503:
    /* cmp edx, 0x40u */ /* 0x160D0503: cmp edx, 0x40 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D050C; /* 0x160D0506: jne 0x160d050c */
L_160D0508:
    _flag_a = (uint32_t)((MEM8(eax + 0x3) | 4)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x3) | 4)) << 24;
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) | 4); /* 0x160D0508: or byte ptr [eax + 3], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D050C:
    ebp = POP32_VAL(esp); /* 0x160D050C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D050D: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160D0487u: goto L_160D0487;
      case 0x160D048Du: goto L_160D048D;
      case 0x160D0493u: goto L_160D0493;
      case 0x160D049Du: goto L_160D049D;
      case 0x160D04A7u: goto L_160D04A7;
      case 0x160D04ADu: goto L_160D04AD;
      case 0x160D04B3u: goto L_160D04B3;
      case 0x160D04B9u: goto L_160D04B9;
      case 0x160D04BFu: goto L_160D04BF;
      case 0x160D04C5u: goto L_160D04C5;
      case 0x160D04CBu: goto L_160D04CB;
      case 0x160D04D1u: goto L_160D04D1;
      case 0x160D04EBu: goto L_160D04EB;
      case 0x160D04F1u: goto L_160D04F1;
      case 0x160D04F5u: goto L_160D04F5;
      case 0x160D04F9u: goto L_160D04F9;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D05B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D05B0u);

L_160D05B0:
    edi = edi; /* 0x160D05B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D05B2: push ebp */
    ebp = esp; /* 0x160D05B3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x160D05B5: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160D05B8: push edi */
    edi = ecx; /* 0x160D05B9: mov edi, ecx */
    /* test LO8(edx), 2 */ /* 0x160D05BB: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D05C7; /* 0x160D05BE: jne 0x160d05c7 */
L_160D05C0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160D05C0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160D05C2: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D05C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D05C4: ret 8 */
L_160D05C7:
    PUSH32(esp, ebx); /* 0x160D05C7: push ebx */
    PUSH32(esp, esi); /* 0x160D05C8: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160D05C9: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160D05CC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x160D05CE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0626; /* 0x160D05D0: je 0x160d0626 */
L_160D05D2:
    MEM32(esi + 0x4) = 0x10u; /* 0x160D05D2: mov dword ptr [esi + 4], 0x10 */
    eax = MEM32(edi + 0x20); /* 0x160D05D9: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x18) = eax; /* 0x160D05DC: mov dword ptr [esi + 0x18], eax */
    ecx = MEM32(edi + 0x24); /* 0x160D05DF: mov ecx, dword ptr [edi + 0x24] */
    MEM32(esi + 0x1C) = ecx; /* 0x160D05E2: mov dword ptr [esi + 0x1c], ecx */
    eax = MEM32(edi + 0x20); /* 0x160D05E5: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x20) = eax; /* 0x160D05E8: mov dword ptr [esi + 0x20], eax */
    ecx = MEM32(edi + 0x24); /* 0x160D05EB: mov ecx, dword ptr [edi + 0x24] */
    MEM32(esi + 0x24) = ecx; /* 0x160D05EE: mov dword ptr [esi + 0x24], ecx */
    eax = MEM32(edi + 0x20); /* 0x160D05F1: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x28) = eax; /* 0x160D05F4: mov dword ptr [esi + 0x28], eax */
    ecx = MEM32(edi + 0x24); /* 0x160D05F7: mov ecx, dword ptr [edi + 0x24] */
    MEM32(esi + 0x2C) = ecx; /* 0x160D05FA: mov dword ptr [esi + 0x2c], ecx */
    eax = MEM32(edi + 0x28); /* 0x160D05FD: mov eax, dword ptr [edi + 0x28] */
    /* cmp eax, ebx */ /* 0x160D0600: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0610; /* 0x160D0602: jbe 0x160d0610 */
L_160D0604:
    MEM32(esi + 0x30) = eax; /* 0x160D0604: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = 1; /* 0x160D0607: mov dword ptr [esi + 0x34], 1 */
    goto L_160D061D; /* 0x160D060E: jmp 0x160d061d */
L_160D0610:
    MEM32(esi + 0x30) = 1; /* 0x160D0610: mov dword ptr [esi + 0x30], 1 */
    eax = MEM32(edi + 0x2C); /* 0x160D0617: mov eax, dword ptr [edi + 0x2c] */
    MEM32(esi + 0x34) = eax; /* 0x160D061A: mov dword ptr [esi + 0x34], eax */
L_160D061D:
    MEM32(esi + 0x48) = ebx; /* 0x160D061D: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x4C) = ebx; /* 0x160D0620: mov dword ptr [esi + 0x4c], ebx */
    MEM32(esi + 0x50) = ebx; /* 0x160D0623: mov dword ptr [esi + 0x50], ebx */
L_160D0626:
    /* cmp MEM32(edi + 0x1C), ebx */ /* 0x160D0626: cmp dword ptr [edi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0645; /* 0x160D0629: je 0x160d0645 */
L_160D062B:
    ecx = MEM32(edi + 0x1C); /* 0x160D062B: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx); /* 0x160D062E: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x160D0630: push esi */
    PUSH32(esp, edx); /* 0x160D0631: push edx */
    edx = MEM32(eax + 0x2C); /* 0x160D0632: mov edx, dword ptr [eax + 0x2c] */
    RECOMP_ICALL(edx); /* 0x160D0635: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D0637: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0642; /* 0x160D0639: jne 0x160d0642 */
L_160D063B:
    esi = POP32_VAL(esp); /* 0x160D063B: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D063C: pop ebx */
    edi = POP32_VAL(esp); /* 0x160D063D: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D063E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D063F: ret 8 */
L_160D0642:
    edx = MEM32(ebp + 0x8); /* 0x160D0642: mov edx, dword ptr [ebp + 8] */
L_160D0645:
    /* cmp esi, ebx */ /* 0x160D0645: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D06F2; /* 0x160D0647: je 0x160d06f2 */
L_160D064D:
    eax = MEM32(edi + 0x4); /* 0x160D064D: mov eax, dword ptr [edi + 4] */
    MEM32(esi) = eax; /* 0x160D0650: mov dword ptr [esi], eax */
    ecx = MEM32(edi + 0x18); /* 0x160D0652: mov ecx, dword ptr [edi + 0x18] */
    MEM32(esi + 0x8) = ecx; /* 0x160D0655: mov dword ptr [esi + 8], ecx */
    /* test LO8(edx), 8 */ /* 0x160D0658: test dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D0672; /* 0x160D065B: je 0x160d0672 */
L_160D065D:
    edx = MEM32(edi + 0x18); /* 0x160D065D: mov edx, dword ptr [edi + 0x18] */
    eax = esi + 0x34; /* 0x160D0660: lea eax, [esi + 0x34] */
    PUSH32(esp, eax); /* 0x160D0663: push eax */
    ecx = esi + 0x30; /* 0x160D0664: lea ecx, [esi + 0x30] */
    PUSH32(esp, ecx); /* 0x160D0667: push ecx */
    ecx = edi; /* 0x160D0668: mov ecx, edi */
    MEM32(esi + 0x4) = edx; /* 0x160D066A: mov dword ptr [esi + 4], edx */
    RECOMP_CALL(sub_160CFF40); /* 0x160D066D: call 0x160cff40 */
    RECOMP_FLAGS_IN();
L_160D0672:
    ecx = MEM32(esi + 0x18); /* 0x160D0672: mov ecx, dword ptr [esi + 0x18] */
    MEM32(esi + 0xC) = edi; /* 0x160D0675: mov dword ptr [esi + 0xc], edi */
    edx = MEM32(edi + 0x1C); /* 0x160D0678: mov edx, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x10) = edx; /* 0x160D067B: mov dword ptr [esi + 0x10], edx */
    eax = MEM32(edi + 0x2C); /* 0x160D067E: mov eax, dword ptr [edi + 0x2c] */
    edx = MEM32(esi + 0x1C); /* 0x160D0681: mov edx, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x38) = eax; /* 0x160D0684: mov dword ptr [esi + 0x38], eax */
    MEM32(esi + 0x24) = edx; /* 0x160D0687: mov dword ptr [esi + 0x24], edx */
    MEM32(esi + 0x20) = ecx; /* 0x160D068A: mov dword ptr [esi + 0x20], ecx */
    edx = MEM32(esi + 0x20); /* 0x160D068D: mov edx, dword ptr [esi + 0x20] */
    MEM32(esi + 0x3C) = ebx; /* 0x160D0690: mov dword ptr [esi + 0x3c], ebx */
    MEM32(esi + 0x40) = ebx; /* 0x160D0693: mov dword ptr [esi + 0x40], ebx */
    eax = MEM32(edi + 0x20); /* 0x160D0696: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x18) = eax; /* 0x160D0699: mov dword ptr [esi + 0x18], eax */
    ecx = MEM32(edi + 0x24); /* 0x160D069C: mov ecx, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x160D069F: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x160D06A3: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x24); /* 0x160D06A5: mov eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D06A8: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x2C) = eax; /* 0x160D06AA: mov dword ptr [esi + 0x2c], eax */
    eax = MEM32(esi + 0x54); /* 0x160D06AD: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x4C) = eax; /* 0x160D06B0: mov dword ptr [esi + 0x4c], eax */
    MEM32(esi + 0x50) = eax; /* 0x160D06B3: mov dword ptr [esi + 0x50], eax */
    MEM32(esi + 0x1C) = ecx; /* 0x160D06B6: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x28) = edx; /* 0x160D06B9: mov dword ptr [esi + 0x28], edx */
    MEM32(esi + 0x44) = ebx; /* 0x160D06BC: mov dword ptr [esi + 0x44], ebx */
    MEM32(esi + 0x54) = ebx; /* 0x160D06BF: mov dword ptr [esi + 0x54], ebx */
    edi = MEM32(edi + 0x18); /* 0x160D06C2: mov edi, dword ptr [edi + 0x18] */
    eax = edi + (-0x16); /* 0x160D06C5: lea eax, [edi - 0x16] */
    /* cmp eax, 0x25u */ /* 0x160D06C8: cmp eax, 0x25 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x25u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D06F2; /* 0x160D06CB: ja 0x160d06f2 */
L_160D06CD:
    ecx = (uint32_t)MEM8(eax + 0x160D0708); /* 0x160D06CD: movzx ecx, byte ptr [eax + 0x160d0708] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160D06FC)); goto _ljump; }
L_160D06DB:
    MEM32(esi + 0x3C) = 1; /* 0x160D06DB: mov dword ptr [esi + 0x3c], 1 */
    esi = POP32_VAL(esp); /* 0x160D06E2: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D06E3: pop ebx */
    SET_LO8(eax, 1); /* 0x160D06E4: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160D06E6: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D06E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D06E8: ret 8 */
L_160D06EB:
    MEM32(esi + 0x40) = 1; /* 0x160D06EB: mov dword ptr [esi + 0x40], 1 */
L_160D06F2:
    esi = POP32_VAL(esp); /* 0x160D06F2: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D06F3: pop ebx */
    SET_LO8(eax, 1); /* 0x160D06F4: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160D06F6: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D06F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D06F8: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160D06DBu: goto L_160D06DB;
      case 0x160D06EBu: goto L_160D06EB;
      case 0x160D06F2u: goto L_160D06F2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D0740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0740u);

L_160D0740:
    edi = edi; /* 0x160D0740: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0742: push ebp */
    ebp = esp; /* 0x160D0743: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160D0745: push esi */
    PUSH32(esp, edi); /* 0x160D0746: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160D0747: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x160D074A: mov esi, ecx */
    /* cmp esi, edi */ /* 0x160D074C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0758; /* 0x160D074E: jne 0x160d0758 */
L_160D0750:
    edi = POP32_VAL(esp); /* 0x160D0750: pop edi */
    SET_LO8(eax, 1); /* 0x160D0751: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160D0753: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D0754: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0755: ret 4 */
L_160D0758:
    eax = MEM32(edi + 0x4); /* 0x160D0758: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x160D075B: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0768; /* 0x160D075E: je 0x160d0768 */
L_160D0760:
    edi = POP32_VAL(esp); /* 0x160D0760: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160D0761: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160D0763: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D0764: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0765: ret 4 */
L_160D0768:
    ecx = MEM32(esi + 0x18); /* 0x160D0768: mov ecx, dword ptr [esi + 0x18] */
    /* cmp ecx, MEM32(edi + 0x18) */ /* 0x160D076B: cmp ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D07B1; /* 0x160D076E: jne 0x160d07b1 */
L_160D0770:
    eax = MEM32(edi + 0x1C); /* 0x160D0770: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(esi + 0x1C); /* 0x160D0773: mov ecx, dword ptr [esi + 0x1c] */
    /* cmp ecx, eax */ /* 0x160D0776: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D078E; /* 0x160D0778: je 0x160d078e */
L_160D077A:
    /* test ecx, ecx */ /* 0x160D077A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D07B1; /* 0x160D077C: je 0x160d07b1 */
L_160D077E:
    /* test eax, eax */ /* 0x160D077E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D07B1; /* 0x160D0780: je 0x160d07b1 */
L_160D0782:
    edx = MEM32(ecx); /* 0x160D0782: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x160D0784: push eax */
    eax = MEM32(edx + 0x30); /* 0x160D0785: mov eax, dword ptr [edx + 0x30] */
    RECOMP_ICALL(eax); /* 0x160D0788: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D078A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D07B1; /* 0x160D078C: je 0x160d07b1 */
L_160D078E:
    ecx = MEM32(esi + 0x20); /* 0x160D078E: mov ecx, dword ptr [esi + 0x20] */
    /* cmp ecx, MEM32(edi + 0x20) */ /* 0x160D0791: cmp ecx, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D07B1; /* 0x160D0794: jne 0x160d07b1 */
L_160D0796:
    edx = MEM32(esi + 0x24); /* 0x160D0796: mov edx, dword ptr [esi + 0x24] */
    /* cmp edx, MEM32(edi + 0x24) */ /* 0x160D0799: cmp edx, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D07B1; /* 0x160D079C: jne 0x160d07b1 */
L_160D079E:
    eax = MEM32(esi + 0x28); /* 0x160D079E: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, MEM32(edi + 0x28) */ /* 0x160D07A1: cmp eax, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D07B1; /* 0x160D07A4: jne 0x160d07b1 */
L_160D07A6:
    edi = POP32_VAL(esp); /* 0x160D07A6: pop edi */
    eax = 1; /* 0x160D07A7: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x160D07AC: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D07AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D07AE: ret 4 */
L_160D07B1:
    edi = POP32_VAL(esp); /* 0x160D07B1: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D07B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160D07B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D07B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D07B6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D07C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D07C0u);

L_160D07C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D07C0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x160D07C2: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160D07C5: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x160D07C8: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160D07CB: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x16039864u; /* 0x160D07D2: mov dword ptr [eax], 0x16039864 */
    MEM32(eax + 0x4) = 7; /* 0x160D07D8: mov dword ptr [eax + 4], 7 */
    MEM32(eax + 0x20) = 0x10u; /* 0x160D07DF: mov dword ptr [eax + 0x20], 0x10 */
    MEM32(eax + 0x18) = ecx; /* 0x160D07E6: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x160D07E9: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D07EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D0800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0800u);

L_160D0800:
    edi = edi; /* 0x160D0800: mov edi, edi */
    PUSH32(esp, esi); /* 0x160D0802: push esi */
    esi = ecx; /* 0x160D0803: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x160D0805: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x160D0808: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x160D080A: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160D080D: call edx */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x160D080F: mov ecx, eax */
    eax = MEM32(esi + 0x1C); /* 0x160D0811: mov eax, dword ptr [esi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x160D0814: imul eax, ecx */
    esi = POP32_VAL(esp); /* 0x160D0817: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D0818: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D0820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0820u);

L_160D0820:
    edi = edi; /* 0x160D0820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0822: push ebp */
    ebp = esp; /* 0x160D0823: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160D0825: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x160D0826: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160D0829: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160D082A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x160D082D: push edi */
    edi = ecx; /* 0x160D082E: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x160D0830: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(ecx); /* 0x160D0833: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x8); /* 0x160D0835: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x160D0838: push esi */
    PUSH32(esp, ebx); /* 0x160D0839: push ebx */
    RECOMP_ICALL(edx); /* 0x160D083A: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D083C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D08A1; /* 0x160D083E: jl 0x160d08a1 */
L_160D0840:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0857; /* 0x160D0840: jne 0x160d0857 */
L_160D0842:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x160D0842: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D089F; /* 0x160D0846: jne 0x160d089f */
L_160D0848:
    MEM32(esi + 0x4) = edi; /* 0x160D0848: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x160D084B: pop edi */
    MEM32(esi + 0x8) = ebx; /* 0x160D084C: mov dword ptr [esi + 8], ebx */
    esi = POP32_VAL(esp); /* 0x160D084F: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0850: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160D0852: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D0853: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0854: ret 8 */
L_160D0857:
    ecx = MEM32(esi + 0x8); /* 0x160D0857: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(edi + 0x1C); /* 0x160D085A: mov eax, dword ptr [edi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x160D085D: imul eax, ecx */
    /* cmp ebx, eax */ /* 0x160D0860: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160D0873; /* 0x160D0862: jb 0x160d0873 */
L_160D0864:
    edi = POP32_VAL(esp); /* 0x160D0864: pop edi */
    MEM32(esi + 0x8) = eax; /* 0x160D0865: mov dword ptr [esi + 8], eax */
    esi = POP32_VAL(esp); /* 0x160D0868: pop esi */
    eax = 1; /* 0x160D0869: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x160D086E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D086F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0870: ret 8 */
L_160D0873:
    eax = MEM32(edi + 0x18); /* 0x160D0873: mov eax, dword ptr [edi + 0x18] */
    eax = MEM32(eax); /* 0x160D0876: mov eax, dword ptr [eax] */
    MEM32(ebp + 0xC) = eax; /* 0x160D0878: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160D087B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x160D087D: mov eax, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x160D087F: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + 0xC); /* 0x160D0881: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x18); /* 0x160D0884: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(eax + 0x8); /* 0x160D0887: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x160D088A: push esi */
    PUSH32(esp, edx); /* 0x160D088B: push edx */
    RECOMP_ICALL(eax); /* 0x160D088C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D088E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D08A1; /* 0x160D0890: jne 0x160d08a1 */
L_160D0892:
    /* cmp MEM32(esi + 0x4), eax */ /* 0x160D0892: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D089F; /* 0x160D0895: jne 0x160d089f */
L_160D0897:
    ecx = ebx; /* 0x160D0897: mov ecx, ebx */
    MEM32(esi + 0x8) = ecx; /* 0x160D0899: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0x4) = edi; /* 0x160D089C: mov dword ptr [esi + 4], edi */
L_160D089F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D089F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D08A1:
    edi = POP32_VAL(esp); /* 0x160D08A1: pop edi */
    esi = POP32_VAL(esp); /* 0x160D08A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D08A3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D08A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D08A5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D08B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D08B0u);

L_160D08B0:
    edi = edi; /* 0x160D08B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D08B2: push ebp */
    ebp = esp; /* 0x160D08B3: mov ebp, esp */
    eax = MEM32(ebp + 0x20); /* 0x160D08B5: mov eax, dword ptr [ebp + 0x20] */
    edx = MEM32(ebp + 0x1C); /* 0x160D08B8: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x160D08BB: push eax */
    eax = MEM32(ebp + 0x10); /* 0x160D08BC: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x160D08BF: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160D08C0: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160D08C3: push eax */
    eax = MEM32(ebp + 0x8); /* 0x160D08C4: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160D08C7: push edx */
    edx = MEM32(ecx + 0x1C); /* 0x160D08C8: mov edx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, eax); /* 0x160D08CB: push eax */
    eax = MEM32(ecx + 0x18); /* 0x160D08CC: mov eax, dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x14); /* 0x160D08CF: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x160D08D2: push edx */
    PUSH32(esp, eax); /* 0x160D08D3: push eax */
    eax = MEM32(ebp + 0x18); /* 0x160D08D4: mov eax, dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_160CE630); /* 0x160D08D7: call 0x160ce630 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160D08DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160D08DD: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_160D08F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D08F0u);

L_160D08F0:
    edi = edi; /* 0x160D08F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D08F2: push ebp */
    ebp = esp; /* 0x160D08F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160D08F5: push ecx */
    PUSH32(esp, esi); /* 0x160D08F6: push esi */
    PUSH32(esp, edi); /* 0x160D08F7: push edi */
    edi = ecx; /* 0x160D08F8: mov edi, ecx */
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x160D08FA: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0966; /* 0x160D08FE: jbe 0x160d0966 */
L_160D0900:
    esi = MEM32(ebp + 0xC); /* 0x160D0900: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x18); /* 0x160D0903: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(ecx); /* 0x160D0906: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x14); /* 0x160D0908: mov eax, dword ptr [eax + 0x14] */
    edx = ebp + 0xC; /* 0x160D090B: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160D090E: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160D090F: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160D0912: push esi */
    PUSH32(esp, edx); /* 0x160D0913: push edx */
    MEM32(ebp + (-0x4)) = esi; /* 0x160D0914: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(eax); /* 0x160D0917: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D0919: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0971; /* 0x160D091B: jl 0x160d0971 */
L_160D091D:
    eax = MEM32(ebp + 0xC); /* 0x160D091D: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x160D0920: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160D0921: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x1C), ebx */ /* 0x160D0923: cmp dword ptr [edi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0950; /* 0x160D0926: jbe 0x160d0950 */
L_160D0928:
    ecx = MEM32(ebp + (-0x4)); /* 0x160D0928: mov ecx, dword ptr [ebp - 4] */
    /* cmp esi, ecx */ /* 0x160D092B: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0940; /* 0x160D092D: je 0x160d0940 */
L_160D092F:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x160D092F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x160D092F: shl eax, 4 */
    PUSH32(esp, eax); /* 0x160D0932: push eax */
    PUSH32(esp, ecx); /* 0x160D0933: push ecx */
    PUSH32(esp, esi); /* 0x160D0934: push esi */
    RECOMP_CALL(sub_161AE3C0); /* 0x160D0935: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x160D093A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160D093D: add esp, 0xc */
    _flag_k = FK_ADD;
L_160D0940:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x160D0940: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x160D0943: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x160D0945: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x160D0945: shl ecx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x160D0948: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x160D0949: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(edi + 0x1C) */ /* 0x160D094B: cmp ebx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D0928; /* 0x160D094E: jb 0x160d0928 */
L_160D0950:
    edx = MEM32(edi + 0x1C); /* 0x160D0950: mov edx, dword ptr [edi + 0x1c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x160D0953: imul edx, eax */
    eax = MEM32(ebp + 0x10); /* 0x160D0956: mov eax, dword ptr [ebp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x160D0959: pop ebx */
    edi = POP32_VAL(esp); /* 0x160D095A: pop edi */
    MEM32(eax) = edx; /* 0x160D095B: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D095D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160D095F: pop esi */
    esp = ebp; /* 0x160D0960: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0962: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160D0963: ret 0xc */
L_160D0966:
    ecx = MEM32(ebp + 0x10); /* 0x160D0966: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = 0; /* 0x160D0969: mov dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D096F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D0971:
    edi = POP32_VAL(esp); /* 0x160D0971: pop edi */
    esi = POP32_VAL(esp); /* 0x160D0972: pop esi */
    esp = ebp; /* 0x160D0973: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0975: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160D0976: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160D0980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0980u);

L_160D0980:
    edi = edi; /* 0x160D0980: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0982: push ebp */
    ebp = esp; /* 0x160D0983: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x160D0985: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x161B2070); /* 0x160D0988: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x160D098D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x160D098F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x160D0992: push ebx */
    PUSH32(esp, esi); /* 0x160D0993: push esi */
    PUSH32(esp, edi); /* 0x160D0994: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160D0995: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x160D0998: mov esi, ecx */
    MEM32(ebp + (-0x3C)) = edi; /* 0x160D099A: mov dword ptr [ebp - 0x3c], edi */
    ebx = esi; /* 0x160D099D: mov ebx, esi */
    /* nop */ /* 0x160D099F: nop  */
L_160D09A0:
    /* test ebx, ebx */ /* 0x160D09A0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D09AF; /* 0x160D09A2: je 0x160d09af */
L_160D09A4:
    /* cmp MEM32(ebx + 0x4), 0xAu */ /* 0x160D09A4: cmp dword ptr [ebx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D09AF; /* 0x160D09A8: jne 0x160d09af */
L_160D09AA:
    ebx = MEM32(ebx + 0x20); /* 0x160D09AA: mov ebx, dword ptr [ebx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160D09A0; /* 0x160D09AD: jmp 0x160d09a0 */
L_160D09AF:
    eax = MEM32(esi + 0x20); /* 0x160D09AF: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, 0x35u */ /* 0x160D09B2: cmp eax, 0x35 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0ACE; /* 0x160D09B5: je 0x160d0ace */
L_160D09BB:
    /* cmp eax, 0x36u */ /* 0x160D09BB: cmp eax, 0x36 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0AC9; /* 0x160D09BE: je 0x160d0ac9 */
L_160D09C4:
    ecx = MEM32(esi + 0x18); /* 0x160D09C4: mov ecx, dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_160D1BC0); /* 0x160D09C7: call 0x160d1bc0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x160D09CC: mov ebx, dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x160D09CF: mov edx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x160D09D1: push ebx */
    ecx = eax; /* 0x160D09D2: mov ecx, eax */
    eax = MEM32(edx + 0x18); /* 0x160D09D4: mov eax, dword ptr [edx + 0x18] */
    PUSH32(esp, edi); /* 0x160D09D7: push edi */
    RECOMP_ICALL(eax); /* 0x160D09D8: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D09DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0B69; /* 0x160D09DC: jl 0x160d0b69 */
L_160D09E2:
    eax = esi; /* 0x160D09E2: mov eax, esi */
L_160D09E4:
    /* test eax, eax */ /* 0x160D09E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D09F3; /* 0x160D09E6: je 0x160d09f3 */
L_160D09E8:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x160D09E8: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D09F3; /* 0x160D09EC: jne 0x160d09f3 */
L_160D09EE:
    eax = MEM32(eax + 0x20); /* 0x160D09EE: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160D09E4; /* 0x160D09F1: jmp 0x160d09e4 */
L_160D09F3:
    esi = eax; /* 0x160D09F3: mov esi, eax */
    MEM32(ebp + (-0x40)) = esi; /* 0x160D09F5: mov dword ptr [ebp - 0x40], esi */
L_160D09F8:
    /* test esi, esi */ /* 0x160D09F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D0B67; /* 0x160D09FA: je 0x160d0b67 */
L_160D0A00:
    /* cmp MEM32(esi + 0x4), 7 */ /* 0x160D0A00: cmp dword ptr [esi + 4], 7 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0B67; /* 0x160D0A04: jne 0x160d0b67 */
L_160D0A0A:
    ecx = MEM32(esi + 0x1C); /* 0x160D0A0A: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, ecx); /* 0x160D0A0D: push ecx */
    PUSH32(esp, 0x1602E0D4u); /* 0x160D0A0E: push 0x1602e0d4 */
    ecx = 0x32u; /* 0x160D0A13: mov ecx, 0x32 */
    edi = ebp + (-0x38); /* 0x160D0A18: lea edi, [ebp - 0x38] */
    RECOMP_CALL(sub_16057300); /* 0x160D0A1B: call 0x16057300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160D0A20: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160D0A23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0B69; /* 0x160D0A25: jl 0x160d0b69 */
L_160D0A2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0A2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x160D0A2D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D0A39; /* 0x160D0A2F: je 0x160d0a39 */
L_160D0A31:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x160D0A31: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0A3E; /* 0x160D0A37: jbe 0x160d0a3e */
L_160D0A39:
    eax = 0x80070057u; /* 0x160D0A39: mov eax, 0x80070057 */
L_160D0A3E:
    /* test eax, eax */ /* 0x160D0A3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0A86; /* 0x160D0A40: jl 0x160d0a86 */
L_160D0A42:
    eax = MEM32(ebp + (-0x3C)); /* 0x160D0A42: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160D0A45: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x160D0A47: mov edx, ebx */
    /* test ebx, ebx */ /* 0x160D0A49: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D0A6D; /* 0x160D0A4B: je 0x160d0a6d */
L_160D0A4D:
    ecx = ecx; /* 0x160D0A4D: lea ecx, [ecx] */
L_160D0A50:
    /* cmp MEM8(eax), 0 */ /* 0x160D0A50: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0A69; /* 0x160D0A53: je 0x160d0a69 */
L_160D0A55:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D0A55: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x160D0A56: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160D0A50; /* 0x160D0A59: jne 0x160d0a50 */
L_160D0A5B:
    esi = 0x80070057u; /* 0x160D0A5B: mov esi, 0x80070057 */
    eax = esi; /* 0x160D0A60: mov eax, esi */
    esi = MEM32(ebp + (-0x40)); /* 0x160D0A62: mov esi, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D0A65: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D0A88; /* 0x160D0A67: jmp 0x160d0a88 */
L_160D0A69:
    /* test edx, edx */ /* 0x160D0A69: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0A7B; /* 0x160D0A6B: jne 0x160d0a7b */
L_160D0A6D:
    esi = 0x80070057u; /* 0x160D0A6D: mov esi, 0x80070057 */
    eax = esi; /* 0x160D0A72: mov eax, esi */
    esi = MEM32(ebp + (-0x40)); /* 0x160D0A74: mov esi, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D0A77: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D0A88; /* 0x160D0A79: jmp 0x160d0a88 */
L_160D0A7B:
    ecx = ebx; /* 0x160D0A7B: mov ecx, ebx */
    eax = esi; /* 0x160D0A7D: mov eax, esi */
    esi = MEM32(ebp + (-0x40)); /* 0x160D0A7F: mov esi, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x160D0A82: sub ecx, edx */
    _flag_k = FK_CMP;
    goto L_160D0A88; /* 0x160D0A84: jmp 0x160d0a88 */
L_160D0A86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D0A86: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D0A88:
    /* test eax, eax */ /* 0x160D0A88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0B69; /* 0x160D0A8A: jl 0x160d0b69 */
L_160D0A90:
    eax = MEM32(ebp + (-0x3C)); /* 0x160D0A90: mov eax, dword ptr [ebp - 0x3c] */
    edx = ebx; /* 0x160D0A93: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x160D0A95: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x160D0A97: add ecx, eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x38); /* 0x160D0A99: lea eax, [ebp - 0x38] */
    RECOMP_CALL(sub_160D1B70); /* 0x160D0A9C: call 0x160d1b70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D0AA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0B69; /* 0x160D0AA3: jl 0x160d0b69 */
L_160D0AA9:
    eax = MEM32(esi + 0x18); /* 0x160D0AA9: mov eax, dword ptr [esi + 0x18] */
    esp = esp; /* 0x160D0AAC: lea esp, [esp] */
L_160D0AB0:
    /* test eax, eax */ /* 0x160D0AB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D0ABF; /* 0x160D0AB2: je 0x160d0abf */
L_160D0AB4:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x160D0AB4: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0ABF; /* 0x160D0AB8: jne 0x160d0abf */
L_160D0ABA:
    eax = MEM32(eax + 0x20); /* 0x160D0ABA: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160D0AB0; /* 0x160D0ABD: jmp 0x160d0ab0 */
L_160D0ABF:
    MEM32(ebp + (-0x40)) = eax; /* 0x160D0ABF: mov dword ptr [ebp - 0x40], eax */
    esi = eax; /* 0x160D0AC2: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_160D09F8; /* 0x160D0AC4: jmp 0x160d09f8 */
L_160D0AC9:
    /* cmp eax, 0x35u */ /* 0x160D0AC9: cmp eax, 0x35 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0AD5; /* 0x160D0ACC: jne 0x160d0ad5 */
L_160D0ACE:
    edx = 0x1603854Cu; /* 0x160D0ACE: mov edx, 0x1603854c */
    goto L_160D0ADA; /* 0x160D0AD3: jmp 0x160d0ada */
L_160D0AD5:
    edx = 0x160385CCu; /* 0x160D0AD5: mov edx, 0x160385cc */
L_160D0ADA:
    eax = edx; /* 0x160D0ADA: mov eax, edx */
    esi = eax + 0x1; /* 0x160D0ADC: lea esi, [eax + 1] */
    /* nop */ /* 0x160D0ADF: nop  */
L_160D0AE0:
    SET_LO8(ecx, MEM8(eax)); /* 0x160D0AE0: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D0AE2: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x160D0AE3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0AE0; /* 0x160D0AE5: jne 0x160d0ae0 */
L_160D0AE7:
    ecx = MEM32(ebp + (-0x3C)); /* 0x160D0AE7: mov ecx, dword ptr [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x160D0AEA: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x160D0AEB: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x160D0AED: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x1602F590u); /* 0x160D0AF0: push 0x1602f590 */
    PUSH32(esp, esi); /* 0x160D0AF5: push esi */
    PUSH32(esp, ecx); /* 0x160D0AF6: push ecx */
    edi = eax; /* 0x160D0AF7: mov edi, eax */
    RECOMP_CALL(sub_16065F10); /* 0x160D0AF9: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x160D0AFE: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160D0B01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0B69; /* 0x160D0B03: jl 0x160d0b69 */
L_160D0B05:
    ecx = MEM32(ebx + 0x18); /* 0x160D0B05: mov ecx, dword ptr [ebx + 0x18] */
L_160D0B08:
    /* test ecx, ecx */ /* 0x160D0B08: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D0B17; /* 0x160D0B0A: je 0x160d0b17 */
L_160D0B0C:
    /* cmp MEM32(ecx + 0x4), 0xAu */ /* 0x160D0B0C: cmp dword ptr [ecx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0B17; /* 0x160D0B10: jne 0x160d0b17 */
L_160D0B12:
    ecx = MEM32(ecx + 0x20); /* 0x160D0B12: mov ecx, dword ptr [ecx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160D0B08; /* 0x160D0B15: jmp 0x160d0b08 */
L_160D0B17:
    edx = edi + 0x1; /* 0x160D0B17: lea edx, [edi + 1] */
    /* cmp edx, esi */ /* 0x160D0B1A: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0B22; /* 0x160D0B1C: jbe 0x160d0b22 */
L_160D0B1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0B1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D0B27; /* 0x160D0B20: jmp 0x160d0b27 */
L_160D0B22:
    eax = esi; /* 0x160D0B22: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x160D0B24: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x160D0B26: dec eax */
    _flag_k = FK_DEC;
L_160D0B27:
    edx = MEM32(ecx); /* 0x160D0B27: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x18); /* 0x160D0B29: mov edx, dword ptr [edx + 0x18] */
    PUSH32(esp, eax); /* 0x160D0B2C: push eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x160D0B2D: mov eax, dword ptr [ebp - 0x3c] */
    eax = eax + edi + 0x1; /* 0x160D0B30: lea eax, [eax + edi + 1] */
    PUSH32(esp, eax); /* 0x160D0B34: push eax */
    RECOMP_ICALL(edx); /* 0x160D0B35: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D0B37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0B69; /* 0x160D0B39: jl 0x160d0b69 */
L_160D0B3B:
    eax = MEM32(ebx + 0x1C); /* 0x160D0B3B: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x160D0B3E: push eax */
    PUSH32(esp, 0x1603967Cu); /* 0x160D0B3F: push 0x1603967c */
    ecx = 0x32u; /* 0x160D0B44: mov ecx, 0x32 */
    edi = ebp + (-0x38); /* 0x160D0B49: lea edi, [ebp - 0x38] */
    RECOMP_CALL(sub_16057300); /* 0x160D0B4C: call 0x16057300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160D0B51: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160D0B54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0B69; /* 0x160D0B56: jl 0x160d0b69 */
L_160D0B58:
    ebx = MEM32(ebp + (-0x3C)); /* 0x160D0B58: mov ebx, dword ptr [ebp - 0x3c] */
    ecx = edi; /* 0x160D0B5B: mov ecx, edi */
    PUSH32(esp, ecx); /* 0x160D0B5D: push ecx */
    RECOMP_CALL(sub_160D1B20); /* 0x160D0B5E: call 0x160d1b20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D0B63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0B69; /* 0x160D0B65: jl 0x160d0b69 */
L_160D0B67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0B67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D0B69:
    ecx = MEM32(ebp + (-0x4)); /* 0x160D0B69: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x160D0B6C: pop edi */
    esi = POP32_VAL(esp); /* 0x160D0B6D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x160D0B6E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160D0B70: pop ebx */
    RECOMP_CALL(sub_161ADCF5); /* 0x160D0B71: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160D0B76: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0B78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0B79: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D0B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0B90u);

L_160D0B90:
    edi = edi; /* 0x160D0B90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0B92: push ebp */
    ebp = esp; /* 0x160D0B93: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x160D0B95: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x160D0B98: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x28); /* 0x160D0B9A: mov eax, dword ptr [eax + 0x28] */
    edx = ebp + 0x8; /* 0x160D0B9D: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x160D0BA0: push edx */
    RECOMP_ICALL(eax); /* 0x160D0BA1: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(eax)); /* 0x160D0BA3: mov al, byte ptr [eax] */
    if (4u) _cf = (((LO8(eax)) >> 3) & 1u); /* 0x160D0BA5: shr al, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> 4u); /* 0x160D0BA5: shr al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x160D0BA8: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160D0BAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0BAB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D0BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0BC0u);

L_160D0BC0:
    edi = edi; /* 0x160D0BC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0BC2: push ebp */
    ebp = esp; /* 0x160D0BC3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160D0BC5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160D0BC6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160D0BC9: push edi */
    edi = ecx; /* 0x160D0BCA: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x160D0BCC: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(ecx); /* 0x160D0BCF: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x28); /* 0x160D0BD1: mov edx, dword ptr [eax + 0x28] */
    PUSH32(esp, esi); /* 0x160D0BD4: push esi */
    RECOMP_ICALL(edx); /* 0x160D0BD5: call edx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & 0xEFu); /* 0x160D0BD7: and byte ptr [esi], 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(edi + 0x20), 0x35u */ /* 0x160D0BDA: cmp dword ptr [edi + 0x20], 0x35 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160D0BDE: sete al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x160D0BE1: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x160D0BE3: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x160D0BE5: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(esi + 0x1))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(esi + 0x1))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(esi + 0x1)); /* 0x160D0BE7: xor al, byte ptr [esi + 1] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    SET_LO8(eax, LO8(eax) & 8); /* 0x160D0BEA: and al, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(esi + 0x1) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x1) ^ LO8(eax))) << 24;
    MEM8(esi + 0x1) = (uint8_t)(MEM8(esi + 0x1) ^ LO8(eax)); /* 0x160D0BEC: xor byte ptr [esi + 1], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(edi + 0x20), 0x36u */ /* 0x160D0BEF: cmp dword ptr [edi + 0x20], 0x36 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x160D0BF3: mov al, byte ptr [esi + 1] */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160D0BF6: sete cl */
    if (4u) _cf = (((LO8(ecx)) >> 4) & 1u); /* 0x160D0BF9: shl cl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 4u); /* 0x160D0BF9: shl cl, 4 */
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(eax))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax)); /* 0x160D0BFC: xor cl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x10u); /* 0x160D0BFE: and cl, 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(eax))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax)); /* 0x160D0C01: xor cl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(esi + 0x3) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x3) | 1)) << 24;
    MEM8(esi + 0x3) = (uint8_t)(MEM8(esi + 0x3) | 1); /* 0x160D0C03: or byte ptr [esi + 3], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160D0C07: pop edi */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x160D0C08: mov byte ptr [esi + 1], cl */
    eax = esi; /* 0x160D0C0B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160D0C0D: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D0C0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0C0F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D0C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0C20u);

L_160D0C20:
    edi = edi; /* 0x160D0C20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0C22: push ebp */
    ebp = esp; /* 0x160D0C23: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160D0C25: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160D0C28: push edi */
    edi = ecx; /* 0x160D0C29: mov edi, ecx */
    /* test LO8(eax), 1 */ /* 0x160D0C2B: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0C36; /* 0x160D0C2D: jne 0x160d0c36 */
L_160D0C2F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160D0C2F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160D0C31: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D0C32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0C33: ret 8 */
L_160D0C36:
    PUSH32(esp, ebx); /* 0x160D0C36: push ebx */
    PUSH32(esp, esi); /* 0x160D0C37: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160D0C38: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160D0C3B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x160D0C3D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0C79; /* 0x160D0C3F: je 0x160d0c79 */
L_160D0C41:
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x160D0C41: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x4) = 0x10u; /* 0x160D0C45: mov dword ptr [esi + 4], 0x10 */
    MEM32(esi + 0x10) = ebx; /* 0x160D0C4C: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x18) = ebx; /* 0x160D0C4F: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi + 0x1C) = ebx; /* 0x160D0C52: mov dword ptr [esi + 0x1c], ebx */
    MEM32(esi + 0x20) = ebx; /* 0x160D0C55: mov dword ptr [esi + 0x20], ebx */
    MEM32(esi + 0x24) = ebx; /* 0x160D0C58: mov dword ptr [esi + 0x24], ebx */
    MEM32(esi + 0x28) = ebx; /* 0x160D0C5B: mov dword ptr [esi + 0x28], ebx */
    MEM32(esi + 0x2C) = ebx; /* 0x160D0C5E: mov dword ptr [esi + 0x2c], ebx */
    MEM32(esi + 0x38) = ebx; /* 0x160D0C61: mov dword ptr [esi + 0x38], ebx */
    MEM32(esi + 0x3C) = ebx; /* 0x160D0C64: mov dword ptr [esi + 0x3c], ebx */
    MEM32(esi + 0x40) = ebx; /* 0x160D0C67: mov dword ptr [esi + 0x40], ebx */
    MEM32(esi + 0x44) = ebx; /* 0x160D0C6A: mov dword ptr [esi + 0x44], ebx */
    MEM32(esi + 0x48) = ebx; /* 0x160D0C6D: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x4C) = ebx; /* 0x160D0C70: mov dword ptr [esi + 0x4c], ebx */
    MEM32(esi + 0x50) = ebx; /* 0x160D0C73: mov dword ptr [esi + 0x50], ebx */
    MEM32(esi + 0x54) = ebx; /* 0x160D0C76: mov dword ptr [esi + 0x54], ebx */
L_160D0C79:
    /* cmp MEM32(edi + 0x18), ebx */ /* 0x160D0C79: cmp dword ptr [edi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0C95; /* 0x160D0C7C: je 0x160d0c95 */
L_160D0C7E:
    ecx = MEM32(edi + 0x18); /* 0x160D0C7E: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(ecx); /* 0x160D0C81: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x160D0C83: push esi */
    PUSH32(esp, eax); /* 0x160D0C84: push eax */
    eax = MEM32(edx + 0x2C); /* 0x160D0C85: mov eax, dword ptr [edx + 0x2c] */
    RECOMP_ICALL(eax); /* 0x160D0C88: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D0C8A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0C95; /* 0x160D0C8C: jne 0x160d0c95 */
L_160D0C8E:
    esi = POP32_VAL(esp); /* 0x160D0C8E: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D0C8F: pop ebx */
    edi = POP32_VAL(esp); /* 0x160D0C90: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D0C91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0C92: ret 8 */
L_160D0C95:
    /* cmp esi, ebx */ /* 0x160D0C95: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0D60; /* 0x160D0C97: je 0x160d0d60 */
L_160D0C9D:
    /* cmp MEM32(esi + 0x44), ebx */ /* 0x160D0C9D: cmp dword ptr [esi + 0x44], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0CAC; /* 0x160D0CA0: jbe 0x160d0cac */
L_160D0CA2:
    /* cmp MEM32(esi + 0x8), 0x10u */ /* 0x160D0CA2: cmp dword ptr [esi + 8], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0CAC; /* 0x160D0CA6: je 0x160d0cac */
L_160D0CA8:
    _flag_a = (uint32_t)((MEM8(esi + 0x58) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x58) | 2)) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) | 2); /* 0x160D0CA8: or byte ptr [esi + 0x58], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D0CAC:
    ecx = MEM32(edi + 0x4); /* 0x160D0CAC: mov ecx, dword ptr [edi + 4] */
    eax = MEM32(esi + 0x38); /* 0x160D0CAF: mov eax, dword ptr [esi + 0x38] */
    MEM32(esi) = ecx; /* 0x160D0CB2: mov dword ptr [esi], ecx */
    ecx = MEM32(esi + 0x3C); /* 0x160D0CB4: mov ecx, dword ptr [esi + 0x3c] */
    MEM32(esi + 0x8) = 0x10u; /* 0x160D0CB7: mov dword ptr [esi + 8], 0x10 */
    MEM32(esi + 0xC) = edi; /* 0x160D0CBE: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x30) = 1; /* 0x160D0CC1: mov dword ptr [esi + 0x30], 1 */
    edx = MEM32(edi + 0x1C); /* 0x160D0CC8: mov edx, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x34) = edx; /* 0x160D0CCB: mov dword ptr [esi + 0x34], edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x160D0CCE: imul eax, dword ptr [edi + 0x1c] */
    edx = MEM32(esi + 0x40); /* 0x160D0CD2: mov edx, dword ptr [esi + 0x40] */
    MEM32(esi + 0x38) = eax; /* 0x160D0CD5: mov dword ptr [esi + 0x38], eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 0x1C)); /* 0x160D0CD8: imul ecx, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x3C) = ecx; /* 0x160D0CDC: mov dword ptr [esi + 0x3c], ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0x1C)); /* 0x160D0CDF: imul edx, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x40) = edx; /* 0x160D0CE3: mov dword ptr [esi + 0x40], edx */
    eax = MEM32(edi + 0x18); /* 0x160D0CE6: mov eax, dword ptr [edi + 0x18] */
    PUSH32(esp, 7); /* 0x160D0CE9: push 7 */
    RECOMP_CALL(sub_160C5640); /* 0x160D0CEB: call 0x160c5640 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D0CF0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0D0C; /* 0x160D0CF2: jne 0x160d0d0c */
L_160D0CF4:
    eax = MEM32(edi + 0x18); /* 0x160D0CF4: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(esi + 0x1C); /* 0x160D0CF7: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x10) = eax; /* 0x160D0CFA: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(esi + 0x18); /* 0x160D0CFD: mov eax, dword ptr [esi + 0x18] */
    MEM32(esi + 0x20) = eax; /* 0x160D0D00: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = ecx; /* 0x160D0D03: mov dword ptr [esi + 0x24], ecx */
    MEM32(esi + 0x18) = ebx; /* 0x160D0D06: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi + 0x1C) = ebx; /* 0x160D0D09: mov dword ptr [esi + 0x1c], ebx */
L_160D0D0C:
    eax = MEM32(esi + 0x44); /* 0x160D0D0C: mov eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D0D0F: inc eax */
    _flag_k = FK_INC;
    /* test MEM8(ebp + 0x8), 0x10u */ /* 0x160D0D10: test byte ptr [ebp + 8], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x44) = eax; /* 0x160D0D14: mov dword ptr [esi + 0x44], eax */
    eax = MEM32(esi + 0x54); /* 0x160D0D17: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x4C) = eax; /* 0x160D0D1A: mov dword ptr [esi + 0x4c], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0D54; /* 0x160D0D1D: jne 0x160d0d54 */
L_160D0D1F:
    ecx = eax + 0xF; /* 0x160D0D1F: lea ecx, [eax + 0xf] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    ecx = ecx & 0xFFFFFFF0u; /* 0x160D0D22: and ecx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x48) = 0x10u; /* 0x160D0D25: mov dword ptr [esi + 0x48], 0x10 */
    MEM32(esi + 0x50) = ecx; /* 0x160D0D2C: mov dword ptr [esi + 0x50], ecx */
    edi = MEM32(edi + 0x1C); /* 0x160D0D2F: mov edi, dword ptr [edi + 0x1c] */
    /* cmp edi, ebx */ /* 0x160D0D32: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0D48; /* 0x160D0D34: jbe 0x160d0d48 */
L_160D0D36:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x160D0D36: dec edi */
    _flag_k = FK_DEC;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x160D0D37: imul edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x160D0D3A: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x54) = edi; /* 0x160D0D3C: mov dword ptr [esi + 0x54], edi */
    esi = POP32_VAL(esp); /* 0x160D0D3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D0D40: pop ebx */
    SET_LO8(eax, 1); /* 0x160D0D41: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160D0D43: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D0D44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0D45: ret 8 */
L_160D0D48:
    MEM32(esi + 0x54) = ebx; /* 0x160D0D48: mov dword ptr [esi + 0x54], ebx */
    esi = POP32_VAL(esp); /* 0x160D0D4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D0D4C: pop ebx */
    SET_LO8(eax, 1); /* 0x160D0D4D: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160D0D4F: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D0D50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0D51: ret 8 */
L_160D0D54:
    MEM32(esi + 0x50) = eax; /* 0x160D0D54: mov dword ptr [esi + 0x50], eax */
    edx = MEM32(edi + 0x1C); /* 0x160D0D57: mov edx, dword ptr [edi + 0x1c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x160D0D5A: imul edx, eax */
    MEM32(esi + 0x54) = edx; /* 0x160D0D5D: mov dword ptr [esi + 0x54], edx */
L_160D0D60:
    esi = POP32_VAL(esp); /* 0x160D0D60: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D0D61: pop ebx */
    SET_LO8(eax, 1); /* 0x160D0D62: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160D0D64: pop edi */
    ebp = POP32_VAL(esp); /* 0x160D0D65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0D66: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D0D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0D70u);

L_160D0D70:
    edi = edi; /* 0x160D0D70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0D72: push ebp */
    ebp = esp; /* 0x160D0D73: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160D0D75: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x160D0D78: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0D82; /* 0x160D0D7A: jne 0x160d0d82 */
L_160D0D7C:
    SET_LO8(eax, 1); /* 0x160D0D7C: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160D0D7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0D7F: ret 4 */
L_160D0D82:
    /* cmp MEM32(eax + 0x4), 7 */ /* 0x160D0D82: cmp dword ptr [eax + 4], 7 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0D8E; /* 0x160D0D86: je 0x160d0d8e */
L_160D0D88:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160D0D88: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160D0D8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0D8B: ret 4 */
L_160D0D8E:
    edx = MEM32(ecx + 0x1C); /* 0x160D0D8E: mov edx, dword ptr [ecx + 0x1c] */
    /* cmp edx, MEM32(eax + 0x1C) */ /* 0x160D0D91: cmp edx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0D88; /* 0x160D0D94: jne 0x160d0d88 */
L_160D0D96:
    ecx = MEM32(ecx + 0x18); /* 0x160D0D96: mov ecx, dword ptr [ecx + 0x18] */
    edx = MEM32(ecx); /* 0x160D0D99: mov edx, dword ptr [ecx] */
    eax = MEM32(eax + 0x18); /* 0x160D0D9B: mov eax, dword ptr [eax + 0x18] */
    edx = MEM32(edx + 0x30); /* 0x160D0D9E: mov edx, dword ptr [edx + 0x30] */
    PUSH32(esp, eax); /* 0x160D0DA1: push eax */
    RECOMP_ICALL(edx); /* 0x160D0DA2: call edx */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160D0DA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D0DA5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D0DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0DB0u);

L_160D0DB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D0DB0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x160D0DB2: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160D0DB5: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x160D0DB8: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160D0DBB: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x16039898u; /* 0x160D0DC2: mov dword ptr [eax], 0x16039898 */
    MEM32(eax + 0x4) = 8; /* 0x160D0DC8: mov dword ptr [eax + 4], 8 */
    MEM32(eax + 0x18) = ecx; /* 0x160D0DCF: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x160D0DD2: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x160D0DD5: mov dword ptr [eax + 0x20], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D0DD8: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D0DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0DE0u);

L_160D0DE0:
    edi = edi; /* 0x160D0DE0: mov edi, edi */
    PUSH32(esp, esi); /* 0x160D0DE2: push esi */
    esi = ecx; /* 0x160D0DE3: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x160D0DE5: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x160D0DE8: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x160D0DEA: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160D0DED: call edx */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x160D0DEF: mov ecx, eax */
    eax = MEM32(esi + 0x20); /* 0x160D0DF1: mov eax, dword ptr [esi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1C)); /* 0x160D0DF4: imul eax, dword ptr [esi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x160D0DF8: imul eax, ecx */
    esi = POP32_VAL(esp); /* 0x160D0DFB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D0DFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D0E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0E10u);

L_160D0E10:
    edi = edi; /* 0x160D0E10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0E12: push ebp */
    ebp = esp; /* 0x160D0E13: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160D0E15: push esi */
    esi = ecx; /* 0x160D0E16: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x160D0E18: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x160D0E1B: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x160D0E1D: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160D0E20: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x160D0E22: imul eax, dword ptr [esi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1C)); /* 0x160D0E26: imul eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x160D0E2A: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x160D0E2D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160D0E41; /* 0x160D0E2F: jb 0x160d0e41 */
L_160D0E31:
    ecx = MEM32(ebp + 0xC); /* 0x160D0E31: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x160D0E34: mov dword ptr [ecx + 8], eax */
    eax = 1; /* 0x160D0E37: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x160D0E3C: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D0E3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0E3E: ret 8 */
L_160D0E41:
    edx = MEM32(esi + 0x18); /* 0x160D0E41: mov edx, dword ptr [esi + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x160D0E44: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x4) = esi; /* 0x160D0E47: mov dword ptr [eax + 4], esi */
    MEM32(eax) = edx; /* 0x160D0E4A: mov dword ptr [eax], edx */
    MEM32(eax + 0x8) = ecx; /* 0x160D0E4C: mov dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0E4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160D0E51: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D0E52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0E53: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D0E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0E60u);

L_160D0E60:
    edi = edi; /* 0x160D0E60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0E62: push ebp */
    ebp = esp; /* 0x160D0E63: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160D0E65: push esi */
    esi = ecx; /* 0x160D0E66: mov esi, ecx */
    eax = MEM32(esi + 0x1C); /* 0x160D0E68: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x160D0E6B: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x160D0E6E: mov dword ptr [ecx], eax */
    ecx = MEM32(esi + 0x18); /* 0x160D0E70: mov ecx, dword ptr [esi + 0x18] */
    edx = MEM32(ecx); /* 0x160D0E73: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x4); /* 0x160D0E75: mov eax, dword ptr [edx + 4] */
    RECOMP_ICALL(eax); /* 0x160D0E78: call eax */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x160D0E7A: imul eax, dword ptr [esi + 0x20] */
    ecx = MEM32(ebp + 0xC); /* 0x160D0E7E: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x160D0E81: mov dword ptr [ecx], eax */
    esi = POP32_VAL(esp); /* 0x160D0E83: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D0E84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0E85: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D0E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0E90u);

L_160D0E90:
    edi = edi; /* 0x160D0E90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0E92: push ebp */
    ebp = esp; /* 0x160D0E93: mov ebp, esp */
    eax = MEM32(ebp + 0x20); /* 0x160D0E95: mov eax, dword ptr [ebp + 0x20] */
    edx = MEM32(ebp + 0x1C); /* 0x160D0E98: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x160D0E9B: push eax */
    eax = MEM32(ebp + 0x10); /* 0x160D0E9C: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x160D0E9F: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160D0EA0: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160D0EA3: push eax */
    eax = MEM32(ebp + 0x8); /* 0x160D0EA4: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160D0EA7: push edx */
    edx = MEM32(ecx + 0x20); /* 0x160D0EA8: mov edx, dword ptr [ecx + 0x20] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x1C)); /* 0x160D0EAB: imul edx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, eax); /* 0x160D0EAF: push eax */
    eax = MEM32(ecx + 0x18); /* 0x160D0EB0: mov eax, dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x14); /* 0x160D0EB3: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x160D0EB6: push edx */
    PUSH32(esp, eax); /* 0x160D0EB7: push eax */
    eax = MEM32(ebp + 0x18); /* 0x160D0EB8: mov eax, dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_160CE630); /* 0x160D0EBB: call 0x160ce630 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160D0EC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160D0EC1: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_160D0ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0ED0u);

L_160D0ED0:
    edi = edi; /* 0x160D0ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0ED2: push ebp */
    ebp = esp; /* 0x160D0ED3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160D0ED5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x160D0ED8: push esi */
    PUSH32(esp, edi); /* 0x160D0ED9: push edi */
    edi = ecx; /* 0x160D0EDA: mov edi, ecx */
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x160D0EDC: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0F75; /* 0x160D0EE0: jbe 0x160d0f75 */
L_160D0EE6:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x160D0EE6: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0F75; /* 0x160D0EEA: jbe 0x160d0f75 */
L_160D0EF0:
    esi = MEM32(ebp + 0xC); /* 0x160D0EF0: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x18); /* 0x160D0EF3: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(ecx); /* 0x160D0EF6: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x14); /* 0x160D0EF8: mov eax, dword ptr [eax + 0x14] */
    edx = ebp + 0xC; /* 0x160D0EFB: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160D0EFE: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160D0EFF: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160D0F02: push esi */
    PUSH32(esp, edx); /* 0x160D0F03: push edx */
    MEM32(ebp + (-0x8)) = esi; /* 0x160D0F04: mov dword ptr [ebp - 8], esi */
    RECOMP_ICALL(eax); /* 0x160D0F07: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D0F09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0F80; /* 0x160D0F0B: jl 0x160d0f80 */
L_160D0F0D:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x160D0F0D: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x160D0F11: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = 0; /* 0x160D0F14: mov dword ptr [ebp - 4], 0 */
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0F5C; /* 0x160D0F1B: jbe 0x160d0f5c */
L_160D0F1D:
    PUSH32(esp, ebx); /* 0x160D0F1D: push ebx */
    edi = edi; /* 0x160D0F1E: mov edi, edi */
L_160D0F20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160D0F20: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x20), ebx */ /* 0x160D0F22: cmp dword ptr [edi + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D0F4F; /* 0x160D0F25: jbe 0x160d0f4f */
L_160D0F27:
    ecx = MEM32(ebp + (-0x8)); /* 0x160D0F27: mov ecx, dword ptr [ebp - 8] */
    /* cmp esi, ecx */ /* 0x160D0F2A: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D0F3F; /* 0x160D0F2C: je 0x160d0f3f */
L_160D0F2E:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x160D0F2E: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x160D0F2E: shl eax, 4 */
    PUSH32(esp, eax); /* 0x160D0F31: push eax */
    PUSH32(esp, ecx); /* 0x160D0F32: push ecx */
    PUSH32(esp, esi); /* 0x160D0F33: push esi */
    RECOMP_CALL(sub_161AE3C0); /* 0x160D0F34: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x160D0F39: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160D0F3C: add esp, 0xc */
    _flag_k = FK_ADD;
L_160D0F3F:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x160D0F3F: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x160D0F42: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x160D0F44: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x160D0F44: shl ecx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x160D0F47: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x160D0F48: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(edi + 0x20) */ /* 0x160D0F4A: cmp ebx, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D0F27; /* 0x160D0F4D: jb 0x160d0f27 */
L_160D0F4F:
    ecx = MEM32(ebp + (-0x4)); /* 0x160D0F4F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x160D0F52: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x160D0F53: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, MEM32(edi + 0x1C) */ /* 0x160D0F56: cmp ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D0F20; /* 0x160D0F59: jb 0x160d0f20 */
L_160D0F5B:
    ebx = POP32_VAL(esp); /* 0x160D0F5B: pop ebx */
L_160D0F5C:
    edx = MEM32(edi + 0x20); /* 0x160D0F5C: mov edx, dword ptr [edi + 0x20] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x160D0F5F: imul edx, eax */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0x1C)); /* 0x160D0F62: imul edx, dword ptr [edi + 0x1c] */
    eax = MEM32(ebp + 0x10); /* 0x160D0F66: mov eax, dword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x160D0F69: pop edi */
    MEM32(eax) = edx; /* 0x160D0F6A: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0F6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160D0F6E: pop esi */
    esp = ebp; /* 0x160D0F6F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0F71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160D0F72: ret 0xc */
L_160D0F75:
    ecx = MEM32(ebp + 0x10); /* 0x160D0F75: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = 0; /* 0x160D0F78: mov dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D0F7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D0F80:
    edi = POP32_VAL(esp); /* 0x160D0F80: pop edi */
    esi = POP32_VAL(esp); /* 0x160D0F81: pop esi */
    esp = ebp; /* 0x160D0F82: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D0F84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160D0F85: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160D0F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D0F90u);

L_160D0F90:
    edi = edi; /* 0x160D0F90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D0F92: push ebp */
    ebp = esp; /* 0x160D0F93: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160D0F95: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x160D0F96: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160D0F99: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160D0F9A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x160D0F9D: push edi */
    edi = ecx; /* 0x160D0F9E: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x160D0FA0: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(ecx); /* 0x160D0FA3: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x18); /* 0x160D0FA5: mov edx, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x160D0FA8: push esi */
    PUSH32(esp, ebx); /* 0x160D0FA9: push ebx */
    RECOMP_ICALL(edx); /* 0x160D0FAA: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D0FAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D0FF8; /* 0x160D0FAE: jl 0x160d0ff8 */
L_160D0FB0:
    eax = ebx; /* 0x160D0FB0: mov eax, ebx */
    edx = eax + 0x1; /* 0x160D0FB2: lea edx, [eax + 1] */
L_160D0FB5:
    SET_LO8(ecx, MEM8(eax)); /* 0x160D0FB5: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D0FB7: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x160D0FB8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D0FB5; /* 0x160D0FBA: jne 0x160d0fb5 */
L_160D0FBC:
    ecx = MEM32(edi + 0x1C); /* 0x160D0FBC: mov ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x160D0FBF: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x160D0FC1: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x160D0FC3: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp ecx, 1 */ /* 0x160D0FC5: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D0FE4; /* 0x160D0FC8: jne 0x160d0fe4 */
L_160D0FCA:
    ecx = MEM32(edi + 0x20); /* 0x160D0FCA: mov ecx, dword ptr [edi + 0x20] */
    PUSH32(esp, ecx); /* 0x160D0FCD: push ecx */
    PUSH32(esp, 0x1602F394u); /* 0x160D0FCE: push 0x1602f394 */
    PUSH32(esp, esi); /* 0x160D0FD3: push esi */
    PUSH32(esp, eax); /* 0x160D0FD4: push eax */
    RECOMP_CALL(sub_16065F10); /* 0x160D0FD5: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x160D0FDA: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x160D0FDD: pop edi */
    esi = POP32_VAL(esp); /* 0x160D0FDE: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D0FDF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D0FE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0FE1: ret 8 */
L_160D0FE4:
    edx = MEM32(edi + 0x20); /* 0x160D0FE4: mov edx, dword ptr [edi + 0x20] */
    PUSH32(esp, edx); /* 0x160D0FE7: push edx */
    PUSH32(esp, ecx); /* 0x160D0FE8: push ecx */
    PUSH32(esp, 0x16039684u); /* 0x160D0FE9: push 0x16039684 */
    PUSH32(esp, esi); /* 0x160D0FEE: push esi */
    PUSH32(esp, eax); /* 0x160D0FEF: push eax */
    RECOMP_CALL(sub_16065F10); /* 0x160D0FF0: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x160D0FF5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_160D0FF8:
    edi = POP32_VAL(esp); /* 0x160D0FF8: pop edi */
    esi = POP32_VAL(esp); /* 0x160D0FF9: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D0FFA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D0FFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D0FFC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D1010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1010u);

L_160D1010:
    edi = edi; /* 0x160D1010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1012: push ebp */
    ebp = esp; /* 0x160D1013: mov ebp, esp */
    eax = MEM32(0x161B4344); /* 0x160D1015: mov eax, dword ptr [0x161b4344] */
    PUSH32(esp, esi); /* 0x160D101A: push esi */
    PUSH32(esp, edi); /* 0x160D101B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160D101C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x160D101E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = ecx; /* 0x160D1020: mov esi, ecx */
    if (CMP_GE(_flag_a, _flag_b)) goto L_160D1028; /* 0x160D1022: jge 0x160d1028 */
L_160D1024:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1024: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D102F; /* 0x160D1026: jmp 0x160d102f */
L_160D1028:
    PUSH32(esp, eax); /* 0x160D1028: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D1029: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D102F:
    ecx = MEM32(eax + 0x4); /* 0x160D102F: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160D1032: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x160D1034: push 0x24 */
    RECOMP_CALL(sub_161A8F81); /* 0x160D1036: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x160D103B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D1085; /* 0x160D103D: je 0x160d1085 */
L_160D103F:
    MEM32(eax + 0x8) = edi; /* 0x160D103F: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x160D1042: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = edi; /* 0x160D1045: mov dword ptr [eax + 0x10], edi */
    MEM32(eax + 0x18) = edi; /* 0x160D1048: mov dword ptr [eax + 0x18], edi */
    MEM32(eax + 0x1C) = edi; /* 0x160D104B: mov dword ptr [eax + 0x1c], edi */
    MEM32(eax + 0x20) = edi; /* 0x160D104E: mov dword ptr [eax + 0x20], edi */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160D1051: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x160398CCu; /* 0x160D1058: mov dword ptr [eax], 0x160398cc */
    MEM32(eax + 0x4) = 9; /* 0x160D105E: mov dword ptr [eax + 4], 9 */
    ecx = MEM32(esi + 0x18); /* 0x160D1065: mov ecx, dword ptr [esi + 0x18] */
    MEM32(eax + 0x18) = ecx; /* 0x160D1068: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160D106B: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x1C) = 1; /* 0x160D106E: mov dword ptr [eax + 0x1c], 1 */
    edx = MEM32(esi + 0x20); /* 0x160D1075: mov edx, dword ptr [esi + 0x20] */
    MEM32(eax + 0x20) = edx; /* 0x160D1078: mov dword ptr [eax + 0x20], edx */
    edi = POP32_VAL(esp); /* 0x160D107B: pop edi */
    MEM32(ecx) = eax; /* 0x160D107C: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D107E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160D1080: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D1081: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D1082: ret 4 */
L_160D1085:
    edi = POP32_VAL(esp); /* 0x160D1085: pop edi */
    eax = 0x8007000Eu; /* 0x160D1086: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x160D108B: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D108C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D108D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D10A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D10A0u);

L_160D10A0:
    edi = edi; /* 0x160D10A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D10A2: push ebp */
    ebp = esp; /* 0x160D10A3: mov ebp, esp */
    ecx = MEM32(ecx + 0x18); /* 0x160D10A5: mov ecx, dword ptr [ecx + 0x18] */
    eax = MEM32(ecx); /* 0x160D10A8: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x28); /* 0x160D10AA: mov edx, dword ptr [eax + 0x28] */
    PUSH32(esp, esi); /* 0x160D10AD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160D10AE: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160D10B1: push esi */
    RECOMP_ICALL(edx); /* 0x160D10B2: call edx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & 0xEFu); /* 0x160D10B4: and byte ptr [esi], 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(esi + 0x3) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x3) | 1)) << 24;
    MEM8(esi + 0x3) = (uint8_t)(MEM8(esi + 0x3) | 1); /* 0x160D10B7: or byte ptr [esi + 3], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi; /* 0x160D10BB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160D10BD: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D10BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D10BF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D10D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D10D0u);

L_160D10D0:
    edi = edi; /* 0x160D10D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D10D2: push ebp */
    ebp = esp; /* 0x160D10D3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160D10D5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x160D10D6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160D10D9: push esi */
    PUSH32(esp, edi); /* 0x160D10DA: push edi */
    edi = ecx; /* 0x160D10DB: mov edi, ecx */
    /* test LO8(ebx), 1 */ /* 0x160D10DD: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D10F0; /* 0x160D10E0: jne 0x160d10f0 */
L_160D10E2:
    eax = MEM32(edi + 0x18); /* 0x160D10E2: mov eax, dword ptr [edi + 0x18] */
    PUSH32(esp, 2); /* 0x160D10E5: push 2 */
    RECOMP_CALL(sub_160C5640); /* 0x160D10E7: call 0x160c5640 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D10EC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1103; /* 0x160D10EE: je 0x160d1103 */
L_160D10F0:
    ecx = MEM32(edi + 0x18); /* 0x160D10F0: mov ecx, dword ptr [edi + 0x18] */
    esi = MEM32(ebp + 0xC); /* 0x160D10F3: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x160D10F6: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x2C); /* 0x160D10F8: mov edx, dword ptr [eax + 0x2c] */
    PUSH32(esp, esi); /* 0x160D10FB: push esi */
    PUSH32(esp, ebx); /* 0x160D10FC: push ebx */
    RECOMP_ICALL(edx); /* 0x160D10FD: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D10FF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D110C; /* 0x160D1101: jne 0x160d110c */
L_160D1103:
    edi = POP32_VAL(esp); /* 0x160D1103: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1104: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160D1105: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x160D1107: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D1108: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D1109: ret 8 */
L_160D110C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D110C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x160D110E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D11E4; /* 0x160D1110: je 0x160d11e4 */
L_160D1116:
    ecx = MEM32(edi + 0x4); /* 0x160D1116: mov ecx, dword ptr [edi + 4] */
    MEM32(esi) = ecx; /* 0x160D1119: mov dword ptr [esi], ecx */
    MEM32(esi + 0xC) = edi; /* 0x160D111B: mov dword ptr [esi + 0xc], edi */
    edx = MEM32(edi + 0x18); /* 0x160D111E: mov edx, dword ptr [edi + 0x18] */
    MEM32(esi + 0x10) = edx; /* 0x160D1121: mov dword ptr [esi + 0x10], edx */
    ecx = MEM32(edi + 0x1C); /* 0x160D1124: mov ecx, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x30) = ecx; /* 0x160D1127: mov dword ptr [esi + 0x30], ecx */
    edx = MEM32(edi + 0x20); /* 0x160D112A: mov edx, dword ptr [edi + 0x20] */
    MEM32(esi + 0x34) = edx; /* 0x160D112D: mov dword ptr [esi + 0x34], edx */
    ecx = MEM32(edi + 0x1C); /* 0x160D1130: mov ecx, dword ptr [edi + 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x38)); /* 0x160D1133: imul ecx, dword ptr [esi + 0x38] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 0x20)); /* 0x160D1137: imul ecx, dword ptr [edi + 0x20] */
    MEM32(esi + 0x38) = ecx; /* 0x160D113B: mov dword ptr [esi + 0x38], ecx */
    edx = MEM32(edi + 0x1C); /* 0x160D113E: mov edx, dword ptr [edi + 0x1c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x3C)); /* 0x160D1141: imul edx, dword ptr [esi + 0x3c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0x20)); /* 0x160D1145: imul edx, dword ptr [edi + 0x20] */
    ecx = MEM32(esi + 0x40); /* 0x160D1149: mov ecx, dword ptr [esi + 0x40] */
    MEM32(esi + 0x3C) = edx; /* 0x160D114C: mov dword ptr [esi + 0x3c], edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 0x1C)); /* 0x160D114F: imul ecx, dword ptr [edi + 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 0x20)); /* 0x160D1153: imul ecx, dword ptr [edi + 0x20] */
    edx = MEM32(esi + 0x18); /* 0x160D1157: mov edx, dword ptr [esi + 0x18] */
    MEM32(esi + 0x40) = ecx; /* 0x160D115A: mov dword ptr [esi + 0x40], ecx */
    ecx = MEM32(esi + 0x1C); /* 0x160D115D: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x20) = edx; /* 0x160D1160: mov dword ptr [esi + 0x20], edx */
    MEM32(esi + 0x24) = ecx; /* 0x160D1163: mov dword ptr [esi + 0x24], ecx */
    MEM32(esi + 0x18) = eax; /* 0x160D1166: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = eax; /* 0x160D1169: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x44) = eax; /* 0x160D116C: mov dword ptr [esi + 0x44], eax */
    /* test LO8(ebx), 0x10u */ /* 0x160D116F: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D11D2; /* 0x160D1172: jne 0x160d11d2 */
L_160D1174:
    eax = MEM32(edi + 0x4); /* 0x160D1174: mov eax, dword ptr [edi + 4] */
    /* cmp eax, 9 */ /* 0x160D1177: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D118E; /* 0x160D117A: je 0x160d118e */
L_160D117C:
    /* cmp eax, 8 */ /* 0x160D117C: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1186; /* 0x160D117F: jne 0x160d1186 */
L_160D1181:
    /* test LO8(ebx), 0x20u */ /* 0x160D1181: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D118E; /* 0x160D1184: jne 0x160d118e */
L_160D1186:
    ecx = MEM32(edi + 0x20); /* 0x160D1186: mov ecx, dword ptr [edi + 0x20] */
    edi = MEM32(edi + 0x1C); /* 0x160D1189: mov edi, dword ptr [edi + 0x1c] */
    goto L_160D1194; /* 0x160D118C: jmp 0x160d1194 */
L_160D118E:
    ecx = MEM32(edi + 0x1C); /* 0x160D118E: mov ecx, dword ptr [edi + 0x1c] */
    edi = MEM32(edi + 0x20); /* 0x160D1191: mov edi, dword ptr [edi + 0x20] */
L_160D1194:
    eax = MEM32(esi + 0x54); /* 0x160D1194: mov eax, dword ptr [esi + 0x54] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x160D1197: imul eax, edi */
    /* cmp ecx, 1 */ /* 0x160D119A: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D11C2; /* 0x160D119D: jbe 0x160d11c2 */
L_160D119F:
    edx = eax + 0xF; /* 0x160D119F: lea edx, [eax + 0xf] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edx = edx & 0xFFFFFFF0u; /* 0x160D11A2: and edx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160D11A5: dec ecx */
    _flag_k = FK_DEC;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x160D11A6: imul edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x160D11A9: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x160D11AB: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160D11AF: pop edi */
    MEM32(esi + 0x48) = 0x10u; /* 0x160D11B0: mov dword ptr [esi + 0x48], 0x10 */
    MEM32(esi + 0x54) = edx; /* 0x160D11B7: mov dword ptr [esi + 0x54], edx */
    esi = POP32_VAL(esp); /* 0x160D11BA: pop esi */
    SET_LO8(eax, 1); /* 0x160D11BB: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x160D11BD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D11BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D11BF: ret 8 */
L_160D11C2:
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x160D11C2: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160D11C6: pop edi */
    MEM32(esi + 0x54) = eax; /* 0x160D11C7: mov dword ptr [esi + 0x54], eax */
    esi = POP32_VAL(esp); /* 0x160D11CA: pop esi */
    SET_LO8(eax, 1); /* 0x160D11CB: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x160D11CD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D11CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D11CF: ret 8 */
L_160D11D2:
    ecx = MEM32(edi + 0x1C); /* 0x160D11D2: mov ecx, dword ptr [edi + 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x54)); /* 0x160D11D5: imul ecx, dword ptr [esi + 0x54] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 0x20)); /* 0x160D11D9: imul ecx, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x160D11DD: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x54) = ecx; /* 0x160D11E1: mov dword ptr [esi + 0x54], ecx */
L_160D11E4:
    edi = POP32_VAL(esp); /* 0x160D11E4: pop edi */
    esi = POP32_VAL(esp); /* 0x160D11E5: pop esi */
    SET_LO8(eax, 1); /* 0x160D11E6: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x160D11E8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D11E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D11EA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D1200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1200u);

L_160D1200:
    edi = edi; /* 0x160D1200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1202: push ebp */
    ebp = esp; /* 0x160D1203: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160D1205: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x160D1208: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1212; /* 0x160D120A: jne 0x160d1212 */
L_160D120C:
    SET_LO8(eax, 1); /* 0x160D120C: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160D120E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D120F: ret 4 */
L_160D1212:
    edx = MEM32(eax + 0x4); /* 0x160D1212: mov edx, dword ptr [eax + 4] */
    /* cmp edx, MEM32(ecx + 0x4) */ /* 0x160D1215: cmp edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D123C; /* 0x160D1218: jne 0x160d123c */
L_160D121A:
    edx = MEM32(ecx + 0x1C); /* 0x160D121A: mov edx, dword ptr [ecx + 0x1c] */
    /* cmp edx, MEM32(eax + 0x1C) */ /* 0x160D121D: cmp edx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D123C; /* 0x160D1220: jne 0x160d123c */
L_160D1222:
    edx = MEM32(ecx + 0x20); /* 0x160D1222: mov edx, dword ptr [ecx + 0x20] */
    /* cmp edx, MEM32(eax + 0x20) */ /* 0x160D1225: cmp edx, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D123C; /* 0x160D1228: jne 0x160d123c */
L_160D122A:
    ecx = MEM32(ecx + 0x18); /* 0x160D122A: mov ecx, dword ptr [ecx + 0x18] */
    edx = MEM32(ecx); /* 0x160D122D: mov edx, dword ptr [ecx] */
    eax = MEM32(eax + 0x18); /* 0x160D122F: mov eax, dword ptr [eax + 0x18] */
    edx = MEM32(edx + 0x30); /* 0x160D1232: mov edx, dword ptr [edx + 0x30] */
    PUSH32(esp, eax); /* 0x160D1235: push eax */
    RECOMP_ICALL(edx); /* 0x160D1236: call edx */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160D1238: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D1239: ret 4 */
L_160D123C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160D123C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160D123E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D123F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D1250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1250u);

L_160D1250:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1250: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x160D1252: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160D1255: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x160D1258: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160D125B: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax + 0x18) = ecx; /* 0x160D1262: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x160D1265: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x160D1268: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax) = 0x160398CCu; /* 0x160D126B: mov dword ptr [eax], 0x160398cc */
    MEM32(eax + 0x4) = 9; /* 0x160D1271: mov dword ptr [eax + 4], 9 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1278: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1280u);

L_160D1280:
    edi = edi; /* 0x160D1280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1282: push ebp */
    ebp = esp; /* 0x160D1283: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x160D1285: mov eax, dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x160D1288: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x160D128B: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D128D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160D128F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D1290: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D12A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D12A0u);

L_160D12A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D12A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x160D12A2: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160D12A5: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x160D12A8: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160D12AB: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x1603972Cu; /* 0x160D12B2: mov dword ptr [eax], 0x1603972c */
    MEM32(eax + 0x4) = 0xAu; /* 0x160D12B8: mov dword ptr [eax + 4], 0xa */
    MEM32(eax + 0x18) = ecx; /* 0x160D12BF: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x160D12C2: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x160D12C5: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x160D12C8: mov dword ptr [eax + 0x24], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D12CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D12E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D12E0u);

L_160D12E0:
    ecx = MEM32(ecx + 0x20); /* 0x160D12E0: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x160D12E3: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x160D12E5: mov edx, dword ptr [eax + 4] */
    { _itail_tgt = (uint32_t)(edx); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D12F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D12F0u);

L_160D12F0:
    edi = edi; /* 0x160D12F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D12F2: push ebp */
    ebp = esp; /* 0x160D12F3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x160D12F5: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160D12F8: push esi */
    PUSH32(esp, edi); /* 0x160D12F9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x160D12FA: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x160D12FD: mov esi, ecx */
    ecx = MEM32(esi + 0x20); /* 0x160D12FF: mov ecx, dword ptr [esi + 0x20] */
    eax = MEM32(ecx); /* 0x160D1302: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x8); /* 0x160D1304: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x160D1307: push edi */
    PUSH32(esp, edx); /* 0x160D1308: push edx */
    RECOMP_ICALL(eax); /* 0x160D1309: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D130B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1325; /* 0x160D130D: jl 0x160d1325 */
L_160D130F:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1325; /* 0x160D130F: jne 0x160d1325 */
L_160D1311:
    ecx = MEM32(edi); /* 0x160D1311: mov ecx, dword ptr [edi] */
    /* cmp ecx, MEM32(esi + 0x20) */ /* 0x160D1313: cmp ecx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D131A; /* 0x160D1316: jne 0x160d131a */
L_160D1318:
    MEM32(edi) = esi; /* 0x160D1318: mov dword ptr [edi], esi */
L_160D131A:
    edx = MEM32(edi + 0x4); /* 0x160D131A: mov edx, dword ptr [edi + 4] */
    /* cmp edx, MEM32(esi + 0x20) */ /* 0x160D131D: cmp edx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1325; /* 0x160D1320: jne 0x160d1325 */
L_160D1322:
    MEM32(edi + 0x4) = esi; /* 0x160D1322: mov dword ptr [edi + 4], esi */
L_160D1325:
    edi = POP32_VAL(esp); /* 0x160D1325: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1326: pop esi */
    ebp = POP32_VAL(esp); /* 0x160D1327: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D1328: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D1330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1330u);

L_160D1330:
    edi = edi; /* 0x160D1330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1332: push ebp */
    ebp = esp; /* 0x160D1333: mov ebp, esp */
    ecx = MEM32(ecx + 0x20); /* 0x160D1335: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x160D1338: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0xC); /* 0x160D133A: mov eax, dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x160D133D: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D1350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1350u);

L_160D1350:
    edi = edi; /* 0x160D1350: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1352: push ebp */
    ebp = esp; /* 0x160D1353: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160D1355: push ecx */
    edx = MEM32(ebp + 0x1C); /* 0x160D1356: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x160D1359: push ebx */
    PUSH32(esp, esi); /* 0x160D135A: push esi */
    esi = MEM32(ebp + 0x20); /* 0x160D135B: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x160D135E: push edi */
    edi = MEM32(ebp + 0x14); /* 0x160D135F: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x160D1362: push esi */
    PUSH32(esp, edx); /* 0x160D1363: push edx */
    edx = MEM32(ebp + 0x18); /* 0x160D1364: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, edx); /* 0x160D1367: push edx */
    edx = MEM32(ebp + 0x10); /* 0x160D1368: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x160D136B: push edi */
    PUSH32(esp, edx); /* 0x160D136C: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160D136D: mov edx, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x160D1370: mov ebx, ecx */
    ecx = MEM32(ebx + 0x20); /* 0x160D1372: mov ecx, dword ptr [ebx + 0x20] */
    eax = MEM32(ecx); /* 0x160D1375: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x10); /* 0x160D1377: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, edx); /* 0x160D137A: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160D137B: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160D137E: push edx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x160D137F: mov dword ptr [ebp - 4], ebx */
    RECOMP_ICALL(eax); /* 0x160D1382: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D1384: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1422; /* 0x160D1386: jne 0x160d1422 */
L_160D138C:
    /* test edi, edi */ /* 0x160D138C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1422; /* 0x160D138E: je 0x160d1422 */
L_160D1394:
    eax = MEM32(ebx + 0x18); /* 0x160D1394: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x160D1397: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D139C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D139E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D13CB; /* 0x160D13A0: je 0x160d13cb */
L_160D13A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160D13A2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ecx */ /* 0x160D13A4: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D13CB; /* 0x160D13A6: jbe 0x160d13cb */
L_160D13A8:
    ecx = MEM32(ebp + 0x10); /* 0x160D13A8: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x160D13AB: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = edi; /* 0x160D13AD: mov eax, edi */
    MEM32(ebp + 0x20) = ecx; /* 0x160D13AF: mov dword ptr [ebp + 0x20], ecx */
    goto L_160D13B7; /* 0x160D13B2: jmp 0x160d13b7 */
L_160D13B4:
    ecx = MEM32(ebp + 0x20); /* 0x160D13B4: mov ecx, dword ptr [ebp + 0x20] */
L_160D13B7:
    ecx = MEM32(ecx + eax); /* 0x160D13B7: mov ecx, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160D13BA: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, 4 */ /* 0x160D13BB: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D13C3; /* 0x160D13BE: ja 0x160d13c3 */
L_160D13C0:
    _flag_a = (uint32_t)((MEM32(eax) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax) | 0x10u));
    MEM32(eax) = MEM32(eax) | 0x10u; /* 0x160D13C0: or dword ptr [eax], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D13C3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x160D13C3: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x160D13C4: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi) */ /* 0x160D13C7: cmp edx, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D13B4; /* 0x160D13C9: jb 0x160d13b4 */
L_160D13CB:
    eax = MEM32(ebx + 0x18); /* 0x160D13CB: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x160D13CE: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D13D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D13D5: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1400; /* 0x160D13D7: je 0x160d1400 */
L_160D13D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160D13D9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edx */ /* 0x160D13DB: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1400; /* 0x160D13DD: jbe 0x160d1400 */
L_160D13DF:
    ebx = MEM32(ebp + 0x10); /* 0x160D13DF: mov ebx, dword ptr [ebp + 0x10] */
    eax = edi; /* 0x160D13E2: mov eax, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x160D13E4: sub ebx, edi */
    _flag_k = FK_CMP;
L_160D13E6:
    ecx = MEM32(eax + ebx); /* 0x160D13E6: mov ecx, dword ptr [eax + ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160D13E9: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, 4 */ /* 0x160D13EA: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D13F5; /* 0x160D13ED: ja 0x160d13f5 */
L_160D13EF:
    _flag_a = (uint32_t)((MEM32(eax) | 0x20000012u)); _flag_b = (uint32_t)((MEM32(eax) | 0x20000012u));
    MEM32(eax) = MEM32(eax) | 0x20000012u; /* 0x160D13EF: or dword ptr [eax], 0x20000012 */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D13F5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x160D13F5: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x160D13F6: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi) */ /* 0x160D13F9: cmp edx, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D13E6; /* 0x160D13FB: jb 0x160d13e6 */
L_160D13FD:
    ebx = MEM32(ebp + (-0x4)); /* 0x160D13FD: mov ebx, dword ptr [ebp - 4] */
L_160D1400:
    eax = MEM32(ebx + 0x18); /* 0x160D1400: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x160D1403: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1408: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D140A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1420; /* 0x160D140C: je 0x160d1420 */
L_160D140E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D140E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), eax */ /* 0x160D1410: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1420; /* 0x160D1412: jbe 0x160d1420 */
L_160D1414:
    _flag_a = (uint32_t)((MEM32(edi + eax * 4) | 0x400u)); _flag_b = (uint32_t)((MEM32(edi + eax * 4) | 0x400u));
    MEM32(edi + eax * 4) = MEM32(edi + eax * 4) | 0x400u; /* 0x160D1414: or dword ptr [edi + eax*4], 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D141B: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi) */ /* 0x160D141C: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D1414; /* 0x160D141E: jb 0x160d1414 */
L_160D1420:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1420: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D1422:
    edi = POP32_VAL(esp); /* 0x160D1422: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1423: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D1424: pop ebx */
    esp = ebp; /* 0x160D1425: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1427: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160D1428: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_160D1430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1430u);

L_160D1430:
    edi = edi; /* 0x160D1430: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1432: push ebp */
    ebp = esp; /* 0x160D1433: mov ebp, esp */
    ecx = MEM32(ecx + 0x20); /* 0x160D1435: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x160D1438: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x14); /* 0x160D143A: mov eax, dword ptr [eax + 0x14] */
    ebp = POP32_VAL(esp); /* 0x160D143D: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D1450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1450u);

L_160D1450:
    edi = edi; /* 0x160D1450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1452: push ebp */
    ebp = esp; /* 0x160D1453: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x160D1455: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x160D1458: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160D145B: push ebx */
    ebx = ecx; /* 0x160D145C: mov ebx, ecx */
    eax = MEM32(ebx + 0x18); /* 0x160D145E: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)((eax | MEM32(ebx + 0x1C))); _flag_b = (uint32_t)((eax | MEM32(ebx + 0x1C)));
    eax = eax | MEM32(ebx + 0x1C); /* 0x160D1461: or eax, dword ptr [ebx + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x160D1464: push esi */
    PUSH32(esp, edi); /* 0x160D1465: push edi */
    MEM32(esp + 0x14) = ebx; /* 0x160D1466: mov dword ptr [esp + 0x14], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D14A8; /* 0x160D146A: jne 0x160d14a8 */
L_160D146C:
    esi = MEM32(ebp + 0xC); /* 0x160D146C: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x160D146F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D147B; /* 0x160D1471: je 0x160d147b */
L_160D1473:
    /* cmp esi, 0x7FFFFFFFu */ /* 0x160D1473: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1480; /* 0x160D1479: jbe 0x160d1480 */
L_160D147B:
    eax = 0x80070057u; /* 0x160D147B: mov eax, 0x80070057 */
L_160D1480:
    /* test eax, eax */ /* 0x160D1480: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1669; /* 0x160D1482: jl 0x160d1669 */
L_160D1488:
    ecx = MEM32(ebp + 0x8); /* 0x160D1488: mov ecx, dword ptr [ebp + 8] */
    eax = 0x1603968Cu; /* 0x160D148B: mov eax, 0x1603968c */
    edx = esi; /* 0x160D1490: mov edx, esi */
    RECOMP_CALL(sub_160B7C80); /* 0x160D1492: call 0x160b7c80 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D1497: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D1646; /* 0x160D1499: jge 0x160d1646 */
L_160D149F:
    edi = POP32_VAL(esp); /* 0x160D149F: pop edi */
    esi = POP32_VAL(esp); /* 0x160D14A0: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D14A1: pop ebx */
    esp = ebp; /* 0x160D14A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D14A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D14A5: ret 8 */
L_160D14A8:
    edx = MEM32(ebp + 0xC); /* 0x160D14A8: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D14AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160D14AD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D14B9; /* 0x160D14AF: je 0x160d14b9 */
L_160D14B1:
    /* cmp edx, 0x7FFFFFFFu */ /* 0x160D14B1: cmp edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D14BE; /* 0x160D14B7: jbe 0x160d14be */
L_160D14B9:
    eax = 0x80070057u; /* 0x160D14B9: mov eax, 0x80070057 */
L_160D14BE:
    /* test eax, eax */ /* 0x160D14BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1669; /* 0x160D14C0: jl 0x160d1669 */
L_160D14C6:
    ecx = MEM32(ebp + 0x8); /* 0x160D14C6: mov ecx, dword ptr [ebp + 8] */
    eax = 0x1602DEABu; /* 0x160D14C9: mov eax, 0x1602deab */
    RECOMP_CALL(sub_160B7C80); /* 0x160D14CE: call 0x160b7c80 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D14D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1669; /* 0x160D14D5: jl 0x160d1669 */
L_160D14DB:
    esi = MEM32(ebx + 0x18); /* 0x160D14DB: mov esi, dword ptr [ebx + 0x18] */
    edi = MEM32(ebx + 0x1C); /* 0x160D14DE: mov edi, dword ptr [ebx + 0x1c] */
    ecx = esi; /* 0x160D14E1: mov ecx, esi */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x160D14E3: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1643; /* 0x160D14E5: je 0x160d1643 */
L_160D14EB:
    eax = esi; /* 0x160D14EB: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x160D14ED: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D14F2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D14F4: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1508; /* 0x160D14F6: je 0x160d1508 */
L_160D14F8:
    eax = 0x16039698u; /* 0x160D14F8: mov eax, 0x16039698 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x160D14FD: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D15B0; /* 0x160D1503: jmp 0x160d15b0 */
L_160D1508:
    eax = esi; /* 0x160D1508: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x160D150A: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D150F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D1511: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1525; /* 0x160D1513: je 0x160d1525 */
L_160D1515:
    eax = 0x160396A4u; /* 0x160D1515: mov eax, 0x160396a4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFBFFu);
    esi = esi & 0xFFFFFBFFu; /* 0x160D151A: and esi, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D15B0; /* 0x160D1520: jmp 0x160d15b0 */
L_160D1525:
    eax = esi; /* 0x160D1525: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x160D1527: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D152C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D152E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D153F; /* 0x160D1530: je 0x160d153f */
L_160D1532:
    eax = 0x160396B0u; /* 0x160D1532: mov eax, 0x160396b0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFF7FFu);
    esi = esi & 0xFFFFF7FFu; /* 0x160D1537: and esi, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D15B0; /* 0x160D153D: jmp 0x160d15b0 */
L_160D153F:
    eax = esi; /* 0x160D153F: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000200u);
    eax = eax & 0x20000200u; /* 0x160D1541: and eax, 0x20000200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1546: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D1548: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1559; /* 0x160D154A: je 0x160d1559 */
L_160D154C:
    eax = 0x160396C0u; /* 0x160D154C: mov eax, 0x160396c0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xDFFFFDFFu);
    esi = esi & 0xDFFFFDFFu; /* 0x160D1551: and esi, 0xdffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D15B0; /* 0x160D1557: jmp 0x160d15b0 */
L_160D1559:
    eax = esi; /* 0x160D1559: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x160D155B: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1560: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D1562: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1573; /* 0x160D1564: je 0x160d1573 */
L_160D1566:
    eax = 0x160396C8u; /* 0x160D1566: mov eax, 0x160396c8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xEFFFFFFFu);
    esi = esi & 0xEFFFFFFFu; /* 0x160D156B: and esi, 0xefffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D15B0; /* 0x160D1571: jmp 0x160d15b0 */
L_160D1573:
    eax = esi; /* 0x160D1573: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x160D1575: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D157A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D157C: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D158D; /* 0x160D157E: je 0x160d158d */
L_160D1580:
    eax = 0x160396D0u; /* 0x160D1580: mov eax, 0x160396d0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xF7FFFFFFu);
    esi = esi & 0xF7FFFFFFu; /* 0x160D1585: and esi, 0xf7ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D15B0; /* 0x160D158B: jmp 0x160d15b0 */
L_160D158D:
    eax = esi; /* 0x160D158D: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00400000u);
    eax = eax & 0x00400000u; /* 0x160D158F: and eax, 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1594: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D1596: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D15A7; /* 0x160D1598: je 0x160d15a7 */
L_160D159A:
    eax = 0x160396D8u; /* 0x160D159A: mov eax, 0x160396d8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFBFFFFFu);
    esi = esi & 0xFFBFFFFFu; /* 0x160D159F: and esi, 0xffbfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D15B0; /* 0x160D15A5: jmp 0x160d15b0 */
L_160D15A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160D15A7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x160396E8u; /* 0x160D15A9: mov eax, 0x160396e8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160D15AE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D15B0:
    ebx = MEM32(ebp + 0xC); /* 0x160D15B0: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D15B3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x160D15B5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D15C1; /* 0x160D15B7: je 0x160d15c1 */
L_160D15B9:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x160D15B9: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D15C6; /* 0x160D15BF: jbe 0x160d15c6 */
L_160D15C1:
    ecx = 0x80070057u; /* 0x160D15C1: mov ecx, 0x80070057 */
L_160D15C6:
    edx = ecx; /* 0x160D15C6: mov edx, ecx */
    MEM32(esp + 0x10) = edx; /* 0x160D15C8: mov dword ptr [esp + 0x10], edx */
    /* test ecx, ecx */ /* 0x160D15CC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1618; /* 0x160D15CE: jl 0x160d1618 */
L_160D15D0:
    ecx = MEM32(ebp + 0x8); /* 0x160D15D0: mov ecx, dword ptr [ebp + 8] */
    edx = ebx; /* 0x160D15D3: mov edx, ebx */
    MEM32(esp + 0x10) = 0; /* 0x160D15D5: mov dword ptr [esp + 0x10], 0 */
    /* test ebx, ebx */ /* 0x160D15DD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D15FD; /* 0x160D15DF: je 0x160d15fd */
L_160D15E1:
    /* cmp MEM8(ecx), 0 */ /* 0x160D15E1: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D15F9; /* 0x160D15E4: je 0x160d15f9 */
L_160D15E6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x160D15E6: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x160D15E7: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160D15E1; /* 0x160D15EA: jne 0x160d15e1 */
L_160D15EC:
    edx = 0x80070057u; /* 0x160D15EC: mov edx, 0x80070057 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D15F1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = edx; /* 0x160D15F3: mov dword ptr [esp + 0x10], edx */
    goto L_160D161A; /* 0x160D15F7: jmp 0x160d161a */
L_160D15F9:
    /* test edx, edx */ /* 0x160D15F9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D160A; /* 0x160D15FB: jne 0x160d160a */
L_160D15FD:
    edx = 0x80070057u; /* 0x160D15FD: mov edx, 0x80070057 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1602: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = edx; /* 0x160D1604: mov dword ptr [esp + 0x10], edx */
    goto L_160D161A; /* 0x160D1608: jmp 0x160d161a */
L_160D160A:
    ecx = ebx; /* 0x160D160A: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x160D160C: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x10); /* 0x160D160E: mov edx, dword ptr [esp + 0x10] */
    MEM32(esp + 0x10) = edx; /* 0x160D1612: mov dword ptr [esp + 0x10], edx */
    goto L_160D161A; /* 0x160D1616: jmp 0x160d161a */
L_160D1618:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1618: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D161A:
    /* cmp MEM32(esp + 0x10), 0 */ /* 0x160D161A: cmp dword ptr [esp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_160D1672; /* 0x160D161F: jl 0x160d1672 */
L_160D1621:
    edx = ebx; /* 0x160D1621: mov edx, ebx */
    ebx = MEM32(ebp + 0x8); /* 0x160D1623: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x160D1626: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x160D1628: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_160D1B70); /* 0x160D162A: call 0x160d1b70 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x160D162F: mov edx, eax */
    /* test edx, edx */ /* 0x160D1631: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1672; /* 0x160D1633: jl 0x160d1672 */
L_160D1635:
    edx = esi; /* 0x160D1635: mov edx, esi */
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x160D1637: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D14EB; /* 0x160D1639: jne 0x160d14eb */
L_160D163F:
    ebx = MEM32(esp + 0x14); /* 0x160D163F: mov ebx, dword ptr [esp + 0x14] */
L_160D1643:
    esi = MEM32(ebp + 0xC); /* 0x160D1643: mov esi, dword ptr [ebp + 0xc] */
L_160D1646:
    edi = MEM32(ebp + 0x8); /* 0x160D1646: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x160D1649: mov eax, edi */
    edx = eax + 0x1; /* 0x160D164B: lea edx, [eax + 1] */
    edi = edi; /* 0x160D164E: mov edi, edi */
L_160D1650:
    SET_LO8(ecx, MEM8(eax)); /* 0x160D1650: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D1652: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x160D1653: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1650; /* 0x160D1655: jne 0x160d1650 */
L_160D1657:
    ecx = MEM32(ebx + 0x20); /* 0x160D1657: mov ecx, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x160D165A: sub eax, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ecx); /* 0x160D165C: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x160D165E: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x160D1660: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x160D1662: push esi */
    PUSH32(esp, eax); /* 0x160D1663: push eax */
    eax = MEM32(edx + 0x18); /* 0x160D1664: mov eax, dword ptr [edx + 0x18] */
    RECOMP_ICALL(eax); /* 0x160D1667: call eax */
    RECOMP_FLAGS_IN();
L_160D1669:
    edi = POP32_VAL(esp); /* 0x160D1669: pop edi */
    esi = POP32_VAL(esp); /* 0x160D166A: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D166B: pop ebx */
    esp = ebp; /* 0x160D166C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D166E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D166F: ret 8 */
L_160D1672:
    edi = POP32_VAL(esp); /* 0x160D1672: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1673: pop esi */
    eax = edx; /* 0x160D1674: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x160D1676: pop ebx */
    esp = ebp; /* 0x160D1677: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1679: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D167A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D1690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1690u);

L_160D1690:
    edi = edi; /* 0x160D1690: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1692: push ebp */
    ebp = esp; /* 0x160D1693: mov ebp, esp */
    ecx = MEM32(ecx + 0x20); /* 0x160D1695: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x160D1698: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x160D169A: mov eax, dword ptr [eax + 0x1c] */
    ebp = POP32_VAL(esp); /* 0x160D169D: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D16B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D16B0u);

L_160D16B0:
    edi = edi; /* 0x160D16B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D16B2: push ebp */
    ebp = esp; /* 0x160D16B3: mov ebp, esp */
    ecx = MEM32(ecx + 0x20); /* 0x160D16B5: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x160D16B8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x20); /* 0x160D16BA: mov eax, dword ptr [eax + 0x20] */
    ebp = POP32_VAL(esp); /* 0x160D16BD: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D16D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D16D0u);

L_160D16D0:
    edi = edi; /* 0x160D16D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D16D2: push ebp */
    ebp = esp; /* 0x160D16D3: mov ebp, esp */
    ecx = MEM32(ecx + 0x20); /* 0x160D16D5: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x160D16D8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x24); /* 0x160D16DA: mov eax, dword ptr [eax + 0x24] */
    ebp = POP32_VAL(esp); /* 0x160D16DD: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160D16F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D16F0u);

L_160D16F0:
    edi = edi; /* 0x160D16F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D16F2: push ebp */
    ebp = esp; /* 0x160D16F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160D16F5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x160D16F8: push esi */
    esi = ecx; /* 0x160D16F9: mov esi, ecx */
    ecx = MEM32(esi + 0x20); /* 0x160D16FB: mov ecx, dword ptr [esi + 0x20] */
    eax = MEM32(ecx); /* 0x160D16FE: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x28); /* 0x160D1700: mov edx, dword ptr [eax + 0x28] */
    PUSH32(esp, edi); /* 0x160D1703: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160D1704: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160D1707: push edi */
    RECOMP_ICALL(edx); /* 0x160D1708: call edx */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C); /* 0x160D170A: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(esi + 0x18); /* 0x160D170D: mov ecx, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x160D1710: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x160D1713: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    eax = eax & 0x20000000u; /* 0x160D1715: and eax, 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160D171A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x160D171C: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D172C; /* 0x160D171E: je 0x160d172c */
L_160D1720:
    SET_LO8(eax, MEM8(edi)); /* 0x160D1720: mov al, byte ptr [edi] */
    /* test LO8(eax), 2 */ /* 0x160D1722: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D173B; /* 0x160D1724: jne 0x160d173b */
L_160D1726:
    _flag_a = (uint32_t)((LO8(eax) | 4)) << 24; _flag_b = (uint32_t)((LO8(eax) | 4)) << 24;
    SET_LO8(eax, LO8(eax) | 4); /* 0x160D1726: or al, 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x160D1728: mov byte ptr [edi], al */
    goto L_160D173B; /* 0x160D172A: jmp 0x160d173b */
L_160D172C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x200u);
    ecx = ecx & 0x200u; /* 0x160D172C: and ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1732: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x160D1734: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D173B; /* 0x160D1736: je 0x160d173b */
L_160D1738:
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0xFBu) << 24;
    MEM8(edi) = (uint8_t)(MEM8(edi) & 0xFBu); /* 0x160D1738: and byte ptr [edi], 0xfb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D173B:
    esi = MEM32(esi + 0x18); /* 0x160D173B: mov esi, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D173E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    esi = esi & 0x200u; /* 0x160D1740: and esi, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x160D1746: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x160D1748: mov eax, edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D174F; /* 0x160D174A: je 0x160d174f */
L_160D174C:
    _flag_a = (uint32_t)((MEM8(edi) | 2)) << 24; _flag_b = (uint32_t)((MEM8(edi) | 2)) << 24;
    MEM8(edi) = (uint8_t)(MEM8(edi) | 2); /* 0x160D174C: or byte ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D174F:
    edi = POP32_VAL(esp); /* 0x160D174F: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1750: pop esi */
    esp = ebp; /* 0x160D1751: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1753: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D1754: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D1760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1760u);

L_160D1760:
    edi = edi; /* 0x160D1760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1762: push ebp */
    ebp = esp; /* 0x160D1763: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160D1765: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x160D1766: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160D1769: push esi */
    PUSH32(esp, edi); /* 0x160D176A: push edi */
    edi = ecx; /* 0x160D176B: mov edi, ecx */
    eax = MEM32(edi + 0x18); /* 0x160D176D: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x160D1770: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1775: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D1777: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D177E; /* 0x160D1779: je 0x160d177e */
L_160D177B:
    _flag_a = (uint32_t)((ebx | 0x20u)); _flag_b = (uint32_t)((ebx | 0x20u));
    ebx = ebx | 0x20u; /* 0x160D177B: or ebx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D177E:
    ecx = MEM32(edi + 0x20); /* 0x160D177E: mov ecx, dword ptr [edi + 0x20] */
    esi = MEM32(ebp + 0xC); /* 0x160D1781: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x160D1784: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x2C); /* 0x160D1786: mov edx, dword ptr [eax + 0x2c] */
    PUSH32(esp, esi); /* 0x160D1789: push esi */
    PUSH32(esp, ebx); /* 0x160D178A: push ebx */
    RECOMP_ICALL(edx); /* 0x160D178B: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D178D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1798; /* 0x160D178F: jne 0x160d1798 */
L_160D1791:
    edi = POP32_VAL(esp); /* 0x160D1791: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1792: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D1793: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D1794: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D1795: ret 8 */
L_160D1798:
    /* test LO8(ebx), 4 */ /* 0x160D1798: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D17CA; /* 0x160D179B: jne 0x160d17ca */
L_160D179D:
    /* test esi, esi */ /* 0x160D179D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D17CA; /* 0x160D179F: je 0x160d17ca */
L_160D17A1:
    /* cmp MEM32(esi), 2 */ /* 0x160D17A1: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D17B2; /* 0x160D17A4: jne 0x160d17b2 */
L_160D17A6:
    eax = MEM32(edi + 0x18); /* 0x160D17A6: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)((MEM32(esi + 0x20) | eax)); _flag_b = (uint32_t)((MEM32(esi + 0x20) | eax));
    MEM32(esi + 0x20) = MEM32(esi + 0x20) | eax; /* 0x160D17A9: or dword ptr [esi + 0x20], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x1C); /* 0x160D17AC: mov ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)((MEM32(esi + 0x24) | ecx)); _flag_b = (uint32_t)((MEM32(esi + 0x24) | ecx));
    MEM32(esi + 0x24) = MEM32(esi + 0x24) | ecx; /* 0x160D17AF: or dword ptr [esi + 0x24], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D17B2:
    edx = MEM32(edi + 0x18); /* 0x160D17B2: mov edx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)((MEM32(esi + 0x18) | edx)); _flag_b = (uint32_t)((MEM32(esi + 0x18) | edx));
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | edx; /* 0x160D17B5: or dword ptr [esi + 0x18], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x1C); /* 0x160D17B8: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)((MEM32(esi + 0x1C) | eax)); _flag_b = (uint32_t)((MEM32(esi + 0x1C) | eax));
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) | eax; /* 0x160D17BB: or dword ptr [esi + 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x18); /* 0x160D17BE: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)((MEM32(esi + 0x28) | ecx)); _flag_b = (uint32_t)((MEM32(esi + 0x28) | ecx));
    MEM32(esi + 0x28) = MEM32(esi + 0x28) | ecx; /* 0x160D17C1: or dword ptr [esi + 0x28], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(edi + 0x1C); /* 0x160D17C4: mov edx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)((MEM32(esi + 0x2C) | edx)); _flag_b = (uint32_t)((MEM32(esi + 0x2C) | edx));
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) | edx; /* 0x160D17C7: or dword ptr [esi + 0x2c], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D17CA:
    edi = POP32_VAL(esp); /* 0x160D17CA: pop edi */
    esi = POP32_VAL(esp); /* 0x160D17CB: pop esi */
    SET_LO8(eax, 1); /* 0x160D17CC: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x160D17CE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D17CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160D17D0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160D17E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D17E0u);

L_160D17E0:
    edi = edi; /* 0x160D17E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D17E2: push ebp */
    ebp = esp; /* 0x160D17E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160D17E5: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x160D17E8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D17F2; /* 0x160D17EA: jne 0x160d17f2 */
L_160D17EC:
    SET_LO8(eax, 1); /* 0x160D17EC: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160D17EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D17EF: ret 4 */
L_160D17F2:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x160D17F2: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D17FE; /* 0x160D17F6: je 0x160d17fe */
L_160D17F8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160D17F8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160D17FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D17FB: ret 4 */
L_160D17FE:
    edx = MEM32(ecx + 0x18); /* 0x160D17FE: mov edx, dword ptr [ecx + 0x18] */
    /* cmp edx, MEM32(eax + 0x18) */ /* 0x160D1801: cmp edx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D17F8; /* 0x160D1804: jne 0x160d17f8 */
L_160D1806:
    edx = MEM32(ecx + 0x1C); /* 0x160D1806: mov edx, dword ptr [ecx + 0x1c] */
    /* cmp edx, MEM32(eax + 0x1C) */ /* 0x160D1809: cmp edx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D17F8; /* 0x160D180C: jne 0x160d17f8 */
L_160D180E:
    ecx = MEM32(ecx + 0x20); /* 0x160D180E: mov ecx, dword ptr [ecx + 0x20] */
    edx = MEM32(ecx); /* 0x160D1811: mov edx, dword ptr [ecx] */
    eax = MEM32(eax + 0x20); /* 0x160D1813: mov eax, dword ptr [eax + 0x20] */
    edx = MEM32(edx + 0x30); /* 0x160D1816: mov edx, dword ptr [edx + 0x30] */
    PUSH32(esp, eax); /* 0x160D1819: push eax */
    RECOMP_ICALL(edx); /* 0x160D181A: call edx */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160D181C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D181D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D1830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1830u);

L_160D1830:
    edi = edi; /* 0x160D1830: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1832: push ebp */
    ebp = esp; /* 0x160D1833: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x70u; /* 0x160D1835: sub esp, 0x70 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160D1838: push ebx */
    PUSH32(esp, esi); /* 0x160D1839: push esi */
    esi = eax; /* 0x160D183A: mov esi, eax */
    eax = MEM32(ecx + 0x8C); /* 0x160D183C: mov eax, dword ptr [ecx + 0x8c] */
    /* test eax, eax */ /* 0x160D1842: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1856; /* 0x160D1844: je 0x160d1856 */
L_160D1846:
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x160D1846: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D185D; /* 0x160D184A: je 0x160d185d */
L_160D184C:
    /* test eax, eax */ /* 0x160D184C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1856; /* 0x160D184E: je 0x160d1856 */
L_160D1850:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x160D1850: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D185D; /* 0x160D1854: je 0x160d185d */
L_160D1856:
    eax = 0x80004005u; /* 0x160D1856: mov eax, 0x80004005 */
    goto L_160D18A0; /* 0x160D185B: jmp 0x160d18a0 */
L_160D185D:
    eax = MEM32(eax + 0x48); /* 0x160D185D: mov eax, dword ptr [eax + 0x48] */
    ecx = MEM32(ecx + 0x90); /* 0x160D1860: mov ecx, dword ptr [ecx + 0x90] */
    edx = MEM32(eax); /* 0x160D1866: mov edx, dword ptr [eax] */
    edx = MEM32(edx + 0x8); /* 0x160D1868: mov edx, dword ptr [edx + 8] */
    ebx = ebp + (-0xC); /* 0x160D186B: lea ebx, [ebp - 0xc] */
    PUSH32(esp, ebx); /* 0x160D186E: push ebx */
    PUSH32(esp, ecx); /* 0x160D186F: push ecx */
    ecx = eax; /* 0x160D1870: mov ecx, eax */
    RECOMP_ICALL(edx); /* 0x160D1872: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D1874: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D187F; /* 0x160D1876: je 0x160d187f */
L_160D1878:
    eax = 0x80004005u; /* 0x160D1878: mov eax, 0x80004005 */
    goto L_160D18A0; /* 0x160D187D: jmp 0x160d18a0 */
L_160D187F:
    ecx = MEM32(ebp + (-0xC)); /* 0x160D187F: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ecx); /* 0x160D1882: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x2C); /* 0x160D1884: mov eax, dword ptr [eax + 0x2c] */
    edx = ebp + (-0x70); /* 0x160D1887: lea edx, [ebp - 0x70] */
    PUSH32(esp, edx); /* 0x160D188A: push edx */
    PUSH32(esp, 3); /* 0x160D188B: push 3 */
    RECOMP_ICALL(eax); /* 0x160D188D: call eax */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160D188F: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160D1892: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160D1894: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFBFFBu);
    eax = eax & 0x7FFFBFFBu; /* 0x160D1896: and eax, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x80004005u; /* 0x160D189B: add eax, 0x80004005 */
    _flag_k = FK_ADD;
L_160D18A0:
    /* test eax, eax */ /* 0x160D18A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D18F4; /* 0x160D18A2: jl 0x160d18f4 */
L_160D18A4:
    /* cmp MEM32(ebp + (-0x70)), 6 */ /* 0x160D18A4: cmp dword ptr [ebp - 0x70], 6 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D18B5; /* 0x160D18A8: je 0x160d18b5 */
L_160D18AA:
    eax = 0x80004005u; /* 0x160D18AA: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x160D18AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D18B0: pop ebx */
    esp = ebp; /* 0x160D18B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D18B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D18B4: ret  */
L_160D18B5:
    ecx = MEM32(ebp + (-0x60)); /* 0x160D18B5: mov ecx, dword ptr [ebp - 0x60] */
    PUSH32(esp, 0x60u); /* 0x160D18B8: push 0x60 */
    MEM32(esi) = ecx; /* 0x160D18BA: mov dword ptr [esi], ecx */
    MEM32(esi + 0xC8) = 0x13u; /* 0x160D18BC: mov dword ptr [esi + 0xc8], 0x13 */
    MEM32(esi + 0xCC) = 0xFFFFFFFFu; /* 0x160D18C6: mov dword ptr [esi + 0xcc], 0xffffffff */
    MEM32(esi + 0xD0) = 0; /* 0x160D18D0: mov dword ptr [esi + 0xd0], 0 */
    MEM32(esi + 0xD4) = 0; /* 0x160D18DA: mov dword ptr [esi + 0xd4], 0 */
    PUSH32(esp, 0); /* 0x160D18E4: push 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x160D18E6: add esi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x160D18E9: push esi */
    RECOMP_CALL(sub_161AE3CC); /* 0x160D18EA: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160D18EF: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D18F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D18F4:
    esi = POP32_VAL(esp); /* 0x160D18F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D18F5: pop ebx */
    esp = ebp; /* 0x160D18F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D18F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D18F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1900u);

L_160D1900:
    edi = edi; /* 0x160D1900: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1902: push ebp */
    ebp = esp; /* 0x160D1903: mov ebp, esp */
    ecx = MEM32(edi); /* 0x160D1905: mov ecx, dword ptr [edi] */
    eax = MEM32(ecx); /* 0x160D1907: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x8); /* 0x160D1909: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x160D190C: sub esp, 0x74 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160D190F: push ebx */
    PUSH32(esp, esi); /* 0x160D1910: push esi */
    edx = ebp + (-0x10); /* 0x160D1911: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x160D1914: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160D1915: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160D1918: push edx */
    RECOMP_ICALL(eax); /* 0x160D1919: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D191B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D19CF; /* 0x160D191D: jne 0x160d19cf */
L_160D1923:
    ecx = MEM32(ebp + (-0x10)); /* 0x160D1923: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ecx); /* 0x160D1926: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x2C); /* 0x160D1928: mov edx, dword ptr [edx + 0x2c] */
    eax = ebp + (-0x74); /* 0x160D192B: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x160D192E: push eax */
    eax = MEM32(edi + 0xC8); /* 0x160D192F: mov eax, dword ptr [edi + 0xc8] */
    PUSH32(esp, eax); /* 0x160D1935: push eax */
    RECOMP_ICALL(edx); /* 0x160D1936: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D1938: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D19CF; /* 0x160D193A: je 0x160d19cf */
L_160D1940:
    edx = MEM32(edi + 0xC8); /* 0x160D1940: mov edx, dword ptr [edi + 0xc8] */
    esi = edi + 0x8; /* 0x160D1946: lea esi, [edi + 8] */
    eax = ebp + (-0x74); /* 0x160D1949: lea eax, [ebp - 0x74] */
    RECOMP_CALL(sub_160CECC0); /* 0x160D194C: call 0x160cecc0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160D1951: mov ebx, eax */
    eax = MEM32(ebp + (-0x70)); /* 0x160D1953: mov eax, dword ptr [ebp - 0x70] */
    MEM32(edi + 0xD0) = ebx; /* 0x160D1956: mov dword ptr [edi + 0xd0], ebx */
    MEM32(edi + 0xD4) = 4; /* 0x160D195C: mov dword ptr [edi + 0xd4], 4 */
    eax = MEM32(eax * 4 + 0x16021500); /* 0x160D1966: mov eax, dword ptr [eax*4 + 0x16021500] */
    /* test eax, 0x00100000u */ /* 0x160D196D: test eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1984; /* 0x160D1972: je 0x160d1984 */
L_160D1974:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x160D1974: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 4 */ /* 0x160D1976: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1984; /* 0x160D1978: jne 0x160d1984 */
L_160D197A:
    MEM32(edi + 0xD4) = 8; /* 0x160D197A: mov dword ptr [edi + 0xd4], 8 */
L_160D1984:
    esi = MEM32(ebp + (-0xC)); /* 0x160D1984: mov esi, dword ptr [ebp - 0xc] */
    /* test esi, esi */ /* 0x160D1987: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1A01; /* 0x160D1989: je 0x160d1a01 */
L_160D198B:
    PUSH32(esp, 8); /* 0x160D198B: push 8 */
    eax = esi; /* 0x160D198D: mov eax, esi */
    RECOMP_CALL(sub_160C5640); /* 0x160D198F: call 0x160c5640 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D1994: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1A01; /* 0x160D1996: je 0x160d1a01 */
L_160D1998:
    ecx = esi; /* 0x160D1998: mov ecx, esi */
    RECOMP_CALL(sub_160D1AD0); /* 0x160D199A: call 0x160d1ad0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x160D199F: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D19A4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160D19A6: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1A01; /* 0x160D19A8: jne 0x160d1a01 */
L_160D19AA:
    eax = MEM32(ebp + (-0x8)); /* 0x160D19AA: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x160D19AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D19DC; /* 0x160D19AF: jne 0x160d19dc */
L_160D19B1:
    ecx = MEM32(edi + 0xC8); /* 0x160D19B1: mov ecx, dword ptr [edi + 0xc8] */
    eax = edi + 0x68; /* 0x160D19B7: lea eax, [edi + 0x68] */
    MEM32(edi + 0xCC) = ebx; /* 0x160D19BA: mov dword ptr [edi + 0xcc], ebx */
    edx = MEM32(esi); /* 0x160D19C0: mov edx, dword ptr [esi] */
    edx = MEM32(edx + 0x2C); /* 0x160D19C2: mov edx, dword ptr [edx + 0x2c] */
    PUSH32(esp, eax); /* 0x160D19C5: push eax */
    PUSH32(esp, ecx); /* 0x160D19C6: push ecx */
    ecx = esi; /* 0x160D19C7: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160D19C9: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160D19CB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1A01; /* 0x160D19CD: jne 0x160d1a01 */
L_160D19CF:
    eax = 0x80004005u; /* 0x160D19CF: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x160D19D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D19D5: pop ebx */
    esp = ebp; /* 0x160D19D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D19D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D19D9: ret 4 */
L_160D19DC:
    ecx = MEM32(edi + 0x9C); /* 0x160D19DC: mov ecx, dword ptr [edi + 0x9c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160D19E2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x160D19E4: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(edi + 0x98); /* 0x160D19E6: mov ecx, dword ptr [edi + 0x98] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x160D19EC: imul ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x160D19EF: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x20))); /* 0x160D19F1: imul ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xCC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0xCC); /* 0x160D19F5: add ecx, dword ptr [edi + 0xcc] */
    _flag_k = FK_ADD;
    MEM32(edi + 0xD0) = ecx; /* 0x160D19FB: mov dword ptr [edi + 0xd0], ecx */
L_160D1A01:
    esi = POP32_VAL(esp); /* 0x160D1A01: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1A02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160D1A04: pop ebx */
    esp = ebp; /* 0x160D1A05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1A07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D1A08: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D1A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1A10u);

L_160D1A10:
    edi = edi; /* 0x160D1A10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1A12: push ebp */
    ebp = esp; /* 0x160D1A13: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160D1A15: push ecx */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x160D1A16: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1A25; /* 0x160D1A1A: jne 0x160d1a25 */
L_160D1A1C:
    eax = 0x8000FFFFu; /* 0x160D1A1C: mov eax, 0x8000ffff */
    esp = ebp; /* 0x160D1A21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1A23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1A24: ret  */
L_160D1A25:
    PUSH32(esp, ebx); /* 0x160D1A25: push ebx */
    PUSH32(esp, edi); /* 0x160D1A26: push edi */
    /* test ecx, ecx */ /* 0x160D1A27: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1A50; /* 0x160D1A29: jbe 0x160d1a50 */
L_160D1A2B:
    eax = ebp + (-0x4); /* 0x160D1A2B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160D1A2E: push eax */
    eax = esi; /* 0x160D1A2F: mov eax, esi */
    RECOMP_CALL(sub_160B25B0); /* 0x160D1A31: call 0x160b25b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D1A36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1A78; /* 0x160D1A38: jne 0x160d1a78 */
L_160D1A3A:
    ebx = MEM32(ebp + (-0x4)); /* 0x160D1A3A: mov ebx, dword ptr [ebp - 4] */
    /* cmp ebx, 0x3FFFFFFFu */ /* 0x160D1A3D: cmp ebx, 0x3fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1A7E; /* 0x160D1A43: jbe 0x160d1a7e */
L_160D1A45:
    edi = POP32_VAL(esp); /* 0x160D1A45: pop edi */
    eax = 0x80070216u; /* 0x160D1A46: mov eax, 0x80070216 */
    ebx = POP32_VAL(esp); /* 0x160D1A4B: pop ebx */
    esp = ebp; /* 0x160D1A4C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1A4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1A4F: ret  */
L_160D1A50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160D1A50: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D1A52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160D1A52: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D1A54:
    /* cmp MEM8(esi + 0xC), 0 */ /* 0x160D1A54: cmp byte ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D1A65; /* 0x160D1A58: je 0x160d1a65 */
L_160D1A5A:
    eax = MEM32(esi); /* 0x160D1A5A: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x160D1A5C: push eax */
    RECOMP_CALL(sub_161AE0F0); /* 0x160D1A5D: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160D1A62: add esp, 4 */
    _flag_k = FK_ADD;
L_160D1A65:
    MEM32(esi) = edi; /* 0x160D1A65: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = ebx; /* 0x160D1A67: mov dword ptr [esi + 4], ebx */
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x160D1A6A: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1A72; /* 0x160D1A6D: jbe 0x160d1a72 */
L_160D1A6F:
    MEM32(esi + 0x8) = ebx; /* 0x160D1A6F: mov dword ptr [esi + 8], ebx */
L_160D1A72:
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x160D1A72: mov byte ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1A76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D1A78:
    edi = POP32_VAL(esp); /* 0x160D1A78: pop edi */
    ebx = POP32_VAL(esp); /* 0x160D1A79: pop ebx */
    esp = ebp; /* 0x160D1A7A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1A7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1A7D: ret  */
L_160D1A7E:
    /* test ebx, ebx */ /* 0x160D1A7E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1A52; /* 0x160D1A80: jbe 0x160d1a52 */
L_160D1A82:
    ecx = ebx * 4; /* 0x160D1A82: lea ecx, [ebx*4] */
    PUSH32(esp, ecx); /* 0x160D1A89: push ecx */
    RECOMP_CALL(sub_161AE0FC); /* 0x160D1A8A: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160D1A8F: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160D1A91: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x160D1A94: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1AA3; /* 0x160D1A96: jne 0x160d1aa3 */
L_160D1A98:
    edi = POP32_VAL(esp); /* 0x160D1A98: pop edi */
    eax = 0x8007000Eu; /* 0x160D1A99: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x160D1A9E: pop ebx */
    esp = ebp; /* 0x160D1A9F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1AA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1AA2: ret  */
L_160D1AA3:
    eax = MEM32(esi + 0x8); /* 0x160D1AA3: mov eax, dword ptr [esi + 8] */
    ecx = ebx; /* 0x160D1AA6: mov ecx, ebx */
    /* cmp ebx, eax */ /* 0x160D1AA8: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1AAE; /* 0x160D1AAA: jbe 0x160d1aae */
L_160D1AAC:
    ecx = eax; /* 0x160D1AAC: mov ecx, eax */
L_160D1AAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1AAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x160D1AB0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1A54; /* 0x160D1AB2: jbe 0x160d1a54 */
L_160D1AB4:
    edx = MEM32(esi); /* 0x160D1AB4: mov edx, dword ptr [esi] */
    edx = MEM32(edx + eax * 4); /* 0x160D1AB6: mov edx, dword ptr [edx + eax*4] */
    MEM32(edi + eax * 4) = edx; /* 0x160D1AB9: mov dword ptr [edi + eax*4], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D1ABC: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x160D1ABD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D1AB4; /* 0x160D1ABF: jb 0x160d1ab4 */
L_160D1AC1:
    RECOMP_BACKEDGE();
    goto L_160D1A54; /* 0x160D1AC1: jmp 0x160d1a54 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_160D1AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1AD0u);

L_160D1AD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1AD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x160D1AD2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160D1AD3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D1AD5:
    /* test ecx, ecx */ /* 0x160D1AD5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1AEE; /* 0x160D1AD7: je 0x160d1aee */
L_160D1AD9:
    /* cmp MEM32(ecx + 0x4), 0xAu */ /* 0x160D1AD9: cmp dword ptr [ecx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1AEE; /* 0x160D1ADD: jne 0x160d1aee */
L_160D1ADF:
    edi = MEM32(ecx + 0x18); /* 0x160D1ADF: mov edi, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x160D1AE2: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ecx + 0x1C); /* 0x160D1AE4: mov edi, dword ptr [ecx + 0x1c] */
    ecx = MEM32(ecx + 0x20); /* 0x160D1AE7: mov ecx, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x160D1AEA: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160D1AD5; /* 0x160D1AEC: jmp 0x160d1ad5 */
L_160D1AEE:
    edi = POP32_VAL(esp); /* 0x160D1AEE: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1AEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1B20u);

L_160D1B20:
    edi = edi; /* 0x160D1B20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1B22: push ebp */
    ebp = esp; /* 0x160D1B23: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160D1B25: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1B26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x160D1B28: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1B34; /* 0x160D1B2A: je 0x160d1b34 */
L_160D1B2C:
    /* cmp esi, 0x7FFFFFFFu */ /* 0x160D1B2C: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1B39; /* 0x160D1B32: jbe 0x160d1b39 */
L_160D1B34:
    eax = 0x80070057u; /* 0x160D1B34: mov eax, 0x80070057 */
L_160D1B39:
    /* test eax, eax */ /* 0x160D1B39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1B50; /* 0x160D1B3B: jl 0x160d1b50 */
L_160D1B3D:
    PUSH32(esp, edi); /* 0x160D1B3D: push edi */
    edi = ebp + (-0x4); /* 0x160D1B3E: lea edi, [ebp - 4] */
    ecx = esi; /* 0x160D1B41: mov ecx, esi */
    edx = ebx; /* 0x160D1B43: mov edx, ebx */
    RECOMP_CALL(sub_160C9DC0); /* 0x160D1B45: call 0x160c9dc0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x160D1B4A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x160D1B4D: pop edi */
    goto L_160D1B52; /* 0x160D1B4E: jmp 0x160d1b52 */
L_160D1B50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1B50: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D1B52:
    /* test eax, eax */ /* 0x160D1B52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1B64; /* 0x160D1B54: jl 0x160d1b64 */
L_160D1B56:
    eax = MEM32(ebp + 0x8); /* 0x160D1B56: mov eax, dword ptr [ebp + 8] */
    edx = esi; /* 0x160D1B59: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x160D1B5B: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x160D1B5D: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_160D1B70); /* 0x160D1B5F: call 0x160d1b70 */
    RECOMP_FLAGS_IN();
L_160D1B64:
    esp = ebp; /* 0x160D1B64: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1B66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D1B67: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D1B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1B70u);

L_160D1B70:
    edi = edi; /* 0x160D1B70: mov edi, edi */
    PUSH32(esp, ebx); /* 0x160D1B72: push ebx */
    PUSH32(esp, esi); /* 0x160D1B73: push esi */
    PUSH32(esp, edi); /* 0x160D1B74: push edi */
    edi = eax; /* 0x160D1B75: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1B77: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x7FFFFFFFu; /* 0x160D1B79: mov esi, 0x7fffffff */
    /* test edx, edx */ /* 0x160D1B7E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1BA6; /* 0x160D1B80: je 0x160d1ba6 */
L_160D1B82:
    /* test esi, esi */ /* 0x160D1B82: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1BA2; /* 0x160D1B84: je 0x160d1ba2 */
L_160D1B86:
    SET_LO8(ebx, MEM8(edi)); /* 0x160D1B86: mov bl, byte ptr [edi] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x160D1B88: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1BA2; /* 0x160D1B8A: je 0x160d1ba2 */
L_160D1B8C:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x160D1B8C: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x160D1B8E: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x160D1B8F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x160D1B90: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x160D1B91: dec esi */
    _flag_k = FK_DEC;
    /* test edx, edx */ /* 0x160D1B92: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1B82; /* 0x160D1B94: jne 0x160d1b82 */
L_160D1B96:
    edi = POP32_VAL(esp); /* 0x160D1B96: pop edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160D1B97: dec ecx */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x160D1B98: pop esi */
    eax = 0x8007007Au; /* 0x160D1B99: mov eax, 0x8007007a */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x160D1B9E: mov byte ptr [ecx], dl */
    ebx = POP32_VAL(esp); /* 0x160D1BA0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1BA1: ret  */
L_160D1BA2:
    /* test edx, edx */ /* 0x160D1BA2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1BB3; /* 0x160D1BA4: jne 0x160d1bb3 */
L_160D1BA6:
    edi = POP32_VAL(esp); /* 0x160D1BA6: pop edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160D1BA7: dec ecx */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x160D1BA8: pop esi */
    eax = 0x8007007Au; /* 0x160D1BA9: mov eax, 0x8007007a */
    MEM8(ecx) = (uint8_t)(0); /* 0x160D1BAE: mov byte ptr [ecx], 0 */
    ebx = POP32_VAL(esp); /* 0x160D1BB1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1BB2: ret  */
L_160D1BB3:
    edi = POP32_VAL(esp); /* 0x160D1BB3: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1BB4: pop esi */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x160D1BB5: mov byte ptr [ecx], al */
    ebx = POP32_VAL(esp); /* 0x160D1BB7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1BB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1BC0u);

L_160D1BC0:
    eax = ecx; /* 0x160D1BC0: mov eax, ecx */
    edx = 0xAu; /* 0x160D1BC2: mov edx, 0xa */
L_160D1BC7:
    /* test ecx, ecx */ /* 0x160D1BC7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1BF2; /* 0x160D1BC9: je 0x160d1bf2 */
L_160D1BCB:
    /* cmp MEM32(ecx + 0x4), edx */ /* 0x160D1BCB: cmp dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1BD5; /* 0x160D1BCE: jne 0x160d1bd5 */
L_160D1BD0:
    ecx = MEM32(ecx + 0x20); /* 0x160D1BD0: mov ecx, dword ptr [ecx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160D1BC7; /* 0x160D1BD3: jmp 0x160d1bc7 */
L_160D1BD5:
    /* test ecx, ecx */ /* 0x160D1BD5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1BF2; /* 0x160D1BD7: je 0x160d1bf2 */
L_160D1BD9:
    /* cmp MEM32(ecx + 0x4), 7 */ /* 0x160D1BD9: cmp dword ptr [ecx + 4], 7 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1BF2; /* 0x160D1BDD: jne 0x160d1bf2 */
L_160D1BDF:
    eax = MEM32(ecx + 0x18); /* 0x160D1BDF: mov eax, dword ptr [ecx + 0x18] */
    ecx = eax; /* 0x160D1BE2: mov ecx, eax */
L_160D1BE4:
    /* test ecx, ecx */ /* 0x160D1BE4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1BF2; /* 0x160D1BE6: je 0x160d1bf2 */
L_160D1BE8:
    /* cmp MEM32(ecx + 0x4), edx */ /* 0x160D1BE8: cmp dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1BD5; /* 0x160D1BEB: jne 0x160d1bd5 */
L_160D1BED:
    ecx = MEM32(ecx + 0x20); /* 0x160D1BED: mov ecx, dword ptr [ecx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160D1BE4; /* 0x160D1BF0: jmp 0x160d1be4 */
L_160D1BF2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1BF2: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1C00u);

L_160D1C00:
    edi = edi; /* 0x160D1C00: mov edi, edi */
    PUSH32(esp, ebx); /* 0x160D1C02: push ebx */
    PUSH32(esp, esi); /* 0x160D1C03: push esi */
    esi = eax; /* 0x160D1C04: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160D1C06: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x160D1C08: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1C2C; /* 0x160D1C0B: jbe 0x160d1c2c */
L_160D1C0D:
    PUSH32(esp, edi); /* 0x160D1C0D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160D1C0E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D1C10:
    eax = MEM32(esi + 0xC); /* 0x160D1C10: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi + 0x10); /* 0x160D1C13: mov ecx, dword ptr [eax + edi + 0x10] */
    /* test ecx, ecx */ /* 0x160D1C17: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1C22; /* 0x160D1C19: je 0x160d1c22 */
L_160D1C1B:
    PUSH32(esp, 1); /* 0x160D1C1B: push 1 */
    RECOMP_CALL(sub_160BDF80); /* 0x160D1C1D: call 0x160bdf80 */
    RECOMP_FLAGS_IN();
L_160D1C22:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x160D1C22: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x160D1C23: add edi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x160D1C26: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D1C10; /* 0x160D1C29: jb 0x160d1c10 */
L_160D1C2B:
    edi = POP32_VAL(esp); /* 0x160D1C2B: pop edi */
L_160D1C2C:
    esi = MEM32(esi + 0xC); /* 0x160D1C2C: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x160D1C2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1C5F; /* 0x160D1C31: je 0x160d1c5f */
L_160D1C33:
    eax = MEM32(0x161B4344); /* 0x160D1C33: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D1C38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D1C4C; /* 0x160D1C3A: jge 0x160d1c4c */
L_160D1C3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1C3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x160D1C3E: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x160D1C40: push esi */
    PUSH32(esp, eax); /* 0x160D1C41: push eax */
    PUSH32(esp, ecx); /* 0x160D1C42: push ecx */
    RECOMP_ICALL(MEM32(0x16001098)); /* 0x160D1C43: call dword ptr [0x16001098] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x160D1C49: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D1C4A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1C4B: ret  */
L_160D1C4C:
    PUSH32(esp, eax); /* 0x160D1C4C: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D1C4D: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x160D1C53: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x160D1C55: push esi */
    PUSH32(esp, 0); /* 0x160D1C56: push 0 */
    PUSH32(esp, ecx); /* 0x160D1C58: push ecx */
    RECOMP_ICALL(MEM32(0x16001098)); /* 0x160D1C59: call dword ptr [0x16001098] */
    RECOMP_FLAGS_IN();
L_160D1C5F:
    esi = POP32_VAL(esp); /* 0x160D1C5F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D1C60: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1C61: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1C70u);

L_160D1C70:
    edi = edi; /* 0x160D1C70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1C72: push ebp */
    ebp = esp; /* 0x160D1C73: mov ebp, esp */
    eax = MEM32(0x161B4344); /* 0x160D1C75: mov eax, dword ptr [0x161b4344] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160D1C7A: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160D1C7D: push ebx */
    PUSH32(esp, esi); /* 0x160D1C7E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160D1C7F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x160D1C81: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x160D1C83: push edi */
    edi = ecx; /* 0x160D1C84: mov edi, ecx */
    if (CMP_GE(_flag_a, _flag_b)) goto L_160D1C8C; /* 0x160D1C86: jge 0x160d1c8c */
L_160D1C88:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1C88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D1C93; /* 0x160D1C8A: jmp 0x160d1c93 */
L_160D1C8C:
    PUSH32(esp, eax); /* 0x160D1C8C: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D1C8D: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D1C93:
    eax = MEM32(eax); /* 0x160D1C93: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x14u); /* 0x160D1C95: push 0x14 */
    PUSH32(esp, ebx); /* 0x160D1C97: push ebx */
    PUSH32(esp, eax); /* 0x160D1C98: push eax */
    RECOMP_ICALL(MEM32(0x1600109C)); /* 0x160D1C99: call dword ptr [0x1600109c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160D1C9F: mov esi, eax */
    /* cmp esi, ebx */ /* 0x160D1CA1: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D1D80; /* 0x160D1CA3: je 0x160d1d80 */
L_160D1CA9:
    MEM32(esi) = ebx; /* 0x160D1CA9: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x160D1CAB: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0xC) = ebx; /* 0x160D1CAE: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x160D1CB1: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x160D1CB4: mov dword ptr [esi + 0x10], ebx */
    ecx = MEM32(edi + 0x8); /* 0x160D1CB7: mov ecx, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = ecx; /* 0x160D1CBA: mov dword ptr [esi + 8], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x160D1CBD: mov dword ptr [ebp - 8], ebx */
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x160D1CC0: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1D19; /* 0x160D1CC3: jbe 0x160d1d19 */
L_160D1CC5:
    MEM32(ebp + (-0x4)) = ebx; /* 0x160D1CC5: mov dword ptr [ebp - 4], ebx */
    goto L_160D1CD2; /* 0x160D1CC8: jmp 0x160d1cd2 */
L_160D1CD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160D1CD0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160D1CD2:
    edx = MEM32(edi + 0xC); /* 0x160D1CD2: mov edx, dword ptr [edi + 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x160D1CD5: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + edx + 0x10); /* 0x160D1CD8: mov ecx, dword ptr [eax + edx + 0x10] */
    /* cmp ecx, ebx */ /* 0x160D1CDC: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D1CE7; /* 0x160D1CDE: je 0x160d1ce7 */
L_160D1CE0:
    RECOMP_CALL(sub_160D1C70); /* 0x160D1CE0: call 0x160d1c70 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160D1CE5: mov ebx, eax */
L_160D1CE7:
    ecx = MEM32(edi + 0xC); /* 0x160D1CE7: mov ecx, dword ptr [edi + 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x160D1CEA: mov edx, dword ptr [ebp - 4] */
    eax = edx + ecx; /* 0x160D1CED: lea eax, [edx + ecx] */
    ecx = MEM32(eax + 0xC); /* 0x160D1CF0: mov ecx, dword ptr [eax + 0xc] */
    edx = MEM32(eax + 0x8); /* 0x160D1CF3: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x160D1CF6: push ebx */
    PUSH32(esp, ecx); /* 0x160D1CF7: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x160D1CF8: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, edx); /* 0x160D1CFB: push edx */
    edx = MEM32(eax); /* 0x160D1CFC: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x160D1CFE: push ecx */
    PUSH32(esp, edx); /* 0x160D1CFF: push edx */
    RECOMP_CALL(sub_160D1D90); /* 0x160D1D00: call 0x160d1d90 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D1D05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1D22; /* 0x160D1D07: jne 0x160d1d22 */
L_160D1D09:
    eax = MEM32(ebp + (-0x8)); /* 0x160D1D09: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0x18u; /* 0x160D1D0C: add dword ptr [ebp - 4], 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D1D10: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x160D1D11: mov dword ptr [ebp - 8], eax */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x160D1D14: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D1CD0; /* 0x160D1D17: jb 0x160d1cd0 */
L_160D1D19:
    edi = POP32_VAL(esp); /* 0x160D1D19: pop edi */
    eax = esi; /* 0x160D1D1A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160D1D1C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160D1D1D: pop ebx */
    esp = ebp; /* 0x160D1D1E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1D20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1D21: ret  */
L_160D1D22:
    eax = esi; /* 0x160D1D22: mov eax, esi */
    RECOMP_CALL(sub_160D1C00); /* 0x160D1D24: call 0x160d1c00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x161B4344); /* 0x160D1D29: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D1D2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D1D36; /* 0x160D1D30: jge 0x160d1d36 */
L_160D1D32:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1D32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D1D3D; /* 0x160D1D34: jmp 0x160d1d3d */
L_160D1D36:
    PUSH32(esp, eax); /* 0x160D1D36: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D1D37: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D1D3D:
    eax = MEM32(eax); /* 0x160D1D3D: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x160D1D3F: push esi */
    esi = MEM32(0x16001098); /* 0x160D1D40: mov esi, dword ptr [0x16001098] */
    PUSH32(esp, 0); /* 0x160D1D46: push 0 */
    PUSH32(esp, eax); /* 0x160D1D48: push eax */
    RECOMP_ICALL(esi); /* 0x160D1D49: call esi */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x160D1D4B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1D80; /* 0x160D1D4D: je 0x160d1d80 */
L_160D1D4F:
    eax = ebx; /* 0x160D1D4F: mov eax, ebx */
    RECOMP_CALL(sub_160D1C00); /* 0x160D1D51: call 0x160d1c00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x161B4344); /* 0x160D1D56: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D1D5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D1D71; /* 0x160D1D5D: jge 0x160d1d71 */
L_160D1D5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1D5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x160D1D61: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x160D1D63: push ebx */
    PUSH32(esp, eax); /* 0x160D1D64: push eax */
    PUSH32(esp, ecx); /* 0x160D1D65: push ecx */
    RECOMP_ICALL(esi); /* 0x160D1D66: call esi */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160D1D68: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1D69: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1D6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160D1D6C: pop ebx */
    esp = ebp; /* 0x160D1D6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1D6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1D70: ret  */
L_160D1D71:
    PUSH32(esp, eax); /* 0x160D1D71: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D1D72: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x160D1D78: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x160D1D7A: push ebx */
    PUSH32(esp, 0); /* 0x160D1D7B: push 0 */
    PUSH32(esp, ecx); /* 0x160D1D7D: push ecx */
    RECOMP_ICALL(esi); /* 0x160D1D7E: call esi */
    RECOMP_FLAGS_IN();
L_160D1D80:
    edi = POP32_VAL(esp); /* 0x160D1D80: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1D81: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1D82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160D1D84: pop ebx */
    esp = ebp; /* 0x160D1D85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1D87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1D88: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1D90u);

L_160D1D90:
    edi = edi; /* 0x160D1D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1D92: push ebp */
    ebp = esp; /* 0x160D1D93: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160D1D95: push ecx */
    eax = MEM32(esi); /* 0x160D1D96: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x160D1D98: push edi */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x160D1D99: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D1E45; /* 0x160D1D9C: jne 0x160d1e45 */
L_160D1DA2:
    /* test eax, eax */ /* 0x160D1DA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1DC1; /* 0x160D1DA4: je 0x160d1dc1 */
L_160D1DA6:
    edi = eax + eax; /* 0x160D1DA6: lea edi, [eax + eax] */
    MEM32(ebp + (-0x4)) = edi; /* 0x160D1DA9: mov dword ptr [ebp - 4], edi */
    /* cmp edi, 0x0AAAAAAAu */ /* 0x160D1DAC: cmp edi, 0xaaaaaaa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0AAAAAAAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160D1DEF; /* 0x160D1DB2: ja 0x160d1def */
L_160D1DB4:
    eax = MEM32(0x161B4344); /* 0x160D1DB4: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D1DB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D1DCD; /* 0x160D1DBB: jge 0x160d1dcd */
L_160D1DBD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1DBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D1DD4; /* 0x160D1DBF: jmp 0x160d1dd4 */
L_160D1DC1:
    MEM32(ebp + (-0x4)) = 0x10u; /* 0x160D1DC1: mov dword ptr [ebp - 4], 0x10 */
    edi = MEM32(ebp + (-0x4)); /* 0x160D1DC8: mov edi, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_160D1DB4; /* 0x160D1DCB: jmp 0x160d1db4 */
L_160D1DCD:
    PUSH32(esp, eax); /* 0x160D1DCD: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D1DCE: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D1DD4:
    edx = MEM32(eax); /* 0x160D1DD4: mov edx, dword ptr [eax] */
    ecx = edi + edi * 2; /* 0x160D1DD6: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x160D1DD9: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x160D1DDB: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x160D1DDD: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x160D1DDF: push ecx */
    PUSH32(esp, 0); /* 0x160D1DE0: push 0 */
    PUSH32(esp, edx); /* 0x160D1DE2: push edx */
    RECOMP_ICALL(MEM32(0x1600109C)); /* 0x160D1DE3: call dword ptr [0x1600109c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160D1DE9: mov edi, eax */
    /* test edi, edi */ /* 0x160D1DEB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1DFB; /* 0x160D1DED: jne 0x160d1dfb */
L_160D1DEF:
    eax = 0x8007000Eu; /* 0x160D1DEF: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x160D1DF4: pop edi */
    esp = ebp; /* 0x160D1DF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1DF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160D1DF8: ret 0x14 */
L_160D1DFB:
    eax = MEM32(esi); /* 0x160D1DFB: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0xC); /* 0x160D1DFD: mov ecx, dword ptr [esi + 0xc] */
    eax = eax + eax * 2; /* 0x160D1E00: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160D1E03: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160D1E05: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x160D1E07: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160D1E08: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x160D1E0A: push eax */
    PUSH32(esp, ecx); /* 0x160D1E0B: push ecx */
    PUSH32(esp, edi); /* 0x160D1E0C: push edi */
    RECOMP_CALL(sub_161AE3C0); /* 0x160D1E0D: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0xC); /* 0x160D1E12: mov ebx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160D1E15: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x160D1E18: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D1E3C; /* 0x160D1E1A: je 0x160d1e3c */
L_160D1E1C:
    eax = MEM32(0x161B4344); /* 0x160D1E1C: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D1E21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D1E29; /* 0x160D1E23: jge 0x160d1e29 */
L_160D1E25:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1E25: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D1E30; /* 0x160D1E27: jmp 0x160d1e30 */
L_160D1E29:
    PUSH32(esp, eax); /* 0x160D1E29: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D1E2A: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D1E30:
    edx = MEM32(eax); /* 0x160D1E30: mov edx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x160D1E32: push ebx */
    PUSH32(esp, 0); /* 0x160D1E33: push 0 */
    PUSH32(esp, edx); /* 0x160D1E35: push edx */
    RECOMP_ICALL(MEM32(0x16001098)); /* 0x160D1E36: call dword ptr [0x16001098] */
    RECOMP_FLAGS_IN();
L_160D1E3C:
    eax = MEM32(ebp + (-0x4)); /* 0x160D1E3C: mov eax, dword ptr [ebp - 4] */
    MEM32(esi) = eax; /* 0x160D1E3F: mov dword ptr [esi], eax */
    MEM32(esi + 0xC) = edi; /* 0x160D1E41: mov dword ptr [esi + 0xc], edi */
    ebx = POP32_VAL(esp); /* 0x160D1E44: pop ebx */
L_160D1E45:
    eax = MEM32(esi + 0x4); /* 0x160D1E45: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi + 0xC); /* 0x160D1E48: mov edx, dword ptr [esi + 0xc] */
    ecx = eax + eax * 2; /* 0x160D1E4B: lea ecx, [eax + eax*2] */
    eax = MEM32(ebp + 0x8); /* 0x160D1E4E: mov eax, dword ptr [ebp + 8] */
    MEM32(edx + ecx * 8) = eax; /* 0x160D1E51: mov dword ptr [edx + ecx*8], eax */
    eax = MEM32(esi + 0x4); /* 0x160D1E54: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi + 0xC); /* 0x160D1E57: mov edx, dword ptr [esi + 0xc] */
    ecx = eax + eax * 2; /* 0x160D1E5A: lea ecx, [eax + eax*2] */
    eax = MEM32(ebp + 0xC); /* 0x160D1E5D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx + ecx * 8 + 0x4) = eax; /* 0x160D1E60: mov dword ptr [edx + ecx*8 + 4], eax */
    eax = MEM32(esi + 0x4); /* 0x160D1E64: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi + 0xC); /* 0x160D1E67: mov edx, dword ptr [esi + 0xc] */
    ecx = eax + eax * 2; /* 0x160D1E6A: lea ecx, [eax + eax*2] */
    eax = MEM32(ebp + 0x10); /* 0x160D1E6D: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx + ecx * 8 + 0x8) = eax; /* 0x160D1E70: mov dword ptr [edx + ecx*8 + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x160D1E74: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi + 0xC); /* 0x160D1E77: mov edx, dword ptr [esi + 0xc] */
    ecx = eax + eax * 2; /* 0x160D1E7A: lea ecx, [eax + eax*2] */
    eax = MEM32(ebp + 0x14); /* 0x160D1E7D: mov eax, dword ptr [ebp + 0x14] */
    MEM32(edx + ecx * 8 + 0xC) = eax; /* 0x160D1E80: mov dword ptr [edx + ecx*8 + 0xc], eax */
    eax = MEM32(esi + 0x4); /* 0x160D1E84: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi + 0xC); /* 0x160D1E87: mov edx, dword ptr [esi + 0xc] */
    ecx = eax + eax * 2; /* 0x160D1E8A: lea ecx, [eax + eax*2] */
    eax = MEM32(ebp + 0x18); /* 0x160D1E8D: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edx + ecx * 8 + 0x10) = eax; /* 0x160D1E90: mov dword ptr [edx + ecx*8 + 0x10], eax */
    eax = MEM32(esi + 0x4); /* 0x160D1E94: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi + 0xC); /* 0x160D1E97: mov edx, dword ptr [esi + 0xc] */
    ecx = eax + eax * 2; /* 0x160D1E9A: lea ecx, [eax + eax*2] */
    MEM32(edx + ecx * 8 + 0x14) = 0; /* 0x160D1E9D: mov dword ptr [edx + ecx*8 + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x160D1EA5: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1EA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160D1EAA: pop edi */
    esp = ebp; /* 0x160D1EAB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D1EAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160D1EAE: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_160D1EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1EC0u);

L_160D1EC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1EC0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x24) = ecx; /* 0x160D1EC2: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x160D1EC5: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x160D1EC8: mov dword ptr [eax + 0x2c], ecx */
    MEM8(eax + 0x30) = (uint8_t)(LO8(ecx)); /* 0x160D1ECB: mov byte ptr [eax + 0x30], cl */
    MEM32(eax) = 4; /* 0x160D1ECE: mov dword ptr [eax], 4 */
    MEM32(eax + 0x8) = ecx; /* 0x160D1ED4: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160D1ED7: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x160D1EDA: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x160D1EDD: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = 0xFFFFFFFFu; /* 0x160D1EE0: mov dword ptr [eax + 0x18], 0xffffffff */
    MEM32(eax + 0x1C) = ecx; /* 0x160D1EE7: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x160D1EEA: mov dword ptr [eax + 4], ecx */
    MEM8(eax + 0x20) = (uint8_t)(LO8(ecx)); /* 0x160D1EED: mov byte ptr [eax + 0x20], cl */
    MEM8(eax + 0x21) = (uint8_t)(LO8(ecx)); /* 0x160D1EF0: mov byte ptr [eax + 0x21], cl */
    MEM32(eax + 0x34) = ecx; /* 0x160D1EF3: mov dword ptr [eax + 0x34], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1EF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1F00u);

L_160D1F00:
    edi = edi; /* 0x160D1F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D1F02: push ebp */
    ebp = esp; /* 0x160D1F03: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160D1F05: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x24) = ecx; /* 0x160D1F07: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x160D1F0A: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x160D1F0D: mov dword ptr [eax + 0x2c], ecx */
    MEM8(eax + 0x30) = (uint8_t)(LO8(ecx)); /* 0x160D1F10: mov byte ptr [eax + 0x30], cl */
    MEM32(eax) = edx; /* 0x160D1F13: mov dword ptr [eax], edx */
    SET_LO8(edx, MEM8(ebp + 0x8)); /* 0x160D1F15: mov dl, byte ptr [ebp + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x160D1F18: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160D1F1B: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x160D1F1E: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x160D1F21: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = 0xFFFFFFFFu; /* 0x160D1F24: mov dword ptr [eax + 0x18], 0xffffffff */
    MEM32(eax + 0x1C) = ecx; /* 0x160D1F2B: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x160D1F2E: mov dword ptr [eax + 4], ecx */
    MEM8(eax + 0x20) = (uint8_t)(LO8(ecx)); /* 0x160D1F31: mov byte ptr [eax + 0x20], cl */
    MEM8(eax + 0x21) = (uint8_t)(LO8(edx)); /* 0x160D1F34: mov byte ptr [eax + 0x21], dl */
    MEM32(eax + 0x34) = ecx; /* 0x160D1F37: mov dword ptr [eax + 0x34], ecx */
    ebp = POP32_VAL(esp); /* 0x160D1F3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160D1F3B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160D1F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1F50u);

L_160D1F50:
    edi = edi; /* 0x160D1F50: mov edi, edi */
    PUSH32(esp, esi); /* 0x160D1F52: push esi */
    PUSH32(esp, edi); /* 0x160D1F53: push edi */
    edi = eax; /* 0x160D1F54: mov edi, eax */
    RECOMP_CALL(sub_160D2010); /* 0x160D1F56: call 0x160d2010 */
    RECOMP_FLAGS_IN();
    esi = edi + 0x24; /* 0x160D1F5B: lea esi, [edi + 0x24] */
    RECOMP_CALL(sub_160D37E0); /* 0x160D1F5E: call 0x160d37e0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160D1F63: pop edi */
    esi = POP32_VAL(esp); /* 0x160D1F64: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1F65: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D1F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D1F70u);

L_160D1F70:
    edi = edi; /* 0x160D1F70: mov edi, edi */
    PUSH32(esp, ecx); /* 0x160D1F72: push ecx */
    PUSH32(esp, ebx); /* 0x160D1F73: push ebx */
    PUSH32(esp, edi); /* 0x160D1F74: push edi */
    edi = eax; /* 0x160D1F75: mov edi, eax */
    RECOMP_CALL(sub_160D2010); /* 0x160D1F77: call 0x160d2010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x160D1F7C: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8) = eax; /* 0x160D1F7F: mov dword ptr [edi + 8], eax */
    ecx = MEM32(esi + 0xC); /* 0x160D1F82: mov ecx, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = ecx; /* 0x160D1F85: mov dword ptr [edi + 0xc], ecx */
    edx = MEM32(esi); /* 0x160D1F88: mov edx, dword ptr [esi] */
    MEM32(edi) = edx; /* 0x160D1F8A: mov dword ptr [edi], edx */
    eax = MEM32(esi + 0x10); /* 0x160D1F8C: mov eax, dword ptr [esi + 0x10] */
    MEM32(edi + 0x10) = eax; /* 0x160D1F8F: mov dword ptr [edi + 0x10], eax */
    ecx = MEM32(esi + 0x14); /* 0x160D1F92: mov ecx, dword ptr [esi + 0x14] */
    MEM32(edi + 0x14) = ecx; /* 0x160D1F95: mov dword ptr [edi + 0x14], ecx */
    edx = MEM32(esi + 0x1C); /* 0x160D1F98: mov edx, dword ptr [esi + 0x1c] */
    MEM32(edi + 0x1C) = edx; /* 0x160D1F9B: mov dword ptr [edi + 0x1c], edx */
    SET_LO8(eax, MEM8(esi + 0x20)); /* 0x160D1F9E: mov al, byte ptr [esi + 0x20] */
    MEM8(edi + 0x20) = (uint8_t)(LO8(eax)); /* 0x160D1FA1: mov byte ptr [edi + 0x20], al */
    SET_LO8(ecx, MEM8(esi + 0x21)); /* 0x160D1FA4: mov cl, byte ptr [esi + 0x21] */
    edx = esi + 0x24; /* 0x160D1FA7: lea edx, [esi + 0x24] */
    PUSH32(esp, edx); /* 0x160D1FAA: push edx */
    eax = edi + 0x24; /* 0x160D1FAB: lea eax, [edi + 0x24] */
    PUSH32(esp, eax); /* 0x160D1FAE: push eax */
    MEM8(edi + 0x21) = (uint8_t)(LO8(ecx)); /* 0x160D1FAF: mov byte ptr [edi + 0x21], cl */
    RECOMP_CALL(sub_160D3680); /* 0x160D1FB2: call 0x160d3680 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160D1FB7: mov ebx, eax */
    /* test ebx, ebx */ /* 0x160D1FB9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D1FF8; /* 0x160D1FBB: jl 0x160d1ff8 */
L_160D1FBD:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x160D1FBD: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160D1FF8; /* 0x160D1FC1: je 0x160d1ff8 */
L_160D1FC3:
    eax = MEM32(esi + 0x8); /* 0x160D1FC3: mov eax, dword ptr [esi + 8] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x160D1FC6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D1FCF; /* 0x160D1FC9: jbe 0x160d1fcf */
L_160D1FCB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D1FCB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D1FD5; /* 0x160D1FCD: jmp 0x160d1fd5 */
L_160D1FCF:
    PUSH32(esp, eax); /* 0x160D1FCF: push eax */
    RECOMP_CALL(sub_16094280); /* 0x160D1FD0: call 0x16094280 */
    RECOMP_FLAGS_IN();
L_160D1FD5:
    MEM32(edi + 0x4) = eax; /* 0x160D1FD5: mov dword ptr [edi + 4], eax */
    /* test eax, eax */ /* 0x160D1FD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D1FE5; /* 0x160D1FDA: jne 0x160d1fe5 */
L_160D1FDC:
    eax = 0x8007000Eu; /* 0x160D1FDC: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x160D1FE1: pop edi */
    ebx = POP32_VAL(esp); /* 0x160D1FE2: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160D1FE3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1FE4: ret  */
L_160D1FE5:
    ecx = MEM32(edi + 0xC); /* 0x160D1FE5: mov ecx, dword ptr [edi + 0xc] */
    edx = MEM32(esi + 0x4); /* 0x160D1FE8: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x160D1FEB: push ecx */
    PUSH32(esp, edx); /* 0x160D1FEC: push edx */
    PUSH32(esp, eax); /* 0x160D1FED: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x160D1FEE: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160D1FF3: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x160D1FF6: mov eax, ebx */
L_160D1FF8:
    edi = POP32_VAL(esp); /* 0x160D1FF8: pop edi */
    ebx = POP32_VAL(esp); /* 0x160D1FF9: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160D1FFA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D1FFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D2010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D2010u);

L_160D2010:
    edi = edi; /* 0x160D2010: mov edi, edi */
    PUSH32(esp, esi); /* 0x160D2012: push esi */
    esi = edi + 0x24; /* 0x160D2013: lea esi, [edi + 0x24] */
    RECOMP_CALL(sub_160D37E0); /* 0x160D2016: call 0x160d37e0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x4); /* 0x160D201B: mov esi, dword ptr [edi + 4] */
    /* test esi, esi */ /* 0x160D201E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D2042; /* 0x160D2020: je 0x160d2042 */
L_160D2022:
    eax = MEM32(0x161B4344); /* 0x160D2022: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D2027: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D202F; /* 0x160D2029: jge 0x160d202f */
L_160D202B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D202B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D2036; /* 0x160D202D: jmp 0x160d2036 */
L_160D202F:
    PUSH32(esp, eax); /* 0x160D202F: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D2030: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D2036:
    eax = MEM32(eax); /* 0x160D2036: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x160D2038: push esi */
    PUSH32(esp, 0); /* 0x160D2039: push 0 */
    PUSH32(esp, eax); /* 0x160D203B: push eax */
    RECOMP_ICALL(MEM32(0x16001098)); /* 0x160D203C: call dword ptr [0x16001098] */
    RECOMP_FLAGS_IN();
L_160D2042:
    esi = MEM32(edi + 0x34); /* 0x160D2042: mov esi, dword ptr [edi + 0x34] */
    MEM32(edi + 0x4) = 0; /* 0x160D2045: mov dword ptr [edi + 4], 0 */
    /* test esi, esi */ /* 0x160D204C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D2070; /* 0x160D204E: je 0x160d2070 */
L_160D2050:
    eax = MEM32(0x161B4344); /* 0x160D2050: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D2055: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D205D; /* 0x160D2057: jge 0x160d205d */
L_160D2059:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D2059: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D2064; /* 0x160D205B: jmp 0x160d2064 */
L_160D205D:
    PUSH32(esp, eax); /* 0x160D205D: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D205E: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D2064:
    ecx = MEM32(eax); /* 0x160D2064: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x160D2066: push esi */
    PUSH32(esp, 0); /* 0x160D2067: push 0 */
    PUSH32(esp, ecx); /* 0x160D2069: push ecx */
    RECOMP_ICALL(MEM32(0x16001098)); /* 0x160D206A: call dword ptr [0x16001098] */
    RECOMP_FLAGS_IN();
L_160D2070:
    MEM32(edi + 0x34) = 0; /* 0x160D2070: mov dword ptr [edi + 0x34], 0 */
    esi = POP32_VAL(esp); /* 0x160D2077: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D2078: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D2080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D2080u);

L_160D2080:
    edi = edi; /* 0x160D2080: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D2082: push ebp */
    ebp = esp; /* 0x160D2083: mov ebp, esp */
    /* cmp MEM32(esi), 3 */ /* 0x160D2085: cmp dword ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160D2088: push ebx */
    PUSH32(esp, edi); /* 0x160D2089: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D21ED; /* 0x160D208A: jne 0x160d21ed */
L_160D2090:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x160D2090: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160D20E3; /* 0x160D2094: jne 0x160d20e3 */
L_160D2096:
    eax = MEM32(0x161B4344); /* 0x160D2096: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D209B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D20A3; /* 0x160D209D: jge 0x160d20a3 */
L_160D209F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D209F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D20AA; /* 0x160D20A1: jmp 0x160d20aa */
L_160D20A3:
    PUSH32(esp, eax); /* 0x160D20A3: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D20A4: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D20AA:
    eax = MEM32(eax); /* 0x160D20AA: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x80u); /* 0x160D20AC: push 0x80 */
    PUSH32(esp, 0); /* 0x160D20B1: push 0 */
    PUSH32(esp, eax); /* 0x160D20B3: push eax */
    RECOMP_ICALL(MEM32(0x1600109C)); /* 0x160D20B4: call dword ptr [0x1600109c] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x160D20BA: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x160D20BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D20CC; /* 0x160D20BF: jne 0x160d20cc */
L_160D20C1:
    edi = POP32_VAL(esp); /* 0x160D20C1: pop edi */
    eax = 0x8007000Eu; /* 0x160D20C2: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x160D20C7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D20C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160D20C9: ret 0x10 */
L_160D20CC:
    PUSH32(esp, 0x80u); /* 0x160D20CC: push 0x80 */
    PUSH32(esp, 0); /* 0x160D20D1: push 0 */
    PUSH32(esp, eax); /* 0x160D20D3: push eax */
    MEM32(esi + 0x8) = 0x80u; /* 0x160D20D4: mov dword ptr [esi + 8], 0x80 */
    RECOMP_CALL(sub_161AE3CC); /* 0x160D20DB: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160D20E0: add esp, 0xc */
    _flag_k = FK_ADD;
L_160D20E3:
    ebx = MEM32(ebp + 0x8); /* 0x160D20E3: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(esi + 0x8) */ /* 0x160D20E6: cmp ebx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160D217E; /* 0x160D20E9: jb 0x160d217e */
L_160D20EF:
    /* nop */ /* 0x160D20EF: nop  */
L_160D20F0:
    edi = MEM32(esi + 0x8); /* 0x160D20F0: mov edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x160D20F3: add edi, edi */
    _flag_k = FK_ADD;
    /* cmp edi, 0xFFFFFFFFu */ /* 0x160D20F5: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_160D20C1; /* 0x160D20F8: ja 0x160d20c1 */
L_160D20FA:
    eax = MEM32(0x161B4344); /* 0x160D20FA: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D20FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D2107; /* 0x160D2101: jge 0x160d2107 */
L_160D2103:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D2103: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D210E; /* 0x160D2105: jmp 0x160d210e */
L_160D2107:
    PUSH32(esp, eax); /* 0x160D2107: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D2108: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D210E:
    ecx = MEM32(eax); /* 0x160D210E: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x160D2110: push edi */
    PUSH32(esp, 0); /* 0x160D2111: push 0 */
    PUSH32(esp, ecx); /* 0x160D2113: push ecx */
    RECOMP_ICALL(MEM32(0x1600109C)); /* 0x160D2114: call dword ptr [0x1600109c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160D211A: mov edi, eax */
    /* test edi, edi */ /* 0x160D211C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D20C1; /* 0x160D211E: je 0x160d20c1 */
L_160D2120:
    edx = MEM32(esi + 0xC); /* 0x160D2120: mov edx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x4); /* 0x160D2123: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edx); /* 0x160D2126: push edx */
    PUSH32(esp, eax); /* 0x160D2127: push eax */
    PUSH32(esp, edi); /* 0x160D2128: push edi */
    RECOMP_CALL(sub_161AE3C0); /* 0x160D2129: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x160D212E: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x160D2131: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x160D2132: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x160D2134: push 0 */
    PUSH32(esp, eax); /* 0x160D2136: push eax */
    RECOMP_CALL(sub_161AE3CC); /* 0x160D2137: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0x4); /* 0x160D213C: mov ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x160D213F: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x160D2142: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D2166; /* 0x160D2144: je 0x160d2166 */
L_160D2146:
    eax = MEM32(0x161B4344); /* 0x160D2146: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D214B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D2153; /* 0x160D214D: jge 0x160d2153 */
L_160D214F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D214F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D215A; /* 0x160D2151: jmp 0x160d215a */
L_160D2153:
    PUSH32(esp, eax); /* 0x160D2153: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D2154: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D215A:
    ecx = MEM32(eax); /* 0x160D215A: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x160D215C: push ebx */
    PUSH32(esp, 0); /* 0x160D215D: push 0 */
    PUSH32(esp, ecx); /* 0x160D215F: push ecx */
    RECOMP_ICALL(MEM32(0x16001098)); /* 0x160D2160: call dword ptr [0x16001098] */
    RECOMP_FLAGS_IN();
L_160D2166:
    edx = MEM32(esi + 0x8); /* 0x160D2166: mov edx, dword ptr [esi + 8] */
    eax = MEM32(ebp + 0x8); /* 0x160D2169: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x160D216C: add edx, edx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = edi; /* 0x160D216E: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = edx; /* 0x160D2171: mov dword ptr [esi + 8], edx */
    /* cmp eax, edx */ /* 0x160D2174: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_160D20F0; /* 0x160D2176: jae 0x160d20f0 */
L_160D217C:
    ebx = eax; /* 0x160D217C: mov ebx, eax */
L_160D217E:
    ecx = MEM32(ebp + 0x10); /* 0x160D217E: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x160D2181: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x160D2183: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160D2188: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x160D218A: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x160D218C: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D2192; /* 0x160D218E: je 0x160d2192 */
L_160D2190:
    SET_LO8(edx, 8); /* 0x160D2190: mov dl, 8 */
L_160D2192:
    eax = ecx; /* 0x160D2192: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    eax = eax & 0x00040000u; /* 0x160D2194: and eax, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160D2199: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x160D219B: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D21A2; /* 0x160D219D: je 0x160d21a2 */
L_160D219F:
    _flag_a = (uint32_t)((LO8(edx) | 0x10u)) << 24; _flag_b = (uint32_t)((LO8(edx) | 0x10u)) << 24;
    SET_LO8(edx, LO8(edx) | 0x10u); /* 0x160D219F: or dl, 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D21A2:
    eax = ecx; /* 0x160D21A2: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x160D21A4: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160D21A9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x160D21AB: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D21B2; /* 0x160D21AD: je 0x160d21b2 */
L_160D21AF:
    _flag_a = (uint32_t)((LO8(edx) | 0x20u)) << 24; _flag_b = (uint32_t)((LO8(edx) | 0x20u)) << 24;
    SET_LO8(edx, LO8(edx) | 0x20u); /* 0x160D21AF: or dl, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D21B2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00080000u);
    ecx = ecx & 0x00080000u; /* 0x160D21B2: and ecx, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D21B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x160D21BA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D21C1; /* 0x160D21BC: je 0x160d21c1 */
L_160D21BE:
    _flag_a = (uint32_t)((LO8(edx) | 0x40u)) << 24; _flag_b = (uint32_t)((LO8(edx) | 0x40u)) << 24;
    SET_LO8(edx, LO8(edx) | 0x40u); /* 0x160D21BE: or dl, 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D21C1:
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x160D21C1: mov al, byte ptr [ebp + 0xc] */
    /* test LO8(eax), 4 */ /* 0x160D21C4: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D21CB; /* 0x160D21C6: je 0x160d21cb */
L_160D21C8:
    _flag_a = (uint32_t)((LO8(edx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(edx) | 0x80u)) << 24;
    SET_LO8(edx, LO8(edx) | 0x80u); /* 0x160D21C8: or dl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D21CB:
    /* test LO8(eax), 0x10u */ /* 0x160D21CB: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D21D2; /* 0x160D21CD: je 0x160d21d2 */
L_160D21CF:
    _flag_a = (uint32_t)((LO8(edx) | 4)) << 24; _flag_b = (uint32_t)((LO8(edx) | 4)) << 24;
    SET_LO8(edx, LO8(edx) | 4); /* 0x160D21CF: or dl, 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160D21D2:
    ecx = MEM32(esi + 0x4); /* 0x160D21D2: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(eax, LO8(eax) & 2); /* 0x160D21D5: and al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x160D21D7: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160D21D9: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 2); /* 0x160D21DB: add al, 2 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | LO8(edx))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(edx))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(edx)); /* 0x160D21DD: or al, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebx + ecx) = (uint8_t)(LO8(eax)); /* 0x160D21DF: mov byte ptr [ebx + ecx], al */
    eax = ebx + 0x1; /* 0x160D21E2: lea eax, [ebx + 1] */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x160D21E5: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D21ED; /* 0x160D21E8: jbe 0x160d21ed */
L_160D21EA:
    MEM32(esi + 0xC) = eax; /* 0x160D21EA: mov dword ptr [esi + 0xc], eax */
L_160D21ED:
    edi = POP32_VAL(esp); /* 0x160D21ED: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D21EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160D21F0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160D21F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160D21F2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_160D2200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D2200u);

L_160D2200:
    edi = edi; /* 0x160D2200: mov edi, edi */
    PUSH32(esp, ecx); /* 0x160D2202: push ecx */
    PUSH32(esp, esi); /* 0x160D2203: push esi */
    PUSH32(esp, edi); /* 0x160D2204: push edi */
    edi = ecx; /* 0x160D2205: mov edi, ecx */
    esi = edx; /* 0x160D2207: mov esi, edx */
    /* test eax, eax */ /* 0x160D2209: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D225F; /* 0x160D220B: jne 0x160d225f */
L_160D220D:
    ecx = ecx; /* 0x160D220D: lea ecx, [ecx] */
L_160D2210:
    /* cmp MEM32(eax * 4 + 0x16021340), edi */ /* 0x160D2210: cmp dword ptr [eax*4 + 0x16021340], edi */
    _flag_a = (uint32_t)(MEM32(eax * 4 + 0x16021340)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160D2221; /* 0x160D2217: jae 0x160d2221 */
L_160D2219:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160D2219: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x1Cu */ /* 0x160D221A: cmp eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D2210; /* 0x160D221D: jb 0x160d2210 */
L_160D221F:
    goto L_160D2228; /* 0x160D221F: jmp 0x160d2228 */
L_160D2221:
    edi = MEM32(eax * 4 + 0x16021340); /* 0x160D2221: mov edi, dword ptr [eax*4 + 0x16021340] */
L_160D2228:
    eax = MEM32(0x161B4344); /* 0x160D2228: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160D222D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160D2235; /* 0x160D222F: jge 0x160d2235 */
L_160D2231:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D2231: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160D223C; /* 0x160D2233: jmp 0x160d223c */
L_160D2235:
    PUSH32(esp, eax); /* 0x160D2235: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160D2236: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160D223C:
    edx = MEM32(eax); /* 0x160D223C: mov edx, dword ptr [eax] */
    ecx = edi * 4; /* 0x160D223E: lea ecx, [edi*4] */
    PUSH32(esp, ecx); /* 0x160D2245: push ecx */
    PUSH32(esp, 0); /* 0x160D2246: push 0 */
    PUSH32(esp, edx); /* 0x160D2248: push edx */
    RECOMP_ICALL(MEM32(0x1600109C)); /* 0x160D2249: call dword ptr [0x1600109c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160D224F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D225C; /* 0x160D2251: jne 0x160d225c */
L_160D2253:
    eax = 0x8007000Eu; /* 0x160D2253: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x160D2258: pop edi */
    esi = POP32_VAL(esp); /* 0x160D2259: pop esi */
    ecx = POP32_VAL(esp); /* 0x160D225A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D225B: ret  */
L_160D225C:
    MEM32(esi + 0x34) = eax; /* 0x160D225C: mov dword ptr [esi + 0x34], eax */
L_160D225F:
    ecx = eax; /* 0x160D225F: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x160D2261: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160D2263: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x160D2265: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x160D2267: push ecx */
    ecx = eax; /* 0x160D2268: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x24u; /* 0x160D226A: add esi, 0x24 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x160D226D: mov eax, edi */
    RECOMP_CALL(sub_160D3870); /* 0x160D226F: call 0x160d3870 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160D2274: pop edi */
    esi = POP32_VAL(esp); /* 0x160D2275: pop esi */
    ecx = POP32_VAL(esp); /* 0x160D2276: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160D2277: ret  */
    RECOMP_REGS_OUT();
}

void sub_160D2280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160D2280u);

L_160D2280:
    edi = edi; /* 0x160D2280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160D2282: push ebp */
    ebp = esp; /* 0x160D2283: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x160D2285: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x160D2288: push esi */
    PUSH32(esp, edi); /* 0x160D2289: push edi */
    edx = MEM32(ebp + 0xC); /* 0x160D228A: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x160D228D: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x160D2290: mov dword ptr [ebp - 0x2c], edx */
    edx = MEM32(ebp + 0x2C); /* 0x160D2293: mov edx, dword ptr [ebp + 0x2c] */
    MEM32(ebp + (-0x28)) = edx; /* 0x160D2296: mov dword ptr [ebp - 0x28], edx */
    edx = MEM32(ebp + 0x30); /* 0x160D2299: mov edx, dword ptr [ebp + 0x30] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x160D229C: mov dword ptr [ebp - 0x1c], edx */
    edx = MEM32(ebp + 0x14); /* 0x160D229F: mov edx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = edx; /* 0x160D22A2: mov dword ptr [ebp - 0x14], edx */
    edx = MEM32(ebp + 0x18); /* 0x160D22A5: mov edx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x160D22A8: mov dword ptr [ebp - 0x30], ecx */
    ecx = MEM32(ebp + 0x28); /* 0x160D22AB: mov ecx, dword ptr [ebp + 0x28] */
    MEM32(ebp + (-0x10)) = edx; /* 0x160D22AE: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(ebp + 0x1C); /* 0x160D22B1: mov edx, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x160D22B4: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(ebp + 0x34); /* 0x160D22B7: mov ecx, dword ptr [ebp + 0x34] */
    MEM32(ebp + (-0xC)) = edx; /* 0x160D22BA: mov dword ptr [ebp - 0xc], edx */
    edx = MEM32(ebp + 0x20); /* 0x160D22BD: mov edx, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x160D22C0: mov dword ptr [ebp - 0x24], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x160D22C3: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = edx; /* 0x160D22C6: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + 0x24); /* 0x160D22C9: mov edx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160D22CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160D22CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ecx; /* 0x160D22D0: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x160D22D3: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x2C) = esi; /* 0x160D22D6: mov dword ptr [ebp + 0x2c], esi */
    /* test ecx, ecx */ /* 0x160D22D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160D2360; /* 0x160D22DB: jbe 0x160d2360 */
L_160D22E1:
    eax = MEM32(ebp + 0x28); /* 0x160D22E1: mov eax, dword ptr [ebp + 0x28] */
    edx = MEM32(ebp + 0xC); /* 0x160D22E4: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x160D22E7: sub ecx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ecx; /* 0x160D22E9: mov dword ptr [ebp - 0x18], ecx */
    ecx = esi + eax; /* 0x160D22EC: lea ecx, [esi + eax] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x160D22EF: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160D22F2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160D22F5: push edx */
    RECOMP_CALL(sub_160D3D10); /* 0x160D22F6: call 0x160d3d10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160D22FB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x34) = eax; /* 0x160D22FD: mov dword ptr [ebp + 0x34], eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebx + 0x28); /* 0x160D2300: div dword ptr [ebx + 0x28] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x40u); /* 0x160D2303: push 0x40 */
    MEM32(ebp + 0x14) = 0; /* 0x160D2305: mov dword ptr [ebp + 0x14], 0 */
    edi = edx; /* 0x160D230C: mov edi, edx */
    MEM32(ebp + 0x30) = edi; /* 0x160D230E: mov dword ptr [ebp + 0x30], edi */
    RECOMP_CALL(sub_161AE0FC); /* 0x160D2311: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160D2316: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160D2319: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160D2324; /* 0x160D231B: jne 0x160d2324 */
L_160D231D:
    eax = 0x8007000Eu; /* 0x160D231D: mov eax, 0x8007000e */
    goto L_160D2351; /* 0x160D2322: jmp 0x160d2351 */
L_160D2324:
    ecx = MEM32(ebx + 0x24); /* 0x160D2324: mov ecx, dword ptr [ebx + 0x24] */
    edx = MEM32(ecx + edi * 4); /* 0x160D2327: mov edx, dword ptr [ecx + edi*4] */
    edi = eax + 0x8; /* 0x160D232A: lea edi, [eax + 8] */
    ecx = 0xCu; /* 0x160D232D: mov ecx, 0xc */
    esi = ebp + (-0x30); /* 0x160D2332: lea esi, [ebp - 0x30] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160D2335: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0x34); /* 0x160D2337: mov ecx, dword ptr [ebp + 0x34] */
    esi = MEM32(ebp + 0x2C); /* 0x160D233A: mov esi, dword ptr [ebp + 0x2c] */
    MEM32(eax) = ecx; /* 0x160D233D: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x30); /* 0x160D233F: mov ecx, dword ptr [ebp + 0x30] */
    MEM32(eax + 0x38) = edx; /* 0x160D2342: mov dword ptr [eax + 0x38], edx */
    edx = MEM32(ebx + 0x24); /* 0x160D2345: mov edx, dword ptr [ebx + 0x24] */
    MEM32(edx + ecx * 4) = eax; /* 0x160D2348: mov dword ptr [edx + ecx*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) + 1; /* 0x160D234B: inc dword ptr [ebx + 0x2c] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x14); /* 0x160D234E: mov eax, dword ptr [ebp + 0x14] */
L_160D2351:
    /* test eax, eax */ /* 0x160D2351: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160D236F; /* 0x160D2353: jl 0x160d236f */
L_160D2355:
    ecx = MEM32(ebp + 0x10); /* 0x160D2355: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x160D2358: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x2C) = esi; /* 0x160D2359: mov dword ptr [ebp + 0x2c], esi */
    /* cmp esi, ecx */ /* 0x160D235C: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160D22E1; /* 0x160D235E: jb 0x160d22e1 */
L_160D2360:
    edx = MEM32(ebp + 0x28); /* 0x160D2360: mov edx, dword ptr [ebp + 0x28] */
    ecx = edx + ecx + (-0x1); /* 0x160D2363: lea ecx, [edx + ecx - 1] */
    /* cmp ecx, MEM32(ebx + 0x1C) */ /* 0x160D2367: cmp ecx, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160D236F; /* 0x160D236A: jbe 0x160d236f */
L_160D236C:
    MEM32(ebx + 0x1C) = ecx; /* 0x160D236C: mov dword ptr [ebx + 0x1c], ecx */
L_160D236F:
    edi = POP32_VAL(esp); /* 0x160D236F: pop edi */
    esi = POP32_VAL(esp); /* 0x160D2370: pop esi */
    esp = ebp; /* 0x160D2371: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160D2373: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 52; { RECOMP_REGS_OUT(); return; } /* 0x160D2374: ret 0x30 */
    RECOMP_REGS_OUT();
}
