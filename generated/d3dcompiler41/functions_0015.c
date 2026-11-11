#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_160CABE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CABE0u);

L_160CABE0:
    edi = edi; /* 0x160CABE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CABE2: push ebp */
    ebp = esp; /* 0x160CABE3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CABE5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x160CABE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CABF2; /* 0x160CABEA: jne 0x160cabf2 */
L_160CABEC:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CABEC: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CABEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CABEF: ret 4 */
L_160CABF2:
    eax = MEM32(eax + 0x4); /* 0x160CABF2: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x160CABF5: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CABF8: sete al */
    ebp = POP32_VAL(esp); /* 0x160CABFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CABFC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CAC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAC10u);

L_160CAC10:
    edi = edi; /* 0x160CAC10: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CAC12: push esi */
    PUSH32(esp, edi); /* 0x160CAC13: push edi */
    edi = 0x14u; /* 0x160CAC14: mov edi, 0x14 */
    esi = ecx; /* 0x160CAC19: mov esi, ecx */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CAC1B: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CAC20: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x160CAC22: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAC44; /* 0x160CAC24: je 0x160cac44 */
L_160CAC26:
    ecx = MEM32(esi + 0x4); /* 0x160CAC26: mov ecx, dword ptr [esi + 4] */
    edi = POP32_VAL(esp); /* 0x160CAC29: pop edi */
    MEM32(eax) = 0x16038E60u; /* 0x160CAC2A: mov dword ptr [eax], 0x16038e60 */
    MEM32(eax + 0x4) = ecx; /* 0x160CAC30: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = edx; /* 0x160CAC33: mov dword ptr [eax + 8], edx */
    MEM32(eax + 0xC) = edx; /* 0x160CAC36: mov dword ptr [eax + 0xc], edx */
    MEM32(eax + 0x10) = 1; /* 0x160CAC39: mov dword ptr [eax + 0x10], 1 */
    esi = POP32_VAL(esp); /* 0x160CAC40: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAC41: ret 4 */
L_160CAC44:
    edi = POP32_VAL(esp); /* 0x160CAC44: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAC45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CAC47: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAC48: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CAC50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAC50u);

L_160CAC50:
    /* test ecx, ecx */ /* 0x160CAC50: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAC60; /* 0x160CAC52: je 0x160cac60 */
L_160CAC54:
    eax = MEM32(ecx); /* 0x160CAC54: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CAC56: push edx */
    edx = MEM32(eax + 0x4); /* 0x160CAC57: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CAC5A: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CAC5C: movzx eax, al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAC5F: ret  */
L_160CAC60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAC60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CAC62: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CAC64: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAC67: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CAC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAC70u);

L_160CAC70:
    edi = edi; /* 0x160CAC70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CAC72: push ebp */
    ebp = esp; /* 0x160CAC73: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x160CAC75: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAC8F; /* 0x160CAC79: je 0x160cac8f */
L_160CAC7B:
    ecx = ebp + 0x8; /* 0x160CAC7B: lea ecx, [ebp + 8] */
    edi = edi; /* 0x160CAC7E: mov edi, edi */
L_160CAC80:
    ecx = MEM32(ecx); /* 0x160CAC80: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x160CAC82: add ecx, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), 0 */ /* 0x160CAC85: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAC80; /* 0x160CAC88: jne 0x160cac80 */
L_160CAC8A:
    MEM32(ecx) = eax; /* 0x160CAC8A: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x8); /* 0x160CAC8C: mov eax, dword ptr [ebp + 8] */
L_160CAC8F:
    ebp = POP32_VAL(esp); /* 0x160CAC8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAC90: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CACA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CACA0u);

    goto L_160CACA0;
L_160572E0:
    /* test ecx, ecx */ /* 0x160572E0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160572E7; /* 0x160572E2: jne 0x160572e7 */
L_160572E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160572E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160572E6: ret  */
L_160572E7:
    eax = MEM32(ecx + 0x58); /* 0x160572E7: mov eax, dword ptr [ecx + 0x58] */
    /* test eax, eax */ /* 0x160572EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160572F1; /* 0x160572EC: jne 0x160572f1 */
L_160572EE:
    eax = ecx + 0x38; /* 0x160572EE: lea eax, [ecx + 0x38] */
L_160572F1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160572F1: ret  */
L_160CACA0:
    edi = edi; /* 0x160CACA0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x160CACA2: push ebx */
    PUSH32(esp, esi); /* 0x160CACA3: push esi */
    PUSH32(esp, edi); /* 0x160CACA4: push edi */
    edi = ecx; /* 0x160CACA5: mov edi, ecx */
    /* test edi, edi */ /* 0x160CACA7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CACEA; /* 0x160CACA9: je 0x160cacea */
L_160CACAB:
    ebx = 1; /* 0x160CACAB: mov ebx, 1 */
L_160CACB0:
    eax = MEM32(edi + 0x4); /* 0x160CACB0: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x160CACB3: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 9 */ /* 0x160CACB4: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CACEA; /* 0x160CACB7: ja 0x160cacea */
L_160CACB9:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CAD50)); goto _ljump; }
L_160CACC0:
    esi = edi; /* 0x160CACC0: mov esi, edi */
L_160CACC2:
    /* test esi, esi */ /* 0x160CACC2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CACE0; /* 0x160CACC4: je 0x160cace0 */
L_160CACC6:
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x160CACC6: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CACE0; /* 0x160CACC9: jne 0x160cace0 */
L_160CACCB:
    ecx = MEM32(esi + 0x8); /* 0x160CACCB: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x160CACCE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CACDB; /* 0x160CACD0: je 0x160cacdb */
L_160CACD2:
    RECOMP_CALL(sub_160CACA0); /* 0x160CACD2: call 0x160caca0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CACD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CACEC; /* 0x160CACD9: jne 0x160cacec */
L_160CACDB:
    esi = MEM32(esi + 0xC); /* 0x160CACDB: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_160CACC2; /* 0x160CACDE: jmp 0x160cacc2 */
L_160CACE0:
    /* cmp esi, edi */ /* 0x160CACE0: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CACEA; /* 0x160CACE2: je 0x160cacea */
L_160CACE4:
    edi = esi; /* 0x160CACE4: mov edi, esi */
    /* test esi, esi */ /* 0x160CACE6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CACB0; /* 0x160CACE8: jne 0x160cacb0 */
L_160CACEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CACEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CACEC:
    edi = POP32_VAL(esp); /* 0x160CACEC: pop edi */
    esi = POP32_VAL(esp); /* 0x160CACED: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CACEE: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CACEF: ret  */
L_160CACF0:
    eax = edi + 0x34; /* 0x160CACF0: lea eax, [edi + 0x34] */
    /* test eax, eax */ /* 0x160CACF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CACFD; /* 0x160CACF5: je 0x160cacfd */
L_160CACF7:
    /* cmp MEM32(eax + 0x8), 0xFFFFFFFFu */ /* 0x160CACF7: cmp dword ptr [eax + 8], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CACEC; /* 0x160CACFB: jne 0x160cacec */
L_160CACFD:
    ecx = MEM32(edi + 0x18); /* 0x160CACFD: mov ecx, dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_160CACA0); /* 0x160CAD00: call 0x160caca0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CAD05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CACEC; /* 0x160CAD07: jne 0x160cacec */
L_160CAD09:
    ecx = MEM32(edi + 0x1C); /* 0x160CAD09: mov ecx, dword ptr [edi + 0x1c] */
    RECOMP_CALL(sub_160CACA0); /* 0x160CAD0C: call 0x160caca0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CAD11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CACEC; /* 0x160CAD13: jne 0x160cacec */
L_160CAD15:
    ecx = MEM32(edi + 0x20); /* 0x160CAD15: mov ecx, dword ptr [edi + 0x20] */
    RECOMP_CALL(sub_160CACA0); /* 0x160CAD18: call 0x160caca0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CAD1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CACEC; /* 0x160CAD1F: jne 0x160cacec */
L_160CAD21:
    ecx = MEM32(edi + 0x24); /* 0x160CAD21: mov ecx, dword ptr [edi + 0x24] */
    RECOMP_CALL(sub_160CACA0); /* 0x160CAD24: call 0x160caca0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CAD29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CACEA; /* 0x160CAD2B: je 0x160cacea */
L_160CAD2D:
    edi = POP32_VAL(esp); /* 0x160CAD2D: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAD2E: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAD2F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAD30: ret  */
L_160CAD31:
    ecx = edi; /* 0x160CAD31: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x160CAD33: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAD34: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAD35: pop ebx */
    RECOMP_BACKEDGE();
    goto L_160572E0; /* 0x160CAD36: jmp 0x160572e0 */
L_160CAD3B:
    eax = edi + 0x30; /* 0x160CAD3B: lea eax, [edi + 0x30] */
    edi = POP32_VAL(esp); /* 0x160CAD3E: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAD3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAD40: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAD41: ret  */
L_160CAD42:
    eax = edi + 0x1C; /* 0x160CAD42: lea eax, [edi + 0x1c] */
    edi = POP32_VAL(esp); /* 0x160CAD45: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAD46: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAD47: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAD48: ret  */
L_160CAD49:
    eax = edi + 0x18; /* 0x160CAD49: lea eax, [edi + 0x18] */
    edi = POP32_VAL(esp); /* 0x160CAD4C: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAD4D: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAD4E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAD4F: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CACC0u: goto L_160CACC0;
      case 0x160CACEAu: goto L_160CACEA;
      case 0x160CACF0u: goto L_160CACF0;
      case 0x160CAD31u: goto L_160CAD31;
      case 0x160CAD3Bu: goto L_160CAD3B;
      case 0x160CAD42u: goto L_160CAD42;
      case 0x160CAD49u: goto L_160CAD49;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CAD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAD80u);

L_160CAD80:
    edi = edi; /* 0x160CAD80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CAD82: push ebp */
    ebp = esp; /* 0x160CAD83: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CAD85: push esi */
    esi = ecx; /* 0x160CAD86: mov esi, ecx */
    RECOMP_CALL(sub_160CADE0); /* 0x160CAD88: call 0x160cade0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CAD8D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAD98; /* 0x160CAD91: je 0x160cad98 */
L_160CAD93:
    RECOMP_CALL(sub_1605D560); /* 0x160CAD93: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CAD98:
    eax = esi; /* 0x160CAD98: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CAD9A: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CAD9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAD9C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CADB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CADB0u);

L_160CADB0:
    edi = edi; /* 0x160CADB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CADB2: push ebp */
    ebp = esp; /* 0x160CADB3: mov ebp, esp */
    ecx = 1; /* 0x160CADB5: mov ecx, 1 */
    MEM32(eax + 0x4) = ecx; /* 0x160CADBA: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x160CADBD: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160CADC0: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x160CADC3: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x160CADC6: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x16038E90u; /* 0x160CADC9: mov dword ptr [eax], 0x16038e90 */
    MEM32(eax + 0xC) = edx; /* 0x160CADCF: mov dword ptr [eax + 0xc], edx */
    MEM32(eax + 0x14) = ecx; /* 0x160CADD2: mov dword ptr [eax + 0x14], ecx */
    ebp = POP32_VAL(esp); /* 0x160CADD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CADD6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CADE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CADE0u);

L_160CADE0:
    edi = edi; /* 0x160CADE0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x160CADE2: push ebx */
    PUSH32(esp, esi); /* 0x160CADE3: push esi */
    ebx = ecx; /* 0x160CADE4: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x160CADE6: push edi */
    MEM32(ebx) = 0x16038E90u; /* 0x160CADE7: mov dword ptr [ebx], 0x16038e90 */
    esi = ebx; /* 0x160CADED: mov esi, ebx */
    /* nop */ /* 0x160CADEF: nop  */
L_160CADF0:
    ecx = MEM32(esi + 0x8); /* 0x160CADF0: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x160CADF3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAE05; /* 0x160CADF5: je 0x160cae05 */
L_160CADF7:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CADF7: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CAE05; /* 0x160CADFB: jne 0x160cae05 */
L_160CADFD:
    eax = MEM32(ecx); /* 0x160CADFD: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CADFF: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CAE01: push 1 */
    RECOMP_ICALL(edx); /* 0x160CAE03: call edx */
    RECOMP_FLAGS_IN();
L_160CAE05:
    edi = MEM32(esi + 0xC); /* 0x160CAE05: mov edi, dword ptr [esi + 0xc] */
    /* cmp esi, ebx */ /* 0x160CAE08: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAE24; /* 0x160CAE0A: je 0x160cae24 */
L_160CAE0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAE0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 0xFFFFFFFFu; /* 0x160CAE0E: add dword ptr [esi + 0x10], -1 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x160CAE12: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = eax; /* 0x160CAE15: mov dword ptr [esi + 0xc], eax */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CAE24; /* 0x160CAE18: jne 0x160cae24 */
L_160CAE1A:
    eax = MEM32(esi); /* 0x160CAE1A: mov eax, dword ptr [esi] */
    edx = MEM32(eax); /* 0x160CAE1C: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CAE1E: push 1 */
    ecx = esi; /* 0x160CAE20: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CAE22: call edx */
    RECOMP_FLAGS_IN();
L_160CAE24:
    /* test edi, edi */ /* 0x160CAE24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAE42; /* 0x160CAE26: je 0x160cae42 */
L_160CAE28:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x160CAE28: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAE32; /* 0x160CAE2C: jne 0x160cae32 */
L_160CAE2E:
    esi = edi; /* 0x160CAE2E: mov esi, edi */
    RECOMP_BACKEDGE();
    goto L_160CADF0; /* 0x160CAE30: jmp 0x160cadf0 */
L_160CAE32:
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 0xFFFFFFFFu; /* 0x160CAE32: add dword ptr [edi + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CAE42; /* 0x160CAE36: jne 0x160cae42 */
L_160CAE38:
    eax = MEM32(edi); /* 0x160CAE38: mov eax, dword ptr [edi] */
    edx = MEM32(eax); /* 0x160CAE3A: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CAE3C: push 1 */
    ecx = edi; /* 0x160CAE3E: mov ecx, edi */
    RECOMP_ICALL(edx); /* 0x160CAE40: call edx */
    RECOMP_FLAGS_IN();
L_160CAE42:
    edi = POP32_VAL(esp); /* 0x160CAE42: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAE43: pop esi */
    MEM32(ebx) = 0x16038E60u; /* 0x160CAE44: mov dword ptr [ebx], 0x16038e60 */
    ebx = POP32_VAL(esp); /* 0x160CAE4A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAE4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CAE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAE60u);

L_160CAE60:
    edi = edi; /* 0x160CAE60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CAE62: push ebp */
    ebp = esp; /* 0x160CAE63: mov ebp, esp */
    PUSH32(esp, edi); /* 0x160CAE65: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CAE66: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x160CAE69: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAE75; /* 0x160CAE6B: je 0x160cae75 */
L_160CAE6D:
    eax = MEM32(edi + 0x4); /* 0x160CAE6D: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x160CAE70: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAE7C; /* 0x160CAE73: je 0x160cae7c */
L_160CAE75:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CAE75: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CAE77: pop edi */
    ebp = POP32_VAL(esp); /* 0x160CAE78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAE79: ret 4 */
L_160CAE7C:
    PUSH32(esp, ebx); /* 0x160CAE7C: push ebx */
    PUSH32(esp, esi); /* 0x160CAE7D: push esi */
    esi = ecx; /* 0x160CAE7E: mov esi, ecx */
    ebx = 1; /* 0x160CAE80: mov ebx, 1 */
L_160CAE85:
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x160CAE85: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAEC8; /* 0x160CAE88: jne 0x160caec8 */
L_160CAE8A:
    /* test edi, edi */ /* 0x160CAE8A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAED9; /* 0x160CAE8C: je 0x160caed9 */
L_160CAE8E:
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x160CAE8E: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAED9; /* 0x160CAE91: jne 0x160caed9 */
L_160CAE93:
    ecx = MEM32(esi + 0x8); /* 0x160CAE93: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(edi + 0x8); /* 0x160CAE96: mov edx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x160CAE99: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAEAA; /* 0x160CAE9B: je 0x160caeaa */
L_160CAE9D:
    eax = MEM32(ecx); /* 0x160CAE9D: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CAE9F: push edx */
    edx = MEM32(eax + 0x4); /* 0x160CAEA0: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CAEA3: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CAEA5: movzx eax, al */
    goto L_160CAEB1; /* 0x160CAEA8: jmp 0x160caeb1 */
L_160CAEAA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAEAA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CAEAC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CAEAE: sete al */
L_160CAEB1:
    /* test LO8(eax), LO8(eax) */ /* 0x160CAEB1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAED9; /* 0x160CAEB3: je 0x160caed9 */
L_160CAEB5:
    esi = MEM32(esi + 0xC); /* 0x160CAEB5: mov esi, dword ptr [esi + 0xc] */
    edi = MEM32(edi + 0xC); /* 0x160CAEB8: mov edi, dword ptr [edi + 0xc] */
    /* test esi, esi */ /* 0x160CAEBB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAE85; /* 0x160CAEBD: jne 0x160cae85 */
L_160CAEBF:
    esi = POP32_VAL(esp); /* 0x160CAEBF: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x160CAEC0: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x160CAEC2: pop ebx */
    edi = POP32_VAL(esp); /* 0x160CAEC3: pop edi */
    ebp = POP32_VAL(esp); /* 0x160CAEC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAEC5: ret 4 */
L_160CAEC8:
    eax = MEM32(esi); /* 0x160CAEC8: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x4); /* 0x160CAECA: mov edx, dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x160CAECD: push edi */
    ecx = esi; /* 0x160CAECE: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CAED0: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CAED2: movzx eax, al */
    /* test LO8(eax), LO8(eax) */ /* 0x160CAED5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAEBF; /* 0x160CAED7: jne 0x160caebf */
L_160CAED9:
    esi = POP32_VAL(esp); /* 0x160CAED9: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAEDA: pop ebx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CAEDB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CAEDD: pop edi */
    ebp = POP32_VAL(esp); /* 0x160CAEDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAEDF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CAEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAEF0u);

L_160CAEF0:
    edi = edi; /* 0x160CAEF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CAEF2: push ebp */
    ebp = esp; /* 0x160CAEF3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CAEF5: push ecx */
    PUSH32(esp, ebx); /* 0x160CAEF6: push ebx */
    PUSH32(esp, esi); /* 0x160CAEF7: push esi */
    esi = ecx; /* 0x160CAEF8: mov esi, ecx */
    PUSH32(esp, edi); /* 0x160CAEFA: push edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x160CAEFB: mov dword ptr [ebp - 4], 0 */
    ebx = ebp + (-0x4); /* 0x160CAF02: lea ebx, [ebp - 4] */
    /* test esi, esi */ /* 0x160CAF05: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAFA8; /* 0x160CAF07: je 0x160cafa8 */
L_160CAF0D:
    ecx = ecx; /* 0x160CAF0D: lea ecx, [ecx] */
L_160CAF10:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x160CAF10: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAF99; /* 0x160CAF14: jne 0x160caf99 */
L_160CAF1A:
    edi = 0x18u; /* 0x160CAF1A: mov edi, 0x18 */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CAF1F: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CAF24: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x160CAF26: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAF46; /* 0x160CAF28: je 0x160caf46 */
L_160CAF2A:
    ecx = 1; /* 0x160CAF2A: mov ecx, 1 */
    MEM32(eax + 0x4) = ecx; /* 0x160CAF2F: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = edi; /* 0x160CAF32: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x160CAF35: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = ecx; /* 0x160CAF38: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax) = 0x16038E90u; /* 0x160CAF3B: mov dword ptr [eax], 0x16038e90 */
    MEM32(eax + 0x14) = edi; /* 0x160CAF41: mov dword ptr [eax + 0x14], edi */
    goto L_160CAF48; /* 0x160CAF44: jmp 0x160caf48 */
L_160CAF46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAF46: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CAF48:
    MEM32(ebx) = eax; /* 0x160CAF48: mov dword ptr [ebx], eax */
    /* cmp eax, edi */ /* 0x160CAF4A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAFA8; /* 0x160CAF4C: je 0x160cafa8 */
L_160CAF4E:
    ecx = MEM32(esi + 0x14); /* 0x160CAF4E: mov ecx, dword ptr [esi + 0x14] */
    MEM32(eax + 0x14) = ecx; /* 0x160CAF51: mov dword ptr [eax + 0x14], ecx */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x160CAF54: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAF73; /* 0x160CAF57: je 0x160caf73 */
L_160CAF59:
    ecx = MEM32(esi + 0x8); /* 0x160CAF59: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x160CAF5C: mov edx, dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x160CAF5E: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x8); /* 0x160CAF61: mov edx, dword ptr [edx + 8] */
    PUSH32(esp, eax); /* 0x160CAF64: push eax */
    RECOMP_ICALL(edx); /* 0x160CAF65: call edx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x160CAF67: mov ecx, dword ptr [ebx] */
    MEM32(ecx + 0x8) = eax; /* 0x160CAF69: mov dword ptr [ecx + 8], eax */
    edx = MEM32(ebx); /* 0x160CAF6C: mov edx, dword ptr [ebx] */
    /* cmp MEM32(edx + 0x8), edi */ /* 0x160CAF6E: cmp dword ptr [edx + 8], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAF8B; /* 0x160CAF71: je 0x160caf8b */
L_160CAF73:
    ebx = MEM32(ebx); /* 0x160CAF73: mov ebx, dword ptr [ebx] */
    esi = MEM32(esi + 0xC); /* 0x160CAF75: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x160CAF78: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x160CAF7B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAF10; /* 0x160CAF7D: jne 0x160caf10 */
L_160CAF7F:
    eax = MEM32(ebp + (-0x4)); /* 0x160CAF7F: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x160CAF82: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAF83: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAF84: pop ebx */
    esp = ebp; /* 0x160CAF85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CAF87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAF88: ret 4 */
L_160CAF8B:
    MEM32(ebx) = edi; /* 0x160CAF8B: mov dword ptr [ebx], edi */
    eax = MEM32(ebp + (-0x4)); /* 0x160CAF8D: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x160CAF90: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAF91: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAF92: pop ebx */
    esp = ebp; /* 0x160CAF93: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CAF95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAF96: ret 4 */
L_160CAF99:
    ecx = MEM32(ebp + 0x8); /* 0x160CAF99: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x160CAF9C: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x8); /* 0x160CAF9E: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, ecx); /* 0x160CAFA1: push ecx */
    ecx = esi; /* 0x160CAFA2: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CAFA4: call edx */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x160CAFA6: mov dword ptr [ebx], eax */
L_160CAFA8:
    eax = MEM32(ebp + (-0x4)); /* 0x160CAFA8: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x160CAFAB: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAFAC: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CAFAD: pop ebx */
    esp = ebp; /* 0x160CAFAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CAFB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAFB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CAFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAFC0u);

L_160CAFC0:
    edi = edi; /* 0x160CAFC0: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CAFC2: push esi */
    esi = ecx; /* 0x160CAFC3: mov esi, ecx */
    /* test esi, esi */ /* 0x160CAFC5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAFF1; /* 0x160CAFC7: je 0x160caff1 */
L_160CAFC9:
    esp = esp; /* 0x160CAFC9: lea esp, [esp] */
L_160CAFD0:
    ecx = MEM32(esi + 0x8); /* 0x160CAFD0: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x160CAFD3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAFDE; /* 0x160CAFD5: je 0x160cafde */
L_160CAFD7:
    eax = MEM32(ecx); /* 0x160CAFD7: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CAFD9: mov edx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(edx); /* 0x160CAFDC: call edx */
    RECOMP_FLAGS_IN();
L_160CAFDE:
    eax = MEM32(esi + 0xC); /* 0x160CAFDE: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x160CAFE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAFF1; /* 0x160CAFE3: je 0x160caff1 */
L_160CAFE5:
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x160CAFE5: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAFF3; /* 0x160CAFE9: jne 0x160caff3 */
L_160CAFEB:
    esi = eax; /* 0x160CAFEB: mov esi, eax */
    /* test esi, esi */ /* 0x160CAFED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAFD0; /* 0x160CAFEF: jne 0x160cafd0 */
L_160CAFF1:
    esi = POP32_VAL(esp); /* 0x160CAFF1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAFF2: ret  */
L_160CAFF3:
    ecx = eax; /* 0x160CAFF3: mov ecx, eax */
    /* test ecx, ecx */ /* 0x160CAFF5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAFF1; /* 0x160CAFF7: je 0x160caff1 */
L_160CAFF9:
    eax = MEM32(ecx); /* 0x160CAFF9: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CAFFB: mov edx, dword ptr [eax + 0xc] */
    esi = POP32_VAL(esp); /* 0x160CAFFE: pop esi */
    { _itail_tgt = (uint32_t)(edx); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CB010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB010u);

L_160CB010:
    edx = MEM32(ecx); /* 0x160CB010: mov edx, dword ptr [ecx] */
    /* cmp edx, MEM32(eax) */ /* 0x160CB012: cmp edx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB032; /* 0x160CB014: jne 0x160cb032 */
L_160CB016:
    /* cmp edx, 0xCu */ /* 0x160CB016: cmp edx, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CB0F7; /* 0x160CB019: ja 0x160cb0f7 */
L_160CB01F:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x160CB100)); goto _ljump; }
L_160CB026:
    ecx = MEM32(ecx + 0x8); /* 0x160CB026: mov ecx, dword ptr [ecx + 8] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x160CB029: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB0F7; /* 0x160CB02C: je 0x160cb0f7 */
L_160CB032:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB032: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB034: ret  */
L_160CB035:
    edx = eax + 0x8; /* 0x160CB035: lea edx, [eax + 8] */
    eax = ecx + 0x8; /* 0x160CB038: lea eax, [ecx + 8] */
    goto L_160CB040; /* 0x160CB03B: jmp 0x160cb040 */
L_160CB040:
    SET_LO8(ecx, MEM8(eax)); /* 0x160CB040: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(edx) */ /* 0x160CB042: cmp cl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB060; /* 0x160CB044: jne 0x160cb060 */
L_160CB046:
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CB046: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB05C; /* 0x160CB048: je 0x160cb05c */
L_160CB04A:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x160CB04A: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(edx + 0x1) */ /* 0x160CB04D: cmp cl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB060; /* 0x160CB050: jne 0x160cb060 */
L_160CB052:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160CB052: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x160CB055: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CB058: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CB040; /* 0x160CB05A: jne 0x160cb040 */
L_160CB05C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB05C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CB065; /* 0x160CB05E: jmp 0x160cb065 */
L_160CB060:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160CB060: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160CB062: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160CB065:
    /* test eax, eax */ /* 0x160CB065: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB0F7; /* 0x160CB067: je 0x160cb0f7 */
L_160CB06D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB06D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB06F: ret  */
L_160CB070:
    edx = MEM32(ecx + 0x8); /* 0x160CB070: mov edx, dword ptr [ecx + 8] */
    /* cmp edx, MEM32(eax + 0x8) */ /* 0x160CB073: cmp edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB0F7; /* 0x160CB076: je 0x160cb0f7 */
L_160CB078:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB078: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB07A: ret  */
L_160CB07B:
    edx = MEM32(ecx + 0x8); /* 0x160CB07B: mov edx, dword ptr [ecx + 8] */
    /* cmp edx, MEM32(eax + 0x8) */ /* 0x160CB07E: cmp edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB08B; /* 0x160CB081: jne 0x160cb08b */
L_160CB083:
    ecx = MEM32(ecx + 0xC); /* 0x160CB083: mov ecx, dword ptr [ecx + 0xc] */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x160CB086: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB0F7; /* 0x160CB089: je 0x160cb0f7 */
L_160CB08B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB08B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB08D: ret  */
L_160CB08E:
    fp_push(*(double*)ADDR(eax + 0x8)); /* 0x160CB08E: fld qword ptr [eax + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x160CB091: fcomp qword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x160CB094: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x160CB096: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_160CB0F7; /* 0x160CB099: jnp 0x160cb0f7 */
L_160CB09B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB09B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB09D: ret  */
L_160CB09E:
    eax = MEM32(eax + 0x8); /* 0x160CB09E: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(ecx + 0x8); /* 0x160CB0A1: mov ecx, dword ptr [ecx + 8] */
L_160CB0A4:
    SET_LO8(edx, MEM8(ecx)); /* 0x160CB0A4: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x160CB0A6: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB060; /* 0x160CB0A8: jne 0x160cb060 */
L_160CB0AA:
    /* test LO8(edx), LO8(edx) */ /* 0x160CB0AA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB0C0; /* 0x160CB0AC: je 0x160cb0c0 */
L_160CB0AE:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x160CB0AE: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x160CB0B1: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB060; /* 0x160CB0B4: jne 0x160cb060 */
L_160CB0B6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160CB0B6: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160CB0B9: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160CB0BC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CB0A4; /* 0x160CB0BE: jne 0x160cb0a4 */
L_160CB0C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB0C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160CB065; /* 0x160CB0C2: jmp 0x160cb065 */
L_160CB0C4:
    eax = MEM32(eax + 0x8); /* 0x160CB0C4: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(ecx + 0x8); /* 0x160CB0C7: mov ecx, dword ptr [ecx + 8] */
    ebx = ebx; /* 0x160CB0CA: lea ebx, [ebx] */
L_160CB0D0:
    SET_LO8(edx, MEM8(ecx)); /* 0x160CB0D0: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x160CB0D2: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB060; /* 0x160CB0D4: jne 0x160cb060 */
L_160CB0D6:
    /* test LO8(edx), LO8(edx) */ /* 0x160CB0D6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB0F0; /* 0x160CB0D8: je 0x160cb0f0 */
L_160CB0DA:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x160CB0DA: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x160CB0DD: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB060; /* 0x160CB0E0: jne 0x160cb060 */
L_160CB0E6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160CB0E6: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160CB0E9: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160CB0EC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CB0D0; /* 0x160CB0EE: jne 0x160cb0d0 */
L_160CB0F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB0F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160CB065; /* 0x160CB0F2: jmp 0x160cb065 */
L_160CB0F7:
    eax = 1; /* 0x160CB0F7: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB0FC: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CB026u: goto L_160CB026;
      case 0x160CB035u: goto L_160CB035;
      case 0x160CB070u: goto L_160CB070;
      case 0x160CB07Bu: goto L_160CB07B;
      case 0x160CB08Eu: goto L_160CB08E;
      case 0x160CB09Eu: goto L_160CB09E;
      case 0x160CB0C4u: goto L_160CB0C4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CB140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB140u);

L_160CB140:
    edi = edi; /* 0x160CB140: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CB142: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CB143: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x160CB145: push edi */
    MEM32(eax + 0x8) = ecx; /* 0x160CB146: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CB149: mov dword ptr [eax + 0xc], ecx */
    edi = eax + 0x18; /* 0x160CB14C: lea edi, [eax + 0x18] */
    ecx = 0xAu; /* 0x160CB14F: mov ecx, 0xa */
    esi = edx; /* 0x160CB154: mov esi, edx */
    MEM32(eax + 0x4) = 2; /* 0x160CB156: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x10) = 1; /* 0x160CB15D: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038E78u; /* 0x160CB164: mov dword ptr [eax], 0x16038e78 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CB16A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x160CB16C: pop edi */
    esi = POP32_VAL(esp); /* 0x160CB16D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB16E: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CB180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB180u);

L_160CB180:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CB180: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = 2; /* 0x160CB182: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x8) = ecx; /* 0x160CB189: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CB18C: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 1; /* 0x160CB18F: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038E78u; /* 0x160CB196: mov dword ptr [eax], 0x16038e78 */
    MEM32(eax + 0x18) = ecx; /* 0x160CB19C: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x160CB19F: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x160CB1A2: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x160CB1A5: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x160CB1A8: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x160CB1AB: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x160CB1AE: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x34) = ecx; /* 0x160CB1B1: mov dword ptr [eax + 0x34], ecx */
    MEM32(eax + 0x38) = ecx; /* 0x160CB1B4: mov dword ptr [eax + 0x38], ecx */
    MEM32(eax + 0x3C) = ecx; /* 0x160CB1B7: mov dword ptr [eax + 0x3c], ecx */
    ecx = MEM32(edx); /* 0x160CB1BA: mov ecx, dword ptr [edx] */
    MEM32(eax + 0x18) = ecx; /* 0x160CB1BC: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(edx + 0x8); /* 0x160CB1BF: mov ecx, dword ptr [edx + 8] */
    MEM32(eax + 0x20) = ecx; /* 0x160CB1C2: mov dword ptr [eax + 0x20], ecx */
    edx = MEM32(edx + 0xC); /* 0x160CB1C5: mov edx, dword ptr [edx + 0xc] */
    MEM32(eax + 0x24) = edx; /* 0x160CB1C8: mov dword ptr [eax + 0x24], edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB1CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CB1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB1E0u);

L_160CB1E0:
    edi = edi; /* 0x160CB1E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB1E2: push ebp */
    ebp = esp; /* 0x160CB1E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CB1E5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x160CB1E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB1F4; /* 0x160CB1EA: je 0x160cb1f4 */
L_160CB1EC:
    edx = MEM32(eax + 0x4); /* 0x160CB1EC: mov edx, dword ptr [eax + 4] */
    /* cmp edx, MEM32(ecx + 0x4) */ /* 0x160CB1EF: cmp edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB1FA; /* 0x160CB1F2: je 0x160cb1fa */
L_160CB1F4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CB1F4: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CB1F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB1F7: ret 4 */
L_160CB1FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x160CB1FA: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x160CB1FD: add ecx, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_160CB010); /* 0x160CB200: call 0x160cb010 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CB205: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CB207: setne al */
    ebp = POP32_VAL(esp); /* 0x160CB20A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB20B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB220u);

L_160CB220:
    edi = edi; /* 0x160CB220: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CB222: push esi */
    PUSH32(esp, edi); /* 0x160CB223: push edi */
    edi = 0x40u; /* 0x160CB224: mov edi, 0x40 */
    esi = ecx; /* 0x160CB229: mov esi, ecx */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CB22B: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CB230: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x160CB232: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB262; /* 0x160CB234: je 0x160cb262 */
L_160CB236:
    MEM32(eax + 0x8) = ecx; /* 0x160CB236: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CB239: mov dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x160CB23C: add esi, 0x18 */
    _flag_k = FK_ADD;
    edi = eax + 0x18; /* 0x160CB23F: lea edi, [eax + 0x18] */
    ecx = 0xAu; /* 0x160CB242: mov ecx, 0xa */
    MEM32(eax + 0x4) = 2; /* 0x160CB247: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x10) = 1; /* 0x160CB24E: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038E78u; /* 0x160CB255: mov dword ptr [eax], 0x16038e78 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CB25B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x160CB25D: pop edi */
    esi = POP32_VAL(esp); /* 0x160CB25E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB25F: ret 4 */
L_160CB262:
    edi = POP32_VAL(esp); /* 0x160CB262: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB263: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CB265: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB266: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB270u);

L_160CB270:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB270: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CB280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB280u);

L_160CB280:
    edi = edi; /* 0x160CB280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB282: push ebp */
    ebp = esp; /* 0x160CB283: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CB285: push esi */
    esi = ecx; /* 0x160CB286: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x160CB288: mov ecx, dword ptr [esi + 0x18] */
    MEM32(esi) = 0x16038EA8u; /* 0x160CB28B: mov dword ptr [esi], 0x16038ea8 */
    /* test ecx, ecx */ /* 0x160CB291: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB2A3; /* 0x160CB293: je 0x160cb2a3 */
L_160CB295:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CB295: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB2A3; /* 0x160CB299: jne 0x160cb2a3 */
L_160CB29B:
    eax = MEM32(ecx); /* 0x160CB29B: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB29D: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB29F: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB2A1: call edx */
    RECOMP_FLAGS_IN();
L_160CB2A3:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CB2A3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x16038E60u; /* 0x160CB2A7: mov dword ptr [esi], 0x16038e60 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB2B4; /* 0x160CB2AD: je 0x160cb2b4 */
L_160CB2AF:
    RECOMP_CALL(sub_1605D560); /* 0x160CB2AF: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CB2B4:
    eax = esi; /* 0x160CB2B4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CB2B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB2B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB2B8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB2C0u);

L_160CB2C0:
    edi = edi; /* 0x160CB2C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB2C2: push ebp */
    ebp = esp; /* 0x160CB2C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CB2C5: push esi */
    esi = ecx; /* 0x160CB2C6: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CB2C8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = 9; /* 0x160CB2CA: mov dword ptr [eax + 4], 9 */
    MEM32(eax + 0x8) = ecx; /* 0x160CB2D1: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CB2D4: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 1; /* 0x160CB2D7: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038EA8u; /* 0x160CB2DE: mov dword ptr [eax], 0x16038ea8 */
    /* cmp esi, ecx */ /* 0x160CB2E4: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB305; /* 0x160CB2E6: je 0x160cb305 */
L_160CB2E8:
    edx = MEM32(ebp + 0xC); /* 0x160CB2E8: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x160CB2EB: push edi */
    edi = eax + 0x1C; /* 0x160CB2EC: lea edi, [eax + 0x1c] */
    ecx = 8; /* 0x160CB2EF: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CB2F4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x160CB2F6: mov ecx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CB2F9: pop edi */
    MEM32(eax + 0x14) = ecx; /* 0x160CB2FA: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = edx; /* 0x160CB2FD: mov dword ptr [eax + 0x18], edx */
    esi = POP32_VAL(esp); /* 0x160CB300: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB301: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CB302: ret 8 */
L_160CB305:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160CB305: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x1C) = ecx; /* 0x160CB308: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = edx; /* 0x160CB30B: mov dword ptr [eax + 0x20], edx */
    MEM32(eax + 0x24) = edx; /* 0x160CB30E: mov dword ptr [eax + 0x24], edx */
    MEM32(eax + 0x28) = edx; /* 0x160CB311: mov dword ptr [eax + 0x28], edx */
    MEM32(eax + 0x2C) = edx; /* 0x160CB314: mov dword ptr [eax + 0x2c], edx */
    MEM32(eax + 0x30) = edx; /* 0x160CB317: mov dword ptr [eax + 0x30], edx */
    edx = MEM32(ebp + 0xC); /* 0x160CB31A: mov edx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x34) = ecx; /* 0x160CB31D: mov dword ptr [eax + 0x34], ecx */
    MEM32(eax + 0x38) = ecx; /* 0x160CB320: mov dword ptr [eax + 0x38], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160CB323: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x14) = ecx; /* 0x160CB326: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = edx; /* 0x160CB329: mov dword ptr [eax + 0x18], edx */
    esi = POP32_VAL(esp); /* 0x160CB32C: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB32D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CB32E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CB340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB340u);

L_160CB340:
    edi = edi; /* 0x160CB340: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB342: push ebp */
    ebp = esp; /* 0x160CB343: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CB345: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160CB346: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x160CB349: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB3B3; /* 0x160CB34B: je 0x160cb3b3 */
L_160CB34D:
    eax = MEM32(esi + 0x4); /* 0x160CB34D: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x160CB350: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB3B3; /* 0x160CB353: jne 0x160cb3b3 */
L_160CB355:
    edx = MEM32(esi + 0x14); /* 0x160CB355: mov edx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx + 0x14); /* 0x160CB358: mov eax, dword ptr [ecx + 0x14] */
    PUSH32(esp, ebx); /* 0x160CB35B: push ebx */
    esp = esp; /* 0x160CB35C: lea esp, [esp] */
L_160CB360:
    SET_LO8(ebx, MEM8(eax)); /* 0x160CB360: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x160CB362: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB380; /* 0x160CB364: jne 0x160cb380 */
L_160CB366:
    /* test LO8(ebx), LO8(ebx) */ /* 0x160CB366: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB37C; /* 0x160CB368: je 0x160cb37c */
L_160CB36A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x160CB36A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x160CB36D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB380; /* 0x160CB370: jne 0x160cb380 */
L_160CB372:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160CB372: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x160CB375: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x160CB378: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CB360; /* 0x160CB37A: jne 0x160cb360 */
L_160CB37C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB37C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CB385; /* 0x160CB37E: jmp 0x160cb385 */
L_160CB380:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160CB380: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160CB382: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160CB385:
    ebx = POP32_VAL(esp); /* 0x160CB385: pop ebx */
    /* test eax, eax */ /* 0x160CB386: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CB3B3; /* 0x160CB388: jne 0x160cb3b3 */
L_160CB38A:
    ecx = MEM32(ecx + 0x18); /* 0x160CB38A: mov ecx, dword ptr [ecx + 0x18] */
    edx = MEM32(esi + 0x18); /* 0x160CB38D: mov edx, dword ptr [esi + 0x18] */
    /* test ecx, ecx */ /* 0x160CB390: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB3A1; /* 0x160CB392: je 0x160cb3a1 */
L_160CB394:
    eax = MEM32(ecx); /* 0x160CB394: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CB396: push edx */
    edx = MEM32(eax + 0x4); /* 0x160CB397: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CB39A: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CB39C: movzx eax, al */
    goto L_160CB3A8; /* 0x160CB39F: jmp 0x160cb3a8 */
L_160CB3A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB3A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CB3A3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CB3A5: sete al */
L_160CB3A8:
    /* test LO8(eax), LO8(eax) */ /* 0x160CB3A8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB3B3; /* 0x160CB3AA: je 0x160cb3b3 */
L_160CB3AC:
    SET_LO8(eax, 1); /* 0x160CB3AC: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160CB3AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB3AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB3B0: ret 4 */
L_160CB3B3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CB3B3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160CB3B5: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB3B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB3B7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB3C0u);

L_160CB3C0:
    edi = edi; /* 0x160CB3C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB3C2: push ebp */
    ebp = esp; /* 0x160CB3C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CB3C5: push ecx */
    PUSH32(esp, ebx); /* 0x160CB3C6: push ebx */
    PUSH32(esp, esi); /* 0x160CB3C7: push esi */
    PUSH32(esp, edi); /* 0x160CB3C8: push edi */
    edi = 0x3Cu; /* 0x160CB3C9: mov edi, 0x3c */
    MEM32(ebp + (-0x4)) = ecx; /* 0x160CB3CE: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CB3D1: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160CB3D6: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CB3D8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, esi */ /* 0x160CB3DA: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB448; /* 0x160CB3DC: je 0x160cb448 */
L_160CB3DE:
    MEM32(ebx + 0x4) = 9; /* 0x160CB3DE: mov dword ptr [ebx + 4], 9 */
    MEM32(ebx + 0x8) = esi; /* 0x160CB3E5: mov dword ptr [ebx + 8], esi */
    MEM32(ebx + 0xC) = esi; /* 0x160CB3E8: mov dword ptr [ebx + 0xc], esi */
    MEM32(ebx + 0x10) = 1; /* 0x160CB3EB: mov dword ptr [ebx + 0x10], 1 */
    MEM32(ebx) = 0x16038EA8u; /* 0x160CB3F2: mov dword ptr [ebx], 0x16038ea8 */
    edi = ebx + 0x1C; /* 0x160CB3F8: lea edi, [ebx + 0x1c] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160CB3FB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x160CB3FE: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = eax; /* 0x160CB401: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0xC) = eax; /* 0x160CB404: mov dword ptr [edi + 0xc], eax */
    MEM32(edi + 0x10) = eax; /* 0x160CB407: mov dword ptr [edi + 0x10], eax */
    MEM32(edi + 0x14) = eax; /* 0x160CB40A: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x160CB40D: mov eax, dword ptr [ebp - 4] */
    MEM32(edi) = esi; /* 0x160CB410: mov dword ptr [edi], esi */
    MEM32(edi + 0x18) = esi; /* 0x160CB412: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x1C) = esi; /* 0x160CB415: mov dword ptr [edi + 0x1c], esi */
    MEM32(ebx + 0x14) = esi; /* 0x160CB418: mov dword ptr [ebx + 0x14], esi */
    MEM32(ebx + 0x18) = esi; /* 0x160CB41B: mov dword ptr [ebx + 0x18], esi */
    /* cmp MEM32(eax + 0x18), esi */ /* 0x160CB41E: cmp dword ptr [eax + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB456; /* 0x160CB421: je 0x160cb456 */
L_160CB423:
    ecx = MEM32(eax + 0x18); /* 0x160CB423: mov ecx, dword ptr [eax + 0x18] */
    eax = MEM32(ecx); /* 0x160CB426: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + 0x8); /* 0x160CB428: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x160CB42B: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x160CB42E: push edx */
    RECOMP_ICALL(eax); /* 0x160CB42F: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x18) = eax; /* 0x160CB431: mov dword ptr [ebx + 0x18], eax */
    /* cmp eax, esi */ /* 0x160CB434: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB453; /* 0x160CB436: jne 0x160cb453 */
L_160CB438:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 0xFFFFFFFFu; /* 0x160CB438: add dword ptr [ebx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB448; /* 0x160CB43C: jne 0x160cb448 */
L_160CB43E:
    edx = MEM32(ebx); /* 0x160CB43E: mov edx, dword ptr [ebx] */
    eax = MEM32(edx); /* 0x160CB440: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160CB442: push 1 */
    ecx = ebx; /* 0x160CB444: mov ecx, ebx */
    RECOMP_ICALL(eax); /* 0x160CB446: call eax */
    RECOMP_FLAGS_IN();
L_160CB448:
    edi = POP32_VAL(esp); /* 0x160CB448: pop edi */
    esi = POP32_VAL(esp); /* 0x160CB449: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB44A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CB44C: pop ebx */
    esp = ebp; /* 0x160CB44D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CB44F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB450: ret 4 */
L_160CB453:
    eax = MEM32(ebp + (-0x4)); /* 0x160CB453: mov eax, dword ptr [ebp - 4] */
L_160CB456:
    ecx = MEM32(eax + 0x14); /* 0x160CB456: mov ecx, dword ptr [eax + 0x14] */
    MEM32(ebx + 0x14) = ecx; /* 0x160CB459: mov dword ptr [ebx + 0x14], ecx */
    esi = eax + 0x1C; /* 0x160CB45C: lea esi, [eax + 0x1c] */
    ecx = 8; /* 0x160CB45F: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CB464: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x160CB466: pop edi */
    esi = POP32_VAL(esp); /* 0x160CB467: pop esi */
    eax = ebx; /* 0x160CB468: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x160CB46A: pop ebx */
    esp = ebp; /* 0x160CB46B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CB46D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB46E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB480u);

L_160CB480:
    MEM32(eax + 0x4) = 0xAu; /* 0x160CB480: mov dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CB487: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x160CB489: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CB48C: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 1; /* 0x160CB48F: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038EC0u; /* 0x160CB496: mov dword ptr [eax], 0x16038ec0 */
    MEM32(eax + 0x14) = ecx; /* 0x160CB49C: mov dword ptr [eax + 0x14], ecx */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160CB49F: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x18) = ecx; /* 0x160CB4A2: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = edx; /* 0x160CB4A5: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x20) = edx; /* 0x160CB4A8: mov dword ptr [eax + 0x20], edx */
    MEM32(eax + 0x24) = edx; /* 0x160CB4AB: mov dword ptr [eax + 0x24], edx */
    MEM32(eax + 0x28) = edx; /* 0x160CB4AE: mov dword ptr [eax + 0x28], edx */
    MEM32(eax + 0x2C) = edx; /* 0x160CB4B1: mov dword ptr [eax + 0x2c], edx */
    MEM32(eax + 0x30) = ecx; /* 0x160CB4B4: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x34) = ecx; /* 0x160CB4B7: mov dword ptr [eax + 0x34], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB4BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CB4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB4C0u);

L_160CB4C0:
    edi = edi; /* 0x160CB4C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB4C2: push ebp */
    ebp = esp; /* 0x160CB4C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CB4C5: push esi */
    esi = ecx; /* 0x160CB4C6: mov esi, ecx */
    ecx = MEM32(esi + 0x14); /* 0x160CB4C8: mov ecx, dword ptr [esi + 0x14] */
    MEM32(esi) = 0x16038EC0u; /* 0x160CB4CB: mov dword ptr [esi], 0x16038ec0 */
    /* test ecx, ecx */ /* 0x160CB4D1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB4E3; /* 0x160CB4D3: je 0x160cb4e3 */
L_160CB4D5:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CB4D5: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB4E3; /* 0x160CB4D9: jne 0x160cb4e3 */
L_160CB4DB:
    eax = MEM32(ecx); /* 0x160CB4DB: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB4DD: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB4DF: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB4E1: call edx */
    RECOMP_FLAGS_IN();
L_160CB4E3:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CB4E3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x16038E60u; /* 0x160CB4E7: mov dword ptr [esi], 0x16038e60 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB4F4; /* 0x160CB4ED: je 0x160cb4f4 */
L_160CB4EF:
    RECOMP_CALL(sub_1605D560); /* 0x160CB4EF: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CB4F4:
    eax = esi; /* 0x160CB4F4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CB4F6: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB4F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB4F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB500u);

L_160CB500:
    edi = edi; /* 0x160CB500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB502: push ebp */
    ebp = esp; /* 0x160CB503: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CB505: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x160CB508: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB514; /* 0x160CB50A: je 0x160cb514 */
L_160CB50C:
    edx = MEM32(eax + 0x4); /* 0x160CB50C: mov edx, dword ptr [eax + 4] */
    /* cmp edx, MEM32(ecx + 0x4) */ /* 0x160CB50F: cmp edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB51A; /* 0x160CB512: je 0x160cb51a */
L_160CB514:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CB514: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CB516: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB517: ret 4 */
L_160CB51A:
    ecx = MEM32(ecx + 0x14); /* 0x160CB51A: mov ecx, dword ptr [ecx + 0x14] */
    edx = MEM32(eax + 0x14); /* 0x160CB51D: mov edx, dword ptr [eax + 0x14] */
    /* test ecx, ecx */ /* 0x160CB520: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB538; /* 0x160CB522: je 0x160cb538 */
L_160CB524:
    eax = MEM32(ecx); /* 0x160CB524: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CB526: push edx */
    edx = MEM32(eax + 0x4); /* 0x160CB527: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CB52A: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CB52C: movzx eax, al */
    /* test LO8(eax), LO8(eax) */ /* 0x160CB52F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CB531: setne al */
    ebp = POP32_VAL(esp); /* 0x160CB534: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB535: ret 4 */
L_160CB538:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB538: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CB53A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CB53C: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x160CB53F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CB541: setne al */
    ebp = POP32_VAL(esp); /* 0x160CB544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB545: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB550u);

L_160CB550:
    edi = edi; /* 0x160CB550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB552: push ebp */
    ebp = esp; /* 0x160CB553: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CB555: push ecx */
    PUSH32(esp, ebx); /* 0x160CB556: push ebx */
    PUSH32(esp, esi); /* 0x160CB557: push esi */
    PUSH32(esp, edi); /* 0x160CB558: push edi */
    edi = 0x38u; /* 0x160CB559: mov edi, 0x38 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x160CB55E: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CB561: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160CB566: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CB568: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, esi */ /* 0x160CB56A: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB5D5; /* 0x160CB56C: je 0x160cb5d5 */
L_160CB56E:
    MEM32(ebx + 0x4) = 0xAu; /* 0x160CB56E: mov dword ptr [ebx + 4], 0xa */
    MEM32(ebx + 0x8) = esi; /* 0x160CB575: mov dword ptr [ebx + 8], esi */
    MEM32(ebx + 0xC) = esi; /* 0x160CB578: mov dword ptr [ebx + 0xc], esi */
    MEM32(ebx + 0x10) = 1; /* 0x160CB57B: mov dword ptr [ebx + 0x10], 1 */
    MEM32(ebx) = 0x16038EC0u; /* 0x160CB582: mov dword ptr [ebx], 0x16038ec0 */
    MEM32(ebx + 0x14) = esi; /* 0x160CB588: mov dword ptr [ebx + 0x14], esi */
    edi = ebx + 0x18; /* 0x160CB58B: lea edi, [ebx + 0x18] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160CB58E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x160CB591: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = eax; /* 0x160CB594: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0xC) = eax; /* 0x160CB597: mov dword ptr [edi + 0xc], eax */
    MEM32(edi + 0x10) = eax; /* 0x160CB59A: mov dword ptr [edi + 0x10], eax */
    MEM32(edi + 0x14) = eax; /* 0x160CB59D: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x160CB5A0: mov eax, dword ptr [ebp - 4] */
    MEM32(edi) = esi; /* 0x160CB5A3: mov dword ptr [edi], esi */
    MEM32(edi + 0x18) = esi; /* 0x160CB5A5: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x1C) = esi; /* 0x160CB5A8: mov dword ptr [edi + 0x1c], esi */
    /* cmp MEM32(eax + 0x14), esi */ /* 0x160CB5AB: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB5E3; /* 0x160CB5AE: je 0x160cb5e3 */
L_160CB5B0:
    ecx = MEM32(eax + 0x14); /* 0x160CB5B0: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(ecx); /* 0x160CB5B3: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + 0x8); /* 0x160CB5B5: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x160CB5B8: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x160CB5BB: push edx */
    RECOMP_ICALL(eax); /* 0x160CB5BC: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x14) = eax; /* 0x160CB5BE: mov dword ptr [ebx + 0x14], eax */
    /* cmp eax, esi */ /* 0x160CB5C1: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB5E0; /* 0x160CB5C3: jne 0x160cb5e0 */
L_160CB5C5:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 0xFFFFFFFFu; /* 0x160CB5C5: add dword ptr [ebx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB5D5; /* 0x160CB5C9: jne 0x160cb5d5 */
L_160CB5CB:
    edx = MEM32(ebx); /* 0x160CB5CB: mov edx, dword ptr [ebx] */
    eax = MEM32(edx); /* 0x160CB5CD: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160CB5CF: push 1 */
    ecx = ebx; /* 0x160CB5D1: mov ecx, ebx */
    RECOMP_ICALL(eax); /* 0x160CB5D3: call eax */
    RECOMP_FLAGS_IN();
L_160CB5D5:
    edi = POP32_VAL(esp); /* 0x160CB5D5: pop edi */
    esi = POP32_VAL(esp); /* 0x160CB5D6: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB5D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CB5D9: pop ebx */
    esp = ebp; /* 0x160CB5DA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CB5DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB5DD: ret 4 */
L_160CB5E0:
    eax = MEM32(ebp + (-0x4)); /* 0x160CB5E0: mov eax, dword ptr [ebp - 4] */
L_160CB5E3:
    esi = eax + 0x18; /* 0x160CB5E3: lea esi, [eax + 0x18] */
    ecx = 8; /* 0x160CB5E6: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CB5EB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x160CB5ED: pop edi */
    esi = POP32_VAL(esp); /* 0x160CB5EE: pop esi */
    eax = ebx; /* 0x160CB5EF: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x160CB5F1: pop ebx */
    esp = ebp; /* 0x160CB5F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CB5F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB5F5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB600u);

L_160CB600:
    ecx = MEM32(ecx + 0x14); /* 0x160CB600: mov ecx, dword ptr [ecx + 0x14] */
    /* test ecx, ecx */ /* 0x160CB603: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB60E; /* 0x160CB605: je 0x160cb60e */
L_160CB607:
    eax = MEM32(ecx); /* 0x160CB607: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CB609: mov edx, dword ptr [eax + 0xc] */
    { _itail_tgt = (uint32_t)(edx); goto _ljump; }
L_160CB60E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB60E: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CB620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB620u);

L_160CB620:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CB620: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = 3; /* 0x160CB622: mov dword ptr [eax + 4], 3 */
    MEM32(eax + 0x8) = ecx; /* 0x160CB629: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CB62C: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 1; /* 0x160CB62F: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038ED8u; /* 0x160CB636: mov dword ptr [eax], 0x16038ed8 */
    MEM32(eax + 0x14) = ecx; /* 0x160CB63C: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x160CB63F: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x160CB642: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x160CB645: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x160CB648: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x160CB64B: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x160CB64E: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x160CB651: mov dword ptr [eax + 0x30], ecx */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160CB654: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x34) = ecx; /* 0x160CB657: mov dword ptr [eax + 0x34], ecx */
    MEM32(eax + 0x38) = edx; /* 0x160CB65A: mov dword ptr [eax + 0x38], edx */
    MEM32(eax + 0x3C) = edx; /* 0x160CB65D: mov dword ptr [eax + 0x3c], edx */
    MEM32(eax + 0x40) = edx; /* 0x160CB660: mov dword ptr [eax + 0x40], edx */
    MEM32(eax + 0x44) = edx; /* 0x160CB663: mov dword ptr [eax + 0x44], edx */
    MEM32(eax + 0x48) = edx; /* 0x160CB666: mov dword ptr [eax + 0x48], edx */
    MEM32(eax + 0x4C) = ecx; /* 0x160CB669: mov dword ptr [eax + 0x4c], ecx */
    MEM32(eax + 0x50) = ecx; /* 0x160CB66C: mov dword ptr [eax + 0x50], ecx */
    MEM32(eax + 0x54) = ecx; /* 0x160CB66F: mov dword ptr [eax + 0x54], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB672: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CB680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB680u);

L_160CB680:
    edi = edi; /* 0x160CB680: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB682: push ebp */
    ebp = esp; /* 0x160CB683: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CB685: push esi */
    esi = ecx; /* 0x160CB686: mov esi, ecx */
    RECOMP_CALL(sub_160CB6B0); /* 0x160CB688: call 0x160cb6b0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CB68D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB698; /* 0x160CB691: je 0x160cb698 */
L_160CB693:
    RECOMP_CALL(sub_1605D560); /* 0x160CB693: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CB698:
    eax = esi; /* 0x160CB698: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CB69A: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB69B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB69C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB6B0u);

L_160CB6B0:
    edi = edi; /* 0x160CB6B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CB6B2: push esi */
    esi = ecx; /* 0x160CB6B3: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x160CB6B5: mov ecx, dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x160CB6B8: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x160CB6B9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x16038ED8u; /* 0x160CB6BC: mov dword ptr [esi], 0x16038ed8 */
    /* test ecx, ecx */ /* 0x160CB6C2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB6D3; /* 0x160CB6C4: je 0x160cb6d3 */
L_160CB6C6:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edi; /* 0x160CB6C6: add dword ptr [ecx + 0x10], edi */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB6D3; /* 0x160CB6C9: jne 0x160cb6d3 */
L_160CB6CB:
    eax = MEM32(ecx); /* 0x160CB6CB: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB6CD: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB6CF: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB6D1: call edx */
    RECOMP_FLAGS_IN();
L_160CB6D3:
    ecx = MEM32(esi + 0x1C); /* 0x160CB6D3: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x160CB6D6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB6E7; /* 0x160CB6D8: je 0x160cb6e7 */
L_160CB6DA:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edi; /* 0x160CB6DA: add dword ptr [ecx + 0x10], edi */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB6E7; /* 0x160CB6DD: jne 0x160cb6e7 */
L_160CB6DF:
    eax = MEM32(ecx); /* 0x160CB6DF: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB6E1: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB6E3: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB6E5: call edx */
    RECOMP_FLAGS_IN();
L_160CB6E7:
    ecx = MEM32(esi + 0x20); /* 0x160CB6E7: mov ecx, dword ptr [esi + 0x20] */
    /* test ecx, ecx */ /* 0x160CB6EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB6FB; /* 0x160CB6EC: je 0x160cb6fb */
L_160CB6EE:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edi; /* 0x160CB6EE: add dword ptr [ecx + 0x10], edi */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB6FB; /* 0x160CB6F1: jne 0x160cb6fb */
L_160CB6F3:
    eax = MEM32(ecx); /* 0x160CB6F3: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB6F5: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB6F7: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB6F9: call edx */
    RECOMP_FLAGS_IN();
L_160CB6FB:
    ecx = MEM32(esi + 0x24); /* 0x160CB6FB: mov ecx, dword ptr [esi + 0x24] */
    /* test ecx, ecx */ /* 0x160CB6FE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB70F; /* 0x160CB700: je 0x160cb70f */
L_160CB702:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edi; /* 0x160CB702: add dword ptr [ecx + 0x10], edi */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB70F; /* 0x160CB705: jne 0x160cb70f */
L_160CB707:
    eax = MEM32(ecx); /* 0x160CB707: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB709: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB70B: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB70D: call edx */
    RECOMP_FLAGS_IN();
L_160CB70F:
    ecx = MEM32(esi + 0x28); /* 0x160CB70F: mov ecx, dword ptr [esi + 0x28] */
    /* test ecx, ecx */ /* 0x160CB712: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB723; /* 0x160CB714: je 0x160cb723 */
L_160CB716:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edi; /* 0x160CB716: add dword ptr [ecx + 0x10], edi */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB723; /* 0x160CB719: jne 0x160cb723 */
L_160CB71B:
    eax = MEM32(ecx); /* 0x160CB71B: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB71D: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB71F: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB721: call edx */
    RECOMP_FLAGS_IN();
L_160CB723:
    ecx = MEM32(esi + 0x2C); /* 0x160CB723: mov ecx, dword ptr [esi + 0x2c] */
    /* test ecx, ecx */ /* 0x160CB726: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB737; /* 0x160CB728: je 0x160cb737 */
L_160CB72A:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edi; /* 0x160CB72A: add dword ptr [ecx + 0x10], edi */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB737; /* 0x160CB72D: jne 0x160cb737 */
L_160CB72F:
    eax = MEM32(ecx); /* 0x160CB72F: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB731: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB733: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB735: call edx */
    RECOMP_FLAGS_IN();
L_160CB737:
    ecx = MEM32(esi + 0x30); /* 0x160CB737: mov ecx, dword ptr [esi + 0x30] */
    /* test ecx, ecx */ /* 0x160CB73A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB74B; /* 0x160CB73C: je 0x160cb74b */
L_160CB73E:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edi; /* 0x160CB73E: add dword ptr [ecx + 0x10], edi */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB74B; /* 0x160CB741: jne 0x160cb74b */
L_160CB743:
    eax = MEM32(ecx); /* 0x160CB743: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CB745: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CB747: push 1 */
    RECOMP_ICALL(edx); /* 0x160CB749: call edx */
    RECOMP_FLAGS_IN();
L_160CB74B:
    edi = POP32_VAL(esp); /* 0x160CB74B: pop edi */
    MEM32(esi) = 0x16038E60u; /* 0x160CB74C: mov dword ptr [esi], 0x16038e60 */
    esi = POP32_VAL(esp); /* 0x160CB752: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CB753: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CB760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB760u);

L_160CB760:
    edi = edi; /* 0x160CB760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB762: push ebp */
    ebp = esp; /* 0x160CB763: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CB765: push esi */
    PUSH32(esp, edi); /* 0x160CB766: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CB767: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x160CB76A: mov esi, ecx */
    /* test edi, edi */ /* 0x160CB76C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB76E: je 0x160cb82f */
L_160CB774:
    eax = MEM32(edi + 0x4); /* 0x160CB774: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x160CB777: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB77A: jne 0x160cb82f */
L_160CB780:
    ecx = MEM32(esi + 0x14); /* 0x160CB780: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, MEM32(edi + 0x14) */ /* 0x160CB783: cmp ecx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB786: jne 0x160cb82f */
L_160CB78C:
    edx = MEM32(esi + 0x54); /* 0x160CB78C: mov edx, dword ptr [esi + 0x54] */
    /* cmp edx, MEM32(edi + 0x54) */ /* 0x160CB78F: cmp edx, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x54));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB792: jne 0x160cb82f */
L_160CB798:
    ecx = MEM32(esi + 0x18); /* 0x160CB798: mov ecx, dword ptr [esi + 0x18] */
    edx = MEM32(edi + 0x18); /* 0x160CB79B: mov edx, dword ptr [edi + 0x18] */
    /* test ecx, ecx */ /* 0x160CB79E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB7AF; /* 0x160CB7A0: je 0x160cb7af */
L_160CB7A2:
    eax = MEM32(ecx); /* 0x160CB7A2: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CB7A4: push edx */
    edx = MEM32(eax + 0x4); /* 0x160CB7A5: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CB7A8: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CB7AA: movzx eax, al */
    goto L_160CB7B6; /* 0x160CB7AD: jmp 0x160cb7b6 */
L_160CB7AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB7AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CB7B1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CB7B3: sete al */
L_160CB7B6:
    /* test LO8(eax), LO8(eax) */ /* 0x160CB7B6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB7B8: je 0x160cb82f */
L_160CB7BA:
    ecx = MEM32(esi + 0x1C); /* 0x160CB7BA: mov ecx, dword ptr [esi + 0x1c] */
    edx = MEM32(edi + 0x1C); /* 0x160CB7BD: mov edx, dword ptr [edi + 0x1c] */
    /* test ecx, ecx */ /* 0x160CB7C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB7D1; /* 0x160CB7C2: je 0x160cb7d1 */
L_160CB7C4:
    eax = MEM32(ecx); /* 0x160CB7C4: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CB7C6: push edx */
    edx = MEM32(eax + 0x4); /* 0x160CB7C7: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CB7CA: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CB7CC: movzx eax, al */
    goto L_160CB7D8; /* 0x160CB7CF: jmp 0x160cb7d8 */
L_160CB7D1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB7D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CB7D3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CB7D5: sete al */
L_160CB7D8:
    /* test LO8(eax), LO8(eax) */ /* 0x160CB7D8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB7DA: je 0x160cb82f */
L_160CB7DC:
    edx = MEM32(edi + 0x20); /* 0x160CB7DC: mov edx, dword ptr [edi + 0x20] */
    ecx = MEM32(esi + 0x20); /* 0x160CB7DF: mov ecx, dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_160CAC50); /* 0x160CB7E2: call 0x160cac50 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CB7E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB7E9: je 0x160cb82f */
L_160CB7EB:
    edx = MEM32(edi + 0x24); /* 0x160CB7EB: mov edx, dword ptr [edi + 0x24] */
    ecx = MEM32(esi + 0x24); /* 0x160CB7EE: mov ecx, dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_160CAC50); /* 0x160CB7F1: call 0x160cac50 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CB7F6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB7F8: je 0x160cb82f */
L_160CB7FA:
    edx = MEM32(edi + 0x28); /* 0x160CB7FA: mov edx, dword ptr [edi + 0x28] */
    ecx = MEM32(esi + 0x28); /* 0x160CB7FD: mov ecx, dword ptr [esi + 0x28] */
    RECOMP_CALL(sub_160CAC50); /* 0x160CB800: call 0x160cac50 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CB805: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB807: je 0x160cb82f */
L_160CB809:
    edx = MEM32(edi + 0x2C); /* 0x160CB809: mov edx, dword ptr [edi + 0x2c] */
    ecx = MEM32(esi + 0x2C); /* 0x160CB80C: mov ecx, dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_160CAC50); /* 0x160CB80F: call 0x160cac50 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CB814: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB816: je 0x160cb82f */
L_160CB818:
    edx = MEM32(edi + 0x30); /* 0x160CB818: mov edx, dword ptr [edi + 0x30] */
    ecx = MEM32(esi + 0x30); /* 0x160CB81B: mov ecx, dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_160CAC50); /* 0x160CB81E: call 0x160cac50 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CB823: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB82F; /* 0x160CB825: je 0x160cb82f */
L_160CB827:
    edi = POP32_VAL(esp); /* 0x160CB827: pop edi */
    SET_LO8(eax, 1); /* 0x160CB828: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160CB82A: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB82B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB82C: ret 4 */
L_160CB82F:
    edi = POP32_VAL(esp); /* 0x160CB82F: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CB830: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160CB832: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CB833: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB834: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB840u);

L_160CB840:
    edi = edi; /* 0x160CB840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CB842: push ebp */
    ebp = esp; /* 0x160CB843: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CB845: push ecx */
    PUSH32(esp, ebx); /* 0x160CB846: push ebx */
    PUSH32(esp, edi); /* 0x160CB847: push edi */
    edi = 0x58u; /* 0x160CB848: mov edi, 0x58 */
    ebx = ecx; /* 0x160CB84D: mov ebx, ecx */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CB84F: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CB854: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB950; /* 0x160CB856: je 0x160cb950 */
L_160CB85C:
    RECOMP_CALL(sub_160CB620); /* 0x160CB85C: call 0x160cb620 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x160CB861: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x160CB864: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB950; /* 0x160CB866: je 0x160cb950 */
L_160CB86C:
    ecx = MEM32(ebx + 0x14); /* 0x160CB86C: mov ecx, dword ptr [ebx + 0x14] */
    MEM32(eax + 0x14) = ecx; /* 0x160CB86F: mov dword ptr [eax + 0x14], ecx */
    edx = MEM32(ebx + 0x54); /* 0x160CB872: mov edx, dword ptr [ebx + 0x54] */
    PUSH32(esp, esi); /* 0x160CB875: push esi */
    MEM32(eax + 0x54) = edx; /* 0x160CB876: mov dword ptr [eax + 0x54], edx */
    esi = ebx + 0x34; /* 0x160CB879: lea esi, [ebx + 0x34] */
    edi = eax + 0x34; /* 0x160CB87C: lea edi, [eax + 0x34] */
    ecx = 8; /* 0x160CB87F: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CB884: rep movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebx + 0x18), 0 */ /* 0x160CB886: cmp dword ptr [ebx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x160CB88A: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB8A9; /* 0x160CB88B: je 0x160cb8a9 */
L_160CB88D:
    ecx = MEM32(ebx + 0x18); /* 0x160CB88D: mov ecx, dword ptr [ebx + 0x18] */
    eax = MEM32(ecx); /* 0x160CB890: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + 0x8); /* 0x160CB892: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x160CB895: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x160CB898: push edx */
    RECOMP_ICALL(eax); /* 0x160CB899: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x160CB89B: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x18) = eax; /* 0x160CB89E: mov dword ptr [ecx + 0x18], eax */
    /* test eax, eax */ /* 0x160CB8A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB93F; /* 0x160CB8A3: je 0x160cb93f */
L_160CB8A9:
    /* cmp MEM32(ebx + 0x1C), 0 */ /* 0x160CB8A9: cmp dword ptr [ebx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB8C7; /* 0x160CB8AD: je 0x160cb8c7 */
L_160CB8AF:
    ecx = MEM32(ebx + 0x1C); /* 0x160CB8AF: mov ecx, dword ptr [ebx + 0x1c] */
    edx = MEM32(ecx); /* 0x160CB8B2: mov edx, dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x160CB8B4: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x8); /* 0x160CB8B7: mov edx, dword ptr [edx + 8] */
    PUSH32(esp, eax); /* 0x160CB8BA: push eax */
    RECOMP_ICALL(edx); /* 0x160CB8BB: call edx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x160CB8BD: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x1C) = eax; /* 0x160CB8C0: mov dword ptr [ecx + 0x1c], eax */
    /* test eax, eax */ /* 0x160CB8C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB93F; /* 0x160CB8C5: je 0x160cb93f */
L_160CB8C7:
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x160CB8C7: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB8E5; /* 0x160CB8CB: je 0x160cb8e5 */
L_160CB8CD:
    ecx = MEM32(ebx + 0x20); /* 0x160CB8CD: mov ecx, dword ptr [ebx + 0x20] */
    edx = MEM32(ecx); /* 0x160CB8D0: mov edx, dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x160CB8D2: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x8); /* 0x160CB8D5: mov edx, dword ptr [edx + 8] */
    PUSH32(esp, eax); /* 0x160CB8D8: push eax */
    RECOMP_ICALL(edx); /* 0x160CB8D9: call edx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x160CB8DB: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x20) = eax; /* 0x160CB8DE: mov dword ptr [ecx + 0x20], eax */
    /* test eax, eax */ /* 0x160CB8E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB93F; /* 0x160CB8E3: je 0x160cb93f */
L_160CB8E5:
    /* cmp MEM32(ebx + 0x24), 0 */ /* 0x160CB8E5: cmp dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB903; /* 0x160CB8E9: je 0x160cb903 */
L_160CB8EB:
    ecx = MEM32(ebx + 0x24); /* 0x160CB8EB: mov ecx, dword ptr [ebx + 0x24] */
    edx = MEM32(ecx); /* 0x160CB8EE: mov edx, dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x160CB8F0: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x8); /* 0x160CB8F3: mov edx, dword ptr [edx + 8] */
    PUSH32(esp, eax); /* 0x160CB8F6: push eax */
    RECOMP_ICALL(edx); /* 0x160CB8F7: call edx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x160CB8F9: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x24) = eax; /* 0x160CB8FC: mov dword ptr [ecx + 0x24], eax */
    /* test eax, eax */ /* 0x160CB8FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB93F; /* 0x160CB901: je 0x160cb93f */
L_160CB903:
    /* cmp MEM32(ebx + 0x2C), 0 */ /* 0x160CB903: cmp dword ptr [ebx + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB921; /* 0x160CB907: je 0x160cb921 */
L_160CB909:
    ecx = MEM32(ebx + 0x2C); /* 0x160CB909: mov ecx, dword ptr [ebx + 0x2c] */
    edx = MEM32(ecx); /* 0x160CB90C: mov edx, dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x160CB90E: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x8); /* 0x160CB911: mov edx, dword ptr [edx + 8] */
    PUSH32(esp, eax); /* 0x160CB914: push eax */
    RECOMP_ICALL(edx); /* 0x160CB915: call edx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x160CB917: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x2C) = eax; /* 0x160CB91A: mov dword ptr [ecx + 0x2c], eax */
    /* test eax, eax */ /* 0x160CB91D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB93F; /* 0x160CB91F: je 0x160cb93f */
L_160CB921:
    /* cmp MEM32(ebx + 0x30), 0 */ /* 0x160CB921: cmp dword ptr [ebx + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB95A; /* 0x160CB925: je 0x160cb95a */
L_160CB927:
    ecx = MEM32(ebx + 0x30); /* 0x160CB927: mov ecx, dword ptr [ebx + 0x30] */
    edx = MEM32(ecx); /* 0x160CB92A: mov edx, dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x160CB92C: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x8); /* 0x160CB92F: mov edx, dword ptr [edx + 8] */
    PUSH32(esp, eax); /* 0x160CB932: push eax */
    RECOMP_ICALL(edx); /* 0x160CB933: call edx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x160CB935: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x30) = eax; /* 0x160CB938: mov dword ptr [ecx + 0x30], eax */
    /* test eax, eax */ /* 0x160CB93B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CB95A; /* 0x160CB93D: jne 0x160cb95a */
L_160CB93F:
    ecx = MEM32(ebp + (-0x4)); /* 0x160CB93F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CB942: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CB950; /* 0x160CB946: jne 0x160cb950 */
L_160CB948:
    edx = MEM32(ecx); /* 0x160CB948: mov edx, dword ptr [ecx] */
    eax = MEM32(edx); /* 0x160CB94A: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160CB94C: push 1 */
    RECOMP_ICALL(eax); /* 0x160CB94E: call eax */
    RECOMP_FLAGS_IN();
L_160CB950:
    edi = POP32_VAL(esp); /* 0x160CB950: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB951: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CB953: pop ebx */
    esp = ebp; /* 0x160CB954: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CB956: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB957: ret 4 */
L_160CB95A:
    eax = MEM32(ebp + 0x8); /* 0x160CB95A: mov eax, dword ptr [ebp + 8] */
    /* test LO8(eax), 1 */ /* 0x160CB95D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB98D; /* 0x160CB95F: je 0x160cb98d */
L_160CB961:
    /* cmp MEM32(ebx + 0x28), 0 */ /* 0x160CB961: cmp dword ptr [ebx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CB99D; /* 0x160CB965: je 0x160cb99d */
L_160CB967:
    ebx = MEM32(ebx + 0x28); /* 0x160CB967: mov ebx, dword ptr [ebx + 0x28] */
    edx = MEM32(ebx); /* 0x160CB96A: mov edx, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x160CB96C: push eax */
    eax = MEM32(edx + 0x8); /* 0x160CB96D: mov eax, dword ptr [edx + 8] */
    ecx = ebx; /* 0x160CB970: mov ecx, ebx */
    RECOMP_ICALL(eax); /* 0x160CB972: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x160CB974: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x28) = eax; /* 0x160CB977: mov dword ptr [ecx + 0x28], eax */
    /* test eax, eax */ /* 0x160CB97A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CB99D; /* 0x160CB97C: jne 0x160cb99d */
L_160CB97E:
    RECOMP_CALL(sub_1605C940); /* 0x160CB97E: call 0x1605c940 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160CB983: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CB984: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CB986: pop ebx */
    esp = ebp; /* 0x160CB987: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CB989: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB98A: ret 4 */
L_160CB98D:
    ebx = MEM32(ebx + 0x28); /* 0x160CB98D: mov ebx, dword ptr [ebx + 0x28] */
    /* test ebx, ebx */ /* 0x160CB990: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB997; /* 0x160CB992: je 0x160cb997 */
L_160CB994:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1; /* 0x160CB994: inc dword ptr [ebx + 0x10] */
    _flag_k = FK_INC;
L_160CB997:
    edx = MEM32(ebp + (-0x4)); /* 0x160CB997: mov edx, dword ptr [ebp - 4] */
    MEM32(edx + 0x28) = ebx; /* 0x160CB99A: mov dword ptr [edx + 0x28], ebx */
L_160CB99D:
    eax = MEM32(ebp + (-0x4)); /* 0x160CB99D: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x160CB9A0: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CB9A1: pop ebx */
    esp = ebp; /* 0x160CB9A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CB9A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CB9A5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CB9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CB9B0u);

L_160CB9B0:
    edi = edi; /* 0x160CB9B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CB9B2: push esi */
    esi = ecx; /* 0x160CB9B3: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x160CB9B5: mov ecx, dword ptr [esi + 0x18] */
    /* test ecx, ecx */ /* 0x160CB9B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB9C3; /* 0x160CB9BA: je 0x160cb9c3 */
L_160CB9BC:
    eax = MEM32(ecx); /* 0x160CB9BC: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CB9BE: mov edx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(edx); /* 0x160CB9C1: call edx */
    RECOMP_FLAGS_IN();
L_160CB9C3:
    ecx = MEM32(esi + 0x1C); /* 0x160CB9C3: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x160CB9C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB9D1; /* 0x160CB9C8: je 0x160cb9d1 */
L_160CB9CA:
    eax = MEM32(ecx); /* 0x160CB9CA: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CB9CC: mov edx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(edx); /* 0x160CB9CF: call edx */
    RECOMP_FLAGS_IN();
L_160CB9D1:
    ecx = MEM32(esi + 0x20); /* 0x160CB9D1: mov ecx, dword ptr [esi + 0x20] */
    /* test ecx, ecx */ /* 0x160CB9D4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB9DF; /* 0x160CB9D6: je 0x160cb9df */
L_160CB9D8:
    eax = MEM32(ecx); /* 0x160CB9D8: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CB9DA: mov edx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(edx); /* 0x160CB9DD: call edx */
    RECOMP_FLAGS_IN();
L_160CB9DF:
    ecx = MEM32(esi + 0x24); /* 0x160CB9DF: mov ecx, dword ptr [esi + 0x24] */
    /* test ecx, ecx */ /* 0x160CB9E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB9ED; /* 0x160CB9E4: je 0x160cb9ed */
L_160CB9E6:
    eax = MEM32(ecx); /* 0x160CB9E6: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CB9E8: mov edx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(edx); /* 0x160CB9EB: call edx */
    RECOMP_FLAGS_IN();
L_160CB9ED:
    ecx = MEM32(esi + 0x28); /* 0x160CB9ED: mov ecx, dword ptr [esi + 0x28] */
    /* test ecx, ecx */ /* 0x160CB9F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CB9FB; /* 0x160CB9F2: je 0x160cb9fb */
L_160CB9F4:
    eax = MEM32(ecx); /* 0x160CB9F4: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CB9F6: mov edx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(edx); /* 0x160CB9F9: call edx */
    RECOMP_FLAGS_IN();
L_160CB9FB:
    ecx = MEM32(esi + 0x2C); /* 0x160CB9FB: mov ecx, dword ptr [esi + 0x2c] */
    /* test ecx, ecx */ /* 0x160CB9FE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBA09; /* 0x160CBA00: je 0x160cba09 */
L_160CBA02:
    eax = MEM32(ecx); /* 0x160CBA02: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CBA04: mov edx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(edx); /* 0x160CBA07: call edx */
    RECOMP_FLAGS_IN();
L_160CBA09:
    ecx = MEM32(esi + 0x30); /* 0x160CBA09: mov ecx, dword ptr [esi + 0x30] */
    esi = POP32_VAL(esp); /* 0x160CBA0C: pop esi */
    /* test ecx, ecx */ /* 0x160CBA0D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBA18; /* 0x160CBA0F: je 0x160cba18 */
L_160CBA11:
    eax = MEM32(ecx); /* 0x160CBA11: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CBA13: mov edx, dword ptr [eax + 0xc] */
    { _itail_tgt = (uint32_t)(edx); goto _ljump; }
L_160CBA18:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CBA18: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CBA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBA20u);

L_160CBA20:
    edi = edi; /* 0x160CBA20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBA22: push ebp */
    ebp = esp; /* 0x160CBA23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CBA25: push esi */
    esi = ecx; /* 0x160CBA26: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x160CBA28: mov ecx, dword ptr [esi + 0x18] */
    MEM32(esi) = 0x16038EF0u; /* 0x160CBA2B: mov dword ptr [esi], 0x16038ef0 */
    /* test ecx, ecx */ /* 0x160CBA31: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBA43; /* 0x160CBA33: je 0x160cba43 */
L_160CBA35:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CBA35: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CBA43; /* 0x160CBA39: jne 0x160cba43 */
L_160CBA3B:
    eax = MEM32(ecx); /* 0x160CBA3B: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CBA3D: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CBA3F: push 1 */
    RECOMP_ICALL(edx); /* 0x160CBA41: call edx */
    RECOMP_FLAGS_IN();
L_160CBA43:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CBA43: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x16038E60u; /* 0x160CBA47: mov dword ptr [esi], 0x16038e60 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBA54; /* 0x160CBA4D: je 0x160cba54 */
L_160CBA4F:
    RECOMP_CALL(sub_1605D560); /* 0x160CBA4F: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CBA54:
    eax = esi; /* 0x160CBA54: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CBA56: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CBA57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBA58: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CBA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBA60u);

L_160CBA60:
    edi = edi; /* 0x160CBA60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBA62: push ebp */
    ebp = esp; /* 0x160CBA63: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x160CBA65: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x160CBA68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBA74; /* 0x160CBA6A: je 0x160cba74 */
L_160CBA6C:
    edx = MEM32(eax + 0x4); /* 0x160CBA6C: mov edx, dword ptr [eax + 4] */
    /* cmp edx, MEM32(ecx + 0x4) */ /* 0x160CBA6F: cmp edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CBA7A; /* 0x160CBA72: je 0x160cba7a */
L_160CBA74:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CBA74: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160CBA76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBA77: ret 4 */
L_160CBA7A:
    edx = MEM32(ecx + 0x14); /* 0x160CBA7A: mov edx, dword ptr [ecx + 0x14] */
    /* cmp edx, MEM32(eax + 0x14) */ /* 0x160CBA7D: cmp edx, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBA74; /* 0x160CBA80: jne 0x160cba74 */
L_160CBA82:
    ecx = MEM32(ecx + 0x18); /* 0x160CBA82: mov ecx, dword ptr [ecx + 0x18] */
    eax = MEM32(eax + 0x18); /* 0x160CBA85: mov eax, dword ptr [eax + 0x18] */
    /* test ecx, ecx */ /* 0x160CBA88: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBAA0; /* 0x160CBA8A: je 0x160cbaa0 */
L_160CBA8C:
    edx = MEM32(ecx); /* 0x160CBA8C: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x160CBA8E: push eax */
    eax = MEM32(edx + 0x4); /* 0x160CBA8F: mov eax, dword ptr [edx + 4] */
    RECOMP_ICALL(eax); /* 0x160CBA92: call eax */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO8(eax); /* 0x160CBA94: movzx ecx, al */
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CBA97: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CBA99: setne al */
    ebp = POP32_VAL(esp); /* 0x160CBA9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBA9D: ret 4 */
L_160CBAA0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CBAA0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x160CBAA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CBAA4: sete cl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CBAA7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CBAA9: setne al */
    ebp = POP32_VAL(esp); /* 0x160CBAAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBAAD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CBAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBAC0u);

L_160CBAC0:
    edi = edi; /* 0x160CBAC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBAC2: push ebp */
    ebp = esp; /* 0x160CBAC3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160CBAC5: push ebx */
    PUSH32(esp, esi); /* 0x160CBAC6: push esi */
    PUSH32(esp, edi); /* 0x160CBAC7: push edi */
    edi = 0x1Cu; /* 0x160CBAC8: mov edi, 0x1c */
    ebx = ecx; /* 0x160CBACD: mov ebx, ecx */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CBACF: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160CBAD4: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CBAD6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x160CBAD8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CBB2C; /* 0x160CBADA: je 0x160cbb2c */
L_160CBADC:
    MEM32(esi + 0x4) = 4; /* 0x160CBADC: mov dword ptr [esi + 4], 4 */
    MEM32(esi + 0x8) = edi; /* 0x160CBAE3: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x160CBAE6: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 1; /* 0x160CBAE9: mov dword ptr [esi + 0x10], 1 */
    MEM32(esi) = 0x16038EF0u; /* 0x160CBAF0: mov dword ptr [esi], 0x16038ef0 */
    MEM32(esi + 0x14) = edi; /* 0x160CBAF6: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x18) = edi; /* 0x160CBAF9: mov dword ptr [esi + 0x18], edi */
    eax = MEM32(ebx + 0x14); /* 0x160CBAFC: mov eax, dword ptr [ebx + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x160CBAFF: mov dword ptr [esi + 0x14], eax */
    /* cmp MEM32(ebx + 0x18), edi */ /* 0x160CBB02: cmp dword ptr [ebx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CBB35; /* 0x160CBB05: je 0x160cbb35 */
L_160CBB07:
    ecx = MEM32(ebx + 0x18); /* 0x160CBB07: mov ecx, dword ptr [ebx + 0x18] */
    edx = MEM32(ecx); /* 0x160CBB0A: mov edx, dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x160CBB0C: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x8); /* 0x160CBB0F: mov edx, dword ptr [edx + 8] */
    PUSH32(esp, eax); /* 0x160CBB12: push eax */
    RECOMP_ICALL(edx); /* 0x160CBB13: call edx */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = eax; /* 0x160CBB15: mov dword ptr [esi + 0x18], eax */
    /* cmp eax, edi */ /* 0x160CBB18: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBB35; /* 0x160CBB1A: jne 0x160cbb35 */
L_160CBB1C:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 0xFFFFFFFFu; /* 0x160CBB1C: add dword ptr [esi + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CBB2C; /* 0x160CBB20: jne 0x160cbb2c */
L_160CBB22:
    eax = MEM32(esi); /* 0x160CBB22: mov eax, dword ptr [esi] */
    edx = MEM32(eax); /* 0x160CBB24: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CBB26: push 1 */
    ecx = esi; /* 0x160CBB28: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CBB2A: call edx */
    RECOMP_FLAGS_IN();
L_160CBB2C:
    edi = POP32_VAL(esp); /* 0x160CBB2C: pop edi */
    esi = POP32_VAL(esp); /* 0x160CBB2D: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CBB2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CBB30: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CBB31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBB32: ret 4 */
L_160CBB35:
    edi = POP32_VAL(esp); /* 0x160CBB35: pop edi */
    eax = esi; /* 0x160CBB36: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CBB38: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CBB39: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CBB3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBB3B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CBB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBB50u);

L_160CBB50:
    ecx = MEM32(ecx + 0x18); /* 0x160CBB50: mov ecx, dword ptr [ecx + 0x18] */
    /* test ecx, ecx */ /* 0x160CBB53: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBB5E; /* 0x160CBB55: je 0x160cbb5e */
L_160CBB57:
    eax = MEM32(ecx); /* 0x160CBB57: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CBB59: mov edx, dword ptr [eax + 0xc] */
    { _itail_tgt = (uint32_t)(edx); goto _ljump; }
L_160CBB5E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CBB5E: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CBB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBB70u);

L_160CBB70:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CBB70: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = 5; /* 0x160CBB72: mov dword ptr [eax + 4], 5 */
    MEM32(eax + 0x8) = ecx; /* 0x160CBB79: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CBB7C: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax) = 0x16038F08u; /* 0x160CBB7F: mov dword ptr [eax], 0x16038f08 */
    MEM32(eax + 0x14) = ecx; /* 0x160CBB85: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x160CBB88: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x160CBB8B: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x160CBB8E: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x160CBB91: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x160CBB94: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x160CBB97: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x34) = ecx; /* 0x160CBB9A: mov dword ptr [eax + 0x34], ecx */
    edx = 1; /* 0x160CBB9D: mov edx, 1 */
    MEM32(eax + 0x10) = edx; /* 0x160CBBA2: mov dword ptr [eax + 0x10], edx */
    MEM8(eax + 0x2C) = (uint8_t)(LO8(edx)); /* 0x160CBBA5: mov byte ptr [eax + 0x2c], dl */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160CBBA8: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x38) = ecx; /* 0x160CBBAB: mov dword ptr [eax + 0x38], ecx */
    MEM32(eax + 0x3C) = edx; /* 0x160CBBAE: mov dword ptr [eax + 0x3c], edx */
    MEM32(eax + 0x40) = edx; /* 0x160CBBB1: mov dword ptr [eax + 0x40], edx */
    MEM32(eax + 0x44) = edx; /* 0x160CBBB4: mov dword ptr [eax + 0x44], edx */
    MEM32(eax + 0x48) = edx; /* 0x160CBBB7: mov dword ptr [eax + 0x48], edx */
    MEM32(eax + 0x4C) = edx; /* 0x160CBBBA: mov dword ptr [eax + 0x4c], edx */
    MEM32(eax + 0x50) = ecx; /* 0x160CBBBD: mov dword ptr [eax + 0x50], ecx */
    MEM32(eax + 0x54) = ecx; /* 0x160CBBC0: mov dword ptr [eax + 0x54], ecx */
    MEM32(eax + 0x58) = ecx; /* 0x160CBBC3: mov dword ptr [eax + 0x58], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CBBC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CBBD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBBD0u);

L_160CBBD0:
    edi = edi; /* 0x160CBBD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBBD2: push ebp */
    ebp = esp; /* 0x160CBBD3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CBBD5: push esi */
    esi = ecx; /* 0x160CBBD6: mov esi, ecx */
    ecx = MEM32(esi + 0x24); /* 0x160CBBD8: mov ecx, dword ptr [esi + 0x24] */
    MEM32(esi) = 0x16038F08u; /* 0x160CBBDB: mov dword ptr [esi], 0x16038f08 */
    /* test ecx, ecx */ /* 0x160CBBE1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBBF3; /* 0x160CBBE3: je 0x160cbbf3 */
L_160CBBE5:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CBBE5: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CBBF3; /* 0x160CBBE9: jne 0x160cbbf3 */
L_160CBBEB:
    eax = MEM32(ecx); /* 0x160CBBEB: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CBBED: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CBBEF: push 1 */
    RECOMP_ICALL(edx); /* 0x160CBBF1: call edx */
    RECOMP_FLAGS_IN();
L_160CBBF3:
    ecx = MEM32(esi + 0x28); /* 0x160CBBF3: mov ecx, dword ptr [esi + 0x28] */
    /* test ecx, ecx */ /* 0x160CBBF6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBC08; /* 0x160CBBF8: je 0x160cbc08 */
L_160CBBFA:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CBBFA: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CBC08; /* 0x160CBBFE: jne 0x160cbc08 */
L_160CBC00:
    eax = MEM32(ecx); /* 0x160CBC00: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CBC02: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CBC04: push 1 */
    RECOMP_ICALL(edx); /* 0x160CBC06: call edx */
    RECOMP_FLAGS_IN();
L_160CBC08:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CBC08: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x16038E60u; /* 0x160CBC0C: mov dword ptr [esi], 0x16038e60 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBC19; /* 0x160CBC12: je 0x160cbc19 */
L_160CBC14:
    RECOMP_CALL(sub_1605D560); /* 0x160CBC14: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CBC19:
    eax = esi; /* 0x160CBC19: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CBC1B: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CBC1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBC1D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CBC30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBC30u);

L_160CBC30:
    edi = edi; /* 0x160CBC30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBC32: push ebp */
    ebp = esp; /* 0x160CBC33: mov ebp, esp */
    MEM32(eax + 0x14) = ecx; /* 0x160CBC35: mov dword ptr [eax + 0x14], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160CBC38: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x20) = ecx; /* 0x160CBC3B: mov dword ptr [eax + 0x20], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x160CBC3E: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x24) = ecx; /* 0x160CBC41: mov dword ptr [eax + 0x24], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x160CBC44: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x160CBC47: push esi */
    esi = MEM32(ebp + 0x18); /* 0x160CBC48: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CBC4B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x28) = ecx; /* 0x160CBC4D: mov dword ptr [eax + 0x28], ecx */
    SET_LO8(ecx, MEM8(ebp + 0x14)); /* 0x160CBC50: mov cl, byte ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x160CBC53: push edi */
    MEM8(eax + 0x2C) = (uint8_t)(LO8(ecx)); /* 0x160CBC54: mov byte ptr [eax + 0x2c], cl */
    edi = eax + 0x38; /* 0x160CBC57: lea edi, [eax + 0x38] */
    ecx = 8; /* 0x160CBC5A: mov ecx, 8 */
    MEM32(eax + 0x4) = 5; /* 0x160CBC5F: mov dword ptr [eax + 4], 5 */
    MEM32(eax + 0x8) = edx; /* 0x160CBC66: mov dword ptr [eax + 8], edx */
    MEM32(eax + 0xC) = edx; /* 0x160CBC69: mov dword ptr [eax + 0xc], edx */
    MEM32(eax + 0x10) = 1; /* 0x160CBC6C: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038F08u; /* 0x160CBC73: mov dword ptr [eax], 0x16038f08 */
    MEM32(eax + 0x18) = edx; /* 0x160CBC79: mov dword ptr [eax + 0x18], edx */
    MEM32(eax + 0x1C) = edx; /* 0x160CBC7C: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x30) = edx; /* 0x160CBC7F: mov dword ptr [eax + 0x30], edx */
    MEM32(eax + 0x34) = edx; /* 0x160CBC82: mov dword ptr [eax + 0x34], edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CBC85: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x160CBC87: pop edi */
    MEM32(eax + 0x58) = edx; /* 0x160CBC88: mov dword ptr [eax + 0x58], edx */
    esi = POP32_VAL(esp); /* 0x160CBC8B: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CBC8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CBC8D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_160CBCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBCA0u);

L_160CBCA0:
    edi = edi; /* 0x160CBCA0: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CBCA2: push esi */
    esi = ecx; /* 0x160CBCA3: mov esi, ecx */
    ecx = MEM32(esi + 0x24); /* 0x160CBCA5: mov ecx, dword ptr [esi + 0x24] */
    MEM32(esi) = 0x16038F08u; /* 0x160CBCA8: mov dword ptr [esi], 0x16038f08 */
    /* test ecx, ecx */ /* 0x160CBCAE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBCC0; /* 0x160CBCB0: je 0x160cbcc0 */
L_160CBCB2:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CBCB2: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CBCC0; /* 0x160CBCB6: jne 0x160cbcc0 */
L_160CBCB8:
    eax = MEM32(ecx); /* 0x160CBCB8: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CBCBA: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CBCBC: push 1 */
    RECOMP_ICALL(edx); /* 0x160CBCBE: call edx */
    RECOMP_FLAGS_IN();
L_160CBCC0:
    ecx = MEM32(esi + 0x28); /* 0x160CBCC0: mov ecx, dword ptr [esi + 0x28] */
    /* test ecx, ecx */ /* 0x160CBCC3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBCD5; /* 0x160CBCC5: je 0x160cbcd5 */
L_160CBCC7:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CBCC7: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CBCD5; /* 0x160CBCCB: jne 0x160cbcd5 */
L_160CBCCD:
    eax = MEM32(ecx); /* 0x160CBCCD: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CBCCF: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CBCD1: push 1 */
    RECOMP_ICALL(edx); /* 0x160CBCD3: call edx */
    RECOMP_FLAGS_IN();
L_160CBCD5:
    MEM32(esi) = 0x16038E60u; /* 0x160CBCD5: mov dword ptr [esi], 0x16038e60 */
    esi = POP32_VAL(esp); /* 0x160CBCDB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CBCDC: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CBCF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBCF0u);

L_160CBCF0:
    edi = edi; /* 0x160CBCF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBCF2: push ebp */
    ebp = esp; /* 0x160CBCF3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CBCF5: push esi */
    PUSH32(esp, edi); /* 0x160CBCF6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CBCF7: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x160CBCFA: mov esi, ecx */
    /* test edi, edi */ /* 0x160CBCFC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBCFE: je 0x160cbd6d */
L_160CBD00:
    eax = MEM32(edi + 0x4); /* 0x160CBD00: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x160CBD03: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD06: jne 0x160cbd6d */
L_160CBD08:
    ecx = MEM32(esi + 0x18); /* 0x160CBD08: mov ecx, dword ptr [esi + 0x18] */
    /* cmp ecx, MEM32(edi + 0x18) */ /* 0x160CBD0B: cmp ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD0E: jne 0x160cbd6d */
L_160CBD10:
    edx = MEM32(esi + 0x1C); /* 0x160CBD10: mov edx, dword ptr [esi + 0x1c] */
    /* cmp edx, MEM32(edi + 0x1C) */ /* 0x160CBD13: cmp edx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD16: jne 0x160cbd6d */
L_160CBD18:
    eax = MEM32(esi + 0x20); /* 0x160CBD18: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, MEM32(edi + 0x20) */ /* 0x160CBD1B: cmp eax, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD1E: jne 0x160cbd6d */
L_160CBD20:
    SET_LO8(ecx, MEM8(esi + 0x2C)); /* 0x160CBD20: mov cl, byte ptr [esi + 0x2c] */
    /* cmp LO8(ecx), MEM8(edi + 0x2C) */ /* 0x160CBD23: cmp cl, byte ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x2C)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD26: jne 0x160cbd6d */
L_160CBD28:
    edx = MEM32(esi + 0x30); /* 0x160CBD28: mov edx, dword ptr [esi + 0x30] */
    /* cmp edx, MEM32(edi + 0x30) */ /* 0x160CBD2B: cmp edx, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD2E: jne 0x160cbd6d */
L_160CBD30:
    eax = MEM32(esi + 0x34); /* 0x160CBD30: mov eax, dword ptr [esi + 0x34] */
    /* cmp eax, MEM32(edi + 0x34) */ /* 0x160CBD33: cmp eax, dword ptr [edi + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD36: jne 0x160cbd6d */
L_160CBD38:
    eax = MEM32(edi + 0x14); /* 0x160CBD38: mov eax, dword ptr [edi + 0x14] */
    ecx = MEM32(esi + 0x14); /* 0x160CBD3B: mov ecx, dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_160CE610); /* 0x160CBD3E: call 0x160ce610 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CBD43: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD45: jne 0x160cbd6d */
L_160CBD47:
    edx = MEM32(edi + 0x24); /* 0x160CBD47: mov edx, dword ptr [edi + 0x24] */
    ecx = MEM32(esi + 0x24); /* 0x160CBD4A: mov ecx, dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_160CAC50); /* 0x160CBD4D: call 0x160cac50 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CBD52: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD54: je 0x160cbd6d */
L_160CBD56:
    edx = MEM32(edi + 0x28); /* 0x160CBD56: mov edx, dword ptr [edi + 0x28] */
    ecx = MEM32(esi + 0x28); /* 0x160CBD59: mov ecx, dword ptr [esi + 0x28] */
    RECOMP_CALL(sub_160CAC50); /* 0x160CBD5C: call 0x160cac50 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CBD61: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBD6D; /* 0x160CBD63: je 0x160cbd6d */
L_160CBD65:
    edi = POP32_VAL(esp); /* 0x160CBD65: pop edi */
    SET_LO8(eax, 1); /* 0x160CBD66: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160CBD68: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CBD69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBD6A: ret 4 */
L_160CBD6D:
    edi = POP32_VAL(esp); /* 0x160CBD6D: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CBD6E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160CBD70: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CBD71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBD72: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CBD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBD80u);

L_160CBD80:
    edi = edi; /* 0x160CBD80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBD82: push ebp */
    ebp = esp; /* 0x160CBD83: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CBD85: push ecx */
    PUSH32(esp, ebx); /* 0x160CBD86: push ebx */
    PUSH32(esp, esi); /* 0x160CBD87: push esi */
    PUSH32(esp, edi); /* 0x160CBD88: push edi */
    esi = ecx; /* 0x160CBD89: mov esi, ecx */
    edi = 0x5Cu; /* 0x160CBD8B: mov edi, 0x5c */
    MEM32(ebp + (-0x4)) = esi; /* 0x160CBD90: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CBD93: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CBD98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBE32; /* 0x160CBD9A: je 0x160cbe32 */
L_160CBDA0:
    RECOMP_CALL(sub_160CBB70); /* 0x160CBDA0: call 0x160cbb70 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160CBDA5: mov ebx, eax */
    /* test ebx, ebx */ /* 0x160CBDA7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBE32; /* 0x160CBDA9: je 0x160cbe32 */
L_160CBDAF:
    eax = MEM32(esi + 0x14); /* 0x160CBDAF: mov eax, dword ptr [esi + 0x14] */
    MEM32(ebx + 0x14) = eax; /* 0x160CBDB2: mov dword ptr [ebx + 0x14], eax */
    ecx = MEM32(esi + 0x18); /* 0x160CBDB5: mov ecx, dword ptr [esi + 0x18] */
    MEM32(ebx + 0x18) = ecx; /* 0x160CBDB8: mov dword ptr [ebx + 0x18], ecx */
    edx = MEM32(esi + 0x1C); /* 0x160CBDBB: mov edx, dword ptr [esi + 0x1c] */
    MEM32(ebx + 0x1C) = edx; /* 0x160CBDBE: mov dword ptr [ebx + 0x1c], edx */
    eax = MEM32(esi + 0x20); /* 0x160CBDC1: mov eax, dword ptr [esi + 0x20] */
    MEM32(ebx + 0x20) = eax; /* 0x160CBDC4: mov dword ptr [ebx + 0x20], eax */
    SET_LO8(ecx, MEM8(esi + 0x2C)); /* 0x160CBDC7: mov cl, byte ptr [esi + 0x2c] */
    MEM8(ebx + 0x2C) = (uint8_t)(LO8(ecx)); /* 0x160CBDCA: mov byte ptr [ebx + 0x2c], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x160CBDCD: add esi, 0x38 */
    _flag_k = FK_ADD;
    edi = ebx + 0x38; /* 0x160CBDD0: lea edi, [ebx + 0x38] */
    ecx = 8; /* 0x160CBDD3: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CBDD8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x4)); /* 0x160CBDDA: mov esi, dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x58); /* 0x160CBDDD: mov edx, dword ptr [esi + 0x58] */
    edi = MEM32(ebp + 0x8); /* 0x160CBDE0: mov edi, dword ptr [ebp + 8] */
    MEM32(ebx + 0x58) = edx; /* 0x160CBDE3: mov dword ptr [ebx + 0x58], edx */
    eax = MEM32(esi + 0x30); /* 0x160CBDE6: mov eax, dword ptr [esi + 0x30] */
    MEM32(ebx + 0x30) = eax; /* 0x160CBDE9: mov dword ptr [ebx + 0x30], eax */
    ecx = MEM32(esi + 0x34); /* 0x160CBDEC: mov ecx, dword ptr [esi + 0x34] */
    MEM32(ebx + 0x34) = ecx; /* 0x160CBDEF: mov dword ptr [ebx + 0x34], ecx */
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x160CBDF2: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CBE0A; /* 0x160CBDF6: je 0x160cbe0a */
L_160CBDF8:
    ecx = MEM32(esi + 0x24); /* 0x160CBDF8: mov ecx, dword ptr [esi + 0x24] */
    edx = MEM32(ecx); /* 0x160CBDFB: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x160CBDFD: mov eax, dword ptr [edx + 8] */
    PUSH32(esp, edi); /* 0x160CBE00: push edi */
    RECOMP_ICALL(eax); /* 0x160CBE01: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x24) = eax; /* 0x160CBE03: mov dword ptr [ebx + 0x24], eax */
    /* test eax, eax */ /* 0x160CBE06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBE22; /* 0x160CBE08: je 0x160cbe22 */
L_160CBE0A:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x160CBE0A: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CBE3D; /* 0x160CBE0E: je 0x160cbe3d */
L_160CBE10:
    ecx = MEM32(esi + 0x28); /* 0x160CBE10: mov ecx, dword ptr [esi + 0x28] */
    edx = MEM32(ecx); /* 0x160CBE13: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x160CBE15: mov eax, dword ptr [edx + 8] */
    PUSH32(esp, edi); /* 0x160CBE18: push edi */
    RECOMP_ICALL(eax); /* 0x160CBE19: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x28) = eax; /* 0x160CBE1B: mov dword ptr [ebx + 0x28], eax */
    /* test eax, eax */ /* 0x160CBE1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CBE3D; /* 0x160CBE20: jne 0x160cbe3d */
L_160CBE22:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 0xFFFFFFFFu; /* 0x160CBE22: add dword ptr [ebx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CBE32; /* 0x160CBE26: jne 0x160cbe32 */
L_160CBE28:
    edx = MEM32(ebx); /* 0x160CBE28: mov edx, dword ptr [ebx] */
    eax = MEM32(edx); /* 0x160CBE2A: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160CBE2C: push 1 */
    ecx = ebx; /* 0x160CBE2E: mov ecx, ebx */
    RECOMP_ICALL(eax); /* 0x160CBE30: call eax */
    RECOMP_FLAGS_IN();
L_160CBE32:
    edi = POP32_VAL(esp); /* 0x160CBE32: pop edi */
    esi = POP32_VAL(esp); /* 0x160CBE33: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CBE34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CBE36: pop ebx */
    esp = ebp; /* 0x160CBE37: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CBE39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBE3A: ret 4 */
L_160CBE3D:
    edi = POP32_VAL(esp); /* 0x160CBE3D: pop edi */
    esi = POP32_VAL(esp); /* 0x160CBE3E: pop esi */
    eax = ebx; /* 0x160CBE3F: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x160CBE41: pop ebx */
    esp = ebp; /* 0x160CBE42: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CBE44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBE45: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CBE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBE50u);

L_160CBE50:
    edi = edi; /* 0x160CBE50: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CBE52: push esi */
    esi = ecx; /* 0x160CBE53: mov esi, ecx */
    ecx = MEM32(esi + 0x24); /* 0x160CBE55: mov ecx, dword ptr [esi + 0x24] */
    /* test ecx, ecx */ /* 0x160CBE58: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBE63; /* 0x160CBE5A: je 0x160cbe63 */
L_160CBE5C:
    eax = MEM32(ecx); /* 0x160CBE5C: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CBE5E: mov edx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(edx); /* 0x160CBE61: call edx */
    RECOMP_FLAGS_IN();
L_160CBE63:
    ecx = MEM32(esi + 0x28); /* 0x160CBE63: mov ecx, dword ptr [esi + 0x28] */
    esi = POP32_VAL(esp); /* 0x160CBE66: pop esi */
    /* test ecx, ecx */ /* 0x160CBE67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBE72; /* 0x160CBE69: je 0x160cbe72 */
L_160CBE6B:
    eax = MEM32(ecx); /* 0x160CBE6B: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CBE6D: mov edx, dword ptr [eax + 0xc] */
    { _itail_tgt = (uint32_t)(edx); goto _ljump; }
L_160CBE72:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CBE72: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CBE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBE80u);

L_160CBE80:
    MEM32(eax + 0x4) = 6; /* 0x160CBE80: mov dword ptr [eax + 4], 6 */
    MEM32(eax + 0x10) = 1; /* 0x160CBE87: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038F20u; /* 0x160CBE8E: mov dword ptr [eax], 0x16038f20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CBE94: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x160CBE96: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CBE99: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x160CBE9C: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x160CBE9F: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x160CBEA2: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x18) = 3; /* 0x160CBEA5: mov dword ptr [eax + 0x18], 3 */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160CBEAC: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x28) = edx; /* 0x160CBEAF: mov dword ptr [eax + 0x28], edx */
    MEM32(eax + 0x2C) = 0x20u; /* 0x160CBEB2: mov dword ptr [eax + 0x2c], 0x20 */
    MEM32(eax + 0x30) = ecx; /* 0x160CBEB9: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x34) = edx; /* 0x160CBEBC: mov dword ptr [eax + 0x34], edx */
    MEM32(eax + 0x38) = edx; /* 0x160CBEBF: mov dword ptr [eax + 0x38], edx */
    MEM32(eax + 0x3C) = edx; /* 0x160CBEC2: mov dword ptr [eax + 0x3c], edx */
    MEM32(eax + 0x40) = edx; /* 0x160CBEC5: mov dword ptr [eax + 0x40], edx */
    MEM32(eax + 0x44) = edx; /* 0x160CBEC8: mov dword ptr [eax + 0x44], edx */
    MEM32(eax + 0x48) = ecx; /* 0x160CBECB: mov dword ptr [eax + 0x48], ecx */
    MEM32(eax + 0x4C) = ecx; /* 0x160CBECE: mov dword ptr [eax + 0x4c], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CBED1: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CBEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBEE0u);

L_160CBEE0:
    edi = edi; /* 0x160CBEE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBEE2: push ebp */
    ebp = esp; /* 0x160CBEE3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CBEE5: push esi */
    esi = ecx; /* 0x160CBEE6: mov esi, ecx */
    /* cmp MEM32(esi + 0x18), 4 */ /* 0x160CBEE8: cmp dword ptr [esi + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x16038F20u; /* 0x160CBEEC: mov dword ptr [esi], 0x16038f20 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBF09; /* 0x160CBEF2: jne 0x160cbf09 */
L_160CBEF4:
    ecx = MEM32(esi + 0x20); /* 0x160CBEF4: mov ecx, dword ptr [esi + 0x20] */
    /* test ecx, ecx */ /* 0x160CBEF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBF09; /* 0x160CBEF9: je 0x160cbf09 */
L_160CBEFB:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CBEFB: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CBF09; /* 0x160CBEFF: jne 0x160cbf09 */
L_160CBF01:
    eax = MEM32(ecx); /* 0x160CBF01: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CBF03: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CBF05: push 1 */
    RECOMP_ICALL(edx); /* 0x160CBF07: call edx */
    RECOMP_FLAGS_IN();
L_160CBF09:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CBF09: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x16038E60u; /* 0x160CBF0D: mov dword ptr [esi], 0x16038e60 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CBF1A; /* 0x160CBF13: je 0x160cbf1a */
L_160CBF15:
    RECOMP_CALL(sub_1605D560); /* 0x160CBF15: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CBF1A:
    eax = esi; /* 0x160CBF1A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CBF1C: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CBF1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBF1E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CBF30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CBF30u);

L_160CBF30:
    edi = edi; /* 0x160CBF30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CBF32: push ebp */
    ebp = esp; /* 0x160CBF33: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CBF35: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = 6; /* 0x160CBF37: mov dword ptr [esi + 4], 6 */
    MEM32(esi + 0x8) = edx; /* 0x160CBF3E: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x160CBF41: mov dword ptr [esi + 0xc], edx */
    MEM32(esi + 0x10) = 1; /* 0x160CBF44: mov dword ptr [esi + 0x10], 1 */
    MEM32(esi) = 0x16038F20u; /* 0x160CBF4B: mov dword ptr [esi], 0x16038f20 */
    ecx = MEM32(eax); /* 0x160CBF51: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x18) = ecx; /* 0x160CBF53: mov dword ptr [esi + 0x18], ecx */
    ecx = MEM32(eax + 0x4); /* 0x160CBF56: mov ecx, dword ptr [eax + 4] */
    MEM32(esi + 0x1C) = ecx; /* 0x160CBF59: mov dword ptr [esi + 0x1c], ecx */
    ecx = MEM32(eax + 0x8); /* 0x160CBF5C: mov ecx, dword ptr [eax + 8] */
    MEM32(esi + 0x20) = ecx; /* 0x160CBF5F: mov dword ptr [esi + 0x20], ecx */
    eax = MEM32(eax + 0xC); /* 0x160CBF62: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x160CBF65: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x24) = eax; /* 0x160CBF68: mov dword ptr [esi + 0x24], eax */
    /* cmp MEM32(esi + 0x18), 4 */ /* 0x160CBF6B: cmp dword ptr [esi + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x28) = ecx; /* 0x160CBF6F: mov dword ptr [esi + 0x28], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CBF86; /* 0x160CBF72: jne 0x160cbf86 */
L_160CBF74:
    ecx = MEM32(esi + 0x20); /* 0x160CBF74: mov ecx, dword ptr [esi + 0x20] */
    /* cmp ecx, edx */ /* 0x160CBF77: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CBF86; /* 0x160CBF79: je 0x160cbf86 */
L_160CBF7B:
    eax = MEM32(ecx); /* 0x160CBF7B: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CBF7D: push edx */
    edx = MEM32(eax + 0x8); /* 0x160CBF7E: mov edx, dword ptr [eax + 8] */
    RECOMP_ICALL(edx); /* 0x160CBF81: call edx */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x20) = eax; /* 0x160CBF83: mov dword ptr [esi + 0x20], eax */
L_160CBF86:
    eax = esi; /* 0x160CBF86: mov eax, esi */
    ebp = POP32_VAL(esp); /* 0x160CBF88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CBF89: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC020u);

L_160CC020:
    edi = edi; /* 0x160CC020: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC022: push ebp */
    ebp = esp; /* 0x160CC023: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CC025: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CC026: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x18) = edx; /* 0x160CC028: mov dword ptr [eax + 0x18], edx */
    edx = MEM32(ebp + 0x8); /* 0x160CC02B: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160CC02E: push edi */
    MEM32(eax + 0x4) = 6; /* 0x160CC02F: mov dword ptr [eax + 4], 6 */
    MEM32(eax + 0x8) = esi; /* 0x160CC036: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x160CC039: mov dword ptr [eax + 0xc], esi */
    MEM32(eax + 0x10) = 1; /* 0x160CC03C: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038F20u; /* 0x160CC043: mov dword ptr [eax], 0x16038f20 */
    MEM32(eax + 0x20) = ecx; /* 0x160CC049: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x28) = edx; /* 0x160CC04C: mov dword ptr [eax + 0x28], edx */
    /* cmp ecx, esi */ /* 0x160CC04F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC056; /* 0x160CC051: je 0x160cc056 */
L_160CC053:
    esi = ecx + 0x10; /* 0x160CC053: lea esi, [ecx + 0x10] */
L_160CC056:
    edi = eax + 0x30; /* 0x160CC056: lea edi, [eax + 0x30] */
    ecx = 8; /* 0x160CC059: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CC05E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x160CC060: pop edi */
    esi = POP32_VAL(esp); /* 0x160CC061: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC062: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC063: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC070u);

L_160CC070:
    edi = edi; /* 0x160CC070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC072: push ebp */
    ebp = esp; /* 0x160CC073: mov ebp, esp */
    PUSH32(esp, edi); /* 0x160CC075: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CC076: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x160CC079: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC085; /* 0x160CC07B: je 0x160cc085 */
L_160CC07D:
    eax = MEM32(edi + 0x4); /* 0x160CC07D: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x160CC080: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC08C; /* 0x160CC083: je 0x160cc08c */
L_160CC085:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CC085: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CC087: pop edi */
    ebp = POP32_VAL(esp); /* 0x160CC088: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC089: ret 4 */
L_160CC08C:
    edx = MEM32(ecx + 0x18); /* 0x160CC08C: mov edx, dword ptr [ecx + 0x18] */
    PUSH32(esp, esi); /* 0x160CC08F: push esi */
    esi = ecx + 0x18; /* 0x160CC090: lea esi, [ecx + 0x18] */
    eax = edi + 0x18; /* 0x160CC093: lea eax, [edi + 0x18] */
    MEM32(ebp + 0x8) = edx; /* 0x160CC096: mov dword ptr [ebp + 8], edx */
    /* cmp edx, MEM32(eax) */ /* 0x160CC099: cmp edx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC0AD; /* 0x160CC09B: jne 0x160cc0ad */
L_160CC09D:
    edx = MEM32(ecx + 0x28); /* 0x160CC09D: mov edx, dword ptr [ecx + 0x28] */
    /* cmp edx, MEM32(edi + 0x28) */ /* 0x160CC0A0: cmp edx, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC0AD; /* 0x160CC0A3: jne 0x160cc0ad */
L_160CC0A5:
    edx = MEM32(ecx + 0x2C); /* 0x160CC0A5: mov edx, dword ptr [ecx + 0x2c] */
    /* cmp edx, MEM32(edi + 0x2C) */ /* 0x160CC0A8: cmp edx, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC0B5; /* 0x160CC0AB: je 0x160cc0b5 */
L_160CC0AD:
    esi = POP32_VAL(esp); /* 0x160CC0AD: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CC0AE: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CC0B0: pop edi */
    ebp = POP32_VAL(esp); /* 0x160CC0B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC0B2: ret 4 */
L_160CC0B5:
    edx = 0x10u; /* 0x160CC0B5: mov edx, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x160CC0BA: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CC0BC: push ebx */
    ecx = ecx; /* 0x160CC0BD: lea ecx, [ecx] */
L_160CC0C0:
    ebx = MEM32(esi + eax); /* 0x160CC0C0: mov ebx, dword ptr [esi + eax] */
    /* cmp ebx, MEM32(eax) */ /* 0x160CC0C3: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC0DB; /* 0x160CC0C5: jne 0x160cc0db */
L_160CC0C7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x160CC0C7: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x160CC0CA: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, 4 */ /* 0x160CC0CD: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CC0C0; /* 0x160CC0D0: jae 0x160cc0c0 */
L_160CC0D2:
    ebx = POP32_VAL(esp); /* 0x160CC0D2: pop ebx */
    esi = POP32_VAL(esp); /* 0x160CC0D3: pop esi */
    SET_LO8(eax, 1); /* 0x160CC0D4: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160CC0D6: pop edi */
    ebp = POP32_VAL(esp); /* 0x160CC0D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC0D8: ret 4 */
L_160CC0DB:
    /* cmp MEM32(ebp + 0x8), 4 */ /* 0x160CC0DB: cmp dword ptr [ebp + 8], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC103; /* 0x160CC0DF: jne 0x160cc103 */
L_160CC0E1:
    ecx = MEM32(ecx + 0x20); /* 0x160CC0E1: mov ecx, dword ptr [ecx + 0x20] */
    edx = MEM32(edi + 0x20); /* 0x160CC0E4: mov edx, dword ptr [edi + 0x20] */
    /* test ecx, ecx */ /* 0x160CC0E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC0F8; /* 0x160CC0E9: je 0x160cc0f8 */
L_160CC0EB:
    eax = MEM32(ecx); /* 0x160CC0EB: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CC0ED: push edx */
    edx = MEM32(eax + 0x4); /* 0x160CC0EE: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CC0F1: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CC0F3: movzx eax, al */
    goto L_160CC0FF; /* 0x160CC0F6: jmp 0x160cc0ff */
L_160CC0F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC0F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CC0FA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CC0FC: sete al */
L_160CC0FF:
    /* test LO8(eax), LO8(eax) */ /* 0x160CC0FF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CC0D2; /* 0x160CC101: jne 0x160cc0d2 */
L_160CC103:
    ebx = POP32_VAL(esp); /* 0x160CC103: pop ebx */
    esi = POP32_VAL(esp); /* 0x160CC104: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CC105: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CC107: pop edi */
    ebp = POP32_VAL(esp); /* 0x160CC108: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC109: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC120u);

L_160CC120:
    edi = edi; /* 0x160CC120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC122: push ebp */
    ebp = esp; /* 0x160CC123: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CC125: push ecx */
    PUSH32(esp, ebx); /* 0x160CC126: push ebx */
    PUSH32(esp, esi); /* 0x160CC127: push esi */
    PUSH32(esp, edi); /* 0x160CC128: push edi */
    esi = ecx; /* 0x160CC129: mov esi, ecx */
    edi = 0x50u; /* 0x160CC12B: mov edi, 0x50 */
    MEM32(ebp + (-0x4)) = esi; /* 0x160CC130: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CC133: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC138: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC1A8; /* 0x160CC13A: je 0x160cc1a8 */
L_160CC13C:
    RECOMP_CALL(sub_160CBE80); /* 0x160CC13C: call 0x160cbe80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160CC141: mov ebx, eax */
    /* test ebx, ebx */ /* 0x160CC143: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC1A8; /* 0x160CC145: je 0x160cc1a8 */
L_160CC147:
    eax = MEM32(esi + 0x18); /* 0x160CC147: mov eax, dword ptr [esi + 0x18] */
    MEM32(ebx + 0x18) = eax; /* 0x160CC14A: mov dword ptr [ebx + 0x18], eax */
    ecx = MEM32(esi + 0x1C); /* 0x160CC14D: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(ebx + 0x1C) = ecx; /* 0x160CC150: mov dword ptr [ebx + 0x1c], ecx */
    edx = MEM32(esi + 0x20); /* 0x160CC153: mov edx, dword ptr [esi + 0x20] */
    MEM32(ebx + 0x20) = edx; /* 0x160CC156: mov dword ptr [ebx + 0x20], edx */
    eax = MEM32(esi + 0x24); /* 0x160CC159: mov eax, dword ptr [esi + 0x24] */
    MEM32(ebx + 0x24) = eax; /* 0x160CC15C: mov dword ptr [ebx + 0x24], eax */
    ecx = MEM32(esi + 0x28); /* 0x160CC15F: mov ecx, dword ptr [esi + 0x28] */
    eax = MEM32(ebp + (-0x4)); /* 0x160CC162: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0x28) = ecx; /* 0x160CC165: mov dword ptr [ebx + 0x28], ecx */
    edx = MEM32(esi + 0x2C); /* 0x160CC168: mov edx, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x30u; /* 0x160CC16B: add esi, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x2C) = edx; /* 0x160CC16E: mov dword ptr [ebx + 0x2c], edx */
    edi = ebx + 0x30; /* 0x160CC171: lea edi, [ebx + 0x30] */
    ecx = 8; /* 0x160CC174: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CC179: rep movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(eax + 0x18), 4 */ /* 0x160CC17B: cmp dword ptr [eax + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC1B3; /* 0x160CC17F: jne 0x160cc1b3 */
L_160CC181:
    ecx = MEM32(eax + 0x20); /* 0x160CC181: mov ecx, dword ptr [eax + 0x20] */
    /* test ecx, ecx */ /* 0x160CC184: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC1B3; /* 0x160CC186: je 0x160cc1b3 */
L_160CC188:
    eax = MEM32(ecx); /* 0x160CC188: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x8); /* 0x160CC18A: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, 0); /* 0x160CC18D: push 0 */
    RECOMP_ICALL(edx); /* 0x160CC18F: call edx */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x20) = eax; /* 0x160CC191: mov dword ptr [ebx + 0x20], eax */
    /* test eax, eax */ /* 0x160CC194: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CC1B3; /* 0x160CC196: jne 0x160cc1b3 */
L_160CC198:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 0xFFFFFFFFu; /* 0x160CC198: add dword ptr [ebx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CC1A8; /* 0x160CC19C: jne 0x160cc1a8 */
L_160CC19E:
    eax = MEM32(ebx); /* 0x160CC19E: mov eax, dword ptr [ebx] */
    edx = MEM32(eax); /* 0x160CC1A0: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CC1A2: push 1 */
    ecx = ebx; /* 0x160CC1A4: mov ecx, ebx */
    RECOMP_ICALL(edx); /* 0x160CC1A6: call edx */
    RECOMP_FLAGS_IN();
L_160CC1A8:
    edi = POP32_VAL(esp); /* 0x160CC1A8: pop edi */
    esi = POP32_VAL(esp); /* 0x160CC1A9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC1AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CC1AC: pop ebx */
    esp = ebp; /* 0x160CC1AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC1AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC1B0: ret 4 */
L_160CC1B3:
    edi = POP32_VAL(esp); /* 0x160CC1B3: pop edi */
    esi = POP32_VAL(esp); /* 0x160CC1B4: pop esi */
    eax = ebx; /* 0x160CC1B5: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x160CC1B7: pop ebx */
    esp = ebp; /* 0x160CC1B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC1BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC1BB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC1D0u);

L_160CC1D0:
    MEM32(eax + 0x4) = 8; /* 0x160CC1D0: mov dword ptr [eax + 4], 8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CC1D7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x160CC1D9: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CC1DC: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 1; /* 0x160CC1DF: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038F38u; /* 0x160CC1E6: mov dword ptr [eax], 0x16038f38 */
    MEM32(eax + 0x14) = ecx; /* 0x160CC1EC: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = 0x11u; /* 0x160CC1EF: mov dword ptr [eax + 0x18], 0x11 */
    MEM32(eax + 0x20) = ecx; /* 0x160CC1F6: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x160CC1F9: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x160CC1FC: mov dword ptr [eax + 0x28], ecx */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160CC1FF: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x2C) = ecx; /* 0x160CC202: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = edx; /* 0x160CC205: mov dword ptr [eax + 0x30], edx */
    MEM32(eax + 0x34) = edx; /* 0x160CC208: mov dword ptr [eax + 0x34], edx */
    MEM32(eax + 0x38) = edx; /* 0x160CC20B: mov dword ptr [eax + 0x38], edx */
    MEM32(eax + 0x3C) = edx; /* 0x160CC20E: mov dword ptr [eax + 0x3c], edx */
    MEM32(eax + 0x40) = edx; /* 0x160CC211: mov dword ptr [eax + 0x40], edx */
    MEM32(eax + 0x44) = ecx; /* 0x160CC214: mov dword ptr [eax + 0x44], ecx */
    MEM32(eax + 0x48) = ecx; /* 0x160CC217: mov dword ptr [eax + 0x48], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC21A: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CC220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC220u);

L_160CC220:
    edi = edi; /* 0x160CC220: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC222: push ebp */
    ebp = esp; /* 0x160CC223: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CC225: push esi */
    esi = ecx; /* 0x160CC226: mov esi, ecx */
    ecx = MEM32(esi + 0x28); /* 0x160CC228: mov ecx, dword ptr [esi + 0x28] */
    MEM32(esi) = 0x16038F38u; /* 0x160CC22B: mov dword ptr [esi], 0x16038f38 */
    /* test ecx, ecx */ /* 0x160CC231: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC243; /* 0x160CC233: je 0x160cc243 */
L_160CC235:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CC235: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CC243; /* 0x160CC239: jne 0x160cc243 */
L_160CC23B:
    eax = MEM32(ecx); /* 0x160CC23B: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CC23D: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CC23F: push 1 */
    RECOMP_ICALL(edx); /* 0x160CC241: call edx */
    RECOMP_FLAGS_IN();
L_160CC243:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CC243: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x16038E60u; /* 0x160CC247: mov dword ptr [esi], 0x16038e60 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC254; /* 0x160CC24D: je 0x160cc254 */
L_160CC24F:
    RECOMP_CALL(sub_1605D560); /* 0x160CC24F: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CC254:
    eax = esi; /* 0x160CC254: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CC256: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC257: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC258: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC260u);

L_160CC260:
    edi = edi; /* 0x160CC260: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC262: push ebp */
    ebp = esp; /* 0x160CC263: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CC265: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160CC266: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x160CC269: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC2EB; /* 0x160CC26B: je 0x160cc2eb */
L_160CC26D:
    eax = MEM32(esi + 0x4); /* 0x160CC26D: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x160CC270: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC2EB; /* 0x160CC273: jne 0x160cc2eb */
L_160CC275:
    edx = MEM32(esi + 0x14); /* 0x160CC275: mov edx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx + 0x14); /* 0x160CC278: mov eax, dword ptr [ecx + 0x14] */
    PUSH32(esp, ebx); /* 0x160CC27B: push ebx */
    esp = esp; /* 0x160CC27C: lea esp, [esp] */
L_160CC280:
    SET_LO8(ebx, MEM8(eax)); /* 0x160CC280: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x160CC282: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC2A0; /* 0x160CC284: jne 0x160cc2a0 */
L_160CC286:
    /* test LO8(ebx), LO8(ebx) */ /* 0x160CC286: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC29C; /* 0x160CC288: je 0x160cc29c */
L_160CC28A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x160CC28A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x160CC28D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC2A0; /* 0x160CC290: jne 0x160cc2a0 */
L_160CC292:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160CC292: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x160CC295: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x160CC298: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CC280; /* 0x160CC29A: jne 0x160cc280 */
L_160CC29C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC29C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CC2A5; /* 0x160CC29E: jmp 0x160cc2a5 */
L_160CC2A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160CC2A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160CC2A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160CC2A5:
    ebx = POP32_VAL(esp); /* 0x160CC2A5: pop ebx */
    /* test eax, eax */ /* 0x160CC2A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CC2EB; /* 0x160CC2A8: jne 0x160cc2eb */
L_160CC2AA:
    edx = MEM32(ecx + 0x18); /* 0x160CC2AA: mov edx, dword ptr [ecx + 0x18] */
    /* cmp edx, MEM32(esi + 0x18) */ /* 0x160CC2AD: cmp edx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC2EB; /* 0x160CC2B0: jne 0x160cc2eb */
L_160CC2B2:
    eax = MEM32(ecx + 0x20); /* 0x160CC2B2: mov eax, dword ptr [ecx + 0x20] */
    /* cmp eax, MEM32(esi + 0x20) */ /* 0x160CC2B5: cmp eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC2EB; /* 0x160CC2B8: jne 0x160cc2eb */
L_160CC2BA:
    edx = MEM32(ecx + 0x24); /* 0x160CC2BA: mov edx, dword ptr [ecx + 0x24] */
    /* cmp edx, MEM32(esi + 0x24) */ /* 0x160CC2BD: cmp edx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC2EB; /* 0x160CC2C0: jne 0x160cc2eb */
L_160CC2C2:
    ecx = MEM32(ecx + 0x28); /* 0x160CC2C2: mov ecx, dword ptr [ecx + 0x28] */
    edx = MEM32(esi + 0x28); /* 0x160CC2C5: mov edx, dword ptr [esi + 0x28] */
    /* test ecx, ecx */ /* 0x160CC2C8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC2D9; /* 0x160CC2CA: je 0x160cc2d9 */
L_160CC2CC:
    eax = MEM32(ecx); /* 0x160CC2CC: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x160CC2CE: push edx */
    edx = MEM32(eax + 0x4); /* 0x160CC2CF: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CC2D2: call edx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x160CC2D4: movzx eax, al */
    goto L_160CC2E0; /* 0x160CC2D7: jmp 0x160cc2e0 */
L_160CC2D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC2D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CC2DB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CC2DD: sete al */
L_160CC2E0:
    /* test LO8(eax), LO8(eax) */ /* 0x160CC2E0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC2EB; /* 0x160CC2E2: je 0x160cc2eb */
L_160CC2E4:
    SET_LO8(eax, 1); /* 0x160CC2E4: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160CC2E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC2E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC2E8: ret 4 */
L_160CC2EB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CC2EB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160CC2ED: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC2EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC2EF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC300u);

L_160CC300:
    ecx = MEM32(ecx + 0x28); /* 0x160CC300: mov ecx, dword ptr [ecx + 0x28] */
    /* test ecx, ecx */ /* 0x160CC303: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC30E; /* 0x160CC305: je 0x160cc30e */
L_160CC307:
    eax = MEM32(ecx); /* 0x160CC307: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0xC); /* 0x160CC309: mov edx, dword ptr [eax + 0xc] */
    { _itail_tgt = (uint32_t)(edx); goto _ljump; }
L_160CC30E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC30E: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CC320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC320u);

L_160CC320:
    edi = edi; /* 0x160CC320: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC322: push ebp */
    ebp = esp; /* 0x160CC323: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160CC325: push ebx */
    PUSH32(esp, esi); /* 0x160CC326: push esi */
    PUSH32(esp, edi); /* 0x160CC327: push edi */
    edi = 0x50u; /* 0x160CC328: mov edi, 0x50 */
    esi = ecx; /* 0x160CC32D: mov esi, ecx */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CC32F: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160CC334: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC336: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x160CC338: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC3B0; /* 0x160CC33A: je 0x160cc3b0 */
L_160CC33C:
    MEM32(ebx + 0x4) = 8; /* 0x160CC33C: mov dword ptr [ebx + 4], 8 */
    MEM32(ebx + 0x8) = eax; /* 0x160CC343: mov dword ptr [ebx + 8], eax */
    MEM32(ebx + 0xC) = eax; /* 0x160CC346: mov dword ptr [ebx + 0xc], eax */
    MEM32(ebx + 0x10) = 1; /* 0x160CC349: mov dword ptr [ebx + 0x10], 1 */
    MEM32(ebx) = 0x16038F38u; /* 0x160CC350: mov dword ptr [ebx], 0x16038f38 */
    MEM32(ebx + 0x14) = eax; /* 0x160CC356: mov dword ptr [ebx + 0x14], eax */
    MEM32(ebx + 0x18) = 0x11u; /* 0x160CC359: mov dword ptr [ebx + 0x18], 0x11 */
    MEM32(ebx + 0x20) = eax; /* 0x160CC360: mov dword ptr [ebx + 0x20], eax */
    MEM32(ebx + 0x24) = eax; /* 0x160CC363: mov dword ptr [ebx + 0x24], eax */
    MEM32(ebx + 0x28) = eax; /* 0x160CC366: mov dword ptr [ebx + 0x28], eax */
    edi = ebx + 0x2C; /* 0x160CC369: lea edi, [ebx + 0x2c] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x160CC36C: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x160CC36F: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = ecx; /* 0x160CC371: mov dword ptr [edi + 4], ecx */
    MEM32(edi + 0x8) = ecx; /* 0x160CC374: mov dword ptr [edi + 8], ecx */
    MEM32(edi + 0xC) = ecx; /* 0x160CC377: mov dword ptr [edi + 0xc], ecx */
    MEM32(edi + 0x10) = ecx; /* 0x160CC37A: mov dword ptr [edi + 0x10], ecx */
    MEM32(edi + 0x14) = ecx; /* 0x160CC37D: mov dword ptr [edi + 0x14], ecx */
    MEM32(edi + 0x18) = eax; /* 0x160CC380: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = eax; /* 0x160CC383: mov dword ptr [edi + 0x1c], eax */
    /* cmp MEM32(esi + 0x28), eax */ /* 0x160CC386: cmp dword ptr [esi + 0x28], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC3B9; /* 0x160CC389: je 0x160cc3b9 */
L_160CC38B:
    ecx = MEM32(esi + 0x28); /* 0x160CC38B: mov ecx, dword ptr [esi + 0x28] */
    eax = MEM32(ecx); /* 0x160CC38E: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + 0x8); /* 0x160CC390: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x160CC393: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x160CC396: push edx */
    RECOMP_ICALL(eax); /* 0x160CC397: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x28) = eax; /* 0x160CC399: mov dword ptr [ebx + 0x28], eax */
    /* test eax, eax */ /* 0x160CC39C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CC3B9; /* 0x160CC39E: jne 0x160cc3b9 */
L_160CC3A0:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 0xFFFFFFFFu; /* 0x160CC3A0: add dword ptr [ebx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CC3B0; /* 0x160CC3A4: jne 0x160cc3b0 */
L_160CC3A6:
    edx = MEM32(ebx); /* 0x160CC3A6: mov edx, dword ptr [ebx] */
    eax = MEM32(edx); /* 0x160CC3A8: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160CC3AA: push 1 */
    ecx = ebx; /* 0x160CC3AC: mov ecx, ebx */
    RECOMP_ICALL(eax); /* 0x160CC3AE: call eax */
    RECOMP_FLAGS_IN();
L_160CC3B0:
    edi = POP32_VAL(esp); /* 0x160CC3B0: pop edi */
    esi = POP32_VAL(esp); /* 0x160CC3B1: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC3B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CC3B4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CC3B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC3B6: ret 4 */
L_160CC3B9:
    ecx = MEM32(esi + 0x14); /* 0x160CC3B9: mov ecx, dword ptr [esi + 0x14] */
    MEM32(ebx + 0x14) = ecx; /* 0x160CC3BC: mov dword ptr [ebx + 0x14], ecx */
    edx = MEM32(esi + 0x18); /* 0x160CC3BF: mov edx, dword ptr [esi + 0x18] */
    MEM32(ebx + 0x18) = edx; /* 0x160CC3C2: mov dword ptr [ebx + 0x18], edx */
    eax = MEM32(esi + 0x1C); /* 0x160CC3C5: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebx + 0x1C) = eax; /* 0x160CC3C8: mov dword ptr [ebx + 0x1c], eax */
    ecx = MEM32(esi + 0x20); /* 0x160CC3CB: mov ecx, dword ptr [esi + 0x20] */
    MEM32(ebx + 0x20) = ecx; /* 0x160CC3CE: mov dword ptr [ebx + 0x20], ecx */
    edx = MEM32(esi + 0x24); /* 0x160CC3D1: mov edx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x2Cu; /* 0x160CC3D4: add esi, 0x2c */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x24) = edx; /* 0x160CC3D7: mov dword ptr [ebx + 0x24], edx */
    ecx = 8; /* 0x160CC3DA: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CC3DF: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x160CC3E1: pop edi */
    esi = POP32_VAL(esp); /* 0x160CC3E2: pop esi */
    eax = ebx; /* 0x160CC3E3: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x160CC3E5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CC3E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC3E7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC3F0u);

L_160CC3F0:
    edi = edi; /* 0x160CC3F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC3F2: push ebp */
    ebp = esp; /* 0x160CC3F3: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x160CC3F5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x160CC3F9: push esi */
    esi = ecx; /* 0x160CC3FA: mov esi, ecx */
    MEM32(esi) = 0x16038E60u; /* 0x160CC3FC: mov dword ptr [esi], 0x16038e60 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC409; /* 0x160CC402: je 0x160cc409 */
L_160CC404:
    RECOMP_CALL(sub_1605D560); /* 0x160CC404: call 0x1605d560 */
    RECOMP_FLAGS_IN();
L_160CC409:
    eax = esi; /* 0x160CC409: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CC40B: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC40C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC40D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC470u);

L_160CC470:
    edi = edi; /* 0x160CC470: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC472: push ebp */
    ebp = esp; /* 0x160CC473: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CC475: push esi */
    PUSH32(esp, edi); /* 0x160CC476: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CC477: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x160CC47A: mov esi, ecx */
    /* test edi, edi */ /* 0x160CC47C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC488; /* 0x160CC47E: je 0x160cc488 */
L_160CC480:
    eax = MEM32(edi + 0x4); /* 0x160CC480: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x160CC483: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC490; /* 0x160CC486: je 0x160cc490 */
L_160CC488:
    edi = POP32_VAL(esp); /* 0x160CC488: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CC489: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160CC48B: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC48C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC48D: ret 4 */
L_160CC490:
    eax = edi + 0x18; /* 0x160CC490: lea eax, [edi + 0x18] */
    ecx = esi + 0x18; /* 0x160CC493: lea ecx, [esi + 0x18] */
    RECOMP_CALL(sub_160CB010); /* 0x160CC496: call 0x160cb010 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC49B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC488; /* 0x160CC49D: je 0x160cc488 */
L_160CC49F:
    ecx = MEM32(edi + 0x40); /* 0x160CC49F: mov ecx, dword ptr [edi + 0x40] */
    /* cmp ecx, MEM32(esi + 0x40) */ /* 0x160CC4A2: cmp ecx, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC488; /* 0x160CC4A5: jne 0x160cc488 */
L_160CC4A7:
    edx = MEM32(edi + 0x44); /* 0x160CC4A7: mov edx, dword ptr [edi + 0x44] */
    /* cmp edx, MEM32(esi + 0x44) */ /* 0x160CC4AA: cmp edx, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x160CC4AD: pop edi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CC4AE: sete al */
    esi = POP32_VAL(esp); /* 0x160CC4B1: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC4B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC4B3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC4C0u);

L_160CC4C0:
    edi = edi; /* 0x160CC4C0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x160CC4C2: push ebx */
    PUSH32(esp, edi); /* 0x160CC4C3: push edi */
    edi = 0x48u; /* 0x160CC4C4: mov edi, 0x48 */
    ebx = ecx; /* 0x160CC4C9: mov ebx, ecx */
    RECOMP_CALL(sub_1605C8C0); /* 0x160CC4CB: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CC4D0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x160CC4D2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC516; /* 0x160CC4D4: je 0x160cc516 */
L_160CC4D6:
    MEM32(eax + 0x8) = ecx; /* 0x160CC4D6: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160CC4D9: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x40) = ecx; /* 0x160CC4DC: mov dword ptr [eax + 0x40], ecx */
    MEM32(eax + 0x44) = ecx; /* 0x160CC4DF: mov dword ptr [eax + 0x44], ecx */
    PUSH32(esp, esi); /* 0x160CC4E2: push esi */
    MEM32(eax + 0x4) = 7; /* 0x160CC4E3: mov dword ptr [eax + 4], 7 */
    MEM32(eax + 0x10) = 1; /* 0x160CC4EA: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038F50u; /* 0x160CC4F1: mov dword ptr [eax], 0x16038f50 */
    esi = ebx + 0x18; /* 0x160CC4F7: lea esi, [ebx + 0x18] */
    edi = eax + 0x18; /* 0x160CC4FA: lea edi, [eax + 0x18] */
    ecx = 0xAu; /* 0x160CC4FD: mov ecx, 0xa */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160CC502: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebx + 0x40); /* 0x160CC504: mov ecx, dword ptr [ebx + 0x40] */
    esi = POP32_VAL(esp); /* 0x160CC507: pop esi */
    MEM32(eax + 0x40) = ecx; /* 0x160CC508: mov dword ptr [eax + 0x40], ecx */
    edx = MEM32(ebx + 0x44); /* 0x160CC50B: mov edx, dword ptr [ebx + 0x44] */
    edi = POP32_VAL(esp); /* 0x160CC50E: pop edi */
    MEM32(eax + 0x44) = edx; /* 0x160CC50F: mov dword ptr [eax + 0x44], edx */
    ebx = POP32_VAL(esp); /* 0x160CC512: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC513: ret 4 */
L_160CC516:
    edi = POP32_VAL(esp); /* 0x160CC516: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC517: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CC519: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC51A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC530u);

L_160CC530:
    eax = MEM32(ecx + 0x1C); /* 0x160CC530: mov eax, dword ptr [ecx + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x18)); /* 0x160CC533: imul eax, dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC537: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CC540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC540u);

L_160CC540:
    /* test eax, eax */ /* 0x160CC540: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC548; /* 0x160CC542: je 0x160cc548 */
L_160CC544:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x160CC544: add eax, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC547: ret  */
L_160CC548:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC548: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC54A: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CC550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC550u);

L_160CC550:
    edi = edi; /* 0x160CC550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC552: push ebp */
    ebp = esp; /* 0x160CC553: mov ebp, esp */
    eax = MEM32(0x161B4344); /* 0x160CC555: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160CC55A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160CC562; /* 0x160CC55C: jge 0x160cc562 */
L_160CC55E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC55E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CC569; /* 0x160CC560: jmp 0x160cc569 */
L_160CC562:
    PUSH32(esp, eax); /* 0x160CC562: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160CC563: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160CC569:
    ecx = MEM32(eax + 0x4); /* 0x160CC569: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160CC56C: push 0x10 */
    PUSH32(esp, 0x1Cu); /* 0x160CC56E: push 0x1c */
    RECOMP_CALL(sub_161A8F81); /* 0x160CC570: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC575: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC5B3; /* 0x160CC577: je 0x160cc5b3 */
L_160CC579:
    ecx = MEM32(ebp + 0xC); /* 0x160CC579: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x8) = 0; /* 0x160CC57C: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x160CC583: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x160CC58A: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160CC591: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x160397C8u; /* 0x160CC598: mov dword ptr [eax], 0x160397c8 */
    MEM32(eax + 0x4) = 2; /* 0x160CC59E: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x18) = 0x11u; /* 0x160CC5A5: mov dword ptr [eax + 0x18], 0x11 */
    MEM32(eax + 0x18) = ecx; /* 0x160CC5AC: mov dword ptr [eax + 0x18], ecx */
    ebp = POP32_VAL(esp); /* 0x160CC5AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC5B0: ret 8 */
L_160CC5B3:
    edx = MEM32(ebp + 0x8); /* 0x160CC5B3: mov edx, dword ptr [ebp + 8] */
    MEM8(edx + 0x240) = (uint8_t)(1); /* 0x160CC5B6: mov byte ptr [edx + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC5BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CC5BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC5C0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CC5D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC5D0u);

L_160CC5D0:
    edi = edi; /* 0x160CC5D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC5D2: push ebp */
    ebp = esp; /* 0x160CC5D3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CC5D5: push ecx */
    PUSH32(esp, ebx); /* 0x160CC5D6: push ebx */
    PUSH32(esp, edi); /* 0x160CC5D7: push edi */
    ebx = eax; /* 0x160CC5D8: mov ebx, eax */
    edi = ecx; /* 0x160CC5DA: mov edi, ecx */
    /* test esi, esi */ /* 0x160CC5DC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC6A2; /* 0x160CC5DE: je 0x160cc6a2 */
L_160CC5E4:
    /* test ebx, ebx */ /* 0x160CC5E4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC6A2; /* 0x160CC5E6: je 0x160cc6a2 */
L_160CC5EC:
    eax = ebp + (-0x4); /* 0x160CC5EC: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160CC5EF: push eax */
    PUSH32(esp, edi); /* 0x160CC5F0: push edi */
    RECOMP_CALL(sub_16114990); /* 0x160CC5F1: call 0x16114990 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC5F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160CC61A; /* 0x160CC5F8: jge 0x160cc61a */
L_160CC5FA:
    ecx = MEM32(ebp + 0x8); /* 0x160CC5FA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x16038F68u); /* 0x160CC5FD: push 0x16038f68 */
    PUSH32(esp, ecx); /* 0x160CC602: push ecx */
    ecx = 0xBF4u; /* 0x160CC603: mov ecx, 0xbf4 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC608: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC60D: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC610: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC612: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CC613: pop ebx */
    esp = ebp; /* 0x160CC614: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC616: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC617: ret 4 */
L_160CC61A:
    ebx = MEM32(ebp + (-0x4)); /* 0x160CC61A: mov ebx, dword ptr [ebp - 4] */
    edx = ebx + (-0x1); /* 0x160CC61D: lea edx, [ebx - 1] */
    /* cmp edx, 3 */ /* 0x160CC620: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CC68A; /* 0x160CC623: ja 0x160cc68a */
L_160CC625:
    ecx = esi; /* 0x160CC625: mov ecx, esi */
    RECOMP_CALL(sub_160783D0); /* 0x160CC627: call 0x160783d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CC62C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CC650; /* 0x160CC62E: jne 0x160cc650 */
L_160CC630:
    eax = MEM32(ebp + 0x8); /* 0x160CC630: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x16038FCCu); /* 0x160CC633: push 0x16038fcc */
    PUSH32(esp, eax); /* 0x160CC638: push eax */
    ecx = 0xC32u; /* 0x160CC639: mov ecx, 0xc32 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC63E: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC643: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC646: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC648: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CC649: pop ebx */
    esp = ebp; /* 0x160CC64A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC64C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC64D: ret 4 */
L_160CC650:
    PUSH32(esp, 0x24u); /* 0x160CC650: push 0x24 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CC652: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC657: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC679; /* 0x160CC659: je 0x160cc679 */
L_160CC65B:
    RECOMP_CALL(sub_160D1250); /* 0x160CC65B: call 0x160d1250 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC660: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC679; /* 0x160CC662: je 0x160cc679 */
L_160CC664:
    MEM32(eax + 0x18) = esi; /* 0x160CC664: mov dword ptr [eax + 0x18], esi */
    MEM32(eax + 0x1C) = 1; /* 0x160CC667: mov dword ptr [eax + 0x1c], 1 */
    MEM32(eax + 0x20) = ebx; /* 0x160CC66E: mov dword ptr [eax + 0x20], ebx */
    edi = POP32_VAL(esp); /* 0x160CC671: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CC672: pop ebx */
    esp = ebp; /* 0x160CC673: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC675: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC676: ret 4 */
L_160CC679:
    MEM8(edi + 0x240) = (uint8_t)(1); /* 0x160CC679: mov byte ptr [edi + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC680: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC682: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CC683: pop ebx */
    esp = ebp; /* 0x160CC684: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC686: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC687: ret 4 */
L_160CC68A:
    ecx = MEM32(ebp + 0x8); /* 0x160CC68A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x160CC68D: push 4 */
    PUSH32(esp, 0x16038FA0u); /* 0x160CC68F: push 0x16038fa0 */
    PUSH32(esp, ecx); /* 0x160CC694: push ecx */
    ecx = 0xBECu; /* 0x160CC695: mov ecx, 0xbec */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC69A: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160CC69F: add esp, 0xc */
    _flag_k = FK_ADD;
L_160CC6A2:
    edi = POP32_VAL(esp); /* 0x160CC6A2: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC6A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CC6A5: pop ebx */
    esp = ebp; /* 0x160CC6A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC6A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CC6A9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CC6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC6C0u);

L_160CC6C0:
    edi = edi; /* 0x160CC6C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC6C2: push ebp */
    ebp = esp; /* 0x160CC6C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160CC6C5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CC6C8: push ebx */
    PUSH32(esp, edi); /* 0x160CC6C9: push edi */
    ebx = eax; /* 0x160CC6CA: mov ebx, eax */
    edi = ecx; /* 0x160CC6CC: mov edi, ecx */
    /* test esi, esi */ /* 0x160CC6CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC7BF; /* 0x160CC6D0: je 0x160cc7bf */
L_160CC6D6:
    /* test ebx, ebx */ /* 0x160CC6D6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC7BF; /* 0x160CC6D8: je 0x160cc7bf */
L_160CC6DE:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x160CC6DE: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC7BF; /* 0x160CC6E2: je 0x160cc7bf */
L_160CC6E8:
    eax = ebp + (-0x4); /* 0x160CC6E8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160CC6EB: push eax */
    PUSH32(esp, edi); /* 0x160CC6EC: push edi */
    RECOMP_CALL(sub_16114990); /* 0x160CC6ED: call 0x16114990 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC6F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CC7A9; /* 0x160CC6F4: jl 0x160cc7a9 */
L_160CC6FA:
    ebx = MEM32(ebp + 0xC); /* 0x160CC6FA: mov ebx, dword ptr [ebp + 0xc] */
    ecx = ebp + 0xC; /* 0x160CC6FD: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x160CC700: push ecx */
    PUSH32(esp, edi); /* 0x160CC701: push edi */
    RECOMP_CALL(sub_16114990); /* 0x160CC702: call 0x16114990 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC707: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CC7A9; /* 0x160CC709: jl 0x160cc7a9 */
L_160CC70F:
    edx = MEM32(ebp + (-0x4)); /* 0x160CC70F: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x160CC712: dec edx */
    _flag_k = FK_DEC;
    /* cmp edx, 3 */ /* 0x160CC713: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CC787; /* 0x160CC716: ja 0x160cc787 */
L_160CC718:
    ebx = MEM32(ebp + 0xC); /* 0x160CC718: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx + (-0x1); /* 0x160CC71B: lea eax, [ebx - 1] */
    /* cmp eax, 3 */ /* 0x160CC71E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CC787; /* 0x160CC721: ja 0x160cc787 */
L_160CC723:
    ecx = esi; /* 0x160CC723: mov ecx, esi */
    RECOMP_CALL(sub_160783D0); /* 0x160CC725: call 0x160783d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CC72A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CC74E; /* 0x160CC72C: jne 0x160cc74e */
L_160CC72E:
    ecx = MEM32(ebp + 0x8); /* 0x160CC72E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1603905Cu); /* 0x160CC731: push 0x1603905c */
    PUSH32(esp, ecx); /* 0x160CC736: push ecx */
    ecx = 0xC33u; /* 0x160CC737: mov ecx, 0xc33 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC73C: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC741: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC744: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC746: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CC747: pop ebx */
    esp = ebp; /* 0x160CC748: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC74A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC74B: ret 8 */
L_160CC74E:
    PUSH32(esp, 0x24u); /* 0x160CC74E: push 0x24 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CC750: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC755: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC776; /* 0x160CC757: je 0x160cc776 */
L_160CC759:
    RECOMP_CALL(sub_160D0DB0); /* 0x160CC759: call 0x160d0db0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CC75E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC776; /* 0x160CC760: je 0x160cc776 */
L_160CC762:
    edx = MEM32(ebp + (-0x4)); /* 0x160CC762: mov edx, dword ptr [ebp - 4] */
    MEM32(eax + 0x18) = esi; /* 0x160CC765: mov dword ptr [eax + 0x18], esi */
    MEM32(eax + 0x1C) = edx; /* 0x160CC768: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x20) = ebx; /* 0x160CC76B: mov dword ptr [eax + 0x20], ebx */
    edi = POP32_VAL(esp); /* 0x160CC76E: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CC76F: pop ebx */
    esp = ebp; /* 0x160CC770: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC772: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC773: ret 8 */
L_160CC776:
    MEM8(edi + 0x240) = (uint8_t)(1); /* 0x160CC776: mov byte ptr [edi + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC77D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC77F: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CC780: pop ebx */
    esp = ebp; /* 0x160CC781: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC783: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC784: ret 8 */
L_160CC787:
    eax = MEM32(ebp + 0x8); /* 0x160CC787: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x160CC78A: push 4 */
    PUSH32(esp, 0x16039030u); /* 0x160CC78C: push 0x16039030 */
    PUSH32(esp, eax); /* 0x160CC791: push eax */
    ecx = 0xBEDu; /* 0x160CC792: mov ecx, 0xbed */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC797: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160CC79C: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC79F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC7A1: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CC7A2: pop ebx */
    esp = ebp; /* 0x160CC7A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC7A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC7A6: ret 8 */
L_160CC7A9:
    ecx = MEM32(ebp + 0x8); /* 0x160CC7A9: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x16038FF8u); /* 0x160CC7AC: push 0x16038ff8 */
    PUSH32(esp, ecx); /* 0x160CC7B1: push ecx */
    ecx = 0xBF5u; /* 0x160CC7B2: mov ecx, 0xbf5 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC7B7: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC7BC: add esp, 8 */
    _flag_k = FK_ADD;
L_160CC7BF:
    edi = POP32_VAL(esp); /* 0x160CC7BF: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC7C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CC7C2: pop ebx */
    esp = ebp; /* 0x160CC7C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC7C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC7C6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CC7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC7D0u);

L_160CC7D0:
    edi = edi; /* 0x160CC7D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC7D2: push ebp */
    ebp = esp; /* 0x160CC7D3: mov ebp, esp */
    eax = MEM32(0x161B4344); /* 0x160CC7D5: mov eax, dword ptr [0x161b4344] */
    PUSH32(esp, esi); /* 0x160CC7DA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CC7DB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x160CC7DD: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CC7E5; /* 0x160CC7DF: jge 0x160cc7e5 */
L_160CC7E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC7E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CC7EC; /* 0x160CC7E3: jmp 0x160cc7ec */
L_160CC7E5:
    PUSH32(esp, eax); /* 0x160CC7E5: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160CC7E6: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160CC7EC:
    ecx = MEM32(eax + 0x4); /* 0x160CC7EC: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160CC7EF: push 0x10 */
    PUSH32(esp, 0x30u); /* 0x160CC7F1: push 0x30 */
    RECOMP_CALL(sub_161A8F81); /* 0x160CC7F3: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x160CC7F8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CC84E; /* 0x160CC7FA: je 0x160cc84e */
L_160CC7FC:
    ecx = MEM32(ebp + 0xC); /* 0x160CC7FC: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x160CC7FF: mov edx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x8) = esi; /* 0x160CC802: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x160CC805: mov dword ptr [eax + 0xc], esi */
    MEM32(eax + 0x10) = esi; /* 0x160CC808: mov dword ptr [eax + 0x10], esi */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160CC80B: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x16039830u; /* 0x160CC812: mov dword ptr [eax], 0x16039830 */
    MEM32(eax + 0x4) = 6; /* 0x160CC818: mov dword ptr [eax + 4], 6 */
    MEM32(eax + 0x18) = 0x10u; /* 0x160CC81F: mov dword ptr [eax + 0x18], 0x10 */
    MEM32(eax + 0x2C) = 1; /* 0x160CC826: mov dword ptr [eax + 0x2c], 1 */
    MEM32(eax + 0x18) = ecx; /* 0x160CC82D: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x160CC830: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x1C) = edx; /* 0x160CC833: mov dword ptr [eax + 0x1c], edx */
    edx = MEM32(ebp + 0x18); /* 0x160CC836: mov edx, dword ptr [ebp + 0x18] */
    MEM32(eax + 0x20) = ecx; /* 0x160CC839: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = edx; /* 0x160CC83C: mov dword ptr [eax + 0x24], edx */
    MEM32(eax + 0x28) = edi; /* 0x160CC83F: mov dword ptr [eax + 0x28], edi */
    /* cmp edi, esi */ /* 0x160CC842: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CC85A; /* 0x160CC844: jbe 0x160cc85a */
L_160CC846:
    MEM32(eax + 0x2C) = edi; /* 0x160CC846: mov dword ptr [eax + 0x2c], edi */
    esi = POP32_VAL(esp); /* 0x160CC849: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC84A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CC84B: ret 0x14 */
L_160CC84E:
    eax = MEM32(ebp + 0x8); /* 0x160CC84E: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x240) = (uint8_t)(1); /* 0x160CC851: mov byte ptr [eax + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC858: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CC85A:
    esi = POP32_VAL(esp); /* 0x160CC85A: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CC85B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CC85C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_160CC870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC870u);

L_160CC870:
    edi = edi; /* 0x160CC870: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC872: push ebp */
    ebp = esp; /* 0x160CC873: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CC875: push ecx */
    PUSH32(esp, edi); /* 0x160CC876: push edi */
    edi = eax; /* 0x160CC877: mov edi, eax */
    /* test esi, esi */ /* 0x160CC879: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC8A5; /* 0x160CC87B: je 0x160cc8a5 */
L_160CC87D:
    eax = MEM32(esi); /* 0x160CC87D: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x28); /* 0x160CC87F: mov edx, dword ptr [eax + 0x28] */
    ecx = ebp + (-0x4); /* 0x160CC882: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CC885: push ecx */
    ecx = esi; /* 0x160CC886: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CC888: call edx */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 8 */ /* 0x160CC88A: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC8AE; /* 0x160CC88D: je 0x160cc8ae */
L_160CC88F:
    eax = MEM32(ebp + 0x8); /* 0x160CC88F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x160390B8u); /* 0x160CC892: push 0x160390b8 */
    PUSH32(esp, eax); /* 0x160CC897: push eax */
    ecx = 0xC34u; /* 0x160CC898: mov ecx, 0xc34 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC89D: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC8A2: add esp, 8 */
    _flag_k = FK_ADD;
L_160CC8A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC8A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC8A7: pop edi */
    esp = ebp; /* 0x160CC8A8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC8AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC8AB: ret 8 */
L_160CC8AE:
    ecx = MEM32(ebp + 0xC); /* 0x160CC8AE: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x160CC8B1: push 0 */
    PUSH32(esp, 0); /* 0x160CC8B3: push 0 */
    PUSH32(esp, esi); /* 0x160CC8B5: push esi */
    PUSH32(esp, ecx); /* 0x160CC8B6: push ecx */
    PUSH32(esp, edi); /* 0x160CC8B7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CC8B8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_160CC7D0); /* 0x160CC8BA: call 0x160cc7d0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160CC8BF: pop edi */
    esp = ebp; /* 0x160CC8C0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CC8C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CC8C3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CC8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC8D0u);

L_160CC8D0:
    /* test MEM32(esi + 0x50), 0x800u */ /* 0x160CC8D0: test dword ptr [esi + 0x50], 0x800 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x160CC8D7: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CC975; /* 0x160CC8D8: je 0x160cc975 */
L_160CC8DE:
    ecx = ebx + (-0x21); /* 0x160CC8DE: lea ecx, [ebx - 0x21] */
    /* cmp ecx, 0xDu */ /* 0x160CC8E1: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CC975; /* 0x160CC8E4: ja 0x160cc975 */
L_160CC8EA:
    ecx = (uint32_t)MEM8(ecx + 0x160CC9B8); /* 0x160CC8EA: movzx ecx, byte ptr [ecx + 0x160cc9b8] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160CC9A0)); goto _ljump; }
L_160CC8F8:
    PUSH32(esp, 0x160390E8u); /* 0x160CC8F8: push 0x160390e8 */
    PUSH32(esp, eax); /* 0x160CC8FD: push eax */
    ecx = 0xC0Eu; /* 0x160CC8FE: mov ecx, 0xc0e */
    edi = esi; /* 0x160CC903: mov edi, esi */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC905: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC90A: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC90D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC90F: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC910: ret  */
L_160CC911:
    PUSH32(esp, 0x16039140u); /* 0x160CC911: push 0x16039140 */
    PUSH32(esp, eax); /* 0x160CC916: push eax */
    ecx = 0xC0Eu; /* 0x160CC917: mov ecx, 0xc0e */
    edi = esi; /* 0x160CC91C: mov edi, esi */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC91E: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC923: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC926: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC928: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC929: ret  */
L_160CC92A:
    PUSH32(esp, 0x16039198u); /* 0x160CC92A: push 0x16039198 */
    PUSH32(esp, eax); /* 0x160CC92F: push eax */
    ecx = 0xC0Eu; /* 0x160CC930: mov ecx, 0xc0e */
    edi = esi; /* 0x160CC935: mov edi, esi */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC937: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC93C: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC93F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC941: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC942: ret  */
L_160CC943:
    PUSH32(esp, 0x160391F0u); /* 0x160CC943: push 0x160391f0 */
    PUSH32(esp, eax); /* 0x160CC948: push eax */
    ecx = 0xC0Eu; /* 0x160CC949: mov ecx, 0xc0e */
    edi = esi; /* 0x160CC94E: mov edi, esi */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC950: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC955: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC958: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC95A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC95B: ret  */
L_160CC95C:
    PUSH32(esp, 0x16039244u); /* 0x160CC95C: push 0x16039244 */
    PUSH32(esp, eax); /* 0x160CC961: push eax */
    ecx = 0xC0Eu; /* 0x160CC962: mov ecx, 0xc0e */
    edi = esi; /* 0x160CC967: mov edi, esi */
    RECOMP_CALL(sub_160C8A90); /* 0x160CC969: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CC96E: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CC971: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CC973: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC974: ret  */
L_160CC975:
    /* cmp MEM32(esi + ebx * 4 + 0xA4), 0 */ /* 0x160CC975: cmp dword ptr [esi + ebx*4 + 0xa4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + ebx * 4 + 0xA4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CC995; /* 0x160CC97D: jne 0x160cc995 */
L_160CC97F:
    PUSH32(esp, 0); /* 0x160CC97F: push 0 */
    PUSH32(esp, 0); /* 0x160CC981: push 0 */
    PUSH32(esp, 0); /* 0x160CC983: push 0 */
    PUSH32(esp, ebx); /* 0x160CC985: push ebx */
    PUSH32(esp, esi); /* 0x160CC986: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CC987: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_160CC7D0); /* 0x160CC989: call 0x160cc7d0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + ebx * 4 + 0xA4) = eax; /* 0x160CC98E: mov dword ptr [esi + ebx*4 + 0xa4], eax */
L_160CC995:
    eax = MEM32(esi + ebx * 4 + 0xA4); /* 0x160CC995: mov eax, dword ptr [esi + ebx*4 + 0xa4] */
    edi = POP32_VAL(esp); /* 0x160CC99C: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CC99D: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CC8F8u: goto L_160CC8F8;
      case 0x160CC911u: goto L_160CC911;
      case 0x160CC92Au: goto L_160CC92A;
      case 0x160CC943u: goto L_160CC943;
      case 0x160CC95Cu: goto L_160CC95C;
      case 0x160CC975u: goto L_160CC975;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CC9D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CC9D0u);

L_160CC9D0:
    edi = edi; /* 0x160CC9D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CC9D2: push ebp */
    ebp = esp; /* 0x160CC9D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160CC9D5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CC9D8: push ebx */
    PUSH32(esp, edi); /* 0x160CC9D9: push edi */
    ebx = eax; /* 0x160CC9DA: mov ebx, eax */
    edi = ecx; /* 0x160CC9DC: mov edi, ecx */
    /* test esi, esi */ /* 0x160CC9DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCA0A; /* 0x160CC9E0: je 0x160cca0a */
L_160CC9E2:
    eax = MEM32(esi); /* 0x160CC9E2: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x28); /* 0x160CC9E4: mov edx, dword ptr [eax + 0x28] */
    ecx = ebp + (-0x4); /* 0x160CC9E7: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CC9EA: push ecx */
    ecx = esi; /* 0x160CC9EB: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CC9ED: call edx */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 8 */ /* 0x160CC9EF: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCA14; /* 0x160CC9F2: je 0x160cca14 */
L_160CC9F4:
    eax = MEM32(ebp + 0x8); /* 0x160CC9F4: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x160390B8u); /* 0x160CC9F7: push 0x160390b8 */
    PUSH32(esp, eax); /* 0x160CC9FC: push eax */
    ecx = 0xC34u; /* 0x160CC9FD: mov ecx, 0xc34 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CCA02: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CCA07: add esp, 8 */
    _flag_k = FK_ADD;
L_160CCA0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCA0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CCA0C: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CCA0D: pop ebx */
    esp = ebp; /* 0x160CCA0E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCA10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160CCA11: ret 0x10 */
L_160CCA14:
    eax = MEM32(ebp + 0x10); /* 0x160CCA14: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CCA17: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00800000u);
    eax = eax & 0x00800000u; /* 0x160CCA19: and eax, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CCA1E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x160CCA20: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x160CCA22: mov dword ptr [ebp - 4], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCA80; /* 0x160CCA25: jne 0x160cca80 */
L_160CCA27:
    /* test ebx, ebx */ /* 0x160CCA27: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCA0A; /* 0x160CCA29: je 0x160cca0a */
L_160CCA2B:
    ecx = ebp + (-0x4); /* 0x160CCA2B: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CCA2E: push ecx */
    PUSH32(esp, edi); /* 0x160CCA2F: push edi */
    RECOMP_CALL(sub_16114990); /* 0x160CCA30: call 0x16114990 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CCA35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160CCA59; /* 0x160CCA37: jge 0x160cca59 */
L_160CCA39:
    edx = MEM32(ebp + 0x8); /* 0x160CCA39: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1603927Cu); /* 0x160CCA3C: push 0x1603927c */
    PUSH32(esp, edx); /* 0x160CCA41: push edx */
    ecx = 0xBCCu; /* 0x160CCA42: mov ecx, 0xbcc */
    RECOMP_CALL(sub_160C8A90); /* 0x160CCA47: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CCA4C: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCA4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CCA51: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CCA52: pop ebx */
    esp = ebp; /* 0x160CCA53: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCA55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160CCA56: ret 0x10 */
L_160CCA59:
    ecx = MEM32(ebp + (-0x4)); /* 0x160CCA59: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x160CCA5C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCA80; /* 0x160CCA5E: jne 0x160cca80 */
L_160CCA60:
    eax = MEM32(ebp + 0x8); /* 0x160CCA60: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x16039298u); /* 0x160CCA63: push 0x16039298 */
    PUSH32(esp, eax); /* 0x160CCA68: push eax */
    ecx = 0xBCCu; /* 0x160CCA69: mov ecx, 0xbcc */
    RECOMP_CALL(sub_160C8A90); /* 0x160CCA6E: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CCA73: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCA76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CCA78: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CCA79: pop ebx */
    esp = ebp; /* 0x160CCA7A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCA7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160CCA7D: ret 0x10 */
L_160CCA80:
    edx = MEM32(ebp + 0x14); /* 0x160CCA80: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x160CCA83: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x160CCA86: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160CCA87: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160CCA8A: push eax */
    PUSH32(esp, esi); /* 0x160CCA8B: push esi */
    PUSH32(esp, edx); /* 0x160CCA8C: push edx */
    PUSH32(esp, edi); /* 0x160CCA8D: push edi */
    edi = ecx; /* 0x160CCA8E: mov edi, ecx */
    RECOMP_CALL(sub_160CC7D0); /* 0x160CCA90: call 0x160cc7d0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160CCA95: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CCA96: pop ebx */
    esp = ebp; /* 0x160CCA97: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCA99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160CCA9A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_160CCAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CCAB0u);

L_160CCAB0:
    edi = edi; /* 0x160CCAB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CCAB2: push ebp */
    ebp = esp; /* 0x160CCAB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160CCAB5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CCAB8: push ebx */
    PUSH32(esp, edi); /* 0x160CCAB9: push edi */
    ebx = eax; /* 0x160CCABA: mov ebx, eax */
    edi = ecx; /* 0x160CCABC: mov edi, ecx */
    /* test esi, esi */ /* 0x160CCABE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCAF1; /* 0x160CCAC0: je 0x160ccaf1 */
L_160CCAC2:
    MEM32(ebp + (-0x4)) = 0; /* 0x160CCAC2: mov dword ptr [ebp - 4], 0 */
    /* test ebx, ebx */ /* 0x160CCAC9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCAF1; /* 0x160CCACB: je 0x160ccaf1 */
L_160CCACD:
    eax = ebp + (-0x4); /* 0x160CCACD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160CCAD0: push eax */
    PUSH32(esp, edi); /* 0x160CCAD1: push edi */
    RECOMP_CALL(sub_16114990); /* 0x160CCAD2: call 0x16114990 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CCAD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160CCAFB; /* 0x160CCAD9: jge 0x160ccafb */
L_160CCADB:
    ecx = MEM32(ebp + 0x8); /* 0x160CCADB: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x160392B8u); /* 0x160CCADE: push 0x160392b8 */
    PUSH32(esp, ecx); /* 0x160CCAE3: push ecx */
    ecx = 0xBCCu; /* 0x160CCAE4: mov ecx, 0xbcc */
    RECOMP_CALL(sub_160C8A90); /* 0x160CCAE9: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CCAEE: add esp, 8 */
    _flag_k = FK_ADD;
L_160CCAF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCAF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CCAF3: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CCAF4: pop ebx */
    esp = ebp; /* 0x160CCAF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCAF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CCAF8: ret 8 */
L_160CCAFB:
    ebx = MEM32(ebp + (-0x4)); /* 0x160CCAFB: mov ebx, dword ptr [ebp - 4] */
    /* test ebx, ebx */ /* 0x160CCAFE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCB22; /* 0x160CCB00: jne 0x160ccb22 */
L_160CCB02:
    edx = MEM32(ebp + 0x8); /* 0x160CCB02: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x160392D4u); /* 0x160CCB05: push 0x160392d4 */
    PUSH32(esp, edx); /* 0x160CCB0A: push edx */
    ecx = 0xBCCu; /* 0x160CCB0B: mov ecx, 0xbcc */
    RECOMP_CALL(sub_160C8A90); /* 0x160CCB10: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CCB15: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCB18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CCB1A: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CCB1B: pop ebx */
    esp = ebp; /* 0x160CCB1C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCB1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CCB1F: ret 8 */
L_160CCB22:
    PUSH32(esp, 0x24u); /* 0x160CCB22: push 0x24 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CCB24: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CCB29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCB36; /* 0x160CCB2B: je 0x160ccb36 */
L_160CCB2D:
    RECOMP_CALL(sub_160D07C0); /* 0x160CCB2D: call 0x160d07c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CCB32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCB47; /* 0x160CCB34: jne 0x160ccb47 */
L_160CCB36:
    MEM8(edi + 0x240) = (uint8_t)(1); /* 0x160CCB36: mov byte ptr [edi + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCB3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CCB3F: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CCB40: pop ebx */
    esp = ebp; /* 0x160CCB41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCB43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CCB44: ret 8 */
L_160CCB47:
    ecx = MEM32(ebp + 0xC); /* 0x160CCB47: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x160CCB4A: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x160CCB4D: push eax */
    PUSH32(esp, 0); /* 0x160CCB4E: push 0 */
    PUSH32(esp, 0x200u); /* 0x160CCB50: push 0x200 */
    MEM32(eax + 0x20) = ecx; /* 0x160CCB55: mov dword ptr [eax + 0x20], ecx */
    PUSH32(esp, edx); /* 0x160CCB58: push edx */
    ecx = edi; /* 0x160CCB59: mov ecx, edi */
    MEM32(eax + 0x18) = esi; /* 0x160CCB5B: mov dword ptr [eax + 0x18], esi */
    MEM32(eax + 0x1C) = ebx; /* 0x160CCB5E: mov dword ptr [eax + 0x1c], ebx */
    RECOMP_CALL(sub_160CCCC0); /* 0x160CCB61: call 0x160cccc0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160CCB66: pop edi */
    ebx = POP32_VAL(esp); /* 0x160CCB67: pop ebx */
    esp = ebp; /* 0x160CCB68: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCB6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CCB6B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CCB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CCB80u);

L_160CCB80:
    /* cmp MEM32(ebx + esi * 4 + 0xA4), 0 */ /* 0x160CCB80: cmp dword ptr [ebx + esi*4 + 0xa4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + esi * 4 + 0xA4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x160CCB88: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CCBA1; /* 0x160CCB89: jne 0x160ccba1 */
L_160CCB8B:
    PUSH32(esp, 0); /* 0x160CCB8B: push 0 */
    PUSH32(esp, 0); /* 0x160CCB8D: push 0 */
    PUSH32(esp, 0); /* 0x160CCB8F: push 0 */
    PUSH32(esp, esi); /* 0x160CCB91: push esi */
    PUSH32(esp, ebx); /* 0x160CCB92: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CCB93: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_160CC7D0); /* 0x160CCB95: call 0x160cc7d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + esi * 4 + 0xA4) = eax; /* 0x160CCB9A: mov dword ptr [ebx + esi*4 + 0xa4], eax */
L_160CCBA1:
    eax = MEM32(ebx + esi * 4 + 0xA4); /* 0x160CCBA1: mov eax, dword ptr [ebx + esi*4 + 0xa4] */
    edi = POP32_VAL(esp); /* 0x160CCBA8: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CCBA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CCCC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CCCC0u);

L_160CCCC0:
    edi = edi; /* 0x160CCCC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CCCC2: push ebp */
    ebp = esp; /* 0x160CCCC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x160CCCC5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x160CCCC8: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CCCCB: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x160CCCCC: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x160CCCCF: push esi */
    PUSH32(esp, edi); /* 0x160CCCD0: push edi */
    edi = ecx; /* 0x160CCCD1: mov edi, ecx */
    MEM32(esp + 0x10) = edi; /* 0x160CCCD3: mov dword ptr [esp + 0x10], edi */
    /* test ebx, ebx */ /* 0x160CCCD7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCFC9; /* 0x160CCCD9: je 0x160ccfc9 */
L_160CCCDF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CCCDF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CCCE1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x160CCCE3: mov eax, ebx */
L_160CCCE5:
    /* test eax, eax */ /* 0x160CCCE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCE5B; /* 0x160CCCE7: je 0x160cce5b */
L_160CCCED:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x160CCCED: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CCD02; /* 0x160CCCF1: jne 0x160ccd02 */
L_160CCCF3:
    esi = MEM32(eax + 0x18); /* 0x160CCCF3: mov esi, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x160CCCF6: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + 0x1C); /* 0x160CCCF8: mov esi, dword ptr [eax + 0x1c] */
    eax = MEM32(eax + 0x20); /* 0x160CCCFB: mov eax, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)((edx | esi)); _flag_b = (uint32_t)((edx | esi));
    edx = edx | esi; /* 0x160CCCFE: or edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160CCCE5; /* 0x160CCD00: jmp 0x160ccce5 */
L_160CCD02:
    /* test eax, eax */ /* 0x160CCD02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCE5B; /* 0x160CCD04: je 0x160cce5b */
L_160CCD0A:
    /* cmp MEM32(eax + 0x4), 8 */ /* 0x160CCD0A: cmp dword ptr [eax + 4], 8 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CCE5B; /* 0x160CCD0E: jne 0x160cce5b */
L_160CCD14:
    esi = MEM32(ebp + 0xC); /* 0x160CCD14: mov esi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x160CCD17: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x160CCD1A: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | ebx)); _flag_b = (uint32_t)((edx | ebx));
    edx = edx | ebx; /* 0x160CCD1C: or edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x160CCD1E: mov eax, ecx */
    edi = edx; /* 0x160CCD20: mov edi, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC00u);
    eax = eax & 0xC00u; /* 0x160CCD22: and eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CCD27: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x160CCD29: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCD3D; /* 0x160CCD2B: jne 0x160ccd3d */
L_160CCD2D:
    eax = MEM32(esp + 0x10); /* 0x160CCD2D: mov eax, dword ptr [esp + 0x10] */
    edx = MEM32(eax + 0x54); /* 0x160CCD31: mov edx, dword ptr [eax + 0x54] */
    eax = MEM32(edx + 0x20); /* 0x160CCD34: mov eax, dword ptr [edx + 0x20] */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x160CCD37: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x160CCD39: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x160CCD3B: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CCD3D:
    eax = ecx; /* 0x160CCD3D: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC00u);
    eax = eax & 0xC00u; /* 0x160CCD3F: and eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CCD44: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x160CCD46: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCD6B; /* 0x160CCD48: jne 0x160ccd6b */
L_160CCD4A:
    edx = MEM32(esp + 0x10); /* 0x160CCD4A: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(edx + 0x50); /* 0x160CCD4E: mov eax, dword ptr [edx + 0x50] */
    /* test LO8(eax), 8 */ /* 0x160CCD51: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCD5D; /* 0x160CCD53: je 0x160ccd5d */
L_160CCD55:
    _flag_a = (uint32_t)((esi | 0x400u)); _flag_b = (uint32_t)((esi | 0x400u));
    esi = esi | 0x400u; /* 0x160CCD55: or esi, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CCD67; /* 0x160CCD5B: jmp 0x160ccd67 */
L_160CCD5D:
    /* test LO8(eax), 0x10u */ /* 0x160CCD5D: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCD6B; /* 0x160CCD5F: je 0x160ccd6b */
L_160CCD61:
    _flag_a = (uint32_t)((esi | 0x800u)); _flag_b = (uint32_t)((esi | 0x800u));
    esi = esi | 0x800u; /* 0x160CCD61: or esi, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CCD67:
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x160CCD67: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x160CCD69: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CCD6B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC00u);
    ecx = ecx & 0xC00u; /* 0x160CCD6B: and ecx, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCD71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xC00u */ /* 0x160CCD73: cmp ecx, 0xc00 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CCD99; /* 0x160CCD79: jne 0x160ccd99 */
L_160CCD7B:
    /* test eax, eax */ /* 0x160CCD7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCD99; /* 0x160CCD7D: jne 0x160ccd99 */
L_160CCD7F:
    eax = MEM32(ebp + 0x8); /* 0x160CCD7F: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(esp + 0x10); /* 0x160CCD82: mov edi, dword ptr [esp + 0x10] */
    PUSH32(esp, 0x160392F4u); /* 0x160CCD86: push 0x160392f4 */
    PUSH32(esp, eax); /* 0x160CCD8B: push eax */
    ecx = 0xBE8u; /* 0x160CCD8C: mov ecx, 0xbe8 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CCD91: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CCD96: add esp, 8 */
    _flag_k = FK_ADD;
L_160CCD99:
    eax = esi; /* 0x160CCD99: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x160CCD9B: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CCDA0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160CCDA2: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCDB2; /* 0x160CCDA4: je 0x160ccdb2 */
L_160CCDA6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFF7FFu);
    esi = esi & 0xFFFFF7FFu; /* 0x160CCDA6: and esi, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0x400u)); _flag_b = (uint32_t)((esi | 0x400u));
    esi = esi | 0x400u; /* 0x160CCDAC: or esi, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CCDB2:
    eax = esi; /* 0x160CCDB2: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x160CCDB4: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CCDB9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160CCDBB: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCDCE; /* 0x160CCDBD: je 0x160ccdce */
L_160CCDBF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFBFFu);
    esi = esi & 0xFFFFFBFFu; /* 0x160CCDBF: and esi, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0x800u)); _flag_b = (uint32_t)((esi | 0x800u));
    esi = esi | 0x800u; /* 0x160CCDC5: or esi, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x160CCDCB: mov dword ptr [ebp + 0x10], ebx */
L_160CCDCE:
    ebx = MEM32(ebp + 0x14); /* 0x160CCDCE: mov ebx, dword ptr [ebp + 0x14] */
L_160CCDD1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xB8400E00u);
    esi = esi & 0xB8400E00u; /* 0x160CCDD1: and esi, 0xb8400e00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCDD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x160CCDD9: mov ecx, esi */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x160CCDDB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x160CCDDD: mov dword ptr [ebp + 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCE50; /* 0x160CCDE0: je 0x160cce50 */
L_160CCDE2:
    ecx = esi; /* 0x160CCDE2: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18000000u);
    ecx = ecx & 0x18000000u; /* 0x160CCDE4: and ecx, 0x18000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x160CCDEA: mov edx, ecx */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x160CCDEC: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCED4; /* 0x160CCDEE: je 0x160cced4 */
L_160CCDF4:
    edi = MEM32(ebx + 0x4); /* 0x160CCDF4: mov edi, dword ptr [ebx + 4] */
    edx = ebx; /* 0x160CCDF7: mov edx, ebx */
    /* cmp edi, 8 */ /* 0x160CCDF9: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CCE03; /* 0x160CCDFC: je 0x160cce03 */
L_160CCDFE:
    /* cmp edi, 9 */ /* 0x160CCDFE: cmp edi, 9 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CCE08; /* 0x160CCE01: jne 0x160cce08 */
L_160CCE03:
    edx = MEM32(ebx + 0x18); /* 0x160CCE03: mov edx, dword ptr [ebx + 0x18] */
    eax = ebx; /* 0x160CCE06: mov eax, ebx */
L_160CCE08:
    /* test edx, edx */ /* 0x160CCE08: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCE22; /* 0x160CCE0A: je 0x160cce22 */
L_160CCE0C:
    /* cmp MEM32(edx + 0x4), 2 */ /* 0x160CCE0C: cmp dword ptr [edx + 4], 2 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CCE22; /* 0x160CCE10: jne 0x160cce22 */
L_160CCE12:
    edx = MEM32(edx + 0x18); /* 0x160CCE12: mov edx, dword ptr [edx + 0x18] */
    /* test MEM32(edx * 4 + 0x16021650), 0x200u */ /* 0x160CCE15: test dword ptr [edx*4 + 0x16021650], 0x200 */
    _flag_a = (uint32_t)(MEM32(edx * 4 + 0x16021650)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCE96; /* 0x160CCE20: jne 0x160cce96 */
L_160CCE22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCE22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10000000u);
    esi = esi & 0x10000000u; /* 0x160CCE24: and esi, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x160CCE2A: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 0x75u); /* 0x160CCE2C: mov al, 0x75 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCE32; /* 0x160CCE2E: jne 0x160cce32 */
L_160CCE30:
    SET_LO8(eax, 0x73u); /* 0x160CCE30: mov al, 0x73 */
L_160CCE32:
    ecx = MEM32(ebp + 0x8); /* 0x160CCE32: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(esp + 0x10); /* 0x160CCE35: mov edi, dword ptr [esp + 0x10] */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x160CCE39: movsx eax, al */
    PUSH32(esp, eax); /* 0x160CCE3C: push eax */
    PUSH32(esp, 0x16039374u); /* 0x160CCE3D: push 0x16039374 */
    PUSH32(esp, ecx); /* 0x160CCE42: push ecx */
    ecx = 0xC0Du; /* 0x160CCE43: mov ecx, 0xc0d */
    RECOMP_CALL(sub_160C8A90); /* 0x160CCE48: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160CCE4D: add esp, 0xc */
    _flag_k = FK_ADD;
L_160CCE50:
    eax = ebx; /* 0x160CCE50: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x160CCE52: pop edi */
    esi = POP32_VAL(esp); /* 0x160CCE53: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CCE54: pop ebx */
    esp = ebp; /* 0x160CCE55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCE57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160CCE58: ret 0x10 */
L_160CCE5B:
    esi = MEM32(ebp + 0xC); /* 0x160CCE5B: mov esi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x160CCE5E: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC00u);
    eax = eax & 0xC00u; /* 0x160CCE60: and eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CCE65: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160CCE67: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCDD1; /* 0x160CCE69: je 0x160ccdd1 */
L_160CCE6F:
    ecx = MEM32(ebp + 0x8); /* 0x160CCE6F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x16039330u); /* 0x160CCE72: push 0x16039330 */
    PUSH32(esp, ecx); /* 0x160CCE77: push ecx */
    ecx = 0xC05u; /* 0x160CCE78: mov ecx, 0xc05 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CCE7D: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x160CCE82: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CCE85: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFF3FFu);
    esi = esi & 0xFFFFF3FFu; /* 0x160CCE88: and esi, 0xfffff3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x160CCE8E: mov dword ptr [ebp + 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_160CCDD1; /* 0x160CCE91: jmp 0x160ccdd1 */
L_160CCE96:
    /* test eax, eax */ /* 0x160CCE96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCED4; /* 0x160CCE98: je 0x160cced4 */
L_160CCE9A:
    edx = MEM32(eax + 0x20); /* 0x160CCE9A: mov edx, dword ptr [eax + 0x20] */
    edi = MEM32(esp + 0x10); /* 0x160CCE9D: mov edi, dword ptr [esp + 0x10] */
    PUSH32(esp, edx); /* 0x160CCEA1: push edx */
    edx = MEM32(eax + 0x1C); /* 0x160CCEA2: mov edx, dword ptr [eax + 0x1c] */
    PUSH32(esp, edx); /* 0x160CCEA5: push edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CCEA6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x160CCEA8: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160CCEA9: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x160CCEAC: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x160CCEAD: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, ecx); /* 0x160CCEB0: push ecx */
    ecx = MEM32(eax + 0x18); /* 0x160CCEB1: mov ecx, dword ptr [eax + 0x18] */
    PUSH32(esp, edx); /* 0x160CCEB4: push edx */
    RECOMP_CALL(sub_160CD1A0); /* 0x160CCEB5: call 0x160cd1a0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x14) = eax; /* 0x160CCEBA: mov dword ptr [ebp + 0x14], eax */
    /* test eax, eax */ /* 0x160CCEBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCFBC; /* 0x160CCEBF: je 0x160ccfbc */
L_160CCEC5:
    eax = MEM32(ebp + 0x10); /* 0x160CCEC5: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0x14); /* 0x160CCEC8: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xE7FFFFFFu);
    esi = esi & 0xE7FFFFFFu; /* 0x160CCECB: and esi, 0xe7ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x160CCED1: mov dword ptr [ebp + 0x10], eax */
L_160CCED4:
    edx = MEM32(ebx); /* 0x160CCED4: mov edx, dword ptr [ebx] */
    edx = MEM32(edx + 0x28); /* 0x160CCED6: mov edx, dword ptr [edx + 0x28] */
    eax = esp + 0x14; /* 0x160CCED9: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x160CCEDD: push eax */
    ecx = ebx; /* 0x160CCEDE: mov ecx, ebx */
    RECOMP_ICALL(edx); /* 0x160CCEE0: call edx */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax); /* 0x160CCEE2: mov edx, dword ptr [eax] */
    eax = esi; /* 0x160CCEE4: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000200u);
    eax = eax & 0x20000200u; /* 0x160CCEE6: and eax, 0x20000200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CCEEB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CCEED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x20000200u */ /* 0x160CCEEF: cmp eax, 0x20000200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CCF0D; /* 0x160CCEF4: jne 0x160ccf0d */
L_160CCEF6:
    /* cmp ecx, edi */ /* 0x160CCEF6: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CCF0D; /* 0x160CCEF8: jne 0x160ccf0d */
L_160CCEFA:
    /* test LO8(edx), 2 */ /* 0x160CCEFA: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCF30; /* 0x160CCEFD: je 0x160ccf30 */
L_160CCEFF:
    eax = MEM32(ebp + 0x10); /* 0x160CCEFF: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xDFFFFDFFu);
    esi = esi & 0xDFFFFDFFu; /* 0x160CCF02: and esi, 0xdffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x160CCF08: mov dword ptr [ebp + 0x10], eax */
    goto L_160CCF30; /* 0x160CCF0B: jmp 0x160ccf30 */
L_160CCF0D:
    eax = esi; /* 0x160CCF0D: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x160CCF0F: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CCF14: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160CCF16: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCF30; /* 0x160CCF18: je 0x160ccf30 */
L_160CCF1A:
    /* test LO8(edx), 2 */ /* 0x160CCF1A: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCF30; /* 0x160CCF1D: je 0x160ccf30 */
L_160CCF1F:
    /* test LO8(edx), 4 */ /* 0x160CCF1F: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCF30; /* 0x160CCF22: jne 0x160ccf30 */
L_160CCF24:
    ecx = MEM32(ebp + 0x10); /* 0x160CCF24: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFDFFu);
    esi = esi & 0xFFFFFDFFu; /* 0x160CCF27: and esi, 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ecx; /* 0x160CCF2D: mov dword ptr [ebp + 0x10], ecx */
L_160CCF30:
    edx = esi; /* 0x160CCF30: mov edx, esi */
    _flag_a = (uint32_t)((edx | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((edx | MEM32(ebp + 0x10)));
    edx = edx | MEM32(ebp + 0x10); /* 0x160CCF32: or edx, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCE50; /* 0x160CCF35: je 0x160cce50 */
L_160CCF3B:
    eax = MEM32(ebx + 0xC); /* 0x160CCF3B: mov eax, dword ptr [ebx + 0xc] */
    /* cmp eax, edi */ /* 0x160CCF3E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CCF5A; /* 0x160CCF40: je 0x160ccf5a */
L_160CCF42:
    edx = MEM32(eax + 0x1C); /* 0x160CCF42: mov edx, dword ptr [eax + 0x1c] */
    ecx = MEM32(eax + 0x18); /* 0x160CCF45: mov ecx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)((edx ^ MEM32(ebp + 0x10))); _flag_b = (uint32_t)((edx ^ MEM32(ebp + 0x10)));
    edx = edx ^ MEM32(ebp + 0x10); /* 0x160CCF48: xor edx, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x160CCF4B: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x160CCF4D: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CCFCB; /* 0x160CCF4F: je 0x160ccfcb */
L_160CCF51:
    eax = MEM32(eax + 0x24); /* 0x160CCF51: mov eax, dword ptr [eax + 0x24] */
    /* test eax, eax */ /* 0x160CCF54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCF42; /* 0x160CCF56: jne 0x160ccf42 */
L_160CCF58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CCF58: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CCF5A:
    eax = MEM32(0x161B4344); /* 0x160CCF5A: mov eax, dword ptr [0x161b4344] */
    /* cmp eax, edi */ /* 0x160CCF5F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CCF67; /* 0x160CCF61: jge 0x160ccf67 */
L_160CCF63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCF63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CCF6E; /* 0x160CCF65: jmp 0x160ccf6e */
L_160CCF67:
    PUSH32(esp, eax); /* 0x160CCF67: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160CCF68: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160CCF6E:
    ecx = MEM32(eax + 0x4); /* 0x160CCF6E: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160CCF71: push 0x10 */
    PUSH32(esp, 0x28u); /* 0x160CCF73: push 0x28 */
    RECOMP_CALL(sub_161A8F81); /* 0x160CCF75: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x160CCF7A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CCFBE; /* 0x160CCF7C: je 0x160ccfbe */
L_160CCF7E:
    ecx = MEM32(ebp + 0x10); /* 0x160CCF7E: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x8) = edi; /* 0x160CCF81: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x160CCF84: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = edi; /* 0x160CCF87: mov dword ptr [eax + 0x10], edi */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160CCF8A: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x1603972Cu; /* 0x160CCF91: mov dword ptr [eax], 0x1603972c */
    MEM32(eax + 0x4) = 0xAu; /* 0x160CCF97: mov dword ptr [eax + 4], 0xa */
    MEM32(eax + 0x24) = edi; /* 0x160CCF9E: mov dword ptr [eax + 0x24], edi */
    MEM32(eax + 0x18) = esi; /* 0x160CCFA1: mov dword ptr [eax + 0x18], esi */
    MEM32(eax + 0x1C) = ecx; /* 0x160CCFA4: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ebx; /* 0x160CCFA7: mov dword ptr [eax + 0x20], ebx */
    edx = MEM32(ebx + 0xC); /* 0x160CCFAA: mov edx, dword ptr [ebx + 0xc] */
    MEM32(eax + 0x24) = edx; /* 0x160CCFAD: mov dword ptr [eax + 0x24], edx */
    MEM32(ebx + 0xC) = eax; /* 0x160CCFB0: mov dword ptr [ebx + 0xc], eax */
    edi = POP32_VAL(esp); /* 0x160CCFB3: pop edi */
    esi = POP32_VAL(esp); /* 0x160CCFB4: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CCFB5: pop ebx */
    esp = ebp; /* 0x160CCFB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCFB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160CCFB9: ret 0x10 */
L_160CCFBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CCFBC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CCFBE:
    eax = MEM32(esp + 0x10); /* 0x160CCFBE: mov eax, dword ptr [esp + 0x10] */
    MEM8(eax + 0x240) = (uint8_t)(1); /* 0x160CCFC2: mov byte ptr [eax + 0x240], 1 */
L_160CCFC9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCFC9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CCFCB:
    edi = POP32_VAL(esp); /* 0x160CCFCB: pop edi */
    esi = POP32_VAL(esp); /* 0x160CCFCC: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CCFCD: pop ebx */
    esp = ebp; /* 0x160CCFCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCFD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160CCFD1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_160CCFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CCFE0u);

L_160CCFE0:
    edi = edi; /* 0x160CCFE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CCFE2: push ebp */
    ebp = esp; /* 0x160CCFE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x160CCFE5: sub esp, 0x64 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x160CCFE8: push edi */
    edi = eax; /* 0x160CCFE9: mov edi, eax */
    /* test esi, esi */ /* 0x160CCFEB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CCFF6; /* 0x160CCFED: jne 0x160ccff6 */
L_160CCFEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CCFEF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CCFF1: pop edi */
    esp = ebp; /* 0x160CCFF2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CCFF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CCFF5: ret  */
L_160CCFF6:
    eax = MEM32(esi); /* 0x160CCFF6: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x2C); /* 0x160CCFF8: mov edx, dword ptr [eax + 0x2c] */
    ecx = ebp + (-0x60); /* 0x160CCFFB: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x160CCFFE: push ecx */
    PUSH32(esp, 0); /* 0x160CCFFF: push 0 */
    ecx = esi; /* 0x160CD001: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CD003: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CD005: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD010; /* 0x160CD007: jne 0x160cd010 */
L_160CD009:
    MEM32(ebp + (-0x5C)) = 0x10u; /* 0x160CD009: mov dword ptr [ebp - 0x5c], 0x10 */
L_160CD010:
    eax = MEM32(ebp + (-0x5C)); /* 0x160CD010: mov eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF9u; /* 0x160CD013: add eax, -7 */
    _flag_k = FK_ADD;
    /* cmp eax, 6 */ /* 0x160CD016: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CD065; /* 0x160CD019: ja 0x160cd065 */
L_160CD01B:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CD080)); goto _ljump; }
L_160CD022:
    eax = 8; /* 0x160CD022: mov eax, 8 */
    goto L_160CD03C; /* 0x160CD027: jmp 0x160cd03c */
L_160CD029:
    eax = 0xAu; /* 0x160CD029: mov eax, 0xa */
    goto L_160CD03C; /* 0x160CD02E: jmp 0x160cd03c */
L_160CD030:
    eax = 0xCu; /* 0x160CD030: mov eax, 0xc */
    goto L_160CD03C; /* 0x160CD035: jmp 0x160cd03c */
L_160CD037:
    eax = 0xEu; /* 0x160CD037: mov eax, 0xe */
L_160CD03C:
    ecx = MEM32(ebp + (-0x2C)); /* 0x160CD03C: mov ecx, dword ptr [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x30)); /* 0x160CD03F: mov edx, dword ptr [ebp - 0x30] */
    PUSH32(esp, ecx); /* 0x160CD042: push ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x160CD043: mov ecx, dword ptr [ebp - 0x34] */
    PUSH32(esp, edx); /* 0x160CD046: push edx */
    edx = MEM32(ebp + (-0x38)); /* 0x160CD047: mov edx, dword ptr [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x160CD04A: push ecx */
    ecx = MEM32(ebp + (-0x54)); /* 0x160CD04B: mov ecx, dword ptr [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x160CD04E: push edx */
    MEM32(ebp + (-0x5C)) = eax; /* 0x160CD04F: mov dword ptr [ebp - 0x5c], eax */
    edx = MEM32(ecx + 0x4); /* 0x160CD052: mov edx, dword ptr [ecx + 4] */
    ecx = MEM32(edi + eax * 4 + 0x68); /* 0x160CD055: mov ecx, dword ptr [edi + eax*4 + 0x68] */
    PUSH32(esp, edx); /* 0x160CD059: push edx */
    PUSH32(esp, ebx); /* 0x160CD05A: push ebx */
    RECOMP_CALL(sub_160CD1A0); /* 0x160CD05B: call 0x160cd1a0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160CD060: pop edi */
    esp = ebp; /* 0x160CD061: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CD063: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CD064: ret  */
L_160CD065:
    PUSH32(esp, 0x16039398u); /* 0x160CD065: push 0x16039398 */
    PUSH32(esp, ebx); /* 0x160CD06A: push ebx */
    ecx = 0xC0Du; /* 0x160CD06B: mov ecx, 0xc0d */
    RECOMP_CALL(sub_160C8A90); /* 0x160CD070: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CD075: add esp, 8 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x160CD078: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x160CD07A: pop edi */
    esp = ebp; /* 0x160CD07B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CD07D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CD07E: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CD022u: goto L_160CD022;
      case 0x160CD029u: goto L_160CD029;
      case 0x160CD030u: goto L_160CD030;
      case 0x160CD037u: goto L_160CD037;
      case 0x160CD065u: goto L_160CD065;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CD0B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD0B0u);

L_160CD0B0:
    edi = edi; /* 0x160CD0B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD0B2: push ebp */
    ebp = esp; /* 0x160CD0B3: mov ebp, esp */
    eax = MEM32(0x161B4344); /* 0x160CD0B5: mov eax, dword ptr [0x161b4344] */
    PUSH32(esp, esi); /* 0x160CD0BA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CD0BB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x160CD0BD: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CD0C5; /* 0x160CD0BF: jge 0x160cd0c5 */
L_160CD0C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD0C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CD0CC; /* 0x160CD0C3: jmp 0x160cd0cc */
L_160CD0C5:
    PUSH32(esp, eax); /* 0x160CD0C5: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160CD0C6: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160CD0CC:
    ecx = MEM32(eax + 0x4); /* 0x160CD0CC: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160CD0CF: push 0x10 */
    PUSH32(esp, 0x1Cu); /* 0x160CD0D1: push 0x1c */
    RECOMP_CALL(sub_161A8F81); /* 0x160CD0D3: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x160CD0D8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD104; /* 0x160CD0DA: je 0x160cd104 */
L_160CD0DC:
    MEM32(eax + 0x8) = esi; /* 0x160CD0DC: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x160CD0DF: mov dword ptr [eax + 0xc], esi */
    MEM32(eax + 0x10) = esi; /* 0x160CD0E2: mov dword ptr [eax + 0x10], esi */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160CD0E5: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x16039760u; /* 0x160CD0EC: mov dword ptr [eax], 0x16039760 */
    MEM32(eax + 0x4) = 5; /* 0x160CD0F2: mov dword ptr [eax + 4], 5 */
    MEM32(eax + 0x18) = edi; /* 0x160CD0F9: mov dword ptr [eax + 0x18], edi */
    MEM32(edi + 0x10) = eax; /* 0x160CD0FC: mov dword ptr [edi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x160CD0FF: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD100: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD101: ret 4 */
L_160CD104:
    eax = MEM32(ebp + 0x8); /* 0x160CD104: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x240) = (uint8_t)(1); /* 0x160CD107: mov byte ptr [eax + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD10E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD110: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD111: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD112: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CD1A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD1A0u);

L_160CD1A0:
    edi = edi; /* 0x160CD1A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD1A2: push ebp */
    ebp = esp; /* 0x160CD1A3: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x160CD1A5: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x160CD1A8: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160CD1A9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x160CD1AB: push esi */
    /* cmp ecx, MEM32(edi + 0x78) */ /* 0x160CD1AC: cmp ecx, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x78));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD1F1; /* 0x160CD1AF: jne 0x160cd1f1 */
L_160CD1B1:
    eax = MEM32(ebp + 0x10); /* 0x160CD1B1: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x160CD1B4: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD1F1; /* 0x160CD1B6: jne 0x160cd1f1 */
L_160CD1B8:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x160CD1B8: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD1F1; /* 0x160CD1BB: jne 0x160cd1f1 */
L_160CD1BD:
    eax = MEM32(edi + 0x1C8); /* 0x160CD1BD: mov eax, dword ptr [edi + 0x1c8] */
    /* cmp eax, ebx */ /* 0x160CD1C3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD1D7; /* 0x160CD1C5: je 0x160cd1d7 */
L_160CD1C7:
    /* cmp MEM32(ebp + 0x18), 1 */ /* 0x160CD1C7: cmp dword ptr [ebp + 0x18], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD1D7; /* 0x160CD1CB: jne 0x160cd1d7 */
L_160CD1CD:
    /* cmp MEM32(ebp + 0x1C), 4 */ /* 0x160CD1CD: cmp dword ptr [ebp + 0x1c], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD2CF; /* 0x160CD1D1: je 0x160cd2cf */
L_160CD1D7:
    eax = MEM32(edi + 0x1CC); /* 0x160CD1D7: mov eax, dword ptr [edi + 0x1cc] */
    /* cmp eax, ebx */ /* 0x160CD1DD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD1F1; /* 0x160CD1DF: je 0x160cd1f1 */
L_160CD1E1:
    /* cmp MEM32(ebp + 0x18), 4 */ /* 0x160CD1E1: cmp dword ptr [ebp + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD1F1; /* 0x160CD1E5: jne 0x160cd1f1 */
L_160CD1E7:
    /* cmp MEM32(ebp + 0x1C), 4 */ /* 0x160CD1E7: cmp dword ptr [ebp + 0x1c], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD2CF; /* 0x160CD1EB: je 0x160cd2cf */
L_160CD1F1:
    PUSH32(esp, ecx); /* 0x160CD1F1: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x160CD1F2: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x160CD1F5: push edx */
    edx = MEM32(ebp + 0x8); /* 0x160CD1F6: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF3FFu);
    ecx = ecx & 0xFFFFF3FFu; /* 0x160CD1F9: and ecx, 0xfffff3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x160CD1FF: push ecx */
    PUSH32(esp, edx); /* 0x160CD200: push edx */
    ecx = edi; /* 0x160CD201: mov ecx, edi */
    RECOMP_CALL(sub_160CCCC0); /* 0x160CD203: call 0x160cccc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160CD208: mov esi, eax */
    /* cmp esi, ebx */ /* 0x160CD20A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD2C4; /* 0x160CD20C: je 0x160cd2c4 */
L_160CD212:
    ecx = MEM32(ebp + 0x18); /* 0x160CD212: mov ecx, dword ptr [ebp + 0x18] */
    /* cmp ecx, 1 */ /* 0x160CD215: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CD233; /* 0x160CD218: ja 0x160cd233 */
L_160CD21A:
    /* cmp MEM32(ebp + 0x1C), 1 */ /* 0x160CD21A: cmp dword ptr [ebp + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CD233; /* 0x160CD21E: ja 0x160cd233 */
L_160CD220:
    eax = MEM32(ebp + 0xC); /* 0x160CD220: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 9 */ /* 0x160CD223: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD236; /* 0x160CD226: je 0x160cd236 */
L_160CD228:
    /* cmp eax, 8 */ /* 0x160CD228: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD2CD; /* 0x160CD22B: jne 0x160cd2cd */
L_160CD231:
    goto L_160CD236; /* 0x160CD231: jmp 0x160cd236 */
L_160CD233:
    eax = MEM32(ebp + 0xC); /* 0x160CD233: mov eax, dword ptr [ebp + 0xc] */
L_160CD236:
    /* cmp ecx, 1 */ /* 0x160CD236: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD240; /* 0x160CD239: jne 0x160cd240 */
L_160CD23B:
    /* cmp eax, 8 */ /* 0x160CD23B: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD245; /* 0x160CD23E: jne 0x160cd245 */
L_160CD240:
    /* cmp eax, 9 */ /* 0x160CD240: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD25F; /* 0x160CD243: jne 0x160cd25f */
L_160CD245:
    PUSH32(esp, 0x24u); /* 0x160CD245: push 0x24 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CD247: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x160CD24C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD2C4; /* 0x160CD24E: je 0x160cd2c4 */
L_160CD250:
    MEM32(eax) = 0x160398CCu; /* 0x160CD250: mov dword ptr [eax], 0x160398cc */
    MEM32(eax + 0x4) = 9; /* 0x160CD256: mov dword ptr [eax + 4], 9 */
    goto L_160CD277; /* 0x160CD25D: jmp 0x160cd277 */
L_160CD25F:
    PUSH32(esp, 0x24u); /* 0x160CD25F: push 0x24 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CD261: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x160CD266: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD2C4; /* 0x160CD268: je 0x160cd2c4 */
L_160CD26A:
    MEM32(eax) = 0x16039898u; /* 0x160CD26A: mov dword ptr [eax], 0x16039898 */
    MEM32(eax + 0x4) = 8; /* 0x160CD270: mov dword ptr [eax + 4], 8 */
L_160CD277:
    ecx = MEM32(ebp + 0x18); /* 0x160CD277: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x1C); /* 0x160CD27A: mov edx, dword ptr [ebp + 0x1c] */
    MEM32(eax + 0x20) = ebx; /* 0x160CD27D: mov dword ptr [eax + 0x20], ebx */
    MEM32(eax + 0x1C) = ebx; /* 0x160CD280: mov dword ptr [eax + 0x1c], ebx */
    MEM32(eax + 0x18) = ebx; /* 0x160CD283: mov dword ptr [eax + 0x18], ebx */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160CD286: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax + 0x10) = ebx; /* 0x160CD28D: mov dword ptr [eax + 0x10], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x160CD290: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x160CD293: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0x1C) = ecx; /* 0x160CD296: mov dword ptr [eax + 0x1c], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x160CD299: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC00u);
    ecx = ecx & 0xC00u; /* 0x160CD29C: and ecx, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x18) = esi; /* 0x160CD2A2: mov dword ptr [eax + 0x18], esi */
    MEM32(eax + 0x20) = edx; /* 0x160CD2A5: mov dword ptr [eax + 0x20], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CD2A8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x160CD2AA: mov esi, ecx */
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x160CD2AC: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD2D5; /* 0x160CD2AE: je 0x160cd2d5 */
L_160CD2B0:
    PUSH32(esp, eax); /* 0x160CD2B0: push eax */
    eax = MEM32(ebp + 0x8); /* 0x160CD2B1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160CD2B4: push edx */
    PUSH32(esp, ecx); /* 0x160CD2B5: push ecx */
    PUSH32(esp, eax); /* 0x160CD2B6: push eax */
    ecx = edi; /* 0x160CD2B7: mov ecx, edi */
    RECOMP_CALL(sub_160CCCC0); /* 0x160CD2B9: call 0x160cccc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160CD2BE: mov esi, eax */
    /* cmp esi, ebx */ /* 0x160CD2C0: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD2CD; /* 0x160CD2C2: jne 0x160cd2cd */
L_160CD2C4:
    MEM8(edi + 0x240) = (uint8_t)(1); /* 0x160CD2C4: mov byte ptr [edi + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CD2CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CD2CD:
    eax = esi; /* 0x160CD2CD: mov eax, esi */
L_160CD2CF:
    esi = POP32_VAL(esp); /* 0x160CD2CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CD2D0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CD2D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x160CD2D2: ret 0x18 */
L_160CD2D5:
    esi = eax; /* 0x160CD2D5: mov esi, eax */
    esi = POP32_VAL(esp); /* 0x160CD2D7: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CD2D8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CD2D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x160CD2DA: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_160CD2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD2F0u);

L_160CD2F0:
    edi = edi; /* 0x160CD2F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD2F2: push ebp */
    ebp = esp; /* 0x160CD2F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CD2F5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CD2F6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, esi */ /* 0x160CD2F8: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD375; /* 0x160CD2FA: je 0x160cd375 */
L_160CD2FC:
    eax = MEM32(0x161B4344); /* 0x160CD2FC: mov eax, dword ptr [0x161b4344] */
    /* cmp eax, esi */ /* 0x160CD301: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CD309; /* 0x160CD303: jge 0x160cd309 */
L_160CD305:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD305: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CD310; /* 0x160CD307: jmp 0x160cd310 */
L_160CD309:
    PUSH32(esp, eax); /* 0x160CD309: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160CD30A: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160CD310:
    ecx = MEM32(eax + 0x4); /* 0x160CD310: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160CD313: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x160CD315: push 0x24 */
    RECOMP_CALL(sub_161A8F81); /* 0x160CD317: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x160CD31C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD36E; /* 0x160CD31E: je 0x160cd36e */
L_160CD320:
    edx = MEM32(ebp + 0x8); /* 0x160CD320: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x160CD323: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160CD326: push eax */
    PUSH32(esp, ebx); /* 0x160CD327: push ebx */
    PUSH32(esp, edx); /* 0x160CD328: push edx */
    MEM32(eax + 0x8) = esi; /* 0x160CD329: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x160CD32C: mov dword ptr [eax + 0xc], esi */
    MEM32(eax + 0x10) = esi; /* 0x160CD32F: mov dword ptr [eax + 0x10], esi */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160CD332: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x160397FCu; /* 0x160CD339: mov dword ptr [eax], 0x160397fc */
    MEM32(eax + 0x4) = 3; /* 0x160CD33F: mov dword ptr [eax + 4], 3 */
    MEM32(eax + 0x1C) = esi; /* 0x160CD346: mov dword ptr [eax + 0x1c], esi */
    MEM32(eax + 0x20) = esi; /* 0x160CD349: mov dword ptr [eax + 0x20], esi */
    PUSH32(esp, edi); /* 0x160CD34C: push edi */
    MEM32(eax + 0x18) = ecx; /* 0x160CD34D: mov dword ptr [eax + 0x18], ecx */
    RECOMP_CALL(sub_1610B9B0); /* 0x160CD350: call 0x1610b9b0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x160CD355: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD36E; /* 0x160CD357: je 0x160cd36e */
L_160CD359:
    MEM32(edi + 0x4) = eax; /* 0x160CD359: mov dword ptr [edi + 4], eax */
    MEM8(edi + 0x245) = (uint8_t)(1); /* 0x160CD35C: mov byte ptr [edi + 0x245], 1 */
    MEM32(edi + 0x1DC) = eax; /* 0x160CD363: mov dword ptr [edi + 0x1dc], eax */
    esi = POP32_VAL(esp); /* 0x160CD369: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD36A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CD36B: ret 8 */
L_160CD36E:
    MEM8(edi + 0x240) = (uint8_t)(1); /* 0x160CD36E: mov byte ptr [edi + 0x240], 1 */
L_160CD375:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD375: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD377: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD378: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CD379: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CD390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD390u);

L_160CD390:
    edi = edi; /* 0x160CD390: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD392: push ebp */
    ebp = esp; /* 0x160CD393: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CD395: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160CD396: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x160CD399: push edi */
    edi = eax; /* 0x160CD39A: mov edi, eax */
    /* test esi, esi */ /* 0x160CD39C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD4DA; /* 0x160CD39E: je 0x160cd4da */
L_160CD3A4:
    eax = MEM32(edi + 0x4); /* 0x160CD3A4: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x160CD3A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD4DA; /* 0x160CD3A9: je 0x160cd4da */
L_160CD3AF:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x160CD3AF: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD4DA; /* 0x160CD3B3: jne 0x160cd4da */
L_160CD3B9:
    PUSH32(esp, ebx); /* 0x160CD3B9: push ebx */
    ebx = MEM32(eax + 0x48); /* 0x160CD3BA: mov ebx, dword ptr [eax + 0x48] */
    /* test ebx, ebx */ /* 0x160CD3BD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD3E4; /* 0x160CD3BF: je 0x160cd3e4 */
L_160CD3C1:
    eax = MEM32(ebx + 0x4); /* 0x160CD3C1: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x160CD3C4: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_160CD3ED; /* 0x160CD3C7: je 0x160cd3ed */
L_160CD3C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x160CD3C9: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160CD3E4; /* 0x160CD3CC: jne 0x160cd3e4 */
L_160CD3CE:
    eax = MEM32(ebp + 0x8); /* 0x160CD3CE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x160393BCu); /* 0x160CD3D1: push 0x160393bc */
    PUSH32(esp, eax); /* 0x160CD3D6: push eax */
    ecx = 0xC23u; /* 0x160CD3D7: mov ecx, 0xc23 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CD3DC: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CD3E1: add esp, 8 */
    _flag_k = FK_ADD;
L_160CD3E4:
    ebx = POP32_VAL(esp); /* 0x160CD3E4: pop ebx */
    edi = POP32_VAL(esp); /* 0x160CD3E5: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD3E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD3E8: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD3E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CD3EA: ret 8 */
L_160CD3ED:
    PUSH32(esp, 5); /* 0x160CD3ED: push 5 */
    eax = esi; /* 0x160CD3EF: mov eax, esi */
    RECOMP_CALL(sub_16070DA0); /* 0x160CD3F1: call 0x16070da0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CD3F6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD412; /* 0x160CD3F8: je 0x160cd412 */
L_160CD3FA:
    edx = MEM32(esi); /* 0x160CD3FA: mov edx, dword ptr [esi] */
    edx = MEM32(edx + 0x20); /* 0x160CD3FC: mov edx, dword ptr [edx + 0x20] */
    eax = ebp + 0xC; /* 0x160CD3FF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160CD402: push eax */
    ecx = esi; /* 0x160CD403: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CD405: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD407: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CD4C2; /* 0x160CD409: jl 0x160cd4c2 */
L_160CD40F:
    esi = MEM32(ebp + 0xC); /* 0x160CD40F: mov esi, dword ptr [ebp + 0xc] */
L_160CD412:
    eax = MEM32(esi + 0x4); /* 0x160CD412: mov eax, dword ptr [esi + 4] */
    ecx = eax + (-0x3); /* 0x160CD415: lea ecx, [eax - 3] */
    /* cmp ecx, 1 */ /* 0x160CD418: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CD43C; /* 0x160CD41B: jbe 0x160cd43c */
L_160CD41D:
    edx = MEM32(ebp + 0x8); /* 0x160CD41D: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x160393E8u); /* 0x160CD420: push 0x160393e8 */
    PUSH32(esp, edx); /* 0x160CD425: push edx */
    ecx = 0xC16u; /* 0x160CD426: mov ecx, 0xc16 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CD42B: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CD430: add esp, 8 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x160CD433: pop ebx */
    edi = POP32_VAL(esp); /* 0x160CD434: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD435: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD437: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD438: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CD439: ret 8 */
L_160CD43C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x160CD43C: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_160CD48D; /* 0x160CD43F: je 0x160cd48d */
L_160CD441:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x160CD441: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160CD3E4; /* 0x160CD444: jne 0x160cd3e4 */
L_160CD446:
    PUSH32(esp, 8); /* 0x160CD446: push 8 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CD448: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD44D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD4C2; /* 0x160CD44F: je 0x160cd4c2 */
L_160CD451:
    ecx = MEM32(ebp + 0xC); /* 0x160CD451: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x160CD454: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = 0; /* 0x160CD456: mov dword ptr [eax + 4], 0 */
    esi = MEM32(ebx + 0x20); /* 0x160CD45D: mov esi, dword ptr [ebx + 0x20] */
    /* test esi, esi */ /* 0x160CD460: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD480; /* 0x160CD462: je 0x160cd480 */
L_160CD464:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x160CD464: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = esi + 0x4; /* 0x160CD468: lea edx, [esi + 4] */
    ecx = esi; /* 0x160CD46B: mov ecx, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD47B; /* 0x160CD46D: je 0x160cd47b */
L_160CD46F:
    /* nop */ /* 0x160CD46F: nop  */
L_160CD470:
    ecx = MEM32(edx); /* 0x160CD470: mov ecx, dword ptr [edx] */
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x160CD472: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ecx + 0x4; /* 0x160CD476: lea edx, [ecx + 4] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD470; /* 0x160CD479: jne 0x160cd470 */
L_160CD47B:
    MEM32(ecx + 0x4) = eax; /* 0x160CD47B: mov dword ptr [ecx + 4], eax */
    eax = esi; /* 0x160CD47E: mov eax, esi */
L_160CD480:
    MEM32(ebx + 0x20) = eax; /* 0x160CD480: mov dword ptr [ebx + 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x160CD483: mov eax, dword ptr [ebp + 0xc] */
    ebx = POP32_VAL(esp); /* 0x160CD486: pop ebx */
    edi = POP32_VAL(esp); /* 0x160CD487: pop edi */
    esi = POP32_VAL(esp); /* 0x160CD488: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD489: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CD48A: ret 8 */
L_160CD48D:
    /* cmp MEM32(ebx + 0x1C), 0 */ /* 0x160CD48D: cmp dword ptr [ebx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD4B2; /* 0x160CD491: je 0x160cd4b2 */
L_160CD493:
    edx = MEM32(ebp + 0x8); /* 0x160CD493: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x16039418u); /* 0x160CD496: push 0x16039418 */
    PUSH32(esp, edx); /* 0x160CD49B: push edx */
    ecx = 0xC17u; /* 0x160CD49C: mov ecx, 0xc17 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CD4A1: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CD4A6: add esp, 8 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x160CD4A9: pop ebx */
    edi = POP32_VAL(esp); /* 0x160CD4AA: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD4AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD4AD: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD4AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CD4AF: ret 8 */
L_160CD4B2:
    ecx = esi; /* 0x160CD4B2: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x160CD4B4: push ebx */
    PUSH32(esp, ecx); /* 0x160CD4B5: push ecx */
    MEM32(ebx + 0x1C) = esi; /* 0x160CD4B6: mov dword ptr [ebx + 0x1c], esi */
    RECOMP_CALL(sub_160CFB50); /* 0x160CD4B9: call 0x160cfb50 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD4BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160CD4D0; /* 0x160CD4C0: jge 0x160cd4d0 */
L_160CD4C2:
    MEM8(edi + 0x240) = (uint8_t)(1); /* 0x160CD4C2: mov byte ptr [edi + 0x240], 1 */
    MEM32(ebp + 0xC) = 0; /* 0x160CD4C9: mov dword ptr [ebp + 0xc], 0 */
L_160CD4D0:
    eax = MEM32(ebp + 0xC); /* 0x160CD4D0: mov eax, dword ptr [ebp + 0xc] */
    ebx = POP32_VAL(esp); /* 0x160CD4D3: pop ebx */
    edi = POP32_VAL(esp); /* 0x160CD4D4: pop edi */
    esi = POP32_VAL(esp); /* 0x160CD4D5: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD4D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CD4D7: ret 8 */
L_160CD4DA:
    edi = POP32_VAL(esp); /* 0x160CD4DA: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD4DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD4DD: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD4DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CD4DF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CD4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD4F0u);

L_160CD4F0:
    edi = edi; /* 0x160CD4F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD4F2: push ebp */
    ebp = esp; /* 0x160CD4F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160CD4F5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x160CD4F8: push edi */
    edi = eax; /* 0x160CD4F9: mov edi, eax */
    eax = MEM32(ebp + 0x8); /* 0x160CD4FB: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x160CD4FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD50C; /* 0x160CD500: je 0x160cd50c */
L_160CD502:
    ecx = 3; /* 0x160CD502: mov ecx, 3 */
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x160CD507: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD515; /* 0x160CD50A: je 0x160cd515 */
L_160CD50C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD50C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CD50E: pop edi */
    esp = ebp; /* 0x160CD50F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CD511: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD512: ret 4 */
L_160CD515:
    eax = MEM32(eax + 0x48); /* 0x160CD515: mov eax, dword ptr [eax + 0x48] */
    MEM32(ebp + (-0x8)) = eax; /* 0x160CD518: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x160CD51B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD50C; /* 0x160CD51D: je 0x160cd50c */
L_160CD51F:
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x160CD51F: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD50C; /* 0x160CD522: jne 0x160cd50c */
L_160CD524:
    eax = MEM32(edi + 0x4); /* 0x160CD524: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + 0x4C); /* 0x160CD527: mov ecx, dword ptr [eax + 0x4c] */
    PUSH32(esp, ebx); /* 0x160CD52A: push ebx */
    PUSH32(esp, esi); /* 0x160CD52B: push esi */
    esi = MEM32(edi + 0x10); /* 0x160CD52C: mov esi, dword ptr [edi + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x160CD52F: mov dword ptr [edi + 4], ecx */
    MEM8(edi + 0x245) = (uint8_t)(1); /* 0x160CD532: mov byte ptr [edi + 0x245], 1 */
    MEM32(edi + 0x1DC) = 0; /* 0x160CD539: mov dword ptr [edi + 0x1dc], 0 */
    /* test ecx, ecx */ /* 0x160CD543: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD5A1; /* 0x160CD545: je 0x160cd5a1 */
L_160CD547:
    edx = esi + (-0x1); /* 0x160CD547: lea edx, [esi - 1] */
    MEM32(ebp + (-0x4)) = edx; /* 0x160CD54A: mov dword ptr [ebp - 4], edx */
    ebx = esi * 8 + (-0x8); /* 0x160CD54D: lea ebx, [esi*8 - 8] */
L_160CD554:
    edx = MEM32(ecx + 0x4); /* 0x160CD554: mov edx, dword ptr [ecx + 4] */
    /* cmp edx, 3 */ /* 0x160CD557: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD568; /* 0x160CD55A: jne 0x160cd568 */
L_160CD55C:
    eax = MEM32(ecx + 0x48); /* 0x160CD55C: mov eax, dword ptr [ecx + 0x48] */
    /* test eax, eax */ /* 0x160CD55F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD568; /* 0x160CD561: je 0x160cd568 */
L_160CD563:
    /* cmp MEM32(eax + 0x4), edx */ /* 0x160CD563: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD59B; /* 0x160CD566: je 0x160cd59b */
L_160CD568:
    /* cmp edx, 4 */ /* 0x160CD568: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD592; /* 0x160CD56B: jne 0x160cd592 */
L_160CD56D:
    /* test esi, esi */ /* 0x160CD56D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD592; /* 0x160CD56F: jbe 0x160cd592 */
L_160CD571:
    eax = MEM32(ebp + (-0x4)); /* 0x160CD571: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(edi + 0x10) */ /* 0x160CD574: cmp eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CD580; /* 0x160CD577: jae 0x160cd580 */
L_160CD579:
    eax = MEM32(edi + 0x8); /* 0x160CD579: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x160CD57C: add eax, ebx */
    _flag_k = FK_ADD;
    goto L_160CD582; /* 0x160CD57E: jmp 0x160cd582 */
L_160CD580:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD580: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CD582:
    /* cmp MEM32(eax), ecx */ /* 0x160CD582: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD592; /* 0x160CD584: jne 0x160cd592 */
L_160CD586:
    ecx = MEM32(eax + 0x4); /* 0x160CD586: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x160CD589: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 8; /* 0x160CD58A: sub ebx, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x160CD58D: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    goto L_160CD595; /* 0x160CD590: jmp 0x160cd595 */
L_160CD592:
    ecx = MEM32(ecx + 0x4C); /* 0x160CD592: mov ecx, dword ptr [ecx + 0x4c] */
L_160CD595:
    /* test ecx, ecx */ /* 0x160CD595: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD554; /* 0x160CD597: jne 0x160cd554 */
L_160CD599:
    goto L_160CD5A1; /* 0x160CD599: jmp 0x160cd5a1 */
L_160CD59B:
    MEM32(edi + 0x1DC) = ecx; /* 0x160CD59B: mov dword ptr [edi + 0x1dc], ecx */
L_160CD5A1:
    ecx = MEM32(ebp + (-0x8)); /* 0x160CD5A1: mov ecx, dword ptr [ebp - 8] */
    ebx = MEM32(ecx + 0x20); /* 0x160CD5A4: mov ebx, dword ptr [ecx + 0x20] */
    /* test ebx, ebx */ /* 0x160CD5A7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD5FD; /* 0x160CD5A9: je 0x160cd5fd */
L_160CD5AB:
    goto L_160CD5B0; /* 0x160CD5AB: jmp 0x160cd5b0 */
L_160CD5B0:
    edx = MEM32(ebx); /* 0x160CD5B0: mov edx, dword ptr [ebx] */
    eax = MEM32(edx + 0x8); /* 0x160CD5B2: mov eax, dword ptr [edx + 8] */
    esi = MEM32(eax + 0x50); /* 0x160CD5B5: mov esi, dword ptr [eax + 0x50] */
    /* test esi, esi */ /* 0x160CD5B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD5F6; /* 0x160CD5BA: je 0x160cd5f6 */
L_160CD5BC:
    esp = esp; /* 0x160CD5BC: lea esp, [esp] */
L_160CD5C0:
    ecx = MEM32(ebp + (-0x8)); /* 0x160CD5C0: mov ecx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_160CFAD0); /* 0x160CD5C3: call 0x160cfad0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD5C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD5EF; /* 0x160CD5CA: jne 0x160cd5ef */
L_160CD5CC:
    ecx = MEM32(esi + 0xC); /* 0x160CD5CC: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x160CD5CF: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0xC); /* 0x160CD5D2: mov edx, dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x160CD5D5: push ecx */
    PUSH32(esp, edx); /* 0x160CD5D6: push edx */
    PUSH32(esp, 0x16039440u); /* 0x160CD5D7: push 0x16039440 */
    RECOMP_CALL(sub_16070D90); /* 0x160CD5DC: call 0x16070d90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x160CD5E1: push eax */
    ecx = 0xC24u; /* 0x160CD5E2: mov ecx, 0xc24 */
    RECOMP_CALL(sub_160C8A90); /* 0x160CD5E7: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x160CD5EC: add esp, 0x10 */
    _flag_k = FK_ADD;
L_160CD5EF:
    esi = MEM32(esi + 0x58); /* 0x160CD5EF: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x160CD5F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD5C0; /* 0x160CD5F4: jne 0x160cd5c0 */
L_160CD5F6:
    ebx = MEM32(ebx + 0x4); /* 0x160CD5F6: mov ebx, dword ptr [ebx + 4] */
    /* test ebx, ebx */ /* 0x160CD5F9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD5B0; /* 0x160CD5FB: jne 0x160cd5b0 */
L_160CD5FD:
    eax = MEM32(ebp + 0x8); /* 0x160CD5FD: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(eax + 0x50); /* 0x160CD600: mov edi, dword ptr [eax + 0x50] */
    /* test edi, edi */ /* 0x160CD603: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD636; /* 0x160CD605: je 0x160cd636 */
L_160CD607:
    /* cmp MEM32(edi + 0x4), 4 */ /* 0x160CD607: cmp dword ptr [edi + 4], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD62F; /* 0x160CD60B: jne 0x160cd62f */
L_160CD60D:
    esi = MEM32(edi + 0xA4); /* 0x160CD60D: mov esi, dword ptr [edi + 0xa4] */
    /* test esi, esi */ /* 0x160CD613: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD62F; /* 0x160CD615: je 0x160cd62f */
L_160CD617:
    ecx = MEM32(esi + 0x48); /* 0x160CD617: mov ecx, dword ptr [esi + 0x48] */
    MEM32(esi + 0x34) = 0; /* 0x160CD61A: mov dword ptr [esi + 0x34], 0 */
    /* test ecx, ecx */ /* 0x160CD621: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD62F; /* 0x160CD623: je 0x160cd62f */
L_160CD625:
    edx = MEM32(ecx); /* 0x160CD625: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x4); /* 0x160CD627: mov eax, dword ptr [edx + 4] */
    RECOMP_ICALL(eax); /* 0x160CD62A: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = eax; /* 0x160CD62C: mov dword ptr [esi + 0x34], eax */
L_160CD62F:
    edi = MEM32(edi + 0x58); /* 0x160CD62F: mov edi, dword ptr [edi + 0x58] */
    /* test edi, edi */ /* 0x160CD632: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD607; /* 0x160CD634: jne 0x160cd607 */
L_160CD636:
    ecx = MEM32(ebp + 0x8); /* 0x160CD636: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x48); /* 0x160CD639: mov eax, dword ptr [ecx + 0x48] */
    esi = POP32_VAL(esp); /* 0x160CD63C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CD63D: pop ebx */
    edi = POP32_VAL(esp); /* 0x160CD63E: pop edi */
    esp = ebp; /* 0x160CD63F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CD641: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD642: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CD650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD650u);

L_160CD650:
    edi = edi; /* 0x160CD650: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD652: push ebp */
    ebp = esp; /* 0x160CD653: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CD655: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CD656: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, esi */ /* 0x160CD658: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD6D0; /* 0x160CD65A: je 0x160cd6d0 */
L_160CD65C:
    eax = MEM32(0x161B4344); /* 0x160CD65C: mov eax, dword ptr [0x161b4344] */
    /* cmp eax, esi */ /* 0x160CD661: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CD669; /* 0x160CD663: jge 0x160cd669 */
L_160CD665:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD665: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CD670; /* 0x160CD667: jmp 0x160cd670 */
L_160CD669:
    PUSH32(esp, eax); /* 0x160CD669: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160CD66A: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160CD670:
    ecx = MEM32(eax + 0x4); /* 0x160CD670: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160CD673: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x160CD675: push 0x24 */
    RECOMP_CALL(sub_161A8F81); /* 0x160CD677: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x160CD67C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD6C9; /* 0x160CD67E: je 0x160cd6c9 */
L_160CD680:
    PUSH32(esp, eax); /* 0x160CD680: push eax */
    MEM32(eax + 0x8) = esi; /* 0x160CD681: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x160CD684: mov dword ptr [eax + 0xc], esi */
    MEM32(eax + 0x10) = esi; /* 0x160CD687: mov dword ptr [eax + 0x10], esi */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160CD68A: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax + 0x1C) = esi; /* 0x160CD691: mov dword ptr [eax + 0x1c], esi */
    MEM32(eax + 0x20) = esi; /* 0x160CD694: mov dword ptr [eax + 0x20], esi */
    MEM32(eax) = 0x160397FCu; /* 0x160CD697: mov dword ptr [eax], 0x160397fc */
    MEM32(eax + 0x4) = 4; /* 0x160CD69D: mov dword ptr [eax + 4], 4 */
    MEM32(eax + 0x18) = 2; /* 0x160CD6A4: mov dword ptr [eax + 0x18], 2 */
    eax = MEM32(ebp + 0x8); /* 0x160CD6AB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x160CD6AE: push ebx */
    PUSH32(esp, eax); /* 0x160CD6AF: push eax */
    PUSH32(esp, edi); /* 0x160CD6B0: push edi */
    RECOMP_CALL(sub_1610B9B0); /* 0x160CD6B1: call 0x1610b9b0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x160CD6B6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD6C9; /* 0x160CD6B8: je 0x160cd6c9 */
L_160CD6BA:
    MEM32(edi + 0x4) = eax; /* 0x160CD6BA: mov dword ptr [edi + 4], eax */
    MEM8(edi + 0x245) = (uint8_t)(1); /* 0x160CD6BD: mov byte ptr [edi + 0x245], 1 */
    esi = POP32_VAL(esp); /* 0x160CD6C4: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD6C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD6C6: ret 4 */
L_160CD6C9:
    MEM8(edi + 0x240) = (uint8_t)(1); /* 0x160CD6C9: mov byte ptr [edi + 0x240], 1 */
L_160CD6D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD6D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD6D2: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CD6D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD6D4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CD6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD6E0u);

L_160CD6E0:
    edi = edi; /* 0x160CD6E0: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CD6E2: push esi */
    esi = eax; /* 0x160CD6E3: mov esi, eax */
    /* test esi, esi */ /* 0x160CD6E5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD6EF; /* 0x160CD6E7: je 0x160cd6ef */
L_160CD6E9:
    /* cmp MEM32(esi + 0x4), 3 */ /* 0x160CD6E9: cmp dword ptr [esi + 4], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD6F3; /* 0x160CD6ED: je 0x160cd6f3 */
L_160CD6EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD6EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD6F1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CD6F2: ret  */
L_160CD6F3:
    eax = MEM32(esi + 0x48); /* 0x160CD6F3: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x160CD6F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD6EF; /* 0x160CD6F8: je 0x160cd6ef */
L_160CD6FA:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x160CD6FA: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD6EF; /* 0x160CD6FE: jne 0x160cd6ef */
L_160CD700:
    eax = MEM32(ebx + 0x4); /* 0x160CD700: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(eax + 0x4C); /* 0x160CD703: mov ecx, dword ptr [eax + 0x4c] */
    MEM32(ebx + 0x4) = ecx; /* 0x160CD706: mov dword ptr [ebx + 4], ecx */
    MEM8(ebx + 0x245) = (uint8_t)(1); /* 0x160CD709: mov byte ptr [ebx + 0x245], 1 */
    PUSH32(esp, edi); /* 0x160CD710: push edi */
    edi = MEM32(esi + 0x48); /* 0x160CD711: mov edi, dword ptr [esi + 0x48] */
    eax = MEM32(edi + 0x10); /* 0x160CD714: mov eax, dword ptr [edi + 0x10] */
    /* test eax, eax */ /* 0x160CD717: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD721; /* 0x160CD719: jne 0x160cd721 */
L_160CD71B:
    PUSH32(esp, ebx); /* 0x160CD71B: push ebx */
    RECOMP_CALL(sub_160CD0B0); /* 0x160CD71C: call 0x160cd0b0 */
    RECOMP_FLAGS_IN();
L_160CD721:
    edi = eax; /* 0x160CD721: mov edi, eax */
    /* test edi, edi */ /* 0x160CD723: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD742; /* 0x160CD725: je 0x160cd742 */
L_160CD727:
    edx = MEM32(esi + 0x4C); /* 0x160CD727: mov edx, dword ptr [esi + 0x4c] */
    RECOMP_CALL(sub_160C9FD0); /* 0x160CD72A: call 0x160c9fd0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x160CD72F: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x160CD732: push edi */
    PUSH32(esp, eax); /* 0x160CD733: push eax */
    edx = esi + 0x10; /* 0x160CD734: lea edx, [esi + 0x10] */
    PUSH32(esp, edx); /* 0x160CD737: push edx */
    PUSH32(esp, ebx); /* 0x160CD738: push ebx */
    RECOMP_CALL(sub_1610B9B0); /* 0x160CD739: call 0x1610b9b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD73E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD74E; /* 0x160CD740: jne 0x160cd74e */
L_160CD742:
    edi = POP32_VAL(esp); /* 0x160CD742: pop edi */
    MEM8(ebx + 0x240) = (uint8_t)(1); /* 0x160CD743: mov byte ptr [ebx + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD74A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CD74C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CD74D: ret  */
L_160CD74E:
    eax = MEM32(esi + 0x48); /* 0x160CD74E: mov eax, dword ptr [esi + 0x48] */
    edi = POP32_VAL(esp); /* 0x160CD751: pop edi */
    esi = POP32_VAL(esp); /* 0x160CD752: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CD753: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CD760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD760u);

L_160CD760:
    edi = edi; /* 0x160CD760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD762: push ebp */
    ebp = esp; /* 0x160CD763: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CD765: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x160CD766: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x160CD769: push ebx */
    PUSH32(esp, esi); /* 0x160CD76A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160CD76B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x160CD76D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CD76E: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x160CD771: mov dword ptr [ebp - 4], ebx */
    /* test eax, eax */ /* 0x160CD774: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD790; /* 0x160CD776: jne 0x160cd790 */
L_160CD778:
    /* cmp MEM8(ebp + 0x18), LO8(ebx) */ /* 0x160CD778: cmp byte ptr [ebp + 0x18], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD7C0; /* 0x160CD77B: jne 0x160cd7c0 */
L_160CD77D:
    eax = MEM32(ebp + 0xC); /* 0x160CD77D: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x1603946Cu); /* 0x160CD780: push 0x1603946c */
    PUSH32(esp, eax); /* 0x160CD785: push eax */
    ecx = 0xC00u; /* 0x160CD786: mov ecx, 0xc00 */
    goto L_160CD902; /* 0x160CD78B: jmp 0x160cd902 */
L_160CD790:
    ecx = ebp + (-0x4); /* 0x160CD790: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CD793: push ecx */
    PUSH32(esp, edi); /* 0x160CD794: push edi */
    ebx = eax; /* 0x160CD795: mov ebx, eax */
    RECOMP_CALL(sub_16114990); /* 0x160CD797: call 0x16114990 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD79C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160CD7AF; /* 0x160CD79E: jge 0x160cd7af */
L_160CD7A0:
    PUSH32(esp, 0x16039498u); /* 0x160CD7A0: push 0x16039498 */
    ecx = 0xBF2u; /* 0x160CD7A5: mov ecx, 0xbf2 */
    goto L_160CD8FE; /* 0x160CD7AA: jmp 0x160cd8fe */
L_160CD7AF:
    ebx = MEM32(ebp + (-0x4)); /* 0x160CD7AF: mov ebx, dword ptr [ebp - 4] */
    eax = ebx + (-0x1); /* 0x160CD7B2: lea eax, [ebx - 1] */
    /* cmp eax, 0xFFFFu */ /* 0x160CD7B5: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CD8F4; /* 0x160CD7BA: ja 0x160cd8f4 */
L_160CD7C0:
    eax = MEM32(0x161B4344); /* 0x160CD7C0: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160CD7C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160CD7CD; /* 0x160CD7C7: jge 0x160cd7cd */
L_160CD7C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD7C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CD7D4; /* 0x160CD7CB: jmp 0x160cd7d4 */
L_160CD7CD:
    PUSH32(esp, eax); /* 0x160CD7CD: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160CD7CE: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160CD7D4:
    ecx = MEM32(eax + 0x4); /* 0x160CD7D4: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160CD7D7: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x160CD7D9: push 0x24 */
    RECOMP_CALL(sub_161A8F81); /* 0x160CD7DB: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160CD7E0: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CD7E2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x160CD7E4: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD851; /* 0x160CD7E6: je 0x160cd851 */
L_160CD7E8:
    ecx = MEM32(ebp + 0x10); /* 0x160CD7E8: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x8) = edx; /* 0x160CD7EB: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x160CD7EE: mov dword ptr [esi + 0xc], edx */
    MEM32(esi + 0x10) = edx; /* 0x160CD7F1: mov dword ptr [esi + 0x10], edx */
    MEM32(esi + 0x14) = 0xFFFFFFFFu; /* 0x160CD7F4: mov dword ptr [esi + 0x14], 0xffffffff */
    MEM32(esi) = 0x16039864u; /* 0x160CD7FB: mov dword ptr [esi], 0x16039864 */
    MEM32(esi + 0x4) = 7; /* 0x160CD801: mov dword ptr [esi + 4], 7 */
    MEM32(esi + 0x20) = 0x10u; /* 0x160CD808: mov dword ptr [esi + 0x20], 0x10 */
    MEM32(esi + 0x18) = edx; /* 0x160CD80F: mov dword ptr [esi + 0x18], edx */
    MEM32(esi + 0x1C) = edx; /* 0x160CD812: mov dword ptr [esi + 0x1c], edx */
    MEM32(esi + 0x1C) = ebx; /* 0x160CD815: mov dword ptr [esi + 0x1c], ebx */
    /* cmp ecx, edx */ /* 0x160CD818: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD85F; /* 0x160CD81A: je 0x160cd85f */
L_160CD81C:
    /* cmp MEM32(ecx + 0x4), 0xAu */ /* 0x160CD81C: cmp dword ptr [ecx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD85F; /* 0x160CD820: jne 0x160cd85f */
L_160CD822:
    eax = MEM32(ecx + 0x20); /* 0x160CD822: mov eax, dword ptr [ecx + 0x20] */
    /* cmp eax, MEM32(edi + 0x38) */ /* 0x160CD825: cmp eax, dword ptr [edi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD85F; /* 0x160CD828: jne 0x160cd85f */
L_160CD82A:
    MEM32(esi + 0x18) = ecx; /* 0x160CD82A: mov dword ptr [esi + 0x18], ecx */
L_160CD82D:
    eax = MEM32(ebp + 0x1C); /* 0x160CD82D: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = esi; /* 0x160CD830: mov dword ptr [eax], esi */
L_160CD832:
    /* cmp ebx, 0x00010000u */ /* 0x160CD832: cmp ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CD8E9; /* 0x160CD838: jbe 0x160cd8e9 */
L_160CD83E:
    ecx = MEM32(ebp + 0xC); /* 0x160CD83E: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x160394CCu); /* 0x160CD841: push 0x160394cc */
    PUSH32(esp, ecx); /* 0x160CD846: push ecx */
    ecx = 0xBF3u; /* 0x160CD847: mov ecx, 0xbf3 */
    goto L_160CD902; /* 0x160CD84C: jmp 0x160cd902 */
L_160CD851:
    eax = 0x8007000Eu; /* 0x160CD851: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x160CD856: pop edi */
    esi = POP32_VAL(esp); /* 0x160CD857: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CD858: pop ebx */
    esp = ebp; /* 0x160CD859: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CD85B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x160CD85C: ret 0x18 */
L_160CD85F:
    eax = MEM32(edi + 0x38); /* 0x160CD85F: mov eax, dword ptr [edi + 0x38] */
    MEM32(esi + 0x18) = eax; /* 0x160CD862: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x38); /* 0x160CD865: mov eax, dword ptr [edi + 0x38] */
    MEM32(ebp + 0x18) = eax; /* 0x160CD868: mov dword ptr [ebp + 0x18], eax */
    /* cmp ecx, eax */ /* 0x160CD86B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD82D; /* 0x160CD86D: je 0x160cd82d */
L_160CD86F:
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x160CD86F: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD884; /* 0x160CD872: jne 0x160cd884 */
L_160CD874:
    ecx = MEM32(ebp + 0xC); /* 0x160CD874: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x160394F8u); /* 0x160CD877: push 0x160394f8 */
    PUSH32(esp, ecx); /* 0x160CD87C: push ecx */
    ecx = 0xC01u; /* 0x160CD87D: mov ecx, 0xc01 */
    goto L_160CD902; /* 0x160CD882: jmp 0x160cd902 */
L_160CD884:
    PUSH32(esp, 5); /* 0x160CD884: push 5 */
    RECOMP_CALL(sub_160C5640); /* 0x160CD886: call 0x160c5640 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CD88B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD89B; /* 0x160CD88D: je 0x160cd89b */
L_160CD88F:
    PUSH32(esp, 0x16039524u); /* 0x160CD88F: push 0x16039524 */
    ecx = 0xC2Fu; /* 0x160CD894: mov ecx, 0xc2f */
    goto L_160CD8FE; /* 0x160CD899: jmp 0x160cd8fe */
L_160CD89B:
    ecx = MEM32(ebp + 0x10); /* 0x160CD89B: mov ecx, dword ptr [ebp + 0x10] */
    edi = edi; /* 0x160CD89E: mov edi, edi */
L_160CD8A0:
    eax = MEM32(ecx + 0x1C); /* 0x160CD8A0: mov eax, dword ptr [ecx + 0x1c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x160CD8A3: imul ebx, eax */
    eax = MEM32(ecx + 0x18); /* 0x160CD8A6: mov eax, dword ptr [ecx + 0x18] */
    /* test eax, eax */ /* 0x160CD8A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD8C7; /* 0x160CD8AB: je 0x160cd8c7 */
L_160CD8AD:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x160CD8AD: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD8C7; /* 0x160CD8B1: jne 0x160cd8c7 */
L_160CD8B3:
    /* cmp MEM32(eax + 0x18), 0x20000200u */ /* 0x160CD8B3: cmp dword ptr [eax + 0x18], 0x20000200 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0x20000200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD8C7; /* 0x160CD8BA: jne 0x160cd8c7 */
L_160CD8BC:
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x160CD8BC: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD8C7; /* 0x160CD8C0: jne 0x160cd8c7 */
L_160CD8C2:
    edx = MEM32(eax + 0x20); /* 0x160CD8C2: mov edx, dword ptr [eax + 0x20] */
    goto L_160CD8C9; /* 0x160CD8C5: jmp 0x160cd8c9 */
L_160CD8C7:
    edx = eax; /* 0x160CD8C7: mov edx, eax */
L_160CD8C9:
    /* cmp edx, MEM32(ebp + 0x18) */ /* 0x160CD8C9: cmp edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD8D2; /* 0x160CD8CC: je 0x160cd8d2 */
L_160CD8CE:
    ecx = eax; /* 0x160CD8CE: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_160CD8A0; /* 0x160CD8D0: jmp 0x160cd8a0 */
L_160CD8D2:
    edx = eax; /* 0x160CD8D2: mov edx, eax */
    eax = MEM32(ebp + 0x10); /* 0x160CD8D4: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x18) = edx; /* 0x160CD8D7: mov dword ptr [esi + 0x18], edx */
    MEM32(ecx + 0x18) = esi; /* 0x160CD8DA: mov dword ptr [ecx + 0x18], esi */
    ecx = MEM32(ebp + 0x1C); /* 0x160CD8DD: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(ecx) = eax; /* 0x160CD8E0: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CD8E2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160CD832; /* 0x160CD8E4: jmp 0x160cd832 */
L_160CD8E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD8E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CD8EB: pop edi */
    esi = POP32_VAL(esp); /* 0x160CD8EC: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CD8ED: pop ebx */
    esp = ebp; /* 0x160CD8EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CD8F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x160CD8F1: ret 0x18 */
L_160CD8F4:
    PUSH32(esp, 0x160394CCu); /* 0x160CD8F4: push 0x160394cc */
    ecx = 0xBF3u; /* 0x160CD8F9: mov ecx, 0xbf3 */
L_160CD8FE:
    edx = MEM32(ebp + 0xC); /* 0x160CD8FE: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160CD901: push edx */
L_160CD902:
    RECOMP_CALL(sub_160C8A90); /* 0x160CD902: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CD907: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x160CD90A: pop edi */
    esi = POP32_VAL(esp); /* 0x160CD90B: pop esi */
    eax = 0x80070057u; /* 0x160CD90C: mov eax, 0x80070057 */
    ebx = POP32_VAL(esp); /* 0x160CD911: pop ebx */
    esp = ebp; /* 0x160CD912: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CD914: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x160CD915: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_160CD920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD920u);

L_160CD920:
    edi = edi; /* 0x160CD920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD922: push ebp */
    ebp = esp; /* 0x160CD923: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CD925: push ecx */
    /* test esi, esi */ /* 0x160CD926: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD931; /* 0x160CD928: jne 0x160cd931 */
L_160CD92A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD92A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x160CD92C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160CD92D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD92E: ret 4 */
L_160CD931:
    eax = ebp + 0x8; /* 0x160CD931: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x160CD934: push eax */
    eax = MEM32(ebp + 0x8); /* 0x160CD935: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x160CD938: push 1 */
    PUSH32(esp, ecx); /* 0x160CD93A: push ecx */
    PUSH32(esp, esi); /* 0x160CD93B: push esi */
    PUSH32(esp, edx); /* 0x160CD93C: push edx */
    PUSH32(esp, eax); /* 0x160CD93D: push eax */
    RECOMP_CALL(sub_160CD760); /* 0x160CD93E: call 0x160cd760 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD943: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x160CD945: mov eax, esi */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CD94C; /* 0x160CD947: jl 0x160cd94c */
L_160CD949:
    eax = MEM32(ebp + 0x8); /* 0x160CD949: mov eax, dword ptr [ebp + 8] */
L_160CD94C:
    ecx = POP32_VAL(esp); /* 0x160CD94C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160CD94D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD94E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CD960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD960u);

L_160CD960:
    edi = edi; /* 0x160CD960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD962: push ebp */
    ebp = esp; /* 0x160CD963: mov ebp, esp */
    /* test edi, edi */ /* 0x160CD965: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD9B4; /* 0x160CD967: je 0x160cd9b4 */
L_160CD969:
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x160CD969: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CD9B4; /* 0x160CD96D: je 0x160cd9b4 */
L_160CD96F:
    /* cmp MEM32(esi + 0x48), 3 */ /* 0x160CD96F: cmp dword ptr [esi + 0x48], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CD9B4; /* 0x160CD973: jne 0x160cd9b4 */
L_160CD975:
    PUSH32(esp, 0x28u); /* 0x160CD975: push 0x28 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CD977: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD97C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD9AD; /* 0x160CD97E: je 0x160cd9ad */
L_160CD980:
    RECOMP_CALL(sub_160D12A0); /* 0x160CD980: call 0x160d12a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD985: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CD9AD; /* 0x160CD987: je 0x160cd9ad */
L_160CD989:
    edx = MEM32(ebp + 0x8); /* 0x160CD989: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x160CD98C: push eax */
    PUSH32(esp, edi); /* 0x160CD98D: push edi */
    MEM32(eax + 0x18) = 0; /* 0x160CD98E: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x160CD995: mov dword ptr [eax + 0x1c], 0 */
    ecx = MEM32(esi + 0x38); /* 0x160CD99C: mov ecx, dword ptr [esi + 0x38] */
    PUSH32(esp, edx); /* 0x160CD99F: push edx */
    PUSH32(esp, esi); /* 0x160CD9A0: push esi */
    MEM32(eax + 0x20) = ecx; /* 0x160CD9A1: mov dword ptr [eax + 0x20], ecx */
    RECOMP_CALL(sub_1610B9B0); /* 0x160CD9A4: call 0x1610b9b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD9A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CD9B6; /* 0x160CD9AB: jne 0x160cd9b6 */
L_160CD9AD:
    MEM8(esi + 0x240) = (uint8_t)(1); /* 0x160CD9AD: mov byte ptr [esi + 0x240], 1 */
L_160CD9B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CD9B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CD9B6:
    ebp = POP32_VAL(esp); /* 0x160CD9B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CD9B7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CD9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CD9C0u);

L_160CD9C0:
    edi = edi; /* 0x160CD9C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CD9C2: push ebp */
    ebp = esp; /* 0x160CD9C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CD9C5: push ecx */
    PUSH32(esp, esi); /* 0x160CD9C6: push esi */
    /* test edi, edi */ /* 0x160CD9C7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDA08; /* 0x160CD9C9: je 0x160cda08 */
L_160CD9CB:
    /* cmp MEM32(edi + 0x4), 3 */ /* 0x160CD9CB: cmp dword ptr [edi + 4], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDA08; /* 0x160CD9CF: jne 0x160cda08 */
L_160CD9D1:
    esi = MEM32(edi + 0x48); /* 0x160CD9D1: mov esi, dword ptr [edi + 0x48] */
    /* test esi, esi */ /* 0x160CD9D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDA08; /* 0x160CD9D6: je 0x160cda08 */
L_160CD9D8:
    /* cmp MEM32(esi + 0x4), 0xAu */ /* 0x160CD9D8: cmp dword ptr [esi + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDA08; /* 0x160CD9DC: jne 0x160cda08 */
L_160CD9DE:
    edx = MEM32(esi + 0x20); /* 0x160CD9DE: mov edx, dword ptr [esi + 0x20] */
    eax = ebp + 0xC; /* 0x160CD9E1: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160CD9E4: push eax */
    eax = MEM32(ebp + 0xC); /* 0x160CD9E5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x160CD9E8: push 0 */
    PUSH32(esp, ecx); /* 0x160CD9EA: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160CD9EB: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160CD9EE: push edx */
    PUSH32(esp, eax); /* 0x160CD9EF: push eax */
    PUSH32(esp, ecx); /* 0x160CD9F0: push ecx */
    RECOMP_CALL(sub_160CD760); /* 0x160CD9F1: call 0x160cd760 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CD9F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x160CD9F8: mov eax, edi */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CDA0A; /* 0x160CD9FA: jl 0x160cda0a */
L_160CD9FC:
    edx = MEM32(ebp + 0xC); /* 0x160CD9FC: mov edx, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x20) = edx; /* 0x160CD9FF: mov dword ptr [esi + 0x20], edx */
    esi = POP32_VAL(esp); /* 0x160CDA02: pop esi */
    ecx = POP32_VAL(esp); /* 0x160CDA03: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160CDA04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CDA05: ret 8 */
L_160CDA08:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CDA08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CDA0A:
    esi = POP32_VAL(esp); /* 0x160CDA0A: pop esi */
    ecx = POP32_VAL(esp); /* 0x160CDA0B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160CDA0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CDA0D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CDA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CDA20u);

L_160CDA20:
    edi = edi; /* 0x160CDA20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CDA22: push ebp */
    ebp = esp; /* 0x160CDA23: mov ebp, esp */
    /* test esi, esi */ /* 0x160CDA25: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDA2F; /* 0x160CDA27: jne 0x160cda2f */
L_160CDA29:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CDA29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CDA2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CDA2C: ret 4 */
L_160CDA2F:
    /* cmp MEM32(esi + 0x4), 3 */ /* 0x160CDA2F: cmp dword ptr [esi + 4], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDA3D; /* 0x160CDA33: jne 0x160cda3d */
L_160CDA35:
    eax = MEM32(esi + 0x18); /* 0x160CDA35: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x160CDA38: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDA50; /* 0x160CDA3B: je 0x160cda50 */
L_160CDA3D:
    PUSH32(esp, 0x16039554u); /* 0x160CDA3D: push 0x16039554 */
    PUSH32(esp, ecx); /* 0x160CDA42: push ecx */
    ecx = 0xBBBu; /* 0x160CDA43: mov ecx, 0xbbb */
    RECOMP_CALL(sub_160C8A90); /* 0x160CDA48: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CDA4D: add esp, 8 */
    _flag_k = FK_ADD;
L_160CDA50:
    eax = esi; /* 0x160CDA50: mov eax, esi */
    ebp = POP32_VAL(esp); /* 0x160CDA52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CDA53: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CDA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CDA60u);

L_160CDA60:
    edi = edi; /* 0x160CDA60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CDA62: push ebp */
    ebp = esp; /* 0x160CDA63: mov ebp, esp */
    /* test esi, esi */ /* 0x160CDA65: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDA6F; /* 0x160CDA67: jne 0x160cda6f */
L_160CDA69:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CDA69: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CDA6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CDA6C: ret 4 */
L_160CDA6F:
    /* cmp MEM32(esi + 0x4), 5 */ /* 0x160CDA6F: cmp dword ptr [esi + 4], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDA82; /* 0x160CDA73: jne 0x160cda82 */
L_160CDA75:
    eax = MEM32(esi + 0x18); /* 0x160CDA75: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x160CDA78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDA82; /* 0x160CDA7A: je 0x160cda82 */
L_160CDA7C:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x160CDA7C: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDA98; /* 0x160CDA80: je 0x160cda98 */
L_160CDA82:
    eax = MEM32(ebp + 0x8); /* 0x160CDA82: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1603957Cu); /* 0x160CDA85: push 0x1603957c */
    PUSH32(esp, eax); /* 0x160CDA8A: push eax */
    ecx = 0xBBBu; /* 0x160CDA8B: mov ecx, 0xbbb */
    RECOMP_CALL(sub_160C8A90); /* 0x160CDA90: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CDA95: add esp, 8 */
    _flag_k = FK_ADD;
L_160CDA98:
    eax = esi; /* 0x160CDA98: mov eax, esi */
    ebp = POP32_VAL(esp); /* 0x160CDA9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CDA9B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CDAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CDAB0u);

L_160CDAB0:
    edi = edi; /* 0x160CDAB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CDAB2: push ebp */
    ebp = esp; /* 0x160CDAB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x130u; /* 0x160CDAB5: sub esp, 0x130 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CDABB: push ebx */
    PUSH32(esp, esi); /* 0x160CDABC: push esi */
    PUSH32(esp, edi); /* 0x160CDABD: push edi */
    esi = eax; /* 0x160CDABE: mov esi, eax */
L_160CDAC0:
    ebx = 0xAu; /* 0x160CDAC0: mov ebx, 0xa */
    /* test esi, esi */ /* 0x160CDAC5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDAD3; /* 0x160CDAC7: je 0x160cdad3 */
L_160CDAC9:
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x160CDAC9: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDAD3; /* 0x160CDACC: jne 0x160cdad3 */
L_160CDACE:
    esi = MEM32(esi + 0x20); /* 0x160CDACE: mov esi, dword ptr [esi + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160CDAC0; /* 0x160CDAD1: jmp 0x160cdac0 */
L_160CDAD3:
    edi = MEM32(ebp + 0x10); /* 0x160CDAD3: mov edi, dword ptr [ebp + 0x10] */
L_160CDAD6:
    /* test edi, edi */ /* 0x160CDAD6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDAE4; /* 0x160CDAD8: je 0x160cdae4 */
L_160CDADA:
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x160CDADA: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDAE4; /* 0x160CDADD: jne 0x160cdae4 */
L_160CDADF:
    edi = MEM32(edi + 0x20); /* 0x160CDADF: mov edi, dword ptr [edi + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160CDAD6; /* 0x160CDAE2: jmp 0x160cdad6 */
L_160CDAE4:
    eax = MEM32(esi); /* 0x160CDAE4: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x2C); /* 0x160CDAE6: mov edx, dword ptr [eax + 0x2c] */
    ecx = ebp + (-0x64); /* 0x160CDAE9: lea ecx, [ebp - 0x64] */
    PUSH32(esp, ecx); /* 0x160CDAEC: push ecx */
    PUSH32(esp, ebx); /* 0x160CDAED: push ebx */
    ecx = esi; /* 0x160CDAEE: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160CDAF0: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CDAF2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDB0B; /* 0x160CDAF4: je 0x160cdb0b */
L_160CDAF6:
    eax = MEM32(edi); /* 0x160CDAF6: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x2C); /* 0x160CDAF8: mov edx, dword ptr [eax + 0x2c] */
    ecx = ebp + (-0xCC); /* 0x160CDAFB: lea ecx, [ebp - 0xcc] */
    PUSH32(esp, ecx); /* 0x160CDB01: push ecx */
    PUSH32(esp, ebx); /* 0x160CDB02: push ebx */
    ecx = edi; /* 0x160CDB03: mov ecx, edi */
    RECOMP_ICALL(edx); /* 0x160CDB05: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CDB07: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDB19; /* 0x160CDB09: jne 0x160cdb19 */
L_160CDB0B:
    eax = 0x8007054Fu; /* 0x160CDB0B: mov eax, 0x8007054f */
    edi = POP32_VAL(esp); /* 0x160CDB10: pop edi */
    esi = POP32_VAL(esp); /* 0x160CDB11: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CDB12: pop ebx */
    esp = ebp; /* 0x160CDB13: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CDB15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x160CDB16: ret 0x24 */
L_160CDB19:
    eax = MEM32(ebp + (-0x2C)); /* 0x160CDB19: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, MEM32(ebp + (-0x94)) */ /* 0x160CDB1C: cmp eax, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x94)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160CDB32; /* 0x160CDB22: jb 0x160cdb32 */
L_160CDB24:
    PUSH32(esp, 0); /* 0x160CDB24: push 0 */
    PUSH32(esp, esi); /* 0x160CDB26: push esi */
    ecx = edi; /* 0x160CDB27: mov ecx, edi */
    RECOMP_CALL(sub_160CE190); /* 0x160CDB29: call 0x160ce190 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CDB2E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDB5C; /* 0x160CDB30: jne 0x160cdb5c */
L_160CDB32:
    PUSH32(esp, 0); /* 0x160CDB32: push 0 */
    PUSH32(esp, edi); /* 0x160CDB34: push edi */
    ecx = esi; /* 0x160CDB35: mov ecx, esi */
    RECOMP_CALL(sub_160CE190); /* 0x160CDB37: call 0x160ce190 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CDB3C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDB4A; /* 0x160CDB3E: je 0x160cdb4a */
L_160CDB40:
    ebx = edi; /* 0x160CDB40: mov ebx, edi */
    edi = ebp + (-0xCC); /* 0x160CDB42: lea edi, [ebp - 0xcc] */
    goto L_160CDB61; /* 0x160CDB48: jmp 0x160cdb61 */
L_160CDB4A:
    PUSH32(esp, 0); /* 0x160CDB4A: push 0 */
    PUSH32(esp, esi); /* 0x160CDB4C: push esi */
    ecx = edi; /* 0x160CDB4D: mov ecx, edi */
    RECOMP_CALL(sub_160CE190); /* 0x160CDB4F: call 0x160ce190 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CDB54: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDE18; /* 0x160CDB56: je 0x160cde18 */
L_160CDB5C:
    edi = ebp + (-0x64); /* 0x160CDB5C: lea edi, [ebp - 0x64] */
    ebx = esi; /* 0x160CDB5F: mov ebx, esi */
L_160CDB61:
    ecx = MEM32(edi + 0x30); /* 0x160CDB61: mov ecx, dword ptr [edi + 0x30] */
    MEM32(ebp + (-0x34)) = ecx; /* 0x160CDB64: mov dword ptr [ebp - 0x34], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x160CDB67: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(edi + 0x34); /* 0x160CDB6A: mov edx, dword ptr [edi + 0x34] */
    MEM32(ebp + (-0x30)) = edx; /* 0x160CDB6D: mov dword ptr [ebp - 0x30], edx */
    MEM8(ebp + 0x13) = (uint8_t)(0); /* 0x160CDB70: mov byte ptr [ebp + 0x13], 0 */
    /* test ecx, ecx */ /* 0x160CDB74: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDC0A; /* 0x160CDB76: je 0x160cdc0a */
L_160CDB7C:
    eax = MEM32(ecx); /* 0x160CDB7C: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x2C); /* 0x160CDB7E: mov eax, dword ptr [eax + 0x2c] */
    edx = ebp + (-0x12C); /* 0x160CDB81: lea edx, [ebp - 0x12c] */
    PUSH32(esp, edx); /* 0x160CDB87: push edx */
    PUSH32(esp, 0xAu); /* 0x160CDB88: push 0xa */
    RECOMP_ICALL(eax); /* 0x160CDB8A: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CDB8C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDE18; /* 0x160CDB8E: je 0x160cde18 */
L_160CDB94:
    eax = MEM32(ebp + (-0xFC)); /* 0x160CDB94: mov eax, dword ptr [ebp - 0xfc] */
    /* cmp MEM32(edi + 0x30), eax */ /* 0x160CDB9A: cmp dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CDBA6; /* 0x160CDB9D: jae 0x160cdba6 */
L_160CDB9F:
    MEM32(ebp + (-0x34)) = eax; /* 0x160CDB9F: mov dword ptr [ebp - 0x34], eax */
    SET_LO8(ecx, 1); /* 0x160CDBA2: mov cl, 1 */
    goto L_160CDBA9; /* 0x160CDBA4: jmp 0x160cdba9 */
L_160CDBA6:
    SET_LO8(ecx, MEM8(ebp + 0x13)); /* 0x160CDBA6: mov cl, byte ptr [ebp + 0x13] */
L_160CDBA9:
    eax = MEM32(ebp + (-0xF8)); /* 0x160CDBA9: mov eax, dword ptr [ebp - 0xf8] */
    /* cmp MEM32(edi + 0x34), eax */ /* 0x160CDBAF: cmp dword ptr [edi + 0x34], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CDC06; /* 0x160CDBB2: jae 0x160cdc06 */
L_160CDBB4:
    MEM32(ebp + (-0x30)) = eax; /* 0x160CDBB4: mov dword ptr [ebp - 0x30], eax */
L_160CDBB7:
    esi = MEM32(ebp + (-0xA4)); /* 0x160CDBB7: mov esi, dword ptr [ebp - 0xa4] */
    edx = MEM32(ebp + (-0x3C)); /* 0x160CDBBD: mov edx, dword ptr [ebp - 0x3c] */
L_160CDBC0:
    eax = MEM32(ebp + (-0x60)); /* 0x160CDBC0: mov eax, dword ptr [ebp - 0x60] */
L_160CDBC3:
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x160CDBC3: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDBF8; /* 0x160CDBC7: jne 0x160cdbf8 */
L_160CDBC9:
    ecx = ebp + (-0x60); /* 0x160CDBC9: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x160CDBCC: push ecx */
    ecx = MEM32(ebp + (-0xC8)); /* 0x160CDBCD: mov ecx, dword ptr [ebp - 0xc8] */
    RECOMP_CALL(sub_160CE7A0); /* 0x160CDBD3: call 0x160ce7a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CDBD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CDE1D; /* 0x160CDBDA: jl 0x160cde1d */
L_160CDBE0:
    _flag_a = (uint32_t)((esi | MEM32(ebp + (-0x3C)))); _flag_b = (uint32_t)((esi | MEM32(ebp + (-0x3C))));
    esi = esi | MEM32(ebp + (-0x3C)); /* 0x160CDBE0: or esi, dword ptr [ebp - 0x3c] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x60)); /* 0x160CDBE3: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20000200u);
    esi = esi & 0x20000200u; /* 0x160CDBE6: and esi, 0x20000200 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi; /* 0x160CDBEC: mov edx, esi */
    MEM32(ebp + (-0x3C)) = edx; /* 0x160CDBEE: mov dword ptr [ebp - 0x3c], edx */
    MEM32(ebp + (-0x38)) = 0; /* 0x160CDBF1: mov dword ptr [ebp - 0x38], 0 */
L_160CDBF8:
    /* cmp eax, 0xFu */ /* 0x160CDBF8: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x160CDBFB: mov esi, dword ptr [ebp + 8] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CDC48; /* 0x160CDBFE: jge 0x160cdc48 */
L_160CDC00:
    eax = MEM32(esi + eax * 4 + 0x68); /* 0x160CDC00: mov eax, dword ptr [esi + eax*4 + 0x68] */
    goto L_160CDC6D; /* 0x160CDC04: jmp 0x160cdc6d */
L_160CDC06:
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CDC06: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDBB7; /* 0x160CDC08: jne 0x160cdbb7 */
L_160CDC0A:
    eax = MEM32(ebp + (-0x60)); /* 0x160CDC0A: mov eax, dword ptr [ebp - 0x60] */
    esi = MEM32(ebp + (-0xA4)); /* 0x160CDC0D: mov esi, dword ptr [ebp - 0xa4] */
    edx = MEM32(ebp + (-0x3C)); /* 0x160CDC13: mov edx, dword ptr [ebp - 0x3c] */
    /* cmp eax, MEM32(ebp + (-0xC8)) */ /* 0x160CDC16: cmp eax, dword ptr [ebp - 0xc8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDBC3; /* 0x160CDC1C: jne 0x160cdbc3 */
L_160CDC1E:
    ecx = esi; /* 0x160CDC1E: mov ecx, esi */
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x160CDC20: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20000200u);
    ecx = ecx & 0x20000200u; /* 0x160CDC22: and ecx, 0x20000200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CDC28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x160CDC2A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDBC0; /* 0x160CDC2C: jne 0x160cdbc0 */
L_160CDC2E:
    ecx = MEM32(edi + 0x4); /* 0x160CDC2E: mov ecx, dword ptr [edi + 4] */
    esi = MEM32(ebp + 0x8); /* 0x160CDC31: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x60)) = ecx; /* 0x160CDC34: mov dword ptr [ebp - 0x60], ecx */
    edx = MEM32(edi + 0x28); /* 0x160CDC37: mov edx, dword ptr [edi + 0x28] */
    MEM32(ebp + (-0x3C)) = edx; /* 0x160CDC3A: mov dword ptr [ebp - 0x3c], edx */
    eax = MEM32(edi + 0x2C); /* 0x160CDC3D: mov eax, dword ptr [edi + 0x2c] */
    MEM32(ebp + (-0x38)) = eax; /* 0x160CDC40: mov dword ptr [ebp - 0x38], eax */
    goto L_160CDD8E; /* 0x160CDC43: jmp 0x160cdd8e */
L_160CDC48:
    /* cmp MEM32(esi + eax * 4 + 0xA4), 0 */ /* 0x160CDC48: cmp dword ptr [esi + eax*4 + 0xa4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0xA4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax + 0x29; /* 0x160CDC50: lea ebx, [eax + 0x29] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDC6A; /* 0x160CDC53: jne 0x160cdc6a */
L_160CDC55:
    PUSH32(esp, 0); /* 0x160CDC55: push 0 */
    PUSH32(esp, 0); /* 0x160CDC57: push 0 */
    PUSH32(esp, 0); /* 0x160CDC59: push 0 */
    PUSH32(esp, eax); /* 0x160CDC5B: push eax */
    PUSH32(esp, esi); /* 0x160CDC5C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CDC5D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_160CC7D0); /* 0x160CDC5F: call 0x160cc7d0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x3C)); /* 0x160CDC64: mov edx, dword ptr [ebp - 0x3c] */
    MEM32(esi + ebx * 4) = eax; /* 0x160CDC67: mov dword ptr [esi + ebx*4], eax */
L_160CDC6A:
    eax = MEM32(esi + ebx * 4); /* 0x160CDC6A: mov eax, dword ptr [esi + ebx*4] */
L_160CDC6D:
    /* test eax, eax */ /* 0x160CDC6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDDEA; /* 0x160CDC6F: je 0x160cddea */
L_160CDC75:
    ecx = MEM32(ebp + (-0x30)); /* 0x160CDC75: mov ecx, dword ptr [ebp - 0x30] */
    edi = MEM32(ebp + (-0x34)); /* 0x160CDC78: mov edi, dword ptr [ebp - 0x34] */
    MEM32(ebp + 0x10) = ecx; /* 0x160CDC7B: mov dword ptr [ebp + 0x10], ecx */
    ecx = MEM32(ebp + (-0x38)); /* 0x160CDC7E: mov ecx, dword ptr [ebp - 0x38] */
    MEM32(ebp + 0x1C) = edi; /* 0x160CDC81: mov dword ptr [ebp + 0x1c], edi */
    MEM32(ebp + (-0x6C)) = edx; /* 0x160CDC84: mov dword ptr [ebp - 0x6c], edx */
    MEM32(ebp + (-0x68)) = ecx; /* 0x160CDC87: mov dword ptr [ebp - 0x68], ecx */
    /* cmp eax, MEM32(esi + 0x78) */ /* 0x160CDC8A: cmp eax, dword ptr [esi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x78));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDCC6; /* 0x160CDC8D: jne 0x160cdcc6 */
L_160CDC8F:
    ebx = edx; /* 0x160CDC8F: mov ebx, edx */
    _flag_a = (uint32_t)((ebx | ecx)); _flag_b = (uint32_t)((ebx | ecx));
    ebx = ebx | ecx; /* 0x160CDC91: or ebx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDCC6; /* 0x160CDC93: jne 0x160cdcc6 */
L_160CDC95:
    ebx = MEM32(esi + 0x1C8); /* 0x160CDC95: mov ebx, dword ptr [esi + 0x1c8] */
    /* test ebx, ebx */ /* 0x160CDC9B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDCAE; /* 0x160CDC9D: je 0x160cdcae */
L_160CDC9F:
    /* cmp edi, 1 */ /* 0x160CDC9F: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDCAE; /* 0x160CDCA2: jne 0x160cdcae */
L_160CDCA4:
    /* cmp MEM32(ebp + (-0x30)), 4 */ /* 0x160CDCA4: cmp dword ptr [ebp - 0x30], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDD8A; /* 0x160CDCA8: je 0x160cdd8a */
L_160CDCAE:
    ebx = MEM32(esi + 0x1CC); /* 0x160CDCAE: mov ebx, dword ptr [esi + 0x1cc] */
    /* test ebx, ebx */ /* 0x160CDCB4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDCC6; /* 0x160CDCB6: je 0x160cdcc6 */
L_160CDCB8:
    /* cmp edi, 4 */ /* 0x160CDCB8: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDCC6; /* 0x160CDCBB: jne 0x160cdcc6 */
L_160CDCBD:
    /* cmp MEM32(ebp + (-0x30)), edi */ /* 0x160CDCBD: cmp dword ptr [ebp - 0x30], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDD8A; /* 0x160CDCC0: je 0x160cdd8a */
L_160CDCC6:
    PUSH32(esp, eax); /* 0x160CDCC6: push eax */
    PUSH32(esp, ecx); /* 0x160CDCC7: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFF3FFu);
    edx = edx & 0xFFFFF3FFu; /* 0x160CDCC8: and edx, 0xfffff3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x160CDCCE: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160CDCCF: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160CDCD2: push edx */
    ecx = esi; /* 0x160CDCD3: mov ecx, esi */
    RECOMP_CALL(sub_160CCCC0); /* 0x160CDCD5: call 0x160cccc0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160CDCDA: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160CDCDC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x160CDCDE: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDD7C; /* 0x160CDCE0: je 0x160cdd7c */
L_160CDCE6:
    eax = MEM32(ebp + 0x1C); /* 0x160CDCE6: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp eax, 1 */ /* 0x160CDCE9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CDD17; /* 0x160CDCEC: ja 0x160cdd17 */
L_160CDCEE:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x160CDCEE: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CDD85; /* 0x160CDCF2: jbe 0x160cdd85 */
L_160CDCF8:
    /* cmp eax, 1 */ /* 0x160CDCF8: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDD17; /* 0x160CDCFB: jne 0x160cdd17 */
L_160CDCFD:
    PUSH32(esp, 0x24u); /* 0x160CDCFD: push 0x24 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CDCFF: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x160CDD04: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDD7C; /* 0x160CDD06: je 0x160cdd7c */
L_160CDD08:
    MEM32(eax) = 0x160398CCu; /* 0x160CDD08: mov dword ptr [eax], 0x160398cc */
    MEM32(eax + 0x4) = 9; /* 0x160CDD0E: mov dword ptr [eax + 4], 9 */
    goto L_160CDD2F; /* 0x160CDD15: jmp 0x160cdd2f */
L_160CDD17:
    PUSH32(esp, 0x24u); /* 0x160CDD17: push 0x24 */
    RECOMP_CALL(sub_160C9E40); /* 0x160CDD19: call 0x160c9e40 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x160CDD1E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDD7C; /* 0x160CDD20: je 0x160cdd7c */
L_160CDD22:
    MEM32(eax) = 0x16039898u; /* 0x160CDD22: mov dword ptr [eax], 0x16039898 */
    MEM32(eax + 0x4) = 8; /* 0x160CDD28: mov dword ptr [eax + 4], 8 */
L_160CDD2F:
    ecx = MEM32(ebp + 0x1C); /* 0x160CDD2F: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x160CDD32: mov edx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x20) = ebx; /* 0x160CDD35: mov dword ptr [eax + 0x20], ebx */
    MEM32(eax + 0x1C) = ebx; /* 0x160CDD38: mov dword ptr [eax + 0x1c], ebx */
    MEM32(eax + 0x18) = ebx; /* 0x160CDD3B: mov dword ptr [eax + 0x18], ebx */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x160CDD3E: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax + 0x10) = ebx; /* 0x160CDD45: mov dword ptr [eax + 0x10], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x160CDD48: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x160CDD4B: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0x1C) = ecx; /* 0x160CDD4E: mov dword ptr [eax + 0x1c], ecx */
    ecx = MEM32(ebp + (-0x6C)); /* 0x160CDD51: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC00u);
    ecx = ecx & 0xC00u; /* 0x160CDD54: and ecx, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x18) = edi; /* 0x160CDD5A: mov dword ptr [eax + 0x18], edi */
    MEM32(eax + 0x20) = edx; /* 0x160CDD5D: mov dword ptr [eax + 0x20], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CDD60: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x160CDD62: mov edi, ecx */
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x160CDD64: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDDA8; /* 0x160CDD66: je 0x160cdda8 */
L_160CDD68:
    PUSH32(esp, eax); /* 0x160CDD68: push eax */
    eax = MEM32(ebp + 0xC); /* 0x160CDD69: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160CDD6C: push edx */
    PUSH32(esp, ecx); /* 0x160CDD6D: push ecx */
    PUSH32(esp, eax); /* 0x160CDD6E: push eax */
    ecx = esi; /* 0x160CDD6F: mov ecx, esi */
    RECOMP_CALL(sub_160CCCC0); /* 0x160CDD71: call 0x160cccc0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160CDD76: mov edi, eax */
    /* cmp edi, ebx */ /* 0x160CDD78: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDD85; /* 0x160CDD7A: jne 0x160cdd85 */
L_160CDD7C:
    MEM8(esi + 0x240) = (uint8_t)(1); /* 0x160CDD7C: mov byte ptr [esi + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CDD83: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CDD85:
    edx = MEM32(ebp + (-0x3C)); /* 0x160CDD85: mov edx, dword ptr [ebp - 0x3c] */
    ebx = edi; /* 0x160CDD88: mov ebx, edi */
L_160CDD8A:
    /* test ebx, ebx */ /* 0x160CDD8A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDDEA; /* 0x160CDD8C: je 0x160cddea */
L_160CDD8E:
    eax = MEM32(ebp + 0x24); /* 0x160CDD8E: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x20); /* 0x160CDD91: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(eax) = ebx; /* 0x160CDD94: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0x18); /* 0x160CDD96: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx) = ebx; /* 0x160CDD99: mov dword ptr [ecx], ebx */
    /* cmp eax, 0xFu */ /* 0x160CDD9B: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDDF8; /* 0x160CDD9E: je 0x160cddf8 */
L_160CDDA0:
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CDDAC; /* 0x160CDDA0: jge 0x160cddac */
L_160CDDA2:
    eax = MEM32(esi + eax * 4 + 0x68); /* 0x160CDDA2: mov eax, dword ptr [esi + eax*4 + 0x68] */
    goto L_160CDDBB; /* 0x160CDDA6: jmp 0x160cddbb */
L_160CDDA8:
    edi = eax; /* 0x160CDDA8: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_160CDD85; /* 0x160CDDAA: jmp 0x160cdd85 */
L_160CDDAC:
    ebx = MEM32(ebp + 0x8); /* 0x160CDDAC: mov ebx, dword ptr [ebp + 8] */
    esi = eax; /* 0x160CDDAF: mov esi, eax */
    RECOMP_CALL(sub_160CCB80); /* 0x160CDDB1: call 0x160ccb80 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x3C)); /* 0x160CDDB6: mov edx, dword ptr [ebp - 0x3c] */
    esi = ebx; /* 0x160CDDB9: mov esi, ebx */
L_160CDDBB:
    /* test eax, eax */ /* 0x160CDDBB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CDDEA; /* 0x160CDDBD: je 0x160cddea */
L_160CDDBF:
    ecx = MEM32(ebp + (-0x30)); /* 0x160CDDBF: mov ecx, dword ptr [ebp - 0x30] */
    PUSH32(esp, ecx); /* 0x160CDDC2: push ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x160CDDC3: mov ecx, dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x160CDDC6: push ecx */
    ecx = MEM32(ebp + (-0x38)); /* 0x160CDDC7: mov ecx, dword ptr [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x160CDDCA: push ecx */
    _flag_a = (uint32_t)((edx | 0x200u)); _flag_b = (uint32_t)((edx | 0x200u));
    edx = edx | 0x200u; /* 0x160CDDCB: or edx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x160CDDD1: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160CDDD2: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x160CDDD5: push 0 */
    PUSH32(esp, edx); /* 0x160CDDD7: push edx */
    ecx = eax; /* 0x160CDDD8: mov ecx, eax */
    edi = esi; /* 0x160CDDDA: mov edi, esi */
    RECOMP_CALL(sub_160CD1A0); /* 0x160CDDDC: call 0x160cd1a0 */
    RECOMP_FLAGS_IN();
L_160CDDE1:
    ecx = MEM32(ebp + 0x28); /* 0x160CDDE1: mov ecx, dword ptr [ebp + 0x28] */
    MEM32(ecx) = eax; /* 0x160CDDE4: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x160CDDE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDE0D; /* 0x160CDDE8: jne 0x160cde0d */
L_160CDDEA:
    eax = 0x8007000Eu; /* 0x160CDDEA: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x160CDDEF: pop edi */
    esi = POP32_VAL(esp); /* 0x160CDDF0: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CDDF1: pop ebx */
    esp = ebp; /* 0x160CDDF2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CDDF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x160CDDF5: ret 0x24 */
L_160CDDF8:
    edx = MEM32(ebp + 0xC); /* 0x160CDDF8: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x160CDDFB: push ebx */
    PUSH32(esp, 0); /* 0x160CDDFC: push 0 */
    PUSH32(esp, 0x200u); /* 0x160CDDFE: push 0x200 */
    PUSH32(esp, edx); /* 0x160CDE03: push edx */
    ecx = esi; /* 0x160CDE04: mov ecx, esi */
    RECOMP_CALL(sub_160CCCC0); /* 0x160CDE06: call 0x160cccc0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_160CDDE1; /* 0x160CDE0B: jmp 0x160cdde1 */
L_160CDE0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CDE0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CDE0F: pop edi */
    esi = POP32_VAL(esp); /* 0x160CDE10: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CDE11: pop ebx */
    esp = ebp; /* 0x160CDE12: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CDE14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x160CDE15: ret 0x24 */
L_160CDE18:
    eax = 0x80004005u; /* 0x160CDE18: mov eax, 0x80004005 */
L_160CDE1D:
    edi = POP32_VAL(esp); /* 0x160CDE1D: pop edi */
    esi = POP32_VAL(esp); /* 0x160CDE1E: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CDE1F: pop ebx */
    esp = ebp; /* 0x160CDE20: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CDE22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x160CDE23: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_160CDF50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CDF50u);

L_160CDF50:
    /* cmp eax, ecx */ /* 0x160CDF50: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDF6F; /* 0x160CDF52: je 0x160cdf6f */
L_160CDF54:
    edx = 0x8000u; /* 0x160CDF54: mov edx, 0x8000 */
    /* cmp eax, 4 */ /* 0x160CDF59: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDF65; /* 0x160CDF5C: jne 0x160cdf65 */
L_160CDF5E:
    /* cmp ecx, 3 */ /* 0x160CDF5E: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CDF6F; /* 0x160CDF61: je 0x160cdf6f */
L_160CDF63:
    goto L_160CDF80; /* 0x160CDF63: jmp 0x160cdf80 */
L_160CDF65:
    /* cmp eax, 3 */ /* 0x160CDF65: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDF72; /* 0x160CDF68: jne 0x160cdf72 */
L_160CDF6A:
    /* cmp ecx, 4 */ /* 0x160CDF6A: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDF80; /* 0x160CDF6D: jne 0x160cdf80 */
L_160CDF6F:
    SET_LO8(eax, 1); /* 0x160CDF6F: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CDF71: ret  */
L_160CDF72:
    /* cmp eax, 0x20u */ /* 0x160CDF72: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDF80; /* 0x160CDF75: jne 0x160cdf80 */
L_160CDF77:
    /* test MEM32(ecx * 4 + 0x16021500), edx */ /* 0x160CDF77: test dword ptr [ecx*4 + 0x16021500], edx */
    _flag_a = (uint32_t)(MEM32(ecx * 4 + 0x16021500)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDF6F; /* 0x160CDF7E: jne 0x160cdf6f */
L_160CDF80:
    /* cmp ecx, 0x20u */ /* 0x160CDF80: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CDF8E; /* 0x160CDF83: jne 0x160cdf8e */
L_160CDF85:
    /* test MEM32(eax * 4 + 0x16021500), edx */ /* 0x160CDF85: test dword ptr [eax*4 + 0x16021500], edx */
    _flag_a = (uint32_t)(MEM32(eax * 4 + 0x16021500)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CDF6F; /* 0x160CDF8C: jne 0x160cdf6f */
L_160CDF8E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CDF8E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CDF90: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CDFA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CDFA0u);

L_160CDFA0:
    edi = edi; /* 0x160CDFA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CDFA2: push ebp */
    ebp = esp; /* 0x160CDFA3: mov ebp, esp */
    eax = MEM32(ecx); /* 0x160CDFA5: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x160CDFA7: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CDFAA: call edx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x160CDFAC: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CDFAF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x160CDFB1: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0x8); /* 0x160CDFB3: mov ecx, dword ptr [ebp + 8] */
    /* cmp edx, eax */ /* 0x160CDFB6: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CDFB8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160CDFBA: neg eax */
    _flag_k = FK_CMP;
    MEM32(ecx) = eax; /* 0x160CDFBC: mov dword ptr [ecx], eax */
    ebp = POP32_VAL(esp); /* 0x160CDFBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CDFBF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CDFD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CDFD0u);

L_160CDFD0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CDFD0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CDFD2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CDFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CDFE0u);

L_160CDFE0:
    eax = 1; /* 0x160CDFE0: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CDFE5: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_160CDFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CDFF0u);

L_160CDFF0:
    edi = edi; /* 0x160CDFF0: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CDFF2: push esi */
    esi = eax; /* 0x160CDFF3: mov esi, eax */
    /* test esi, esi */ /* 0x160CDFF5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE068; /* 0x160CDFF7: je 0x160ce068 */
L_160CDFF9:
    ecx = 0xAu; /* 0x160CDFF9: mov ecx, 0xa */
    edi = edi; /* 0x160CDFFE: mov edi, edi */
L_160CE000:
    /* test eax, eax */ /* 0x160CE000: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE00E; /* 0x160CE002: je 0x160ce00e */
L_160CE004:
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x160CE004: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE00E; /* 0x160CE007: jne 0x160ce00e */
L_160CE009:
    eax = MEM32(eax + 0x20); /* 0x160CE009: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160CE000; /* 0x160CE00C: jmp 0x160ce000 */
L_160CE00E:
    /* cmp MEM32(eax + 0x4), 7 */ /* 0x160CE00E: cmp dword ptr [eax + 4], 7 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CE012: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x160CE015: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE068; /* 0x160CE017: je 0x160ce068 */
L_160CE019:
    PUSH32(esp, 7); /* 0x160CE019: push 7 */
    eax = edi; /* 0x160CE01B: mov eax, edi */
    RECOMP_CALL(sub_160C5640); /* 0x160CE01D: call 0x160c5640 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE022: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE068; /* 0x160CE024: je 0x160ce068 */
L_160CE026:
    ecx = esi; /* 0x160CE026: mov ecx, esi */
    RECOMP_CALL(sub_160D1BC0); /* 0x160CE028: call 0x160d1bc0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax); /* 0x160CE02D: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x160CE02F: mov ecx, eax */
    eax = MEM32(edx + 0x4); /* 0x160CE031: mov eax, dword ptr [edx + 4] */
    RECOMP_ICALL(eax); /* 0x160CE034: call eax */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x160CE036: mov ecx, edi */
    esi = eax; /* 0x160CE038: mov esi, eax */
    RECOMP_CALL(sub_160D1BC0); /* 0x160CE03A: call 0x160d1bc0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax); /* 0x160CE03F: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x160CE041: mov ecx, eax */
    eax = MEM32(edx + 0x4); /* 0x160CE043: mov eax, dword ptr [edx + 4] */
    RECOMP_ICALL(eax); /* 0x160CE046: call eax */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x160CE048: mov ecx, eax */
    /* cmp esi, ecx */ /* 0x160CE04A: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE05A; /* 0x160CE04C: je 0x160ce05a */
L_160CE04E:
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CE05E; /* 0x160CE04E: jbe 0x160ce05e */
L_160CE050:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CE050: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x160CE052: mov eax, esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x160CE054: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x160CE056: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE068; /* 0x160CE058: jne 0x160ce068 */
L_160CE05A:
    eax = esi; /* 0x160CE05A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x160CE05C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CE05D: ret  */
L_160CE05E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CE05E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x160CE060: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = ecx; /* 0x160CE062: mov eax, ecx */
    /* test edx, edx */ /* 0x160CE064: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE06A; /* 0x160CE066: je 0x160ce06a */
L_160CE068:
    eax = ebx; /* 0x160CE068: mov eax, ebx */
L_160CE06A:
    esi = POP32_VAL(esp); /* 0x160CE06A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CE06B: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CE080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CE080u);

L_160CE080:
    edi = edi; /* 0x160CE080: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CE082: push ebp */
    ebp = esp; /* 0x160CE083: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x160CE085: sub esp, 0x64 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x160CE088: push esi */
    esi = eax; /* 0x160CE089: mov esi, eax */
    eax = MEM32(ecx); /* 0x160CE08B: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x2C); /* 0x160CE08D: mov eax, dword ptr [eax + 0x2c] */
    edx = ebp + (-0x60); /* 0x160CE090: lea edx, [ebp - 0x60] */
    PUSH32(esp, edx); /* 0x160CE093: push edx */
    PUSH32(esp, edi); /* 0x160CE094: push edi */
    RECOMP_ICALL(eax); /* 0x160CE095: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE097: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE0A0; /* 0x160CE099: jne 0x160ce0a0 */
L_160CE09B:
    esi = POP32_VAL(esp); /* 0x160CE09B: pop esi */
    esp = ebp; /* 0x160CE09C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE09E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CE09F: ret  */
L_160CE0A0:
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x160CE0A0: mov al, byte ptr [ebp - 8] */
    /* test LO8(eax), 2 */ /* 0x160CE0A3: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE0AB; /* 0x160CE0A5: je 0x160ce0ab */
L_160CE0A7:
    _flag_a = (uint32_t)((MEM8(esi + 0x58) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x58) | 2)) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) | 2); /* 0x160CE0A7: or byte ptr [esi + 0x58], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160CE0AB:
    /* test LO8(eax), 1 */ /* 0x160CE0AB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE0B5; /* 0x160CE0AD: jne 0x160ce0b5 */
L_160CE0AF:
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x160CE0AF: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE0B9; /* 0x160CE0B3: je 0x160ce0b9 */
L_160CE0B5:
    _flag_a = (uint32_t)((MEM8(esi + 0x58) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x58) | 1)) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) | 1); /* 0x160CE0B5: or byte ptr [esi + 0x58], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_160CE0B9:
    edx = MEM32(ebp + (-0x24)); /* 0x160CE0B9: mov edx, dword ptr [ebp - 0x24] */
    eax = MEM32(ebp + (-0x20)); /* 0x160CE0BC: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x28)); /* 0x160CE0BF: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) + edx; /* 0x160CE0C2: add dword ptr [esi + 0x3c], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) + eax; /* 0x160CE0C5: add dword ptr [esi + 0x40], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + ecx; /* 0x160CE0C8: add dword ptr [esi + 0x38], ecx */
    _flag_k = FK_ADD;
    eax = ebp + (-0x60); /* 0x160CE0CB: lea eax, [ebp - 0x60] */
    edx = edi; /* 0x160CE0CE: mov edx, edi */
    RECOMP_CALL(sub_160CECC0); /* 0x160CE0D0: call 0x160cecc0 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x160CE0D5: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160CE0D7: pop esi */
    esp = ebp; /* 0x160CE0D8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE0DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CE0DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CE0F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CE0F0u);

L_160CE0F0:
    edi = edi; /* 0x160CE0F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CE0F2: push ebp */
    ebp = esp; /* 0x160CE0F3: mov ebp, esp */
    eax = MEM32(edi); /* 0x160CE0F5: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x2C); /* 0x160CE0F7: mov edx, dword ptr [eax + 0x2c] */
    PUSH32(esp, esi); /* 0x160CE0FA: push esi */
    PUSH32(esp, 3); /* 0x160CE0FB: push 3 */
    ecx = edi; /* 0x160CE0FD: mov ecx, edi */
    RECOMP_ICALL(edx); /* 0x160CE0FF: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE101: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE109; /* 0x160CE103: jne 0x160ce109 */
L_160CE105:
    ebp = POP32_VAL(esp); /* 0x160CE105: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE106: ret 8 */
L_160CE109:
    eax = MEM32(esi); /* 0x160CE109: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x160CE10B: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x160CE10E: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFDu; /* 0x160CE110: add eax, -3 */
    _flag_k = FK_ADD;
    /* cmp eax, 6 */ /* 0x160CE113: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE16D; /* 0x160CE116: ja 0x160ce16d */
L_160CE118:
    edx = (uint32_t)MEM8(eax + 0x160CE180); /* 0x160CE118: movzx edx, byte ptr [eax + 0x160ce180] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x160CE174)); goto _ljump; }
L_160CE126:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x160CE126: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE149; /* 0x160CE12A: je 0x160ce149 */
L_160CE12C:
    ecx = edi; /* 0x160CE12C: mov ecx, edi */
    RECOMP_CALL(sub_160C57F0); /* 0x160CE12E: call 0x160c57f0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE133: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE149; /* 0x160CE135: je 0x160ce149 */
L_160CE137:
    eax = MEM32(esi + 0x38); /* 0x160CE137: mov eax, dword ptr [esi + 0x38] */
    MEM32(esi + 0x34) = eax; /* 0x160CE13A: mov dword ptr [esi + 0x34], eax */
    MEM32(esi) = 9; /* 0x160CE13D: mov dword ptr [esi], 9 */
    SET_LO8(eax, 1); /* 0x160CE143: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160CE145: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE146: ret 8 */
L_160CE149:
    eax = MEM32(esi + 0x38); /* 0x160CE149: mov eax, dword ptr [esi + 0x38] */
    MEM32(esi + 0x34) = eax; /* 0x160CE14C: mov dword ptr [esi + 0x34], eax */
    MEM32(esi) = 3; /* 0x160CE14F: mov dword ptr [esi], 3 */
    SET_LO8(eax, 1); /* 0x160CE155: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160CE157: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE158: ret 8 */
L_160CE15B:
    /* cmp MEM32(esi + 0x34), 1 */ /* 0x160CE15B: cmp dword ptr [esi + 0x34], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE16D; /* 0x160CE15F: jne 0x160ce16d */
L_160CE161:
    /* cmp MEM32(esi + 0x30), 1 */ /* 0x160CE161: cmp dword ptr [esi + 0x30], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE16D; /* 0x160CE165: jne 0x160ce16d */
L_160CE167:
    MEM32(esi) = 2; /* 0x160CE167: mov dword ptr [esi], 2 */
L_160CE16D:
    SET_LO8(eax, 1); /* 0x160CE16D: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x160CE16F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE170: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CE126u: goto L_160CE126;
      case 0x160CE15Bu: goto L_160CE15B;
      case 0x160CE16Du: goto L_160CE16D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CE190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CE190u);

L_160CE190:
    edi = edi; /* 0x160CE190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CE192: push ebp */
    ebp = esp; /* 0x160CE193: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xECu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xECu; /* 0x160CE195: sub esp, 0xec */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CE19B: push ebx */
    PUSH32(esp, esi); /* 0x160CE19C: push esi */
    PUSH32(esp, edi); /* 0x160CE19D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CE19E: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x160CE1A1: mov ebx, ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x160CE1A3: mov dword ptr [ebp - 0xc], ebx */
    /* cmp ebx, edi */ /* 0x160CE1A6: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE1A8: je 0x160ce3c9 */
L_160CE1AE:
    eax = MEM32(ebx); /* 0x160CE1AE: mov eax, dword ptr [ebx] */
    edx = MEM32(eax + 0x28); /* 0x160CE1B0: mov edx, dword ptr [eax + 0x28] */
    ecx = ebp + (-0x4); /* 0x160CE1B3: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CE1B6: push ecx */
    ecx = ebx; /* 0x160CE1B7: mov ecx, ebx */
    RECOMP_ICALL(edx); /* 0x160CE1B9: call edx */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x160CE1BB: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE1E7; /* 0x160CE1BF: je 0x160ce1e7 */
L_160CE1C1:
    /* test MEM8(eax), 1 */ /* 0x160CE1C1: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE1C4: jne 0x160ce3c9 */
L_160CE1CA:
    eax = MEM32(edi); /* 0x160CE1CA: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x28); /* 0x160CE1CC: mov edx, dword ptr [eax + 0x28] */
    ecx = ebp + (-0x4); /* 0x160CE1CF: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CE1D2: push ecx */
    ecx = edi; /* 0x160CE1D3: mov ecx, edi */
    RECOMP_ICALL(edx); /* 0x160CE1D5: call edx */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x160CE1D7: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE22E; /* 0x160CE1DA: je 0x160ce22e */
L_160CE1DC:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CE1DC: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CE1DE: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE1DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE1E0: pop ebx */
    esp = ebp; /* 0x160CE1E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE1E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE1E4: ret 8 */
L_160CE1E7:
    /* test MEM8(eax), 1 */ /* 0x160CE1E7: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE202; /* 0x160CE1EA: je 0x160ce202 */
L_160CE1EC:
    eax = MEM32(edi); /* 0x160CE1EC: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x28); /* 0x160CE1EE: mov edx, dword ptr [eax + 0x28] */
    ecx = ebp + (-0x4); /* 0x160CE1F1: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CE1F4: push ecx */
    ecx = edi; /* 0x160CE1F5: mov ecx, edi */
    RECOMP_ICALL(edx); /* 0x160CE1F7: call edx */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x160CE1F9: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE1FC: jne 0x160ce3c9 */
L_160CE202:
    eax = MEM32(ebx); /* 0x160CE202: mov eax, dword ptr [ebx] */
    edx = MEM32(eax + 0x28); /* 0x160CE204: mov edx, dword ptr [eax + 0x28] */
    ecx = ebp + (-0x4); /* 0x160CE207: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CE20A: push ecx */
    ecx = ebx; /* 0x160CE20B: mov ecx, ebx */
    RECOMP_ICALL(edx); /* 0x160CE20D: call edx */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x160CE20F: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE212: jne 0x160ce2e0 */
L_160CE218:
    eax = MEM32(edi); /* 0x160CE218: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x28); /* 0x160CE21A: mov edx, dword ptr [eax + 0x28] */
    ecx = ebp + (-0x4); /* 0x160CE21D: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x160CE220: push ecx */
    ecx = edi; /* 0x160CE221: mov ecx, edi */
    RECOMP_ICALL(edx); /* 0x160CE223: call edx */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x160CE225: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE228: jne 0x160ce2e0 */
L_160CE22E:
    ecx = MEM32(ebp + 0xC); /* 0x160CE22E: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x160CE231: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160CE234: push eax */
    PUSH32(esp, ecx); /* 0x160CE235: push ecx */
    esi = ebp + (-0x88); /* 0x160CE236: lea esi, [ebp - 0x88] */
    RECOMP_CALL(sub_160CE0F0); /* 0x160CE23C: call 0x160ce0f0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE241: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE243: je 0x160ce2e0 */
L_160CE249:
    eax = MEM32(ebp + 0xC); /* 0x160CE249: mov eax, dword ptr [ebp + 0xc] */
    edx = ebp + (-0x8); /* 0x160CE24C: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x160CE24F: push edx */
    PUSH32(esp, eax); /* 0x160CE250: push eax */
    esi = ebp + (-0xE8); /* 0x160CE251: lea esi, [ebp - 0xe8] */
    edi = ebx; /* 0x160CE257: mov edi, ebx */
    RECOMP_CALL(sub_160CE0F0); /* 0x160CE259: call 0x160ce0f0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE25E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE260: je 0x160ce2e0 */
L_160CE262:
    edx = 5; /* 0x160CE262: mov edx, 5 */
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x160CE267: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE4EC; /* 0x160CE26A: je 0x160ce4ec */
L_160CE270:
    /* cmp MEM32(ebp + (-0x8)), edx */ /* 0x160CE270: cmp dword ptr [ebp - 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE273: je 0x160ce2e0 */
L_160CE275:
    ecx = MEM32(ebp + (-0x88)); /* 0x160CE275: mov ecx, dword ptr [ebp - 0x88] */
    /* cmp ecx, 3 */ /* 0x160CE27B: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE3D4; /* 0x160CE27E: je 0x160ce3d4 */
L_160CE284:
    eax = MEM32(ebp + (-0xE8)); /* 0x160CE284: mov eax, dword ptr [ebp - 0xe8] */
    /* cmp eax, 3 */ /* 0x160CE28A: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE3D4; /* 0x160CE28D: je 0x160ce3d4 */
L_160CE293:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x160CE293: add ecx, -2 */
    _flag_k = FK_ADD;
    /* cmp ecx, 7 */ /* 0x160CE296: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE299: ja 0x160ce2e0 */
L_160CE29B:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160CE5AC)); goto _ljump; }
L_160CE2A2:
    /* cmp eax, 6 */ /* 0x160CE2A2: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE2A5: je 0x160ce2e0 */
L_160CE2A7:
    /* cmp eax, 4 */ /* 0x160CE2A7: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE2AA: je 0x160ce2e0 */
L_160CE2AC:
    /* cmp eax, edx */ /* 0x160CE2AC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE2AE: jne 0x160ce3c9 */
L_160CE2B4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CE2B4: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CE2B6: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE2B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE2B8: pop ebx */
    esp = ebp; /* 0x160CE2B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE2BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE2BC: ret 8 */
L_160CE2BF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x160CE2BF: add eax, -4 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x160CE2C2: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE2C4: ja 0x160ce3c9 */
L_160CE2CA:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CE5CC)); goto _ljump; }
L_160CE2D1:
    ecx = MEM32(ebp + (-0x54)); /* 0x160CE2D1: mov ecx, dword ptr [ebp - 0x54] */
    /* cmp ecx, MEM32(ebp + (-0xB4)) */ /* 0x160CE2D4: cmp ecx, dword ptr [ebp - 0xb4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xB4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_160CE2DA:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_160CE3C9; /* 0x160CE2DA: jbe 0x160ce3c9 */
L_160CE2E0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CE2E0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CE2E2: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE2E3: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE2E4: pop ebx */
    esp = ebp; /* 0x160CE2E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE2E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE2E8: ret 8 */
L_160CE2EB:
    eax = MEM32(ebp + (-0xB8)); /* 0x160CE2EB: mov eax, dword ptr [ebp - 0xb8] */
    edx = MEM32(ebp + (-0x54)); /* 0x160CE2F1: mov edx, dword ptr [ebp - 0x54] */
    ecx = MEM32(ebp + (-0xB4)); /* 0x160CE2F4: mov ecx, dword ptr [ebp - 0xb4] */
    /* cmp eax, 1 */ /* 0x160CE2FA: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE303; /* 0x160CE2FD: jne 0x160ce303 */
L_160CE2FF:
    /* cmp edx, ecx */ /* 0x160CE2FF: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE301: ja 0x160ce2e0 */
L_160CE303:
    /* cmp ecx, 1 */ /* 0x160CE303: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE30C; /* 0x160CE306: jne 0x160ce30c */
L_160CE308:
    /* cmp edx, eax */ /* 0x160CE308: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_160CE30A:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_160CE2E0; /* 0x160CE30A: ja 0x160ce2e0 */
L_160CE30C:
    /* cmp eax, 1 */ /* 0x160CE30C: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE30F: je 0x160ce3c9 */
L_160CE315:
    /* cmp ecx, 1 */ /* 0x160CE315: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE318: je 0x160ce3c9 */
L_160CE31E:
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x160CE31E: imul eax, ecx */
    /* cmp eax, edx */ /* 0x160CE321: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE323: je 0x160ce3c9 */
L_160CE329:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CE329: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160CE32B: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE32C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE32D: pop ebx */
    esp = ebp; /* 0x160CE32E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE330: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE331: ret 8 */
L_160CE334:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x160CE334: add eax, -4 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x160CE337: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE339: ja 0x160ce3c9 */
L_160CE33F:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CE5E4)); goto _ljump; }
L_160CE346:
    eax = MEM32(ebp + (-0x58)); /* 0x160CE346: mov eax, dword ptr [ebp - 0x58] */
    ecx = MEM32(ebp + (-0x54)); /* 0x160CE349: mov ecx, dword ptr [ebp - 0x54] */
    edx = MEM32(ebp + (-0xB4)); /* 0x160CE34C: mov edx, dword ptr [ebp - 0xb4] */
    /* cmp eax, 1 */ /* 0x160CE352: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE35B; /* 0x160CE355: jne 0x160ce35b */
L_160CE357:
    /* cmp ecx, edx */ /* 0x160CE357: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE359: ja 0x160ce2e0 */
L_160CE35B:
    /* cmp ecx, 1 */ /* 0x160CE35B: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE30C; /* 0x160CE35E: jne 0x160ce30c */
L_160CE360:
    /* cmp eax, edx */ /* 0x160CE360: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_160CE30A; /* 0x160CE362: jmp 0x160ce30a */
L_160CE364:
    edx = MEM32(ebp + (-0x58)); /* 0x160CE364: mov edx, dword ptr [ebp - 0x58] */
    /* cmp edx, MEM32(ebp + (-0xB8)) */ /* 0x160CE367: cmp edx, dword ptr [ebp - 0xb8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xB8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE36D: ja 0x160ce2e0 */
L_160CE373:
    eax = MEM32(ebp + (-0x54)); /* 0x160CE373: mov eax, dword ptr [ebp - 0x54] */
    /* cmp eax, MEM32(ebp + (-0xB4)) */ /* 0x160CE376: cmp eax, dword ptr [ebp - 0xb4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xB4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_160CE2DA; /* 0x160CE37C: jmp 0x160ce2da */
L_160CE381:
    /* cmp eax, 6 */ /* 0x160CE381: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE384: jne 0x160ce2e0 */
L_160CE38A:
    edx = MEM32(ebp + (-0xE0)); /* 0x160CE38A: mov edx, dword ptr [ebp - 0xe0] */
    ecx = MEM32(ebp + (-0x80)); /* 0x160CE390: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CE393: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_160CEA10); /* 0x160CE395: call 0x160cea10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CE39A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE39C: jne 0x160ce2e0 */
L_160CE3A2:
    ecx = MEM32(ebp + (-0x78)); /* 0x160CE3A2: mov ecx, dword ptr [ebp - 0x78] */
    eax = MEM32(ebp + (-0xD8)); /* 0x160CE3A5: mov eax, dword ptr [ebp - 0xd8] */
    /* test ecx, ecx */ /* 0x160CE3AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE3B3; /* 0x160CE3AD: jne 0x160ce3b3 */
L_160CE3AF:
    /* test eax, eax */ /* 0x160CE3AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE3B1: je 0x160ce3c9 */
L_160CE3B3:
    /* cmp MEM32(ebp + (-0xE0)), 0x14u */ /* 0x160CE3B3: cmp dword ptr [ebp - 0xe0], 0x14 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xE0))); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE3C9; /* 0x160CE3BA: je 0x160ce3c9 */
L_160CE3BC:
    RECOMP_CALL(sub_160CE610); /* 0x160CE3BC: call 0x160ce610 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE3C1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE3C3: je 0x160ce2e0 */
L_160CE3C9:
    SET_LO8(eax, 1); /* 0x160CE3C9: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160CE3CB: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE3CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE3CD: pop ebx */
    esp = ebp; /* 0x160CE3CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE3D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE3D1: ret 8 */
L_160CE3D4:
    eax = MEM32(ebp + (-0x50)); /* 0x160CE3D4: mov eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + (-0xB0)); /* 0x160CE3D7: mov ecx, dword ptr [ebp - 0xb0] */
    esi = eax; /* 0x160CE3DD: mov esi, eax */
    ebx = eax; /* 0x160CE3DF: mov ebx, eax */
    eax = MEM32(ebp + 0x8); /* 0x160CE3E1: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x160CE3E4: mov dword ptr [ebp - 8], ecx */
    RECOMP_CALL(sub_160CDFF0); /* 0x160CE3E7: call 0x160cdff0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x160CE3EC: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = eax; /* 0x160CE3F0: mov ebx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE467; /* 0x160CE3F2: je 0x160ce467 */
L_160CE3F4:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x160CE3F4: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE3F7: ja 0x160ce2e0 */
L_160CE3FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CE3FD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x160CE3FF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE4E1; /* 0x160CE401: jbe 0x160ce4e1 */
L_160CE407:
    ecx = MEM32(ebp + (-0xC)); /* 0x160CE407: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ecx); /* 0x160CE40A: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x8); /* 0x160CE40C: mov edx, dword ptr [edx + 8] */
    eax = ebp + (-0x24); /* 0x160CE40F: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x160CE412: push eax */
    PUSH32(esp, edi); /* 0x160CE413: push edi */
    RECOMP_ICALL(edx); /* 0x160CE414: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CE416: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE418: jne 0x160ce2e0 */
L_160CE41E:
    ecx = MEM32(ebp + 0x8); /* 0x160CE41E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x160CE421: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x8); /* 0x160CE423: mov eax, dword ptr [eax + 8] */
    edx = ebp + (-0x18); /* 0x160CE426: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x160CE429: push edx */
    PUSH32(esp, edi); /* 0x160CE42A: push edi */
    RECOMP_ICALL(eax); /* 0x160CE42B: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CE42D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE42F: jne 0x160ce2e0 */
L_160CE435:
    eax = MEM32(ebp + (-0x18)); /* 0x160CE435: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x160CE438: push 1 */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE43A: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x160CE43F: push eax */
    eax = MEM32(ebp + (-0x24)); /* 0x160CE440: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE443: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x160CE448: mov ecx, eax */
    RECOMP_CALL(sub_160CE190); /* 0x160CE44A: call 0x160ce190 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE44F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE451: je 0x160ce2e0 */
L_160CE457:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x160CE457: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x160CE458: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160CE407; /* 0x160CE45A: jb 0x160ce407 */
L_160CE45C:
    SET_LO8(eax, 1); /* 0x160CE45C: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160CE45E: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE45F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE460: pop ebx */
    esp = ebp; /* 0x160CE461: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE463: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE464: ret 8 */
L_160CE467:
    ecx = MEM32(ebp + (-0x88)); /* 0x160CE467: mov ecx, dword ptr [ebp - 0x88] */
    /* cmp ecx, MEM32(ebp + (-0xE8)) */ /* 0x160CE46D: cmp ecx, dword ptr [ebp - 0xe8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xE8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE473: jne 0x160ce2e0 */
L_160CE479:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x160CE479: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE47C: jne 0x160ce2e0 */
L_160CE482:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160CE482: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x160CE484: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE4E1; /* 0x160CE486: jbe 0x160ce4e1 */
L_160CE488:
    ecx = MEM32(ebp + (-0xC)); /* 0x160CE488: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ecx); /* 0x160CE48B: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x8); /* 0x160CE48D: mov edx, dword ptr [edx + 8] */
    eax = ebp + (-0x24); /* 0x160CE490: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x160CE493: push eax */
    PUSH32(esp, edi); /* 0x160CE494: push edi */
    RECOMP_ICALL(edx); /* 0x160CE495: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CE497: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE499: jne 0x160ce2e0 */
L_160CE49F:
    ecx = MEM32(ebp + 0x8); /* 0x160CE49F: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x160CE4A2: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x8); /* 0x160CE4A4: mov eax, dword ptr [eax + 8] */
    edx = ebp + (-0x18); /* 0x160CE4A7: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x160CE4AA: push edx */
    PUSH32(esp, edi); /* 0x160CE4AB: push edi */
    RECOMP_ICALL(eax); /* 0x160CE4AC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CE4AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE4B0: jne 0x160ce2e0 */
L_160CE4B6:
    eax = MEM32(ebp + (-0x18)); /* 0x160CE4B6: mov eax, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE4B9: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x160CE4BE: mov esi, dword ptr [eax] */
    MEM32(ebp + 0xC) = eax; /* 0x160CE4C0: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x160CE4C3: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE4C6: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x160CE4CB: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(esi + 0x30); /* 0x160CE4CE: mov edx, dword ptr [esi + 0x30] */
    PUSH32(esp, eax); /* 0x160CE4D1: push eax */
    RECOMP_ICALL(edx); /* 0x160CE4D2: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE4D4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE4D6: je 0x160ce2e0 */
L_160CE4DC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x160CE4DC: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x160CE4DD: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160CE488; /* 0x160CE4DF: jb 0x160ce488 */
L_160CE4E1:
    SET_LO8(eax, 1); /* 0x160CE4E1: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x160CE4E3: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE4E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE4E5: pop ebx */
    esp = ebp; /* 0x160CE4E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE4E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE4E9: ret 8 */
L_160CE4EC:
    eax = MEM32(ebp + (-0x8)); /* 0x160CE4EC: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edx */ /* 0x160CE4EF: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE55D; /* 0x160CE4F1: jne 0x160ce55d */
L_160CE4F3:
    eax = MEM32(ebp + (-0xD8)); /* 0x160CE4F3: mov eax, dword ptr [ebp - 0xd8] */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE4F9: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160CE4FE: mov esi, eax */
    eax = MEM32(ebp + (-0x78)); /* 0x160CE500: mov eax, dword ptr [ebp - 0x78] */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE503: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x160CE508: mov ecx, eax */
    eax = esi; /* 0x160CE50A: mov eax, esi */
    RECOMP_CALL(sub_160CE610); /* 0x160CE50C: call 0x160ce610 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE511: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE54F; /* 0x160CE513: jne 0x160ce54f */
L_160CE515:
    esi = MEM32(ebp + (-0xD8)); /* 0x160CE515: mov esi, dword ptr [ebp - 0xd8] */
    PUSH32(esp, 3); /* 0x160CE51B: push 3 */
    eax = esi; /* 0x160CE51D: mov eax, esi */
    RECOMP_CALL(sub_160C5640); /* 0x160CE51F: call 0x160c5640 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE524: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE544; /* 0x160CE526: je 0x160ce544 */
L_160CE528:
    eax = MEM32(ebp + (-0x78)); /* 0x160CE528: mov eax, dword ptr [ebp - 0x78] */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE52B: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160CE530: mov edi, eax */
    eax = esi; /* 0x160CE532: mov eax, esi */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE534: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    edx = edi; /* 0x160CE539: mov edx, edi */
    RECOMP_CALL(sub_160CFA90); /* 0x160CE53B: call 0x160cfa90 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE540: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE54F; /* 0x160CE542: jne 0x160ce54f */
L_160CE544:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE544: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160CE546: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE547: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE548: pop ebx */
    esp = ebp; /* 0x160CE549: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE54B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE54C: ret 8 */
L_160CE54F:
    eax = 1; /* 0x160CE54F: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x160CE554: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE555: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE556: pop ebx */
    esp = ebp; /* 0x160CE557: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE559: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE55A: ret 8 */
L_160CE55D:
    /* cmp eax, 3 */ /* 0x160CE55D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE2E0; /* 0x160CE560: jne 0x160ce2e0 */
L_160CE566:
    eax = ebx; /* 0x160CE566: mov eax, ebx */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE568: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160CE56D: mov esi, eax */
    eax = MEM32(ebp + (-0x78)); /* 0x160CE56F: mov eax, dword ptr [ebp - 0x78] */
    edi = MEM32(esi); /* 0x160CE572: mov edi, dword ptr [esi] */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE574: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x160CE579: push eax */
    eax = MEM32(edi + 0x30); /* 0x160CE57A: mov eax, dword ptr [edi + 0x30] */
    ecx = esi; /* 0x160CE57D: mov ecx, esi */
    RECOMP_ICALL(eax); /* 0x160CE57F: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE581: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE54F; /* 0x160CE583: jne 0x160ce54f */
L_160CE585:
    eax = MEM32(ebp + (-0x78)); /* 0x160CE585: mov eax, dword ptr [ebp - 0x78] */
    RECOMP_CALL(sub_16070DD0); /* 0x160CE588: call 0x16070dd0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x160CE58D: mov edx, eax */
    eax = MEM32(ebp + (-0xDC)); /* 0x160CE58F: mov eax, dword ptr [ebp - 0xdc] */
    RECOMP_CALL(sub_160CFA90); /* 0x160CE595: call 0x160cfa90 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CE59A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE54F; /* 0x160CE59C: jne 0x160ce54f */
L_160CE59E:
    edi = POP32_VAL(esp); /* 0x160CE59E: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE59F: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE5A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CE5A2: pop ebx */
    esp = ebp; /* 0x160CE5A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE5A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CE5A6: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CE2A2u: goto L_160CE2A2;
      case 0x160CE2BFu: goto L_160CE2BF;
      case 0x160CE2D1u: goto L_160CE2D1;
      case 0x160CE2E0u: goto L_160CE2E0;
      case 0x160CE2EBu: goto L_160CE2EB;
      case 0x160CE334u: goto L_160CE334;
      case 0x160CE346u: goto L_160CE346;
      case 0x160CE364u: goto L_160CE364;
      case 0x160CE381u: goto L_160CE381;
      case 0x160CE3C9u: goto L_160CE3C9;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CE610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CE610u);

L_160CE610:
    /* cmp ecx, eax */ /* 0x160CE610: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE617; /* 0x160CE612: jne 0x160ce617 */
L_160CE614:
    SET_LO8(eax, 1); /* 0x160CE614: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CE616: ret  */
L_160CE617:
    /* test ecx, ecx */ /* 0x160CE617: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE628; /* 0x160CE619: je 0x160ce628 */
L_160CE61B:
    /* test eax, eax */ /* 0x160CE61B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE628; /* 0x160CE61D: je 0x160ce628 */
L_160CE61F:
    edx = MEM32(ecx); /* 0x160CE61F: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x160CE621: push eax */
    eax = MEM32(edx + 0x30); /* 0x160CE622: mov eax, dword ptr [edx + 0x30] */
    RECOMP_ICALL(eax); /* 0x160CE625: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CE627: ret  */
L_160CE628:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CE628: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CE62A: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CE630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CE630u);

L_160CE630:
    edi = edi; /* 0x160CE630: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CE632: push ebp */
    ebp = esp; /* 0x160CE633: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x160CE635: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CE638: push ebx */
    PUSH32(esp, esi); /* 0x160CE639: push esi */
    PUSH32(esp, edi); /* 0x160CE63A: push edi */
    edi = ecx; /* 0x160CE63B: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CE63D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x160CE63F: mov esi, eax */
    eax = MEM32(ebp + 0x1C); /* 0x160CE641: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CE644: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x160CE646: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x160CE649: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x160CE64C: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x160CE64F: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x160CE652: mov dword ptr [ebp - 0x18], ecx */
    MEM32(eax) = ecx; /* 0x160CE655: mov dword ptr [eax], ecx */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x160CE657: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CE777; /* 0x160CE65A: jbe 0x160ce777 */
L_160CE660:
    ebx = MEM32(ebp + (-0x10)); /* 0x160CE660: mov ebx, dword ptr [ebp - 0x10] */
    goto L_160CE66B; /* 0x160CE663: jmp 0x160ce66b */
L_160CE665:
    edx = MEM32(ebp + (-0x1C)); /* 0x160CE665: mov edx, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x14)); /* 0x160CE668: mov ecx, dword ptr [ebp - 0x14] */
L_160CE66B:
    /* test ecx, ecx */ /* 0x160CE66B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE702; /* 0x160CE66D: je 0x160ce702 */
L_160CE673:
    /* cmp esi, edx */ /* 0x160CE673: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160CE702; /* 0x160CE675: jb 0x160ce702 */
L_160CE67B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x160CE67B: sub ebx, esi */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x160CE67D: mov eax, ebx */
    ebx = MEM32(ebp + 0x14); /* 0x160CE67F: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x160CE682: mov dword ptr [ebp - 4], eax */
    /* cmp eax, ebx */ /* 0x160CE685: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CE68E; /* 0x160CE687: jbe 0x160ce68e */
L_160CE689:
    eax = ebx; /* 0x160CE689: mov eax, ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x160CE68B: mov dword ptr [ebp - 4], eax */
L_160CE68E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x160CE68E: sub esi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x160CE690: add esi, esi */
    _flag_k = FK_ADD;
    edx = eax * 4; /* 0x160CE692: lea edx, [eax*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x160CE699: add esi, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x160CE69B: push edx */
    eax = esi + ecx; /* 0x160CE69C: lea eax, [esi + ecx] */
    ecx = MEM32(ebp + 0x18); /* 0x160CE69F: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x160CE6A2: push eax */
    PUSH32(esp, ecx); /* 0x160CE6A3: push ecx */
    RECOMP_CALL(sub_161AE3C0); /* 0x160CE6A4: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160CE6A9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x160CE6AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE6CA; /* 0x160CE6AE: je 0x160ce6ca */
L_160CE6B0:
    edx = MEM32(ebp + (-0x4)); /* 0x160CE6B0: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x160CE6B3: mov ecx, dword ptr [ebp - 0x18] */
    eax = edx * 4; /* 0x160CE6B6: lea eax, [edx*4] */
    PUSH32(esp, eax); /* 0x160CE6BD: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x160CE6BE: add esi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x160CE6C0: push esi */
    PUSH32(esp, edi); /* 0x160CE6C1: push edi */
    RECOMP_CALL(sub_161AE3C0); /* 0x160CE6C2: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160CE6C7: add esp, 0xc */
    _flag_k = FK_ADD;
L_160CE6CA:
    ebx = MEM32(ebp + (-0x10)); /* 0x160CE6CA: mov ebx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x160CE6CD: mov ecx, dword ptr [ebp - 4] */
L_160CE6D0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + ecx; /* 0x160CE6D0: add dword ptr [ebp - 0xc], ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x160CE6D3: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CE777; /* 0x160CE6D6: jae 0x160ce777 */
L_160CE6DC:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - ecx; /* 0x160CE6DC: sub dword ptr [ebp + 0x14], ecx */
    _flag_k = FK_CMP;
    eax = ecx * 4; /* 0x160CE6DF: lea eax, [ecx*4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + eax; /* 0x160CE6E6: add dword ptr [ebp + 0x18], eax */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x160CE6E9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE6EF; /* 0x160CE6EB: je 0x160ce6ef */
L_160CE6ED:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x160CE6ED: add edi, eax */
    _flag_k = FK_ADD;
L_160CE6EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x160CE6EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x160CE6F1: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
L_160CE6F4:
    ecx = MEM32(ebp + (-0x8)); /* 0x160CE6F4: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x160CE6F7: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160CE665; /* 0x160CE6FA: jb 0x160ce665 */
L_160CE700:
    goto L_160CE777; /* 0x160CE700: jmp 0x160ce777 */
L_160CE702:
    ecx = MEM32(ebp + 0x8); /* 0x160CE702: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x160CE705: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x10); /* 0x160CE707: mov edx, dword ptr [edx + 0x10] */
    eax = ebp + (-0x4); /* 0x160CE70A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160CE70D: push eax */
    eax = ebp + (-0x10); /* 0x160CE70E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x160CE711: push eax */
    eax = MEM32(ebp + 0x18); /* 0x160CE712: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x160CE715: push esi */
    PUSH32(esp, edi); /* 0x160CE716: push edi */
    PUSH32(esp, eax); /* 0x160CE717: push eax */
    eax = MEM32(ebp + 0x14); /* 0x160CE718: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x160CE71B: push eax */
    eax = MEM32(ebp + 0x10); /* 0x160CE71C: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x160CE71F: push eax */
    RECOMP_ICALL(edx); /* 0x160CE720: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CE722: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CE786; /* 0x160CE724: jl 0x160ce786 */
L_160CE726:
    ebx = MEM32(ebp + (-0x10)); /* 0x160CE726: mov ebx, dword ptr [ebp - 0x10] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x160CE729: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CE768; /* 0x160CE72C: je 0x160ce768 */
L_160CE72E:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x160CE72E: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x160CE732: mov ecx, dword ptr [ebp - 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE757; /* 0x160CE735: jne 0x160ce757 */
L_160CE737:
    edx = MEM32(ebp + 0x1C); /* 0x160CE737: mov edx, dword ptr [ebp + 0x1c] */
    eax = ebx; /* 0x160CE73A: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x160CE73C: imul eax, dword ptr [ebp + 0xc] */
    MEM32(edx) = eax; /* 0x160CE740: mov dword ptr [edx], eax */
    /* cmp esi, eax */ /* 0x160CE742: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CE777; /* 0x160CE744: jae 0x160ce777 */
L_160CE746:
    /* test ecx, ecx */ /* 0x160CE746: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE757; /* 0x160CE748: jne 0x160ce757 */
L_160CE74A:
    eax = esi; /* 0x160CE74A: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CE74C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x160CE74E: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x8)) = eax; /* 0x160CE750: mov dword ptr [ebp - 8], eax */
    esi = edx; /* 0x160CE753: mov esi, edx */
    RECOMP_BACKEDGE();
    goto L_160CE6F4; /* 0x160CE755: jmp 0x160ce6f4 */
L_160CE757:
    eax = MEM32(ebp + 0x18); /* 0x160CE757: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x160CE75A: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x18)) = edi; /* 0x160CE75D: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x160CE760: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_160CE6D0; /* 0x160CE763: jmp 0x160ce6d0 */
L_160CE768:
    edx = MEM32(ebp + 0x1C); /* 0x160CE768: mov edx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + (-0x4)); /* 0x160CE76B: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + eax; /* 0x160CE76E: add dword ptr [ebp - 0xc], eax */
    _flag_k = FK_ADD;
    MEM32(edx) = 0xFFFFFFFFu; /* 0x160CE771: mov dword ptr [edx], 0xffffffff */
L_160CE777:
    eax = MEM32(ebp + (-0xC)); /* 0x160CE777: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x20); /* 0x160CE77A: mov ecx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160CE77D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, eax */ /* 0x160CE77F: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = eax; /* 0x160CE781: mov dword ptr [ecx], eax */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CE783: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160CE785: inc eax */
    _flag_k = FK_INC;
L_160CE786:
    edi = POP32_VAL(esp); /* 0x160CE786: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE787: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE788: pop ebx */
    esp = ebp; /* 0x160CE789: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CE78B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CE78C: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_160CE7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CE7A0u);

L_160CE7A0:
    edi = edi; /* 0x160CE7A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CE7A2: push ebp */
    ebp = esp; /* 0x160CE7A3: mov ebp, esp */
    /* cmp eax, 0xFu */ /* 0x160CE7A5: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CE9BD; /* 0x160CE7A8: jge 0x160ce9bd */
L_160CE7AE:
    /* cmp ecx, 0xFu */ /* 0x160CE7AE: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160CE9BD; /* 0x160CE7B1: jge 0x160ce9bd */
L_160CE7B7:
    /* cmp eax, ecx */ /* 0x160CE7B7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CE7C6; /* 0x160CE7B9: jne 0x160ce7c6 */
L_160CE7BB:
    ecx = MEM32(ebp + 0x8); /* 0x160CE7BB: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x160CE7BE: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE7C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE7C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE7C3: ret 4 */
L_160CE7C6:
    edx = MEM32(eax * 4 + 0x16021500); /* 0x160CE7C6: mov edx, dword ptr [eax*4 + 0x16021500] */
    ecx = MEM32(ecx * 4 + 0x16021500); /* 0x160CE7CD: mov ecx, dword ptr [ecx*4 + 0x16021500] */
    PUSH32(esp, ebx); /* 0x160CE7D4: push ebx */
    PUSH32(esp, esi); /* 0x160CE7D5: push esi */
    PUSH32(esp, edi); /* 0x160CE7D6: push edi */
    esi = ecx; /* 0x160CE7D7: mov esi, ecx */
    edi = edx; /* 0x160CE7D9: mov edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x160CE7DB: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x160CE7DE: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x160CE7E1: mov ebx, edi */
    /* cmp edi, esi */ /* 0x160CE7E3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE7E9; /* 0x160CE7E5: ja 0x160ce7e9 */
L_160CE7E7:
    ebx = esi; /* 0x160CE7E7: mov ebx, esi */
L_160CE7E9:
    eax = ecx; /* 0x160CE7E9: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x160CE7EB: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x160CE7ED: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 0x10u */ /* 0x160CE7EF: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE805; /* 0x160CE7F1: je 0x160ce805 */
L_160CE7F3:
    edx = MEM32(ebp + 0x8); /* 0x160CE7F3: mov edx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE7F6: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE7F7: pop esi */
    MEM32(edx) = 0; /* 0x160CE7F8: mov dword ptr [edx], 0 */
    ebx = POP32_VAL(esp); /* 0x160CE7FE: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE7FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE801: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE802: ret 4 */
L_160CE805:
    /* test eax, 0x100u */ /* 0x160CE805: test eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE827; /* 0x160CE80A: je 0x160ce827 */
L_160CE80C:
    ecx = MEM32(ebp + 0x8); /* 0x160CE80C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    SET_LO8(eax, LO8(eax) & 0x20u); /* 0x160CE80F: and al, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x160CE811: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160CE814: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CE816: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    eax = eax & 5; /* 0x160CE818: and eax, 5 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160CE81B: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x160CE81C: mov dword ptr [ecx], eax */
L_160CE81E:
    edi = POP32_VAL(esp); /* 0x160CE81E: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE81F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CE820: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE821: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE823: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE824: ret 4 */
L_160CE827:
    /* test LO8(eax), 0x40u */ /* 0x160CE827: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE882; /* 0x160CE829: je 0x160ce882 */
L_160CE82B:
    eax = ebx + (-0x1); /* 0x160CE82B: lea eax, [ebx - 1] */
    /* cmp eax, 3 */ /* 0x160CE82E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE81E; /* 0x160CE831: ja 0x160ce81e */
L_160CE833:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CE9C8)); goto _ljump; }
L_160CE83A:
    edx = MEM32(ebp + 0x8); /* 0x160CE83A: mov edx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE83D: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE83E: pop esi */
    MEM32(edx) = 8; /* 0x160CE83F: mov dword ptr [edx], 8 */
    ebx = POP32_VAL(esp); /* 0x160CE845: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE846: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE848: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE849: ret 4 */
L_160CE84C:
    eax = MEM32(ebp + 0x8); /* 0x160CE84C: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE84F: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE850: pop esi */
    MEM32(eax) = 0xAu; /* 0x160CE851: mov dword ptr [eax], 0xa */
    ebx = POP32_VAL(esp); /* 0x160CE857: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE858: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE85A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE85B: ret 4 */
L_160CE85E:
    ecx = MEM32(ebp + 0x8); /* 0x160CE85E: mov ecx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE861: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE862: pop esi */
    MEM32(ecx) = 0xCu; /* 0x160CE863: mov dword ptr [ecx], 0xc */
    ebx = POP32_VAL(esp); /* 0x160CE869: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE86A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE86C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE86D: ret 4 */
L_160CE870:
    edx = MEM32(ebp + 0x8); /* 0x160CE870: mov edx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE873: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE874: pop esi */
    MEM32(edx) = 0xEu; /* 0x160CE875: mov dword ptr [edx], 0xe */
    ebx = POP32_VAL(esp); /* 0x160CE87B: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE87C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE87E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE87F: ret 4 */
L_160CE882:
    /* test LO8(eax), 0x20u */ /* 0x160CE882: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE950; /* 0x160CE884: je 0x160ce950 */
L_160CE88A:
    /* test LO8(ecx), 0x40u */ /* 0x160CE88A: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CE8E6; /* 0x160CE88D: je 0x160ce8e6 */
L_160CE88F:
    eax = ebx + (-0x1); /* 0x160CE88F: lea eax, [ebx - 1] */
    /* cmp eax, 3 */ /* 0x160CE892: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE81E; /* 0x160CE895: ja 0x160ce81e */
L_160CE897:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CE9D8)); goto _ljump; }
L_160CE89E:
    eax = MEM32(ebp + 0x8); /* 0x160CE89E: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE8A1: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE8A2: pop esi */
    MEM32(eax) = 8; /* 0x160CE8A3: mov dword ptr [eax], 8 */
    ebx = POP32_VAL(esp); /* 0x160CE8A9: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE8AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE8AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE8AD: ret 4 */
L_160CE8B0:
    ecx = MEM32(ebp + 0x8); /* 0x160CE8B0: mov ecx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE8B3: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE8B4: pop esi */
    MEM32(ecx) = 0xAu; /* 0x160CE8B5: mov dword ptr [ecx], 0xa */
    ebx = POP32_VAL(esp); /* 0x160CE8BB: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE8BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE8BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE8BF: ret 4 */
L_160CE8C2:
    edx = MEM32(ebp + 0x8); /* 0x160CE8C2: mov edx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE8C5: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE8C6: pop esi */
    MEM32(edx) = 0xCu; /* 0x160CE8C7: mov dword ptr [edx], 0xc */
    ebx = POP32_VAL(esp); /* 0x160CE8CD: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE8CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE8D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE8D1: ret 4 */
L_160CE8D4:
    eax = MEM32(ebp + 0x8); /* 0x160CE8D4: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE8D7: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE8D8: pop esi */
    MEM32(eax) = 0xEu; /* 0x160CE8D9: mov dword ptr [eax], 0xe */
    ebx = POP32_VAL(esp); /* 0x160CE8DF: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE8E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE8E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE8E3: ret 4 */
L_160CE8E6:
    /* cmp ebx, 4 */ /* 0x160CE8E6: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_160CE81E; /* 0x160CE8E9: ja 0x160ce81e */
L_160CE8EF:
    { _itail_tgt = (uint32_t)(MEM32(ebx * 4 + 0x160CE9E8)); goto _ljump; }
L_160CE8F6:
    ecx = MEM32(ebp + 0x8); /* 0x160CE8F6: mov ecx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE8F9: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE8FA: pop esi */
    MEM32(ecx) = 6; /* 0x160CE8FB: mov dword ptr [ecx], 6 */
    ebx = POP32_VAL(esp); /* 0x160CE901: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE902: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE904: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE905: ret 4 */
L_160CE908:
    edx = MEM32(ebp + 0x8); /* 0x160CE908: mov edx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE90B: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE90C: pop esi */
    MEM32(edx) = 7; /* 0x160CE90D: mov dword ptr [edx], 7 */
    ebx = POP32_VAL(esp); /* 0x160CE913: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE914: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE916: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE917: ret 4 */
L_160CE91A:
    eax = MEM32(ebp + 0x8); /* 0x160CE91A: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE91D: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE91E: pop esi */
    MEM32(eax) = 9; /* 0x160CE91F: mov dword ptr [eax], 9 */
    ebx = POP32_VAL(esp); /* 0x160CE925: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE926: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE928: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE929: ret 4 */
L_160CE92C:
    ecx = MEM32(ebp + 0x8); /* 0x160CE92C: mov ecx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE92F: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE930: pop esi */
    MEM32(ecx) = 0xBu; /* 0x160CE931: mov dword ptr [ecx], 0xb */
    ebx = POP32_VAL(esp); /* 0x160CE937: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE938: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE93A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE93B: ret 4 */
L_160CE93E:
    edx = MEM32(ebp + 0x8); /* 0x160CE93E: mov edx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE941: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE942: pop esi */
    MEM32(edx) = 0xDu; /* 0x160CE943: mov dword ptr [edx], 0xd */
    ebx = POP32_VAL(esp); /* 0x160CE949: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE94A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE94C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE94D: ret 4 */
L_160CE950:
    /* test eax, 0x200u */ /* 0x160CE950: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE96C; /* 0x160CE955: jne 0x160ce96c */
L_160CE957:
    ebx = edi; /* 0x160CE957: mov ebx, edi */
    /* test edx, 0x200u */ /* 0x160CE959: test edx, 0x200 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE963; /* 0x160CE95F: jne 0x160ce963 */
L_160CE961:
    ebx = esi; /* 0x160CE961: mov ebx, esi */
L_160CE963:
    /* test ebx, ebx */ /* 0x160CE963: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CE96C; /* 0x160CE965: jne 0x160ce96c */
L_160CE967:
    ebx = 3; /* 0x160CE967: mov ebx, 3 */
L_160CE96C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x160CE96C: sub ebx, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_160CE9AB; /* 0x160CE96F: je 0x160ce9ab */
L_160CE971:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x160CE971: sub ebx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_160CE991; /* 0x160CE974: je 0x160ce991 */
L_160CE976:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x160CE976: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160CE81E; /* 0x160CE979: jne 0x160ce81e */
L_160CE97F:
    eax = MEM32(ebp + 0x8); /* 0x160CE97F: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE982: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE983: pop esi */
    MEM32(eax) = 5; /* 0x160CE984: mov dword ptr [eax], 5 */
    ebx = POP32_VAL(esp); /* 0x160CE98A: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE98B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE98D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE98E: ret 4 */
L_160CE991:
    ecx = MEM32(ebp + 0x8); /* 0x160CE991: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x160CE994: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160CE999: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CE99B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x160CE99D: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x160CE99E: add eax, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x160CE9A1: pop esi */
    MEM32(ecx) = eax; /* 0x160CE9A2: mov dword ptr [ecx], eax */
    ebx = POP32_VAL(esp); /* 0x160CE9A4: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE9A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE9A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE9A8: ret 4 */
L_160CE9AB:
    edx = MEM32(ebp + 0x8); /* 0x160CE9AB: mov edx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CE9AE: pop edi */
    esi = POP32_VAL(esp); /* 0x160CE9AF: pop esi */
    MEM32(edx) = 2; /* 0x160CE9B0: mov dword ptr [edx], 2 */
    ebx = POP32_VAL(esp); /* 0x160CE9B6: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CE9B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CE9B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE9BA: ret 4 */
L_160CE9BD:
    eax = 0x8007054Fu; /* 0x160CE9BD: mov eax, 0x8007054f */
    ebp = POP32_VAL(esp); /* 0x160CE9C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CE9C3: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CE83Au: goto L_160CE83A;
      case 0x160CE84Cu: goto L_160CE84C;
      case 0x160CE85Eu: goto L_160CE85E;
      case 0x160CE870u: goto L_160CE870;
      case 0x160CE89Eu: goto L_160CE89E;
      case 0x160CE8B0u: goto L_160CE8B0;
      case 0x160CE8C2u: goto L_160CE8C2;
      case 0x160CE8D4u: goto L_160CE8D4;
      case 0x160CE8F6u: goto L_160CE8F6;
      case 0x160CE908u: goto L_160CE908;
      case 0x160CE91Au: goto L_160CE91A;
      case 0x160CE92Cu: goto L_160CE92C;
      case 0x160CE93Eu: goto L_160CE93E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CEA10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CEA10u);

L_160CEA10:
    edi = edi; /* 0x160CEA10: mov edi, edi */
    PUSH32(esp, esi); /* 0x160CEA12: push esi */
    eax = 0x11u; /* 0x160CEA13: mov eax, 0x11 */
    /* cmp ecx, edx */ /* 0x160CEA18: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CEA46; /* 0x160CEA1A: je 0x160cea46 */
L_160CEA1C:
    /* cmp edx, 0x14u */ /* 0x160CEA1C: cmp edx, 0x14 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CEA46; /* 0x160CEA1F: je 0x160cea46 */
L_160CEA21:
    esi = ecx + (-0x16); /* 0x160CEA21: lea esi, [ecx - 0x16] */
    /* cmp esi, 0x1Bu */ /* 0x160CEA24: cmp esi, 0x1b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CEA48; /* 0x160CEA27: ja 0x160cea48 */
L_160CEA29:
    esi = (uint32_t)MEM8(esi + 0x160CEA74); /* 0x160CEA29: movzx esi, byte ptr [esi + 0x160cea74] */
    { _itail_tgt = (uint32_t)(MEM32(esi * 4 + 0x160CEA64)); goto _ljump; }
L_160CEA37:
    /* cmp edx, 0x16u */ /* 0x160CEA37: cmp edx, 0x16 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_160CEA44; /* 0x160CEA3A: jmp 0x160cea44 */
L_160CEA3C:
    /* cmp edx, 0x20u */ /* 0x160CEA3C: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CEA46; /* 0x160CEA3F: je 0x160cea46 */
L_160CEA41:
    /* cmp edx, 0x2Eu */ /* 0x160CEA41: cmp edx, 0x2e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_160CEA44:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_160CEA48; /* 0x160CEA44: jne 0x160cea48 */
L_160CEA46:
    eax = ecx; /* 0x160CEA46: mov eax, ecx */
L_160CEA48:
    esi = POP32_VAL(esp); /* 0x160CEA48: pop esi */
    /* test edi, edi */ /* 0x160CEA49: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEA4F; /* 0x160CEA4B: je 0x160cea4f */
L_160CEA4D:
    MEM32(edi) = eax; /* 0x160CEA4D: mov dword ptr [edi], eax */
L_160CEA4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CEA4F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x11u */ /* 0x160CEA51: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CEA54: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160CEA57: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80004005u);
    ecx = ecx & 0x80004005u; /* 0x160CEA58: and ecx, 0x80004005 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x160CEA5E: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CEA60: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CEA37u: goto L_160CEA37;
      case 0x160CEA3Cu: goto L_160CEA3C;
      case 0x160CEA41u: goto L_160CEA41;
      case 0x160CEA48u: goto L_160CEA48;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CEAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CEAA0u);

L_160CEAA0:
    edi = edi; /* 0x160CEAA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CEAA2: push ebp */
    ebp = esp; /* 0x160CEAA3: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x160CEAA5: mov al, byte ptr [ebp + 8] */
    /* cmp ecx, 0x2Du */ /* 0x160CEAA8: cmp ecx, 0x2d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CEC0E; /* 0x160CEAAB: ja 0x160cec0e */
L_160CEAB1:
    ecx = (uint32_t)MEM8(ecx + 0x160CEC80); /* 0x160CEAB1: movzx ecx, byte ptr [ecx + 0x160cec80] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160CEC14)); goto _ljump; }
L_160CEABF:
    eax = 1; /* 0x160CEABF: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x160CEAC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEAC5: ret 4 */
L_160CEAC8:
    eax = 2; /* 0x160CEAC8: mov eax, 2 */
    ebp = POP32_VAL(esp); /* 0x160CEACD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEACE: ret 4 */
L_160CEAD1:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(eax, LO8(eax) & 2); /* 0x160CEAD1: and al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x160CEAD3: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160CEAD6: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CEAD8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    eax = eax & 0x11u; /* 0x160CEADA: and eax, 0x11 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160CEADD: add eax, 2 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x160CEAE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEAE1: ret 4 */
L_160CEAE4:
    eax = 3; /* 0x160CEAE4: mov eax, 3 */
    ebp = POP32_VAL(esp); /* 0x160CEAE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEAEA: ret 4 */
L_160CEAED:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    SET_LO8(eax, LO8(eax) & 4); /* 0x160CEAED: and al, 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x160CEAEF: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160CEAF2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CEAF4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x160CEAF6: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x160CEAF9: add eax, 3 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x160CEAFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEAFD: ret 4 */
L_160CEB00:
    eax = 0x27u; /* 0x160CEB00: mov eax, 0x27 */
    ebp = POP32_VAL(esp); /* 0x160CEB05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB06: ret 4 */
L_160CEB09:
    eax = 4; /* 0x160CEB09: mov eax, 4 */
    ebp = POP32_VAL(esp); /* 0x160CEB0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB0F: ret 4 */
L_160CEB12:
    eax = 5; /* 0x160CEB12: mov eax, 5 */
    ebp = POP32_VAL(esp); /* 0x160CEB17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB18: ret 4 */
L_160CEB1B:
    eax = 6; /* 0x160CEB1B: mov eax, 6 */
    ebp = POP32_VAL(esp); /* 0x160CEB20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB21: ret 4 */
L_160CEB24:
    eax = 0x1Cu; /* 0x160CEB24: mov eax, 0x1c */
    ebp = POP32_VAL(esp); /* 0x160CEB29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB2A: ret 4 */
L_160CEB2D:
    eax = 7; /* 0x160CEB2D: mov eax, 7 */
    ebp = POP32_VAL(esp); /* 0x160CEB32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB33: ret 4 */
L_160CEB36:
    eax = 0x1Du; /* 0x160CEB36: mov eax, 0x1d */
    ebp = POP32_VAL(esp); /* 0x160CEB3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB3C: ret 4 */
L_160CEB3F:
    eax = 0x20u; /* 0x160CEB3F: mov eax, 0x20 */
    ebp = POP32_VAL(esp); /* 0x160CEB44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB45: ret 4 */
L_160CEB48:
    eax = 0x21u; /* 0x160CEB48: mov eax, 0x21 */
    ebp = POP32_VAL(esp); /* 0x160CEB4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB4E: ret 4 */
L_160CEB51:
    eax = 8; /* 0x160CEB51: mov eax, 8 */
    ebp = POP32_VAL(esp); /* 0x160CEB56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB57: ret 4 */
L_160CEB5A:
    eax = 9; /* 0x160CEB5A: mov eax, 9 */
    ebp = POP32_VAL(esp); /* 0x160CEB5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB60: ret 4 */
L_160CEB63:
    eax = 0x22u; /* 0x160CEB63: mov eax, 0x22 */
    ebp = POP32_VAL(esp); /* 0x160CEB68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB69: ret 4 */
L_160CEB6C:
    /* test LO8(eax), 1 */ /* 0x160CEB6C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CEB79; /* 0x160CEB6E: je 0x160ceb79 */
L_160CEB70:
    eax = 0xAu; /* 0x160CEB70: mov eax, 0xa */
    ebp = POP32_VAL(esp); /* 0x160CEB75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB76: ret 4 */
L_160CEB79:
    /* cmp edx, 0x19u */ /* 0x160CEB79: cmp edx, 0x19 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CEB85; /* 0x160CEB7C: jne 0x160ceb85 */
L_160CEB7E:
    eax = edx + (-0xD); /* 0x160CEB7E: lea eax, [edx - 0xd] */
    ebp = POP32_VAL(esp); /* 0x160CEB81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB82: ret 4 */
L_160CEB85:
    /* cmp edx, 0x1Bu */ /* 0x160CEB85: cmp edx, 0x1b */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CEB93; /* 0x160CEB88: jne 0x160ceb93 */
L_160CEB8A:
    eax = 0xDu; /* 0x160CEB8A: mov eax, 0xd */
    ebp = POP32_VAL(esp); /* 0x160CEB8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEB90: ret 4 */
L_160CEB93:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CEB93: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x1Cu */ /* 0x160CEB95: cmp edx, 0x1c */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CEB98: sete al */
    eax = eax + eax + 0xC; /* 0x160CEB9B: lea eax, [eax + eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x160CEB9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEBA0: ret 4 */
L_160CEBA3:
    SET_LO8(eax, ~LO8(eax)); /* 0x160CEBA3: not al */
    eax = (uint32_t)LO8(eax); /* 0x160CEBA5: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x160CEBA8: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xAu)); _flag_b = (uint32_t)((eax | 0xAu));
    eax = eax | 0xAu; /* 0x160CEBAB: or eax, 0xa */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CEBAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEBAF: ret 4 */
L_160CEBB2:
    /* test LO8(eax), 1 */ /* 0x160CEBB2: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0; /* 0x160CEBB4: mov eax, 0 */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160CEBB9: sete al */
    eax = eax + eax + 0xA; /* 0x160CEBBC: lea eax, [eax + eax + 0xa] */
    ebp = POP32_VAL(esp); /* 0x160CEBC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEBC1: ret 4 */
L_160CEBC4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x160CEBC4: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x160CEBC6: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160CEBC9: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CEBCB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x160CEBCD: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xDu; /* 0x160CEBD0: add eax, 0xd */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x160CEBD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEBD4: ret 4 */
L_160CEBD7:
    SET_LO8(eax, ~LO8(eax)); /* 0x160CEBD7: not al */
    eax = (uint32_t)LO8(eax); /* 0x160CEBD9: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x160CEBDC: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160CEBDF: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160CEBE1: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xAu)); _flag_b = (uint32_t)((eax | 0xAu));
    eax = eax | 0xAu; /* 0x160CEBE3: or eax, 0xa */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CEBE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEBE7: ret 4 */
L_160CEBEA:
    eax = 0xFu; /* 0x160CEBEA: mov eax, 0xf */
    ebp = POP32_VAL(esp); /* 0x160CEBEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEBF0: ret 4 */
L_160CEBF3:
    eax = 0x10u; /* 0x160CEBF3: mov eax, 0x10 */
    ebp = POP32_VAL(esp); /* 0x160CEBF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEBF9: ret 4 */
L_160CEBFC:
    eax = 0x11u; /* 0x160CEBFC: mov eax, 0x11 */
    ebp = POP32_VAL(esp); /* 0x160CEC01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEC02: ret 4 */
L_160CEC05:
    eax = 0x12u; /* 0x160CEC05: mov eax, 0x12 */
    ebp = POP32_VAL(esp); /* 0x160CEC0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEC0B: ret 4 */
L_160CEC0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CEC0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CEC10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CEC11: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CEABFu: goto L_160CEABF;
      case 0x160CEAC8u: goto L_160CEAC8;
      case 0x160CEAD1u: goto L_160CEAD1;
      case 0x160CEAE4u: goto L_160CEAE4;
      case 0x160CEAEDu: goto L_160CEAED;
      case 0x160CEB00u: goto L_160CEB00;
      case 0x160CEB09u: goto L_160CEB09;
      case 0x160CEB12u: goto L_160CEB12;
      case 0x160CEB1Bu: goto L_160CEB1B;
      case 0x160CEB24u: goto L_160CEB24;
      case 0x160CEB2Du: goto L_160CEB2D;
      case 0x160CEB36u: goto L_160CEB36;
      case 0x160CEB3Fu: goto L_160CEB3F;
      case 0x160CEB48u: goto L_160CEB48;
      case 0x160CEB51u: goto L_160CEB51;
      case 0x160CEB5Au: goto L_160CEB5A;
      case 0x160CEB63u: goto L_160CEB63;
      case 0x160CEB6Cu: goto L_160CEB6C;
      case 0x160CEBA3u: goto L_160CEBA3;
      case 0x160CEBB2u: goto L_160CEBB2;
      case 0x160CEBC4u: goto L_160CEBC4;
      case 0x160CEBD7u: goto L_160CEBD7;
      case 0x160CEBEAu: goto L_160CEBEA;
      case 0x160CEBF3u: goto L_160CEBF3;
      case 0x160CEBFCu: goto L_160CEBFC;
      case 0x160CEC05u: goto L_160CEC05;
      case 0x160CEC0Eu: goto L_160CEC0E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CECC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CECC0u);

L_160CECC0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    edx = edx & 0x10u; /* 0x160CECC0: and edx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CECD0; /* 0x160CECC3: je 0x160cecd0 */
L_160CECC5:
    ecx = MEM32(eax + 0x48); /* 0x160CECC5: mov ecx, dword ptr [eax + 0x48] */
    /* cmp ecx, MEM32(esi + 0x48) */ /* 0x160CECC8: cmp ecx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CECD0; /* 0x160CECCB: jbe 0x160cecd0 */
L_160CECCD:
    MEM32(esi + 0x48) = ecx; /* 0x160CECCD: mov dword ptr [esi + 0x48], ecx */
L_160CECD0:
    PUSH32(esp, edi); /* 0x160CECD0: push edi */
    edi = MEM32(eax + 0x54); /* 0x160CECD1: mov edi, dword ptr [eax + 0x54] */
    /* test edi, edi */ /* 0x160CECD4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CED0C; /* 0x160CECD6: je 0x160ced0c */
L_160CECD8:
    /* cmp MEM32(eax + 0x4C), 0 */ /* 0x160CECD8: cmp dword ptr [eax + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CED0C; /* 0x160CECDC: je 0x160ced0c */
L_160CECDE:
    ecx = MEM32(eax + 0x48); /* 0x160CECDE: mov ecx, dword ptr [eax + 0x48] */
    eax = MEM32(esi + 0x54); /* 0x160CECE1: mov eax, dword ptr [esi + 0x54] */
    eax = eax + ecx + (-0x1); /* 0x160CECE4: lea eax, [eax + ecx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160CECE8: dec ecx */
    _flag_k = FK_DEC;
    ecx = ~ecx; /* 0x160CECE9: not ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x160CECEB: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CECED: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CED05; /* 0x160CECEF: jne 0x160ced05 */
L_160CECF1:
    ecx = eax; /* 0x160CECF1: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x160CECF3: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CED05; /* 0x160CECF6: je 0x160ced05 */
L_160CECF8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x160CECF8: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x10u */ /* 0x160CECFA: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160CED05; /* 0x160CECFD: jbe 0x160ced05 */
L_160CECFF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFu; /* 0x160CECFF: add eax, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x160CED02: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CED05:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x160CED05: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x54) = edi; /* 0x160CED07: mov dword ptr [esi + 0x54], edi */
    edi = POP32_VAL(esp); /* 0x160CED0A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CED0B: ret  */
L_160CED0C:
    eax = MEM32(esi + 0x54); /* 0x160CED0C: mov eax, dword ptr [esi + 0x54] */
    edi = POP32_VAL(esp); /* 0x160CED0F: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CED10: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CED20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CED20u);

L_160CED20:
    eax = 0x8007054Fu; /* 0x160CED20: mov eax, 0x8007054f */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CED25: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CED30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CED30u);

L_160CED30:
    eax = 0x8007054Fu; /* 0x160CED30: mov eax, 0x8007054f */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x160CED35: ret 0x1c */
    RECOMP_REGS_OUT();
}
