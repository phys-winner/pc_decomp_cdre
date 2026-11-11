#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1202BE59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202BE59u);

L_1202BE59:
    edi = edi; /* 0x1202BE59: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202BE5B: push ebp */
    ebp = esp; /* 0x1202BE5C: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1202BE5E: push ebx */
    PUSH32(esp, esi); /* 0x1202BE5F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202BE60: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x8876086Cu; /* 0x1202BE62: mov ecx, 0x8876086c */
    /* cmp MEM32(ebp + 0x24), esi */ /* 0x1202BE67: cmp dword ptr [ebp + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BE6E; /* 0x1202BE6A: jne 0x1202be6e */
L_1202BE6C:
    esi = ecx; /* 0x1202BE6C: mov esi, ecx */
L_1202BE6E:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1202BE6E: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BE7C; /* 0x1202BE72: jne 0x1202be7c */
L_1202BE74:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1202BE74: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202BE7C; /* 0x1202BE78: jbe 0x1202be7c */
L_1202BE7A:
    esi = ecx; /* 0x1202BE7A: mov esi, ecx */
L_1202BE7C:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1202BE7C: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BE84; /* 0x1202BE80: jne 0x1202be84 */
L_1202BE82:
    esi = ecx; /* 0x1202BE82: mov esi, ecx */
L_1202BE84:
    ebx = MEM32(ebp + 0x14); /* 0x1202BE84: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x1202BE87: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BE97; /* 0x1202BE89: je 0x1202be97 */
L_1202BE8B:
    /* cmp ebx, 1 */ /* 0x1202BE8B: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202BE97; /* 0x1202BE8E: je 0x1202be97 */
L_1202BE90:
    /* cmp ebx, 2 */ /* 0x1202BE90: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202BE97; /* 0x1202BE93: je 0x1202be97 */
L_1202BE95:
    esi = ecx; /* 0x1202BE95: mov esi, ecx */
L_1202BE97:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202BE97: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202BE9A: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202BEA0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202BEA2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202BEA9; /* 0x1202BEA5: jp 0x1202bea9 */
L_1202BEA7:
    esi = ecx; /* 0x1202BEA7: mov esi, ecx */
L_1202BEA9:
    /* test esi, esi */ /* 0x1202BEA9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202BF0C; /* 0x1202BEAB: js 0x1202bf0c */
L_1202BEAD:
    PUSH32(esp, edi); /* 0x1202BEAD: push edi */
    PUSH32(esp, 0x120014BCu); /* 0x1202BEAE: push 0x120014bc */
    PUSH32(esp, 0x60u); /* 0x1202BEB3: push 0x60 */
    RECOMP_CALL(sub_12018970); /* 0x1202BEB5: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202BEBA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202BEBB: pop ecx */
    /* test eax, eax */ /* 0x1202BEBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BECB; /* 0x1202BEBE: je 0x1202becb */
L_1202BEC0:
    ecx = eax; /* 0x1202BEC0: mov ecx, eax */
    RECOMP_CALL(sub_1202B69B); /* 0x1202BEC2: call 0x1202b69b */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202BEC7: mov edi, eax */
    goto L_1202BECD; /* 0x1202BEC9: jmp 0x1202becd */
L_1202BECB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202BECB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202BECD:
    /* test edi, edi */ /* 0x1202BECD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202BED8; /* 0x1202BECF: jne 0x1202bed8 */
L_1202BED1:
    esi = 0x8007000Eu; /* 0x1202BED1: mov esi, 0x8007000e */
    goto L_1202BF0B; /* 0x1202BED6: jmp 0x1202bf0b */
L_1202BED8:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1202BED8: push dword ptr [ebp + 0x20] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202BEDB: fld qword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1202BEDE: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x1202BEE1: push ecx */
    PUSH32(esp, ecx); /* 0x1202BEE2: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1202BEE3: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x1202BEE6: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202BEE7: push dword ptr [ebp + 0x18] */
    ecx = edi; /* 0x1202BEEA: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202BEEC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202A4CC); /* 0x1202BEEF: call 0x1202a4cc */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202BEF4: mov esi, eax */
    /* test esi, esi */ /* 0x1202BEF6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202BF01; /* 0x1202BEF8: js 0x1202bf01 */
L_1202BEFA:
    eax = MEM32(ebp + 0x24); /* 0x1202BEFA: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax) = edi; /* 0x1202BEFD: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202BEFF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202BF01:
    /* test edi, edi */ /* 0x1202BF01: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BF0B; /* 0x1202BF03: je 0x1202bf0b */
L_1202BF05:
    eax = MEM32(edi); /* 0x1202BF05: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1202BF07: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202BF08: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202BF0B:
    edi = POP32_VAL(esp); /* 0x1202BF0B: pop edi */
L_1202BF0C:
    eax = esi; /* 0x1202BF0C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202BF0E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202BF0F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1202BF10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1202BF11: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1202BF19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202BF19u);

L_1202BF19:
    edi = edi; /* 0x1202BF19: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202BF1B: push ebp */
    ebp = esp; /* 0x1202BF1C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202BF1E: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202BF1F: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1202BF22: mov esi, ecx */
    RECOMP_CALL(sub_120BD2ED); /* 0x1202BF24: call 0x120bd2ed */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1202BF29: mov edx, dword ptr [esi] */
    goto L_1202BFED; /* 0x1202BF2B: jmp 0x1202bfed */
L_1202BF30:
    SET_LO8(ecx, MEM8(edx + 0x7)); /* 0x1202BF30: mov cl, byte ptr [edx + 7] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1202BF33: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202BF46; /* 0x1202BF35: je 0x1202bf46 */
L_1202BF37:
    SET_LO8(eax, MEM8(edx + 0x6)); /* 0x1202BF37: mov al, byte ptr [edx + 6] */
    /* cmp LO8(eax), 5 */ /* 0x1202BF3A: cmp al, 5 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202BF46; /* 0x1202BF3C: je 0x1202bf46 */
L_1202BF3E:
    /* cmp LO8(eax), 0xAu */ /* 0x1202BF3E: cmp al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BF40: jne 0x1202bfea */
L_1202BF46:
    eax = (uint32_t)MEM8(edx + 0x6); /* 0x1202BF46: movzx eax, byte ptr [edx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1202BF4A: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1202BFDE; /* 0x1202BF4D: je 0x1202bfde */
L_1202BF53:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202BF53: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1202BFD0; /* 0x1202BF54: je 0x1202bfd0 */
L_1202BF56:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202BF56: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1202BFBD; /* 0x1202BF57: je 0x1202bfbd */
L_1202BF59:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202BF59: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1202BFAF; /* 0x1202BF5A: je 0x1202bfaf */
L_1202BF5C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202BF5C: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1202BF5D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1202BF98; /* 0x1202BF5E: je 0x1202bf98 */
L_1202BF60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x1202BF60: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BF63: jne 0x1202bfea */
L_1202BF69:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1202BF69: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202BF80; /* 0x1202BF6B: jne 0x1202bf80 */
L_1202BF6D:
    SET_LO8(eax, MEM8(edx + 0x4)); /* 0x1202BF6D: mov al, byte ptr [edx + 4] */
    /* cmp LO8(eax), 3 */ /* 0x1202BF70: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202BF78; /* 0x1202BF72: je 0x1202bf78 */
L_1202BF74:
    /* cmp LO8(eax), 4 */ /* 0x1202BF74: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BF76: jne 0x1202bfea */
L_1202BF78:
    MEM32(esi + 0x98) = edx; /* 0x1202BF78: mov dword ptr [esi + 0x98], edx */
    goto L_1202BFEA; /* 0x1202BF7E: jmp 0x1202bfea */
L_1202BF80:
    /* cmp LO8(ecx), 1 */ /* 0x1202BF80: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BF83: jne 0x1202bfea */
L_1202BF85:
    SET_LO8(eax, MEM8(edx + 0x4)); /* 0x1202BF85: mov al, byte ptr [edx + 4] */
    /* cmp LO8(eax), 3 */ /* 0x1202BF88: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202BF90; /* 0x1202BF8A: je 0x1202bf90 */
L_1202BF8C:
    /* cmp LO8(eax), 4 */ /* 0x1202BF8C: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BF8E: jne 0x1202bfea */
L_1202BF90:
    MEM32(esi + 0x9C) = edx; /* 0x1202BF90: mov dword ptr [esi + 0x9c], edx */
    goto L_1202BFEA; /* 0x1202BF96: jmp 0x1202bfea */
L_1202BF98:
    /* cmp MEM8(edx + 0x4), 3 */ /* 0x1202BF98: cmp byte ptr [edx + 4], 3 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BF9C: ja 0x1202bfea */
L_1202BF9E:
    /* cmp LO8(ecx), 8 */ /* 0x1202BF9E: cmp cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BFA1: jae 0x1202bfea */
L_1202BFA3:
    eax = (uint32_t)LO8(ecx); /* 0x1202BFA3: movzx eax, cl */
    MEM32(esi + eax * 4 + 0xA0) = edx; /* 0x1202BFA6: mov dword ptr [esi + eax*4 + 0xa0], edx */
    goto L_1202BFEA; /* 0x1202BFAD: jmp 0x1202bfea */
L_1202BFAF:
    /* cmp MEM8(edx + 0x4), 2 */ /* 0x1202BFAF: cmp byte ptr [edx + 4], 2 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BFB3: jne 0x1202bfea */
L_1202BFB5:
    MEM32(esi + 0x94) = edx; /* 0x1202BFB5: mov dword ptr [esi + 0x94], edx */
    goto L_1202BFEA; /* 0x1202BFBB: jmp 0x1202bfea */
L_1202BFBD:
    SET_LO8(eax, MEM8(edx + 0x4)); /* 0x1202BFBD: mov al, byte ptr [edx + 4] */
    /* cmp LO8(eax), 5 */ /* 0x1202BFC0: cmp al, 5 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202BFC8; /* 0x1202BFC2: je 0x1202bfc8 */
L_1202BFC4:
    /* cmp LO8(eax), 4 */ /* 0x1202BFC4: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BFC6: jne 0x1202bfea */
L_1202BFC8:
    MEM32(esi + 0x90) = edx; /* 0x1202BFC8: mov dword ptr [esi + 0x90], edx */
    goto L_1202BFEA; /* 0x1202BFCE: jmp 0x1202bfea */
L_1202BFD0:
    /* cmp MEM8(edx + 0x4), 3 */ /* 0x1202BFD0: cmp byte ptr [edx + 4], 3 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BFD4: ja 0x1202bfea */
L_1202BFD6:
    MEM32(esi + 0x8C) = edx; /* 0x1202BFD6: mov dword ptr [esi + 0x8c], edx */
    goto L_1202BFEA; /* 0x1202BFDC: jmp 0x1202bfea */
L_1202BFDE:
    /* cmp MEM8(edx + 0x4), 2 */ /* 0x1202BFDE: cmp byte ptr [edx + 4], 2 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BFEA; /* 0x1202BFE2: jne 0x1202bfea */
L_1202BFE4:
    MEM32(esi + 0x88) = edx; /* 0x1202BFE4: mov dword ptr [esi + 0x88], edx */
L_1202BFEA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1202BFEA: add edx, 8 */
    _flag_k = FK_ADD;
L_1202BFED:
    /* cmp MEM16(edx), 0xFFu */ /* 0x1202BFED: cmp word ptr [edx], 0xff */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202BF30; /* 0x1202BFF2: jne 0x1202bf30 */
L_1202BFF8:
    PUSH32(esp, 0); /* 0x1202BFF8: push 0 */
    PUSH32(esp, MEM32(esi)); /* 0x1202BFFA: push dword ptr [esi] */
    RECOMP_CALL(sub_1204B072); /* 0x1202BFFC: call 0x1204b072 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC0) = eax; /* 0x1202C001: mov dword ptr [esi + 0xc0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C007: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1202C009: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202C00A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1202C00B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1202C013(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C013u);

L_1202C013:
    edi = edi; /* 0x1202C013: mov edi, edi */
    PUSH32(esp, esi); /* 0x1202C015: push esi */
    esi = ecx; /* 0x1202C016: mov esi, ecx */
    ecx = MEM32(esi); /* 0x1202C018: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1202C01A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C027; /* 0x1202C01C: je 0x1202c027 */
L_1202C01E:
    eax = MEM32(ecx); /* 0x1202C01E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C020: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C021: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1202C024: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202C027:
    esi = MEM32(esi + 0x4); /* 0x1202C027: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x1202C02A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C03C; /* 0x1202C02C: je 0x1202c03c */
L_1202C02E:
    ecx = esi; /* 0x1202C02E: mov ecx, esi */
    RECOMP_CALL(sub_1202C013); /* 0x1202C030: call 0x1202c013 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202C035: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202C036: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C03B: pop ecx */
L_1202C03C:
    esi = POP32_VAL(esp); /* 0x1202C03C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1202C03D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1202C043(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C043u);

L_1202C043:
    edi = edi; /* 0x1202C043: mov edi, edi */
    PUSH32(esp, esi); /* 0x1202C045: push esi */
    PUSH32(esp, edi); /* 0x1202C046: push edi */
    esi = ecx; /* 0x1202C047: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202C049: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x1202C04B: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C059; /* 0x1202C04D: je 0x1202c059 */
L_1202C04F:
    PUSH32(esp, MEM32(esi)); /* 0x1202C04F: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF388); /* 0x1202C051: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C056: pop ecx */
    MEM32(esi) = edi; /* 0x1202C057: mov dword ptr [esi], edi */
L_1202C059:
    /* cmp MEM32(esi + 0x10), edi */ /* 0x1202C059: cmp dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C06A; /* 0x1202C05C: je 0x1202c06a */
L_1202C05E:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1202C05E: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_121BF388); /* 0x1202C061: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C066: pop ecx */
    MEM32(esi + 0x10) = edi; /* 0x1202C067: mov dword ptr [esi + 0x10], edi */
L_1202C06A:
    /* cmp MEM32(esi + 0x14), edi */ /* 0x1202C06A: cmp dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C07B; /* 0x1202C06D: je 0x1202c07b */
L_1202C06F:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1202C06F: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_121BF388); /* 0x1202C072: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C077: pop ecx */
    MEM32(esi + 0x14) = edi; /* 0x1202C078: mov dword ptr [esi + 0x14], edi */
L_1202C07B:
    /* cmp MEM32(esi + 0x18), edi */ /* 0x1202C07B: cmp dword ptr [esi + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C08C; /* 0x1202C07E: je 0x1202c08c */
L_1202C080:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1202C080: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_121BF388); /* 0x1202C083: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C088: pop ecx */
    MEM32(esi + 0x18) = edi; /* 0x1202C089: mov dword ptr [esi + 0x18], edi */
L_1202C08C:
    esi = MEM32(esi + 0x1C); /* 0x1202C08C: mov esi, dword ptr [esi + 0x1c] */
    /* test esi, esi */ /* 0x1202C08F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C0A1; /* 0x1202C091: je 0x1202c0a1 */
L_1202C093:
    ecx = esi; /* 0x1202C093: mov ecx, esi */
    RECOMP_CALL(sub_1202C043); /* 0x1202C095: call 0x1202c043 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202C09A: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202C09B: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C0A0: pop ecx */
L_1202C0A1:
    edi = POP32_VAL(esp); /* 0x1202C0A1: pop edi */
    esi = POP32_VAL(esp); /* 0x1202C0A2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1202C0A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1202C0A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C0A9u);

L_1202C0A9:
    edi = edi; /* 0x1202C0A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C0AB: push ebp */
    ebp = esp; /* 0x1202C0AC: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202C0AE: fld dword ptr [ebp + 8] */
    _st[0] = fabs(_st[0]); /* 0x1202C0B1: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1202C0B3: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202C0B6: fld dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1202C0B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1202C0BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1202C0C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C0C0u);

L_1202C0C0:
    edi = edi; /* 0x1202C0C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C0C2: push ebp */
    ebp = esp; /* 0x1202C0C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x450u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x450u; /* 0x1202C0C5: sub esp, 0x450 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202C0CB: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202C0D0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202C0D2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1202C0D5: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202C0D8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202C0DA: push ebx */
    PUSH32(esp, esi); /* 0x1202C0DB: push esi */
    PUSH32(esp, edi); /* 0x1202C0DC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1202C0DD: mov edi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x434); /* 0x1202C0E0: lea ecx, [ebp - 0x434] */
    PUSH32(esp, ecx); /* 0x1202C0E6: push ecx */
    MEM32(ebp + (-0x408)) = edi; /* 0x1202C0E7: mov dword ptr [ebp - 0x408], edi */
    edi = MEM32(ebp + 0xC); /* 0x1202C0ED: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x1202C0F0: push edx */
    MEM32(ebp + (-0x44C)) = eax; /* 0x1202C0F1: mov dword ptr [ebp - 0x44c], eax */
    eax = MEM32(edi); /* 0x1202C0F7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1202C0F9: push edi */
    MEM32(ebp + (-0x414)) = edx; /* 0x1202C0FA: mov dword ptr [ebp - 0x414], edx */
    ebx = edx; /* 0x1202C100: mov ebx, edx */
    MEM32(ebp + (-0x434)) = edx; /* 0x1202C102: mov dword ptr [ebp - 0x434], edx */
    MEM32(ebp + (-0x42C)) = edx; /* 0x1202C108: mov dword ptr [ebp - 0x42c], edx */
    MEM32(ebp + (-0x430)) = edx; /* 0x1202C10E: mov dword ptr [ebp - 0x430], edx */
    MEM32(ebp + (-0x41C)) = edx; /* 0x1202C114: mov dword ptr [ebp - 0x41c], edx */
    MEM32(ebp + (-0x40C)) = edx; /* 0x1202C11A: mov dword ptr [ebp - 0x40c], edx */
    MEM32(ebp + (-0x424)) = edx; /* 0x1202C120: mov dword ptr [ebp - 0x424], edx */
    MEM32(ebp + (-0x410)) = edx; /* 0x1202C126: mov dword ptr [ebp - 0x410], edx */
    MEM32(ebp + (-0x440)) = edx; /* 0x1202C12C: mov dword ptr [ebp - 0x440], edx */
    MEM32(ebp + (-0x43C)) = edx; /* 0x1202C132: mov dword ptr [ebp - 0x43c], edx */
    MEM32(ebp + (-0x438)) = edx; /* 0x1202C138: mov dword ptr [ebp - 0x438], edx */
    MEM32(ebp + (-0x428)) = edx; /* 0x1202C13E: mov dword ptr [ebp - 0x428], edx */
    MEM32(ebp + (-0x418)) = edx; /* 0x1202C144: mov dword ptr [ebp - 0x418], edx */
    MEM32(ebp + (-0x420)) = edx; /* 0x1202C14A: mov dword ptr [ebp - 0x420], edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202C150: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C153: mov esi, eax */
    /* test esi, esi */ /* 0x1202C155: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C205; /* 0x1202C157: js 0x1202c205 */
L_1202C15D:
    eax = MEM32(ebp + (-0x434)); /* 0x1202C15D: mov eax, dword ptr [ebp - 0x434] */
    /* test eax, eax */ /* 0x1202C163: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C1A2; /* 0x1202C165: je 0x1202c1a2 */
L_1202C167:
    ebx = ebp + (-0x404); /* 0x1202C167: lea ebx, [ebp - 0x404] */
    /* cmp eax, 0x400u */ /* 0x1202C16D: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202C18E; /* 0x1202C172: jbe 0x1202c18e */
L_1202C174:
    PUSH32(esp, 0x120014BCu); /* 0x1202C174: push 0x120014bc */
    PUSH32(esp, eax); /* 0x1202C179: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1202C17A: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202C17F: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202C181: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202C182: pop ecx */
    /* test ebx, ebx */ /* 0x1202C183: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C18E; /* 0x1202C185: jne 0x1202c18e */
L_1202C187:
    esi = 0x8007000Eu; /* 0x1202C187: mov esi, 0x8007000e */
    goto L_1202C205; /* 0x1202C18C: jmp 0x1202c205 */
L_1202C18E:
    eax = MEM32(edi); /* 0x1202C18E: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x434); /* 0x1202C190: lea ecx, [ebp - 0x434] */
    PUSH32(esp, ecx); /* 0x1202C196: push ecx */
    PUSH32(esp, ebx); /* 0x1202C197: push ebx */
    PUSH32(esp, edi); /* 0x1202C198: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202C199: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C19C: mov esi, eax */
    /* test esi, esi */ /* 0x1202C19E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C205; /* 0x1202C1A0: js 0x1202c205 */
L_1202C1A2:
    eax = ebp + (-0x420); /* 0x1202C1A2: lea eax, [ebp - 0x420] */
    PUSH32(esp, eax); /* 0x1202C1A8: push eax */
    eax = ebp + (-0x418); /* 0x1202C1A9: lea eax, [ebp - 0x418] */
    PUSH32(esp, eax); /* 0x1202C1AF: push eax */
    eax = ebp + (-0x438); /* 0x1202C1B0: lea eax, [ebp - 0x438] */
    PUSH32(esp, eax); /* 0x1202C1B6: push eax */
    eax = ebp + (-0x428); /* 0x1202C1B7: lea eax, [ebp - 0x428] */
    PUSH32(esp, eax); /* 0x1202C1BD: push eax */
    eax = ebp + (-0x40C); /* 0x1202C1BE: lea eax, [ebp - 0x40c] */
    PUSH32(esp, eax); /* 0x1202C1C4: push eax */
    eax = ebp + (-0x410); /* 0x1202C1C5: lea eax, [ebp - 0x410] */
    PUSH32(esp, eax); /* 0x1202C1CB: push eax */
    eax = ebp + (-0x450); /* 0x1202C1CC: lea eax, [ebp - 0x450] */
    PUSH32(esp, eax); /* 0x1202C1D2: push eax */
    eax = ebp + (-0x430); /* 0x1202C1D3: lea eax, [ebp - 0x430] */
    PUSH32(esp, eax); /* 0x1202C1D9: push eax */
    eax = ebp + (-0x42C); /* 0x1202C1DA: lea eax, [ebp - 0x42c] */
    PUSH32(esp, eax); /* 0x1202C1E0: push eax */
    eax = ebp + (-0x41C); /* 0x1202C1E1: lea eax, [ebp - 0x41c] */
    PUSH32(esp, eax); /* 0x1202C1E7: push eax */
    eax = MEM32(ebp + (-0x408)); /* 0x1202C1E8: mov eax, dword ptr [ebp - 0x408] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1202C1EE: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x1202C1F1: push dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1202C1F3: push edi */
    RECOMP_CALL(sub_1207D993); /* 0x1202C1F4: call 0x1207d993 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C1F9: mov esi, eax */
    /* cmp esi, 0x88760B5Au */ /* 0x1202C1FB: cmp esi, 0x88760b5a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x88760B5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202C210; /* 0x1202C201: jne 0x1202c210 */
L_1202C203:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202C203: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202C205:
    ebx = MEM32(ebp + (-0x408)); /* 0x1202C205: mov ebx, dword ptr [ebp - 0x408] */
    goto L_1202C3D1; /* 0x1202C20B: jmp 0x1202c3d1 */
L_1202C210:
    /* test esi, esi */ /* 0x1202C210: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C205; /* 0x1202C212: js 0x1202c205 */
L_1202C214:
    eax = MEM32(ebp + (-0x410)); /* 0x1202C214: mov eax, dword ptr [ebp - 0x410] */
    ecx = MEM32(eax); /* 0x1202C21A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202C21C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1202C21D: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C220: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C237; /* 0x1202C222: jne 0x1202c237 */
L_1202C224:
    eax = MEM32(ebp + (-0x410)); /* 0x1202C224: mov eax, dword ptr [ebp - 0x410] */
    ecx = MEM32(eax); /* 0x1202C22A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202C22C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1202C22D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x410))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x410)) = MEM32(ebp + (-0x410)) & 0; /* 0x1202C230: and dword ptr [ebp - 0x410], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202C237:
    /* cmp MEM32(ebp + (-0x438)), 0 */ /* 0x1202C237: cmp dword ptr [ebp - 0x438], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x438))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202C2A0; /* 0x1202C23E: jbe 0x1202c2a0 */
L_1202C240:
    /* cmp MEM32(ebp + (-0x428)), 0 */ /* 0x1202C240: cmp dword ptr [ebp - 0x428], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x428))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C2A0; /* 0x1202C247: je 0x1202c2a0 */
L_1202C249:
    eax = ebp + (-0x424); /* 0x1202C249: lea eax, [ebp - 0x424] */
    PUSH32(esp, eax); /* 0x1202C24F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x438))); /* 0x1202C250: push dword ptr [ebp - 0x438] */
    eax = MEM32(ebp + (-0x41C)); /* 0x1202C256: mov eax, dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x428))); /* 0x1202C25C: push dword ptr [ebp - 0x428] */
    ecx = MEM32(eax); /* 0x1202C262: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202C264: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202C265: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x408)); /* 0x1202C268: mov edi, dword ptr [ebp - 0x408] */
    PUSH32(esp, eax); /* 0x1202C26E: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1202C26F: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + (-0x40C))); /* 0x1202C271: push dword ptr [ebp - 0x40c] */
    RECOMP_CALL(sub_120663FA); /* 0x1202C277: call 0x120663fa */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C27C: mov esi, eax */
    /* test esi, esi */ /* 0x1202C27E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C3CF; /* 0x1202C280: js 0x1202c3cf */
L_1202C286:
    ecx = MEM32(ebp + (-0x40C)); /* 0x1202C286: mov ecx, dword ptr [ebp - 0x40c] */
    /* test ecx, ecx */ /* 0x1202C28C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C2AC; /* 0x1202C28E: je 0x1202c2ac */
L_1202C290:
    eax = MEM32(ecx); /* 0x1202C290: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C292: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C293: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202C296: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40C)) = ecx; /* 0x1202C298: mov dword ptr [ebp - 0x40c], ecx */
    goto L_1202C2AC; /* 0x1202C29E: jmp 0x1202c2ac */
L_1202C2A0:
    ecx = MEM32(ebp + (-0x40C)); /* 0x1202C2A0: mov ecx, dword ptr [ebp - 0x40c] */
    edi = MEM32(ebp + (-0x408)); /* 0x1202C2A6: mov edi, dword ptr [ebp - 0x408] */
L_1202C2AC:
    edx = MEM32(ebp + (-0x42C)); /* 0x1202C2AC: mov edx, dword ptr [ebp - 0x42c] */
    /* test edx, edx */ /* 0x1202C2B2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C2C8; /* 0x1202C2B4: je 0x1202c2c8 */
L_1202C2B6:
    eax = MEM32(edx); /* 0x1202C2B6: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1202C2B8: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1202C2B9: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x40C)); /* 0x1202C2BC: mov ecx, dword ptr [ebp - 0x40c] */
    MEM32(ebp + (-0x440)) = eax; /* 0x1202C2C2: mov dword ptr [ebp - 0x440], eax */
L_1202C2C8:
    edx = MEM32(ebp + (-0x430)); /* 0x1202C2C8: mov edx, dword ptr [ebp - 0x430] */
    /* test edx, edx */ /* 0x1202C2CE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C2E4; /* 0x1202C2D0: je 0x1202c2e4 */
L_1202C2D2:
    ecx = MEM32(edx); /* 0x1202C2D2: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1202C2D4: push edx */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202C2D5: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x40C)); /* 0x1202C2D8: mov ecx, dword ptr [ebp - 0x40c] */
    MEM32(ebp + (-0x43C)) = eax; /* 0x1202C2DE: mov dword ptr [ebp - 0x43c], eax */
L_1202C2E4:
    edx = MEM32(ebp + (-0x424)); /* 0x1202C2E4: mov edx, dword ptr [ebp - 0x424] */
    /* test edx, edx */ /* 0x1202C2EA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C300; /* 0x1202C2EC: je 0x1202c300 */
L_1202C2EE:
    MEM32(ebp + (-0x444)) = edx; /* 0x1202C2EE: mov dword ptr [ebp - 0x444], edx */
    MEM32(ebp + (-0x448)) = 2; /* 0x1202C2F4: mov dword ptr [ebp - 0x448], 2 */
    goto L_1202C310; /* 0x1202C2FE: jmp 0x1202c310 */
L_1202C300:
    MEM32(ebp + (-0x444)) = ecx; /* 0x1202C300: mov dword ptr [ebp - 0x444], ecx */
    MEM32(ebp + (-0x448)) = 1; /* 0x1202C306: mov dword ptr [ebp - 0x448], 1 */
L_1202C310:
    eax = MEM32(edi + 0xC); /* 0x1202C310: mov eax, dword ptr [edi + 0xc] */
    esi = MEM32(eax); /* 0x1202C313: mov esi, dword ptr [eax] */
    eax = ebp + (-0x414); /* 0x1202C315: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1202C31B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x410))); /* 0x1202C31C: push dword ptr [ebp - 0x410] */
    eax = MEM32(ebp + (-0x41C)); /* 0x1202C322: mov eax, dword ptr [ebp - 0x41c] */
    ecx = MEM32(eax); /* 0x1202C328: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202C32A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202C32B: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202C32E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x450))); /* 0x1202C32F: push dword ptr [ebp - 0x450] */
    eax = ebp + (-0x448); /* 0x1202C335: lea eax, [ebp - 0x448] */
    PUSH32(esp, MEM32(ebp + (-0x43C))); /* 0x1202C33B: push dword ptr [ebp - 0x43c] */
    PUSH32(esp, MEM32(ebp + (-0x440))); /* 0x1202C341: push dword ptr [ebp - 0x440] */
    PUSH32(esp, eax); /* 0x1202C347: push eax */
    PUSH32(esp, ebx); /* 0x1202C348: push ebx */
    ebx = MEM32(ebp + (-0x408)); /* 0x1202C349: mov ebx, dword ptr [ebp - 0x408] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1202C34F: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x4)); /* 0x1202C352: call dword ptr [esi + 4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C355: mov esi, eax */
    /* test esi, esi */ /* 0x1202C357: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C3D1; /* 0x1202C359: js 0x1202c3d1 */
L_1202C35B:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x1202C35B: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C398; /* 0x1202C35F: je 0x1202c398 */
L_1202C361:
    eax = MEM32(ebp + (-0x420)); /* 0x1202C361: mov eax, dword ptr [ebp - 0x420] */
    /* test eax, eax */ /* 0x1202C367: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C398; /* 0x1202C369: je 0x1202c398 */
L_1202C36B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202C36B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1202C36D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C398; /* 0x1202C36F: je 0x1202c398 */
L_1202C371:
    eax = MEM32(ebp + (-0x418)); /* 0x1202C371: mov eax, dword ptr [ebp - 0x418] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x1202C377: push dword ptr [eax + edi*4] */
    ecx = MEM32(ebx + 0x10); /* 0x1202C37A: mov ecx, dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x414))); /* 0x1202C37D: push dword ptr [ebp - 0x414] */
    edx = MEM32(ecx); /* 0x1202C383: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C385: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1202C386: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C389: mov esi, eax */
    /* test esi, esi */ /* 0x1202C38B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C3D1; /* 0x1202C38D: js 0x1202c3d1 */
L_1202C38F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202C38F: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x420)) */ /* 0x1202C390: cmp edi, dword ptr [ebp - 0x420] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x420)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202C371; /* 0x1202C396: jb 0x1202c371 */
L_1202C398:
    edx = MEM32(ebp + (-0x44C)); /* 0x1202C398: mov edx, dword ptr [ebp - 0x44c] */
    eax = MEM32(edx + 0x44); /* 0x1202C39E: mov eax, dword ptr [edx + 0x44] */
    /* test eax, eax */ /* 0x1202C3A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C3BD; /* 0x1202C3A3: je 0x1202c3bd */
L_1202C3A5:
    ecx = eax; /* 0x1202C3A5: mov ecx, eax */
    eax = MEM32(eax + 0x20); /* 0x1202C3A7: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x1202C3AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C3A5; /* 0x1202C3AC: jne 0x1202c3a5 */
L_1202C3AE:
    /* test ecx, ecx */ /* 0x1202C3AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C3BD; /* 0x1202C3B0: je 0x1202c3bd */
L_1202C3B2:
    eax = MEM32(ebp + (-0x414)); /* 0x1202C3B2: mov eax, dword ptr [ebp - 0x414] */
    MEM32(ecx + 0x20) = eax; /* 0x1202C3B8: mov dword ptr [ecx + 0x20], eax */
    goto L_1202C3C6; /* 0x1202C3BB: jmp 0x1202c3c6 */
L_1202C3BD:
    eax = MEM32(ebp + (-0x414)); /* 0x1202C3BD: mov eax, dword ptr [ebp - 0x414] */
    MEM32(edx + 0x44) = eax; /* 0x1202C3C3: mov dword ptr [edx + 0x44], eax */
L_1202C3C6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x414))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x414)) = MEM32(ebp + (-0x414)) & 0; /* 0x1202C3C6: and dword ptr [ebp - 0x414], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202C3D1; /* 0x1202C3CD: jmp 0x1202c3d1 */
L_1202C3CF:
    ebx = edi; /* 0x1202C3CF: mov ebx, edi */
L_1202C3D1:
    eax = MEM32(ebp + (-0x418)); /* 0x1202C3D1: mov eax, dword ptr [ebp - 0x418] */
    /* test eax, eax */ /* 0x1202C3D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C404; /* 0x1202C3D9: je 0x1202c404 */
L_1202C3DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202C3DB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x420)), edi */ /* 0x1202C3DD: cmp dword ptr [ebp - 0x420], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x420))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202C3FD; /* 0x1202C3E3: jbe 0x1202c3fd */
L_1202C3E5:
    eax = MEM32(eax + edi * 4); /* 0x1202C3E5: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(eax); /* 0x1202C3E8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202C3EA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1202C3EB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x418)); /* 0x1202C3EE: mov eax, dword ptr [ebp - 0x418] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202C3F4: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x420)) */ /* 0x1202C3F5: cmp edi, dword ptr [ebp - 0x420] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x420)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202C3E5; /* 0x1202C3FB: jb 0x1202c3e5 */
L_1202C3FD:
    PUSH32(esp, eax); /* 0x1202C3FD: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202C3FE: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C403: pop ecx */
L_1202C404:
    /* cmp MEM32(ebp + (-0x414)), 0 */ /* 0x1202C404: cmp dword ptr [ebp - 0x414], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x414))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C41C; /* 0x1202C40B: je 0x1202c41c */
L_1202C40D:
    eax = MEM32(ebx + 0xC); /* 0x1202C40D: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x414))); /* 0x1202C410: push dword ptr [ebp - 0x414] */
    ecx = MEM32(eax); /* 0x1202C416: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202C418: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202C419: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
L_1202C41C:
    ecx = MEM32(ebp + (-0x42C)); /* 0x1202C41C: mov ecx, dword ptr [ebp - 0x42c] */
    /* test ecx, ecx */ /* 0x1202C422: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C436; /* 0x1202C424: je 0x1202c436 */
L_1202C426:
    eax = MEM32(ecx); /* 0x1202C426: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C428: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C429: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202C42C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x42C)) = ebx; /* 0x1202C42E: mov dword ptr [ebp - 0x42c], ebx */
    goto L_1202C438; /* 0x1202C434: jmp 0x1202c438 */
L_1202C436:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202C436: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202C438:
    ecx = MEM32(ebp + (-0x430)); /* 0x1202C438: mov ecx, dword ptr [ebp - 0x430] */
    /* test ecx, ecx */ /* 0x1202C43E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C44E; /* 0x1202C440: je 0x1202c44e */
L_1202C442:
    eax = MEM32(ecx); /* 0x1202C442: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C444: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C445: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x430)) = ebx; /* 0x1202C448: mov dword ptr [ebp - 0x430], ebx */
L_1202C44E:
    ecx = MEM32(ebp + (-0x41C)); /* 0x1202C44E: mov ecx, dword ptr [ebp - 0x41c] */
    /* test ecx, ecx */ /* 0x1202C454: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C464; /* 0x1202C456: je 0x1202c464 */
L_1202C458:
    eax = MEM32(ecx); /* 0x1202C458: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C45A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C45B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x41C)) = ebx; /* 0x1202C45E: mov dword ptr [ebp - 0x41c], ebx */
L_1202C464:
    ecx = MEM32(ebp + (-0x40C)); /* 0x1202C464: mov ecx, dword ptr [ebp - 0x40c] */
    /* test ecx, ecx */ /* 0x1202C46A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C47A; /* 0x1202C46C: je 0x1202c47a */
L_1202C46E:
    eax = MEM32(ecx); /* 0x1202C46E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C470: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C471: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x40C)) = ebx; /* 0x1202C474: mov dword ptr [ebp - 0x40c], ebx */
L_1202C47A:
    ecx = MEM32(ebp + (-0x424)); /* 0x1202C47A: mov ecx, dword ptr [ebp - 0x424] */
    /* test ecx, ecx */ /* 0x1202C480: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C490; /* 0x1202C482: je 0x1202c490 */
L_1202C484:
    eax = MEM32(ecx); /* 0x1202C484: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C486: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C487: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x424)) = ebx; /* 0x1202C48A: mov dword ptr [ebp - 0x424], ebx */
L_1202C490:
    ecx = MEM32(ebp + (-0x410)); /* 0x1202C490: mov ecx, dword ptr [ebp - 0x410] */
    /* test ecx, ecx */ /* 0x1202C496: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C4A6; /* 0x1202C498: je 0x1202c4a6 */
L_1202C49A:
    eax = MEM32(ecx); /* 0x1202C49A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C49C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C49D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x410)) = ebx; /* 0x1202C4A0: mov dword ptr [ebp - 0x410], ebx */
L_1202C4A6:
    PUSH32(esp, MEM32(ebp + (-0x428))); /* 0x1202C4A6: push dword ptr [ebp - 0x428] */
    RECOMP_CALL(sub_121BF388); /* 0x1202C4AC: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C4B1: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1202C4B2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202C4B5: pop edi */
    eax = esi; /* 0x1202C4B6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202C4B8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202C4B9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202C4BB: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202C4BC: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202C4C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202C4C2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202C4CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C4CAu);

L_1202C4CA:
    edi = edi; /* 0x1202C4CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C4CC: push ebp */
    ebp = esp; /* 0x1202C4CD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202C4CF: push ecx */
    PUSH32(esp, esi); /* 0x1202C4D0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1202C4D1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1202C4D4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202C4D5: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202C4D8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x4); /* 0x1202C4DA: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1202C4DD: push ecx */
    PUSH32(esp, edx); /* 0x1202C4DE: push edx */
    MEM32(edi) = edx; /* 0x1202C4DF: mov dword ptr [edi], edx */
    eax = MEM32(esi); /* 0x1202C4E1: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1202C4E3: push esi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1202C4E4: mov dword ptr [ebp - 4], edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202C4E7: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C4EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C517; /* 0x1202C4EC: js 0x1202c517 */
L_1202C4EE:
    PUSH32(esp, 0x120014BCu); /* 0x1202C4EE: push 0x120014bc */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202C4F3: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_12018970); /* 0x1202C4F6: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C4FB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202C4FC: pop ecx */
    ecx = eax; /* 0x1202C4FD: mov ecx, eax */
    MEM32(edi) = ecx; /* 0x1202C4FF: mov dword ptr [edi], ecx */
    /* test ecx, ecx */ /* 0x1202C501: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C50C; /* 0x1202C503: jne 0x1202c50c */
L_1202C505:
    eax = 0x8007000Eu; /* 0x1202C505: mov eax, 0x8007000e */
    goto L_1202C517; /* 0x1202C50A: jmp 0x1202c517 */
L_1202C50C:
    eax = MEM32(esi); /* 0x1202C50C: mov eax, dword ptr [esi] */
    edx = ebp + (-0x4); /* 0x1202C50E: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1202C511: push edx */
    PUSH32(esp, ecx); /* 0x1202C512: push ecx */
    PUSH32(esp, esi); /* 0x1202C513: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202C514: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_1202C517:
    edi = POP32_VAL(esp); /* 0x1202C517: pop edi */
    esi = POP32_VAL(esp); /* 0x1202C518: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202C519: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202C51A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202C522(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C522u);

L_1202C522:
    edi = edi; /* 0x1202C522: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C524: push ebp */
    ebp = esp; /* 0x1202C525: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1202C527: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C52A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1202C52C: push esi */
    PUSH32(esp, edi); /* 0x1202C52D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202C52E: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1202C531: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1202C534: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1202C537: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x8); /* 0x1202C53A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1202C53D: push eax */
    PUSH32(esp, edi); /* 0x1202C53E: push edi */
    RECOMP_CALL(sub_1202C4CA); /* 0x1202C53F: call 0x1202c4ca */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C544: mov esi, eax */
    /* test esi, esi */ /* 0x1202C546: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C5BE; /* 0x1202C548: js 0x1202c5be */
L_1202C54A:
    eax = MEM32(edi); /* 0x1202C54A: mov eax, dword ptr [edi] */
    ecx = ebp + 0xC; /* 0x1202C54C: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1202C54F: push ecx */
    ecx = ebp + (-0x10); /* 0x1202C550: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1202C553: push ecx */
    PUSH32(esp, edi); /* 0x1202C554: push edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1202C555: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C558: mov esi, eax */
    /* test esi, esi */ /* 0x1202C55A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C5BE; /* 0x1202C55C: js 0x1202c5be */
L_1202C55E:
    PUSH32(esp, ebx); /* 0x1202C55E: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202C55F: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x1202C562: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1202C565: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1202C566: push dword ptr [ebx] */
    RECOMP_CALL(sub_120192FE); /* 0x1202C568: call 0x120192fe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C56D: mov esi, eax */
    /* test esi, esi */ /* 0x1202C56F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C5BD; /* 0x1202C571: js 0x1202c5bd */
L_1202C573:
    PUSH32(esp, MEM32(ebx)); /* 0x1202C573: push dword ptr [ebx] */
    eax = ebx + 0x10; /* 0x1202C575: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x1202C578: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1202C579: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202C57C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202C57E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202C57F: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202C582: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1202C583: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1202C588: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202C58A: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1202C58D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1202C58E: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1202C591: fld dword ptr [ebx + 4] */
    eax = ebp + (-0xC); /* 0x1202C594: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1202C597: push eax */
    PUSH32(esp, 0); /* 0x1202C598: push 0 */
    PUSH32(esp, 0); /* 0x1202C59A: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202C59C: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1202C59F: push dword ptr [ebx + 8] */
    PUSH32(esp, ecx); /* 0x1202C5A2: push ecx */
    PUSH32(esp, ecx); /* 0x1202C5A3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1202C5A4: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202C5A7: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1202952D); /* 0x1202C5AA: call 0x1202952d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C5AF: mov esi, eax */
    /* test esi, esi */ /* 0x1202C5B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C5BD; /* 0x1202C5B3: js 0x1202c5bd */
L_1202C5B5:
    ecx = MEM32(ebp + 0x10); /* 0x1202C5B5: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0xC)); /* 0x1202C5B8: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ecx) = eax; /* 0x1202C5BB: mov dword ptr [ecx], eax */
L_1202C5BD:
    ebx = POP32_VAL(esp); /* 0x1202C5BD: pop ebx */
L_1202C5BE:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202C5BE: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_121BF388); /* 0x1202C5C1: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C5C6: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1202C5C7: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202C5CA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C5D4; /* 0x1202C5CC: je 0x1202c5d4 */
L_1202C5CE:
    eax = MEM32(ecx); /* 0x1202C5CE: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C5D0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C5D1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202C5D4:
    edi = POP32_VAL(esp); /* 0x1202C5D4: pop edi */
    eax = esi; /* 0x1202C5D5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202C5D7: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202C5D8: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202C5D9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202C5E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C5E1u);

L_1202C5E1:
    edi = edi; /* 0x1202C5E1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C5E3: push ebp */
    ebp = esp; /* 0x1202C5E4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x1202C5E6: sub esp, 0x68 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202C5E9: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202C5EE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202C5F0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1202C5F3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1202C5F6: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202C5F7: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1202C5FA: push esi */
    PUSH32(esp, edi); /* 0x1202C5FB: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1202C5FC: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1202C5FF: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 6); /* 0x1202C602: push 6 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202C604: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202C606: pop ecx */
    MEM32(ebp + (-0x48)) = eax; /* 0x1202C607: mov dword ptr [ebp - 0x48], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C60A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x68); /* 0x1202C60C: lea edi, [ebp - 0x68] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1202C60F: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebx); /* 0x1202C611: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x38); /* 0x1202C613: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1202C616: push ecx */
    PUSH32(esp, edx); /* 0x1202C617: push edx */
    PUSH32(esp, ebx); /* 0x1202C618: push ebx */
    MEM32(ebp + (-0x40)) = edx; /* 0x1202C619: mov dword ptr [ebp - 0x40], edx */
    MEM32(ebp + (-0x20)) = edx; /* 0x1202C61C: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x28)) = edx; /* 0x1202C61F: mov dword ptr [ebp - 0x28], edx */
    MEM32(ebp + (-0x3C)) = edx; /* 0x1202C622: mov dword ptr [ebp - 0x3c], edx */
    MEM32(ebp + (-0x34)) = edx; /* 0x1202C625: mov dword ptr [ebp - 0x34], edx */
    MEM32(ebp + (-0x18)) = edx; /* 0x1202C628: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x30)) = edx; /* 0x1202C62B: mov dword ptr [ebp - 0x30], edx */
    MEM32(ebp + (-0x24)) = edx; /* 0x1202C62E: mov dword ptr [ebp - 0x24], edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202C631: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202C634: mov edi, eax */
    /* test edi, edi */ /* 0x1202C636: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C7D9; /* 0x1202C638: js 0x1202c7d9 */
L_1202C63E:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x1202C63E: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202C67B; /* 0x1202C642: jbe 0x1202c67b */
L_1202C644:
    PUSH32(esp, 0x120014BCu); /* 0x1202C644: push 0x120014bc */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1202C649: push dword ptr [ebp - 0x38] */
    RECOMP_CALL(sub_12018970); /* 0x1202C64C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202C651: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202C653: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202C654: pop ecx */
    MEM32(ebp + (-0x34)) = esi; /* 0x1202C655: mov dword ptr [ebp - 0x34], esi */
    /* test esi, esi */ /* 0x1202C658: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C666; /* 0x1202C65A: jne 0x1202c666 */
L_1202C65C:
    edi = 0x8007000Eu; /* 0x1202C65C: mov edi, 0x8007000e */
    goto L_1202C7D9; /* 0x1202C661: jmp 0x1202c7d9 */
L_1202C666:
    eax = MEM32(ebx); /* 0x1202C666: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x38); /* 0x1202C668: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1202C66B: push ecx */
    PUSH32(esp, esi); /* 0x1202C66C: push esi */
    PUSH32(esp, ebx); /* 0x1202C66D: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202C66E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202C671: mov edi, eax */
    /* test edi, edi */ /* 0x1202C673: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C7D9; /* 0x1202C675: js 0x1202c7d9 */
L_1202C67B:
    eax = MEM32(ebx); /* 0x1202C67B: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x14); /* 0x1202C67D: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1202C680: push ecx */
    PUSH32(esp, ebx); /* 0x1202C681: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1202C682: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202C685: mov edi, eax */
    /* test edi, edi */ /* 0x1202C687: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C7D9; /* 0x1202C689: js 0x1202c7d9 */
L_1202C68F:
    PUSH32(esp, 4); /* 0x1202C68F: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C691: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202C693: pop ecx */
    eax = ebp + (-0x24); /* 0x1202C694: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1202C697: push eax */
    eax = ebp + (-0x30); /* 0x1202C698: lea eax, [ebp - 0x30] */
    edi = 0x12001C58u; /* 0x1202C69B: mov edi, 0x12001c58 */
    esi = ebp + (-0x14); /* 0x1202C6A0: lea esi, [ebp - 0x14] */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202C6A3: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    esi = MEM32(ebp + (-0x1C)); /* 0x1202C6A5: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1202C6A8: push eax */
    eax = ebp + (-0x2C); /* 0x1202C6A9: lea eax, [ebp - 0x2c] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202C6D8; /* 0x1202C6AC: jne 0x1202c6d8 */
L_1202C6AE:
    PUSH32(esp, 1); /* 0x1202C6AE: push 1 */
    PUSH32(esp, eax); /* 0x1202C6B0: push eax */
    eax = ebp + (-0x68); /* 0x1202C6B1: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1202C6B4: push eax */
    eax = ebp + (-0x44); /* 0x1202C6B5: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1202C6B8: push eax */
    eax = ebp + (-0x28); /* 0x1202C6B9: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1202C6BC: push eax */
    eax = ebp + (-0x20); /* 0x1202C6BD: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1202C6C0: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1202C6C1: push dword ptr [esi + 8] */
    PUSH32(esp, 0); /* 0x1202C6C4: push 0 */
    PUSH32(esp, ebx); /* 0x1202C6C6: push ebx */
    RECOMP_CALL(sub_120760A5); /* 0x1202C6C7: call 0x120760a5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202C6CC: mov edi, eax */
    /* test edi, edi */ /* 0x1202C6CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C7D9; /* 0x1202C6D0: js 0x1202c7d9 */
L_1202C6D6:
    goto L_1202C707; /* 0x1202C6D6: jmp 0x1202c707 */
L_1202C6D8:
    PUSH32(esp, 0); /* 0x1202C6D8: push 0 */
    PUSH32(esp, eax); /* 0x1202C6DA: push eax */
    eax = ebp + (-0x68); /* 0x1202C6DB: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1202C6DE: push eax */
    eax = ebp + (-0x44); /* 0x1202C6DF: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1202C6E2: push eax */
    eax = ebp + (-0x28); /* 0x1202C6E3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1202C6E6: push eax */
    eax = ebp + (-0x20); /* 0x1202C6E7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1202C6EA: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1202C6EB: push dword ptr [esi + 8] */
    PUSH32(esp, 0); /* 0x1202C6EE: push 0 */
    PUSH32(esp, ebx); /* 0x1202C6F0: push ebx */
    RECOMP_CALL(sub_120760A5); /* 0x1202C6F1: call 0x120760a5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202C6F6: mov edi, eax */
    /* test edi, edi */ /* 0x1202C6F8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C7D9; /* 0x1202C6FA: js 0x1202c7d9 */
L_1202C700:
    MEM32(ebp + (-0x2C)) = 1; /* 0x1202C700: mov dword ptr [ebp - 0x2c], 1 */
L_1202C707:
    ecx = MEM32(ebp + (-0x20)); /* 0x1202C707: mov ecx, dword ptr [ebp - 0x20] */
    /* test ecx, ecx */ /* 0x1202C70A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C717; /* 0x1202C70C: je 0x1202c717 */
L_1202C70E:
    eax = MEM32(ecx); /* 0x1202C70E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C710: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1202C711: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x40)) = eax; /* 0x1202C714: mov dword ptr [ebp - 0x40], eax */
L_1202C717:
    edx = MEM32(ebp + (-0x28)); /* 0x1202C717: mov edx, dword ptr [ebp - 0x28] */
    /* test edx, edx */ /* 0x1202C71A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C72B; /* 0x1202C71C: je 0x1202c72b */
L_1202C71E:
    ecx = MEM32(edx); /* 0x1202C71E: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1202C720: push edx */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202C721: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1202C724: mov edx, eax */
    MEM32(ebp + (-0x3C)) = edx; /* 0x1202C726: mov dword ptr [ebp - 0x3c], edx */
    goto L_1202C72E; /* 0x1202C729: jmp 0x1202c72e */
L_1202C72B:
    edx = MEM32(ebp + (-0x3C)); /* 0x1202C72B: mov edx, dword ptr [ebp - 0x3c] */
L_1202C72E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202C72E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = 3; /* 0x1202C730: mov dword ptr [ebp - 0x50], 3 */
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x1202C737: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202C7D9; /* 0x1202C73A: jbe 0x1202c7d9 */
L_1202C740:
    eax = MEM32(ebp + ebx * 4 + (-0x68)); /* 0x1202C740: mov eax, dword ptr [ebp + ebx*4 - 0x68] */
    edi = ebp + (-0x18); /* 0x1202C744: lea edi, [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x1202C747: push edi */
    PUSH32(esp, 0); /* 0x1202C748: push 0 */
    PUSH32(esp, 0); /* 0x1202C74A: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1202C74C: push dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1202C74F: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(esi + 0xC); /* 0x1202C752: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1202C755: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1202C757: push edx */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x1202C758: push dword ptr [ebp - 0x40] */
    edx = ebp + (-0x50); /* 0x1202C75B: lea edx, [ebp - 0x50] */
    PUSH32(esp, edx); /* 0x1202C75E: push edx */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1202C75F: push dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1202C762: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1202C763: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202C766: mov edi, eax */
    /* test edi, edi */ /* 0x1202C768: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C7D9; /* 0x1202C76A: js 0x1202c7d9 */
L_1202C76C:
    edx = MEM32(ebp + (-0x48)); /* 0x1202C76C: mov edx, dword ptr [ebp - 0x48] */
    eax = MEM32(edx + 0x44); /* 0x1202C76F: mov eax, dword ptr [edx + 0x44] */
    /* test eax, eax */ /* 0x1202C772: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C78B; /* 0x1202C774: je 0x1202c78b */
L_1202C776:
    ecx = eax; /* 0x1202C776: mov ecx, eax */
    eax = MEM32(eax + 0x20); /* 0x1202C778: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x1202C77B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C776; /* 0x1202C77D: jne 0x1202c776 */
L_1202C77F:
    /* test ecx, ecx */ /* 0x1202C77F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C78B; /* 0x1202C781: je 0x1202c78b */
L_1202C783:
    eax = MEM32(ebp + (-0x18)); /* 0x1202C783: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ecx + 0x20) = eax; /* 0x1202C786: mov dword ptr [ecx + 0x20], eax */
    goto L_1202C791; /* 0x1202C789: jmp 0x1202c791 */
L_1202C78B:
    eax = MEM32(ebp + (-0x18)); /* 0x1202C78B: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edx + 0x44) = eax; /* 0x1202C78E: mov dword ptr [edx + 0x44], eax */
L_1202C791:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x1202C791: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C7C8; /* 0x1202C795: je 0x1202c7c8 */
L_1202C797:
    eax = MEM32(ebp + (-0x24)); /* 0x1202C797: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x1202C79A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C7C8; /* 0x1202C79C: je 0x1202c7c8 */
L_1202C79E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202C79E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1202C7A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C7C5; /* 0x1202C7A2: je 0x1202c7c5 */
L_1202C7A4:
    eax = MEM32(ebp + (-0x1C)); /* 0x1202C7A4: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax + 0x10); /* 0x1202C7A7: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(ebp + (-0x30)); /* 0x1202C7AA: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x1202C7AD: push dword ptr [eax + esi*4] */
    edx = MEM32(ecx); /* 0x1202C7B0: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1202C7B2: push dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1202C7B5: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1202C7B6: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202C7B9: mov edi, eax */
    /* test edi, edi */ /* 0x1202C7BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C7D9; /* 0x1202C7BD: js 0x1202c7d9 */
L_1202C7BF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202C7BF: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x24)) */ /* 0x1202C7C0: cmp esi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202C7A4; /* 0x1202C7C3: jb 0x1202c7a4 */
L_1202C7C5:
    esi = MEM32(ebp + (-0x1C)); /* 0x1202C7C5: mov esi, dword ptr [ebp - 0x1c] */
L_1202C7C8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1202C7C8: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x3C)); /* 0x1202C7CC: mov edx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1202C7CF: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x2C)) */ /* 0x1202C7D0: cmp ebx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202C740; /* 0x1202C7D3: jb 0x1202c740 */
L_1202C7D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202C7D9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1202C7DB: mov esi, ebx */
L_1202C7DD:
    ecx = MEM32(ebp + esi * 4 + (-0x68)); /* 0x1202C7DD: mov ecx, dword ptr [ebp + esi*4 - 0x68] */
    /* test ecx, ecx */ /* 0x1202C7E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C7EF; /* 0x1202C7E3: je 0x1202c7ef */
L_1202C7E5:
    eax = MEM32(ecx); /* 0x1202C7E5: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C7E7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C7E8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + esi * 4 + (-0x68)) = ebx; /* 0x1202C7EB: mov dword ptr [ebp + esi*4 - 0x68], ebx */
L_1202C7EF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202C7EF: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 6 */ /* 0x1202C7F0: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202C7DD; /* 0x1202C7F3: jb 0x1202c7dd */
L_1202C7F5:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x1202C7F5: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C809; /* 0x1202C7F8: je 0x1202c809 */
L_1202C7FA:
    eax = MEM32(ebp + (-0x1C)); /* 0x1202C7FA: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x1202C7FD: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1202C800: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x1202C803: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202C805: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202C806: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
L_1202C809:
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1202C809: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_121BF388); /* 0x1202C80C: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1202C811: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1202C812: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202C817: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202C818: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x1202C819: mov ecx, dword ptr [ebp - 0x20] */
    /* test ecx, ecx */ /* 0x1202C81C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C829; /* 0x1202C81E: je 0x1202c829 */
L_1202C820:
    eax = MEM32(ecx); /* 0x1202C820: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C822: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C823: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = ebx; /* 0x1202C826: mov dword ptr [ebp - 0x20], ebx */
L_1202C829:
    ecx = MEM32(ebp + (-0x28)); /* 0x1202C829: mov ecx, dword ptr [ebp - 0x28] */
    /* test ecx, ecx */ /* 0x1202C82C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C836; /* 0x1202C82E: je 0x1202c836 */
L_1202C830:
    eax = MEM32(ecx); /* 0x1202C830: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202C832: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C833: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202C836:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202C836: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1202C839: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1202C83B: pop edi */
    esi = POP32_VAL(esp); /* 0x1202C83C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202C83D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202C83F: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202C840: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202C845: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202C846: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202C84E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C84Eu);

L_1202C84E:
    edi = edi; /* 0x1202C84E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C850: push ebp */
    ebp = esp; /* 0x1202C851: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202C853: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1202C854: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1202C857: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C862; /* 0x1202C859: jne 0x1202c862 */
L_1202C85B:
    eax = 0x8876086Cu; /* 0x1202C85B: mov eax, 0x8876086c */
    goto L_1202C8C9; /* 0x1202C860: jmp 0x1202c8c9 */
L_1202C862:
    PUSH32(esp, ebx); /* 0x1202C862: push ebx */
    PUSH32(esp, edi); /* 0x1202C863: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202C864: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202C867: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202C882; /* 0x1202C869: jmp 0x1202c882 */
L_1202C86B:
    ecx = MEM32(esi + 0x48); /* 0x1202C86B: mov ecx, dword ptr [esi + 0x48] */
    eax = MEM32(ecx + 0x48); /* 0x1202C86E: mov eax, dword ptr [ecx + 0x48] */
    PUSH32(esp, edi); /* 0x1202C871: push edi */
    MEM32(esi + 0x48) = eax; /* 0x1202C872: mov dword ptr [esi + 0x48], eax */
    PUSH32(esp, ecx); /* 0x1202C875: push ecx */
    MEM32(ecx + 0x48) = ebx; /* 0x1202C876: mov dword ptr [ecx + 0x48], ebx */
    RECOMP_CALL(sub_1202C84E); /* 0x1202C879: call 0x1202c84e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C87E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C8C7; /* 0x1202C880: js 0x1202c8c7 */
L_1202C882:
    /* cmp MEM32(esi + 0x48), ebx */ /* 0x1202C882: cmp dword ptr [esi + 0x48], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202C86B; /* 0x1202C885: jne 0x1202c86b */
L_1202C887:
    goto L_1202C8A0; /* 0x1202C887: jmp 0x1202c8a0 */
L_1202C889:
    ecx = MEM32(esi + 0x4C); /* 0x1202C889: mov ecx, dword ptr [esi + 0x4c] */
    eax = MEM32(ecx + 0x4C); /* 0x1202C88C: mov eax, dword ptr [ecx + 0x4c] */
    PUSH32(esp, edi); /* 0x1202C88F: push edi */
    MEM32(esi + 0x4C) = eax; /* 0x1202C890: mov dword ptr [esi + 0x4c], eax */
    PUSH32(esp, ecx); /* 0x1202C893: push ecx */
    MEM32(ecx + 0x4C) = ebx; /* 0x1202C894: mov dword ptr [ecx + 0x4c], ebx */
    RECOMP_CALL(sub_1202C84E); /* 0x1202C897: call 0x1202c84e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C89C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C8C7; /* 0x1202C89E: js 0x1202c8c7 */
L_1202C8A0:
    /* cmp MEM32(esi + 0x4C), ebx */ /* 0x1202C8A0: cmp dword ptr [esi + 0x4c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202C889; /* 0x1202C8A3: jne 0x1202c889 */
L_1202C8A5:
    ecx = MEM32(esi + 0x44); /* 0x1202C8A5: mov ecx, dword ptr [esi + 0x44] */
    /* test ecx, ecx */ /* 0x1202C8A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C8C0; /* 0x1202C8AA: je 0x1202c8c0 */
L_1202C8AC:
    eax = MEM32(edi); /* 0x1202C8AC: mov eax, dword ptr [edi] */
    ebx = MEM32(ecx + 0x20); /* 0x1202C8AE: mov ebx, dword ptr [ecx + 0x20] */
    PUSH32(esp, ecx); /* 0x1202C8B1: push ecx */
    PUSH32(esp, edi); /* 0x1202C8B2: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1202C8B3: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C8B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C8C7; /* 0x1202C8B8: js 0x1202c8c7 */
L_1202C8BA:
    ecx = ebx; /* 0x1202C8BA: mov ecx, ebx */
    /* test ebx, ebx */ /* 0x1202C8BC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C8AC; /* 0x1202C8BE: jne 0x1202c8ac */
L_1202C8C0:
    eax = MEM32(edi); /* 0x1202C8C0: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1202C8C2: push esi */
    PUSH32(esp, edi); /* 0x1202C8C3: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202C8C4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202C8C7:
    edi = POP32_VAL(esp); /* 0x1202C8C7: pop edi */
    ebx = POP32_VAL(esp); /* 0x1202C8C8: pop ebx */
L_1202C8C9:
    esi = POP32_VAL(esp); /* 0x1202C8C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202C8CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202C8CB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202C8D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C8D3u);

L_1202C8D3:
    edi = edi; /* 0x1202C8D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C8D5: push ebp */
    ebp = esp; /* 0x1202C8D6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1202C8D8: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1202C8DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C903; /* 0x1202C8DD: je 0x1202c903 */
L_1202C8DF:
    ecx = MEM32(ebp + 0xC); /* 0x1202C8DF: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1202C8E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C903; /* 0x1202C8E4: je 0x1202c903 */
L_1202C8E6:
    edx = MEM32(eax + 0x4C); /* 0x1202C8E6: mov edx, dword ptr [eax + 0x4c] */
    /* test edx, edx */ /* 0x1202C8E9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C8F4; /* 0x1202C8EB: jne 0x1202c8f4 */
L_1202C8ED:
    MEM32(eax + 0x4C) = ecx; /* 0x1202C8ED: mov dword ptr [eax + 0x4c], ecx */
    goto L_1202C8FF; /* 0x1202C8F0: jmp 0x1202c8ff */
L_1202C8F2:
    edx = MEM32(eax); /* 0x1202C8F2: mov edx, dword ptr [eax] */
L_1202C8F4:
    eax = edx + 0x48; /* 0x1202C8F4: lea eax, [edx + 0x48] */
    /* cmp MEM32(eax), 0 */ /* 0x1202C8F7: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202C8F2; /* 0x1202C8FA: jne 0x1202c8f2 */
L_1202C8FC:
    MEM32(edx + 0x48) = ecx; /* 0x1202C8FC: mov dword ptr [edx + 0x48], ecx */
L_1202C8FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C8FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202C908; /* 0x1202C901: jmp 0x1202c908 */
L_1202C903:
    eax = 0x8876086Cu; /* 0x1202C903: mov eax, 0x8876086c */
L_1202C908:
    ebp = POP32_VAL(esp); /* 0x1202C908: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202C909: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202C911(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C911u);

L_1202C911:
    edi = edi; /* 0x1202C911: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C913: push ebp */
    ebp = esp; /* 0x1202C914: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202C916: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1202C917: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1202C91A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C922; /* 0x1202C91C: jne 0x1202c922 */
L_1202C91E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C91E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202C98C; /* 0x1202C920: jmp 0x1202c98c */
L_1202C922:
    eax = MEM32(esi); /* 0x1202C922: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1202C924: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202C925: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, eax */ /* 0x1202C928: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C95F; /* 0x1202C92A: je 0x1202c95f */
L_1202C92C:
    /* test edi, edi */ /* 0x1202C92C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C963; /* 0x1202C92E: je 0x1202c963 */
L_1202C930:
    /* test eax, eax */ /* 0x1202C930: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C963; /* 0x1202C932: je 0x1202c963 */
L_1202C934:
    ecx = edi; /* 0x1202C934: mov ecx, edi */
L_1202C936:
    SET_LO8(edx, MEM8(ecx)); /* 0x1202C936: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x1202C938: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202C956; /* 0x1202C93A: jne 0x1202c956 */
L_1202C93C:
    /* test LO8(edx), LO8(edx) */ /* 0x1202C93C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202C952; /* 0x1202C93E: je 0x1202c952 */
L_1202C940:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x1202C940: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x1202C943: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202C956; /* 0x1202C946: jne 0x1202c956 */
L_1202C948:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1202C948: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1202C94B: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1202C94E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C936; /* 0x1202C950: jne 0x1202c936 */
L_1202C952:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C952: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202C95B; /* 0x1202C954: jmp 0x1202c95b */
L_1202C956:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1202C956: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1202C958: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1202C95B:
    /* test eax, eax */ /* 0x1202C95B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C963; /* 0x1202C95D: jne 0x1202c963 */
L_1202C95F:
    eax = esi; /* 0x1202C95F: mov eax, esi */
    goto L_1202C98B; /* 0x1202C961: jmp 0x1202c98b */
L_1202C963:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x1202C963: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C976; /* 0x1202C967: je 0x1202c976 */
L_1202C969:
    PUSH32(esp, edi); /* 0x1202C969: push edi */
    PUSH32(esp, MEM32(esi + 0x48)); /* 0x1202C96A: push dword ptr [esi + 0x48] */
    RECOMP_CALL(sub_1202C911); /* 0x1202C96D: call 0x1202c911 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C972: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C98B; /* 0x1202C974: jne 0x1202c98b */
L_1202C976:
    /* cmp MEM32(esi + 0x4C), 0 */ /* 0x1202C976: cmp dword ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C989; /* 0x1202C97A: je 0x1202c989 */
L_1202C97C:
    PUSH32(esp, edi); /* 0x1202C97C: push edi */
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x1202C97D: push dword ptr [esi + 0x4c] */
    RECOMP_CALL(sub_1202C911); /* 0x1202C980: call 0x1202c911 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C985: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C98B; /* 0x1202C987: jne 0x1202c98b */
L_1202C989:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C989: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202C98B:
    edi = POP32_VAL(esp); /* 0x1202C98B: pop edi */
L_1202C98C:
    esi = POP32_VAL(esp); /* 0x1202C98C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202C98D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202C98E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202C996(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C996u);

L_1202C996:
    edi = edi; /* 0x1202C996: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C998: push ebp */
    ebp = esp; /* 0x1202C999: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202C99B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1202C99C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1202C99F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202C9AA; /* 0x1202C9A1: jne 0x1202c9aa */
L_1202C9A3:
    eax = 0x8876086Cu; /* 0x1202C9A3: mov eax, 0x8876086c */
    goto L_1202C9F1; /* 0x1202C9A8: jmp 0x1202c9f1 */
L_1202C9AA:
    /* cmp MEM32(esi), 0 */ /* 0x1202C9AA: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1202C9AD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202C9AE: mov edi, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C9C8; /* 0x1202C9B1: je 0x1202c9c8 */
L_1202C9B3:
    ecx = MEM32(edi); /* 0x1202C9B3: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C9B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1202C9B7: push eax */
    PUSH32(esp, eax); /* 0x1202C9B8: push eax */
    PUSH32(esp, eax); /* 0x1202C9B9: push eax */
    eax = esi + 0x4; /* 0x1202C9BA: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x1202C9BD: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x1202C9BE: push dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1202C9C0: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202C9C1: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C9C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C9F0; /* 0x1202C9C6: js 0x1202c9f0 */
L_1202C9C8:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x1202C9C8: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C9DB; /* 0x1202C9CC: je 0x1202c9db */
L_1202C9CE:
    PUSH32(esp, edi); /* 0x1202C9CE: push edi */
    PUSH32(esp, MEM32(esi + 0x48)); /* 0x1202C9CF: push dword ptr [esi + 0x48] */
    RECOMP_CALL(sub_1202C996); /* 0x1202C9D2: call 0x1202c996 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C9D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C9F0; /* 0x1202C9D9: js 0x1202c9f0 */
L_1202C9DB:
    /* cmp MEM32(esi + 0x4C), 0 */ /* 0x1202C9DB: cmp dword ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202C9EE; /* 0x1202C9DF: je 0x1202c9ee */
L_1202C9E1:
    PUSH32(esp, edi); /* 0x1202C9E1: push edi */
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x1202C9E2: push dword ptr [esi + 0x4c] */
    RECOMP_CALL(sub_1202C996); /* 0x1202C9E5: call 0x1202c996 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202C9EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202C9F0; /* 0x1202C9EC: js 0x1202c9f0 */
L_1202C9EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202C9EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202C9F0:
    edi = POP32_VAL(esp); /* 0x1202C9F0: pop edi */
L_1202C9F1:
    esi = POP32_VAL(esp); /* 0x1202C9F1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202C9F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202C9F3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202C9FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202C9FBu);

L_1202C9FB:
    edi = edi; /* 0x1202C9FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202C9FD: push ebp */
    ebp = esp; /* 0x1202C9FE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202CA00: push esi */
    PUSH32(esp, edi); /* 0x1202CA01: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1202CA02: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202CA05: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1202CA07: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202CA0F; /* 0x1202CA09: jne 0x1202ca0f */
L_1202CA0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CA0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202CA38; /* 0x1202CA0D: jmp 0x1202ca38 */
L_1202CA0F:
    /* cmp MEM32(edi), esi */ /* 0x1202CA0F: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202CA16; /* 0x1202CA11: je 0x1202ca16 */
L_1202CA13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202CA13: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202CA15: inc esi */
    _flag_k = FK_INC;
L_1202CA16:
    /* cmp MEM32(edi + 0x48), 0 */ /* 0x1202CA16: cmp dword ptr [edi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202CA26; /* 0x1202CA1A: je 0x1202ca26 */
L_1202CA1C:
    PUSH32(esp, MEM32(edi + 0x48)); /* 0x1202CA1C: push dword ptr [edi + 0x48] */
    RECOMP_CALL(sub_1202C9FB); /* 0x1202CA1F: call 0x1202c9fb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1202CA24: add esi, eax */
    _flag_k = FK_ADD;
L_1202CA26:
    /* cmp MEM32(edi + 0x4C), 0 */ /* 0x1202CA26: cmp dword ptr [edi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202CA36; /* 0x1202CA2A: je 0x1202ca36 */
L_1202CA2C:
    PUSH32(esp, MEM32(edi + 0x4C)); /* 0x1202CA2C: push dword ptr [edi + 0x4c] */
    RECOMP_CALL(sub_1202C9FB); /* 0x1202CA2F: call 0x1202c9fb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1202CA34: add esi, eax */
    _flag_k = FK_ADD;
L_1202CA36:
    eax = esi; /* 0x1202CA36: mov eax, esi */
L_1202CA38:
    edi = POP32_VAL(esp); /* 0x1202CA38: pop edi */
    esi = POP32_VAL(esp); /* 0x1202CA39: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202CA3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1202CA3B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1202CA43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202CA43u);

L_1202CA43:
    edi = edi; /* 0x1202CA43: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202CA45: push ebp */
    ebp = esp; /* 0x1202CA46: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202CA48: push esi */
    PUSH32(esp, edi); /* 0x1202CA49: push edi */
    esi = ecx; /* 0x1202CA4A: mov esi, ecx */
    RECOMP_CALL(sub_120BD2D5); /* 0x1202CA4C: call 0x120bd2d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CA51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1202CA53: push 8 */
    ecx = POP32_VAL(esp); /* 0x1202CA55: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202CA56: push dword ptr [ebp + 8] */
    MEM32(esi + 0x88) = eax; /* 0x1202CA59: mov dword ptr [esi + 0x88], eax */
    MEM32(esi + 0x8C) = eax; /* 0x1202CA5F: mov dword ptr [esi + 0x8c], eax */
    MEM32(esi + 0x90) = eax; /* 0x1202CA65: mov dword ptr [esi + 0x90], eax */
    MEM32(esi + 0x94) = eax; /* 0x1202CA6B: mov dword ptr [esi + 0x94], eax */
    MEM32(esi + 0x98) = eax; /* 0x1202CA71: mov dword ptr [esi + 0x98], eax */
    MEM32(esi + 0x9C) = eax; /* 0x1202CA77: mov dword ptr [esi + 0x9c], eax */
    edi = esi + 0xA0; /* 0x1202CA7D: lea edi, [esi + 0xa0] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1202CA83: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = esi; /* 0x1202CA85: mov ecx, esi */
    RECOMP_CALL(sub_1202BF19); /* 0x1202CA87: call 0x1202bf19 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1202CA8C: pop edi */
    eax = esi; /* 0x1202CA8D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202CA8F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202CA90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1202CA91: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1202CA99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202CA99u);

L_1202CA99:
    edi = edi; /* 0x1202CA99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202CA9B: push ebp */
    ebp = esp; /* 0x1202CA9C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1202CA9E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202CAA1: push esi */
    esi = MEM32(ebp + 0x28); /* 0x1202CAA2: mov esi, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1202CAA5: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1202CAA8: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0; /* 0x1202CAAB: and dword ptr [ebp + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x1202CAAF: mov ecx, dword ptr [eax] */
    edx = ebp + 0x28; /* 0x1202CAB1: lea edx, [ebp + 0x28] */
    PUSH32(esp, edx); /* 0x1202CAB4: push edx */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1202CAB5: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1202CAB8: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1202CABB: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202CABE: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202CAC1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202CAC4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202CAC7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1202CACA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1202CACB: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202CACE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CAE4; /* 0x1202CAD0: js 0x1202cae4 */
L_1202CAD2:
    ecx = MEM32(ebp + 0x28); /* 0x1202CAD2: mov ecx, dword ptr [ebp + 0x28] */
    /* test ecx, ecx */ /* 0x1202CAD5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202CAEA; /* 0x1202CAD7: je 0x1202caea */
L_1202CAD9:
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) & 0; /* 0x1202CAD9: and dword ptr [ecx + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x28); /* 0x1202CADD: mov ecx, dword ptr [ebp + 0x28] */
    MEM32(esi) = ecx; /* 0x1202CAE0: mov dword ptr [esi], ecx */
    goto L_1202CAEF; /* 0x1202CAE2: jmp 0x1202caef */
L_1202CAE4:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1202CAE4: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202CAEF; /* 0x1202CAE8: jne 0x1202caef */
L_1202CAEA:
    eax = 0x80004005u; /* 0x1202CAEA: mov eax, 0x80004005 */
L_1202CAEF:
    esi = POP32_VAL(esp); /* 0x1202CAEF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202CAF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1202CAF1: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1202CAF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202CAF9u);

L_1202CAF9:
    edi = edi; /* 0x1202CAF9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202CAFB: push ebp */
    ebp = esp; /* 0x1202CAFC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1202CAFE: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1202CB01: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202CB04: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1202CB07: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202CB09: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1202CB0A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202CB0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202CB0E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202CB16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202CB16u);

L_1202CB16:
    edi = edi; /* 0x1202CB16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202CB18: push ebp */
    ebp = esp; /* 0x1202CB19: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1202CB1B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1202CB1E: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202CB21: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1202CB24: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202CB26: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202CB27: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202CB2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202CB2B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202CB33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202CB33u);

L_1202CB33:
    edi = edi; /* 0x1202CB33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202CB35: push ebp */
    ebp = esp; /* 0x1202CB36: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1202CB38: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202CB3B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1202CB3C: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1202CB3F: push edi */
    edx = ebp + 0x10; /* 0x1202CB40: lea edx, [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x1202CB43: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202CB44: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202CB47: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x1202CB49: mov dword ptr [esi], edi */
    eax = MEM32(eax + 0x4); /* 0x1202CB4B: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = edi; /* 0x1202CB4E: mov dword ptr [ebp + 0x10], edi */
    ecx = MEM32(eax); /* 0x1202CB51: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202CB53: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1202CB54: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1202CB56: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1202CB58: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CBB0; /* 0x1202CB5A: js 0x1202cbb0 */
L_1202CB5C:
    eax = MEM32(ebp + 0x10); /* 0x1202CB5C: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1202CB5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202CBB5; /* 0x1202CB61: je 0x1202cbb5 */
L_1202CB63:
    fp_push(0.0); /* 0x1202CB63: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1202CB65: fst dword ptr [eax + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x38) = _v; } /* 0x1202CB68: fst dword ptr [eax + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x1202CB6B: fst dword ptr [eax + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x1202CB6E: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x1202CB71: fst dword ptr [eax + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x1202CB74: fst dword ptr [eax + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x1202CB77: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1202CB7A: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x14) = _v; } /* 0x1202CB7D: fst dword ptr [eax + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x1202CB80: fst dword ptr [eax + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x1202CB83: fst dword ptr [eax + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1202CB86: fstp dword ptr [eax + 8] */
    fp_push(1.0); /* 0x1202CB89: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x40) = _v; } /* 0x1202CB8B: fst dword ptr [eax + 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1202CB8E: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x1202CB91: fst dword ptr [eax + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1202CB94: fstp dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x10); /* 0x1202CB97: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x44) = edi; /* 0x1202CB9A: mov dword ptr [eax + 0x44], edi */
    eax = MEM32(ebp + 0x10); /* 0x1202CB9D: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x48) = edi; /* 0x1202CBA0: mov dword ptr [eax + 0x48], edi */
    eax = MEM32(ebp + 0x10); /* 0x1202CBA3: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4C) = edi; /* 0x1202CBA6: mov dword ptr [eax + 0x4c], edi */
    eax = MEM32(ebp + 0x10); /* 0x1202CBA9: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = eax; /* 0x1202CBAC: mov dword ptr [esi], eax */
    goto L_1202CBBA; /* 0x1202CBAE: jmp 0x1202cbba */
L_1202CBB0:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1202CBB0: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202CBBA; /* 0x1202CBB3: jne 0x1202cbba */
L_1202CBB5:
    ecx = 0x80004005u; /* 0x1202CBB5: mov ecx, 0x80004005 */
L_1202CBBA:
    edi = POP32_VAL(esp); /* 0x1202CBBA: pop edi */
    eax = ecx; /* 0x1202CBBB: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1202CBBD: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202CBBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202CBBF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202CBC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202CBC7u);

L_1202CBC7:
    edi = edi; /* 0x1202CBC7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202CBC9: push ebp */
    ebp = esp; /* 0x1202CBCA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x448u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x448u; /* 0x1202CBCC: sub esp, 0x448 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202CBD2: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202CBD7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202CBD9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1202CBDC: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x1202CBDF: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1202CBE2: push ebx */
    PUSH32(esp, esi); /* 0x1202CBE3: push esi */
    PUSH32(esp, edi); /* 0x1202CBE4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1202CBE5: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202CBE8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x428); /* 0x1202CBEA: lea edx, [ebp - 0x428] */
    MEM32(ebp + (-0x43C)) = eax; /* 0x1202CBF0: mov dword ptr [ebp - 0x43c], eax */
    eax = MEM32(ebp + 0x14); /* 0x1202CBF6: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x1202CBF9: push edx */
    PUSH32(esp, esi); /* 0x1202CBFA: push esi */
    MEM32(ebp + (-0x438)) = eax; /* 0x1202CBFB: mov dword ptr [ebp - 0x438], eax */
    eax = MEM32(ecx); /* 0x1202CC01: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202CC03: push ecx */
    MEM32(ebp + (-0x424)) = edi; /* 0x1202CC04: mov dword ptr [ebp - 0x424], edi */
    MEM32(ebp + (-0x42C)) = ecx; /* 0x1202CC0A: mov dword ptr [ebp - 0x42c], ecx */
    MEM32(ebp + (-0x418)) = esi; /* 0x1202CC10: mov dword ptr [ebp - 0x418], esi */
    MEM32(ebp + (-0x420)) = esi; /* 0x1202CC16: mov dword ptr [ebp - 0x420], esi */
    MEM32(ebp + (-0x428)) = esi; /* 0x1202CC1C: mov dword ptr [ebp - 0x428], esi */
    MEM32(ebp + (-0x41C)) = esi; /* 0x1202CC22: mov dword ptr [ebp - 0x41c], esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202CC28: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CC2B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CC2D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CEBE; /* 0x1202CC2F: js 0x1202cebe */
L_1202CC35:
    eax = MEM32(ebp + (-0x428)); /* 0x1202CC35: mov eax, dword ptr [ebp - 0x428] */
    /* test eax, eax */ /* 0x1202CC3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202CC93; /* 0x1202CC3D: je 0x1202cc93 */
L_1202CC3F:
    ebx = ebp + (-0x404); /* 0x1202CC3F: lea ebx, [ebp - 0x404] */
    MEM32(ebp + (-0x420)) = ebx; /* 0x1202CC45: mov dword ptr [ebp - 0x420], ebx */
    /* cmp eax, 0x400u */ /* 0x1202CC4B: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202CC75; /* 0x1202CC50: jbe 0x1202cc75 */
L_1202CC52:
    PUSH32(esp, 0x120014BCu); /* 0x1202CC52: push 0x120014bc */
    PUSH32(esp, eax); /* 0x1202CC57: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1202CC58: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CC5D: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202CC5F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202CC60: pop ecx */
    MEM32(ebp + (-0x420)) = ebx; /* 0x1202CC61: mov dword ptr [ebp - 0x420], ebx */
    /* test ebx, ebx */ /* 0x1202CC67: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202CC75; /* 0x1202CC69: jne 0x1202cc75 */
L_1202CC6B:
    ebx = 0x8007000Eu; /* 0x1202CC6B: mov ebx, 0x8007000e */
    goto L_1202CEC0; /* 0x1202CC70: jmp 0x1202cec0 */
L_1202CC75:
    ecx = MEM32(ebp + (-0x42C)); /* 0x1202CC75: mov ecx, dword ptr [ebp - 0x42c] */
    eax = MEM32(ecx); /* 0x1202CC7B: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x428); /* 0x1202CC7D: lea edx, [ebp - 0x428] */
    PUSH32(esp, edx); /* 0x1202CC83: push edx */
    PUSH32(esp, ebx); /* 0x1202CC84: push ebx */
    PUSH32(esp, ecx); /* 0x1202CC85: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202CC86: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CC89: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CC8B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CEA6; /* 0x1202CC8D: js 0x1202cea6 */
L_1202CC93:
    eax = MEM32(edi + 0xC); /* 0x1202CC93: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax); /* 0x1202CC96: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x418); /* 0x1202CC98: lea edx, [ebp - 0x418] */
    PUSH32(esp, edx); /* 0x1202CC9E: push edx */
    PUSH32(esp, MEM32(ebp + (-0x420))); /* 0x1202CC9F: push dword ptr [ebp - 0x420] */
    PUSH32(esp, eax); /* 0x1202CCA5: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1202CCA6: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CCA8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CCAA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CEA6; /* 0x1202CCAC: js 0x1202cea6 */
L_1202CCB2:
    eax = MEM32(ebp + (-0x418)); /* 0x1202CCB2: mov eax, dword ptr [ebp - 0x418] */
    /* cmp MEM32(eax), esi */ /* 0x1202CCB8: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202CCBF; /* 0x1202CCBA: je 0x1202ccbf */
L_1202CCBC:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + 1; /* 0x1202CCBC: inc dword ptr [edi + 4] */
    _flag_k = FK_INC;
L_1202CCBF:
    edi = MEM32(ebp + (-0x42C)); /* 0x1202CCBF: mov edi, dword ptr [ebp - 0x42c] */
    eax = MEM32(edi); /* 0x1202CCC5: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x430); /* 0x1202CCC7: lea ecx, [ebp - 0x430] */
    PUSH32(esp, ecx); /* 0x1202CCCD: push ecx */
    PUSH32(esp, edi); /* 0x1202CCCE: push edi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1202CCCF: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1202CCD2: mov ecx, esi */
    MEM32(ebp + (-0x434)) = esi; /* 0x1202CCD4: mov dword ptr [ebp - 0x434], esi */
    /* cmp MEM32(ebp + (-0x430)), ecx */ /* 0x1202CCDA: cmp dword ptr [ebp - 0x430], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x430))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202CE74; /* 0x1202CCE0: jbe 0x1202ce74 */
L_1202CCE6:
    eax = MEM32(edi); /* 0x1202CCE6: mov eax, dword ptr [edi] */
    edx = ebp + (-0x41C); /* 0x1202CCE8: lea edx, [ebp - 0x41c] */
    PUSH32(esp, edx); /* 0x1202CCEE: push edx */
    PUSH32(esp, ecx); /* 0x1202CCEF: push ecx */
    PUSH32(esp, edi); /* 0x1202CCF0: push edi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1202CCF1: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CCF4: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CCF6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CE5B; /* 0x1202CCF8: js 0x1202ce5b */
L_1202CCFE:
    eax = MEM32(ebp + (-0x41C)); /* 0x1202CCFE: mov eax, dword ptr [ebp - 0x41c] */
    ecx = MEM32(eax); /* 0x1202CD04: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x414); /* 0x1202CD06: lea edx, [ebp - 0x414] */
    PUSH32(esp, edx); /* 0x1202CD0C: push edx */
    PUSH32(esp, eax); /* 0x1202CD0D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1202CD0E: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CD11: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CD13: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CEA6; /* 0x1202CD15: js 0x1202cea6 */
L_1202CD1B:
    PUSH32(esp, 4); /* 0x1202CD1B: push 4 */
    edx = POP32_VAL(esp); /* 0x1202CD1D: pop edx */
    ecx = edx; /* 0x1202CD1E: mov ecx, edx */
    edi = 0x12001FD4u; /* 0x1202CD20: mov edi, 0x12001fd4 */
    esi = ebp + (-0x414); /* 0x1202CD25: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CD2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202CD2D: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202CD4D; /* 0x1202CD2F: jne 0x1202cd4d */
L_1202CD31:
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1202CD31: push dword ptr [ebp - 0x418] */
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x1202CD37: push dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x1202CD3D: push dword ptr [ebp - 0x424] */
    RECOMP_CALL(sub_1202C0C0); /* 0x1202CD43: call 0x1202c0c0 */
    RECOMP_FLAGS_IN();
    goto L_1202CE33; /* 0x1202CD48: jmp 0x1202ce33 */
L_1202CD4D:
    ecx = edx; /* 0x1202CD4D: mov ecx, edx */
    edi = 0x12001C58u; /* 0x1202CD4F: mov edi, 0x12001c58 */
    esi = ebp + (-0x414); /* 0x1202CD54: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CD5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202CD5C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1202CE1C; /* 0x1202CD5E: je 0x1202ce1c */
L_1202CD64:
    ecx = edx; /* 0x1202CD64: mov ecx, edx */
    edi = 0x12001C68u; /* 0x1202CD66: mov edi, 0x12001c68 */
    esi = ebp + (-0x414); /* 0x1202CD6B: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CD71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202CD73: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1202CE1C; /* 0x1202CD75: je 0x1202ce1c */
L_1202CD7B:
    ecx = edx; /* 0x1202CD7B: mov ecx, edx */
    edi = 0x12001FF4u; /* 0x1202CD7D: mov edi, 0x12001ff4 */
    esi = ebp + (-0x414); /* 0x1202CD82: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CD88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202CD8A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202CDC8; /* 0x1202CD8C: jne 0x1202cdc8 */
L_1202CD8E:
    eax = MEM32(ebp + (-0x41C)); /* 0x1202CD8E: mov eax, dword ptr [ebp - 0x41c] */
    ecx = MEM32(eax); /* 0x1202CD94: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x440); /* 0x1202CD96: lea edx, [ebp - 0x440] */
    PUSH32(esp, edx); /* 0x1202CD9C: push edx */
    edx = ebp + (-0x444); /* 0x1202CD9D: lea edx, [ebp - 0x444] */
    PUSH32(esp, edx); /* 0x1202CDA3: push edx */
    PUSH32(esp, eax); /* 0x1202CDA4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1202CDA5: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CDA8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CDAA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CEA6; /* 0x1202CDAC: js 0x1202cea6 */
L_1202CDB2:
    edi = MEM32(ebp + (-0x418)); /* 0x1202CDB2: mov edi, dword ptr [ebp - 0x418] */
    esi = MEM32(ebp + (-0x440)); /* 0x1202CDB8: mov esi, dword ptr [ebp - 0x440] */
    PUSH32(esp, 0x10u); /* 0x1202CDBE: push 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1202CDC0: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1202CDC3: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1202CDC4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1202CE39; /* 0x1202CDC6: jmp 0x1202ce39 */
L_1202CDC8:
    ecx = edx; /* 0x1202CDC8: mov ecx, edx */
    edi = 0x12001FE4u; /* 0x1202CDCA: mov edi, 0x12001fe4 */
    esi = ebp + (-0x414); /* 0x1202CDCF: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CDD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202CDD7: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202CDFB; /* 0x1202CDD9: jne 0x1202cdfb */
L_1202CDDB:
    eax = ebp + (-0x448); /* 0x1202CDDB: lea eax, [ebp - 0x448] */
    PUSH32(esp, eax); /* 0x1202CDE1: push eax */
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1202CDE2: push dword ptr [ebp - 0x418] */
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x1202CDE8: push dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x1202CDEE: push dword ptr [ebp - 0x424] */
    RECOMP_CALL(sub_1202CBC7); /* 0x1202CDF4: call 0x1202cbc7 */
    RECOMP_FLAGS_IN();
    goto L_1202CE33; /* 0x1202CDF9: jmp 0x1202ce33 */
L_1202CDFB:
    eax = MEM32(ebp + (-0x424)); /* 0x1202CDFB: mov eax, dword ptr [ebp - 0x424] */
    ecx = MEM32(eax + 0x10); /* 0x1202CE01: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1202CE04: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202CE39; /* 0x1202CE06: je 0x1202ce39 */
L_1202CE08:
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x1202CE08: push dword ptr [ebp - 0x41c] */
    eax = MEM32(ecx); /* 0x1202CE0E: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1202CE10: push dword ptr [ebp - 0x418] */
    PUSH32(esp, ecx); /* 0x1202CE16: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1202CE17: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_1202CE33; /* 0x1202CE1A: jmp 0x1202ce33 */
L_1202CE1C:
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1202CE1C: push dword ptr [ebp - 0x418] */
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x1202CE22: push dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x1202CE28: push dword ptr [ebp - 0x424] */
    RECOMP_CALL(sub_1202C5E1); /* 0x1202CE2E: call 0x1202c5e1 */
    RECOMP_FLAGS_IN();
L_1202CE33:
    ebx = eax; /* 0x1202CE33: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CE35: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CEA6; /* 0x1202CE37: js 0x1202cea6 */
L_1202CE39:
    ecx = MEM32(ebp + (-0x41C)); /* 0x1202CE39: mov ecx, dword ptr [ebp - 0x41c] */
    /* test ecx, ecx */ /* 0x1202CE3F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202CE53; /* 0x1202CE41: je 0x1202ce53 */
L_1202CE43:
    eax = MEM32(ecx); /* 0x1202CE43: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202CE45: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202CE46: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202CE49: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x41C)) = esi; /* 0x1202CE4B: mov dword ptr [ebp - 0x41c], esi */
    goto L_1202CE55; /* 0x1202CE51: jmp 0x1202ce55 */
L_1202CE53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202CE53: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202CE55:
    edi = MEM32(ebp + (-0x42C)); /* 0x1202CE55: mov edi, dword ptr [ebp - 0x42c] */
L_1202CE5B:
    ecx = MEM32(ebp + (-0x434)); /* 0x1202CE5B: mov ecx, dword ptr [ebp - 0x434] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202CE61: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x434)) = ecx; /* 0x1202CE62: mov dword ptr [ebp - 0x434], ecx */
    /* cmp ecx, MEM32(ebp + (-0x430)) */ /* 0x1202CE68: cmp ecx, dword ptr [ebp - 0x430] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x430)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202CCE6; /* 0x1202CE6E: jb 0x1202cce6 */
L_1202CE74:
    eax = MEM32(ebp + (-0x43C)); /* 0x1202CE74: mov eax, dword ptr [ebp - 0x43c] */
    /* test eax, eax */ /* 0x1202CE7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202CE90; /* 0x1202CE7C: je 0x1202ce90 */
L_1202CE7E:
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1202CE7E: push dword ptr [ebp - 0x418] */
    PUSH32(esp, eax); /* 0x1202CE84: push eax */
    RECOMP_CALL(sub_1202C8D3); /* 0x1202CE85: call 0x1202c8d3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CE8A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CE8C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202CEA6; /* 0x1202CE8E: js 0x1202cea6 */
L_1202CE90:
    eax = MEM32(ebp + (-0x418)); /* 0x1202CE90: mov eax, dword ptr [ebp - 0x418] */
    ecx = MEM32(ebp + (-0x438)); /* 0x1202CE96: mov ecx, dword ptr [ebp - 0x438] */
    MEM32(ecx) = eax; /* 0x1202CE9C: mov dword ptr [ecx], eax */
    MEM32(ebp + (-0x418)) = esi; /* 0x1202CE9E: mov dword ptr [ebp - 0x418], esi */
    goto L_1202CEAC; /* 0x1202CEA4: jmp 0x1202ceac */
L_1202CEA6:
    esi = MEM32(ebp + (-0x418)); /* 0x1202CEA6: mov esi, dword ptr [ebp - 0x418] */
L_1202CEAC:
    eax = MEM32(ebp + (-0x420)); /* 0x1202CEAC: mov eax, dword ptr [ebp - 0x420] */
    ecx = ebp + (-0x404); /* 0x1202CEB2: lea ecx, [ebp - 0x404] */
    /* cmp ecx, eax */ /* 0x1202CEB8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202CECD; /* 0x1202CEBA: je 0x1202cecd */
L_1202CEBC:
    goto L_1202CEC0; /* 0x1202CEBC: jmp 0x1202cec0 */
L_1202CEBE:
    eax = esi; /* 0x1202CEBE: mov eax, esi */
L_1202CEC0:
    PUSH32(esp, eax); /* 0x1202CEC0: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202CEC1: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x418)); /* 0x1202CEC6: mov esi, dword ptr [ebp - 0x418] */
    ecx = POP32_VAL(esp); /* 0x1202CECC: pop ecx */
L_1202CECD:
    /* test esi, esi */ /* 0x1202CECD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202CEE0; /* 0x1202CECF: je 0x1202cee0 */
L_1202CED1:
    eax = MEM32(ebp + (-0x424)); /* 0x1202CED1: mov eax, dword ptr [ebp - 0x424] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1202CED7: push dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x1202CEDA: push esi */
    RECOMP_CALL(sub_1202C84E); /* 0x1202CEDB: call 0x1202c84e */
    RECOMP_FLAGS_IN();
L_1202CEE0:
    ecx = MEM32(ebp + (-0x41C)); /* 0x1202CEE0: mov ecx, dword ptr [ebp - 0x41c] */
    /* test ecx, ecx */ /* 0x1202CEE6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202CEF0; /* 0x1202CEE8: je 0x1202cef0 */
L_1202CEEA:
    eax = MEM32(ecx); /* 0x1202CEEA: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202CEEC: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202CEED: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202CEF0:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202CEF0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202CEF3: pop edi */
    esi = POP32_VAL(esp); /* 0x1202CEF4: pop esi */
    eax = ebx; /* 0x1202CEF5: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202CEF7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202CEF9: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202CEFA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202CEFF: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202CF00: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202CF08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202CF08u);

L_1202CF08:
    edi = edi; /* 0x1202CF08: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202CF0A: push ebp */
    ebp = esp; /* 0x1202CF0B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x150u; /* 0x1202CF0D: sub esp, 0x150 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202CF13: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202CF18: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202CF1A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1202CF1D: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1202CF20: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202CF21: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1202CF24: push esi */
    PUSH32(esp, edi); /* 0x1202CF25: push edi */
    MEM32(ebp + (-0xE4)) = eax; /* 0x1202CF26: mov dword ptr [ebp - 0xe4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CF2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xDC); /* 0x1202CF2E: lea ecx, [ebp - 0xdc] */
    esi = eax; /* 0x1202CF34: mov esi, eax */
    edi = eax; /* 0x1202CF36: mov edi, eax */
    PUSH32(esp, ecx); /* 0x1202CF38: push ecx */
    MEM32(ebp + (-0x84)) = eax; /* 0x1202CF39: mov dword ptr [ebp - 0x84], eax */
    MEM32(ebp + (-0xB0)) = eax; /* 0x1202CF3F: mov dword ptr [ebp - 0xb0], eax */
    MEM32(ebp + (-0xB4)) = eax; /* 0x1202CF45: mov dword ptr [ebp - 0xb4], eax */
    MEM32(ebp + (-0xB8)) = eax; /* 0x1202CF4B: mov dword ptr [ebp - 0xb8], eax */
    MEM32(ebp + (-0xA0)) = eax; /* 0x1202CF51: mov dword ptr [ebp - 0xa0], eax */
    MEM32(ebp + (-0xAC)) = eax; /* 0x1202CF57: mov dword ptr [ebp - 0xac], eax */
    MEM32(ebp + (-0x80)) = eax; /* 0x1202CF5D: mov dword ptr [ebp - 0x80], eax */
    eax = MEM32(ebx); /* 0x1202CF60: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1202CF62: push ebx */
    MEM32(ebp + (-0xE8)) = ebx; /* 0x1202CF63: mov dword ptr [ebp - 0xe8], ebx */
    MEM32(ebp + (-0x7C)) = esi; /* 0x1202CF69: mov dword ptr [ebp - 0x7c], esi */
    MEM32(ebp + (-0x88)) = edi; /* 0x1202CF6C: mov dword ptr [ebp - 0x88], edi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1202CF72: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202CF75: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD0)) = ecx; /* 0x1202CF77: mov dword ptr [ebp - 0xd0], ecx */
    /* cmp MEM32(ebp + (-0xDC)), ecx */ /* 0x1202CF7D: cmp dword ptr [ebp - 0xdc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xDC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202DAA4; /* 0x1202CF83: jbe 0x1202daa4 */
L_1202CF89:
    eax = MEM32(ebx); /* 0x1202CF89: mov eax, dword ptr [ebx] */
    edx = ebp + (-0xA0); /* 0x1202CF8B: lea edx, [ebp - 0xa0] */
    PUSH32(esp, edx); /* 0x1202CF91: push edx */
    PUSH32(esp, ecx); /* 0x1202CF92: push ecx */
    PUSH32(esp, ebx); /* 0x1202CF93: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1202CF94: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CF97: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CF99: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202D1A3; /* 0x1202CF9B: js 0x1202d1a3 */
L_1202CFA1:
    eax = MEM32(ebp + (-0xA0)); /* 0x1202CFA1: mov eax, dword ptr [ebp - 0xa0] */
    ecx = MEM32(eax); /* 0x1202CFA7: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x78); /* 0x1202CFA9: lea edx, [ebp - 0x78] */
    PUSH32(esp, edx); /* 0x1202CFAC: push edx */
    PUSH32(esp, eax); /* 0x1202CFAD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1202CFAE: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CFB1: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CFB3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202D042; /* 0x1202CFB5: js 0x1202d042 */
L_1202CFBB:
    PUSH32(esp, 4); /* 0x1202CFBB: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202CFBD: pop ecx */
    edi = ebp + (-0x78); /* 0x1202CFBE: lea edi, [ebp - 0x78] */
    esi = 0x12001FE4u; /* 0x1202CFC1: mov esi, 0x12001fe4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202CFC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202CFC8: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202D091; /* 0x1202CFCA: jne 0x1202d091 */
L_1202CFD0:
    /* cmp MEM32(ebp + (-0x80)), eax */ /* 0x1202CFD0: cmp dword ptr [ebp - 0x80], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202DA14; /* 0x1202CFD3: jne 0x1202da14 */
L_1202CFD9:
    eax = MEM32(ebp + (-0xA0)); /* 0x1202CFD9: mov eax, dword ptr [ebp - 0xa0] */
    ecx = MEM32(eax); /* 0x1202CFDF: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xBC); /* 0x1202CFE1: lea edx, [ebp - 0xbc] */
    PUSH32(esp, edx); /* 0x1202CFE7: push edx */
    PUSH32(esp, 0); /* 0x1202CFE8: push 0 */
    PUSH32(esp, eax); /* 0x1202CFEA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1202CFEB: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202CFEE: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202CFF0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DAB2; /* 0x1202CFF2: js 0x1202dab2 */
L_1202CFF8:
    /* cmp MEM32(ebp + (-0xBC)), 0 */ /* 0x1202CFF8: cmp dword ptr [ebp - 0xbc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202DA14; /* 0x1202CFFF: je 0x1202da14 */
L_1202D005:
    PUSH32(esp, 0x120014BCu); /* 0x1202D005: push 0x120014bc */
    PUSH32(esp, MEM32(ebp + (-0xBC))); /* 0x1202D00A: push dword ptr [ebp - 0xbc] */
    RECOMP_CALL(sub_12018970); /* 0x1202D010: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202D015: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202D017: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202D018: pop ecx */
    MEM32(ebp + (-0x80)) = ebx; /* 0x1202D019: mov dword ptr [ebp - 0x80], ebx */
    /* test ebx, ebx */ /* 0x1202D01C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DA0A; /* 0x1202D01E: je 0x1202da0a */
L_1202D024:
    eax = MEM32(ebp + (-0xA0)); /* 0x1202D024: mov eax, dword ptr [ebp - 0xa0] */
    ecx = MEM32(eax); /* 0x1202D02A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xBC); /* 0x1202D02C: lea edx, [ebp - 0xbc] */
    PUSH32(esp, edx); /* 0x1202D032: push edx */
    PUSH32(esp, ebx); /* 0x1202D033: push ebx */
    PUSH32(esp, eax); /* 0x1202D034: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1202D035: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202D038: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202D03A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202D183; /* 0x1202D03C: jns 0x1202d183 */
L_1202D042:
    esi = MEM32(ebp + (-0x84)); /* 0x1202D042: mov esi, dword ptr [ebp - 0x84] */
L_1202D048:
    edi = MEM32(ebp + (-0x7C)); /* 0x1202D048: mov edi, dword ptr [ebp - 0x7c] */
L_1202D04B:
    eax = MEM32(ebp + (-0x80)); /* 0x1202D04B: mov eax, dword ptr [ebp - 0x80] */
L_1202D04E:
    PUSH32(esp, eax); /* 0x1202D04E: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202D04F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202D054: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202D055: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x1202D05A: push dword ptr [ebp - 0x88] */
    RECOMP_CALL(sub_121BF388); /* 0x1202D060: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1202D065: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1202D066: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xA0)); /* 0x1202D06B: mov ecx, dword ptr [ebp - 0xa0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1202D071: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1202D074: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202D07E; /* 0x1202D076: je 0x1202d07e */
L_1202D078:
    eax = MEM32(ecx); /* 0x1202D078: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202D07A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202D07B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202D07E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202D07E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202D081: pop edi */
    esi = POP32_VAL(esp); /* 0x1202D082: pop esi */
    eax = ebx; /* 0x1202D083: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202D085: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202D087: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202D088: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202D08D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202D08E: ret 0xc */
L_1202D091:
    PUSH32(esp, 4); /* 0x1202D091: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202D093: pop ecx */
    edi = ebp + (-0x78); /* 0x1202D094: lea edi, [ebp - 0x78] */
    esi = 0x12002034u; /* 0x1202D097: mov esi, 0x12002034 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202D09C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202D09E: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1202D183; /* 0x1202D0A0: je 0x1202d183 */
L_1202D0A6:
    PUSH32(esp, 4); /* 0x1202D0A6: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202D0A8: pop ecx */
    edi = ebp + (-0x78); /* 0x1202D0A9: lea edi, [ebp - 0x78] */
    esi = 0x12002024u; /* 0x1202D0AC: mov esi, 0x12002024 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202D0B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202D0B3: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202D183; /* 0x1202D0B5: jne 0x1202d183 */
L_1202D0BB:
    eax = MEM32(ebp + (-0xA0)); /* 0x1202D0BB: mov eax, dword ptr [ebp - 0xa0] */
    ecx = MEM32(eax); /* 0x1202D0C1: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xAC); /* 0x1202D0C3: lea edx, [ebp - 0xac] */
    PUSH32(esp, edx); /* 0x1202D0C9: push edx */
    edx = ebp + (-0x150); /* 0x1202D0CA: lea edx, [ebp - 0x150] */
    PUSH32(esp, edx); /* 0x1202D0D0: push edx */
    PUSH32(esp, eax); /* 0x1202D0D1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1202D0D2: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202D0D5: mov ebx, eax */
    MEM32(ebp + (-0x98)) = ebx; /* 0x1202D0D7: mov dword ptr [ebp - 0x98], ebx */
    /* test ebx, ebx */ /* 0x1202D0DD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202D042; /* 0x1202D0DF: js 0x1202d042 */
L_1202D0E5:
    eax = MEM32(ebp + (-0xAC)); /* 0x1202D0E5: mov eax, dword ptr [ebp - 0xac] */
    ecx = MEM32(eax); /* 0x1202D0EB: mov ecx, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x1202D0ED: mov ebx, dword ptr [eax + 4] */
    MEM32(ebp + (-0xA8)) = ebx; /* 0x1202D0F0: mov dword ptr [ebp - 0xa8], ebx */
    /* test ecx, ecx */ /* 0x1202D0F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202D1C7; /* 0x1202D0F8: jne 0x1202d1c7 */
L_1202D0FE:
    esi = MEM32(ebp + (-0x84)); /* 0x1202D0FE: mov esi, dword ptr [ebp - 0x84] */
    /* test esi, esi */ /* 0x1202D104: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202DA1E; /* 0x1202D106: jne 0x1202da1e */
L_1202D10C:
    PUSH32(esp, 0x120014BCu); /* 0x1202D10C: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x1202D111: push 0x14 */
    esi = POP32_VAL(esp); /* 0x1202D113: pop esi */
    eax = ebx; /* 0x1202D114: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1202D116: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202D118: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202D11B: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202D11D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202D11F: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202D120: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202D125: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202D126: pop ecx */
    ecx = eax; /* 0x1202D127: mov ecx, eax */
    MEM32(ebp + (-0x84)) = ecx; /* 0x1202D129: mov dword ptr [ebp - 0x84], ecx */
    /* test ecx, ecx */ /* 0x1202D12F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DA0A; /* 0x1202D131: je 0x1202da0a */
L_1202D137:
    edx = MEM32(ebp + (-0xAC)); /* 0x1202D137: mov edx, dword ptr [ebp - 0xac] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1202D13D: add edx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x1202D140: mov dword ptr [ebp - 0xb4], ebx */
    /* test ebx, ebx */ /* 0x1202D146: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202D17D; /* 0x1202D148: je 0x1202d17d */
L_1202D14A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1202D14A: add ecx, 8 */
    _flag_k = FK_ADD;
L_1202D14D:
    eax = MEM32(edx); /* 0x1202D14D: mov eax, dword ptr [edx] */
    fp_push((double)(int32_t)MEM32(edx)); /* 0x1202D14F: fild dword ptr [edx] */
    /* test eax, eax */ /* 0x1202D151: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202D15B; /* 0x1202D153: jns 0x1202d15b */
L_1202D155:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202D155: fadd dword ptr [0x120014d0] */
L_1202D15B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x8)) = _v; } /* 0x1202D15B: fstp dword ptr [ecx - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x1202D15E: add edx, 0x18 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + (-0xC))); /* 0x1202D161: fld dword ptr [edx - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x4)) = _v; } /* 0x1202D164: fstp dword ptr [ecx - 4] */
    fp_push(*(float*)&MEM32(edx + (-0x8))); /* 0x1202D167: fld dword ptr [edx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1202D16A: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + (-0x4))); /* 0x1202D16C: fld dword ptr [edx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1202D16F: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + (-0x10))); /* 0x1202D172: fld dword ptr [edx - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1202D175: fstp dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1202D178: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202D17A: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202D14D; /* 0x1202D17B: jne 0x1202d14d */
L_1202D17D:
    ebx = MEM32(ebp + (-0x98)); /* 0x1202D17D: mov ebx, dword ptr [ebp - 0x98] */
L_1202D183:
    edi = MEM32(ebp + (-0x88)); /* 0x1202D183: mov edi, dword ptr [ebp - 0x88] */
L_1202D189:
    esi = MEM32(ebp + (-0x7C)); /* 0x1202D189: mov esi, dword ptr [ebp - 0x7c] */
L_1202D18C:
    ecx = MEM32(ebp + (-0xA0)); /* 0x1202D18C: mov ecx, dword ptr [ebp - 0xa0] */
    /* test ecx, ecx */ /* 0x1202D192: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202D1A3; /* 0x1202D194: je 0x1202d1a3 */
L_1202D196:
    eax = MEM32(ecx); /* 0x1202D196: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202D198: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202D199: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xA0)) = MEM32(ebp + (-0xA0)) & 0; /* 0x1202D19C: and dword ptr [ebp - 0xa0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202D1A3:
    ecx = MEM32(ebp + (-0xD0)); /* 0x1202D1A3: mov ecx, dword ptr [ebp - 0xd0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202D1A9: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xD0)) = ecx; /* 0x1202D1AA: mov dword ptr [ebp - 0xd0], ecx */
    /* cmp ecx, MEM32(ebp + (-0xDC)) */ /* 0x1202D1B0: cmp ecx, dword ptr [ebp - 0xdc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xDC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202DA42; /* 0x1202D1B6: jae 0x1202da42 */
L_1202D1BC:
    ebx = MEM32(ebp + (-0xE8)); /* 0x1202D1BC: mov ebx, dword ptr [ebp - 0xe8] */
    RECOMP_BACKEDGE();
    goto L_1202CF89; /* 0x1202D1C2: jmp 0x1202cf89 */
L_1202D1C7:
    /* cmp ecx, 1 */ /* 0x1202D1C7: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202D25F; /* 0x1202D1CA: jne 0x1202d25f */
L_1202D1D0:
    edi = MEM32(ebp + (-0x7C)); /* 0x1202D1D0: mov edi, dword ptr [ebp - 0x7c] */
    /* test edi, edi */ /* 0x1202D1D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202DA28; /* 0x1202D1D5: jne 0x1202da28 */
L_1202D1DB:
    PUSH32(esp, 0x120014BCu); /* 0x1202D1DB: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202D1E0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202D1E2: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202D1E4: pop edx */
    eax = ebx; /* 0x1202D1E5: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202D1E7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202D1E9: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202D1EC: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202D1EE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202D1F0: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202D1F1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202D1F6: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202D1F8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202D1F9: pop ecx */
    MEM32(ebp + (-0x7C)) = esi; /* 0x1202D1FA: mov dword ptr [ebp - 0x7c], esi */
    /* test esi, esi */ /* 0x1202D1FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DA0A; /* 0x1202D1FF: je 0x1202da0a */
L_1202D205:
    ecx = MEM32(ebp + (-0xAC)); /* 0x1202D205: mov ecx, dword ptr [ebp - 0xac] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1202D20B: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xB0)) = ebx; /* 0x1202D20E: mov dword ptr [ebp - 0xb0], ebx */
    /* test ebx, ebx */ /* 0x1202D214: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202D9EE; /* 0x1202D216: je 0x1202d9ee */
L_1202D21C:
    eax = ecx + 0x8; /* 0x1202D21C: lea eax, [ecx + 8] */
    MEM32(ebp + (-0x9C)) = eax; /* 0x1202D21F: mov dword ptr [ebp - 0x9c], eax */
    edx = esi; /* 0x1202D225: mov edx, esi */
L_1202D227:
    eax = MEM32(ecx); /* 0x1202D227: mov eax, dword ptr [ecx] */
    fp_push((double)(int32_t)MEM32(ecx)); /* 0x1202D229: fild dword ptr [ecx] */
    /* test eax, eax */ /* 0x1202D22B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202D235; /* 0x1202D22D: jns 0x1202d235 */
L_1202D22F:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202D22F: fadd dword ptr [0x120014d0] */
L_1202D235:
    eax = MEM32(ebp + (-0x9C)); /* 0x1202D235: mov eax, dword ptr [ebp - 0x9c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1202D23B: fstp dword ptr [edx] */
    esi = eax; /* 0x1202D23D: mov esi, eax */
    edi = edx + 0x4; /* 0x1202D23F: lea edi, [edx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D242: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D243: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0x14u); /* 0x1202D244: push 0x14 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D246: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1202D247: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1202D248: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1202D24A: push 0x10 */
    MEM32(ebp + (-0x9C)) = eax; /* 0x1202D24C: mov dword ptr [ebp - 0x9c], eax */
    eax = POP32_VAL(esp); /* 0x1202D252: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1202D253: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1202D255: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202D257: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202D227; /* 0x1202D258: jne 0x1202d227 */
L_1202D25A:
    RECOMP_BACKEDGE();
    goto L_1202D17D; /* 0x1202D25A: jmp 0x1202d17d */
L_1202D25F:
    /* cmp ecx, 2 */ /* 0x1202D25F: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202D2FA; /* 0x1202D262: jne 0x1202d2fa */
L_1202D268:
    /* cmp MEM32(ebp + (-0x88)), 0 */ /* 0x1202D268: cmp dword ptr [ebp - 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202DA14; /* 0x1202D26F: jne 0x1202da14 */
L_1202D275:
    PUSH32(esp, 0x120014BCu); /* 0x1202D275: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202D27A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202D27C: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202D27E: pop edx */
    eax = ebx; /* 0x1202D27F: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202D281: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202D283: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202D286: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202D288: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202D28A: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202D28B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202D290: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1202D292: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202D293: pop ecx */
    MEM32(ebp + (-0x88)) = edi; /* 0x1202D294: mov dword ptr [ebp - 0x88], edi */
    /* test edi, edi */ /* 0x1202D29A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DA0A; /* 0x1202D29C: je 0x1202da0a */
L_1202D2A2:
    ecx = MEM32(ebp + (-0xAC)); /* 0x1202D2A2: mov ecx, dword ptr [ebp - 0xac] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1202D2A8: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xB8)) = ebx; /* 0x1202D2AB: mov dword ptr [ebp - 0xb8], ebx */
    /* test ebx, ebx */ /* 0x1202D2B1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202D9E3; /* 0x1202D2B3: je 0x1202d9e3 */
L_1202D2B9:
    esi = ecx + 0x8; /* 0x1202D2B9: lea esi, [ecx + 8] */
    MEM32(ebp + (-0x9C)) = esi; /* 0x1202D2BC: mov dword ptr [ebp - 0x9c], esi */
    edx = edi; /* 0x1202D2C2: mov edx, edi */
L_1202D2C4:
    eax = MEM32(ecx); /* 0x1202D2C4: mov eax, dword ptr [ecx] */
    fp_push((double)(int32_t)MEM32(ecx)); /* 0x1202D2C6: fild dword ptr [ecx] */
    /* test eax, eax */ /* 0x1202D2C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202D2D2; /* 0x1202D2CA: jns 0x1202d2d2 */
L_1202D2CC:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202D2CC: fadd dword ptr [0x120014d0] */
L_1202D2D2:
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1202D2D2: fstp dword ptr [edx] */
    edi = edx + 0x4; /* 0x1202D2D4: lea edi, [edx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D2D7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D2D8: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0x14u); /* 0x1202D2D9: push 0x14 */
    eax = POP32_VAL(esp); /* 0x1202D2DB: pop eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D2DC: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x9C)); /* 0x1202D2DD: mov esi, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1202D2E3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1202D2E5: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1202D2E7: push 0x10 */
    eax = POP32_VAL(esp); /* 0x1202D2E9: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1202D2EA: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202D2EC: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x9C)) = esi; /* 0x1202D2ED: mov dword ptr [ebp - 0x9c], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202D2C4; /* 0x1202D2F3: jne 0x1202d2c4 */
L_1202D2F5:
    RECOMP_BACKEDGE();
    goto L_1202D17D; /* 0x1202D2F5: jmp 0x1202d17d */
L_1202D2FA:
    /* cmp ecx, 4 */ /* 0x1202D2FA: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202D17D; /* 0x1202D2FD: jne 0x1202d17d */
L_1202D303:
    /* cmp MEM32(ebp + (-0x88)), 0 */ /* 0x1202D303: cmp dword ptr [ebp - 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(1.0); /* 0x1202D30A: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x13C)) = _v; } /* 0x1202D30C: fst dword ptr [ebp - 0x13c] */
    esi = ebp + (-0x13C); /* 0x1202D312: lea esi, [ebp - 0x13c] */
    fp_push(0.0); /* 0x1202D318: fldz  */
    edi = ebp + (-0x28); /* 0x1202D31A: lea edi, [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x138)) = _v; } /* 0x1202D31D: fst dword ptr [ebp - 0x138] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x134)) = _v; } /* 0x1202D323: fst dword ptr [ebp - 0x134] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x100)) = _v; } /* 0x1202D329: fst dword ptr [ebp - 0x100] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D32F: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xF8)) = _v; } /* 0x1202D330: fst dword ptr [ebp - 0xf8] */
    fp_xch(1); /* 0x1202D336: fxch st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D338: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xFC)) = _v; } /* 0x1202D339: fst dword ptr [ebp - 0xfc] */
    fp_xch(1); /* 0x1202D33F: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x118)) = _v; } /* 0x1202D341: fst dword ptr [ebp - 0x118] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x114)) = _v; } /* 0x1202D347: fstp dword ptr [ebp - 0x114] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D34D: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x1202D34E: fstp dword ptr [ebp - 0x110] */
    esi = ebp + (-0x100); /* 0x1202D354: lea esi, [ebp - 0x100] */
    edi = ebp + (-0x1C); /* 0x1202D35A: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D35D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D35E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D35F: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x118); /* 0x1202D360: lea esi, [ebp - 0x118] */
    edi = ebp + (-0x10); /* 0x1202D366: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D369: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D36A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D36B: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x7C)); /* 0x1202D36C: mov edi, dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x84)); /* 0x1202D36F: mov esi, dword ptr [ebp - 0x84] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202DA38; /* 0x1202D375: jne 0x1202da38 */
L_1202D37B:
    /* test edi, edi */ /* 0x1202D37B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202DA38; /* 0x1202D37D: jne 0x1202da38 */
L_1202D383:
    /* test esi, esi */ /* 0x1202D383: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202DA38; /* 0x1202D385: jne 0x1202da38 */
L_1202D38B:
    PUSH32(esp, 0x120014BCu); /* 0x1202D38B: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202D390: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202D392: push 0x10 */
    esi = POP32_VAL(esp); /* 0x1202D394: pop esi */
    eax = ebx; /* 0x1202D395: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1202D397: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202D399: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202D39C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202D39E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202D3A0: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202D3A1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202D3A6: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202D3A8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1202D3AA: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1202D3AC: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202D3AE: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x1202D3B1: push 0x120014bc */
    MEM32(ebp + (-0x88)) = edi; /* 0x1202D3B6: mov dword ptr [ebp - 0x88], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202D3BC: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202D3BE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202D3C0: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202D3C1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120014BCu); /* 0x1202D3C6: push 0x120014bc */
    esi = eax; /* 0x1202D3CB: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202D3CD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x1202D3CF: push 0x14 */
    edx = POP32_VAL(esp); /* 0x1202D3D1: pop edx */
    eax = ebx; /* 0x1202D3D2: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202D3D4: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202D3D6: seto cl */
    MEM32(ebp + (-0x7C)) = esi; /* 0x1202D3D9: mov dword ptr [ebp - 0x7c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202D3DC: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202D3DE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202D3E0: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202D3E1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1202D3E6: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1202D3E9: mov ecx, eax */
    MEM32(ebp + (-0x84)) = ecx; /* 0x1202D3EB: mov dword ptr [ebp - 0x84], ecx */
    /* test edi, edi */ /* 0x1202D3F1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DA0A; /* 0x1202D3F3: je 0x1202da0a */
L_1202D3F9:
    /* test esi, esi */ /* 0x1202D3F9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DA0A; /* 0x1202D3FB: je 0x1202da0a */
L_1202D401:
    /* test ecx, ecx */ /* 0x1202D401: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DA0A; /* 0x1202D403: je 0x1202da0a */
L_1202D409:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xD8)) = MEM32(ebp + (-0xD8)) & 0; /* 0x1202D409: and dword ptr [ebp - 0xd8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0xAC)); /* 0x1202D410: mov edx, dword ptr [ebp - 0xac] */
    MEM32(ebp + (-0xB8)) = ebx; /* 0x1202D416: mov dword ptr [ebp - 0xb8], ebx */
    MEM32(ebp + (-0xB0)) = ebx; /* 0x1202D41C: mov dword ptr [ebp - 0xb0], ebx */
    MEM32(ebp + (-0xB4)) = ebx; /* 0x1202D422: mov dword ptr [ebp - 0xb4], ebx */
    /* test ebx, ebx */ /* 0x1202D428: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202D938; /* 0x1202D42A: je 0x1202d938 */
L_1202D430:
    eax = ebp + (-0x68); /* 0x1202D430: lea eax, [ebp - 0x68] */
    MEM32(ebp + (-0xCC)) = eax; /* 0x1202D433: mov dword ptr [ebp - 0xcc], eax */
    eax = ebp + (-0x58); /* 0x1202D439: lea eax, [ebp - 0x58] */
    MEM32(ebp + (-0xC8)) = eax; /* 0x1202D43C: mov dword ptr [ebp - 0xc8], eax */
    eax = ebp + (-0x48); /* 0x1202D442: lea eax, [ebp - 0x48] */
    MEM32(ebp + (-0xC4)) = eax; /* 0x1202D445: mov dword ptr [ebp - 0xc4], eax */
    eax = esi + 0x4; /* 0x1202D44B: lea eax, [esi + 4] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x1202D44E: mov dword ptr [ebp - 0x8c], eax */
    eax = edi + 0xC; /* 0x1202D454: lea eax, [edi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1202D457: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x44u; /* 0x1202D45A: add edx, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x1202D45D: sub edi, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xD4)) = ebx; /* 0x1202D45F: mov dword ptr [ebp - 0xd4], ebx */
    ebx = MEM32(ebp + (-0x8C)); /* 0x1202D465: mov ebx, dword ptr [ebp - 0x8c] */
    MEM32(ebp + (-0x9C)) = ecx; /* 0x1202D46B: mov dword ptr [ebp - 0x9c], ecx */
    MEM32(ebp + (-0xC0)) = eax; /* 0x1202D471: mov dword ptr [ebp - 0xc0], eax */
    MEM32(ebp + (-0xE0)) = edx; /* 0x1202D477: mov dword ptr [ebp - 0xe0], edx */
    MEM32(ebp + (-0xF0)) = edi; /* 0x1202D47D: mov dword ptr [ebp - 0xf0], edi */
    esi = eax; /* 0x1202D483: mov esi, eax */
L_1202D485:
    eax = MEM32(edx + (-0x3C)); /* 0x1202D485: mov eax, dword ptr [edx - 0x3c] */
    fp_push((double)(int32_t)MEM32(edx + (-0x3C))); /* 0x1202D488: fild dword ptr [edx - 0x3c] */
    /* test eax, eax */ /* 0x1202D48B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202D495; /* 0x1202D48D: jns 0x1202d495 */
L_1202D48F:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202D48F: fadd dword ptr [0x120014d0] */
L_1202D495:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x1202D495: fstp dword ptr [esi - 0xc] */
    eax = MEM32(edx + (-0x3C)); /* 0x1202D498: mov eax, dword ptr [edx - 0x3c] */
    fp_push((double)(int32_t)MEM32(edx + (-0x3C))); /* 0x1202D49B: fild dword ptr [edx - 0x3c] */
    /* test eax, eax */ /* 0x1202D49E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202D4A8; /* 0x1202D4A0: jns 0x1202d4a8 */
L_1202D4A2:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202D4A2: fadd dword ptr [0x120014d0] */
L_1202D4A8:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + (-0x4)) = _v; } /* 0x1202D4A8: fstp dword ptr [ebx - 4] */
    eax = MEM32(edx + (-0x3C)); /* 0x1202D4AB: mov eax, dword ptr [edx - 0x3c] */
    fp_push((double)(int32_t)MEM32(edx + (-0x3C))); /* 0x1202D4AE: fild dword ptr [edx - 0x3c] */
    /* test eax, eax */ /* 0x1202D4B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202D4BB; /* 0x1202D4B3: jns 0x1202d4bb */
L_1202D4B5:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202D4B5: fadd dword ptr [0x120014d0] */
L_1202D4BB:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x4)) = _v; } /* 0x1202D4BB: fstp dword ptr [ecx - 4] */
    fp_push(*(float*)&MEM32(edx + (-0x4))); /* 0x1202D4BE: fld dword ptr [edx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x1202D4C1: fstp dword ptr [esi - 8] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1202D4C4: fld dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + ebx + 0x4) = _v; } /* 0x1202D4C6: fstp dword ptr [edi + ebx + 4] */
    edi = ebp + (-0x68); /* 0x1202D4CA: lea edi, [ebp - 0x68] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1202D4CD: fld dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1202D4D0: fstp dword ptr [esi] */
    esi = edx + (-0x34); /* 0x1202D4D2: lea esi, [edx - 0x34] */
    fp_push(0.0); /* 0x1202D4D5: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1202D4D7: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1202D4DA: fst dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1202D4DD: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1202D4E0: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1202D4E3: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1202D4E6: fst dword ptr [ebp - 0x48] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1202D4E9: fst dword ptr [ebp - 0x4c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1202D4EC: fst dword ptr [ebp - 0x50] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1202D4EF: fst dword ptr [ebp - 0x58] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1202D4F2: fst dword ptr [ebp - 0x5c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1202D4F5: fst dword ptr [ebp - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x1202D4F8: fstp dword ptr [ebp - 0x64] */
    fp_push(1.0); /* 0x1202D4FB: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1202D4FD: fst dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1202D500: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1202D503: fst dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x1202D506: fstp dword ptr [ebp - 0x68] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D509: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D50A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D50B: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = edx + (-0x24); /* 0x1202D50C: lea esi, [edx - 0x24] */
    edi = ebp + (-0x58); /* 0x1202D50F: lea edi, [ebp - 0x58] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D512: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D513: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D514: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = edx + (-0x14); /* 0x1202D515: lea esi, [edx - 0x14] */
    edi = ebp + (-0x48); /* 0x1202D518: lea edi, [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D51B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D51C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D51D: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x1202D51E: fld dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x1202D521: fld dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x1202D524: fld dword ptr [ebp - 0x68] */
    _st[0] *= _st[0]; /* 0x1202D527: fmul st(0), st(0) */
    fp_xch(2); /* 0x1202D529: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1202D52B: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202D52D: faddp st(2) */
    _st[0] *= _st[0]; /* 0x1202D52F: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202D531: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1202D533: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1202D539: fld dword ptr [ebp - 0x8c] */
    RECOMP_CALL(sub_121BF44C); /* 0x1202D53F: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1202D544: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1202D54A: fld dword ptr [ebp - 0x8c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x1202D550: fstp dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x1202D552: fld dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x1202D555: fld dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x1202D558: fld dword ptr [ebp - 0x58] */
    _st[0] *= _st[0]; /* 0x1202D55B: fmul st(0), st(0) */
    fp_xch(2); /* 0x1202D55D: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1202D55F: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202D561: faddp st(2) */
    _st[0] *= _st[0]; /* 0x1202D563: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202D565: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1202D567: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1202D56D: fld dword ptr [ebp - 0x8c] */
    RECOMP_CALL(sub_121BF44C); /* 0x1202D573: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1202D578: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1202D57E: fld dword ptr [ebp - 0x8c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x1202D584: fstp dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1202D587: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[0]; /* 0x1202D58A: fmul st(0), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1202D58C: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[0]; /* 0x1202D58F: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202D591: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1202D593: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[0]; /* 0x1202D596: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202D598: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1202D59A: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1202D5A0: fld dword ptr [ebp - 0x8c] */
    RECOMP_CALL(sub_121BF44C); /* 0x1202D5A6: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1202D5AB: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1202D5B1: fld dword ptr [ebp - 0x8c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x8) = _v; } /* 0x1202D5B7: fst dword ptr [ebx + 8] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1202D5BA: fld dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1202D5BC: fld dword ptr [ebx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D5BF: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D5C1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202D5C3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202D619; /* 0x1202D5C6: jne 0x1202d619 */
L_1202D5C8:
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1202D5C8: fld dword ptr [ebx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D5CB: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D5CD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D5CF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D5E5; /* 0x1202D5D2: jp 0x1202d5e5 */
L_1202D5D4:
    PUSH32(esp, 2); /* 0x1202D5D4: push 2 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202D5D6: fstp st(0) */
    ecx = POP32_VAL(esp); /* 0x1202D5D8: pop ecx */
    MEM32(ebp + (-0x90)) = 1; /* 0x1202D5D9: mov dword ptr [ebp - 0x90], 1 */
    goto L_1202D5FD; /* 0x1202D5E3: jmp 0x1202d5fd */
L_1202D5E5:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1202D5E5: fld dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202D5E7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D5E9: fcompp  */
    fp_pop(); fp_pop();
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202D5EB: inc ecx */
    _flag_k = FK_INC;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D5EC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D5EE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D606; /* 0x1202D5F1: jp 0x1202d606 */
L_1202D5F3:
    MEM32(ebp + (-0x90)) = 2; /* 0x1202D5F3: mov dword ptr [ebp - 0x90], 2 */
L_1202D5FD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x94))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x94)) = MEM32(ebp + (-0x94)) & 0; /* 0x1202D5FD: and dword ptr [ebp - 0x94], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202D65C; /* 0x1202D604: jmp 0x1202d65c */
L_1202D606:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x90)) = MEM32(ebp + (-0x90)) & 0; /* 0x1202D606: and dword ptr [ebp - 0x90], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x94)) = 2; /* 0x1202D60D: mov dword ptr [ebp - 0x94], 2 */
    goto L_1202D65C; /* 0x1202D617: jmp 0x1202d65c */
L_1202D619:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1202D619: fld dword ptr [ebx] */
    PUSH32(esp, 2); /* 0x1202D61B: push 2 */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D61D: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D61F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D621: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D635; /* 0x1202D624: jp 0x1202d635 */
L_1202D626:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x90)) = MEM32(ebp + (-0x90)) & 0; /* 0x1202D626: and dword ptr [ebp - 0x90], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202D62D: fstp st(0) */
    ecx = POP32_VAL(esp); /* 0x1202D62F: pop ecx */
L_1202D630:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202D630: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202D632: inc eax */
    _flag_k = FK_INC;
    goto L_1202D656; /* 0x1202D633: jmp 0x1202d656 */
L_1202D635:
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1202D635: fld dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202D638: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D63A: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D63C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D63E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D64C; /* 0x1202D641: jp 0x1202d64c */
L_1202D643:
    eax = POP32_VAL(esp); /* 0x1202D643: pop eax */
    MEM32(ebp + (-0x90)) = eax; /* 0x1202D644: mov dword ptr [ebp - 0x90], eax */
    RECOMP_BACKEDGE();
    goto L_1202D630; /* 0x1202D64A: jmp 0x1202d630 */
L_1202D64C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202D64C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202D64E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x90)) = eax; /* 0x1202D64F: mov dword ptr [ebp - 0x90], eax */
    eax = POP32_VAL(esp); /* 0x1202D655: pop eax */
L_1202D656:
    MEM32(ebp + (-0x94)) = eax; /* 0x1202D656: mov dword ptr [ebp - 0x94], eax */
L_1202D65C:
    edx = ecx; /* 0x1202D65C: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1202D65E: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1202D65E: shl edx, 2 */
    fp_push(*(float*)&MEM32(edx + ebx)); /* 0x1202D661: fld dword ptr [edx + ebx] */
    MEM32(ebp + (-0xA4)) = edx; /* 0x1202D664: mov dword ptr [ebp - 0xa4], edx */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12002058)); /* 0x1202D66A: fcomp qword ptr [0x12002058] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D670: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D672: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D688; /* 0x1202D675: jp 0x1202d688 */
L_1202D677:
    edi = MEM32(ebp + edx + (-0xCC)); /* 0x1202D677: mov edi, dword ptr [ebp + edx - 0xcc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x1202D67E: imul ecx, ecx, 0xc */
    esi = ebp + ecx + (-0x28); /* 0x1202D681: lea esi, [ebp + ecx - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D685: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D686: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D687: movsd dword ptr es:[edi], dword ptr [esi] */
L_1202D688:
    esi = MEM32(ebp + edx + (-0xCC)); /* 0x1202D688: mov esi, dword ptr [ebp + edx - 0xcc] */
    PUSH32(esp, esi); /* 0x1202D68F: push esi */
    PUSH32(esp, esi); /* 0x1202D690: push esi */
    MEM32(ebp + (-0x8C)) = esi; /* 0x1202D691: mov dword ptr [ebp - 0x8c], esi */
    RECOMP_CALL(sub_120301D9); /* 0x1202D697: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x90)); /* 0x1202D69C: mov ecx, dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebx + ecx * 4)); /* 0x1202D6A2: fld dword ptr [ebx + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12002058)); /* 0x1202D6A5: fcomp qword ptr [0x12002058] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D6AB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D6AD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D791; /* 0x1202D6B0: jp 0x1202d791 */
L_1202D6B6:
    fp_push(*(float*)&MEM32(esi)); /* 0x1202D6B6: fld dword ptr [esi] */
    _st[0] = fabs(_st[0]); /* 0x1202D6B8: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1202D6BA: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x1202D6C0: fld dword ptr [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF4)) = _v; } /* 0x1202D6C6: fstp dword ptr [ebp - 0xf4] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1202D6CC: fld dword ptr [esi + 4] */
    _st[0] = fabs(_st[0]); /* 0x1202D6CF: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1202D6D1: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x1202D6D7: fld dword ptr [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xEC)) = _v; } /* 0x1202D6DD: fstp dword ptr [ebp - 0xec] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1202D6E3: fld dword ptr [esi + 8] */
    _st[0] = fabs(_st[0]); /* 0x1202D6E6: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1202D6E8: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x1202D6EE: fld dword ptr [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1202D6F4: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0xF4))); /* 0x1202D6FA: fld dword ptr [ebp - 0xf4] */
    fp_push(*(float*)&MEM32(ebp + (-0xEC))); /* 0x1202D700: fld dword ptr [ebp - 0xec] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D706: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D708: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x1202D70A: fld dword ptr [ebp - 0x90] */
    /* test HI8(eax), 0x41u */ /* 0x1202D710: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202D9BD; /* 0x1202D713: jne 0x1202d9bd */
L_1202D719:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D719: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D71B: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202D71D: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x1202D71F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202D72C; /* 0x1202D722: jne 0x1202d72c */
L_1202D724:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202D724: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202D726: fstp st(0) */
L_1202D728:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202D728: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202D738; /* 0x1202D72A: jmp 0x1202d738 */
L_1202D72C:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D72C: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D72E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202D730: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202D728; /* 0x1202D733: je 0x1202d728 */
L_1202D735:
    PUSH32(esp, 2); /* 0x1202D735: push 2 */
    eax = POP32_VAL(esp); /* 0x1202D737: pop eax */
L_1202D738:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1202D738: fld dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1202D73B: imul eax, eax, 0xc */
    edi = MEM32(ebp + ecx * 4 + (-0xCC)); /* 0x1202D73E: mov edi, dword ptr [ebp + ecx*4 - 0xcc] */
    _st[0] *= (double)*(float*)ADDR(ebp + eax + (-0x20)); /* 0x1202D745: fmul dword ptr [ebp + eax - 0x20] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1202D749: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + eax + (-0x24)); /* 0x1202D74C: fmul dword ptr [ebp + eax - 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202D750: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x124)) = _v; } /* 0x1202D752: fstp dword ptr [ebp - 0x124] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1202D758: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + eax + (-0x28)); /* 0x1202D75B: fmul dword ptr [ebp + eax - 0x28] */
    fp_push(*(float*)&MEM32(ebp + eax + (-0x20))); /* 0x1202D75F: fld dword ptr [ebp + eax - 0x20] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1202D763: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202D765: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x120)) = _v; } /* 0x1202D767: fstp dword ptr [ebp - 0x120] */
    fp_push(*(float*)&MEM32(ebp + eax + (-0x24))); /* 0x1202D76D: fld dword ptr [ebp + eax - 0x24] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1202D771: fmul dword ptr [esi] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1202D773: fld dword ptr [esi + 4] */
    esi = ebp + (-0x124); /* 0x1202D776: lea esi, [ebp - 0x124] */
    _st[0] *= (double)*(float*)ADDR(ebp + eax + (-0x28)); /* 0x1202D77C: fmul dword ptr [ebp + eax - 0x28] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202D780: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x11C)) = _v; } /* 0x1202D782: fstp dword ptr [ebp - 0x11c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D788: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D789: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D78A: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x8C)); /* 0x1202D78B: mov esi, dword ptr [ebp - 0x8c] */
L_1202D791:
    edi = MEM32(ebp + ecx * 4 + (-0xCC)); /* 0x1202D791: mov edi, dword ptr [ebp + ecx*4 - 0xcc] */
    PUSH32(esp, edi); /* 0x1202D798: push edi */
    PUSH32(esp, edi); /* 0x1202D799: push edi */
    RECOMP_CALL(sub_120301D9); /* 0x1202D79A: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x94)); /* 0x1202D79F: mov ecx, dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebx + ecx * 4)); /* 0x1202D7A5: fld dword ptr [ebx + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12002058)); /* 0x1202D7A8: fcomp qword ptr [0x12002058] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D7AE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D7B0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D7FD; /* 0x1202D7B3: jp 0x1202d7fd */
L_1202D7B5:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1202D7B5: fld dword ptr [esi + 4] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x1202D7B8: fmul dword ptr [edi + 8] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1202D7BB: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x1202D7BE: fmul dword ptr [edi + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202D7C1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x130)) = _v; } /* 0x1202D7C3: fstp dword ptr [ebp - 0x130] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1202D7C9: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1202D7CC: fmul dword ptr [edi] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x1202D7CE: fld dword ptr [edi + 8] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1202D7D1: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202D7D3: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x12C)) = _v; } /* 0x1202D7D5: fstp dword ptr [ebp - 0x12c] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1202D7DB: fld dword ptr [edi + 4] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1202D7DE: fmul dword ptr [esi] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1202D7E0: fld dword ptr [esi + 4] */
    esi = ebp + (-0x130); /* 0x1202D7E3: lea esi, [ebp - 0x130] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1202D7E9: fmul dword ptr [edi] */
    edi = MEM32(ebp + ecx * 4 + (-0xCC)); /* 0x1202D7EB: mov edi, dword ptr [ebp + ecx*4 - 0xcc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202D7F2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x128)) = _v; } /* 0x1202D7F4: fstp dword ptr [ebp - 0x128] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D7FA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D7FB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D7FC: movsd dword ptr es:[edi], dword ptr [esi] */
L_1202D7FD:
    PUSH32(esp, MEM32(ebp + ecx * 4 + (-0xCC))); /* 0x1202D7FD: push dword ptr [ebp + ecx*4 - 0xcc] */
    PUSH32(esp, MEM32(ebp + ecx * 4 + (-0xCC))); /* 0x1202D804: push dword ptr [ebp + ecx*4 - 0xcc] */
    RECOMP_CALL(sub_120301D9); /* 0x1202D80B: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x68); /* 0x1202D810: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1202D813: push eax */
    RECOMP_CALL(sub_12030DE1); /* 0x1202D814: call 0x12030de1 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x1202D819: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x1202D81F: fld dword ptr [ebp - 0x94] */
    fp_push(0.0); /* 0x1202D825: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D827: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D829: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202D82B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202D87B; /* 0x1202D82E: jne 0x1202d87b */
L_1202D830:
    eax = MEM32(ebp + (-0xA4)); /* 0x1202D830: mov eax, dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(eax + ebx)); /* 0x1202D836: fld dword ptr [eax + ebx] */
    edi = MEM32(ebp + (-0x8C)); /* 0x1202D839: mov edi, dword ptr [ebp - 0x8c] */
    _st[0] = -_st[0]; /* 0x1202D83F: fchs  */
    esi = ebp + (-0x10C); /* 0x1202D841: lea esi, [ebp - 0x10c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ebx) = _v; } /* 0x1202D847: fstp dword ptr [eax + ebx] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1202D84A: fld dword ptr [edi] */
    _st[0] = -_st[0]; /* 0x1202D84C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x1202D84E: fstp dword ptr [ebp - 0x10c] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1202D854: fld dword ptr [edi + 4] */
    _st[0] = -_st[0]; /* 0x1202D857: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x108)) = _v; } /* 0x1202D859: fstp dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x1202D85F: fld dword ptr [edi + 8] */
    _st[0] = -_st[0]; /* 0x1202D862: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x104)) = _v; } /* 0x1202D864: fstp dword ptr [ebp - 0x104] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D86A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D86B: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] = -_st[0]; /* 0x1202D86C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x1202D86E: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x1202D874: fld dword ptr [ebp - 0x94] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D87A: movsd dword ptr es:[edi], dword ptr [esi] */
L_1202D87B:
    fp_push(1.0); /* 0x1202D87B: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202D87D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x1202D87F: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x1202D885: fld dword ptr [ebp - 0x94] */
    _st[0] *= _st[0]; /* 0x1202D88B: fmul st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x1202D88D: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x1202D893: fld dword ptr [ebp - 0xa4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12002058)); /* 0x1202D899: fcomp qword ptr [0x12002058] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D89F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202D8A1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202D8B9; /* 0x1202D8A4: jne 0x1202d8b9 */
L_1202D8A6:
    /* cmp MEM32(ebp + (-0xD8)), 0 */ /* 0x1202D8A6: cmp dword ptr [ebp - 0xd8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202D8B9; /* 0x1202D8AD: jne 0x1202d8b9 */
L_1202D8AF:
    MEM32(ebp + (-0xD8)) = 1; /* 0x1202D8AF: mov dword ptr [ebp - 0xd8], 1 */
L_1202D8B9:
    eax = ebp + (-0x68); /* 0x1202D8B9: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1202D8BC: push eax */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x1202D8BD: push dword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_12033108); /* 0x1202D8C3: call 0x12033108 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x9C)); /* 0x1202D8C8: mov ecx, dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1202D8CE: fld dword ptr [ecx] */
    esi = MEM32(ebp + (-0xC0)); /* 0x1202D8D0: mov esi, dword ptr [ebp - 0xc0] */
    edx = MEM32(ebp + (-0xE0)); /* 0x1202D8D6: mov edx, dword ptr [ebp - 0xe0] */
    _st[0] = -_st[0]; /* 0x1202D8DC: fchs  */
    edi = MEM32(ebp + (-0xF0)); /* 0x1202D8DE: mov edi, dword ptr [ebp - 0xf0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1202D8E4: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1202D8E6: fld dword ptr [ecx + 4] */
    PUSH32(esp, 0x10u); /* 0x1202D8E9: push 0x10 */
    _st[0] = -_st[0]; /* 0x1202D8EB: fchs  */
    eax = POP32_VAL(esp); /* 0x1202D8ED: pop eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1202D8EE: fstp dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1202D8F1: add esi, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1202D8F3: fld dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1202D8F6: add ebx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x14u); /* 0x1202D8F8: push 0x14 */
    _st[0] = -_st[0]; /* 0x1202D8FA: fchs  */
    eax = POP32_VAL(esp); /* 0x1202D8FC: pop eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1202D8FD: fstp dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x48u; /* 0x1202D900: add edx, 0x48 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1202D903: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xD4)) = MEM32(ebp + (-0xD4)) - 1; /* 0x1202D905: dec dword ptr [ebp - 0xd4] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xE0)) = edx; /* 0x1202D90B: mov dword ptr [ebp - 0xe0], edx */
    MEM32(ebp + (-0xC0)) = esi; /* 0x1202D911: mov dword ptr [ebp - 0xc0], esi */
    MEM32(ebp + (-0x9C)) = ecx; /* 0x1202D917: mov dword ptr [ebp - 0x9c], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202D485; /* 0x1202D91D: jne 0x1202d485 */
L_1202D923:
    ebx = MEM32(ebp + (-0xA8)); /* 0x1202D923: mov ebx, dword ptr [ebp - 0xa8] */
    ecx = MEM32(ebp + (-0x84)); /* 0x1202D929: mov ecx, dword ptr [ebp - 0x84] */
    esi = MEM32(ebp + (-0x7C)); /* 0x1202D92F: mov esi, dword ptr [ebp - 0x7c] */
    edi = MEM32(ebp + (-0x88)); /* 0x1202D932: mov edi, dword ptr [ebp - 0x88] */
L_1202D938:
    /* cmp ebx, 1 */ /* 0x1202D938: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202D9FF; /* 0x1202D93B: jbe 0x1202d9ff */
L_1202D941:
    fp_push(0.0); /* 0x1202D941: fldz  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1202D943: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202D946: dec ebx */
    _flag_k = FK_DEC;
L_1202D947:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x1202D947: fld dword ptr [ecx - 8] */
    edi = ecx + 0xC; /* 0x1202D94A: lea edi, [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1202D94D: fmul dword ptr [edi] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x1202D94F: fld dword ptr [ecx - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x1202D952: fmul dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202D955: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1202D957: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1202D95A: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202D95C: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1202D95E: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x1202D961: fmul dword ptr [ecx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202D964: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x1202D966: fstp dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x1202D96C: fld dword ptr [ebp - 0xa8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D972: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D974: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D976: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D9B0; /* 0x1202D979: jp 0x1202d9b0 */
L_1202D97B:
    fp_push(*(float*)&MEM32(edi)); /* 0x1202D97B: fld dword ptr [edi] */
    esi = ebp + (-0x14C); /* 0x1202D97D: lea esi, [ebp - 0x14c] */
    _st[0] = -_st[0]; /* 0x1202D983: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14C)) = _v; } /* 0x1202D985: fstp dword ptr [ebp - 0x14c] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1202D98B: fld dword ptr [ecx + 0x10] */
    _st[0] = -_st[0]; /* 0x1202D98E: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x148)) = _v; } /* 0x1202D990: fstp dword ptr [ebp - 0x148] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1202D996: fld dword ptr [ecx + 0x14] */
    _st[0] = -_st[0]; /* 0x1202D999: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x144)) = _v; } /* 0x1202D99B: fstp dword ptr [ebp - 0x144] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1202D9A1: fld dword ptr [ecx + 0x18] */
    _st[0] = -_st[0]; /* 0x1202D9A4: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x140)) = _v; } /* 0x1202D9A6: fstp dword ptr [ebp - 0x140] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D9AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D9AD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D9AE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202D9AF: movsd dword ptr es:[edi], dword ptr [esi] */
L_1202D9B0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x1202D9B0: add ecx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202D9B3: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202D947; /* 0x1202D9B4: jne 0x1202d947 */
L_1202D9B6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202D9B6: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_1202D17D; /* 0x1202D9B8: jmp 0x1202d17d */
L_1202D9BD:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202D9BD: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D9BF: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202D9C1: fstp st(2) */
    /* test HI8(eax), 0x41u */ /* 0x1202D9C3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202D9CE; /* 0x1202D9C6: jne 0x1202d9ce */
L_1202D9C8:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202D9C8: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202D9CA: fstp st(0) */
    goto L_1202D9DB; /* 0x1202D9CC: jmp 0x1202d9db */
L_1202D9CE:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202D9CE: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202D9D0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202D9D2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202D735; /* 0x1202D9D5: jp 0x1202d735 */
L_1202D9DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202D9DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202D9DD: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1202D738; /* 0x1202D9DE: jmp 0x1202d738 */
L_1202D9E3:
    ebx = MEM32(ebp + (-0x98)); /* 0x1202D9E3: mov ebx, dword ptr [ebp - 0x98] */
    RECOMP_BACKEDGE();
    goto L_1202D189; /* 0x1202D9E9: jmp 0x1202d189 */
L_1202D9EE:
    ebx = MEM32(ebp + (-0x98)); /* 0x1202D9EE: mov ebx, dword ptr [ebp - 0x98] */
    edi = MEM32(ebp + (-0x88)); /* 0x1202D9F4: mov edi, dword ptr [ebp - 0x88] */
    RECOMP_BACKEDGE();
    goto L_1202D18C; /* 0x1202D9FA: jmp 0x1202d18c */
L_1202D9FF:
    ebx = MEM32(ebp + (-0x98)); /* 0x1202D9FF: mov ebx, dword ptr [ebp - 0x98] */
    RECOMP_BACKEDGE();
    goto L_1202D18C; /* 0x1202DA05: jmp 0x1202d18c */
L_1202DA0A:
    ebx = 0x8007000Eu; /* 0x1202DA0A: mov ebx, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1202D042; /* 0x1202DA0F: jmp 0x1202d042 */
L_1202DA14:
    ebx = 0x80070057u; /* 0x1202DA14: mov ebx, 0x80070057 */
    RECOMP_BACKEDGE();
    goto L_1202D042; /* 0x1202DA19: jmp 0x1202d042 */
L_1202DA1E:
    ebx = 0x80070057u; /* 0x1202DA1E: mov ebx, 0x80070057 */
    RECOMP_BACKEDGE();
    goto L_1202D048; /* 0x1202DA23: jmp 0x1202d048 */
L_1202DA28:
    esi = MEM32(ebp + (-0x84)); /* 0x1202DA28: mov esi, dword ptr [ebp - 0x84] */
    ebx = 0x80070057u; /* 0x1202DA2E: mov ebx, 0x80070057 */
    RECOMP_BACKEDGE();
    goto L_1202D04B; /* 0x1202DA33: jmp 0x1202d04b */
L_1202DA38:
    ebx = 0x80070057u; /* 0x1202DA38: mov ebx, 0x80070057 */
    RECOMP_BACKEDGE();
    goto L_1202D04B; /* 0x1202DA3D: jmp 0x1202d04b */
L_1202DA42:
    /* cmp MEM32(ebp + (-0xB8)), 0 */ /* 0x1202DA42: cmp dword ptr [ebp - 0xb8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0xB0)); /* 0x1202DA49: mov edx, dword ptr [ebp - 0xb0] */
    if (CMP_A(_flag_a, _flag_b)) goto L_1202DA5E; /* 0x1202DA4F: ja 0x1202da5e */
L_1202DA51:
    /* cmp MEM32(ebp + (-0xB4)), 0 */ /* 0x1202DA51: cmp dword ptr [ebp - 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1202DA5E; /* 0x1202DA58: ja 0x1202da5e */
L_1202DA5A:
    /* test edx, edx */ /* 0x1202DA5A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DAA8; /* 0x1202DA5C: je 0x1202daa8 */
L_1202DA5E:
    eax = MEM32(ebp + (-0x80)); /* 0x1202DA5E: mov eax, dword ptr [ebp - 0x80] */
    /* test eax, eax */ /* 0x1202DA61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DAAB; /* 0x1202DA63: je 0x1202daab */
L_1202DA65:
    ecx = MEM32(ebp + (-0xE4)); /* 0x1202DA65: mov ecx, dword ptr [ebp - 0xe4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) & 0; /* 0x1202DA6B: and dword ptr [ebp - 0x80], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1202DA6F: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0xB4)); /* 0x1202DA71: mov eax, dword ptr [ebp - 0xb4] */
    MEM32(ecx + 0x10) = esi; /* 0x1202DA77: mov dword ptr [ecx + 0x10], esi */
    esi = MEM32(ebp + (-0x84)); /* 0x1202DA7A: mov esi, dword ptr [ebp - 0x84] */
    MEM32(ecx + 0x8) = eax; /* 0x1202DA80: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0xB8)); /* 0x1202DA83: mov eax, dword ptr [ebp - 0xb8] */
    MEM32(ecx + 0x14) = esi; /* 0x1202DA89: mov dword ptr [ecx + 0x14], esi */
    MEM32(ecx + 0x18) = edi; /* 0x1202DA8C: mov dword ptr [ecx + 0x18], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202DA8F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202DA91: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x88)) = MEM32(ebp + (-0x88)) & esi; /* 0x1202DA93: and dword ptr [ebp - 0x88], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = edx; /* 0x1202DA99: mov dword ptr [ecx + 4], edx */
    MEM32(ecx + 0xC) = eax; /* 0x1202DA9C: mov dword ptr [ecx + 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_1202D04B; /* 0x1202DA9F: jmp 0x1202d04b */
L_1202DAA4:
    eax = ecx; /* 0x1202DAA4: mov eax, ecx */
    goto L_1202DAAB; /* 0x1202DAA6: jmp 0x1202daab */
L_1202DAA8:
    eax = MEM32(ebp + (-0x80)); /* 0x1202DAA8: mov eax, dword ptr [ebp - 0x80] */
L_1202DAAB:
    ebx = 0x80004005u; /* 0x1202DAAB: mov ebx, 0x80004005 */
    goto L_1202DAB5; /* 0x1202DAB0: jmp 0x1202dab5 */
L_1202DAB2:
    eax = MEM32(ebp + (-0x80)); /* 0x1202DAB2: mov eax, dword ptr [ebp - 0x80] */
L_1202DAB5:
    edi = MEM32(ebp + (-0x7C)); /* 0x1202DAB5: mov edi, dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x84)); /* 0x1202DAB8: mov esi, dword ptr [ebp - 0x84] */
    RECOMP_BACKEDGE();
    goto L_1202D04E; /* 0x1202DABE: jmp 0x1202d04e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1202DAC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202DAC8u);

L_1202DAC8:
    edi = edi; /* 0x1202DAC8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202DACA: push ebp */
    ebp = esp; /* 0x1202DACB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x1202DACD: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202DAD0: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202DAD5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202DAD7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1202DADA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1202DADD: push ebx */
    MEM32(ebp + (-0x38)) = eax; /* 0x1202DADE: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + 0x10); /* 0x1202DAE1: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1202DAE4: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202DAE5: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1202DAE8: mov dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DAEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1202DAED: push edi */
    edi = eax; /* 0x1202DAEE: mov edi, eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x1202DAF0: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x1202DAF3: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x1202DAF6: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x1202DAF9: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x1202DAFC: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1202DAFF: push eax */
    PUSH32(esp, esi); /* 0x1202DB00: push esi */
    MEM32(ebp + (-0x3C)) = esi; /* 0x1202DB01: mov dword ptr [ebp - 0x3c], esi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1202DB04: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_CALL(sub_1202C4CA); /* 0x1202DB07: call 0x1202c4ca */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DB0C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DB0E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DC82; /* 0x1202DB10: js 0x1202dc82 */
L_1202DB16:
    ecx = MEM32(esi); /* 0x1202DB16: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x34); /* 0x1202DB18: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1202DB1B: push eax */
    PUSH32(esp, esi); /* 0x1202DB1C: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1202DB1D: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202DB20: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1202DB22: mov dword ptr [ebp - 0x2c], ecx */
    /* cmp MEM32(ebp + (-0x34)), ecx */ /* 0x1202DB25: cmp dword ptr [ebp - 0x34], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202DC7C; /* 0x1202DB28: jbe 0x1202dc7c */
L_1202DB2E:
    eax = MEM32(esi); /* 0x1202DB2E: mov eax, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x1202DB30: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x1202DB33: push edx */
    PUSH32(esp, ecx); /* 0x1202DB34: push ecx */
    PUSH32(esp, esi); /* 0x1202DB35: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1202DB36: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DB39: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DB3B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DBF1; /* 0x1202DB3D: js 0x1202dbf1 */
L_1202DB43:
    eax = MEM32(ebp + (-0x18)); /* 0x1202DB43: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x1202DB46: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x14); /* 0x1202DB48: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1202DB4B: push edx */
    PUSH32(esp, eax); /* 0x1202DB4C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1202DB4D: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DB50: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DB52: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DC82; /* 0x1202DB54: js 0x1202dc82 */
L_1202DB5A:
    PUSH32(esp, 4); /* 0x1202DB5A: push 4 */
    ecx = POP32_VAL(esp); /* 0x1202DB5C: pop ecx */
    edi = ebp + (-0x14); /* 0x1202DB5D: lea edi, [ebp - 0x14] */
    esi = 0x12002004u; /* 0x1202DB60: mov esi, 0x12002004 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DB65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202DB67: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1202DB69: mov edi, dword ptr [ebp - 0x1c] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202DBE0; /* 0x1202DB6C: jne 0x1202dbe0 */
L_1202DB6E:
    PUSH32(esp, 0x120014BCu); /* 0x1202DB6E: push 0x120014bc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202DB73: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 0x20u); /* 0x1202DB74: push 0x20 */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1202DB76: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_CALL(sub_12018970); /* 0x1202DB79: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202DB7E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202DB80: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202DB81: pop ecx */
    /* test esi, esi */ /* 0x1202DB82: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DBA1; /* 0x1202DB84: je 0x1202dba1 */
L_1202DB86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DB86: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1202DB88: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x1202DB8A: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x1202DB8D: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = eax; /* 0x1202DB90: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x1202DB93: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x1202DB96: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x18) = eax; /* 0x1202DB99: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = eax; /* 0x1202DB9C: mov dword ptr [esi + 0x1c], eax */
    goto L_1202DBA3; /* 0x1202DB9F: jmp 0x1202dba3 */
L_1202DBA1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202DBA1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202DBA3:
    /* test esi, esi */ /* 0x1202DBA3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DC05; /* 0x1202DBA5: je 0x1202dc05 */
L_1202DBA7:
    eax = MEM32(ebp + (-0x24)); /* 0x1202DBA7: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1202DBAA: push esi */
    MEM32(esi + 0x1C) = eax; /* 0x1202DBAB: mov dword ptr [esi + 0x1c], eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1202DBAE: push dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x24)) = esi; /* 0x1202DBB1: mov dword ptr [ebp - 0x24], esi */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1202DBB4: push dword ptr [ebp - 0x38] */
    RECOMP_CALL(sub_1202CF08); /* 0x1202DBB7: call 0x1202cf08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DBBC: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DBBE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202DBE0; /* 0x1202DBC0: jns 0x1202dbe0 */
L_1202DBC2:
    eax = MEM32(esi + 0x1C); /* 0x1202DBC2: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0; /* 0x1202DBC5: and dword ptr [esi + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1202DBC9: dec edi */
    _flag_k = FK_DEC;
    ecx = esi; /* 0x1202DBCA: mov ecx, esi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1202DBCC: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1202DBCF: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1202C043); /* 0x1202DBD2: call 0x1202c043 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202DBD7: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202DBD8: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202DBDD: pop ecx */
    goto L_1202DBF1; /* 0x1202DBDE: jmp 0x1202dbf1 */
L_1202DBE0:
    ecx = MEM32(ebp + (-0x18)); /* 0x1202DBE0: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x1202DBE3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DBF1; /* 0x1202DBE5: je 0x1202dbf1 */
L_1202DBE7:
    eax = MEM32(ecx); /* 0x1202DBE7: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202DBE9: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202DBEA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1202DBED: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202DBF1:
    ecx = MEM32(ebp + (-0x2C)); /* 0x1202DBF1: mov ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202DBF4: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1202DBF5: mov dword ptr [ebp - 0x2c], ecx */
    /* cmp ecx, MEM32(ebp + (-0x34)) */ /* 0x1202DBF8: cmp ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202DC0C; /* 0x1202DBFB: jae 0x1202dc0c */
L_1202DBFD:
    esi = MEM32(ebp + (-0x3C)); /* 0x1202DBFD: mov esi, dword ptr [ebp - 0x3c] */
    RECOMP_BACKEDGE();
    goto L_1202DB2E; /* 0x1202DC00: jmp 0x1202db2e */
L_1202DC05:
    ebx = 0x8007000Eu; /* 0x1202DC05: mov ebx, 0x8007000e */
    goto L_1202DC82; /* 0x1202DC0A: jmp 0x1202dc82 */
L_1202DC0C:
    /* test edi, edi */ /* 0x1202DC0C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DC7C; /* 0x1202DC0E: je 0x1202dc7c */
L_1202DC10:
    eax = ebp + (-0x20); /* 0x1202DC10: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1202DC13: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DC14: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1202DC16: push eax */
    PUSH32(esp, eax); /* 0x1202DC17: push eax */
    PUSH32(esp, edi); /* 0x1202DC18: push edi */
    PUSH32(esp, eax); /* 0x1202DC19: push eax */
    eax = MEM32(ebp + (-0x38)); /* 0x1202DC1A: mov eax, dword ptr [ebp - 0x38] */
    fp_push(*(double*)ADDR(eax + 0x18)); /* 0x1202DC1D: fld qword ptr [eax + 0x18] */
    PUSH32(esp, ecx); /* 0x1202DC20: push ecx */
    PUSH32(esp, ecx); /* 0x1202DC21: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1202DC22: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1202DC25: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1202BE59); /* 0x1202DC28: call 0x1202be59 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DC2D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DC2F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DC82; /* 0x1202DC31: js 0x1202dc82 */
L_1202DC33:
    esi = MEM32(ebp + (-0x24)); /* 0x1202DC33: mov esi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202DC36: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x1202DC38: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202DC6E; /* 0x1202DC3B: jbe 0x1202dc6e */
L_1202DC3D:
    eax = MEM32(ebp + (-0x20)); /* 0x1202DC3D: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax); /* 0x1202DC40: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1202DC42: push 0 */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1202DC44: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1202DC47: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1202DC4A: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1202DC4D: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1202DC50: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1202DC53: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1202DC56: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1202DC58: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x80)); /* 0x1202DC59: call dword ptr [ecx + 0x80] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DC5F: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DC61: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DC82; /* 0x1202DC63: js 0x1202dc82 */
L_1202DC65:
    esi = MEM32(esi + 0x1C); /* 0x1202DC65: mov esi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202DC68: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x1C)) */ /* 0x1202DC69: cmp edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202DC3D; /* 0x1202DC6C: jb 0x1202dc3d */
L_1202DC6E:
    eax = MEM32(ebp + (-0x20)); /* 0x1202DC6E: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x30)); /* 0x1202DC71: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1202DC74: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1202DC78: mov dword ptr [ecx], eax */
    goto L_1202DC82; /* 0x1202DC7A: jmp 0x1202dc82 */
L_1202DC7C:
    ecx = MEM32(ebp + (-0x30)); /* 0x1202DC7C: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1202DC7F: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202DC82:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1202DC82: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_121BF388); /* 0x1202DC85: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x24)); /* 0x1202DC8A: mov esi, dword ptr [ebp - 0x24] */
    ecx = POP32_VAL(esp); /* 0x1202DC8D: pop ecx */
    /* test esi, esi */ /* 0x1202DC8E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DCA0; /* 0x1202DC90: je 0x1202dca0 */
L_1202DC92:
    ecx = esi; /* 0x1202DC92: mov ecx, esi */
    RECOMP_CALL(sub_1202C043); /* 0x1202DC94: call 0x1202c043 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202DC99: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202DC9A: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202DC9F: pop ecx */
L_1202DCA0:
    ecx = MEM32(ebp + (-0x20)); /* 0x1202DCA0: mov ecx, dword ptr [ebp - 0x20] */
    /* test ecx, ecx */ /* 0x1202DCA3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DCB1; /* 0x1202DCA5: je 0x1202dcb1 */
L_1202DCA7:
    eax = MEM32(ecx); /* 0x1202DCA7: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202DCA9: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202DCAA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1202DCAD: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202DCB1:
    ecx = MEM32(ebp + (-0x18)); /* 0x1202DCB1: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x1202DCB4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DCBE; /* 0x1202DCB6: je 0x1202dcbe */
L_1202DCB8:
    eax = MEM32(ecx); /* 0x1202DCB8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202DCBA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202DCBB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202DCBE:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202DCBE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202DCC1: pop edi */
    esi = POP32_VAL(esp); /* 0x1202DCC2: pop esi */
    eax = ebx; /* 0x1202DCC3: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202DCC5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202DCC7: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202DCC8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202DCCD: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202DCCE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202DCD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202DCD6u);

L_1202DCD6:
    edi = edi; /* 0x1202DCD6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202DCD8: push ebp */
    ebp = esp; /* 0x1202DCD9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x1202DCDB: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202DCDE: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202DCE3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202DCE5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1202DCE8: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1202DCEB: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1202DCEE: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1202DCF1: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202DCF2: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1202DCF5: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + 0x14); /* 0x1202DCF8: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1202DCFB: push esi */
    PUSH32(esp, edi); /* 0x1202DCFC: push edi */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1202DCFD: mov dword ptr [ebp - 0x3c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DD00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1202DD02: lea ecx, [ebp - 0x44] */
    edi = eax; /* 0x1202DD05: mov edi, eax */
    PUSH32(esp, ecx); /* 0x1202DD07: push ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1202DD08: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1202DD0B: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x30)) = eax; /* 0x1202DD0E: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x1202DD11: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x34)) = eax; /* 0x1202DD14: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebx); /* 0x1202DD17: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1202DD19: push ebx */
    MEM32(ebp + (-0x54)) = ebx; /* 0x1202DD1A: mov dword ptr [ebp - 0x54], ebx */
    MEM32(ebp + (-0x18)) = edi; /* 0x1202DD1D: mov dword ptr [ebp - 0x18], edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202DD20: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202DD23: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = ecx; /* 0x1202DD25: mov dword ptr [ebp - 0x40], ecx */
    /* cmp MEM32(ebp + (-0x44)), ecx */ /* 0x1202DD28: cmp dword ptr [ebp - 0x44], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202E046; /* 0x1202DD2B: jbe 0x1202e046 */
L_1202DD31:
    eax = MEM32(ebx); /* 0x1202DD31: mov eax, dword ptr [ebx] */
    edx = ebp + (-0x24); /* 0x1202DD33: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x1202DD36: push edx */
    PUSH32(esp, ecx); /* 0x1202DD37: push ecx */
    PUSH32(esp, ebx); /* 0x1202DD38: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1202DD39: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DD3C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DD3E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DF15; /* 0x1202DD40: js 0x1202df15 */
L_1202DD46:
    eax = MEM32(ebp + (-0x24)); /* 0x1202DD46: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(eax); /* 0x1202DD49: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x14); /* 0x1202DD4B: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1202DD4E: push edx */
    PUSH32(esp, eax); /* 0x1202DD4F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1202DD50: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DD53: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DD55: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DF15; /* 0x1202DD57: js 0x1202df15 */
L_1202DD5D:
    PUSH32(esp, 4); /* 0x1202DD5D: push 4 */
    edx = POP32_VAL(esp); /* 0x1202DD5F: pop edx */
    ecx = edx; /* 0x1202DD60: mov ecx, edx */
    edi = 0x12001FD4u; /* 0x1202DD62: mov edi, 0x12001fd4 */
    esi = ebp + (-0x14); /* 0x1202DD67: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DD6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202DD6C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202DDBA; /* 0x1202DD6E: jne 0x1202ddba */
L_1202DD70:
    esi = MEM32(ebp + (-0x2C)); /* 0x1202DD70: mov esi, dword ptr [ebp - 0x2c] */
    eax = MEM32(esi + 0xC); /* 0x1202DD73: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1202DD76: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x28); /* 0x1202DD78: lea edx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x1202DD7B: push edx */
    PUSH32(esp, 0); /* 0x1202DD7C: push 0 */
    PUSH32(esp, eax); /* 0x1202DD7E: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1202DD7F: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DD81: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DD83: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E02E; /* 0x1202DD85: js 0x1202e02e */
L_1202DD8B:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1202DD8B: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1202DD8E: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1202DD91: push esi */
    RECOMP_CALL(sub_1202C0C0); /* 0x1202DD92: call 0x1202c0c0 */
    RECOMP_FLAGS_IN();
L_1202DD97:
    edi = MEM32(ebp + (-0x18)); /* 0x1202DD97: mov edi, dword ptr [ebp - 0x18] */
    ebx = eax; /* 0x1202DD9A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DD9C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DF15; /* 0x1202DD9E: js 0x1202df15 */
L_1202DDA4:
    ecx = MEM32(ebp + (-0x30)); /* 0x1202DDA4: mov ecx, dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x28)); /* 0x1202DDA7: mov eax, dword ptr [ebp - 0x28] */
    /* test ecx, ecx */ /* 0x1202DDAA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202DEC0; /* 0x1202DDAC: jne 0x1202dec0 */
L_1202DDB2:
    MEM32(ebp + (-0x1C)) = eax; /* 0x1202DDB2: mov dword ptr [ebp - 0x1c], eax */
    goto L_1202DEC6; /* 0x1202DDB5: jmp 0x1202dec6 */
L_1202DDBA:
    ecx = edx; /* 0x1202DDBA: mov ecx, edx */
    edi = 0x12001D48u; /* 0x1202DDBC: mov edi, 0x12001d48 */
    esi = ebp + (-0x14); /* 0x1202DDC1: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DDC4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202DDC6: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202DE0F; /* 0x1202DDC8: jne 0x1202de0f */
L_1202DDCA:
    eax = MEM32(ebp + (-0x24)); /* 0x1202DDCA: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(eax); /* 0x1202DDCD: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x48); /* 0x1202DDCF: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x1202DDD2: push edx */
    edx = ebp + (-0x50); /* 0x1202DDD3: lea edx, [ebp - 0x50] */
    PUSH32(esp, edx); /* 0x1202DDD6: push edx */
    PUSH32(esp, eax); /* 0x1202DDD7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1202DDD8: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DDDB: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DDDD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E02E; /* 0x1202DDDF: js 0x1202e02e */
L_1202DDE5:
    /* cmp MEM32(ebp + (-0x50)), 4 */ /* 0x1202DDE5: cmp dword ptr [ebp - 0x50], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202DEE5; /* 0x1202DDE9: jne 0x1202dee5 */
L_1202DDEF:
    eax = MEM32(ebp + (-0x48)); /* 0x1202DDEF: mov eax, dword ptr [ebp - 0x48] */
    eax = MEM32(eax); /* 0x1202DDF2: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x58)) = eax; /* 0x1202DDF4: mov dword ptr [ebp - 0x58], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x58))); /* 0x1202DDF7: fild dword ptr [ebp - 0x58] */
    /* test eax, eax */ /* 0x1202DDFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202DE04; /* 0x1202DDFC: jns 0x1202de04 */
L_1202DDFE:
    _st[0] += *(double*)ADDR(0x12002060); /* 0x1202DDFE: fadd qword ptr [0x12002060] */
L_1202DE04:
    esi = MEM32(ebp + (-0x2C)); /* 0x1202DE04: mov esi, dword ptr [ebp - 0x2c] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x18) = _v; } /* 0x1202DE07: fstp qword ptr [esi + 0x18] */
    goto L_1202DEE8; /* 0x1202DE0A: jmp 0x1202dee8 */
L_1202DE0F:
    ecx = edx; /* 0x1202DE0F: mov ecx, edx */
    edi = 0x12001D58u; /* 0x1202DE11: mov edi, 0x12001d58 */
    esi = ebp + (-0x14); /* 0x1202DE16: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DE19: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202DE1B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202DE31; /* 0x1202DE1D: jne 0x1202de31 */
L_1202DE1F:
    esi = MEM32(ebp + (-0x2C)); /* 0x1202DE1F: mov esi, dword ptr [ebp - 0x2c] */
    eax = ebp + (-0x38); /* 0x1202DE22: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1202DE25: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1202DE26: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1202DE29: push esi */
    RECOMP_CALL(sub_1202C522); /* 0x1202DE2A: call 0x1202c522 */
    RECOMP_FLAGS_IN();
    goto L_1202DE51; /* 0x1202DE2F: jmp 0x1202de51 */
L_1202DE31:
    ecx = edx; /* 0x1202DE31: mov ecx, edx */
    edi = 0x12002014u; /* 0x1202DE33: mov edi, 0x12002014 */
    esi = ebp + (-0x14); /* 0x1202DE38: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DE3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202DE3D: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202DE99; /* 0x1202DE3F: jne 0x1202de99 */
L_1202DE41:
    esi = MEM32(ebp + (-0x2C)); /* 0x1202DE41: mov esi, dword ptr [ebp - 0x2c] */
    eax = ebp + (-0x38); /* 0x1202DE44: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1202DE47: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1202DE48: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1202DE4B: push esi */
    RECOMP_CALL(sub_1202DAC8); /* 0x1202DE4C: call 0x1202dac8 */
    RECOMP_FLAGS_IN();
L_1202DE51:
    ebx = eax; /* 0x1202DE51: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DE53: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E02E; /* 0x1202DE55: js 0x1202e02e */
L_1202DE5B:
    edi = MEM32(ebp + (-0x38)); /* 0x1202DE5B: mov edi, dword ptr [ebp - 0x38] */
    /* test edi, edi */ /* 0x1202DE5E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DEE8; /* 0x1202DE60: je 0x1202dee8 */
L_1202DE66:
    PUSH32(esp, 0x120014BCu); /* 0x1202DE66: push 0x120014bc */
    PUSH32(esp, 8); /* 0x1202DE6B: push 8 */
    RECOMP_CALL(sub_12018970); /* 0x1202DE6D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202DE72: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202DE73: pop ecx */
    /* test eax, eax */ /* 0x1202DE74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DE82; /* 0x1202DE76: je 0x1202de82 */
L_1202DE78:
    MEM32(eax) = edi; /* 0x1202DE78: mov dword ptr [eax], edi */
    edi = MEM32(ebp + (-0x18)); /* 0x1202DE7A: mov edi, dword ptr [ebp - 0x18] */
    MEM32(eax + 0x4) = edi; /* 0x1202DE7D: mov dword ptr [eax + 4], edi */
    goto L_1202DE87; /* 0x1202DE80: jmp 0x1202de87 */
L_1202DE82:
    edi = MEM32(ebp + (-0x18)); /* 0x1202DE82: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DE85: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202DE87:
    /* test eax, eax */ /* 0x1202DE87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DF10; /* 0x1202DE89: je 0x1202df10 */
L_1202DE8F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) + 1; /* 0x1202DE8F: inc dword ptr [ebp - 0x34] */
    _flag_k = FK_INC;
    edi = eax; /* 0x1202DE92: mov edi, eax */
    MEM32(ebp + (-0x18)) = edi; /* 0x1202DE94: mov dword ptr [ebp - 0x18], edi */
    goto L_1202DEEB; /* 0x1202DE97: jmp 0x1202deeb */
L_1202DE99:
    ecx = edx; /* 0x1202DE99: mov ecx, edx */
    edi = 0x12001FE4u; /* 0x1202DE9B: mov edi, 0x12001fe4 */
    esi = ebp + (-0x14); /* 0x1202DEA0: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202DEA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1202DEA5: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    esi = MEM32(ebp + (-0x2C)); /* 0x1202DEA7: mov esi, dword ptr [ebp - 0x2c] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1202DECB; /* 0x1202DEAA: jne 0x1202decb */
L_1202DEAC:
    eax = ebp + (-0x28); /* 0x1202DEAC: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1202DEAF: push eax */
    PUSH32(esp, 0); /* 0x1202DEB0: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1202DEB2: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1202DEB5: push esi */
    RECOMP_CALL(sub_1202CBC7); /* 0x1202DEB6: call 0x1202cbc7 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1202DD97; /* 0x1202DEBB: jmp 0x1202dd97 */
L_1202DEC0:
    MEM32(ecx + 0x48) = eax; /* 0x1202DEC0: mov dword ptr [ecx + 0x48], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1202DEC3: mov eax, dword ptr [ebp - 0x28] */
L_1202DEC6:
    MEM32(ebp + (-0x30)) = eax; /* 0x1202DEC6: mov dword ptr [ebp - 0x30], eax */
    goto L_1202DEEB; /* 0x1202DEC9: jmp 0x1202deeb */
L_1202DECB:
    ecx = MEM32(esi + 0x10); /* 0x1202DECB: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x1202DECE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DEE8; /* 0x1202DED0: je 0x1202dee8 */
L_1202DED2:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1202DED2: push dword ptr [ebp - 0x24] */
    eax = MEM32(ecx); /* 0x1202DED5: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202DED7: push ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x1202DED8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x18)); /* 0x1202DEDA: mov edi, dword ptr [ebp - 0x18] */
    ebx = eax; /* 0x1202DEDD: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DEDF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202DF15; /* 0x1202DEE1: js 0x1202df15 */
L_1202DEE3:
    goto L_1202DEEB; /* 0x1202DEE3: jmp 0x1202deeb */
L_1202DEE5:
    esi = MEM32(ebp + (-0x2C)); /* 0x1202DEE5: mov esi, dword ptr [ebp - 0x2c] */
L_1202DEE8:
    edi = MEM32(ebp + (-0x18)); /* 0x1202DEE8: mov edi, dword ptr [ebp - 0x18] */
L_1202DEEB:
    ecx = MEM32(ebp + (-0x24)); /* 0x1202DEEB: mov ecx, dword ptr [ebp - 0x24] */
    /* test ecx, ecx */ /* 0x1202DEEE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202DEFC; /* 0x1202DEF0: je 0x1202defc */
L_1202DEF2:
    eax = MEM32(ecx); /* 0x1202DEF2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202DEF4: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202DEF5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1202DEF8: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202DEFC:
    ecx = MEM32(ebp + (-0x40)); /* 0x1202DEFC: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202DEFF: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x40)) = ecx; /* 0x1202DF00: mov dword ptr [ebp - 0x40], ecx */
    /* cmp ecx, MEM32(ebp + (-0x44)) */ /* 0x1202DF03: cmp ecx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202DF1D; /* 0x1202DF06: jae 0x1202df1d */
L_1202DF08:
    ebx = MEM32(ebp + (-0x54)); /* 0x1202DF08: mov ebx, dword ptr [ebp - 0x54] */
    RECOMP_BACKEDGE();
    goto L_1202DD31; /* 0x1202DF0B: jmp 0x1202dd31 */
L_1202DF10:
    ebx = 0x8007000Eu; /* 0x1202DF10: mov ebx, 0x8007000e */
L_1202DF15:
    esi = MEM32(ebp + (-0x1C)); /* 0x1202DF15: mov esi, dword ptr [ebp - 0x1c] */
    goto L_1202E034; /* 0x1202DF18: jmp 0x1202e034 */
L_1202DF1D:
    eax = MEM32(ebp + (-0x1C)); /* 0x1202DF1D: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x1202DF20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E046; /* 0x1202DF22: je 0x1202e046 */
L_1202DF28:
    /* cmp MEM32(eax + 0x48), 0 */ /* 0x1202DF28: cmp dword ptr [eax + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202DF54; /* 0x1202DF2C: je 0x1202df54 */
L_1202DF2E:
    eax = MEM32(esi + 0xC); /* 0x1202DF2E: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1202DF31: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x28); /* 0x1202DF33: lea edx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x1202DF36: push edx */
    PUSH32(esp, 0); /* 0x1202DF37: push 0 */
    PUSH32(esp, eax); /* 0x1202DF39: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1202DF3A: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x1202DF3C: mov esi, dword ptr [ebp - 0x1c] */
    ebx = eax; /* 0x1202DF3F: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DF41: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E034; /* 0x1202DF43: js 0x1202e034 */
L_1202DF49:
    eax = MEM32(ebp + (-0x28)); /* 0x1202DF49: mov eax, dword ptr [ebp - 0x28] */
    MEM32(eax + 0x4C) = esi; /* 0x1202DF4C: mov dword ptr [eax + 0x4c], esi */
    esi = MEM32(ebp + (-0x28)); /* 0x1202DF4F: mov esi, dword ptr [ebp - 0x28] */
    goto L_1202DF57; /* 0x1202DF52: jmp 0x1202df57 */
L_1202DF54:
    esi = MEM32(ebp + (-0x1C)); /* 0x1202DF54: mov esi, dword ptr [ebp - 0x1c] */
L_1202DF57:
    ecx = MEM32(ebp + (-0x34)); /* 0x1202DF57: mov ecx, dword ptr [ebp - 0x34] */
    /* test ecx, ecx */ /* 0x1202DF5A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E016; /* 0x1202DF5C: je 0x1202e016 */
L_1202DF62:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x1202DF62: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E016; /* 0x1202DF66: je 0x1202e016 */
L_1202DF6C:
    eax = MEM32(ebp + (-0x2C)); /* 0x1202DF6C: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x1202DF6F: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E016; /* 0x1202DF73: je 0x1202e016 */
L_1202DF79:
    edx = ebp + (-0x20); /* 0x1202DF79: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x1202DF7C: push edx */
    PUSH32(esp, 0x1Eu); /* 0x1202DF7D: push 0x1e */
    PUSH32(esp, 2); /* 0x1202DF7F: push 2 */
    PUSH32(esp, ecx); /* 0x1202DF81: push ecx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1202DF82: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_12028CAC); /* 0x1202DF85: call 0x12028cac */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DF8A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DF8C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E034; /* 0x1202DF8E: js 0x1202e034 */
L_1202DF94:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1202DF94: push dword ptr [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x1202DF97: push esi */
    RECOMP_CALL(sub_1202C996); /* 0x1202DF98: call 0x1202c996 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DF9D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DF9F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E034; /* 0x1202DFA1: js 0x1202e034 */
L_1202DFA7:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x1202DFA7: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202DFC5; /* 0x1202DFAB: je 0x1202dfc5 */
L_1202DFAD:
    eax = MEM32(ebp + (-0x20)); /* 0x1202DFAD: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(edi)); /* 0x1202DFB0: push dword ptr [edi] */
    ecx = MEM32(eax); /* 0x1202DFB2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202DFB4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1202DFB5: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202DFB8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202DFBA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E031; /* 0x1202DFBC: js 0x1202e031 */
L_1202DFBE:
    edi = MEM32(edi + 0x4); /* 0x1202DFBE: mov edi, dword ptr [edi + 4] */
    /* test edi, edi */ /* 0x1202DFC1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202DFAD; /* 0x1202DFC3: jne 0x1202dfad */
L_1202DFC5:
    edi = MEM32(ebp + (-0x18)); /* 0x1202DFC5: mov edi, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(edi)); /* 0x1202DFC8: push dword ptr [edi] */
    eax = MEM32(ebp + (-0x20)); /* 0x1202DFCA: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax); /* 0x1202DFCD: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1202DFCF: push 0 */
    PUSH32(esp, eax); /* 0x1202DFD1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x1202DFD2: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1202DFD5: fld1  */
    eax = MEM32(ebp + (-0x20)); /* 0x1202DFD7: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax); /* 0x1202DFDA: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1202DFDC: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1202DFDD: fstp dword ptr [esp] */
    PUSH32(esp, 0); /* 0x1202DFE0: push 0 */
    PUSH32(esp, eax); /* 0x1202DFE2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4C)); /* 0x1202DFE3: call dword ptr [ecx + 0x4c] */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1202DFE6: fld1  */
    eax = MEM32(ebp + (-0x20)); /* 0x1202DFE8: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax); /* 0x1202DFEB: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1202DFED: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1202DFEE: fstp dword ptr [esp] */
    PUSH32(esp, 0); /* 0x1202DFF1: push 0 */
    PUSH32(esp, eax); /* 0x1202DFF3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x1202DFF4: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1202DFF7: fldz  */
    eax = MEM32(ebp + (-0x20)); /* 0x1202DFF9: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax); /* 0x1202DFFC: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1202DFFE: push ecx */
    PUSH32(esp, ecx); /* 0x1202DFFF: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1202E000: fstp qword ptr [esp] */
    PUSH32(esp, 0); /* 0x1202E003: push 0 */
    PUSH32(esp, eax); /* 0x1202E005: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x54)); /* 0x1202E006: call dword ptr [ecx + 0x54] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1202E009: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax); /* 0x1202E00C: mov ecx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x1202E00E: push 1 */
    PUSH32(esp, 0); /* 0x1202E010: push 0 */
    PUSH32(esp, eax); /* 0x1202E012: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x58)); /* 0x1202E013: call dword ptr [ecx + 0x58] */
    RECOMP_FLAGS_IN();
L_1202E016:
    eax = MEM32(ebp + (-0x4C)); /* 0x1202E016: mov eax, dword ptr [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1202E019: mov ecx, dword ptr [ebp - 0x3c] */
    MEM32(eax) = esi; /* 0x1202E01C: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202E01E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1202E020: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E04B; /* 0x1202E022: je 0x1202e04b */
L_1202E024:
    eax = MEM32(ebp + (-0x20)); /* 0x1202E024: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & esi; /* 0x1202E027: and dword ptr [ebp - 0x20], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1202E02A: mov dword ptr [ecx], eax */
    goto L_1202E034; /* 0x1202E02C: jmp 0x1202e034 */
L_1202E02E:
    esi = MEM32(ebp + (-0x1C)); /* 0x1202E02E: mov esi, dword ptr [ebp - 0x1c] */
L_1202E031:
    edi = MEM32(ebp + (-0x18)); /* 0x1202E031: mov edi, dword ptr [ebp - 0x18] */
L_1202E034:
    /* test esi, esi */ /* 0x1202E034: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E04B; /* 0x1202E036: je 0x1202e04b */
L_1202E038:
    eax = MEM32(ebp + (-0x2C)); /* 0x1202E038: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1202E03B: push dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x1202E03E: push esi */
    RECOMP_CALL(sub_1202C84E); /* 0x1202E03F: call 0x1202c84e */
    RECOMP_FLAGS_IN();
    goto L_1202E04B; /* 0x1202E044: jmp 0x1202e04b */
L_1202E046:
    ebx = 0x80004005u; /* 0x1202E046: mov ebx, 0x80004005 */
L_1202E04B:
    /* test edi, edi */ /* 0x1202E04B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E05D; /* 0x1202E04D: je 0x1202e05d */
L_1202E04F:
    ecx = edi; /* 0x1202E04F: mov ecx, edi */
    RECOMP_CALL(sub_1202C013); /* 0x1202E051: call 0x1202c013 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1202E056: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1202E057: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202E05C: pop ecx */
L_1202E05D:
    ecx = MEM32(ebp + (-0x20)); /* 0x1202E05D: mov ecx, dword ptr [ebp - 0x20] */
    /* test ecx, ecx */ /* 0x1202E060: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E06E; /* 0x1202E062: je 0x1202e06e */
L_1202E064:
    eax = MEM32(ecx); /* 0x1202E064: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E066: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202E067: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1202E06A: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202E06E:
    ecx = MEM32(ebp + (-0x24)); /* 0x1202E06E: mov ecx, dword ptr [ebp - 0x24] */
    /* test ecx, ecx */ /* 0x1202E071: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E07B; /* 0x1202E073: je 0x1202e07b */
L_1202E075:
    eax = MEM32(ecx); /* 0x1202E075: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E077: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202E078: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202E07B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202E07B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202E07E: pop edi */
    esi = POP32_VAL(esp); /* 0x1202E07F: pop esi */
    eax = ebx; /* 0x1202E080: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202E082: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202E084: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202E085: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202E08A: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202E08B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202E093(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E093u);

L_1202E093:
    edi = edi; /* 0x1202E093: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E095: push ebp */
    ebp = esp; /* 0x1202E096: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1202E098: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x18); /* 0x1202E09B: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1202E09E: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x1202E09F: mov ebx, dword ptr [ebp + 0x20] */
    PUSH32(esp, esi); /* 0x1202E0A2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202E0A3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1202E0A5: push edi */
    edi = MEM32(ebp + 0x24); /* 0x1202E0A6: mov edi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1202E0A9: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x10); /* 0x1202E0AC: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1202E0AF: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1202E0B2: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = 0x12002044u; /* 0x1202E0B5: mov dword ptr [ebp - 0x10], 0x12002044 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1202E0BC: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebx) = ecx; /* 0x1202E0BF: mov dword ptr [ebx], ecx */
    /* test edi, edi */ /* 0x1202E0C1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E0C7; /* 0x1202E0C3: je 0x1202e0c7 */
L_1202E0C5:
    MEM32(edi) = ecx; /* 0x1202E0C5: mov dword ptr [edi], ecx */
L_1202E0C7:
    eax = MEM32(ebp + 0x10); /* 0x1202E0C7: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(0x12003368)); /* 0x1202E0CA: fld qword ptr [0x12003368] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1202E0D0: mov dword ptr [ebp - 0x30], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x1202E0D3: fstp qword ptr [ebp - 0x18] */
    eax = MEM32(ebp + 0x14); /* 0x1202E0D6: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1202E0D9: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1202E0DC: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1202E0DF: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x4); /* 0x1202E0E2: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1202E0E5: push eax */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1202E0E6: mov dword ptr [ebp - 0x2c], ecx */
    RECOMP_CALL(sub_1214520C); /* 0x1202E0E9: call 0x1214520c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202E0EE: mov esi, eax */
    /* test esi, esi */ /* 0x1202E0F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E168; /* 0x1202E0F2: js 0x1202e168 */
L_1202E0F4:
    eax = MEM32(ebp + (-0x4)); /* 0x1202E0F4: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202E0F7: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xCCEu); /* 0x1202E0F9: push 0xcce */
    PUSH32(esp, 0x121CB378u); /* 0x1202E0FE: push 0x121cb378 */
    PUSH32(esp, eax); /* 0x1202E103: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202E104: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202E107: mov esi, eax */
    /* test esi, esi */ /* 0x1202E109: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E168; /* 0x1202E10B: js 0x1202e168 */
L_1202E10D:
    eax = MEM32(ebp + (-0x4)); /* 0x1202E10D: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202E110: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xC98u); /* 0x1202E112: push 0xc98 */
    PUSH32(esp, 0x120026C8u); /* 0x1202E117: push 0x120026c8 */
    PUSH32(esp, eax); /* 0x1202E11C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202E11D: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202E120: mov esi, eax */
    /* test esi, esi */ /* 0x1202E122: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E168; /* 0x1202E124: js 0x1202e168 */
L_1202E126:
    eax = MEM32(ebp + (-0x4)); /* 0x1202E126: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202E129: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x65Bu); /* 0x1202E12B: push 0x65b */
    PUSH32(esp, 0x12002068u); /* 0x1202E130: push 0x12002068 */
    PUSH32(esp, eax); /* 0x1202E135: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202E136: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202E139: mov esi, eax */
    /* test esi, esi */ /* 0x1202E13B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E168; /* 0x1202E13D: js 0x1202e168 */
L_1202E13F:
    eax = MEM32(ebp + (-0x4)); /* 0x1202E13F: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202E142: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1202E144: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1202E147: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202E148: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202E14B: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1202E14E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202E14F: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202E152: mov esi, eax */
    /* test esi, esi */ /* 0x1202E154: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E168; /* 0x1202E156: js 0x1202e168 */
L_1202E158:
    PUSH32(esp, edi); /* 0x1202E158: push edi */
    PUSH32(esp, ebx); /* 0x1202E159: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202E15A: push dword ptr [ebp - 8] */
    eax = ebp + (-0x30); /* 0x1202E15D: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1202E160: push eax */
    RECOMP_CALL(sub_1202DCD6); /* 0x1202E161: call 0x1202dcd6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202E166: mov esi, eax */
L_1202E168:
    ecx = MEM32(ebp + (-0x8)); /* 0x1202E168: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x1202E16B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E179; /* 0x1202E16D: je 0x1202e179 */
L_1202E16F:
    eax = MEM32(ecx); /* 0x1202E16F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E171: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202E172: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202E175: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202E179:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202E179: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202E17C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E186; /* 0x1202E17E: je 0x1202e186 */
L_1202E180:
    eax = MEM32(ecx); /* 0x1202E180: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E182: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202E183: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202E186:
    edi = POP32_VAL(esp); /* 0x1202E186: pop edi */
    eax = esi; /* 0x1202E187: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202E189: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202E18A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202E18B: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1202E18C: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1202E194(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E194u);

L_1202E194:
    edi = edi; /* 0x1202E194: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E196: push ebp */
    ebp = esp; /* 0x1202E197: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202E199: push ecx */
    PUSH32(esp, ecx); /* 0x1202E19A: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1202E19B: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1202E19E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E1E0; /* 0x1202E1A0: je 0x1202e1e0 */
L_1202E1A2:
    ecx = MEM32(ebp + 0xC); /* 0x1202E1A2: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1202E1A5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E1E0; /* 0x1202E1A7: je 0x1202e1e0 */
L_1202E1A9:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1202E1A9: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E1E0; /* 0x1202E1AD: je 0x1202e1e0 */
L_1202E1AF:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1202E1AF: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E1E0; /* 0x1202E1B3: je 0x1202e1e0 */
L_1202E1B5:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1202E1B5: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E1E0; /* 0x1202E1B9: je 0x1202e1e0 */
L_1202E1BB:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1202E1BB: push dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1202E1BE: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1202E1C1: push dword ptr [ebp + 0x20] */
    eax = ebp + (-0x8); /* 0x1202E1C4: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1202E1C7: push dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1202E1CA: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202E1CD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202E1D0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202E1D3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 3); /* 0x1202E1D6: push 3 */
    PUSH32(esp, eax); /* 0x1202E1D8: push eax */
    RECOMP_CALL(sub_1202E093); /* 0x1202E1D9: call 0x1202e093 */
    RECOMP_FLAGS_IN();
    goto L_1202E1E5; /* 0x1202E1DE: jmp 0x1202e1e5 */
L_1202E1E0:
    eax = 0x8876086Cu; /* 0x1202E1E0: mov eax, 0x8876086c */
L_1202E1E5:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202E1E5: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1202E1E6: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1202E1EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E1EEu);

L_1202E1EE:
    edi = edi; /* 0x1202E1EE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E1F0: push ebp */
    ebp = esp; /* 0x1202E1F1: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1202E1F3: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E229; /* 0x1202E1F7: je 0x1202e229 */
L_1202E1F9:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1202E1F9: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E229; /* 0x1202E1FD: je 0x1202e229 */
L_1202E1FF:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1202E1FF: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E229; /* 0x1202E203: je 0x1202e229 */
L_1202E205:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1202E205: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E229; /* 0x1202E209: je 0x1202e229 */
L_1202E20B:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1202E20B: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1202E20E: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202E211: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202E214: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202E217: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202E21A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1202E21D: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202E21F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202E093); /* 0x1202E222: call 0x1202e093 */
    RECOMP_FLAGS_IN();
    goto L_1202E22E; /* 0x1202E227: jmp 0x1202e22e */
L_1202E229:
    eax = 0x8876086Cu; /* 0x1202E229: mov eax, 0x8876086c */
L_1202E22E:
    ebp = POP32_VAL(esp); /* 0x1202E22E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1202E22F: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1202E237(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E237u);

L_1202E237:
    edi = edi; /* 0x1202E237: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E239: push ebp */
    ebp = esp; /* 0x1202E23A: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1202E23C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E272; /* 0x1202E240: je 0x1202e272 */
L_1202E242:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1202E242: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E272; /* 0x1202E246: je 0x1202e272 */
L_1202E248:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1202E248: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E272; /* 0x1202E24C: je 0x1202e272 */
L_1202E24E:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1202E24E: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E272; /* 0x1202E252: je 0x1202e272 */
L_1202E254:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1202E254: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1202E257: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202E25A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202E25D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202E260: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202E263: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1202E266: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202E268: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202E093); /* 0x1202E26B: call 0x1202e093 */
    RECOMP_FLAGS_IN();
    goto L_1202E277; /* 0x1202E270: jmp 0x1202e277 */
L_1202E272:
    eax = 0x8876086Cu; /* 0x1202E272: mov eax, 0x8876086c */
L_1202E277:
    ebp = POP32_VAL(esp); /* 0x1202E277: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1202E278: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1202E280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E280u);

L_1202E280:
    edi = edi; /* 0x1202E280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E282: push ebp */
    ebp = esp; /* 0x1202E283: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x340u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x340u; /* 0x1202E285: sub esp, 0x340 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202E28B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202E290: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202E292: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1202E295: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1202E298: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1202E29B: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1202E29C: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1202E29F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1202E2A0: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1202E2A3: push edi */
    PUSH32(esp, eax); /* 0x1202E2A4: push eax */
    eax = esi + 0x4; /* 0x1202E2A5: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x1202E2A8: push eax */
    MEM32(ebp + (-0x334)) = ecx; /* 0x1202E2A9: mov dword ptr [ebp - 0x334], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202E2AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x258); /* 0x1202E2B1: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x1202E2B7: push eax */
    MEM32(ebp + (-0x340)) = esi; /* 0x1202E2B8: mov dword ptr [ebp - 0x340], esi */
    MEM32(ebp + (-0x33C)) = ebx; /* 0x1202E2BE: mov dword ptr [ebp - 0x33c], ebx */
    edi = ecx; /* 0x1202E2C4: mov edi, ecx */
    MEM32(ebp + (-0x324)) = ecx; /* 0x1202E2C6: mov dword ptr [ebp - 0x324], ecx */
    MEM32(ebp + (-0x320)) = ecx; /* 0x1202E2CC: mov dword ptr [ebp - 0x320], ecx */
    MEM32(ebp + (-0x328)) = ecx; /* 0x1202E2D2: mov dword ptr [ebp - 0x328], ecx */
    RECOMP_CALL(sub_12030F00); /* 0x1202E2D8: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x44); /* 0x1202E2DD: mov esi, dword ptr [esi + 0x44] */
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E2E0: mov ecx, dword ptr [ebp - 0x320] */
    MEM32(ebp + (-0x32C)) = esi; /* 0x1202E2E6: mov dword ptr [ebp - 0x32c], esi */
    /* test esi, esi */ /* 0x1202E2EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E473; /* 0x1202E2EE: je 0x1202e473 */
L_1202E2F4:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1202E2F4: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202E45C; /* 0x1202E2F8: jne 0x1202e45c */
L_1202E2FE:
    eax = MEM32(esi + 0x8); /* 0x1202E2FE: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1202E301: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x20C); /* 0x1202E303: lea edx, [ebp - 0x20c] */
    PUSH32(esp, edx); /* 0x1202E309: push edx */
    PUSH32(esp, eax); /* 0x1202E30A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202E30B: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20C); /* 0x1202E30E: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1202E314: push eax */
    ecx = ebp + (-0x31C); /* 0x1202E315: lea ecx, [ebp - 0x31c] */
    RECOMP_CALL(sub_1202CA43); /* 0x1202E31B: call 0x1202ca43 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x294)), 0 */ /* 0x1202E320: cmp dword ptr [ebp - 0x294], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x294))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E456; /* 0x1202E327: je 0x1202e456 */
L_1202E32D:
    eax = MEM32(esi + 0x8); /* 0x1202E32D: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1202E330: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202E332: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202E333: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0x320); /* 0x1202E336: lea edx, [ebp - 0x320] */
    MEM32(ebp + (-0x330)) = eax; /* 0x1202E33C: mov dword ptr [ebp - 0x330], eax */
    eax = MEM32(esi + 0x8); /* 0x1202E342: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1202E345: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1202E347: push edx */
    PUSH32(esp, eax); /* 0x1202E348: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x1202E349: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202E34C: mov edi, eax */
    /* test edi, edi */ /* 0x1202E34E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E4A9; /* 0x1202E350: js 0x1202e4a9 */
L_1202E356:
    eax = MEM32(ebp + (-0x320)); /* 0x1202E356: mov eax, dword ptr [ebp - 0x320] */
    ecx = MEM32(eax); /* 0x1202E35C: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x1202E35E: push 0x800 */
    edx = ebp + (-0x324); /* 0x1202E363: lea edx, [ebp - 0x324] */
    PUSH32(esp, edx); /* 0x1202E369: push edx */
    PUSH32(esp, 0); /* 0x1202E36A: push 0 */
    PUSH32(esp, 0); /* 0x1202E36C: push 0 */
    PUSH32(esp, eax); /* 0x1202E36E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1202E36F: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202E372: mov edi, eax */
    MEM32(ebp + (-0x338)) = edi; /* 0x1202E374: mov dword ptr [ebp - 0x338], edi */
    /* test edi, edi */ /* 0x1202E37A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E4A9; /* 0x1202E37C: js 0x1202e4a9 */
L_1202E382:
    /* cmp MEM32(ebp + (-0x330)), 0 */ /* 0x1202E382: cmp dword ptr [ebp - 0x330], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x330))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x324)); /* 0x1202E389: mov ebx, dword ptr [ebp - 0x324] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202E429; /* 0x1202E38F: jbe 0x1202e429 */
L_1202E395:
    fp_push(0.0); /* 0x1202E395: fldz  */
    esi = MEM32(ebp + (-0x330)); /* 0x1202E397: mov esi, dword ptr [ebp - 0x330] */
    edi = MEM32(ebp + (-0x334)); /* 0x1202E39D: mov edi, dword ptr [ebp - 0x334] */
L_1202E3A3:
    eax = MEM32(ebp + (-0x294)); /* 0x1202E3A3: mov eax, dword ptr [ebp - 0x294] */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x1202E3A9: movzx ecx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1202E3AD: add ecx, ebx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx)); /* 0x1202E3AF: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202E3B1: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202E3B3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1202E3B5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202E3D2; /* 0x1202E3B8: jp 0x1202e3d2 */
L_1202E3BA:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1202E3BA: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202E3BD: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202E3BF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1202E3C1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202E3D2; /* 0x1202E3C4: jp 0x1202e3d2 */
L_1202E3C6:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1202E3C6: fld dword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202E3C9: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202E3CB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1202E3CD: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202E412; /* 0x1202E3D0: jnp 0x1202e412 */
L_1202E3D2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x328))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x328)) = MEM32(ebp + (-0x328)) + 1; /* 0x1202E3D2: inc dword ptr [ebp - 0x328] */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202E3D8: fstp st(0) */
    eax = ebp + (-0x258); /* 0x1202E3DA: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x1202E3E0: push eax */
    PUSH32(esp, ecx); /* 0x1202E3E1: push ecx */
    eax = ebp + (-0x218); /* 0x1202E3E2: lea eax, [ebp - 0x218] */
    PUSH32(esp, eax); /* 0x1202E3E8: push eax */
    RECOMP_CALL(sub_12030561); /* 0x1202E3E9: call 0x12030561 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x1202E3EE: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x218)); /* 0x1202E3F0: fadd dword ptr [ebp - 0x218] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x1202E3F6: fstp dword ptr [edi] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1202E3F8: fld dword ptr [edi + 4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x214)); /* 0x1202E3FB: fadd dword ptr [ebp - 0x214] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x1202E401: fstp dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x1202E404: fld dword ptr [edi + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x210)); /* 0x1202E407: fadd dword ptr [ebp - 0x210] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x1202E40D: fstp dword ptr [edi + 8] */
    fp_push(0.0); /* 0x1202E410: fldz  */
L_1202E412:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x25C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x25C)); /* 0x1202E412: add ebx, dword ptr [ebp - 0x25c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1202E418: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202E3A3; /* 0x1202E419: jne 0x1202e3a3 */
L_1202E41B:
    esi = MEM32(ebp + (-0x32C)); /* 0x1202E41B: mov esi, dword ptr [ebp - 0x32c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202E421: fstp st(0) */
    edi = MEM32(ebp + (-0x338)); /* 0x1202E423: mov edi, dword ptr [ebp - 0x338] */
L_1202E429:
    eax = MEM32(ebp + (-0x320)); /* 0x1202E429: mov eax, dword ptr [ebp - 0x320] */
    ecx = MEM32(eax); /* 0x1202E42F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202E431: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1202E432: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E435: mov ecx, dword ptr [ebp - 0x320] */
    /* test ecx, ecx */ /* 0x1202E43B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E44D; /* 0x1202E43D: je 0x1202e44d */
L_1202E43F:
    eax = MEM32(ecx); /* 0x1202E43F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E441: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202E442: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202E445: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x320)) = ecx; /* 0x1202E447: mov dword ptr [ebp - 0x320], ecx */
L_1202E44D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x324))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x324)) = MEM32(ebp + (-0x324)) & 0; /* 0x1202E44D: and dword ptr [ebp - 0x324], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202E45C; /* 0x1202E454: jmp 0x1202e45c */
L_1202E456:
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E456: mov ecx, dword ptr [ebp - 0x320] */
L_1202E45C:
    esi = MEM32(esi + 0x20); /* 0x1202E45C: mov esi, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0x32C)) = esi; /* 0x1202E45F: mov dword ptr [ebp - 0x32c], esi */
    /* test esi, esi */ /* 0x1202E465: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202E2F4; /* 0x1202E467: jne 0x1202e2f4 */
L_1202E46D:
    ebx = MEM32(ebp + (-0x33C)); /* 0x1202E46D: mov ebx, dword ptr [ebp - 0x33c] */
L_1202E473:
    eax = MEM32(ebp + (-0x328)); /* 0x1202E473: mov eax, dword ptr [ebp - 0x328] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x1202E479: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x340)); /* 0x1202E47B: mov esi, dword ptr [ebp - 0x340] */
    esi = MEM32(esi + 0x4C); /* 0x1202E481: mov esi, dword ptr [esi + 0x4c] */
    /* test esi, esi */ /* 0x1202E484: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E4AF; /* 0x1202E486: je 0x1202e4af */
L_1202E488:
    PUSH32(esp, ebx); /* 0x1202E488: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x334))); /* 0x1202E489: push dword ptr [ebp - 0x334] */
    eax = ebp + (-0x258); /* 0x1202E48F: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x1202E495: push eax */
    PUSH32(esp, esi); /* 0x1202E496: push esi */
    RECOMP_CALL(sub_1202E280); /* 0x1202E497: call 0x1202e280 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202E49C: mov edi, eax */
    /* test edi, edi */ /* 0x1202E49E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E4A9; /* 0x1202E4A0: js 0x1202e4a9 */
L_1202E4A2:
    esi = MEM32(esi + 0x48); /* 0x1202E4A2: mov esi, dword ptr [esi + 0x48] */
    /* test esi, esi */ /* 0x1202E4A5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202E488; /* 0x1202E4A7: jne 0x1202e488 */
L_1202E4A9:
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E4A9: mov ecx, dword ptr [ebp - 0x320] */
L_1202E4AF:
    /* cmp MEM32(ebp + (-0x324)), 0 */ /* 0x1202E4AF: cmp dword ptr [ebp - 0x324], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x324))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E4C4; /* 0x1202E4B6: je 0x1202e4c4 */
L_1202E4B8:
    eax = MEM32(ecx); /* 0x1202E4B8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E4BA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1202E4BB: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E4BE: mov ecx, dword ptr [ebp - 0x320] */
L_1202E4C4:
    /* test ecx, ecx */ /* 0x1202E4C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E4CE; /* 0x1202E4C6: je 0x1202e4ce */
L_1202E4C8:
    eax = MEM32(ecx); /* 0x1202E4C8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E4CA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202E4CB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202E4CE:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202E4CE: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1202E4D1: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1202E4D3: pop edi */
    esi = POP32_VAL(esp); /* 0x1202E4D4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202E4D5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202E4D7: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202E4D8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202E4DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202E4DE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202E4E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E4E6u);

L_1202E4E6:
    edi = edi; /* 0x1202E4E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E4E8: push ebp */
    ebp = esp; /* 0x1202E4E9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x340u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x340u; /* 0x1202E4EB: sub esp, 0x340 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202E4F1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202E4F6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202E4F8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1202E4FB: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1202E4FE: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1202E501: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1202E502: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1202E505: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1202E506: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1202E509: push edi */
    PUSH32(esp, eax); /* 0x1202E50A: push eax */
    eax = esi + 0x4; /* 0x1202E50B: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x1202E50E: push eax */
    eax = ebp + (-0x258); /* 0x1202E50F: lea eax, [ebp - 0x258] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202E515: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x328))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x328)) = MEM32(ebp + (-0x328)) & edi; /* 0x1202E517: and dword ptr [ebp - 0x328], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x320))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x320)) = MEM32(ebp + (-0x320)) & edi; /* 0x1202E51D: and dword ptr [ebp - 0x320], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1202E523: push eax */
    MEM32(ebp + (-0x340)) = esi; /* 0x1202E524: mov dword ptr [ebp - 0x340], esi */
    MEM32(ebp + (-0x334)) = ecx; /* 0x1202E52A: mov dword ptr [ebp - 0x334], ecx */
    MEM32(ebp + (-0x33C)) = ebx; /* 0x1202E530: mov dword ptr [ebp - 0x33c], ebx */
    RECOMP_CALL(sub_12030F00); /* 0x1202E536: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebx)); /* 0x1202E53B: fld dword ptr [ebx] */
    esi = MEM32(esi + 0x44); /* 0x1202E53D: mov esi, dword ptr [esi + 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x32C)) = _v; } /* 0x1202E540: fstp dword ptr [ebp - 0x32c] */
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E546: mov ecx, dword ptr [ebp - 0x320] */
    MEM32(ebp + (-0x330)) = esi; /* 0x1202E54C: mov dword ptr [ebp - 0x330], esi */
    /* test esi, esi */ /* 0x1202E552: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E72C; /* 0x1202E554: je 0x1202e72c */
L_1202E55A:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1202E55A: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202E715; /* 0x1202E55E: jne 0x1202e715 */
L_1202E564:
    eax = MEM32(esi + 0x8); /* 0x1202E564: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1202E567: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x20C); /* 0x1202E569: lea edx, [ebp - 0x20c] */
    PUSH32(esp, edx); /* 0x1202E56F: push edx */
    PUSH32(esp, eax); /* 0x1202E570: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202E571: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20C); /* 0x1202E574: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1202E57A: push eax */
    ecx = ebp + (-0x31C); /* 0x1202E57B: lea ecx, [ebp - 0x31c] */
    RECOMP_CALL(sub_1202CA43); /* 0x1202E581: call 0x1202ca43 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x294)), 0 */ /* 0x1202E586: cmp dword ptr [ebp - 0x294], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x294))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E70F; /* 0x1202E58D: je 0x1202e70f */
L_1202E593:
    eax = MEM32(esi + 0x8); /* 0x1202E593: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1202E596: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202E598: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202E599: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0x320); /* 0x1202E59C: lea edx, [ebp - 0x320] */
    MEM32(ebp + (-0x324)) = eax; /* 0x1202E5A2: mov dword ptr [ebp - 0x324], eax */
    eax = MEM32(esi + 0x8); /* 0x1202E5A8: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1202E5AB: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1202E5AD: push edx */
    PUSH32(esp, eax); /* 0x1202E5AE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x1202E5AF: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202E5B2: mov edi, eax */
    /* test edi, edi */ /* 0x1202E5B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E762; /* 0x1202E5B6: js 0x1202e762 */
L_1202E5BC:
    eax = MEM32(ebp + (-0x320)); /* 0x1202E5BC: mov eax, dword ptr [ebp - 0x320] */
    ecx = MEM32(eax); /* 0x1202E5C2: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x1202E5C4: push 0x800 */
    edx = ebp + (-0x328); /* 0x1202E5C9: lea edx, [ebp - 0x328] */
    PUSH32(esp, edx); /* 0x1202E5CF: push edx */
    PUSH32(esp, 0); /* 0x1202E5D0: push 0 */
    PUSH32(esp, 0); /* 0x1202E5D2: push 0 */
    PUSH32(esp, eax); /* 0x1202E5D4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1202E5D5: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202E5D8: mov edi, eax */
    MEM32(ebp + (-0x338)) = edi; /* 0x1202E5DA: mov dword ptr [ebp - 0x338], edi */
    /* test edi, edi */ /* 0x1202E5E0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E762; /* 0x1202E5E2: js 0x1202e762 */
L_1202E5E8:
    /* cmp MEM32(ebp + (-0x324)), 0 */ /* 0x1202E5E8: cmp dword ptr [ebp - 0x324], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x324))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x328)); /* 0x1202E5EF: mov ebx, dword ptr [ebp - 0x328] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202E6E2; /* 0x1202E5F5: jbe 0x1202e6e2 */
L_1202E5FB:
    fp_push(0.0); /* 0x1202E5FB: fldz  */
    esi = MEM32(ebp + (-0x324)); /* 0x1202E5FD: mov esi, dword ptr [ebp - 0x324] */
    edi = MEM32(ebp + (-0x334)); /* 0x1202E603: mov edi, dword ptr [ebp - 0x334] */
L_1202E609:
    eax = MEM32(ebp + (-0x294)); /* 0x1202E609: mov eax, dword ptr [ebp - 0x294] */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x1202E60F: movzx ecx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1202E613: add ecx, ebx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx)); /* 0x1202E615: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202E617: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202E619: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1202E61B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202E63C; /* 0x1202E61E: jp 0x1202e63c */
L_1202E620:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1202E620: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202E623: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202E625: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1202E627: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202E63C; /* 0x1202E62A: jp 0x1202e63c */
L_1202E62C:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1202E62C: fld dword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202E62F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202E631: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1202E633: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1202E6C7; /* 0x1202E636: jnp 0x1202e6c7 */
L_1202E63C:
    eax = ebp + (-0x258); /* 0x1202E63C: lea eax, [ebp - 0x258] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202E642: fstp st(0) */
    PUSH32(esp, eax); /* 0x1202E644: push eax */
    PUSH32(esp, ecx); /* 0x1202E645: push ecx */
    eax = ebp + (-0x218); /* 0x1202E646: lea eax, [ebp - 0x218] */
    PUSH32(esp, eax); /* 0x1202E64C: push eax */
    RECOMP_CALL(sub_12030561); /* 0x1202E64D: call 0x12030561 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x218))); /* 0x1202E652: fld dword ptr [ebp - 0x218] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x1202E658: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x218)) = _v; } /* 0x1202E65A: fstp dword ptr [ebp - 0x218] */
    fp_push(*(float*)&MEM32(ebp + (-0x214))); /* 0x1202E660: fld dword ptr [ebp - 0x214] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x1202E666: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x214)) = _v; } /* 0x1202E669: fstp dword ptr [ebp - 0x214] */
    fp_push(*(float*)&MEM32(ebp + (-0x210))); /* 0x1202E66F: fld dword ptr [ebp - 0x210] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x8); /* 0x1202E675: fsub dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x210)) = _v; } /* 0x1202E678: fstp dword ptr [ebp - 0x210] */
    fp_push(*(float*)&MEM32(ebp + (-0x214))); /* 0x1202E67E: fld dword ptr [ebp - 0x214] */
    fp_push(*(float*)&MEM32(ebp + (-0x218))); /* 0x1202E684: fld dword ptr [ebp - 0x218] */
    fp_push(*(float*)&MEM32(ebp + (-0x210))); /* 0x1202E68A: fld dword ptr [ebp - 0x210] */
    fp_xch(2); /* 0x1202E690: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1202E692: fmul st(0), st(0) */
    fp_xch(1); /* 0x1202E694: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1202E696: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202E698: faddp st(1) */
    fp_xch(1); /* 0x1202E69A: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1202E69C: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202E69E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x324)) = _v; } /* 0x1202E6A0: fstp dword ptr [ebp - 0x324] */
    fp_push(*(float*)&MEM32(ebp + (-0x324))); /* 0x1202E6A6: fld dword ptr [ebp - 0x324] */
    fp_push(*(float*)&MEM32(ebp + (-0x32C))); /* 0x1202E6AC: fld dword ptr [ebp - 0x32c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202E6B2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202E6B4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1202E6B6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202E6C3; /* 0x1202E6B9: jp 0x1202e6c3 */
L_1202E6BB:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x32C)) = _v; } /* 0x1202E6BB: fstp dword ptr [ebp - 0x32c] */
    goto L_1202E6C5; /* 0x1202E6C1: jmp 0x1202e6c5 */
L_1202E6C3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202E6C3: fstp st(0) */
L_1202E6C5:
    fp_push(0.0); /* 0x1202E6C5: fldz  */
L_1202E6C7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x25C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x25C)); /* 0x1202E6C7: add ebx, dword ptr [ebp - 0x25c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1202E6CD: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202E609; /* 0x1202E6CE: jne 0x1202e609 */
L_1202E6D4:
    esi = MEM32(ebp + (-0x330)); /* 0x1202E6D4: mov esi, dword ptr [ebp - 0x330] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202E6DA: fstp st(0) */
    edi = MEM32(ebp + (-0x338)); /* 0x1202E6DC: mov edi, dword ptr [ebp - 0x338] */
L_1202E6E2:
    eax = MEM32(ebp + (-0x320)); /* 0x1202E6E2: mov eax, dword ptr [ebp - 0x320] */
    ecx = MEM32(eax); /* 0x1202E6E8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202E6EA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1202E6EB: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E6EE: mov ecx, dword ptr [ebp - 0x320] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x328))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x328)) = MEM32(ebp + (-0x328)) & 0; /* 0x1202E6F4: and dword ptr [ebp - 0x328], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1202E6FB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E715; /* 0x1202E6FD: je 0x1202e715 */
L_1202E6FF:
    eax = MEM32(ecx); /* 0x1202E6FF: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E701: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202E702: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202E705: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x320)) = ecx; /* 0x1202E707: mov dword ptr [ebp - 0x320], ecx */
    goto L_1202E715; /* 0x1202E70D: jmp 0x1202e715 */
L_1202E70F:
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E70F: mov ecx, dword ptr [ebp - 0x320] */
L_1202E715:
    esi = MEM32(esi + 0x20); /* 0x1202E715: mov esi, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0x330)) = esi; /* 0x1202E718: mov dword ptr [ebp - 0x330], esi */
    /* test esi, esi */ /* 0x1202E71E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202E55A; /* 0x1202E720: jne 0x1202e55a */
L_1202E726:
    ebx = MEM32(ebp + (-0x33C)); /* 0x1202E726: mov ebx, dword ptr [ebp - 0x33c] */
L_1202E72C:
    fp_push(*(float*)&MEM32(ebp + (-0x32C))); /* 0x1202E72C: fld dword ptr [ebp - 0x32c] */
    esi = MEM32(ebp + (-0x340)); /* 0x1202E732: mov esi, dword ptr [ebp - 0x340] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x1202E738: fstp dword ptr [ebx] */
    esi = MEM32(esi + 0x4C); /* 0x1202E73A: mov esi, dword ptr [esi + 0x4c] */
    /* test esi, esi */ /* 0x1202E73D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E768; /* 0x1202E73F: je 0x1202e768 */
L_1202E741:
    PUSH32(esp, ebx); /* 0x1202E741: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x334))); /* 0x1202E742: push dword ptr [ebp - 0x334] */
    eax = ebp + (-0x258); /* 0x1202E748: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x1202E74E: push eax */
    PUSH32(esp, esi); /* 0x1202E74F: push esi */
    RECOMP_CALL(sub_1202E4E6); /* 0x1202E750: call 0x1202e4e6 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202E755: mov edi, eax */
    /* test edi, edi */ /* 0x1202E757: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E762; /* 0x1202E759: js 0x1202e762 */
L_1202E75B:
    esi = MEM32(esi + 0x48); /* 0x1202E75B: mov esi, dword ptr [esi + 0x48] */
    /* test esi, esi */ /* 0x1202E75E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202E741; /* 0x1202E760: jne 0x1202e741 */
L_1202E762:
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E762: mov ecx, dword ptr [ebp - 0x320] */
L_1202E768:
    /* cmp MEM32(ebp + (-0x328)), 0 */ /* 0x1202E768: cmp dword ptr [ebp - 0x328], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x328))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202E77D; /* 0x1202E76F: je 0x1202e77d */
L_1202E771:
    eax = MEM32(ecx); /* 0x1202E771: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E773: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1202E774: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x320)); /* 0x1202E777: mov ecx, dword ptr [ebp - 0x320] */
L_1202E77D:
    /* test ecx, ecx */ /* 0x1202E77D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E787; /* 0x1202E77F: je 0x1202e787 */
L_1202E781:
    eax = MEM32(ecx); /* 0x1202E781: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202E783: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202E784: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202E787:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202E787: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1202E78A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1202E78C: pop edi */
    esi = POP32_VAL(esp); /* 0x1202E78D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202E78E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202E790: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202E791: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202E796: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202E797: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202E79F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E79Fu);

L_1202E79F:
    edi = edi; /* 0x1202E79F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E7A1: push ebp */
    ebp = esp; /* 0x1202E7A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x1202E7A4: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1202E7A7: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1202E7AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1202E7AE: mov dword ptr [ebp - 4], eax */
    fp_push(0.0); /* 0x1202E7B1: fldz  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) & 0; /* 0x1202E7B3: and dword ptr [ebp - 0x5c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202E7B7: push ebx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1202E7B8: fst dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x8); /* 0x1202E7BB: mov ebx, dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1202E7BE: fst dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1202E7C1: push esi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1202E7C2: fst dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x10); /* 0x1202E7C5: mov esi, dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1202E7C8: fst dword ptr [ebp - 0x58] */
    PUSH32(esp, edi); /* 0x1202E7CB: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202E7CC: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1202E7CF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202E7DF; /* 0x1202E7D1: jne 0x1202e7df */
L_1202E7D3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202E7D3: fstp st(0) */
    eax = 0x8876086Cu; /* 0x1202E7D5: mov eax, 0x8876086c */
    goto L_1202E8DB; /* 0x1202E7DA: jmp 0x1202e8db */
L_1202E7DF:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1202E7DF: fst dword ptr [ebp - 0x18] */
    eax = ebp + (-0x5C); /* 0x1202E7E2: lea eax, [ebp - 0x5c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1202E7E5: fst dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1202E7E8: push eax */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1202E7E9: fst dword ptr [ebp - 0x20] */
    eax = ebp + (-0x10); /* 0x1202E7EC: lea eax, [ebp - 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1202E7EF: fst dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1202E7F2: push eax */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1202E7F3: fst dword ptr [ebp - 0x2c] */
    eax = ebp + (-0x50); /* 0x1202E7F6: lea eax, [ebp - 0x50] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1202E7F9: fst dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1202E7FC: push eax */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1202E7FD: fst dword ptr [ebp - 0x34] */
    PUSH32(esp, ebx); /* 0x1202E800: push ebx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1202E801: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1202E804: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1202E807: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1202E80A: fst dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1202E80D: fstp dword ptr [ebp - 0x4c] */
    fp_push(1.0); /* 0x1202E810: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1202E812: fst dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1202E815: fst dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1202E818: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1202E81B: fstp dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_1202E280); /* 0x1202E81E: call 0x1202e280 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1202E823: mov ecx, eax */
    MEM32(ebp + (-0x54)) = ecx; /* 0x1202E825: mov dword ptr [ebp - 0x54], ecx */
    /* test ecx, ecx */ /* 0x1202E828: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E8D9; /* 0x1202E82A: js 0x1202e8d9 */
L_1202E830:
    ecx = MEM32(ebp + (-0x5C)); /* 0x1202E830: mov ecx, dword ptr [ebp - 0x5c] */
    /* test ecx, ecx */ /* 0x1202E833: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E8BE; /* 0x1202E835: je 0x1202e8be */
L_1202E83B:
    MEM32(ebp + (-0x54)) = ecx; /* 0x1202E83B: mov dword ptr [ebp - 0x54], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x54))); /* 0x1202E83E: fild dword ptr [ebp - 0x54] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202E849; /* 0x1202E841: jns 0x1202e849 */
L_1202E843:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1202E843: fadd dword ptr [0x120014d0] */
L_1202E849:
    fp_push(1.0); /* 0x1202E849: fld1  */
    eax = ebp + (-0x58); /* 0x1202E84B: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1202E84E: fdivrp st(1) */
    PUSH32(esp, eax); /* 0x1202E850: push eax */
    eax = ebp + (-0x10); /* 0x1202E851: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1202E854: push eax */
    eax = ebp + (-0x50); /* 0x1202E855: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1202E858: push eax */
    PUSH32(esp, ebx); /* 0x1202E859: push ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1202E85A: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1202E85D: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x1202E860: fld dword ptr [ebp - 0x54] */
    fp_push(_st[0]); /* 0x1202E863: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202E865: fmulp st(2) */
    fp_xch(1); /* 0x1202E867: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1202E869: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1202E86C: fld dword ptr [ebp - 0xc] */
    fp_push(_st[1]); /* 0x1202E86F: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202E871: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1202E873: fstp dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1202E876: fmul dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1202E879: fstp dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x1202E87C: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1202E87E: fst dword ptr [ebp - 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1202E881: fst dword ptr [ebp - 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1202E884: fst dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1202E887: fst dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1202E88A: fst dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1202E88D: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1202E890: fst dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1202E893: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1202E896: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1202E899: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1202E89C: fst dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1202E89F: fstp dword ptr [ebp - 0x4c] */
    fp_push(1.0); /* 0x1202E8A2: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1202E8A4: fst dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1202E8A7: fst dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1202E8AA: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1202E8AD: fstp dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_1202E4E6); /* 0x1202E8B0: call 0x1202e4e6 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1202E8B5: mov ecx, eax */
    MEM32(ebp + (-0x54)) = eax; /* 0x1202E8B7: mov dword ptr [ebp - 0x54], eax */
    /* test ecx, ecx */ /* 0x1202E8BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202E8D9; /* 0x1202E8BC: js 0x1202e8d9 */
L_1202E8BE:
    /* test esi, esi */ /* 0x1202E8BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E8CC; /* 0x1202E8C0: je 0x1202e8cc */
L_1202E8C2:
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x1202E8C2: fld dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_121BF44C); /* 0x1202E8C5: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1202E8CA: fstp dword ptr [esi] */
L_1202E8CC:
    ecx = MEM32(ebp + (-0x54)); /* 0x1202E8CC: mov ecx, dword ptr [ebp - 0x54] */
    /* test edi, edi */ /* 0x1202E8CF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E8D9; /* 0x1202E8D1: je 0x1202e8d9 */
L_1202E8D3:
    esi = ebp + (-0x10); /* 0x1202E8D3: lea esi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202E8D6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202E8D7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1202E8D8: movsd dword ptr es:[edi], dword ptr [esi] */
L_1202E8D9:
    eax = ecx; /* 0x1202E8D9: mov eax, ecx */
L_1202E8DB:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202E8DB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1202E8DE: pop edi */
    esi = POP32_VAL(esp); /* 0x1202E8DF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1202E8E0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1202E8E2: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1202E8E3: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202E8E8: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202E8E9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202E8F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E8F1u);

L_1202E8F1:
    edi = edi; /* 0x1202E8F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E8F3: push ebp */
    ebp = esp; /* 0x1202E8F4: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1202E8F6: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1202E8F9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1202E8FC: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1202E900: mov dword ptr [ecx], eax */
    /* test edx, edx */ /* 0x1202E902: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E90F; /* 0x1202E904: je 0x1202e90f */
L_1202E906:
    eax = MEM32(edx + 0x4); /* 0x1202E906: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1202E909: mov dword ptr [ecx + 4], eax */
    MEM32(edx + 0x4) = ecx; /* 0x1202E90C: mov dword ptr [edx + 4], ecx */
L_1202E90F:
    eax = ecx; /* 0x1202E90F: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1202E911: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202E912: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202E91A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E91Au);

L_1202E91A:
    edi = edi; /* 0x1202E91A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E91C: push ebp */
    ebp = esp; /* 0x1202E91D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202E91F: push ecx */
    PUSH32(esp, ebx); /* 0x1202E920: push ebx */
    PUSH32(esp, esi); /* 0x1202E921: push esi */
    PUSH32(esp, edi); /* 0x1202E922: push edi */
    PUSH32(esp, 0x120014BCu); /* 0x1202E923: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202E928: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x1202E92A: push 0xc */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1202E92C: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_12018970); /* 0x1202E92F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202E934: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202E936: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202E937: pop ecx */
    /* test esi, esi */ /* 0x1202E938: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202E943; /* 0x1202E93A: jne 0x1202e943 */
L_1202E93C:
    edi = 0x8007000Eu; /* 0x1202E93C: mov edi, 0x8007000e */
    goto L_1202E973; /* 0x1202E941: jmp 0x1202e973 */
L_1202E943:
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x1202E943: mov ax, word ptr [ebp + 0x10] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1202E947: mov word ptr [esi], ax */
    SET_LO16(eax, MEM16(ebp + 0x14)); /* 0x1202E94A: mov ax, word ptr [ebp + 0x14] */
    edx = ebp + (-0x4); /* 0x1202E94E: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1202E951: push edx */
    PUSH32(esp, esi); /* 0x1202E952: push esi */
    PUSH32(esp, 0xCu); /* 0x1202E953: push 0xc */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1202E955: mov word ptr [esi + 2], ax */
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x1202E959: mov ax, word ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1202E95D: push ebx */
    PUSH32(esp, ebx); /* 0x1202E95E: push ebx */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1202E95F: mov word ptr [esi + 4], ax */
    eax = MEM32(ebp + 0x18); /* 0x1202E963: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(eax); /* 0x1202E966: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001C18u); /* 0x1202E968: push 0x12001c18 */
    PUSH32(esp, eax); /* 0x1202E96D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202E96E: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202E971: mov edi, eax */
L_1202E973:
    edx = MEM32(ebp + (-0x4)); /* 0x1202E973: mov edx, dword ptr [ebp - 4] */
    /* test edx, edx */ /* 0x1202E976: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202E983; /* 0x1202E978: je 0x1202e983 */
L_1202E97A:
    ecx = MEM32(edx); /* 0x1202E97A: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1202E97C: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1202E97D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1202E980: mov dword ptr [ebp - 4], ebx */
L_1202E983:
    PUSH32(esp, esi); /* 0x1202E983: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202E984: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202E989: pop ecx */
    eax = edi; /* 0x1202E98A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1202E98C: pop edi */
    esi = POP32_VAL(esp); /* 0x1202E98D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202E98E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202E98F: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1202E990: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1202E998(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202E998u);

L_1202E998:
    edi = edi; /* 0x1202E998: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202E99A: push ebp */
    ebp = esp; /* 0x1202E99B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202E99D: push ecx */
    PUSH32(esp, ecx); /* 0x1202E99E: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1202E99F: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1202E9A2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x1; /* 0x1202E9A6: lea edx, [ecx + 1] */
L_1202E9A9:
    SET_LO8(eax, MEM8(ecx)); /* 0x1202E9A9: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1202E9AB: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1202E9AC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202E9A9; /* 0x1202E9AE: jne 0x1202e9a9 */
L_1202E9B0:
    eax = MEM32(ebp + 0x18); /* 0x1202E9B0: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1202E9B3: push ebx */
    PUSH32(esp, esi); /* 0x1202E9B4: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1202E9B5: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + 0x1; /* 0x1202E9B7: lea esi, [ecx + 1] */
    eax = esi + eax * 8 + 0x44; /* 0x1202E9BA: lea eax, [esi + eax*8 + 0x44] */
    PUSH32(esp, 0x120014BCu); /* 0x1202E9BE: push 0x120014bc */
    PUSH32(esp, eax); /* 0x1202E9C3: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1202E9C4: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_12018970); /* 0x1202E9C7: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202E9CC: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202E9CE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202E9CF: pop ecx */
    /* test ebx, ebx */ /* 0x1202E9D0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202E9DB; /* 0x1202E9D2: jne 0x1202e9db */
L_1202E9D4:
    esi = 0x8007000Eu; /* 0x1202E9D4: mov esi, 0x8007000e */
    goto L_1202EA35; /* 0x1202E9D9: jmp 0x1202ea35 */
L_1202E9DB:
    PUSH32(esp, edi); /* 0x1202E9DB: push edi */
    PUSH32(esp, esi); /* 0x1202E9DC: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202E9DD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1202E9E0: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x1202E9E1: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x1202E9E6: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + ebx) = eax; /* 0x1202E9E9: mov dword ptr [esi + ebx], eax */
    edi = esi + ebx + 0x4; /* 0x1202E9EC: lea edi, [esi + ebx + 4] */
    esi = eax; /* 0x1202E9F0: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1202E9F2: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1202E9F2: shl esi, 2 */
    PUSH32(esp, esi); /* 0x1202E9F5: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202E9F6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1202E9F9: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x1202E9FA: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202E9FF: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202EA00: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1202EA03: add edi, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1202EA05: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x1202EA06: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x20); /* 0x1202EA0B: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1202EA0E: add esp, 0x24 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1202EA11: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1202EA13: pop ecx */
    edx = ebp + (-0x4); /* 0x1202EA14: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1202EA17: push edx */
    PUSH32(esp, ebx); /* 0x1202EA18: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202EA19: push dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1202EA1C: add edi, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x1C); /* 0x1202EA1E: mov esi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0); /* 0x1202EA21: push 0 */
    PUSH32(esp, 0); /* 0x1202EA23: push 0 */
    PUSH32(esp, 0x12001C48u); /* 0x1202EA25: push 0x12001c48 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1202EA2A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(eax); /* 0x1202EA2C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202EA2E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202EA2F: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EA32: mov esi, eax */
    edi = POP32_VAL(esp); /* 0x1202EA34: pop edi */
L_1202EA35:
    edx = MEM32(ebp + (-0x4)); /* 0x1202EA35: mov edx, dword ptr [ebp - 4] */
    /* test edx, edx */ /* 0x1202EA38: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EA46; /* 0x1202EA3A: je 0x1202ea46 */
L_1202EA3C:
    ecx = MEM32(edx); /* 0x1202EA3C: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1202EA3E: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1202EA3F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1202EA42: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202EA46:
    PUSH32(esp, ebx); /* 0x1202EA46: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1202EA47: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202EA4C: pop ecx */
    eax = esi; /* 0x1202EA4D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202EA4F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202EA50: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202EA51: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1202EA52: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1202EA5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202EA5Au);

L_1202EA5A:
    edi = edi; /* 0x1202EA5A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202EA5C: push ebp */
    ebp = esp; /* 0x1202EA5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1202EA5F: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1202EA62: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202EA63: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1202EA65: push esi */
    esi = ebx; /* 0x1202EA66: mov esi, ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1202EA68: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1202EA6B: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1202EA6E: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202EA71: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ebx + 0x4), 1 */ /* 0x1202EA74: cmp dword ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202EC3D; /* 0x1202EA78: jne 0x1202ec3d */
L_1202EA7E:
    /* cmp MEM32(ebx + 0x8), esi */ /* 0x1202EA7E: cmp dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202EC3D; /* 0x1202EA81: je 0x1202ec3d */
L_1202EA87:
    ecx = MEM32(ebp + 0x8); /* 0x1202EA87: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + 0xC; /* 0x1202EA8A: lea eax, [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x1202EA8D: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202EA8E: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x8); /* 0x1202EA91: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1202EA94: push eax */
    PUSH32(esp, esi); /* 0x1202EA95: push esi */
    PUSH32(esp, esi); /* 0x1202EA96: push esi */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1202EA97: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x1202EA9A: push dword ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x1202EA9D: push dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1202EAA0: push dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1202EAA3: push dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(ebx)); /* 0x1202EAA6: push dword ptr [ebx] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1202EAA8: push dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ecx)); /* 0x1202EAAB: push dword ptr [ecx] */
    RECOMP_CALL(sub_1207B1E3); /* 0x1202EAAD: call 0x1207b1e3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EAB2: mov esi, eax */
    /* test esi, esi */ /* 0x1202EAB4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EC3D; /* 0x1202EAB6: js 0x1202ec3d */
L_1202EABC:
    eax = MEM32(ebx + 0x1C); /* 0x1202EABC: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(eax); /* 0x1202EABF: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1202EAC1: push edi */
    PUSH32(esp, eax); /* 0x1202EAC2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1202EAC3: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x1C); /* 0x1202EAC6: mov ecx, dword ptr [ebx + 0x1c] */
    edx = MEM32(ecx); /* 0x1202EAC9: mov edx, dword ptr [ecx] */
    edi = eax; /* 0x1202EACB: mov edi, eax */
    eax = ebp + (-0x18); /* 0x1202EACD: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1202EAD0: push eax */
    PUSH32(esp, ecx); /* 0x1202EAD1: push ecx */
    MEM32(ebp + 0x10) = edi; /* 0x1202EAD2: mov dword ptr [ebp + 0x10], edi */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x1202EAD5: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EAD8: mov esi, eax */
    /* test esi, esi */ /* 0x1202EADA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EC3C; /* 0x1202EADC: js 0x1202ec3c */
L_1202EAE2:
    eax = MEM32(ebx + 0x8); /* 0x1202EAE2: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax); /* 0x1202EAE5: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x1202EAE7: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1202EAEA: push edx */
    PUSH32(esp, eax); /* 0x1202EAEB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x1202EAEC: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EAEF: mov esi, eax */
    /* test esi, esi */ /* 0x1202EAF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EC3C; /* 0x1202EAF3: js 0x1202ec3c */
L_1202EAF9:
    eax = MEM32(ebx + 0x1C); /* 0x1202EAF9: mov eax, dword ptr [ebx + 0x1c] */
    esi = MEM32(eax); /* 0x1202EAFC: mov esi, dword ptr [eax] */
    ecx = MEM32(ebx + 0x8); /* 0x1202EAFE: mov ecx, dword ptr [ebx + 8] */
    eax = ebp + (-0x14); /* 0x1202EB01: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1202EB04: push eax */
    eax = MEM32(ecx); /* 0x1202EB05: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202EB07: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202EB08: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202EB0B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1202EB0C: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1202EB0F: push dword ptr [ebx + 0x1c] */
    RECOMP_ICALL(MEM32(esi + 0x2C)); /* 0x1202EB12: call dword ptr [esi + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EB15: mov esi, eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1202EB17: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x1202EB1A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202EB1C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1202EB1D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1202EB20: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1202EB24: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EC3C; /* 0x1202EB26: js 0x1202ec3c */
L_1202EB2C:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202EB2C: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1202EB2F: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1202EB32: push dword ptr [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x1202EB35: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202EB36: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202E91A); /* 0x1202EB39: call 0x1202e91a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EB3E: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1202EB40: mov dword ptr [ebp - 0x1c], esi */
    /* test esi, esi */ /* 0x1202EB43: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EC3C; /* 0x1202EB45: js 0x1202ec3c */
L_1202EB4B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202EB4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202EB4D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1202EB4F: mov dword ptr [ebp + 0xc], eax */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1202EB52: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202EB7A; /* 0x1202EB55: jbe 0x1202eb7a */
L_1202EB57:
    esi = MEM32(ebp + 0x10); /* 0x1202EB57: mov esi, dword ptr [ebp + 0x10] */
L_1202EB5A:
    eax = MEM32(ebx + 0x1C); /* 0x1202EB5A: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(eax); /* 0x1202EB5D: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1202EB5F: push edi */
    PUSH32(esp, eax); /* 0x1202EB60: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202EB61: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1202EB64: mov ecx, eax */
    eax = MEM32(ebp + 0xC); /* 0x1202EB66: mov eax, dword ptr [ebp + 0xc] */
    /* cmp ecx, eax */ /* 0x1202EB69: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202EB72; /* 0x1202EB6B: jbe 0x1202eb72 */
L_1202EB6D:
    eax = ecx; /* 0x1202EB6D: mov eax, ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1202EB6F: mov dword ptr [ebp + 0xc], eax */
L_1202EB72:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202EB72: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x1202EB73: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202EB5A; /* 0x1202EB75: jb 0x1202eb5a */
L_1202EB77:
    esi = MEM32(ebp + (-0x1C)); /* 0x1202EB77: mov esi, dword ptr [ebp - 0x1c] */
L_1202EB7A:
    edi = 0x120014BCu; /* 0x1202EB7A: mov edi, 0x120014bc */
    PUSH32(esp, edi); /* 0x1202EB7F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202EB80: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1202EB82: push 4 */
    edx = POP32_VAL(esp); /* 0x1202EB84: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202EB85: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202EB87: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202EB8A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202EB8C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202EB8E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202EB8F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1202EB94: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1202EB95: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1202EB98: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202EB9B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1202EB9D: push 4 */
    edx = POP32_VAL(esp); /* 0x1202EB9F: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202EBA0: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202EBA2: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202EBA5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202EBA7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202EBA9: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202EBAA: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1202EBAF: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1202EBB2: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = eax; /* 0x1202EBB6: mov edx, eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x1202EBB8: mov dword ptr [ebp - 0xc], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202EC37; /* 0x1202EBBB: je 0x1202ec37 */
L_1202EBBD:
    /* test edx, edx */ /* 0x1202EBBD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EC37; /* 0x1202EBBF: je 0x1202ec37 */
L_1202EBC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202EBC1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = edi; /* 0x1202EBC3: mov dword ptr [ebp + 0xc], edi */
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1202EBC6: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202EC2D; /* 0x1202EBC9: jbe 0x1202ec2d */
L_1202EBCB:
    goto L_1202EBD0; /* 0x1202EBCB: jmp 0x1202ebd0 */
L_1202EBCD:
    edx = MEM32(ebp + (-0xC)); /* 0x1202EBCD: mov edx, dword ptr [ebp - 0xc] */
L_1202EBD0:
    eax = MEM32(ebx + 0x1C); /* 0x1202EBD0: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(eax); /* 0x1202EBD3: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1202EBD5: push edx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202EBD6: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1202EBD9: push edi */
    PUSH32(esp, eax); /* 0x1202EBDA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1202EBDB: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EBDE: mov esi, eax */
    /* test esi, esi */ /* 0x1202EBE0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EC3C; /* 0x1202EBE2: js 0x1202ec3c */
L_1202EBE4:
    eax = MEM32(ebx + 0x1C); /* 0x1202EBE4: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(eax); /* 0x1202EBE7: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1202EBE9: push edi */
    PUSH32(esp, eax); /* 0x1202EBEA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202EBEB: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202EBEE: push dword ptr [ebp - 8] */
    edx = MEM32(ebx + 0x1C); /* 0x1202EBF1: mov edx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202EBF4: push dword ptr [ebp + 0xc] */
    ecx = MEM32(edx); /* 0x1202EBF7: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1202EBF9: push edx */
    esi = eax; /* 0x1202EBFA: mov esi, eax */
    edi = edx; /* 0x1202EBFC: mov edi, edx */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x1202EBFE: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202EC01: push eax */
    eax = MEM32(edi); /* 0x1202EC02: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1202EC04: push esi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1202EC05: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202EC08: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202EC0B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1202EC0E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1202EC0F: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202EC12: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202EC13: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202E998); /* 0x1202EC16: call 0x1202e998 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EC1B: mov esi, eax */
    /* test esi, esi */ /* 0x1202EC1D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EC3C; /* 0x1202EC1F: js 0x1202ec3c */
L_1202EC21:
    edi = MEM32(ebp + 0xC); /* 0x1202EC21: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202EC24: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = edi; /* 0x1202EC25: mov dword ptr [ebp + 0xc], edi */
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x1202EC28: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202EBCD; /* 0x1202EC2B: jb 0x1202ebcd */
L_1202EC2D:
    ecx = MEM32(ebp + 0x14); /* 0x1202EC2D: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + (-0x8)); /* 0x1202EC30: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x1202EC33: mov dword ptr [ecx], eax */
    goto L_1202EC3C; /* 0x1202EC35: jmp 0x1202ec3c */
L_1202EC37:
    esi = 0x8007000Eu; /* 0x1202EC37: mov esi, 0x8007000e */
L_1202EC3C:
    edi = POP32_VAL(esp); /* 0x1202EC3C: pop edi */
L_1202EC3D:
    PUSH32(esp, 0); /* 0x1202EC3D: push 0 */
    RECOMP_CALL(sub_121BF388); /* 0x1202EC3F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202EC44: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_121BF388); /* 0x1202EC47: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1202EC4C: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x1202EC4F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1202EC54: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202EC57: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1202EC5A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EC64; /* 0x1202EC5C: je 0x1202ec64 */
L_1202EC5E:
    eax = MEM32(ecx); /* 0x1202EC5E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202EC60: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202EC61: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202EC64:
    eax = esi; /* 0x1202EC64: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202EC66: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202EC67: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202EC68: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202EC69: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202EC71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202EC71u);

L_1202EC71:
    edi = edi; /* 0x1202EC71: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202EC73: push ebp */
    ebp = esp; /* 0x1202EC74: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202EC76: push ecx */
    PUSH32(esp, esi); /* 0x1202EC77: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202EC78: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x1202EC7A: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1202EC7D: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202ECC2; /* 0x1202EC80: je 0x1202ecc2 */
L_1202EC82:
    ecx = MEM32(ebp + 0x8); /* 0x1202EC82: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + 0xC; /* 0x1202EC85: lea eax, [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x1202EC88: push eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1202EC89: push dword ptr [ebp + 0x20] */
    eax = ebp + (-0x4); /* 0x1202EC8C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1202EC8F: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202EC90: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x1202EC93: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202EC96: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1202EC99: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1202EC9C: push dword ptr [eax + 0x14] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1202EC9F: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1202ECA2: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1202ECA5: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(eax)); /* 0x1202ECA8: push dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202ECAA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx)); /* 0x1202ECAD: push dword ptr [ecx] */
    RECOMP_CALL(sub_1207B1E3); /* 0x1202ECAF: call 0x1207b1e3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202ECB4: mov esi, eax */
    /* test esi, esi */ /* 0x1202ECB6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202ECC2; /* 0x1202ECB8: js 0x1202ecc2 */
L_1202ECBA:
    edx = MEM32(ebp + 0x24); /* 0x1202ECBA: mov edx, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1202ECBD: mov ecx, dword ptr [ebp - 4] */
    MEM32(edx) = ecx; /* 0x1202ECC0: mov dword ptr [edx], ecx */
L_1202ECC2:
    PUSH32(esp, 0); /* 0x1202ECC2: push 0 */
    RECOMP_CALL(sub_121BF388); /* 0x1202ECC4: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202ECC9: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1202ECCA: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202ECCD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ECD7; /* 0x1202ECCF: je 0x1202ecd7 */
L_1202ECD1:
    eax = MEM32(ecx); /* 0x1202ECD1: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202ECD3: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202ECD4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202ECD7:
    eax = esi; /* 0x1202ECD7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202ECD9: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202ECDA: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1202ECDB: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1202ECE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202ECE3u);

L_1202ECE3:
    edi = edi; /* 0x1202ECE3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202ECE5: push ebp */
    ebp = esp; /* 0x1202ECE6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202ECE8: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x1202ECE9: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1202ECEC: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202ECED: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x1202ECEF: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x8), esi */ /* 0x1202ECF2: cmp dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202ED2B; /* 0x1202ECF5: je 0x1202ed2b */
L_1202ECF7:
    ecx = MEM32(ebp + 0x8); /* 0x1202ECF7: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + 0xC; /* 0x1202ECFA: lea eax, [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x1202ECFD: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202ECFE: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x4); /* 0x1202ED01: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1202ED04: push eax */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1202ED05: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(edx + 0x14)); /* 0x1202ED08: push dword ptr [edx + 0x14] */
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x1202ED0B: push dword ptr [edx + 0x10] */
    PUSH32(esp, MEM32(edx + 0xC)); /* 0x1202ED0E: push dword ptr [edx + 0xc] */
    PUSH32(esp, MEM32(edx)); /* 0x1202ED11: push dword ptr [edx] */
    PUSH32(esp, MEM32(edx + 0x8)); /* 0x1202ED13: push dword ptr [edx + 8] */
    PUSH32(esp, MEM32(ecx)); /* 0x1202ED16: push dword ptr [ecx] */
    RECOMP_CALL(sub_1207B842); /* 0x1202ED18: call 0x1207b842 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202ED1D: mov esi, eax */
    /* test esi, esi */ /* 0x1202ED1F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202ED2B; /* 0x1202ED21: js 0x1202ed2b */
L_1202ED23:
    edx = MEM32(ebp + 0x14); /* 0x1202ED23: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1202ED26: mov ecx, dword ptr [ebp - 4] */
    MEM32(edx) = ecx; /* 0x1202ED29: mov dword ptr [edx], ecx */
L_1202ED2B:
    PUSH32(esp, 0); /* 0x1202ED2B: push 0 */
    RECOMP_CALL(sub_121BF388); /* 0x1202ED2D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202ED32: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1202ED33: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202ED36: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202ED40; /* 0x1202ED38: je 0x1202ed40 */
L_1202ED3A:
    eax = MEM32(ecx); /* 0x1202ED3A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202ED3C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202ED3D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202ED40:
    eax = esi; /* 0x1202ED40: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202ED42: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202ED43: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1202ED44: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1202ED4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202ED4Cu);

L_1202ED4C:
    edi = edi; /* 0x1202ED4C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202ED4E: push ebp */
    ebp = esp; /* 0x1202ED4F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1202ED51: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x28); /* 0x1202ED54: mov eax, dword ptr [ebp + 0x28] */
    ecx = MEM32(eax); /* 0x1202ED57: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202ED59: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1202ED5D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1202ED61: push esi */
    PUSH32(esp, edi); /* 0x1202ED62: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202ED63: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x4); /* 0x1202ED65: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1202ED68: push edx */
    PUSH32(esp, esi); /* 0x1202ED69: push esi */
    PUSH32(esp, esi); /* 0x1202ED6A: push esi */
    PUSH32(esp, esi); /* 0x1202ED6B: push esi */
    PUSH32(esp, esi); /* 0x1202ED6C: push esi */
    PUSH32(esp, 0x12003390u); /* 0x1202ED6D: push 0x12003390 */
    PUSH32(esp, eax); /* 0x1202ED72: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202ED73: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202ED76: mov edi, eax */
    /* test edi, edi */ /* 0x1202ED78: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EF89; /* 0x1202ED7A: js 0x1202ef89 */
L_1202ED80:
    PUSH32(esp, ebx); /* 0x1202ED80: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x1202ED81: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, ebx */ /* 0x1202ED84: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EE28; /* 0x1202ED86: je 0x1202ee28 */
L_1202ED8C:
    edi = ebx; /* 0x1202ED8C: mov edi, ebx */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x48u); /* 0x1202ED8E: imul edi, edi, 0x48 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1202ED91: add edi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120014BCu); /* 0x1202ED94: push 0x120014bc */
    PUSH32(esp, edi); /* 0x1202ED99: push edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1202ED9A: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_12018970); /* 0x1202ED9D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EDA2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202EDA4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202EDA5: pop ecx */
    MEM32(ebp + 0x28) = esi; /* 0x1202EDA6: mov dword ptr [ebp + 0x28], esi */
    /* test esi, esi */ /* 0x1202EDA9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EEFB; /* 0x1202EDAB: je 0x1202eefb */
L_1202EDB1:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1202EDB1: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ebx; /* 0x1202EDB4: mov dword ptr [esi + 4], ebx */
    eax = esi + 0x8; /* 0x1202EDB7: lea eax, [esi + 8] */
    /* test ebx, ebx */ /* 0x1202EDBA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EDFD; /* 0x1202EDBC: je 0x1202edfd */
L_1202EDBE:
    edi = MEM32(ebp + 0x1C); /* 0x1202EDBE: mov edi, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1202EDC1: add edi, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1202EDC4: mov esi, eax */
L_1202EDC6:
    fp_push(*(float*)&MEM32(edi + (-0x4))); /* 0x1202EDC6: fld dword ptr [edi - 4] */
    RECOMP_CALL(sub_121BF2F7); /* 0x1202EDC9: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1202EDCE: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = 4; /* 0x1202EDD0: mov dword ptr [esi + 4], 4 */
    fp_push(*(float*)&MEM32(edi + 0xC)); /* 0x1202EDD7: fld dword ptr [edi + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x1202EDDA: fstp dword ptr [esi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1202EDDD: add esi, 0x18 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edi)); /* 0x1202EDE0: fld dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x1202EDE2: add edi, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202EDE5: dec ebx */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x1202EDE6: fstp dword ptr [esi - 0xc] */
    fp_push(*(float*)&MEM32(edi + (-0x10))); /* 0x1202EDE9: fld dword ptr [edi - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x1202EDEC: fstp dword ptr [esi - 8] */
    fp_push(*(float*)&MEM32(edi + (-0xC))); /* 0x1202EDEF: fld dword ptr [edi - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x1202EDF2: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202EDC6; /* 0x1202EDF5: jne 0x1202edc6 */
L_1202EDF7:
    esi = MEM32(ebp + 0x28); /* 0x1202EDF7: mov esi, dword ptr [ebp + 0x28] */
    edi = MEM32(ebp + (-0xC)); /* 0x1202EDFA: mov edi, dword ptr [ebp - 0xc] */
L_1202EDFD:
    eax = MEM32(ebp + (-0x4)); /* 0x1202EDFD: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202EE00: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1202EE02: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1202EE05: push edx */
    PUSH32(esp, esi); /* 0x1202EE06: push esi */
    PUSH32(esp, edi); /* 0x1202EE07: push edi */
    PUSH32(esp, 0); /* 0x1202EE08: push 0 */
    PUSH32(esp, 0); /* 0x1202EE0A: push 0 */
    PUSH32(esp, 0x120033B0u); /* 0x1202EE0C: push 0x120033b0 */
    PUSH32(esp, eax); /* 0x1202EE11: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202EE12: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202EE15: mov edi, eax */
    /* test edi, edi */ /* 0x1202EE17: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EF88; /* 0x1202EE19: js 0x1202ef88 */
L_1202EE1F:
    PUSH32(esp, esi); /* 0x1202EE1F: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202EE20: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202EE25: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202EE26: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202EE28:
    ebx = MEM32(ebp + 0x10); /* 0x1202EE28: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1202EE2B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EECF; /* 0x1202EE2D: je 0x1202eecf */
L_1202EE33:
    edi = ebx; /* 0x1202EE33: mov edi, ebx */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x48u); /* 0x1202EE35: imul edi, edi, 0x48 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1202EE38: add edi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120014BCu); /* 0x1202EE3B: push 0x120014bc */
    PUSH32(esp, edi); /* 0x1202EE40: push edi */
    MEM32(ebp + 0x1C) = edi; /* 0x1202EE41: mov dword ptr [ebp + 0x1c], edi */
    RECOMP_CALL(sub_12018970); /* 0x1202EE44: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EE49: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202EE4B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202EE4C: pop ecx */
    MEM32(ebp + 0x28) = esi; /* 0x1202EE4D: mov dword ptr [ebp + 0x28], esi */
    /* test esi, esi */ /* 0x1202EE50: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EEFB; /* 0x1202EE52: je 0x1202eefb */
L_1202EE58:
    eax = esi + 0x8; /* 0x1202EE58: lea eax, [esi + 8] */
    MEM32(esi) = 1; /* 0x1202EE5B: mov dword ptr [esi], 1 */
    MEM32(esi + 0x4) = ebx; /* 0x1202EE61: mov dword ptr [esi + 4], ebx */
    MEM32(ebp + 0x18) = eax; /* 0x1202EE64: mov dword ptr [ebp + 0x18], eax */
    /* test ebx, ebx */ /* 0x1202EE67: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EEA4; /* 0x1202EE69: je 0x1202eea4 */
L_1202EE6B:
    edi = MEM32(ebp + 0x14); /* 0x1202EE6B: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1202EE6E: add edi, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1202EE71: mov esi, eax */
L_1202EE73:
    fp_push(*(float*)&MEM32(edi + (-0x8))); /* 0x1202EE73: fld dword ptr [edi - 8] */
    RECOMP_CALL(sub_121BF2F7); /* 0x1202EE76: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1202EE7B: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = 3; /* 0x1202EE7D: mov dword ptr [esi + 4], 3 */
    fp_push(*(float*)&MEM32(edi + (-0x4))); /* 0x1202EE84: fld dword ptr [edi - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x1202EE87: fstp dword ptr [esi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x1202EE8A: add esi, 0x14 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edi)); /* 0x1202EE8D: fld dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1202EE8F: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202EE92: dec ebx */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x1202EE93: fstp dword ptr [esi - 8] */
    fp_push(*(float*)&MEM32(edi + (-0xC))); /* 0x1202EE96: fld dword ptr [edi - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x1202EE99: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202EE73; /* 0x1202EE9C: jne 0x1202ee73 */
L_1202EE9E:
    esi = MEM32(ebp + 0x28); /* 0x1202EE9E: mov esi, dword ptr [ebp + 0x28] */
    edi = MEM32(ebp + 0x1C); /* 0x1202EEA1: mov edi, dword ptr [ebp + 0x1c] */
L_1202EEA4:
    eax = MEM32(ebp + (-0x4)); /* 0x1202EEA4: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202EEA7: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1202EEA9: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1202EEAC: push edx */
    PUSH32(esp, esi); /* 0x1202EEAD: push esi */
    PUSH32(esp, edi); /* 0x1202EEAE: push edi */
    PUSH32(esp, 0); /* 0x1202EEAF: push 0 */
    PUSH32(esp, 0); /* 0x1202EEB1: push 0 */
    PUSH32(esp, 0x120033B0u); /* 0x1202EEB3: push 0x120033b0 */
    PUSH32(esp, eax); /* 0x1202EEB8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202EEB9: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202EEBC: mov edi, eax */
    /* test edi, edi */ /* 0x1202EEBE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EF88; /* 0x1202EEC0: js 0x1202ef88 */
L_1202EEC6:
    PUSH32(esp, esi); /* 0x1202EEC6: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202EEC7: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202EECC: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202EECD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202EECF:
    ebx = MEM32(ebp + 0x20); /* 0x1202EECF: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, ebx */ /* 0x1202EED2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EF78; /* 0x1202EED4: je 0x1202ef78 */
L_1202EEDA:
    edi = ebx; /* 0x1202EEDA: mov edi, ebx */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x48u); /* 0x1202EEDC: imul edi, edi, 0x48 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1202EEDF: add edi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120014BCu); /* 0x1202EEE2: push 0x120014bc */
    PUSH32(esp, edi); /* 0x1202EEE7: push edi */
    MEM32(ebp + 0x1C) = edi; /* 0x1202EEE8: mov dword ptr [ebp + 0x1c], edi */
    RECOMP_CALL(sub_12018970); /* 0x1202EEEB: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202EEF0: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202EEF2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202EEF3: pop ecx */
    MEM32(ebp + 0x28) = esi; /* 0x1202EEF4: mov dword ptr [ebp + 0x28], esi */
    /* test esi, esi */ /* 0x1202EEF7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202EF05; /* 0x1202EEF9: jne 0x1202ef05 */
L_1202EEFB:
    edi = 0x8007000Eu; /* 0x1202EEFB: mov edi, 0x8007000e */
    goto L_1202EF88; /* 0x1202EF00: jmp 0x1202ef88 */
L_1202EF05:
    eax = esi + 0x8; /* 0x1202EF05: lea eax, [esi + 8] */
    MEM32(esi) = 2; /* 0x1202EF08: mov dword ptr [esi], 2 */
    MEM32(esi + 0x4) = ebx; /* 0x1202EF0E: mov dword ptr [esi + 4], ebx */
    MEM32(ebp + 0x18) = eax; /* 0x1202EF11: mov dword ptr [ebp + 0x18], eax */
    /* test ebx, ebx */ /* 0x1202EF14: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EF51; /* 0x1202EF16: je 0x1202ef51 */
L_1202EF18:
    edi = MEM32(ebp + 0x24); /* 0x1202EF18: mov edi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1202EF1B: add edi, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1202EF1E: mov esi, eax */
L_1202EF20:
    fp_push(*(float*)&MEM32(edi + (-0x8))); /* 0x1202EF20: fld dword ptr [edi - 8] */
    RECOMP_CALL(sub_121BF2F7); /* 0x1202EF23: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1202EF28: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = 3; /* 0x1202EF2A: mov dword ptr [esi + 4], 3 */
    fp_push(*(float*)&MEM32(edi + (-0x4))); /* 0x1202EF31: fld dword ptr [edi - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x1202EF34: fstp dword ptr [esi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x1202EF37: add esi, 0x14 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edi)); /* 0x1202EF3A: fld dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1202EF3C: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1202EF3F: dec ebx */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x1202EF40: fstp dword ptr [esi - 8] */
    fp_push(*(float*)&MEM32(edi + (-0xC))); /* 0x1202EF43: fld dword ptr [edi - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x1202EF46: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202EF20; /* 0x1202EF49: jne 0x1202ef20 */
L_1202EF4B:
    esi = MEM32(ebp + 0x28); /* 0x1202EF4B: mov esi, dword ptr [ebp + 0x28] */
    edi = MEM32(ebp + 0x1C); /* 0x1202EF4E: mov edi, dword ptr [ebp + 0x1c] */
L_1202EF51:
    eax = MEM32(ebp + (-0x4)); /* 0x1202EF51: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202EF54: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1202EF56: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1202EF59: push edx */
    PUSH32(esp, esi); /* 0x1202EF5A: push esi */
    PUSH32(esp, edi); /* 0x1202EF5B: push edi */
    PUSH32(esp, 0); /* 0x1202EF5C: push 0 */
    PUSH32(esp, 0); /* 0x1202EF5E: push 0 */
    PUSH32(esp, 0x120033B0u); /* 0x1202EF60: push 0x120033b0 */
    PUSH32(esp, eax); /* 0x1202EF65: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202EF66: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202EF69: mov edi, eax */
    /* test edi, edi */ /* 0x1202EF6B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202EF88; /* 0x1202EF6D: js 0x1202ef88 */
L_1202EF6F:
    PUSH32(esp, esi); /* 0x1202EF6F: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202EF70: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202EF75: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202EF76: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202EF78:
    eax = MEM32(ebp + (-0x4)); /* 0x1202EF78: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202EF7B: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1202EF7D: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202EF7F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1202EF82: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1202EF83: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202EF86: mov edi, eax */
L_1202EF88:
    ebx = POP32_VAL(esp); /* 0x1202EF88: pop ebx */
L_1202EF89:
    ecx = MEM32(ebp + (-0x8)); /* 0x1202EF89: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x1202EF8C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EF9A; /* 0x1202EF8E: je 0x1202ef9a */
L_1202EF90:
    eax = MEM32(ecx); /* 0x1202EF90: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202EF92: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202EF93: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202EF96: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202EF9A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202EF9A: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202EF9D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202EFAB; /* 0x1202EF9F: je 0x1202efab */
L_1202EFA1:
    eax = MEM32(ecx); /* 0x1202EFA1: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202EFA3: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202EFA4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1202EFA7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202EFAB:
    PUSH32(esp, esi); /* 0x1202EFAB: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202EFAC: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202EFB1: pop ecx */
    eax = edi; /* 0x1202EFB2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1202EFB4: pop edi */
    esi = POP32_VAL(esp); /* 0x1202EFB5: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202EFB6: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1202EFB7: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1202EFBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202EFBFu);

L_1202EFBF:
    edi = edi; /* 0x1202EFBF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202EFC1: push ebp */
    ebp = esp; /* 0x1202EFC2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1202EFC4: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202EFC7: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202EFCB: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202EFCC: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx); /* 0x1202EFCF: mov eax, dword ptr [ebx] */
    ecx = ebp + 0xC; /* 0x1202EFD1: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1202EFD4: push ecx */
    PUSH32(esp, ebx); /* 0x1202EFD5: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1202EFD6: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202EFD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F09A; /* 0x1202EFDB: js 0x1202f09a */
L_1202EFE1:
    eax = MEM32(ebp + 0xC); /* 0x1202EFE1: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1202EFE4: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1202EFE6: push esi */
    PUSH32(esp, edi); /* 0x1202EFE7: push edi */
    PUSH32(esp, eax); /* 0x1202EFE8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1202EFE9: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1202EFEC: mov edi, eax */
    PUSH32(esp, 0x120014BCu); /* 0x1202EFEE: push 0x120014bc */
    eax = edi + 0x13; /* 0x1202EFF3: lea eax, [edi + 0x13] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1202EFF6: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x1202EFF6: shr eax, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202EFF9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1202EFFB: push 4 */
    edx = POP32_VAL(esp); /* 0x1202EFFD: pop edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1202EFFE: mov dword ptr [ebp - 0xc], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202F001: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202F003: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202F006: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202F008: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202F00A: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202F00B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F010: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1202F012: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202F013: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1202F014: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x1202F017: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202F022; /* 0x1202F019: jne 0x1202f022 */
L_1202F01B:
    esi = 0x8007000Eu; /* 0x1202F01B: mov esi, 0x8007000e */
    goto L_1202F089; /* 0x1202F020: jmp 0x1202f089 */
L_1202F022:
    MEM32(esi) = edi; /* 0x1202F022: mov dword ptr [esi], edi */
    eax = MEM32(ebx); /* 0x1202F024: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1202F026: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1202F027: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x1202F02A: fstp dword ptr [esi + 4] */
    eax = MEM32(ebx); /* 0x1202F02D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1202F02F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1202F030: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1202F033: mov dword ptr [esi + 8], eax */
    eax = edi + 0x3; /* 0x1202F036: lea eax, [edi + 3] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1202F039: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x1202F039: shr eax, 2 */
    MEM32(esi + 0xC) = eax; /* 0x1202F03C: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x1202F03F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1202F042: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1202F044: push edi */
    PUSH32(esp, eax); /* 0x1202F045: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1202F046: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202F049: push eax */
    eax = esi + 0x10; /* 0x1202F04A: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x1202F04D: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1202F04E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1202F053: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x1202F056: mov eax, dword ptr [edi] */
    esi = MEM32(eax); /* 0x1202F058: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1202F05A: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x8); /* 0x1202F05D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1202F060: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F061: push dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0xC)); /* 0x1202F064: mov eax, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1202F067: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1202F067: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1202F06A: push eax */
    eax = MEM32(ebx); /* 0x1202F06B: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1202F06D: push 0 */
    PUSH32(esp, ebx); /* 0x1202F06F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1202F070: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202F073: push eax */
    PUSH32(esp, 0x12001D58u); /* 0x1202F074: push 0x12001d58 */
    PUSH32(esp, MEM32(edi)); /* 0x1202F079: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(esi + 0x10)); /* 0x1202F07B: call dword ptr [esi + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F07E: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1202F081: mov esi, eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202F083: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F088: pop ecx */
L_1202F089:
    ecx = MEM32(ebp + 0xC); /* 0x1202F089: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1202F08C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F096; /* 0x1202F08E: je 0x1202f096 */
L_1202F090:
    eax = MEM32(ecx); /* 0x1202F090: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F092: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F093: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202F096:
    edi = POP32_VAL(esp); /* 0x1202F096: pop edi */
    eax = esi; /* 0x1202F097: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202F099: pop esi */
L_1202F09A:
    ebx = POP32_VAL(esp); /* 0x1202F09A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202F09B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202F09C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202F0A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F0A4u);

L_1202F0A4:
    edi = edi; /* 0x1202F0A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F0A6: push ebp */
    ebp = esp; /* 0x1202F0A7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1202F0A9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1202F0AC: push ebx */
    PUSH32(esp, esi); /* 0x1202F0AD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202F0AE: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1202F0B1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202F0B2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x1202F0B4: mov ebx, edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1202F0B6: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1202F0B9: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1202F0BC: mov dword ptr [ebp - 0xc], edi */
    /* test esi, esi */ /* 0x1202F0BF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F18A; /* 0x1202F0C1: je 0x1202f18a */
L_1202F0C7:
    eax = MEM32(esi); /* 0x1202F0C7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1202F0C9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1202F0CA: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202F0CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F15D; /* 0x1202F0CF: je 0x1202f15d */
L_1202F0D5:
    eax = MEM32(esi); /* 0x1202F0D5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1202F0D7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1202F0D8: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1202F0DB: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x1202F0DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F120; /* 0x1202F0E0: je 0x1202f120 */
L_1202F0E2:
    eax = MEM32(esi); /* 0x1202F0E2: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x1202F0E4: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1202F0E7: push ecx */
    PUSH32(esp, 0); /* 0x1202F0E8: push 0 */
    PUSH32(esp, esi); /* 0x1202F0EA: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1202F0EB: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202F0EE: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1202F0F0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F15B; /* 0x1202F0F2: js 0x1202f15b */
L_1202F0F4:
    eax = MEM32(ebp + (-0x4)); /* 0x1202F0F4: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202F0F7: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1202F0F9: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1202F0FC: push edx */
    PUSH32(esp, 0x12001DC8u); /* 0x1202F0FD: push 0x12001dc8 */
    PUSH32(esp, eax); /* 0x1202F102: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1202F103: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202F105: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202F150; /* 0x1202F107: jns 0x1202f150 */
L_1202F109:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202F109: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202F10C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F11A; /* 0x1202F10E: je 0x1202f11a */
L_1202F110:
    eax = MEM32(ecx); /* 0x1202F110: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F112: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F113: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1202F116: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202F11A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1202F11A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1202F11B: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202F0E2; /* 0x1202F11E: jb 0x1202f0e2 */
L_1202F120:
    fp_push(*(double*)ADDR(0x12003368)); /* 0x1202F120: fld qword ptr [0x12003368] */
L_1202F126:
    RECOMP_CALL(sub_121BF2F7); /* 0x1202F126: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0xC); /* 0x1202F12B: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1202F12E: push edx */
    edx = ebp + (-0x10); /* 0x1202F12F: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1202F132: push edx */
    PUSH32(esp, 4); /* 0x1202F133: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202F135: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1202F137: push edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x1202F138: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x8); /* 0x1202F13B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1202F13E: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1202F140: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1202F142: push edi */
    PUSH32(esp, 0x12001D48u); /* 0x1202F143: push 0x12001d48 */
    PUSH32(esp, eax); /* 0x1202F148: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1202F149: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202F14C: mov ebx, eax */
    goto L_1202F15D; /* 0x1202F14E: jmp 0x1202f15d */
L_1202F150:
    eax = MEM32(ebp + (-0x8)); /* 0x1202F150: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x1202F153: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202F155: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1202F156: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1202F126; /* 0x1202F159: jmp 0x1202f126 */
L_1202F15B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202F15B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202F15D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202F15D: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202F160: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F16D; /* 0x1202F162: je 0x1202f16d */
L_1202F164:
    eax = MEM32(ecx); /* 0x1202F164: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F166: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F167: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x1202F16A: mov dword ptr [ebp - 4], edi */
L_1202F16D:
    ecx = MEM32(ebp + (-0x8)); /* 0x1202F16D: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x1202F170: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F17D; /* 0x1202F172: je 0x1202f17d */
L_1202F174:
    eax = MEM32(ecx); /* 0x1202F174: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F176: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F177: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x1202F17A: mov dword ptr [ebp - 8], edi */
L_1202F17D:
    ecx = MEM32(ebp + (-0xC)); /* 0x1202F17D: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x1202F180: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F18A; /* 0x1202F182: je 0x1202f18a */
L_1202F184:
    eax = MEM32(ecx); /* 0x1202F184: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F186: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F187: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202F18A:
    edi = POP32_VAL(esp); /* 0x1202F18A: pop edi */
    esi = POP32_VAL(esp); /* 0x1202F18B: pop esi */
    eax = ebx; /* 0x1202F18C: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1202F18E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202F18F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202F190: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202F198(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F198u);

L_1202F198:
    edi = edi; /* 0x1202F198: mov edi, edi */
    PUSH32(esp, esi); /* 0x1202F19A: push esi */
    esi = ecx; /* 0x1202F19B: mov esi, ecx */
    PUSH32(esp, MEM32(esi)); /* 0x1202F19D: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF388); /* 0x1202F19F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x4); /* 0x1202F1A4: mov esi, dword ptr [esi + 4] */
    ecx = POP32_VAL(esp); /* 0x1202F1A7: pop ecx */
    /* test esi, esi */ /* 0x1202F1A8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F1BA; /* 0x1202F1AA: je 0x1202f1ba */
L_1202F1AC:
    ecx = esi; /* 0x1202F1AC: mov ecx, esi */
    RECOMP_CALL(sub_1202F198); /* 0x1202F1AE: call 0x1202f198 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1202F1B3: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1202F1B4: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F1B9: pop ecx */
L_1202F1BA:
    esi = POP32_VAL(esp); /* 0x1202F1BA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1202F1BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1202F1C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F1C1u);

L_1202F1C1:
    edi = edi; /* 0x1202F1C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F1C3: push ebp */
    ebp = esp; /* 0x1202F1C4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202F1C6: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1202F1C7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202F1CB: push ebx */
    PUSH32(esp, esi); /* 0x1202F1CC: push esi */
    PUSH32(esp, 0x120014BCu); /* 0x1202F1CD: push 0x120014bc */
    PUSH32(esp, 0x40u); /* 0x1202F1D2: push 0x40 */
    RECOMP_CALL(sub_12018970); /* 0x1202F1D4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1202F1D9: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1202F1DB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202F1DC: pop ecx */
    /* test ebx, ebx */ /* 0x1202F1DD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202F1E8; /* 0x1202F1DF: jne 0x1202f1e8 */
L_1202F1E1:
    esi = 0x8007000Eu; /* 0x1202F1E1: mov esi, 0x8007000e */
    goto L_1202F212; /* 0x1202F1E6: jmp 0x1202f212 */
L_1202F1E8:
    esi = MEM32(ebp + 0xC); /* 0x1202F1E8: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x1202F1EB: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1202F1EE: push edi */
    PUSH32(esp, 0x10u); /* 0x1202F1EF: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1202F1F1: pop ecx */
    edx = ebp + (-0x4); /* 0x1202F1F2: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1202F1F5: push edx */
    PUSH32(esp, ebx); /* 0x1202F1F6: push ebx */
    PUSH32(esp, 0x40u); /* 0x1202F1F7: push 0x40 */
    PUSH32(esp, 0); /* 0x1202F1F9: push 0 */
    PUSH32(esp, 0); /* 0x1202F1FB: push 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1202F1FD: add esi, 4 */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x1202F200: mov edi, ebx */
    PUSH32(esp, 0x12003380u); /* 0x1202F202: push 0x12003380 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1202F207: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(eax); /* 0x1202F209: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202F20B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1202F20C: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F20F: mov esi, eax */
    edi = POP32_VAL(esp); /* 0x1202F211: pop edi */
L_1202F212:
    PUSH32(esp, ebx); /* 0x1202F212: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1202F213: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F218: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1202F219: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202F21C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F226; /* 0x1202F21E: je 0x1202f226 */
L_1202F220:
    eax = MEM32(ecx); /* 0x1202F220: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F222: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F223: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202F226:
    eax = esi; /* 0x1202F226: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202F228: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202F229: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202F22A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202F22B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202F233(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F233u);

L_1202F233:
    edi = edi; /* 0x1202F233: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F235: push ebp */
    ebp = esp; /* 0x1202F236: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1202F238: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x1202F23B: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1202F23E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202F23F: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202F242: push esi */
    PUSH32(esp, edi); /* 0x1202F243: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202F244: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202F247: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x4); /* 0x1202F249: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1202F24C: push edx */
    PUSH32(esp, esi); /* 0x1202F24D: push esi */
    PUSH32(esp, esi); /* 0x1202F24E: push esi */
    PUSH32(esp, esi); /* 0x1202F24F: push esi */
    PUSH32(esp, MEM32(edi)); /* 0x1202F250: push dword ptr [edi] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1202F252: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1202F255: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x1202F258: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x1202F25B: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x1202F25E: mov dword ptr [ebp - 0x14], esi */
    PUSH32(esp, 0x12003370u); /* 0x1202F261: push 0x12003370 */
    /* test ecx, ecx */ /* 0x1202F266: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F272; /* 0x1202F268: je 0x1202f272 */
L_1202F26A:
    eax = MEM32(ecx); /* 0x1202F26A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F26C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1202F26D: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    goto L_1202F27A; /* 0x1202F270: jmp 0x1202f27a */
L_1202F272:
    eax = MEM32(ebx); /* 0x1202F272: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x1202F274: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202F276: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1202F277: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
L_1202F27A:
    esi = eax; /* 0x1202F27A: mov esi, eax */
    /* test esi, esi */ /* 0x1202F27C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F3DB; /* 0x1202F27E: js 0x1202f3db */
L_1202F284:
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x1202F284: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F2A2; /* 0x1202F288: je 0x1202f2a2 */
L_1202F28A:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F28A: push dword ptr [ebp - 4] */
    eax = MEM32(ebx + 0x4); /* 0x1202F28D: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x1202F290: push dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x1202F292: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1202F294: push edi */
    PUSH32(esp, eax); /* 0x1202F295: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1202F296: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F298: mov esi, eax */
    /* test esi, esi */ /* 0x1202F29A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F3DB; /* 0x1202F29C: js 0x1202f3db */
L_1202F2A2:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F2A2: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1202F2A5: push edi */
    PUSH32(esp, ebx); /* 0x1202F2A6: push ebx */
    RECOMP_CALL(sub_1202F1C1); /* 0x1202F2A7: call 0x1202f1c1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F2AC: mov esi, eax */
    /* test esi, esi */ /* 0x1202F2AE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F3DB; /* 0x1202F2B0: js 0x1202f3db */
L_1202F2B6:
    edi = MEM32(edi + 0x44); /* 0x1202F2B6: mov edi, dword ptr [edi + 0x44] */
    goto L_1202F3A4; /* 0x1202F2B9: jmp 0x1202f3a4 */
L_1202F2BE:
    ecx = MEM32(edi + 0x8); /* 0x1202F2BE: mov ecx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x1202F2C1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F414; /* 0x1202F2C3: je 0x1202f414 */
L_1202F2C9:
    /* cmp MEM32(edi + 0x4), 3 */ /* 0x1202F2C9: cmp dword ptr [edi + 4], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202F2E2; /* 0x1202F2CD: jne 0x1202f2e2 */
L_1202F2CF:
    eax = ebp + 0x8; /* 0x1202F2CF: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1202F2D2: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F2D3: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1202F2D6: push edi */
    PUSH32(esp, ebx); /* 0x1202F2D7: push ebx */
    RECOMP_CALL(sub_1202ECE3); /* 0x1202F2D8: call 0x1202ece3 */
    RECOMP_FLAGS_IN();
    goto L_1202F36F; /* 0x1202F2DD: jmp 0x1202f36f */
L_1202F2E2:
    /* cmp MEM32(edi + 0x4), 2 */ /* 0x1202F2E2: cmp dword ptr [edi + 4], 2 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202F335; /* 0x1202F2E6: jne 0x1202f335 */
L_1202F2E8:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1202F2E8: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F2FB; /* 0x1202F2EC: je 0x1202f2fb */
L_1202F2EE:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1202F2EE: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x1202F2F1: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1202F2F6: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202F2FA: pop ecx */
L_1202F2FB:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1202F2FB: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F30E; /* 0x1202F2FF: je 0x1202f30e */
L_1202F301:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1202F301: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_121BF388); /* 0x1202F304: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1202F309: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202F30D: pop ecx */
L_1202F30E:
    eax = ebp + (-0x8); /* 0x1202F30E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1202F311: push eax */
    eax = ebp + (-0xC); /* 0x1202F312: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1202F315: push eax */
    eax = ebp + (-0x14); /* 0x1202F316: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1202F319: push eax */
    eax = ebp + (-0x10); /* 0x1202F31A: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1202F31D: push eax */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1202F31E: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_1204ACF5); /* 0x1202F321: call 0x1204acf5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F326: mov esi, eax */
    /* test esi, esi */ /* 0x1202F328: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F3DB; /* 0x1202F32A: js 0x1202f3db */
L_1202F330:
    eax = MEM32(ebp + (-0xC)); /* 0x1202F330: mov eax, dword ptr [ebp - 0xc] */
    goto L_1202F341; /* 0x1202F333: jmp 0x1202f341 */
L_1202F335:
    MEM32(ebp + (-0x8)) = ecx; /* 0x1202F335: mov dword ptr [ebp - 8], ecx */
    eax = MEM32(ecx); /* 0x1202F338: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F33A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1202F33B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x18); /* 0x1202F33E: mov eax, dword ptr [edi + 0x18] */
L_1202F341:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x1202F341: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F357; /* 0x1202F345: je 0x1202f357 */
L_1202F347:
    eax = ebp + 0x8; /* 0x1202F347: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1202F34A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F34B: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1202F34E: push edi */
    PUSH32(esp, ebx); /* 0x1202F34F: push ebx */
    RECOMP_CALL(sub_1202EA5A); /* 0x1202F350: call 0x1202ea5a */
    RECOMP_FLAGS_IN();
    goto L_1202F36F; /* 0x1202F355: jmp 0x1202f36f */
L_1202F357:
    ecx = ebp + 0x8; /* 0x1202F357: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1202F35A: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F35B: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1202F35E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1202F35F: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1202F362: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202F365: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1202F368: push edi */
    PUSH32(esp, ebx); /* 0x1202F369: push ebx */
    RECOMP_CALL(sub_1202EC71); /* 0x1202F36A: call 0x1202ec71 */
    RECOMP_FLAGS_IN();
L_1202F36F:
    esi = eax; /* 0x1202F36F: mov esi, eax */
    /* test esi, esi */ /* 0x1202F371: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F3DB; /* 0x1202F373: js 0x1202f3db */
L_1202F375:
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x1202F375: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F390; /* 0x1202F379: je 0x1202f390 */
L_1202F37B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202F37B: push dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x4); /* 0x1202F37E: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x1202F381: push dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x1202F383: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1202F385: push edi */
    PUSH32(esp, eax); /* 0x1202F386: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1202F387: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F38A: mov esi, eax */
    /* test esi, esi */ /* 0x1202F38C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F3DB; /* 0x1202F38E: js 0x1202f3db */
L_1202F390:
    ecx = MEM32(ebp + (-0x8)); /* 0x1202F390: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x1202F393: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F3A1; /* 0x1202F395: je 0x1202f3a1 */
L_1202F397:
    eax = MEM32(ecx); /* 0x1202F397: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F399: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F39A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202F39D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202F3A1:
    edi = MEM32(edi + 0x20); /* 0x1202F3A1: mov edi, dword ptr [edi + 0x20] */
L_1202F3A4:
    /* test edi, edi */ /* 0x1202F3A4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202F2BE; /* 0x1202F3A6: jne 0x1202f2be */
L_1202F3AC:
    edi = MEM32(ebp + 0xC); /* 0x1202F3AC: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edi + 0x4C), 0 */ /* 0x1202F3AF: cmp dword ptr [edi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F3C7; /* 0x1202F3B3: je 0x1202f3c7 */
L_1202F3B5:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F3B5: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(edi + 0x4C)); /* 0x1202F3B8: push dword ptr [edi + 0x4c] */
    PUSH32(esp, ebx); /* 0x1202F3BB: push ebx */
    RECOMP_CALL(sub_1202F233); /* 0x1202F3BC: call 0x1202f233 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F3C1: mov esi, eax */
    /* test esi, esi */ /* 0x1202F3C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F3DB; /* 0x1202F3C5: js 0x1202f3db */
L_1202F3C7:
    /* cmp MEM32(edi + 0x48), 0 */ /* 0x1202F3C7: cmp dword ptr [edi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F3DB; /* 0x1202F3CB: je 0x1202f3db */
L_1202F3CD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202F3CD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(edi + 0x48)); /* 0x1202F3D0: push dword ptr [edi + 0x48] */
    PUSH32(esp, ebx); /* 0x1202F3D3: push ebx */
    RECOMP_CALL(sub_1202F233); /* 0x1202F3D4: call 0x1202f233 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F3D9: mov esi, eax */
L_1202F3DB:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1202F3DB: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x1202F3DE: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1202F3E3: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_121BF388); /* 0x1202F3E6: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F3EB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202F3EC: pop ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1202F3ED: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x1202F3F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F3FE; /* 0x1202F3F2: je 0x1202f3fe */
L_1202F3F4:
    eax = MEM32(ecx); /* 0x1202F3F4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F3F6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F3F7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202F3FA: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202F3FE:
    ecx = MEM32(ebp + (-0x4)); /* 0x1202F3FE: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1202F401: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F40B; /* 0x1202F403: je 0x1202f40b */
L_1202F405:
    eax = MEM32(ecx); /* 0x1202F405: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F407: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F408: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1202F40B:
    edi = POP32_VAL(esp); /* 0x1202F40B: pop edi */
    eax = esi; /* 0x1202F40C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202F40E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202F40F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202F410: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202F411: ret 0xc */
L_1202F414:
    esi = 0x8876086Cu; /* 0x1202F414: mov esi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1202F3DB; /* 0x1202F419: jmp 0x1202f3db */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1202F420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F420u);

L_1202F420:
    edi = edi; /* 0x1202F420: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F422: push ebp */
    ebp = esp; /* 0x1202F423: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1202F425: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1202F428: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1202F42B: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1202F42D: push ebx */
    PUSH32(esp, esi); /* 0x1202F42E: push esi */
    PUSH32(esp, edi); /* 0x1202F42F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1202F430: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202F433: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202F435: push 0x10 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1202F437: mov dword ptr [ebp - 0x10], ecx */
    esi = MEM32(eax); /* 0x1202F43A: mov esi, dword ptr [eax] */
    eax = POP32_VAL(esp); /* 0x1202F43C: pop eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1202F43D: add esi, eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x1202F43F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1202F442: push eax */
    eax = MEM32(edi); /* 0x1202F443: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x1202F445: push ecx */
    PUSH32(esp, ecx); /* 0x1202F446: push ecx */
    PUSH32(esp, ecx); /* 0x1202F447: push ecx */
    ebx = ecx; /* 0x1202F448: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x1202F44A: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1202F44B: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1202F44E: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1202F451: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1202F454: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1202F457: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1202F458: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x120033A0u); /* 0x1202F45B: push 0x120033a0 */
    PUSH32(esp, MEM32(eax)); /* 0x1202F460: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(esi)); /* 0x1202F462: call dword ptr [esi] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F464: mov esi, eax */
    /* test esi, esi */ /* 0x1202F466: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F5CF; /* 0x1202F468: js 0x1202f5cf */
L_1202F46E:
    eax = MEM32(edi); /* 0x1202F46E: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1202F470: push edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1202F471: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x1202F474: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x1202F477: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5CF; /* 0x1202F479: je 0x1202f5cf */
L_1202F47F:
    eax = MEM32(edi); /* 0x1202F47F: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x1202F481: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1202F484: push ecx */
    PUSH32(esp, ebx); /* 0x1202F485: push ebx */
    PUSH32(esp, edi); /* 0x1202F486: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1202F487: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F48A: mov esi, eax */
    /* test esi, esi */ /* 0x1202F48C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F5CC; /* 0x1202F48E: js 0x1202f5cc */
L_1202F494:
    eax = MEM32(edi); /* 0x1202F494: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1202F496: push ebx */
    PUSH32(esp, edi); /* 0x1202F497: push edi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1202F498: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x1202F49B: mov dword ptr [ebp - 0x18], eax */
    /* test eax, eax */ /* 0x1202F49E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F4DA; /* 0x1202F4A0: je 0x1202f4da */
L_1202F4A2:
    PUSH32(esp, 0x120014BCu); /* 0x1202F4A2: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202F4A7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202F4A9: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202F4AB: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202F4AC: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202F4AE: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202F4B1: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202F4B3: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202F4B5: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202F4B6: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F4BB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202F4BC: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1202F4BD: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1202F4C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5C7; /* 0x1202F4C2: je 0x1202f5c7 */
L_1202F4C8:
    ecx = MEM32(edi); /* 0x1202F4C8: mov ecx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x1202F4CA: push eax */
    PUSH32(esp, ebx); /* 0x1202F4CB: push ebx */
    PUSH32(esp, edi); /* 0x1202F4CC: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x1202F4CD: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F4D0: mov esi, eax */
    /* test esi, esi */ /* 0x1202F4D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F5CC; /* 0x1202F4D4: js 0x1202f5cc */
L_1202F4DA:
    eax = MEM32(edi); /* 0x1202F4DA: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1202F4DC: push ebx */
    PUSH32(esp, edi); /* 0x1202F4DD: push edi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1202F4DE: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1202F4E1: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x1202F4E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F520; /* 0x1202F4E6: je 0x1202f520 */
L_1202F4E8:
    PUSH32(esp, 0x120014BCu); /* 0x1202F4E8: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202F4ED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x1202F4EF: push 0x14 */
    edx = POP32_VAL(esp); /* 0x1202F4F1: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202F4F2: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202F4F4: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202F4F7: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202F4F9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202F4FB: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202F4FC: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F501: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202F502: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1202F503: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1202F506: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5C7; /* 0x1202F508: je 0x1202f5c7 */
L_1202F50E:
    ecx = MEM32(edi); /* 0x1202F50E: mov ecx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x1202F510: push eax */
    PUSH32(esp, ebx); /* 0x1202F511: push ebx */
    PUSH32(esp, edi); /* 0x1202F512: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x1202F513: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F516: mov esi, eax */
    /* test esi, esi */ /* 0x1202F518: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F5CC; /* 0x1202F51A: js 0x1202f5cc */
L_1202F520:
    eax = MEM32(edi); /* 0x1202F520: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1202F522: push ebx */
    PUSH32(esp, edi); /* 0x1202F523: push edi */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x1202F524: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1202F527: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x1202F52A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F561; /* 0x1202F52C: je 0x1202f561 */
L_1202F52E:
    PUSH32(esp, 0x120014BCu); /* 0x1202F52E: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202F533: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1202F535: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1202F537: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1202F538: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1202F53A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1202F53D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202F53F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1202F541: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1202F542: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F547: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1202F548: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1202F549: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x1202F54C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5C7; /* 0x1202F54E: je 0x1202f5c7 */
L_1202F550:
    ecx = MEM32(edi); /* 0x1202F550: mov ecx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x1202F552: push eax */
    PUSH32(esp, ebx); /* 0x1202F553: push ebx */
    PUSH32(esp, edi); /* 0x1202F554: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x58)); /* 0x1202F555: call dword ptr [ecx + 0x58] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F558: mov esi, eax */
    /* test esi, esi */ /* 0x1202F55A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F5CC; /* 0x1202F55C: js 0x1202f5cc */
L_1202F55E:
    eax = MEM32(ebp + 0xC); /* 0x1202F55E: mov eax, dword ptr [ebp + 0xc] */
L_1202F561:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1202F561: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1202F564: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1202F567: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202F568: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1202F56B: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F56E: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1202F571: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1202F574: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202F577: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202ED4C); /* 0x1202F57A: call 0x1202ed4c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F57F: mov esi, eax */
    /* test esi, esi */ /* 0x1202F581: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F5CC; /* 0x1202F583: js 0x1202f5cc */
L_1202F585:
    eax = MEM32(ebp + (-0x4)); /* 0x1202F585: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1202F588: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F597; /* 0x1202F58A: je 0x1202f597 */
L_1202F58C:
    PUSH32(esp, eax); /* 0x1202F58C: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202F58D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1202F592: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202F596: pop ecx */
L_1202F597:
    eax = MEM32(ebp + (-0x8)); /* 0x1202F597: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1202F59A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5A9; /* 0x1202F59C: je 0x1202f5a9 */
L_1202F59E:
    PUSH32(esp, eax); /* 0x1202F59E: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202F59F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202F5A4: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202F5A8: pop ecx */
L_1202F5A9:
    eax = MEM32(ebp + (-0xC)); /* 0x1202F5A9: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x1202F5AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5BB; /* 0x1202F5AE: je 0x1202f5bb */
L_1202F5B0:
    PUSH32(esp, eax); /* 0x1202F5B0: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202F5B1: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1202F5B6: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1202F5BA: pop ecx */
L_1202F5BB:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1202F5BB: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x20)) */ /* 0x1202F5BC: cmp ebx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202F47F; /* 0x1202F5BF: jb 0x1202f47f */
L_1202F5C5:
    goto L_1202F5CC; /* 0x1202F5C5: jmp 0x1202f5cc */
L_1202F5C7:
    esi = 0x8007000Eu; /* 0x1202F5C7: mov esi, 0x8007000e */
L_1202F5CC:
    ebx = MEM32(ebp + (-0x4)); /* 0x1202F5CC: mov ebx, dword ptr [ebp - 4] */
L_1202F5CF:
    ecx = MEM32(ebp + (-0x10)); /* 0x1202F5CF: mov ecx, dword ptr [ebp - 0x10] */
    /* test ecx, ecx */ /* 0x1202F5D2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5E0; /* 0x1202F5D4: je 0x1202f5e0 */
L_1202F5D6:
    eax = MEM32(ecx); /* 0x1202F5D6: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F5D8: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F5D9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1202F5DC: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202F5E0:
    eax = MEM32(edi); /* 0x1202F5E0: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1202F5E2: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F5E3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1202F5E6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5F1; /* 0x1202F5E8: je 0x1202f5f1 */
L_1202F5EA:
    PUSH32(esp, ebx); /* 0x1202F5EA: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1202F5EB: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F5F0: pop ecx */
L_1202F5F1:
    eax = MEM32(ebp + (-0x8)); /* 0x1202F5F1: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1202F5F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F5FF; /* 0x1202F5F6: je 0x1202f5ff */
L_1202F5F8:
    PUSH32(esp, eax); /* 0x1202F5F8: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202F5F9: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F5FE: pop ecx */
L_1202F5FF:
    eax = MEM32(ebp + (-0xC)); /* 0x1202F5FF: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x1202F602: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F60D; /* 0x1202F604: je 0x1202f60d */
L_1202F606:
    PUSH32(esp, eax); /* 0x1202F606: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1202F607: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1202F60C: pop ecx */
L_1202F60D:
    edi = POP32_VAL(esp); /* 0x1202F60D: pop edi */
    eax = esi; /* 0x1202F60E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202F610: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202F611: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202F612: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202F613: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202F61B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F61Bu);

L_1202F61B:
    edi = edi; /* 0x1202F61B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F61D: push ebp */
    ebp = esp; /* 0x1202F61E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202F620: push ecx */
    PUSH32(esp, esi); /* 0x1202F621: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1202F622: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1202F625: mov eax, dword ptr [esi] */
    ecx = ebp + 0xC; /* 0x1202F627: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1202F62A: push ecx */
    PUSH32(esp, 0x12001DC8u); /* 0x1202F62B: push 0x12001dc8 */
    PUSH32(esp, esi); /* 0x1202F630: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1202F631: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202F633: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F644; /* 0x1202F635: js 0x1202f644 */
L_1202F637:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202F637: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202F63A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202F420); /* 0x1202F63D: call 0x1202f420 */
    RECOMP_FLAGS_IN();
    goto L_1202F661; /* 0x1202F642: jmp 0x1202f661 */
L_1202F644:
    eax = MEM32(esi); /* 0x1202F644: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x1202F646: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1202F649: push ecx */
    PUSH32(esp, 0x12001DD8u); /* 0x1202F64A: push 0x12001dd8 */
    PUSH32(esp, esi); /* 0x1202F64F: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1202F650: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1202F652: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F661; /* 0x1202F654: js 0x1202f661 */
L_1202F656:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F656: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202F659: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202EFBF); /* 0x1202F65C: call 0x1202efbf */
    RECOMP_FLAGS_IN();
L_1202F661:
    esi = POP32_VAL(esp); /* 0x1202F661: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202F662: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202F663: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202F66B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F66Bu);

L_1202F66B:
    edi = edi; /* 0x1202F66B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F66D: push ebp */
    ebp = esp; /* 0x1202F66E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1202F670: sub esp, 0x1c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1202F673: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & ecx; /* 0x1202F675: and dword ptr [ebp - 0x10], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & ecx; /* 0x1202F678: and dword ptr [ebp - 0xc], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1202F67B: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202F67C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1202F67E: push esi */
    PUSH32(esp, edi); /* 0x1202F67F: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1202F680: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1202F683: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x1202F686: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F822; /* 0x1202F689: je 0x1202f822 */
L_1202F68F:
    ebx = MEM32(ebp + 0x10); /* 0x1202F68F: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, 0xFFFFFFFCu */ /* 0x1202F692: test ebx, 0xfffffffc */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202F822; /* 0x1202F698: jne 0x1202f822 */
L_1202F69E:
    /* cmp MEM32(ebp + 0x14), ecx */ /* 0x1202F69E: cmp dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F822; /* 0x1202F6A1: je 0x1202f822 */
L_1202F6A7:
    eax = ebp + (-0x4); /* 0x1202F6A7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1202F6AA: push eax */
    RECOMP_CALL(sub_1214520C); /* 0x1202F6AB: call 0x1214520c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F6B0: mov esi, eax */
    /* test esi, esi */ /* 0x1202F6B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F6B4: js 0x1202f81a */
L_1202F6BA:
    eax = MEM32(ebp + (-0x4)); /* 0x1202F6BA: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202F6BD: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xCCEu); /* 0x1202F6BF: push 0xcce */
    PUSH32(esp, 0x121CB378u); /* 0x1202F6C4: push 0x121cb378 */
    PUSH32(esp, eax); /* 0x1202F6C9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202F6CA: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F6CD: mov esi, eax */
    /* test esi, esi */ /* 0x1202F6CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F6D1: js 0x1202f81a */
L_1202F6D7:
    eax = MEM32(ebp + (-0x4)); /* 0x1202F6D7: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202F6DA: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xC98u); /* 0x1202F6DC: push 0xc98 */
    PUSH32(esp, 0x120026C8u); /* 0x1202F6E1: push 0x120026c8 */
    PUSH32(esp, eax); /* 0x1202F6E6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202F6E7: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F6EA: mov esi, eax */
    /* test esi, esi */ /* 0x1202F6EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F6EE: js 0x1202f81a */
L_1202F6F4:
    eax = MEM32(ebp + (-0x4)); /* 0x1202F6F4: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202F6F7: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x65Bu); /* 0x1202F6F9: push 0x65b */
    PUSH32(esp, 0x12002068u); /* 0x1202F6FE: push 0x12002068 */
    PUSH32(esp, eax); /* 0x1202F703: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202F704: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F707: mov esi, eax */
    /* test esi, esi */ /* 0x1202F709: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F70B: js 0x1202f81a */
L_1202F711:
    edi = MEM32(ebp + 0x1C); /* 0x1202F711: mov edi, dword ptr [ebp + 0x1c] */
    /* test edi, edi */ /* 0x1202F714: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F72B; /* 0x1202F716: je 0x1202f72b */
L_1202F718:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1202F718: push dword ptr [ebp - 4] */
    eax = MEM32(edi); /* 0x1202F71B: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1202F71D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1202F71E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F721: mov esi, eax */
    /* test esi, esi */ /* 0x1202F723: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F725: js 0x1202f81a */
L_1202F72B:
    eax = MEM32(ebp + (-0x4)); /* 0x1202F72B: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1202F72E: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1202F730: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1202F733: push edx */
    PUSH32(esp, ebx); /* 0x1202F734: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202F735: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202F738: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1202F73B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1202F73C: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F73F: mov esi, eax */
    /* test esi, esi */ /* 0x1202F741: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F743: js 0x1202f81a */
L_1202F749:
    /* test edi, edi */ /* 0x1202F749: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F760; /* 0x1202F74B: je 0x1202f760 */
L_1202F74D:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202F74D: push dword ptr [ebp - 8] */
    eax = MEM32(edi); /* 0x1202F750: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1202F752: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1202F753: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F756: mov esi, eax */
    /* test esi, esi */ /* 0x1202F758: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F75A: js 0x1202f81a */
L_1202F760:
    ecx = MEM32(ebp + (-0x8)); /* 0x1202F760: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1202F763: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1202F766: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x18)) = edi; /* 0x1202F769: mov dword ptr [ebp - 0x18], edi */
    /* test edi, edi */ /* 0x1202F76C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F781; /* 0x1202F76E: je 0x1202f781 */
L_1202F770:
    eax = MEM32(edi); /* 0x1202F770: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x1202F772: push ecx */
    PUSH32(esp, edi); /* 0x1202F773: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F774: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F777: mov esi, eax */
    /* test esi, esi */ /* 0x1202F779: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F77B: js 0x1202f81a */
L_1202F781:
    edi = MEM32(ebp + 0x18); /* 0x1202F781: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1202F784: push edi */
    eax = ebp + (-0x1C); /* 0x1202F785: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1202F788: push eax */
    RECOMP_CALL(sub_1202F0A4); /* 0x1202F789: call 0x1202f0a4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F78E: mov esi, eax */
    /* test esi, esi */ /* 0x1202F790: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F792: js 0x1202f81a */
L_1202F798:
    PUSH32(esp, 0); /* 0x1202F798: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202F79A: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x1C); /* 0x1202F79D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1202F7A0: push eax */
    RECOMP_CALL(sub_1202F233); /* 0x1202F7A1: call 0x1202f233 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F7A6: mov esi, eax */
    /* test esi, esi */ /* 0x1202F7A8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F7AA: js 0x1202f81a */
L_1202F7AC:
    /* test edi, edi */ /* 0x1202F7AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F7F9; /* 0x1202F7AE: je 0x1202f7f9 */
L_1202F7B0:
    eax = MEM32(edi); /* 0x1202F7B0: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1202F7B2: push edi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1202F7B3: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1202F7B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x1202F7B8: mov dword ptr [ebp + 0x14], eax */
    /* test eax, eax */ /* 0x1202F7BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F7F9; /* 0x1202F7BD: je 0x1202f7f9 */
L_1202F7BF:
    ecx = MEM32(edi); /* 0x1202F7BF: mov ecx, dword ptr [edi] */
    eax = ebp + 0x8; /* 0x1202F7C1: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1202F7C4: push eax */
    PUSH32(esp, ebx); /* 0x1202F7C5: push ebx */
    PUSH32(esp, edi); /* 0x1202F7C6: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1202F7C7: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F7CA: mov esi, eax */
    /* test esi, esi */ /* 0x1202F7CC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F7CE: js 0x1202f81a */
L_1202F7D0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202F7D0: push dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x1202F7D3: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1202F7D6: push eax */
    RECOMP_CALL(sub_1202F61B); /* 0x1202F7D7: call 0x1202f61b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1202F7DC: mov ecx, dword ptr [ebp + 8] */
    esi = eax; /* 0x1202F7DF: mov esi, eax */
    /* test ecx, ecx */ /* 0x1202F7E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F7EF; /* 0x1202F7E3: je 0x1202f7ef */
L_1202F7E5:
    eax = MEM32(ecx); /* 0x1202F7E5: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F7E7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F7E8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1202F7EB: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202F7EF:
    /* test esi, esi */ /* 0x1202F7EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F7F1: js 0x1202f81a */
L_1202F7F3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1202F7F3: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x14) */ /* 0x1202F7F4: cmp ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202F7BF; /* 0x1202F7F7: jb 0x1202f7bf */
L_1202F7F9:
    ecx = MEM32(ebp + (-0x18)); /* 0x1202F7F9: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x1202F7FC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F80F; /* 0x1202F7FE: je 0x1202f80f */
L_1202F800:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1202F800: push dword ptr [ebp - 8] */
    eax = MEM32(ecx); /* 0x1202F803: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F805: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1202F806: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F809: mov esi, eax */
    /* test esi, esi */ /* 0x1202F80B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1202F81A; /* 0x1202F80D: js 0x1202f81a */
L_1202F80F:
    eax = MEM32(ebp + (-0x8)); /* 0x1202F80F: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x1202F812: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1202F814: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1202F815: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1202F818: mov esi, eax */
L_1202F81A:
    edx = MEM32(ebp + (-0x4)); /* 0x1202F81A: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1202F81D: mov ecx, dword ptr [ebp - 8] */
    goto L_1202F827; /* 0x1202F820: jmp 0x1202f827 */
L_1202F822:
    esi = 0x8876086Cu; /* 0x1202F822: mov esi, 0x8876086c */
L_1202F827:
    /* test edx, edx */ /* 0x1202F827: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F838; /* 0x1202F829: je 0x1202f838 */
L_1202F82B:
    eax = MEM32(edx); /* 0x1202F82B: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1202F82D: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F82E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1202F831: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x8)); /* 0x1202F835: mov ecx, dword ptr [ebp - 8] */
L_1202F838:
    /* test ecx, ecx */ /* 0x1202F838: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F846; /* 0x1202F83A: je 0x1202f846 */
L_1202F83C:
    eax = MEM32(ecx); /* 0x1202F83C: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1202F83E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202F83F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202F842: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202F846:
    ecx = ebp + (-0x10); /* 0x1202F846: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1202F198); /* 0x1202F849: call 0x1202f198 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1202F84E: pop edi */
    eax = esi; /* 0x1202F84F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1202F851: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202F852: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202F853: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1202F854: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1202F85C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F85Cu);

L_1202F85C:
    edi = edi; /* 0x1202F85C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F85E: push ebp */
    ebp = esp; /* 0x1202F85F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202F861: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202F864: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202F867: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202F86A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1202F86D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202F86F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202F66B); /* 0x1202F872: call 0x1202f66b */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202F877: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1202F878: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1202F880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F880u);

L_1202F880:
    edi = edi; /* 0x1202F880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F882: push ebp */
    ebp = esp; /* 0x1202F883: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202F885: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202F888: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202F88B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202F88E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1202F891: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202F893: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1202F66B); /* 0x1202F896: call 0x1202f66b */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202F89B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1202F89C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1202F8A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F8A4u);

L_1202F8A4:
    edi = edi; /* 0x1202F8A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F8A6: push ebp */
    ebp = esp; /* 0x1202F8A7: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1202F8A9: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1202F8AC: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x30) */ /* 0x1202F8AF: cmp ecx, dword ptr [eax + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1202F8BB; /* 0x1202F8B2: jb 0x1202f8bb */
L_1202F8B4:
    eax = 0x80004005u; /* 0x1202F8B4: mov eax, 0x80004005 */
    goto L_1202F8CF; /* 0x1202F8B9: jmp 0x1202f8cf */
L_1202F8BB:
    edx = MEM32(ebp + 0x10); /* 0x1202F8BB: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x1202F8BE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F8CD; /* 0x1202F8C0: je 0x1202f8cd */
L_1202F8C2:
    eax = MEM32(eax + 0x34); /* 0x1202F8C2: mov eax, dword ptr [eax + 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1202F8C5: imul ecx, ecx, 0x44 */
    eax = MEM32(ecx + eax); /* 0x1202F8C8: mov eax, dword ptr [ecx + eax] */
    MEM32(edx) = eax; /* 0x1202F8CB: mov dword ptr [edx], eax */
L_1202F8CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202F8CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202F8CF:
    ebp = POP32_VAL(esp); /* 0x1202F8CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202F8D0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202F8D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F8D8u);

L_1202F8D8:
    edi = edi; /* 0x1202F8D8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F8DA: push ebp */
    ebp = esp; /* 0x1202F8DB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1202F8DD: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1202F8DE: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202F8EB; /* 0x1202F8E2: jne 0x1202f8eb */
L_1202F8E4:
    eax = 0x8876086Cu; /* 0x1202F8E4: mov eax, 0x8876086c */
    goto L_1202F95B; /* 0x1202F8E9: jmp 0x1202f95b */
L_1202F8EB:
    eax = MEM32(ebp + 0x8); /* 0x1202F8EB: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x30); /* 0x1202F8EE: mov ecx, dword ptr [eax + 0x30] */
    PUSH32(esp, ebx); /* 0x1202F8F1: push ebx */
    PUSH32(esp, esi); /* 0x1202F8F2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202F8F3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1202F8F5: push edi */
    /* test ecx, ecx */ /* 0x1202F8F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F953; /* 0x1202F8F8: je 0x1202f953 */
L_1202F8FA:
    ebx = MEM32(eax + 0x38); /* 0x1202F8FA: mov ebx, dword ptr [eax + 0x38] */
    eax = MEM32(eax + 0x34); /* 0x1202F8FD: mov eax, dword ptr [eax + 0x34] */
    MEM32(ebp + 0x8) = ebx; /* 0x1202F900: mov dword ptr [ebp + 8], ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1202F903: mov dword ptr [ebp - 4], eax */
L_1202F906:
    edi = MEM32(ebp + 0xC); /* 0x1202F906: mov edi, dword ptr [ebp + 0xc] */
    edx = ecx + esi; /* 0x1202F909: lea edx, [ecx + esi] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1202F90C: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1202F90C: shr edx, 1 */
    eax = MEM32(ebx + edx * 4); /* 0x1202F90E: mov eax, dword ptr [ebx + edx*4] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1202F911: mov ebx, dword ptr [ebp - 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1202F914: imul eax, eax, 0x44 */
    eax = MEM32(eax + ebx); /* 0x1202F917: mov eax, dword ptr [eax + ebx] */
L_1202F91A:
    SET_LO8(ebx, MEM8(eax)); /* 0x1202F91A: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edi) */ /* 0x1202F91C: cmp bl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202F93A; /* 0x1202F91E: jne 0x1202f93a */
L_1202F920:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1202F920: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F936; /* 0x1202F922: je 0x1202f936 */
L_1202F924:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x1202F924: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edi + 0x1) */ /* 0x1202F927: cmp bl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202F93A; /* 0x1202F92A: jne 0x1202f93a */
L_1202F92C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1202F92C: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1202F92F: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1202F932: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202F91A; /* 0x1202F934: jne 0x1202f91a */
L_1202F936:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202F936: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202F93F; /* 0x1202F938: jmp 0x1202f93f */
L_1202F93A:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1202F93A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1202F93C: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1202F93F:
    /* test eax, eax */ /* 0x1202F93F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F95F; /* 0x1202F941: je 0x1202f95f */
L_1202F943:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1202F94A; /* 0x1202F943: jns 0x1202f94a */
L_1202F945:
    esi = edx + 0x1; /* 0x1202F945: lea esi, [edx + 1] */
    goto L_1202F94C; /* 0x1202F948: jmp 0x1202f94c */
L_1202F94A:
    ecx = edx; /* 0x1202F94A: mov ecx, edx */
L_1202F94C:
    ebx = MEM32(ebp + 0x8); /* 0x1202F94C: mov ebx, dword ptr [ebp + 8] */
    /* cmp esi, ecx */ /* 0x1202F94F: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202F906; /* 0x1202F951: jb 0x1202f906 */
L_1202F953:
    eax = 0x88760866u; /* 0x1202F953: mov eax, 0x88760866 */
L_1202F958:
    edi = POP32_VAL(esp); /* 0x1202F958: pop edi */
    esi = POP32_VAL(esp); /* 0x1202F959: pop esi */
    ebx = POP32_VAL(esp); /* 0x1202F95A: pop ebx */
L_1202F95B:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202F95B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202F95C: ret 0xc */
L_1202F95F:
    ecx = MEM32(ebp + 0x10); /* 0x1202F95F: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1202F962: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202F96E; /* 0x1202F964: je 0x1202f96e */
L_1202F966:
    eax = MEM32(ebp + 0x8); /* 0x1202F966: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + edx * 4); /* 0x1202F969: mov eax, dword ptr [eax + edx*4] */
    MEM32(ecx) = eax; /* 0x1202F96C: mov dword ptr [ecx], eax */
L_1202F96E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202F96E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1202F958; /* 0x1202F970: jmp 0x1202f958 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1202F977(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202F977u);

L_1202F977:
    edi = edi; /* 0x1202F977: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202F979: push ebp */
    ebp = esp; /* 0x1202F97A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1202F97C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1202F97F: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202F98F; /* 0x1202F983: jne 0x1202f98f */
L_1202F985:
    eax = 0x8876086Cu; /* 0x1202F985: mov eax, 0x8876086c */
    goto L_1202FC33; /* 0x1202F98A: jmp 0x1202fc33 */
L_1202F98F:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1202F98F: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202F985; /* 0x1202F993: je 0x1202f985 */
L_1202F995:
    PUSH32(esp, ebx); /* 0x1202F995: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202F996: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebx + 0x24); /* 0x1202F999: mov edx, dword ptr [ebx + 0x24] */
    /* test edx, edx */ /* 0x1202F99C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202F9AA; /* 0x1202F99E: jne 0x1202f9aa */
L_1202F9A0:
    eax = 0x88760866u; /* 0x1202F9A0: mov eax, 0x88760866 */
    goto L_1202FC32; /* 0x1202F9A5: jmp 0x1202fc32 */
L_1202F9AA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1202F9AA: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(0x12001758)); /* 0x1202F9AE: fld qword ptr [0x12001758] */
    PUSH32(esp, esi); /* 0x1202F9B4: push esi */
    PUSH32(esp, edi); /* 0x1202F9B5: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1202F9B6: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x1202F9B9: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1202F9BD: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202F9BF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202F9C1: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1202F9C2: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1202F9C4: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1202F9C4: shr edi, 1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1202F9C6: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x20); /* 0x1202F9C9: mov eax, dword ptr [ebx + 0x20] */
    edi = ~edi; /* 0x1202F9CC: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x1202F9CE: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1202F9D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202F9FA; /* 0x1202F9D2: jne 0x1202f9fa */
L_1202F9D4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202F9D4: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202F9D6: fld qword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ebx + 0x18)); /* 0x1202F9D9: fld qword ptr [ebx + 0x18] */
    RECOMP_CALL(sub_121BF4AC); /* 0x1202F9DC: call 0x121bf4ac */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1202F9E1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202F9E3: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202F9E5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202F9E7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FA93; /* 0x1202F9EA: jne 0x1202fa93 */
L_1202F9F0:
    fp_push(*(double*)ADDR(ebx + 0x18)); /* 0x1202F9F0: fld qword ptr [ebx + 0x18] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202F9F3: faddp st(2) */
    goto L_1202FA93; /* 0x1202F9F5: jmp 0x1202fa93 */
L_1202F9FA:
    /* cmp eax, esi */ /* 0x1202F9FA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202FA42; /* 0x1202F9FC: jne 0x1202fa42 */
L_1202F9FE:
    eax = MEM32(ebx + 0x28); /* 0x1202F9FE: mov eax, dword ptr [ebx + 0x28] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1202FA01: fld dword ptr [eax] */
    _st[0] /= *(double*)ADDR(ebx + 0x10); /* 0x1202FA03: fdiv qword ptr [ebx + 0x10] */
    fp_push(*(float*)&MEM32(eax + edx * 8 + (-0x8))); /* 0x1202FA06: fld dword ptr [eax + edx*8 - 8] */
    _st[0] /= *(double*)ADDR(ebx + 0x10); /* 0x1202FA0A: fdiv qword ptr [ebx + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202FA0D: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202FA10: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FA12: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202FA14: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x1202FA16: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FA1F; /* 0x1202FA19: jne 0x1202fa1f */
L_1202FA1B:
    /* test edi, edi */ /* 0x1202FA1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FA34; /* 0x1202FA1D: jne 0x1202fa34 */
L_1202FA1F:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202FA1F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FA21: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202FA23: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x1202FA25: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202FA2E; /* 0x1202FA28: jp 0x1202fa2e */
L_1202FA2A:
    /* test edi, edi */ /* 0x1202FA2A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202FA36; /* 0x1202FA2C: je 0x1202fa36 */
L_1202FA2E:
    fp_push(0.0); /* 0x1202FA2E: fldz  */
    fp_push(_st[0]); /* 0x1202FA30: fld st(0) */
    goto L_1202FAAB; /* 0x1202FA32: jmp 0x1202faab */
L_1202FA34:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202FA34: fstp st(1) */
L_1202FA36:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202FA36: fstp st(0) */
L_1202FA38:
    eax = 0x88760866u; /* 0x1202FA38: mov eax, 0x88760866 */
    goto L_1202FC2E; /* 0x1202FA3D: jmp 0x1202fc2e */
L_1202FA42:
    /* cmp eax, 2 */ /* 0x1202FA42: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202FC29; /* 0x1202FA45: jne 0x1202fc29 */
L_1202FA4B:
    _st[0] *= *(double*)ADDR(ebx + 0x18); /* 0x1202FA4B: fmul qword ptr [ebx + 0x18] */
    MEM32(ebp + 0x14) = esi; /* 0x1202FA4E: mov dword ptr [ebp + 0x14], esi */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x1202FA51: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202FA54: fld qword ptr [ebp + 0xc] */
    fp_xch(1); /* 0x1202FA57: fxch st(1) */
    RECOMP_CALL(sub_121BF4AC); /* 0x1202FA59: call 0x121bf4ac */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1202FA5E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202FA60: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FA62: fnstsw ax */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x1202FA64: fld qword ptr [ebp - 0x10] */
    /* test HI8(eax), 0x41u */ /* 0x1202FA67: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FA70; /* 0x1202FA6A: jne 0x1202fa70 */
L_1202FA6C:
    fp_push(_st[0]); /* 0x1202FA6C: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1202FA6E: faddp st(3) */
L_1202FA70:
    fp_xch(2); /* 0x1202FA70: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x18)); /* 0x1202FA72: fcom qword ptr [ebx + 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FA75: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202FA77: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FA91; /* 0x1202FA7A: jne 0x1202fa91 */
L_1202FA7C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202FA7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202FA7E: fsubp st(2) */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202FA80: fld qword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1202FA83: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1202FA85: sete al */
    _st[0] = -_st[0]; /* 0x1202FA88: fchs  */
    MEM32(ebp + (-0x8)) = esi; /* 0x1202FA8A: mov dword ptr [ebp - 8], esi */
    edi = eax; /* 0x1202FA8D: mov edi, eax */
    goto L_1202FA96; /* 0x1202FA8F: jmp 0x1202fa96 */
L_1202FA91:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202FA91: fstp st(2) */
L_1202FA93:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1202FA93: fld qword ptr [ebp + 0xc] */
L_1202FA96:
    edx = MEM32(ebx + 0x24); /* 0x1202FA96: mov edx, dword ptr [ebx + 0x24] */
    fp_push(_st[0]); /* 0x1202FA99: fld st(0) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x1202FA9B: fsubrp st(3) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x1202FA9D: fld qword ptr [0x12001758] */
    fp_xch(3); /* 0x1202FAA3: fxch st(3) */
    fp_xch(1); /* 0x1202FAA5: fxch st(1) */
    fp_xch(2); /* 0x1202FAA7: fxch st(2) */
    fp_xch(1); /* 0x1202FAA9: fxch st(1) */
L_1202FAAB:
    esi = MEM32(ebx + 0x2C); /* 0x1202FAAB: mov esi, dword ptr [ebx + 0x2c] */
    ecx = MEM32(ebx + 0x28); /* 0x1202FAAE: mov ecx, dword ptr [ebx + 0x28] */
    fp_push(*(float*)&MEM32(ecx + esi * 8)); /* 0x1202FAB1: fld dword ptr [ecx + esi*8] */
    eax = ebx + 0x10; /* 0x1202FAB4: lea eax, [ebx + 0x10] */
    _st[0] /= *(double*)ADDR(eax); /* 0x1202FAB7: fdiv qword ptr [eax] */
    MEM32(ebp + 0x10) = eax; /* 0x1202FAB9: mov dword ptr [ebp + 0x10], eax */
    _st[0] += _st[1]; /* 0x1202FABC: fadd st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x1202FABE: fst qword ptr [ebp - 0x10] */
    /* test edi, edi */ /* 0x1202FAC1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202FB6F; /* 0x1202FAC3: je 0x1202fb6f */
L_1202FAC9:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1202FAC9: fstp st(2) */
    fp_xch(1); /* 0x1202FACB: fxch st(1) */
    _st[0] -= _st[2]; /* 0x1202FACD: fsub st(2) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202FACF: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FAD5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202FAD7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FADE; /* 0x1202FADA: jne 0x1202fade */
L_1202FADC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202FADC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202FADE:
    /* cmp esi, edx */ /* 0x1202FADE: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202FB11; /* 0x1202FAE0: jae 0x1202fb11 */
L_1202FAE2:
    edi = MEM32(ebp + (-0x4)); /* 0x1202FAE2: mov edi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0x10); /* 0x1202FAE5: mov ebx, dword ptr [ebp + 0x10] */
    ecx = ecx + esi * 8; /* 0x1202FAE8: lea ecx, [ecx + esi*8] */
L_1202FAEB:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1202FAEB: fld dword ptr [ecx] */
    _st[0] /= *(double*)ADDR(ebx); /* 0x1202FAED: fdiv qword ptr [ebx] */
    _st[0] += _st[1]; /* 0x1202FAEF: fadd st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x1202FAF1: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202FAF4: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FAF6: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1202FAF8: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FB03; /* 0x1202FAFB: jne 0x1202fb03 */
L_1202FAFD:
    /* test edi, edi */ /* 0x1202FAFD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202FB0B; /* 0x1202FAFF: je 0x1202fb0b */
L_1202FB01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202FB01: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202FB03:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202FB03: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1202FB04: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, edx */ /* 0x1202FB07: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202FAEB; /* 0x1202FB09: jb 0x1202faeb */
L_1202FB0B:
    ebx = MEM32(ebp + 0x8); /* 0x1202FB0B: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x28); /* 0x1202FB0E: mov ecx, dword ptr [ebx + 0x28] */
L_1202FB11:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202FB11: fstp st(1) */
    /* cmp esi, edx */ /* 0x1202FB13: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202FB44; /* 0x1202FB15: jne 0x1202fb44 */
L_1202FB17:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1202FB17: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202FB30; /* 0x1202FB1B: jne 0x1202fb30 */
L_1202FB1D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202FB1D: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202FB1F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ecx)); /* 0x1202FB21: fld dword ptr [ecx] */
    _st[0] /= *(double*)ADDR(ebx + 0x10); /* 0x1202FB23: fdiv qword ptr [ebx + 0x10] */
    _st[0] += *(double*)ADDR(ebx + 0x18); /* 0x1202FB26: fadd qword ptr [ebx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202FB29: faddp st(1) */
L_1202FB2B:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x1202FB2B: fstp qword ptr [ebp - 0x10] */
    goto L_1202FB48; /* 0x1202FB2E: jmp 0x1202fb48 */
L_1202FB30:
    fp_push(*(double*)ADDR(ebx + 0x18)); /* 0x1202FB30: fld qword ptr [ebx + 0x18] */
    esi = edx + (-0x1); /* 0x1202FB33: lea esi, [edx - 1] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202FB36: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202FB38: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + esi * 8)); /* 0x1202FB3A: fld dword ptr [ecx + esi*8] */
    _st[0] /= *(double*)ADDR(ebx + 0x10); /* 0x1202FB3D: fdiv qword ptr [ebx + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202FB40: fsubp st(1) */
    RECOMP_BACKEDGE();
    goto L_1202FB2B; /* 0x1202FB42: jmp 0x1202fb2b */
L_1202FB44:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202FB44: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202FB46: fstp st(0) */
L_1202FB48:
    /* cmp MEM32(ebx + 0x20), 1 */ /* 0x1202FB48: cmp dword ptr [ebx + 0x20], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202FC02; /* 0x1202FB4C: jne 0x1202fc02 */
L_1202FB52:
    eax = MEM32(ebx); /* 0x1202FB52: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1202FB54: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1202FB55: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x1202FB58: fld qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202FB5B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FB5D: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202FB5F: fstp st(1) */
L_1202FB61:
    /* test HI8(eax), 0x41u */ /* 0x1202FB61: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FC09; /* 0x1202FB64: jne 0x1202fc09 */
L_1202FB6A:
    RECOMP_BACKEDGE();
    goto L_1202FA38; /* 0x1202FB6A: jmp 0x1202fa38 */
L_1202FB6F:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x1202FB6F: fstp st(4) */
    fp_push(_st[2]); /* 0x1202FB71: fld st(2) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x1202FB73: fsubrp st(4) */
    fp_xch(3); /* 0x1202FB75: fxch st(3) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x1202FB77: fcomp qword ptr [0x12001eb0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FB7D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202FB7F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FB87; /* 0x1202FB82: jne 0x1202fb87 */
L_1202FB84:
    esi = edx + (-0x1); /* 0x1202FB84: lea esi, [edx - 1] */
L_1202FB87:
    ecx = esi + 0x1; /* 0x1202FB87: lea ecx, [esi + 1] */
    /* test ecx, ecx */ /* 0x1202FB8A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202FBBF; /* 0x1202FB8C: je 0x1202fbbf */
L_1202FB8E:
    eax = MEM32(ebx + 0x28); /* 0x1202FB8E: mov eax, dword ptr [ebx + 0x28] */
    edx = MEM32(ebp + (-0x4)); /* 0x1202FB91: mov edx, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0x10); /* 0x1202FB94: mov ebx, dword ptr [ebp + 0x10] */
    edi = eax + esi * 8; /* 0x1202FB97: lea edi, [eax + esi*8] */
L_1202FB9A:
    fp_push(*(float*)&MEM32(edi)); /* 0x1202FB9A: fld dword ptr [edi] */
    _st[0] /= *(double*)ADDR(ebx); /* 0x1202FB9C: fdiv qword ptr [ebx] */
    _st[0] += _st[3]; /* 0x1202FB9E: fadd st(3) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x1202FBA0: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1202FBA3: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FBA5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202FBA7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202FBB2; /* 0x1202FBAA: jp 0x1202fbb2 */
L_1202FBAC:
    /* test edx, edx */ /* 0x1202FBAC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202FBB9; /* 0x1202FBAE: je 0x1202fbb9 */
L_1202FBB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1202FBB0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202FBB2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1202FBB2: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 8; /* 0x1202FBB3: sub edi, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1202FBB6: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1202FB9A; /* 0x1202FBB7: jne 0x1202fb9a */
L_1202FBB9:
    ebx = MEM32(ebp + 0x8); /* 0x1202FBB9: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebx + 0x24); /* 0x1202FBBC: mov edx, dword ptr [ebx + 0x24] */
L_1202FBBF:
    eax = esi + 0x1; /* 0x1202FBBF: lea eax, [esi + 1] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202FBC2: fstp st(1) */
    /* test eax, eax */ /* 0x1202FBC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FBEC; /* 0x1202FBC6: jne 0x1202fbec */
L_1202FBC8:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1202FBC8: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x28); /* 0x1202FBCC: mov eax, dword ptr [ebx + 0x28] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202FBE1; /* 0x1202FBCF: jne 0x1202fbe1 */
L_1202FBD1:
    esi = edx + (-0x1); /* 0x1202FBD1: lea esi, [edx - 1] */
    fp_push(*(float*)&MEM32(eax + esi * 8)); /* 0x1202FBD4: fld dword ptr [eax + esi*8] */
    _st[0] /= *(double*)ADDR(ebx + 0x10); /* 0x1202FBD7: fdiv qword ptr [ebx + 0x10] */
    _st[0] -= *(double*)ADDR(ebx + 0x18); /* 0x1202FBDA: fsub qword ptr [ebx + 0x18] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202FBDD: faddp st(2) */
    goto L_1202FBF3; /* 0x1202FBDF: jmp 0x1202fbf3 */
L_1202FBE1:
    fp_push(*(float*)&MEM32(eax)); /* 0x1202FBE1: fld dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202FBE3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] /= *(double*)ADDR(ebx + 0x10); /* 0x1202FBE5: fdiv qword ptr [ebx + 0x10] */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202FBE8: fsubp st(2) */
    goto L_1202FBF3; /* 0x1202FBEA: jmp 0x1202fbf3 */
L_1202FBEC:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1202FBEC: fstp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x1202FBEE: fld qword ptr [ebp - 0x10] */
    fp_xch(1); /* 0x1202FBF1: fxch st(1) */
L_1202FBF3:
    /* cmp MEM32(ebx + 0x20), 1 */ /* 0x1202FBF3: cmp dword ptr [ebx + 0x20], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1202FC07; /* 0x1202FBF7: jne 0x1202fc07 */
L_1202FBF9:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1202FBF9: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FBFB: fnstsw ax */
    RECOMP_BACKEDGE();
    goto L_1202FB61; /* 0x1202FBFD: jmp 0x1202fb61 */
L_1202FC02:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x1202FC02: fld qword ptr [ebp - 0x10] */
    goto L_1202FC09; /* 0x1202FC05: jmp 0x1202fc09 */
L_1202FC07:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202FC07: fstp st(0) */
L_1202FC09:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1202FC09: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1202FC11; /* 0x1202FC0D: je 0x1202fc11 */
L_1202FC0F:
    _st[0] = -_st[0]; /* 0x1202FC0F: fchs  */
L_1202FC11:
    eax = MEM32(ebp + 0x18); /* 0x1202FC11: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x1C); /* 0x1202FC14: mov ecx, dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1202FC17: fstp qword ptr [eax] */
    eax = MEM32(ebx + 0x28); /* 0x1202FC19: mov eax, dword ptr [ebx + 0x28] */
    eax = MEM32(eax + esi * 8 + 0x4); /* 0x1202FC1C: mov eax, dword ptr [eax + esi*8 + 4] */
    MEM32(ecx) = eax; /* 0x1202FC20: mov dword ptr [ecx], eax */
    MEM32(ebx + 0x2C) = esi; /* 0x1202FC22: mov dword ptr [ebx + 0x2c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202FC25: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202FC30; /* 0x1202FC27: jmp 0x1202fc30 */
L_1202FC29:
    eax = 0x88760B59u; /* 0x1202FC29: mov eax, 0x88760b59 */
L_1202FC2E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202FC2E: fstp st(0) */
L_1202FC30:
    edi = POP32_VAL(esp); /* 0x1202FC30: pop edi */
    esi = POP32_VAL(esp); /* 0x1202FC31: pop esi */
L_1202FC32:
    ebx = POP32_VAL(esp); /* 0x1202FC32: pop ebx */
L_1202FC33:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202FC33: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1202FC34: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1202FC3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FC3Cu);

L_1202FC3C:
    edi = edi; /* 0x1202FC3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FC3E: push ebp */
    ebp = esp; /* 0x1202FC3F: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202FC41: fld dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x1202FC44: fsub dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1202FC47: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1202FC4A: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12005410)); /* 0x1202FC4D: fcom qword ptr [0x12005410] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FC53: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1202FC55: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FC6C; /* 0x1202FC58: jne 0x1202fc6c */
L_1202FC5A:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x12005408)); /* 0x1202FC5A: fcomp dword ptr [0x12005408] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1202FC60: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1202FC62: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1202FC6E; /* 0x1202FC65: jp 0x1202fc6e */
L_1202FC67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202FC67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1202FC69: inc eax */
    _flag_k = FK_INC;
    goto L_1202FC70; /* 0x1202FC6A: jmp 0x1202fc70 */
L_1202FC6C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1202FC6C: fstp st(0) */
L_1202FC6E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1202FC6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202FC70:
    ebp = POP32_VAL(esp); /* 0x1202FC70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1202FC71: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1202FC79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FC79u);

L_1202FC79:
    edi = edi; /* 0x1202FC79: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FC7B: push ebp */
    ebp = esp; /* 0x1202FC7C: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1202FC7E: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1202FC80: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202FC85: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA150)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1202FC91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FC91u);

L_1202FC91:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA150)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1202FC9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FC9Cu);

L_1202FC9C:
    edi = edi; /* 0x1202FC9C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FC9E: push ebp */
    ebp = esp; /* 0x1202FC9F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1202FCA1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1202FCA2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1202FCA5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202FCA6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1202FCA8: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202FD3E; /* 0x1202FCAB: jbe 0x1202fd3e */
L_1202FCB1:
    PUSH32(esp, edi); /* 0x1202FCB1: push edi */
L_1202FCB2:
    eax = MEM32(ebp + 0xC); /* 0x1202FCB2: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x1202FCB5: mov ecx, dword ptr [eax + esi*4] */
    edx = ecx; /* 0x1202FCB8: mov edx, ecx */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x1202FCBA: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x1202FCBA: shr edx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x1202FCBD: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    edx = edx & 0x8000u; /* 0x1202FCC3: and edx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x47FFEFFFu */ /* 0x1202FCC9: cmp ecx, 0x47ffefff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x47FFEFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202FCDC; /* 0x1202FCCF: jbe 0x1202fcdc */
L_1202FCD1:
    _flag_a = (uint32_t)((edx | 0x7FFFu)); _flag_b = (uint32_t)((edx | 0x7FFFu));
    edx = edx | 0x7FFFu; /* 0x1202FCD1: or edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(edx); /* 0x1202FCD7: movzx eax, dx */
    goto L_1202FD2F; /* 0x1202FCDA: jmp 0x1202fd2f */
L_1202FCDC:
    /* cmp ecx, 0x38800000u */ /* 0x1202FCDC: cmp ecx, 0x38800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1202FD18; /* 0x1202FCE2: jae 0x1202fd18 */
L_1202FCE4:
    edi = ecx; /* 0x1202FCE4: mov edi, ecx */
    PUSH32(esp, 0x71u); /* 0x1202FCE6: push 0x71 */
    if (23u) _cf = (((ecx) >> 22) & 1u); /* 0x1202FCE8: shr ecx, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((ecx >> 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 23u; /* 0x1202FCE8: shr ecx, 0x17 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x007FFFFFu);
    edi = edi & 0x007FFFFFu; /* 0x1202FCEB: and edi, 0x7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1202FCF1: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1202FCF2: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edi | 0x00800000u)); _flag_b = (uint32_t)((edi | 0x00800000u));
    edi = edi | 0x00800000u; /* 0x1202FCF4: or edi, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1Fu */ /* 0x1202FCFA: cmp eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1202FD03; /* 0x1202FCFD: jle 0x1202fd03 */
L_1202FCFF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1202FCFF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202FD07; /* 0x1202FD01: jmp 0x1202fd07 */
L_1202FD03:
    ecx = eax; /* 0x1202FD03: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1202FD05: shr edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> ((LO8(ecx)) & 31); /* 0x1202FD05: shr edi, cl */
L_1202FD07:
    eax = edi; /* 0x1202FD07: mov eax, edi */
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x1202FD09: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x1202FD09: shr eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1202FD0C: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + edi + 0xFFF; /* 0x1202FD0F: lea eax, [eax + edi + 0xfff] */
    goto L_1202FD27; /* 0x1202FD16: jmp 0x1202fd27 */
L_1202FD18:
    eax = ecx; /* 0x1202FD18: mov eax, ecx */
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x1202FD1A: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x1202FD1A: shr eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1202FD1D: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx + (-0x37FFF001); /* 0x1202FD20: lea eax, [eax + ecx - 0x37fff001] */
L_1202FD27:
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x1202FD27: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x1202FD27: shr eax, 0xd */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1202FD2A: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x1202FD2C: movzx eax, ax */
L_1202FD2F:
    MEM16(ebx + esi * 2) = (uint16_t)(LO16(eax)); /* 0x1202FD2F: mov word ptr [ebx + esi*2], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202FD33: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x1202FD34: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202FCB2; /* 0x1202FD37: jb 0x1202fcb2 */
L_1202FD3D:
    edi = POP32_VAL(esp); /* 0x1202FD3D: pop edi */
L_1202FD3E:
    esi = POP32_VAL(esp); /* 0x1202FD3E: pop esi */
    eax = ebx; /* 0x1202FD3F: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1202FD41: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1202FD42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202FD43: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202FD4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FD4Bu);

L_1202FD4B:
    edi = edi; /* 0x1202FD4B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FD4D: push ebp */
    ebp = esp; /* 0x1202FD4E: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1202FD50: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1202FD52: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202FD57: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA154)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1202FD63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FD63u);

L_1202FD63:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA154)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1202FD6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FD6Eu);

L_1202FD6E:
    edi = edi; /* 0x1202FD6E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FD70: push ebp */
    ebp = esp; /* 0x1202FD71: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1202FD73: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1202FD74: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1202FD76: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1202FD77: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1202FD7A: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1202FE08; /* 0x1202FD7D: jbe 0x1202fe08 */
L_1202FD83:
    PUSH32(esp, ebx); /* 0x1202FD83: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1202FD84: mov ebx, dword ptr [ebp + 0xc] */
L_1202FD87:
    eax = (uint32_t)MEM16(ebx + esi * 2); /* 0x1202FD87: movzx eax, word ptr [ebx + esi*2] */
    edx = eax; /* 0x1202FD8B: mov edx, eax */
    /* test edx, 0xFFFF7C00u */ /* 0x1202FD8D: test edx, 0xffff7c00 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF7C00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1202FDD9; /* 0x1202FD93: jne 0x1202fdd9 */
L_1202FD95:
    /* test eax, 0x3FFu */ /* 0x1202FD95: test eax, 0x3ff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202FDCE; /* 0x1202FD9A: je 0x1202fdce */
L_1202FD9C:
    PUSH32(esp, 0xFFFFFFF2u); /* 0x1202FD9C: push -0xe */
    ecx = POP32_VAL(esp); /* 0x1202FD9E: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x1202FD9F: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202FDA9; /* 0x1202FDA4: jmp 0x1202fda9 */
L_1202FDA6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1202FDA6: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1202FDA7: add eax, eax */
    _flag_k = FK_ADD;
L_1202FDA9:
    /* test eax, 0x400u */ /* 0x1202FDA9: test eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1202FDA6; /* 0x1202FDAE: je 0x1202fda6 */
L_1202FDB0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF8080u);
    edx = edx & 0xFFFF8080u; /* 0x1202FDB0: and edx, 0xffff8080 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x1202FDB6: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x1202FDB6: shl edx, 3 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1202FDB9: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFBFFu);
    edx = edx & 0xFFFFFBFFu; /* 0x1202FDBB: and edx, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x7F; /* 0x1202FDC1: lea eax, [ecx + 0x7f] */
    if (13u) _cf = (((edx) >> 19) & 1u); /* 0x1202FDC4: shl edx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 13u; /* 0x1202FDC4: shl edx, 0xd */
    if (23u) _cf = (((eax) >> 9) & 1u); /* 0x1202FDC7: shl eax, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((eax << 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 23u; /* 0x1202FDC7: shl eax, 0x17 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1202FDCA: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1202FDFE; /* 0x1202FDCC: jmp 0x1202fdfe */
L_1202FDCE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF8000u);
    edx = edx & 0xFFFF8000u; /* 0x1202FDCE: and edx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x1202FDD4: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x1202FDD4: shl edx, 0x10 */
    goto L_1202FDFE; /* 0x1202FDD7: jmp 0x1202fdfe */
L_1202FDD9:
    ecx = edx; /* 0x1202FDD9: mov ecx, edx */
    eax = edx; /* 0x1202FDDB: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF8000u);
    ecx = ecx & 0xFFFF8000u; /* 0x1202FDDD: and ecx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (10u) _cf = (((edx) >> 9) & 1u); /* 0x1202FDE3: shr edx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((edx >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 10u; /* 0x1202FDE3: shr edx, 0xa */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1202FDE6: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1202FDE6: shl ecx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1202FDE9: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x1202FDEC: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1202FDF1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x70u; /* 0x1202FDF3: add edx, 0x70 */
    _flag_k = FK_ADD;
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x1202FDF6: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x1202FDF6: shl ecx, 0xd */
    if (23u) _cf = (((edx) >> 9) & 1u); /* 0x1202FDF9: shl edx, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((edx << 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 23u; /* 0x1202FDF9: shl edx, 0x17 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x1202FDFC: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1202FDFE:
    MEM32(edi + esi * 4) = edx; /* 0x1202FDFE: mov dword ptr [edi + esi*4], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1202FE01: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x1202FE02: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1202FD87; /* 0x1202FE05: jb 0x1202fd87 */
L_1202FE07:
    ebx = POP32_VAL(esp); /* 0x1202FE07: pop ebx */
L_1202FE08:
    eax = edi; /* 0x1202FE08: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1202FE0A: pop edi */
    esi = POP32_VAL(esp); /* 0x1202FE0B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1202FE0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1202FE0D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1202FE15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FE15u);

L_1202FE15:
    edi = edi; /* 0x1202FE15: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FE17: push ebp */
    ebp = esp; /* 0x1202FE18: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1202FE1A: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1202FE1C: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202FE21: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA124)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1202FE2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FE2Du);

L_1202FE2D:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA124)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1202FE38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FE38u);

L_1202FE38:
    edi = edi; /* 0x1202FE38: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FE3A: push ebp */
    ebp = esp; /* 0x1202FE3B: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1202FE3D: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1202FE3F: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FE44: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x1202FE47: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1202FE48: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202FE4B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202FE4E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202FE51: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202FE54: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202FE57: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0B0)); /* 0x1202FE5A: call dword ptr [0x121ca0b0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202FE60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1202FE61: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1202FE69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FE69u);

L_1202FE69:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0B0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1202FE74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FE74u);

L_1202FE74:
    edi = edi; /* 0x1202FE74: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FE76: push ebp */
    ebp = esp; /* 0x1202FE77: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1202FE79: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FE7C: fld dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x1202FE7F: mov edx, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x1202FE82: fld st(0) */
    ecx = MEM32(ebp + 0x18); /* 0x1202FE84: mov ecx, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x1202FE87: fmul st(1) */
    PUSH32(esp, esi); /* 0x1202FE89: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1202FE8A: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1202FE8D: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1202FE8E: fstp dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0xC); /* 0x1202FE91: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FE94: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x1202FE97: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1202FE9A: fld st(0) */
    fp_push(_st[2]); /* 0x1202FE9C: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202FE9E: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1202FEA0: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FEA3: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x1202FEA6: fld st(0) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x1202FEA8: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x1202FEAE: fmul st(1), st(0) */
    fp_push(_st[3]); /* 0x1202FEB0: fld st(3) */
    _st[0] *= *(double*)ADDR(0x12001EA8); /* 0x1202FEB2: fmul qword ptr [0x12001ea8] */
    fp_push(_st[2]); /* 0x1202FEB8: fld st(2) */
    _st[0] -= _st[1]; /* 0x1202FEBA: fsub st(1) */
    _st[0] += *(double*)ADDR(0x120014E0); /* 0x1202FEBC: fadd qword ptr [0x120014e0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1202FEC2: fstp dword ptr [ebp + 0x1c] */
    fp_push(_st[3]); /* 0x1202FEC5: fld st(3) */
    fp_push(_st[5]); /* 0x1202FEC7: fld st(5) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1202FEC9: fmulp st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x1202FECB: fsubrp st(2) */
    fp_xch(1); /* 0x1202FECD: fxch st(1) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x1202FECF: faddp st(5) */
    fp_xch(4); /* 0x1202FED1: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1202FED3: fstp dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x1202FED6: fsubp st(3) */
    fp_xch(2); /* 0x1202FED8: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1202FEDA: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202FEDD: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1202FEDF: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1202FEE2: fld dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FEE4: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x1202FEE7: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202FEE9: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx)); /* 0x1202FEEB: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1202FEED: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1202FEF0: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202FEF2: fmulp st(2) */
    fp_xch(3); /* 0x1202FEF4: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202FEF6: faddp st(1) */
    fp_push(*(float*)&MEM32(esi)); /* 0x1202FEF8: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1202FEFA: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x1202FEFD: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202FEFF: fmulp st(2) */
    fp_xch(2); /* 0x1202FF01: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202FF03: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1202FF05: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1202FF07: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x1202FF0A: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202FF0C: fmulp st(2) */
    fp_xch(2); /* 0x1202FF0E: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202FF10: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1202FF12: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1202FF14: fld dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1202FF17: fmulp st(4) */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1202FF19: fld dword ptr [edi + 4] */
    edi = POP32_VAL(esp); /* 0x1202FF1C: pop edi */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1202FF1D: fmulp st(3) */
    fp_xch(3); /* 0x1202FF1F: fxch st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202FF21: faddp st(2) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x1202FF23: fmul dword ptr [esi + 4] */
    esi = POP32_VAL(esp); /* 0x1202FF26: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202FF27: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1202FF29: fld dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202FF2C: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1202FF2E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1202FF30: fstp dword ptr [eax + 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1202FF33: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1202FF34: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1202FF3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FF3Cu);

L_1202FF3C:
    edi = edi; /* 0x1202FF3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FF3E: push ebp */
    ebp = esp; /* 0x1202FF3F: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1202FF41: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1202FF43: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FF48: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x1202FF4B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1202FF4C: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1202FF4F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1202FF52: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1202FF55: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1202FF58: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1202FF5B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA128)); /* 0x1202FF5E: call dword ptr [0x121ca128] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1202FF64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1202FF65: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1202FF6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FF6Du);

L_1202FF6D:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA128)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1202FF78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1202FF78u);

L_1202FF78:
    edi = edi; /* 0x1202FF78: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1202FF7A: push ebp */
    ebp = esp; /* 0x1202FF7B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1202FF7D: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FF80: fld dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x1202FF83: mov edx, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x1202FF86: fld st(0) */
    ecx = MEM32(ebp + 0x18); /* 0x1202FF88: mov ecx, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x1202FF8B: fmul st(1) */
    PUSH32(esp, esi); /* 0x1202FF8D: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1202FF8E: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1202FF91: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1202FF92: fstp dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0xC); /* 0x1202FF95: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FF98: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x1202FF9B: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1202FF9E: fld st(0) */
    fp_push(_st[2]); /* 0x1202FFA0: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1202FFA2: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1202FFA4: fstp dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x1202FFA7: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FFA9: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x1202FFAC: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202FFAE: fsubp st(2) */
    fp_push(_st[2]); /* 0x1202FFB0: fld st(2) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1202FFB2: faddp st(2) */
    fp_push(_st[3]); /* 0x1202FFB4: fld st(3) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1202FFB6: fsubp st(2) */
    fp_xch(1); /* 0x1202FFB8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1202FFBA: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(double*)ADDR(0x12001EA8)); /* 0x1202FFBD: fld qword ptr [0x12001ea8] */
    _st[0] *= _st[1]; /* 0x1202FFC3: fmul st(1) */
    fp_push(_st[2]); /* 0x1202FFC5: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12005420); /* 0x1202FFC7: fmul qword ptr [0x12005420] */
    fp_push(_st[1]); /* 0x1202FFCD: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1202FFCF: fsubrp st(1) */
    _st[0] += *(double*)ADDR(0x12001758); /* 0x1202FFD1: fadd qword ptr [0x12001758] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1202FFD7: fstp dword ptr [ebp - 4] */
    fp_push(_st[2]); /* 0x1202FFDA: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12005418); /* 0x1202FFDC: fmul qword ptr [0x12005418] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1202FFE2: fsubrp st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1202FFE4: faddp st(3) */
    fp_xch(2); /* 0x1202FFE6: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1202FFE8: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1202FFEB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1202FFED: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1202FFF0: fld dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1202FFF2: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x1202FFF5: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1202FFF7: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx)); /* 0x1202FFF9: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1202FFFB: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1202FFFE: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030000: fmulp st(2) */
    fp_xch(3); /* 0x12030002: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030004: faddp st(1) */
    fp_push(*(float*)&MEM32(esi)); /* 0x12030006: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12030008: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x1203000B: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203000D: fmulp st(2) */
    fp_xch(2); /* 0x1203000F: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030011: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12030013: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12030015: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12030018: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203001A: fmulp st(2) */
    fp_xch(2); /* 0x1203001C: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203001E: faddp st(1) */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x12030020: fld qword ptr [0x120014c0] */
    _st[1] *= _st[0]; /* 0x12030026: fmul st(1), st(0) */
    fp_xch(1); /* 0x12030028: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1203002A: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1203002C: fld dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x1203002F: fmulp st(5) */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x12030031: fld dword ptr [edi + 4] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12030034: fmulp st(4) */
    fp_xch(4); /* 0x12030036: fxch st(4) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12030038: faddp st(3) */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203003A: fld dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203003D: fmulp st(2) */
    fp_xch(2); /* 0x1203003F: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030041: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12030043: fld dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030046: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030048: faddp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203004A: fmulp st(1) */
    edi = POP32_VAL(esp); /* 0x1203004C: pop edi */
    esi = POP32_VAL(esp); /* 0x1203004D: pop esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1203004E: fstp dword ptr [eax + 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12030051: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030052: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1203005A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203005Au);

L_1203005A:
    edi = edi; /* 0x1203005A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203005C: push ebp */
    ebp = esp; /* 0x1203005D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203005F: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030061: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030066: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x12030069: push ecx */
    PUSH32(esp, ecx); /* 0x1203006A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1203006B: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x1203006F: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12030072: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12030075: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12030078: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1203007B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1203007E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA12C)); /* 0x12030081: call dword ptr [0x121ca12c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030087: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030088: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030090u);

L_12030090:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA12C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203009B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203009Bu);

L_1203009B:
    edi = edi; /* 0x1203009B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203009D: push ebp */
    ebp = esp; /* 0x1203009E: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x120300A0: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x120300A3: fld dword ptr [edx] */
    ecx = MEM32(ebp + 0x14); /* 0x120300A5: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120300A8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120300AB: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120300AC: mov esi, dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x120300AF: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x120300B1: fld dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x120300B4: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120300B6: fmulp st(2) */
    fp_push(*(float*)&MEM32(esi)); /* 0x120300B8: fld dword ptr [esi] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120300BA: faddp st(2) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120300BC: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x120300BE: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120300C0: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x120300C3: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120300C5: fmulp st(2) */
    fp_xch(3); /* 0x120300C7: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120300C9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120300CB: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x120300CD: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x120300D0: fsub dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120300D3: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(esi + 0x4); /* 0x120300D5: fadd dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120300D8: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x120300DB: fsub dword ptr [esi + 4] */
    esi = POP32_VAL(esp); /* 0x120300DE: pop esi */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120300DF: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120300E1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120300E3: fstp dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x120300E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120300E7: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120300EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120300EFu);

L_120300EF:
    edi = edi; /* 0x120300EF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120300F1: push ebp */
    ebp = esp; /* 0x120300F2: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120300F4: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120300F6: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120300FB: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA068)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030107(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030107u);

L_12030107:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA068)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030112(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030112u);

L_12030112:
    edi = edi; /* 0x12030112: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030114: push ebp */
    ebp = esp; /* 0x12030115: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030117: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030119: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203011E: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA158)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203012A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203012Au);

L_1203012A:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA158)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030135(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030135u);

L_12030135:
    edi = edi; /* 0x12030135: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030137: push ebp */
    ebp = esp; /* 0x12030138: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203013A: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203013C: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030141: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA08C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203014D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203014Du);

L_1203014D:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA08C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030158(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030158u);

L_12030158:
    edi = edi; /* 0x12030158: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203015A: push ebp */
    ebp = esp; /* 0x1203015B: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203015D: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203015F: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030164: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA15C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030170u);

L_12030170:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA15C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203017B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203017Bu);

L_1203017B:
    edi = edi; /* 0x1203017B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203017D: push ebp */
    ebp = esp; /* 0x1203017E: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030180: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030182: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030187: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA07C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030193(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030193u);

L_12030193:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA07C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203019E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203019Eu);

L_1203019E:
    edi = edi; /* 0x1203019E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120301A0: push ebp */
    ebp = esp; /* 0x120301A1: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120301A3: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120301A5: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120301AA: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA160)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120301B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120301B6u);

L_120301B6:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA160)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120301C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120301C1u);

L_120301C1:
    edi = edi; /* 0x120301C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120301C3: push ebp */
    ebp = esp; /* 0x120301C4: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120301C6: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120301C8: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120301CD: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA084)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120301D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120301D9u);

L_120301D9:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA084)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120301E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120301E4u);

L_120301E4:
    edi = edi; /* 0x120301E4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120301E6: push ebp */
    ebp = esp; /* 0x120301E7: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120301E9: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120301EB: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120301F0: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x120301F3: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120301F4: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120301F7: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120301FA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120301FD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12030200: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12030203: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA130)); /* 0x12030206: call dword ptr [0x121ca130] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203020C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1203020D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030215(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030215u);

L_12030215:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA130)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030220u);

L_12030220:
    edi = edi; /* 0x12030220: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030222: push ebp */
    ebp = esp; /* 0x12030223: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12030225: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030228: fld dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x1203022B: mov edx, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x1203022E: fld st(0) */
    ecx = MEM32(ebp + 0x18); /* 0x12030230: mov ecx, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x12030233: fmul st(1) */
    PUSH32(esp, esi); /* 0x12030235: push esi */
    esi = MEM32(ebp + 0x14); /* 0x12030236: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12030239: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1203023A: fstp dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0xC); /* 0x1203023D: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030240: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x12030243: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12030246: fld st(0) */
    fp_push(_st[2]); /* 0x12030248: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203024A: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1203024C: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1203024F: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12030252: fld st(0) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x12030254: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x1203025A: fmul st(1), st(0) */
    fp_push(_st[3]); /* 0x1203025C: fld st(3) */
    _st[0] *= *(double*)ADDR(0x12001EA8); /* 0x1203025E: fmul qword ptr [0x12001ea8] */
    fp_push(_st[2]); /* 0x12030264: fld st(2) */
    _st[0] -= _st[1]; /* 0x12030266: fsub st(1) */
    _st[0] += *(double*)ADDR(0x120014E0); /* 0x12030268: fadd qword ptr [0x120014e0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1203026E: fstp dword ptr [ebp + 0x1c] */
    fp_push(_st[3]); /* 0x12030271: fld st(3) */
    fp_push(_st[5]); /* 0x12030273: fld st(5) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12030275: fmulp st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12030277: fsubrp st(2) */
    fp_xch(1); /* 0x12030279: fxch st(1) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x1203027B: faddp st(5) */
    fp_xch(4); /* 0x1203027D: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1203027F: fstp dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x12030282: fsubp st(3) */
    fp_xch(2); /* 0x12030284: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12030286: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030289: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1203028B: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1203028E: fld dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030290: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12030293: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030295: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx)); /* 0x12030297: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12030299: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1203029C: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203029E: fmulp st(2) */
    fp_xch(3); /* 0x120302A0: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120302A2: faddp st(1) */
    fp_push(*(float*)&MEM32(esi)); /* 0x120302A4: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120302A6: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x120302A9: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120302AB: fmulp st(2) */
    fp_xch(2); /* 0x120302AD: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120302AF: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120302B1: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120302B3: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x120302B6: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120302B8: fmulp st(2) */
    fp_xch(2); /* 0x120302BA: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120302BC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120302BE: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x120302C0: fld dword ptr [edx + 4] */
    fp_push(_st[4]); /* 0x120302C3: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120302C5: fmulp st(1) */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x120302C7: fld dword ptr [edi + 4] */
    fp_push(_st[4]); /* 0x120302CA: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120302CC: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120302CE: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120302D0: fld dword ptr [esi + 4] */
    fp_push(_st[3]); /* 0x120302D3: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120302D5: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120302D7: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120302D9: fld dword ptr [ecx + 4] */
    fp_push(_st[2]); /* 0x120302DC: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120302DE: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120302E0: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120302E2: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x120302E5: fld dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120302E8: fmulp st(4) */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x120302EA: fld dword ptr [edi + 8] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120302ED: fmulp st(3) */
    edi = POP32_VAL(esp); /* 0x120302EF: pop edi */
    fp_xch(3); /* 0x120302F0: fxch st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120302F2: faddp st(2) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x120302F4: fmul dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x120302F7: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120302F8: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120302FA: fld dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120302FD: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120302FF: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12030301: fstp dword ptr [eax + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12030304: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030305: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1203030D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203030Du);

L_1203030D:
    edi = edi; /* 0x1203030D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203030F: push ebp */
    ebp = esp; /* 0x12030310: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030312: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030314: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030319: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x1203031C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1203031D: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12030320: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12030323: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12030326: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12030329: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1203032C: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA134)); /* 0x1203032F: call dword ptr [0x121ca134] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030335: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030336: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1203033E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203033Eu);

L_1203033E:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA134)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030349(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030349u);

L_12030349:
    edi = edi; /* 0x12030349: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203034B: push ebp */
    ebp = esp; /* 0x1203034C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1203034E: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030351: fld dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x12030354: mov edx, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x12030357: fld st(0) */
    ecx = MEM32(ebp + 0x18); /* 0x12030359: mov ecx, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x1203035C: fmul st(1) */
    PUSH32(esp, esi); /* 0x1203035E: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1203035F: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12030362: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12030363: fstp dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0xC); /* 0x12030366: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030369: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x1203036C: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1203036F: fld st(0) */
    fp_push(_st[2]); /* 0x12030371: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030373: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12030375: fstp dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12030378: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1203037A: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x1203037D: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1203037F: fsubp st(2) */
    fp_push(_st[2]); /* 0x12030381: fld st(2) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12030383: faddp st(2) */
    fp_push(_st[3]); /* 0x12030385: fld st(3) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12030387: fsubp st(2) */
    fp_xch(1); /* 0x12030389: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1203038B: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(double*)ADDR(0x12001EA8)); /* 0x1203038E: fld qword ptr [0x12001ea8] */
    _st[0] *= _st[1]; /* 0x12030394: fmul st(1) */
    fp_push(_st[2]); /* 0x12030396: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12005420); /* 0x12030398: fmul qword ptr [0x12005420] */
    fp_push(_st[1]); /* 0x1203039E: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120303A0: fsubrp st(1) */
    _st[0] += *(double*)ADDR(0x12001758); /* 0x120303A2: fadd qword ptr [0x12001758] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120303A8: fstp dword ptr [ebp - 4] */
    fp_push(_st[2]); /* 0x120303AB: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12005418); /* 0x120303AD: fmul qword ptr [0x12005418] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120303B3: fsubrp st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120303B5: faddp st(3) */
    fp_xch(2); /* 0x120303B7: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120303B9: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120303BC: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120303BE: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x120303C1: fld dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120303C3: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x120303C6: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120303C8: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx)); /* 0x120303CA: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120303CC: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x120303CF: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120303D1: fmulp st(2) */
    fp_xch(3); /* 0x120303D3: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120303D5: faddp st(1) */
    fp_push(*(float*)&MEM32(esi)); /* 0x120303D7: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120303D9: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x120303DC: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120303DE: fmulp st(2) */
    fp_xch(2); /* 0x120303E0: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120303E2: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120303E4: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120303E6: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x120303E9: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120303EB: fmulp st(2) */
    fp_xch(2); /* 0x120303ED: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120303EF: faddp st(1) */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120303F1: fld qword ptr [0x120014c0] */
    _st[1] *= _st[0]; /* 0x120303F7: fmul st(1), st(0) */
    fp_xch(1); /* 0x120303F9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120303FB: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x120303FD: fld dword ptr [edx + 4] */
    fp_push(_st[5]); /* 0x12030400: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030402: fmulp st(1) */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x12030404: fld dword ptr [edi + 4] */
    fp_push(_st[5]); /* 0x12030407: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030409: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203040B: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203040D: fld dword ptr [esi + 4] */
    fp_push(_st[4]); /* 0x12030410: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030412: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030414: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12030416: fld dword ptr [ecx + 4] */
    fp_push(_st[3]); /* 0x12030419: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203041B: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203041D: faddp st(1) */
    _st[0] *= _st[1]; /* 0x1203041F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12030421: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12030424: fld dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x12030427: fmulp st(5) */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12030429: fld dword ptr [edi + 8] */
    edi = POP32_VAL(esp); /* 0x1203042C: pop edi */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1203042D: fmulp st(4) */
    fp_xch(4); /* 0x1203042F: fxch st(4) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12030431: faddp st(3) */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12030433: fld dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x12030436: pop esi */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030437: fmulp st(2) */
    fp_xch(2); /* 0x12030439: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203043B: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1203043D: fld dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030440: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030442: faddp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030444: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12030446: fstp dword ptr [eax + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12030449: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1203044A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030452(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030452u);

L_12030452:
    edi = edi; /* 0x12030452: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030454: push ebp */
    ebp = esp; /* 0x12030455: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030457: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030459: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1203045E: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x12030461: push ecx */
    PUSH32(esp, ecx); /* 0x12030462: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12030463: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12030467: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1203046A: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1203046D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12030470: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12030473: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12030476: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA138)); /* 0x12030479: call dword ptr [0x121ca138] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203047F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030480: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030488(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030488u);

L_12030488:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA138)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030493(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030493u);

L_12030493:
    edi = edi; /* 0x12030493: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030495: push ebp */
    ebp = esp; /* 0x12030496: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x12030498: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1203049B: fld dword ptr [edx] */
    ecx = MEM32(ebp + 0x14); /* 0x1203049D: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120304A0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120304A3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120304A4: mov esi, dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x120304A7: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x120304A9: fld dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x120304AC: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120304AE: fmulp st(2) */
    fp_push(*(float*)&MEM32(esi)); /* 0x120304B0: fld dword ptr [esi] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120304B2: faddp st(2) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120304B4: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x120304B6: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120304B8: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x120304BB: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120304BD: fmulp st(2) */
    fp_xch(3); /* 0x120304BF: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120304C1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120304C3: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x120304C5: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x120304C8: fsub dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x120304CB: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120304CD: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(esi + 0x4); /* 0x120304CF: fadd dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120304D2: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x120304D5: fsub dword ptr [esi + 4] */
    fp_push(_st[3]); /* 0x120304D8: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120304DA: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120304DC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120304DE: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x120304E1: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x120304E4: fsub dword ptr [esi + 8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120304E7: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(esi + 0x8); /* 0x120304E9: fadd dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120304EC: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x120304EF: fsub dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x120304F2: pop esi */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120304F3: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120304F5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x120304F7: fstp dword ptr [eax + 8] */
    ebp = POP32_VAL(esp); /* 0x120304FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120304FB: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030503(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030503u);

L_12030503:
    edi = edi; /* 0x12030503: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030505: push ebp */
    ebp = esp; /* 0x12030506: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030508: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203050A: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203050F: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA06C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203051B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203051Bu);

L_1203051B:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA06C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030526(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030526u);

L_12030526:
    edi = edi; /* 0x12030526: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030528: push ebp */
    ebp = esp; /* 0x12030529: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203052B: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203052D: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030532: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA164)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203053E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203053Eu);

L_1203053E:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA164)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030549(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030549u);

L_12030549:
    edi = edi; /* 0x12030549: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203054B: push ebp */
    ebp = esp; /* 0x1203054C: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203054E: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030550: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030555: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA090)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030561(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030561u);

L_12030561:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA090)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203056C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203056Cu);

L_1203056C:
    edi = edi; /* 0x1203056C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203056E: push ebp */
    ebp = esp; /* 0x1203056F: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030571: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030573: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030578: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA168)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030584(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030584u);

L_12030584:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA168)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203058F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203058Fu);

L_1203058F:
    edi = edi; /* 0x1203058F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030591: push ebp */
    ebp = esp; /* 0x12030592: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030594: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030596: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203059B: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA080)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
