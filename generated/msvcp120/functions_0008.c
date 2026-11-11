#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1100DBB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DBB7u);

L_1100DBB7:
    PUSH32(esp, ebp); /* 0x1100DBB7: push ebp */
    ebp = esp; /* 0x1100DBB8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100DBBA: push esi */
    esi = ecx; /* 0x1100DBBB: mov esi, ecx */
    PUSH32(esp, 0); /* 0x1100DBBD: push 0 */
    eax = MEM32(esi); /* 0x1100DBBF: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100DBC1: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1100DBC4: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100DBD2; /* 0x1100DBC8: je 0x1100dbd2 */
L_1100DBCA:
    PUSH32(esp, esi); /* 0x1100DBCA: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100DBCB: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DBD1: pop ecx */
L_1100DBD2:
    esi = POP32_VAL(esp); /* 0x1100DBD2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DBD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DBD4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DBD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DBD7u);

L_1100DBD7:
    PUSH32(esp, ebp); /* 0x1100DBD7: push ebp */
    ebp = esp; /* 0x1100DBD8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DBDA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DBDD: push esi */
    esi = ecx; /* 0x1100DBDE: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1100DBE0: push edi */
    /* test eax, eax */ /* 0x1100DBE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DBF2; /* 0x1100DBE3: jne 0x1100dbf2 */
L_1100DBE5:
    PUSH32(esp, 0x14u); /* 0x1100DBE5: push 0x14 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100DBE7: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DBED: pop ecx */
    /* test eax, eax */ /* 0x1100DBEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DC07; /* 0x1100DBF0: je 0x1100dc07 */
L_1100DBF2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1100DBF2: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x11004014u; /* 0x1100DBF5: mov dword ptr [eax], 0x11004014 */
    edi = eax + 0x4; /* 0x1100DBFB: lea edi, [eax + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100DBFE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100DBFF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100DC00: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100DC01: pop edi */
    esi = POP32_VAL(esp); /* 0x1100DC02: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DC03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DC04: ret 4 */
L_1100DC07:
    RECOMP_CALL(sub_1101163C); /* 0x1100DC07: call 0x1101163c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100DC0Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DC0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DC0Du);

L_1100DC0D:
    PUSH32(esp, ebp); /* 0x1100DC0D: push ebp */
    ebp = esp; /* 0x1100DC0E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100DC10: push ecx */
    eax = MEM32(ecx + 0x4); /* 0x1100DC11: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax); /* 0x1100DC14: mov edx, dword ptr [eax] */
    eax = MEM32(ecx + 0x4); /* 0x1100DC16: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1100DC19: inc edx */
    _flag_k = FK_INC;
    MEM32(eax) = edx; /* 0x1100DC1A: mov dword ptr [eax], edx */
    eax = MEM32(ecx + 0x8); /* 0x1100DC1C: mov eax, dword ptr [ecx + 8] */
    /* cmp edx, MEM32(eax) */ /* 0x1100DC1F: cmp edx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100DC43; /* 0x1100DC21: jne 0x1100dc43 */
L_1100DC23:
    eax = MEM32(ecx + 0xC); /* 0x1100DC23: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100DC26: mov dword ptr [ebp - 4], 1 */
    /* test eax, eax */ /* 0x1100DC2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DC39; /* 0x1100DC2F: je 0x1100dc39 */
L_1100DC31:
    ecx = eax + 0xE8; /* 0x1100DC31: lea ecx, [eax + 0xe8] */
    goto L_1100DC3B; /* 0x1100DC37: jmp 0x1100dc3b */
L_1100DC39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100DC39: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100DC3B:
    edx = ebp + (-0x4); /* 0x1100DC3B: lea edx, [ebp - 4] */
    RECOMP_CALL(sub_1100D22E); /* 0x1100DC3E: call 0x1100d22e */
    RECOMP_FLAGS_IN();
L_1100DC43:
    esp = ebp; /* 0x1100DC43: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100DC45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DC46: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DC49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DC49u);

L_1100DC49:
    eax = 0x11065B50u; /* 0x1100DC49: mov eax, 0x11065b50 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DC4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DC4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DC4Fu);

L_1100DC4F:
    PUSH32(esp, ebp); /* 0x1100DC4F: push ebp */
    ebp = esp; /* 0x1100DC50: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DC52: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DC55: push esi */
    esi = ecx; /* 0x1100DC56: mov esi, ecx */
    /* test eax, eax */ /* 0x1100DC58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DC69; /* 0x1100DC5A: jne 0x1100dc69 */
L_1100DC5C:
    PUSH32(esp, 0xCu); /* 0x1100DC5C: push 0xc */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100DC5E: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DC64: pop ecx */
    /* test eax, eax */ /* 0x1100DC65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DC7A; /* 0x1100DC67: je 0x1100dc7a */
L_1100DC69:
    MEM32(eax) = 0x11003C30u; /* 0x1100DC69: mov dword ptr [eax], 0x11003c30 */
    ecx = MEM32(esi + 0x4); /* 0x1100DC6F: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1100DC72: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1100DC75: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DC76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DC77: ret 4 */
L_1100DC7A:
    RECOMP_CALL(sub_1101163C); /* 0x1100DC7A: call 0x1101163c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100DC7Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DC80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DC80u);

L_1100DC80:
    PUSH32(esp, ebp); /* 0x1100DC80: push ebp */
    ebp = esp; /* 0x1100DC81: mov ebp, esp */
    ecx = MEM32(ecx + 0x4); /* 0x1100DC83: mov ecx, dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1100DC86: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x1100DC89: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax)); /* 0x1100DC8B: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x1100DC8D: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1100DC90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DC91: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DC94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DC94u);

L_1100DC94:
    eax = 0x11065284u; /* 0x1100DC94: mov eax, 0x11065284 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DC99: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DC9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DC9Au);

L_1100DC9A:
    PUSH32(esp, ebp); /* 0x1100DC9A: push ebp */
    ebp = esp; /* 0x1100DC9B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DC9D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DCA0: push esi */
    esi = ecx; /* 0x1100DCA1: mov esi, ecx */
    /* test eax, eax */ /* 0x1100DCA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DCB4; /* 0x1100DCA5: jne 0x1100dcb4 */
L_1100DCA7:
    PUSH32(esp, 0xCu); /* 0x1100DCA7: push 0xc */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100DCA9: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DCAF: pop ecx */
    /* test eax, eax */ /* 0x1100DCB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DCC5; /* 0x1100DCB2: je 0x1100dcc5 */
L_1100DCB4:
    MEM32(eax) = 0x11004154u; /* 0x1100DCB4: mov dword ptr [eax], 0x11004154 */
    ecx = MEM32(esi + 0x4); /* 0x1100DCBA: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1100DCBD: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1100DCC0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DCC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DCC2: ret 4 */
L_1100DCC5:
    RECOMP_CALL(sub_1101163C); /* 0x1100DCC5: call 0x1101163c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100DCCAu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DCCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DCCBu);

L_1100DCCB:
    PUSH32(esp, ebp); /* 0x1100DCCB: push ebp */
    ebp = esp; /* 0x1100DCCC: mov ebp, esp */
    ecx = MEM32(ecx + 0x4); /* 0x1100DCCE: mov ecx, dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1100DCD1: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x1100DCD4: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax)); /* 0x1100DCD6: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x28)); /* 0x1100DCD8: call dword ptr [edx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1100DCDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DCDC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DCDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DCDFu);

L_1100DCDF:
    eax = 0x11064C3Cu; /* 0x1100DCDF: mov eax, 0x11064c3c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DCE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DCE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DCE5u);

L_1100DCE5:
    PUSH32(esp, ebp); /* 0x1100DCE5: push ebp */
    ebp = esp; /* 0x1100DCE6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DCE8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DCEB: push esi */
    esi = ecx; /* 0x1100DCEC: mov esi, ecx */
    /* test eax, eax */ /* 0x1100DCEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DCFF; /* 0x1100DCF0: jne 0x1100dcff */
L_1100DCF2:
    PUSH32(esp, 0xCu); /* 0x1100DCF2: push 0xc */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100DCF4: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DCFA: pop ecx */
    /* test eax, eax */ /* 0x1100DCFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DD10; /* 0x1100DCFD: je 0x1100dd10 */
L_1100DCFF:
    MEM32(eax) = 0x11003C50u; /* 0x1100DCFF: mov dword ptr [eax], 0x11003c50 */
    ecx = MEM32(esi + 0x4); /* 0x1100DD05: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1100DD08: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1100DD0B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DD0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DD0D: ret 4 */
L_1100DD10:
    RECOMP_CALL(sub_1101163C); /* 0x1100DD10: call 0x1101163c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100DD15u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DD16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DD16u);

L_1100DD16:
    PUSH32(esp, 0x1Cu); /* 0x1100DD16: push 0x1c */
    eax = 0x1103C123u; /* 0x1100DD18: mov eax, 0x1103c123 */
    RECOMP_CALL(sub_1103B372); /* 0x1100DD1D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100DD22: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(ecx + 0x4); /* 0x1100DD25: mov edi, dword ptr [ecx + 4] */
    ecx = ebp + (-0x28); /* 0x1100DD28: lea ecx, [ebp - 0x28] */
    esi = MEM32(eax); /* 0x1100DD2B: mov esi, dword ptr [eax] */
    eax = edi + 0xB8; /* 0x1100DD2D: lea eax, [edi + 0xb8] */
    PUSH32(esp, eax); /* 0x1100DD33: push eax */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100DD34: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100DD3A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1100DD3E: mov ecx, edi */
    eax = MEM32(edi); /* 0x1100DD40: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1100DD42: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1100DD43: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100DD46: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100DD4A: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100DD4D: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100DD53: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DD58: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DD5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DD5Bu);

L_1100DD5B:
    eax = 0x11064450u; /* 0x1100DD5B: mov eax, 0x11064450 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DD60: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DD61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DD61u);

L_1100DD61:
    PUSH32(esp, ebp); /* 0x1100DD61: push ebp */
    ebp = esp; /* 0x1100DD62: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DD64: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DD67: push esi */
    esi = ecx; /* 0x1100DD68: mov esi, ecx */
    /* test eax, eax */ /* 0x1100DD6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DD7B; /* 0x1100DD6C: jne 0x1100dd7b */
L_1100DD6E:
    PUSH32(esp, 0xCu); /* 0x1100DD6E: push 0xc */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100DD70: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DD76: pop ecx */
    /* test eax, eax */ /* 0x1100DD77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DD8C; /* 0x1100DD79: je 0x1100dd8c */
L_1100DD7B:
    MEM32(eax) = 0x11003C9Cu; /* 0x1100DD7B: mov dword ptr [eax], 0x11003c9c */
    ecx = MEM32(esi + 0x4); /* 0x1100DD81: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1100DD84: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1100DD87: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DD88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DD89: ret 4 */
L_1100DD8C:
    RECOMP_CALL(sub_1101163C); /* 0x1100DD8C: call 0x1101163c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100DD91u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DD92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DD92u);

L_1100DD92:
    eax = 0x11065098u; /* 0x1100DD92: mov eax, 0x11065098 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DD97: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DD98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DD98u);

L_1100DD98:
    PUSH32(esp, ebp); /* 0x1100DD98: push ebp */
    ebp = esp; /* 0x1100DD99: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DD9B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DD9E: push esi */
    esi = ecx; /* 0x1100DD9F: mov esi, ecx */
    /* test eax, eax */ /* 0x1100DDA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DDB2; /* 0x1100DDA3: jne 0x1100ddb2 */
L_1100DDA5:
    PUSH32(esp, 0xCu); /* 0x1100DDA5: push 0xc */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100DDA7: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DDAD: pop ecx */
    /* test eax, eax */ /* 0x1100DDAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DDC3; /* 0x1100DDB0: je 0x1100ddc3 */
