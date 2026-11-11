#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_120266B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120266B8u);

L_120266B8:
    edi = edi; /* 0x120266B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120266BA: push ebp */
    ebp = esp; /* 0x120266BB: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x120266BD: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120266C0: push esi */
    /* test eax, eax */ /* 0x120266C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12026712; /* 0x120266C3: je 0x12026712 */
L_120266C5:
    edx = MEM32(ebp + 0xC); /* 0x120266C5: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x120266C8: mov ecx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ecx + 0x50) */ /* 0x120266CB: cmp edx, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12026712; /* 0x120266CE: jae 0x12026712 */
L_120266D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120266D0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ecx + 0x24) */ /* 0x120266D2: cmp esi, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120266EC; /* 0x120266D5: jae 0x120266ec */
L_120266D7:
    PUSH32(esp, edi); /* 0x120266D7: push edi */
    edi = MEM32(ecx + 0x2C); /* 0x120266D8: mov edi, dword ptr [ecx + 0x2c] */
L_120266DB:
    /* cmp MEM32(edi), eax */ /* 0x120266DB: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120266E8; /* 0x120266DD: je 0x120266e8 */
L_120266DF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120266DF: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120266E0: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ecx + 0x24) */ /* 0x120266E3: cmp esi, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120266DB; /* 0x120266E6: jb 0x120266db */
L_120266E8:
    /* cmp esi, MEM32(ecx + 0x24) */ /* 0x120266E8: cmp esi, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x120266EB: pop edi */
L_120266EC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12026712; /* 0x120266EC: je 0x12026712 */
L_120266EE:
    /* cmp MEM32(ecx + 0x4C), edx */ /* 0x120266EE: cmp dword ptr [ecx + 0x4c], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120266F9; /* 0x120266F1: ja 0x120266f9 */
L_120266F3:
    eax = edx + 0x1; /* 0x120266F3: lea eax, [edx + 1] */
    MEM32(ecx + 0x4C) = eax; /* 0x120266F6: mov dword ptr [ecx + 0x4c], eax */
L_120266F9:
    eax = MEM32(ecx + 0x54); /* 0x120266F9: mov eax, dword ptr [ecx + 0x54] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58u); /* 0x120266FC: imul edx, edx, 0x58 */
    MEM32(edx + eax + 0x20) = esi; /* 0x120266FF: mov dword ptr [edx + eax + 0x20], esi */
    eax = MEM32(ecx + 0x54); /* 0x12026703: mov eax, dword ptr [ecx + 0x54] */
    MEM32(edx + eax + 0x54) = 1; /* 0x12026706: mov dword ptr [edx + eax + 0x54], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202670E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12026717; /* 0x12026710: jmp 0x12026717 */
L_12026712:
    eax = 0x8876086Cu; /* 0x12026712: mov eax, 0x8876086c */
L_12026717:
    esi = POP32_VAL(esp); /* 0x12026717: pop esi */
    ebp = POP32_VAL(esp); /* 0x12026718: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12026719: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12026721(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12026721u);

L_12026721:
    edi = edi; /* 0x12026721: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026723: push ebp */
    ebp = esp; /* 0x12026724: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12026726: push esi */
    PUSH32(esp, edi); /* 0x12026727: push edi */
    edi = MEM32(ebp + 0x10); /* 0x12026728: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1202672B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12026773; /* 0x1202672D: je 0x12026773 */
L_1202672F:
    esi = MEM32(ebp + 0xC); /* 0x1202672F: mov esi, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x12026732: mov edx, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(edx + 0x50) */ /* 0x12026735: cmp esi, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12026773; /* 0x12026738: jae 0x12026773 */
L_1202673A:
    eax = MEM32(edx + 0x54); /* 0x1202673A: mov eax, dword ptr [edx + 0x54] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58u); /* 0x1202673D: imul esi, esi, 0x58 */
    ecx = MEM32(eax + esi + 0x20); /* 0x12026740: mov ecx, dword ptr [eax + esi + 0x20] */
    eax = MEM32(edx + 0x2C); /* 0x12026744: mov eax, dword ptr [edx + 0x2c] */
    eax = MEM32(eax + ecx * 4); /* 0x12026747: mov eax, dword ptr [eax + ecx*4] */
    MEM32(edi) = eax; /* 0x1202674A: mov dword ptr [edi], eax */
    eax = MEM32(edx + 0x54); /* 0x1202674C: mov eax, dword ptr [edx + 0x54] */
    ecx = MEM32(eax + esi + 0x20); /* 0x1202674F: mov ecx, dword ptr [eax + esi + 0x20] */
    eax = MEM32(edx + 0x2C); /* 0x12026753: mov eax, dword ptr [edx + 0x2c] */
    /* cmp MEM32(eax + ecx * 4), 0 */ /* 0x12026756: cmp dword ptr [eax + ecx*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202676F; /* 0x1202675A: je 0x1202676f */
L_1202675C:
    eax = MEM32(edx + 0x54); /* 0x1202675C: mov eax, dword ptr [edx + 0x54] */
    ecx = MEM32(eax + esi + 0x20); /* 0x1202675F: mov ecx, dword ptr [eax + esi + 0x20] */
    eax = MEM32(edx + 0x2C); /* 0x12026763: mov eax, dword ptr [edx + 0x2c] */
    eax = MEM32(eax + ecx * 4); /* 0x12026766: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax); /* 0x12026769: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202676B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1202676C: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_1202676F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202676F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12026778; /* 0x12026771: jmp 0x12026778 */
L_12026773:
    eax = 0x8876086Cu; /* 0x12026773: mov eax, 0x8876086c */
L_12026778:
    edi = POP32_VAL(esp); /* 0x12026778: pop edi */
    esi = POP32_VAL(esp); /* 0x12026779: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202677A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202677B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12026783(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12026783u);

L_12026783:
    edi = edi; /* 0x12026783: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026785: push ebp */
    ebp = esp; /* 0x12026786: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12026788: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1202678B: mov eax, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(eax + 0x50) */ /* 0x1202678E: cmp edx, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202679A; /* 0x12026791: jb 0x1202679a */
L_12026793:
    eax = 0x8876086Cu; /* 0x12026793: mov eax, 0x8876086c */
    goto L_120267B1; /* 0x12026798: jmp 0x120267b1 */
L_1202679A:
    ecx = MEM32(ebp + 0x10); /* 0x1202679A: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1202679D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120267A6; /* 0x1202679F: je 0x120267a6 */
L_120267A1:
    /* cmp ecx, 1 */ /* 0x120267A1: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12026793; /* 0x120267A4: jne 0x12026793 */
L_120267A6:
    eax = MEM32(eax + 0x54); /* 0x120267A6: mov eax, dword ptr [eax + 0x54] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58u); /* 0x120267A9: imul edx, edx, 0x58 */
    MEM32(edx + eax) = ecx; /* 0x120267AC: mov dword ptr [edx + eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120267AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120267B1:
    ebp = POP32_VAL(esp); /* 0x120267B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120267B2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120267BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120267BAu);

L_120267BA:
    edi = edi; /* 0x120267BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120267BC: push ebp */
    ebp = esp; /* 0x120267BD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120267BF: push esi */
    PUSH32(esp, edi); /* 0x120267C0: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120267C1: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x120267C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120267E2; /* 0x120267C6: je 0x120267e2 */
L_120267C8:
    esi = MEM32(ebp + 0xC); /* 0x120267C8: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120267CB: mov eax, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(eax + 0x50) */ /* 0x120267CE: cmp esi, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120267E2; /* 0x120267D1: jae 0x120267e2 */
L_120267D3:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58u); /* 0x120267D3: imul esi, esi, 0x58 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x54));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x54); /* 0x120267D6: add esi, dword ptr [eax + 0x54] */
    _flag_k = FK_ADD;
    PUSH32(esp, 8); /* 0x120267D9: push 8 */
    ecx = POP32_VAL(esp); /* 0x120267DB: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120267DC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120267DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120267E7; /* 0x120267E0: jmp 0x120267e7 */
L_120267E2:
    eax = 0x8876086Cu; /* 0x120267E2: mov eax, 0x8876086c */
L_120267E7:
    edi = POP32_VAL(esp); /* 0x120267E7: pop edi */
    esi = POP32_VAL(esp); /* 0x120267E8: pop esi */
    ebp = POP32_VAL(esp); /* 0x120267E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120267EA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120267F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120267F2u);

L_120267F2:
    edi = edi; /* 0x120267F2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120267F4: push ebp */
    ebp = esp; /* 0x120267F5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120267F7: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x40)); /* 0x120267FA: fld dword ptr [eax + 0x40] */
    ebp = POP32_VAL(esp); /* 0x120267FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120267FE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12026806(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12026806u);

L_12026806:
    edi = edi; /* 0x12026806: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026808: push ebp */
    ebp = esp; /* 0x12026809: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1202680B: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202680E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202680F: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(edx + 0x50) */ /* 0x12026812: cmp esi, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202681B; /* 0x12026815: jb 0x1202681b */
L_12026817:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12026817: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12026854; /* 0x12026819: jmp 0x12026854 */
L_1202681B:
    /* cmp MEM32(ebp + 0x10), 4 */ /* 0x1202681B: cmp dword ptr [ebp + 0x10], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_12026817; /* 0x1202681F: jge 0x12026817 */
L_12026821:
    eax = MEM32(edx + 0x54); /* 0x12026821: mov eax, dword ptr [edx + 0x54] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16u); /* 0x12026824: imul esi, esi, 0x16 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12026827: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202682A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + esi * 4 + 0x34), ecx */ /* 0x1202682C: cmp dword ptr [eax + esi*4 + 0x34], ecx */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4 + 0x34)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12026852; /* 0x12026830: je 0x12026852 */
L_12026832:
    ecx = eax; /* 0x12026832: mov ecx, eax */
    eax = MEM32(ecx + esi * 4 + 0x34); /* 0x12026834: mov eax, dword ptr [ecx + esi*4 + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x38); /* 0x12026838: sub eax, dword ptr [edx + 0x38] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1202683B: push edi */
    PUSH32(esp, 0x38u); /* 0x1202683C: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202683E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12026840: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x12026841: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ecx + esi * 4 + 0x34); /* 0x12026843: mov ecx, dword ptr [ecx + esi*4 + 0x34] */
    ecx = MEM32(ecx + 0x2C); /* 0x12026847: mov ecx, dword ptr [ecx + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1202684A: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1202684A: shl ecx, 0x10 */
    edi = POP32_VAL(esp); /* 0x1202684D: pop edi */
    ecx = eax + ecx + 0x1; /* 0x1202684E: lea ecx, [eax + ecx + 1] */
L_12026852:
    eax = ecx; /* 0x12026852: mov eax, ecx */
L_12026854:
    esi = POP32_VAL(esp); /* 0x12026854: pop esi */
    ebp = POP32_VAL(esp); /* 0x12026855: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12026856: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202685E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202685Eu);

L_1202685E:
    edi = edi; /* 0x1202685E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026860: push ebp */
    ebp = esp; /* 0x12026861: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x12026863: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x48); /* 0x12026866: mov ecx, dword ptr [edx + 0x48] */
    /* test ecx, ecx */ /* 0x12026869: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12026871; /* 0x1202686B: jne 0x12026871 */
L_1202686D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202686D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12026889; /* 0x1202686F: jmp 0x12026889 */
L_12026871:
    PUSH32(esp, esi); /* 0x12026871: push esi */
    eax = ecx; /* 0x12026872: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x38); /* 0x12026874: sub eax, dword ptr [edx + 0x38] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x38u); /* 0x12026877: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12026879: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1202687B: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x1202687C: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ecx + 0x2C); /* 0x1202687E: mov ecx, dword ptr [ecx + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x12026881: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x12026881: shl ecx, 0x10 */
    esi = POP32_VAL(esp); /* 0x12026884: pop esi */
    eax = eax + ecx + 0x1; /* 0x12026885: lea eax, [eax + ecx + 1] */
L_12026889:
    ebp = POP32_VAL(esp); /* 0x12026889: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1202688A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12026892(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12026892u);

L_12026892:
    edi = edi; /* 0x12026892: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026894: push ebp */
    ebp = esp; /* 0x12026895: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x12026897: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202689A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202689B: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(edx + 0x50) */ /* 0x1202689E: cmp esi, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12026913; /* 0x120268A1: jae 0x12026913 */
L_120268A3:
    ecx = MEM32(ebp + 0x10); /* 0x120268A3: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x120268A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120268D4; /* 0x120268A8: jne 0x120268d4 */
L_120268AA:
    eax = MEM32(edx + 0x54); /* 0x120268AA: mov eax, dword ptr [edx + 0x54] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58u); /* 0x120268AD: imul esi, esi, 0x58 */
    /* cmp MEM32(eax + esi + 0x30), ecx */ /* 0x120268B0: cmp dword ptr [eax + esi + 0x30], ecx */
    _flag_a = (uint32_t)(MEM32(eax + esi + 0x30)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120268D0; /* 0x120268B4: je 0x120268d0 */
L_120268B6:
    ecx = MEM32(eax + esi + 0x30); /* 0x120268B6: mov ecx, dword ptr [eax + esi + 0x30] */
    eax = ecx; /* 0x120268BA: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x38); /* 0x120268BC: sub eax, dword ptr [edx + 0x38] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x38u); /* 0x120268BF: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120268C1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120268C3: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x120268C4: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ecx + 0x2C); /* 0x120268C6: mov ecx, dword ptr [ecx + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x120268C9: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x120268C9: shl ecx, 0x10 */
    ecx = eax + ecx + 0x1; /* 0x120268CC: lea ecx, [eax + ecx + 1] */
L_120268D0:
    eax = ecx; /* 0x120268D0: mov eax, ecx */
    goto L_12026915; /* 0x120268D2: jmp 0x12026915 */
L_120268D4:
    eax = ecx; /* 0x120268D4: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x120268D6: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x120268DB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12026913; /* 0x120268DE: jbe 0x12026913 */
L_120268E0:
    /* cmp eax, MEM32(edx + 0x34) */ /* 0x120268E0: cmp eax, dword ptr [edx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12026913; /* 0x120268E3: ja 0x12026913 */
L_120268E5:
    edx = MEM32(edx + 0x38); /* 0x120268E5: mov edx, dword ptr [edx + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x120268E8: imul eax, eax, 0x38 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x120268EB: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x120268EB: shr ecx, 0x10 */
    /* cmp ecx, MEM32(eax + edx + (-0xC)) */ /* 0x120268EE: cmp ecx, dword ptr [eax + edx - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + edx + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12026913; /* 0x120268F2: jne 0x12026913 */
L_120268F4:
    ecx = MEM32(eax + edx + (-0x8)); /* 0x120268F4: mov ecx, dword ptr [eax + edx - 8] */
    /* test ecx, ecx */ /* 0x120268F8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12026913; /* 0x120268FA: je 0x12026913 */
L_120268FC:
    eax = ecx; /* 0x120268FC: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x120268FE: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x38u); /* 0x12026900: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12026902: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12026904: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x12026905: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ecx + 0x2C); /* 0x12026907: mov ecx, dword ptr [ecx + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1202690A: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1202690A: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x1202690D: lea eax, [eax + ecx + 1] */
    goto L_12026915; /* 0x12026911: jmp 0x12026915 */
L_12026913:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12026913: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12026915:
    esi = POP32_VAL(esp); /* 0x12026915: pop esi */
    ebp = POP32_VAL(esp); /* 0x12026916: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12026917: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202691F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202691Fu);

L_1202691F:
    edi = edi; /* 0x1202691F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026921: push ebp */
    ebp = esp; /* 0x12026922: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12026924: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12026927: push esi */
    /* test ecx, ecx */ /* 0x12026928: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202694E; /* 0x1202692A: jne 0x1202694e */
L_1202692C:
    edx = MEM32(ebp + 0x8); /* 0x1202692C: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x44); /* 0x1202692F: mov ecx, dword ptr [edx + 0x44] */
    /* test ecx, ecx */ /* 0x12026932: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202697F; /* 0x12026934: je 0x1202697f */
L_12026936:
    eax = ecx; /* 0x12026936: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x38); /* 0x12026938: sub eax, dword ptr [edx + 0x38] */
    _flag_k = FK_CMP;
L_1202693B:
    PUSH32(esp, 0x38u); /* 0x1202693B: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202693D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1202693F: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x12026940: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ecx + 0x2C); /* 0x12026942: mov ecx, dword ptr [ecx + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x12026945: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x12026945: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x12026948: lea eax, [eax + ecx + 1] */
    goto L_12026981; /* 0x1202694C: jmp 0x12026981 */
L_1202694E:
    eax = ecx; /* 0x1202694E: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x12026950: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x12026955: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202697F; /* 0x12026958: jbe 0x1202697f */
L_1202695A:
    edx = MEM32(ebp + 0x8); /* 0x1202695A: mov edx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0x34) */ /* 0x1202695D: cmp eax, dword ptr [edx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1202697F; /* 0x12026960: ja 0x1202697f */
L_12026962:
    edx = MEM32(edx + 0x38); /* 0x12026962: mov edx, dword ptr [edx + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x12026965: imul eax, eax, 0x38 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x12026968: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x12026968: shr ecx, 0x10 */
    /* cmp ecx, MEM32(eax + edx + (-0xC)) */ /* 0x1202696B: cmp ecx, dword ptr [eax + edx - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + edx + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202697F; /* 0x1202696F: jne 0x1202697f */
L_12026971:
    ecx = MEM32(eax + edx + (-0x8)); /* 0x12026971: mov ecx, dword ptr [eax + edx - 8] */
    /* test ecx, ecx */ /* 0x12026975: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202697F; /* 0x12026977: je 0x1202697f */
L_12026979:
    eax = ecx; /* 0x12026979: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1202697B: sub eax, edx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1202693B; /* 0x1202697D: jmp 0x1202693b */
L_1202697F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202697F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12026981:
    esi = POP32_VAL(esp); /* 0x12026981: pop esi */
    ebp = POP32_VAL(esp); /* 0x12026982: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12026983: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202698B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202698Bu);

L_1202698B:
    edi = edi; /* 0x1202698B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202698D: push ebp */
    ebp = esp; /* 0x1202698E: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12026990: mov edx, dword ptr [ebp + 0xc] */
    ecx = edx; /* 0x12026993: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x12026995: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x1202699B: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120269BB; /* 0x1202699E: jbe 0x120269bb */
L_120269A0:
    eax = MEM32(ebp + 0x8); /* 0x120269A0: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x34) */ /* 0x120269A3: cmp ecx, dword ptr [eax + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120269BB; /* 0x120269A6: ja 0x120269bb */
L_120269A8:
    eax = MEM32(eax + 0x38); /* 0x120269A8: mov eax, dword ptr [eax + 0x38] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38u); /* 0x120269AB: imul ecx, ecx, 0x38 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x120269AE: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x120269AE: shr edx, 0x10 */
    /* cmp edx, MEM32(ecx + eax + (-0xC)) */ /* 0x120269B1: cmp edx, dword ptr [ecx + eax - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + eax + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120269BB; /* 0x120269B5: jne 0x120269bb */
L_120269B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120269B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120269C0; /* 0x120269B9: jmp 0x120269c0 */
L_120269BB:
    eax = 0x80004005u; /* 0x120269BB: mov eax, 0x80004005 */
L_120269C0:
    ebp = POP32_VAL(esp); /* 0x120269C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120269C1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120269C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120269C9u);

L_120269C9:
    edi = edi; /* 0x120269C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120269CB: push ebp */
    ebp = esp; /* 0x120269CC: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x120269CE: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x120269D1: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x120269D3: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x120269D8: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12026A08; /* 0x120269DB: jbe 0x12026a08 */
L_120269DD:
    edx = MEM32(ebp + 0x8); /* 0x120269DD: mov edx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0x34) */ /* 0x120269E0: cmp eax, dword ptr [edx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12026A08; /* 0x120269E3: ja 0x12026a08 */
L_120269E5:
    edx = MEM32(edx + 0x38); /* 0x120269E5: mov edx, dword ptr [edx + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x120269E8: imul eax, eax, 0x38 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x120269EB: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x120269EB: shr ecx, 0x10 */
    /* cmp ecx, MEM32(eax + edx + (-0xC)) */ /* 0x120269EE: cmp ecx, dword ptr [eax + edx - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + edx + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12026A08; /* 0x120269F2: jne 0x12026a08 */
L_120269F4:
    PUSH32(esp, esi); /* 0x120269F4: push esi */
    PUSH32(esp, edi); /* 0x120269F5: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120269F6: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0xAu); /* 0x120269F9: push 0xa */
    ecx = POP32_VAL(esp); /* 0x120269FB: pop ecx */
    esi = eax + edx + (-0x38); /* 0x120269FC: lea esi, [eax + edx - 0x38] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12026A00: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12026A02: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12026A03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12026A05: pop esi */
    goto L_12026A0D; /* 0x12026A06: jmp 0x12026a0d */
L_12026A08:
    eax = 0x8876086Cu; /* 0x12026A08: mov eax, 0x8876086c */
L_12026A0D:
    ebp = POP32_VAL(esp); /* 0x12026A0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12026A0E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12026A16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12026A16u);

L_12026A16:
    edi = edi; /* 0x12026A16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026A18: push ebp */
    ebp = esp; /* 0x12026A19: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12026A1B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x50); /* 0x12026A1E: mov eax, dword ptr [eax + 0x50] */
    ebp = POP32_VAL(esp); /* 0x12026A21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12026A22: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12026A2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12026A2Au);

L_12026A2A:
    edi = edi; /* 0x12026A2A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026A2C: push ebp */
    ebp = esp; /* 0x12026A2D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12026A2F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12026A30: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x12026A33: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12026A3D; /* 0x12026A36: je 0x12026a3d */
L_12026A38:
    eax = MEM32(esi + 0x4); /* 0x12026A38: mov eax, dword ptr [esi + 4] */
    goto L_12026A4D; /* 0x12026A3B: jmp 0x12026a4d */
L_12026A3D:
    ecx = esi; /* 0x12026A3D: mov ecx, esi */
    RECOMP_CALL(sub_12025DC6); /* 0x12026A3F: call 0x12025dc6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12026A44: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12026A45: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12026A4A: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12026A4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12026A4D:
    esi = POP32_VAL(esp); /* 0x12026A4D: pop esi */
    ebp = POP32_VAL(esp); /* 0x12026A4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12026A4F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12026A57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12026A57u);

L_12026A57:
    edi = edi; /* 0x12026A57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12026A59: push ebp */
    ebp = esp; /* 0x12026A5A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x110u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x110u; /* 0x12026A5C: sub esp, 0x110 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12026A62: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12026A67: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12026A69: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12026A6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x9C))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x9C)) = MEM32(ebp + (-0x9C)) & eax; /* 0x12026A6E: and dword ptr [ebp - 0x9c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12026A74: push esi */
    esi = ecx; /* 0x12026A75: mov esi, ecx */
    PUSH32(esp, edi); /* 0x12026A77: push edi */
    MEM32(ebp + (-0x94)) = esi; /* 0x12026A78: mov dword ptr [ebp - 0x94], esi */
    MEM32(ebp + (-0xA0)) = eax; /* 0x12026A7E: mov dword ptr [ebp - 0xa0], eax */
    /* cmp MEM32(esi + 0x18), eax */ /* 0x12026A84: cmp dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120272FB; /* 0x12026A87: jbe 0x120272fb */
L_12026A8D:
    fp_push(0.0); /* 0x12026A8D: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12026A8F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(1.0); /* 0x12026A91: fld1  */
    MEM32(ebp + (-0x8C)) = edx; /* 0x12026A93: mov dword ptr [ebp - 0x8c], edx */
L_12026A99:
    eax = MEM32(esi + 0x20); /* 0x12026A99: mov eax, dword ptr [esi + 0x20] */
    fp_push(1.0); /* 0x12026A9C: fld1  */
    ecx = MEM32(edx + eax + 0x4); /* 0x12026A9E: mov ecx, dword ptr [edx + eax + 4] */
    edi = MEM32(edx + eax + 0xC); /* 0x12026AA2: mov edi, dword ptr [edx + eax + 0xc] */
    MEM32(ebp + (-0x88)) = ecx; /* 0x12026AA6: mov dword ptr [ebp - 0x88], ecx */
    /* cmp MEM32(ebp + (-0x88)), 0 */ /* 0x12026AAC: cmp dword ptr [ebp - 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edx + eax + 0x8); /* 0x12026AB3: mov ecx, dword ptr [edx + eax + 8] */
    eax = MEM32(edx + eax + 0x10); /* 0x12026AB7: mov eax, dword ptr [edx + eax + 0x10] */
    MEM32(ebp + (-0x84)) = ecx; /* 0x12026ABB: mov dword ptr [ebp - 0x84], ecx */
    MEM32(ebp + (-0x80)) = edi; /* 0x12026AC1: mov dword ptr [ebp - 0x80], edi */
    MEM32(ebp + (-0x54)) = eax; /* 0x12026AC4: mov dword ptr [ebp - 0x54], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12026AD9; /* 0x12026AC7: jne 0x12026ad9 */
L_12026AC9:
    /* test ecx, ecx */ /* 0x12026AC9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12026AD9; /* 0x12026ACB: jne 0x12026ad9 */
L_12026ACD:
    /* test edi, edi */ /* 0x12026ACD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12026AD9; /* 0x12026ACF: jne 0x12026ad9 */
L_12026AD1:
    /* test eax, eax */ /* 0x12026AD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027309; /* 0x12026AD3: je 0x12027309 */
L_12026AD9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x58)) = MEM32(ebp + (-0x58)) & 0; /* 0x12026AD9: and dword ptr [ebp - 0x58], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 6); /* 0x12026ADD: push 6 */
    ecx = POP32_VAL(esp); /* 0x12026ADF: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12026AE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4C), 0 */ /* 0x12026AE2: cmp dword ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 6); /* 0x12026AE6: push 6 */
    edi = ebp + (-0x1C); /* 0x12026AE8: lea edi, [ebp - 0x1c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x12026AEB: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = POP32_VAL(esp); /* 0x12026AED: pop ecx */
    edi = ebp + (-0x34); /* 0x12026AEE: lea edi, [ebp - 0x34] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x12026AF1: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, 8); /* 0x12026AF3: push 8 */
    ecx = POP32_VAL(esp); /* 0x12026AF5: pop ecx */
    edi = ebp + (-0x7C); /* 0x12026AF6: lea edi, [ebp - 0x7c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x12026AF9: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = ebp + (-0xA8); /* 0x12026AFB: lea edi, [ebp - 0xa8] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x12026B01: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x12026B02: stosd dword ptr es:[edi], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_12026D95; /* 0x12026B03: jbe 0x12026d95 */
L_12026B09:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12026B09: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12026B0B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12026B0D: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12026B0F: fstp st(0) */
L_12026B11:
    ecx = MEM32(esi + 0x54); /* 0x12026B11: mov ecx, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12026B14: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + edi), 1 */ /* 0x12026B16: cmp dword ptr [ecx + edi], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12026B1A: sete al */
    MEM32(ebp + (-0x50)) = eax; /* 0x12026B1D: mov dword ptr [ebp - 0x50], eax */
    eax = ecx; /* 0x12026B20: mov eax, ecx */
    /* cmp MEM32(eax + edi + 0x18), 0 */ /* 0x12026B22: cmp dword ptr [eax + edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(eax + edi + 0x4)); /* 0x12026B27: fld dword ptr [eax + edi + 4] */
    edx = MEM32(eax + edi + 0x20); /* 0x12026B2B: mov edx, dword ptr [eax + edi + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x12026B2F: fstp dword ptr [ebp - 0x98] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12026D70; /* 0x12026B35: je 0x12026d70 */
L_12026B3B:
    /* cmp MEM32(ecx + edi + 0x4), 0 */ /* 0x12026B3B: cmp dword ptr [ecx + edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12026D70; /* 0x12026B40: je 0x12026d70 */
L_12026B46:
    eax = MEM32(esi + 0x30); /* 0x12026B46: mov eax, dword ptr [esi + 0x30] */
    eax = MEM32(eax + edx * 4); /* 0x12026B49: mov eax, dword ptr [eax + edx*4] */
    ecx = MEM32(ebp + (-0x9C)); /* 0x12026B4C: mov ecx, dword ptr [ebp - 0x9c] */
    eax = MEM32(eax + ecx * 4); /* 0x12026B52: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x90)) = eax; /* 0x12026B55: mov dword ptr [ebp - 0x90], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12026B5B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12026D70; /* 0x12026B5E: je 0x12026d70 */
L_12026B64:
    edx = MEM32(esi + 0x54); /* 0x12026B64: mov edx, dword ptr [esi + 0x54] */
    eax = MEM32(esi + 0x2C); /* 0x12026B67: mov eax, dword ptr [esi + 0x2c] */
    fp_push(*(double*)ADDR(edx + edi + 0x28)); /* 0x12026B6A: fld qword ptr [edx + edi + 0x28] */
    ecx = MEM32(edx + edi + 0x20); /* 0x12026B6E: mov ecx, dword ptr [edx + edi + 0x20] */
    eax = MEM32(eax + ecx * 4); /* 0x12026B72: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax); /* 0x12026B75: mov ecx, dword ptr [eax] */
    esi = ebp + (-0x4C); /* 0x12026B77: lea esi, [ebp - 0x4c] */
    PUSH32(esp, esi); /* 0x12026B7A: push esi */
    esi = ebp + (-0x108); /* 0x12026B7B: lea esi, [ebp - 0x108] */
    PUSH32(esp, esi); /* 0x12026B81: push esi */
    esi = ebp + (-0x40); /* 0x12026B82: lea esi, [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x12026B85: push esi */
    PUSH32(esp, MEM32(ebp + (-0x90))); /* 0x12026B86: push dword ptr [ebp - 0x90] */
    PUSH32(esp, ecx); /* 0x12026B8C: push ecx */
    PUSH32(esp, ecx); /* 0x12026B8D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12026B8E: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x12026B91: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x12026B92: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x94)); /* 0x12026B95: mov esi, dword ptr [ebp - 0x94] */
    MEM32(ebp + (-0xA0)) = eax; /* 0x12026B9B: mov dword ptr [ebp - 0xa0], eax */
    /* test eax, eax */ /* 0x12026BA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120272FB; /* 0x12026BA3: js 0x120272fb */
L_12026BA9:
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x12026BA9: fld dword ptr [ebp - 0x40] */
    ecx = MEM32(ebp + (-0x50)); /* 0x12026BAC: mov ecx, dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x12026BAF: fld dword ptr [ebp - 0x98] */
    eax = ecx; /* 0x12026BB5: mov eax, ecx */
    fp_push(_st[0]); /* 0x12026BB7: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x12026BB9: imul eax, eax, 0xc */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026BBC: fmulp st(2) */
    fp_xch(1); /* 0x12026BBE: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE0)) = _v; } /* 0x12026BC0: fstp dword ptr [ebp - 0xe0] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x12026BC6: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[1]); /* 0x12026BC9: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026BCB: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xDC)) = _v; } /* 0x12026BCD: fstp dword ptr [ebp - 0xdc] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x12026BD3: fld dword ptr [ebp - 0x38] */
    fp_push(_st[1]); /* 0x12026BD6: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026BD8: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD8)) = _v; } /* 0x12026BDA: fstp dword ptr [ebp - 0xd8] */
    fp_push(*(float*)&MEM32(ebp + (-0xE0))); /* 0x12026BE0: fld dword ptr [ebp - 0xe0] */
    _st[0] += (double)*(float*)ADDR(ebp + eax + (-0x1C)); /* 0x12026BE6: fadd dword ptr [ebp + eax - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x1C)) = _v; } /* 0x12026BEA: fstp dword ptr [ebp + eax - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + eax + (-0x18))); /* 0x12026BEE: fld dword ptr [ebp + eax - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xDC)); /* 0x12026BF2: fadd dword ptr [ebp - 0xdc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x18)) = _v; } /* 0x12026BF8: fstp dword ptr [ebp + eax - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xD8))); /* 0x12026BFC: fld dword ptr [ebp - 0xd8] */
    _st[0] += (double)*(float*)ADDR(ebp + eax + (-0x14)); /* 0x12026C02: fadd dword ptr [ebp + eax - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x14)) = _v; } /* 0x12026C06: fstp dword ptr [ebp + eax - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x12026C0A: fld dword ptr [ebp - 0x4c] */
    fp_push(_st[1]); /* 0x12026C0D: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026C0F: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD4)) = _v; } /* 0x12026C11: fstp dword ptr [ebp - 0xd4] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x12026C17: fld dword ptr [ebp - 0x48] */
    fp_push(_st[1]); /* 0x12026C1A: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026C1C: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD0)) = _v; } /* 0x12026C1E: fstp dword ptr [ebp - 0xd0] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x12026C24: fld dword ptr [ebp - 0x44] */
    fp_push(_st[1]); /* 0x12026C27: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026C29: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x12026C2B: fstp dword ptr [ebp - 0xcc] */
    fp_push(*(float*)&MEM32(ebp + eax + (-0x34))); /* 0x12026C31: fld dword ptr [ebp + eax - 0x34] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xD4)); /* 0x12026C35: fadd dword ptr [ebp - 0xd4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x34)) = _v; } /* 0x12026C3B: fstp dword ptr [ebp + eax - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0xD0))); /* 0x12026C3F: fld dword ptr [ebp - 0xd0] */
    _st[0] += (double)*(float*)ADDR(ebp + eax + (-0x30)); /* 0x12026C45: fadd dword ptr [ebp + eax - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x30)) = _v; } /* 0x12026C49: fstp dword ptr [ebp + eax - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x12026C4D: fld dword ptr [ebp - 0xcc] */
    _st[0] += (double)*(float*)ADDR(ebp + eax + (-0x2C)); /* 0x12026C53: fadd dword ptr [ebp + eax - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x2C)) = _v; } /* 0x12026C57: fstp dword ptr [ebp + eax - 0x2c] */
    fp_push(_st[0]); /* 0x12026C5B: fld st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0xA8)); /* 0x12026C5D: fadd dword ptr [ebp + ecx*4 - 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0xA8)) = _v; } /* 0x12026C64: fstp dword ptr [ebp + ecx*4 - 0xa8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12026C6B: add ecx, ecx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + ecx * 8 + (-0x7C))); /* 0x12026C6D: fld dword ptr [ebp + ecx*8 - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x108))); /* 0x12026C71: fld dword ptr [ebp - 0x108] */
    fp_push(_st[0]); /* 0x12026C77: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026C79: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x104))); /* 0x12026C7B: fld dword ptr [ebp - 0x104] */
    fp_push(_st[0]); /* 0x12026C81: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + ecx * 8 + (-0x78)); /* 0x12026C83: fmul dword ptr [ebp + ecx*8 - 0x78] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12026C87: faddp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x100))); /* 0x12026C89: fld dword ptr [ebp - 0x100] */
    fp_push(_st[0]); /* 0x12026C8F: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + ecx * 8 + (-0x74)); /* 0x12026C91: fmul dword ptr [ebp + ecx*8 - 0x74] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12026C95: faddp st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0xFC))); /* 0x12026C97: fld dword ptr [ebp - 0xfc] */
    fp_push(_st[0]); /* 0x12026C9D: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + ecx * 8 + (-0x70)); /* 0x12026C9F: fmul dword ptr [ebp + ecx*8 - 0x70] */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12026CA3: faddp st(5) */
    fp_xch(4); /* 0x12026CA5: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026CA7: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026CAA: fld dword ptr [ebp - 0x50] */
    fp_push(0.0); /* 0x12026CAD: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12026CAF: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026CB1: fnstsw ax */
    fp_push(_st[4]); /* 0x12026CB3: fld st(4) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12026CB5: fmulp st(3) */
    fp_xch(2); /* 0x12026CB7: fxch st(2) */
    /* test HI8(eax), 0x41u */ /* 0x12026CB9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12026D16; /* 0x12026CBC: jp 0x12026d16 */
L_12026CBE:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC8)) = _v; } /* 0x12026CBE: fstp dword ptr [ebp - 0xc8] */
    fp_push(_st[3]); /* 0x12026CC4: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026CC6: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC4)) = _v; } /* 0x12026CC8: fstp dword ptr [ebp - 0xc4] */
    fp_push(_st[2]); /* 0x12026CCE: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026CD0: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x12026CD2: fstp dword ptr [ebp - 0xc0] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026CD8: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x12026CDA: fstp dword ptr [ebp - 0xbc] */
    fp_push(*(float*)&MEM32(ebp + ecx * 8 + (-0x7C))); /* 0x12026CE0: fld dword ptr [ebp + ecx*8 - 0x7c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC8)); /* 0x12026CE4: fadd dword ptr [ebp - 0xc8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 8 + (-0x7C)) = _v; } /* 0x12026CEA: fstp dword ptr [ebp + ecx*8 - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC4))); /* 0x12026CEE: fld dword ptr [ebp - 0xc4] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 8 + (-0x78)); /* 0x12026CF4: fadd dword ptr [ebp + ecx*8 - 0x78] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 8 + (-0x78)) = _v; } /* 0x12026CF8: fstp dword ptr [ebp + ecx*8 - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x12026CFC: fld dword ptr [ebp - 0xc0] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 8 + (-0x74)); /* 0x12026D02: fadd dword ptr [ebp + ecx*8 - 0x74] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 8 + (-0x74)) = _v; } /* 0x12026D06: fstp dword ptr [ebp + ecx*8 - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x12026D0A: fld dword ptr [ebp - 0xbc] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 8 + (-0x70)); /* 0x12026D10: fadd dword ptr [ebp + ecx*8 - 0x70] */
    goto L_12026D6C; /* 0x12026D14: jmp 0x12026d6c */
L_12026D16:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x12026D16: fstp dword ptr [ebp - 0xb8] */
    fp_push(_st[3]); /* 0x12026D1C: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026D1E: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x12026D20: fstp dword ptr [ebp - 0xb4] */
    fp_push(_st[2]); /* 0x12026D26: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026D28: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x12026D2A: fstp dword ptr [ebp - 0xb0] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026D30: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x12026D32: fstp dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + ecx * 8 + (-0x7C))); /* 0x12026D38: fld dword ptr [ebp + ecx*8 - 0x7c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xB8)); /* 0x12026D3C: fsub dword ptr [ebp - 0xb8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 8 + (-0x7C)) = _v; } /* 0x12026D42: fstp dword ptr [ebp + ecx*8 - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + ecx * 8 + (-0x78))); /* 0x12026D46: fld dword ptr [ebp + ecx*8 - 0x78] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x12026D4A: fsub dword ptr [ebp - 0xb4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 8 + (-0x78)) = _v; } /* 0x12026D50: fstp dword ptr [ebp + ecx*8 - 0x78] */
    fp_push(*(float*)&MEM32(ebp + ecx * 8 + (-0x74))); /* 0x12026D54: fld dword ptr [ebp + ecx*8 - 0x74] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x12026D58: fsub dword ptr [ebp - 0xb0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 8 + (-0x74)) = _v; } /* 0x12026D5E: fstp dword ptr [ebp + ecx*8 - 0x74] */
    fp_push(*(float*)&MEM32(ebp + ecx * 8 + (-0x70))); /* 0x12026D62: fld dword ptr [ebp + ecx*8 - 0x70] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x12026D66: fsub dword ptr [ebp - 0xac] */
L_12026D6C:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 8 + (-0x70)) = _v; } /* 0x12026D6C: fstp dword ptr [ebp + ecx*8 - 0x70] */
L_12026D70:
    eax = MEM32(ebp + (-0x58)); /* 0x12026D70: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12026D73: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x58u; /* 0x12026D74: add edi, 0x58 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = eax; /* 0x12026D77: mov dword ptr [ebp - 0x58], eax */
    /* cmp eax, MEM32(esi + 0x4C) */ /* 0x12026D7A: cmp eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12026B11; /* 0x12026D7D: jb 0x12026b11 */
L_12026D83:
    fp_push(1.0); /* 0x12026D83: fld1  */
    edx = MEM32(ebp + (-0x8C)); /* 0x12026D85: mov edx, dword ptr [ebp - 0x8c] */
    fp_push(0.0); /* 0x12026D8B: fldz  */
    fp_push(1.0); /* 0x12026D8D: fld1  */
    fp_xch(1); /* 0x12026D8F: fxch st(1) */
    fp_xch(2); /* 0x12026D91: fxch st(2) */
    fp_xch(1); /* 0x12026D93: fxch st(1) */
L_12026D95:
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x12026D95: fld dword ptr [ebp - 0xa8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x12026D9B: fucom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026D9D: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x12026D9F: fld dword ptr [ebp - 0xa4] */
    /* test HI8(eax), 0x44u */ /* 0x12026DA5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12026DB7; /* 0x12026DA8: jp 0x12026db7 */
L_12026DAA:
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x12026DAA: fucom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026DAC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12026DAE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202730D; /* 0x12026DB1: jnp 0x1202730d */
L_12026DB7:
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x12026DB7: fucom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026DB9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12026DBB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027073; /* 0x12026DBE: jnp 0x12027073 */
L_12026DC4:
    fp_xch(1); /* 0x12026DC4: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x12026DC6: fucom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026DC8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12026DCA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12026FEB; /* 0x12026DCD: jnp 0x12026feb */
L_12026DD3:
    fp_push(*(float*)&MEM32(esi + 0x40)); /* 0x12026DD3: fld dword ptr [esi + 0x40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x12026DD6: fucomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026DD8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12026DDA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12026FEB; /* 0x12026DDD: jnp 0x12026feb */
L_12026DE3:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x12026DE3: fucom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026DE5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12026DE7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12026E30; /* 0x12026DEA: jnp 0x12026e30 */
L_12026DEC:
    fp_push(_st[2]); /* 0x12026DEC: fld st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12026DEE: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x12026DF0: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x12026DF3: fld dword ptr [ebp - 0x58] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026DF6: fst dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026DF9: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12026DFC: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x12026DFE: fmul dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12026E01: fstp dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12026E04: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x12026E06: fmul dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12026E09: fstp dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x12026E0C: fmul dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12026E0F: fstp dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026E12: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026E15: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12026E18: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x12026E1A: fmul dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x12026E1D: fstp dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x12026E20: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x12026E22: fmul dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12026E25: fstp dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x12026E28: fmul dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12026E2B: fstp dword ptr [ebp - 0x2c] */
    goto L_12026E32; /* 0x12026E2E: jmp 0x12026e32 */
L_12026E30:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12026E30: fstp st(0) */
L_12026E32:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12026E32: fucom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026E34: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12026E36: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12026E89; /* 0x12026E39: jnp 0x12026e89 */
L_12026E3B:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12026E3B: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x12026E3D: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x12026E40: fld dword ptr [ebp - 0x58] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026E43: fst dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12026E46: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026E49: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12026E4C: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026E4E: fmulp st(2) */
    fp_xch(1); /* 0x12026E50: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12026E52: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12026E55: fld dword ptr [ebp - 0xc] */
    fp_push(_st[1]); /* 0x12026E58: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026E5A: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12026E5C: fstp dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x12026E5F: fmul dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12026E62: fstp dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026E65: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x12026E68: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026E6B: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12026E6E: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026E70: fmulp st(2) */
    fp_xch(1); /* 0x12026E72: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12026E74: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12026E77: fld dword ptr [ebp - 0x24] */
    fp_push(_st[1]); /* 0x12026E7A: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026E7C: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12026E7E: fstp dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x12026E81: fmul dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12026E84: fstp dword ptr [ebp - 0x20] */
    goto L_12026E8D; /* 0x12026E87: jmp 0x12026e8d */
L_12026E89:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12026E89: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12026E8B: fstp st(0) */
L_12026E8D:
    fp_push(*(float*)&MEM32(esi + 0x40)); /* 0x12026E8D: fld dword ptr [esi + 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026E90: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12026E93: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12026E96: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12026E99: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026E9B: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026E9D: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12026EA0: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12026EA2: fmulp st(3) */
    fp_xch(2); /* 0x12026EA4: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026EA6: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12026EA8: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12026EAB: fld dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12026EAE: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12026EB1: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026EB3: fsubp st(2) */
    fp_push(_st[2]); /* 0x12026EB5: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026EB7: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026EB9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12026EBB: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12026EBE: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12026EC1: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12026EC4: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026EC6: fsubp st(2) */
    fp_xch(1); /* 0x12026EC8: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026ECA: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026ECC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12026ECE: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(esi + 0x40)); /* 0x12026ED1: fld dword ptr [esi + 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026ED4: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x12026ED7: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x12026EDA: fld dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x12026EDD: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026EDF: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026EE1: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12026EE4: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12026EE6: fmulp st(3) */
    fp_xch(2); /* 0x12026EE8: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026EEA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x12026EEC: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12026EEF: fld dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x12026EF2: fld dword ptr [ebp - 0x30] */
    fp_push(_st[0]); /* 0x12026EF5: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026EF7: fsubp st(2) */
    fp_push(_st[2]); /* 0x12026EF9: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026EFB: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026EFD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12026EFF: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12026F02: fld dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x12026F05: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x12026F08: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026F0A: fsubp st(2) */
    fp_xch(1); /* 0x12026F0C: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026F0E: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026F10: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12026F12: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x12026F15: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x12026F18: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x68)); /* 0x12026F1A: fmul dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x12026F1D: fld dword ptr [ebp - 0x7c] */
    fp_push(_st[0]); /* 0x12026F20: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x6C)); /* 0x12026F22: fmul dword ptr [ebp - 0x6c] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12026F25: faddp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x12026F27: fld dword ptr [ebp - 0x74] */
    fp_push(_st[0]); /* 0x12026F2A: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x12026F2C: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12026F2F: faddp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x12026F31: fld dword ptr [ebp - 0x70] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x12026F34: fmul dword ptr [ebp - 0x60] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12026F37: faddp st(3) */
    fp_xch(2); /* 0x12026F39: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026F3B: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026F3E: fld dword ptr [ebp - 0x50] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x12026F41: fcomp st(5) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12026F43: fnstsw ax */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x12026F45: fstp st(4) */
    /* test HI8(eax), 1 */ /* 0x12026F47: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12026F50; /* 0x12026F4A: jne 0x12026f50 */
L_12026F4C:
    fp_xch(2); /* 0x12026F4C: fxch st(2) */
    goto L_12026F58; /* 0x12026F4E: jmp 0x12026f58 */
L_12026F50:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12026F50: fstp st(2) */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x12026F52: fld dword ptr [0x12001748] */
L_12026F58:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x12026F58: fstp dword ptr [ebp - 0x58] */
    eax = ebp + (-0x7C); /* 0x12026F5B: lea eax, [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x12026F5E: fld dword ptr [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x12026F61: push eax */
    fp_push(_st[0]); /* 0x12026F62: fld st(0) */
    PUSH32(esp, eax); /* 0x12026F64: push eax */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12026F65: fmulp st(4) */
    fp_xch(3); /* 0x12026F67: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x12026F69: fstp dword ptr [ebp - 0x7c] */
    fp_push(_st[2]); /* 0x12026F6C: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026F6E: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x12026F70: fstp dword ptr [ebp - 0x78] */
    fp_push(_st[1]); /* 0x12026F73: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12026F75: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x12026F77: fstp dword ptr [ebp - 0x74] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x12026F7A: fmul dword ptr [ebp - 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x12026F7D: fstp dword ptr [ebp - 0x70] */
    RECOMP_CALL(sub_1203087E); /* 0x12026F80: call 0x1203087e */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x6C); /* 0x12026F85: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x12026F88: push eax */
    PUSH32(esp, eax); /* 0x12026F89: push eax */
    RECOMP_CALL(sub_1203087E); /* 0x12026F8A: call 0x1203087e */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(esi + 0x40)); /* 0x12026F8F: fld dword ptr [esi + 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12026F92: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x12026F95: fld dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x12026F98: fld dword ptr [ebp - 0x7c] */
    fp_push(_st[0]); /* 0x12026F9B: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026F9D: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12026F9F: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12026FA2: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12026FA4: fmulp st(3) */
    fp_xch(2); /* 0x12026FA6: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026FA8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x12026FAA: fstp dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x12026FAD: fld dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x12026FB0: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x12026FB3: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026FB5: fsubp st(2) */
    fp_push(_st[2]); /* 0x12026FB7: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026FB9: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026FBB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x12026FBD: fstp dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x12026FC0: fld dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x12026FC3: fld dword ptr [ebp - 0x74] */
    fp_push(_st[0]); /* 0x12026FC6: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026FC8: fsubp st(2) */
    fp_push(_st[2]); /* 0x12026FCA: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026FCC: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026FCE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x12026FD0: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x12026FD3: fld dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x12026FD6: fld dword ptr [ebp - 0x70] */
    fp_push(_st[0]); /* 0x12026FD9: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12026FDB: fsubp st(2) */
    fp_xch(1); /* 0x12026FDD: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12026FDF: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12026FE1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x12026FE3: fstp dword ptr [ebp - 0x70] */
    goto L_120270C8; /* 0x12026FE6: jmp 0x120270c8 */
L_12026FEB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12026FEB: fstp st(0) */
    esi = ebp + (-0xEC); /* 0x12026FED: lea esi, [ebp - 0xec] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12026FF3: fstp st(2) */
    edi = ebp + (-0x1C); /* 0x12026FF5: lea edi, [ebp - 0x1c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12026FF8: fstp st(2) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12026FFA: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x12026FFC: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x12026FFF: fld dword ptr [ebp - 0x58] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12027002: fst dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12027005: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12027008: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x1202700B: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202700D: fmulp st(2) */
    fp_xch(1); /* 0x1202700F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xEC)) = _v; } /* 0x12027011: fstp dword ptr [ebp - 0xec] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12027017: fld dword ptr [ebp - 0xc] */
    fp_push(_st[1]); /* 0x1202701A: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202701C: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE8)) = _v; } /* 0x1202701E: fstp dword ptr [ebp - 0xe8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x12027024: fmul dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE4)) = _v; } /* 0x12027027: fstp dword ptr [ebp - 0xe4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202702D: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1202702E: fstp dword ptr [ebp - 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12027031: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x12027032: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12027035: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12027038: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202703A: fmulp st(2) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202703C: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_xch(1); /* 0x1202703D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF8)) = _v; } /* 0x1202703F: fstp dword ptr [ebp - 0xf8] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12027045: fld dword ptr [ebp - 0x24] */
    esi = ebp + (-0xF8); /* 0x12027048: lea esi, [ebp - 0xf8] */
    fp_push(_st[1]); /* 0x1202704E: fld st(1) */
    edi = ebp + (-0x34); /* 0x12027050: lea edi, [ebp - 0x34] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12027053: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF4)) = _v; } /* 0x12027055: fstp dword ptr [ebp - 0xf4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1202705B: fmul dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF0)) = _v; } /* 0x1202705E: fstp dword ptr [ebp - 0xf0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12027064: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12027065: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12027066: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x6C); /* 0x12027067: lea esi, [ebp - 0x6c] */
    edi = ebp + (-0x7C); /* 0x1202706A: lea edi, [ebp - 0x7c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202706D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202706E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202706F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12027070: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_120270C8; /* 0x12027071: jmp 0x120270c8 */
L_12027073:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027073: fstp st(0) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x12027075: fstp st(3) */
    fp_xch(1); /* 0x12027077: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12027079: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202707B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1202707D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120270C4; /* 0x12027080: jnp 0x120270c4 */
L_12027082:
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12027082: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x12027084: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x12027087: fld dword ptr [ebp - 0x58] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1202708A: fst dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x1202708D: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12027090: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x12027092: fmul dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12027095: fstp dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12027098: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1202709A: fmul dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1202709D: fstp dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x120270A0: fmul dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120270A3: fstp dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x120270A6: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x120270A9: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x120270AC: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x120270AE: fmul dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x120270B1: fstp dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x120270B4: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x120270B6: fmul dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120270B9: fstp dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x120270BC: fmul dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120270BF: fstp dword ptr [ebp - 0x2c] */
    goto L_120270C8; /* 0x120270C2: jmp 0x120270c8 */
L_120270C4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120270C4: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120270C6: fstp st(0) */
L_120270C8:
    eax = ebp + (-0x7C); /* 0x120270C8: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x120270CB: push eax */
    PUSH32(esp, eax); /* 0x120270CC: push eax */
    RECOMP_CALL(sub_1203087E); /* 0x120270CD: call 0x1203087e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x84)); /* 0x120270D2: mov edi, dword ptr [ebp - 0x84] */
    /* test edi, edi */ /* 0x120270D8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120270E2; /* 0x120270DA: je 0x120270e2 */
L_120270DC:
    esi = ebp + (-0x1C); /* 0x120270DC: lea esi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270E0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270E1: movsd dword ptr es:[edi], dword ptr [esi] */
L_120270E2:
    edi = MEM32(ebp + (-0x80)); /* 0x120270E2: mov edi, dword ptr [ebp - 0x80] */
    /* test edi, edi */ /* 0x120270E5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120270F0; /* 0x120270E7: je 0x120270f0 */
L_120270E9:
    esi = ebp + (-0x7C); /* 0x120270E9: lea esi, [ebp - 0x7c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270EC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270ED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270EE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270EF: movsd dword ptr es:[edi], dword ptr [esi] */
L_120270F0:
    edi = MEM32(ebp + (-0x54)); /* 0x120270F0: mov edi, dword ptr [ebp - 0x54] */
    /* test edi, edi */ /* 0x120270F3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120270FD; /* 0x120270F5: je 0x120270fd */
L_120270F7:
    esi = ebp + (-0x34); /* 0x120270F7: lea esi, [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270FA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270FB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120270FC: movsd dword ptr es:[edi], dword ptr [esi] */
L_120270FD:
    eax = MEM32(ebp + (-0x88)); /* 0x120270FD: mov eax, dword ptr [ebp - 0x88] */
    /* test eax, eax */ /* 0x12027103: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120272C0; /* 0x12027105: je 0x120272c0 */
L_1202710B:
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x1202710B: fld dword ptr [ebp - 0x7c] */
    fp_push(_st[0]); /* 0x1202710E: fld st(0) */
    _st[0] += _st[1]; /* 0x12027110: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x12027112: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x12027115: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x12027118: fld st(0) */
    _st[0] += _st[1]; /* 0x1202711A: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x1202711C: fstp dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x1202711F: fld dword ptr [ebp - 0x74] */
    fp_push(_st[0]); /* 0x12027122: fld st(0) */
    _st[0] += _st[1]; /* 0x12027124: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x12027126: fstp dword ptr [ebp - 0x84] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x1202712C: fld dword ptr [ebp - 0x70] */
    fp_push(_st[0]); /* 0x1202712F: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x12027131: fld dword ptr [ebp - 0x54] */
    fp_push(_st[0]); /* 0x12027134: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12027136: fmulp st(2) */
    fp_xch(1); /* 0x12027138: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1202713A: fstp dword ptr [ebp - 0x5c] */
    fp_push(_st[1]); /* 0x1202713D: fld st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x1202713F: fld dword ptr [ebp - 0x80] */
    fp_push(_st[0]); /* 0x12027142: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12027144: fmulp st(2) */
    fp_xch(1); /* 0x12027146: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x12027148: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x1202714E: fld dword ptr [ebp - 0x84] */
    fp_push(_st[0]); /* 0x12027154: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12027156: fmulp st(4) */
    fp_xch(3); /* 0x12027158: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1202715A: fstp dword ptr [ebp - 0x50] */
    fp_push(_st[5]); /* 0x1202715D: fld st(5) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202715F: fmulp st(2) */
    fp_xch(1); /* 0x12027161: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x12027163: fstp dword ptr [ebp - 0x54] */
    fp_push(_st[4]); /* 0x12027166: fld st(4) */
    fp_push(_st[1]); /* 0x12027168: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202716A: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x1202716C: fstp dword ptr [ebp - 0x84] */
    fp_push(_st[1]); /* 0x12027172: fld st(1) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x12027174: fmulp st(5) */
    fp_xch(4); /* 0x12027176: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x12027178: fstp dword ptr [ebp - 0x98] */
    fp_push(_st[2]); /* 0x1202717E: fld st(2) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12027180: fmulp st(4) */
    fp_xch(3); /* 0x12027182: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x12027184: fstp dword ptr [ebp - 0x88] */
    fp_push(_st[2]); /* 0x1202718A: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202718C: fmulp st(2) */
    fp_xch(1); /* 0x1202718E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x12027190: fstp dword ptr [ebp - 0x58] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12027193: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x12027195: fstp dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x12027198: fld dword ptr [ebp - 0x54] */
    fp_push(1.0); /* 0x1202719B: fld1  */
    fp_push(_st[0]); /* 0x1202719D: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x1202719F: fsubrp st(2) */
    fp_xch(1); /* 0x120271A1: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x110)) = _v; } /* 0x120271A3: fstp qword ptr [ebp - 0x110] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x120271A9: fsub dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x120271AF: fld dword ptr [ebp - 0x80] */
    fp_push(_st[0]); /* 0x120271B2: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120271B4: fsubp st(2) */
    fp_xch(1); /* 0x120271B6: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x120271B8: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x120271BB: fld dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x120271BE: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x120271C1: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120271C3: fmulp st(2) */
    fp_xch(1); /* 0x120271C5: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120271C7: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x120271C9: fld dword ptr [ebp - 0x84] */
    fp_push(_st[0]); /* 0x120271CF: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x120271D1: fld dword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x120271D4: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120271D6: faddp st(2) */
    fp_xch(1); /* 0x120271D8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x120271DA: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x120271DD: fld dword ptr [ebp - 0x54] */
    fp_push(_st[3]); /* 0x120271E0: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120271E2: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120271E4: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x120271E7: fld dword ptr [ebp - 0x98] */
    esi = MEM32(ebp + (-0x94)); /* 0x120271ED: mov esi, dword ptr [ebp - 0x94] */
    fp_push(_st[0]); /* 0x120271F3: fld st(0) */
    edx = MEM32(ebp + (-0x8C)); /* 0x120271F5: mov edx, dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x120271FB: fld dword ptr [ebp - 0x90] */
    fp_push(_st[0]); /* 0x12027201: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12027203: fsubp st(2) */
    fp_xch(1); /* 0x12027205: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x12027207: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x1202720A: fld dword ptr [ebp - 0x54] */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x1202720D: fmulp st(5) */
    fp_xch(4); /* 0x1202720F: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12027211: fstp dword ptr [eax + 8] */
    fp_xch(2); /* 0x12027214: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12027216: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x12027218: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x1202721B: fld dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1202721E: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12027221: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12027223: fmulp st(2) */
    fp_xch(1); /* 0x12027225: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x12027227: fstp dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x110))); /* 0x1202722A: fld qword ptr [ebp - 0x110] */
    fp_push(_st[0]); /* 0x12027230: fld st(0) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x12027232: fsubrp st(5) */
    fp_xch(4); /* 0x12027234: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x12027236: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x12027239: fld dword ptr [ebp - 0x54] */
    fp_push(_st[1]); /* 0x1202723C: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202723E: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12027240: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x12027243: fld dword ptr [ebp - 0x58] */
    fp_push(_st[0]); /* 0x12027246: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x12027248: fld dword ptr [ebp - 0x5c] */
    fp_push(_st[0]); /* 0x1202724B: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202724D: faddp st(2) */
    fp_xch(1); /* 0x1202724F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x12027251: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x12027254: fld dword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12027257: fmulp st(3) */
    fp_xch(2); /* 0x12027259: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x1202725B: fstp dword ptr [eax + 0x18] */
    fp_xch(2); /* 0x1202725E: fxch st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12027260: faddp st(3) */
    fp_xch(2); /* 0x12027262: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x12027264: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x12027267: fld dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1202726A: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x1202726D: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202726F: fmulp st(2) */
    fp_xch(1); /* 0x12027271: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x12027273: fstp dword ptr [eax + 0x20] */
    fp_xch(1); /* 0x12027276: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12027278: fsubrp st(2) */
    fp_xch(1); /* 0x1202727A: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1202727C: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x1202727F: fld dword ptr [ebp - 0x5c] */
    fp_push(_st[1]); /* 0x12027282: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12027284: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x12027286: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x12027289: fld dword ptr [ebp - 0x88] */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202728F: fsubp st(2) */
    fp_xch(1); /* 0x12027291: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x12027293: fstp dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x12027296: fmul dword ptr [ebp - 0x5c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x12027299: fstp dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1202729C: fld dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1202729F: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120272A2: fld dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x120272A5: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120272A8: fld dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x120272AB: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x120272AE: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x120272B0: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x120272B3: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x120272B6: fst dword ptr [eax + 0x2c] */
    fp_push(1.0); /* 0x120272B9: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x3C) = _v; } /* 0x120272BB: fst dword ptr [eax + 0x3c] */
    goto L_120272D2; /* 0x120272BE: jmp 0x120272d2 */
L_120272C0:
    fp_push(1.0); /* 0x120272C0: fld1  */
    esi = MEM32(ebp + (-0x94)); /* 0x120272C2: mov esi, dword ptr [ebp - 0x94] */
    fp_push(0.0); /* 0x120272C8: fldz  */
    edx = MEM32(ebp + (-0x8C)); /* 0x120272CA: mov edx, dword ptr [ebp - 0x8c] */
    fp_xch(1); /* 0x120272D0: fxch st(1) */
L_120272D2:
    eax = MEM32(ebp + (-0x9C)); /* 0x120272D2: mov eax, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120272D8: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x120272D9: add edx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x9C)) = eax; /* 0x120272DC: mov dword ptr [ebp - 0x9c], eax */
    MEM32(ebp + (-0x8C)) = edx; /* 0x120272E2: mov dword ptr [ebp - 0x8c], edx */
    /* cmp eax, MEM32(esi + 0x18) */ /* 0x120272E8: cmp eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12026A99; /* 0x120272EB: jb 0x12026a99 */
L_120272F1:
    eax = MEM32(ebp + (-0xA0)); /* 0x120272F1: mov eax, dword ptr [ebp - 0xa0] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120272F7: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120272F9: fstp st(0) */
L_120272FB:
    ecx = MEM32(ebp + (-0x4)); /* 0x120272FB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120272FE: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120272FF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12027301: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12027302: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12027307: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12027308: ret  */
L_12027309:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027309: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_120272D2; /* 0x1202730B: jmp 0x120272d2 */
L_1202730D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202730D: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202730F: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_12027309; /* 0x12027311: jmp 0x12027309 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12027318(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12027318u);

L_12027318:
    edi = edi; /* 0x12027318: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202731A: push ebp */
    ebp = esp; /* 0x1202731B: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202731D: fld qword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x12027320: sub esp, 0x30 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x12027323: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027325: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027327: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027329: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202733C; /* 0x1202732C: jne 0x1202733c */
L_1202732E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202732E: fstp st(1) */
    eax = 0x8876086Cu; /* 0x12027330: mov eax, 0x8876086c */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027335: fstp st(0) */
    goto L_12027EB0; /* 0x12027337: jmp 0x12027eb0 */
L_1202733C:
    PUSH32(esp, ebx); /* 0x1202733C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202733D: mov ebx, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebx + 0x8)); /* 0x12027340: fld qword ptr [ebx + 8] */
    PUSH32(esp, esi); /* 0x12027343: push esi */
    _st[0] += *(double*)ADDR(ebx + 0x10); /* 0x12027344: fadd qword ptr [ebx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x12027347: fstp qword ptr [ebp - 0x30] */
    fp_push(*(double*)ADDR(ebx + 0x8)); /* 0x1202734A: fld qword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202734D: faddp st(2) */
    fp_xch(1); /* 0x1202734F: fxch st(1) */
    *(double*)ADDR(ebx + 0x8) = _st[0]; /* 0x12027351: fst qword ptr [ebx + 8] */
    fp_push(*(double*)ADDR(0x12001EB8)); /* 0x12027354: fld qword ptr [0x12001eb8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202735A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202735C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202735E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202736E; /* 0x12027361: jp 0x1202736e */
L_12027363:
    _st[0] += *(double*)ADDR(ebx + 0x10); /* 0x12027363: fadd qword ptr [ebx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x10) = _v; } /* 0x12027366: fstp qword ptr [ebx + 0x10] */
    *(double*)ADDR(ebx + 0x8) = _st[0]; /* 0x12027369: fst qword ptr [ebx + 8] */
    goto L_12027370; /* 0x1202736C: jmp 0x12027370 */
L_1202736E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202736E: fstp st(0) */
L_12027370:
    fp_push(*(double*)ADDR(ebx + 0x8)); /* 0x12027370: fld qword ptr [ebx + 8] */
    ecx = MEM32(ebx + 0x48); /* 0x12027373: mov ecx, dword ptr [ebx + 0x48] */
    _st[0] += *(double*)ADDR(ebx + 0x10); /* 0x12027376: fadd qword ptr [ebx + 0x10] */
    *(double*)ADDR(ebp + (-0x28)) = _st[0]; /* 0x12027379: fst qword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x1202737C: fld st(0) */
    /* test ecx, ecx */ /* 0x1202737E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027397; /* 0x12027380: je 0x12027397 */
L_12027382:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12027382: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x12027385: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12027388: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202738A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202738C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027395; /* 0x1202738F: je 0x12027395 */
L_12027391:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027391: fstp st(1) */
    goto L_12027397; /* 0x12027393: jmp 0x12027397 */
L_12027395:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027395: fstp st(0) */
L_12027397:
    edx = MEM32(ebx + 0x44); /* 0x12027397: mov edx, dword ptr [ebx + 0x44] */
    /* test edx, edx */ /* 0x1202739A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120273AD; /* 0x1202739C: je 0x120273ad */
L_1202739E:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x1202739E: fcom qword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120273A1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120273A3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120273AD; /* 0x120273A6: jnp 0x120273ad */
L_120273A8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120273A8: fstp st(0) */
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x120273AA: fld qword ptr [edx + 8] */
L_120273AD:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120273AD: fcom st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120273AF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120273B1: fnstsw ax */
    fp_push(*(double*)ADDR(0x12001EB0)); /* 0x120273B3: fld qword ptr [0x12001eb0] */
    fp_push(1.0); /* 0x120273B9: fld1  */
    fp_push(1.0); /* 0x120273BB: fld1  */
    fp_push(0.0); /* 0x120273BD: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x120273BF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120273D1; /* 0x120273C2: jnp 0x120273d1 */
L_120273C4:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120273C4: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120273C6: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120273C8: fstp st(1) */
    goto L_120274E2; /* 0x120273CA: jmp 0x120274e2 */
L_120273CF:
    fp_xch(4); /* 0x120273CF: fxch st(4) */
L_120273D1:
    /* test ecx, ecx */ /* 0x120273D1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120274BC; /* 0x120273D3: je 0x120274bc */
L_120273D9:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x120273D9: fld qword ptr [ecx + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x120273DC: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120273DE: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120273E0: fstp st(3) */
    /* test HI8(eax), 0x41u */ /* 0x120273E2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202742E; /* 0x120273E5: jne 0x1202742e */
L_120273E7:
    fp_push(_st[3]); /* 0x120273E7: fld st(3) */
    _st[0] -= *(double*)ADDR(ecx + 0x8); /* 0x120273E9: fsub qword ptr [ecx + 8] */
    _st[0] /= *(double*)ADDR(ecx + 0x10); /* 0x120273EC: fdiv qword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120273EF: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120273F2: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120273F5: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120273F7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120273F9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027405; /* 0x120273FC: jne 0x12027405 */
L_120273FE:
    fp_xch(1); /* 0x120273FE: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027400: fst dword ptr [ebp + 8] */
    goto L_1202740A; /* 0x12027403: jmp 0x1202740a */
L_12027405:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027405: fst dword ptr [ebp + 8] */
    fp_xch(1); /* 0x12027408: fxch st(1) */
L_1202740A:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202740A: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[7]); /* 0x1202740D: fcomp st(7) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202740F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027411: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202741F; /* 0x12027414: jp 0x1202741f */
L_12027416:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027416: fstp st(1) */
    fp_xch(2); /* 0x12027418: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1202741A: fst dword ptr [ebp + 8] */
    goto L_1202743C; /* 0x1202741D: jmp 0x1202743c */
L_1202741F:
    fp_xch(2); /* 0x1202741F: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027421: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027423: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027425: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027433; /* 0x12027428: jp 0x12027433 */
L_1202742A:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202742A: fstp st(1) */
    fp_xch(1); /* 0x1202742C: fxch st(1) */
L_1202742E:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1202742E: fst dword ptr [ebp + 8] */
    goto L_1202743A; /* 0x12027431: jmp 0x1202743a */
L_12027433:
    fp_xch(1); /* 0x12027433: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027435: fstp dword ptr [ebp + 8] */
    fp_xch(1); /* 0x12027438: fxch st(1) */
L_1202743A:
    fp_xch(2); /* 0x1202743A: fxch st(2) */
L_1202743C:
    eax = MEM32(ecx + 0x18); /* 0x1202743C: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202743F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12027459; /* 0x12027440: je 0x12027459 */
L_12027442:
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x12027442: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x12027445: fsub dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x12027448: fmul dword ptr [ebp + 8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x28); /* 0x1202744B: fadd dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x40) = _v; } /* 0x1202744E: fstp dword ptr [ebx + 0x40] */
    fp_push(*(double*)ADDR(0x12001EB0)); /* 0x12027451: fld qword ptr [0x12001eb0] */
    goto L_12027492; /* 0x12027457: jmp 0x12027492 */
L_12027459:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027459: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202745B: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202745D: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12027460: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12001758); /* 0x12027462: fmul qword ptr [0x12001758] */
    _st[0] = *(double*)ADDR(0x12001EA8) - _st[0]; /* 0x12027468: fsubr qword ptr [0x12001ea8] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1202746E: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x12027471: fsub dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027474: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x12027477: fmul dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x1202747A: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202747C: fmulp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202747E: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x28); /* 0x12027480: fadd dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x40) = _v; } /* 0x12027483: fstp dword ptr [ebx + 0x40] */
    fp_push(1.0); /* 0x12027486: fld1  */
    fp_push(*(double*)ADDR(0x12001EB0)); /* 0x12027488: fld qword ptr [0x12001eb0] */
    fp_push(0.0); /* 0x1202748E: fldz  */
    fp_xch(1); /* 0x12027490: fxch st(1) */
L_12027492:
    fp_xch(3); /* 0x12027492: fxch st(3) */
    fp_xch(1); /* 0x12027494: fxch st(1) */
    /* test ecx, ecx */ /* 0x12027496: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120274BC; /* 0x12027498: je 0x120274bc */
L_1202749A:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x1202749A: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x1202749D: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x120274A0: fcomp st(5) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120274A2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120274A4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120274BC; /* 0x120274A7: jp 0x120274bc */
L_120274A9:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x120274A9: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & LO16(esi)); /* 0x120274AC: and word ptr [ecx + 0x2e], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebx + 0x3C); /* 0x120274B0: mov eax, dword ptr [ebx + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x120274B3: mov dword ptr [ecx + 0x30], eax */
    MEM32(ebx + 0x3C) = ecx; /* 0x120274B6: mov dword ptr [ebx + 0x3c], ecx */
    MEM32(ebx + 0x48) = esi; /* 0x120274B9: mov dword ptr [ebx + 0x48], esi */
L_120274BC:
    eax = MEM32(ebx + 0x44); /* 0x120274BC: mov eax, dword ptr [ebx + 0x44] */
    /* test eax, eax */ /* 0x120274BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120274CF; /* 0x120274C1: je 0x120274cf */
L_120274C3:
    fp_push(*(double*)ADDR(eax + 0x8)); /* 0x120274C3: fld qword ptr [eax + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x120274C6: fcomp st(5) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120274C8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120274CA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027529; /* 0x120274CD: jnp 0x12027529 */
L_120274CF:
    fp_xch(4); /* 0x120274CF: fxch st(4) */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x120274D1: fucomp st(5) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120274D3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120274D5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027568; /* 0x120274D8: jp 0x12027568 */
L_120274DE:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120274DE: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120274E0: fstp st(0) */
L_120274E2:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120274E2: fstp st(1) */
L_120274E4:
    eax = esi; /* 0x120274E4: mov eax, esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x120274E6: mov dword ptr [ebp - 8], esi */
    /* cmp MEM32(ebx + 0x50), esi */ /* 0x120274E9: cmp dword ptr [ebx + 0x50], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12027EA1; /* 0x120274EC: jbe 0x12027ea1 */
L_120274F2:
    fp_push(*(double*)ADDR(0x12001EA0)); /* 0x120274F2: fld qword ptr [0x12001ea0] */
    ecx = ebx + 0x54; /* 0x120274F8: lea ecx, [ebx + 0x54] */
    PUSH32(esp, edi); /* 0x120274FB: push edi */
L_120274FC:
    edi = eax; /* 0x120274FC: mov edi, eax */
    eax = MEM32(ebx + 0x2C); /* 0x120274FE: mov eax, dword ptr [ebx + 0x2c] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x58u); /* 0x12027501: imul edi, edi, 0x58 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ecx); /* 0x12027504: add edi, dword ptr [ecx] */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x20); /* 0x12027506: mov ecx, dword ptr [edi + 0x20] */
    fp_push(*(double*)ADDR(edi + 0x10)); /* 0x12027509: fld qword ptr [edi + 0x10] */
    eax = MEM32(eax + ecx * 4); /* 0x1202750C: mov eax, dword ptr [eax + ecx*4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x1202750F: fstp qword ptr [ebp - 0x18] */
    ecx = MEM32(edi + 0x34); /* 0x12027512: mov ecx, dword ptr [edi + 0x34] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12027515: mov dword ptr [ebp - 4], eax */
    /* test ecx, ecx */ /* 0x12027518: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120275B6; /* 0x1202751A: jne 0x120275b6 */
L_12027520:
    fp_push(_st[0]); /* 0x12027520: fld st(0) */
    goto L_120275BC; /* 0x12027522: jmp 0x120275bc */
L_12027527:
    fp_xch(4); /* 0x12027527: fxch st(4) */
L_12027529:
    ecx = MEM32(ebx + 0x44); /* 0x12027529: mov ecx, dword ptr [ebx + 0x44] */
    fp_xch(4); /* 0x1202752C: fxch st(4) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x1202752E: fcom qword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027531: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027533: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027566; /* 0x12027536: jnp 0x12027566 */
L_12027538:
    edx = MEM32(ebx + 0x48); /* 0x12027538: mov edx, dword ptr [ebx + 0x48] */
    /* test edx, edx */ /* 0x1202753B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202754F; /* 0x1202753D: je 0x1202754f */
L_1202753F:
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x1202753F: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & LO16(esi)); /* 0x12027542: and word ptr [edx + 0x2e], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebx + 0x3C); /* 0x12027546: mov eax, dword ptr [ebx + 0x3c] */
    MEM32(edx + 0x30) = eax; /* 0x12027549: mov dword ptr [edx + 0x30], eax */
    MEM32(ebx + 0x3C) = edx; /* 0x1202754C: mov dword ptr [ebx + 0x3c], edx */
L_1202754F:
    eax = MEM32(ecx + 0x30); /* 0x1202754F: mov eax, dword ptr [ecx + 0x30] */
    MEM32(ebx + 0x44) = eax; /* 0x12027552: mov dword ptr [ebx + 0x44], eax */
    MEM32(ecx + 0x30) = esi; /* 0x12027555: mov dword ptr [ecx + 0x30], esi */
    fp_push(*(float*)&MEM32(ebx + 0x40)); /* 0x12027558: fld dword ptr [ebx + 0x40] */
    MEM32(ebx + 0x48) = ecx; /* 0x1202755B: mov dword ptr [ebx + 0x48], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x28) = _v; } /* 0x1202755E: fstp dword ptr [ecx + 0x28] */
    /* cmp MEM32(ebx + 0x44), esi */ /* 0x12027561: cmp dword ptr [ebx + 0x44], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x44)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12027527; /* 0x12027564: jne 0x12027527 */
L_12027566:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027566: fstp st(0) */
L_12027568:
    ecx = MEM32(ebx + 0x48); /* 0x12027568: mov ecx, dword ptr [ebx + 0x48] */
    fp_push(_st[4]); /* 0x1202756B: fld st(4) */
    /* test ecx, ecx */ /* 0x1202756D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027586; /* 0x1202756F: je 0x12027586 */
L_12027571:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12027571: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x12027574: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[6]); /* 0x12027577: fcom st(6) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027579: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202757B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027584; /* 0x1202757E: je 0x12027584 */
L_12027580:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027580: fstp st(1) */
    goto L_12027586; /* 0x12027582: jmp 0x12027586 */
L_12027584:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027584: fstp st(0) */
L_12027586:
    edx = MEM32(ebx + 0x44); /* 0x12027586: mov edx, dword ptr [ebx + 0x44] */
    /* test edx, edx */ /* 0x12027589: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202759C; /* 0x1202758B: je 0x1202759c */
L_1202758D:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x1202758D: fcom qword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027590: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027592: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202759C; /* 0x12027595: jnp 0x1202759c */
L_12027597:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027597: fstp st(0) */
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x12027599: fld qword ptr [edx + 8] */
L_1202759C:
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x1202759C: fcom st(5) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202759E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120275A0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120273CF; /* 0x120275A3: jnp 0x120273cf */
L_120275A9:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120275A9: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120275AB: fstp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120275AD: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120275AF: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_120274E4; /* 0x120275B1: jmp 0x120274e4 */
L_120275B6:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x120275B6: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x120275B9: fadd qword ptr [ecx + 8] */
L_120275BC:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x120275BC: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120275C6; /* 0x120275C0: jne 0x120275c6 */
L_120275C2:
    fp_push(_st[1]); /* 0x120275C2: fld st(1) */
    goto L_120275CF; /* 0x120275C4: jmp 0x120275cf */
L_120275C6:
    eax = MEM32(edi + 0x38); /* 0x120275C6: mov eax, dword ptr [edi + 0x38] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x120275C9: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x120275CC: fadd qword ptr [eax + 8] */
L_120275CF:
    esi = MEM32(edi + 0x3C); /* 0x120275CF: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x120275D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120275DA; /* 0x120275D4: jne 0x120275da */
L_120275D6:
    fp_push(_st[2]); /* 0x120275D6: fld st(2) */
    goto L_120275E3; /* 0x120275D8: jmp 0x120275e3 */
L_120275DA:
    eax = MEM32(edi + 0x3C); /* 0x120275DA: mov eax, dword ptr [edi + 0x3c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x120275DD: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x120275E0: fadd qword ptr [eax + 8] */
L_120275E3:
    edx = MEM32(edi + 0x40); /* 0x120275E3: mov edx, dword ptr [edi + 0x40] */
    /* test edx, edx */ /* 0x120275E6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120275EE; /* 0x120275E8: jne 0x120275ee */
L_120275EA:
    fp_push(_st[3]); /* 0x120275EA: fld st(3) */
    goto L_120275F7; /* 0x120275EC: jmp 0x120275f7 */
L_120275EE:
    eax = MEM32(edi + 0x40); /* 0x120275EE: mov eax, dword ptr [edi + 0x40] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x120275F1: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x120275F4: fadd qword ptr [eax + 8] */
L_120275F7:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120275F7: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120275F9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120275FB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027609; /* 0x120275FE: jne 0x12027609 */
L_12027600:
    /* test esi, esi */ /* 0x12027600: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202760D; /* 0x12027602: je 0x1202760d */
L_12027604:
    eax = MEM32(edi + 0x3C); /* 0x12027604: mov eax, dword ptr [edi + 0x3c] */
    goto L_12027614; /* 0x12027607: jmp 0x12027614 */
L_12027609:
    /* test edx, edx */ /* 0x12027609: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027611; /* 0x1202760B: jne 0x12027611 */
L_1202760D:
    fp_push(_st[2]); /* 0x1202760D: fld st(2) */
    goto L_1202761A; /* 0x1202760F: jmp 0x1202761a */
L_12027611:
    eax = MEM32(edi + 0x40); /* 0x12027611: mov eax, dword ptr [edi + 0x40] */
L_12027614:
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027614: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027617: fadd qword ptr [eax + 8] */
L_1202761A:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202761A: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202761C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202761E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202762E; /* 0x12027621: jne 0x1202762e */
L_12027623:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x12027623: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027666; /* 0x12027627: je 0x12027666 */
L_12027629:
    eax = MEM32(edi + 0x38); /* 0x12027629: mov eax, dword ptr [edi + 0x38] */
    goto L_1202766D; /* 0x1202762C: jmp 0x1202766d */
L_1202762E:
    /* test esi, esi */ /* 0x1202762E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027636; /* 0x12027630: jne 0x12027636 */
L_12027632:
    fp_push(_st[1]); /* 0x12027632: fld st(1) */
    goto L_1202763F; /* 0x12027634: jmp 0x1202763f */
L_12027636:
    eax = MEM32(edi + 0x3C); /* 0x12027636: mov eax, dword ptr [edi + 0x3c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027639: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x1202763C: fadd qword ptr [eax + 8] */
L_1202763F:
    /* test edx, edx */ /* 0x1202763F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027647; /* 0x12027641: jne 0x12027647 */
L_12027643:
    fp_push(_st[2]); /* 0x12027643: fld st(2) */
    goto L_12027650; /* 0x12027645: jmp 0x12027650 */
L_12027647:
    eax = MEM32(edi + 0x40); /* 0x12027647: mov eax, dword ptr [edi + 0x40] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x1202764A: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x1202764D: fadd qword ptr [eax + 8] */
L_12027650:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027650: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027652: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027654: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027662; /* 0x12027657: jne 0x12027662 */
L_12027659:
    /* test esi, esi */ /* 0x12027659: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027666; /* 0x1202765B: je 0x12027666 */
L_1202765D:
    eax = MEM32(edi + 0x3C); /* 0x1202765D: mov eax, dword ptr [edi + 0x3c] */
    goto L_1202766D; /* 0x12027660: jmp 0x1202766d */
L_12027662:
    /* test edx, edx */ /* 0x12027662: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202766A; /* 0x12027664: jne 0x1202766a */
L_12027666:
    fp_push(_st[1]); /* 0x12027666: fld st(1) */
    goto L_12027673; /* 0x12027668: jmp 0x12027673 */
L_1202766A:
    eax = MEM32(edi + 0x40); /* 0x1202766A: mov eax, dword ptr [edi + 0x40] */
L_1202766D:
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x1202766D: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027670: fadd qword ptr [eax + 8] */
L_12027673:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027673: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027675: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027677: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027692; /* 0x1202767A: jne 0x12027692 */
L_1202767C:
    /* test ecx, ecx */ /* 0x1202767C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027687; /* 0x1202767E: jne 0x12027687 */
L_12027680:
    fp_push(_st[0]); /* 0x12027680: fld st(0) */
    goto L_12027747; /* 0x12027682: jmp 0x12027747 */
L_12027687:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12027687: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x1202768A: fadd qword ptr [ecx + 8] */
    goto L_12027747; /* 0x1202768D: jmp 0x12027747 */
L_12027692:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x12027692: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202769C; /* 0x12027696: jne 0x1202769c */
L_12027698:
    fp_push(_st[0]); /* 0x12027698: fld st(0) */
    goto L_120276A5; /* 0x1202769A: jmp 0x120276a5 */
L_1202769C:
    eax = MEM32(edi + 0x38); /* 0x1202769C: mov eax, dword ptr [edi + 0x38] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x1202769F: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x120276A2: fadd qword ptr [eax + 8] */
L_120276A5:
    /* test esi, esi */ /* 0x120276A5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120276AD; /* 0x120276A7: jne 0x120276ad */
L_120276A9:
    fp_push(_st[1]); /* 0x120276A9: fld st(1) */
    goto L_120276B6; /* 0x120276AB: jmp 0x120276b6 */
L_120276AD:
    eax = MEM32(edi + 0x3C); /* 0x120276AD: mov eax, dword ptr [edi + 0x3c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x120276B0: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x120276B3: fadd qword ptr [eax + 8] */
L_120276B6:
    /* test edx, edx */ /* 0x120276B6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120276BE; /* 0x120276B8: jne 0x120276be */
L_120276BA:
    fp_push(_st[2]); /* 0x120276BA: fld st(2) */
    goto L_120276C7; /* 0x120276BC: jmp 0x120276c7 */
L_120276BE:
    eax = MEM32(edi + 0x40); /* 0x120276BE: mov eax, dword ptr [edi + 0x40] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x120276C1: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x120276C4: fadd qword ptr [eax + 8] */
L_120276C7:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120276C7: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120276C9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120276CB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120276D9; /* 0x120276CE: jne 0x120276d9 */
L_120276D0:
    /* test esi, esi */ /* 0x120276D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120276DD; /* 0x120276D2: je 0x120276dd */
L_120276D4:
    eax = MEM32(edi + 0x3C); /* 0x120276D4: mov eax, dword ptr [edi + 0x3c] */
    goto L_120276E4; /* 0x120276D7: jmp 0x120276e4 */
L_120276D9:
    /* test edx, edx */ /* 0x120276D9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120276E1; /* 0x120276DB: jne 0x120276e1 */
L_120276DD:
    fp_push(_st[1]); /* 0x120276DD: fld st(1) */
    goto L_120276EA; /* 0x120276DF: jmp 0x120276ea */
L_120276E1:
    eax = MEM32(edi + 0x40); /* 0x120276E1: mov eax, dword ptr [edi + 0x40] */
L_120276E4:
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x120276E4: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x120276E7: fadd qword ptr [eax + 8] */
L_120276EA:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120276EA: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120276EC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120276EE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120276FE; /* 0x120276F1: jne 0x120276fe */
L_120276F3:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x120276F3: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027680; /* 0x120276F7: je 0x12027680 */
L_120276F9:
    eax = MEM32(edi + 0x38); /* 0x120276F9: mov eax, dword ptr [edi + 0x38] */
    goto L_12027741; /* 0x120276FC: jmp 0x12027741 */
L_120276FE:
    /* test esi, esi */ /* 0x120276FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027706; /* 0x12027700: jne 0x12027706 */
L_12027702:
    fp_push(_st[0]); /* 0x12027702: fld st(0) */
    goto L_1202770F; /* 0x12027704: jmp 0x1202770f */
L_12027706:
    eax = MEM32(edi + 0x3C); /* 0x12027706: mov eax, dword ptr [edi + 0x3c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027709: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x1202770C: fadd qword ptr [eax + 8] */
L_1202770F:
    /* test edx, edx */ /* 0x1202770F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027717; /* 0x12027711: jne 0x12027717 */
L_12027713:
    fp_push(_st[1]); /* 0x12027713: fld st(1) */
    goto L_12027720; /* 0x12027715: jmp 0x12027720 */
L_12027717:
    eax = MEM32(edi + 0x40); /* 0x12027717: mov eax, dword ptr [edi + 0x40] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x1202771A: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x1202771D: fadd qword ptr [eax + 8] */
L_12027720:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027720: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027722: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027724: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027736; /* 0x12027727: jne 0x12027736 */
L_12027729:
    /* test esi, esi */ /* 0x12027729: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027680; /* 0x1202772B: je 0x12027680 */
L_12027731:
    eax = MEM32(edi + 0x3C); /* 0x12027731: mov eax, dword ptr [edi + 0x3c] */
    goto L_12027741; /* 0x12027734: jmp 0x12027741 */
L_12027736:
    /* test edx, edx */ /* 0x12027736: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027680; /* 0x12027738: je 0x12027680 */
L_1202773E:
    eax = MEM32(edi + 0x40); /* 0x1202773E: mov eax, dword ptr [edi + 0x40] */
L_12027741:
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027741: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027744: fadd qword ptr [eax + 8] */
L_12027747:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x12027747: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x1202774A: fld qword ptr [ebp - 0x30] */
    fp_xch(1); /* 0x1202774D: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x1202774F: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027751: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027753: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202775C; /* 0x12027756: jnp 0x1202775c */
L_12027758:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027758: fstp st(0) */
    fp_push(_st[3]); /* 0x1202775A: fld st(3) */
L_1202775C:
    edx = MEM32(edi + 0x30); /* 0x1202775C: mov edx, dword ptr [edi + 0x30] */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x1202775F: fst qword ptr [ebp - 0x20] */
    /* test edx, edx */ /* 0x12027762: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027778; /* 0x12027764: je 0x12027778 */
L_12027766:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x12027766: fcom qword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027769: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202776B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027778; /* 0x1202776E: jnp 0x12027778 */
L_12027770:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027770: fstp st(0) */
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x12027772: fld qword ptr [edx + 8] */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x12027775: fst qword ptr [ebp - 0x20] */
L_12027778:
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x12027778: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202777A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202777C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027EB4; /* 0x1202777F: jp 0x12027eb4 */
L_12027785:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12027785: fstp st(2) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x12027787: fstp st(3) */
    goto L_12027793; /* 0x12027789: jmp 0x12027793 */
L_1202778B:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1202778B: fstp st(3) */
    fp_xch(3); /* 0x1202778D: fxch st(3) */
    fp_xch(2); /* 0x1202778F: fxch st(2) */
    fp_xch(1); /* 0x12027791: fxch st(1) */
L_12027793:
    fp_push(_st[0]); /* 0x12027793: fld st(0) */
    _st[0] -= _st[3]; /* 0x12027795: fsub st(3) */
    /* test ecx, ecx */ /* 0x12027797: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027927; /* 0x12027799: je 0x12027927 */
L_1202779F:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x1202779F: fld qword ptr [ecx + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x120277A2: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120277A8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120277AA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202780A; /* 0x120277AD: jne 0x1202780a */
L_120277AF:
    fp_push(_st[1]); /* 0x120277AF: fld st(1) */
    _st[0] -= *(double*)ADDR(ecx + 0x8); /* 0x120277B1: fsub qword ptr [ecx + 8] */
    _st[0] /= *(double*)ADDR(ecx + 0x10); /* 0x120277B4: fdiv qword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120277B7: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120277BA: fld dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x120277BD: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120277BF: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120277C1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120277C3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120277CF; /* 0x120277C6: jp 0x120277cf */
L_120277C8:
    fp_xch(4); /* 0x120277C8: fxch st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120277CA: fst dword ptr [ebp + 8] */
    goto L_120277D8; /* 0x120277CD: jmp 0x120277d8 */
L_120277CF:
    fp_xch(1); /* 0x120277CF: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120277D1: fst dword ptr [ebp + 8] */
    fp_xch(1); /* 0x120277D4: fxch st(1) */
    fp_xch(4); /* 0x120277D6: fxch st(4) */
L_120277D8:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120277D8: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[7]); /* 0x120277DB: fcomp st(7) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120277DD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120277DF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120277ED; /* 0x120277E2: jp 0x120277ed */
L_120277E4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120277E4: fstp st(1) */
    fp_push(0.0); /* 0x120277E6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120277E8: fstp dword ptr [ebp + 8] */
    goto L_12027815; /* 0x120277EB: jmp 0x12027815 */
L_120277ED:
    fp_xch(4); /* 0x120277ED: fxch st(4) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120277EF: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120277F1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120277F3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027801; /* 0x120277F6: jp 0x12027801 */
L_120277F8:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120277F8: fstp st(1) */
    fp_xch(3); /* 0x120277FA: fxch st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120277FC: fst dword ptr [ebp + 8] */
    goto L_12027815; /* 0x120277FF: jmp 0x12027815 */
L_12027801:
    fp_xch(1); /* 0x12027801: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027803: fstp dword ptr [ebp + 8] */
    fp_xch(3); /* 0x12027806: fxch st(3) */
    goto L_12027815; /* 0x12027808: jmp 0x12027815 */
L_1202780A:
    fp_xch(2); /* 0x1202780A: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1202780C: fst dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x1202780F: fld1  */
    fp_xch(3); /* 0x12027811: fxch st(3) */
    fp_xch(1); /* 0x12027813: fxch st(1) */
L_12027815:
    eax = MEM32(ecx + 0x18); /* 0x12027815: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12027818: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12027857; /* 0x12027819: je 0x12027857 */
L_1202781B:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x1202781B: fstp st(4) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202781D: fstp st(2) */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x1202781F: fld dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12027822: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x12027825: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x12027828: fsub dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1202782B: fmul dword ptr [ebp + 8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x28); /* 0x1202782E: fadd dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027831: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12027834: fld dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(edi + 0x8) = _v; } /* 0x12027837: fst dword ptr [edi + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x1202783A: fadd dword ptr [ebp + 0x10] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x1202783D: fmul qword ptr [0x120014c0] */
    fp_xch(2); /* 0x12027843: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027845: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12027848: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202784B: fmulp st(2) */
    fp_xch(1); /* 0x1202784D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x1202784F: fstp dword ptr [ebp + 0x10] */
    goto L_12027939; /* 0x12027852: jmp 0x12027939 */
L_12027857:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027857: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027859: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202785B: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1202785E: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12001758); /* 0x12027860: fmul qword ptr [0x12001758] */
    _st[0] = *(double*)ADDR(0x12001EA8) - _st[0]; /* 0x12027866: fsubr qword ptr [0x12001ea8] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1202786C: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x1202786F: fsub dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027872: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x12027875: fmul dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x12027878: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202787A: fmulp st(1) */
    fp_push(_st[1]); /* 0x1202787C: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202787E: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x28); /* 0x12027880: fadd dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x12027883: fstp dword ptr [edi + 8] */
    fp_push(_st[0]); /* 0x12027886: fld st(0) */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x12027888: fmul qword ptr [0x120014c0] */
    fp_push(_st[3]); /* 0x1202788E: fld st(3) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12027890: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x12027892: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x12027895: fsub dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027898: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1202789B: fmul dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x1202789E: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120278A0: fmulp st(1) */
    fp_push(_st[1]); /* 0x120278A2: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120278A4: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x28); /* 0x120278A6: fadd dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120278A9: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x120278AB: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x120278AE: fld dword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x120278B1: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120278B3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120278B5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202790F; /* 0x120278B8: jp 0x1202790f */
L_120278BA:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x120278BA: fld qword ptr [ecx + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x120278BD: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120278C3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120278C5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120278D4; /* 0x120278C8: jne 0x120278d4 */
L_120278CA:
    fp_xch(2); /* 0x120278CA: fxch st(2) */
    _st[0] -= *(double*)ADDR(ecx + 0x8); /* 0x120278CC: fsub qword ptr [ecx + 8] */
    _st[0] /= *(double*)ADDR(ecx + 0x10); /* 0x120278CF: fdiv qword ptr [ecx + 0x10] */
    goto L_120278D8; /* 0x120278D2: jmp 0x120278d8 */
L_120278D4:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120278D4: fstp st(2) */
    fp_push(0.0); /* 0x120278D6: fldz  */
L_120278D8:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120278D8: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120278DB: fld dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120278DE: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120278E1: fld st(0) */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x120278E3: fmul qword ptr [0x120014c0] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x120278E9: fsubp st(3) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x120278EB: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x120278EE: fsub dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120278F1: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120278F4: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120278F7: fmulp st(3) */
    fp_push(_st[0]); /* 0x120278F9: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120278FB: fmulp st(3) */
    fp_push(_st[0]); /* 0x120278FD: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120278FF: fmulp st(3) */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x12027901: fld dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12027904: faddp st(3) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12027906: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12027908: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x1202790A: fstp dword ptr [ebp + 0x10] */
    goto L_12027913; /* 0x1202790D: jmp 0x12027913 */
L_1202790F:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202790F: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027911: fstp st(0) */
L_12027913:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12027913: fld qword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027916: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12027919: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x1202791C: fmul dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x1202791F: fstp dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x12027922: fld qword ptr [ebp - 0x20] */
    goto L_12027939; /* 0x12027925: jmp 0x12027939 */
L_12027927:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x12027927: fstp st(3) */
    fp_xch(2); /* 0x12027929: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1202792B: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202792E: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x12027931: fmul dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12027934: fstp dword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x12027937: fxch st(1) */
L_12027939:
    ecx = MEM32(edi + 0x38); /* 0x12027939: mov ecx, dword ptr [edi + 0x38] */
    /* test ecx, ecx */ /* 0x1202793C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120279E1; /* 0x1202793E: je 0x120279e1 */
L_12027944:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12027944: fld qword ptr [ecx + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x12027947: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202794D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202794F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120279A0; /* 0x12027952: jne 0x120279a0 */
L_12027954:
    _st[0] -= *(double*)ADDR(ecx + 0x8); /* 0x12027954: fsub qword ptr [ecx + 8] */
    _st[0] /= *(double*)ADDR(ecx + 0x10); /* 0x12027957: fdiv qword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1202795A: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202795D: fld dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x12027960: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027962: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027964: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027966: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027972; /* 0x12027969: jp 0x12027972 */
L_1202796B:
    fp_xch(2); /* 0x1202796B: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1202796D: fst dword ptr [ebp + 8] */
    goto L_1202797B; /* 0x12027970: jmp 0x1202797b */
L_12027972:
    fp_xch(1); /* 0x12027972: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12027974: fst dword ptr [ebp + 8] */
    fp_xch(1); /* 0x12027977: fxch st(1) */
    fp_xch(2); /* 0x12027979: fxch st(2) */
L_1202797B:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202797B: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x1202797E: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027980: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027982: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027991; /* 0x12027985: jp 0x12027991 */
L_12027987:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027987: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027989: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202798B: fstp st(0) */
    fp_push(0.0); /* 0x1202798D: fldz  */
    goto L_120279A2; /* 0x1202798F: jmp 0x120279a2 */
L_12027991:
    fp_xch(2); /* 0x12027991: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027993: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027995: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027997: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120279A0; /* 0x1202799A: jnp 0x120279a0 */
L_1202799C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202799C: fstp st(1) */
    goto L_120279A2; /* 0x1202799E: jmp 0x120279a2 */
L_120279A0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120279A0: fstp st(0) */
L_120279A2:
    eax = MEM32(ecx + 0x18); /* 0x120279A2: mov eax, dword ptr [ecx + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120279A5: fstp dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120279A8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120279BC; /* 0x120279A9: je 0x120279bc */
L_120279AB:
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x120279AB: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x120279AE: fsub dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x120279B1: fmul dword ptr [ebp + 8] */
L_120279B4:
    _st[0] += (double)*(float*)ADDR(ecx + 0x28); /* 0x120279B4: fadd dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x120279B7: fstp dword ptr [edi + 4] */
    goto L_120279E5; /* 0x120279BA: jmp 0x120279e5 */
L_120279BC:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120279BC: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120279BF: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12001758); /* 0x120279C1: fmul qword ptr [0x12001758] */
    _st[0] = *(double*)ADDR(0x12001EA8) - _st[0]; /* 0x120279C7: fsubr qword ptr [0x12001ea8] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x120279CD: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x120279D0: fsub dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120279D3: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x120279D6: fmul dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x120279D9: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120279DB: fmulp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120279DD: fmulp st(1) */
    RECOMP_BACKEDGE();
    goto L_120279B4; /* 0x120279DF: jmp 0x120279b4 */
L_120279E1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120279E1: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120279E3: fstp st(0) */
L_120279E5:
    eax = MEM32(edi + 0x3C); /* 0x120279E5: mov eax, dword ptr [edi + 0x3c] */
    /* test eax, eax */ /* 0x120279E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027A06; /* 0x120279EA: jne 0x12027a06 */
L_120279EC:
    /* cmp MEM32(edi + 0x40), eax */ /* 0x120279EC: cmp dword ptr [edi + 0x40], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12027A02; /* 0x120279EF: jne 0x12027a02 */
L_120279F1:
    edx = edi + 0x10; /* 0x120279F1: lea edx, [edi + 0x10] */
    /* cmp MEM32(edi + 0x18), eax */ /* 0x120279F4: cmp dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027A2C; /* 0x120279F7: je 0x12027a2c */
L_120279F9:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120279F9: fld dword ptr [ebp + 0x10] */
    _st[0] += *(double*)ADDR(edx); /* 0x120279FC: fadd qword ptr [edx] */
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x120279FE: fstp qword ptr [edx] */
    goto L_12027A2C; /* 0x12027A00: jmp 0x12027a2c */
L_12027A02:
    /* test eax, eax */ /* 0x12027A02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027A10; /* 0x12027A04: je 0x12027a10 */
L_12027A06:
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x12027A06: fld qword ptr [eax + 0x20] */
    edx = edi + 0x10; /* 0x12027A09: lea edx, [edi + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x12027A0C: fstp qword ptr [edx] */
    goto L_12027A13; /* 0x12027A0E: jmp 0x12027a13 */
L_12027A10:
    edx = edi + 0x10; /* 0x12027A10: lea edx, [edi + 0x10] */
L_12027A13:
    eax = MEM32(edi + 0x40); /* 0x12027A13: mov eax, dword ptr [edi + 0x40] */
    /* test eax, eax */ /* 0x12027A16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027A20; /* 0x12027A18: je 0x12027a20 */
L_12027A1A:
    eax = MEM32(eax + 0x20); /* 0x12027A1A: mov eax, dword ptr [eax + 0x20] */
    MEM32(edi + 0x18) = eax; /* 0x12027A1D: mov dword ptr [edi + 0x18], eax */
L_12027A20:
    fp_push(*(double*)ADDR(edx)); /* 0x12027A20: fld qword ptr [edx] */
    MEM32(edi + 0x54) = 1; /* 0x12027A22: mov dword ptr [edi + 0x54], 1 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x12027A29: fstp qword ptr [ebp - 0x18] */
L_12027A2C:
    ecx = MEM32(ebp + (-0x4)); /* 0x12027A2C: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x12027A2F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027A4C; /* 0x12027A31: je 0x12027a4c */
L_12027A33:
    eax = MEM32(ecx); /* 0x12027A33: mov eax, dword ptr [ecx] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027A35: fstp st(0) */
    fp_push(*(double*)ADDR(edx)); /* 0x12027A37: fld qword ptr [edx] */
    PUSH32(esp, ecx); /* 0x12027A39: push ecx */
    PUSH32(esp, ecx); /* 0x12027A3A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12027A3B: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x12027A3E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x12027A3F: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x28) = _v; } /* 0x12027A42: fstp qword ptr [edi + 0x28] */
    fp_push(0.0); /* 0x12027A45: fldz  */
    ecx = MEM32(ebp + (-0x4)); /* 0x12027A47: mov ecx, dword ptr [ebp - 4] */
    goto L_12027A51; /* 0x12027A4A: jmp 0x12027a51 */
L_12027A4C:
    fp_push(*(double*)ADDR(edx)); /* 0x12027A4C: fld qword ptr [edx] */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x28) = _v; } /* 0x12027A4E: fstp qword ptr [edi + 0x28] */
L_12027A51:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x12027A51: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027BAD; /* 0x12027A55: je 0x12027bad */
L_12027A5B:
    edx = MEM32(ebp + 0x14); /* 0x12027A5B: mov edx, dword ptr [ebp + 0x14] */
    /* test edx, edx */ /* 0x12027A5E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027BAD; /* 0x12027A60: je 0x12027bad */
L_12027A66:
    /* test ecx, ecx */ /* 0x12027A66: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027BAD; /* 0x12027A68: je 0x12027bad */
L_12027A6E:
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12027A6E: fld dword ptr [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12027A71: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027A73: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027A75: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027A77: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027A7F; /* 0x12027A7A: jp 0x12027a7f */
L_12027A7C:
    PUSH32(esp, 2); /* 0x12027A7C: push 2 */
    esi = POP32_VAL(esp); /* 0x12027A7E: pop esi */
L_12027A7F:
    /* cmp MEM32(edi + 0x54), 0 */ /* 0x12027A7F: cmp dword ptr [edi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027AE2; /* 0x12027A83: je 0x12027ae2 */
L_12027A85:
    eax = MEM32(ebp + (-0x4)); /* 0x12027A85: mov eax, dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027A88: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x12027A8A: fld qword ptr [ebp - 0x18] */
    eax = MEM32(eax); /* 0x12027A8D: mov eax, dword ptr [eax] */
    ecx = edi + 0x50; /* 0x12027A8F: lea ecx, [edi + 0x50] */
    PUSH32(esp, ecx); /* 0x12027A92: push ecx */
    edx = edi + 0x48; /* 0x12027A93: lea edx, [edi + 0x48] */
    PUSH32(esp, edx); /* 0x12027A96: push edx */
    PUSH32(esp, esi); /* 0x12027A97: push esi */
    PUSH32(esp, ecx); /* 0x12027A98: push ecx */
    PUSH32(esp, ecx); /* 0x12027A99: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12027A9A: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x12027A9D: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x12027AA0: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x12001EA0)); /* 0x12027AA3: fld qword ptr [0x12001ea0] */
    /* test eax, eax */ /* 0x12027AA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12027AB4; /* 0x12027AAB: jns 0x12027ab4 */
L_12027AAD:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0; /* 0x12027AAD: and dword ptr [edi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(edi + 0x48) = _st[0]; /* 0x12027AB1: fst qword ptr [edi + 0x48] */
L_12027AB4:
    fp_push(0.0); /* 0x12027AB4: fldz  */
    _flag_a = (uint32_t)(MEM32(edi + 0x54)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x54) = MEM32(edi + 0x54) & 0; /* 0x12027AB6: and dword ptr [edi + 0x54], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x14); /* 0x12027ABA: mov edx, dword ptr [ebp + 0x14] */
    fp_xch(1); /* 0x12027ABD: fxch st(1) */
L_12027ABF:
    _flag_a = (uint32_t)((MEM32(ebx + 0x58) | 1)); _flag_b = (uint32_t)((MEM32(ebx + 0x58) | 1));
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) | 1; /* 0x12027ABF: or dword ptr [ebx + 0x58], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 1)); _flag_b = (uint32_t)((esi | 1));
    esi = esi | 1; /* 0x12027AC3: or esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = esi; /* 0x12027AC6: mov dword ptr [ebp + 8], esi */
    esi = edi + 0x48; /* 0x12027AC9: lea esi, [edi + 0x48] */
    fp_push(*(double*)ADDR(esi)); /* 0x12027ACC: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027ACE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027AD0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12027AD2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027AEC; /* 0x12027AD5: jp 0x12027aec */
L_12027AD7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027AD7: fstp st(0) */
L_12027AD9:
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) & 0xFFFFFFFEu; /* 0x12027AD9: and dword ptr [ebx + 0x58], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12027BB6; /* 0x12027ADD: jmp 0x12027bb6 */
L_12027AE2:
    fp_push(*(double*)ADDR(0x12001EA0)); /* 0x12027AE2: fld qword ptr [0x12001ea0] */
    RECOMP_BACKEDGE();
    goto L_12027ABF; /* 0x12027AE8: jmp 0x12027abf */
L_12027AEA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027AEA: fstp st(0) */
L_12027AEC:
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12027AEC: fld dword ptr [edi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027AEF: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027AF1: fnstsw ax */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x12027AF3: fld qword ptr [ebp - 0x18] */
    /* test HI8(eax), 0x41u */ /* 0x12027AF6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027B04; /* 0x12027AF9: jne 0x12027b04 */
L_12027AFB:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x12027AFB: fcom qword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027AFD: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12027AFF: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027B1D; /* 0x12027B02: je 0x12027b1d */
L_12027B04:
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12027B04: fld dword ptr [edi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12027B07: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027B09: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027B0B: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x12027B0D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027AD7; /* 0x12027B10: jp 0x12027ad7 */
L_12027B12:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x12027B12: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027B14: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027B16: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027AD9; /* 0x12027B19: jp 0x12027ad9 */
L_12027B1B:
    goto L_12027B21; /* 0x12027B1B: jmp 0x12027b21 */
L_12027B1D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027B1D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027B1F: fstp st(0) */
L_12027B21:
    eax = MEM32(edx); /* 0x12027B21: mov eax, dword ptr [edx] */
    esi = edi + 0x50; /* 0x12027B23: lea esi, [edi + 0x50] */
    PUSH32(esp, MEM32(esi)); /* 0x12027B26: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x12027B28: push dword ptr [ebp - 8] */
    PUSH32(esp, edx); /* 0x12027B2B: push edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x12027B2C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(edi + 0x48)); /* 0x12027B2E: fld qword ptr [edi + 0x48] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12027B31: mov ecx, dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x12027B34: fstp qword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x12027B37: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x12027B39: push esi */
    esi = edi + 0x48; /* 0x12027B3A: lea esi, [edi + 0x48] */
    fp_push(*(double*)ADDR(esi)); /* 0x12027B3D: fld qword ptr [esi] */
    PUSH32(esp, esi); /* 0x12027B3F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12027B40: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x12027B43: push ecx */
    PUSH32(esp, ecx); /* 0x12027B44: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12027B45: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x12027B48: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x12027B49: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12027B4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12027B9C; /* 0x12027B4E: js 0x12027b9c */
L_12027B50:
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12027B50: fld dword ptr [edi + 8] */
    fp_push(0.0); /* 0x12027B53: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027B55: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027B57: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027B59: fstp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x12027B5B: fld qword ptr [ebp - 0x18] */
    /* test HI8(eax), 0x41u */ /* 0x12027B5E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027B6C; /* 0x12027B61: jp 0x12027b6c */
L_12027B63:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x12027B63: fcom qword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027B65: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12027B67: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027B8E; /* 0x12027B6A: je 0x12027b8e */
L_12027B6C:
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12027B6C: fld dword ptr [edi + 8] */
    edx = MEM32(ebp + 0x14); /* 0x12027B6F: mov edx, dword ptr [ebp + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12027B72: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027B74: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027B76: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027AEA; /* 0x12027B79: jp 0x12027aea */
L_12027B7F:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x12027B7F: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027B81: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027B83: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027AEC; /* 0x12027B86: jp 0x12027aec */
L_12027B8C:
    goto L_12027B90; /* 0x12027B8C: jmp 0x12027b90 */
L_12027B8E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027B8E: fstp st(0) */
L_12027B90:
    MEM32(edi + 0x54) = 1; /* 0x12027B90: mov dword ptr [edi + 0x54], 1 */
    RECOMP_BACKEDGE();
    goto L_12027AD7; /* 0x12027B97: jmp 0x12027ad7 */
L_12027B9C:
    fp_push(*(double*)ADDR(0x12001EA0)); /* 0x12027B9C: fld qword ptr [0x12001ea0] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0; /* 0x12027BA2: and dword ptr [edi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x12027BA6: fstp qword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_12027AD9; /* 0x12027BA8: jmp 0x12027ad9 */
L_12027BAD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027BAD: fstp st(0) */
    MEM32(edi + 0x54) = 1; /* 0x12027BAF: mov dword ptr [edi + 0x54], 1 */
L_12027BB6:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x12027BB6: fld qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x12027BB9: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027BBC: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027BBE: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027BC0: fstp st(1) */
    /* test HI8(eax), 1 */ /* 0x12027BC2: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027C15; /* 0x12027BC5: jne 0x12027c15 */
L_12027BC7:
    fp_push(0.0); /* 0x12027BC7: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12027BC9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12027BCB:
    ecx = MEM32(edi + edx * 4 + 0x34); /* 0x12027BCB: mov ecx, dword ptr [edi + edx*4 + 0x34] */
    /* test ecx, ecx */ /* 0x12027BCF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027C0D; /* 0x12027BD1: je 0x12027c0d */
L_12027BD3:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027BD3: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027BD5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12027BD7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027C0D; /* 0x12027BDA: jnp 0x12027c0d */
L_12027BDC:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12027BDC: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x12027BDF: fadd qword ptr [ecx + 8] */
    _st[0] /= _st[2]; /* 0x12027BE2: fdiv st(2) */
    fp_push(1.0); /* 0x12027BE4: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12027BE6: fsubp st(1) */
    _st[0] = fabs(_st[0]); /* 0x12027BE8: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x12027BEA: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027BF0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027BF2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027C0D; /* 0x12027BF5: jp 0x12027c0d */
L_12027BF7:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12027BF7: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12027BFA: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebx + 0x3C); /* 0x12027BFF: mov eax, dword ptr [ebx + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x12027C02: mov dword ptr [ecx + 0x30], eax */
    MEM32(ebx + 0x3C) = ecx; /* 0x12027C05: mov dword ptr [ebx + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(edi + edx * 4 + 0x34)); _flag_b = (uint32_t)(0);
    MEM32(edi + edx * 4 + 0x34) = MEM32(edi + edx * 4 + 0x34) & 0; /* 0x12027C08: and dword ptr [edi + edx*4 + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12027C0D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12027C0D: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 4 */ /* 0x12027C0E: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12027BCB; /* 0x12027C11: jb 0x12027bcb */
L_12027C13:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027C13: fstp st(0) */
L_12027C15:
    eax = MEM32(edi + 0x30); /* 0x12027C15: mov eax, dword ptr [edi + 0x30] */
    /* test eax, eax */ /* 0x12027C18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027C92; /* 0x12027C1A: je 0x12027c92 */
L_12027C1C:
    fp_push(*(double*)ADDR(eax + 0x8)); /* 0x12027C1C: fld qword ptr [eax + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027C1F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027C21: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12027C23: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12027C92; /* 0x12027C26: jp 0x12027c92 */
L_12027C28:
    edx = MEM32(edi + 0x30); /* 0x12027C28: mov edx, dword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x12027C2B: fcom qword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027C2E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027C30: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027C7E; /* 0x12027C33: jnp 0x12027c7e */
L_12027C35:
    ecx = MEM32(edx); /* 0x12027C35: mov ecx, dword ptr [edx] */
    /* cmp MEM32(edi + ecx * 4 + 0x34), 0 */ /* 0x12027C37: cmp dword ptr [edi + ecx*4 + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(edi + ecx * 4 + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027C53; /* 0x12027C3C: je 0x12027c53 */
L_12027C3E:
    ecx = MEM32(edi + ecx * 4 + 0x34); /* 0x12027C3E: mov ecx, dword ptr [edi + ecx*4 + 0x34] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12027C42: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12027C45: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebx + 0x3C); /* 0x12027C4A: mov eax, dword ptr [ebx + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x12027C4D: mov dword ptr [ecx + 0x30], eax */
    MEM32(ebx + 0x3C) = ecx; /* 0x12027C50: mov dword ptr [ebx + 0x3c], ecx */
L_12027C53:
    eax = MEM32(edx + 0x30); /* 0x12027C53: mov eax, dword ptr [edx + 0x30] */
    MEM32(edi + 0x30) = eax; /* 0x12027C56: mov dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x30) = MEM32(edx + 0x30) & 0; /* 0x12027C59: and dword ptr [edx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx); /* 0x12027C5D: mov eax, dword ptr [edx] */
    MEM32(edi + eax * 4 + 0x34) = edx; /* 0x12027C5F: mov dword ptr [edi + eax*4 + 0x34], edx */
    /* cmp MEM32(edx), 0 */ /* 0x12027C63: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12027C6D; /* 0x12027C66: jne 0x12027c6d */
L_12027C68:
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12027C68: fld dword ptr [edi + 8] */
    goto L_12027C75; /* 0x12027C6B: jmp 0x12027c75 */
L_12027C6D:
    /* cmp MEM32(edx), 1 */ /* 0x12027C6D: cmp dword ptr [edx], 1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12027C78; /* 0x12027C70: jne 0x12027c78 */
L_12027C72:
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x12027C72: fld dword ptr [edi + 4] */
L_12027C75:
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x28) = _v; } /* 0x12027C75: fstp dword ptr [edx + 0x28] */
L_12027C78:
    /* cmp MEM32(edi + 0x30), 0 */ /* 0x12027C78: cmp dword ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12027C28; /* 0x12027C7C: jne 0x12027c28 */
L_12027C7E:
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x12027C7E: fld qword ptr [ebp - 0x28] */
L_12027C81:
    ecx = MEM32(edi + 0x34); /* 0x12027C81: mov ecx, dword ptr [edi + 0x34] */
    /* test ecx, ecx */ /* 0x12027C84: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027CA4; /* 0x12027C86: jne 0x12027ca4 */
L_12027C88:
    fp_push(*(double*)ADDR(0x12001EA0)); /* 0x12027C88: fld qword ptr [0x12001ea0] */
    fp_push(_st[0]); /* 0x12027C8E: fld st(0) */
    goto L_12027CB2; /* 0x12027C90: jmp 0x12027cb2 */
L_12027C92:
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x12027C92: fld qword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027C95: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027C97: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12027C99: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027E79; /* 0x12027C9C: jnp 0x12027e79 */
L_12027CA2:
    RECOMP_BACKEDGE();
    goto L_12027C81; /* 0x12027CA2: jmp 0x12027c81 */
L_12027CA4:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12027CA4: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x12027CA7: fadd qword ptr [ecx + 8] */
    fp_push(*(double*)ADDR(0x12001EA0)); /* 0x12027CAA: fld qword ptr [0x12001ea0] */
    fp_xch(1); /* 0x12027CB0: fxch st(1) */
L_12027CB2:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x12027CB2: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12027CBC; /* 0x12027CB6: jne 0x12027cbc */
L_12027CB8:
    fp_push(_st[1]); /* 0x12027CB8: fld st(1) */
    goto L_12027CC5; /* 0x12027CBA: jmp 0x12027cc5 */
L_12027CBC:
    eax = MEM32(edi + 0x38); /* 0x12027CBC: mov eax, dword ptr [edi + 0x38] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027CBF: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027CC2: fadd qword ptr [eax + 8] */
L_12027CC5:
    esi = MEM32(edi + 0x3C); /* 0x12027CC5: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x12027CC8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027CD0; /* 0x12027CCA: jne 0x12027cd0 */
L_12027CCC:
    fp_push(_st[2]); /* 0x12027CCC: fld st(2) */
    goto L_12027CD9; /* 0x12027CCE: jmp 0x12027cd9 */
L_12027CD0:
    eax = MEM32(edi + 0x3C); /* 0x12027CD0: mov eax, dword ptr [edi + 0x3c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027CD3: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027CD6: fadd qword ptr [eax + 8] */
L_12027CD9:
    edx = MEM32(edi + 0x40); /* 0x12027CD9: mov edx, dword ptr [edi + 0x40] */
    /* test edx, edx */ /* 0x12027CDC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027CE4; /* 0x12027CDE: jne 0x12027ce4 */
L_12027CE0:
    fp_push(_st[3]); /* 0x12027CE0: fld st(3) */
    goto L_12027CED; /* 0x12027CE2: jmp 0x12027ced */
L_12027CE4:
    eax = MEM32(edi + 0x40); /* 0x12027CE4: mov eax, dword ptr [edi + 0x40] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027CE7: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027CEA: fadd qword ptr [eax + 8] */
L_12027CED:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027CED: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027CEF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027CF1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027CFF; /* 0x12027CF4: jne 0x12027cff */
L_12027CF6:
    /* test esi, esi */ /* 0x12027CF6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027D03; /* 0x12027CF8: je 0x12027d03 */
L_12027CFA:
    eax = MEM32(edi + 0x3C); /* 0x12027CFA: mov eax, dword ptr [edi + 0x3c] */
    goto L_12027D0A; /* 0x12027CFD: jmp 0x12027d0a */
L_12027CFF:
    /* test edx, edx */ /* 0x12027CFF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027D07; /* 0x12027D01: jne 0x12027d07 */
L_12027D03:
    fp_push(_st[2]); /* 0x12027D03: fld st(2) */
    goto L_12027D10; /* 0x12027D05: jmp 0x12027d10 */
L_12027D07:
    eax = MEM32(edi + 0x40); /* 0x12027D07: mov eax, dword ptr [edi + 0x40] */
L_12027D0A:
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027D0A: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027D0D: fadd qword ptr [eax + 8] */
L_12027D10:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027D10: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027D12: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027D14: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027D24; /* 0x12027D17: jne 0x12027d24 */
L_12027D19:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x12027D19: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027D5C; /* 0x12027D1D: je 0x12027d5c */
L_12027D1F:
    eax = MEM32(edi + 0x38); /* 0x12027D1F: mov eax, dword ptr [edi + 0x38] */
    goto L_12027D63; /* 0x12027D22: jmp 0x12027d63 */
L_12027D24:
    /* test esi, esi */ /* 0x12027D24: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027D2C; /* 0x12027D26: jne 0x12027d2c */
L_12027D28:
    fp_push(_st[1]); /* 0x12027D28: fld st(1) */
    goto L_12027D35; /* 0x12027D2A: jmp 0x12027d35 */
L_12027D2C:
    eax = MEM32(edi + 0x3C); /* 0x12027D2C: mov eax, dword ptr [edi + 0x3c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027D2F: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027D32: fadd qword ptr [eax + 8] */
L_12027D35:
    /* test edx, edx */ /* 0x12027D35: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027D3D; /* 0x12027D37: jne 0x12027d3d */
L_12027D39:
    fp_push(_st[2]); /* 0x12027D39: fld st(2) */
    goto L_12027D46; /* 0x12027D3B: jmp 0x12027d46 */
L_12027D3D:
    eax = MEM32(edi + 0x40); /* 0x12027D3D: mov eax, dword ptr [edi + 0x40] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027D40: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027D43: fadd qword ptr [eax + 8] */
L_12027D46:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027D46: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027D48: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027D4A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027D58; /* 0x12027D4D: jne 0x12027d58 */
L_12027D4F:
    /* test esi, esi */ /* 0x12027D4F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027D5C; /* 0x12027D51: je 0x12027d5c */
L_12027D53:
    eax = MEM32(edi + 0x3C); /* 0x12027D53: mov eax, dword ptr [edi + 0x3c] */
    goto L_12027D63; /* 0x12027D56: jmp 0x12027d63 */
L_12027D58:
    /* test edx, edx */ /* 0x12027D58: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027D60; /* 0x12027D5A: jne 0x12027d60 */
L_12027D5C:
    fp_push(_st[1]); /* 0x12027D5C: fld st(1) */
    goto L_12027D69; /* 0x12027D5E: jmp 0x12027d69 */
L_12027D60:
    eax = MEM32(edi + 0x40); /* 0x12027D60: mov eax, dword ptr [edi + 0x40] */
L_12027D63:
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027D63: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027D66: fadd qword ptr [eax + 8] */
L_12027D69:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027D69: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027D6B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027D6D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027D87; /* 0x12027D70: jne 0x12027d87 */
L_12027D72:
    /* test ecx, ecx */ /* 0x12027D72: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027E36; /* 0x12027D74: je 0x12027e36 */
L_12027D7A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027D7A: fstp st(0) */
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12027D7C: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x12027D7F: fadd qword ptr [ecx + 8] */
    goto L_12027E36; /* 0x12027D82: jmp 0x12027e36 */
L_12027D87:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x12027D87: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12027D91; /* 0x12027D8B: jne 0x12027d91 */
L_12027D8D:
    fp_push(_st[0]); /* 0x12027D8D: fld st(0) */
    goto L_12027D9A; /* 0x12027D8F: jmp 0x12027d9a */
L_12027D91:
    eax = MEM32(edi + 0x38); /* 0x12027D91: mov eax, dword ptr [edi + 0x38] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027D94: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027D97: fadd qword ptr [eax + 8] */
L_12027D9A:
    /* test esi, esi */ /* 0x12027D9A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027DA2; /* 0x12027D9C: jne 0x12027da2 */
L_12027D9E:
    fp_push(_st[1]); /* 0x12027D9E: fld st(1) */
    goto L_12027DAB; /* 0x12027DA0: jmp 0x12027dab */
L_12027DA2:
    eax = MEM32(edi + 0x3C); /* 0x12027DA2: mov eax, dword ptr [edi + 0x3c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027DA5: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027DA8: fadd qword ptr [eax + 8] */
L_12027DAB:
    /* test edx, edx */ /* 0x12027DAB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027DB3; /* 0x12027DAD: jne 0x12027db3 */
L_12027DAF:
    fp_push(_st[2]); /* 0x12027DAF: fld st(2) */
    goto L_12027DBC; /* 0x12027DB1: jmp 0x12027dbc */
L_12027DB3:
    eax = MEM32(edi + 0x40); /* 0x12027DB3: mov eax, dword ptr [edi + 0x40] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027DB6: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027DB9: fadd qword ptr [eax + 8] */
L_12027DBC:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027DBC: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027DBE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027DC0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027DCE; /* 0x12027DC3: jne 0x12027dce */
L_12027DC5:
    /* test esi, esi */ /* 0x12027DC5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027DD2; /* 0x12027DC7: je 0x12027dd2 */
L_12027DC9:
    eax = MEM32(edi + 0x3C); /* 0x12027DC9: mov eax, dword ptr [edi + 0x3c] */
    goto L_12027DD9; /* 0x12027DCC: jmp 0x12027dd9 */
L_12027DCE:
    /* test edx, edx */ /* 0x12027DCE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027DD6; /* 0x12027DD0: jne 0x12027dd6 */
L_12027DD2:
    fp_push(_st[1]); /* 0x12027DD2: fld st(1) */
    goto L_12027DDF; /* 0x12027DD4: jmp 0x12027ddf */
L_12027DD6:
    eax = MEM32(edi + 0x40); /* 0x12027DD6: mov eax, dword ptr [edi + 0x40] */
L_12027DD9:
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027DD9: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027DDC: fadd qword ptr [eax + 8] */
L_12027DDF:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027DDF: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027DE1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027DE3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027DF3; /* 0x12027DE6: jne 0x12027df3 */
L_12027DE8:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x12027DE8: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027E36; /* 0x12027DEC: je 0x12027e36 */
L_12027DEE:
    eax = MEM32(edi + 0x38); /* 0x12027DEE: mov eax, dword ptr [edi + 0x38] */
    goto L_12027E2E; /* 0x12027DF1: jmp 0x12027e2e */
L_12027DF3:
    /* test esi, esi */ /* 0x12027DF3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027DFB; /* 0x12027DF5: jne 0x12027dfb */
L_12027DF7:
    fp_push(_st[0]); /* 0x12027DF7: fld st(0) */
    goto L_12027E04; /* 0x12027DF9: jmp 0x12027e04 */
L_12027DFB:
    eax = MEM32(edi + 0x3C); /* 0x12027DFB: mov eax, dword ptr [edi + 0x3c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027DFE: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027E01: fadd qword ptr [eax + 8] */
L_12027E04:
    /* test edx, edx */ /* 0x12027E04: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027E0C; /* 0x12027E06: jne 0x12027e0c */
L_12027E08:
    fp_push(_st[1]); /* 0x12027E08: fld st(1) */
    goto L_12027E15; /* 0x12027E0A: jmp 0x12027e15 */
L_12027E0C:
    eax = MEM32(edi + 0x40); /* 0x12027E0C: mov eax, dword ptr [edi + 0x40] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027E0F: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027E12: fadd qword ptr [eax + 8] */
L_12027E15:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027E15: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027E17: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12027E19: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12027E27; /* 0x12027E1C: jne 0x12027e27 */
L_12027E1E:
    /* test esi, esi */ /* 0x12027E1E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027E36; /* 0x12027E20: je 0x12027e36 */
L_12027E22:
    eax = MEM32(edi + 0x3C); /* 0x12027E22: mov eax, dword ptr [edi + 0x3c] */
    goto L_12027E2E; /* 0x12027E25: jmp 0x12027e2e */
L_12027E27:
    /* test edx, edx */ /* 0x12027E27: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027E36; /* 0x12027E29: je 0x12027e36 */
L_12027E2B:
    eax = MEM32(edi + 0x40); /* 0x12027E2B: mov eax, dword ptr [edi + 0x40] */
L_12027E2E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027E2E: fstp st(0) */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12027E30: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12027E33: fadd qword ptr [eax + 8] */
L_12027E36:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x12027E36: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027E39: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027E3B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027E3D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027E46; /* 0x12027E40: jnp 0x12027e46 */
L_12027E42:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027E42: fstp st(0) */
    fp_push(_st[0]); /* 0x12027E44: fld st(0) */
L_12027E46:
    edx = MEM32(edi + 0x30); /* 0x12027E46: mov edx, dword ptr [edi + 0x30] */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x12027E49: fst qword ptr [ebp - 0x20] */
    /* test edx, edx */ /* 0x12027E4C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12027E62; /* 0x12027E4E: je 0x12027e62 */
L_12027E50:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x12027E50: fcom qword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027E53: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12027E55: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12027E62; /* 0x12027E58: jnp 0x12027e62 */
L_12027E5A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027E5A: fstp st(0) */
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x12027E5C: fld qword ptr [edx + 8] */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x12027E5F: fst qword ptr [ebp - 0x20] */
L_12027E62:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12027E62: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12027E64: fnstsw ax */
    fp_push(0.0); /* 0x12027E66: fldz  */
    fp_push(1.0); /* 0x12027E68: fld1  */
    /* test HI8(eax), 0x41u */ /* 0x12027E6A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202778B; /* 0x12027E6D: jnp 0x1202778b */
L_12027E73:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12027E73: fstp st(2) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x12027E75: fstp st(3) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12027E77: fstp st(2) */
L_12027E79:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12027E79: fstp st(1) */
    fp_push(*(double*)ADDR(0x12001EA0)); /* 0x12027E7B: fld qword ptr [0x12001ea0] */
    fp_push(0.0); /* 0x12027E81: fldz  */
    fp_push(1.0); /* 0x12027E83: fld1  */
    fp_xch(1); /* 0x12027E85: fxch st(1) */
    fp_xch(3); /* 0x12027E87: fxch st(3) */
    fp_xch(2); /* 0x12027E89: fxch st(2) */
L_12027E8B:
    eax = MEM32(ebp + (-0x8)); /* 0x12027E8B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12027E8E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x12027E8F: mov dword ptr [ebp - 8], eax */
    ecx = ebx + 0x54; /* 0x12027E92: lea ecx, [ebx + 0x54] */
    /* cmp eax, MEM32(ebx + 0x50) */ /* 0x12027E95: cmp eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120274FC; /* 0x12027E98: jb 0x120274fc */
L_12027E9E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027E9E: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x12027EA0: pop edi */
L_12027EA1:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12027EA1: fstp st(2) */
    ecx = ebx; /* 0x12027EA3: mov ecx, ebx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027EA5: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027EA7: fstp st(0) */
    RECOMP_CALL(sub_12026A57); /* 0x12027EA9: call 0x12026a57 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12027EAE: pop esi */
    ebx = POP32_VAL(esp); /* 0x12027EAF: pop ebx */
L_12027EB0:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12027EB0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12027EB1: ret 0x10 */
L_12027EB4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027EB4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12027EB6: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_12027E8B; /* 0x12027EB8: jmp 0x12027e8b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12027EBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12027EBFu);

L_12027EBF:
    edi = edi; /* 0x12027EBF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12027EC1: push ebp */
    ebp = esp; /* 0x12027EC2: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12027EC4: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12027EC7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12027EC8: mov esi, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(esi + 0x50) */ /* 0x12027ECB: cmp edx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12027ED7; /* 0x12027ECE: jb 0x12027ed7 */
L_12027ED0:
    eax = 0x8876086Cu; /* 0x12027ED0: mov eax, 0x8876086c */
    goto L_12027F0D; /* 0x12027ED5: jmp 0x12027f0d */
L_12027ED7:
    eax = MEM32(esi + 0x54); /* 0x12027ED7: mov eax, dword ptr [esi + 0x54] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12027EDA: fld dword ptr [ebp + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58u); /* 0x12027EDD: imul edx, edx, 0x58 */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + edx + 0x8) = _v; } /* 0x12027EE0: fstp dword ptr [eax + edx + 8] */
    ecx = MEM32(esi + 0x54); /* 0x12027EE4: mov ecx, dword ptr [esi + 0x54] */
    /* cmp MEM32(ecx + edx + 0x34), 0 */ /* 0x12027EE7: cmp dword ptr [ecx + edx + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + edx + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027F0B; /* 0x12027EEC: je 0x12027f0b */
L_12027EEE:
    ecx = MEM32(ecx + edx + 0x34); /* 0x12027EEE: mov ecx, dword ptr [ecx + edx + 0x34] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12027EF2: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12027EF5: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x12027EFA: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x12027EFD: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esi + 0x54); /* 0x12027F00: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x3C) = ecx; /* 0x12027F03: mov dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x34)); _flag_b = (uint32_t)(0);
    MEM32(eax + edx + 0x34) = MEM32(eax + edx + 0x34) & 0; /* 0x12027F06: and dword ptr [eax + edx + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12027F0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12027F0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12027F0D:
    esi = POP32_VAL(esp); /* 0x12027F0D: pop esi */
    ebp = POP32_VAL(esp); /* 0x12027F0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12027F0F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12027F17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12027F17u);

L_12027F17:
    edi = edi; /* 0x12027F17: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12027F19: push ebp */
    ebp = esp; /* 0x12027F1A: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12027F1C: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12027F1F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12027F20: mov esi, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(esi + 0x50) */ /* 0x12027F23: cmp edx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12027F2F; /* 0x12027F26: jb 0x12027f2f */
L_12027F28:
    eax = 0x8876086Cu; /* 0x12027F28: mov eax, 0x8876086c */
    goto L_12027F65; /* 0x12027F2D: jmp 0x12027f65 */
L_12027F2F:
    eax = MEM32(esi + 0x54); /* 0x12027F2F: mov eax, dword ptr [esi + 0x54] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12027F32: fld dword ptr [ebp + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58u); /* 0x12027F35: imul edx, edx, 0x58 */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + edx + 0x4) = _v; } /* 0x12027F38: fstp dword ptr [eax + edx + 4] */
    ecx = MEM32(esi + 0x54); /* 0x12027F3C: mov ecx, dword ptr [esi + 0x54] */
    /* cmp MEM32(ecx + edx + 0x38), 0 */ /* 0x12027F3F: cmp dword ptr [ecx + edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027F63; /* 0x12027F44: je 0x12027f63 */
L_12027F46:
    ecx = MEM32(ecx + edx + 0x38); /* 0x12027F46: mov ecx, dword ptr [ecx + edx + 0x38] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12027F4A: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12027F4D: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x12027F52: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x12027F55: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esi + 0x54); /* 0x12027F58: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x3C) = ecx; /* 0x12027F5B: mov dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(eax + edx + 0x38) = MEM32(eax + edx + 0x38) & 0; /* 0x12027F5E: and dword ptr [eax + edx + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12027F63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12027F63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12027F65:
    esi = POP32_VAL(esp); /* 0x12027F65: pop esi */
    ebp = POP32_VAL(esp); /* 0x12027F66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12027F67: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12027F6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12027F6Fu);

L_12027F6F:
    edi = edi; /* 0x12027F6F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12027F71: push ebp */
    ebp = esp; /* 0x12027F72: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12027F74: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12027F77: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12027F78: mov esi, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(esi + 0x50) */ /* 0x12027F7B: cmp edx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12027F87; /* 0x12027F7E: jb 0x12027f87 */
L_12027F80:
    eax = 0x8876086Cu; /* 0x12027F80: mov eax, 0x8876086c */
    goto L_12027FC8; /* 0x12027F85: jmp 0x12027fc8 */
L_12027F87:
    eax = MEM32(esi + 0x54); /* 0x12027F87: mov eax, dword ptr [esi + 0x54] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x12027F8A: fld qword ptr [ebp + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58u); /* 0x12027F8D: imul edx, edx, 0x58 */
    { double _v = fp_pop(); *(double*)ADDR(eax + edx + 0x10) = _v; } /* 0x12027F90: fstp qword ptr [eax + edx + 0x10] */
    eax = MEM32(esi + 0x54); /* 0x12027F94: mov eax, dword ptr [esi + 0x54] */
    MEM32(eax + edx + 0x54) = 1; /* 0x12027F97: mov dword ptr [eax + edx + 0x54], 1 */
    ecx = MEM32(esi + 0x54); /* 0x12027F9F: mov ecx, dword ptr [esi + 0x54] */
    /* cmp MEM32(ecx + edx + 0x3C), 0 */ /* 0x12027FA2: cmp dword ptr [ecx + edx + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + edx + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12027FC6; /* 0x12027FA7: je 0x12027fc6 */
L_12027FA9:
    ecx = MEM32(ecx + edx + 0x3C); /* 0x12027FA9: mov ecx, dword ptr [ecx + edx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12027FAD: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12027FB0: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x12027FB5: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x12027FB8: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esi + 0x54); /* 0x12027FBB: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x3C) = ecx; /* 0x12027FBE: mov dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(eax + edx + 0x3C) = MEM32(eax + edx + 0x3C) & 0; /* 0x12027FC1: and dword ptr [eax + edx + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12027FC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12027FC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12027FC8:
    esi = POP32_VAL(esp); /* 0x12027FC8: pop esi */
    ebp = POP32_VAL(esp); /* 0x12027FC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12027FCA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12027FD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12027FD2u);

L_12027FD2:
    edi = edi; /* 0x12027FD2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12027FD4: push ebp */
    ebp = esp; /* 0x12027FD5: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12027FD7: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12027FDA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12027FDB: mov esi, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(esi + 0x50) */ /* 0x12027FDE: cmp edx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12027FEA; /* 0x12027FE1: jb 0x12027fea */
L_12027FE3:
    eax = 0x8876086Cu; /* 0x12027FE3: mov eax, 0x8876086c */
    goto L_1202802B; /* 0x12027FE8: jmp 0x1202802b */
L_12027FEA:
    ecx = MEM32(esi + 0x54); /* 0x12027FEA: mov ecx, dword ptr [esi + 0x54] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58u); /* 0x12027FED: imul edx, edx, 0x58 */
    eax = MEM32(ebp + 0x10); /* 0x12027FF0: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + edx + 0x18) = eax; /* 0x12027FF3: mov dword ptr [ecx + edx + 0x18], eax */
    eax = MEM32(esi + 0x54); /* 0x12027FF7: mov eax, dword ptr [esi + 0x54] */
    MEM32(eax + edx + 0x54) = 1; /* 0x12027FFA: mov dword ptr [eax + edx + 0x54], 1 */
    ecx = MEM32(esi + 0x54); /* 0x12028002: mov ecx, dword ptr [esi + 0x54] */
    /* cmp MEM32(ecx + edx + 0x40), 0 */ /* 0x12028005: cmp dword ptr [ecx + edx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + edx + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12028029; /* 0x1202800A: je 0x12028029 */
L_1202800C:
    ecx = MEM32(ecx + edx + 0x40); /* 0x1202800C: mov ecx, dword ptr [ecx + edx + 0x40] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12028010: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12028013: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x12028018: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x1202801B: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esi + 0x54); /* 0x1202801E: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x3C) = ecx; /* 0x12028021: mov dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(eax + edx + 0x40) = MEM32(eax + edx + 0x40) & 0; /* 0x12028024: and dword ptr [eax + edx + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028029:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028029: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202802B:
    esi = POP32_VAL(esp); /* 0x1202802B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202802C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202802D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12028035(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028035u);

L_12028035:
    edi = edi; /* 0x12028035: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028037: push ebp */
    ebp = esp; /* 0x12028038: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1202803A: push ebx */
    PUSH32(esp, esi); /* 0x1202803B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1202803C: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1202803F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202809C; /* 0x12028041: je 0x1202809c */
L_12028043:
    ebx = MEM32(ebp + 0xC); /* 0x12028043: mov ebx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x12028046: mov edx, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(edx + 0x50) */ /* 0x12028049: cmp ebx, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202809C; /* 0x1202804C: jae 0x1202809c */
L_1202804E:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58u); /* 0x1202804E: imul ebx, ebx, 0x58 */
    PUSH32(esp, edi); /* 0x12028051: push edi */
    edi = MEM32(edx + 0x54); /* 0x12028052: mov edi, dword ptr [edx + 0x54] */
    PUSH32(esp, 8); /* 0x12028055: push 8 */
    ecx = POP32_VAL(esp); /* 0x12028057: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x12028058: add edi, ebx */
    _flag_k = FK_ADD;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1202805A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(edx + 0x54); /* 0x1202805C: mov eax, dword ptr [edx + 0x54] */
    PUSH32(esp, 4); /* 0x1202805F: push 4 */
    MEM32(eax + ebx + 0x54) = 1; /* 0x12028061: mov dword ptr [eax + ebx + 0x54], 1 */
    esi = ebx + 0x34; /* 0x12028069: lea esi, [ebx + 0x34] */
    edi = POP32_VAL(esp); /* 0x1202806C: pop edi */
L_1202806D:
    ecx = MEM32(edx + 0x54); /* 0x1202806D: mov ecx, dword ptr [edx + 0x54] */
    /* cmp MEM32(ecx + esi), 0 */ /* 0x12028070: cmp dword ptr [ecx + esi], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12028091; /* 0x12028074: je 0x12028091 */
L_12028076:
    ecx = MEM32(ecx + esi); /* 0x12028076: mov ecx, dword ptr [ecx + esi] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12028079: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x1202807C: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edx + 0x3C); /* 0x12028081: mov eax, dword ptr [edx + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x12028084: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(edx + 0x54); /* 0x12028087: mov eax, dword ptr [edx + 0x54] */
    MEM32(edx + 0x3C) = ecx; /* 0x1202808A: mov dword ptr [edx + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + eax)); _flag_b = (uint32_t)(0);
    MEM32(esi + eax) = MEM32(esi + eax) & 0; /* 0x1202808D: and dword ptr [esi + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028091:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x12028091: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12028094: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202806D; /* 0x12028095: jne 0x1202806d */
L_12028097:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028097: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12028099: pop edi */
    goto L_120280A1; /* 0x1202809A: jmp 0x120280a1 */
L_1202809C:
    eax = 0x8876086Cu; /* 0x1202809C: mov eax, 0x8876086c */
L_120280A1:
    esi = POP32_VAL(esp); /* 0x120280A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x120280A2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120280A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120280A4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120280AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120280ACu);

L_120280AC:
    edi = edi; /* 0x120280AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120280AE: push ebp */
    ebp = esp; /* 0x120280AF: mov ebp, esp */
    fp_push(1.0); /* 0x120280B1: fld1  */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120280B3: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120280B6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120280B8: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120280BA: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x120280BC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120280F2; /* 0x120280BF: je 0x120280f2 */
L_120280C1:
    fp_push(0.0); /* 0x120280C1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120280C3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120280C5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120280C7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120280F2; /* 0x120280CA: je 0x120280f2 */
L_120280CC:
    ecx = MEM32(ebp + 0x8); /* 0x120280CC: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x48); /* 0x120280CF: mov edx, dword ptr [ecx + 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x40) = _v; } /* 0x120280D2: fstp dword ptr [ecx + 0x40] */
    /* test edx, edx */ /* 0x120280D5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120280EE; /* 0x120280D7: je 0x120280ee */
L_120280D9:
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x120280D9: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x120280DC: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ecx + 0x3C); /* 0x120280E1: mov eax, dword ptr [ecx + 0x3c] */
    MEM32(edx + 0x30) = eax; /* 0x120280E4: mov dword ptr [edx + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x48) = MEM32(ecx + 0x48) & 0; /* 0x120280E7: and dword ptr [ecx + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x3C) = edx; /* 0x120280EB: mov dword ptr [ecx + 0x3c], edx */
L_120280EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120280EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120280F9; /* 0x120280F0: jmp 0x120280f9 */
L_120280F2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120280F2: fstp st(0) */
    eax = 0x8876086Cu; /* 0x120280F4: mov eax, 0x8876086c */
L_120280F9:
    ebp = POP32_VAL(esp); /* 0x120280F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120280FA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12028102(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028102u);

L_12028102:
    edi = edi; /* 0x12028102: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028104: push ebp */
    ebp = esp; /* 0x12028105: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x12028107: fld qword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x1202810A: fcom qword ptr [0x12001a48] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12028110: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12028112: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12028120; /* 0x12028115: jp 0x12028120 */
L_12028117:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12028117: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028119: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12028254; /* 0x1202811B: jmp 0x12028254 */
L_12028120:
    PUSH32(esp, esi); /* 0x12028120: push esi */
    PUSH32(esp, edi); /* 0x12028121: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12028122: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x3C); /* 0x12028125: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x12028128: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202824E; /* 0x1202812A: je 0x1202824e */
L_12028130:
    eax = MEM32(esi + 0x30); /* 0x12028130: mov eax, dword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x12028133: fld qword ptr [ebp + 0x10] */
    MEM32(edi + 0x3C) = eax; /* 0x12028136: mov dword ptr [edi + 0x3c], eax */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x12028139: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202813D: push ebx */
    ebx = esi + 0x8; /* 0x1202813E: lea ebx, [esi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x12028141: fstp qword ptr [ebx] */
    eax = esi + 0x10; /* 0x12028143: lea eax, [esi + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x12028146: mov dword ptr [ebp + 8], eax */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x12028149: fstp qword ptr [eax] */
    eax = MEM32(ebp + 0x20); /* 0x1202814B: mov eax, dword ptr [ebp + 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1202814E: fld dword ptr [ebp + 0xc] */
    MEM32(esi + 0x18) = eax; /* 0x12028151: mov dword ptr [esi + 0x18], eax */
    PUSH32(esp, 0x38u); /* 0x12028154: push 0x38 */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x12028156: fstp dword ptr [esi + 0x20] */
    ecx = POP32_VAL(esp); /* 0x12028159: pop ecx */
    MEM32(esi) = 4; /* 0x1202815A: mov dword ptr [esi], 4 */
    eax = esi; /* 0x12028160: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x38); /* 0x12028162: sub eax, dword ptr [edi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12028165: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12028167: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x2C); /* 0x12028169: mov ecx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1202816C: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1202816C: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x1202816F: lea eax, [eax + ecx + 1] */
    MEM32(ebp + 0x20) = eax; /* 0x12028173: mov dword ptr [ebp + 0x20], eax */
    eax = edi + 0x44; /* 0x12028176: lea eax, [edi + 0x44] */
    PUSH32(esp, eax); /* 0x12028179: push eax */
    PUSH32(esp, esi); /* 0x1202817A: push esi */
    ecx = edi; /* 0x1202817B: mov ecx, edi */
    RECOMP_CALL(sub_12026105); /* 0x1202817D: call 0x12026105 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x48); /* 0x12028182: mov ecx, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12028185: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x12028187: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120281AD; /* 0x12028189: je 0x120281ad */
L_1202818B:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x1202818B: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x1202818E: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx)); /* 0x12028191: fcomp qword ptr [ebx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12028193: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12028195: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120281AD; /* 0x12028198: jne 0x120281ad */
L_1202819A:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x1202819A: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & LO16(edx)); /* 0x1202819D: and word ptr [ecx + 0x2e], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x120281A1: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x120281A4: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x120281A7: mov dword ptr [edi + 0x3c], ecx */
    MEM32(edi + 0x48) = edx; /* 0x120281AA: mov dword ptr [edi + 0x48], edx */
L_120281AD:
    ecx = MEM32(edi + 0x44); /* 0x120281AD: mov ecx, dword ptr [edi + 0x44] */
    goto L_120281D7; /* 0x120281B0: jmp 0x120281d7 */
L_120281B2:
    fp_push(*(double*)ADDR(ebx)); /* 0x120281B2: fld qword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x120281B4: fcomp qword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120281B7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120281B9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120281FD; /* 0x120281BC: jnp 0x120281fd */
L_120281BE:
    /* cmp MEM32(ecx), 4 */ /* 0x120281BE: cmp dword ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120281D2; /* 0x120281C1: jne 0x120281d2 */
L_120281C3:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x120281C3: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x120281C6: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx)); /* 0x120281C9: fcomp qword ptr [ebx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120281CB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120281CD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120281DD; /* 0x120281D0: je 0x120281dd */
L_120281D2:
    edx = ecx; /* 0x120281D2: mov edx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x120281D4: mov ecx, dword ptr [ecx + 0x30] */
L_120281D7:
    /* cmp ecx, esi */ /* 0x120281D7: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120281B2; /* 0x120281D9: jne 0x120281b2 */
L_120281DB:
    goto L_120281FD; /* 0x120281DB: jmp 0x120281fd */
L_120281DD:
    eax = MEM32(ecx + 0x30); /* 0x120281DD: mov eax, dword ptr [ecx + 0x30] */
    /* test edx, edx */ /* 0x120281E0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120281E9; /* 0x120281E2: jne 0x120281e9 */
L_120281E4:
    MEM32(edi + 0x44) = eax; /* 0x120281E4: mov dword ptr [edi + 0x44], eax */
    goto L_120281EC; /* 0x120281E7: jmp 0x120281ec */
L_120281E9:
    MEM32(edx + 0x30) = eax; /* 0x120281E9: mov dword ptr [edx + 0x30], eax */
L_120281EC:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x120281EC: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x120281EF: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x120281F4: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x120281F7: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x120281FA: mov dword ptr [edi + 0x3c], ecx */
L_120281FD:
    edx = MEM32(esi + 0x30); /* 0x120281FD: mov edx, dword ptr [esi + 0x30] */
    /* test edx, edx */ /* 0x12028200: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028248; /* 0x12028202: je 0x12028248 */
L_12028204:
    ecx = MEM32(ebp + 0x8); /* 0x12028204: mov ecx, dword ptr [ebp + 8] */
L_12028207:
    fp_push(*(double*)ADDR(ebx)); /* 0x12028207: fld qword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x12028209: fcomp qword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202820C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202820E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12028248; /* 0x12028211: jnp 0x12028248 */
L_12028213:
    /* cmp MEM32(edx), 4 */ /* 0x12028213: cmp dword ptr [edx], 4 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028226; /* 0x12028216: jne 0x12028226 */
L_12028218:
    fp_push(*(double*)ADDR(ecx)); /* 0x12028218: fld qword ptr [ecx] */
    _st[0] += *(double*)ADDR(ebx); /* 0x1202821A: fadd qword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x1202821C: fcomp qword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202821F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12028221: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028231; /* 0x12028224: je 0x12028231 */
L_12028226:
    esi = edx; /* 0x12028226: mov esi, edx */
    edx = MEM32(edx + 0x30); /* 0x12028228: mov edx, dword ptr [edx + 0x30] */
    /* test edx, edx */ /* 0x1202822B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028207; /* 0x1202822D: jne 0x12028207 */
L_1202822F:
    goto L_12028248; /* 0x1202822F: jmp 0x12028248 */
L_12028231:
    eax = MEM32(edx + 0x30); /* 0x12028231: mov eax, dword ptr [edx + 0x30] */
    MEM32(esi + 0x30) = eax; /* 0x12028234: mov dword ptr [esi + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x12028237: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x1202823A: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(edi + 0x3C); /* 0x1202823F: mov ecx, dword ptr [edi + 0x3c] */
    MEM32(edx + 0x30) = ecx; /* 0x12028242: mov dword ptr [edx + 0x30], ecx */
    MEM32(edi + 0x3C) = edx; /* 0x12028245: mov dword ptr [edi + 0x3c], edx */
L_12028248:
    eax = MEM32(ebp + 0x20); /* 0x12028248: mov eax, dword ptr [ebp + 0x20] */
    ebx = POP32_VAL(esp); /* 0x1202824B: pop ebx */
    goto L_12028252; /* 0x1202824C: jmp 0x12028252 */
L_1202824E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202824E: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028250: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028252:
    edi = POP32_VAL(esp); /* 0x12028252: pop edi */
    esi = POP32_VAL(esp); /* 0x12028253: pop esi */
L_12028254:
    ebp = POP32_VAL(esp); /* 0x12028254: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12028255: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1202825D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202825Du);

L_1202825D:
    edi = edi; /* 0x1202825D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202825F: push ebp */
    ebp = esp; /* 0x12028260: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12028262: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12028263: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12028266: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12028267: mov esi, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(esi + 0x50) */ /* 0x1202826A: cmp ebx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12028276; /* 0x1202826D: jb 0x12028276 */
L_1202826F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202826F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120283CF; /* 0x12028271: jmp 0x120283cf */
L_12028276:
    PUSH32(esp, edi); /* 0x12028276: push edi */
    edi = MEM32(esi + 0x3C); /* 0x12028277: mov edi, dword ptr [esi + 0x3c] */
    /* test edi, edi */ /* 0x1202827A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120283CC; /* 0x1202827C: je 0x120283cc */
L_12028282:
    eax = MEM32(edi + 0x30); /* 0x12028282: mov eax, dword ptr [edi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x12028285: fld qword ptr [ebp + 0x14] */
    MEM32(esi + 0x3C) = eax; /* 0x12028288: mov dword ptr [esi + 0x3c], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1202828B: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x8; /* 0x1202828E: lea eax, [edi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x12028291: fstp qword ptr [eax] */
    MEM32(ebp + 0xC) = eax; /* 0x12028293: mov dword ptr [ebp + 0xc], eax */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x12028296: fld qword ptr [ebp + 0x1c] */
    eax = edi + 0x10; /* 0x12028299: lea eax, [edi + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1202829C: fstp qword ptr [eax] */
    MEM32(ebp + 0x18) = eax; /* 0x1202829E: mov dword ptr [ebp + 0x18], eax */
    eax = MEM32(ebp + 0x24); /* 0x120282A1: mov eax, dword ptr [ebp + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120282A4: fld dword ptr [ebp + 0x10] */
    MEM32(edi + 0x18) = eax; /* 0x120282A7: mov dword ptr [edi + 0x18], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x20) = _v; } /* 0x120282AA: fstp dword ptr [edi + 0x20] */
    MEM32(edi + 0x4) = ebx; /* 0x120282AD: mov dword ptr [edi + 4], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58u); /* 0x120282B0: imul ebx, ebx, 0x58 */
    PUSH32(esp, 0x38u); /* 0x120282B3: push 0x38 */
    ecx = POP32_VAL(esp); /* 0x120282B5: pop ecx */
    eax = edi; /* 0x120282B6: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x38); /* 0x120282B8: sub eax, dword ptr [esi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120282BB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120282BD: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(edi + 0x2C); /* 0x120282BF: mov ecx, dword ptr [edi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x120282C2: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x120282C2: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x120282C5: lea eax, [eax + ecx + 1] */
    MEM32(ebp + 0x24) = eax; /* 0x120282C9: mov dword ptr [ebp + 0x24], eax */
    eax = MEM32(esi + 0x54); /* 0x120282CC: mov eax, dword ptr [esi + 0x54] */
    eax = eax + ebx + 0x30; /* 0x120282CF: lea eax, [eax + ebx + 0x30] */
    PUSH32(esp, eax); /* 0x120282D3: push eax */
    PUSH32(esp, edi); /* 0x120282D4: push edi */
    ecx = esi; /* 0x120282D5: mov ecx, esi */
    RECOMP_CALL(sub_12026105); /* 0x120282D7: call 0x12026105 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x54); /* 0x120282DC: mov ecx, dword ptr [esi + 0x54] */
    /* cmp MEM32(ecx + ebx + 0x34), 0 */ /* 0x120282DF: cmp dword ptr [ecx + ebx + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + ebx + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12028319; /* 0x120282E4: je 0x12028319 */
L_120282E6:
    eax = MEM32(ecx + ebx + 0x34); /* 0x120282E6: mov eax, dword ptr [ecx + ebx + 0x34] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x120282EA: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x120282ED: fadd qword ptr [eax + 8] */
    eax = MEM32(ebp + 0xC); /* 0x120282F0: mov eax, dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax)); /* 0x120282F3: fcomp qword ptr [eax] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120282F5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120282F7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028319; /* 0x120282FA: jne 0x12028319 */
L_120282FC:
    ecx = MEM32(ecx + ebx + 0x34); /* 0x120282FC: mov ecx, dword ptr [ecx + ebx + 0x34] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12028300: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12028303: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x12028308: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x1202830B: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esi + 0x54); /* 0x1202830E: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x3C) = ecx; /* 0x12028311: mov dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + ebx + 0x34)); _flag_b = (uint32_t)(0);
    MEM32(eax + ebx + 0x34) = MEM32(eax + ebx + 0x34) & 0; /* 0x12028314: and dword ptr [eax + ebx + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028319:
    eax = MEM32(esi + 0x54); /* 0x12028319: mov eax, dword ptr [esi + 0x54] */
    ecx = MEM32(eax + ebx + 0x30); /* 0x1202831C: mov ecx, dword ptr [eax + ebx + 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12028320: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202834F; /* 0x12028322: jmp 0x1202834f */
L_12028324:
    eax = MEM32(ebp + 0xC); /* 0x12028324: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(eax)); /* 0x12028327: fld qword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x12028329: fcomp qword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202832C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202832E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12028379; /* 0x12028331: jnp 0x12028379 */
L_12028333:
    /* cmp MEM32(ecx), 0 */ /* 0x12028333: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202834A; /* 0x12028336: jne 0x1202834a */
L_12028338:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12028338: fld qword ptr [ecx + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x1202833B: mov eax, dword ptr [ebp + 0xc] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x1202833E: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax)); /* 0x12028341: fcomp qword ptr [eax] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12028343: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12028345: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028355; /* 0x12028348: je 0x12028355 */
L_1202834A:
    edx = ecx; /* 0x1202834A: mov edx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x1202834C: mov ecx, dword ptr [ecx + 0x30] */
L_1202834F:
    /* cmp ecx, edi */ /* 0x1202834F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028324; /* 0x12028351: jne 0x12028324 */
L_12028353:
    goto L_12028379; /* 0x12028353: jmp 0x12028379 */
L_12028355:
    eax = MEM32(ecx + 0x30); /* 0x12028355: mov eax, dword ptr [ecx + 0x30] */
    /* test edx, edx */ /* 0x12028358: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028365; /* 0x1202835A: jne 0x12028365 */
L_1202835C:
    edx = MEM32(esi + 0x54); /* 0x1202835C: mov edx, dword ptr [esi + 0x54] */
    MEM32(edx + ebx + 0x30) = eax; /* 0x1202835F: mov dword ptr [edx + ebx + 0x30], eax */
    goto L_12028368; /* 0x12028363: jmp 0x12028368 */
L_12028365:
    MEM32(edx + 0x30) = eax; /* 0x12028365: mov dword ptr [edx + 0x30], eax */
L_12028368:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12028368: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x1202836B: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x12028370: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x12028373: mov dword ptr [ecx + 0x30], eax */
    MEM32(esi + 0x3C) = ecx; /* 0x12028376: mov dword ptr [esi + 0x3c], ecx */
L_12028379:
    edx = MEM32(edi + 0x30); /* 0x12028379: mov edx, dword ptr [edi + 0x30] */
    /* test edx, edx */ /* 0x1202837C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120283C7; /* 0x1202837E: je 0x120283c7 */
L_12028380:
    ecx = MEM32(ebp + 0xC); /* 0x12028380: mov ecx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x18); /* 0x12028383: mov ebx, dword ptr [ebp + 0x18] */
L_12028386:
    fp_push(*(double*)ADDR(ecx)); /* 0x12028386: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x12028388: fcomp qword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202838B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202838D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120283C7; /* 0x12028390: jnp 0x120283c7 */
L_12028392:
    /* cmp MEM32(edx), 0 */ /* 0x12028392: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120283A5; /* 0x12028395: jne 0x120283a5 */
L_12028397:
    fp_push(*(double*)ADDR(ebx)); /* 0x12028397: fld qword ptr [ebx] */
    _st[0] += *(double*)ADDR(ecx); /* 0x12028399: fadd qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x1202839B: fcomp qword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202839E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120283A0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120283B0; /* 0x120283A3: je 0x120283b0 */
L_120283A5:
    edi = edx; /* 0x120283A5: mov edi, edx */
    edx = MEM32(edx + 0x30); /* 0x120283A7: mov edx, dword ptr [edx + 0x30] */
    /* test edx, edx */ /* 0x120283AA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028386; /* 0x120283AC: jne 0x12028386 */
L_120283AE:
    goto L_120283C7; /* 0x120283AE: jmp 0x120283c7 */
L_120283B0:
    eax = MEM32(edx + 0x30); /* 0x120283B0: mov eax, dword ptr [edx + 0x30] */
    MEM32(edi + 0x30) = eax; /* 0x120283B3: mov dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x120283B6: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x120283B9: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x3C); /* 0x120283BE: mov ecx, dword ptr [esi + 0x3c] */
    MEM32(edx + 0x30) = ecx; /* 0x120283C1: mov dword ptr [edx + 0x30], ecx */
    MEM32(esi + 0x3C) = edx; /* 0x120283C4: mov dword ptr [esi + 0x3c], edx */
L_120283C7:
    eax = MEM32(ebp + 0x24); /* 0x120283C7: mov eax, dword ptr [ebp + 0x24] */
    goto L_120283CE; /* 0x120283CA: jmp 0x120283ce */
L_120283CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120283CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120283CE:
    edi = POP32_VAL(esp); /* 0x120283CE: pop edi */
L_120283CF:
    esi = POP32_VAL(esp); /* 0x120283CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x120283D0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120283D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120283D2: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120283DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120283DAu);

L_120283DA:
    edi = edi; /* 0x120283DA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120283DC: push ebp */
    ebp = esp; /* 0x120283DD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120283DF: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120283E0: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120283E3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120283E4: mov esi, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(esi + 0x50) */ /* 0x120283E7: cmp ebx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120283F3; /* 0x120283EA: jb 0x120283f3 */
L_120283EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120283EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202854F; /* 0x120283EE: jmp 0x1202854f */
L_120283F3:
    PUSH32(esp, edi); /* 0x120283F3: push edi */
    edi = MEM32(esi + 0x3C); /* 0x120283F4: mov edi, dword ptr [esi + 0x3c] */
    /* test edi, edi */ /* 0x120283F7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202854C; /* 0x120283F9: je 0x1202854c */
L_120283FF:
    eax = MEM32(edi + 0x30); /* 0x120283FF: mov eax, dword ptr [edi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x12028402: fld qword ptr [ebp + 0x14] */
    MEM32(esi + 0x3C) = eax; /* 0x12028405: mov dword ptr [esi + 0x3c], eax */
    eax = edi + 0x8; /* 0x12028408: lea eax, [edi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1202840B: fstp qword ptr [eax] */
    MEM32(ebp + 0xC) = eax; /* 0x1202840D: mov dword ptr [ebp + 0xc], eax */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x12028410: fld qword ptr [ebp + 0x1c] */
    eax = edi + 0x10; /* 0x12028413: lea eax, [edi + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x12028416: fstp qword ptr [eax] */
    MEM32(ebp + 0x18) = eax; /* 0x12028418: mov dword ptr [ebp + 0x18], eax */
    eax = MEM32(ebp + 0x24); /* 0x1202841B: mov eax, dword ptr [ebp + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1202841E: fld dword ptr [ebp + 0x10] */
    MEM32(edi + 0x18) = eax; /* 0x12028421: mov dword ptr [edi + 0x18], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x20) = _v; } /* 0x12028424: fstp dword ptr [edi + 0x20] */
    MEM32(edi + 0x4) = ebx; /* 0x12028427: mov dword ptr [edi + 4], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58u); /* 0x1202842A: imul ebx, ebx, 0x58 */
    PUSH32(esp, 0x38u); /* 0x1202842D: push 0x38 */
    MEM32(edi) = 1; /* 0x1202842F: mov dword ptr [edi], 1 */
    ecx = POP32_VAL(esp); /* 0x12028435: pop ecx */
    eax = edi; /* 0x12028436: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x38); /* 0x12028438: sub eax, dword ptr [esi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202843B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1202843D: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(edi + 0x2C); /* 0x1202843F: mov ecx, dword ptr [edi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x12028442: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x12028442: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x12028445: lea eax, [eax + ecx + 1] */
    MEM32(ebp + 0x10) = eax; /* 0x12028449: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(esi + 0x54); /* 0x1202844C: mov eax, dword ptr [esi + 0x54] */
    eax = eax + ebx + 0x30; /* 0x1202844F: lea eax, [eax + ebx + 0x30] */
    PUSH32(esp, eax); /* 0x12028453: push eax */
    PUSH32(esp, edi); /* 0x12028454: push edi */
    ecx = esi; /* 0x12028455: mov ecx, esi */
    RECOMP_CALL(sub_12026105); /* 0x12028457: call 0x12026105 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x54); /* 0x1202845C: mov ecx, dword ptr [esi + 0x54] */
    edx = MEM32(ebp + 0xC); /* 0x1202845F: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028462: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x12028464: mov dword ptr [ebp + 8], eax */
    /* cmp MEM32(ecx + ebx + 0x38), eax */ /* 0x12028467: cmp dword ptr [ecx + ebx + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ecx + ebx + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202849D; /* 0x1202846B: je 0x1202849d */
L_1202846D:
    eax = MEM32(ecx + ebx + 0x38); /* 0x1202846D: mov eax, dword ptr [ecx + ebx + 0x38] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12028471: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x12028474: fadd qword ptr [eax + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx)); /* 0x12028477: fcomp qword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12028479: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202847B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202849D; /* 0x1202847E: jne 0x1202849d */
L_12028480:
    ecx = MEM32(ecx + ebx + 0x38); /* 0x12028480: mov ecx, dword ptr [ecx + ebx + 0x38] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12028484: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12028487: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x1202848C: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x1202848F: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esi + 0x54); /* 0x12028492: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x3C) = ecx; /* 0x12028495: mov dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + ebx + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(eax + ebx + 0x38) = MEM32(eax + ebx + 0x38) & 0; /* 0x12028498: and dword ptr [eax + ebx + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202849D:
    eax = MEM32(esi + 0x54); /* 0x1202849D: mov eax, dword ptr [esi + 0x54] */
    ecx = MEM32(eax + ebx + 0x30); /* 0x120284A0: mov ecx, dword ptr [eax + ebx + 0x30] */
    goto L_120284CC; /* 0x120284A4: jmp 0x120284cc */
L_120284A6:
    fp_push(*(double*)ADDR(edx)); /* 0x120284A6: fld qword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x120284A8: fcomp qword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120284AB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120284AD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120284F9; /* 0x120284B0: jnp 0x120284f9 */
L_120284B2:
    /* cmp MEM32(ecx), 1 */ /* 0x120284B2: cmp dword ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120284C6; /* 0x120284B5: jne 0x120284c6 */
L_120284B7:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x120284B7: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x120284BA: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx)); /* 0x120284BD: fcomp qword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120284BF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120284C1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120284D2; /* 0x120284C4: je 0x120284d2 */
L_120284C6:
    MEM32(ebp + 0x8) = ecx; /* 0x120284C6: mov dword ptr [ebp + 8], ecx */
    ecx = MEM32(ecx + 0x30); /* 0x120284C9: mov ecx, dword ptr [ecx + 0x30] */
L_120284CC:
    /* cmp ecx, edi */ /* 0x120284CC: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120284A6; /* 0x120284CE: jne 0x120284a6 */
L_120284D0:
    goto L_120284F9; /* 0x120284D0: jmp 0x120284f9 */
L_120284D2:
    edx = MEM32(ebp + 0x8); /* 0x120284D2: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x30); /* 0x120284D5: mov eax, dword ptr [ecx + 0x30] */
    /* test edx, edx */ /* 0x120284D8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120284E5; /* 0x120284DA: jne 0x120284e5 */
L_120284DC:
    edx = MEM32(esi + 0x54); /* 0x120284DC: mov edx, dword ptr [esi + 0x54] */
    MEM32(edx + ebx + 0x30) = eax; /* 0x120284DF: mov dword ptr [edx + ebx + 0x30], eax */
    goto L_120284E8; /* 0x120284E3: jmp 0x120284e8 */
L_120284E5:
    MEM32(edx + 0x30) = eax; /* 0x120284E5: mov dword ptr [edx + 0x30], eax */
L_120284E8:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x120284E8: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x120284EB: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x120284F0: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x120284F3: mov dword ptr [ecx + 0x30], eax */
    MEM32(esi + 0x3C) = ecx; /* 0x120284F6: mov dword ptr [esi + 0x3c], ecx */
L_120284F9:
    edx = MEM32(edi + 0x30); /* 0x120284F9: mov edx, dword ptr [edi + 0x30] */
    /* test edx, edx */ /* 0x120284FC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028547; /* 0x120284FE: je 0x12028547 */
L_12028500:
    ecx = MEM32(ebp + 0xC); /* 0x12028500: mov ecx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x18); /* 0x12028503: mov ebx, dword ptr [ebp + 0x18] */
L_12028506:
    fp_push(*(double*)ADDR(ecx)); /* 0x12028506: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x12028508: fcomp qword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202850B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202850D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12028547; /* 0x12028510: jnp 0x12028547 */
L_12028512:
    /* cmp MEM32(edx), 1 */ /* 0x12028512: cmp dword ptr [edx], 1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028525; /* 0x12028515: jne 0x12028525 */
L_12028517:
    fp_push(*(double*)ADDR(ebx)); /* 0x12028517: fld qword ptr [ebx] */
    _st[0] += *(double*)ADDR(ecx); /* 0x12028519: fadd qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x1202851B: fcomp qword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202851E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12028520: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028530; /* 0x12028523: je 0x12028530 */
L_12028525:
    edi = edx; /* 0x12028525: mov edi, edx */
    edx = MEM32(edx + 0x30); /* 0x12028527: mov edx, dword ptr [edx + 0x30] */
    /* test edx, edx */ /* 0x1202852A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028506; /* 0x1202852C: jne 0x12028506 */
L_1202852E:
    goto L_12028547; /* 0x1202852E: jmp 0x12028547 */
L_12028530:
    eax = MEM32(edx + 0x30); /* 0x12028530: mov eax, dword ptr [edx + 0x30] */
    MEM32(edi + 0x30) = eax; /* 0x12028533: mov dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x12028536: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x12028539: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x3C); /* 0x1202853E: mov ecx, dword ptr [esi + 0x3c] */
    MEM32(edx + 0x30) = ecx; /* 0x12028541: mov dword ptr [edx + 0x30], ecx */
    MEM32(esi + 0x3C) = edx; /* 0x12028544: mov dword ptr [esi + 0x3c], edx */
L_12028547:
    eax = MEM32(ebp + 0x10); /* 0x12028547: mov eax, dword ptr [ebp + 0x10] */
    goto L_1202854E; /* 0x1202854A: jmp 0x1202854e */
L_1202854C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202854C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202854E:
    edi = POP32_VAL(esp); /* 0x1202854E: pop edi */
L_1202854F:
    esi = POP32_VAL(esp); /* 0x1202854F: pop esi */
    ebx = POP32_VAL(esp); /* 0x12028550: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12028551: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x12028552: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1202855A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202855Au);

L_1202855A:
    edi = edi; /* 0x1202855A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202855C: push ebp */
    ebp = esp; /* 0x1202855D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1202855F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12028560: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12028563: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12028564: mov edi, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(edi + 0x50) */ /* 0x12028567: cmp ebx, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12028573; /* 0x1202856A: jb 0x12028573 */
L_1202856C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202856C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12028627; /* 0x1202856E: jmp 0x12028627 */
L_12028573:
    PUSH32(esp, esi); /* 0x12028573: push esi */
    esi = MEM32(edi + 0x3C); /* 0x12028574: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x12028577: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028624; /* 0x12028579: je 0x12028624 */
L_1202857F:
    eax = MEM32(esi + 0x30); /* 0x1202857F: mov eax, dword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x12028582: fld qword ptr [ebp + 0x18] */
    MEM32(edi + 0x3C) = eax; /* 0x12028585: mov dword ptr [edi + 0x3c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x12028588: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x8; /* 0x1202858C: lea eax, [esi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1202858F: fstp qword ptr [eax] */
    MEM32(ebp + 0xC) = eax; /* 0x12028591: mov dword ptr [ebp + 0xc], eax */
    fp_push(0.0); /* 0x12028594: fldz  */
    MEM32(esi + 0x4) = ebx; /* 0x12028596: mov dword ptr [esi + 4], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58u); /* 0x12028599: imul ebx, ebx, 0x58 */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x1202859C: fstp qword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1202859F: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x120285A2: fstp qword ptr [esi + 0x20] */
    PUSH32(esp, 0x38u); /* 0x120285A5: push 0x38 */
    MEM32(esi) = 2; /* 0x120285A7: mov dword ptr [esi], 2 */
    ecx = POP32_VAL(esp); /* 0x120285AD: pop ecx */
    eax = esi; /* 0x120285AE: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x38); /* 0x120285B0: sub eax, dword ptr [edi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120285B3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120285B5: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x2C); /* 0x120285B7: mov ecx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x120285BA: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x120285BA: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x120285BD: lea eax, [eax + ecx + 1] */
    MEM32(ebp + 0x8) = eax; /* 0x120285C1: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi + 0x54); /* 0x120285C4: mov eax, dword ptr [edi + 0x54] */
    eax = ebx + eax + 0x30; /* 0x120285C7: lea eax, [ebx + eax + 0x30] */
    PUSH32(esp, eax); /* 0x120285CB: push eax */
    PUSH32(esp, esi); /* 0x120285CC: push esi */
    ecx = edi; /* 0x120285CD: mov ecx, edi */
    RECOMP_CALL(sub_12026105); /* 0x120285CF: call 0x12026105 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x30); /* 0x120285D4: mov edx, dword ptr [esi + 0x30] */
    /* test edx, edx */ /* 0x120285D7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202861F; /* 0x120285D9: je 0x1202861f */
L_120285DB:
    ecx = MEM32(ebp + 0xC); /* 0x120285DB: mov ecx, dword ptr [ebp + 0xc] */
L_120285DE:
    fp_push(*(double*)ADDR(ecx)); /* 0x120285DE: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x120285E0: fcomp qword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120285E3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120285E5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202861F; /* 0x120285E8: jnp 0x1202861f */
L_120285EA:
    /* cmp MEM32(edx), 2 */ /* 0x120285EA: cmp dword ptr [edx], 2 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120285FD; /* 0x120285ED: jne 0x120285fd */
L_120285EF:
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x120285EF: fld qword ptr [edx + 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x120285F2: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120285F4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120285F6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120285F8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12028608; /* 0x120285FB: jnp 0x12028608 */
L_120285FD:
    esi = edx; /* 0x120285FD: mov esi, edx */
    edx = MEM32(edx + 0x30); /* 0x120285FF: mov edx, dword ptr [edx + 0x30] */
    /* test edx, edx */ /* 0x12028602: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120285DE; /* 0x12028604: jne 0x120285de */
L_12028606:
    goto L_1202861F; /* 0x12028606: jmp 0x1202861f */
L_12028608:
    eax = MEM32(edx + 0x30); /* 0x12028608: mov eax, dword ptr [edx + 0x30] */
    MEM32(esi + 0x30) = eax; /* 0x1202860B: mov dword ptr [esi + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x1202860E: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x12028611: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(edi + 0x3C); /* 0x12028616: mov ecx, dword ptr [edi + 0x3c] */
    MEM32(edx + 0x30) = ecx; /* 0x12028619: mov dword ptr [edx + 0x30], ecx */
    MEM32(edi + 0x3C) = edx; /* 0x1202861C: mov dword ptr [edi + 0x3c], edx */
L_1202861F:
    eax = MEM32(ebp + 0x8); /* 0x1202861F: mov eax, dword ptr [ebp + 8] */
    goto L_12028626; /* 0x12028622: jmp 0x12028626 */
L_12028624:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028624: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028626:
    esi = POP32_VAL(esp); /* 0x12028626: pop esi */
L_12028627:
    edi = POP32_VAL(esp); /* 0x12028627: pop edi */
    ebx = POP32_VAL(esp); /* 0x12028628: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12028629: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1202862A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12028632(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028632u);

L_12028632:
    edi = edi; /* 0x12028632: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028634: push ebp */
    ebp = esp; /* 0x12028635: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12028637: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12028638: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1202863B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1202863C: mov edi, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(edi + 0x50) */ /* 0x1202863F: cmp ebx, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202864B; /* 0x12028642: jb 0x1202864b */
L_12028644:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028644: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120286FF; /* 0x12028646: jmp 0x120286ff */
L_1202864B:
    PUSH32(esp, esi); /* 0x1202864B: push esi */
    esi = MEM32(edi + 0x3C); /* 0x1202864C: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x1202864F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120286FC; /* 0x12028651: je 0x120286fc */
L_12028657:
    eax = MEM32(esi + 0x30); /* 0x12028657: mov eax, dword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x1202865A: fld qword ptr [ebp + 0x14] */
    MEM32(edi + 0x3C) = eax; /* 0x1202865D: mov dword ptr [edi + 0x3c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x12028660: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x8; /* 0x12028664: lea eax, [esi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x12028667: fstp qword ptr [eax] */
    MEM32(ebp + 0xC) = eax; /* 0x12028669: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x1202866C: mov eax, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x1202866F: fldz  */
    MEM32(esi + 0x20) = eax; /* 0x12028671: mov dword ptr [esi + 0x20], eax */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x12028674: fstp qword ptr [esi + 0x10] */
    MEM32(esi + 0x4) = ebx; /* 0x12028677: mov dword ptr [esi + 4], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58u); /* 0x1202867A: imul ebx, ebx, 0x58 */
    PUSH32(esp, 0x38u); /* 0x1202867D: push 0x38 */
    MEM32(esi) = 3; /* 0x1202867F: mov dword ptr [esi], 3 */
    ecx = POP32_VAL(esp); /* 0x12028685: pop ecx */
    eax = esi; /* 0x12028686: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x38); /* 0x12028688: sub eax, dword ptr [edi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202868B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1202868D: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x2C); /* 0x1202868F: mov ecx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x12028692: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x12028692: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x12028695: lea eax, [eax + ecx + 1] */
    MEM32(ebp + 0x8) = eax; /* 0x12028699: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi + 0x54); /* 0x1202869C: mov eax, dword ptr [edi + 0x54] */
    eax = ebx + eax + 0x30; /* 0x1202869F: lea eax, [ebx + eax + 0x30] */
    PUSH32(esp, eax); /* 0x120286A3: push eax */
    PUSH32(esp, esi); /* 0x120286A4: push esi */
    ecx = edi; /* 0x120286A5: mov ecx, edi */
    RECOMP_CALL(sub_12026105); /* 0x120286A7: call 0x12026105 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x30); /* 0x120286AC: mov edx, dword ptr [esi + 0x30] */
    /* test edx, edx */ /* 0x120286AF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120286F7; /* 0x120286B1: je 0x120286f7 */
L_120286B3:
    ecx = MEM32(ebp + 0xC); /* 0x120286B3: mov ecx, dword ptr [ebp + 0xc] */
L_120286B6:
    fp_push(*(double*)ADDR(ecx)); /* 0x120286B6: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x8)); /* 0x120286B8: fcomp qword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120286BB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120286BD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120286F7; /* 0x120286C0: jnp 0x120286f7 */
L_120286C2:
    /* cmp MEM32(edx), 3 */ /* 0x120286C2: cmp dword ptr [edx], 3 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120286D5; /* 0x120286C5: jne 0x120286d5 */
L_120286C7:
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x120286C7: fld qword ptr [edx + 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x120286CA: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120286CC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120286CE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120286D0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120286E0; /* 0x120286D3: jnp 0x120286e0 */
L_120286D5:
    esi = edx; /* 0x120286D5: mov esi, edx */
    edx = MEM32(edx + 0x30); /* 0x120286D7: mov edx, dword ptr [edx + 0x30] */
    /* test edx, edx */ /* 0x120286DA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120286B6; /* 0x120286DC: jne 0x120286b6 */
L_120286DE:
    goto L_120286F7; /* 0x120286DE: jmp 0x120286f7 */
L_120286E0:
    eax = MEM32(edx + 0x30); /* 0x120286E0: mov eax, dword ptr [edx + 0x30] */
    MEM32(esi + 0x30) = eax; /* 0x120286E3: mov dword ptr [esi + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x120286E6: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x120286E9: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(edi + 0x3C); /* 0x120286EE: mov ecx, dword ptr [edi + 0x3c] */
    MEM32(edx + 0x30) = ecx; /* 0x120286F1: mov dword ptr [edx + 0x30], ecx */
    MEM32(edi + 0x3C) = edx; /* 0x120286F4: mov dword ptr [edi + 0x3c], edx */
L_120286F7:
    eax = MEM32(ebp + 0x8); /* 0x120286F7: mov eax, dword ptr [ebp + 8] */
    goto L_120286FE; /* 0x120286FA: jmp 0x120286fe */
L_120286FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120286FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120286FE:
    esi = POP32_VAL(esp); /* 0x120286FE: pop esi */
L_120286FF:
    edi = POP32_VAL(esp); /* 0x120286FF: pop edi */
    ebx = POP32_VAL(esp); /* 0x12028700: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12028701: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12028702: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1202870A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202870Au);

L_1202870A:
    edi = edi; /* 0x1202870A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202870C: push ebp */
    ebp = esp; /* 0x1202870D: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1202870F: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12028712: push ebx */
    eax = ecx; /* 0x12028713: mov eax, ecx */
    PUSH32(esp, esi); /* 0x12028715: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x12028716: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202871B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1202871D: push edi */
    /* cmp eax, 1 */ /* 0x1202871E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12028771; /* 0x12028721: jbe 0x12028771 */
L_12028723:
    edi = MEM32(ebp + 0x8); /* 0x12028723: mov edi, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edi + 0x34) */ /* 0x12028726: cmp eax, dword ptr [edi + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12028771; /* 0x12028729: ja 0x12028771 */
L_1202872B:
    edx = MEM32(edi + 0x38); /* 0x1202872B: mov edx, dword ptr [edi + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x1202872E: imul eax, eax, 0x38 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x12028731: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x12028731: shr ecx, 0x10 */
    /* cmp ecx, MEM32(eax + edx + (-0xC)) */ /* 0x12028734: cmp ecx, dword ptr [eax + edx - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + edx + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028771; /* 0x12028738: jne 0x12028771 */
L_1202873A:
    ecx = eax + edx + (-0x38); /* 0x1202873A: lea ecx, [eax + edx - 0x38] */
    /* cmp MEM32(ecx), 4 */ /* 0x1202873E: cmp dword ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202877F; /* 0x12028741: jne 0x1202877f */
L_12028743:
    /* cmp MEM32(edi + 0x48), ecx */ /* 0x12028743: cmp dword ptr [edi + 0x48], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202874D; /* 0x12028746: jne 0x1202874d */
L_12028748:
    MEM32(edi + 0x48) = esi; /* 0x12028748: mov dword ptr [edi + 0x48], esi */
    goto L_120287CB; /* 0x1202874B: jmp 0x120287cb */
L_1202874D:
    edx = MEM32(edi + 0x44); /* 0x1202874D: mov edx, dword ptr [edi + 0x44] */
    /* cmp ecx, edx */ /* 0x12028750: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202875C; /* 0x12028752: jne 0x1202875c */
L_12028754:
    eax = MEM32(ecx + 0x30); /* 0x12028754: mov eax, dword ptr [ecx + 0x30] */
    MEM32(edi + 0x44) = eax; /* 0x12028757: mov dword ptr [edi + 0x44], eax */
    goto L_120287CB; /* 0x1202875A: jmp 0x120287cb */
L_1202875C:
    /* test edx, edx */ /* 0x1202875C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028771; /* 0x1202875E: je 0x12028771 */
L_12028760:
    eax = MEM32(edx + 0x30); /* 0x12028760: mov eax, dword ptr [edx + 0x30] */
    /* cmp ecx, eax */ /* 0x12028763: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202876D; /* 0x12028765: je 0x1202876d */
L_12028767:
    edx = eax; /* 0x12028767: mov edx, eax */
    /* test edx, edx */ /* 0x12028769: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028760; /* 0x1202876B: jne 0x12028760 */
L_1202876D:
    /* test edx, edx */ /* 0x1202876D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120287C5; /* 0x1202876F: jne 0x120287c5 */
L_12028771:
    esi = 0x8876086Cu; /* 0x12028771: mov esi, 0x8876086c */
L_12028776:
    edi = POP32_VAL(esp); /* 0x12028776: pop edi */
    eax = esi; /* 0x12028777: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12028779: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202877A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1202877B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202877C: ret 8 */
L_1202877F:
    eax = MEM32(ecx + 0x4); /* 0x1202877F: mov eax, dword ptr [ecx + 4] */
    ebx = MEM32(edi + 0x54); /* 0x12028782: mov ebx, dword ptr [edi + 0x54] */
    edx = eax; /* 0x12028785: mov edx, eax */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16u); /* 0x12028787: imul edx, edx, 0x16 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx); /* 0x1202878A: add edx, dword ptr [ecx] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + edx * 4 + 0x34), ecx */ /* 0x1202878C: cmp dword ptr [ebx + edx*4 + 0x34], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + edx * 4 + 0x34)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028798; /* 0x12028790: jne 0x12028798 */
L_12028792:
    MEM32(ebx + edx * 4 + 0x34) = esi; /* 0x12028792: mov dword ptr [ebx + edx*4 + 0x34], esi */
    goto L_120287CB; /* 0x12028796: jmp 0x120287cb */
L_12028798:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x12028798: imul eax, eax, 0x58 */
    edx = MEM32(eax + ebx + 0x30); /* 0x1202879B: mov edx, dword ptr [eax + ebx + 0x30] */
    MEM32(ebp + 0xC) = eax; /* 0x1202879F: mov dword ptr [ebp + 0xc], eax */
    /* cmp ecx, edx */ /* 0x120287A2: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120287B2; /* 0x120287A4: jne 0x120287b2 */
L_120287A6:
    eax = MEM32(ecx + 0x30); /* 0x120287A6: mov eax, dword ptr [ecx + 0x30] */
    edx = MEM32(ebp + 0xC); /* 0x120287A9: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx + ebx + 0x30) = eax; /* 0x120287AC: mov dword ptr [edx + ebx + 0x30], eax */
    goto L_120287CB; /* 0x120287B0: jmp 0x120287cb */
L_120287B2:
    /* test edx, edx */ /* 0x120287B2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028771; /* 0x120287B4: je 0x12028771 */
L_120287B6:
    eax = MEM32(edx + 0x30); /* 0x120287B6: mov eax, dword ptr [edx + 0x30] */
    /* cmp ecx, eax */ /* 0x120287B9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202876D; /* 0x120287BB: je 0x1202876d */
L_120287BD:
    edx = eax; /* 0x120287BD: mov edx, eax */
    /* test edx, edx */ /* 0x120287BF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120287B6; /* 0x120287C1: jne 0x120287b6 */
L_120287C3:
    RECOMP_BACKEDGE();
    goto L_1202876D; /* 0x120287C3: jmp 0x1202876d */
L_120287C5:
    eax = MEM32(ecx + 0x30); /* 0x120287C5: mov eax, dword ptr [ecx + 0x30] */
    MEM32(edx + 0x30) = eax; /* 0x120287C8: mov dword ptr [edx + 0x30], eax */
L_120287CB:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x120287CB: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & LO16(esi)); /* 0x120287CE: and word ptr [ecx + 0x2e], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x120287D2: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x120287D5: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x120287D8: mov dword ptr [edi + 0x3c], ecx */
    RECOMP_BACKEDGE();
    goto L_12028776; /* 0x120287DB: jmp 0x12028776 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120287E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120287E2u);

L_120287E2:
    edi = edi; /* 0x120287E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120287E4: push ebp */
    ebp = esp; /* 0x120287E5: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120287E7: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120287EA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120287EB: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120287EE: push edi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x120287EF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120287FB; /* 0x120287F2: jne 0x120287fb */
L_120287F4:
    edi = MEM32(esi + 0x50); /* 0x120287F4: mov edi, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120287F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202880A; /* 0x120287F9: jmp 0x1202880a */
L_120287FB:
    /* cmp eax, MEM32(esi + 0x50) */ /* 0x120287FB: cmp eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12028807; /* 0x120287FE: jb 0x12028807 */
L_12028800:
    eax = 0x8876086Cu; /* 0x12028800: mov eax, 0x8876086c */
    goto L_12028886; /* 0x12028805: jmp 0x12028886 */
L_12028807:
    edi = eax + 0x1; /* 0x12028807: lea edi, [eax + 1] */
L_1202880A:
    /* cmp eax, edi */ /* 0x1202880A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12028884; /* 0x1202880C: jae 0x12028884 */
L_1202880E:
    PUSH32(esp, ebx); /* 0x1202880E: push ebx */
    ebx = eax; /* 0x1202880F: mov ebx, eax */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58u); /* 0x12028811: imul ebx, ebx, 0x58 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x12028814: sub edi, eax */
    _flag_k = FK_CMP;
    goto L_1202883A; /* 0x12028816: jmp 0x1202883a */
L_12028818:
    eax = MEM32(esi + 0x54); /* 0x12028818: mov eax, dword ptr [esi + 0x54] */
    ecx = MEM32(ebx + eax + 0x30); /* 0x1202881B: mov ecx, dword ptr [ebx + eax + 0x30] */
    edx = MEM32(ecx + 0x30); /* 0x1202881F: mov edx, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12028822: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x12028825: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x1202882A: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x1202882D: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esi + 0x54); /* 0x12028830: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x3C) = ecx; /* 0x12028833: mov dword ptr [esi + 0x3c], ecx */
    MEM32(ebx + eax + 0x30) = edx; /* 0x12028836: mov dword ptr [ebx + eax + 0x30], edx */
L_1202883A:
    eax = MEM32(esi + 0x54); /* 0x1202883A: mov eax, dword ptr [esi + 0x54] */
    /* cmp MEM32(ebx + eax + 0x30), 0 */ /* 0x1202883D: cmp dword ptr [ebx + eax + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028818; /* 0x12028842: jne 0x12028818 */
L_12028844:
    PUSH32(esp, 4); /* 0x12028844: push 4 */
    eax = POP32_VAL(esp); /* 0x12028846: pop eax */
    edx = ebx + 0x34; /* 0x12028847: lea edx, [ebx + 0x34] */
    MEM32(ebp + 0x8) = eax; /* 0x1202884A: mov dword ptr [ebp + 8], eax */
L_1202884D:
    ecx = MEM32(esi + 0x54); /* 0x1202884D: mov ecx, dword ptr [esi + 0x54] */
    /* cmp MEM32(edx + ecx), 0 */ /* 0x12028850: cmp dword ptr [edx + ecx], 0 */
    _flag_a = (uint32_t)(MEM32(edx + ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12028874; /* 0x12028854: je 0x12028874 */
L_12028856:
    ecx = MEM32(edx + ecx); /* 0x12028856: mov ecx, dword ptr [edx + ecx] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x12028859: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x1202885C: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x12028861: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x12028864: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(esi + 0x54); /* 0x12028867: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x3C) = ecx; /* 0x1202886A: mov dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(edx + eax)); _flag_b = (uint32_t)(0);
    MEM32(edx + eax) = MEM32(edx + eax) & 0; /* 0x1202886D: and dword ptr [edx + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x12028871: mov eax, dword ptr [ebp + 8] */
L_12028874:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12028874: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12028877: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = eax; /* 0x12028878: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202884D; /* 0x1202887B: jne 0x1202884d */
L_1202887D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x58u; /* 0x1202887D: add ebx, 0x58 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12028880: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202883A; /* 0x12028881: jne 0x1202883a */
L_12028883:
    ebx = POP32_VAL(esp); /* 0x12028883: pop ebx */
L_12028884:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028884: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028886:
    edi = POP32_VAL(esp); /* 0x12028886: pop edi */
    esi = POP32_VAL(esp); /* 0x12028887: pop esi */
    ebp = POP32_VAL(esp); /* 0x12028888: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12028889: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12028891(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028891u);

L_12028891:
    edi = edi; /* 0x12028891: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028893: push ebp */
    ebp = esp; /* 0x12028894: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12028896: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12028897: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x1202889A: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120288BE; /* 0x1202889E: je 0x120288be */
L_120288A0:
    edx = MEM32(esi + 0x44); /* 0x120288A0: mov edx, dword ptr [esi + 0x44] */
    ecx = MEM32(edx + 0x30); /* 0x120288A3: mov ecx, dword ptr [edx + 0x30] */
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x120288A6: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x120288A9: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x120288AE: mov eax, dword ptr [esi + 0x3c] */
    MEM32(edx + 0x30) = eax; /* 0x120288B1: mov dword ptr [edx + 0x30], eax */
    MEM32(esi + 0x3C) = edx; /* 0x120288B4: mov dword ptr [esi + 0x3c], edx */
    MEM32(esi + 0x44) = ecx; /* 0x120288B7: mov dword ptr [esi + 0x44], ecx */
    /* test ecx, ecx */ /* 0x120288BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120288A0; /* 0x120288BC: jne 0x120288a0 */
L_120288BE:
    ecx = MEM32(esi + 0x48); /* 0x120288BE: mov ecx, dword ptr [esi + 0x48] */
    /* test ecx, ecx */ /* 0x120288C1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120288D6; /* 0x120288C3: je 0x120288d6 */
L_120288C5:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x120288C5: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x120288C8: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x3C); /* 0x120288CD: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x120288D0: mov dword ptr [ecx + 0x30], eax */
    MEM32(esi + 0x3C) = ecx; /* 0x120288D3: mov dword ptr [esi + 0x3c], ecx */
L_120288D6:
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x48) = MEM32(esi + 0x48) & 0; /* 0x120288D6: and dword ptr [esi + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120288DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120288DC: pop esi */
    ebp = POP32_VAL(esp); /* 0x120288DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120288DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120288E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120288E6u);

L_120288E6:
    fp_push(0.0); /* 0x120288E6: fldz  */
    _flag_a = (uint32_t)(MEM32(ecx + 0x58)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ecx + 0x58) = MEM32(ecx + 0x58) & 0xFFFFFFFEu; /* 0x120288E8: and dword ptr [ecx + 0x58], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120288EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(ecx + 0x8) = _st[0]; /* 0x120288EE: fst qword ptr [ecx + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x10) = _v; } /* 0x120288F1: fstp qword ptr [ecx + 0x10] */
    MEM32(ecx + 0x20) = eax; /* 0x120288F4: mov dword ptr [ecx + 0x20], eax */
    fp_push(0.0); /* 0x120288F7: fldz  */
    MEM32(ecx + 0x18) = eax; /* 0x120288F9: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x120288FC: mov dword ptr [ecx + 0x1c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x40) = _v; } /* 0x120288FF: fstp dword ptr [ecx + 0x40] */
    MEM32(ecx + 0x24) = eax; /* 0x12028902: mov dword ptr [ecx + 0x24], eax */
    MEM32(ecx + 0x28) = eax; /* 0x12028905: mov dword ptr [ecx + 0x28], eax */
    MEM32(ecx + 0x2C) = eax; /* 0x12028908: mov dword ptr [ecx + 0x2c], eax */
    MEM32(ecx + 0x30) = eax; /* 0x1202890B: mov dword ptr [ecx + 0x30], eax */
    MEM32(ecx + 0x54) = eax; /* 0x1202890E: mov dword ptr [ecx + 0x54], eax */
    MEM32(ecx + 0x4C) = eax; /* 0x12028911: mov dword ptr [ecx + 0x4c], eax */
    MEM32(ecx + 0x50) = eax; /* 0x12028914: mov dword ptr [ecx + 0x50], eax */
    MEM32(ecx + 0x3C) = eax; /* 0x12028917: mov dword ptr [ecx + 0x3c], eax */
    MEM32(ecx + 0x38) = eax; /* 0x1202891A: mov dword ptr [ecx + 0x38], eax */
    MEM32(ecx + 0x34) = eax; /* 0x1202891D: mov dword ptr [ecx + 0x34], eax */
    MEM32(ecx) = 0x12001DF8u; /* 0x12028920: mov dword ptr [ecx], 0x12001df8 */
    MEM32(ecx + 0x4) = 1; /* 0x12028926: mov dword ptr [ecx + 4], 1 */
    eax = ecx; /* 0x1202892D: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1202892F: ret  */
    RECOMP_REGS_OUT();
}

void sub_12028935(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028935u);

L_12028935:
    edi = edi; /* 0x12028935: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028937: push ebp */
    ebp = esp; /* 0x12028938: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202893A: push ecx */
    PUSH32(esp, ecx); /* 0x1202893B: push ecx */
    PUSH32(esp, esi); /* 0x1202893C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202893D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x1202893F: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x8876086Cu; /* 0x12028942: mov eax, 0x8876086c */
    /* cmp MEM32(ebp + 0x1C), esi */ /* 0x12028947: cmp dword ptr [ebp + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202894E; /* 0x1202894A: jne 0x1202894e */
L_1202894C:
    esi = eax; /* 0x1202894C: mov esi, eax */
L_1202894E:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1202894E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028956; /* 0x12028952: jne 0x12028956 */
L_12028954:
    esi = eax; /* 0x12028954: mov esi, eax */
L_12028956:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x12028956: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202895E; /* 0x1202895A: jne 0x1202895e */
L_1202895C:
    esi = eax; /* 0x1202895C: mov esi, eax */
L_1202895E:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1202895E: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028966; /* 0x12028962: jne 0x12028966 */
L_12028964:
    esi = eax; /* 0x12028964: mov esi, eax */
L_12028966:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x12028966: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202896E; /* 0x1202896A: jne 0x1202896e */
L_1202896C:
    esi = eax; /* 0x1202896C: mov esi, eax */
L_1202896E:
    /* test esi, esi */ /* 0x1202896E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12028C2D; /* 0x12028970: js 0x12028c2d */
L_12028976:
    PUSH32(esp, ebx); /* 0x12028976: push ebx */
    PUSH32(esp, 0x120014BCu); /* 0x12028977: push 0x120014bc */
    PUSH32(esp, 0x60u); /* 0x1202897C: push 0x60 */
    RECOMP_CALL(sub_12018970); /* 0x1202897E: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12028983: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12028984: pop ecx */
    /* test eax, eax */ /* 0x12028985: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028994; /* 0x12028987: je 0x12028994 */
L_12028989:
    ecx = eax; /* 0x12028989: mov ecx, eax */
    RECOMP_CALL(sub_120288E6); /* 0x1202898B: call 0x120288e6 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12028990: mov ebx, eax */
    goto L_12028996; /* 0x12028992: jmp 0x12028996 */
L_12028994:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12028994: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028996:
    /* test ebx, ebx */ /* 0x12028996: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120289A4; /* 0x12028998: jne 0x120289a4 */
L_1202899A:
    esi = 0x8007000Eu; /* 0x1202899A: mov esi, 0x8007000e */
    goto L_12028C2C; /* 0x1202899F: jmp 0x12028c2c */
L_120289A4:
    PUSH32(esp, edi); /* 0x120289A4: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120289A5: push dword ptr [ebp + 0x18] */
    ecx = ebx; /* 0x120289A8: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120289AA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120289AD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120289B0: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_12025EAC); /* 0x120289B3: call 0x12025eac */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120289B8: mov esi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x120289BA: mov dword ptr [ebp - 8], esi */
    /* test esi, esi */ /* 0x120289BD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12028C25; /* 0x120289BF: js 0x12028c25 */
L_120289C5:
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) & 0xFFFFFFFEu; /* 0x120289C5: and dword ptr [ebx + 0x58], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x120289C9: mov esi, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x120289CC: fld qword ptr [esi + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x10) = _v; } /* 0x120289CF: fstp qword ptr [ebx + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x120289D2: fld qword ptr [esi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x8) = _v; } /* 0x120289D5: fstp qword ptr [ebx + 8] */
    eax = MEM32(esi + 0x4C); /* 0x120289D8: mov eax, dword ptr [esi + 0x4c] */
    /* cmp eax, MEM32(ebx + 0x50) */ /* 0x120289DB: cmp eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120289E3; /* 0x120289DE: jb 0x120289e3 */
L_120289E0:
    eax = MEM32(ebx + 0x50); /* 0x120289E0: mov eax, dword ptr [ebx + 0x50] */
L_120289E3:
    MEM32(ebx + 0x4C) = eax; /* 0x120289E3: mov dword ptr [ebx + 0x4c], eax */
    eax = MEM32(esi + 0x24); /* 0x120289E6: mov eax, dword ptr [esi + 0x24] */
    /* cmp eax, MEM32(ebx + 0x28) */ /* 0x120289E9: cmp eax, dword ptr [ebx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120289F1; /* 0x120289EC: jb 0x120289f1 */
L_120289EE:
    eax = MEM32(ebx + 0x28); /* 0x120289EE: mov eax, dword ptr [ebx + 0x28] */
L_120289F1:
    MEM32(ebx + 0x24) = eax; /* 0x120289F1: mov dword ptr [ebx + 0x24], eax */
    eax = MEM32(esi + 0x18); /* 0x120289F4: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, MEM32(ebx + 0x1C) */ /* 0x120289F7: cmp eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120289FF; /* 0x120289FA: jb 0x120289ff */
L_120289FC:
    eax = MEM32(ebx + 0x1C); /* 0x120289FC: mov eax, dword ptr [ebx + 0x1c] */
L_120289FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120289FF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x18) = eax; /* 0x12028A01: mov dword ptr [ebx + 0x18], eax */
    MEM32(ebp + 0x18) = edx; /* 0x12028A04: mov dword ptr [ebp + 0x18], edx */
    /* test eax, eax */ /* 0x12028A07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028AAF; /* 0x12028A09: je 0x12028aaf */
L_12028A0F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12028A0F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028A11:
    eax = MEM32(esi + 0x20); /* 0x12028A11: mov eax, dword ptr [esi + 0x20] */
    ecx = MEM32(edi + eax); /* 0x12028A14: mov ecx, dword ptr [edi + eax] */
    /* test ecx, ecx */ /* 0x12028A17: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028A5A; /* 0x12028A19: je 0x12028a5a */
L_12028A1B:
    edx = ecx + 0x1; /* 0x12028A1B: lea edx, [ecx + 1] */
L_12028A1E:
    SET_LO8(eax, MEM8(ecx)); /* 0x12028A1E: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12028A20: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12028A21: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028A1E; /* 0x12028A23: jne 0x12028a1e */
L_12028A25:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12028A25: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x12028A27: lea eax, [ecx + 1] */
    PUSH32(esp, 0x120014BCu); /* 0x12028A2A: push 0x120014bc */
    PUSH32(esp, eax); /* 0x12028A2F: push eax */
    MEM32(ebp + 0x14) = eax; /* 0x12028A30: mov dword ptr [ebp + 0x14], eax */
    RECOMP_CALL(sub_12018970); /* 0x12028A33: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12028A38: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12028A39: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x12028A3A: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x12028A3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028C20; /* 0x12028A3F: je 0x12028c20 */
L_12028A45:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12028A45: push dword ptr [ebp + 0x14] */
    ecx = MEM32(esi + 0x20); /* 0x12028A48: mov ecx, dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(edi + ecx)); /* 0x12028A4B: push dword ptr [edi + ecx] */
    PUSH32(esp, eax); /* 0x12028A4E: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x12028A4F: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x12028A54: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12028A57: add esp, 0xc */
    _flag_k = FK_ADD;
L_12028A5A:
    eax = MEM32(ebx + 0x20); /* 0x12028A5A: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12028A5D: mov ecx, dword ptr [ebp - 4] */
    MEM32(edi + eax) = ecx; /* 0x12028A60: mov dword ptr [edi + eax], ecx */
    eax = MEM32(esi + 0x20); /* 0x12028A63: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(edi + eax + 0x4); /* 0x12028A66: mov eax, dword ptr [edi + eax + 4] */
    ecx = MEM32(ebx + 0x20); /* 0x12028A6A: mov ecx, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x12028A6D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + ecx + 0x4) = eax; /* 0x12028A71: mov dword ptr [edi + ecx + 4], eax */
    eax = MEM32(esi + 0x20); /* 0x12028A75: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(edi + eax + 0x8); /* 0x12028A78: mov eax, dword ptr [edi + eax + 8] */
    ecx = MEM32(ebx + 0x20); /* 0x12028A7C: mov ecx, dword ptr [ebx + 0x20] */
    MEM32(edi + ecx + 0x8) = eax; /* 0x12028A7F: mov dword ptr [edi + ecx + 8], eax */
    eax = MEM32(esi + 0x20); /* 0x12028A83: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(edi + eax + 0xC); /* 0x12028A86: mov eax, dword ptr [edi + eax + 0xc] */
    ecx = MEM32(ebx + 0x20); /* 0x12028A8A: mov ecx, dword ptr [ebx + 0x20] */
    MEM32(edi + ecx + 0xC) = eax; /* 0x12028A8D: mov dword ptr [edi + ecx + 0xc], eax */
    eax = MEM32(esi + 0x20); /* 0x12028A91: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(edi + eax + 0x10); /* 0x12028A94: mov eax, dword ptr [edi + eax + 0x10] */
    ecx = MEM32(ebx + 0x20); /* 0x12028A98: mov ecx, dword ptr [ebx + 0x20] */
    MEM32(edi + ecx + 0x10) = eax; /* 0x12028A9B: mov dword ptr [edi + ecx + 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12028A9F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x12028AA0: add edi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = edx; /* 0x12028AA3: mov dword ptr [ebp + 0x18], edx */
    /* cmp edx, MEM32(ebx + 0x18) */ /* 0x12028AA6: cmp edx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12028A11; /* 0x12028AA9: jb 0x12028a11 */
L_12028AAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12028AAF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x24), edi */ /* 0x12028AB1: cmp dword ptr [ebx + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12028AF5; /* 0x12028AB4: jbe 0x12028af5 */
L_12028AB6:
    eax = MEM32(esi + 0x2C); /* 0x12028AB6: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax + edi * 4); /* 0x12028AB9: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(ebx + 0x2C); /* 0x12028ABC: mov ecx, dword ptr [ebx + 0x2c] */
    MEM32(ecx + edi * 4) = eax; /* 0x12028ABF: mov dword ptr [ecx + edi*4], eax */
    eax = MEM32(esi + 0x2C); /* 0x12028AC2: mov eax, dword ptr [esi + 0x2c] */
    /* cmp MEM32(eax + edi * 4), 0 */ /* 0x12028AC5: cmp dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12028AD4; /* 0x12028AC9: je 0x12028ad4 */
L_12028ACB:
    eax = MEM32(eax + edi * 4); /* 0x12028ACB: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(eax); /* 0x12028ACE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12028AD0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x12028AD1: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_12028AD4:
    eax = MEM32(ebx + 0x18); /* 0x12028AD4: mov eax, dword ptr [ebx + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x12028AD7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x12028AD7: shl eax, 2 */
    PUSH32(esp, eax); /* 0x12028ADA: push eax */
    eax = MEM32(esi + 0x30); /* 0x12028ADB: mov eax, dword ptr [esi + 0x30] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x12028ADE: push dword ptr [eax + edi*4] */
    eax = MEM32(ebx + 0x30); /* 0x12028AE1: mov eax, dword ptr [ebx + 0x30] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x12028AE4: push dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_121BF440); /* 0x12028AE7: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12028AEC: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12028AEF: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0x24) */ /* 0x12028AF0: cmp edi, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12028AB6; /* 0x12028AF3: jb 0x12028ab6 */
L_12028AF5:
    eax = MEM32(ebx + 0x4C); /* 0x12028AF5: mov eax, dword ptr [ebx + 0x4c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x12028AF8: imul eax, eax, 0x58 */
    PUSH32(esp, eax); /* 0x12028AFB: push eax */
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x12028AFC: push dword ptr [esi + 0x54] */
    PUSH32(esp, MEM32(ebx + 0x54)); /* 0x12028AFF: push dword ptr [ebx + 0x54] */
    RECOMP_CALL(sub_121BF440); /* 0x12028B02: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12028B07: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12028B09: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ecx; /* 0x12028B0C: mov dword ptr [ebp + 0x10], ecx */
    /* cmp MEM32(ebx + 0x4C), ecx */ /* 0x12028B0F: cmp dword ptr [ebx + 0x4c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12028C3B; /* 0x12028B12: jbe 0x12028c3b */
L_12028B18:
    edx = ecx; /* 0x12028B18: mov edx, ecx */
    MEM32(ebp + 0x14) = ecx; /* 0x12028B1A: mov dword ptr [ebp + 0x14], ecx */
L_12028B1D:
    eax = MEM32(ebx + 0x54); /* 0x12028B1D: mov eax, dword ptr [ebx + 0x54] */
    MEM32(eax + edx + 0x30) = ecx; /* 0x12028B20: mov dword ptr [eax + edx + 0x30], ecx */
    eax = MEM32(ebx + 0x54); /* 0x12028B24: mov eax, dword ptr [ebx + 0x54] */
    MEM32(eax + edx + 0x34) = ecx; /* 0x12028B27: mov dword ptr [eax + edx + 0x34], ecx */
    eax = MEM32(ebx + 0x54); /* 0x12028B2B: mov eax, dword ptr [ebx + 0x54] */
    MEM32(eax + edx + 0x38) = ecx; /* 0x12028B2E: mov dword ptr [eax + edx + 0x38], ecx */
    eax = MEM32(ebx + 0x54); /* 0x12028B32: mov eax, dword ptr [ebx + 0x54] */
    MEM32(eax + edx + 0x3C) = ecx; /* 0x12028B35: mov dword ptr [eax + edx + 0x3c], ecx */
    eax = MEM32(ebx + 0x54); /* 0x12028B39: mov eax, dword ptr [ebx + 0x54] */
    MEM32(eax + edx + 0x40) = ecx; /* 0x12028B3C: mov dword ptr [eax + edx + 0x40], ecx */
    eax = MEM32(ebx + 0x54); /* 0x12028B40: mov eax, dword ptr [ebx + 0x54] */
    MEM32(eax + edx + 0x54) = 1; /* 0x12028B43: mov dword ptr [eax + edx + 0x54], 1 */
    eax = MEM32(ebx + 0x54); /* 0x12028B4B: mov eax, dword ptr [ebx + 0x54] */
    ecx = MEM32(ebx + 0x28); /* 0x12028B4E: mov ecx, dword ptr [ebx + 0x28] */
    /* cmp MEM32(eax + edx + 0x20), ecx */ /* 0x12028B51: cmp dword ptr [eax + edx + 0x20], ecx */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x20)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12028B5B; /* 0x12028B55: jb 0x12028b5b */
L_12028B57:
    MEM32(eax + edx + 0x20) = ecx; /* 0x12028B57: mov dword ptr [eax + edx + 0x20], ecx */
L_12028B5B:
    eax = MEM32(esi + 0x54); /* 0x12028B5B: mov eax, dword ptr [esi + 0x54] */
    eax = MEM32(eax + edx + 0x30); /* 0x12028B5E: mov eax, dword ptr [eax + edx + 0x30] */
    MEM32(ebp + 0x18) = eax; /* 0x12028B62: mov dword ptr [ebp + 0x18], eax */
    /* test eax, eax */ /* 0x12028B65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028BAF; /* 0x12028B67: je 0x12028baf */
L_12028B69:
    edi = MEM32(ebx + 0x3C); /* 0x12028B69: mov edi, dword ptr [ebx + 0x3c] */
    MEM32(ebp + 0xC) = edi; /* 0x12028B6C: mov dword ptr [ebp + 0xc], edi */
    /* test edi, edi */ /* 0x12028B6F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028C34; /* 0x12028B71: je 0x12028c34 */
L_12028B77:
    eax = MEM32(edi + 0x30); /* 0x12028B77: mov eax, dword ptr [edi + 0x30] */
    esi = MEM32(ebp + 0x18); /* 0x12028B7A: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0xEu); /* 0x12028B7D: push 0xe */
    MEM32(ebx + 0x3C) = eax; /* 0x12028B7F: mov dword ptr [ebx + 0x3c], eax */
    ecx = POP32_VAL(esp); /* 0x12028B82: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12028B83: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x12028B85: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) & 0; /* 0x12028B88: and dword ptr [ecx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x54); /* 0x12028B8C: mov eax, dword ptr [ebx + 0x54] */
    eax = eax + edx + 0x30; /* 0x12028B8F: lea eax, [eax + edx + 0x30] */
    PUSH32(esp, eax); /* 0x12028B93: push eax */
    PUSH32(esp, ecx); /* 0x12028B94: push ecx */
    ecx = ebx; /* 0x12028B95: mov ecx, ebx */
    RECOMP_CALL(sub_12026105); /* 0x12028B97: call 0x12026105 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x12028B9C: mov eax, dword ptr [ebp + 0x18] */
    eax = MEM32(eax + 0x30); /* 0x12028B9F: mov eax, dword ptr [eax + 0x30] */
    edx = MEM32(ebp + 0x14); /* 0x12028BA2: mov edx, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x18) = eax; /* 0x12028BA5: mov dword ptr [ebp + 0x18], eax */
    /* test eax, eax */ /* 0x12028BA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028B69; /* 0x12028BAA: jne 0x12028b69 */
L_12028BAC:
    esi = MEM32(ebp + 0x8); /* 0x12028BAC: mov esi, dword ptr [ebp + 8] */
L_12028BAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12028BAF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx + 0x34; /* 0x12028BB1: lea ecx, [edx + 0x34] */
    MEM32(ebp + 0x14) = edi; /* 0x12028BB4: mov dword ptr [ebp + 0x14], edi */
    MEM32(ebp + 0x18) = ecx; /* 0x12028BB7: mov dword ptr [ebp + 0x18], ecx */
L_12028BBA:
    eax = MEM32(esi + 0x54); /* 0x12028BBA: mov eax, dword ptr [esi + 0x54] */
    eax = MEM32(ecx + eax); /* 0x12028BBD: mov eax, dword ptr [ecx + eax] */
    MEM32(ebp + 0xC) = eax; /* 0x12028BC0: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x12028BC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028BF8; /* 0x12028BC5: je 0x12028bf8 */
L_12028BC7:
    edi = MEM32(ebx + 0x3C); /* 0x12028BC7: mov edi, dword ptr [ebx + 0x3c] */
    MEM32(ebp + (-0x4)) = edi; /* 0x12028BCA: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x12028BCD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028C34; /* 0x12028BCF: je 0x12028c34 */
L_12028BD1:
    eax = MEM32(edi + 0x30); /* 0x12028BD1: mov eax, dword ptr [edi + 0x30] */
    esi = MEM32(ebp + 0xC); /* 0x12028BD4: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0x3C) = eax; /* 0x12028BD7: mov dword ptr [ebx + 0x3c], eax */
    PUSH32(esp, 0xEu); /* 0x12028BDA: push 0xe */
    ecx = POP32_VAL(esp); /* 0x12028BDC: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12028BDD: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12028BDF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) & 0; /* 0x12028BE2: and dword ptr [ecx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x18); /* 0x12028BE6: mov esi, dword ptr [ebp + 0x18] */
    eax = MEM32(ebx + 0x54); /* 0x12028BE9: mov eax, dword ptr [ebx + 0x54] */
    edi = MEM32(ebp + 0x14); /* 0x12028BEC: mov edi, dword ptr [ebp + 0x14] */
    MEM32(esi + eax) = ecx; /* 0x12028BEF: mov dword ptr [esi + eax], ecx */
    esi = MEM32(ebp + 0x8); /* 0x12028BF2: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x18); /* 0x12028BF5: mov ecx, dword ptr [ebp + 0x18] */
L_12028BF8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12028BF8: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12028BF9: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = edi; /* 0x12028BFC: mov dword ptr [ebp + 0x14], edi */
    MEM32(ebp + 0x18) = ecx; /* 0x12028BFF: mov dword ptr [ebp + 0x18], ecx */
    /* cmp edi, 4 */ /* 0x12028C02: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12028BBA; /* 0x12028C05: jb 0x12028bba */
L_12028C07:
    edi = MEM32(ebp + 0x10); /* 0x12028C07: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12028C0A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x58u; /* 0x12028C0B: add edx, 0x58 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = edi; /* 0x12028C0E: mov dword ptr [ebp + 0x10], edi */
    MEM32(ebp + 0x14) = edx; /* 0x12028C11: mov dword ptr [ebp + 0x14], edx */
    /* cmp edi, MEM32(ebx + 0x4C) */ /* 0x12028C14: cmp edi, dword ptr [ebx + 0x4c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12028C3B; /* 0x12028C17: jae 0x12028c3b */
L_12028C19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12028C19: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_12028B1D; /* 0x12028C1B: jmp 0x12028b1d */
L_12028C20:
    esi = 0x8007000Eu; /* 0x12028C20: mov esi, 0x8007000e */
L_12028C25:
    eax = MEM32(ebx); /* 0x12028C25: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12028C27: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12028C28: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_12028C2B:
    edi = POP32_VAL(esp); /* 0x12028C2B: pop edi */
L_12028C2C:
    ebx = POP32_VAL(esp); /* 0x12028C2C: pop ebx */
L_12028C2D:
    eax = esi; /* 0x12028C2D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12028C2F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12028C30: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12028C31: ret 0x18 */
L_12028C34:
    esi = 0x8876086Cu; /* 0x12028C34: mov esi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_12028C25; /* 0x12028C39: jmp 0x12028c25 */
L_12028C3B:
    edi = MEM32(esi + 0x44); /* 0x12028C3B: mov edi, dword ptr [esi + 0x44] */
    MEM32(ebp + 0x18) = edi; /* 0x12028C3E: mov dword ptr [ebp + 0x18], edi */
    /* test edi, edi */ /* 0x12028C41: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028C7B; /* 0x12028C43: je 0x12028c7b */
L_12028C45:
    edx = MEM32(ebx + 0x3C); /* 0x12028C45: mov edx, dword ptr [ebx + 0x3c] */
    /* test edx, edx */ /* 0x12028C48: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028C34; /* 0x12028C4A: je 0x12028c34 */
L_12028C4C:
    eax = MEM32(edx + 0x30); /* 0x12028C4C: mov eax, dword ptr [edx + 0x30] */
    PUSH32(esp, 0xEu); /* 0x12028C4F: push 0xe */
    MEM32(ebx + 0x3C) = eax; /* 0x12028C51: mov dword ptr [ebx + 0x3c], eax */
    ecx = POP32_VAL(esp); /* 0x12028C54: pop ecx */
    esi = edi; /* 0x12028C55: mov esi, edi */
    eax = ebx + 0x44; /* 0x12028C57: lea eax, [ebx + 0x44] */
    edi = edx; /* 0x12028C5A: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12028C5C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(edx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x30) = MEM32(edx + 0x30) & 0; /* 0x12028C5E: and dword ptr [edx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x12028C62: push eax */
    PUSH32(esp, edx); /* 0x12028C63: push edx */
    ecx = ebx; /* 0x12028C64: mov ecx, ebx */
    RECOMP_CALL(sub_12026105); /* 0x12028C66: call 0x12026105 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x18); /* 0x12028C6B: mov edi, dword ptr [ebp + 0x18] */
    edi = MEM32(edi + 0x30); /* 0x12028C6E: mov edi, dword ptr [edi + 0x30] */
    MEM32(ebp + 0x18) = edi; /* 0x12028C71: mov dword ptr [ebp + 0x18], edi */
    /* test edi, edi */ /* 0x12028C74: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028C45; /* 0x12028C76: jne 0x12028c45 */
L_12028C78:
    esi = MEM32(ebp + 0x8); /* 0x12028C78: mov esi, dword ptr [ebp + 8] */
L_12028C7B:
    esi = MEM32(esi + 0x48); /* 0x12028C7B: mov esi, dword ptr [esi + 0x48] */
    /* test esi, esi */ /* 0x12028C7E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028C9D; /* 0x12028C80: je 0x12028c9d */
L_12028C82:
    edx = MEM32(ebx + 0x3C); /* 0x12028C82: mov edx, dword ptr [ebx + 0x3c] */
    /* test edx, edx */ /* 0x12028C85: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028C34; /* 0x12028C87: je 0x12028c34 */
L_12028C89:
    eax = MEM32(edx + 0x30); /* 0x12028C89: mov eax, dword ptr [edx + 0x30] */
    PUSH32(esp, 0xEu); /* 0x12028C8C: push 0xe */
    MEM32(ebx + 0x3C) = eax; /* 0x12028C8E: mov dword ptr [ebx + 0x3c], eax */
    ecx = POP32_VAL(esp); /* 0x12028C91: pop ecx */
    edi = edx; /* 0x12028C92: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12028C94: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(edx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x30) = MEM32(edx + 0x30) & 0; /* 0x12028C96: and dword ptr [edx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x48) = edx; /* 0x12028C9A: mov dword ptr [ebx + 0x48], edx */
L_12028C9D:
    eax = MEM32(ebp + 0x1C); /* 0x12028C9D: mov eax, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + (-0x8)); /* 0x12028CA0: mov esi, dword ptr [ebp - 8] */
    MEM32(eax) = ebx; /* 0x12028CA3: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_12028C2B; /* 0x12028CA5: jmp 0x12028c2b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12028CAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028CACu);

L_12028CAC:
    edi = edi; /* 0x12028CAC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028CAE: push ebp */
    ebp = esp; /* 0x12028CAF: mov ebp, esp */
    PUSH32(esp, edi); /* 0x12028CB1: push edi */
    edi = MEM32(ebp + 0x18); /* 0x12028CB2: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028CB5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x8876086Cu; /* 0x12028CB7: mov ecx, 0x8876086c */
    /* test edi, edi */ /* 0x12028CBC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028CC2; /* 0x12028CBE: jne 0x12028cc2 */
L_12028CC0:
    eax = ecx; /* 0x12028CC0: mov eax, ecx */
L_12028CC2:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x12028CC2: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028CCA; /* 0x12028CC6: jne 0x12028cca */
L_12028CC8:
    eax = ecx; /* 0x12028CC8: mov eax, ecx */
L_12028CCA:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12028CCA: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028CD2; /* 0x12028CCE: jne 0x12028cd2 */
L_12028CD0:
    eax = ecx; /* 0x12028CD0: mov eax, ecx */
L_12028CD2:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x12028CD2: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028CDA; /* 0x12028CD6: jne 0x12028cda */
L_12028CD8:
    eax = ecx; /* 0x12028CD8: mov eax, ecx */
L_12028CDA:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x12028CDA: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028CE2; /* 0x12028CDE: jne 0x12028ce2 */
L_12028CE0:
    eax = ecx; /* 0x12028CE0: mov eax, ecx */
L_12028CE2:
    /* test eax, eax */ /* 0x12028CE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12028D30; /* 0x12028CE4: js 0x12028d30 */
L_12028CE6:
    PUSH32(esp, esi); /* 0x12028CE6: push esi */
    PUSH32(esp, 0x120014BCu); /* 0x12028CE7: push 0x120014bc */
    PUSH32(esp, 0x60u); /* 0x12028CEC: push 0x60 */
    RECOMP_CALL(sub_12018970); /* 0x12028CEE: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12028CF3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12028CF4: pop ecx */
    /* test eax, eax */ /* 0x12028CF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028D04; /* 0x12028CF7: je 0x12028d04 */
L_12028CF9:
    ecx = eax; /* 0x12028CF9: mov ecx, eax */
    RECOMP_CALL(sub_120288E6); /* 0x12028CFB: call 0x120288e6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12028D00: mov esi, eax */
    goto L_12028D06; /* 0x12028D02: jmp 0x12028d06 */
L_12028D04:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12028D04: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028D06:
    /* test esi, esi */ /* 0x12028D06: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028D2F; /* 0x12028D08: je 0x12028d2f */
L_12028D0A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12028D0A: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x12028D0D: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12028D0F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12028D12: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12028D15: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12025EAC); /* 0x12028D18: call 0x12025eac */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12028D1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12028D25; /* 0x12028D1F: js 0x12028d25 */
L_12028D21:
    MEM32(edi) = esi; /* 0x12028D21: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12028D23: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12028D25:
    /* test esi, esi */ /* 0x12028D25: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028D2F; /* 0x12028D27: je 0x12028d2f */
L_12028D29:
    eax = MEM32(esi); /* 0x12028D29: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x12028D2B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12028D2C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_12028D2F:
    esi = POP32_VAL(esp); /* 0x12028D2F: pop esi */
L_12028D30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028D30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12028D32: pop edi */
    ebp = POP32_VAL(esp); /* 0x12028D33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12028D34: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12028D3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028D3Cu);

L_12028D3C:
    edi = edi; /* 0x12028D3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028D3E: push ebp */
    ebp = esp; /* 0x12028D3F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12028D41: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12028D44: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x12028D46: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x12028D49: mov eax, dword ptr [eax] */
L_12028D4B:
    SET_LO8(edx, MEM8(eax)); /* 0x12028D4B: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x12028D4D: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028D6B; /* 0x12028D4F: jne 0x12028d6b */
L_12028D51:
    /* test LO8(edx), LO8(edx) */ /* 0x12028D51: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028D67; /* 0x12028D53: je 0x12028d67 */
L_12028D55:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x12028D55: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x12028D58: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12028D6B; /* 0x12028D5B: jne 0x12028d6b */
L_12028D5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12028D5D: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12028D60: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x12028D63: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028D4B; /* 0x12028D65: jne 0x12028d4b */
L_12028D67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028D67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x12028D69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12028D6A: ret  */
L_12028D6B:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12028D6B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12028D6D: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = POP32_VAL(esp); /* 0x12028D70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12028D71: ret  */
    RECOMP_REGS_OUT();
}

void sub_12028D77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028D77u);

L_12028D77:
    edi = edi; /* 0x12028D77: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028D79: push ebp */
    ebp = esp; /* 0x12028D7A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12028D7C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12028D7D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12028D80: push edi */
    PUSH32(esp, 4); /* 0x12028D81: push 4 */
    ecx = POP32_VAL(esp); /* 0x12028D83: pop ecx */
    edi = 0x12001DD8u; /* 0x12028D84: mov edi, 0x12001dd8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028D89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12028D8B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12028DB1; /* 0x12028D8D: je 0x12028db1 */
L_12028D8F:
    esi = MEM32(ebp + 0xC); /* 0x12028D8F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x12028D92: push 4 */
    ecx = POP32_VAL(esp); /* 0x12028D94: pop ecx */
    edi = 0x12001DB8u; /* 0x12028D95: mov edi, 0x12001db8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028D9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12028D9C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12028DB1; /* 0x12028D9E: je 0x12028db1 */
L_12028DA0:
    esi = MEM32(ebp + 0xC); /* 0x12028DA0: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x12028DA3: push 4 */
    ecx = POP32_VAL(esp); /* 0x12028DA5: pop ecx */
    edi = 0x12018314u; /* 0x12028DA6: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028DAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12028DAD: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_12028DC3; /* 0x12028DAF: jne 0x12028dc3 */
L_12028DB1:
    ecx = MEM32(ebp + 0x8); /* 0x12028DB1: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x12028DB4: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x12028DB7: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x12028DB9: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12028DBB: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12028DBC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12028DBF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12028DC8; /* 0x12028DC1: jmp 0x12028dc8 */
L_12028DC3:
    eax = 0x80004002u; /* 0x12028DC3: mov eax, 0x80004002 */
L_12028DC8:
    edi = POP32_VAL(esp); /* 0x12028DC8: pop edi */
    esi = POP32_VAL(esp); /* 0x12028DC9: pop esi */
    ebp = POP32_VAL(esp); /* 0x12028DCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12028DCB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12028DD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028DD3u);

L_12028DD3:
    edi = edi; /* 0x12028DD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028DD5: push ebp */
    ebp = esp; /* 0x12028DD6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12028DD8: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x14); /* 0x12028DDB: mov eax, dword ptr [eax + 0x14] */
    ebp = POP32_VAL(esp); /* 0x12028DDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12028DDF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12028DE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028DE7u);

L_12028DE7:
    edi = edi; /* 0x12028DE7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028DE9: push ebp */
    ebp = esp; /* 0x12028DEA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12028DEC: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(eax + 0x18)); /* 0x12028DEF: fld qword ptr [eax + 0x18] */
    ebp = POP32_VAL(esp); /* 0x12028DF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12028DF3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12028DFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028DFBu);

L_12028DFB:
    edi = edi; /* 0x12028DFB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028DFD: push ebp */
    ebp = esp; /* 0x12028DFE: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12028E00: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12028E03: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12028E06: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12028E09: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12028E0C: push eax */
    RECOMP_CALL(sub_1202F8A4); /* 0x12028E0D: call 0x1202f8a4 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12028E12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12028E13: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12028E1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028E1Bu);

L_12028E1B:
    edi = edi; /* 0x12028E1B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028E1D: push ebp */
    ebp = esp; /* 0x12028E1E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12028E20: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12028E23: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12028E26: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12028E29: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12028E2C: push eax */
    RECOMP_CALL(sub_1202F8D8); /* 0x12028E2D: call 0x1202f8d8 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12028E32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12028E33: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12028E3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028E3Bu);

L_12028E3B:
    edi = edi; /* 0x12028E3B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028E3D: push ebp */
    ebp = esp; /* 0x12028E3E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x12028E40: push dword ptr [ebp + 0x1c] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x12028E43: fld qword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12028E46: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12028E49: push dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12028E4C: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12028E4F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x12028E52: push ecx */
    PUSH32(esp, ecx); /* 0x12028E53: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12028E54: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x12028E57: push eax */
    RECOMP_CALL(sub_1202F977); /* 0x12028E58: call 0x1202f977 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12028E5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12028E5E: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12028E66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028E66u);

L_12028E66:
    edi = edi; /* 0x12028E66: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028E68: push ebp */
    ebp = esp; /* 0x12028E69: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12028E6B: push ecx */
    PUSH32(esp, ebx); /* 0x12028E6C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12028E6D: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12028E70: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12028E71: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12028E73: push edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x12028E74: mov dword ptr [ebp - 4], esi */
    /* test ebx, ebx */ /* 0x12028E77: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028E82; /* 0x12028E79: jne 0x12028e82 */
L_12028E7B:
    edi = 0x8876086Cu; /* 0x12028E7B: mov edi, 0x8876086c */
    goto L_12028EC9; /* 0x12028E80: jmp 0x12028ec9 */
L_12028E82:
    eax = ebp + (-0x4); /* 0x12028E82: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12028E85: push eax */
    eax = MEM32(ebp + 0x8); /* 0x12028E86: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x48)); /* 0x12028E89: push dword ptr [eax + 0x48] */
    RECOMP_CALL(sub_120192FE); /* 0x12028E8C: call 0x120192fe */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12028E91: mov edi, eax */
    /* test edi, edi */ /* 0x12028E93: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12028EBC; /* 0x12028E95: js 0x12028ebc */
L_12028E97:
    eax = MEM32(ebp + 0x8); /* 0x12028E97: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x48)); /* 0x12028E9A: push dword ptr [eax + 0x48] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12028E9D: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x4C)); /* 0x12028EA0: push dword ptr [eax + 0x4c] */
    edx = MEM32(ecx); /* 0x12028EA3: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12028EA5: push ecx */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x12028EA6: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x12028EA9: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x12028EAA: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x12028EAF: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12028EB2: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x12028EB5: mov dword ptr [ebx], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x12028EB7: mov dword ptr [ebp - 4], esi */
    goto L_12028EBF; /* 0x12028EBA: jmp 0x12028ebf */
L_12028EBC:
    esi = MEM32(ebp + (-0x4)); /* 0x12028EBC: mov esi, dword ptr [ebp - 4] */
L_12028EBF:
    /* test esi, esi */ /* 0x12028EBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028EC9; /* 0x12028EC1: je 0x12028ec9 */
L_12028EC3:
    eax = MEM32(esi); /* 0x12028EC3: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x12028EC5: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12028EC6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_12028EC9:
    eax = edi; /* 0x12028EC9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12028ECB: pop edi */
    esi = POP32_VAL(esp); /* 0x12028ECC: pop esi */
    ebx = POP32_VAL(esp); /* 0x12028ECD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12028ECE: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12028ECF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12028ED7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028ED7u);

L_12028ED7:
    edi = edi; /* 0x12028ED7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028ED9: push ebp */
    ebp = esp; /* 0x12028EDA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12028EDC: push ecx */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x12028EDD: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x12028EE1: push esi */
    esi = ecx; /* 0x12028EE2: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028F19; /* 0x12028EE4: je 0x12028f19 */
L_12028EE6:
    PUSH32(esp, ebx); /* 0x12028EE6: push ebx */
    PUSH32(esp, edi); /* 0x12028EE7: push edi */
    edi = esi + (-0x4); /* 0x12028EE8: lea edi, [esi - 4] */
    eax = MEM32(edi); /* 0x12028EEB: mov eax, dword ptr [edi] */
    ebx = eax; /* 0x12028EED: mov ebx, eax */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x44u); /* 0x12028EEF: imul ebx, ebx, 0x44 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x12028EF2: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12028EF4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_12028F06; /* 0x12028EF5: js 0x12028f06 */
L_12028EF7:
    esi = eax; /* 0x12028EF7: mov esi, eax */
L_12028EF9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x44u; /* 0x12028EF9: sub ebx, 0x44 */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x12028EFC: mov ecx, ebx */
    RECOMP_CALL(sub_12029754); /* 0x12028EFE: call 0x12029754 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12028F03: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12028EF9; /* 0x12028F04: jns 0x12028ef9 */
L_12028F06:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12028F06: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028F13; /* 0x12028F0A: je 0x12028f13 */
L_12028F0C:
    PUSH32(esp, edi); /* 0x12028F0C: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12028F0D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12028F12: pop ecx */
L_12028F13:
    eax = edi; /* 0x12028F13: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12028F15: pop edi */
    ebx = POP32_VAL(esp); /* 0x12028F16: pop ebx */
    goto L_12028F2D; /* 0x12028F17: jmp 0x12028f2d */
L_12028F19:
    RECOMP_CALL(sub_12029754); /* 0x12028F19: call 0x12029754 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12028F1E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028F2B; /* 0x12028F22: je 0x12028f2b */
L_12028F24:
    PUSH32(esp, esi); /* 0x12028F24: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12028F25: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12028F2A: pop ecx */
L_12028F2B:
    eax = esi; /* 0x12028F2B: mov eax, esi */
L_12028F2D:
    esi = POP32_VAL(esp); /* 0x12028F2D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12028F2E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12028F2F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12028F37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12028F37u);

L_12028F37:
    edi = edi; /* 0x12028F37: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12028F39: push ebp */
    ebp = esp; /* 0x12028F3A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x12028F3C: sub esp, 0x50 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x12028F3F: fldz  */
    PUSH32(esp, ebx); /* 0x12028F41: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12028F42: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12028F44: fstp dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x12028F47: push esi */
    PUSH32(esp, edi); /* 0x12028F48: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12028F49: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x50)) = ecx; /* 0x12028F4C: mov dword ptr [ebp - 0x50], ecx */
    esi = ebx; /* 0x12028F4F: mov esi, ebx */
    MEM32(ebp + (-0x38)) = ebx; /* 0x12028F51: mov dword ptr [ebp - 0x38], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x12028F54: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x12028F57: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x12028F5A: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x12028F5D: mov dword ptr [ebp - 0x28], ebx */
    /* test edi, edi */ /* 0x12028F60: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028FA3; /* 0x12028F62: je 0x12028fa3 */
L_12028F64:
    ecx = edi; /* 0x12028F64: mov ecx, edi */
    edx = ecx + 0x1; /* 0x12028F66: lea edx, [ecx + 1] */
L_12028F69:
    SET_LO8(eax, MEM8(ecx)); /* 0x12028F69: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12028F6B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12028F6C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028F69; /* 0x12028F6E: jne 0x12028f69 */
L_12028F70:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12028F70: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x12028F72: lea eax, [ecx + 1] */
    PUSH32(esp, 0x120014BCu); /* 0x12028F75: push 0x120014bc */
    PUSH32(esp, eax); /* 0x12028F7A: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x12028F7B: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_12018970); /* 0x12028F7E: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12028F83: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12028F84: pop ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x12028F85: mov dword ptr [ebp - 0x38], eax */
    /* test eax, eax */ /* 0x12028F88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12028F96; /* 0x12028F8A: jne 0x12028f96 */
L_12028F8C:
    ebx = 0x8007000Eu; /* 0x12028F8C: mov ebx, 0x8007000e */
    goto L_1202940B; /* 0x12028F91: jmp 0x1202940b */
L_12028F96:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12028F96: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12028F99: push edi */
    PUSH32(esp, eax); /* 0x12028F9A: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x12028F9B: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12028FA0: add esp, 0xc */
    _flag_k = FK_ADD;
L_12028FA3:
    edi = MEM32(ebp + 0x20); /* 0x12028FA3: mov edi, dword ptr [ebp + 0x20] */
    PUSH32(esp, 8); /* 0x12028FA6: push 8 */
    edx = POP32_VAL(esp); /* 0x12028FA8: pop edx */
    /* test edi, edi */ /* 0x12028FA9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12028FFF; /* 0x12028FAB: je 0x12028fff */
L_12028FAD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12028FAD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x12028FAF: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12028FB1: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12028FB3: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x12028FB6: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12028FBB: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12028FBD: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12028FBF: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12028FC0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12028FC5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12028FC6: pop ecx */
    ecx = eax; /* 0x12028FC7: mov ecx, eax */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x12028FC9: mov dword ptr [ebp - 0x2c], ecx */
    /* test ecx, ecx */ /* 0x12028FCC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293B3; /* 0x12028FCE: je 0x120293b3 */
L_12028FD4:
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x12028FD4: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x12028FD4: shl edi, 3 */
    PUSH32(esp, edi); /* 0x12028FD7: push edi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x12028FD8: push dword ptr [ebp + 0x24] */
    PUSH32(esp, ecx); /* 0x12028FDB: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x12028FDC: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x2C)); /* 0x12028FE1: mov ecx, dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(edi + ecx + (-0x8))); /* 0x12028FE4: fld dword ptr [edi + ecx - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12028FE8: add esp, 0xc */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x12028FEB: fcomp qword ptr [0x12001a48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12028FF1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12028FF3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12028FFF; /* 0x12028FF6: jnp 0x12028fff */
L_12028FF8:
    fp_push(*(float*)&MEM32(edi + ecx + (-0x8))); /* 0x12028FF8: fld dword ptr [edi + ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12028FFC: fstp dword ptr [ebp - 4] */
L_12028FFF:
    edi = MEM32(ebp + 0x1C); /* 0x12028FFF: mov edi, dword ptr [ebp + 0x1c] */
    /* test edi, edi */ /* 0x12029002: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293AC; /* 0x12029004: je 0x120293ac */
L_1202900A:
    PUSH32(esp, 0x120014BCu); /* 0x1202900A: push 0x120014bc */
    PUSH32(esp, edi); /* 0x1202900F: push edi */
    RECOMP_CALL(sub_12018970); /* 0x12029010: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12029015: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12029017: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12029018: pop ecx */
    MEM32(ebp + (-0x4C)) = esi; /* 0x12029019: mov dword ptr [ebp - 0x4c], esi */
    /* test esi, esi */ /* 0x1202901C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293B3; /* 0x1202901E: je 0x120293b3 */
L_12029024:
    PUSH32(esp, edi); /* 0x12029024: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12029025: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x12029028: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x12029029: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202902E: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 8); /* 0x12029031: push 8 */
    edx = POP32_VAL(esp); /* 0x12029033: pop edx */
    /* cmp edi, edx */ /* 0x12029034: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120293AC; /* 0x12029036: jb 0x120293ac */
L_1202903C:
    eax = MEM32(esi); /* 0x1202903C: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0x4); /* 0x1202903E: mov ecx, dword ptr [esi + 4] */
    edi = edx; /* 0x12029041: mov edi, edx */
    MEM32(ebp + 0x8) = eax; /* 0x12029043: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x12029046: mov dword ptr [ebp - 0x3c], ecx */
    MEM32(ebp + (-0x44)) = edi; /* 0x12029049: mov dword ptr [ebp - 0x44], edi */
    /* test eax, eax */ /* 0x1202904C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293AC; /* 0x1202904E: je 0x120293ac */
L_12029054:
    PUSH32(esp, 0x120014BCu); /* 0x12029054: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12029059: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1202905B: push 4 */
    edx = POP32_VAL(esp); /* 0x1202905D: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202905E: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12029060: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12029063: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12029065: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12029067: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12029068: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202906D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202906E: pop ecx */
    MEM32(ebp + (-0x28)) = eax; /* 0x1202906F: mov dword ptr [ebp - 0x28], eax */
    /* test eax, eax */ /* 0x12029072: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293B3; /* 0x12029074: je 0x120293b3 */
L_1202907A:
    eax = MEM32(ebp + 0x8); /* 0x1202907A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x120014BCu); /* 0x1202907D: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12029082: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x44u); /* 0x12029084: push 0x44 */
    edx = POP32_VAL(esp); /* 0x12029086: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12029087: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12029089: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202908C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202908E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029090: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12029092: add ecx, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x12029095: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x12029098: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1202909A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1202909C: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1202909D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120290A2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120290A3: pop ecx */
    ecx = eax; /* 0x120290A4: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120290A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120290D9; /* 0x120290A8: je 0x120290d9 */
L_120290AA:
    eax = MEM32(ebp + 0x8); /* 0x120290AA: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x120290AD: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120290AF: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120290B2: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x120290B3: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + 0x24) = ecx; /* 0x120290B6: mov dword ptr [ebp + 0x24], ecx */
    MEM32(ebp + 0x18) = eax; /* 0x120290B9: mov dword ptr [ebp + 0x18], eax */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_120290DE; /* 0x120290BC: js 0x120290de */
L_120290BE:
    edi = ecx; /* 0x120290BE: mov edi, ecx */
    ebx = eax; /* 0x120290C0: mov ebx, eax */
L_120290C2:
    ecx = edi; /* 0x120290C2: mov ecx, edi */
    RECOMP_CALL(sub_12029713); /* 0x120290C4: call 0x12029713 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x44u; /* 0x120290C9: add edi, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120290CC: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_120290C2; /* 0x120290CD: jns 0x120290c2 */
L_120290CF:
    edi = MEM32(ebp + (-0x44)); /* 0x120290CF: mov edi, dword ptr [ebp - 0x44] */
    ecx = MEM32(ebp + (-0x8)); /* 0x120290D2: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120290D5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120290DE; /* 0x120290D7: jmp 0x120290de */
L_120290D9:
    ecx = ebx; /* 0x120290D9: mov ecx, ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x120290DB: mov dword ptr [ebp - 8], ebx */
L_120290DE:
    /* test ecx, ecx */ /* 0x120290DE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293B3; /* 0x120290E0: je 0x120293b3 */
L_120290E6:
    eax = MEM32(ebp + 0x8); /* 0x120290E6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x120014BCu); /* 0x120290E9: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120290EE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x120290F0: push 8 */
    edx = POP32_VAL(esp); /* 0x120290F2: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120290F3: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120290F5: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120290F8: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120290FA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120290FC: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120290FD: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12029102: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12029103: pop ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x12029104: mov dword ptr [ebp - 0x30], eax */
    /* test eax, eax */ /* 0x12029107: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293B3; /* 0x12029109: je 0x120293b3 */
L_1202910F:
    ecx = MEM32(ebp + 0x8); /* 0x1202910F: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x12029112: mov edx, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x34)) = ebx; /* 0x12029115: mov dword ptr [ebp - 0x34], ebx */
    /* test ecx, ecx */ /* 0x12029118: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029312; /* 0x1202911A: je 0x12029312 */
L_12029120:
    eax = MEM32(ebp + (-0x8)); /* 0x12029120: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x12029123: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x24) = eax; /* 0x12029126: mov dword ptr [ebp + 0x24], eax */
L_12029129:
    eax = edi + 0x10; /* 0x12029129: lea eax, [edi + 0x10] */
    /* cmp edx, eax */ /* 0x1202912C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120293AC; /* 0x1202912E: jb 0x120293ac */
L_12029134:
    ecx = MEM32(edi + esi + 0x4); /* 0x12029134: mov ecx, dword ptr [edi + esi + 4] */
    eax = MEM32(edi + esi); /* 0x12029138: mov eax, dword ptr [edi + esi] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1202913B: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(edi + esi + 0x8); /* 0x1202913E: mov ecx, dword ptr [edi + esi + 8] */
    MEM32(ebp + 0x18) = eax; /* 0x12029142: mov dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x3C)); /* 0x12029145: add eax, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x12029148: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(edi + esi + 0xC); /* 0x1202914B: mov ecx, dword ptr [edi + esi + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1202914F: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x12029152: mov dword ptr [ebp - 0x10], ecx */
    /* cmp edx, eax */ /* 0x12029155: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120293AC; /* 0x12029157: jb 0x120293ac */
L_1202915D:
    eax = MEM32(ebp + 0x18); /* 0x1202915D: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x3C)); /* 0x12029160: add eax, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12029163: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x12029165: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x12029167: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1202916A: mov eax, dword ptr [ebp - 0x14] */
    /* cmp edx, eax */ /* 0x1202916D: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1202916F: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x12029171: neg edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x40)) = edx; /* 0x12029173: mov dword ptr [ebp - 0x40], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12029176: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x12029178: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1202917B: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1202917D: neg edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edx; /* 0x1202917F: mov dword ptr [ebp - 0x20], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12029182: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x12029184: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x12029186: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x12029188: neg edx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + (-0x40)), 0 */ /* 0x1202918A: cmp dword ptr [ebp - 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = edx; /* 0x1202918E: mov dword ptr [ebp + 0x18], edx */
    edx = MEM32(ebp + 0x1C); /* 0x12029191: mov edx, dword ptr [ebp + 0x1c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120291A3; /* 0x12029194: je 0x120291a3 */
L_12029196:
    ecx = edi + esi; /* 0x12029196: lea ecx, [edi + esi] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x12029199: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x12029199: shl eax, 4 */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1202919C: mov dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1202919F: add edi, eax */
    _flag_k = FK_ADD;
    goto L_120291B2; /* 0x120291A1: jmp 0x120291b2 */
L_120291A3:
    eax = 0x121D9994u; /* 0x120291A3: mov eax, 0x121d9994 */
    MEM32(ebp + (-0x14)) = 1; /* 0x120291A8: mov dword ptr [ebp - 0x14], 1 */
    MEM32(ebp + (-0x18)) = eax; /* 0x120291AF: mov dword ptr [ebp - 0x18], eax */
L_120291B2:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x120291B2: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120291C8; /* 0x120291B6: je 0x120291c8 */
L_120291B8:
    eax = edi + esi; /* 0x120291B8: lea eax, [edi + esi] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120291BB: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x120291BE: mov eax, dword ptr [ebp - 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x120291C1: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x120291C4: add edi, eax */
    _flag_k = FK_ADD;
    goto L_120291D7; /* 0x120291C6: jmp 0x120291d7 */
L_120291C8:
    eax = 0x121D99A4u; /* 0x120291C8: mov eax, 0x121d99a4 */
    MEM32(ebp + (-0xC)) = 1; /* 0x120291CD: mov dword ptr [ebp - 0xc], 1 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120291D4: mov dword ptr [ebp - 0x1c], eax */
L_120291D7:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x120291D7: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120291ED; /* 0x120291DB: je 0x120291ed */
L_120291DD:
    eax = edi + esi; /* 0x120291DD: lea eax, [edi + esi] */
    MEM32(ebp + (-0x24)) = eax; /* 0x120291E0: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x120291E3: mov eax, dword ptr [ebp - 0x10] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x120291E6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x120291E6: shl eax, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x120291E9: add edi, eax */
    _flag_k = FK_ADD;
    goto L_120291FC; /* 0x120291EB: jmp 0x120291fc */
L_120291ED:
    eax = 0x121D99B8u; /* 0x120291ED: mov eax, 0x121d99b8 */
    MEM32(ebp + (-0x10)) = 1; /* 0x120291F2: mov dword ptr [ebp - 0x10], 1 */
    MEM32(ebp + (-0x24)) = eax; /* 0x120291F9: mov dword ptr [ebp - 0x24], eax */
L_120291FC:
    /* cmp edx, edi */ /* 0x120291FC: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120293AC; /* 0x120291FE: jb 0x120293ac */
L_12029204:
    eax = MEM32(ebp + (-0x14)); /* 0x12029204: mov eax, dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12029207: fld dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1202920A: mov ecx, dword ptr [ebp - 0x18] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1202920D: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1202920D: shl eax, 4 */
    fp_push(*(float*)&MEM32(eax + ecx + (-0x10))); /* 0x12029210: fld dword ptr [eax + ecx - 0x10] */
    MEM32(ebp + (-0x48)) = eax; /* 0x12029214: mov dword ptr [ebp - 0x48], eax */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12029217: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029219: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202921B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202922C; /* 0x1202921E: jnp 0x1202922c */
L_12029220:
    eax = MEM32(ebp + (-0x48)); /* 0x12029220: mov eax, dword ptr [ebp - 0x48] */
    edx = ecx; /* 0x12029223: mov edx, ecx */
    fp_push(*(float*)&MEM32(eax + edx + (-0x10))); /* 0x12029225: fld dword ptr [eax + edx - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12029229: fstp dword ptr [ebp - 4] */
L_1202922C:
    eax = MEM32(ebp + (-0xC)); /* 0x1202922C: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1202922F: fld dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x12029232: mov ecx, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12029235: imul eax, eax, 0x14 */
    MEM32(ebp + (-0x48)) = eax; /* 0x12029238: mov dword ptr [ebp - 0x48], eax */
    fp_push(*(float*)&MEM32(eax + ecx + (-0x14))); /* 0x1202923B: fld dword ptr [eax + ecx - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202923F: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029241: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12029243: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12029254; /* 0x12029246: jnp 0x12029254 */
L_12029248:
    eax = MEM32(ebp + (-0x48)); /* 0x12029248: mov eax, dword ptr [ebp - 0x48] */
    edx = ecx; /* 0x1202924B: mov edx, ecx */
    fp_push(*(float*)&MEM32(eax + edx + (-0x14))); /* 0x1202924D: fld dword ptr [eax + edx - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12029251: fstp dword ptr [ebp - 4] */
L_12029254:
    eax = MEM32(ebp + (-0x10)); /* 0x12029254: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12029257: fld dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1202925A: mov ecx, dword ptr [ebp - 0x24] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1202925D: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1202925D: shl eax, 4 */
    fp_push(*(float*)&MEM32(eax + ecx + (-0x10))); /* 0x12029260: fld dword ptr [eax + ecx - 0x10] */
    MEM32(ebp + (-0x48)) = eax; /* 0x12029264: mov dword ptr [ebp - 0x48], eax */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12029267: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029269: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202926B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202927C; /* 0x1202926E: jnp 0x1202927c */
L_12029270:
    eax = MEM32(ebp + (-0x48)); /* 0x12029270: mov eax, dword ptr [ebp - 0x48] */
    edx = ecx; /* 0x12029273: mov edx, ecx */
    fp_push(*(float*)&MEM32(eax + edx + (-0x10))); /* 0x12029275: fld dword ptr [eax + edx - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12029279: fstp dword ptr [ebp - 4] */
L_1202927C:
    eax = MEM32(ebp + 0x24); /* 0x1202927C: mov eax, dword ptr [ebp + 0x24] */
    edx = MEM32(ebp + (-0x44)); /* 0x1202927F: mov edx, dword ptr [ebp - 0x44] */
    MEM32(eax + (-0x10)) = edx; /* 0x12029282: mov dword ptr [eax - 0x10], edx */
    edx = MEM32(ebp + 0x24); /* 0x12029285: mov edx, dword ptr [ebp + 0x24] */
    eax = MEM32(ebp + (-0x14)); /* 0x12029288: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edx + (-0xC)) = eax; /* 0x1202928B: mov dword ptr [edx - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1202928E: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edx) = eax; /* 0x12029291: mov dword ptr [edx], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x12029293: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 1; /* 0x12029296: and dword ptr [ebp - 0x20], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + (-0x8)) = eax; /* 0x1202929A: mov dword ptr [edx - 8], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1202929D: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edx + 0x4) = eax; /* 0x120292A0: mov dword ptr [edx + 4], eax */
    eax = MEM32(ebp + 0x18); /* 0x120292A3: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x120292A6: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120292A9: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x20))));
    eax = eax | MEM32(ebp + (-0x20)); /* 0x120292AB: or eax, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x44)); /* 0x120292AE: mov ecx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120292B1: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = eax; /* 0x120292B3: mov dword ptr [ebp + 0x18], eax */
    eax = edx; /* 0x120292B6: mov eax, edx */
    eax = MEM32(eax + 0x30); /* 0x120292B8: mov eax, dword ptr [eax + 0x30] */
    edx = MEM32(ebp + (-0x40)); /* 0x120292BB: mov edx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x120292BE: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + 0x18) | eax)); _flag_b = (uint32_t)((MEM32(ebp + 0x18) | eax));
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | eax; /* 0x120292C1: or dword ptr [ebp + 0x18], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x18); /* 0x120292C4: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x120292C7: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x120292CA: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x24); /* 0x120292CC: mov edx, dword ptr [ebp + 0x24] */
    MEM32(edx + 0x30) = eax; /* 0x120292CF: mov dword ptr [edx + 0x30], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x120292D2: mov eax, dword ptr [ebp - 0x10] */
    MEM32(edx + (-0x4)) = eax; /* 0x120292D5: mov dword ptr [edx - 4], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x120292D8: mov eax, dword ptr [ebp - 0x24] */
    MEM32(edx + 0x8) = eax; /* 0x120292DB: mov dword ptr [edx + 8], eax */
    eax = edx; /* 0x120292DE: mov eax, edx */
    edx = MEM32(ebp + (-0x34)); /* 0x120292E0: mov edx, dword ptr [ebp - 0x34] */
    MEM32(eax + 0x24) = ebx; /* 0x120292E3: mov dword ptr [eax + 0x24], ebx */
    MEM32(eax + 0x28) = ebx; /* 0x120292E6: mov dword ptr [eax + 0x28], ebx */
    MEM32(eax + 0x2C) = ebx; /* 0x120292E9: mov dword ptr [eax + 0x2c], ebx */
    eax = MEM32(ebp + (-0x30)); /* 0x120292EC: mov eax, dword ptr [ebp - 0x30] */
    MEM32(eax + edx * 8) = ecx; /* 0x120292EF: mov dword ptr [eax + edx*8], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x120292F2: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + edx * 8 + 0x4) = edx; /* 0x120292F5: mov dword ptr [eax + edx*8 + 4], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120292F9: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x34)) = edx; /* 0x120292FA: mov dword ptr [ebp - 0x34], edx */
    edx = MEM32(ebp + 0x24); /* 0x120292FD: mov edx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x44u; /* 0x12029300: add edx, 0x44 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x24) = edx; /* 0x12029303: mov dword ptr [ebp + 0x24], edx */
    edx = MEM32(ebp + 0x1C); /* 0x12029306: mov edx, dword ptr [ebp + 0x1c] */
    /* cmp MEM32(ebp + (-0x34)), ecx */ /* 0x12029309: cmp dword ptr [ebp - 0x34], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12029129; /* 0x1202930C: jb 0x12029129 */
L_12029312:
    edi = MEM32(ebp + 0x8); /* 0x12029312: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x12028D3Cu); /* 0x12029315: push 0x12028d3c */
    PUSH32(esp, 8); /* 0x1202931A: push 8 */
    ecx = POP32_VAL(esp); /* 0x1202931C: pop ecx */
    PUSH32(esp, ecx); /* 0x1202931D: push ecx */
    PUSH32(esp, edi); /* 0x1202931E: push edi */
    PUSH32(esp, eax); /* 0x1202931F: push eax */
    MEM8(esi + edx + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x12029320: mov byte ptr [esi + edx - 1], bl */
    RECOMP_CALL(sub_121BF4B8); /* 0x12029324: call 0x121bf4b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12029329: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x1202932C: mov ecx, ebx */
    /* test edi, edi */ /* 0x1202932E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202934F; /* 0x12029330: je 0x1202934f */
L_12029332:
    edx = MEM32(ebp + (-0x30)); /* 0x12029332: mov edx, dword ptr [ebp - 0x30] */
    ebx = MEM32(ebp + (-0x28)); /* 0x12029335: mov ebx, dword ptr [ebp - 0x28] */
    PUSH32(esp, 8); /* 0x12029338: push 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1202933A: add edx, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1202933D: pop esi */
L_1202933E:
    eax = MEM32(edx); /* 0x1202933E: mov eax, dword ptr [edx] */
    MEM32(ebx + ecx * 4) = eax; /* 0x12029340: mov dword ptr [ebx + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12029343: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x12029344: add edx, esi */
    _flag_k = FK_ADD;
    /* cmp ecx, edi */ /* 0x12029346: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202933E; /* 0x12029348: jb 0x1202933e */
L_1202934A:
    esi = MEM32(ebp + (-0x4C)); /* 0x1202934A: mov esi, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202934D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202934F:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1202934F: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x12029352: fld qword ptr [ebp + 0xc] */
    _st[1] /= _st[0]; /* 0x12029355: fdiv st(1), st(0) */
    fp_push(*(double*)ADDR(0x12001EB0)); /* 0x12029357: fld qword ptr [0x12001eb0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202935D: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202935F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12029361: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202936C; /* 0x12029364: jne 0x1202936c */
L_12029366:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12029366: fstp st(1) */
    fp_push(1.0); /* 0x12029368: fld1  */
    fp_xch(1); /* 0x1202936A: fxch st(1) */
L_1202936C:
    ecx = MEM32(ebp + (-0x50)); /* 0x1202936C: mov ecx, dword ptr [ebp - 0x50] */
    eax = MEM32(ebp + (-0x38)); /* 0x1202936F: mov eax, dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x18) = _v; } /* 0x12029372: fstp qword ptr [ecx + 0x18] */
    MEM32(ecx + 0x14) = eax; /* 0x12029375: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x12029378: mov eax, dword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x1202937B: fstp qword ptr [ecx + 0x20] */
    MEM32(ecx + 0x3C) = eax; /* 0x1202937E: mov dword ptr [ecx + 0x3c], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x12029381: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ecx + 0x40) = eax; /* 0x12029384: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(ebp + 0x14); /* 0x12029387: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x28) = eax; /* 0x1202938A: mov dword ptr [ecx + 0x28], eax */
    eax = MEM32(ebp + 0x20); /* 0x1202938D: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ecx + 0x2C) = eax; /* 0x12029390: mov dword ptr [ecx + 0x2c], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x12029393: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ecx + 0x30) = eax; /* 0x12029396: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(ebp + 0x1C); /* 0x12029399: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ecx + 0x4C) = esi; /* 0x1202939C: mov dword ptr [ecx + 0x4c], esi */
    MEM32(ecx + 0x38) = edi; /* 0x1202939F: mov dword ptr [ecx + 0x38], edi */
    MEM32(ecx + 0x34) = ebx; /* 0x120293A2: mov dword ptr [ecx + 0x34], ebx */
    MEM32(ecx + 0x48) = eax; /* 0x120293A5: mov dword ptr [ecx + 0x48], eax */
    esi = ebx; /* 0x120293A8: mov esi, ebx */
    goto L_120293F2; /* 0x120293AA: jmp 0x120293f2 */
L_120293AC:
    ebx = 0x8876086Cu; /* 0x120293AC: mov ebx, 0x8876086c */
    goto L_120293B8; /* 0x120293B1: jmp 0x120293b8 */
L_120293B3:
    ebx = 0x8007000Eu; /* 0x120293B3: mov ebx, 0x8007000e */
L_120293B8:
    eax = MEM32(ebp + (-0x38)); /* 0x120293B8: mov eax, dword ptr [ebp - 0x38] */
    /* test eax, eax */ /* 0x120293BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293C6; /* 0x120293BD: je 0x120293c6 */
L_120293BF:
    PUSH32(esp, eax); /* 0x120293BF: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x120293C0: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120293C5: pop ecx */
L_120293C6:
    eax = MEM32(ebp + (-0x8)); /* 0x120293C6: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x120293C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293D6; /* 0x120293CB: je 0x120293d6 */
L_120293CD:
    PUSH32(esp, 3); /* 0x120293CD: push 3 */
    ecx = eax; /* 0x120293CF: mov ecx, eax */
    RECOMP_CALL(sub_12028ED7); /* 0x120293D1: call 0x12028ed7 */
    RECOMP_FLAGS_IN();
L_120293D6:
    eax = MEM32(ebp + (-0x28)); /* 0x120293D6: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x120293D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293E4; /* 0x120293DB: je 0x120293e4 */
L_120293DD:
    PUSH32(esp, eax); /* 0x120293DD: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x120293DE: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120293E3: pop ecx */
L_120293E4:
    eax = MEM32(ebp + (-0x2C)); /* 0x120293E4: mov eax, dword ptr [ebp - 0x2c] */
    /* test eax, eax */ /* 0x120293E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120293F2; /* 0x120293E9: je 0x120293f2 */
L_120293EB:
    PUSH32(esp, eax); /* 0x120293EB: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x120293EC: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120293F1: pop ecx */
L_120293F2:
    eax = MEM32(ebp + (-0x30)); /* 0x120293F2: mov eax, dword ptr [ebp - 0x30] */
    /* test eax, eax */ /* 0x120293F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029400; /* 0x120293F7: je 0x12029400 */
L_120293F9:
    PUSH32(esp, eax); /* 0x120293F9: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x120293FA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120293FF: pop ecx */
L_12029400:
    /* test esi, esi */ /* 0x12029400: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202940B; /* 0x12029402: je 0x1202940b */
L_12029404:
    PUSH32(esp, esi); /* 0x12029404: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12029405: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202940A: pop ecx */
L_1202940B:
    edi = POP32_VAL(esp); /* 0x1202940B: pop edi */
    esi = POP32_VAL(esp); /* 0x1202940C: pop esi */
    eax = ebx; /* 0x1202940D: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1202940F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12029410: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x12029411: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_12029419(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029419u);

L_12029419:
    edi = edi; /* 0x12029419: mov edi, edi */
    PUSH32(esp, esi); /* 0x1202941B: push esi */
    esi = ecx; /* 0x1202941C: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1202941E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202941F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x12001ED0u; /* 0x12029421: mov dword ptr [esi], 0x12001ed0 */
    MEM32(esi + 0x8) = 0x12001F10u; /* 0x12029427: mov dword ptr [esi + 8], 0x12001f10 */
    /* cmp MEM32(esi + 0x14), edi */ /* 0x1202942E: cmp dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202943F; /* 0x12029431: je 0x1202943f */
L_12029433:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x12029433: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_121BF388); /* 0x12029436: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202943B: pop ecx */
    MEM32(esi + 0x14) = edi; /* 0x1202943C: mov dword ptr [esi + 0x14], edi */
L_1202943F:
    ecx = MEM32(esi + 0x3C); /* 0x1202943F: mov ecx, dword ptr [esi + 0x3c] */
    /* test ecx, ecx */ /* 0x12029442: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029450; /* 0x12029444: je 0x12029450 */
L_12029446:
    PUSH32(esp, 3); /* 0x12029446: push 3 */
    RECOMP_CALL(sub_12028ED7); /* 0x12029448: call 0x12028ed7 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3C) = edi; /* 0x1202944D: mov dword ptr [esi + 0x3c], edi */
L_12029450:
    /* cmp MEM32(esi + 0x40), edi */ /* 0x12029450: cmp dword ptr [esi + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029461; /* 0x12029453: je 0x12029461 */
L_12029455:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x12029455: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_121BF388); /* 0x12029458: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202945D: pop ecx */
    MEM32(esi + 0x40) = edi; /* 0x1202945E: mov dword ptr [esi + 0x40], edi */
L_12029461:
    /* cmp MEM32(esi + 0x30), edi */ /* 0x12029461: cmp dword ptr [esi + 0x30], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029472; /* 0x12029464: je 0x12029472 */
L_12029466:
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x12029466: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_121BF388); /* 0x12029469: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202946E: pop ecx */
    MEM32(esi + 0x30) = edi; /* 0x1202946F: mov dword ptr [esi + 0x30], edi */
L_12029472:
    /* cmp MEM32(esi + 0x4C), edi */ /* 0x12029472: cmp dword ptr [esi + 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029483; /* 0x12029475: je 0x12029483 */
L_12029477:
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x12029477: push dword ptr [esi + 0x4c] */
    RECOMP_CALL(sub_121BF388); /* 0x1202947A: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202947F: pop ecx */
    MEM32(esi + 0x4C) = edi; /* 0x12029480: mov dword ptr [esi + 0x4c], edi */
L_12029483:
    edi = POP32_VAL(esp); /* 0x12029483: pop edi */
    esi = POP32_VAL(esp); /* 0x12029484: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12029485: ret  */
    RECOMP_REGS_OUT();
}

void sub_120294B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120294B8u);

L_120294B8:
    fp_push(1.0); /* 0x120294B8: fld1  */
    MEM32(ecx + 0x8) = 0x12001EC0u; /* 0x120294BA: mov dword ptr [ecx + 8], 0x12001ec0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120294C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(ecx + 0x18) = _st[0]; /* 0x120294C3: fst qword ptr [ecx + 0x18] */
    MEM32(ecx + 0x14) = eax; /* 0x120294C6: mov dword ptr [ecx + 0x14], eax */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x120294C9: fstp qword ptr [ecx + 0x20] */
    MEM32(ecx + 0x4C) = eax; /* 0x120294CC: mov dword ptr [ecx + 0x4c], eax */
    MEM32(ecx + 0x38) = eax; /* 0x120294CF: mov dword ptr [ecx + 0x38], eax */
    MEM32(ecx + 0x3C) = eax; /* 0x120294D2: mov dword ptr [ecx + 0x3c], eax */
    MEM32(ecx + 0x40) = eax; /* 0x120294D5: mov dword ptr [ecx + 0x40], eax */
    MEM32(ecx + 0x2C) = eax; /* 0x120294D8: mov dword ptr [ecx + 0x2c], eax */
    MEM32(ecx + 0x30) = eax; /* 0x120294DB: mov dword ptr [ecx + 0x30], eax */
    MEM32(ecx + 0x34) = eax; /* 0x120294DE: mov dword ptr [ecx + 0x34], eax */
    MEM32(ecx + 0x28) = eax; /* 0x120294E1: mov dword ptr [ecx + 0x28], eax */
    MEM32(ecx) = 0x12001ED0u; /* 0x120294E4: mov dword ptr [ecx], 0x12001ed0 */
    MEM32(ecx + 0x8) = 0x12001F10u; /* 0x120294EA: mov dword ptr [ecx + 8], 0x12001f10 */
    MEM32(ecx + 0x10) = 1; /* 0x120294F1: mov dword ptr [ecx + 0x10], 1 */
    eax = ecx; /* 0x120294F8: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120294FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_12029500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029500u);

L_12029500:
    edi = edi; /* 0x12029500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029502: push ebp */
    ebp = esp; /* 0x12029503: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12029505: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12029506: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x12029509: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12029513; /* 0x1202950C: je 0x12029513 */
L_1202950E:
    eax = MEM32(esi + 0x10); /* 0x1202950E: mov eax, dword ptr [esi + 0x10] */
    goto L_12029523; /* 0x12029511: jmp 0x12029523 */
L_12029513:
    ecx = esi; /* 0x12029513: mov ecx, esi */
    RECOMP_CALL(sub_12029419); /* 0x12029515: call 0x12029419 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202951A: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202951B: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12029520: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029521: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12029523:
    esi = POP32_VAL(esp); /* 0x12029523: pop esi */
    ebp = POP32_VAL(esp); /* 0x12029524: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12029525: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1202952D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202952Du);

L_1202952D:
    edi = edi; /* 0x1202952D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202952F: push ebp */
    ebp = esp; /* 0x12029530: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12029532: push ebx */
    PUSH32(esp, esi); /* 0x12029533: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12029534: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x8876086Cu; /* 0x12029536: mov ecx, 0x8876086c */
    /* cmp MEM32(ebp + 0x24), esi */ /* 0x1202953B: cmp dword ptr [ebp + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12029542; /* 0x1202953E: jne 0x12029542 */
L_12029540:
    esi = ecx; /* 0x12029540: mov esi, ecx */
L_12029542:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x12029542: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202954A; /* 0x12029546: jne 0x1202954a */
L_12029548:
    esi = ecx; /* 0x12029548: mov esi, ecx */
L_1202954A:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1202954A: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12029558; /* 0x1202954E: jne 0x12029558 */
L_12029550:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x12029550: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12029558; /* 0x12029554: jbe 0x12029558 */
L_12029556:
    esi = ecx; /* 0x12029556: mov esi, ecx */
L_12029558:
    ebx = MEM32(ebp + 0x14); /* 0x12029558: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x1202955B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202956B; /* 0x1202955D: je 0x1202956b */
L_1202955F:
    /* cmp ebx, 1 */ /* 0x1202955F: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202956B; /* 0x12029562: je 0x1202956b */
L_12029564:
    /* cmp ebx, 2 */ /* 0x12029564: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202956B; /* 0x12029567: je 0x1202956b */
L_12029569:
    esi = ecx; /* 0x12029569: mov esi, ecx */
L_1202956B:
    fp_push(*(double*)ADDR(0x12001EB0)); /* 0x1202956B: fld qword ptr [0x12001eb0] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0xC)); /* 0x12029571: fcomp qword ptr [ebp + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029574: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12029576: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202957D; /* 0x12029579: jne 0x1202957d */
L_1202957B:
    esi = ecx; /* 0x1202957B: mov esi, ecx */
L_1202957D:
    /* test esi, esi */ /* 0x1202957D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120295EE; /* 0x1202957F: js 0x120295ee */
L_12029581:
    PUSH32(esp, edi); /* 0x12029581: push edi */
    PUSH32(esp, 0x120014BCu); /* 0x12029582: push 0x120014bc */
    PUSH32(esp, 0x50u); /* 0x12029587: push 0x50 */
    RECOMP_CALL(sub_12018970); /* 0x12029589: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202958E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202958F: pop ecx */
    /* test eax, eax */ /* 0x12029590: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202959F; /* 0x12029592: je 0x1202959f */
L_12029594:
    ecx = eax; /* 0x12029594: mov ecx, eax */
    RECOMP_CALL(sub_120294B8); /* 0x12029596: call 0x120294b8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202959B: mov edi, eax */
    goto L_120295A1; /* 0x1202959D: jmp 0x120295a1 */
L_1202959F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202959F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120295A1:
    /* test edi, edi */ /* 0x120295A1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120295AC; /* 0x120295A3: jne 0x120295ac */
L_120295A5:
    esi = 0x8007000Eu; /* 0x120295A5: mov esi, 0x8007000e */
    goto L_120295ED; /* 0x120295AA: jmp 0x120295ed */
L_120295AC:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120295AC: push dword ptr [ebp + 0x20] */
    esi = MEM32(ebp + 0x18); /* 0x120295AF: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120295B2: push dword ptr [ebp + 0x1c] */
    eax = MEM32(esi); /* 0x120295B5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120295B7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x120295B8: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120295BB: push eax */
    eax = MEM32(esi); /* 0x120295BC: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120295BE: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120295BF: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x120295C2: fld qword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120295C5: push eax */
    PUSH32(esp, ebx); /* 0x120295C6: push ebx */
    PUSH32(esp, ecx); /* 0x120295C7: push ecx */
    PUSH32(esp, ecx); /* 0x120295C8: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x120295C9: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120295CC: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x120295CF: mov ecx, edi */
    RECOMP_CALL(sub_12028F37); /* 0x120295D1: call 0x12028f37 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120295D6: mov esi, eax */
    /* test esi, esi */ /* 0x120295D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120295E3; /* 0x120295DA: js 0x120295e3 */
L_120295DC:
    eax = MEM32(ebp + 0x24); /* 0x120295DC: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax) = edi; /* 0x120295DF: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120295E1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120295E3:
    /* test edi, edi */ /* 0x120295E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120295ED; /* 0x120295E5: je 0x120295ed */
L_120295E7:
    eax = MEM32(edi); /* 0x120295E7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120295E9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120295EA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120295ED:
    edi = POP32_VAL(esp); /* 0x120295ED: pop edi */
L_120295EE:
    eax = esi; /* 0x120295EE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120295F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x120295F1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120295F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120295F3: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120295FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120295FBu);

L_120295FB:
    edi = edi; /* 0x120295FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120295FD: push ebp */
    ebp = esp; /* 0x120295FE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12029600: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x12029603: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202962F; /* 0x12029605: je 0x1202962f */
L_12029607:
    PUSH32(esp, esi); /* 0x12029607: push esi */
    PUSH32(esp, edi); /* 0x12029608: push edi */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x12029609: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x12029609: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1202960C: add ecx, edx */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x1202960E: mov esi, ecx */
    edi = ebp + (-0x10); /* 0x12029610: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029613: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029614: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029615: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029616: movsd dword ptr es:[edi], dword ptr [esi] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x12029617: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x12029617: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1202961A: add eax, edx */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1202961C: mov esi, eax */
    edi = ecx; /* 0x1202961E: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029620: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029621: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029622: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029623: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x10); /* 0x12029624: lea esi, [ebp - 0x10] */
    edi = eax; /* 0x12029627: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029629: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202962A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202962B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202962C: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1202962D: pop edi */
    esi = POP32_VAL(esp); /* 0x1202962E: pop esi */
L_1202962F:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202962F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12029630: ret  */
    RECOMP_REGS_OUT();
}

void sub_12029636(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029636u);

L_12029636:
    edi = edi; /* 0x12029636: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029638: push ebp */
    ebp = esp; /* 0x12029639: mov ebp, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202963B: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + eax * 8 + 0xC)); /* 0x1202963D: fld dword ptr [ecx + eax*8 + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12029641: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12029644: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + eax * 8 + 0xC)); /* 0x12029646: fld dword ptr [ecx + eax*8 + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202964A: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202964C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202964E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12029658; /* 0x12029651: jp 0x12029658 */
L_12029653:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029653: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12029655: inc eax */
    _flag_k = FK_INC;
    goto L_1202965A; /* 0x12029656: jmp 0x1202965a */
L_12029658:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029658: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202965A:
    ebp = POP32_VAL(esp); /* 0x1202965A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1202965B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12029663(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029663u);

L_12029663:
    edi = edi; /* 0x12029663: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029665: push ebp */
    ebp = esp; /* 0x12029666: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x12029668: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1202966B: push edi */
    edi = eax; /* 0x1202966C: mov edi, eax */
    eax = MEM32(ebp + 0xC); /* 0x1202966E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, edi */ /* 0x12029671: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120296DC; /* 0x12029673: je 0x120296dc */
L_12029675:
    ecx = MEM32(ebp + 0x8); /* 0x12029675: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12029678: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1202967A: push ebx */
    PUSH32(esp, esi); /* 0x1202967B: push esi */
    ebx = ecx + eax * 8; /* 0x1202967C: lea ebx, [ecx + eax*8] */
    edx = MEM32(ebx + 0x4); /* 0x1202967F: mov edx, dword ptr [ebx + 4] */
    eax = edi; /* 0x12029682: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x12029684: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x12029684: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12029687: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x8); /* 0x12029689: mov ecx, dword ptr [eax + 8] */
    esi = MEM32(eax + 0x4); /* 0x1202968C: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1202968F: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx + 0x8); /* 0x12029692: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12029695: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x12029697: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202969A: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx + eax * 8 + 0x4) = edi; /* 0x1202969D: mov dword ptr [ebx + eax*8 + 4], edi */
    eax = ebx; /* 0x120296A1: mov eax, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x120296A3: add edx, edx */
    _flag_k = FK_ADD;
    MEM32(eax + edx * 8 + 0x8) = edi; /* 0x120296A5: mov dword ptr [eax + edx*8 + 8], edi */
    eax = MEM32(ebp + 0xC); /* 0x120296A9: mov eax, dword ptr [ebp + 0xc] */
    edx = ebx; /* 0x120296AC: mov edx, ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x120296AE: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x120296B1: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x120296B3: add esi, esi */
    _flag_k = FK_ADD;
    MEM32(edx + ecx * 8 + 0x4) = eax; /* 0x120296B5: mov dword ptr [edx + ecx*8 + 4], eax */
    MEM32(edx + esi * 8 + 0x8) = eax; /* 0x120296B9: mov dword ptr [edx + esi*8 + 8], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120296BD: mov eax, dword ptr [ebp - 8] */
    esi = ebx; /* 0x120296C0: mov esi, ebx */
    edi = ebp + (-0x18); /* 0x120296C2: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296C5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296C6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296C7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296C8: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = ebx; /* 0x120296C9: mov edi, ebx */
    esi = eax; /* 0x120296CB: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296CD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296CE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296CF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296D0: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x18); /* 0x120296D1: lea esi, [ebp - 0x18] */
    edi = eax; /* 0x120296D4: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296D6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296D7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296D8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120296D9: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x120296DA: pop esi */
    ebx = POP32_VAL(esp); /* 0x120296DB: pop ebx */
L_120296DC:
    edi = POP32_VAL(esp); /* 0x120296DC: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120296DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120296DE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120296E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120296E6u);

L_120296E6:
    edi = edi; /* 0x120296E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120296E8: push ebp */
    ebp = esp; /* 0x120296E9: mov ebp, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120296EB: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + eax * 8 + 0xC)); /* 0x120296ED: fld dword ptr [ecx + eax*8 + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120296F1: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120296F4: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + eax * 8 + 0xC)); /* 0x120296F6: fld dword ptr [ecx + eax*8 + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120296FA: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120296FC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120296FE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029708; /* 0x12029701: jne 0x12029708 */
L_12029703:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029703: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12029705: inc eax */
    _flag_k = FK_INC;
    goto L_1202970A; /* 0x12029706: jmp 0x1202970a */
L_12029708:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029708: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202970A:
    ebp = POP32_VAL(esp); /* 0x1202970A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1202970B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12029713(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029713u);

L_12029713:
    _flag_a = (uint32_t)((MEM32(ecx + 0x40) | 8)); _flag_b = (uint32_t)((MEM32(ecx + 0x40) | 8));
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) | 8; /* 0x12029713: or dword ptr [ecx + 0x40], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12029717: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12029718: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1202971A: push 2 */
    MEM32(ecx) = esi; /* 0x1202971C: mov dword ptr [ecx], esi */
    MEM32(ecx + 0x10) = esi; /* 0x1202971E: mov dword ptr [ecx + 0x10], esi */
    MEM32(ecx + 0x14) = esi; /* 0x12029721: mov dword ptr [ecx + 0x14], esi */
    MEM32(ecx + 0x18) = esi; /* 0x12029724: mov dword ptr [ecx + 0x18], esi */
    eax = ecx + 0x24; /* 0x12029727: lea eax, [ecx + 0x24] */
    edx = POP32_VAL(esp); /* 0x1202972A: pop edx */
L_1202972B:
    MEM32(eax + (-0x8)) = esi; /* 0x1202972B: mov dword ptr [eax - 8], esi */
    MEM32(eax) = esi; /* 0x1202972E: mov dword ptr [eax], esi */
    MEM32(eax + 0x8) = esi; /* 0x12029730: mov dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12029733: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12029736: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202972B; /* 0x12029737: jne 0x1202972b */
L_12029739:
    MEM32(ecx + 0x4) = esi; /* 0x12029739: mov dword ptr [ecx + 4], esi */
    MEM32(ecx + 0x8) = esi; /* 0x1202973C: mov dword ptr [ecx + 8], esi */
    MEM32(ecx + 0xC) = esi; /* 0x1202973F: mov dword ptr [ecx + 0xc], esi */
    MEM32(ecx + 0x34) = esi; /* 0x12029742: mov dword ptr [ecx + 0x34], esi */
    MEM32(ecx + 0x38) = esi; /* 0x12029745: mov dword ptr [ecx + 0x38], esi */
    MEM32(ecx + 0x3C) = esi; /* 0x12029748: mov dword ptr [ecx + 0x3c], esi */
    eax = ecx; /* 0x1202974B: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1202974D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1202974E: ret  */
    RECOMP_REGS_OUT();
}

void sub_12029754(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029754u);

L_12029754:
    edi = edi; /* 0x12029754: mov edi, edi */
    PUSH32(esp, esi); /* 0x12029756: push esi */
    esi = ecx; /* 0x12029757: mov esi, ecx */
    /* test MEM8(esi + 0x40), 8 */ /* 0x12029759: test byte ptr [esi + 0x40], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x40)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120297E6; /* 0x1202975D: je 0x120297e6 */
L_12029763:
    PUSH32(esp, ebx); /* 0x12029763: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12029764: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12029766: push edi */
    /* cmp MEM32(esi), ebx */ /* 0x12029767: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029775; /* 0x12029769: je 0x12029775 */
L_1202976B:
    PUSH32(esp, MEM32(esi)); /* 0x1202976B: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF388); /* 0x1202976D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12029772: pop ecx */
    MEM32(esi) = ebx; /* 0x12029773: mov dword ptr [esi], ebx */
L_12029775:
    /* cmp MEM32(esi + 0x10), ebx */ /* 0x12029775: cmp dword ptr [esi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029786; /* 0x12029778: je 0x12029786 */
L_1202977A:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1202977A: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_121BF388); /* 0x1202977D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12029782: pop ecx */
    MEM32(esi + 0x10) = ebx; /* 0x12029783: mov dword ptr [esi + 0x10], ebx */
L_12029786:
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x12029786: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029797; /* 0x12029789: je 0x12029797 */
L_1202978B:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1202978B: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_121BF388); /* 0x1202978E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12029793: pop ecx */
    MEM32(esi + 0x14) = ebx; /* 0x12029794: mov dword ptr [esi + 0x14], ebx */
L_12029797:
    /* cmp MEM32(esi + 0x18), ebx */ /* 0x12029797: cmp dword ptr [esi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120297A8; /* 0x1202979A: je 0x120297a8 */
L_1202979C:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1202979C: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_121BF388); /* 0x1202979F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120297A4: pop ecx */
    MEM32(esi + 0x18) = ebx; /* 0x120297A5: mov dword ptr [esi + 0x18], ebx */
L_120297A8:
    PUSH32(esp, 2); /* 0x120297A8: push 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x24u; /* 0x120297AA: add esi, 0x24 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x120297AD: pop edi */
L_120297AE:
    /* cmp MEM32(esi + (-0x8)), ebx */ /* 0x120297AE: cmp dword ptr [esi - 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120297BF; /* 0x120297B1: je 0x120297bf */
L_120297B3:
    PUSH32(esp, MEM32(esi + (-0x8))); /* 0x120297B3: push dword ptr [esi - 8] */
    RECOMP_CALL(sub_121BF388); /* 0x120297B6: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120297BB: pop ecx */
    MEM32(esi + (-0x8)) = ebx; /* 0x120297BC: mov dword ptr [esi - 8], ebx */
L_120297BF:
    /* cmp MEM32(esi), ebx */ /* 0x120297BF: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120297CD; /* 0x120297C1: je 0x120297cd */
L_120297C3:
    PUSH32(esp, MEM32(esi)); /* 0x120297C3: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF388); /* 0x120297C5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120297CA: pop ecx */
    MEM32(esi) = ebx; /* 0x120297CB: mov dword ptr [esi], ebx */
L_120297CD:
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x120297CD: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120297DE; /* 0x120297D0: je 0x120297de */
L_120297D2:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x120297D2: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF388); /* 0x120297D5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120297DA: pop ecx */
    MEM32(esi + 0x8) = ebx; /* 0x120297DB: mov dword ptr [esi + 8], ebx */
L_120297DE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120297DE: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120297E1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120297AE; /* 0x120297E2: jne 0x120297ae */
L_120297E4:
    edi = POP32_VAL(esp); /* 0x120297E4: pop edi */
    ebx = POP32_VAL(esp); /* 0x120297E5: pop ebx */
L_120297E6:
    esi = POP32_VAL(esp); /* 0x120297E6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120297E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_120297ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120297EDu);

L_120297ED:
    edi = edi; /* 0x120297ED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120297EF: push ebp */
    ebp = esp; /* 0x120297F0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120297F2: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120297F3: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120297F6: push edi */
    PUSH32(esp, 4); /* 0x120297F7: push 4 */
    ecx = POP32_VAL(esp); /* 0x120297F9: pop ecx */
    edi = 0x12001DC8u; /* 0x120297FA: mov edi, 0x12001dc8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120297FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12029801: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12029827; /* 0x12029803: je 0x12029827 */
L_12029805:
    esi = MEM32(ebp + 0xC); /* 0x12029805: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x12029808: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202980A: pop ecx */
    edi = 0x12001DB8u; /* 0x1202980B: mov edi, 0x12001db8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029810: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12029812: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12029827; /* 0x12029814: je 0x12029827 */
L_12029816:
    esi = MEM32(ebp + 0xC); /* 0x12029816: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x12029819: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202981B: pop ecx */
    edi = 0x12018314u; /* 0x1202981C: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029821: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12029823: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_12029839; /* 0x12029825: jne 0x12029839 */
L_12029827:
    ecx = MEM32(ebp + 0x8); /* 0x12029827: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x1202982A: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x1202982D: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x1202982F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12029831: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12029832: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029835: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202983E; /* 0x12029837: jmp 0x1202983e */
L_12029839:
    eax = 0x80004002u; /* 0x12029839: mov eax, 0x80004002 */
L_1202983E:
    edi = POP32_VAL(esp); /* 0x1202983E: pop edi */
    esi = POP32_VAL(esp); /* 0x1202983F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12029840: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12029841: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12029849(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029849u);

L_12029849:
    edi = edi; /* 0x12029849: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202984B: push ebp */
    ebp = esp; /* 0x1202984C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1202984E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x28); /* 0x12029851: mov eax, dword ptr [ecx + 0x28] */
    /* test eax, eax */ /* 0x12029854: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029871; /* 0x12029856: je 0x12029871 */
L_12029858:
    /* cmp eax, 1 */ /* 0x12029858: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029871; /* 0x1202985B: je 0x12029871 */
L_1202985D:
    /* cmp eax, 2 */ /* 0x1202985D: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12029869; /* 0x12029860: jne 0x12029869 */
L_12029862:
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x12029862: fld qword ptr [ecx + 0x20] */
    _st[0] += _st[0]; /* 0x12029865: fadd st(0), st(0) */
    goto L_12029874; /* 0x12029867: jmp 0x12029874 */
L_12029869:
    fp_push(*(double*)ADDR(0x12001EA0)); /* 0x12029869: fld qword ptr [0x12001ea0] */
    goto L_12029874; /* 0x1202986F: jmp 0x12029874 */
L_12029871:
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x12029871: fld qword ptr [ecx + 0x20] */
L_12029874:
    ebp = POP32_VAL(esp); /* 0x12029874: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12029875: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1202987D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202987Du);

L_1202987D:
    edi = edi; /* 0x1202987D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202987F: push ebp */
    ebp = esp; /* 0x12029880: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12029882: push ecx */
    PUSH32(esp, ecx); /* 0x12029883: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x12029884: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x28); /* 0x12029887: mov eax, dword ptr [ecx + 0x28] */
    PUSH32(esp, esi); /* 0x1202988A: push esi */
    /* test eax, eax */ /* 0x1202988B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120298AB; /* 0x1202988D: jne 0x120298ab */
L_1202988F:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202988F: fld qword ptr [ebp + 0xc] */
    esi = ecx + 0x20; /* 0x12029892: lea esi, [ecx + 0x20] */
    fp_push(*(double*)ADDR(esi)); /* 0x12029895: fld qword ptr [esi] */
    RECOMP_CALL(sub_121BF4AC); /* 0x12029897: call 0x121bf4ac */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1202989C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202989E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120298A0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120298A2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029916; /* 0x120298A5: jne 0x12029916 */
L_120298A7:
    _st[0] += *(double*)ADDR(esi); /* 0x120298A7: fadd qword ptr [esi] */
    goto L_12029916; /* 0x120298A9: jmp 0x12029916 */
L_120298AB:
    /* cmp eax, 1 */ /* 0x120298AB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120298EC; /* 0x120298AE: jne 0x120298ec */
L_120298B0:
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x120298B0: fld qword ptr [ecx + 0x20] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x120298B3: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120298B6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120298B8: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120298BA: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x120298BC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120298C5; /* 0x120298BF: jp 0x120298c5 */
L_120298C1:
    fp_push(_st[0]); /* 0x120298C1: fld st(0) */
    goto L_120298C8; /* 0x120298C3: jmp 0x120298c8 */
L_120298C5:
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x120298C5: fld qword ptr [ecx + 0x20] */
L_120298C8:
    fp_push(0.0); /* 0x120298C8: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120298CA: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120298CC: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120298CE: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x120298D0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120298D9; /* 0x120298D3: jne 0x120298d9 */
L_120298D5:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120298D5: fstp st(1) */
    goto L_12029916; /* 0x120298D7: jmp 0x12029916 */
L_120298D9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120298D9: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x20)); /* 0x120298DB: fcom qword ptr [ecx + 0x20] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120298DE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120298E0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12029916; /* 0x120298E3: jnp 0x12029916 */
L_120298E5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120298E5: fstp st(0) */
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x120298E7: fld qword ptr [ecx + 0x20] */
    goto L_12029916; /* 0x120298EA: jmp 0x12029916 */
L_120298EC:
    /* cmp eax, 2 */ /* 0x120298EC: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12029913; /* 0x120298EF: jne 0x12029913 */
L_120298F1:
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x120298F1: fld qword ptr [ecx + 0x20] */
    _st[0] += _st[0]; /* 0x120298F4: fadd st(0), st(0) */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x120298F6: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x120298F9: fld qword ptr [ebp + 0xc] */
    fp_xch(1); /* 0x120298FC: fxch st(1) */
    RECOMP_CALL(sub_121BF4AC); /* 0x120298FE: call 0x121bf4ac */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x12029903: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12029905: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029907: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12029909: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029916; /* 0x1202990C: jne 0x12029916 */
L_1202990E:
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x1202990E: fadd qword ptr [ebp - 8] */
    goto L_12029916; /* 0x12029911: jmp 0x12029916 */
L_12029913:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x12029913: fld qword ptr [ebp + 0xc] */
L_12029916:
    esi = POP32_VAL(esp); /* 0x12029916: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12029917: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12029918: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12029920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029920u);

L_12029920:
    edi = edi; /* 0x12029920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029922: push ebp */
    ebp = esp; /* 0x12029923: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12029925: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x28); /* 0x12029928: mov eax, dword ptr [eax + 0x28] */
    ebp = POP32_VAL(esp); /* 0x1202992B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1202992C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12029934(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029934u);

L_12029934:
    edi = edi; /* 0x12029934: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029936: push ebp */
    ebp = esp; /* 0x12029937: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12029939: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1202993D: mov ecx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202994F; /* 0x12029940: jne 0x1202994f */
L_12029942:
    /* cmp MEM32(ecx + 0x2C), 0 */ /* 0x12029942: cmp dword ptr [ecx + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202994F; /* 0x12029946: jbe 0x1202994f */
L_12029948:
    eax = 0x8876086Cu; /* 0x12029948: mov eax, 0x8876086c */
    goto L_12029966; /* 0x1202994D: jmp 0x12029966 */
L_1202994F:
    eax = MEM32(ecx + 0x2C); /* 0x1202994F: mov eax, dword ptr [ecx + 0x2c] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x12029952: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x12029952: shl eax, 3 */
    PUSH32(esp, eax); /* 0x12029955: push eax */
    PUSH32(esp, MEM32(ecx + 0x30)); /* 0x12029956: push dword ptr [ecx + 0x30] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12029959: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF440); /* 0x1202995C: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12029961: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029964: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12029966:
    ebp = POP32_VAL(esp); /* 0x12029966: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12029967: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202996F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202996Fu);

L_1202996F:
    edi = edi; /* 0x1202996F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029971: push ebp */
    ebp = esp; /* 0x12029972: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x12029974: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12029977: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12029978: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(edx + 0x2C) */ /* 0x1202997B: cmp esi, dword ptr [edx + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029987; /* 0x1202997E: jb 0x12029987 */
L_12029980:
    eax = 0x8876086Cu; /* 0x12029980: mov eax, 0x8876086c */
    goto L_1202999B; /* 0x12029985: jmp 0x1202999b */
L_12029987:
    edx = MEM32(edx + 0x30); /* 0x12029987: mov edx, dword ptr [edx + 0x30] */
    eax = MEM32(edx + esi * 8); /* 0x1202998A: mov eax, dword ptr [edx + esi*8] */
    ecx = MEM32(ebp + 0x10); /* 0x1202998D: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x12029990: mov dword ptr [ecx], eax */
    eax = MEM32(edx + esi * 8 + 0x4); /* 0x12029992: mov eax, dword ptr [edx + esi*8 + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x12029996: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029999: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202999B:
    esi = POP32_VAL(esp); /* 0x1202999B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202999C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202999D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120299A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120299A5u);

L_120299A5:
    edi = edi; /* 0x120299A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120299A7: push ebp */
    ebp = esp; /* 0x120299A8: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x120299AA: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120299AD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120299AE: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(edx + 0x2C) */ /* 0x120299B1: cmp esi, dword ptr [edx + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120299BD; /* 0x120299B4: jb 0x120299bd */
L_120299B6:
    eax = 0x8876086Cu; /* 0x120299B6: mov eax, 0x8876086c */
    goto L_120299D1; /* 0x120299BB: jmp 0x120299d1 */
L_120299BD:
    ecx = MEM32(ebp + 0x10); /* 0x120299BD: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x120299C0: mov eax, dword ptr [ecx] */
    edx = MEM32(edx + 0x30); /* 0x120299C2: mov edx, dword ptr [edx + 0x30] */
    MEM32(edx + esi * 8) = eax; /* 0x120299C5: mov dword ptr [edx + esi*8], eax */
    eax = MEM32(ecx + 0x4); /* 0x120299C8: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + esi * 8 + 0x4) = eax; /* 0x120299CB: mov dword ptr [edx + esi*8 + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120299CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120299D1:
    esi = POP32_VAL(esp); /* 0x120299D1: pop esi */
    ebp = POP32_VAL(esp); /* 0x120299D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120299D3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120299DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120299DBu);

L_120299DB:
    edi = edi; /* 0x120299DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120299DD: push ebp */
    ebp = esp; /* 0x120299DE: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120299E0: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x120299E3: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x120299E6: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120299FE; /* 0x120299E9: jae 0x120299fe */
L_120299EB:
    ecx = MEM32(ecx + 0x3C); /* 0x120299EB: mov ecx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x120299EE: imul eax, eax, 0x44 */
    /* test MEM8(eax + ecx + 0x40), 1 */ /* 0x120299F1: test byte ptr [eax + ecx + 0x40], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x40)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120299FE; /* 0x120299F6: je 0x120299fe */
L_120299F8:
    eax = MEM32(eax + ecx + 0x4); /* 0x120299F8: mov eax, dword ptr [eax + ecx + 4] */
    goto L_12029A00; /* 0x120299FC: jmp 0x12029a00 */
L_120299FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120299FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12029A00:
    ebp = POP32_VAL(esp); /* 0x12029A00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12029A01: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12029A09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029A09u);

L_12029A09:
    edi = edi; /* 0x12029A09: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029A0B: push ebp */
    ebp = esp; /* 0x12029A0C: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12029A0E: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x12029A11: mov ecx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ecx + 0x38) */ /* 0x12029A14: cmp edx, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029A20; /* 0x12029A17: jb 0x12029a20 */
L_12029A19:
    eax = 0x8876086Cu; /* 0x12029A19: mov eax, 0x8876086c */
    goto L_12029A4E; /* 0x12029A1E: jmp 0x12029a4e */
L_12029A20:
    eax = MEM32(ecx + 0x3C); /* 0x12029A20: mov eax, dword ptr [ecx + 0x3c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44u); /* 0x12029A23: imul edx, edx, 0x44 */
    /* test MEM8(eax + edx + 0x40), 1 */ /* 0x12029A26: test byte ptr [eax + edx + 0x40], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x40)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029A4C; /* 0x12029A2B: je 0x12029a4c */
L_12029A2D:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x12029A2D: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029A19; /* 0x12029A31: je 0x12029a19 */
L_12029A33:
    ecx = eax; /* 0x12029A33: mov ecx, eax */
    eax = MEM32(ecx + edx + 0x4); /* 0x12029A35: mov eax, dword ptr [ecx + edx + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x12029A39: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x12029A39: shl eax, 4 */
    PUSH32(esp, eax); /* 0x12029A3C: push eax */
    PUSH32(esp, MEM32(ecx + edx + 0x10)); /* 0x12029A3D: push dword ptr [ecx + edx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12029A41: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF440); /* 0x12029A44: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12029A49: add esp, 0xc */
    _flag_k = FK_ADD;
L_12029A4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029A4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12029A4E:
    ebp = POP32_VAL(esp); /* 0x12029A4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12029A4F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12029A57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029A57u);

L_12029A57:
    edi = edi; /* 0x12029A57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029A59: push ebp */
    ebp = esp; /* 0x12029A5A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12029A5C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12029A5F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12029A60: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(eax + 0x38) */ /* 0x12029A63: cmp esi, dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029A6F; /* 0x12029A66: jb 0x12029a6f */
L_12029A68:
    eax = 0x8876086Cu; /* 0x12029A68: mov eax, 0x8876086c */
    goto L_12029A90; /* 0x12029A6D: jmp 0x12029a90 */
L_12029A6F:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44u); /* 0x12029A6F: imul esi, esi, 0x44 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x3C); /* 0x12029A72: add esi, dword ptr [eax + 0x3c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x12029A75: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x12029A78: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029A68; /* 0x12029A7B: jae 0x12029a68 */
L_12029A7D:
    esi = MEM32(esi + 0x10); /* 0x12029A7D: mov esi, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x12029A80: push edi */
    edi = MEM32(ebp + 0x14); /* 0x12029A81: mov edi, dword ptr [ebp + 0x14] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x12029A84: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x12029A84: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12029A87: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029A89: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029A8A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029A8B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029A8C: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029A8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12029A8F: pop edi */
L_12029A90:
    esi = POP32_VAL(esp); /* 0x12029A90: pop esi */
    ebp = POP32_VAL(esp); /* 0x12029A91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12029A92: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12029A9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029A9Au);

L_12029A9A:
    edi = edi; /* 0x12029A9A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029A9C: push ebp */
    ebp = esp; /* 0x12029A9D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12029A9F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x12029AA2: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x12029AA5: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029ABD; /* 0x12029AA8: jae 0x12029abd */
L_12029AAA:
    ecx = MEM32(ecx + 0x3C); /* 0x12029AAA: mov ecx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x12029AAD: imul eax, eax, 0x44 */
    /* test MEM8(eax + ecx + 0x40), 2 */ /* 0x12029AB0: test byte ptr [eax + ecx + 0x40], 2 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x40)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029ABD; /* 0x12029AB5: je 0x12029abd */
L_12029AB7:
    eax = MEM32(eax + ecx + 0x8); /* 0x12029AB7: mov eax, dword ptr [eax + ecx + 8] */
    goto L_12029ABF; /* 0x12029ABB: jmp 0x12029abf */
L_12029ABD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029ABD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12029ABF:
    ebp = POP32_VAL(esp); /* 0x12029ABF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12029AC0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12029AC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029AC8u);

L_12029AC8:
    edi = edi; /* 0x12029AC8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029ACA: push ebp */
    ebp = esp; /* 0x12029ACB: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12029ACD: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x12029AD0: mov ecx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ecx + 0x38) */ /* 0x12029AD3: cmp edx, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029ADF; /* 0x12029AD6: jb 0x12029adf */
L_12029AD8:
    eax = 0x8876086Cu; /* 0x12029AD8: mov eax, 0x8876086c */
    goto L_12029B0D; /* 0x12029ADD: jmp 0x12029b0d */
L_12029ADF:
    eax = MEM32(ecx + 0x3C); /* 0x12029ADF: mov eax, dword ptr [ecx + 0x3c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44u); /* 0x12029AE2: imul edx, edx, 0x44 */
    /* test MEM8(eax + edx + 0x40), 2 */ /* 0x12029AE5: test byte ptr [eax + edx + 0x40], 2 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x40)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029B0B; /* 0x12029AEA: je 0x12029b0b */
L_12029AEC:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x12029AEC: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029AD8; /* 0x12029AF0: je 0x12029ad8 */
L_12029AF2:
    ecx = eax; /* 0x12029AF2: mov ecx, eax */
    eax = MEM32(ecx + edx + 0x8); /* 0x12029AF4: mov eax, dword ptr [ecx + edx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12029AF8: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x12029AFB: push eax */
    PUSH32(esp, MEM32(ecx + edx + 0x14)); /* 0x12029AFC: push dword ptr [ecx + edx + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12029B00: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF440); /* 0x12029B03: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12029B08: add esp, 0xc */
    _flag_k = FK_ADD;
L_12029B0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029B0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12029B0D:
    ebp = POP32_VAL(esp); /* 0x12029B0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12029B0E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12029B16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029B16u);

L_12029B16:
    edi = edi; /* 0x12029B16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029B18: push ebp */
    ebp = esp; /* 0x12029B19: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12029B1B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12029B1E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12029B1F: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(eax + 0x38) */ /* 0x12029B22: cmp esi, dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029B2E; /* 0x12029B25: jb 0x12029b2e */
L_12029B27:
    eax = 0x8876086Cu; /* 0x12029B27: mov eax, 0x8876086c */
    goto L_12029B50; /* 0x12029B2C: jmp 0x12029b50 */
L_12029B2E:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44u); /* 0x12029B2E: imul esi, esi, 0x44 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x3C); /* 0x12029B31: add esi, dword ptr [eax + 0x3c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x12029B34: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x12029B37: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029B27; /* 0x12029B3A: jae 0x12029b27 */
L_12029B3C:
    esi = MEM32(esi + 0x14); /* 0x12029B3C: mov esi, dword ptr [esi + 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12029B3F: imul eax, eax, 0x14 */
    PUSH32(esp, edi); /* 0x12029B42: push edi */
    edi = MEM32(ebp + 0x14); /* 0x12029B43: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, 5); /* 0x12029B46: push 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12029B48: add esi, eax */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x12029B4A: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12029B4B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029B4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12029B4F: pop edi */
L_12029B50:
    esi = POP32_VAL(esp); /* 0x12029B50: pop esi */
    ebp = POP32_VAL(esp); /* 0x12029B51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12029B52: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12029B5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029B5Au);

L_12029B5A:
    edi = edi; /* 0x12029B5A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029B5C: push ebp */
    ebp = esp; /* 0x12029B5D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12029B5F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x12029B62: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x12029B65: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029B7D; /* 0x12029B68: jae 0x12029b7d */
L_12029B6A:
    ecx = MEM32(ecx + 0x3C); /* 0x12029B6A: mov ecx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x12029B6D: imul eax, eax, 0x44 */
    /* test MEM8(eax + ecx + 0x40), 4 */ /* 0x12029B70: test byte ptr [eax + ecx + 0x40], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x40)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029B7D; /* 0x12029B75: je 0x12029b7d */
L_12029B77:
    eax = MEM32(eax + ecx + 0xC); /* 0x12029B77: mov eax, dword ptr [eax + ecx + 0xc] */
    goto L_12029B7F; /* 0x12029B7B: jmp 0x12029b7f */
L_12029B7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029B7D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12029B7F:
    ebp = POP32_VAL(esp); /* 0x12029B7F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12029B80: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12029B88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029B88u);

L_12029B88:
    edi = edi; /* 0x12029B88: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029B8A: push ebp */
    ebp = esp; /* 0x12029B8B: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12029B8D: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x12029B90: mov ecx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ecx + 0x38) */ /* 0x12029B93: cmp edx, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029B9F; /* 0x12029B96: jb 0x12029b9f */
L_12029B98:
    eax = 0x8876086Cu; /* 0x12029B98: mov eax, 0x8876086c */
    goto L_12029BCD; /* 0x12029B9D: jmp 0x12029bcd */
L_12029B9F:
    eax = MEM32(ecx + 0x3C); /* 0x12029B9F: mov eax, dword ptr [ecx + 0x3c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44u); /* 0x12029BA2: imul edx, edx, 0x44 */
    /* test MEM8(eax + edx + 0x40), 4 */ /* 0x12029BA5: test byte ptr [eax + edx + 0x40], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x40)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029BCB; /* 0x12029BAA: je 0x12029bcb */
L_12029BAC:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x12029BAC: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029B98; /* 0x12029BB0: je 0x12029b98 */
L_12029BB2:
    ecx = eax; /* 0x12029BB2: mov ecx, eax */
    eax = MEM32(ecx + edx + 0xC); /* 0x12029BB4: mov eax, dword ptr [ecx + edx + 0xc] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x12029BB8: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x12029BB8: shl eax, 4 */
    PUSH32(esp, eax); /* 0x12029BBB: push eax */
    PUSH32(esp, MEM32(ecx + edx + 0x18)); /* 0x12029BBC: push dword ptr [ecx + edx + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12029BC0: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF440); /* 0x12029BC3: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12029BC8: add esp, 0xc */
    _flag_k = FK_ADD;
L_12029BCB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029BCB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12029BCD:
    ebp = POP32_VAL(esp); /* 0x12029BCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12029BCE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12029BD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029BD6u);

L_12029BD6:
    edi = edi; /* 0x12029BD6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029BD8: push ebp */
    ebp = esp; /* 0x12029BD9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12029BDB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12029BDE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12029BDF: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(eax + 0x38) */ /* 0x12029BE2: cmp esi, dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029BEE; /* 0x12029BE5: jb 0x12029bee */
L_12029BE7:
    eax = 0x8876086Cu; /* 0x12029BE7: mov eax, 0x8876086c */
    goto L_12029C0F; /* 0x12029BEC: jmp 0x12029c0f */
L_12029BEE:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44u); /* 0x12029BEE: imul esi, esi, 0x44 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x3C); /* 0x12029BF1: add esi, dword ptr [eax + 0x3c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x12029BF4: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x12029BF7: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029BE7; /* 0x12029BFA: jae 0x12029be7 */
L_12029BFC:
    esi = MEM32(esi + 0x18); /* 0x12029BFC: mov esi, dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x12029BFF: push edi */
    edi = MEM32(ebp + 0x14); /* 0x12029C00: mov edi, dword ptr [ebp + 0x14] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x12029C03: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x12029C03: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12029C06: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029C08: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029C09: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029C0A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12029C0B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12029C0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12029C0E: pop edi */
L_12029C0F:
    esi = POP32_VAL(esp); /* 0x12029C0F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12029C10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12029C11: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12029C19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029C19u);

L_12029C19:
    edi = edi; /* 0x12029C19: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029C1B: push ebp */
    ebp = esp; /* 0x12029C1C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12029C1E: push ecx */
    PUSH32(esp, ecx); /* 0x12029C1F: push ecx */
    PUSH32(esp, esi); /* 0x12029C20: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12029C21: mov esi, dword ptr [ebp + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44u); /* 0x12029C24: imul esi, esi, 0x44 */
    PUSH32(esp, edi); /* 0x12029C27: push edi */
    edi = ecx; /* 0x12029C28: mov edi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0x3C); /* 0x12029C2A: add esi, dword ptr [edi + 0x3c] */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x4); /* 0x12029C2D: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0x8); /* 0x12029C30: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x10); /* 0x12029C33: mov eax, dword ptr [esi + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x12029C36: imul ecx, ecx, 0x14 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x12029C39: add edx, edx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + edx * 8 + (-0x10))); /* 0x12029C3B: fld dword ptr [eax + edx*8 - 0x10] */
    eax = MEM32(esi + 0x14); /* 0x12029C3F: mov eax, dword ptr [esi + 0x14] */
    _st[0] = fabs(_st[0]); /* 0x12029C42: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12029C44: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12029C47: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12029C4A: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + eax + (-0x14))); /* 0x12029C4D: fld dword ptr [ecx + eax - 0x14] */
    ecx = MEM32(esi + 0xC); /* 0x12029C51: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x18); /* 0x12029C54: mov eax, dword ptr [esi + 0x18] */
    _st[0] = fabs(_st[0]); /* 0x12029C57: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12029C59: fstp dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12029C5C: add ecx, ecx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12029C5E: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12029C61: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax + ecx * 8 + (-0x10))); /* 0x12029C64: fld dword ptr [eax + ecx*8 - 0x10] */
    _st[0] = fabs(_st[0]); /* 0x12029C68: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12029C6A: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12029C6D: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12029C70: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12029C73: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12029C76: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12029C79: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029C7B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12029C7D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12029C89; /* 0x12029C80: jp 0x12029c89 */
L_12029C82:
    fp_xch(1); /* 0x12029C82: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12029C84: fst dword ptr [ebp + 8] */
    goto L_12029C8E; /* 0x12029C87: jmp 0x12029c8e */
L_12029C89:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12029C89: fst dword ptr [ebp + 8] */
    fp_xch(1); /* 0x12029C8C: fxch st(1) */
L_12029C8E:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12029C8E: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12029C91: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12029C94: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029C96: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12029C98: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12029CA3; /* 0x12029C9B: jp 0x12029ca3 */
L_12029C9D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12029C9D: fstp st(1) */
L_12029C9F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12029C9F: fstp st(1) */
    goto L_12029CB0; /* 0x12029CA1: jmp 0x12029cb0 */
L_12029CA3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12029CA3: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12029CA5: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029CA7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12029CA9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029C9F; /* 0x12029CAC: je 0x12029c9f */
L_12029CAE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12029CAE: fstp st(0) */
L_12029CB0:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12029CB0: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12029CB3: fld dword ptr [ebp + 8] */
    _st[0] /= *(double*)ADDR(edi + 0x18); /* 0x12029CB6: fdiv qword ptr [edi + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x20)); /* 0x12029CB9: fcom qword ptr [edi + 0x20] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029CBC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12029CBE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12029CC8; /* 0x12029CC1: jp 0x12029cc8 */
L_12029CC3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12029CC3: fstp st(0) */
    fp_push(*(double*)ADDR(edi + 0x20)); /* 0x12029CC5: fld qword ptr [edi + 0x20] */
L_12029CC8:
    *(double*)ADDR(edi + 0x20) = _st[0]; /* 0x12029CC8: fst qword ptr [edi + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x12029CCB: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029CD1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12029CD3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12029CDD; /* 0x12029CD6: jp 0x12029cdd */
L_12029CD8:
    fp_push(1.0); /* 0x12029CD8: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x20) = _v; } /* 0x12029CDA: fstp qword ptr [edi + 0x20] */
L_12029CDD:
    edi = POP32_VAL(esp); /* 0x12029CDD: pop edi */
    esi = POP32_VAL(esp); /* 0x12029CDE: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12029CDF: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12029CE0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12029CE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029CE8u);

L_12029CE8:
    fp_push(0.0); /* 0x12029CE8: fldz  */
    PUSH32(esp, esi); /* 0x12029CEA: push esi */
    PUSH32(esp, edi); /* 0x12029CEB: push edi */
    edi = ecx; /* 0x12029CEC: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12029CEE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x20) = _v; } /* 0x12029CF0: fstp qword ptr [edi + 0x20] */
    /* cmp MEM32(edi + 0x38), esi */ /* 0x12029CF3: cmp dword ptr [edi + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12029D06; /* 0x12029CF6: jbe 0x12029d06 */
L_12029CF8:
    PUSH32(esp, esi); /* 0x12029CF8: push esi */
    ecx = edi; /* 0x12029CF9: mov ecx, edi */
    RECOMP_CALL(sub_12029C19); /* 0x12029CFB: call 0x12029c19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12029D00: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x38) */ /* 0x12029D01: cmp esi, dword ptr [edi + 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12029CF8; /* 0x12029D04: jb 0x12029cf8 */
L_12029D06:
    edi = POP32_VAL(esp); /* 0x12029D06: pop edi */
    esi = POP32_VAL(esp); /* 0x12029D07: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12029D08: ret  */
    RECOMP_REGS_OUT();
}

void sub_12029D0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029D0Eu);

L_12029D0E:
    edi = edi; /* 0x12029D0E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029D10: push ebp */
    ebp = esp; /* 0x12029D11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12029D13: push ecx */
    PUSH32(esp, ebx); /* 0x12029D14: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12029D15: mov ebx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebx); /* 0x12029D18: mov edx, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x12029D1A: push esi */
    PUSH32(esp, edi); /* 0x12029D1B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12029D1C: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12029D1F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x12029D21: mov dword ptr [ebp - 4], ecx */
    /* cmp edi, edx */ /* 0x12029D24: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029D2F; /* 0x12029D26: jb 0x12029d2f */
L_12029D28:
    esi = 0x8876086Cu; /* 0x12029D28: mov esi, 0x8876086c */
    goto L_12029D65; /* 0x12029D2D: jmp 0x12029d65 */
L_12029D2F:
    /* cmp edx, 1 */ /* 0x12029D2F: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12029D3B; /* 0x12029D32: jne 0x12029d3b */
L_12029D34:
    esi = 0x88760B5Cu; /* 0x12029D34: mov esi, 0x88760b5c */
    goto L_12029D65; /* 0x12029D39: jmp 0x12029d65 */
L_12029D3B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12029D3B: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebx) = edx; /* 0x12029D3C: mov dword ptr [ebx], edx */
    ecx = edi; /* 0x12029D3E: mov ecx, edi */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x12029D40: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x12029D40: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x12029D43: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x12029D46: sub edx, edi */
    _flag_k = FK_CMP;
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x12029D48: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x12029D48: shl edx, 4 */
    PUSH32(esp, edx); /* 0x12029D4B: push edx */
    eax = ecx + 0x10; /* 0x12029D4C: lea eax, [ecx + 0x10] */
    PUSH32(esp, eax); /* 0x12029D4F: push eax */
    PUSH32(esp, ecx); /* 0x12029D50: push ecx */
    RECOMP_CALL(sub_121BF4C4); /* 0x12029D51: call 0x121bf4c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12029D56: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebx) */ /* 0x12029D59: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12029D65; /* 0x12029D5B: jne 0x12029d65 */
L_12029D5D:
    ecx = MEM32(ebp + (-0x4)); /* 0x12029D5D: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_12029CE8); /* 0x12029D60: call 0x12029ce8 */
    RECOMP_FLAGS_IN();
L_12029D65:
    edi = POP32_VAL(esp); /* 0x12029D65: pop edi */
    eax = esi; /* 0x12029D66: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12029D68: pop esi */
    ebx = POP32_VAL(esp); /* 0x12029D69: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12029D6A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12029D6B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12029D73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029D73u);

L_12029D73:
    edi = edi; /* 0x12029D73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029D75: push ebp */
    ebp = esp; /* 0x12029D76: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12029D78: push ecx */
    PUSH32(esp, ebx); /* 0x12029D79: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12029D7A: mov ebx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebx); /* 0x12029D7D: mov edx, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x12029D7F: push esi */
    PUSH32(esp, edi); /* 0x12029D80: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12029D81: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12029D84: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x12029D86: mov dword ptr [ebp - 4], ecx */
    /* cmp edi, edx */ /* 0x12029D89: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12029D94; /* 0x12029D8B: jb 0x12029d94 */
L_12029D8D:
    esi = 0x8876086Cu; /* 0x12029D8D: mov esi, 0x8876086c */
    goto L_12029DCA; /* 0x12029D92: jmp 0x12029dca */
L_12029D94:
    /* cmp edx, 1 */ /* 0x12029D94: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12029DA0; /* 0x12029D97: jne 0x12029da0 */
L_12029D99:
    esi = 0x88760B5Cu; /* 0x12029D99: mov esi, 0x88760b5c */
    goto L_12029DCA; /* 0x12029D9E: jmp 0x12029dca */
L_12029DA0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12029DA0: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebx) = edx; /* 0x12029DA1: mov dword ptr [ebx], edx */
    ecx = edi; /* 0x12029DA3: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x12029DA5: imul ecx, ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x12029DA8: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x12029DAB: sub edx, edi */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x14u); /* 0x12029DAD: imul edx, edx, 0x14 */
    PUSH32(esp, edx); /* 0x12029DB0: push edx */
    eax = ecx + 0x14; /* 0x12029DB1: lea eax, [ecx + 0x14] */
    PUSH32(esp, eax); /* 0x12029DB4: push eax */
    PUSH32(esp, ecx); /* 0x12029DB5: push ecx */
    RECOMP_CALL(sub_121BF4C4); /* 0x12029DB6: call 0x121bf4c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12029DBB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebx) */ /* 0x12029DBE: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12029DCA; /* 0x12029DC0: jne 0x12029dca */
L_12029DC2:
    ecx = MEM32(ebp + (-0x4)); /* 0x12029DC2: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_12029CE8); /* 0x12029DC5: call 0x12029ce8 */
    RECOMP_FLAGS_IN();
L_12029DCA:
    edi = POP32_VAL(esp); /* 0x12029DCA: pop edi */
    eax = esi; /* 0x12029DCB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12029DCD: pop esi */
    ebx = POP32_VAL(esp); /* 0x12029DCE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12029DCF: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12029DD0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12029DD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029DD8u);

L_12029DD8:
    edi = edi; /* 0x12029DD8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029DDA: push ebp */
    ebp = esp; /* 0x12029DDB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12029DDD: push esi */
    PUSH32(esp, edi); /* 0x12029DDE: push edi */
L_12029DDF:
    edi = edx + edx + 0x1; /* 0x12029DDF: lea edi, [edx + edx + 1] */
    esi = edx; /* 0x12029DE3: mov esi, edx */
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x12029DE5: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029DFB; /* 0x12029DE8: jae 0x12029dfb */
L_12029DEA:
    ecx = MEM32(ebp + 0x8); /* 0x12029DEA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x12029DED: push edx */
    eax = edi; /* 0x12029DEE: mov eax, edi */
    RECOMP_CALL(sub_12029636); /* 0x12029DF0: call 0x12029636 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12029DF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029DFB; /* 0x12029DF7: je 0x12029dfb */
L_12029DF9:
    esi = edi; /* 0x12029DF9: mov esi, edi */
L_12029DFB:
    edi = edx + edx + 0x2; /* 0x12029DFB: lea edi, [edx + edx + 2] */
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x12029DFF: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029E15; /* 0x12029E02: jae 0x12029e15 */
L_12029E04:
    ecx = MEM32(ebp + 0x8); /* 0x12029E04: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12029E07: push esi */
    eax = edi; /* 0x12029E08: mov eax, edi */
    RECOMP_CALL(sub_12029636); /* 0x12029E0A: call 0x12029636 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12029E0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029E15; /* 0x12029E11: je 0x12029e15 */
L_12029E13:
    esi = edi; /* 0x12029E13: mov esi, edi */
L_12029E15:
    /* cmp esi, edx */ /* 0x12029E15: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029E29; /* 0x12029E17: je 0x12029e29 */
L_12029E19:
    ecx = edx; /* 0x12029E19: mov ecx, edx */
    edx = MEM32(ebp + 0x8); /* 0x12029E1B: mov edx, dword ptr [ebp + 8] */
    eax = esi; /* 0x12029E1E: mov eax, esi */
    RECOMP_CALL(sub_120295FB); /* 0x12029E20: call 0x120295fb */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x12029E25: mov edx, esi */
    RECOMP_BACKEDGE();
    goto L_12029DDF; /* 0x12029E27: jmp 0x12029ddf */
L_12029E29:
    edi = POP32_VAL(esp); /* 0x12029E29: pop edi */
    eax = edx; /* 0x12029E2A: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x12029E2C: pop esi */
    ebp = POP32_VAL(esp); /* 0x12029E2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12029E2E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12029E36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029E36u);

L_12029E36:
    edi = edi; /* 0x12029E36: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029E38: push ebp */
    ebp = esp; /* 0x12029E39: mov ebp, esp */
    /* test edx, edx */ /* 0x12029E3B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029E67; /* 0x12029E3D: je 0x12029e67 */
L_12029E3F:
    PUSH32(esp, esi); /* 0x12029E3F: push esi */
L_12029E40:
    ecx = MEM32(ebp + 0x8); /* 0x12029E40: mov ecx, dword ptr [ebp + 8] */
    esi = edx + (-0x1); /* 0x12029E43: lea esi, [edx - 1] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x12029E46: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x12029E46: shr esi, 1 */
    PUSH32(esp, esi); /* 0x12029E48: push esi */
    eax = edx; /* 0x12029E49: mov eax, edx */
    RECOMP_CALL(sub_12029636); /* 0x12029E4B: call 0x12029636 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12029E50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029E66; /* 0x12029E52: je 0x12029e66 */
L_12029E54:
    ecx = edx; /* 0x12029E54: mov ecx, edx */
    edx = MEM32(ebp + 0x8); /* 0x12029E56: mov edx, dword ptr [ebp + 8] */
    eax = esi; /* 0x12029E59: mov eax, esi */
    RECOMP_CALL(sub_120295FB); /* 0x12029E5B: call 0x120295fb */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x12029E60: mov edx, esi */
    /* test edx, edx */ /* 0x12029E62: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029E40; /* 0x12029E64: jne 0x12029e40 */
L_12029E66:
    esi = POP32_VAL(esp); /* 0x12029E66: pop esi */
L_12029E67:
    eax = edx; /* 0x12029E67: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x12029E69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12029E6A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12029E72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029E72u);

L_12029E72:
    edi = edi; /* 0x12029E72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029E74: push ebp */
    ebp = esp; /* 0x12029E75: mov ebp, esp */
    /* test edx, edx */ /* 0x12029E77: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029EA0; /* 0x12029E79: je 0x12029ea0 */
L_12029E7B:
    PUSH32(esp, esi); /* 0x12029E7B: push esi */
L_12029E7C:
    ecx = MEM32(ebp + 0x8); /* 0x12029E7C: mov ecx, dword ptr [ebp + 8] */
    esi = edx + (-0x1); /* 0x12029E7F: lea esi, [edx - 1] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x12029E82: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x12029E82: shr esi, 1 */
    PUSH32(esp, esi); /* 0x12029E84: push esi */
    eax = edx; /* 0x12029E85: mov eax, edx */
    RECOMP_CALL(sub_120296E6); /* 0x12029E87: call 0x120296e6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12029E8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029E9F; /* 0x12029E8E: je 0x12029e9f */
L_12029E90:
    PUSH32(esp, edx); /* 0x12029E90: push edx */
    PUSH32(esp, ecx); /* 0x12029E91: push ecx */
    eax = esi; /* 0x12029E92: mov eax, esi */
    RECOMP_CALL(sub_12029663); /* 0x12029E94: call 0x12029663 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x12029E99: mov edx, esi */
    /* test edx, edx */ /* 0x12029E9B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029E7C; /* 0x12029E9D: jne 0x12029e7c */
L_12029E9F:
    esi = POP32_VAL(esp); /* 0x12029E9F: pop esi */
L_12029EA0:
    eax = edx; /* 0x12029EA0: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x12029EA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12029EA3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12029EAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029EABu);

L_12029EAB:
    edi = edi; /* 0x12029EAB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029EAD: push ebp */
    ebp = esp; /* 0x12029EAE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12029EB0: push esi */
    PUSH32(esp, edi); /* 0x12029EB1: push edi */
L_12029EB2:
    edi = edx + edx + 0x1; /* 0x12029EB2: lea edi, [edx + edx + 1] */
    esi = edx; /* 0x12029EB6: mov esi, edx */
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x12029EB8: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029ECE; /* 0x12029EBB: jae 0x12029ece */
L_12029EBD:
    ecx = MEM32(ebp + 0x8); /* 0x12029EBD: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x12029EC0: push edx */
    eax = edi; /* 0x12029EC1: mov eax, edi */
    RECOMP_CALL(sub_120296E6); /* 0x12029EC3: call 0x120296e6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12029EC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029ECE; /* 0x12029ECA: je 0x12029ece */
L_12029ECC:
    esi = edi; /* 0x12029ECC: mov esi, edi */
L_12029ECE:
    edi = edx + edx + 0x2; /* 0x12029ECE: lea edi, [edx + edx + 2] */
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x12029ED2: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029EE8; /* 0x12029ED5: jae 0x12029ee8 */
L_12029ED7:
    ecx = MEM32(ebp + 0x8); /* 0x12029ED7: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12029EDA: push esi */
    eax = edi; /* 0x12029EDB: mov eax, edi */
    RECOMP_CALL(sub_120296E6); /* 0x12029EDD: call 0x120296e6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12029EE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029EE8; /* 0x12029EE4: je 0x12029ee8 */
L_12029EE6:
    esi = edi; /* 0x12029EE6: mov esi, edi */
L_12029EE8:
    /* cmp esi, edx */ /* 0x12029EE8: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12029EFB; /* 0x12029EEA: je 0x12029efb */
L_12029EEC:
    PUSH32(esp, edx); /* 0x12029EEC: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12029EED: push dword ptr [ebp + 8] */
    eax = esi; /* 0x12029EF0: mov eax, esi */
    RECOMP_CALL(sub_12029663); /* 0x12029EF2: call 0x12029663 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x12029EF7: mov edx, esi */
    RECOMP_BACKEDGE();
    goto L_12029EB2; /* 0x12029EF9: jmp 0x12029eb2 */
L_12029EFB:
    edi = POP32_VAL(esp); /* 0x12029EFB: pop edi */
    eax = edx; /* 0x12029EFC: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x12029EFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x12029EFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12029F00: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12029F08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12029F08u);

L_12029F08:
    edi = edi; /* 0x12029F08: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12029F0A: push ebp */
    ebp = esp; /* 0x12029F0B: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x12029F0D: mov edx, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(edx)); /* 0x12029F10: fld dword ptr [edx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x12029F12: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x12029F15: fld qword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12029F18: push esi */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12029F19: fcom st(1) */
    PUSH32(esp, edi); /* 0x12029F1B: push edi */
    edi = MEM32(ebp + 0x14); /* 0x12029F1C: mov edi, dword ptr [ebp + 0x14] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029F1F: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12029F21: fstp st(1) */
    fp_push(0.0); /* 0x12029F23: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x12029F25: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029FF1; /* 0x12029F28: jne 0x12029ff1 */
L_12029F2E:
    eax = edi; /* 0x12029F2E: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12029F30: imul eax, eax, 0x14 */
    fp_push(*(float*)&MEM32(eax + edx + (-0x14))); /* 0x12029F33: fld dword ptr [eax + edx - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12029F37: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029F39: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12029F3B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029FF1; /* 0x12029F3E: jne 0x12029ff1 */
L_12029F44:
    /* cmp edi, 1 */ /* 0x12029F44: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12029FF1; /* 0x12029F47: jbe 0x12029ff1 */
L_12029F4D:
    ecx = MEM32(ebp + 0x1C); /* 0x12029F4D: mov ecx, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ecx); /* 0x12029F50: mov ecx, dword ptr [ecx] */
    esi = ecx; /* 0x12029F52: mov esi, ecx */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x14u); /* 0x12029F54: imul esi, esi, 0x14 */
    fp_push(*(float*)&MEM32(esi + edx + 0x14)); /* 0x12029F57: fld dword ptr [esi + edx + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12029F5B: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029F5D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12029F5F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12029F7C; /* 0x12029F62: jp 0x12029f7c */
L_12029F64:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12029F64: inc ecx */
    _flag_k = FK_INC;
    eax = ecx + 0x1; /* 0x12029F65: lea eax, [ecx + 1] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12029F68: imul eax, eax, 0x14 */
    esi = ecx; /* 0x12029F6B: mov esi, ecx */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x12029F6D: fld dword ptr [eax + edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12029F70: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029F72: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12029F74: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12029FD6; /* 0x12029F77: je 0x12029fd6 */
L_12029F79:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12029F79: dec edi */
    _flag_k = FK_DEC;
    goto L_12029FA2; /* 0x12029F7A: jmp 0x12029fa2 */
L_12029F7C:
    fp_push(*(float*)&MEM32(esi + edx)); /* 0x12029F7C: fld dword ptr [esi + edx] */
    edi = ecx; /* 0x12029F7F: mov edi, ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12029F81: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029F83: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12029F85: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029FA0; /* 0x12029F88: jne 0x12029fa0 */
L_12029F8A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12029F8A: dec ecx */
    _flag_k = FK_DEC;
    eax = ecx; /* 0x12029F8B: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12029F8D: imul eax, eax, 0x14 */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x12029F90: fld dword ptr [eax + edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12029F93: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029F95: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12029F97: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12029FD6; /* 0x12029F9A: jnp 0x12029fd6 */
L_12029F9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12029F9C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12029FA2; /* 0x12029F9E: jmp 0x12029fa2 */
L_12029FA0:
    esi = ecx; /* 0x12029FA0: mov esi, ecx */
L_12029FA2:
    /* cmp esi, edi */ /* 0x12029FA2: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12029FD6; /* 0x12029FA4: jae 0x12029fd6 */
L_12029FA6:
    PUSH32(esp, ebx); /* 0x12029FA6: push ebx */
L_12029FA7:
    ecx = edi + esi; /* 0x12029FA7: lea ecx, [edi + esi] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x12029FAA: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x12029FAA: shr ecx, 1 */
    ebx = ecx; /* 0x12029FAC: mov ebx, ecx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x14u); /* 0x12029FAE: imul ebx, ebx, 0x14 */
    fp_push(*(float*)&MEM32(ebx + edx)); /* 0x12029FB1: fld dword ptr [ebx + edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12029FB4: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029FB6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12029FB8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12029FC1; /* 0x12029FBB: jne 0x12029fc1 */
L_12029FBD:
    edi = ecx; /* 0x12029FBD: mov edi, ecx */
    goto L_12029FD1; /* 0x12029FBF: jmp 0x12029fd1 */
L_12029FC1:
    fp_push(*(float*)&MEM32(ebx + edx + 0x14)); /* 0x12029FC1: fld dword ptr [ebx + edx + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12029FC5: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029FC7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12029FC9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12029FD5; /* 0x12029FCC: jp 0x12029fd5 */
L_12029FCE:
    esi = ecx + 0x1; /* 0x12029FCE: lea esi, [ecx + 1] */
L_12029FD1:
    /* cmp esi, edi */ /* 0x12029FD1: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12029FA7; /* 0x12029FD3: jb 0x12029fa7 */
L_12029FD5:
    ebx = POP32_VAL(esp); /* 0x12029FD5: pop ebx */
L_12029FD6:
    eax = MEM32(ebp + 0x1C); /* 0x12029FD6: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = ecx; /* 0x12029FD9: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x12029FDB: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12029FDD: imul eax, eax, 0x14 */
    fp_push(*(float*)&MEM32(eax + edx + 0x14)); /* 0x12029FE0: fld dword ptr [eax + edx + 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax + edx); /* 0x12029FE4: fsub dword ptr [eax + edx] */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x12029FE7: fld dword ptr [eax + edx] */
    eax = ecx + 0x1; /* 0x12029FEA: lea eax, [ecx + 1] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x12029FED: fsubp st(3) */
    goto L_1202A010; /* 0x12029FEF: jmp 0x1202a010 */
L_12029FF1:
    fp_push(*(float*)&MEM32(edx)); /* 0x12029FF1: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12029FF3: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12029FF5: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12029FF7: fstp st(1) */
    /* test HI8(eax), 1 */ /* 0x12029FF9: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A002; /* 0x12029FFC: jne 0x1202a002 */
L_12029FFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12029FFE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202A005; /* 0x1202A000: jmp 0x1202a005 */
L_1202A002:
    ecx = edi + (-0x1); /* 0x1202A002: lea ecx, [edi - 1] */
L_1202A005:
    fp_push(_st[0]); /* 0x1202A005: fld st(0) */
    eax = ecx; /* 0x1202A007: mov eax, ecx */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1202A009: fld qword ptr [ebp + 8] */
    fp_xch(2); /* 0x1202A00C: fxch st(2) */
    fp_xch(1); /* 0x1202A00E: fxch st(1) */
L_1202A010:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x1202A010: imul ecx, ecx, 0x14 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202A013: imul eax, eax, 0x14 */
    fp_push(*(float*)&MEM32(ecx + edx + 0x4)); /* 0x1202A016: fld dword ptr [ecx + edx + 4] */
    _st[0] = -_st[0]; /* 0x1202A01A: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1202A01C: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + edx + 0x8)); /* 0x1202A01F: fld dword ptr [ecx + edx + 8] */
    _st[0] = -_st[0]; /* 0x1202A023: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1202A025: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + edx + 0xC)); /* 0x1202A028: fld dword ptr [ecx + edx + 0xc] */
    _st[0] = -_st[0]; /* 0x1202A02C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1202A02E: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + edx + 0x10)); /* 0x1202A031: fld dword ptr [ecx + edx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1202A035: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax + edx + 0x4)); /* 0x1202A038: fld dword ptr [eax + edx + 4] */
    _st[0] = -_st[0]; /* 0x1202A03C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1202A03E: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + edx + 0x8)); /* 0x1202A041: fld dword ptr [eax + edx + 8] */
    _st[0] = -_st[0]; /* 0x1202A045: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1202A047: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(eax + edx + 0xC)); /* 0x1202A04A: fld dword ptr [eax + edx + 0xc] */
    _st[0] = -_st[0]; /* 0x1202A04E: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1202A050: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + edx + 0x10)); /* 0x1202A053: fld dword ptr [eax + edx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1202A057: fstp dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202A05A: fcom qword ptr [0x12001eb0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A060: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A062: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A0F3; /* 0x1202A065: jne 0x1202a0f3 */
L_1202A06B:
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x1202A06B: fdivp st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202A06D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A06F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A071: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A083; /* 0x1202A074: je 0x1202a083 */
L_1202A076:
    fp_push(1.0); /* 0x1202A076: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A078: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A07A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202A07C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202A090; /* 0x1202A07F: jnp 0x1202a090 */
L_1202A081:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A081: fstp st(0) */
L_1202A083:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202A083: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A085: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A087: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A092; /* 0x1202A08A: jne 0x1202a092 */
L_1202A08C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A08C: fstp st(1) */
    goto L_1202A094; /* 0x1202A08E: jmp 0x1202a094 */
L_1202A090:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202A090: fstp st(2) */
L_1202A092:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A092: fstp st(0) */
L_1202A094:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1202A094: fstp dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x20); /* 0x1202A097: mov eax, dword ptr [ebp + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1202A09A: fld dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1202A09D: push eax */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1202A09E: fld dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1202A0A1: push eax */
    fp_push(_st[0]); /* 0x1202A0A2: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202A0A4: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202A0A6: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x1202A0A9: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1202A0AB: fmulp st(3) */
    fp_xch(2); /* 0x1202A0AD: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202A0AF: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1202A0B1: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1202A0B3: fld dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1202A0B6: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x1202A0B9: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202A0BB: fsubp st(2) */
    fp_push(_st[2]); /* 0x1202A0BD: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202A0BF: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202A0C1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1202A0C3: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1202A0C6: fld dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1202A0C9: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x1202A0CC: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202A0CE: fsubp st(2) */
    fp_push(_st[2]); /* 0x1202A0D0: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202A0D2: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202A0D4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1202A0D6: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1202A0D9: fld dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1202A0DC: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1202A0DF: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202A0E1: fsubp st(2) */
    fp_xch(1); /* 0x1202A0E3: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202A0E5: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202A0E7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1202A0E9: fstp dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_1203087E); /* 0x1202A0EC: call 0x1203087e */
    RECOMP_FLAGS_IN();
    goto L_1202A10C; /* 0x1202A0F1: jmp 0x1202a10c */
L_1202A0F3:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1202A0F3: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A0F7: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A0F9: fstp st(1) */
    esi = ebp + (-0x10); /* 0x1202A0FB: lea esi, [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A0FE: fstp st(0) */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202A105; /* 0x1202A100: jne 0x1202a105 */
L_1202A102:
    esi = ebp + (-0x20); /* 0x1202A102: lea esi, [ebp - 0x20] */
L_1202A105:
    edi = MEM32(ebp + 0x20); /* 0x1202A105: mov edi, dword ptr [ebp + 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A108: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A109: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A10A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A10B: movsd dword ptr es:[edi], dword ptr [esi] */
L_1202A10C:
    edi = POP32_VAL(esp); /* 0x1202A10C: pop edi */
    esi = POP32_VAL(esp); /* 0x1202A10D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202A10E: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1202A10F: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1202A117(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202A117u);

L_1202A117:
    edi = edi; /* 0x1202A117: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202A119: push ebp */
    ebp = esp; /* 0x1202A11A: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x1202A11C: mov edx, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1202A11F: fld dword ptr [edx] */
    PUSH32(esp, esi); /* 0x1202A121: push esi */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1202A122: fld qword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1202A125: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1202A126: mov edi, dword ptr [ebp + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202A129: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A12B: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A12D: fstp st(1) */
    fp_push(0.0); /* 0x1202A12F: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x1202A131: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A1F7; /* 0x1202A134: jne 0x1202a1f7 */
L_1202A13A:
    eax = edi; /* 0x1202A13A: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202A13C: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + eax * 8 + (-0x10))); /* 0x1202A13E: fld dword ptr [edx + eax*8 - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A142: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A144: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A146: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A1F7; /* 0x1202A149: jne 0x1202a1f7 */
L_1202A14F:
    /* cmp edi, 1 */ /* 0x1202A14F: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202A1F7; /* 0x1202A152: jbe 0x1202a1f7 */
L_1202A158:
    ecx = MEM32(ebp + 0x1C); /* 0x1202A158: mov ecx, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ecx); /* 0x1202A15B: mov ecx, dword ptr [ecx] */
    esi = ecx; /* 0x1202A15D: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1202A15F: add esi, esi */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + esi * 8 + 0x10)); /* 0x1202A161: fld dword ptr [edx + esi*8 + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A165: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A167: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202A169: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202A185; /* 0x1202A16C: jp 0x1202a185 */
L_1202A16E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202A16E: inc ecx */
    _flag_k = FK_INC;
    eax = ecx + 0x1; /* 0x1202A16F: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202A172: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + eax * 8)); /* 0x1202A174: fld dword ptr [edx + eax*8] */
    esi = ecx; /* 0x1202A177: mov esi, ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A179: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A17B: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1202A17D: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A1DD; /* 0x1202A180: je 0x1202a1dd */
L_1202A182:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1202A182: dec edi */
    _flag_k = FK_DEC;
    goto L_1202A1AA; /* 0x1202A183: jmp 0x1202a1aa */
L_1202A185:
    fp_push(*(float*)&MEM32(edx + esi * 8)); /* 0x1202A185: fld dword ptr [edx + esi*8] */
    edi = ecx; /* 0x1202A188: mov edi, ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A18A: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A18C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A18E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A1A8; /* 0x1202A191: jne 0x1202a1a8 */
L_1202A193:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1202A193: dec ecx */
    _flag_k = FK_DEC;
    eax = ecx; /* 0x1202A194: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202A196: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + eax * 8)); /* 0x1202A198: fld dword ptr [edx + eax*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A19B: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A19D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A19F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202A1DD; /* 0x1202A1A2: jnp 0x1202a1dd */
L_1202A1A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202A1A4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202A1AA; /* 0x1202A1A6: jmp 0x1202a1aa */
L_1202A1A8:
    esi = ecx; /* 0x1202A1A8: mov esi, ecx */
L_1202A1AA:
    /* cmp esi, edi */ /* 0x1202A1AA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202A1DD; /* 0x1202A1AC: jae 0x1202a1dd */
L_1202A1AE:
    PUSH32(esp, ebx); /* 0x1202A1AE: push ebx */
L_1202A1AF:
    ecx = edi + esi; /* 0x1202A1AF: lea ecx, [edi + esi] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1202A1B2: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1202A1B2: shr ecx, 1 */
    ebx = ecx; /* 0x1202A1B4: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x1202A1B6: add ebx, ebx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + ebx * 8)); /* 0x1202A1B8: fld dword ptr [edx + ebx*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A1BB: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A1BD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A1BF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A1C8; /* 0x1202A1C2: jne 0x1202a1c8 */
L_1202A1C4:
    edi = ecx; /* 0x1202A1C4: mov edi, ecx */
    goto L_1202A1D8; /* 0x1202A1C6: jmp 0x1202a1d8 */
L_1202A1C8:
    fp_push(*(float*)&MEM32(edx + ebx * 8 + 0x10)); /* 0x1202A1C8: fld dword ptr [edx + ebx*8 + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A1CC: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A1CE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202A1D0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202A1DC; /* 0x1202A1D3: jp 0x1202a1dc */
L_1202A1D5:
    esi = ecx + 0x1; /* 0x1202A1D5: lea esi, [ecx + 1] */
L_1202A1D8:
    /* cmp esi, edi */ /* 0x1202A1D8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202A1AF; /* 0x1202A1DA: jb 0x1202a1af */
L_1202A1DC:
    ebx = POP32_VAL(esp); /* 0x1202A1DC: pop ebx */
L_1202A1DD:
    eax = MEM32(ebp + 0x1C); /* 0x1202A1DD: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = ecx; /* 0x1202A1E0: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1202A1E2: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202A1E4: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + eax * 8 + 0x10)); /* 0x1202A1E6: fld dword ptr [edx + eax*8 + 0x10] */
    esi = ecx + 0x1; /* 0x1202A1EA: lea esi, [ecx + 1] */
    _st[0] -= (double)*(float*)ADDR(edx + eax * 8); /* 0x1202A1ED: fsub dword ptr [edx + eax*8] */
    fp_push(*(float*)&MEM32(edx + eax * 8)); /* 0x1202A1F0: fld dword ptr [edx + eax*8] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x1202A1F3: fsubp st(3) */
    goto L_1202A216; /* 0x1202A1F5: jmp 0x1202a216 */
L_1202A1F7:
    fp_push(*(float*)&MEM32(edx)); /* 0x1202A1F7: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A1F9: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A1FB: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A1FD: fstp st(1) */
    /* test HI8(eax), 1 */ /* 0x1202A1FF: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A208; /* 0x1202A202: jne 0x1202a208 */
L_1202A204:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202A204: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202A20B; /* 0x1202A206: jmp 0x1202a20b */
L_1202A208:
    ecx = edi + (-0x1); /* 0x1202A208: lea ecx, [edi - 1] */
L_1202A20B:
    fp_push(_st[0]); /* 0x1202A20B: fld st(0) */
    esi = ecx; /* 0x1202A20D: mov esi, ecx */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1202A20F: fld qword ptr [ebp + 8] */
    fp_xch(2); /* 0x1202A212: fxch st(2) */
    fp_xch(1); /* 0x1202A214: fxch st(1) */
L_1202A216:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202A216: fcom qword ptr [0x12001eb0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A21C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A21E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A295; /* 0x1202A221: jne 0x1202a295 */
L_1202A223:
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x1202A223: fdivp st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202A225: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A227: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A229: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A23B; /* 0x1202A22C: je 0x1202a23b */
L_1202A22E:
    fp_push(1.0); /* 0x1202A22E: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A230: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A232: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202A234: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202A248; /* 0x1202A237: jnp 0x1202a248 */
L_1202A239:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A239: fstp st(0) */
L_1202A23B:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202A23B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A23D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A23F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A24A; /* 0x1202A242: jne 0x1202a24a */
L_1202A244:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A244: fstp st(1) */
    goto L_1202A24C; /* 0x1202A246: jmp 0x1202a24c */
L_1202A248:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202A248: fstp st(2) */
L_1202A24A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A24A: fstp st(0) */
L_1202A24C:
    eax = MEM32(ebp + 0x20); /* 0x1202A24C: mov eax, dword ptr [ebp + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1202A24F: fstp dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1202A252: add esi, esi */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + esi * 8 + 0x4)); /* 0x1202A254: fld dword ptr [edx + esi*8 + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1202A258: add ecx, ecx */
    _flag_k = FK_ADD;
    _st[0] -= (double)*(float*)ADDR(edx + ecx * 8 + 0x4); /* 0x1202A25A: fsub dword ptr [edx + ecx*8 + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202A25E: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x1202A261: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202A263: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx + ecx * 8 + 0x4)); /* 0x1202A265: fld dword ptr [edx + ecx*8 + 4] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202A269: faddp st(2) */
    fp_xch(1); /* 0x1202A26B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1202A26D: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + esi * 8 + 0x8)); /* 0x1202A26F: fld dword ptr [edx + esi*8 + 8] */
    _st[0] -= (double)*(float*)ADDR(edx + ecx * 8 + 0x8); /* 0x1202A273: fsub dword ptr [edx + ecx*8 + 8] */
    fp_push(_st[1]); /* 0x1202A277: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202A279: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(edx + ecx * 8 + 0x8); /* 0x1202A27B: fadd dword ptr [edx + ecx*8 + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1202A27F: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + esi * 8 + 0xC)); /* 0x1202A282: fld dword ptr [edx + esi*8 + 0xc] */
    _st[0] -= (double)*(float*)ADDR(edx + ecx * 8 + 0xC); /* 0x1202A286: fsub dword ptr [edx + ecx*8 + 0xc] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202A28A: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(edx + ecx * 8 + 0xC); /* 0x1202A28C: fadd dword ptr [edx + ecx*8 + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1202A290: fstp dword ptr [eax + 8] */
    goto L_1202A2AF; /* 0x1202A293: jmp 0x1202a2af */
L_1202A295:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1202A295: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A299: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A29B: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A29D: fstp st(0) */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202A2A3; /* 0x1202A29F: jne 0x1202a2a3 */
L_1202A2A1:
    ecx = esi; /* 0x1202A2A1: mov ecx, esi */
L_1202A2A3:
    edi = MEM32(ebp + 0x20); /* 0x1202A2A3: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1202A2A6: add ecx, ecx */
    _flag_k = FK_ADD;
    esi = edx + ecx * 8 + 0x4; /* 0x1202A2A8: lea esi, [edx + ecx*8 + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A2AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A2AD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A2AE: movsd dword ptr es:[edi], dword ptr [esi] */
L_1202A2AF:
    edi = POP32_VAL(esp); /* 0x1202A2AF: pop edi */
    esi = POP32_VAL(esp); /* 0x1202A2B0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202A2B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1202A2B2: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1202A2BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202A2BAu);

L_1202A2BA:
    edi = edi; /* 0x1202A2BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202A2BC: push ebp */
    ebp = esp; /* 0x1202A2BD: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1202A2BF: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x1202A2C2: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1202A2C5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1202A2C8: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202A2C9: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1202A2CC: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1202A2CD: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1202A2D0: add esi, esi */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + esi * 8)); /* 0x1202A2D2: fld dword ptr [ecx + esi*8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1202A2D5: add edx, edx */
    _flag_k = FK_ADD;
    _st[0] -= (double)*(float*)ADDR(ecx + edx * 8); /* 0x1202A2D7: fsub dword ptr [ecx + edx*8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202A2DA: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A2E0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A2E2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A33C; /* 0x1202A2E5: jne 0x1202a33c */
L_1202A2E7:
    eax = ebx; /* 0x1202A2E7: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202A2E9: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + eax * 8)); /* 0x1202A2EB: fld dword ptr [ecx + eax*8] */
    _st[0] -= (double)*(float*)ADDR(ecx + edx * 8); /* 0x1202A2EE: fsub dword ptr [ecx + edx*8] */
    fp_push(*(float*)&MEM32(ecx + esi * 8)); /* 0x1202A2F1: fld dword ptr [ecx + esi*8] */
    _st[0] -= (double)*(float*)ADDR(ecx + edx * 8); /* 0x1202A2F4: fsub dword ptr [ecx + edx*8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1202A2F7: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1202A2F9: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ecx + esi * 8 + 0x4)); /* 0x1202A2FC: fld dword ptr [ecx + esi*8 + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + edx * 8 + 0x4); /* 0x1202A300: fsub dword ptr [ecx + edx*8 + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1202A304: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x1202A307: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202A309: fmulp st(2) */
    fp_push(*(float*)&MEM32(ecx + edx * 8 + 0x4)); /* 0x1202A30B: fld dword ptr [ecx + edx*8 + 4] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202A30F: faddp st(2) */
    fp_xch(1); /* 0x1202A311: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1202A313: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + esi * 8 + 0x8)); /* 0x1202A316: fld dword ptr [ecx + esi*8 + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + edx * 8 + 0x8); /* 0x1202A31A: fsub dword ptr [ecx + edx*8 + 8] */
    fp_push(_st[1]); /* 0x1202A31E: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202A320: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + edx * 8 + 0x8); /* 0x1202A322: fadd dword ptr [ecx + edx*8 + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1202A326: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + esi * 8 + 0xC)); /* 0x1202A329: fld dword ptr [ecx + esi*8 + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ecx + edx * 8 + 0xC); /* 0x1202A32D: fsub dword ptr [ecx + edx*8 + 0xc] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202A331: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + edx * 8 + 0xC); /* 0x1202A333: fadd dword ptr [ecx + edx*8 + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1202A337: fstp dword ptr [ebp - 4] */
    goto L_1202A348; /* 0x1202A33A: jmp 0x1202a348 */
L_1202A33C:
    PUSH32(esp, edi); /* 0x1202A33C: push edi */
    esi = ecx + edx * 8 + 0x4; /* 0x1202A33D: lea esi, [ecx + edx*8 + 4] */
    edi = ebp + (-0xC); /* 0x1202A341: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A344: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A345: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A346: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1202A347: pop edi */
L_1202A348:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x1202A348: add ebx, ebx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + ebx * 8 + 0x4)); /* 0x1202A34A: fld dword ptr [ecx + ebx*8 + 4] */
    esi = POP32_VAL(esp); /* 0x1202A34E: pop esi */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1202A34F: fsub dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1202A352: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ecx + ebx * 8 + 0x8)); /* 0x1202A355: fld dword ptr [ecx + ebx*8 + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1202A359: fsub dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1202A35C: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ecx + ebx * 8 + 0xC)); /* 0x1202A35F: fld dword ptr [ecx + ebx*8 + 0xc] */
    ebx = POP32_VAL(esp); /* 0x1202A363: pop ebx */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1202A364: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1202A367: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1202A36A: fld dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1202A36D: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1202A370: fld dword ptr [ebp - 0x18] */
    _st[0] *= _st[0]; /* 0x1202A373: fmul st(0), st(0) */
    fp_xch(2); /* 0x1202A375: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1202A377: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202A379: faddp st(2) */
    _st[0] *= _st[0]; /* 0x1202A37B: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202A37D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1202A37F: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1202A382: fld dword ptr [ebp + 0x14] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202A385: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202A386: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202A38E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202A38Eu);

L_1202A38E:
    edi = edi; /* 0x1202A38E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202A390: push ebp */
    ebp = esp; /* 0x1202A391: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1202A393: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1202A396: mov ecx, dword ptr [ebp + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x14u); /* 0x1202A399: imul edx, edx, 0x14 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x1202A39C: imul ecx, ecx, 0x14 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1202A39F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1202A3A2: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202A3A3: mov ebx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edx + ebx)); /* 0x1202A3A6: fld dword ptr [edx + ebx] */
    _st[0] -= (double)*(float*)ADDR(ecx + ebx); /* 0x1202A3A9: fsub dword ptr [ecx + ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202A3AC: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A3B2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202A3B4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A42D; /* 0x1202A3B7: jne 0x1202a42d */
L_1202A3B9:
    eax = MEM32(ebp + 0xC); /* 0x1202A3B9: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202A3BC: imul eax, eax, 0x14 */
    fp_push(*(float*)&MEM32(eax + ebx)); /* 0x1202A3BF: fld dword ptr [eax + ebx] */
    eax = ebp + (-0x10); /* 0x1202A3C2: lea eax, [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx + ebx); /* 0x1202A3C5: fsub dword ptr [ecx + ebx] */
    PUSH32(esp, eax); /* 0x1202A3C8: push eax */
    fp_push(*(float*)&MEM32(edx + ebx)); /* 0x1202A3C9: fld dword ptr [edx + ebx] */
    PUSH32(esp, eax); /* 0x1202A3CC: push eax */
    _st[0] -= (double)*(float*)ADDR(ecx + ebx); /* 0x1202A3CD: fsub dword ptr [ecx + ebx] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1202A3D0: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1202A3D2: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(edx + ebx + 0x4)); /* 0x1202A3D5: fld dword ptr [edx + ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + ebx + 0x4); /* 0x1202A3D9: fsub dword ptr [ecx + ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1202A3DD: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x1202A3E0: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202A3E2: fmulp st(2) */
    fp_push(*(float*)&MEM32(ecx + ebx + 0x4)); /* 0x1202A3E4: fld dword ptr [ecx + ebx + 4] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202A3E8: faddp st(2) */
    fp_xch(1); /* 0x1202A3EA: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1202A3EC: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edx + ebx + 0x8)); /* 0x1202A3EF: fld dword ptr [edx + ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + ebx + 0x8); /* 0x1202A3F3: fsub dword ptr [ecx + ebx + 8] */
    fp_push(_st[1]); /* 0x1202A3F7: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202A3F9: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + ebx + 0x8); /* 0x1202A3FB: fadd dword ptr [ecx + ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1202A3FF: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + ebx + 0xC)); /* 0x1202A402: fld dword ptr [edx + ebx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ecx + ebx + 0xC); /* 0x1202A406: fsub dword ptr [ecx + ebx + 0xc] */
    fp_push(_st[1]); /* 0x1202A40A: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202A40C: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + ebx + 0xC); /* 0x1202A40E: fadd dword ptr [ecx + ebx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1202A412: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edx + ebx + 0x10)); /* 0x1202A415: fld dword ptr [edx + ebx + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx + ebx + 0x10); /* 0x1202A419: fsub dword ptr [ecx + ebx + 0x10] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202A41D: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + ebx + 0x10); /* 0x1202A41F: fadd dword ptr [ecx + ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1202A423: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1203087E); /* 0x1202A426: call 0x1203087e */
    RECOMP_FLAGS_IN();
    goto L_1202A43C; /* 0x1202A42B: jmp 0x1202a43c */
L_1202A42D:
    PUSH32(esp, esi); /* 0x1202A42D: push esi */
    PUSH32(esp, edi); /* 0x1202A42E: push edi */
    esi = ecx + ebx + 0x4; /* 0x1202A42F: lea esi, [ecx + ebx + 4] */
    edi = ebp + (-0x10); /* 0x1202A433: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A436: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A437: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A438: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A439: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1202A43A: pop edi */
    esi = POP32_VAL(esp); /* 0x1202A43B: pop esi */
L_1202A43C:
    eax = MEM32(ebp + 0xC); /* 0x1202A43C: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202A43F: imul eax, eax, 0x14 */
    fp_push(*(float*)&MEM32(eax + ebx + 0x8)); /* 0x1202A442: fld dword ptr [eax + ebx + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1202A446: fmul dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + ebx + 0x4)); /* 0x1202A449: fld dword ptr [eax + ebx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1202A44D: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202A450: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + ebx + 0xC)); /* 0x1202A452: fld dword ptr [eax + ebx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1202A456: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202A459: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + ebx + 0x10)); /* 0x1202A45B: fld dword ptr [eax + ebx + 0x10] */
    ebx = POP32_VAL(esp); /* 0x1202A45F: pop ebx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1202A460: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202A463: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1202A465: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1202A468: fld dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x1202A46B: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202A46D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A46F: fnstsw ax */
    fp_push(1.0); /* 0x1202A471: fld1  */
    /* test HI8(eax), 5 */ /* 0x1202A473: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202A47D; /* 0x1202A476: jp 0x1202a47d */
L_1202A478:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1202A478: fst dword ptr [ebp + 0xc] */
    goto L_1202A484; /* 0x1202A47B: jmp 0x1202a484 */
L_1202A47D:
    fp_xch(2); /* 0x1202A47D: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1202A47F: fst dword ptr [ebp + 0xc] */
    fp_xch(2); /* 0x1202A482: fxch st(2) */
L_1202A484:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1202A484: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x120019C8)); /* 0x1202A487: fcomp qword ptr [0x120019c8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A48D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202A48F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202A4A0; /* 0x1202A492: jp 0x1202a4a0 */
L_1202A494:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202A494: fstp st(2) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A496: fstp st(1) */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x1202A498: fld dword ptr [0x12001748] */
    goto L_1202A4AD; /* 0x1202A49E: jmp 0x1202a4ad */
L_1202A4A0:
    fp_xch(1); /* 0x1202A4A0: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202A4A2: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A4A4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202A4A6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202A4B5; /* 0x1202A4A9: jp 0x1202a4b5 */
L_1202A4AB:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202A4AB: fstp st(2) */
L_1202A4AD:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1202A4AD: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1202A4B0: fld dword ptr [ebp + 0xc] */
    goto L_1202A4B9; /* 0x1202A4B3: jmp 0x1202a4b9 */
L_1202A4B5:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A4B5: fstp st(1) */
    fp_xch(1); /* 0x1202A4B7: fxch st(1) */
L_1202A4B9:
    _st[0] *= _st[0]; /* 0x1202A4B9: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202A4BB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1202A4BD: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1202A4C0: fld dword ptr [ebp + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202A4C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202A4C4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202A4CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202A4CCu);

L_1202A4CC:
    edi = edi; /* 0x1202A4CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202A4CE: push ebp */
    ebp = esp; /* 0x1202A4CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1202A4D1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1202A4D4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202A4D5: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202A4D8: push esi */
    PUSH32(esp, edi); /* 0x1202A4D9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202A4DA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1202A4DC: mov esi, edi */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1202A4DE: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1202A4E1: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1202A4E4: mov dword ptr [ebp - 8], edi */
    /* test ebx, ebx */ /* 0x1202A4E7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A52C; /* 0x1202A4E9: je 0x1202a52c */
L_1202A4EB:
    ecx = ebx; /* 0x1202A4EB: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x1202A4ED: lea edx, [ecx + 1] */
L_1202A4F0:
    SET_LO8(eax, MEM8(ecx)); /* 0x1202A4F0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202A4F2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1202A4F3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A4F0; /* 0x1202A4F5: jne 0x1202a4f0 */
L_1202A4F7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1202A4F7: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1202A4F9: lea eax, [ecx + 1] */
    PUSH32(esp, 0x120014BCu); /* 0x1202A4FC: push 0x120014bc */
    PUSH32(esp, eax); /* 0x1202A501: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x1202A502: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_12018970); /* 0x1202A505: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202A50A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202A50C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202A50D: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1202A50E: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x1202A511: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A51F; /* 0x1202A513: jne 0x1202a51f */
L_1202A515:
    edi = 0x8007000Eu; /* 0x1202A515: mov edi, 0x8007000e */
    goto L_1202A680; /* 0x1202A51A: jmp 0x1202a680 */
L_1202A51F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202A51F: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1202A522: push ebx */
    PUSH32(esp, esi); /* 0x1202A523: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x1202A524: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202A529: add esp, 0xc */
    _flag_k = FK_ADD;
L_1202A52C:
    eax = MEM32(ebp + 0xC); /* 0x1202A52C: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x120014BCu); /* 0x1202A52F: push 0x120014bc */
    PUSH32(esp, 0x44u); /* 0x1202A534: push 0x44 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202A536: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = POP32_VAL(esp); /* 0x1202A538: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202A539: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202A53B: seto cl */
    PUSH32(esp, 4); /* 0x1202A53E: push 4 */
    edx = POP32_VAL(esp); /* 0x1202A540: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202A541: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202A543: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202A545: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1202A547: add ecx, edx */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x1202A549: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1202A54C: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1202A54E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1202A550: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1202A551: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202A556: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202A557: pop ecx */
    /* test eax, eax */ /* 0x1202A558: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A57F; /* 0x1202A55A: je 0x1202a57f */
L_1202A55C:
    edx = MEM32(ebp + 0xC); /* 0x1202A55C: mov edx, dword ptr [ebp + 0xc] */
    ebx = eax + 0x4; /* 0x1202A55F: lea ebx, [eax + 4] */
    MEM32(eax) = edx; /* 0x1202A562: mov dword ptr [eax], edx */
    eax = edx + (-0x1); /* 0x1202A564: lea eax, [edx - 1] */
    ecx = ebx; /* 0x1202A567: mov ecx, ebx */
    /* test eax, eax */ /* 0x1202A569: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202A581; /* 0x1202A56B: js 0x1202a581 */
L_1202A56D:
    esi = eax; /* 0x1202A56D: mov esi, eax */
L_1202A56F:
    RECOMP_CALL(sub_12029713); /* 0x1202A56F: call 0x12029713 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x44u; /* 0x1202A574: add ecx, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1202A577: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_1202A56F; /* 0x1202A578: jns 0x1202a56f */
L_1202A57A:
    esi = MEM32(ebp + (-0x4)); /* 0x1202A57A: mov esi, dword ptr [ebp - 4] */
    goto L_1202A581; /* 0x1202A57D: jmp 0x1202a581 */
L_1202A57F:
    ebx = edi; /* 0x1202A57F: mov ebx, edi */
L_1202A581:
    /* test ebx, ebx */ /* 0x1202A581: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A655; /* 0x1202A583: je 0x1202a655 */
L_1202A589:
    eax = MEM32(ebp + 0xC); /* 0x1202A589: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x120014BCu); /* 0x1202A58C: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202A591: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1202A593: push 4 */
    edx = POP32_VAL(esp); /* 0x1202A595: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202A596: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202A598: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202A59B: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202A59D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202A59F: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202A5A0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202A5A5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202A5A6: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1202A5A7: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1202A5AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A655; /* 0x1202A5AC: je 0x1202a655 */
L_1202A5B2:
    eax = MEM32(ebp + 0x1C); /* 0x1202A5B2: mov eax, dword ptr [ebp + 0x1c] */
    fp_push(1.0); /* 0x1202A5B5: fld1  */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x1202A5B7: fld qword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1202A5BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A651; /* 0x1202A5BC: je 0x1202a651 */
L_1202A5C2:
    PUSH32(esp, 0x120014BCu); /* 0x1202A5C2: push 0x120014bc */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202A5C7: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202A5C9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A5CB: fstp st(0) */
    PUSH32(esp, 8); /* 0x1202A5CD: push 8 */
    edx = POP32_VAL(esp); /* 0x1202A5CF: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202A5D0: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202A5D2: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202A5D5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202A5D7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202A5D9: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202A5DA: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202A5DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202A5E0: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1202A5E1: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x1202A5E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A655; /* 0x1202A5E6: je 0x1202a655 */
L_1202A5E8:
    esi = MEM32(ebp + 0x1C); /* 0x1202A5E8: mov esi, dword ptr [ebp + 0x1c] */
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x1202A5EB: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x1202A5EB: shl esi, 3 */
    PUSH32(esp, esi); /* 0x1202A5EE: push esi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1202A5EF: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x1202A5F2: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1202A5F3: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1202A5F8: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(esi + edx + (-0x8))); /* 0x1202A5FB: fld dword ptr [esi + edx - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202A5FF: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x1202A602: fld qword ptr [ebp + 0x14] */
    _st[1] /= _st[0]; /* 0x1202A605: fdiv st(1), st(0) */
    fp_xch(1); /* 0x1202A607: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202A609: fcom qword ptr [0x12001eb0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202A60F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202A611: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202A61A; /* 0x1202A614: jp 0x1202a61a */
L_1202A616:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202A616: fstp st(0) */
    fp_push(1.0); /* 0x1202A618: fld1  */
L_1202A61A:
    fp_xch(1); /* 0x1202A61A: fxch st(1) */
L_1202A61C:
    ecx = MEM32(ebp + (-0xC)); /* 0x1202A61C: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x1202A61F: mov eax, dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x18) = _v; } /* 0x1202A622: fstp qword ptr [ecx + 0x18] */
    MEM32(ecx + 0x14) = eax; /* 0x1202A625: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x1202A628: mov eax, dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x1202A62B: fstp qword ptr [ecx + 0x20] */
    MEM32(ecx + 0x50) = eax; /* 0x1202A62E: mov dword ptr [ecx + 0x50], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1202A631: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx + 0x40) = eax; /* 0x1202A634: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(ebp + 0x10); /* 0x1202A637: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x28) = eax; /* 0x1202A63A: mov dword ptr [ecx + 0x28], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1202A63D: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ecx + 0x38) = edi; /* 0x1202A640: mov dword ptr [ecx + 0x38], edi */
    MEM32(ecx + 0x3C) = ebx; /* 0x1202A643: mov dword ptr [ecx + 0x3c], ebx */
    MEM32(ecx + 0x2C) = eax; /* 0x1202A646: mov dword ptr [ecx + 0x2c], eax */
    MEM32(ecx + 0x30) = edx; /* 0x1202A649: mov dword ptr [ecx + 0x30], edx */
    MEM32(ecx + 0x34) = edi; /* 0x1202A64C: mov dword ptr [ecx + 0x34], edi */
    goto L_1202A680; /* 0x1202A64F: jmp 0x1202a680 */
L_1202A651:
    edx = edi; /* 0x1202A651: mov edx, edi */
    RECOMP_BACKEDGE();
    goto L_1202A61C; /* 0x1202A653: jmp 0x1202a61c */
L_1202A655:
    edi = 0x8007000Eu; /* 0x1202A655: mov edi, 0x8007000e */
    /* test esi, esi */ /* 0x1202A65A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A665; /* 0x1202A65C: je 0x1202a665 */
L_1202A65E:
    PUSH32(esp, esi); /* 0x1202A65E: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202A65F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202A664: pop ecx */
L_1202A665:
    /* test ebx, ebx */ /* 0x1202A665: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A672; /* 0x1202A667: je 0x1202a672 */
L_1202A669:
    PUSH32(esp, 3); /* 0x1202A669: push 3 */
    ecx = ebx; /* 0x1202A66B: mov ecx, ebx */
    RECOMP_CALL(sub_12028ED7); /* 0x1202A66D: call 0x12028ed7 */
    RECOMP_FLAGS_IN();
L_1202A672:
    eax = MEM32(ebp + (-0x8)); /* 0x1202A672: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1202A675: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A680; /* 0x1202A677: je 0x1202a680 */
L_1202A679:
    PUSH32(esp, eax); /* 0x1202A679: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202A67A: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202A67F: pop ecx */
L_1202A680:
    eax = edi; /* 0x1202A680: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1202A682: pop edi */
    esi = POP32_VAL(esp); /* 0x1202A683: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202A684: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202A685: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1202A686: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1202A68E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202A68Eu);

L_1202A68E:
    edi = edi; /* 0x1202A68E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202A690: push ebp */
    ebp = esp; /* 0x1202A691: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1202A693: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1202A696: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1202A699: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202A6A5; /* 0x1202A69C: jb 0x1202a6a5 */
L_1202A69E:
    eax = 0x8876086Cu; /* 0x1202A69E: mov eax, 0x8876086c */
    goto L_1202A6BA; /* 0x1202A6A3: jmp 0x1202a6ba */
L_1202A6A5:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1202A6A5: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1202A6A8: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1202A6AB: push dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1202A6AE: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1202A6B1: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202A6B2: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_12029D0E); /* 0x1202A6B5: call 0x12029d0e */
    RECOMP_FLAGS_IN();
L_1202A6BA:
    ebp = POP32_VAL(esp); /* 0x1202A6BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202A6BB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202A6C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202A6C3u);

L_1202A6C3:
    edi = edi; /* 0x1202A6C3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202A6C5: push ebp */
    ebp = esp; /* 0x1202A6C6: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1202A6C8: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1202A6CB: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1202A6CE: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202A6DA; /* 0x1202A6D1: jb 0x1202a6da */
L_1202A6D3:
    eax = 0x8876086Cu; /* 0x1202A6D3: mov eax, 0x8876086c */
    goto L_1202A6EF; /* 0x1202A6D8: jmp 0x1202a6ef */
L_1202A6DA:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1202A6DA: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1202A6DD: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1202A6E0: push dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1202A6E3: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1202A6E6: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202A6E7: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_12029D0E); /* 0x1202A6EA: call 0x12029d0e */
    RECOMP_FLAGS_IN();
L_1202A6EF:
    ebp = POP32_VAL(esp); /* 0x1202A6EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202A6F0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202A6F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202A6F8u);

L_1202A6F8:
    edi = edi; /* 0x1202A6F8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202A6FA: push ebp */
    ebp = esp; /* 0x1202A6FB: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1202A6FD: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1202A700: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1202A703: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202A70F; /* 0x1202A706: jb 0x1202a70f */
L_1202A708:
    eax = 0x8876086Cu; /* 0x1202A708: mov eax, 0x8876086c */
    goto L_1202A724; /* 0x1202A70D: jmp 0x1202a724 */
L_1202A70F:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1202A70F: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1202A712: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1202A715: push dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1202A718: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1202A71B: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202A71C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_12029D73); /* 0x1202A71F: call 0x12029d73 */
    RECOMP_FLAGS_IN();
L_1202A724:
    ebp = POP32_VAL(esp); /* 0x1202A724: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202A725: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202A72D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202A72Du);

L_1202A72D:
    edi = edi; /* 0x1202A72D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202A72F: push ebp */
    ebp = esp; /* 0x1202A730: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x1202A732: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202A738: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202A73D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202A73F: mov dword ptr [ebp - 4], eax */
    fp_push(0.0); /* 0x1202A742: fldz  */
    ecx = MEM32(ebp + 0xC); /* 0x1202A744: mov ecx, dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1202A747: fst dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x1202A74A: push ebx */
    fp_push(1.0); /* 0x1202A74B: fld1  */
    PUSH32(esp, esi); /* 0x1202A74D: push esi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x1202A74E: fst dword ptr [ebp - 0x64] */
    PUSH32(esp, edi); /* 0x1202A751: push edi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1202A752: fst dword ptr [ebp - 0x60] */
    esi = ebp + (-0x64); /* 0x1202A755: lea esi, [ebp - 0x64] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1202A758: fst dword ptr [ebp - 0x5c] */
    edi = ebp + (-0x20); /* 0x1202A75B: lea edi, [ebp - 0x20] */
    fp_xch(1); /* 0x1202A75E: fxch st(1) */
    eax = MEM32(ebp + 0x8); /* 0x1202A760: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A763: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x1202A764: fst dword ptr [ebp - 0x94] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A76A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A76B: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x1202A76C: fst dword ptr [ebp - 0x68] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x1202A76F: fst dword ptr [ebp - 0x64] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1202A772: fst dword ptr [ebp - 0x60] */
    MEM32(ebp + (-0x54)) = ecx; /* 0x1202A775: mov dword ptr [ebp - 0x54], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1202A778: mov ecx, dword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x1202A77B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1202A77D: fstp dword ptr [ebp - 0x5c] */
    esi = ebp + (-0x68); /* 0x1202A780: lea esi, [ebp - 0x68] */
    edi = ebp + (-0x90); /* 0x1202A783: lea edi, [ebp - 0x90] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A789: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1202A78A: fst dword ptr [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A78D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A78E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x48)) = ecx; /* 0x1202A78F: mov dword ptr [ebp - 0x48], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1202A792: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x1202A795: mov dword ptr [ebp - 0x40], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x1202A798: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A79B: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x1202A79C: fst dword ptr [ebp - 0x64] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1202A79F: fst dword ptr [ebp - 0x60] */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x1202A7A2: mov dword ptr [ebp - 0x3c], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1202A7A5: fstp dword ptr [ebp - 0x5c] */
    ecx = MEM32(ebp + 0x1C); /* 0x1202A7A8: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1202A7AB: mov dword ptr [ebp - 0x30], ecx */
    ecx = MEM32(ebp + 0x20); /* 0x1202A7AE: mov ecx, dword ptr [ebp + 0x20] */
    esi = ebp + (-0x64); /* 0x1202A7B1: lea esi, [ebp - 0x64] */
    edi = ebp + (-0x10); /* 0x1202A7B4: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A7B7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x34)) = ecx; /* 0x1202A7B8: mov dword ptr [ebp - 0x34], ecx */
    ecx = MEM32(ebp + 0x24); /* 0x1202A7BB: mov ecx, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1202A7BE: mov dword ptr [ebp - 0x28], ecx */
    ecx = MEM32(ebp + 0x28); /* 0x1202A7C1: mov ecx, dword ptr [ebp + 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A7C4: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202A7C5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) & ebx; /* 0x1202A7C7: and dword ptr [ebp - 0x4c], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202A7CA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) & edx; /* 0x1202A7CC: and dword ptr [ebp - 0x50], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x6C)) = ecx; /* 0x1202A7CF: mov dword ptr [ebp - 0x6c], ecx */
    ecx = MEM32(eax + 0x38); /* 0x1202A7D2: mov ecx, dword ptr [eax + 0x38] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202A7D5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x74)) = eax; /* 0x1202A7D6: mov dword ptr [ebp - 0x74], eax */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1202A7D9: mov dword ptr [ebp - 0x38], ebx */
    MEM32(ebp + (-0x58)) = edx; /* 0x1202A7DC: mov dword ptr [ebp - 0x58], edx */
    MEM32(ebp + (-0x44)) = ecx; /* 0x1202A7DF: mov dword ptr [ebp - 0x44], ecx */
    edi = 0x8876086Cu; /* 0x1202A7E2: mov edi, 0x8876086c */
    /* cmp ecx, MEM32(eax + 0x50) */ /* 0x1202A7E7: cmp ecx, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202A7F1; /* 0x1202A7EA: jne 0x1202a7f1 */
L_1202A7EC:
    ebx = edi; /* 0x1202A7EC: mov ebx, edi */
    MEM32(ebp + (-0x38)) = edi; /* 0x1202A7EE: mov dword ptr [ebp - 0x38], edi */
L_1202A7F1:
    edx = MEM32(ebp + (-0x54)); /* 0x1202A7F1: mov edx, dword ptr [ebp - 0x54] */
    /* test edx, edx */ /* 0x1202A7F4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A7FD; /* 0x1202A7F6: jne 0x1202a7fd */
L_1202A7F8:
    ebx = edi; /* 0x1202A7F8: mov ebx, edi */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1202A7FA: mov dword ptr [ebp - 0x38], ebx */
L_1202A7FD:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x1202A7FD: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202A80F; /* 0x1202A801: jne 0x1202a80f */
L_1202A803:
    esi = MEM32(ebp + (-0x48)); /* 0x1202A803: mov esi, dword ptr [ebp - 0x48] */
    /* test esi, esi */ /* 0x1202A806: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A80F; /* 0x1202A808: je 0x1202a80f */
L_1202A80A:
    ebx = edi; /* 0x1202A80A: mov ebx, edi */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1202A80C: mov dword ptr [ebp - 0x38], ebx */
L_1202A80F:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1202A80F: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202A821; /* 0x1202A813: jne 0x1202a821 */
L_1202A815:
    esi = MEM32(ebp + (-0x40)); /* 0x1202A815: mov esi, dword ptr [ebp - 0x40] */
    /* test esi, esi */ /* 0x1202A818: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A821; /* 0x1202A81A: je 0x1202a821 */
L_1202A81C:
    ebx = edi; /* 0x1202A81C: mov ebx, edi */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1202A81E: mov dword ptr [ebp - 0x38], ebx */
L_1202A821:
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x1202A821: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202A833; /* 0x1202A825: jne 0x1202a833 */
L_1202A827:
    esi = MEM32(ebp + (-0x3C)); /* 0x1202A827: mov esi, dword ptr [ebp - 0x3c] */
    /* test esi, esi */ /* 0x1202A82A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A833; /* 0x1202A82C: je 0x1202a833 */
L_1202A82E:
    ebx = edi; /* 0x1202A82E: mov ebx, edi */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1202A830: mov dword ptr [ebp - 0x38], ebx */
L_1202A833:
    /* test ebx, ebx */ /* 0x1202A833: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202ABEF; /* 0x1202A835: js 0x1202abef */
L_1202A83B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202A83B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1202A83D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A89B; /* 0x1202A83F: je 0x1202a89b */
L_1202A841:
    ebx = MEM32(eax + 0x3C); /* 0x1202A841: mov ebx, dword ptr [eax + 0x3c] */
    edi = MEM32(eax + 0x40); /* 0x1202A844: mov edi, dword ptr [eax + 0x40] */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1202A847: mov dword ptr [ebp - 0x2c], ebx */
L_1202A84A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1202A84A: add ecx, esi */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1202A84C: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1202A84C: shr ecx, 1 */
    eax = MEM32(edi + ecx * 4); /* 0x1202A84E: mov eax, dword ptr [edi + ecx*4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1202A851: imul eax, eax, 0x44 */
    eax = MEM32(eax + ebx); /* 0x1202A854: mov eax, dword ptr [eax + ebx] */
L_1202A857:
    SET_LO8(ebx, MEM8(eax)); /* 0x1202A857: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x1202A859: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202A877; /* 0x1202A85B: jne 0x1202a877 */
L_1202A85D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1202A85D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202A873; /* 0x1202A85F: je 0x1202a873 */
L_1202A861:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x1202A861: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x1202A864: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202A877; /* 0x1202A867: jne 0x1202a877 */
L_1202A869:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1202A869: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1202A86C: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1202A86F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A857; /* 0x1202A871: jne 0x1202a857 */
L_1202A873:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202A873: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202A87C; /* 0x1202A875: jmp 0x1202a87c */
L_1202A877:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1202A877: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1202A879: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1202A87C:
    /* test eax, eax */ /* 0x1202A87C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202A888; /* 0x1202A87E: jns 0x1202a888 */
L_1202A880:
    esi = ecx + 0x1; /* 0x1202A880: lea esi, [ecx + 1] */
    ecx = MEM32(ebp + (-0x44)); /* 0x1202A883: mov ecx, dword ptr [ebp - 0x44] */
    goto L_1202A891; /* 0x1202A886: jmp 0x1202a891 */
L_1202A888:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_1202AA22; /* 0x1202A888: jle 0x1202aa22 */
L_1202A88E:
    MEM32(ebp + (-0x44)) = ecx; /* 0x1202A88E: mov dword ptr [ebp - 0x44], ecx */
L_1202A891:
    ebx = MEM32(ebp + (-0x2C)); /* 0x1202A891: mov ebx, dword ptr [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x54)); /* 0x1202A894: mov edx, dword ptr [ebp - 0x54] */
    /* cmp esi, ecx */ /* 0x1202A897: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202A84A; /* 0x1202A899: jb 0x1202a84a */
L_1202A89B:
    ecx = edx; /* 0x1202A89B: mov ecx, edx */
    edx = ecx + 0x1; /* 0x1202A89D: lea edx, [ecx + 1] */
L_1202A8A0:
    SET_LO8(eax, MEM8(ecx)); /* 0x1202A8A0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202A8A2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1202A8A3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A8A0; /* 0x1202A8A5: jne 0x1202a8a0 */
L_1202A8A7:
    ebx = MEM32(ebp + (-0x48)); /* 0x1202A8A7: mov ebx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1202A8AA: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202A8AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1202A8AE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1202A8B0: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1202A8B2: neg edx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + (-0x40)) */ /* 0x1202A8B4: cmp eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ecx + 0x1; /* 0x1202A8B7: lea edi, [ecx + 1] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1202A8BA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202A8BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1202A8BE: neg eax */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(ebp + (-0x3C)) */ /* 0x1202A8C0: cmp ecx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x78)) = edx; /* 0x1202A8C3: mov dword ptr [ebp - 0x78], edx */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1202A8C6: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202A8C8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202A8CA: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202A8CC: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x70)) = eax; /* 0x1202A8CD: mov dword ptr [ebp - 0x70], eax */
    MEM32(ebp + (-0x80)) = ecx; /* 0x1202A8D0: mov dword ptr [ebp - 0x80], ecx */
    /* test edx, edx */ /* 0x1202A8D3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A8E2; /* 0x1202A8D5: jne 0x1202a8e2 */
L_1202A8D7:
    ebx = esi; /* 0x1202A8D7: mov ebx, esi */
    edx = ebp + (-0x24); /* 0x1202A8D9: lea edx, [ebp - 0x24] */
    MEM32(ebp + (-0x48)) = ebx; /* 0x1202A8DC: mov dword ptr [ebp - 0x48], ebx */
    MEM32(ebp + (-0x30)) = edx; /* 0x1202A8DF: mov dword ptr [ebp - 0x30], edx */
L_1202A8E2:
    /* test eax, eax */ /* 0x1202A8E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A8F2; /* 0x1202A8E4: jne 0x1202a8f2 */
L_1202A8E6:
    eax = ebp + (-0x94); /* 0x1202A8E6: lea eax, [ebp - 0x94] */
    MEM32(ebp + (-0x40)) = esi; /* 0x1202A8EC: mov dword ptr [ebp - 0x40], esi */
    MEM32(ebp + (-0x34)) = eax; /* 0x1202A8EF: mov dword ptr [ebp - 0x34], eax */
L_1202A8F2:
    /* test ecx, ecx */ /* 0x1202A8F2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202A8FF; /* 0x1202A8F4: jne 0x1202a8ff */
L_1202A8F6:
    eax = ebp + (-0x14); /* 0x1202A8F6: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x3C)) = esi; /* 0x1202A8F9: mov dword ptr [ebp - 0x3c], esi */
    MEM32(ebp + (-0x28)) = eax; /* 0x1202A8FC: mov dword ptr [ebp - 0x28], eax */
L_1202A8FF:
    PUSH32(esp, 0x120014BCu); /* 0x1202A8FF: push 0x120014bc */
    PUSH32(esp, edi); /* 0x1202A904: push edi */
    RECOMP_CALL(sub_12018970); /* 0x1202A905: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202A90A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202A90C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202A90D: pop ecx */
    MEM32(ebp + (-0x7C)) = esi; /* 0x1202A90E: mov dword ptr [ebp - 0x7c], esi */
    /* test esi, esi */ /* 0x1202A911: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABB5; /* 0x1202A913: je 0x1202abb5 */
L_1202A919:
    PUSH32(esp, 0x120014BCu); /* 0x1202A919: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202A91E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202A920: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202A922: pop edx */
    eax = ebx; /* 0x1202A923: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202A925: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202A927: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202A92A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202A92C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202A92E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202A92F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202A934: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202A935: pop ecx */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1202A936: mov dword ptr [ebp - 0x4c], eax */
    /* test eax, eax */ /* 0x1202A939: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABB5; /* 0x1202A93B: je 0x1202abb5 */
L_1202A941:
    eax = MEM32(ebp + (-0x40)); /* 0x1202A941: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, 0x120014BCu); /* 0x1202A944: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202A949: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x1202A94B: push 0x14 */
    edx = POP32_VAL(esp); /* 0x1202A94D: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202A94E: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202A950: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202A953: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202A955: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202A957: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202A958: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202A95D: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202A95F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202A960: pop ecx */
    MEM32(ebp + (-0x58)) = ebx; /* 0x1202A961: mov dword ptr [ebp - 0x58], ebx */
    /* test ebx, ebx */ /* 0x1202A964: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABB5; /* 0x1202A966: je 0x1202abb5 */
L_1202A96C:
    eax = MEM32(ebp + (-0x3C)); /* 0x1202A96C: mov eax, dword ptr [ebp - 0x3c] */
    PUSH32(esp, 0x120014BCu); /* 0x1202A96F: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202A974: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202A976: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202A978: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202A979: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202A97B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202A97E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202A980: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202A982: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202A983: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202A988: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202A989: pop ecx */
    MEM32(ebp + (-0x50)) = eax; /* 0x1202A98A: mov dword ptr [ebp - 0x50], eax */
    /* test eax, eax */ /* 0x1202A98D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABB5; /* 0x1202A98F: je 0x1202abb5 */
L_1202A995:
    PUSH32(esp, edi); /* 0x1202A995: push edi */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1202A996: push dword ptr [ebp - 0x54] */
    PUSH32(esp, esi); /* 0x1202A999: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x1202A99A: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x48)); /* 0x1202A99F: mov esi, dword ptr [ebp - 0x48] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1202A9A2: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1202A9A2: shl esi, 4 */
    PUSH32(esp, esi); /* 0x1202A9A5: push esi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1202A9A6: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1202A9A9: push dword ptr [ebp - 0x4c] */
    RECOMP_CALL(sub_121BF440); /* 0x1202A9AC: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x40)); /* 0x1202A9B1: mov edi, dword ptr [ebp - 0x40] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x14u); /* 0x1202A9B4: imul edi, edi, 0x14 */
    PUSH32(esp, edi); /* 0x1202A9B7: push edi */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1202A9B8: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ebx); /* 0x1202A9BB: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x1202A9BC: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x3C)); /* 0x1202A9C1: mov ebx, dword ptr [ebp - 0x3c] */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x1202A9C4: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x1202A9C4: shl ebx, 4 */
    PUSH32(esp, ebx); /* 0x1202A9C7: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1202A9C8: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1202A9CB: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_121BF440); /* 0x1202A9CE: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1202A9D3: mov eax, dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(esi + eax + (-0x10))); /* 0x1202A9D6: fld dword ptr [esi + eax - 0x10] */
    eax = MEM32(ebp + (-0x34)); /* 0x1202A9DA: mov eax, dword ptr [ebp - 0x34] */
    _st[0] = fabs(_st[0]); /* 0x1202A9DD: fabs  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1202A9DF: add esp, 0x30 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1202A9E2: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1202A9E5: fld dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1202A9E8: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(edi + eax + (-0x14))); /* 0x1202A9EB: fld dword ptr [edi + eax - 0x14] */
    eax = MEM32(ebp + (-0x28)); /* 0x1202A9EF: mov eax, dword ptr [ebp - 0x28] */
    _st[0] = fabs(_st[0]); /* 0x1202A9F2: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1202A9F4: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1202A9F7: fld dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1202A9FA: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebx + eax + (-0x10))); /* 0x1202A9FD: fld dword ptr [ebx + eax - 0x10] */
    _st[0] = fabs(_st[0]); /* 0x1202AA01: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1202AA03: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1202AA06: fld dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1202AA09: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1202AA0C: fld dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1202AA0F: fld dword ptr [ebp - 0x2c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202AA12: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202AA14: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202AA16: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202AA2C; /* 0x1202AA19: jp 0x1202aa2c */
L_1202AA1B:
    fp_xch(1); /* 0x1202AA1B: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1202AA1D: fst dword ptr [ebp - 0x28] */
    goto L_1202AA31; /* 0x1202AA20: jmp 0x1202aa31 */
L_1202AA22:
    ebx = 0x8876086Cu; /* 0x1202AA22: mov ebx, 0x8876086c */
    goto L_1202ABEF; /* 0x1202AA27: jmp 0x1202abef */
L_1202AA2C:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1202AA2C: fst dword ptr [ebp - 0x28] */
    fp_xch(1); /* 0x1202AA2F: fxch st(1) */
L_1202AA31:
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1202AA31: fld dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1202AA34: fld dword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202AA37: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202AA39: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202AA3B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202AA46; /* 0x1202AA3E: jp 0x1202aa46 */
L_1202AA40:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202AA40: fstp st(1) */
L_1202AA42:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202AA42: fstp st(1) */
    goto L_1202AA53; /* 0x1202AA44: jmp 0x1202aa53 */
L_1202AA46:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202AA46: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202AA48: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202AA4A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202AA4C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202AA42; /* 0x1202AA4F: je 0x1202aa42 */
L_1202AA51:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202AA51: fstp st(0) */
L_1202AA53:
    ebx = MEM32(ebp + (-0x74)); /* 0x1202AA53: mov ebx, dword ptr [ebp - 0x74] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1202AA56: fstp dword ptr [ebp - 0x28] */
    edx = MEM32(ebx + 0x38); /* 0x1202AA59: mov edx, dword ptr [ebx + 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1202AA5C: fld dword ptr [ebp - 0x28] */
    _st[0] /= *(double*)ADDR(ebx + 0x18); /* 0x1202AA5F: fdiv qword ptr [ebx + 0x18] */
    /* test edx, edx */ /* 0x1202AA62: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202AA6B; /* 0x1202AA64: jne 0x1202aa6b */
L_1202AA66:
    /* cmp MEM32(ebx + 0x2C), edx */ /* 0x1202AA66: cmp dword ptr [ebx + 0x2c], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202AA7A; /* 0x1202AA69: je 0x1202aa7a */
L_1202AA6B:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x20)); /* 0x1202AA6B: fcom qword ptr [ebx + 0x20] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202AA6E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202AA70: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202AA7A; /* 0x1202AA73: jp 0x1202aa7a */
L_1202AA75:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202AA75: fstp st(0) */
    fp_push(*(double*)ADDR(ebx + 0x20)); /* 0x1202AA77: fld qword ptr [ebx + 0x20] */
L_1202AA7A:
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x20) = _v; } /* 0x1202AA7A: fstp qword ptr [ebx + 0x20] */
    fp_push(*(double*)ADDR(ebx + 0x20)); /* 0x1202AA7D: fld qword ptr [ebx + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202AA80: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202AA86: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202AA88: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202AA92; /* 0x1202AA8B: jp 0x1202aa92 */
L_1202AA8D:
    fp_push(1.0); /* 0x1202AA8D: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x20) = _v; } /* 0x1202AA8F: fstp qword ptr [ebx + 0x20] */
L_1202AA92:
    eax = MEM32(ebx + 0x3C); /* 0x1202AA92: mov eax, dword ptr [ebx + 0x3c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44u); /* 0x1202AA95: imul edx, edx, 0x44 */
    ecx = MEM32(ebp + (-0x7C)); /* 0x1202AA98: mov ecx, dword ptr [ebp - 0x7c] */
    MEM32(edx + eax) = ecx; /* 0x1202AA9B: mov dword ptr [edx + eax], ecx */
    ecx = MEM32(ebx + 0x38); /* 0x1202AA9E: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AAA1: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AAA4: imul ecx, ecx, 0x44 */
    ecx = ecx + eax + 0x40; /* 0x1202AAA7: lea ecx, [ecx + eax + 0x40] */
    eax = MEM32(ecx); /* 0x1202AAAB: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0x78)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0x78))));
    eax = eax ^ MEM32(ebp + (-0x78)); /* 0x1202AAAD: xor eax, dword ptr [ebp - 0x78] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x48)); /* 0x1202AAB0: mov esi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1202AAB3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx) ^ eax));
    MEM32(ecx) = MEM32(ecx) ^ eax; /* 0x1202AAB6: xor dword ptr [ecx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x38); /* 0x1202AAB8: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AABB: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AABE: imul ecx, ecx, 0x44 */
    MEM32(ecx + eax + 0x4) = esi; /* 0x1202AAC1: mov dword ptr [ecx + eax + 4], esi */
    ecx = MEM32(ebx + 0x38); /* 0x1202AAC5: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AAC8: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AACB: imul ecx, ecx, 0x44 */
    edx = MEM32(ebp + (-0x4C)); /* 0x1202AACE: mov edx, dword ptr [ebp - 0x4c] */
    MEM32(ecx + eax + 0x10) = edx; /* 0x1202AAD1: mov dword ptr [ecx + eax + 0x10], edx */
    ecx = MEM32(ebx + 0x38); /* 0x1202AAD5: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AAD8: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AADB: imul ecx, ecx, 0x44 */
    ecx = ecx + eax + 0x40; /* 0x1202AADE: lea ecx, [ecx + eax + 0x40] */
    eax = MEM32(ebp + (-0x70)); /* 0x1202AAE2: mov eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202AAE5: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ MEM32(ecx))); _flag_b = (uint32_t)((eax ^ MEM32(ecx)));
    eax = eax ^ MEM32(ecx); /* 0x1202AAE7: xor eax, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x40)); /* 0x1202AAE9: mov esi, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1202AAEC: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx) ^ eax));
    MEM32(ecx) = MEM32(ecx) ^ eax; /* 0x1202AAEF: xor dword ptr [ecx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x38); /* 0x1202AAF1: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AAF4: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AAF7: imul ecx, ecx, 0x44 */
    MEM32(ecx + eax + 0x8) = esi; /* 0x1202AAFA: mov dword ptr [ecx + eax + 8], esi */
    ecx = MEM32(ebx + 0x38); /* 0x1202AAFE: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AB01: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AB04: imul ecx, ecx, 0x44 */
    edx = MEM32(ebp + (-0x58)); /* 0x1202AB07: mov edx, dword ptr [ebp - 0x58] */
    MEM32(ecx + eax + 0x14) = edx; /* 0x1202AB0A: mov dword ptr [ecx + eax + 0x14], edx */
    ecx = MEM32(ebx + 0x38); /* 0x1202AB0E: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AB11: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AB14: imul ecx, ecx, 0x44 */
    ecx = ecx + eax + 0x40; /* 0x1202AB17: lea ecx, [ecx + eax + 0x40] */
    eax = MEM32(ebp + (-0x80)); /* 0x1202AB1B: mov eax, dword ptr [ebp - 0x80] */
    esi = MEM32(ebp + (-0x3C)); /* 0x1202AB1E: mov esi, dword ptr [ebp - 0x3c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1202AB21: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1202AB21: shl eax, 2 */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx))); _flag_b = (uint32_t)((eax ^ MEM32(ecx)));
    eax = eax ^ MEM32(ecx); /* 0x1202AB24: xor eax, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x50)); /* 0x1202AB26: mov edx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x1202AB29: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx) ^ eax));
    MEM32(ecx) = MEM32(ecx) ^ eax; /* 0x1202AB2C: xor dword ptr [ecx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x38); /* 0x1202AB2E: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AB31: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AB34: imul ecx, ecx, 0x44 */
    MEM32(ecx + eax + 0xC) = esi; /* 0x1202AB37: mov dword ptr [ecx + eax + 0xc], esi */
    ecx = MEM32(ebx + 0x38); /* 0x1202AB3B: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AB3E: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AB41: imul ecx, ecx, 0x44 */
    MEM32(ecx + eax + 0x18) = edx; /* 0x1202AB44: mov dword ptr [ecx + eax + 0x18], edx */
    ecx = MEM32(ebx + 0x38); /* 0x1202AB48: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AB4B: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AB4E: imul ecx, ecx, 0x44 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202AB51: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + eax + 0x34) = edx; /* 0x1202AB53: mov dword ptr [ecx + eax + 0x34], edx */
    ecx = MEM32(ebx + 0x38); /* 0x1202AB57: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AB5A: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AB5D: imul ecx, ecx, 0x44 */
    MEM32(ecx + eax + 0x38) = edx; /* 0x1202AB60: mov dword ptr [ecx + eax + 0x38], edx */
    ecx = MEM32(ebx + 0x38); /* 0x1202AB64: mov ecx, dword ptr [ebx + 0x38] */
    eax = MEM32(ebx + 0x3C); /* 0x1202AB67: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AB6A: imul ecx, ecx, 0x44 */
    MEM32(ecx + eax + 0x3C) = edx; /* 0x1202AB6D: mov dword ptr [ecx + eax + 0x3c], edx */
    eax = MEM32(ebp + (-0x44)); /* 0x1202AB71: mov eax, dword ptr [ebp - 0x44] */
    esi = eax; /* 0x1202AB74: mov esi, eax */
    /* cmp eax, MEM32(ebx + 0x38) */ /* 0x1202AB76: cmp eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202AB95; /* 0x1202AB79: jae 0x1202ab95 */
L_1202AB7B:
    edx = MEM32(ebx + 0x38); /* 0x1202AB7B: mov edx, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x40); /* 0x1202AB7E: mov ecx, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1202AB81: sub edx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1202AB83: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + edx * 4 + (-0x4)); /* 0x1202AB85: mov eax, dword ptr [ecx + edx*4 - 4] */
    MEM32(ecx + edx * 4) = eax; /* 0x1202AB89: mov dword ptr [ecx + edx*4], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1202AB8C: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202AB8F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x38) */ /* 0x1202AB90: cmp esi, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202AB7B; /* 0x1202AB93: jb 0x1202ab7b */
L_1202AB95:
    ecx = MEM32(ebp + (-0x6C)); /* 0x1202AB95: mov ecx, dword ptr [ebp - 0x6c] */
    /* test ecx, ecx */ /* 0x1202AB98: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABA1; /* 0x1202AB9A: je 0x1202aba1 */
L_1202AB9C:
    eax = MEM32(ebx + 0x38); /* 0x1202AB9C: mov eax, dword ptr [ebx + 0x38] */
    MEM32(ecx) = eax; /* 0x1202AB9F: mov dword ptr [ecx], eax */
L_1202ABA1:
    eax = MEM32(ebx + 0x38); /* 0x1202ABA1: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x40); /* 0x1202ABA4: mov ecx, dword ptr [ebx + 0x40] */
    edx = MEM32(ebp + (-0x44)); /* 0x1202ABA7: mov edx, dword ptr [ebp - 0x44] */
    MEM32(ecx + edx * 4) = eax; /* 0x1202ABAA: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) + 1; /* 0x1202ABAD: inc dword ptr [ebx + 0x38] */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0x38)); /* 0x1202ABB0: mov ebx, dword ptr [ebp - 0x38] */
    goto L_1202ABEF; /* 0x1202ABB3: jmp 0x1202abef */
L_1202ABB5:
    ebx = 0x8007000Eu; /* 0x1202ABB5: mov ebx, 0x8007000e */
    /* test esi, esi */ /* 0x1202ABBA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABC5; /* 0x1202ABBC: je 0x1202abc5 */
L_1202ABBE:
    PUSH32(esp, esi); /* 0x1202ABBE: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202ABBF: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202ABC4: pop ecx */
L_1202ABC5:
    eax = MEM32(ebp + (-0x4C)); /* 0x1202ABC5: mov eax, dword ptr [ebp - 0x4c] */
    /* test eax, eax */ /* 0x1202ABC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABD3; /* 0x1202ABCA: je 0x1202abd3 */
L_1202ABCC:
    PUSH32(esp, eax); /* 0x1202ABCC: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202ABCD: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202ABD2: pop ecx */
L_1202ABD3:
    eax = MEM32(ebp + (-0x58)); /* 0x1202ABD3: mov eax, dword ptr [ebp - 0x58] */
    /* test eax, eax */ /* 0x1202ABD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABE1; /* 0x1202ABD8: je 0x1202abe1 */
L_1202ABDA:
    PUSH32(esp, eax); /* 0x1202ABDA: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202ABDB: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202ABE0: pop ecx */
L_1202ABE1:
    eax = MEM32(ebp + (-0x50)); /* 0x1202ABE1: mov eax, dword ptr [ebp - 0x50] */
    /* test eax, eax */ /* 0x1202ABE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ABEF; /* 0x1202ABE6: je 0x1202abef */
L_1202ABE8:
    PUSH32(esp, eax); /* 0x1202ABE8: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202ABE9: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202ABEE: pop ecx */
L_1202ABEF:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202ABEF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202ABF2: pop edi */
    esi = POP32_VAL(esp); /* 0x1202ABF3: pop esi */
    eax = ebx; /* 0x1202ABF4: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202ABF6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202ABF8: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202ABF9: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202ABFE: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1202ABFF: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1202AC07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202AC07u);

L_1202AC07:
    edi = edi; /* 0x1202AC07: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202AC09: push ebp */
    ebp = esp; /* 0x1202AC0A: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1202AC0C: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1202AC0F: mov edx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(edx + 0x38) */ /* 0x1202AC12: cmp ecx, dword ptr [edx + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202AC1E; /* 0x1202AC15: jb 0x1202ac1e */
L_1202AC17:
    eax = 0x8876086Cu; /* 0x1202AC17: mov eax, 0x8876086c */
    goto L_1202AC68; /* 0x1202AC1C: jmp 0x1202ac68 */
L_1202AC1E:
    eax = MEM32(ebp + 0x10); /* 0x1202AC1E: mov eax, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202AC21: imul ecx, ecx, 0x44 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + 0x3C); /* 0x1202AC24: add ecx, dword ptr [edx + 0x3c] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x1202AC27: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202AC17; /* 0x1202AC2A: jae 0x1202ac17 */
L_1202AC2C:
    PUSH32(esp, ebx); /* 0x1202AC2C: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1202AC2D: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1202AC30: push esi */
    PUSH32(esp, edi); /* 0x1202AC31: push edi */
    edi = MEM32(ecx + 0x10); /* 0x1202AC32: mov edi, dword ptr [ecx + 0x10] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1202AC35: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1202AC35: shl eax, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1202AC38: add edi, eax */
    _flag_k = FK_ADD;
    esi = ebx; /* 0x1202AC3A: mov esi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202AC3C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202AC3D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202AC3E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202AC3F: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ecx + 0x4); /* 0x1202AC40: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202AC43: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1202AC44: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202AC63; /* 0x1202AC47: jne 0x1202ac63 */
L_1202AC49:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1202AC49: fld dword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x20)); /* 0x1202AC4B: fcomp qword ptr [edx + 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202AC4E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202AC50: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202AC5E; /* 0x1202AC53: jp 0x1202ac5e */
L_1202AC55:
    ecx = edx; /* 0x1202AC55: mov ecx, edx */
    RECOMP_CALL(sub_12029CE8); /* 0x1202AC57: call 0x12029ce8 */
    RECOMP_FLAGS_IN();
    goto L_1202AC63; /* 0x1202AC5C: jmp 0x1202ac63 */
L_1202AC5E:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1202AC5E: fld dword ptr [ebx] */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x20) = _v; } /* 0x1202AC60: fstp qword ptr [edx + 0x20] */
L_1202AC63:
    edi = POP32_VAL(esp); /* 0x1202AC63: pop edi */
    esi = POP32_VAL(esp); /* 0x1202AC64: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202AC65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202AC67: pop ebx */
L_1202AC68:
    ebp = POP32_VAL(esp); /* 0x1202AC68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202AC69: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202AC71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202AC71u);

L_1202AC71:
    edi = edi; /* 0x1202AC71: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202AC73: push ebp */
    ebp = esp; /* 0x1202AC74: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1202AC76: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1202AC79: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202AC7A: mov ebx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ebx + 0x38) */ /* 0x1202AC7D: cmp edx, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202AC89; /* 0x1202AC80: jb 0x1202ac89 */
L_1202AC82:
    eax = 0x8876086Cu; /* 0x1202AC82: mov eax, 0x8876086c */
    goto L_1202ACD3; /* 0x1202AC87: jmp 0x1202acd3 */
L_1202AC89:
    eax = MEM32(ebp + 0x10); /* 0x1202AC89: mov eax, dword ptr [ebp + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44u); /* 0x1202AC8C: imul edx, edx, 0x44 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + 0x3C); /* 0x1202AC8F: add edx, dword ptr [ebx + 0x3c] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x1202AC92: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202AC82; /* 0x1202AC95: jae 0x1202ac82 */
L_1202AC97:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202AC97: imul eax, eax, 0x14 */
    PUSH32(esp, esi); /* 0x1202AC9A: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1202AC9B: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1202AC9E: push edi */
    edi = MEM32(edx + 0x14); /* 0x1202AC9F: mov edi, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1202ACA2: add edi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 5); /* 0x1202ACA4: push 5 */
    ecx = POP32_VAL(esp); /* 0x1202ACA6: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1202ACA7: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(edx + 0x8); /* 0x1202ACA9: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202ACAC: dec eax */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x1202ACAD: pop edi */
    esi = POP32_VAL(esp); /* 0x1202ACAE: pop esi */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1202ACAF: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202ACD1; /* 0x1202ACB2: jne 0x1202acd1 */
L_1202ACB4:
    ecx = MEM32(ebp + 0x14); /* 0x1202ACB4: mov ecx, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1202ACB7: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x20)); /* 0x1202ACB9: fcomp qword ptr [ebx + 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202ACBC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202ACBE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202ACCC; /* 0x1202ACC1: jp 0x1202accc */
L_1202ACC3:
    ecx = ebx; /* 0x1202ACC3: mov ecx, ebx */
    RECOMP_CALL(sub_12029CE8); /* 0x1202ACC5: call 0x12029ce8 */
    RECOMP_FLAGS_IN();
    goto L_1202ACD1; /* 0x1202ACCA: jmp 0x1202acd1 */
L_1202ACCC:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1202ACCC: fld dword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x20) = _v; } /* 0x1202ACCE: fstp qword ptr [ebx + 0x20] */
L_1202ACD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202ACD1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202ACD3:
    ebx = POP32_VAL(esp); /* 0x1202ACD3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1202ACD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202ACD5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202ACDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202ACDDu);

L_1202ACDD:
    edi = edi; /* 0x1202ACDD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202ACDF: push ebp */
    ebp = esp; /* 0x1202ACE0: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1202ACE2: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1202ACE5: mov edx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(edx + 0x38) */ /* 0x1202ACE8: cmp ecx, dword ptr [edx + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202ACF4; /* 0x1202ACEB: jb 0x1202acf4 */
L_1202ACED:
    eax = 0x8876086Cu; /* 0x1202ACED: mov eax, 0x8876086c */
    goto L_1202AD3E; /* 0x1202ACF2: jmp 0x1202ad3e */
L_1202ACF4:
    eax = MEM32(ebp + 0x10); /* 0x1202ACF4: mov eax, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202ACF7: imul ecx, ecx, 0x44 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + 0x3C); /* 0x1202ACFA: add ecx, dword ptr [edx + 0x3c] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x1202ACFD: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202ACED; /* 0x1202AD00: jae 0x1202aced */
L_1202AD02:
    PUSH32(esp, ebx); /* 0x1202AD02: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1202AD03: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1202AD06: push esi */
    PUSH32(esp, edi); /* 0x1202AD07: push edi */
    edi = MEM32(ecx + 0x18); /* 0x1202AD08: mov edi, dword ptr [ecx + 0x18] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1202AD0B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1202AD0B: shl eax, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1202AD0E: add edi, eax */
    _flag_k = FK_ADD;
    esi = ebx; /* 0x1202AD10: mov esi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202AD12: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202AD13: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202AD14: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202AD15: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ecx + 0xC); /* 0x1202AD16: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202AD19: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1202AD1A: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202AD39; /* 0x1202AD1D: jne 0x1202ad39 */
L_1202AD1F:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1202AD1F: fld dword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x20)); /* 0x1202AD21: fcomp qword ptr [edx + 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202AD24: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202AD26: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202AD34; /* 0x1202AD29: jp 0x1202ad34 */
L_1202AD2B:
    ecx = edx; /* 0x1202AD2B: mov ecx, edx */
    RECOMP_CALL(sub_12029CE8); /* 0x1202AD2D: call 0x12029ce8 */
    RECOMP_FLAGS_IN();
    goto L_1202AD39; /* 0x1202AD32: jmp 0x1202ad39 */
L_1202AD34:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1202AD34: fld dword ptr [ebx] */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x20) = _v; } /* 0x1202AD36: fstp qword ptr [edx + 0x20] */
L_1202AD39:
    edi = POP32_VAL(esp); /* 0x1202AD39: pop edi */
    esi = POP32_VAL(esp); /* 0x1202AD3A: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202AD3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202AD3D: pop ebx */
L_1202AD3E:
    ebp = POP32_VAL(esp); /* 0x1202AD3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202AD3F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202AD47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202AD47u);

L_1202AD47:
    edi = edi; /* 0x1202AD47: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202AD49: push ebp */
    ebp = esp; /* 0x1202AD4A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1202AD4C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202AD4F: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1202AD50: mov esi, dword ptr [ebp + 0x14] */
    /* cmp esi, MEM32(ecx + 0x38) */ /* 0x1202AD53: cmp esi, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202AD62; /* 0x1202AD56: jb 0x1202ad62 */
L_1202AD58:
    eax = 0x8876086Cu; /* 0x1202AD58: mov eax, 0x8876086c */
    goto L_1202AE04; /* 0x1202AD5D: jmp 0x1202ae04 */
L_1202AD62:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44u); /* 0x1202AD62: imul esi, esi, 0x44 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ecx + 0x3C); /* 0x1202AD65: add esi, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1202AD68: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202AD69: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202AD6B: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ecx + 0x28), 0 */ /* 0x1202AD6C: cmp dword ptr [ecx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202AD94; /* 0x1202AD70: je 0x1202ad94 */
L_1202AD72:
    /* cmp MEM32(ecx + 0x28), 2 */ /* 0x1202AD72: cmp dword ptr [ecx + 0x28], 2 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202AD94; /* 0x1202AD76: jne 0x1202ad94 */
L_1202AD78:
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x1202AD78: fld qword ptr [ecx + 0x20] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202AD7B: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202AD7E: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202AD80: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202AD82: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x1202AD84: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202AD97; /* 0x1202AD87: jnp 0x1202ad97 */
L_1202AD89:
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x1202AD89: fld qword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202AD8C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += _st[0]; /* 0x1202AD8E: fadd st(0), st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1202AD90: fsubrp st(1) */
    goto L_1202AD97; /* 0x1202AD92: jmp 0x1202ad97 */
L_1202AD94:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202AD94: fld qword ptr [ebp + 0xc] */
L_1202AD97:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1202AD97: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= *(double*)ADDR(ecx + 0x18); /* 0x1202AD9B: fmul qword ptr [ecx + 0x18] */
    *(double*)ADDR(ebp + 0xC) = _st[0]; /* 0x1202AD9E: fst qword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202ADBE; /* 0x1202ADA1: je 0x1202adbe */
L_1202ADA3:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202ADA3: push dword ptr [ebp + 0x18] */
    eax = esi + 0x34; /* 0x1202ADA6: lea eax, [esi + 0x34] */
    PUSH32(esp, eax); /* 0x1202ADA9: push eax */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1202ADAA: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1202ADAD: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1202ADB0: push edi */
    PUSH32(esp, ecx); /* 0x1202ADB1: push ecx */
    PUSH32(esp, ecx); /* 0x1202ADB2: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1202ADB3: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1202A117); /* 0x1202ADB6: call 0x1202a117 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202ADBB: fld qword ptr [ebp + 0xc] */
L_1202ADBE:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1202ADBE: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202ADDE; /* 0x1202ADC2: je 0x1202adde */
L_1202ADC4:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1202ADC4: push dword ptr [ebp + 0x1c] */
    eax = esi + 0x38; /* 0x1202ADC7: lea eax, [esi + 0x38] */
    PUSH32(esp, eax); /* 0x1202ADCA: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1202ADCB: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1202ADCE: push dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x1202ADD1: push edi */
    PUSH32(esp, ecx); /* 0x1202ADD2: push ecx */
    PUSH32(esp, ecx); /* 0x1202ADD3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1202ADD4: fstp qword ptr [esp] */
    RECOMP_CALL(sub_12029F08); /* 0x1202ADD7: call 0x12029f08 */
    RECOMP_FLAGS_IN();
    goto L_1202ADE0; /* 0x1202ADDC: jmp 0x1202ade0 */
L_1202ADDE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202ADDE: fstp st(0) */
L_1202ADE0:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1202ADE0: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202AE01; /* 0x1202ADE4: je 0x1202ae01 */
L_1202ADE6:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1202ADE6: push dword ptr [ebp + 0x20] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202ADE9: fld qword ptr [ebp + 0xc] */
    eax = esi + 0x3C; /* 0x1202ADEC: lea eax, [esi + 0x3c] */
    PUSH32(esp, eax); /* 0x1202ADEF: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1202ADF0: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1202ADF3: push dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x1202ADF6: push edi */
    PUSH32(esp, ecx); /* 0x1202ADF7: push ecx */
    PUSH32(esp, ecx); /* 0x1202ADF8: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1202ADF9: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1202A117); /* 0x1202ADFC: call 0x1202a117 */
    RECOMP_FLAGS_IN();
L_1202AE01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202AE01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1202AE03: pop edi */
L_1202AE04:
    esi = POP32_VAL(esp); /* 0x1202AE04: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202AE05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1202AE06: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1202AE0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202AE0Eu);

L_1202AE0E:
    edi = edi; /* 0x1202AE0E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202AE10: push ebp */
    ebp = esp; /* 0x1202AE11: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202AE13: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1202AE14: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x38); /* 0x1202AE17: mov eax, dword ptr [esi + 0x38] */
    /* cmp eax, 1 */ /* 0x1202AE1A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202AE26; /* 0x1202AE1D: jne 0x1202ae26 */
L_1202AE1F:
    eax = 0x88760B5Cu; /* 0x1202AE1F: mov eax, 0x88760b5c */
    goto L_1202AE8A; /* 0x1202AE24: jmp 0x1202ae8a */
L_1202AE26:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1202AE26: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202AE32; /* 0x1202AE29: jb 0x1202ae32 */
L_1202AE2B:
    eax = 0x8876086Cu; /* 0x1202AE2B: mov eax, 0x8876086c */
    goto L_1202AE8A; /* 0x1202AE30: jmp 0x1202ae8a */
L_1202AE32:
    PUSH32(esp, ebx); /* 0x1202AE32: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202AE33: mov ebx, dword ptr [ebp + 0xc] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x44u); /* 0x1202AE36: imul ebx, ebx, 0x44 */
    PUSH32(esp, edi); /* 0x1202AE39: push edi */
    edi = MEM32(esi + 0x3C); /* 0x1202AE3A: mov edi, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202AE3D: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x1202AE3E: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x38) = eax; /* 0x1202AE40: mov dword ptr [esi + 0x38], eax */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1202AE53; /* 0x1202AE43: je 0x1202ae53 */
L_1202AE45:
    ecx = edi; /* 0x1202AE45: mov ecx, edi */
    RECOMP_CALL(sub_12029754); /* 0x1202AE47: call 0x12029754 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1202AE4C: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1202AE4D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202AE52: pop ecx */
L_1202AE53:
    eax = MEM32(esi + 0x38); /* 0x1202AE53: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x1202AE56: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0x3C); /* 0x1202AE59: mov edx, dword ptr [esi + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1202AE5C: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x1202AE5F: add edx, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1202AE61: push eax */
    eax = edx + 0x44; /* 0x1202AE62: lea eax, [edx + 0x44] */
    PUSH32(esp, eax); /* 0x1202AE65: push eax */
    PUSH32(esp, edx); /* 0x1202AE66: push edx */
    RECOMP_CALL(sub_121BF4C4); /* 0x1202AE67: call 0x121bf4c4 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x38); /* 0x1202AE6C: mov edx, dword ptr [esi + 0x38] */
    eax = MEM32(esi + 0x3C); /* 0x1202AE6F: mov eax, dword ptr [esi + 0x3c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44u); /* 0x1202AE72: imul edx, edx, 0x44 */
    eax = edx + eax + 0x40; /* 0x1202AE75: lea eax, [edx + eax + 0x40] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFF7u; /* 0x1202AE79: and dword ptr [eax], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202AE7C: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x1202AE7F: mov ecx, esi */
    RECOMP_CALL(sub_12029CE8); /* 0x1202AE81: call 0x12029ce8 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1202AE86: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202AE87: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202AE89: pop ebx */
L_1202AE8A:
    esi = POP32_VAL(esp); /* 0x1202AE8A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202AE8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202AE8C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202AE94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202AE94u);

L_1202AE94:
    edi = edi; /* 0x1202AE94: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202AE96: push ebp */
    ebp = esp; /* 0x1202AE97: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1202AE99: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1202AE9C: push ebx */
    PUSH32(esp, esi); /* 0x1202AE9D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202AE9E: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, 3 */ /* 0x1202AEA1: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B086; /* 0x1202AEA4: jb 0x1202b086 */
L_1202AEAA:
    PUSH32(esp, 0x120014BCu); /* 0x1202AEAA: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202AEAF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202AEB1: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202AEB3: pop edx */
    eax = esi; /* 0x1202AEB4: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202AEB6: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202AEB8: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202AEBB: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202AEBD: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202AEBF: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202AEC0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202AEC5: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202AEC7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202AEC8: pop ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1202AEC9: mov dword ptr [ebp - 0xc], ebx */
    /* test ebx, ebx */ /* 0x1202AECC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B086; /* 0x1202AECE: je 0x1202b086 */
L_1202AED4:
    PUSH32(esp, edi); /* 0x1202AED4: push edi */
    /* test esi, esi */ /* 0x1202AED5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202AF0D; /* 0x1202AED7: je 0x1202af0d */
L_1202AED9:
    MEM32(ebp + (-0x8)) = 1; /* 0x1202AED9: mov dword ptr [ebp - 8], 1 */
    edi = ebx + 0x8; /* 0x1202AEE0: lea edi, [ebx + 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1202AEE3: mov ebx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1202AEE6: mov dword ptr [ebp - 4], esi */
L_1202AEE9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202AEE9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1202AEEB: mov eax, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x1202AEED: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = esi + ebx + (-0x2); /* 0x1202AEEF: lea eax, [esi + ebx - 2] */
    ecx = edx; /* 0x1202AEF3: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202AEF5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x1202AEF7: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(edi + (-0x8)) = ecx; /* 0x1202AEF9: mov dword ptr [edi - 8], ecx */
    MEM32(edi) = ecx; /* 0x1202AEFC: mov dword ptr [edi], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1202AEFE: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1202AEFF: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1202AF02: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    MEM32(edi + (-0x14)) = edx; /* 0x1202AF05: mov dword ptr [edi - 0x14], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202AEE9; /* 0x1202AF08: jne 0x1202aee9 */
L_1202AF0A:
    ebx = MEM32(ebp + (-0xC)); /* 0x1202AF0A: mov ebx, dword ptr [ebp - 0xc] */
L_1202AF0D:
    eax = esi + (-0x2); /* 0x1202AF0D: lea eax, [esi - 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202AF10: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1202AF12: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x1202AF15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202AF4D; /* 0x1202AF17: je 0x1202af4d */
L_1202AF19:
    esi = ebx + 0x4; /* 0x1202AF19: lea esi, [ebx + 4] */
L_1202AF1C:
    eax = MEM32(esi + 0x4); /* 0x1202AF1C: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202AF1F: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + eax * 8)); /* 0x1202AF21: push dword ptr [ebx + eax*8] */
    eax = MEM32(esi); /* 0x1202AF24: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202AF26: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + eax * 8)); /* 0x1202AF28: push dword ptr [ebx + eax*8] */
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x1202AF2B: push dword ptr [esi - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202AF2E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202A2BA); /* 0x1202AF31: call 0x1202a2ba */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x1202AF36: fstp dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x1202AF39: push ebx */
    edx = edi; /* 0x1202AF3A: mov edx, edi */
    RECOMP_CALL(sub_12029E72); /* 0x1202AF3C: call 0x12029e72 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202AF41: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x1202AF42: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0xC)) */ /* 0x1202AF45: cmp edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202AF1C; /* 0x1202AF48: jb 0x1202af1c */
L_1202AF4A:
    esi = MEM32(ebp + 0xC); /* 0x1202AF4A: mov esi, dword ptr [ebp + 0xc] */
L_1202AF4D:
    eax = MEM32(ebp + 0x10); /* 0x1202AF4D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1202AF50: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + esi * 4 + (-0x4)) = 1; /* 0x1202AF53: mov dword ptr [eax + esi*4 - 4], 1 */
    /* test edi, edi */ /* 0x1202AF5B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B07C; /* 0x1202AF5D: je 0x1202b07c */
L_1202AF63:
    eax = edi; /* 0x1202AF63: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202AF65: add eax, eax */
    _flag_k = FK_ADD;
    esi = ebx + eax * 8 + 0x8; /* 0x1202AF67: lea esi, [ebx + eax*8 + 8] */
L_1202AF6B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1202AF6B: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, 0); /* 0x1202AF6C: push 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x10u; /* 0x1202AF6E: sub esi, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1202AF71: push ebx */
    eax = edi; /* 0x1202AF72: mov eax, edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1202AF74: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x18)) = esi; /* 0x1202AF77: mov dword ptr [ebp - 0x18], esi */
    RECOMP_CALL(sub_12029663); /* 0x1202AF7A: call 0x12029663 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1202AF7F: push edi */
    PUSH32(esp, ebx); /* 0x1202AF80: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202AF81: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_12029EAB); /* 0x1202AF83: call 0x12029eab */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + (-0x8)); /* 0x1202AF88: mov eax, dword ptr [esi - 8] */
    edx = MEM32(ebp + 0x10); /* 0x1202AF8B: mov edx, dword ptr [ebp + 0x10] */
    ecx = edi + 0x2; /* 0x1202AF8E: lea ecx, [edi + 2] */
    MEM32(edx + eax * 4) = ecx; /* 0x1202AF91: mov dword ptr [edx + eax*4], ecx */
    edx = MEM32(esi + (-0x4)); /* 0x1202AF94: mov edx, dword ptr [esi - 4] */
    eax = MEM32(esi); /* 0x1202AF97: mov eax, dword ptr [esi] */
    ecx = edx; /* 0x1202AF99: mov ecx, edx */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1202AF9B: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1202AF9B: shl ecx, 4 */
    MEM32(ecx + ebx + 0x8) = eax; /* 0x1202AF9E: mov dword ptr [ecx + ebx + 8], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1202AFA2: mov dword ptr [ebp - 4], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1202AFA5: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1202AFA5: shl eax, 4 */
    MEM32(ebp + (-0x14)) = edx; /* 0x1202AFA8: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1202AFAB: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1202AFAE: mov dword ptr [ebp + 0xc], eax */
    MEM32(eax + ebx + 0x4) = edx; /* 0x1202AFB1: mov dword ptr [eax + ebx + 4], edx */
    /* cmp edx, edi */ /* 0x1202AFB5: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202B014; /* 0x1202AFB7: jae 0x1202b014 */
L_1202AFB9:
    esi = MEM32(ecx + ebx + 0x8); /* 0x1202AFB9: mov esi, dword ptr [ecx + ebx + 8] */
    edi = MEM32(ecx + ebx + 0x4); /* 0x1202AFBD: mov edi, dword ptr [ecx + ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1202AFC1: add esi, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + esi * 8)); /* 0x1202AFC3: push dword ptr [ebx + esi*8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1202AFC6: add edi, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + edi * 8)); /* 0x1202AFC8: push dword ptr [ebx + edi*8] */
    PUSH32(esp, MEM32(ecx + ebx)); /* 0x1202AFCB: push dword ptr [ecx + ebx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202AFCE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202A2BA); /* 0x1202AFD1: call 0x1202a2ba */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1202AFD6: fstp dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1202AFD9: mov ecx, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1202AFDC: fld dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1202AFDF: mov edx, dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + ebx + 0xC) = _v; } /* 0x1202AFE2: fst dword ptr [ecx + ebx + 0xc] */
    eax = MEM32(ebx + esi * 8); /* 0x1202AFE6: mov eax, dword ptr [ebx + esi*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202AFE9: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + eax * 8)); /* 0x1202AFEB: fld dword ptr [edx + eax*8] */
    eax = MEM32(ebx + edi * 8); /* 0x1202AFEE: mov eax, dword ptr [ebx + edi*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202AFF1: add eax, eax */
    _flag_k = FK_ADD;
    _st[0] -= (double)*(float*)ADDR(edx + eax * 8); /* 0x1202AFF3: fsub dword ptr [edx + eax*8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1202AFF6: mov edx, dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1202AFF9: push ebx */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202AFFA: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + ebx + 0xC) = _v; } /* 0x1202AFFC: fstp dword ptr [ecx + ebx + 0xc] */
    RECOMP_CALL(sub_12029E72); /* 0x1202B000: call 0x12029e72 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x1202B005: mov edi, dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1202B008: push edi */
    PUSH32(esp, ebx); /* 0x1202B009: push ebx */
    edx = eax; /* 0x1202B00A: mov edx, eax */
    RECOMP_CALL(sub_12029EAB); /* 0x1202B00C: call 0x12029eab */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1202B011: mov eax, dword ptr [ebp + 0xc] */
L_1202B014:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x1202B014: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202B071; /* 0x1202B017: jae 0x1202b071 */
L_1202B019:
    esi = MEM32(eax + ebx + 0x8); /* 0x1202B019: mov esi, dword ptr [eax + ebx + 8] */
    edi = MEM32(eax + ebx + 0x4); /* 0x1202B01D: mov edi, dword ptr [eax + ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1202B021: add esi, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + esi * 8)); /* 0x1202B023: push dword ptr [ebx + esi*8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1202B026: add edi, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + edi * 8)); /* 0x1202B028: push dword ptr [ebx + edi*8] */
    PUSH32(esp, MEM32(eax + ebx)); /* 0x1202B02B: push dword ptr [eax + ebx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202B02E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202A2BA); /* 0x1202B031: call 0x1202a2ba */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1202B036: fstp dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + 0xC); /* 0x1202B039: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1202B03C: fld dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + 0x8); /* 0x1202B03F: mov edx, dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + ebx + 0xC) = _v; } /* 0x1202B042: fst dword ptr [ecx + ebx + 0xc] */
    eax = MEM32(ebx + esi * 8); /* 0x1202B046: mov eax, dword ptr [ebx + esi*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B049: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + eax * 8)); /* 0x1202B04B: fld dword ptr [edx + eax*8] */
    eax = MEM32(ebx + edi * 8); /* 0x1202B04E: mov eax, dword ptr [ebx + edi*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B051: add eax, eax */
    _flag_k = FK_ADD;
    _st[0] -= (double)*(float*)ADDR(edx + eax * 8); /* 0x1202B053: fsub dword ptr [edx + eax*8] */
    edx = MEM32(ebp + (-0x4)); /* 0x1202B056: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x1202B059: push ebx */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202B05A: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + ebx + 0xC) = _v; } /* 0x1202B05C: fstp dword ptr [ecx + ebx + 0xc] */
    RECOMP_CALL(sub_12029E72); /* 0x1202B060: call 0x12029e72 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x1202B065: mov edi, dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1202B068: push edi */
    PUSH32(esp, ebx); /* 0x1202B069: push ebx */
    edx = eax; /* 0x1202B06A: mov edx, eax */
    RECOMP_CALL(sub_12029EAB); /* 0x1202B06C: call 0x12029eab */
    RECOMP_FLAGS_IN();
L_1202B071:
    esi = MEM32(ebp + (-0x18)); /* 0x1202B071: mov esi, dword ptr [ebp - 0x18] */
    /* test edi, edi */ /* 0x1202B074: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202AF6B; /* 0x1202B076: jne 0x1202af6b */
L_1202B07C:
    PUSH32(esp, ebx); /* 0x1202B07C: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1202B07D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B082: pop ecx */
    edi = POP32_VAL(esp); /* 0x1202B083: pop edi */
    goto L_1202B097; /* 0x1202B084: jmp 0x1202b097 */
L_1202B086:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202B086: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1202B088: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B097; /* 0x1202B08A: je 0x1202b097 */
L_1202B08C:
    ecx = MEM32(ebp + 0x10); /* 0x1202B08C: mov ecx, dword ptr [ebp + 0x10] */
L_1202B08F:
    MEM32(ecx + eax * 4) = eax; /* 0x1202B08F: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202B092: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1202B093: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B08F; /* 0x1202B095: jb 0x1202b08f */
L_1202B097:
    esi = POP32_VAL(esp); /* 0x1202B097: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202B098: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202B099: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202B09A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202B0A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B0A2u);

L_1202B0A2:
    edi = edi; /* 0x1202B0A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202B0A4: push ebp */
    ebp = esp; /* 0x1202B0A5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1202B0A7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1202B0AA: push esi */
    PUSH32(esp, edi); /* 0x1202B0AB: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202B0AC: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 3 */ /* 0x1202B0AF: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B2AB; /* 0x1202B0B2: jb 0x1202b2ab */
L_1202B0B8:
    PUSH32(esp, 0x120014BCu); /* 0x1202B0B8: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B0BD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202B0BF: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202B0C1: pop edx */
    eax = edi; /* 0x1202B0C2: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202B0C4: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202B0C6: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202B0C9: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202B0CB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202B0CD: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202B0CE: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202B0D3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202B0D5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202B0D6: pop ecx */
    MEM32(ebp + (-0x8)) = esi; /* 0x1202B0D7: mov dword ptr [ebp - 8], esi */
    /* test esi, esi */ /* 0x1202B0DA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B2AB; /* 0x1202B0DC: je 0x1202b2ab */
L_1202B0E2:
    PUSH32(esp, ebx); /* 0x1202B0E2: push ebx */
    /* test edi, edi */ /* 0x1202B0E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B11B; /* 0x1202B0E5: je 0x1202b11b */
L_1202B0E7:
    MEM32(ebp + (-0xC)) = 1; /* 0x1202B0E7: mov dword ptr [ebp - 0xc], 1 */
    ebx = esi + 0x8; /* 0x1202B0EE: lea ebx, [esi + 8] */
    esi = MEM32(ebp + (-0xC)); /* 0x1202B0F1: mov esi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1202B0F4: mov dword ptr [ebp - 4], edi */
L_1202B0F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202B0F7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1202B0F9: mov eax, esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1202B0FB: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edi + esi + (-0x2); /* 0x1202B0FD: lea eax, [edi + esi - 2] */
    ecx = edx; /* 0x1202B101: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202B103: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1202B105: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebx + (-0x8)) = ecx; /* 0x1202B107: mov dword ptr [ebx - 8], ecx */
    MEM32(ebx) = ecx; /* 0x1202B10A: mov dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202B10C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x1202B10D: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1202B110: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    MEM32(ebx + (-0x14)) = edx; /* 0x1202B113: mov dword ptr [ebx - 0x14], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202B0F7; /* 0x1202B116: jne 0x1202b0f7 */
L_1202B118:
    esi = MEM32(ebp + (-0x8)); /* 0x1202B118: mov esi, dword ptr [ebp - 8] */
L_1202B11B:
    eax = edi + (-0x2); /* 0x1202B11B: lea eax, [edi - 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202B11E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1202B120: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x1202B123: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B15B; /* 0x1202B125: je 0x1202b15b */
L_1202B127:
    edi = esi + 0x4; /* 0x1202B127: lea edi, [esi + 4] */
L_1202B12A:
    eax = MEM32(edi + 0x4); /* 0x1202B12A: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B12D: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + eax * 8)); /* 0x1202B12F: push dword ptr [esi + eax*8] */
    eax = MEM32(edi); /* 0x1202B132: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B134: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + eax * 8)); /* 0x1202B136: push dword ptr [esi + eax*8] */
    PUSH32(esp, MEM32(edi + (-0x4))); /* 0x1202B139: push dword ptr [edi - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202B13C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202A38E); /* 0x1202B13F: call 0x1202a38e */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x1202B144: fstp dword ptr [edi + 8] */
    PUSH32(esp, esi); /* 0x1202B147: push esi */
    edx = ebx; /* 0x1202B148: mov edx, ebx */
    RECOMP_CALL(sub_12029E72); /* 0x1202B14A: call 0x12029e72 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1202B14F: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1202B150: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + (-0xC)) */ /* 0x1202B153: cmp ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B12A; /* 0x1202B156: jb 0x1202b12a */
L_1202B158:
    edi = MEM32(ebp + 0xC); /* 0x1202B158: mov edi, dword ptr [ebp + 0xc] */
L_1202B15B:
    eax = MEM32(ebp + 0x10); /* 0x1202B15B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1202B15E: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + edi * 4 + (-0x4)) = 1; /* 0x1202B161: mov dword ptr [eax + edi*4 - 4], 1 */
    /* test ebx, ebx */ /* 0x1202B169: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B2A1; /* 0x1202B16B: je 0x1202b2a1 */
L_1202B171:
    eax = ebx; /* 0x1202B171: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B173: add eax, eax */
    _flag_k = FK_ADD;
    edi = esi + eax * 8 + 0x8; /* 0x1202B175: lea edi, [esi + eax*8 + 8] */
L_1202B179:
    PUSH32(esp, 0); /* 0x1202B179: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202B17B: dec ebx */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x1202B17C: push esi */
    eax = ebx; /* 0x1202B17D: mov eax, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x10u; /* 0x1202B17F: sub edi, 0x10 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_12029663); /* 0x1202B182: call 0x12029663 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1202B187: push ebx */
    PUSH32(esp, esi); /* 0x1202B188: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202B189: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_12029EAB); /* 0x1202B18B: call 0x12029eab */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + (-0x8)); /* 0x1202B190: mov eax, dword ptr [edi - 8] */
    edx = MEM32(ebp + 0x10); /* 0x1202B193: mov edx, dword ptr [ebp + 0x10] */
    ecx = ebx + 0x2; /* 0x1202B196: lea ecx, [ebx + 2] */
    MEM32(edx + eax * 4) = ecx; /* 0x1202B199: mov dword ptr [edx + eax*4], ecx */
    ecx = MEM32(edi + (-0x4)); /* 0x1202B19C: mov ecx, dword ptr [edi - 4] */
    eax = MEM32(edi); /* 0x1202B19F: mov eax, dword ptr [edi] */
    edx = ecx; /* 0x1202B1A1: mov edx, ecx */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1202B1A3: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1202B1A3: shl edx, 4 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1202B1A6: mov dword ptr [ebp - 4], ecx */
    MEM32(edx + esi + 0x8) = eax; /* 0x1202B1A9: mov dword ptr [edx + esi + 8], eax */
    MEM32(ebp + 0xC) = edx; /* 0x1202B1AD: mov dword ptr [ebp + 0xc], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x1202B1B0: mov edx, dword ptr [ebp - 4] */
    ecx = eax; /* 0x1202B1B3: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1202B1B5: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1202B1B5: shl ecx, 4 */
    MEM32(ecx + esi + 0x4) = edx; /* 0x1202B1B8: mov dword ptr [ecx + esi + 4], edx */
    /* cmp edx, ebx */ /* 0x1202B1BC: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x1202B1BE: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1202B1C1: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1202B1C4: mov dword ptr [ebp - 8], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202B232; /* 0x1202B1C7: jae 0x1202b232 */
L_1202B1C9:
    eax = MEM32(edx + esi + 0x8); /* 0x1202B1C9: mov eax, dword ptr [edx + esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B1CD: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + eax * 8)); /* 0x1202B1CF: push dword ptr [esi + eax*8] */
    eax = MEM32(edx + esi + 0x4); /* 0x1202B1D2: mov eax, dword ptr [edx + esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B1D6: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + eax * 8)); /* 0x1202B1D8: push dword ptr [esi + eax*8] */
    PUSH32(esp, MEM32(edx + esi)); /* 0x1202B1DB: push dword ptr [edx + esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202B1DE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202A38E); /* 0x1202B1E1: call 0x1202a38e */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1202B1E6: fstp dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x1202B1E9: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1202B1EC: fld dword ptr [ebp - 0x10] */
    eax = MEM32(ecx + esi + 0x8); /* 0x1202B1EF: mov eax, dword ptr [ecx + esi + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + esi + 0xC) = _v; } /* 0x1202B1F3: fst dword ptr [ecx + esi + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1202B1F7: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B1FA: add eax, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + eax * 8); /* 0x1202B1FC: mov eax, dword ptr [esi + eax*8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202B1FF: imul eax, eax, 0x14 */
    PUSH32(esp, esi); /* 0x1202B202: push esi */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x1202B203: fld dword ptr [eax + edx] */
    eax = MEM32(ecx + esi + 0x4); /* 0x1202B206: mov eax, dword ptr [ecx + esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B20A: add eax, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + eax * 8); /* 0x1202B20C: mov eax, dword ptr [esi + eax*8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202B20F: imul eax, eax, 0x14 */
    _st[0] -= (double)*(float*)ADDR(eax + edx); /* 0x1202B212: fsub dword ptr [eax + edx] */
    edx = MEM32(ebp + (-0x4)); /* 0x1202B215: mov edx, dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202B218: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + esi + 0xC) = _v; } /* 0x1202B21A: fstp dword ptr [ecx + esi + 0xc] */
    RECOMP_CALL(sub_12029E72); /* 0x1202B21E: call 0x12029e72 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1202B223: push ebx */
    PUSH32(esp, esi); /* 0x1202B224: push esi */
    edx = eax; /* 0x1202B225: mov edx, eax */
    RECOMP_CALL(sub_12029EAB); /* 0x1202B227: call 0x12029eab */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1202B22C: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x1202B22F: mov eax, dword ptr [ebp - 0xc] */
L_1202B232:
    /* cmp eax, ebx */ /* 0x1202B232: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202B299; /* 0x1202B234: jae 0x1202b299 */
L_1202B236:
    eax = MEM32(ecx + esi + 0x8); /* 0x1202B236: mov eax, dword ptr [ecx + esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B23A: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + eax * 8)); /* 0x1202B23C: push dword ptr [esi + eax*8] */
    eax = MEM32(ecx + esi + 0x4); /* 0x1202B23F: mov eax, dword ptr [ecx + esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B243: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + eax * 8)); /* 0x1202B245: push dword ptr [esi + eax*8] */
    PUSH32(esp, MEM32(ecx + esi)); /* 0x1202B248: push dword ptr [ecx + esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202B24B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202A38E); /* 0x1202B24E: call 0x1202a38e */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1202B253: fstp dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1202B256: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1202B259: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + esi + 0x8); /* 0x1202B25C: mov eax, dword ptr [ecx + esi + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + esi + 0xC) = _v; } /* 0x1202B260: fst dword ptr [ecx + esi + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1202B264: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B267: add eax, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + eax * 8); /* 0x1202B269: mov eax, dword ptr [esi + eax*8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202B26C: imul eax, eax, 0x14 */
    PUSH32(esp, esi); /* 0x1202B26F: push esi */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x1202B270: fld dword ptr [eax + edx] */
    eax = MEM32(ecx + esi + 0x4); /* 0x1202B273: mov eax, dword ptr [ecx + esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B277: add eax, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + eax * 8); /* 0x1202B279: mov eax, dword ptr [esi + eax*8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202B27C: imul eax, eax, 0x14 */
    _st[0] -= (double)*(float*)ADDR(eax + edx); /* 0x1202B27F: fsub dword ptr [eax + edx] */
    edx = MEM32(ebp + (-0xC)); /* 0x1202B282: mov edx, dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202B285: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + esi + 0xC) = _v; } /* 0x1202B287: fstp dword ptr [ecx + esi + 0xc] */
    RECOMP_CALL(sub_12029E72); /* 0x1202B28B: call 0x12029e72 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1202B290: push ebx */
    PUSH32(esp, esi); /* 0x1202B291: push esi */
    edx = eax; /* 0x1202B292: mov edx, eax */
    RECOMP_CALL(sub_12029EAB); /* 0x1202B294: call 0x12029eab */
    RECOMP_FLAGS_IN();
L_1202B299:
    /* test ebx, ebx */ /* 0x1202B299: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202B179; /* 0x1202B29B: jne 0x1202b179 */
L_1202B2A1:
    PUSH32(esp, esi); /* 0x1202B2A1: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202B2A2: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B2A7: pop ecx */
    ebx = POP32_VAL(esp); /* 0x1202B2A8: pop ebx */
    goto L_1202B2BC; /* 0x1202B2A9: jmp 0x1202b2bc */
L_1202B2AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202B2AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1202B2AD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B2BC; /* 0x1202B2AF: je 0x1202b2bc */
L_1202B2B1:
    ecx = MEM32(ebp + 0x10); /* 0x1202B2B1: mov ecx, dword ptr [ebp + 0x10] */
L_1202B2B4:
    MEM32(ecx + eax * 4) = eax; /* 0x1202B2B4: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202B2B7: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1202B2B8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B2B4; /* 0x1202B2BA: jb 0x1202b2b4 */
L_1202B2BC:
    edi = POP32_VAL(esp); /* 0x1202B2BC: pop edi */
    esi = POP32_VAL(esp); /* 0x1202B2BD: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202B2BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202B2BF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202B2C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B2C7u);

L_1202B2C7:
    edi = edi; /* 0x1202B2C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202B2C9: push ebp */
    ebp = esp; /* 0x1202B2CA: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x1202B2CC: fld dword ptr [0x12001748] */
    PUSH32(esp, ebx); /* 0x1202B2D2: push ebx */
    PUSH32(esp, esi); /* 0x1202B2D3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202B2D4: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1202B2D7: mov eax, dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1202B2D9: fstp dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x4); /* 0x1202B2DC: mov ebx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1202B2DF: push edi */
    edi = eax + 0x1; /* 0x1202B2E0: lea edi, [eax + 1] */
    MEM32(esi + 0x8) = edi; /* 0x1202B2E3: mov dword ptr [esi + 8], edi */
    goto L_1202B314; /* 0x1202B2E6: jmp 0x1202b314 */
L_1202B2E8:
    PUSH32(esp, ebx); /* 0x1202B2E8: push ebx */
    PUSH32(esp, eax); /* 0x1202B2E9: push eax */
    PUSH32(esp, edi); /* 0x1202B2EA: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202B2EB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202A2BA); /* 0x1202B2EE: call 0x1202a2ba */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1202B2F3: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x1202B2F6: fld dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1202B2F9: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202B2FC: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202B2FE: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202B300: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x1202B302: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202B30F; /* 0x1202B305: jne 0x1202b30f */
L_1202B307:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1202B307: fstp dword ptr [esi + 0xc] */
    MEM32(esi + 0x8) = edi; /* 0x1202B30A: mov dword ptr [esi + 8], edi */
    goto L_1202B311; /* 0x1202B30D: jmp 0x1202b311 */
L_1202B30F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202B30F: fstp st(0) */
L_1202B311:
    eax = MEM32(esi); /* 0x1202B311: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202B313: inc edi */
    _flag_k = FK_INC;
L_1202B314:
    /* cmp edi, ebx */ /* 0x1202B314: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B2E8; /* 0x1202B316: jb 0x1202b2e8 */
L_1202B318:
    ecx = MEM32(ebp + 0x8); /* 0x1202B318: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x1202B31B: add ebx, ebx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + ebx * 8)); /* 0x1202B31D: fld dword ptr [ecx + ebx*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202B320: add eax, eax */
    _flag_k = FK_ADD;
    _st[0] -= (double)*(float*)ADDR(ecx + eax * 8); /* 0x1202B322: fsub dword ptr [ecx + eax*8] */
    edi = POP32_VAL(esp); /* 0x1202B325: pop edi */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x1202B326: fmul dword ptr [esi + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1202B329: fstp dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x1202B32C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202B32D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1202B32E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202B32F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202B337(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B337u);

L_1202B337:
    edi = edi; /* 0x1202B337: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202B339: push ebp */
    ebp = esp; /* 0x1202B33A: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x1202B33C: fld dword ptr [0x12001748] */
    PUSH32(esp, ebx); /* 0x1202B342: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202B343: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202B346: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202B347: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1202B34A: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1202B34B: fstp dword ptr [esi + 0xc] */
    edi = MEM32(esi); /* 0x1202B34E: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202B350: inc edi */
    _flag_k = FK_INC;
    MEM32(esi + 0x8) = edi; /* 0x1202B351: mov dword ptr [esi + 8], edi */
    goto L_1202B381; /* 0x1202B354: jmp 0x1202b381 */
L_1202B356:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1202B356: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1202B359: push dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1202B35B: push edi */
    PUSH32(esp, ebx); /* 0x1202B35C: push ebx */
    RECOMP_CALL(sub_1202A38E); /* 0x1202B35D: call 0x1202a38e */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1202B362: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x1202B365: fld dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1202B368: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202B36B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202B36D: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202B36F: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x1202B371: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202B37E; /* 0x1202B374: jne 0x1202b37e */
L_1202B376:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1202B376: fstp dword ptr [esi + 0xc] */
    MEM32(esi + 0x8) = edi; /* 0x1202B379: mov dword ptr [esi + 8], edi */
    goto L_1202B380; /* 0x1202B37C: jmp 0x1202b380 */
L_1202B37E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202B37E: fstp st(0) */
L_1202B380:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202B380: inc edi */
    _flag_k = FK_INC;
L_1202B381:
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x1202B381: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B356; /* 0x1202B384: jb 0x1202b356 */
L_1202B386:
    eax = MEM32(esi + 0x4); /* 0x1202B386: mov eax, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202B389: imul eax, eax, 0x14 */
    edi = POP32_VAL(esp); /* 0x1202B38C: pop edi */
    fp_push(*(float*)&MEM32(eax + ebx)); /* 0x1202B38D: fld dword ptr [eax + ebx] */
    eax = MEM32(esi); /* 0x1202B390: mov eax, dword ptr [esi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202B392: imul eax, eax, 0x14 */
    _st[0] -= (double)*(float*)ADDR(eax + ebx); /* 0x1202B395: fsub dword ptr [eax + ebx] */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x1202B398: fmul dword ptr [esi + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1202B39B: fstp dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x1202B39E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202B39F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1202B3A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202B3A1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202B3A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B3A9u);

L_1202B3A9:
    edi = edi; /* 0x1202B3A9: mov edi, edi */
    PUSH32(esp, esi); /* 0x1202B3AB: push esi */
    esi = ecx; /* 0x1202B3AC: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1202B3AE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202B3AF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x12001F20u; /* 0x1202B3B1: mov dword ptr [esi], 0x12001f20 */
    MEM32(esi + 0x8) = 0x12001F10u; /* 0x1202B3B7: mov dword ptr [esi + 8], 0x12001f10 */
    /* cmp MEM32(esi + 0x14), edi */ /* 0x1202B3BE: cmp dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202B3CF; /* 0x1202B3C1: je 0x1202b3cf */
L_1202B3C3:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1202B3C3: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_121BF388); /* 0x1202B3C6: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B3CB: pop ecx */
    MEM32(esi + 0x14) = edi; /* 0x1202B3CC: mov dword ptr [esi + 0x14], edi */
L_1202B3CF:
    ecx = MEM32(esi + 0x3C); /* 0x1202B3CF: mov ecx, dword ptr [esi + 0x3c] */
    /* test ecx, ecx */ /* 0x1202B3D2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B3E0; /* 0x1202B3D4: je 0x1202b3e0 */
L_1202B3D6:
    PUSH32(esp, 3); /* 0x1202B3D6: push 3 */
    RECOMP_CALL(sub_12028ED7); /* 0x1202B3D8: call 0x12028ed7 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3C) = edi; /* 0x1202B3DD: mov dword ptr [esi + 0x3c], edi */
L_1202B3E0:
    /* cmp MEM32(esi + 0x40), edi */ /* 0x1202B3E0: cmp dword ptr [esi + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202B3F1; /* 0x1202B3E3: je 0x1202b3f1 */
L_1202B3E5:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x1202B3E5: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_121BF388); /* 0x1202B3E8: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B3ED: pop ecx */
    MEM32(esi + 0x40) = edi; /* 0x1202B3EE: mov dword ptr [esi + 0x40], edi */
L_1202B3F1:
    /* cmp MEM32(esi + 0x30), edi */ /* 0x1202B3F1: cmp dword ptr [esi + 0x30], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202B402; /* 0x1202B3F4: je 0x1202b402 */
L_1202B3F6:
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x1202B3F6: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_121BF388); /* 0x1202B3F9: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B3FE: pop ecx */
    MEM32(esi + 0x30) = edi; /* 0x1202B3FF: mov dword ptr [esi + 0x30], edi */
L_1202B402:
    edi = POP32_VAL(esp); /* 0x1202B402: pop edi */
    esi = POP32_VAL(esp); /* 0x1202B403: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1202B404: ret  */
    RECOMP_REGS_OUT();
}

void sub_1202B419(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B419u);

L_1202B419:
    edi = edi; /* 0x1202B419: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202B41B: push ebp */
    ebp = esp; /* 0x1202B41C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x1202B41E: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202B421: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202B426: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202B428: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1202B42B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1202B42E: push ebx */
    PUSH32(esp, esi); /* 0x1202B42F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202B430: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1202B433: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1202B434: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1202B437: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x3C)) = edi; /* 0x1202B43A: mov dword ptr [ebp - 0x3c], edi */
    /* cmp esi, 3 */ /* 0x1202B43D: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B536; /* 0x1202B440: jb 0x1202b536 */
L_1202B446:
    PUSH32(esp, 0x120014BCu); /* 0x1202B446: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B44B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202B44D: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202B44F: pop edx */
    eax = esi; /* 0x1202B450: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202B452: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202B454: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202B457: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202B459: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202B45B: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202B45C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202B461: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202B463: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202B464: pop ecx */
    /* test ebx, ebx */ /* 0x1202B465: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B536; /* 0x1202B467: je 0x1202b536 */
L_1202B46D:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1202B46D: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202B470: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1202B471: push dword ptr [ebp - 0x38] */
    ecx = esi + (-0x1); /* 0x1202B474: lea ecx, [esi - 1] */
    MEM32(ebx + 0x4) = ecx; /* 0x1202B477: mov dword ptr [ebx + 4], ecx */
    RECOMP_CALL(sub_1202B2C7); /* 0x1202B47A: call 0x1202b2c7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B47F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202B481: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1202B482: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1202B485: push 2 */
    MEM32(edi + esi * 4 + (-0x4)) = ecx; /* 0x1202B487: mov dword ptr [edi + esi*4 - 4], ecx */
    edx = POP32_VAL(esp); /* 0x1202B48B: pop edx */
L_1202B48C:
    eax = MEM32(ebx + 0x8); /* 0x1202B48C: mov eax, dword ptr [ebx + 8] */
    MEM32(edi + eax * 4) = edx; /* 0x1202B48F: mov dword ptr [edi + eax*4], edx */
    eax = MEM32(ebx); /* 0x1202B492: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1202B494: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebx + 0x8); /* 0x1202B497: mov eax, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1202B49A: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x1202B49D: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x4); /* 0x1202B4A0: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1202B4A3: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1202B4A4: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = eax; /* 0x1202B4A5: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1202B4A8: mov dword ptr [ebp - 0x28], ecx */
    eax = ecx; /* 0x1202B4AB: mov eax, ecx */
    MEM32(ebp + (-0x40)) = edx; /* 0x1202B4AD: mov dword ptr [ebp - 0x40], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B4B0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x1202B4B2: mov edx, ebx */
    RECOMP_CALL(sub_120295FB); /* 0x1202B4B4: call 0x120295fb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1202B4B9: push dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202B4BC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202B4BE: push ebx */
    RECOMP_CALL(sub_12029DD8); /* 0x1202B4BF: call 0x12029dd8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x1202B4C4: mov ecx, dword ptr [ebp - 0x28] */
    edi = ecx; /* 0x1202B4C7: mov edi, ecx */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1202B4C9: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1202B4C9: shl edi, 4 */
    PUSH32(esp, 2); /* 0x1202B4CC: push 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x1202B4CE: add edi, ebx */
    _flag_k = FK_ADD;
    esi = ebp + (-0x24); /* 0x1202B4D0: lea esi, [ebp - 0x24] */
    edx = POP32_VAL(esp); /* 0x1202B4D3: pop edx */
    MEM32(ebp + (-0x34)) = edi; /* 0x1202B4D4: mov dword ptr [ebp - 0x34], edi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x1202B4D7: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x30)) = edx; /* 0x1202B4DA: mov dword ptr [ebp - 0x30], edx */
L_1202B4DD:
    eax = MEM32(esi + 0x4); /* 0x1202B4DD: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x1202B4E0: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    /* cmp eax, 2 */ /* 0x1202B4E2: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B513; /* 0x1202B4E5: jb 0x1202b513 */
L_1202B4E7:
    PUSH32(esp, esi); /* 0x1202B4E7: push esi */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1202B4E8: push dword ptr [ebp - 0x38] */
    RECOMP_CALL(sub_1202B2C7); /* 0x1202B4EB: call 0x1202b2c7 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x28)); /* 0x1202B4F0: mov edx, dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202B4F3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202B4F4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202B4F5: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1202B4F6: push ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202B4F7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_12029E36); /* 0x1202B4F8: call 0x12029e36 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x1202B4FD: mov ecx, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + (-0x34)); /* 0x1202B500: mov edi, dword ptr [ebp - 0x34] */
    esi = MEM32(ebp + (-0x2C)); /* 0x1202B503: mov esi, dword ptr [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x30)); /* 0x1202B506: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202B509: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1202B50A: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1202B50D: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + (-0x34)) = edi; /* 0x1202B510: mov dword ptr [ebp - 0x34], edi */
L_1202B513:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x1202B513: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1202B516: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = esi; /* 0x1202B517: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x30)) = edx; /* 0x1202B51A: mov dword ptr [ebp - 0x30], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202B4DD; /* 0x1202B51D: jne 0x1202b4dd */
L_1202B51F:
    edi = MEM32(ebp + (-0x3C)); /* 0x1202B51F: mov edi, dword ptr [ebp - 0x3c] */
    edx = MEM32(ebp + (-0x40)); /* 0x1202B522: mov edx, dword ptr [ebp - 0x40] */
    /* test ecx, ecx */ /* 0x1202B525: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202B48C; /* 0x1202B527: jne 0x1202b48c */
L_1202B52D:
    PUSH32(esp, ebx); /* 0x1202B52D: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1202B52E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B533: pop ecx */
    goto L_1202B544; /* 0x1202B534: jmp 0x1202b544 */
L_1202B536:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202B536: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1202B538: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B544; /* 0x1202B53A: je 0x1202b544 */
L_1202B53C:
    MEM32(edi + eax * 4) = eax; /* 0x1202B53C: mov dword ptr [edi + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202B53F: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1202B540: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B53C; /* 0x1202B542: jb 0x1202b53c */
L_1202B544:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202B544: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202B547: pop edi */
    esi = POP32_VAL(esp); /* 0x1202B548: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202B549: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202B54B: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202B54C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202B551: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202B552: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202B55A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B55Au);

L_1202B55A:
    edi = edi; /* 0x1202B55A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202B55C: push ebp */
    ebp = esp; /* 0x1202B55D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x1202B55F: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202B562: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202B567: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202B569: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1202B56C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1202B56F: push ebx */
    PUSH32(esp, esi); /* 0x1202B570: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202B571: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1202B574: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1202B575: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1202B578: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x3C)) = edi; /* 0x1202B57B: mov dword ptr [ebp - 0x3c], edi */
    /* cmp esi, 3 */ /* 0x1202B57E: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B677; /* 0x1202B581: jb 0x1202b677 */
L_1202B587:
    PUSH32(esp, 0x120014BCu); /* 0x1202B587: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B58C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202B58E: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202B590: pop edx */
    eax = esi; /* 0x1202B591: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202B593: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202B595: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202B598: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202B59A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202B59C: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202B59D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202B5A2: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202B5A4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202B5A5: pop ecx */
    /* test ebx, ebx */ /* 0x1202B5A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B677; /* 0x1202B5A8: je 0x1202b677 */
L_1202B5AE:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1202B5AE: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202B5B1: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1202B5B2: push dword ptr [ebp - 0x38] */
    ecx = esi + (-0x1); /* 0x1202B5B5: lea ecx, [esi - 1] */
    MEM32(ebx + 0x4) = ecx; /* 0x1202B5B8: mov dword ptr [ebx + 4], ecx */
    RECOMP_CALL(sub_1202B337); /* 0x1202B5BB: call 0x1202b337 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B5C0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202B5C2: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1202B5C3: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1202B5C6: push 2 */
    MEM32(edi + esi * 4 + (-0x4)) = ecx; /* 0x1202B5C8: mov dword ptr [edi + esi*4 - 4], ecx */
    edx = POP32_VAL(esp); /* 0x1202B5CC: pop edx */
L_1202B5CD:
    eax = MEM32(ebx + 0x8); /* 0x1202B5CD: mov eax, dword ptr [ebx + 8] */
    MEM32(edi + eax * 4) = edx; /* 0x1202B5D0: mov dword ptr [edi + eax*4], edx */
    eax = MEM32(ebx); /* 0x1202B5D3: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1202B5D5: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebx + 0x8); /* 0x1202B5D8: mov eax, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1202B5DB: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x1202B5DE: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x4); /* 0x1202B5E1: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1202B5E4: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1202B5E5: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = eax; /* 0x1202B5E6: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1202B5E9: mov dword ptr [ebp - 0x28], ecx */
    eax = ecx; /* 0x1202B5EC: mov eax, ecx */
    MEM32(ebp + (-0x40)) = edx; /* 0x1202B5EE: mov dword ptr [ebp - 0x40], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B5F1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x1202B5F3: mov edx, ebx */
    RECOMP_CALL(sub_120295FB); /* 0x1202B5F5: call 0x120295fb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1202B5FA: push dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202B5FD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202B5FF: push ebx */
    RECOMP_CALL(sub_12029DD8); /* 0x1202B600: call 0x12029dd8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x1202B605: mov ecx, dword ptr [ebp - 0x28] */
    edi = ecx; /* 0x1202B608: mov edi, ecx */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1202B60A: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1202B60A: shl edi, 4 */
    PUSH32(esp, 2); /* 0x1202B60D: push 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x1202B60F: add edi, ebx */
    _flag_k = FK_ADD;
    esi = ebp + (-0x24); /* 0x1202B611: lea esi, [ebp - 0x24] */
    edx = POP32_VAL(esp); /* 0x1202B614: pop edx */
    MEM32(ebp + (-0x34)) = edi; /* 0x1202B615: mov dword ptr [ebp - 0x34], edi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x1202B618: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x30)) = edx; /* 0x1202B61B: mov dword ptr [ebp - 0x30], edx */
L_1202B61E:
    eax = MEM32(esi + 0x4); /* 0x1202B61E: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x1202B621: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    /* cmp eax, 2 */ /* 0x1202B623: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B654; /* 0x1202B626: jb 0x1202b654 */
L_1202B628:
    PUSH32(esp, esi); /* 0x1202B628: push esi */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1202B629: push dword ptr [ebp - 0x38] */
    RECOMP_CALL(sub_1202B337); /* 0x1202B62C: call 0x1202b337 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x28)); /* 0x1202B631: mov edx, dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202B634: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202B635: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202B636: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1202B637: push ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202B638: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_12029E36); /* 0x1202B639: call 0x12029e36 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x1202B63E: mov ecx, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + (-0x34)); /* 0x1202B641: mov edi, dword ptr [ebp - 0x34] */
    esi = MEM32(ebp + (-0x2C)); /* 0x1202B644: mov esi, dword ptr [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x30)); /* 0x1202B647: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202B64A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1202B64B: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1202B64E: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + (-0x34)) = edi; /* 0x1202B651: mov dword ptr [ebp - 0x34], edi */
L_1202B654:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x1202B654: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1202B657: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = esi; /* 0x1202B658: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x30)) = edx; /* 0x1202B65B: mov dword ptr [ebp - 0x30], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202B61E; /* 0x1202B65E: jne 0x1202b61e */
L_1202B660:
    edi = MEM32(ebp + (-0x3C)); /* 0x1202B660: mov edi, dword ptr [ebp - 0x3c] */
    edx = MEM32(ebp + (-0x40)); /* 0x1202B663: mov edx, dword ptr [ebp - 0x40] */
    /* test ecx, ecx */ /* 0x1202B666: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202B5CD; /* 0x1202B668: jne 0x1202b5cd */
L_1202B66E:
    PUSH32(esp, ebx); /* 0x1202B66E: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1202B66F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B674: pop ecx */
    goto L_1202B685; /* 0x1202B675: jmp 0x1202b685 */
L_1202B677:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202B677: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1202B679: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B685; /* 0x1202B67B: je 0x1202b685 */
L_1202B67D:
    MEM32(edi + eax * 4) = eax; /* 0x1202B67D: mov dword ptr [edi + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202B680: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1202B681: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B67D; /* 0x1202B683: jb 0x1202b67d */
L_1202B685:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202B685: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202B688: pop edi */
    esi = POP32_VAL(esp); /* 0x1202B689: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202B68A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202B68C: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202B68D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202B692: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202B693: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202B69B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B69Bu);

L_1202B69B:
    fp_push(1.0); /* 0x1202B69B: fld1  */
    MEM32(ecx + 0x8) = 0x12001EC0u; /* 0x1202B69D: mov dword ptr [ecx + 8], 0x12001ec0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202B6A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(ecx + 0x20) = _st[0]; /* 0x1202B6A6: fst qword ptr [ecx + 0x20] */
    MEM32(ecx + 0x14) = eax; /* 0x1202B6A9: mov dword ptr [ecx + 0x14], eax */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x18) = _v; } /* 0x1202B6AC: fstp qword ptr [ecx + 0x18] */
    MEM32(ecx + 0x50) = eax; /* 0x1202B6AF: mov dword ptr [ecx + 0x50], eax */
    MEM32(ecx + 0x38) = eax; /* 0x1202B6B2: mov dword ptr [ecx + 0x38], eax */
    MEM32(ecx + 0x3C) = eax; /* 0x1202B6B5: mov dword ptr [ecx + 0x3c], eax */
    MEM32(ecx + 0x40) = eax; /* 0x1202B6B8: mov dword ptr [ecx + 0x40], eax */
    MEM32(ecx + 0x2C) = eax; /* 0x1202B6BB: mov dword ptr [ecx + 0x2c], eax */
    MEM32(ecx + 0x30) = eax; /* 0x1202B6BE: mov dword ptr [ecx + 0x30], eax */
    MEM32(ecx + 0x34) = eax; /* 0x1202B6C1: mov dword ptr [ecx + 0x34], eax */
    MEM32(ecx + 0x28) = eax; /* 0x1202B6C4: mov dword ptr [ecx + 0x28], eax */
    MEM32(ecx + 0x54) = eax; /* 0x1202B6C7: mov dword ptr [ecx + 0x54], eax */
    MEM32(ecx + 0x58) = eax; /* 0x1202B6CA: mov dword ptr [ecx + 0x58], eax */
    MEM32(ecx) = 0x12001F20u; /* 0x1202B6CD: mov dword ptr [ecx], 0x12001f20 */
    MEM32(ecx + 0x8) = 0x12001F10u; /* 0x1202B6D3: mov dword ptr [ecx + 8], 0x12001f10 */
    MEM32(ecx + 0x10) = 1; /* 0x1202B6DA: mov dword ptr [ecx + 0x10], 1 */
    eax = ecx; /* 0x1202B6E1: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1202B6E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1202B6E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B6E9u);

L_1202B6E9:
    edi = edi; /* 0x1202B6E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202B6EB: push ebp */
    ebp = esp; /* 0x1202B6EC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202B6EE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1202B6EF: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x1202B6F2: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1202B6FC; /* 0x1202B6F5: je 0x1202b6fc */
L_1202B6F7:
    eax = MEM32(esi + 0x10); /* 0x1202B6F7: mov eax, dword ptr [esi + 0x10] */
    goto L_1202B70C; /* 0x1202B6FA: jmp 0x1202b70c */
L_1202B6FC:
    ecx = esi; /* 0x1202B6FC: mov ecx, esi */
    RECOMP_CALL(sub_1202B3A9); /* 0x1202B6FE: call 0x1202b3a9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202B703: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202B704: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B709: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202B70A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202B70C:
    esi = POP32_VAL(esp); /* 0x1202B70C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202B70D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1202B70E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1202B716(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202B716u);

L_1202B716:
    edi = edi; /* 0x1202B716: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202B718: push ebp */
    ebp = esp; /* 0x1202B719: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x7Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x7Cu; /* 0x1202B71B: sub esp, 0x7c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B71E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1202B720: push esi */
    esi = ecx; /* 0x1202B721: mov esi, ecx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1202B723: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1202B726: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1202B729: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1202B72C: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1202B72F: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1202B732: mov dword ptr [ebp - 0x2c], ecx */
    MEM32(ebp + (-0x4C)) = 0x1202B419u; /* 0x1202B735: mov dword ptr [ebp - 0x4c], 0x1202b419 */
    MEM32(ebp + (-0x44)) = 0x1202B55Au; /* 0x1202B73C: mov dword ptr [ebp - 0x44], 0x1202b55a */
    MEM32(ebp + (-0x48)) = 0x1202AE94u; /* 0x1202B743: mov dword ptr [ebp - 0x48], 0x1202ae94 */
    MEM32(ebp + (-0x40)) = 0x1202B0A2u; /* 0x1202B74A: mov dword ptr [ebp - 0x40], 0x1202b0a2 */
    edx = 0x8876086Cu; /* 0x1202B751: mov edx, 0x8876086c */
    /* cmp MEM32(ebp + 0x18), ecx */ /* 0x1202B756: cmp dword ptr [ebp + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202B75D; /* 0x1202B759: jne 0x1202b75d */
L_1202B75B:
    esi = edx; /* 0x1202B75B: mov esi, edx */
L_1202B75D:
    fp_push(0.0); /* 0x1202B75D: fldz  */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1202B75F: fld dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202B762: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202B764: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202B766: fstp st(1) */
    fp_push(1.0); /* 0x1202B768: fld1  */
    /* test HI8(eax), 5 */ /* 0x1202B76A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202B778; /* 0x1202B76D: jnp 0x1202b778 */
L_1202B76F:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202B76F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202B771: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202B773: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202B77A; /* 0x1202B776: jp 0x1202b77a */
L_1202B778:
    esi = edx; /* 0x1202B778: mov esi, edx */
L_1202B77A:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1202B77A: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202B781; /* 0x1202B77D: je 0x1202b781 */
L_1202B77F:
    esi = edx; /* 0x1202B77F: mov esi, edx */
L_1202B781:
    /* test esi, esi */ /* 0x1202B781: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202BE49; /* 0x1202B783: js 0x1202be49 */
L_1202B789:
    fp_xch(1); /* 0x1202B789: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x120014C0)); /* 0x1202B78B: fcom qword ptr [0x120014c0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202B791: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1202B793: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202B79F; /* 0x1202B796: jne 0x1202b79f */
L_1202B798:
    esi = ecx; /* 0x1202B798: mov esi, ecx */
    MEM32(ebp + 0xC) = ecx; /* 0x1202B79A: mov dword ptr [ebp + 0xc], ecx */
    goto L_1202B7A5; /* 0x1202B79D: jmp 0x1202b7a5 */
L_1202B79F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202B79F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202B7A1: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = esi; /* 0x1202B7A2: mov dword ptr [ebp + 0xc], esi */
L_1202B7A5:
    PUSH32(esp, ebx); /* 0x1202B7A5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202B7A6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1202B7A9: push edi */
    PUSH32(esp, 4); /* 0x1202B7AA: push 4 */
    edx = POP32_VAL(esp); /* 0x1202B7AC: pop edx */
    /* cmp MEM32(ebx + esi * 4 + 0x54), ecx */ /* 0x1202B7AD: cmp dword ptr [ebx + esi*4 + 0x54], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + esi * 4 + 0x54)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202B92F; /* 0x1202B7B1: jne 0x1202b92f */
L_1202B7B7:
    MEM32(ebp + (-0x38)) = ecx; /* 0x1202B7B7: mov dword ptr [ebp - 0x38], ecx */
    /* cmp MEM32(ebx + 0x38), ecx */ /* 0x1202B7BA: cmp dword ptr [ebx + 0x38], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x38)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202B92F; /* 0x1202B7BD: jbe 0x1202b92f */
L_1202B7C3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202B7C3: fstp st(0) */
    edi = ecx; /* 0x1202B7C5: mov edi, ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202B7C7: fstp st(0) */
    esi = esi * 4 + 0x24; /* 0x1202B7C9: lea esi, [esi*4 + 0x24] */
    goto L_1202B7D5; /* 0x1202B7D0: jmp 0x1202b7d5 */
L_1202B7D2:
    PUSH32(esp, 4); /* 0x1202B7D2: push 4 */
    edx = POP32_VAL(esp); /* 0x1202B7D4: pop edx */
L_1202B7D5:
    eax = MEM32(ebx + 0x3C); /* 0x1202B7D5: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(edi + eax + 0x4); /* 0x1202B7D8: mov eax, dword ptr [edi + eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B7DC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202B7DE: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202B7E0: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x1202B7E3: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202B7E8: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202B7EA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202B7EC: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202B7ED: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B7F2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202B7F3: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1202B7F4: mov dword ptr [ebp - 0x18], eax */
    /* test eax, eax */ /* 0x1202B7F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B95E; /* 0x1202B7F9: je 0x1202b95e */
L_1202B7FF:
    eax = MEM32(ebx + 0x3C); /* 0x1202B7FF: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(edi + eax + 0x8); /* 0x1202B802: mov eax, dword ptr [edi + eax + 8] */
    PUSH32(esp, 0x120014BCu); /* 0x1202B806: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B80B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1202B80D: push 4 */
    edx = POP32_VAL(esp); /* 0x1202B80F: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202B810: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202B812: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202B815: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202B817: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202B819: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202B81A: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B81F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202B820: pop ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1202B821: mov dword ptr [ebp - 0x1c], eax */
    /* test eax, eax */ /* 0x1202B824: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B95E; /* 0x1202B826: je 0x1202b95e */
L_1202B82C:
    eax = MEM32(ebx + 0x3C); /* 0x1202B82C: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(edi + eax + 0xC); /* 0x1202B82F: mov eax, dword ptr [edi + eax + 0xc] */
    PUSH32(esp, 0x120014BCu); /* 0x1202B833: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B838: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1202B83A: push 4 */
    edx = POP32_VAL(esp); /* 0x1202B83C: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202B83D: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202B83F: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202B842: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202B844: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202B846: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202B847: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B84C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202B84D: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1202B84E: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x1202B851: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B95E; /* 0x1202B853: je 0x1202b95e */
L_1202B859:
    eax = MEM32(ebx + 0x3C); /* 0x1202B859: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1202B85C: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(edi + eax + 0x4)); /* 0x1202B85F: push dword ptr [edi + eax + 4] */
    PUSH32(esp, MEM32(edi + eax + 0x10)); /* 0x1202B863: push dword ptr [edi + eax + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x1202B867: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(ebp + eax * 4 + (-0x4C))); /* 0x1202B86A: call dword ptr [ebp + eax*4 - 0x4c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1202B86E: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1202B871: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(edi + eax + 0x8)); /* 0x1202B874: push dword ptr [edi + eax + 8] */
    PUSH32(esp, MEM32(edi + eax + 0x14)); /* 0x1202B878: push dword ptr [edi + eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1202B87C: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(ebp + eax * 4 + (-0x44))); /* 0x1202B87F: call dword ptr [ebp + eax*4 - 0x44] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1202B883: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1202B886: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(edi + eax + 0xC)); /* 0x1202B889: push dword ptr [edi + eax + 0xc] */
    PUSH32(esp, MEM32(edi + eax + 0x18)); /* 0x1202B88D: push dword ptr [edi + eax + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x1202B891: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(ebp + eax * 4 + (-0x4C))); /* 0x1202B894: call dword ptr [ebp + eax*4 - 0x4c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1202B898: mov eax, dword ptr [ebx + 0x3c] */
    /* cmp MEM32(eax + esi + (-0x8)), 0 */ /* 0x1202B89B: cmp dword ptr [eax + esi - 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202B8B4; /* 0x1202B8A0: je 0x1202b8b4 */
L_1202B8A2:
    PUSH32(esp, MEM32(eax + esi + (-0x8))); /* 0x1202B8A2: push dword ptr [eax + esi - 8] */
    RECOMP_CALL(sub_121BF388); /* 0x1202B8A6: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1202B8AB: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(esi + eax + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(esi + eax + (-0x8)) = MEM32(esi + eax + (-0x8)) & 0; /* 0x1202B8AE: and dword ptr [esi + eax - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202B8B3: pop ecx */
L_1202B8B4:
    eax = MEM32(ebx + 0x3C); /* 0x1202B8B4: mov eax, dword ptr [ebx + 0x3c] */
    /* cmp MEM32(eax + esi), 0 */ /* 0x1202B8B7: cmp dword ptr [eax + esi], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202B8CD; /* 0x1202B8BB: je 0x1202b8cd */
L_1202B8BD:
    PUSH32(esp, MEM32(eax + esi)); /* 0x1202B8BD: push dword ptr [eax + esi] */
    RECOMP_CALL(sub_121BF388); /* 0x1202B8C0: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1202B8C5: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(esi + eax)); _flag_b = (uint32_t)(0);
    MEM32(esi + eax) = MEM32(esi + eax) & 0; /* 0x1202B8C8: and dword ptr [esi + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202B8CC: pop ecx */
L_1202B8CD:
    eax = MEM32(ebx + 0x3C); /* 0x1202B8CD: mov eax, dword ptr [ebx + 0x3c] */
    /* cmp MEM32(eax + esi + 0x8), 0 */ /* 0x1202B8D0: cmp dword ptr [eax + esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202B8E9; /* 0x1202B8D5: je 0x1202b8e9 */
L_1202B8D7:
    PUSH32(esp, MEM32(eax + esi + 0x8)); /* 0x1202B8D7: push dword ptr [eax + esi + 8] */
    RECOMP_CALL(sub_121BF388); /* 0x1202B8DB: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1202B8E0: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(esi + eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + eax + 0x8) = MEM32(esi + eax + 0x8) & 0; /* 0x1202B8E3: and dword ptr [esi + eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202B8E8: pop ecx */
L_1202B8E9:
    eax = MEM32(ebx + 0x3C); /* 0x1202B8E9: mov eax, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1202B8EC: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(esi + eax + (-0x8)) = ecx; /* 0x1202B8EF: mov dword ptr [esi + eax - 8], ecx */
    eax = MEM32(ebx + 0x3C); /* 0x1202B8F3: mov eax, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1202B8F6: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(esi + eax) = ecx; /* 0x1202B8F9: mov dword ptr [esi + eax], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x1202B8FC: mov ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebx + 0x3C); /* 0x1202B8FF: mov eax, dword ptr [ebx + 0x3c] */
    MEM32(esi + eax + 0x8) = ecx; /* 0x1202B902: mov dword ptr [esi + eax + 8], ecx */
    eax = MEM32(ebp + (-0x38)); /* 0x1202B906: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202B909: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202B90B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x44u; /* 0x1202B90C: add edi, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x44u; /* 0x1202B90F: add esi, 0x44 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1202B912: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1202B915: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1202B918: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x1202B91B: mov dword ptr [ebp - 0x38], eax */
    /* cmp eax, MEM32(ebx + 0x38) */ /* 0x1202B91E: cmp eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202B7D2; /* 0x1202B921: jb 0x1202b7d2 */
L_1202B927:
    fp_push(1.0); /* 0x1202B927: fld1  */
    esi = MEM32(ebp + 0xC); /* 0x1202B929: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1202B92C: fld dword ptr [ebp + 0x10] */
L_1202B92F:
    fp_push(_st[1]); /* 0x1202B92F: fld st(1) */
    MEM32(ebx + esi * 4 + 0x54) = 1; /* 0x1202B931: mov dword ptr [ebx + esi*4 + 0x54], 1 */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1202B939: fsubrp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202B93B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202B93D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202B93F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B951; /* 0x1202B942: je 0x1202b951 */
L_1202B944:
    fp_push(0.0); /* 0x1202B944: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202B946: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202B948: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202B94A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B968; /* 0x1202B94D: je 0x1202b968 */
L_1202B94F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202B94F: fstp st(0) */
L_1202B951:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202B951: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202B953: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202B955: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202B96A; /* 0x1202B958: jne 0x1202b96a */
L_1202B95A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202B95A: fstp st(0) */
    goto L_1202B96C; /* 0x1202B95C: jmp 0x1202b96c */
L_1202B95E:
    esi = 0x8007000Eu; /* 0x1202B95E: mov esi, 0x8007000e */
    goto L_1202BE0E; /* 0x1202B963: jmp 0x1202be0e */
L_1202B968:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202B968: fstp st(1) */
L_1202B96A:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202B96A: fstp st(1) */
L_1202B96C:
    MEM32(ebp + 0x10) = ecx; /* 0x1202B96C: mov dword ptr [ebp + 0x10], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1202B96F: fstp dword ptr [ebp - 0x48] */
    ecx = MEM32(ebx + 0x38); /* 0x1202B972: mov ecx, dword ptr [ebx + 0x38] */
    PUSH32(esp, 8); /* 0x1202B975: push 8 */
    edi = POP32_VAL(esp); /* 0x1202B977: pop edi */
    eax = edi; /* 0x1202B978: mov eax, edi */
    MEM32(ebp + (-0x28)) = edi; /* 0x1202B97A: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1202B97D: mov dword ptr [ebp - 0x30], ecx */
    /* test ecx, ecx */ /* 0x1202B980: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B9F8; /* 0x1202B982: je 0x1202b9f8 */
L_1202B984:
    eax = MEM32(ebx + 0x3C); /* 0x1202B984: mov eax, dword ptr [ebx + 0x3c] */
    esi = MEM32(ebp + 0x10); /* 0x1202B987: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 4); /* 0x1202B98A: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202B98C: pop ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x1202B98D: mov dword ptr [ebp - 0x38], eax */
    edx = ecx + eax; /* 0x1202B990: lea edx, [ecx + eax] */
L_1202B993:
    ecx = MEM32(eax); /* 0x1202B993: mov ecx, dword ptr [eax] */
    eax = ecx + 0x1; /* 0x1202B995: lea eax, [ecx + 1] */
    MEM32(ebp + 0x10) = eax; /* 0x1202B998: mov dword ptr [ebp + 0x10], eax */
L_1202B99B:
    SET_LO8(eax, MEM8(ecx)); /* 0x1202B99B: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202B99D: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1202B99E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202B99B; /* 0x1202B9A0: jne 0x1202b99b */
L_1202B9A2:
    eax = MEM32(edx + 0x4); /* 0x1202B9A2: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x10); /* 0x1202B9A5: sub ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1202B9A8: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x28)); /* 0x1202B9AB: add eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    esi = esi + ecx + 0x1; /* 0x1202B9AE: lea esi, [esi + ecx + 1] */
    ecx = MEM32(edx + 0x8); /* 0x1202B9B2: mov ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx); /* 0x1202B9B5: add ecx, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x44u; /* 0x1202B9B7: add edx, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1202B9BA: add ecx, ecx */
    _flag_k = FK_ADD;
    eax = eax + ecx * 8 + 0x10; /* 0x1202B9BC: lea eax, [eax + ecx*8 + 0x10] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1202B9C0: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x38)); /* 0x1202B9C3: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x44u; /* 0x1202B9C6: add eax, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) - 1; /* 0x1202B9C9: dec dword ptr [ebp - 0x30] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x38)) = eax; /* 0x1202B9CC: mov dword ptr [ebp - 0x38], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202B993; /* 0x1202B9CF: jne 0x1202b993 */
L_1202B9D1:
    eax = esi; /* 0x1202B9D1: mov eax, esi */
    MEM32(ebp + 0x10) = esi; /* 0x1202B9D3: mov dword ptr [ebp + 0x10], esi */
    esi = MEM32(ebp + 0xC); /* 0x1202B9D6: mov esi, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1202B9D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202B9F1; /* 0x1202B9DB: je 0x1202b9f1 */
L_1202B9DD:
    PUSH32(esp, 0x120014BCu); /* 0x1202B9DD: push 0x120014bc */
    PUSH32(esp, eax); /* 0x1202B9E2: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1202B9E3: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202B9E8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202B9E9: pop ecx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1202B9EA: mov dword ptr [ebp - 0x2c], eax */
    /* test eax, eax */ /* 0x1202B9ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BA0C; /* 0x1202B9EF: je 0x1202ba0c */
L_1202B9F1:
    eax = MEM32(ebp + (-0x28)); /* 0x1202B9F1: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x1202B9F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BA19; /* 0x1202B9F6: je 0x1202ba19 */
L_1202B9F8:
    PUSH32(esp, 0x120014BCu); /* 0x1202B9F8: push 0x120014bc */
    PUSH32(esp, eax); /* 0x1202B9FD: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1202B9FE: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202BA03: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202BA04: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1202BA05: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1202BA08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202BA19; /* 0x1202BA0A: jne 0x1202ba19 */
L_1202BA0C:
    ebx = MEM32(ebp + (-0x4)); /* 0x1202BA0C: mov ebx, dword ptr [ebp - 4] */
    esi = 0x8007000Eu; /* 0x1202BA0F: mov esi, 0x8007000e */
    goto L_1202BDF5; /* 0x1202BA14: jmp 0x1202bdf5 */
L_1202BA19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202BA19: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1202BA1B: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x40)) = eax; /* 0x1202BA1E: mov dword ptr [ebp - 0x40], eax */
    /* cmp MEM32(ebx + 0x38), eax */ /* 0x1202BA21: cmp dword ptr [ebx + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202BD9B; /* 0x1202BA24: jbe 0x1202bd9b */
L_1202BA2A:
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1202BA2A: fld dword ptr [ebp - 0x48] */
    ecx = eax; /* 0x1202BA2D: mov ecx, eax */
    eax = esi * 4 + 0x24; /* 0x1202BA2F: lea eax, [esi*4 + 0x24] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1202BA36: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1202BA39: mov dword ptr [ebp - 0x14], eax */
L_1202BA3C:
    eax = MEM32(ebx + 0x3C); /* 0x1202BA3C: mov eax, dword ptr [ebx + 0x3c] */
    esi = MEM32(ecx + eax + 0x4); /* 0x1202BA3F: mov esi, dword ptr [ecx + eax + 4] */
    fp_push((double)(int32_t)MEM32(ecx + eax + 0x4)); /* 0x1202BA43: fild dword ptr [ecx + eax + 4] */
    /* test esi, esi */ /* 0x1202BA47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202BA51; /* 0x1202BA49: jns 0x1202ba51 */
L_1202BA4B:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202BA4B: fadd dword ptr [0x120014d0] */
L_1202BA51:
    fp_push(_st[1]); /* 0x1202BA51: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202BA53: fmulp st(1) */
    RECOMP_CALL(sub_121BF2F7); /* 0x1202BA55: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1202BA5A: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, 5 */ /* 0x1202BA5D: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1202BA68; /* 0x1202BA60: ja 0x1202ba68 */
L_1202BA62:
    PUSH32(esp, 5); /* 0x1202BA62: push 5 */
    eax = POP32_VAL(esp); /* 0x1202BA64: pop eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1202BA65: mov dword ptr [ebp - 0x10], eax */
L_1202BA68:
    /* cmp eax, esi */ /* 0x1202BA68: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202BA6F; /* 0x1202BA6A: jb 0x1202ba6f */
L_1202BA6C:
    MEM32(ebp + (-0x10)) = esi; /* 0x1202BA6C: mov dword ptr [ebp - 0x10], esi */
L_1202BA6F:
    esi = MEM32(ebp + (-0x28)); /* 0x1202BA6F: mov esi, dword ptr [ebp - 0x28] */
    eax = MEM32(ebx + 0x3C); /* 0x1202BA72: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(esi + eax + 0x8); /* 0x1202BA75: mov eax, dword ptr [esi + eax + 8] */
    MEM32(ebp + 0x10) = eax; /* 0x1202BA79: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x1202BA7C: fild dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1202BA7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202BA89; /* 0x1202BA81: jns 0x1202ba89 */
L_1202BA83:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202BA83: fadd dword ptr [0x120014d0] */
L_1202BA89:
    fp_push(_st[1]); /* 0x1202BA89: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202BA8B: fmulp st(1) */
    RECOMP_CALL(sub_121BF2F7); /* 0x1202BA8D: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1202BA92: mov dword ptr [ebp + 0xc], eax */
    /* cmp eax, 5 */ /* 0x1202BA95: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1202BAA0; /* 0x1202BA98: ja 0x1202baa0 */
L_1202BA9A:
    PUSH32(esp, 5); /* 0x1202BA9A: push 5 */
    eax = POP32_VAL(esp); /* 0x1202BA9C: pop eax */
    MEM32(ebp + 0xC) = eax; /* 0x1202BA9D: mov dword ptr [ebp + 0xc], eax */
L_1202BAA0:
    edx = MEM32(ebx + 0x3C); /* 0x1202BAA0: mov edx, dword ptr [ebx + 0x3c] */
    ecx = MEM32(esi + edx + 0x8); /* 0x1202BAA3: mov ecx, dword ptr [esi + edx + 8] */
    /* cmp eax, ecx */ /* 0x1202BAA7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202BAAE; /* 0x1202BAA9: jb 0x1202baae */
L_1202BAAB:
    MEM32(ebp + 0xC) = ecx; /* 0x1202BAAB: mov dword ptr [ebp + 0xc], ecx */
L_1202BAAE:
    eax = MEM32(esi + edx + 0xC); /* 0x1202BAAE: mov eax, dword ptr [esi + edx + 0xc] */
    fp_push((double)(int32_t)MEM32(esi + edx + 0xC)); /* 0x1202BAB2: fild dword ptr [esi + edx + 0xc] */
    /* test eax, eax */ /* 0x1202BAB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202BAC0; /* 0x1202BAB8: jns 0x1202bac0 */
L_1202BABA:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202BABA: fadd dword ptr [0x120014d0] */
L_1202BAC0:
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202BAC0: fmulp st(1) */
    RECOMP_CALL(sub_121BF2F7); /* 0x1202BAC2: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1202BAC7: mov edx, eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x1202BAC9: mov dword ptr [ebp - 0x24], eax */
    /* cmp edx, 5 */ /* 0x1202BACC: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1202BAD7; /* 0x1202BACF: ja 0x1202bad7 */
L_1202BAD1:
    PUSH32(esp, 5); /* 0x1202BAD1: push 5 */
    edx = POP32_VAL(esp); /* 0x1202BAD3: pop edx */
    MEM32(ebp + (-0x24)) = edx; /* 0x1202BAD4: mov dword ptr [ebp - 0x24], edx */
L_1202BAD7:
    eax = MEM32(ebx + 0x3C); /* 0x1202BAD7: mov eax, dword ptr [ebx + 0x3c] */
    /* cmp edx, MEM32(esi + eax + 0xC) */ /* 0x1202BADA: cmp edx, dword ptr [esi + eax + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202BAE7; /* 0x1202BADE: jb 0x1202bae7 */
L_1202BAE0:
    edx = MEM32(esi + eax + 0xC); /* 0x1202BAE0: mov edx, dword ptr [esi + eax + 0xc] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1202BAE4: mov dword ptr [ebp - 0x24], edx */
L_1202BAE7:
    eax = MEM32(ebp + (-0x4)); /* 0x1202BAE7: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1202BAEA: mov ecx, dword ptr [ebp - 8] */
    MEM32(edi + eax) = ecx; /* 0x1202BAED: mov dword ptr [edi + eax], ecx */
    PUSH32(esp, 4); /* 0x1202BAF0: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202BAF2: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1202BAF3: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x1202BAF5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(edi + eax) = ecx; /* 0x1202BAF8: mov dword ptr [edi + eax], ecx */
    PUSH32(esp, 4); /* 0x1202BAFB: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202BAFD: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1202BAFE: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x1202BB00: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edi + eax) = ecx; /* 0x1202BB03: mov dword ptr [edi + eax], ecx */
    PUSH32(esp, 4); /* 0x1202BB06: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202BB08: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1202BB09: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(edi + eax) = edx; /* 0x1202BB0B: mov dword ptr [edi + eax], edx */
    eax = MEM32(ebx + 0x3C); /* 0x1202BB0E: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1202BB11: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + eax); /* 0x1202BB13: mov ecx, dword ptr [esi + eax] */
    esi = ecx; /* 0x1202BB16: mov esi, ecx */
    MEM32(ebp + 0x10) = edi; /* 0x1202BB18: mov dword ptr [ebp + 0x10], edi */
    edx = esi + 0x1; /* 0x1202BB1B: lea edx, [esi + 1] */
L_1202BB1E:
    SET_LO8(eax, MEM8(esi)); /* 0x1202BB1E: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202BB20: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1202BB21: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202BB1E; /* 0x1202BB23: jne 0x1202bb1e */
L_1202BB25:
    eax = MEM32(ebp + (-0x8)); /* 0x1202BB25: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x1202BB28: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1202BB2B: sub esi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202BB2D: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1202BB2E: push esi */
    PUSH32(esp, ecx); /* 0x1202BB2F: push ecx */
    PUSH32(esp, eax); /* 0x1202BB30: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1202BB31: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + esi; /* 0x1202BB36: add dword ptr [ebp - 8], esi */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x3C); /* 0x1202BB39: mov eax, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ebp + (-0x28)); /* 0x1202BB3C: mov ecx, dword ptr [ebp - 0x28] */
    edx = MEM32(ebp + (-0x4)); /* 0x1202BB3F: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202BB42: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202BB44: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = esi; /* 0x1202BB47: mov dword ptr [ebp - 0x30], esi */
    /* cmp MEM32(ecx + eax + 0x4), esi */ /* 0x1202BB4A: cmp dword ptr [ecx + eax + 4], esi */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202BBB3; /* 0x1202BB4E: jbe 0x1202bbb3 */
L_1202BB50:
    eax = edi + edx; /* 0x1202BB50: lea eax, [edi + edx] */
    edx = MEM32(ebx + 0x3C); /* 0x1202BB53: mov edx, dword ptr [ebx + 0x3c] */
    MEM32(ebp + (-0x38)) = esi; /* 0x1202BB56: mov dword ptr [ebp - 0x38], esi */
    esi = MEM32(ebp + (-0x10)); /* 0x1202BB59: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1202BB5C: mov dword ptr [ebp - 0x3c], eax */
L_1202BB5F:
    eax = MEM32(ebp + (-0x14)); /* 0x1202BB5F: mov eax, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x30)); /* 0x1202BB62: mov ebx, dword ptr [ebp - 0x30] */
    eax = MEM32(edx + eax + (-0x8)); /* 0x1202BB65: mov eax, dword ptr [edx + eax - 8] */
    /* cmp MEM32(eax + ebx * 4), esi */ /* 0x1202BB69: cmp dword ptr [eax + ebx*4], esi */
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x1202BB6C: mov ebx, dword ptr [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202BB97; /* 0x1202BB6F: jae 0x1202bb97 */
L_1202BB71:
    esi = MEM32(ecx + edx + 0x10); /* 0x1202BB71: mov esi, dword ptr [ecx + edx + 0x10] */
    eax = MEM32(ebp + (-0x3C)); /* 0x1202BB75: mov eax, dword ptr [ebp - 0x3c] */
    edx = MEM32(ebp + (-0x38)); /* 0x1202BB78: mov edx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1202BB7B: add esi, edx */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1202BB7D: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BB7F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BB80: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BB81: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BB82: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0x10); /* 0x1202BB83: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + (-0x10)); /* 0x1202BB86: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1202BB89: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1202BB8C: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = edi; /* 0x1202BB8F: mov dword ptr [ebp + 0x10], edi */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1202BB92: mov dword ptr [ebp - 0x3c], eax */
    goto L_1202BB9A; /* 0x1202BB95: jmp 0x1202bb9a */
L_1202BB97:
    edx = MEM32(ebp + (-0x38)); /* 0x1202BB97: mov edx, dword ptr [ebp - 0x38] */
L_1202BB9A:
    eax = MEM32(ebp + (-0x30)); /* 0x1202BB9A: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1202BB9D: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202BBA0: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = edx; /* 0x1202BBA1: mov dword ptr [ebp - 0x38], edx */
    edx = MEM32(ebx + 0x3C); /* 0x1202BBA4: mov edx, dword ptr [ebx + 0x3c] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1202BBA7: mov dword ptr [ebp - 0x30], eax */
    /* cmp eax, MEM32(ecx + edx + 0x4) */ /* 0x1202BBAA: cmp eax, dword ptr [ecx + edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202BB5F; /* 0x1202BBAE: jb 0x1202bb5f */
L_1202BBB0:
    edx = MEM32(ebp + (-0x4)); /* 0x1202BBB0: mov edx, dword ptr [ebp - 4] */
L_1202BBB3:
    esi = edi + edx; /* 0x1202BBB3: lea esi, [edi + edx] */
    edi = MEM32(ebx + 0x3C); /* 0x1202BBB6: mov edi, dword ptr [ebx + 0x3c] */
    edx = MEM32(ebp + 0x10); /* 0x1202BBB9: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202BBBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x1202BBBE: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x38)) = eax; /* 0x1202BBC1: mov dword ptr [ebp - 0x38], eax */
    /* cmp MEM32(ecx + edi + 0x8), eax */ /* 0x1202BBC4: cmp dword ptr [ecx + edi + 8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202BC1E; /* 0x1202BBC8: jbe 0x1202bc1e */
L_1202BBCA:
    MEM32(ebp + (-0x3C)) = esi; /* 0x1202BBCA: mov dword ptr [ebp - 0x3c], esi */
    esi = MEM32(ebp + 0xC); /* 0x1202BBCD: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1202BBD0: mov dword ptr [ebp - 0x30], eax */
L_1202BBD3:
    eax = MEM32(ebp + (-0x14)); /* 0x1202BBD3: mov eax, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x38)); /* 0x1202BBD6: mov ebx, dword ptr [ebp - 0x38] */
    eax = MEM32(edi + eax); /* 0x1202BBD9: mov eax, dword ptr [edi + eax] */
    /* cmp MEM32(eax + ebx * 4), esi */ /* 0x1202BBDC: cmp dword ptr [eax + ebx*4], esi */
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x1202BBDF: mov ebx, dword ptr [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202BC04; /* 0x1202BBE2: jae 0x1202bc04 */
L_1202BBE4:
    esi = MEM32(ecx + edi + 0x14); /* 0x1202BBE4: mov esi, dword ptr [ecx + edi + 0x14] */
    eax = MEM32(ebp + (-0x3C)); /* 0x1202BBE8: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x30)); /* 0x1202BBEB: add esi, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    PUSH32(esp, 5); /* 0x1202BBEE: push 5 */
    edi = eax; /* 0x1202BBF0: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1202BBF2: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1202BBF3: add edx, 0x14 */
    _flag_k = FK_ADD;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1202BBF6: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x28)); /* 0x1202BBF8: mov ecx, dword ptr [ebp - 0x28] */
    esi = MEM32(ebp + 0xC); /* 0x1202BBFB: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1202BBFE: add eax, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C)) = eax; /* 0x1202BC01: mov dword ptr [ebp - 0x3c], eax */
L_1202BC04:
    eax = MEM32(ebp + (-0x38)); /* 0x1202BC04: mov eax, dword ptr [ebp - 0x38] */
    edi = MEM32(ebx + 0x3C); /* 0x1202BC07: mov edi, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 0x14u; /* 0x1202BC0A: add dword ptr [ebp - 0x30], 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202BC0E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = eax; /* 0x1202BC0F: mov dword ptr [ebp - 0x38], eax */
    /* cmp eax, MEM32(ecx + edi + 0x8) */ /* 0x1202BC12: cmp eax, dword ptr [ecx + edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202BBD3; /* 0x1202BC16: jb 0x1202bbd3 */
L_1202BC18:
    esi = MEM32(ebp + (-0x10)); /* 0x1202BC18: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + 0x10) = edx; /* 0x1202BC1B: mov dword ptr [ebp + 0x10], edx */
L_1202BC1E:
    eax = MEM32(ebp + 0xC); /* 0x1202BC1E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 1 */ /* 0x1202BC21: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202BD18; /* 0x1202BC24: jbe 0x1202bd18 */
L_1202BC2A:
    edi = eax + (-0x1); /* 0x1202BC2A: lea edi, [eax - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1202BC2D: add esi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C)) = edi; /* 0x1202BC30: mov dword ptr [ebp - 0x3c], edi */
L_1202BC33:
    fp_push(*(float*)&MEM32(esi + (-0x8))); /* 0x1202BC33: fld dword ptr [esi - 8] */
    eax = esi + 0x14; /* 0x1202BC36: lea eax, [esi + 0x14] */
    _st[0] += (double)*(float*)ADDR(esi + 0xC); /* 0x1202BC39: fadd dword ptr [esi + 0xc] */
    MEM32(ebp + 0xC) = eax; /* 0x1202BC3C: mov dword ptr [ebp + 0xc], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1202BC3F: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(esi + (-0x4))); /* 0x1202BC42: fld dword ptr [esi - 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x10); /* 0x1202BC45: fadd dword ptr [esi + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1202BC48: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1202BC4B: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x1202BC4D: fadd dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1202BC4F: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1202BC52: fld dword ptr [esi + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x18); /* 0x1202BC55: fadd dword ptr [esi + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1202BC58: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x1202BC5B: fld dword ptr [esi + 0xc] */
    _st[0] -= (double)*(float*)ADDR(esi + (-0x8)); /* 0x1202BC5E: fsub dword ptr [esi - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x1202BC61: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(esi + 0x10)); /* 0x1202BC64: fld dword ptr [esi + 0x10] */
    _st[0] -= (double)*(float*)ADDR(esi + (-0x4)); /* 0x1202BC67: fsub dword ptr [esi - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x1202BC6A: fstp dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1202BC6D: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x1202BC6F: fsub dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x1202BC71: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(esi + 0x18)); /* 0x1202BC74: fld dword ptr [esi + 0x18] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x1202BC77: fsub dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1202BC7A: fstp dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x1202BC7D: fld dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x1202BC80: fld dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x1202BC83: fld dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x1202BC86: fld dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x1202BC89: fld dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x1202BC8C: fld dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x1202BC8F: fld dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x1202BC92: fld dword ptr [ebp - 0x60] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x1202BC95: fstp qword ptr [ebp - 0x34] */
    fp_xch(5); /* 0x1202BC98: fxch st(5) */
    _st[0] *= _st[0]; /* 0x1202BC9A: fmul st(0), st(0) */
    fp_xch(6); /* 0x1202BC9C: fxch st(6) */
    _st[0] *= _st[0]; /* 0x1202BC9E: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x1202BCA0: faddp st(6) */
    fp_xch(3); /* 0x1202BCA2: fxch st(3) */
    _st[0] *= _st[0]; /* 0x1202BCA4: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x1202BCA6: faddp st(5) */
    fp_xch(1); /* 0x1202BCA8: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1202BCAA: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1202BCAC: faddp st(4) */
    fp_xch(3); /* 0x1202BCAE: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1202BCB0: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1202BCB3: fld dword ptr [ebp - 0x38] */
    fp_xch(1); /* 0x1202BCB6: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1202BCB8: fmul st(0), st(0) */
    fp_xch(3); /* 0x1202BCBA: fxch st(3) */
    _st[0] *= _st[0]; /* 0x1202BCBC: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1202BCBE: faddp st(3) */
    fp_xch(1); /* 0x1202BCC0: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1202BCC2: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202BCC4: faddp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x1202BCC6: fld qword ptr [ebp - 0x34] */
    _st[0] *= _st[0]; /* 0x1202BCC9: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202BCCB: faddp st(2) */
    fp_xch(1); /* 0x1202BCCD: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1202BCCF: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1202BCD2: fld dword ptr [ebp - 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202BCD5: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202BCD7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202BCD9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0xC); /* 0x1202BCDC: mov eax, dword ptr [ebp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202BD0C; /* 0x1202BCDF: jne 0x1202bd0c */
L_1202BCE1:
    edi = esi + 0xC; /* 0x1202BCE1: lea edi, [esi + 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1202BCE4: fld dword ptr [edi] */
    _st[0] = -_st[0]; /* 0x1202BCE6: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x1202BCE8: fstp dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(esi + 0x10)); /* 0x1202BCEB: fld dword ptr [esi + 0x10] */
    _st[0] = -_st[0]; /* 0x1202BCEE: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x1202BCF0: fstp dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1202BCF3: fld dword ptr [eax] */
    _st[0] = -_st[0]; /* 0x1202BCF5: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1202BCF7: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(esi + 0x18)); /* 0x1202BCFA: fld dword ptr [esi + 0x18] */
    esi = ebp + (-0x7C); /* 0x1202BCFD: lea esi, [ebp - 0x7c] */
    _st[0] = -_st[0]; /* 0x1202BD00: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x1202BD02: fstp dword ptr [ebp - 0x70] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BD05: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BD06: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BD07: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BD08: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x3C)); /* 0x1202BD09: mov edi, dword ptr [ebp - 0x3c] */
L_1202BD0C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1202BD0C: dec edi */
    _flag_k = FK_DEC;
    esi = eax; /* 0x1202BD0D: mov esi, eax */
    MEM32(ebp + (-0x3C)) = edi; /* 0x1202BD0F: mov dword ptr [ebp - 0x3c], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202BC33; /* 0x1202BD12: jne 0x1202bc33 */
L_1202BD18:
    esi = MEM32(ebx + 0x3C); /* 0x1202BD18: mov esi, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202BD1B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = edi; /* 0x1202BD1D: mov dword ptr [ebp + 0xc], edi */
    /* cmp MEM32(ecx + esi + 0xC), edi */ /* 0x1202BD20: cmp dword ptr [ecx + esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ecx + esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202BD79; /* 0x1202BD24: jbe 0x1202bd79 */
L_1202BD26:
    eax = MEM32(ebp + (-0x4)); /* 0x1202BD26: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1202BD29: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = edi; /* 0x1202BD2B: mov dword ptr [ebp + 0x10], edi */
    edi = MEM32(ebp + (-0x24)); /* 0x1202BD2E: mov edi, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1202BD31: mov dword ptr [ebp - 0x3c], eax */
L_1202BD34:
    eax = MEM32(ebp + (-0x14)); /* 0x1202BD34: mov eax, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + 0xC); /* 0x1202BD37: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + eax + 0x8); /* 0x1202BD3A: mov eax, dword ptr [esi + eax + 8] */
    /* cmp MEM32(eax + ebx * 4), edi */ /* 0x1202BD3E: cmp dword ptr [eax + ebx*4], edi */
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x1202BD41: mov ebx, dword ptr [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202BD62; /* 0x1202BD44: jae 0x1202bd62 */
L_1202BD46:
    esi = MEM32(ecx + esi + 0x18); /* 0x1202BD46: mov esi, dword ptr [ecx + esi + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x1202BD4A: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x3C)); /* 0x1202BD4D: mov eax, dword ptr [ebp - 0x3c] */
    edi = eax; /* 0x1202BD50: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BD52: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BD53: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BD54: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1202BD55: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1202BD58: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202BD5B: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x24)); /* 0x1202BD5C: mov edi, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1202BD5F: mov dword ptr [ebp - 0x3c], eax */
L_1202BD62:
    eax = MEM32(ebp + 0xC); /* 0x1202BD62: mov eax, dword ptr [ebp + 0xc] */
    esi = MEM32(ebx + 0x3C); /* 0x1202BD65: mov esi, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x1202BD68: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202BD6C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x1202BD6D: mov dword ptr [ebp + 0xc], eax */
    /* cmp eax, MEM32(ecx + esi + 0xC) */ /* 0x1202BD70: cmp eax, dword ptr [ecx + esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202BD34; /* 0x1202BD74: jb 0x1202bd34 */
L_1202BD76:
    MEM32(ebp + 0x10) = edx; /* 0x1202BD76: mov dword ptr [ebp + 0x10], edx */
L_1202BD79:
    eax = MEM32(ebp + (-0x40)); /* 0x1202BD79: mov eax, dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1202BD7C: fld dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 0x44u; /* 0x1202BD7F: add dword ptr [ebp - 0x14], 0x44 */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x10); /* 0x1202BD83: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202BD86: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x44u; /* 0x1202BD87: add ecx, 0x44 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = eax; /* 0x1202BD8A: mov dword ptr [ebp - 0x40], eax */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1202BD8D: mov dword ptr [ebp - 0x28], ecx */
    /* cmp eax, MEM32(ebx + 0x38) */ /* 0x1202BD90: cmp eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202BA3C; /* 0x1202BD93: jb 0x1202ba3c */
L_1202BD99:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202BD99: fstp st(0) */
L_1202BD9B:
    eax = MEM32(ebx + 0x38); /* 0x1202BD9B: mov eax, dword ptr [ebx + 0x38] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1202BD9E: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebx) = eax; /* 0x1202BDA1: mov dword ptr [ebx], eax */
    eax = ebp + (-0xC); /* 0x1202BDA3: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1202BDA6: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1202BDA7: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1202BDAA: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1202BDAC: push eax */
    MEM32(ebx + 0x4) = edi; /* 0x1202BDAD: mov dword ptr [ebx + 4], edi */
    RECOMP_CALL(sub_120192FE); /* 0x1202BDB0: call 0x120192fe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202BDB5: mov esi, eax */
    /* test esi, esi */ /* 0x1202BDB7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202BDF5; /* 0x1202BDB9: js 0x1202bdf5 */
L_1202BDBB:
    ecx = MEM32(ebp + (-0xC)); /* 0x1202BDBB: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ecx); /* 0x1202BDBE: mov edx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1202BDC0: push edi */
    PUSH32(esp, ebx); /* 0x1202BDC1: push ebx */
    PUSH32(esp, ecx); /* 0x1202BDC2: push ecx */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1202BDC3: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202BDC6: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1202BDC7: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1202BDCC: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x1202BDCF: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202BDD1: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202BDD4: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1202BDD7: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1202BDDA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202BDDB: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1202BDDE: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1202BDE0: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1202BDE1: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1202BDE6: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x1202BDE9: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202BDEC: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1202BDEF: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1202BDF3: mov dword ptr [ecx], eax */
L_1202BDF5:
    eax = MEM32(ebp + (-0x2C)); /* 0x1202BDF5: mov eax, dword ptr [ebp - 0x2c] */
    /* test eax, eax */ /* 0x1202BDF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BE03; /* 0x1202BDFA: je 0x1202be03 */
L_1202BDFC:
    PUSH32(esp, eax); /* 0x1202BDFC: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202BDFD: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202BE02: pop ecx */
L_1202BE03:
    /* test ebx, ebx */ /* 0x1202BE03: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BE38; /* 0x1202BE05: je 0x1202be38 */
L_1202BE07:
    PUSH32(esp, ebx); /* 0x1202BE07: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1202BE08: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202BE0D: pop ecx */
L_1202BE0E:
    eax = MEM32(ebp + (-0x18)); /* 0x1202BE0E: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, eax */ /* 0x1202BE11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BE1C; /* 0x1202BE13: je 0x1202be1c */
L_1202BE15:
    PUSH32(esp, eax); /* 0x1202BE15: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202BE16: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202BE1B: pop ecx */
L_1202BE1C:
    eax = MEM32(ebp + (-0x1C)); /* 0x1202BE1C: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x1202BE1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BE2A; /* 0x1202BE21: je 0x1202be2a */
L_1202BE23:
    PUSH32(esp, eax); /* 0x1202BE23: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202BE24: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202BE29: pop ecx */
L_1202BE2A:
    eax = MEM32(ebp + (-0x20)); /* 0x1202BE2A: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x1202BE2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BE38; /* 0x1202BE2F: je 0x1202be38 */
L_1202BE31:
    PUSH32(esp, eax); /* 0x1202BE31: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202BE32: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202BE37: pop ecx */
L_1202BE38:
    ecx = MEM32(ebp + (-0xC)); /* 0x1202BE38: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1202BE3B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1202BE3C: pop ebx */
    /* test ecx, ecx */ /* 0x1202BE3D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BE4D; /* 0x1202BE3F: je 0x1202be4d */
L_1202BE41:
    eax = MEM32(ecx); /* 0x1202BE41: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202BE43: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202BE44: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_1202BE4D; /* 0x1202BE47: jmp 0x1202be4d */
L_1202BE49:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202BE49: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202BE4B: fstp st(0) */
L_1202BE4D:
    eax = esi; /* 0x1202BE4D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202BE4F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202BE50: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1202BE51: ret 0x14 */
    RECOMP_REGS_OUT();
}