L_1100DDB2:
    MEM32(eax) = 0x11004358u; /* 0x1100DDB2: mov dword ptr [eax], 0x11004358 */
    ecx = MEM32(esi + 0x4); /* 0x1100DDB8: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1100DDBB: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1100DDBE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DDBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DDC0: ret 4 */
L_1100DDC3:
    RECOMP_CALL(sub_1101163C); /* 0x1100DDC3: call 0x1101163c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100DDC8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DDC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DDC9u);

L_1100DDC9:
    PUSH32(esp, 0x1Cu); /* 0x1100DDC9: push 0x1c */
    eax = 0x1103C123u; /* 0x1100DDCB: mov eax, 0x1103c123 */
    RECOMP_CALL(sub_1103B372); /* 0x1100DDD0: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100DDD5: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(ecx + 0x4); /* 0x1100DDD8: mov edi, dword ptr [ecx + 4] */
    ecx = ebp + (-0x28); /* 0x1100DDDB: lea ecx, [ebp - 0x28] */
    esi = MEM32(eax); /* 0x1100DDDE: mov esi, dword ptr [eax] */
    eax = edi + 0xB0; /* 0x1100DDE0: lea eax, [edi + 0xb0] */
    PUSH32(esp, eax); /* 0x1100DDE6: push eax */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100DDE7: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100DDED: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1100DDF1: mov ecx, edi */
    eax = MEM32(edi); /* 0x1100DDF3: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1100DDF5: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1100DDF6: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100DDF9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100DDFD: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100DE00: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100DE06: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DE0B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DE0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE0Eu);

L_1100DE0E:
    eax = 0x11064694u; /* 0x1100DE0E: mov eax, 0x11064694 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DE13: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DE14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE14u);

    goto L_1100DE14;
L_1100AEB4:
    PUSH32(esp, ebp); /* 0x1100AEB4: push ebp */
    ebp = esp; /* 0x1100AEB5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AEB7: push esi */
    esi = ecx; /* 0x1100AEB8: mov esi, ecx */
    RECOMP_CALL(sub_110093D8); /* 0x1100AEBA: call 0x110093d8 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AEBF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AECD; /* 0x1100AEC3: je 0x1100aecd */
L_1100AEC5:
    PUSH32(esp, esi); /* 0x1100AEC5: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AEC6: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AECC: pop ecx */
L_1100AECD:
    eax = esi; /* 0x1100AECD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AECF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AED0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AED1: ret 4 */
L_1100DE14:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xE8u; /* 0x1100DE14: sub ecx, 0xe8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1100AEB4; /* 0x1100DE1A: jmp 0x1100aeb4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DE1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE1Fu);

    goto L_1100DE1F;
L_1100C396:
    PUSH32(esp, ebp); /* 0x1100C396: push ebp */
    ebp = esp; /* 0x1100C397: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100C399: push esi */
    esi = ecx; /* 0x1100C39A: mov esi, ecx */
    RECOMP_CALL(sub_1100BB7C); /* 0x1100C39C: call 0x1100bb7c */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C3A1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C3AF; /* 0x1100C3A5: je 0x1100c3af */
L_1100C3A7:
    PUSH32(esp, esi); /* 0x1100C3A7: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C3A8: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C3AE: pop ecx */
L_1100C3AF:
    eax = esi; /* 0x1100C3AF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C3B1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C3B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C3B3: ret 4 */
L_1100DE1F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xE0u; /* 0x1100DE1F: sub ecx, 0xe0 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1100C396; /* 0x1100DE25: jmp 0x1100c396 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DE2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE2Au);

    goto L_1100DE2A;
L_1100C3B6:
    PUSH32(esp, ebp); /* 0x1100C3B6: push ebp */
    ebp = esp; /* 0x1100C3B7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100C3B9: push esi */
    esi = ecx; /* 0x1100C3BA: mov esi, ecx */
    RECOMP_CALL(sub_1100BBE8); /* 0x1100C3BC: call 0x1100bbe8 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C3C1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C3CF; /* 0x1100C3C5: je 0x1100c3cf */
L_1100C3C7:
    PUSH32(esp, esi); /* 0x1100C3C7: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C3C8: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C3CE: pop ecx */
L_1100C3CF:
    eax = esi; /* 0x1100C3CF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C3D1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C3D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C3D3: ret 4 */
L_1100DE2A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xE0u; /* 0x1100DE2A: sub ecx, 0xe0 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1100C3B6; /* 0x1100DE30: jmp 0x1100c3b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DE35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE35u);

    goto L_1100DE35;
L_1100AFF4:
    PUSH32(esp, ebp); /* 0x1100AFF4: push ebp */
    ebp = esp; /* 0x1100AFF5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AFF7: push esi */
    esi = ecx; /* 0x1100AFF8: mov esi, ecx */
    RECOMP_CALL(sub_1100A3F0); /* 0x1100AFFA: call 0x1100a3f0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AFFF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B00D; /* 0x1100B003: je 0x1100b00d */
L_1100B005:
    PUSH32(esp, esi); /* 0x1100B005: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B006: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B00C: pop ecx */
L_1100B00D:
    eax = esi; /* 0x1100B00D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B00F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B010: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B011: ret 4 */
L_1100DE35:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xE8u; /* 0x1100DE35: sub ecx, 0xe8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1100AFF4; /* 0x1100DE3B: jmp 0x1100aff4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE40u);

    goto L_1100DE40;
L_1100C30D:
    PUSH32(esp, 4); /* 0x1100C30D: push 4 */
    eax = 0x1103C6DEu; /* 0x1100C30F: mov eax, 0x1103c6de */
    RECOMP_CALL(sub_1103B372); /* 0x1100C314: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100C319: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100C31B: mov dword ptr [ebp - 0x10], edi */
    MEM32(edi) = 0x11004494u; /* 0x1100C31E: mov dword ptr [edi], 0x11004494 */
    MEM32(edi + 0xE0) = 0x11003CECu; /* 0x1100C324: mov dword ptr [edi + 0xe0], 0x11003cec */
    MEM32(ebp + (-0x4)) = 2; /* 0x1100C32E: mov dword ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1100C843); /* 0x1100C335: call 0x1100c843 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x150); /* 0x1100C33A: mov ecx, dword ptr [edi + 0x150] */
    /* cmp ecx, MEM32(edi + 0x140) */ /* 0x1100C340: cmp ecx, dword ptr [edi + 0x140] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x140));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C353; /* 0x1100C346: je 0x1100c353 */
L_1100C348:
    /* test ecx, ecx */ /* 0x1100C348: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C353; /* 0x1100C34A: je 0x1100c353 */
L_1100C34C:
    eax = MEM32(ecx); /* 0x1100C34C: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100C34E: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100C350: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100C353:
    ecx = edi + 0x174; /* 0x1100C353: lea ecx, [edi + 0x174] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100C359: mov byte ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100C35D: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x154; /* 0x1100C363: lea ecx, [edi + 0x154] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100C369: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100C36D: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100C373: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1100C377: mov ecx, edi */
    RECOMP_CALL(sub_1100BB7C); /* 0x1100C379: call 0x1100bb7c */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C37E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C38C; /* 0x1100C382: je 0x1100c38c */
L_1100C384:
    PUSH32(esp, edi); /* 0x1100C384: push edi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C385: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C38B: pop ecx */
L_1100C38C:
    eax = edi; /* 0x1100C38C: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1100C38E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C393: ret 4 */
L_1100DE40:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xE0u; /* 0x1100DE40: sub ecx, 0xe0 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1100C30D; /* 0x1100DE46: jmp 0x1100c30d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DE4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE4Bu);

    goto L_1100DE4B;
L_1100B034:
    PUSH32(esp, ebp); /* 0x1100B034: push ebp */
    ebp = esp; /* 0x1100B035: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B037: push esi */
    esi = ecx; /* 0x1100B038: mov esi, ecx */
    RECOMP_CALL(sub_1100A6DF); /* 0x1100B03A: call 0x1100a6df */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100B03F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B04D; /* 0x1100B043: je 0x1100b04d */
L_1100B045:
    PUSH32(esp, esi); /* 0x1100B045: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B046: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B04C: pop ecx */
L_1100B04D:
    eax = esi; /* 0x1100B04D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B04F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B050: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B051: ret 4 */
L_1100DE4B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xE8u; /* 0x1100DE4B: sub ecx, 0xe8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1100B034; /* 0x1100DE51: jmp 0x1100b034 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DE56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE56u);

    goto L_1100DE56;
L_1100AF31:
    PUSH32(esp, ebp); /* 0x1100AF31: push ebp */
    ebp = esp; /* 0x1100AF32: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AF34: push esi */
    esi = ecx; /* 0x1100AF35: mov esi, ecx */
    RECOMP_CALL(sub_1100984E); /* 0x1100AF37: call 0x1100984e */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AF3C: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AF4A; /* 0x1100AF40: je 0x1100af4a */
L_1100AF42:
    PUSH32(esp, esi); /* 0x1100AF42: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AF43: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AF49: pop ecx */
L_1100AF4A:
    eax = esi; /* 0x1100AF4A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AF4C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AF4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AF4E: ret 4 */
L_1100DE56:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xE8u; /* 0x1100DE56: sub ecx, 0xe8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1100AF31; /* 0x1100DE5C: jmp 0x1100af31 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DE61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE61u);

L_1100DE61:
    PUSH32(esp, ebp); /* 0x1100DE61: push ebp */
    ebp = esp; /* 0x1100DE62: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DE64: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax), 0 */ /* 0x1100DE67: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100DE70; /* 0x1100DE6A: jne 0x1100de70 */
L_1100DE6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100DE6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1100DE6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DE6F: ret  */
L_1100DE70:
    edx = eax + 0x1; /* 0x1100DE70: lea edx, [eax + 1] */
L_1100DE73:
    SET_LO8(ecx, MEM8(eax)); /* 0x1100DE73: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100DE75: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1100DE76: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DE73; /* 0x1100DE78: jne 0x1100de73 */
L_1100DE7A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1100DE7A: sub eax, edx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x1100DE7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DE7D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DE7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DE7Eu);

L_1100DE7E:
    PUSH32(esp, ebp); /* 0x1100DE7E: push ebp */
    ebp = esp; /* 0x1100DE7F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DE81: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DE84: push esi */
    esi = ecx; /* 0x1100DE85: mov esi, ecx */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x1100DE87: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1100DE8F; /* 0x1100DE8B: jb 0x1100de8f */
L_1100DE8D:
    eax = MEM32(eax); /* 0x1100DE8D: mov eax, dword ptr [eax] */
L_1100DE8F:
    MEM32(ebp + 0x8) = eax; /* 0x1100DE8F: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x1100DE92: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100DE95: push eax */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100DE96: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11001494u; /* 0x1100DE9C: mov dword ptr [esi], 0x11001494 */
    eax = esi; /* 0x1100DEA2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100DEA4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DEA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DEA6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DEA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DEA9u);

L_1100DEA9:
    PUSH32(esp, ebp); /* 0x1100DEA9: push ebp */
    ebp = esp; /* 0x1100DEAA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DEAC: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1100DEAF: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x1100DEB1: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1100DEB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DEB4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DEB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DEB7u);

L_1100DEB7:
    PUSH32(esp, ebp); /* 0x1100DEB7: push ebp */
    ebp = esp; /* 0x1100DEB8: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1100DEBA: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x1100DEBD: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x1100DEBF: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x1100DEC1: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x1100DEC3: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1100DEC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DEC7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DECA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DECAu);

L_1100DECA:
    PUSH32(esp, MEM32(ecx)); /* 0x1100DECA: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100DECC: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DED2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DED3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DED4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DED4u);

L_1100DED4:
    eax = MEM32(ecx); /* 0x1100DED4: mov eax, dword ptr [ecx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DED6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DED7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DED7u);

L_1100DED7:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1100DED7: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DEDA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DEDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DEDBu);

L_1100DEDB:
    PUSH32(esp, 0x10u); /* 0x1100DEDB: push 0x10 */
    eax = 0x1103CB8Cu; /* 0x1100DEDD: mov eax, 0x1103cb8c */
    RECOMP_CALL(sub_1103B372); /* 0x1100DEE2: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100DEE7: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100DEE9: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100DEEC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1100DEEE: push ebx */
    RECOMP_CALL(sub_1102FE81); /* 0x1100DEEF: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100DEF4: mov dword ptr [ebp - 4], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x1100DEF7: mov dword ptr [esi + 4], ebx */
    MEM8(esi + 0x8) = (uint8_t)(LO8(ebx)); /* 0x1100DEFA: mov byte ptr [esi + 8], bl */
    MEM32(esi + 0xC) = ebx; /* 0x1100DEFD: mov dword ptr [esi + 0xc], ebx */
    MEM8(esi + 0x10) = (uint8_t)(LO8(ebx)); /* 0x1100DF00: mov byte ptr [esi + 0x10], bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100DF03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = ebx; /* 0x1100DF05: mov dword ptr [esi + 0x14], ebx */
    MEM16(esi + 0x18) = (uint16_t)(LO16(eax)); /* 0x1100DF08: mov word ptr [esi + 0x18], ax */
    MEM32(esi + 0x1C) = ebx; /* 0x1100DF0C: mov dword ptr [esi + 0x1c], ebx */
    MEM16(esi + 0x20) = (uint16_t)(LO16(eax)); /* 0x1100DF0F: mov word ptr [esi + 0x20], ax */
    MEM32(esi + 0x24) = ebx; /* 0x1100DF13: mov dword ptr [esi + 0x24], ebx */
    MEM8(esi + 0x28) = (uint8_t)(LO8(ebx)); /* 0x1100DF16: mov byte ptr [esi + 0x28], bl */
    MEM32(esi + 0x2C) = ebx; /* 0x1100DF19: mov dword ptr [esi + 0x2c], ebx */
    MEM8(esi + 0x30) = (uint8_t)(LO8(ebx)); /* 0x1100DF1C: mov byte ptr [esi + 0x30], bl */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x1100DF1F: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1100DF23: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100DF51; /* 0x1100DF26: jne 0x1100df51 */
L_1100DF28:
    eax = ebp + 0x8; /* 0x1100DF28: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x110045F0u; /* 0x1100DF2B: mov dword ptr [ebp + 8], 0x110045f0 */
    PUSH32(esp, eax); /* 0x1100DF32: push eax */
    ecx = ebp + (-0x1C); /* 0x1100DF33: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100DF36: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045658u); /* 0x1100DF3C: push 0x11045658 */
    eax = ebp + (-0x1C); /* 0x1100DF41: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x11001494u; /* 0x1100DF44: mov dword ptr [ebp - 0x1c], 0x11001494 */
    PUSH32(esp, eax); /* 0x1100DF4B: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100DF4C: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100DF51:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100DF51: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DF54: push esi */
    RECOMP_CALL(sub_110304F7); /* 0x1100DF55: call 0x110304f7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DF5A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100DF5B: pop ecx */
    eax = esi; /* 0x1100DF5C: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100DF5E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DF63: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DF66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DF66u);

L_1100DF66:
    PUSH32(esp, 0x10u); /* 0x1100DF66: push 0x10 */
    eax = 0x1103CB8Cu; /* 0x1100DF68: mov eax, 0x1103cb8c */
    RECOMP_CALL(sub_1103B372); /* 0x1100DF6D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100DF72: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100DF74: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100DF77: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1100DF79: push ebx */
    RECOMP_CALL(sub_1102FE81); /* 0x1100DF7A: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100DF7F: mov dword ptr [ebp - 4], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x1100DF82: mov dword ptr [esi + 4], ebx */
    MEM8(esi + 0x8) = (uint8_t)(LO8(ebx)); /* 0x1100DF85: mov byte ptr [esi + 8], bl */
    MEM32(esi + 0xC) = ebx; /* 0x1100DF88: mov dword ptr [esi + 0xc], ebx */
    MEM8(esi + 0x10) = (uint8_t)(LO8(ebx)); /* 0x1100DF8B: mov byte ptr [esi + 0x10], bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100DF8E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = ebx; /* 0x1100DF90: mov dword ptr [esi + 0x14], ebx */
    MEM16(esi + 0x18) = (uint16_t)(LO16(eax)); /* 0x1100DF93: mov word ptr [esi + 0x18], ax */
    MEM32(esi + 0x1C) = ebx; /* 0x1100DF97: mov dword ptr [esi + 0x1c], ebx */
    MEM16(esi + 0x20) = (uint16_t)(LO16(eax)); /* 0x1100DF9A: mov word ptr [esi + 0x20], ax */
    MEM32(esi + 0x24) = ebx; /* 0x1100DF9E: mov dword ptr [esi + 0x24], ebx */
    MEM8(esi + 0x28) = (uint8_t)(LO8(ebx)); /* 0x1100DFA1: mov byte ptr [esi + 0x28], bl */
    MEM32(esi + 0x2C) = ebx; /* 0x1100DFA4: mov dword ptr [esi + 0x2c], ebx */
    MEM8(esi + 0x30) = (uint8_t)(LO8(ebx)); /* 0x1100DFA7: mov byte ptr [esi + 0x30], bl */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x1100DFAA: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1100DFAE: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100DFDC; /* 0x1100DFB1: jne 0x1100dfdc */
L_1100DFB3:
    eax = ebp + 0xC; /* 0x1100DFB3: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x110045F0u; /* 0x1100DFB6: mov dword ptr [ebp + 0xc], 0x110045f0 */
    PUSH32(esp, eax); /* 0x1100DFBD: push eax */
    ecx = ebp + (-0x1C); /* 0x1100DFBE: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100DFC1: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045658u); /* 0x1100DFC7: push 0x11045658 */
    eax = ebp + (-0x1C); /* 0x1100DFCC: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x11001494u; /* 0x1100DFCF: mov dword ptr [ebp - 0x1c], 0x11001494 */
    PUSH32(esp, eax); /* 0x1100DFD6: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100DFD7: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100DFDC:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100DFDC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100DFDF: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DFE2: push esi */
    RECOMP_CALL(sub_1102C635); /* 0x1100DFE3: call 0x1102c635 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100DFE8: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1100DFEB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100DFED: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100DFF2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100DFF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DFF5u);

L_1100DFF5:
    PUSH32(esp, ebx); /* 0x1100DFF5: push ebx */
    PUSH32(esp, esi); /* 0x1100DFF6: push esi */
    esi = ecx; /* 0x1100DFF7: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1100DFF9: push edi */
    PUSH32(esp, esi); /* 0x1100DFFA: push esi */
    RECOMP_CALL(sub_11030544); /* 0x1100DFFB: call 0x11030544 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x2C), 0 */ /* 0x1100E000: cmp dword ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x11069304); /* 0x1100E004: mov edi, dword ptr [0x11069304] */
    ecx = POP32_VAL(esp); /* 0x1100E00A: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E013; /* 0x1100E00B: je 0x1100e013 */
L_1100E00D:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x1100E00D: push dword ptr [esi + 0x2c] */
    RECOMP_ICALL(edi); /* 0x1100E010: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E012: pop ecx */
L_1100E013:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100E013: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x2C) = ebx; /* 0x1100E015: mov dword ptr [esi + 0x2c], ebx */
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x1100E018: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E023; /* 0x1100E01B: je 0x1100e023 */
L_1100E01D:
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x1100E01D: push dword ptr [esi + 0x24] */
    RECOMP_ICALL(edi); /* 0x1100E020: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E022: pop ecx */
L_1100E023:
    MEM32(esi + 0x24) = ebx; /* 0x1100E023: mov dword ptr [esi + 0x24], ebx */
    /* cmp MEM32(esi + 0x1C), ebx */ /* 0x1100E026: cmp dword ptr [esi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E031; /* 0x1100E029: je 0x1100e031 */
L_1100E02B:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1100E02B: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(edi); /* 0x1100E02E: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E030: pop ecx */
L_1100E031:
    MEM32(esi + 0x1C) = ebx; /* 0x1100E031: mov dword ptr [esi + 0x1c], ebx */
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x1100E034: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E03F; /* 0x1100E037: je 0x1100e03f */
L_1100E039:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1100E039: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(edi); /* 0x1100E03C: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E03E: pop ecx */
L_1100E03F:
    MEM32(esi + 0x14) = ebx; /* 0x1100E03F: mov dword ptr [esi + 0x14], ebx */
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x1100E042: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E04D; /* 0x1100E045: je 0x1100e04d */
L_1100E047:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1100E047: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(edi); /* 0x1100E04A: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E04C: pop ecx */
L_1100E04D:
    MEM32(esi + 0xC) = ebx; /* 0x1100E04D: mov dword ptr [esi + 0xc], ebx */
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x1100E050: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E05B; /* 0x1100E053: je 0x1100e05b */
L_1100E055:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1100E055: push dword ptr [esi + 4] */
    RECOMP_ICALL(edi); /* 0x1100E058: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E05A: pop ecx */
L_1100E05B:
    edi = POP32_VAL(esp); /* 0x1100E05B: pop edi */
    MEM32(esi + 0x4) = ebx; /* 0x1100E05C: mov dword ptr [esi + 4], ebx */
    ecx = esi; /* 0x1100E05F: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x1100E061: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100E062: pop ebx */
    goto L_1102FEC6; /* 0x1100E063: jmp 0x1102fec6 */
L_1102FEC6:
    eax = MEM32(ecx); /* 0x1102FEC6: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x1102FEC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FED5; /* 0x1102FECA: jne 0x1102fed5 */
L_1102FECC:
    PUSH32(esp, 0xCu); /* 0x1102FECC: push 0xc */
    RECOMP_CALL(sub_1103B864); /* 0x1102FECE: call 0x1103b864 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FED3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FED4: ret  */
L_1102FED5:
    /* cmp eax, 4 */ /* 0x1102FED5: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102FEE9; /* 0x1102FED8: jge 0x1102fee9 */
L_1102FEDA:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18u); /* 0x1102FEDA: imul eax, eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11068A08u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11068A08u; /* 0x1102FEDD: add eax, 0x11068a08 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102FEE2: push eax */
    RECOMP_CALL(sub_11013628); /* 0x1102FEE3: call 0x11013628 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FEE8: pop ecx */
L_1102FEE9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FEE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E068u);

L_1100E068:
    PUSH32(esp, ebp); /* 0x1100E068: push ebp */
    ebp = esp; /* 0x1100E069: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100E06B: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100E06E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E089; /* 0x1100E072: je 0x1100e089 */
L_1100E074:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100E074: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100E077: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1100E07A: push ecx */
    RECOMP_CALL(sub_1102C597); /* 0x1100E07B: call 0x1102c597 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100E080: add esp, 0xc */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1100E083: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E085: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100E086: ret 8 */
L_1100E089:
    eax = ebp + 0xC; /* 0x1100E089: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x110045F0u; /* 0x1100E08C: mov dword ptr [ebp + 0xc], 0x110045f0 */
    PUSH32(esp, eax); /* 0x1100E093: push eax */
    ecx = ebp + (-0xC); /* 0x1100E094: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100E097: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045658u); /* 0x1100E09D: push 0x11045658 */
    eax = ebp + (-0xC); /* 0x1100E0A2: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001494u; /* 0x1100E0A5: mov dword ptr [ebp - 0xc], 0x11001494 */
    PUSH32(esp, eax); /* 0x1100E0AC: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100E0AD: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100E0B2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100E0B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E0B3u);

L_1100E0B3:
    eax = MEM32(ecx + 0x2C); /* 0x1100E0B3: mov eax, dword ptr [ecx + 0x2c] */
    /* test eax, eax */ /* 0x1100E0B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E0BD; /* 0x1100E0B8: jne 0x1100e0bd */
L_1100E0BA:
    eax = ecx + 0x30; /* 0x1100E0BA: lea eax, [ecx + 0x30] */
L_1100E0BD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E0BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E0BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E0BEu);

L_1100E0BE:
    PUSH32(esp, ebp); /* 0x1100E0BE: push ebp */
    ebp = esp; /* 0x1100E0BF: mov ebp, esp */
    RECOMP_CALL(sub_1102D8EF); /* 0x1100E0C1: call 0x1102d8ef */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100E0C6: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1100E0C9: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x1100E0CB: mov eax, ecx */
    MEM32(ecx + 0x4) = edx; /* 0x1100E0CD: mov dword ptr [ecx + 4], edx */
    ebp = POP32_VAL(esp); /* 0x1100E0D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E0D1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E0D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E0D4u);

L_1100E0D4:
    PUSH32(esp, ebp); /* 0x1100E0D4: push ebp */
    ebp = esp; /* 0x1100E0D5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100E0D7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x1100E0DA: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1100E0DD: push esi */
    PUSH32(esp, edi); /* 0x1100E0DE: push edi */
    PUSH32(esp, eax); /* 0x1100E0DF: push eax */
    RECOMP_CALL(sub_1102FFD7); /* 0x1100E0E0: call 0x1102ffd7 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100E0E5: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x1100E0E7: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x1100E0EA: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1100E0EC: pop ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100E0ED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100E0EE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100E0EF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100E0F0: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100E0F1: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E0F2: pop esi */
    esp = ebp; /* 0x1100E0F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E0F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E0F6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E0F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E0F9u);

L_1100E0F9:
    PUSH32(esp, ebp); /* 0x1100E0F9: push ebp */
    ebp = esp; /* 0x1100E0FA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1100E0FC: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = ebp + (-0x2C); /* 0x1100E0FF: lea eax, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1100E102: push esi */
    PUSH32(esp, edi); /* 0x1100E103: push edi */
    PUSH32(esp, eax); /* 0x1100E104: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x1100E105: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E10A: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1100E10B: push 0xb */
    esi = eax; /* 0x1100E10D: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x1100E10F: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1100E112: pop ecx */
    edi = eax; /* 0x1100E113: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1100E115: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100E117: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E118: pop esi */
    esp = ebp; /* 0x1100E119: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E11B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E11C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E11F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E11Fu);

L_1100E11F:
    { _itail_tgt = (uint32_t)(MEM32(0x110692D4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100E125(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E125u);

L_1100E125:
    PUSH32(esp, ebp); /* 0x1100E125: push ebp */
    ebp = esp; /* 0x1100E126: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x110692C8)); /* 0x1100E128: call dword ptr [0x110692c8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100E12E: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1100E131: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x1100E133: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1100E135: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E136: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E139(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E139u);

L_1100E139:
    PUSH32(esp, esi); /* 0x1100E139: push esi */
    PUSH32(esp, edi); /* 0x1100E13A: push edi */
    esi = ecx; /* 0x1100E13B: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692D0)); /* 0x1100E13D: call dword ptr [0x110692d0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100E143: mov edi, eax */
    /* test edi, edi */ /* 0x1100E145: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E15A; /* 0x1100E147: je 0x1100e15a */
L_1100E149:
    PUSH32(esp, edi); /* 0x1100E149: push edi */
    ecx = esi + 0x4; /* 0x1100E14A: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_11010213); /* 0x1100E14D: call 0x11010213 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1100E152: push edi */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100E153: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E159: pop ecx */
L_1100E15A:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1100E15A: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E16C; /* 0x1100E15E: je 0x1100e16c */
L_1100E160:
    eax = MEM32(esi + 0x4); /* 0x1100E160: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1100E163: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E171; /* 0x1100E165: jne 0x1100e171 */
L_1100E167:
    eax = esi + 0x8; /* 0x1100E167: lea eax, [esi + 8] */
    goto L_1100E171; /* 0x1100E16A: jmp 0x1100e171 */
L_1100E16C:
    eax = 0x11004600u; /* 0x1100E16C: mov eax, 0x11004600 */
L_1100E171:
    edi = POP32_VAL(esp); /* 0x1100E171: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E172: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E173: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E174(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E174u);

L_1100E174:
    PUSH32(esp, esi); /* 0x1100E174: push esi */
    PUSH32(esp, edi); /* 0x1100E175: push edi */
    esi = ecx; /* 0x1100E176: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692CC)); /* 0x1100E178: call dword ptr [0x110692cc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100E17E: mov edi, eax */
    /* test edi, edi */ /* 0x1100E180: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E195; /* 0x1100E182: je 0x1100e195 */
L_1100E184:
    PUSH32(esp, edi); /* 0x1100E184: push edi */
    ecx = esi + 0xC; /* 0x1100E185: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_11010213); /* 0x1100E188: call 0x11010213 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1100E18D: push edi */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100E18E: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E194: pop ecx */
L_1100E195:
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x1100E195: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E1A7; /* 0x1100E199: je 0x1100e1a7 */
L_1100E19B:
    eax = MEM32(esi + 0xC); /* 0x1100E19B: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x1100E19E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E1AC; /* 0x1100E1A0: jne 0x1100e1ac */
L_1100E1A2:
    eax = esi + 0x10; /* 0x1100E1A2: lea eax, [esi + 0x10] */
    goto L_1100E1AC; /* 0x1100E1A5: jmp 0x1100e1ac */
L_1100E1A7:
    eax = 0x11004658u; /* 0x1100E1A7: mov eax, 0x11004658 */
L_1100E1AC:
    edi = POP32_VAL(esp); /* 0x1100E1AC: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E1AD: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E1AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E1AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E1AFu);

L_1100E1AF:
    eax = 0x110046E0u; /* 0x1100E1AF: mov eax, 0x110046e0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E1B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E1B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E1B5u);

L_1100E1B5:
    eax = 0x110046E8u; /* 0x1100E1B5: mov eax, 0x110046e8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E1BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E1BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E1BBu);

L_1100E1BB:
    goto L_1103014C; /* 0x1100E1BB: jmp 0x1103014c */
L_1103014C:
    PUSH32(esp, ebp); /* 0x1103014C: push ebp */
    ebp = esp; /* 0x1103014D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103014F: push ecx */
    PUSH32(esp, ebx); /* 0x11030150: push ebx */
    PUSH32(esp, 2); /* 0x11030151: push 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11030153: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11030155: pop ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x11030156: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x11030159: lea eax, [ebp - 4] */
    PUSH32(esp, ebx); /* 0x1103015C: push ebx */
    PUSH32(esp, eax); /* 0x1103015D: push eax */
    PUSH32(esp, 0x22u); /* 0x1103015E: push 0x22 */
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x11030160: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x11030166: push dword ptr [eax + 0x14] */
    RECOMP_ICALL(MEM32(0x1106925C)); /* 0x11030169: call dword ptr [0x1106925c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103016F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x4)), 0x30u */ /* 0x11030172: cmp word ptr [ebp - 4], 0x30 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0x30u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030191; /* 0x11030177: je 0x11030191 */
L_11030179:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11030179: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x4)), 0x31u */ /* 0x1103017B: cmp word ptr [ebp - 4], 0x31 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0x31u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030185; /* 0x11030180: jne 0x11030185 */
L_11030182:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11030182: inc ebx */
    _flag_k = FK_INC;
    goto L_11030191; /* 0x11030183: jmp 0x11030191 */
L_11030185:
    /* cmp MEM16(ebp + (-0x4)), 0x32u */ /* 0x11030185: cmp word ptr [ebp - 4], 0x32 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0x32u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1103018A: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1103018D: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1103018E: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11030191:
    eax = ebx; /* 0x11030191: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x11030193: pop ebx */
    esp = ebp; /* 0x11030194: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11030196: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030197: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E1C0u);

L_1100E1C0:
    PUSH32(esp, ebp); /* 0x1100E1C0: push ebp */
    ebp = esp; /* 0x1100E1C1: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x110692BC)); /* 0x1100E1C3: call dword ptr [0x110692bc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100E1C9: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1100E1CC: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x1100E1CE: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1100E1D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E1D1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E1D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E1D4u);

L_1100E1D4:
    PUSH32(esp, esi); /* 0x1100E1D4: push esi */
    PUSH32(esp, edi); /* 0x1100E1D5: push edi */
    esi = ecx; /* 0x1100E1D6: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692C4)); /* 0x1100E1D8: call dword ptr [0x110692c4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100E1DE: mov edi, eax */
    /* test edi, edi */ /* 0x1100E1E0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E1F5; /* 0x1100E1E2: je 0x1100e1f5 */
L_1100E1E4:
    PUSH32(esp, edi); /* 0x1100E1E4: push edi */
    ecx = esi + 0x14; /* 0x1100E1E5: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_1101029D); /* 0x1100E1E8: call 0x1101029d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1100E1ED: push edi */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100E1EE: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E1F4: pop ecx */
L_1100E1F5:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x1100E1F5: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E207; /* 0x1100E1F9: je 0x1100e207 */
L_1100E1FB:
    eax = MEM32(esi + 0x14); /* 0x1100E1FB: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x1100E1FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E20C; /* 0x1100E200: jne 0x1100e20c */
L_1100E202:
    eax = esi + 0x18; /* 0x1100E202: lea eax, [esi + 0x18] */
    goto L_1100E20C; /* 0x1100E205: jmp 0x1100e20c */
L_1100E207:
    eax = 0x110046F0u; /* 0x1100E207: mov eax, 0x110046f0 */
L_1100E20C:
    edi = POP32_VAL(esp); /* 0x1100E20C: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E20D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E20E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E20F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E20Fu);

L_1100E20F:
    PUSH32(esp, esi); /* 0x1100E20F: push esi */
    PUSH32(esp, edi); /* 0x1100E210: push edi */
    esi = ecx; /* 0x1100E211: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692C0)); /* 0x1100E213: call dword ptr [0x110692c0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100E219: mov edi, eax */
    /* test edi, edi */ /* 0x1100E21B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E230; /* 0x1100E21D: je 0x1100e230 */
L_1100E21F:
    PUSH32(esp, edi); /* 0x1100E21F: push edi */
    ecx = esi + 0x1C; /* 0x1100E220: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_1101029D); /* 0x1100E223: call 0x1101029d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1100E228: push edi */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100E229: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E22F: pop ecx */
L_1100E230:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x1100E230: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E242; /* 0x1100E234: je 0x1100e242 */
L_1100E236:
    eax = MEM32(esi + 0x1C); /* 0x1100E236: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x1100E239: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E247; /* 0x1100E23B: jne 0x1100e247 */
L_1100E23D:
    eax = esi + 0x20; /* 0x1100E23D: lea eax, [esi + 0x20] */
    goto L_1100E247; /* 0x1100E240: jmp 0x1100e247 */
L_1100E242:
    eax = 0x110047A0u; /* 0x1100E242: mov eax, 0x110047a0 */
L_1100E247:
    edi = POP32_VAL(esp); /* 0x1100E247: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E248: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E249: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E24A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E24Au);

L_1100E24A:
    PUSH32(esp, 0x110048B0u); /* 0x1100E24A: push 0x110048b0 */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100E24F: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E254: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E255(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E255u);

L_1100E255:
    PUSH32(esp, ebp); /* 0x1100E255: push ebp */
    ebp = esp; /* 0x1100E256: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100E258: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100E259: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100E25C: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692E4)); /* 0x1100E25E: call dword ptr [0x110692e4] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11001494u; /* 0x1100E264: mov dword ptr [esi], 0x11001494 */
    eax = esi; /* 0x1100E26A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100E26C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100E26D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E26E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E271(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E271u);

L_1100E271:
    MEM32(ecx) = 0x110014CCu; /* 0x1100E271: mov dword ptr [ecx], 0x110014cc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E277: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E278(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E278u);

L_1100E278:
    MEM32(ecx) = 0x110014CCu; /* 0x1100E278: mov dword ptr [ecx], 0x110014cc */
    eax = ecx; /* 0x1100E27E: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E280: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E281(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E281u);

L_1100E281:
    MEM32(ecx) = 0x110014CCu; /* 0x1100E281: mov dword ptr [ecx], 0x110014cc */
    eax = ecx; /* 0x1100E287: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E289: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E28C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E28Cu);

L_1100E28C:
    PUSH32(esp, ebp); /* 0x1100E28C: push ebp */
    ebp = esp; /* 0x1100E28D: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1100E28F: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100E293: push esi */
    esi = ecx; /* 0x1100E294: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E2BE; /* 0x1100E296: je 0x1100e2be */
L_1100E298:
    PUSH32(esp, edi); /* 0x1100E298: push edi */
    PUSH32(esp, 0x1100E271u); /* 0x1100E299: push 0x1100e271 */
    edi = esi + (-0x4); /* 0x1100E29E: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1100E2A1: push dword ptr [edi] */
    PUSH32(esp, 4); /* 0x1100E2A3: push 4 */
    PUSH32(esp, esi); /* 0x1100E2A5: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100E2A6: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100E2AB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E2B9; /* 0x1100E2AF: je 0x1100e2b9 */
L_1100E2B1:
    PUSH32(esp, edi); /* 0x1100E2B1: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100E2B2: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E2B8: pop ecx */
L_1100E2B9:
    eax = edi; /* 0x1100E2B9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100E2BB: pop edi */
    goto L_1100E2D4; /* 0x1100E2BC: jmp 0x1100e2d4 */
L_1100E2BE:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100E2BE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1100E2C2: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E2D2; /* 0x1100E2C8: je 0x1100e2d2 */
L_1100E2CA:
    PUSH32(esp, esi); /* 0x1100E2CA: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100E2CB: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E2D1: pop ecx */
L_1100E2D2:
    eax = esi; /* 0x1100E2D2: mov eax, esi */
L_1100E2D4:
    esi = POP32_VAL(esp); /* 0x1100E2D4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100E2D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E2D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E2D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E2D9u);

L_1100E2D9:
    PUSH32(esp, ebp); /* 0x1100E2D9: push ebp */
    ebp = esp; /* 0x1100E2DA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100E2DC: push ecx */
    PUSH32(esp, esi); /* 0x1100E2DD: push esi */
    esi = ecx; /* 0x1100E2DE: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x1100E2E0: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100E309; /* 0x1100E2E3: jne 0x1100e309 */
L_1100E2E5:
    PUSH32(esp, 0); /* 0x1100E2E5: push 0 */
    ecx = ebp + (-0x4); /* 0x1100E2E7: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FE81); /* 0x1100E2EA: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0 */ /* 0x1100E2EF: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100E301; /* 0x1100E2F2: jne 0x1100e301 */
L_1100E2F4:
    eax = MEM32(0x11068A6C); /* 0x1100E2F4: mov eax, dword ptr [0x11068a6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100E2F9: inc eax */
    _flag_k = FK_INC;
    MEM32(0x11068A6C) = eax; /* 0x1100E2FA: mov dword ptr [0x11068a6c], eax */
    MEM32(esi) = eax; /* 0x1100E2FF: mov dword ptr [esi], eax */
L_1100E301:
    ecx = ebp + (-0x4); /* 0x1100E301: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1100E304: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
L_1100E309:
    eax = MEM32(esi); /* 0x1100E309: mov eax, dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1100E30B: pop esi */
    esp = ebp; /* 0x1100E30C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E30E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E30F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E310u);

L_1100E310:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1100E310: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E313: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E314(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E314u);

L_1100E314:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100E314: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1100E316: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100E319: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1100E31A: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E31E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E31F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E31Fu);

L_1100E31F:
    edx = ecx + 0x4; /* 0x1100E31F: lea edx, [ecx + 4] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1100E322: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x1100E325: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1100E329: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1100E32A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100E32C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x1100E32E: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1100E330: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E332: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E333(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E333u);

L_1100E333:
    PUSH32(esp, ebp); /* 0x1100E333: push ebp */
    ebp = esp; /* 0x1100E334: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100E336: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x1100E339: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x1100E33C: mov eax, ecx */
    MEM32(ecx) = 0x110014DCu; /* 0x1100E33E: mov dword ptr [ecx], 0x110014dc */
    ebp = POP32_VAL(esp); /* 0x1100E344: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E345: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E348(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E348u);

L_1100E348:
    PUSH32(esp, esi); /* 0x1100E348: push esi */
    esi = ecx; /* 0x1100E349: mov esi, ecx */
    PUSH32(esp, esi); /* 0x1100E34B: push esi */
    MEM32(esi) = 0x110014ECu; /* 0x1100E34C: mov dword ptr [esi], 0x110014ec */
    RECOMP_CALL(sub_1103049D); /* 0x1100E352: call 0x1103049d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x1100E357: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1100E35B: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E368; /* 0x1100E35C: je 0x1100e368 */
L_1100E35E:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1100E35E: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100E361: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E367: pop ecx */
L_1100E368:
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x1100E368: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x110014CCu; /* 0x1100E36C: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x1100E372: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E373: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E374(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E374u);

L_1100E374:
    PUSH32(esp, ebp); /* 0x1100E374: push ebp */
    ebp = esp; /* 0x1100E375: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x1100E377: mov al, byte ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1100E37A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1100E37C: push esi */
    esi = ecx; /* 0x1100E37D: mov esi, ecx */
    PUSH32(esp, 0x110048B4u); /* 0x1100E37F: push 0x110048b4 */
    ecx = esi + 0x18; /* 0x1100E384: lea ecx, [esi + 0x18] */
    MEM32(esi + 0x4) = 1; /* 0x1100E387: mov dword ptr [esi + 4], 1 */
    MEM32(esi) = 0x110014ECu; /* 0x1100E38E: mov dword ptr [esi], 0x110014ec */
    MEM32(esi + 0x8) = edx; /* 0x1100E394: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x1100E397: mov dword ptr [esi + 0xc], edx */
    MEM32(esi + 0x10) = edx; /* 0x1100E39A: mov dword ptr [esi + 0x10], edx */
    MEM8(esi + 0x14) = (uint8_t)(LO8(eax)); /* 0x1100E39D: mov byte ptr [esi + 0x14], al */
    MEM32(ecx) = edx; /* 0x1100E3A0: mov dword ptr [ecx], edx */
    MEM8(ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1100E3A2: mov byte ptr [ecx + 4], dl */
    RECOMP_CALL(sub_11010213); /* 0x1100E3A5: call 0x11010213 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100E3AA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100E3AC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100E3AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E3AE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E3B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E3B1u);

L_1100E3B1:
    PUSH32(esp, 4); /* 0x1100E3B1: push 4 */
    eax = 0x1103CBBAu; /* 0x1100E3B3: mov eax, 0x1103cbba */
    RECOMP_CALL(sub_1103B372); /* 0x1100E3B8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100E3BD: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100E3BF: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi + 0x4) = 1; /* 0x1100E3C2: mov dword ptr [esi + 4], 1 */
    edi = MEM32(ebp + 0x8); /* 0x1100E3C9: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1100E3CC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1100E3CE: mov dword ptr [ebp - 4], edx */
    MEM32(esi) = 0x110014ECu; /* 0x1100E3D1: mov dword ptr [esi], 0x110014ec */
    MEM32(esi + 0x8) = edx; /* 0x1100E3D7: mov dword ptr [esi + 8], edx */
    eax = MEM32(edi + 0xC); /* 0x1100E3DA: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x1100E3DD: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edi + 0x10); /* 0x1100E3E0: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x1100E3E3: mov dword ptr [esi + 0x10], eax */
    SET_LO8(eax, MEM8(edi + 0x14)); /* 0x1100E3E6: mov al, byte ptr [edi + 0x14] */
    MEM8(esi + 0x14) = (uint8_t)(LO8(eax)); /* 0x1100E3E9: mov byte ptr [esi + 0x14], al */
    eax = MEM32(edi + 0x18); /* 0x1100E3EC: mov eax, dword ptr [edi + 0x18] */
    /* test eax, eax */ /* 0x1100E3EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E3F6; /* 0x1100E3F1: jne 0x1100e3f6 */
L_1100E3F3:
    eax = edi + 0x1C; /* 0x1100E3F3: lea eax, [edi + 0x1c] */
L_1100E3F6:
    ecx = esi + 0x18; /* 0x1100E3F6: lea ecx, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x1100E3F9: push eax */
    MEM32(ecx) = edx; /* 0x1100E3FA: mov dword ptr [ecx], edx */
    MEM8(ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1100E3FC: mov byte ptr [ecx + 4], dl */
    RECOMP_CALL(sub_11010213); /* 0x1100E3FF: call 0x11010213 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1100E404: push edi */
    PUSH32(esp, esi); /* 0x1100E405: push esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100E406: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1102C4F3); /* 0x1100E40A: call 0x1102c4f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E40F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100E410: pop ecx */
    eax = esi; /* 0x1100E411: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100E413: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E418: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E41B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E41Bu);

L_1100E41B:
    PUSH32(esp, ebp); /* 0x1100E41B: push ebp */
    ebp = esp; /* 0x1100E41C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100E41E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100E421: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1100E424: push ecx */
    RECOMP_CALL(sub_1102C459); /* 0x1100E425: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100E42A: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1100E42D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100E42E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100E431(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E431u);

L_1100E431:
    ecx = MEM32(ecx); /* 0x1100E431: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x1100E433: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E448; /* 0x1100E435: je 0x1100e448 */
L_1100E437:
    eax = MEM32(ecx); /* 0x1100E437: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100E439: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100E43C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E448; /* 0x1100E43E: je 0x1100e448 */
L_1100E440:
    edx = MEM32(eax); /* 0x1100E440: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1100E442: mov ecx, eax */
    PUSH32(esp, 1); /* 0x1100E444: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x1100E446: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_1100E448:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E448: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E449(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E449u);

L_1100E449:
    PUSH32(esp, ebp); /* 0x1100E449: push ebp */
    ebp = esp; /* 0x1100E44A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100E44C: push esi */
    PUSH32(esp, edi); /* 0x1100E44D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100E44E: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100E451: mov esi, ecx */
    ecx = MEM32(esi); /* 0x1100E453: mov ecx, dword ptr [esi] */
    /* cmp ecx, MEM32(edi) */ /* 0x1100E455: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E473; /* 0x1100E457: je 0x1100e473 */
L_1100E459:
    eax = MEM32(ecx); /* 0x1100E459: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100E45B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100E45E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E46A; /* 0x1100E460: je 0x1100e46a */
L_1100E462:
    edx = MEM32(eax); /* 0x1100E462: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1100E464: mov ecx, eax */
    PUSH32(esp, 1); /* 0x1100E466: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x1100E468: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_1100E46A:
    ecx = MEM32(edi); /* 0x1100E46A: mov ecx, dword ptr [edi] */
    MEM32(esi) = ecx; /* 0x1100E46C: mov dword ptr [esi], ecx */
    eax = MEM32(ecx); /* 0x1100E46E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100E470: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100E473:
    edi = POP32_VAL(esp); /* 0x1100E473: pop edi */
    eax = esi; /* 0x1100E474: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100E476: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100E477: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E478: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E47B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E47Bu);

L_1100E47B:
    ecx = MEM32(ecx); /* 0x1100E47B: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x1100E47D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E487; /* 0x1100E47F: jne 0x1100e487 */
L_1100E481:
    eax = 0x110048B6u; /* 0x1100E481: mov eax, 0x110048b6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E486: ret  */
L_1100E487:
    eax = MEM32(ecx + 0x18); /* 0x1100E487: mov eax, dword ptr [ecx + 0x18] */
    /* test eax, eax */ /* 0x1100E48A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E491; /* 0x1100E48C: jne 0x1100e491 */
L_1100E48E:
    eax = ecx + 0x1C; /* 0x1100E48E: lea eax, [ecx + 0x1c] */
L_1100E491:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E491: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E492(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E492u);

L_1100E492:
    PUSH32(esp, ebp); /* 0x1100E492: push ebp */
    ebp = esp; /* 0x1100E493: mov ebp, esp */
    ecx = MEM32(ecx); /* 0x1100E495: mov ecx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100E497: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100E498: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1100E49B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100E49C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ecx + 0xC) */ /* 0x1100E49E: cmp esi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100E4AB; /* 0x1100E4A1: jae 0x1100e4ab */
L_1100E4A3:
    eax = MEM32(ecx + 0x8); /* 0x1100E4A3: mov eax, dword ptr [ecx + 8] */
    eax = MEM32(eax + esi * 4); /* 0x1100E4A6: mov eax, dword ptr [eax + esi*4] */
    goto L_1100E4AD; /* 0x1100E4A9: jmp 0x1100e4ad */
L_1100E4AB:
    eax = edi; /* 0x1100E4AB: mov eax, edi */
L_1100E4AD:
    /* test eax, eax */ /* 0x1100E4AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E4C8; /* 0x1100E4AF: jne 0x1100e4c8 */
L_1100E4B1:
    /* cmp MEM8(ecx + 0x14), LO8(eax) */ /* 0x1100E4B1: cmp byte ptr [ecx + 0x14], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x14)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E4C8; /* 0x1100E4B4: je 0x1100e4c8 */
L_1100E4B6:
    RECOMP_CALL(sub_1103041B); /* 0x1100E4B6: call 0x1103041b */
    RECOMP_FLAGS_IN();
    /* cmp esi, MEM32(eax + 0xC) */ /* 0x1100E4BB: cmp esi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100E4C6; /* 0x1100E4BE: jae 0x1100e4c6 */
L_1100E4C0:
    eax = MEM32(eax + 0x8); /* 0x1100E4C0: mov eax, dword ptr [eax + 8] */
    edi = MEM32(eax + esi * 4); /* 0x1100E4C3: mov edi, dword ptr [eax + esi*4] */
L_1100E4C6:
    eax = edi; /* 0x1100E4C6: mov eax, edi */
L_1100E4C8:
    edi = POP32_VAL(esp); /* 0x1100E4C8: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E4C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100E4CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E4CB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E4CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E4CEu);

L_1100E4CE:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1100E4CE: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x110014DCu; /* 0x1100E4D2: mov dword ptr [ecx], 0x110014dc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E4D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E4D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E4D9u);

L_1100E4D9:
    PUSH32(esp, ebp); /* 0x1100E4D9: push ebp */
    ebp = esp; /* 0x1100E4DA: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1100E4DC: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100E4E0: push esi */
    esi = ecx; /* 0x1100E4E1: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E50B; /* 0x1100E4E3: je 0x1100e50b */
L_1100E4E5:
    PUSH32(esp, edi); /* 0x1100E4E5: push edi */
    PUSH32(esp, 0x1100E271u); /* 0x1100E4E6: push 0x1100e271 */
    edi = esi + (-0x4); /* 0x1100E4EB: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1100E4EE: push dword ptr [edi] */
    PUSH32(esp, 8); /* 0x1100E4F0: push 8 */
    PUSH32(esp, esi); /* 0x1100E4F2: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100E4F3: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100E4F8: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E506; /* 0x1100E4FC: je 0x1100e506 */
L_1100E4FE:
    PUSH32(esp, edi); /* 0x1100E4FE: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100E4FF: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E505: pop ecx */
L_1100E506:
    eax = edi; /* 0x1100E506: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100E508: pop edi */
    goto L_1100E521; /* 0x1100E509: jmp 0x1100e521 */
L_1100E50B:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100E50B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1100E50F: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E51F; /* 0x1100E515: je 0x1100e51f */
L_1100E517:
    PUSH32(esp, esi); /* 0x1100E517: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100E518: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E51E: pop ecx */
L_1100E51F:
    eax = esi; /* 0x1100E51F: mov eax, esi */
L_1100E521:
    esi = POP32_VAL(esp); /* 0x1100E521: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100E522: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E523: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E526(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E526u);

L_1100E526:
    PUSH32(esp, ebp); /* 0x1100E526: push ebp */
    ebp = esp; /* 0x1100E527: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1100E529: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100E52D: push esi */
    esi = ecx; /* 0x1100E52E: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E558; /* 0x1100E530: je 0x1100e558 */
L_1100E532:
    PUSH32(esp, edi); /* 0x1100E532: push edi */
    PUSH32(esp, 0x1100E348u); /* 0x1100E533: push 0x1100e348 */
    edi = esi + (-0x4); /* 0x1100E538: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1100E53B: push dword ptr [edi] */
    PUSH32(esp, 0x20u); /* 0x1100E53D: push 0x20 */
    PUSH32(esp, esi); /* 0x1100E53F: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100E540: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100E545: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E553; /* 0x1100E549: je 0x1100e553 */
L_1100E54B:
    PUSH32(esp, edi); /* 0x1100E54B: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100E54C: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E552: pop ecx */
L_1100E553:
    eax = edi; /* 0x1100E553: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100E555: pop edi */
    goto L_1100E56D; /* 0x1100E556: jmp 0x1100e56d */
L_1100E558:
    RECOMP_CALL(sub_1100E348); /* 0x1100E558: call 0x1100e348 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100E55D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E56B; /* 0x1100E561: je 0x1100e56b */
L_1100E563:
    PUSH32(esp, esi); /* 0x1100E563: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100E564: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E56A: pop ecx */
L_1100E56B:
    eax = esi; /* 0x1100E56B: mov eax, esi */
L_1100E56D:
    esi = POP32_VAL(esp); /* 0x1100E56D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100E56E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E56F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E572(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E572u);

L_1100E572:
    PUSH32(esp, ebp); /* 0x1100E572: push ebp */
    ebp = esp; /* 0x1100E573: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100E575: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x1100E578: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x1100E57B: mov eax, ecx */
    MEM32(ecx) = 0x110014FCu; /* 0x1100E57D: mov dword ptr [ecx], 0x110014fc */
    ebp = POP32_VAL(esp); /* 0x1100E583: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E584: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E587(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E587u);

L_1100E587:
    eax = MEM32(ecx); /* 0x1100E587: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0xC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100E58C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E58Cu);

L_1100E58C:
    eax = MEM32(ecx); /* 0x1100E58C: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x10)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100E591(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E591u);

L_1100E591:
    eax = MEM32(ecx); /* 0x1100E591: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x14)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100E596(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E596u);

L_1100E596:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100E596: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100E598: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E599: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E59A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E59Au);

L_1100E59A:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1100E59A: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x110014FCu; /* 0x1100E59E: mov dword ptr [ecx], 0x110014fc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E5A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E5A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E5A5u);

L_1100E5A5:
    PUSH32(esp, ebp); /* 0x1100E5A5: push ebp */
    ebp = esp; /* 0x1100E5A6: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100E5A8: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100E5AA: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x18)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100E5AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E5AEu);

L_1100E5AE:
    PUSH32(esp, ebp); /* 0x1100E5AE: push ebp */
    ebp = esp; /* 0x1100E5AF: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100E5B1: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100E5B3: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x1C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100E5B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E5B7u);

L_1100E5B7:
    PUSH32(esp, ebp); /* 0x1100E5B7: push ebp */
    ebp = esp; /* 0x1100E5B8: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100E5BA: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100E5BC: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x20)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100E5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E5C0u);

L_1100E5C0:
    PUSH32(esp, ebp); /* 0x1100E5C0: push ebp */
    ebp = esp; /* 0x1100E5C1: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100E5C3: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100E5C5: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x24)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100E5C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E5C9u);

L_1100E5C9:
    PUSH32(esp, 0x64u); /* 0x1100E5C9: push 0x64 */
    eax = 0x1103CBDDu; /* 0x1100E5CB: mov eax, 0x1103cbdd */
    RECOMP_CALL(sub_1103B372); /* 0x1100E5D0: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1100E5D5: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100E5D7: mov dword ptr [ebp - 0x10], ebx */
    eax = MEM32(ebp + 0x8); /* 0x1100E5DA: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x4) = eax; /* 0x1100E5DD: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100E5E0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x70); /* 0x1100E5E4: lea ecx, [ebp - 0x70] */
    PUSH32(esp, 0x110048B0u); /* 0x1100E5E7: push 0x110048b0 */
    MEM32(ebx) = 0x11001518u; /* 0x1100E5EC: mov dword ptr [ebx], 0x11001518 */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100E5F2: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x1100E5F7: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1100E5FA: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x1100E5FB: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E600: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1100E601: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1100E603: pop ecx */
    esi = eax; /* 0x1100E604: mov esi, eax */
    edi = ebx + 0x8; /* 0x1100E606: lea edi, [ebx + 8] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1100E609: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x70); /* 0x1100E60B: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100E60E: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1100E613: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1100E615: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E61A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E61D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E61Du);

L_1100E61D:
    PUSH32(esp, ebp); /* 0x1100E61D: push ebp */
    ebp = esp; /* 0x1100E61E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100E620: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1100E623: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100E626: push ebx */
    ebx = ecx; /* 0x1100E627: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x1100E629: push esi */
    PUSH32(esp, edi); /* 0x1100E62A: push edi */
    MEM32(ebx + 0x4) = eax; /* 0x1100E62B: mov dword ptr [ebx + 4], eax */
    eax = ebp + (-0x2C); /* 0x1100E62E: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1100E631: push eax */
    MEM32(ebx) = 0x11001518u; /* 0x1100E632: mov dword ptr [ebx], 0x11001518 */
    RECOMP_CALL(sub_1102DA53); /* 0x1100E638: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E63D: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1100E63E: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1100E640: pop ecx */
    edi = ebx + 0x8; /* 0x1100E641: lea edi, [ebx + 8] */
    esi = eax; /* 0x1100E644: mov esi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1100E646: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100E648: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E649: pop esi */
    eax = ebx; /* 0x1100E64A: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1100E64C: pop ebx */
    esp = ebp; /* 0x1100E64D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E64F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100E650: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100E653(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E653u);

L_1100E653:
    PUSH32(esp, 0x38u); /* 0x1100E653: push 0x38 */
    eax = 0x1103CC03u; /* 0x1100E655: mov eax, 0x1103cc03 */
    RECOMP_CALL(sub_1103B372); /* 0x1100E65A: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1100E65F: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100E662: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x1100E664: mov ebx, esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100E666: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1100E669: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E6B1; /* 0x1100E66B: je 0x1100e6b1 */
L_1100E66D:
    /* cmp MEM32(edi), esi */ /* 0x1100E66D: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100E6B1; /* 0x1100E66F: jne 0x1100e6b1 */
L_1100E671:
    PUSH32(esp, 0x34u); /* 0x1100E671: push 0x34 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100E673: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E679: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1100E67A: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1100E67D: mov dword ptr [ebp - 4], esi */
    /* test eax, eax */ /* 0x1100E680: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E6A2; /* 0x1100E682: je 0x1100e6a2 */
L_1100E684:
    ecx = MEM32(ebp + 0xC); /* 0x1100E684: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1100E687: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100E68C: push eax */
    ecx = ebp + (-0x44); /* 0x1100E68D: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100E690: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100E695: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100E698: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1100E699: push esi */
    PUSH32(esp, eax); /* 0x1100E69A: push eax */
    RECOMP_CALL(sub_1100E61D); /* 0x1100E69B: call 0x1100e61d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100E6A0: mov esi, eax */
L_1100E6A2:
    MEM32(edi) = esi; /* 0x1100E6A2: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1100E6A4: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E6B1; /* 0x1100E6A7: je 0x1100e6b1 */
L_1100E6A9:
    ecx = ebp + (-0x44); /* 0x1100E6A9: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100E6AC: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1100E6B1:
    PUSH32(esp, 2); /* 0x1100E6B1: push 2 */
    eax = POP32_VAL(esp); /* 0x1100E6B3: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1100E6B4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E6B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E6BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E6BAu);

L_1100E6BA:
    PUSH32(esp, ebp); /* 0x1100E6BA: push ebp */
    ebp = esp; /* 0x1100E6BB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1100E6BD: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = ebp + (-0x2C); /* 0x1100E6C0: lea eax, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1100E6C3: push esi */
    PUSH32(esp, edi); /* 0x1100E6C4: push edi */
    PUSH32(esp, eax); /* 0x1100E6C5: push eax */
    edi = ecx; /* 0x1100E6C6: mov edi, ecx */
    RECOMP_CALL(sub_1102DA53); /* 0x1100E6C8: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E6CD: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1100E6CE: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1100E6D0: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1100E6D1: add edi, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1100E6D4: mov esi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1100E6D6: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100E6D8: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E6D9: pop esi */
    esp = ebp; /* 0x1100E6DA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E6DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E6DD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E6E0u);

L_1100E6E0:
    PUSH32(esp, ebp); /* 0x1100E6E0: push ebp */
    ebp = esp; /* 0x1100E6E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100E6E3: push ecx */
    edx = MEM32(ebp + 0x20); /* 0x1100E6E4: mov edx, dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0xC); /* 0x1100E6E7: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1100E6EA: push ebx */
    PUSH32(esp, esi); /* 0x1100E6EB: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1100E6EC: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100E6EF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1100E6F1: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1100E6F2: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1100E6F5: mov dword ptr [ebp - 4], ecx */
    MEM32(esi) = eax; /* 0x1100E6F8: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0x18); /* 0x1100E6FA: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edx) = eax; /* 0x1100E6FD: mov dword ptr [edx], eax */
    /* cmp MEM32(esi), edi */ /* 0x1100E6FF: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100E701: setne bl */
    goto L_1100E765; /* 0x1100E704: jmp 0x1100e765 */
L_1100E706:
    eax = MEM32(ebp + 0x1C); /* 0x1100E706: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp MEM32(edx), eax */ /* 0x1100E709: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E772; /* 0x1100E70B: je 0x1100e772 */
L_1100E70D:
    eax = ecx + 0x8; /* 0x1100E70D: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1100E710: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100E711: push dword ptr [ebp + 8] */
    eax = edi; /* 0x1100E714: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x1100E716: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1100E718: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x1100E719: push dword ptr [esi] */
    PUSH32(esp, MEM32(edx)); /* 0x1100E71B: push dword ptr [edx] */
    RECOMP_CALL(sub_1102D797); /* 0x1100E71D: call 0x1102d797 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1100E722: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100E724: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x1100E727: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E770; /* 0x1100E72A: je 0x1100e770 */
L_1100E72C:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1100E72C: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E76B; /* 0x1100E72F: je 0x1100e76b */
L_1100E731:
    edx = MEM32(ebp + 0x20); /* 0x1100E731: mov edx, dword ptr [ebp + 0x20] */
    /* test ecx, ecx */ /* 0x1100E734: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E750; /* 0x1100E736: jne 0x1100e750 */
L_1100E738:
    eax = MEM32(edx); /* 0x1100E738: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100E73A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x1100E73C: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100E759; /* 0x1100E73F: jne 0x1100e759 */
L_1100E741:
    ecx = MEM32(esi); /* 0x1100E741: mov ecx, dword ptr [esi] */
    ebx = ecx + 0x1; /* 0x1100E743: lea ebx, [ecx + 1] */
L_1100E746:
    SET_LO8(eax, MEM8(ecx)); /* 0x1100E746: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1100E748: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1100E749: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E746; /* 0x1100E74B: jne 0x1100e746 */
L_1100E74D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1100E74D: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1100E74F: inc ecx */
    _flag_k = FK_INC;
L_1100E750:
    eax = ecx + 0x3; /* 0x1100E750: lea eax, [ecx + 3] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1100E753: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100E755: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1100E757: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100E759:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ecx; /* 0x1100E759: add dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 2; /* 0x1100E75B: add dword ptr [edx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100E75E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x1100E760: mov ecx, dword ptr [ebp - 4] */
    ebx = eax; /* 0x1100E763: mov ebx, eax */
L_1100E765:
    /* cmp MEM32(esi), edi */ /* 0x1100E765: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100E706; /* 0x1100E767: jne 0x1100e706 */
L_1100E769:
    goto L_1100E772; /* 0x1100E769: jmp 0x1100e772 */
L_1100E76B:
    PUSH32(esp, 2); /* 0x1100E76B: push 2 */
    eax = POP32_VAL(esp); /* 0x1100E76D: pop eax */
    goto L_1100E774; /* 0x1100E76E: jmp 0x1100e774 */
L_1100E770:
    MEM32(esi) = edi; /* 0x1100E770: mov dword ptr [esi], edi */
L_1100E772:
    eax = ebx; /* 0x1100E772: mov eax, ebx */
L_1100E774:
    edi = POP32_VAL(esp); /* 0x1100E774: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E775: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100E776: pop ebx */
    esp = ebp; /* 0x1100E777: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E779: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1100E77A: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1100E77D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E77Du);

L_1100E77D:
    PUSH32(esp, ebp); /* 0x1100E77D: push ebp */
    ebp = esp; /* 0x1100E77E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1100E780: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1100E783: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1100E788: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100E78A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1100E78D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1100E790: push ebx */
    PUSH32(esp, esi); /* 0x1100E791: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1100E792: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100E795: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1100E797: push edi */
    edi = MEM32(ebp + 0x20); /* 0x1100E798: mov edi, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1100E79B: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x1100E79E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi) = eax; /* 0x1100E7A1: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0x18); /* 0x1100E7A3: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edi) = eax; /* 0x1100E7A6: mov dword ptr [edi], eax */
    eax = MEM32(ebp + 0x10); /* 0x1100E7A8: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(esi), eax */ /* 0x1100E7AB: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1100E7AD: mov dword ptr [ebp - 0x18], ecx */
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100E7B0: setne bl */
    goto L_1100E84C; /* 0x1100E7B3: jmp 0x1100e84c */
L_1100E7B8:
    eax = MEM32(ebp + 0x1C); /* 0x1100E7B8: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp MEM32(edi), eax */ /* 0x1100E7BB: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E85E; /* 0x1100E7BD: je 0x1100e85e */
L_1100E7C3:
    eax = MEM32(edi); /* 0x1100E7C3: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1100E7C5: mov dword ptr [ebp - 0x10], eax */
    RECOMP_ICALL(MEM32(0x11069308)); /* 0x1100E7C8: call dword ptr [0x11069308] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x1C); /* 0x1100E7CE: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + (-0x10)); /* 0x1100E7D1: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1100E7D4: sub ecx, edx */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1100E7D6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1100E7FC; /* 0x1100E7D8: jg 0x1100e7fc */
L_1100E7DA:
    eax = MEM32(ebp + (-0x18)); /* 0x1100E7DA: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1100E7DD: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1100E7E0: push eax */
    eax = MEM32(esi); /* 0x1100E7E1: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100E7E3: push dword ptr [ebp - 0x14] */
    eax = (uint32_t)MEM16(eax); /* 0x1100E7E6: movzx eax, word ptr [eax] */
    PUSH32(esp, eax); /* 0x1100E7E9: push eax */
    PUSH32(esp, edx); /* 0x1100E7EA: push edx */
    RECOMP_CALL(sub_1102DAC0); /* 0x1100E7EB: call 0x1102dac0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1100E7F0: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1100E7F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1100E842; /* 0x1100E7F5: jns 0x1100e842 */
L_1100E7F7:
    PUSH32(esp, 2); /* 0x1100E7F7: push 2 */
    eax = POP32_VAL(esp); /* 0x1100E7F9: pop eax */
    goto L_1100E860; /* 0x1100E7FA: jmp 0x1100e860 */
L_1100E7FC:
    ecx = MEM32(ebp + (-0x14)); /* 0x1100E7FC: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1100E7FF: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1100E801: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1100E804: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1100E807: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1100E80A: push eax */
    eax = MEM32(esi); /* 0x1100E80B: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x1100E80D: push ecx */
    eax = (uint32_t)MEM16(eax); /* 0x1100E80E: movzx eax, word ptr [eax] */
    PUSH32(esp, eax); /* 0x1100E811: push eax */
    eax = ebp + (-0xC); /* 0x1100E812: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100E815: push eax */
    RECOMP_CALL(sub_1102DAC0); /* 0x1100E816: call 0x1102dac0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1100E81B: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1100E81D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1100E820: mov dword ptr [ebp - 0x10], ecx */
    /* test ecx, ecx */ /* 0x1100E823: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1100E7F7; /* 0x1100E825: js 0x1100e7f7 */
L_1100E827:
    eax = MEM32(ebp + 0x1C); /* 0x1100E827: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x1100E82A: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1100E82C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1100E856; /* 0x1100E82E: jl 0x1100e856 */
L_1100E830:
    PUSH32(esp, ecx); /* 0x1100E830: push ecx */
    eax = ebp + (-0xC); /* 0x1100E831: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100E834: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1100E835: push dword ptr [edi] */
    RECOMP_CALL(sub_1103B300); /* 0x1100E837: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1100E83C: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100E83F: add esp, 0xc */
    _flag_k = FK_ADD;
L_1100E842:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x1100E842: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x1100E845: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100E847: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x1100E849: mov eax, dword ptr [ebp + 0x10] */
L_1100E84C:
    /* cmp MEM32(esi), eax */ /* 0x1100E84C: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100E7B8; /* 0x1100E84E: jne 0x1100e7b8 */
L_1100E854:
    goto L_1100E85E; /* 0x1100E854: jmp 0x1100e85e */
L_1100E856:
    eax = MEM32(ebp + (-0x14)); /* 0x1100E856: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1100E859: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(eax) = ecx; /* 0x1100E85C: mov dword ptr [eax], ecx */
L_1100E85E:
    eax = ebx; /* 0x1100E85E: mov eax, ebx */
L_1100E860:
    ecx = MEM32(ebp + (-0x4)); /* 0x1100E860: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1100E863: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E864: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1100E865: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1100E867: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1100E868: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1100E86D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E86F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1100E870: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1100E873(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E873u);

L_1100E873:
    PUSH32(esp, ebp); /* 0x1100E873: push ebp */
    ebp = esp; /* 0x1100E874: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1100E876: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1100E879: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1100E87E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100E880: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0x8); /* 0x1100E883: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x1100E886: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1100E889: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1100E88A: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1100E88D: push esi */
    PUSH32(esp, edi); /* 0x1100E88E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100E88F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edx; /* 0x1100E891: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebx) = eax; /* 0x1100E894: mov dword ptr [ebx], eax */
    eax = MEM32(edx); /* 0x1100E896: mov eax, dword ptr [edx] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1100E898: mov dword ptr [ebp - 0x10], eax */
    eax = ecx + 0x8; /* 0x1100E89B: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1100E89E: push eax */
    PUSH32(esp, edx); /* 0x1100E89F: push edx */
    eax = ebp + (-0xC); /* 0x1100E8A0: lea eax, [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x1100E8A3: push edi */
    PUSH32(esp, eax); /* 0x1100E8A4: push eax */
    RECOMP_CALL(sub_1102DAC0); /* 0x1100E8A5: call 0x1102dac0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100E8AA: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1100E8AC: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1100E8AF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1100E8B8; /* 0x1100E8B1: jg 0x1100e8b8 */
L_1100E8B3:
    PUSH32(esp, 2); /* 0x1100E8B3: push 2 */
    edi = POP32_VAL(esp); /* 0x1100E8B5: pop edi */
    goto L_1100E8E4; /* 0x1100E8B6: jmp 0x1100e8e4 */
L_1100E8B8:
    eax = MEM32(ebp + 0x10); /* 0x1100E8B8: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1100E8BB: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx); /* 0x1100E8BC: sub eax, dword ptr [ebx] */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x1100E8BE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1100E8CF; /* 0x1100E8C0: jge 0x1100e8cf */
L_1100E8C2:
    eax = MEM32(ebp + (-0x14)); /* 0x1100E8C2: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100E8C5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x1100E8C7: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1100E8CA: inc edi */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x1100E8CB: mov dword ptr [eax], ecx */
    goto L_1100E8E4; /* 0x1100E8CD: jmp 0x1100e8e4 */
L_1100E8CF:
    /* test esi, esi */ /* 0x1100E8CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1100E8E4; /* 0x1100E8D1: jle 0x1100e8e4 */
L_1100E8D3:
    PUSH32(esp, esi); /* 0x1100E8D3: push esi */
    eax = ebp + (-0xC); /* 0x1100E8D4: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100E8D7: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1100E8D8: push dword ptr [ebx] */
    RECOMP_CALL(sub_1103B300); /* 0x1100E8DA: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100E8DF: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + esi; /* 0x1100E8E2: add dword ptr [ebx], esi */
    _flag_k = FK_ADD;
L_1100E8E4:
    ecx = MEM32(ebp + (-0x4)); /* 0x1100E8E4: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1100E8E7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100E8E9: pop edi */
    esi = POP32_VAL(esp); /* 0x1100E8EA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1100E8EB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1100E8ED: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1100E8EE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1100E8F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E8F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1100E8F6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1100E8F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E8F9u);

L_1100E8F9:
    PUSH32(esp, ebp); /* 0x1100E8F9: push ebp */
    ebp = esp; /* 0x1100E8FA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100E8FC: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1100E8FD: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1100E900: push ebx */
    PUSH32(esp, esi); /* 0x1100E901: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100E902: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x1100E904: mov ebx, ecx */
    eax = MEM32(eax); /* 0x1100E906: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1100E908: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1100E909: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1100E90C: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1100E90F: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100E96A; /* 0x1100E912: jbe 0x1100e96a */
L_1100E914:
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x1100E914: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E96A; /* 0x1100E917: je 0x1100e96a */
L_1100E919:
    eax = ebx + 0x8; /* 0x1100E919: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x1100E91C: push eax */
    eax = ebp + (-0x4); /* 0x1100E91D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1100E920: push eax */
    eax = MEM32(ebp + 0x10); /* 0x1100E921: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1100E924: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1100E926: push eax */
    eax = ebp + 0x8; /* 0x1100E927: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x1100E92A: push edi */
    PUSH32(esp, eax); /* 0x1100E92B: push eax */
    RECOMP_CALL(sub_1102D797); /* 0x1100E92C: call 0x1102d797 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1100E931: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100E933: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x1100E936: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E96A; /* 0x1100E939: je 0x1100e96a */
L_1100E93B:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1100E93B: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100E96A; /* 0x1100E93E: je 0x1100e96a */
L_1100E940:
    /* test ecx, ecx */ /* 0x1100E940: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E959; /* 0x1100E942: jne 0x1100e959 */
L_1100E944:
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x1100E944: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100E962; /* 0x1100E948: jne 0x1100e962 */
L_1100E94A:
    ecx = edi; /* 0x1100E94A: mov ecx, edi */
    edx = ecx + 0x1; /* 0x1100E94C: lea edx, [ecx + 1] */
L_1100E94F:
    SET_LO8(eax, MEM8(ecx)); /* 0x1100E94F: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1100E951: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1100E952: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100E94F; /* 0x1100E954: jne 0x1100e94f */
L_1100E956:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1100E956: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1100E958: inc ecx */
    _flag_k = FK_INC;
L_1100E959:
    eax = ecx + 0x3; /* 0x1100E959: lea eax, [ecx + 3] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1100E95C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100E95E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1100E960: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100E962:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1100E962: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1100E964: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1100E965: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100E914; /* 0x1100E968: jb 0x1100e914 */
L_1100E96A:
    edi = POP32_VAL(esp); /* 0x1100E96A: pop edi */
    eax = esi; /* 0x1100E96B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100E96D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100E96E: pop ebx */
    esp = ebp; /* 0x1100E96F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100E971: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1100E972: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1100E975(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E975u);

L_1100E975:
    PUSH32(esp, 5); /* 0x1100E975: push 5 */
    eax = POP32_VAL(esp); /* 0x1100E977: pop eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E978: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E979(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E979u);

L_1100E979:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100E979: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E97B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E97C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E97Cu);

L_1100E97C:
    PUSH32(esp, 0); /* 0x1100E97C: push 0 */
    RECOMP_CALL(sub_1100E5C9); /* 0x1100E97E: call 0x1100e5c9 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100E983: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100E984(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E984u);

L_1100E984:
    PUSH32(esp, ebp); /* 0x1100E984: push ebp */
    ebp = esp; /* 0x1100E985: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1100E987: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100E98B: push esi */
    esi = ecx; /* 0x1100E98C: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E9B6; /* 0x1100E98E: je 0x1100e9b6 */
L_1100E990:
    PUSH32(esp, edi); /* 0x1100E990: push edi */
    PUSH32(esp, 0x1100E271u); /* 0x1100E991: push 0x1100e271 */
    edi = esi + (-0x4); /* 0x1100E996: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1100E999: push dword ptr [edi] */
    PUSH32(esp, 0x34u); /* 0x1100E99B: push 0x34 */
    PUSH32(esp, esi); /* 0x1100E99D: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100E99E: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100E9A3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E9B1; /* 0x1100E9A7: je 0x1100e9b1 */
L_1100E9A9:
    PUSH32(esp, edi); /* 0x1100E9A9: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100E9AA: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E9B0: pop ecx */
L_1100E9B1:
    eax = edi; /* 0x1100E9B1: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100E9B3: pop edi */
    goto L_1100E9CC; /* 0x1100E9B4: jmp 0x1100e9cc */
L_1100E9B6:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100E9B6: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1100E9BA: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100E9CA; /* 0x1100E9C0: je 0x1100e9ca */
L_1100E9C2:
    PUSH32(esp, esi); /* 0x1100E9C2: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100E9C3: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100E9C9: pop ecx */
L_1100E9CA:
    eax = esi; /* 0x1100E9CA: mov eax, esi */
L_1100E9CC:
    esi = POP32_VAL(esp); /* 0x1100E9CC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100E9CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100E9CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100E9D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100E9D1u);

L_1100E9D1:
    PUSH32(esp, 0x64u); /* 0x1100E9D1: push 0x64 */
    eax = 0x1103CBDDu; /* 0x1100E9D3: mov eax, 0x1103cbdd */
    RECOMP_CALL(sub_1103B372); /* 0x1100E9D8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1100E9DD: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100E9DF: mov dword ptr [ebp - 0x10], ebx */
    eax = MEM32(ebp + 0x8); /* 0x1100E9E2: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x4) = eax; /* 0x1100E9E5: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100E9E8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x70); /* 0x1100E9EC: lea ecx, [ebp - 0x70] */
    PUSH32(esp, 0x110048B0u); /* 0x1100E9EF: push 0x110048b0 */
    MEM32(ebx) = 0x11001544u; /* 0x1100E9F4: mov dword ptr [ebx], 0x11001544 */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100E9FA: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x1100E9FF: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1100EA02: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x1100EA03: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EA08: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1100EA09: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1100EA0B: pop ecx */
    esi = eax; /* 0x1100EA0C: mov esi, eax */
    edi = ebx + 0x8; /* 0x1100EA0E: lea edi, [ebx + 8] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1100EA11: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x70); /* 0x1100EA13: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100EA16: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1100EA1B: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1100EA1D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100EA22: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100EA25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EA25u);

L_1100EA25:
    PUSH32(esp, ebp); /* 0x1100EA25: push ebp */
    ebp = esp; /* 0x1100EA26: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100EA28: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1100EA2B: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100EA2E: push ebx */
    ebx = ecx; /* 0x1100EA2F: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x1100EA31: push esi */
    PUSH32(esp, edi); /* 0x1100EA32: push edi */
    MEM32(ebx + 0x4) = eax; /* 0x1100EA33: mov dword ptr [ebx + 4], eax */
    eax = ebp + (-0x2C); /* 0x1100EA36: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1100EA39: push eax */
    MEM32(ebx) = 0x11001544u; /* 0x1100EA3A: mov dword ptr [ebx], 0x11001544 */
    RECOMP_CALL(sub_1102DA53); /* 0x1100EA40: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EA45: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1100EA46: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1100EA48: pop ecx */
    edi = ebx + 0x8; /* 0x1100EA49: lea edi, [ebx + 8] */
    esi = eax; /* 0x1100EA4C: mov esi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1100EA4E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100EA50: pop edi */
    esi = POP32_VAL(esp); /* 0x1100EA51: pop esi */
    eax = ebx; /* 0x1100EA52: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1100EA54: pop ebx */
    esp = ebp; /* 0x1100EA55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100EA57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100EA58: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100EA5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EA5Bu);

L_1100EA5B:
    PUSH32(esp, 0x38u); /* 0x1100EA5B: push 0x38 */
    eax = 0x1103CC03u; /* 0x1100EA5D: mov eax, 0x1103cc03 */
    RECOMP_CALL(sub_1103B372); /* 0x1100EA62: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1100EA67: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100EA6A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x1100EA6C: mov ebx, esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100EA6E: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1100EA71: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EAB9; /* 0x1100EA73: je 0x1100eab9 */
L_1100EA75:
    /* cmp MEM32(edi), esi */ /* 0x1100EA75: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100EAB9; /* 0x1100EA77: jne 0x1100eab9 */
L_1100EA79:
    PUSH32(esp, 0x34u); /* 0x1100EA79: push 0x34 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100EA7B: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EA81: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1100EA82: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1100EA85: mov dword ptr [ebp - 4], esi */
    /* test eax, eax */ /* 0x1100EA88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EAAA; /* 0x1100EA8A: je 0x1100eaaa */
L_1100EA8C:
    ecx = MEM32(ebp + 0xC); /* 0x1100EA8C: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1100EA8F: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100EA94: push eax */
    ecx = ebp + (-0x44); /* 0x1100EA95: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100EA98: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100EA9D: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100EAA0: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1100EAA1: push esi */
    PUSH32(esp, eax); /* 0x1100EAA2: push eax */
    RECOMP_CALL(sub_1100EA25); /* 0x1100EAA3: call 0x1100ea25 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100EAA8: mov esi, eax */
L_1100EAAA:
    MEM32(edi) = esi; /* 0x1100EAAA: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1100EAAC: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EAB9; /* 0x1100EAAF: je 0x1100eab9 */
L_1100EAB1:
    ecx = ebp + (-0x44); /* 0x1100EAB1: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100EAB4: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1100EAB9:
    PUSH32(esp, 2); /* 0x1100EAB9: push 2 */
    eax = POP32_VAL(esp); /* 0x1100EABB: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1100EABC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100EAC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100EAC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EAC2u);

L_1100EAC2:
    PUSH32(esp, 0); /* 0x1100EAC2: push 0 */
    RECOMP_CALL(sub_1100E9D1); /* 0x1100EAC4: call 0x1100e9d1 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100EAC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100EACA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EACAu);

L_1100EACA:
    PUSH32(esp, ebp); /* 0x1100EACA: push ebp */
    ebp = esp; /* 0x1100EACB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100EACD: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x1100EAD0: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x1100EAD3: mov eax, ecx */
    MEM32(ecx) = 0x11001570u; /* 0x1100EAD5: mov dword ptr [ecx], 0x11001570 */
    ebp = POP32_VAL(esp); /* 0x1100EADB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100EADC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100EADF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EADFu);

L_1100EADF:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1100EADF: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x11001570u; /* 0x1100EAE3: mov dword ptr [ecx], 0x11001570 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100EAE9: ret  */
    RECOMP_REGS_OUT();
}
